// Lean compiler output
// Module: Lean.DocString.Add
// Imports: import Lean.Elab.DocString public import Lean.DocString.Parser public import Lean.Elab.Term.TermElabM
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
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Doc_elabModSnippet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_execForModule___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_getMainVersoModuleDocs(lean_object*);
lean_object* l_Lean_VersoModuleDocs_terminalNesting(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_getMainModuleDoc(lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_addVersoModuleDocSnippet(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getDocString(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo_x3f(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_rewriteManualLinksCore(lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Doc_Parser_BlockCtxt_forDocString(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_document(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_Parser_block(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_doc_verso;
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_docStringExt;
lean_object* l_String_removeLeadingSpaces(lean_object*);
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Doc_elabBlocks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Doc_DocM_exec___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_versoDocStringExt;
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FileMap_ofString(lean_object*);
lean_object* l_Lean_Core_getAndEmptyMessageLog___redArg(lean_object*);
lean_object* l_Lean_Core_setMessageLog___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MessageLog_toArray(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getDocStringText___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_setEnv___redArg(lean_object*, lean_object*);
lean_object* l_Lean_findInternalDocString_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_removeBuiltinDocString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__0;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__0;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___lam__11___closed__1;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___closed__0;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___closed__1;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___closed__2;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___closed__3;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___closed__4;
static lean_once_cell_t l_Lean_parseVersoDocString___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0;
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1;
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2;
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3;
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4;
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5;
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6;
static lean_once_cell_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7;
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_versoDocString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocString___closed__0;
static lean_once_cell_t l_Lean_versoDocString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocString___closed__1;
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_versoDocStringFromString___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocStringFromString___closed__0;
static lean_once_cell_t l_Lean_versoDocStringFromString___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocStringFromString___closed__1;
static lean_once_cell_t l_Lean_versoDocStringFromString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocStringFromString___closed__2;
static lean_once_cell_t l_Lean_versoDocStringFromString___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocStringFromString___closed__3;
static lean_once_cell_t l_Lean_versoDocStringFromString___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocStringFromString___closed__4;
static lean_once_cell_t l_Lean_versoDocStringFromString___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocStringFromString___closed__5;
static lean_once_cell_t l_Lean_versoDocStringFromString___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_versoDocStringFromString___closed__6;
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__0;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__1;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__2;
static lean_once_cell_t l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___closed__3;
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0;
static lean_once_cell_t l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2;
static lean_once_cell_t l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0;
static lean_once_cell_t l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__0;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__1;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__2;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__3;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__4;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__5;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__6;
static lean_once_cell_t l_Lean_makeDocStringVerso___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_makeDocStringVerso___closed__7;
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__0(lean_object* v_toPure_1_, lean_object* v_____s_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_apply_2(v_toPure_1_, lean_box(0), v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__1(lean_object* v___x_5_, lean_object* v_toPure_6_, lean_object* v_r_7_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_5_);
v___x_9_ = lean_apply_2(v_toPure_6_, lean_box(0), v___x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3(lean_object* v___y_10_, lean_object* v_str_11_, lean_object* v_inst_12_, lean_object* v_inst_13_, lean_object* v_inst_14_, lean_object* v_inst_15_, lean_object* v_toBind_16_, lean_object* v___f_17_, lean_object* v___f_18_, lean_object* v_a_19_, lean_object* v_x_20_, lean_object* v___y_21_){
_start:
{
lean_object* v_fst_22_; 
v_fst_22_ = lean_ctor_get(v_a_19_, 0);
lean_inc(v_fst_22_);
if (lean_obj_tag(v___y_10_) == 1)
{
lean_object* v_snd_23_; lean_object* v_start_24_; lean_object* v_stop_25_; lean_object* v___x_27_; uint8_t v_isShared_28_; uint8_t v_isSharedCheck_48_; 
lean_dec(v___f_18_);
v_snd_23_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_23_);
lean_dec_ref(v_a_19_);
v_start_24_ = lean_ctor_get(v_fst_22_, 0);
v_stop_25_ = lean_ctor_get(v_fst_22_, 1);
v_isSharedCheck_48_ = !lean_is_exclusive(v_fst_22_);
if (v_isSharedCheck_48_ == 0)
{
v___x_27_ = v_fst_22_;
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
else
{
lean_inc(v_stop_25_);
lean_inc(v_start_24_);
lean_dec(v_fst_22_);
v___x_27_ = lean_box(0);
v_isShared_28_ = v_isSharedCheck_48_;
goto v_resetjp_26_;
}
v_resetjp_26_:
{
lean_object* v_val_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_47_; 
v_val_29_ = lean_ctor_get(v___y_10_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___y_10_);
if (v_isSharedCheck_47_ == 0)
{
v___x_31_ = v___y_10_;
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_val_29_);
lean_dec(v___y_10_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_47_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_33_; lean_object* v___x_34_; uint8_t v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_39_; 
v___x_33_ = lean_nat_add(v_val_29_, v_start_24_);
v___x_34_ = lean_nat_add(v_val_29_, v_stop_25_);
lean_dec(v_val_29_);
v___x_35_ = 0;
v___x_36_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_36_, 0, v___x_33_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set_uint8(v___x_36_, sizeof(void*)*2, v___x_35_);
v___x_37_ = lean_string_utf8_extract(v_str_11_, v_start_24_, v_stop_25_);
lean_dec(v_stop_25_);
lean_dec(v_start_24_);
if (v_isShared_28_ == 0)
{
lean_ctor_set_tag(v___x_27_, 2);
lean_ctor_set(v___x_27_, 1, v___x_37_);
lean_ctor_set(v___x_27_, 0, v___x_36_);
v___x_39_ = v___x_27_;
goto v_reusejp_38_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_36_);
lean_ctor_set(v_reuseFailAlloc_46_, 1, v___x_37_);
v___x_39_ = v_reuseFailAlloc_46_;
goto v_reusejp_38_;
}
v_reusejp_38_:
{
lean_object* v___x_41_; 
if (v_isShared_32_ == 0)
{
lean_ctor_set_tag(v___x_31_, 3);
lean_ctor_set(v___x_31_, 0, v_snd_23_);
v___x_41_ = v___x_31_;
goto v_reusejp_40_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_snd_23_);
v___x_41_ = v_reuseFailAlloc_45_;
goto v_reusejp_40_;
}
v_reusejp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = l_Lean_MessageData_ofFormat(v___x_41_);
v___x_43_ = l_Lean_logErrorAt___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_39_, v___x_42_);
v___x_44_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_43_, v___f_17_);
return v___x_44_;
}
}
}
}
}
else
{
lean_object* v_snd_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
lean_dec(v_fst_22_);
lean_dec(v___f_17_);
lean_dec(v___y_10_);
v_snd_49_ = lean_ctor_get(v_a_19_, 1);
lean_inc(v_snd_49_);
lean_dec_ref(v_a_19_);
v___x_50_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_50_, 0, v_snd_49_);
v___x_51_ = l_Lean_MessageData_ofFormat(v___x_50_);
v___x_52_ = l_Lean_logError___redArg(v_inst_12_, v_inst_13_, v_inst_14_, v_inst_15_, v___x_51_);
v___x_53_ = lean_apply_4(v_toBind_16_, lean_box(0), lean_box(0), v___x_52_, v___f_18_);
return v___x_53_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__3___boxed(lean_object* v___y_54_, lean_object* v_str_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_inst_58_, lean_object* v_inst_59_, lean_object* v_toBind_60_, lean_object* v___f_61_, lean_object* v___f_62_, lean_object* v_a_63_, lean_object* v_x_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_validateDocComment___redArg___lam__3(v___y_54_, v_str_55_, v_inst_56_, v_inst_57_, v_inst_58_, v_inst_59_, v_toBind_60_, v___f_61_, v___f_62_, v_a_63_, v_x_64_, v___y_65_);
lean_dec_ref(v_str_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___lam__2(lean_object* v_toPure_67_, lean_object* v___y_68_, lean_object* v_str_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_inst_72_, lean_object* v_inst_73_, lean_object* v_toBind_74_, lean_object* v___f_75_, lean_object* v_____x_76_){
_start:
{
lean_object* v_fst_77_; lean_object* v___x_78_; lean_object* v___f_79_; lean_object* v___f_80_; size_t v_sz_81_; size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v_fst_77_ = lean_ctor_get(v_____x_76_, 0);
lean_inc(v_fst_77_);
lean_dec_ref(v_____x_76_);
v___x_78_ = lean_box(0);
v___f_79_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__1), 3, 2);
lean_closure_set(v___f_79_, 0, v___x_78_);
lean_closure_set(v___f_79_, 1, v_toPure_67_);
lean_inc_ref(v___f_79_);
lean_inc(v_toBind_74_);
lean_inc_ref(v_inst_70_);
v___f_80_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__3___boxed), 12, 9);
lean_closure_set(v___f_80_, 0, v___y_68_);
lean_closure_set(v___f_80_, 1, v_str_69_);
lean_closure_set(v___f_80_, 2, v_inst_70_);
lean_closure_set(v___f_80_, 3, v_inst_71_);
lean_closure_set(v___f_80_, 4, v_inst_72_);
lean_closure_set(v___f_80_, 5, v_inst_73_);
lean_closure_set(v___f_80_, 6, v_toBind_74_);
lean_closure_set(v___f_80_, 7, v___f_79_);
lean_closure_set(v___f_80_, 8, v___f_79_);
v_sz_81_ = lean_array_size(v_fst_77_);
v___x_82_ = ((size_t)0ULL);
v___x_83_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_70_, v_fst_77_, v___f_80_, v_sz_81_, v___x_82_, v___x_78_);
v___x_84_ = lean_apply_4(v_toBind_74_, lean_box(0), lean_box(0), v___x_83_, v___f_75_);
return v___x_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg(lean_object* v_inst_85_, lean_object* v_inst_86_, lean_object* v_inst_87_, lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_docstring_90_){
_start:
{
lean_object* v_toApplicative_91_; lean_object* v_toBind_92_; lean_object* v_toPure_93_; lean_object* v_str_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___y_100_; 
v_toApplicative_91_ = lean_ctor_get(v_inst_85_, 0);
v_toBind_92_ = lean_ctor_get(v_inst_85_, 1);
lean_inc(v_toBind_92_);
v_toPure_93_ = lean_ctor_get(v_toApplicative_91_, 1);
lean_inc_n(v_toPure_93_, 2);
v_str_94_ = l_Lean_TSyntax_getDocString(v_docstring_90_);
v___x_95_ = lean_unsigned_to_nat(1u);
v___x_96_ = l_Lean_Syntax_getArg(v_docstring_90_, v___x_95_);
v___x_97_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_96_);
lean_dec(v___x_96_);
v___f_98_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__0), 2, 1);
lean_closure_set(v___f_98_, 0, v_toPure_93_);
if (lean_obj_tag(v___x_97_) == 0)
{
lean_object* v___x_106_; 
v___x_106_ = lean_box(0);
v___y_100_ = v___x_106_;
goto v___jp_99_;
}
else
{
lean_object* v_val_107_; uint8_t v___x_108_; lean_object* v___x_109_; 
v_val_107_ = lean_ctor_get(v___x_97_, 0);
lean_inc(v_val_107_);
lean_dec_ref(v___x_97_);
v___x_108_ = 0;
v___x_109_ = l_Lean_SourceInfo_getPos_x3f(v_val_107_, v___x_108_);
lean_dec(v_val_107_);
v___y_100_ = v___x_109_;
goto v___jp_99_;
}
v___jp_99_:
{
lean_object* v___f_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
lean_inc(v_toBind_92_);
lean_inc_ref(v_str_94_);
v___f_101_ = lean_alloc_closure((void*)(l_Lean_validateDocComment___redArg___lam__2), 10, 9);
lean_closure_set(v___f_101_, 0, v_toPure_93_);
lean_closure_set(v___f_101_, 1, v___y_100_);
lean_closure_set(v___f_101_, 2, v_str_94_);
lean_closure_set(v___f_101_, 3, v_inst_85_);
lean_closure_set(v___f_101_, 4, v_inst_87_);
lean_closure_set(v___f_101_, 5, v_inst_88_);
lean_closure_set(v___f_101_, 6, v_inst_89_);
lean_closure_set(v___f_101_, 7, v_toBind_92_);
lean_closure_set(v___f_101_, 8, v___f_98_);
v___x_102_ = l_Lean_rewriteManualLinksCore(v_str_94_);
v___x_103_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_103_, 0, lean_box(0));
lean_closure_set(v___x_103_, 1, lean_box(0));
lean_closure_set(v___x_103_, 2, v___x_102_);
v___x_104_ = lean_apply_2(v_inst_86_, lean_box(0), v___x_103_);
v___x_105_ = lean_apply_4(v_toBind_92_, lean_box(0), lean_box(0), v___x_104_, v___f_101_);
return v___x_105_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___redArg___boxed(lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_inst_113_, lean_object* v_inst_114_, lean_object* v_docstring_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = l_Lean_validateDocComment___redArg(v_inst_110_, v_inst_111_, v_inst_112_, v_inst_113_, v_inst_114_, v_docstring_115_);
lean_dec(v_docstring_115_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment(lean_object* v_m_117_, lean_object* v_inst_118_, lean_object* v_inst_119_, lean_object* v_inst_120_, lean_object* v_inst_121_, lean_object* v_inst_122_, lean_object* v_docstring_123_){
_start:
{
lean_object* v___x_124_; 
v___x_124_ = l_Lean_validateDocComment___redArg(v_inst_118_, v_inst_119_, v_inst_120_, v_inst_121_, v_inst_122_, v_docstring_123_);
return v___x_124_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___boxed(lean_object* v_m_125_, lean_object* v_inst_126_, lean_object* v_inst_127_, lean_object* v_inst_128_, lean_object* v_inst_129_, lean_object* v_inst_130_, lean_object* v_docstring_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_validateDocComment(v_m_125_, v_inst_126_, v_inst_127_, v_inst_128_, v_inst_129_, v_inst_130_, v_docstring_131_);
lean_dec(v_docstring_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__0(lean_object* v_toApplicative_133_, lean_object* v_____s_134_){
_start:
{
lean_object* v_toPure_135_; lean_object* v___x_136_; lean_object* v___x_137_; 
v_toPure_135_ = lean_ctor_get(v_toApplicative_133_, 1);
lean_inc(v_toPure_135_);
lean_dec_ref(v_toApplicative_133_);
v___x_136_ = lean_box(0);
v___x_137_ = lean_apply_2(v_toPure_135_, lean_box(0), v___x_136_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__1(lean_object* v_toApplicative_138_, lean_object* v_____r_139_){
_start:
{
lean_object* v_toPure_140_; lean_object* v___x_141_; lean_object* v___x_142_; 
v_toPure_140_ = lean_ctor_get(v_toApplicative_138_, 1);
lean_inc(v_toPure_140_);
lean_dec_ref(v_toApplicative_138_);
v___x_141_ = lean_box(0);
v___x_142_ = lean_apply_2(v_toPure_140_, lean_box(0), v___x_141_);
return v___x_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__2(lean_object* v_toApplicative_143_, lean_object* v___x_144_, lean_object* v_____r_145_){
_start:
{
lean_object* v_toPure_146_; lean_object* v___x_147_; lean_object* v___x_148_; 
v_toPure_146_ = lean_ctor_get(v_toApplicative_143_, 1);
lean_inc(v_toPure_146_);
lean_dec_ref(v_toApplicative_143_);
v___x_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_147_, 0, v___x_144_);
v___x_148_ = lean_apply_2(v_toPure_146_, lean_box(0), v___x_147_);
return v___x_148_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_mk_string_unchecked("", 0, 0);
return v___x_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3(lean_object* v_text_150_, lean_object* v_fst_151_, lean_object* v_snd_152_, uint8_t v___x_153_, lean_object* v_logMessage_154_, lean_object* v_toBind_155_, lean_object* v___f_156_, lean_object* v_____do__lift_157_){
_start:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_158_ = l_Lean_FileMap_toPosition(v_text_150_, v_fst_151_);
v___x_159_ = lean_box(0);
v___x_160_ = 2;
v___x_161_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__3___closed__0, &l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0);
v___x_162_ = l_Lean_Parser_Error_toString(v_snd_152_);
v___x_163_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
v___x_164_ = l_Lean_MessageData_ofFormat(v___x_163_);
v___x_165_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_165_, 0, v_____do__lift_157_);
lean_ctor_set(v___x_165_, 1, v___x_158_);
lean_ctor_set(v___x_165_, 2, v___x_159_);
lean_ctor_set(v___x_165_, 3, v___x_161_);
lean_ctor_set(v___x_165_, 4, v___x_164_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5, v___x_153_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5 + 1, v___x_160_);
lean_ctor_set_uint8(v___x_165_, sizeof(void*)*5 + 2, v___x_153_);
v___x_166_ = lean_apply_1(v_logMessage_154_, v___x_165_);
v___x_167_ = lean_apply_4(v_toBind_155_, lean_box(0), lean_box(0), v___x_166_, v___f_156_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__3___boxed(lean_object* v_text_168_, lean_object* v_fst_169_, lean_object* v_snd_170_, lean_object* v___x_171_, lean_object* v_logMessage_172_, lean_object* v_toBind_173_, lean_object* v___f_174_, lean_object* v_____do__lift_175_){
_start:
{
uint8_t v___x_1932__boxed_176_; lean_object* v_res_177_; 
v___x_1932__boxed_176_ = lean_unbox(v___x_171_);
v_res_177_ = l_Lean_parseVersoDocString___redArg___lam__3(v_text_168_, v_fst_169_, v_snd_170_, v___x_1932__boxed_176_, v_logMessage_172_, v_toBind_173_, v___f_174_, v_____do__lift_175_);
lean_dec(v_fst_169_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4(lean_object* v_text_178_, uint8_t v___x_179_, lean_object* v_logMessage_180_, lean_object* v_toBind_181_, lean_object* v___f_182_, lean_object* v_getFileName_183_, lean_object* v_a_184_, lean_object* v_x_185_, lean_object* v___y_186_){
_start:
{
lean_object* v_snd_187_; lean_object* v_fst_188_; lean_object* v_snd_189_; lean_object* v___x_190_; lean_object* v___f_191_; lean_object* v___x_192_; 
v_snd_187_ = lean_ctor_get(v_a_184_, 1);
lean_inc(v_snd_187_);
v_fst_188_ = lean_ctor_get(v_a_184_, 0);
lean_inc(v_fst_188_);
lean_dec_ref(v_a_184_);
v_snd_189_ = lean_ctor_get(v_snd_187_, 1);
lean_inc(v_snd_189_);
lean_dec(v_snd_187_);
v___x_190_ = lean_box(v___x_179_);
lean_inc(v_toBind_181_);
v___f_191_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__3___boxed), 8, 7);
lean_closure_set(v___f_191_, 0, v_text_178_);
lean_closure_set(v___f_191_, 1, v_fst_188_);
lean_closure_set(v___f_191_, 2, v_snd_189_);
lean_closure_set(v___f_191_, 3, v___x_190_);
lean_closure_set(v___f_191_, 4, v_logMessage_180_);
lean_closure_set(v___f_191_, 5, v_toBind_181_);
lean_closure_set(v___f_191_, 6, v___f_182_);
v___x_192_ = lean_apply_4(v_toBind_181_, lean_box(0), lean_box(0), v_getFileName_183_, v___f_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__4___boxed(lean_object* v_text_193_, lean_object* v___x_194_, lean_object* v_logMessage_195_, lean_object* v_toBind_196_, lean_object* v___f_197_, lean_object* v_getFileName_198_, lean_object* v_a_199_, lean_object* v_x_200_, lean_object* v___y_201_){
_start:
{
uint8_t v___x_1966__boxed_202_; lean_object* v_res_203_; 
v___x_1966__boxed_202_ = lean_unbox(v___x_194_);
v_res_203_ = l_Lean_parseVersoDocString___redArg___lam__4(v_text_193_, v___x_1966__boxed_202_, v_logMessage_195_, v_toBind_196_, v___f_197_, v_getFileName_198_, v_a_199_, v_x_200_, v___y_201_);
return v_res_203_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__0(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_mk_string_unchecked("unexpected '", 12, 12);
return v___x_204_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_205_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5(lean_object* v_text_206_, lean_object* v_pos_207_, lean_object* v_source_208_, uint8_t v___x_209_, lean_object* v_logMessage_210_, lean_object* v_toBind_211_, lean_object* v___f_212_, lean_object* v_____do__lift_213_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; uint32_t v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_214_ = l_Lean_FileMap_toPosition(v_text_206_, v_pos_207_);
v___x_215_ = lean_box(0);
v___x_216_ = 2;
v___x_217_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__3___closed__0, &l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0);
v___x_218_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__5___closed__0, &l_Lean_parseVersoDocString___redArg___lam__5___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__0);
v___x_219_ = lean_string_utf8_get(v_source_208_, v_pos_207_);
v___x_220_ = lean_string_push(v___x_217_, v___x_219_);
v___x_221_ = lean_string_append(v___x_218_, v___x_220_);
lean_dec_ref(v___x_220_);
v___x_222_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__5___closed__1, &l_Lean_parseVersoDocString___redArg___lam__5___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__1);
v___x_223_ = lean_string_append(v___x_221_, v___x_222_);
v___x_224_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
v___x_225_ = l_Lean_MessageData_ofFormat(v___x_224_);
v___x_226_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_226_, 0, v_____do__lift_213_);
lean_ctor_set(v___x_226_, 1, v___x_214_);
lean_ctor_set(v___x_226_, 2, v___x_215_);
lean_ctor_set(v___x_226_, 3, v___x_217_);
lean_ctor_set(v___x_226_, 4, v___x_225_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5, v___x_209_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5 + 1, v___x_216_);
lean_ctor_set_uint8(v___x_226_, sizeof(void*)*5 + 2, v___x_209_);
v___x_227_ = lean_apply_1(v_logMessage_210_, v___x_226_);
v___x_228_ = lean_apply_4(v_toBind_211_, lean_box(0), lean_box(0), v___x_227_, v___f_212_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__5___boxed(lean_object* v_text_229_, lean_object* v_pos_230_, lean_object* v_source_231_, lean_object* v___x_232_, lean_object* v_logMessage_233_, lean_object* v_toBind_234_, lean_object* v___f_235_, lean_object* v_____do__lift_236_){
_start:
{
uint8_t v___x_1996__boxed_237_; lean_object* v_res_238_; 
v___x_1996__boxed_237_ = lean_unbox(v___x_232_);
v_res_238_ = l_Lean_parseVersoDocString___redArg___lam__5(v_text_229_, v_pos_230_, v_source_231_, v___x_1996__boxed_237_, v_logMessage_233_, v_toBind_234_, v___f_235_, v_____do__lift_236_);
lean_dec_ref(v_source_231_);
lean_dec(v_pos_230_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6(lean_object* v_toApplicative_239_, lean_object* v_text_240_, lean_object* v_logMessage_241_, lean_object* v_toBind_242_, lean_object* v_getFileName_243_, lean_object* v_inst_244_, lean_object* v___f_245_, lean_object* v_ictx_246_, lean_object* v_source_247_, lean_object* v___f_248_, lean_object* v_env_249_, lean_object* v_____do__lift_250_, lean_object* v_____do__lift_251_, lean_object* v_val_252_, lean_object* v___y_253_, lean_object* v___x_254_, lean_object* v_____do__lift_255_){
_start:
{
lean_object* v___y_257_; lean_object* v_pmctx_280_; lean_object* v_blockCtxt_281_; lean_object* v___x_282_; lean_object* v_s_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v_s_286_; uint8_t v___y_288_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
lean_inc_ref(v_env_249_);
v_pmctx_280_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_280_, 0, v_env_249_);
lean_ctor_set(v_pmctx_280_, 1, v_____do__lift_250_);
lean_ctor_set(v_pmctx_280_, 2, v_____do__lift_251_);
lean_ctor_set(v_pmctx_280_, 3, v_____do__lift_255_);
lean_inc(v_val_252_);
lean_inc_ref(v_text_240_);
v_blockCtxt_281_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_240_, v_val_252_, v___y_253_);
v___x_282_ = l_Lean_Parser_mkParserState(v_source_247_);
lean_inc_ref(v___x_282_);
v_s_283_ = l_Lean_Parser_ParserState_setPos(v___x_282_, v_val_252_);
v___x_284_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_284_, 0, v_blockCtxt_281_);
v___x_285_ = l_Lean_Parser_getTokenTable(v_env_249_);
lean_inc_ref(v___x_285_);
lean_inc_ref(v_pmctx_280_);
lean_inc_ref(v_ictx_246_);
v_s_286_ = l_Lean_Parser_ParserFn_run(v___x_284_, v_ictx_246_, v_pmctx_280_, v___x_285_, v_s_283_);
lean_inc_ref(v_s_286_);
v___x_298_ = l_Lean_Parser_ParserState_allErrors(v_s_286_);
v___x_299_ = lean_array_get_size(v___x_298_);
lean_dec_ref(v___x_298_);
v___x_300_ = lean_unsigned_to_nat(0u);
v___x_301_ = lean_nat_dec_eq(v___x_299_, v___x_300_);
if (v___x_301_ == 0)
{
v___y_288_ = v___x_301_;
goto v___jp_287_;
}
else
{
lean_object* v_pos_302_; uint8_t v___x_303_; 
v_pos_302_ = lean_ctor_get(v_s_286_, 2);
lean_inc(v_pos_302_);
v___x_303_ = l_Lean_Parser_InputContext_atEnd(v_ictx_246_, v_pos_302_);
lean_dec(v_pos_302_);
if (v___x_303_ == 0)
{
v___y_288_ = v___x_301_;
goto v___jp_287_;
}
else
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v___x_282_);
lean_dec_ref(v_pmctx_280_);
lean_dec(v___x_254_);
v___y_257_ = v_s_286_;
goto v___jp_256_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; uint8_t v___x_261_; 
lean_inc_ref(v___y_257_);
v___x_258_ = l_Lean_Parser_ParserState_allErrors(v___y_257_);
v___x_259_ = lean_array_get_size(v___x_258_);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = lean_nat_dec_eq(v___x_259_, v___x_260_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___f_263_; lean_object* v___x_264_; lean_object* v___f_265_; size_t v_sz_266_; size_t v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
lean_dec_ref(v___y_257_);
lean_dec(v___f_248_);
lean_dec_ref(v_source_247_);
lean_dec_ref(v_ictx_246_);
v___x_262_ = lean_box(0);
v___f_263_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__2), 3, 2);
lean_closure_set(v___f_263_, 0, v_toApplicative_239_);
lean_closure_set(v___f_263_, 1, v___x_262_);
v___x_264_ = lean_box(v___x_261_);
lean_inc(v_toBind_242_);
v___f_265_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__4___boxed), 9, 6);
lean_closure_set(v___f_265_, 0, v_text_240_);
lean_closure_set(v___f_265_, 1, v___x_264_);
lean_closure_set(v___f_265_, 2, v_logMessage_241_);
lean_closure_set(v___f_265_, 3, v_toBind_242_);
lean_closure_set(v___f_265_, 4, v___f_263_);
lean_closure_set(v___f_265_, 5, v_getFileName_243_);
v_sz_266_ = lean_array_size(v___x_258_);
v___x_267_ = ((size_t)0ULL);
v___x_268_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_244_, v___x_258_, v___f_265_, v_sz_266_, v___x_267_, v___x_262_);
v___x_269_ = lean_apply_4(v_toBind_242_, lean_box(0), lean_box(0), v___x_268_, v___f_245_);
return v___x_269_;
}
else
{
lean_object* v_stxStack_270_; lean_object* v_pos_271_; uint8_t v___x_272_; 
lean_dec_ref(v___x_258_);
lean_dec(v___f_245_);
lean_dec_ref(v_inst_244_);
v_stxStack_270_ = lean_ctor_get(v___y_257_, 0);
lean_inc_ref(v_stxStack_270_);
v_pos_271_ = lean_ctor_get(v___y_257_, 2);
lean_inc(v_pos_271_);
lean_dec_ref(v___y_257_);
v___x_272_ = l_Lean_Parser_InputContext_atEnd(v_ictx_246_, v_pos_271_);
lean_dec_ref(v_ictx_246_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; lean_object* v___f_274_; lean_object* v___x_275_; 
lean_dec_ref(v_stxStack_270_);
lean_dec_ref(v_toApplicative_239_);
v___x_273_ = lean_box(v___x_272_);
lean_inc(v_toBind_242_);
v___f_274_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_274_, 0, v_text_240_);
lean_closure_set(v___f_274_, 1, v_pos_271_);
lean_closure_set(v___f_274_, 2, v_source_247_);
lean_closure_set(v___f_274_, 3, v___x_273_);
lean_closure_set(v___f_274_, 4, v_logMessage_241_);
lean_closure_set(v___f_274_, 5, v_toBind_242_);
lean_closure_set(v___f_274_, 6, v___f_248_);
v___x_275_ = lean_apply_4(v_toBind_242_, lean_box(0), lean_box(0), v_getFileName_243_, v___f_274_);
return v___x_275_;
}
else
{
lean_object* v_toPure_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
lean_dec(v_pos_271_);
lean_dec(v___f_248_);
lean_dec_ref(v_source_247_);
lean_dec(v_getFileName_243_);
lean_dec(v_toBind_242_);
lean_dec(v_logMessage_241_);
lean_dec_ref(v_text_240_);
v_toPure_276_ = lean_ctor_get(v_toApplicative_239_, 1);
lean_inc(v_toPure_276_);
lean_dec_ref(v_toApplicative_239_);
v___x_277_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_270_);
lean_dec_ref(v_stxStack_270_);
v___x_278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
v___x_279_ = lean_apply_2(v_toPure_276_, lean_box(0), v___x_278_);
return v___x_279_;
}
}
}
v___jp_287_:
{
if (v___y_288_ == 0)
{
lean_dec_ref(v___x_285_);
lean_dec_ref(v___x_282_);
lean_dec_ref(v_pmctx_280_);
lean_dec(v___x_254_);
v___y_257_ = v_s_286_;
goto v___jp_256_;
}
else
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v_pos_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_box(0);
v___x_291_ = lean_box(0);
v___x_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_254_);
lean_ctor_set(v___x_292_, 1, v___x_289_);
v___x_293_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_293_, 0, v___x_289_);
lean_ctor_set(v___x_293_, 1, v___x_290_);
lean_ctor_set(v___x_293_, 2, v___x_291_);
lean_ctor_set(v___x_293_, 3, v___x_292_);
lean_ctor_set(v___x_293_, 4, v___x_289_);
v_pos_294_ = lean_ctor_get(v_s_286_, 2);
lean_inc(v_pos_294_);
lean_dec_ref(v_s_286_);
v___x_295_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_295_, 0, v___x_293_);
v___x_296_ = l_Lean_Parser_ParserState_setPos(v___x_282_, v_pos_294_);
lean_inc_ref(v_ictx_246_);
v___x_297_ = l_Lean_Parser_ParserFn_run(v___x_295_, v_ictx_246_, v_pmctx_280_, v___x_285_, v___x_296_);
v___y_257_ = v___x_297_;
goto v___jp_256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_toApplicative_304_ = _args[0];
lean_object* v_text_305_ = _args[1];
lean_object* v_logMessage_306_ = _args[2];
lean_object* v_toBind_307_ = _args[3];
lean_object* v_getFileName_308_ = _args[4];
lean_object* v_inst_309_ = _args[5];
lean_object* v___f_310_ = _args[6];
lean_object* v_ictx_311_ = _args[7];
lean_object* v_source_312_ = _args[8];
lean_object* v___f_313_ = _args[9];
lean_object* v_env_314_ = _args[10];
lean_object* v_____do__lift_315_ = _args[11];
lean_object* v_____do__lift_316_ = _args[12];
lean_object* v_val_317_ = _args[13];
lean_object* v___y_318_ = _args[14];
lean_object* v___x_319_ = _args[15];
lean_object* v_____do__lift_320_ = _args[16];
_start:
{
lean_object* v_res_321_; 
v_res_321_ = l_Lean_parseVersoDocString___redArg___lam__6(v_toApplicative_304_, v_text_305_, v_logMessage_306_, v_toBind_307_, v_getFileName_308_, v_inst_309_, v___f_310_, v_ictx_311_, v_source_312_, v___f_313_, v_env_314_, v_____do__lift_315_, v_____do__lift_316_, v_val_317_, v___y_318_, v___x_319_, v_____do__lift_320_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7(lean_object* v_toApplicative_322_, lean_object* v_text_323_, lean_object* v_logMessage_324_, lean_object* v_toBind_325_, lean_object* v_getFileName_326_, lean_object* v_inst_327_, lean_object* v___f_328_, lean_object* v_ictx_329_, lean_object* v_source_330_, lean_object* v___f_331_, lean_object* v_env_332_, lean_object* v_____do__lift_333_, lean_object* v_val_334_, lean_object* v___y_335_, lean_object* v___x_336_, lean_object* v_getOpenDecls_337_, lean_object* v_____do__lift_338_){
_start:
{
lean_object* v___f_339_; lean_object* v___x_340_; 
lean_inc(v_toBind_325_);
v___f_339_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__6___boxed), 17, 16);
lean_closure_set(v___f_339_, 0, v_toApplicative_322_);
lean_closure_set(v___f_339_, 1, v_text_323_);
lean_closure_set(v___f_339_, 2, v_logMessage_324_);
lean_closure_set(v___f_339_, 3, v_toBind_325_);
lean_closure_set(v___f_339_, 4, v_getFileName_326_);
lean_closure_set(v___f_339_, 5, v_inst_327_);
lean_closure_set(v___f_339_, 6, v___f_328_);
lean_closure_set(v___f_339_, 7, v_ictx_329_);
lean_closure_set(v___f_339_, 8, v_source_330_);
lean_closure_set(v___f_339_, 9, v___f_331_);
lean_closure_set(v___f_339_, 10, v_env_332_);
lean_closure_set(v___f_339_, 11, v_____do__lift_333_);
lean_closure_set(v___f_339_, 12, v_____do__lift_338_);
lean_closure_set(v___f_339_, 13, v_val_334_);
lean_closure_set(v___f_339_, 14, v___y_335_);
lean_closure_set(v___f_339_, 15, v___x_336_);
v___x_340_ = lean_apply_4(v_toBind_325_, lean_box(0), lean_box(0), v_getOpenDecls_337_, v___f_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__7___boxed(lean_object** _args){
lean_object* v_toApplicative_341_ = _args[0];
lean_object* v_text_342_ = _args[1];
lean_object* v_logMessage_343_ = _args[2];
lean_object* v_toBind_344_ = _args[3];
lean_object* v_getFileName_345_ = _args[4];
lean_object* v_inst_346_ = _args[5];
lean_object* v___f_347_ = _args[6];
lean_object* v_ictx_348_ = _args[7];
lean_object* v_source_349_ = _args[8];
lean_object* v___f_350_ = _args[9];
lean_object* v_env_351_ = _args[10];
lean_object* v_____do__lift_352_ = _args[11];
lean_object* v_val_353_ = _args[12];
lean_object* v___y_354_ = _args[13];
lean_object* v___x_355_ = _args[14];
lean_object* v_getOpenDecls_356_ = _args[15];
lean_object* v_____do__lift_357_ = _args[16];
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_parseVersoDocString___redArg___lam__7(v_toApplicative_341_, v_text_342_, v_logMessage_343_, v_toBind_344_, v_getFileName_345_, v_inst_346_, v___f_347_, v_ictx_348_, v_source_349_, v___f_350_, v_env_351_, v_____do__lift_352_, v_val_353_, v___y_354_, v___x_355_, v_getOpenDecls_356_, v_____do__lift_357_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__8(lean_object* v_inst_359_, lean_object* v_toApplicative_360_, lean_object* v_text_361_, lean_object* v_logMessage_362_, lean_object* v_toBind_363_, lean_object* v_getFileName_364_, lean_object* v_inst_365_, lean_object* v___f_366_, lean_object* v_ictx_367_, lean_object* v_source_368_, lean_object* v___f_369_, lean_object* v_env_370_, lean_object* v_val_371_, lean_object* v___y_372_, lean_object* v___x_373_, lean_object* v_____do__lift_374_){
_start:
{
lean_object* v_getCurrNamespace_375_; lean_object* v_getOpenDecls_376_; lean_object* v___f_377_; lean_object* v___x_378_; 
v_getCurrNamespace_375_ = lean_ctor_get(v_inst_359_, 0);
lean_inc(v_getCurrNamespace_375_);
v_getOpenDecls_376_ = lean_ctor_get(v_inst_359_, 1);
lean_inc(v_getOpenDecls_376_);
lean_dec_ref(v_inst_359_);
lean_inc(v_toBind_363_);
v___f_377_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__7___boxed), 17, 16);
lean_closure_set(v___f_377_, 0, v_toApplicative_360_);
lean_closure_set(v___f_377_, 1, v_text_361_);
lean_closure_set(v___f_377_, 2, v_logMessage_362_);
lean_closure_set(v___f_377_, 3, v_toBind_363_);
lean_closure_set(v___f_377_, 4, v_getFileName_364_);
lean_closure_set(v___f_377_, 5, v_inst_365_);
lean_closure_set(v___f_377_, 6, v___f_366_);
lean_closure_set(v___f_377_, 7, v_ictx_367_);
lean_closure_set(v___f_377_, 8, v_source_368_);
lean_closure_set(v___f_377_, 9, v___f_369_);
lean_closure_set(v___f_377_, 10, v_env_370_);
lean_closure_set(v___f_377_, 11, v_____do__lift_374_);
lean_closure_set(v___f_377_, 12, v_val_371_);
lean_closure_set(v___f_377_, 13, v___y_372_);
lean_closure_set(v___f_377_, 14, v___x_373_);
lean_closure_set(v___f_377_, 15, v_getOpenDecls_376_);
v___x_378_ = lean_apply_4(v_toBind_363_, lean_box(0), lean_box(0), v_getCurrNamespace_375_, v___f_377_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__9(lean_object* v_source_379_, lean_object* v_text_380_, lean_object* v___y_381_, lean_object* v_inst_382_, lean_object* v_toApplicative_383_, lean_object* v_logMessage_384_, lean_object* v_toBind_385_, lean_object* v_getFileName_386_, lean_object* v_inst_387_, lean_object* v___f_388_, lean_object* v___f_389_, lean_object* v_env_390_, lean_object* v_val_391_, lean_object* v___x_392_, lean_object* v_inst_393_, lean_object* v_____do__lift_394_){
_start:
{
lean_object* v_ictx_395_; lean_object* v___f_396_; lean_object* v___x_397_; 
lean_inc(v___y_381_);
lean_inc_ref(v_text_380_);
lean_inc_ref(v_source_379_);
v_ictx_395_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_395_, 0, v_source_379_);
lean_ctor_set(v_ictx_395_, 1, v_____do__lift_394_);
lean_ctor_set(v_ictx_395_, 2, v_text_380_);
lean_ctor_set(v_ictx_395_, 3, v___y_381_);
lean_inc(v_toBind_385_);
v___f_396_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__8), 16, 15);
lean_closure_set(v___f_396_, 0, v_inst_382_);
lean_closure_set(v___f_396_, 1, v_toApplicative_383_);
lean_closure_set(v___f_396_, 2, v_text_380_);
lean_closure_set(v___f_396_, 3, v_logMessage_384_);
lean_closure_set(v___f_396_, 4, v_toBind_385_);
lean_closure_set(v___f_396_, 5, v_getFileName_386_);
lean_closure_set(v___f_396_, 6, v_inst_387_);
lean_closure_set(v___f_396_, 7, v___f_388_);
lean_closure_set(v___f_396_, 8, v_ictx_395_);
lean_closure_set(v___f_396_, 9, v_source_379_);
lean_closure_set(v___f_396_, 10, v___f_389_);
lean_closure_set(v___f_396_, 11, v_env_390_);
lean_closure_set(v___f_396_, 12, v_val_391_);
lean_closure_set(v___f_396_, 13, v___y_381_);
lean_closure_set(v___f_396_, 14, v___x_392_);
v___x_397_ = lean_apply_4(v_toBind_385_, lean_box(0), lean_box(0), v_inst_393_, v___f_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__10(lean_object* v_inst_398_, lean_object* v_source_399_, lean_object* v_text_400_, lean_object* v___y_401_, lean_object* v_inst_402_, lean_object* v_toApplicative_403_, lean_object* v_toBind_404_, lean_object* v_inst_405_, lean_object* v___f_406_, lean_object* v___f_407_, lean_object* v_val_408_, lean_object* v___x_409_, lean_object* v_inst_410_, lean_object* v_env_411_){
_start:
{
lean_object* v_getFileName_412_; lean_object* v_logMessage_413_; lean_object* v___f_414_; lean_object* v___x_415_; 
v_getFileName_412_ = lean_ctor_get(v_inst_398_, 2);
lean_inc_n(v_getFileName_412_, 2);
v_logMessage_413_ = lean_ctor_get(v_inst_398_, 4);
lean_inc(v_logMessage_413_);
lean_dec_ref(v_inst_398_);
lean_inc(v_toBind_404_);
v___f_414_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__9), 16, 15);
lean_closure_set(v___f_414_, 0, v_source_399_);
lean_closure_set(v___f_414_, 1, v_text_400_);
lean_closure_set(v___f_414_, 2, v___y_401_);
lean_closure_set(v___f_414_, 3, v_inst_402_);
lean_closure_set(v___f_414_, 4, v_toApplicative_403_);
lean_closure_set(v___f_414_, 5, v_logMessage_413_);
lean_closure_set(v___f_414_, 6, v_toBind_404_);
lean_closure_set(v___f_414_, 7, v_getFileName_412_);
lean_closure_set(v___f_414_, 8, v_inst_405_);
lean_closure_set(v___f_414_, 9, v___f_406_);
lean_closure_set(v___f_414_, 10, v___f_407_);
lean_closure_set(v___f_414_, 11, v_env_411_);
lean_closure_set(v___f_414_, 12, v_val_408_);
lean_closure_set(v___f_414_, 13, v___x_409_);
lean_closure_set(v___f_414_, 14, v_inst_410_);
v___x_415_ = lean_apply_4(v_toBind_404_, lean_box(0), lean_box(0), v_getFileName_412_, v___f_414_);
return v___x_415_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__0(void){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = lean_mk_string_unchecked("Documentation comment has no source location, cannot parse", 58, 58);
return v___x_416_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1(void){
_start:
{
lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_417_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__0, &l_Lean_parseVersoDocString___redArg___lam__11___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__0);
v___x_418_ = l_Lean_stringToMessageData(v___x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg___lam__11(lean_object* v_docComment_419_, lean_object* v_inst_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_toApplicative_423_, lean_object* v_toBind_424_, lean_object* v_inst_425_, lean_object* v___f_426_, lean_object* v___f_427_, lean_object* v_inst_428_, lean_object* v_inst_429_, lean_object* v_text_430_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; uint8_t v___x_433_; lean_object* v___x_434_; 
v___x_431_ = lean_unsigned_to_nat(1u);
v___x_432_ = l_Lean_Syntax_getArg(v_docComment_419_, v___x_431_);
v___x_433_ = 1;
v___x_434_ = l_Lean_Syntax_getPos_x3f(v___x_432_, v___x_433_);
if (lean_obj_tag(v___x_434_) == 1)
{
lean_object* v_val_435_; lean_object* v___x_436_; 
v_val_435_ = lean_ctor_get(v___x_434_, 0);
lean_inc(v_val_435_);
lean_dec_ref(v___x_434_);
v___x_436_ = l_Lean_Syntax_getTailPos_x3f(v___x_432_, v___x_433_);
lean_dec(v___x_432_);
if (lean_obj_tag(v___x_436_) == 1)
{
lean_object* v_val_437_; lean_object* v_source_438_; lean_object* v___y_440_; lean_object* v___x_444_; lean_object* v_endPos_445_; lean_object* v___x_446_; uint8_t v___x_447_; 
lean_dec_ref(v_inst_429_);
lean_dec(v_docComment_419_);
v_val_437_ = lean_ctor_get(v___x_436_, 0);
lean_inc(v_val_437_);
lean_dec_ref(v___x_436_);
v_source_438_ = lean_ctor_get(v_text_430_, 0);
lean_inc_ref(v_source_438_);
v___x_444_ = lean_string_utf8_prev(v_source_438_, v_val_437_);
lean_dec(v_val_437_);
v_endPos_445_ = lean_string_utf8_prev(v_source_438_, v___x_444_);
lean_dec(v___x_444_);
v___x_446_ = lean_string_utf8_byte_size(v_source_438_);
v___x_447_ = lean_nat_dec_le(v_endPos_445_, v___x_446_);
if (v___x_447_ == 0)
{
lean_dec(v_endPos_445_);
v___y_440_ = v___x_446_;
goto v___jp_439_;
}
else
{
v___y_440_ = v_endPos_445_;
goto v___jp_439_;
}
v___jp_439_:
{
lean_object* v_getEnv_441_; lean_object* v___f_442_; lean_object* v___x_443_; 
v_getEnv_441_ = lean_ctor_get(v_inst_420_, 0);
lean_inc(v_getEnv_441_);
lean_dec_ref(v_inst_420_);
lean_inc(v_toBind_424_);
v___f_442_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__10), 14, 13);
lean_closure_set(v___f_442_, 0, v_inst_421_);
lean_closure_set(v___f_442_, 1, v_source_438_);
lean_closure_set(v___f_442_, 2, v_text_430_);
lean_closure_set(v___f_442_, 3, v___y_440_);
lean_closure_set(v___f_442_, 4, v_inst_422_);
lean_closure_set(v___f_442_, 5, v_toApplicative_423_);
lean_closure_set(v___f_442_, 6, v_toBind_424_);
lean_closure_set(v___f_442_, 7, v_inst_425_);
lean_closure_set(v___f_442_, 8, v___f_426_);
lean_closure_set(v___f_442_, 9, v___f_427_);
lean_closure_set(v___f_442_, 10, v_val_435_);
lean_closure_set(v___f_442_, 11, v___x_431_);
lean_closure_set(v___f_442_, 12, v_inst_428_);
v___x_443_ = lean_apply_4(v_toBind_424_, lean_box(0), lean_box(0), v_getEnv_441_, v___f_442_);
return v___x_443_;
}
}
else
{
lean_object* v___x_448_; lean_object* v___x_449_; 
lean_dec(v___x_436_);
lean_dec(v_val_435_);
lean_dec_ref(v_text_430_);
lean_dec(v_inst_428_);
lean_dec(v___f_427_);
lean_dec(v___f_426_);
lean_dec(v_toBind_424_);
lean_dec_ref(v_toApplicative_423_);
lean_dec_ref(v_inst_422_);
lean_dec_ref(v_inst_421_);
lean_dec_ref(v_inst_420_);
v___x_448_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_449_ = l_Lean_throwErrorAt___redArg(v_inst_425_, v_inst_429_, v_docComment_419_, v___x_448_);
return v___x_449_;
}
}
else
{
lean_object* v___x_450_; lean_object* v___x_451_; 
lean_dec(v___x_434_);
lean_dec(v___x_432_);
lean_dec_ref(v_text_430_);
lean_dec(v_inst_428_);
lean_dec(v___f_427_);
lean_dec(v___f_426_);
lean_dec(v_toBind_424_);
lean_dec_ref(v_toApplicative_423_);
lean_dec_ref(v_inst_422_);
lean_dec_ref(v_inst_421_);
lean_dec_ref(v_inst_420_);
v___x_450_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_451_ = l_Lean_throwErrorAt___redArg(v_inst_425_, v_inst_429_, v_docComment_419_, v___x_450_);
return v___x_451_;
}
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___closed__0(void){
_start:
{
lean_object* v___x_452_; 
v___x_452_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_452_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___closed__1(void){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_453_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___closed__2(void){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lean_mk_string_unchecked("Command", 7, 7);
return v___x_454_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___closed__3(void){
_start:
{
lean_object* v___x_455_; 
v___x_455_ = lean_mk_string_unchecked("docComment", 10, 10);
return v___x_455_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___closed__4(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_456_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__3, &l_Lean_parseVersoDocString___redArg___closed__3_once, _init_l_Lean_parseVersoDocString___redArg___closed__3);
v___x_457_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__2, &l_Lean_parseVersoDocString___redArg___closed__2_once, _init_l_Lean_parseVersoDocString___redArg___closed__2);
v___x_458_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__1, &l_Lean_parseVersoDocString___redArg___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___closed__1);
v___x_459_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__0, &l_Lean_parseVersoDocString___redArg___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___closed__0);
v___x_460_ = l_Lean_Name_mkStr4(v___x_459_, v___x_458_, v___x_457_, v___x_456_);
return v___x_460_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___redArg___closed__5(void){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = lean_mk_string_unchecked("versoCommentBody", 16, 16);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___redArg(lean_object* v_inst_462_, lean_object* v_inst_463_, lean_object* v_inst_464_, lean_object* v_inst_465_, lean_object* v_inst_466_, lean_object* v_inst_467_, lean_object* v_inst_468_, lean_object* v_docComment_469_){
_start:
{
lean_object* v_toApplicative_470_; lean_object* v_toBind_471_; lean_object* v___f_472_; lean_object* v___f_473_; lean_object* v___f_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v_toApplicative_470_ = lean_ctor_get(v_inst_462_, 0);
lean_inc_ref_n(v_toApplicative_470_, 4);
v_toBind_471_ = lean_ctor_get(v_inst_462_, 1);
lean_inc_n(v_toBind_471_, 2);
v___f_472_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__0), 2, 1);
lean_closure_set(v___f_472_, 0, v_toApplicative_470_);
v___f_473_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__1), 2, 1);
lean_closure_set(v___f_473_, 0, v_toApplicative_470_);
lean_inc_n(v_docComment_469_, 2);
v___f_474_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___redArg___lam__11), 12, 11);
lean_closure_set(v___f_474_, 0, v_docComment_469_);
lean_closure_set(v___f_474_, 1, v_inst_465_);
lean_closure_set(v___f_474_, 2, v_inst_467_);
lean_closure_set(v___f_474_, 3, v_inst_468_);
lean_closure_set(v___f_474_, 4, v_toApplicative_470_);
lean_closure_set(v___f_474_, 5, v_toBind_471_);
lean_closure_set(v___f_474_, 6, v_inst_462_);
lean_closure_set(v___f_474_, 7, v___f_472_);
lean_closure_set(v___f_474_, 8, v___f_473_);
lean_closure_set(v___f_474_, 9, v_inst_466_);
lean_closure_set(v___f_474_, 10, v_inst_464_);
v___x_475_ = l_Lean_Syntax_getKind(v_docComment_469_);
v___x_476_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__0, &l_Lean_parseVersoDocString___redArg___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___closed__0);
v___x_477_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__1, &l_Lean_parseVersoDocString___redArg___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___closed__1);
v___x_478_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__2, &l_Lean_parseVersoDocString___redArg___closed__2_once, _init_l_Lean_parseVersoDocString___redArg___closed__2);
v___x_479_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__4, &l_Lean_parseVersoDocString___redArg___closed__4_once, _init_l_Lean_parseVersoDocString___redArg___closed__4);
v___x_480_ = lean_name_eq(v___x_475_, v___x_479_);
lean_dec(v___x_475_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; 
lean_dec_ref(v_toApplicative_470_);
lean_dec(v_docComment_469_);
v___x_481_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_481_;
}
else
{
lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_482_ = lean_unsigned_to_nat(0u);
v___x_483_ = l_Lean_Syntax_getArg(v_docComment_469_, v___x_482_);
lean_dec(v_docComment_469_);
if (lean_obj_tag(v___x_483_) == 1)
{
lean_object* v_kind_484_; 
v_kind_484_ = lean_ctor_get(v___x_483_, 1);
lean_inc(v_kind_484_);
if (lean_obj_tag(v_kind_484_) == 1)
{
lean_object* v_pre_485_; 
v_pre_485_ = lean_ctor_get(v_kind_484_, 0);
lean_inc(v_pre_485_);
if (lean_obj_tag(v_pre_485_) == 1)
{
lean_object* v_pre_486_; 
v_pre_486_ = lean_ctor_get(v_pre_485_, 0);
lean_inc(v_pre_486_);
if (lean_obj_tag(v_pre_486_) == 1)
{
lean_object* v_pre_487_; 
v_pre_487_ = lean_ctor_get(v_pre_486_, 0);
lean_inc(v_pre_487_);
if (lean_obj_tag(v_pre_487_) == 1)
{
lean_object* v_pre_488_; 
v_pre_488_ = lean_ctor_get(v_pre_487_, 0);
lean_inc(v_pre_488_);
if (lean_obj_tag(v_pre_488_) == 0)
{
lean_object* v_info_489_; lean_object* v_args_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_522_; 
v_info_489_ = lean_ctor_get(v___x_483_, 0);
v_args_490_ = lean_ctor_get(v___x_483_, 2);
v_isSharedCheck_522_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_522_ == 0)
{
lean_object* v_unused_523_; 
v_unused_523_ = lean_ctor_get(v___x_483_, 1);
lean_dec(v_unused_523_);
v___x_492_ = v___x_483_;
v_isShared_493_ = v_isSharedCheck_522_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_args_490_);
lean_inc(v_info_489_);
lean_dec(v___x_483_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_522_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v_str_494_; lean_object* v_str_495_; lean_object* v_str_496_; lean_object* v_str_497_; uint8_t v___x_498_; 
v_str_494_ = lean_ctor_get(v_kind_484_, 1);
lean_inc_ref(v_str_494_);
lean_dec_ref(v_kind_484_);
v_str_495_ = lean_ctor_get(v_pre_485_, 1);
lean_inc_ref(v_str_495_);
lean_dec_ref(v_pre_485_);
v_str_496_ = lean_ctor_get(v_pre_486_, 1);
lean_inc_ref(v_str_496_);
lean_dec_ref(v_pre_486_);
v_str_497_ = lean_ctor_get(v_pre_487_, 1);
lean_inc_ref(v_str_497_);
lean_dec_ref(v_pre_487_);
v___x_498_ = lean_string_dec_eq(v_str_497_, v___x_476_);
lean_dec_ref(v_str_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_dec_ref(v_str_496_);
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_499_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_499_;
}
else
{
uint8_t v___x_500_; 
v___x_500_ = lean_string_dec_eq(v_str_496_, v___x_477_);
lean_dec_ref(v_str_496_);
if (v___x_500_ == 0)
{
lean_object* v___x_501_; 
lean_dec_ref(v_str_495_);
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_501_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_501_;
}
else
{
uint8_t v___x_502_; 
v___x_502_ = lean_string_dec_eq(v_str_495_, v___x_478_);
lean_dec_ref(v_str_495_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; 
lean_dec_ref(v_str_494_);
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_503_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_503_;
}
else
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__5, &l_Lean_parseVersoDocString___redArg___closed__5_once, _init_l_Lean_parseVersoDocString___redArg___closed__5);
v___x_505_ = lean_string_dec_eq(v_str_494_, v___x_504_);
lean_dec_ref(v_str_494_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; 
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
lean_dec_ref(v_toApplicative_470_);
v___x_506_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_506_;
}
else
{
lean_dec_ref(v___f_474_);
lean_dec(v_toBind_471_);
lean_dec(v_inst_463_);
if (v___x_505_ == 0)
{
lean_object* v_toPure_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
lean_del_object(v___x_492_);
lean_dec_ref(v_args_490_);
lean_dec(v_info_489_);
v_toPure_507_ = lean_ctor_get(v_toApplicative_470_, 1);
lean_inc(v_toPure_507_);
lean_dec_ref(v_toApplicative_470_);
v___x_508_ = lean_box(0);
v___x_509_ = lean_apply_2(v_toPure_507_, lean_box(0), v___x_508_);
return v___x_509_;
}
else
{
lean_object* v_toPure_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_516_; 
v_toPure_510_ = lean_ctor_get(v_toApplicative_470_, 1);
lean_inc(v_toPure_510_);
lean_dec_ref(v_toApplicative_470_);
v___x_511_ = l_Lean_Name_str___override(v_pre_488_, v___x_476_);
v___x_512_ = l_Lean_Name_str___override(v___x_511_, v___x_477_);
v___x_513_ = l_Lean_Name_str___override(v___x_512_, v___x_478_);
v___x_514_ = l_Lean_Name_str___override(v___x_513_, v___x_504_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 1, v___x_514_);
v___x_516_ = v___x_492_;
goto v_reusejp_515_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v_info_489_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_521_, 2, v_args_490_);
v___x_516_ = v_reuseFailAlloc_521_;
goto v_reusejp_515_;
}
v_reusejp_515_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_517_ = lean_unsigned_to_nat(1u);
v___x_518_ = l_Lean_Syntax_getArg(v___x_516_, v___x_517_);
lean_dec_ref(v___x_516_);
v___x_519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_519_, 0, v___x_518_);
v___x_520_ = lean_apply_2(v_toPure_510_, lean_box(0), v___x_519_);
return v___x_520_;
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
lean_object* v___x_524_; 
lean_dec_ref(v_pre_487_);
lean_dec(v_pre_488_);
lean_dec_ref(v_pre_486_);
lean_dec_ref(v_pre_485_);
lean_dec_ref(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_524_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_524_;
}
}
else
{
lean_object* v___x_525_; 
lean_dec(v_pre_487_);
lean_dec_ref(v_pre_486_);
lean_dec_ref(v_pre_485_);
lean_dec_ref(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_525_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_525_;
}
}
else
{
lean_object* v___x_526_; 
lean_dec_ref(v_pre_485_);
lean_dec(v_pre_486_);
lean_dec_ref(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_526_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_526_;
}
}
else
{
lean_object* v___x_527_; 
lean_dec_ref(v_kind_484_);
lean_dec(v_pre_485_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_527_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_527_;
}
}
else
{
lean_object* v___x_528_; 
lean_dec(v_kind_484_);
lean_dec_ref(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_528_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_528_;
}
}
else
{
lean_object* v___x_529_; 
lean_dec(v___x_483_);
lean_dec_ref(v_toApplicative_470_);
v___x_529_ = lean_apply_4(v_toBind_471_, lean_box(0), lean_box(0), v_inst_463_, v___f_474_);
return v___x_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString(lean_object* v_m_530_, lean_object* v_inst_531_, lean_object* v_inst_532_, lean_object* v_inst_533_, lean_object* v_inst_534_, lean_object* v_inst_535_, lean_object* v_inst_536_, lean_object* v_inst_537_, lean_object* v_docComment_538_){
_start:
{
lean_object* v___x_539_; 
v___x_539_ = l_Lean_parseVersoDocString___redArg(v_inst_531_, v_inst_532_, v_inst_533_, v_inst_534_, v_inst_535_, v_inst_536_, v_inst_537_, v_docComment_538_);
return v___x_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0(lean_object* v___y_540_, lean_object* v_text_541_, lean_object* v_source_542_, lean_object* v_logMessage_543_, lean_object* v_____do__lift_544_){
_start:
{
lean_object* v_pos_545_; lean_object* v___x_546_; lean_object* v___x_547_; uint8_t v___x_548_; uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; uint32_t v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v_pos_545_ = lean_ctor_get(v___y_540_, 2);
v___x_546_ = l_Lean_FileMap_toPosition(v_text_541_, v_pos_545_);
v___x_547_ = lean_box(0);
v___x_548_ = 0;
v___x_549_ = 2;
v___x_550_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__3___closed__0, &l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0);
v___x_551_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__5___closed__0, &l_Lean_parseVersoDocString___redArg___lam__5___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__0);
v___x_552_ = lean_string_utf8_get(v_source_542_, v_pos_545_);
v___x_553_ = lean_string_push(v___x_550_, v___x_552_);
v___x_554_ = lean_string_append(v___x_551_, v___x_553_);
lean_dec_ref(v___x_553_);
v___x_555_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__5___closed__1, &l_Lean_parseVersoDocString___redArg___lam__5___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__1);
v___x_556_ = lean_string_append(v___x_554_, v___x_555_);
v___x_557_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_557_, 0, v___x_556_);
v___x_558_ = l_Lean_MessageData_ofFormat(v___x_557_);
v___x_559_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_559_, 0, v_____do__lift_544_);
lean_ctor_set(v___x_559_, 1, v___x_546_);
lean_ctor_set(v___x_559_, 2, v___x_547_);
lean_ctor_set(v___x_559_, 3, v___x_550_);
lean_ctor_set(v___x_559_, 4, v___x_558_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5, v___x_548_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 1, v___x_549_);
lean_ctor_set_uint8(v___x_559_, sizeof(void*)*5 + 2, v___x_548_);
v___x_560_ = lean_apply_1(v_logMessage_543_, v___x_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__0___boxed(lean_object* v___y_561_, lean_object* v_text_562_, lean_object* v_source_563_, lean_object* v_logMessage_564_, lean_object* v_____do__lift_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_reportVersoParseFailure___redArg___lam__0(v___y_561_, v_text_562_, v_source_563_, v_logMessage_564_, v_____do__lift_565_);
lean_dec_ref(v_source_563_);
lean_dec_ref(v___y_561_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1(lean_object* v_toPure_567_, lean_object* v_toBind_568_, lean_object* v_getFileName_569_, lean_object* v___f_570_, lean_object* v___x_571_, lean_object* v___x_572_, lean_object* v___y_573_, lean_object* v_ictx_574_, lean_object* v_____s_575_){
_start:
{
uint8_t v___y_580_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_582_ = lean_array_get_size(v___x_571_);
v___x_583_ = lean_nat_dec_eq(v___x_582_, v___x_572_);
if (v___x_583_ == 0)
{
v___y_580_ = v___x_583_;
goto v___jp_579_;
}
else
{
lean_object* v_pos_584_; uint8_t v___x_585_; 
v_pos_584_ = lean_ctor_get(v___y_573_, 2);
v___x_585_ = l_Lean_Parser_InputContext_atEnd(v_ictx_574_, v_pos_584_);
if (v___x_585_ == 0)
{
v___y_580_ = v___x_583_;
goto v___jp_579_;
}
else
{
lean_dec(v___f_570_);
lean_dec(v_getFileName_569_);
lean_dec(v_toBind_568_);
goto v___jp_576_;
}
}
v___jp_576_:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_box(0);
v___x_578_ = lean_apply_2(v_toPure_567_, lean_box(0), v___x_577_);
return v___x_578_;
}
v___jp_579_:
{
if (v___y_580_ == 0)
{
lean_dec(v___f_570_);
lean_dec(v_getFileName_569_);
lean_dec(v_toBind_568_);
goto v___jp_576_;
}
else
{
lean_object* v___x_581_; 
lean_dec(v_toPure_567_);
v___x_581_ = lean_apply_4(v_toBind_568_, lean_box(0), lean_box(0), v_getFileName_569_, v___f_570_);
return v___x_581_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__1___boxed(lean_object* v_toPure_586_, lean_object* v_toBind_587_, lean_object* v_getFileName_588_, lean_object* v___f_589_, lean_object* v___x_590_, lean_object* v___x_591_, lean_object* v___y_592_, lean_object* v_ictx_593_, lean_object* v_____s_594_){
_start:
{
lean_object* v_res_595_; 
v_res_595_ = l_Lean_reportVersoParseFailure___redArg___lam__1(v_toPure_586_, v_toBind_587_, v_getFileName_588_, v___f_589_, v___x_590_, v___x_591_, v___y_592_, v_ictx_593_, v_____s_594_);
lean_dec_ref(v_ictx_593_);
lean_dec_ref(v___y_592_);
lean_dec(v___x_591_);
lean_dec_ref(v___x_590_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__2(lean_object* v___x_596_, lean_object* v_toPure_597_, lean_object* v_____r_598_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; 
v___x_599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_599_, 0, v___x_596_);
v___x_600_ = lean_apply_2(v_toPure_597_, lean_box(0), v___x_599_);
return v___x_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3(lean_object* v_text_601_, lean_object* v_fst_602_, lean_object* v_snd_603_, lean_object* v_logMessage_604_, lean_object* v_toBind_605_, lean_object* v___f_606_, lean_object* v_____do__lift_607_){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; uint8_t v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_608_ = l_Lean_FileMap_toPosition(v_text_601_, v_fst_602_);
v___x_609_ = lean_box(0);
v___x_610_ = 0;
v___x_611_ = 2;
v___x_612_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__3___closed__0, &l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0);
v___x_613_ = l_Lean_Parser_Error_toString(v_snd_603_);
v___x_614_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_614_, 0, v___x_613_);
v___x_615_ = l_Lean_MessageData_ofFormat(v___x_614_);
v___x_616_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_616_, 0, v_____do__lift_607_);
lean_ctor_set(v___x_616_, 1, v___x_608_);
lean_ctor_set(v___x_616_, 2, v___x_609_);
lean_ctor_set(v___x_616_, 3, v___x_612_);
lean_ctor_set(v___x_616_, 4, v___x_615_);
lean_ctor_set_uint8(v___x_616_, sizeof(void*)*5, v___x_610_);
lean_ctor_set_uint8(v___x_616_, sizeof(void*)*5 + 1, v___x_611_);
lean_ctor_set_uint8(v___x_616_, sizeof(void*)*5 + 2, v___x_610_);
v___x_617_ = lean_apply_1(v_logMessage_604_, v___x_616_);
v___x_618_ = lean_apply_4(v_toBind_605_, lean_box(0), lean_box(0), v___x_617_, v___f_606_);
return v___x_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__3___boxed(lean_object* v_text_619_, lean_object* v_fst_620_, lean_object* v_snd_621_, lean_object* v_logMessage_622_, lean_object* v_toBind_623_, lean_object* v___f_624_, lean_object* v_____do__lift_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lean_reportVersoParseFailure___redArg___lam__3(v_text_619_, v_fst_620_, v_snd_621_, v_logMessage_622_, v_toBind_623_, v___f_624_, v_____do__lift_625_);
lean_dec(v_fst_620_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__4(lean_object* v_text_627_, lean_object* v_logMessage_628_, lean_object* v_toBind_629_, lean_object* v___f_630_, lean_object* v_getFileName_631_, lean_object* v_a_632_, lean_object* v_x_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_snd_635_; lean_object* v_fst_636_; lean_object* v_snd_637_; lean_object* v___f_638_; lean_object* v___x_639_; 
v_snd_635_ = lean_ctor_get(v_a_632_, 1);
lean_inc(v_snd_635_);
v_fst_636_ = lean_ctor_get(v_a_632_, 0);
lean_inc(v_fst_636_);
lean_dec_ref(v_a_632_);
v_snd_637_ = lean_ctor_get(v_snd_635_, 1);
lean_inc(v_snd_637_);
lean_dec(v_snd_635_);
lean_inc(v_toBind_629_);
v___f_638_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__3___boxed), 7, 6);
lean_closure_set(v___f_638_, 0, v_text_627_);
lean_closure_set(v___f_638_, 1, v_fst_636_);
lean_closure_set(v___f_638_, 2, v_snd_637_);
lean_closure_set(v___f_638_, 3, v_logMessage_628_);
lean_closure_set(v___f_638_, 4, v_toBind_629_);
lean_closure_set(v___f_638_, 5, v___f_630_);
v___x_639_ = lean_apply_4(v_toBind_629_, lean_box(0), lean_box(0), v_getFileName_631_, v___f_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__5(lean_object* v_text_640_, lean_object* v_source_641_, lean_object* v_logMessage_642_, lean_object* v_toPure_643_, lean_object* v_toBind_644_, lean_object* v_getFileName_645_, lean_object* v___x_646_, lean_object* v_ictx_647_, lean_object* v_inst_648_, lean_object* v_env_649_, lean_object* v_____do__lift_650_, lean_object* v_____do__lift_651_, lean_object* v_val_652_, lean_object* v___y_653_, lean_object* v_____do__lift_654_){
_start:
{
lean_object* v___y_656_; lean_object* v_pmctx_667_; lean_object* v_blockCtxt_668_; lean_object* v___x_669_; lean_object* v_s_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v_s_673_; uint8_t v___y_675_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
lean_inc_ref(v_env_649_);
v_pmctx_667_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_667_, 0, v_env_649_);
lean_ctor_set(v_pmctx_667_, 1, v_____do__lift_650_);
lean_ctor_set(v_pmctx_667_, 2, v_____do__lift_651_);
lean_ctor_set(v_pmctx_667_, 3, v_____do__lift_654_);
lean_inc(v_val_652_);
lean_inc_ref(v_text_640_);
v_blockCtxt_668_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v_text_640_, v_val_652_, v___y_653_);
v___x_669_ = l_Lean_Parser_mkParserState(v_source_641_);
lean_inc_ref(v___x_669_);
v_s_670_ = l_Lean_Parser_ParserState_setPos(v___x_669_, v_val_652_);
v___x_671_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_671_, 0, v_blockCtxt_668_);
v___x_672_ = l_Lean_Parser_getTokenTable(v_env_649_);
lean_inc_ref(v___x_672_);
lean_inc_ref(v_pmctx_667_);
lean_inc_ref(v_ictx_647_);
v_s_673_ = l_Lean_Parser_ParserFn_run(v___x_671_, v_ictx_647_, v_pmctx_667_, v___x_672_, v_s_670_);
lean_inc_ref(v_s_673_);
v___x_685_ = l_Lean_Parser_ParserState_allErrors(v_s_673_);
v___x_686_ = lean_array_get_size(v___x_685_);
lean_dec_ref(v___x_685_);
v___x_687_ = lean_nat_dec_eq(v___x_686_, v___x_646_);
if (v___x_687_ == 0)
{
v___y_675_ = v___x_687_;
goto v___jp_674_;
}
else
{
lean_object* v_pos_688_; uint8_t v___x_689_; 
v_pos_688_ = lean_ctor_get(v_s_673_, 2);
lean_inc(v_pos_688_);
v___x_689_ = l_Lean_Parser_InputContext_atEnd(v_ictx_647_, v_pos_688_);
lean_dec(v_pos_688_);
if (v___x_689_ == 0)
{
v___y_675_ = v___x_687_;
goto v___jp_674_;
}
else
{
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_669_);
lean_dec_ref(v_pmctx_667_);
v___y_656_ = v_s_673_;
goto v___jp_655_;
}
}
v___jp_655_:
{
lean_object* v___f_657_; lean_object* v___x_658_; lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___f_661_; lean_object* v___f_662_; size_t v_sz_663_; size_t v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; 
lean_inc(v_logMessage_642_);
lean_inc_ref(v_text_640_);
lean_inc_ref_n(v___y_656_, 2);
v___f_657_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_657_, 0, v___y_656_);
lean_closure_set(v___f_657_, 1, v_text_640_);
lean_closure_set(v___f_657_, 2, v_source_641_);
lean_closure_set(v___f_657_, 3, v_logMessage_642_);
v___x_658_ = l_Lean_Parser_ParserState_allErrors(v___y_656_);
lean_inc_ref(v___x_658_);
lean_inc(v_getFileName_645_);
lean_inc_n(v_toBind_644_, 2);
lean_inc(v_toPure_643_);
v___f_659_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_659_, 0, v_toPure_643_);
lean_closure_set(v___f_659_, 1, v_toBind_644_);
lean_closure_set(v___f_659_, 2, v_getFileName_645_);
lean_closure_set(v___f_659_, 3, v___f_657_);
lean_closure_set(v___f_659_, 4, v___x_658_);
lean_closure_set(v___f_659_, 5, v___x_646_);
lean_closure_set(v___f_659_, 6, v___y_656_);
lean_closure_set(v___f_659_, 7, v_ictx_647_);
v___x_660_ = lean_box(0);
v___f_661_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__2), 3, 2);
lean_closure_set(v___f_661_, 0, v___x_660_);
lean_closure_set(v___f_661_, 1, v_toPure_643_);
v___f_662_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__4), 8, 5);
lean_closure_set(v___f_662_, 0, v_text_640_);
lean_closure_set(v___f_662_, 1, v_logMessage_642_);
lean_closure_set(v___f_662_, 2, v_toBind_644_);
lean_closure_set(v___f_662_, 3, v___f_661_);
lean_closure_set(v___f_662_, 4, v_getFileName_645_);
v_sz_663_ = lean_array_size(v___x_658_);
v___x_664_ = ((size_t)0ULL);
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_648_, v___x_658_, v___f_662_, v_sz_663_, v___x_664_, v___x_660_);
v___x_666_ = lean_apply_4(v_toBind_644_, lean_box(0), lean_box(0), v___x_665_, v___f_659_);
return v___x_666_;
}
v___jp_674_:
{
if (v___y_675_ == 0)
{
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_669_);
lean_dec_ref(v_pmctx_667_);
v___y_656_ = v_s_673_;
goto v___jp_655_;
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v_pos_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_676_ = lean_box(0);
v___x_677_ = lean_box(0);
v___x_678_ = lean_unsigned_to_nat(1u);
lean_inc_n(v___x_646_, 3);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
lean_ctor_set(v___x_679_, 1, v___x_646_);
v___x_680_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_680_, 0, v___x_646_);
lean_ctor_set(v___x_680_, 1, v___x_676_);
lean_ctor_set(v___x_680_, 2, v___x_677_);
lean_ctor_set(v___x_680_, 3, v___x_679_);
lean_ctor_set(v___x_680_, 4, v___x_646_);
v_pos_681_ = lean_ctor_get(v_s_673_, 2);
lean_inc(v_pos_681_);
lean_dec_ref(v_s_673_);
v___x_682_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_682_, 0, v___x_680_);
v___x_683_ = l_Lean_Parser_ParserState_setPos(v___x_669_, v_pos_681_);
lean_inc_ref(v_ictx_647_);
v___x_684_ = l_Lean_Parser_ParserFn_run(v___x_682_, v_ictx_647_, v_pmctx_667_, v___x_672_, v___x_683_);
v___y_656_ = v___x_684_;
goto v___jp_655_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__6(lean_object* v_text_690_, lean_object* v_source_691_, lean_object* v_logMessage_692_, lean_object* v_toPure_693_, lean_object* v_toBind_694_, lean_object* v_getFileName_695_, lean_object* v___x_696_, lean_object* v_ictx_697_, lean_object* v_inst_698_, lean_object* v_env_699_, lean_object* v_____do__lift_700_, lean_object* v_val_701_, lean_object* v___y_702_, lean_object* v_getOpenDecls_703_, lean_object* v_____do__lift_704_){
_start:
{
lean_object* v___f_705_; lean_object* v___x_706_; 
lean_inc(v_toBind_694_);
v___f_705_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__5), 15, 14);
lean_closure_set(v___f_705_, 0, v_text_690_);
lean_closure_set(v___f_705_, 1, v_source_691_);
lean_closure_set(v___f_705_, 2, v_logMessage_692_);
lean_closure_set(v___f_705_, 3, v_toPure_693_);
lean_closure_set(v___f_705_, 4, v_toBind_694_);
lean_closure_set(v___f_705_, 5, v_getFileName_695_);
lean_closure_set(v___f_705_, 6, v___x_696_);
lean_closure_set(v___f_705_, 7, v_ictx_697_);
lean_closure_set(v___f_705_, 8, v_inst_698_);
lean_closure_set(v___f_705_, 9, v_env_699_);
lean_closure_set(v___f_705_, 10, v_____do__lift_700_);
lean_closure_set(v___f_705_, 11, v_____do__lift_704_);
lean_closure_set(v___f_705_, 12, v_val_701_);
lean_closure_set(v___f_705_, 13, v___y_702_);
v___x_706_ = lean_apply_4(v_toBind_694_, lean_box(0), lean_box(0), v_getOpenDecls_703_, v___f_705_);
return v___x_706_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__7(lean_object* v_inst_707_, lean_object* v_text_708_, lean_object* v_source_709_, lean_object* v_logMessage_710_, lean_object* v_toPure_711_, lean_object* v_toBind_712_, lean_object* v_getFileName_713_, lean_object* v___x_714_, lean_object* v_ictx_715_, lean_object* v_inst_716_, lean_object* v_env_717_, lean_object* v_val_718_, lean_object* v___y_719_, lean_object* v_____do__lift_720_){
_start:
{
lean_object* v_getCurrNamespace_721_; lean_object* v_getOpenDecls_722_; lean_object* v___f_723_; lean_object* v___x_724_; 
v_getCurrNamespace_721_ = lean_ctor_get(v_inst_707_, 0);
lean_inc(v_getCurrNamespace_721_);
v_getOpenDecls_722_ = lean_ctor_get(v_inst_707_, 1);
lean_inc(v_getOpenDecls_722_);
lean_dec_ref(v_inst_707_);
lean_inc(v_toBind_712_);
v___f_723_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__6), 15, 14);
lean_closure_set(v___f_723_, 0, v_text_708_);
lean_closure_set(v___f_723_, 1, v_source_709_);
lean_closure_set(v___f_723_, 2, v_logMessage_710_);
lean_closure_set(v___f_723_, 3, v_toPure_711_);
lean_closure_set(v___f_723_, 4, v_toBind_712_);
lean_closure_set(v___f_723_, 5, v_getFileName_713_);
lean_closure_set(v___f_723_, 6, v___x_714_);
lean_closure_set(v___f_723_, 7, v_ictx_715_);
lean_closure_set(v___f_723_, 8, v_inst_716_);
lean_closure_set(v___f_723_, 9, v_env_717_);
lean_closure_set(v___f_723_, 10, v_____do__lift_720_);
lean_closure_set(v___f_723_, 11, v_val_718_);
lean_closure_set(v___f_723_, 12, v___y_719_);
lean_closure_set(v___f_723_, 13, v_getOpenDecls_722_);
v___x_724_ = lean_apply_4(v_toBind_712_, lean_box(0), lean_box(0), v_getCurrNamespace_721_, v___f_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__8(lean_object* v_source_725_, lean_object* v_text_726_, lean_object* v___y_727_, lean_object* v_inst_728_, lean_object* v_logMessage_729_, lean_object* v_toPure_730_, lean_object* v_toBind_731_, lean_object* v_getFileName_732_, lean_object* v___x_733_, lean_object* v_inst_734_, lean_object* v_env_735_, lean_object* v_val_736_, lean_object* v_inst_737_, lean_object* v_____do__lift_738_){
_start:
{
lean_object* v_ictx_739_; lean_object* v___f_740_; lean_object* v___x_741_; 
lean_inc(v___y_727_);
lean_inc_ref(v_text_726_);
lean_inc_ref(v_source_725_);
v_ictx_739_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_739_, 0, v_source_725_);
lean_ctor_set(v_ictx_739_, 1, v_____do__lift_738_);
lean_ctor_set(v_ictx_739_, 2, v_text_726_);
lean_ctor_set(v_ictx_739_, 3, v___y_727_);
lean_inc(v_toBind_731_);
v___f_740_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__7), 14, 13);
lean_closure_set(v___f_740_, 0, v_inst_728_);
lean_closure_set(v___f_740_, 1, v_text_726_);
lean_closure_set(v___f_740_, 2, v_source_725_);
lean_closure_set(v___f_740_, 3, v_logMessage_729_);
lean_closure_set(v___f_740_, 4, v_toPure_730_);
lean_closure_set(v___f_740_, 5, v_toBind_731_);
lean_closure_set(v___f_740_, 6, v_getFileName_732_);
lean_closure_set(v___f_740_, 7, v___x_733_);
lean_closure_set(v___f_740_, 8, v_ictx_739_);
lean_closure_set(v___f_740_, 9, v_inst_734_);
lean_closure_set(v___f_740_, 10, v_env_735_);
lean_closure_set(v___f_740_, 11, v_val_736_);
lean_closure_set(v___f_740_, 12, v___y_727_);
v___x_741_ = lean_apply_4(v_toBind_731_, lean_box(0), lean_box(0), v_inst_737_, v___f_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__9(lean_object* v_inst_742_, lean_object* v_source_743_, lean_object* v_text_744_, lean_object* v___y_745_, lean_object* v_inst_746_, lean_object* v_toPure_747_, lean_object* v_toBind_748_, lean_object* v___x_749_, lean_object* v_inst_750_, lean_object* v_val_751_, lean_object* v_inst_752_, lean_object* v_env_753_){
_start:
{
lean_object* v_getFileName_754_; lean_object* v_logMessage_755_; lean_object* v___f_756_; lean_object* v___x_757_; 
v_getFileName_754_ = lean_ctor_get(v_inst_742_, 2);
lean_inc_n(v_getFileName_754_, 2);
v_logMessage_755_ = lean_ctor_get(v_inst_742_, 4);
lean_inc(v_logMessage_755_);
lean_dec_ref(v_inst_742_);
lean_inc(v_toBind_748_);
v___f_756_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__8), 14, 13);
lean_closure_set(v___f_756_, 0, v_source_743_);
lean_closure_set(v___f_756_, 1, v_text_744_);
lean_closure_set(v___f_756_, 2, v___y_745_);
lean_closure_set(v___f_756_, 3, v_inst_746_);
lean_closure_set(v___f_756_, 4, v_logMessage_755_);
lean_closure_set(v___f_756_, 5, v_toPure_747_);
lean_closure_set(v___f_756_, 6, v_toBind_748_);
lean_closure_set(v___f_756_, 7, v_getFileName_754_);
lean_closure_set(v___f_756_, 8, v___x_749_);
lean_closure_set(v___f_756_, 9, v_inst_750_);
lean_closure_set(v___f_756_, 10, v_env_753_);
lean_closure_set(v___f_756_, 11, v_val_751_);
lean_closure_set(v___f_756_, 12, v_inst_752_);
v___x_757_ = lean_apply_4(v_toBind_748_, lean_box(0), lean_box(0), v_getFileName_754_, v___f_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___lam__10(lean_object* v_inst_758_, lean_object* v_inst_759_, lean_object* v_inst_760_, lean_object* v_toPure_761_, lean_object* v_toBind_762_, lean_object* v___x_763_, lean_object* v_inst_764_, lean_object* v_val_765_, lean_object* v_inst_766_, lean_object* v_val_767_, lean_object* v_text_768_){
_start:
{
lean_object* v_source_769_; lean_object* v___y_771_; lean_object* v___x_775_; uint8_t v___x_776_; 
v_source_769_ = lean_ctor_get(v_text_768_, 0);
lean_inc_ref(v_source_769_);
v___x_775_ = lean_string_utf8_byte_size(v_source_769_);
v___x_776_ = lean_nat_dec_le(v_val_767_, v___x_775_);
if (v___x_776_ == 0)
{
lean_dec(v_val_767_);
v___y_771_ = v___x_775_;
goto v___jp_770_;
}
else
{
v___y_771_ = v_val_767_;
goto v___jp_770_;
}
v___jp_770_:
{
lean_object* v_getEnv_772_; lean_object* v___f_773_; lean_object* v___x_774_; 
v_getEnv_772_ = lean_ctor_get(v_inst_758_, 0);
lean_inc(v_getEnv_772_);
lean_dec_ref(v_inst_758_);
lean_inc(v_toBind_762_);
v___f_773_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__9), 12, 11);
lean_closure_set(v___f_773_, 0, v_inst_759_);
lean_closure_set(v___f_773_, 1, v_source_769_);
lean_closure_set(v___f_773_, 2, v_text_768_);
lean_closure_set(v___f_773_, 3, v___y_771_);
lean_closure_set(v___f_773_, 4, v_inst_760_);
lean_closure_set(v___f_773_, 5, v_toPure_761_);
lean_closure_set(v___f_773_, 6, v_toBind_762_);
lean_closure_set(v___f_773_, 7, v___x_763_);
lean_closure_set(v___f_773_, 8, v_inst_764_);
lean_closure_set(v___f_773_, 9, v_val_765_);
lean_closure_set(v___f_773_, 10, v_inst_766_);
v___x_774_ = lean_apply_4(v_toBind_762_, lean_box(0), lean_box(0), v_getEnv_772_, v___f_773_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg(lean_object* v_inst_777_, lean_object* v_inst_778_, lean_object* v_inst_779_, lean_object* v_inst_780_, lean_object* v_inst_781_, lean_object* v_inst_782_, lean_object* v_parseFailure_783_){
_start:
{
lean_object* v_toApplicative_784_; lean_object* v_toBind_785_; lean_object* v_toPure_786_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; lean_object* v___x_790_; 
v_toApplicative_784_ = lean_ctor_get(v_inst_777_, 0);
v_toBind_785_ = lean_ctor_get(v_inst_777_, 1);
lean_inc(v_toBind_785_);
v_toPure_786_ = lean_ctor_get(v_toApplicative_784_, 1);
lean_inc(v_toPure_786_);
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = l_Lean_Syntax_getArg(v_parseFailure_783_, v___x_787_);
v___x_789_ = 1;
v___x_790_ = l_Lean_Syntax_getPos_x3f(v___x_788_, v___x_789_);
if (lean_obj_tag(v___x_790_) == 1)
{
lean_object* v_val_791_; lean_object* v___x_792_; 
v_val_791_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_val_791_);
lean_dec_ref(v___x_790_);
v___x_792_ = l_Lean_Syntax_getTailPos_x3f(v___x_788_, v___x_789_);
lean_dec(v___x_788_);
if (lean_obj_tag(v___x_792_) == 1)
{
lean_object* v_val_793_; lean_object* v___f_794_; lean_object* v___x_795_; 
v_val_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_val_793_);
lean_dec_ref(v___x_792_);
lean_inc(v_toBind_785_);
v___f_794_ = lean_alloc_closure((void*)(l_Lean_reportVersoParseFailure___redArg___lam__10), 11, 10);
lean_closure_set(v___f_794_, 0, v_inst_779_);
lean_closure_set(v___f_794_, 1, v_inst_781_);
lean_closure_set(v___f_794_, 2, v_inst_782_);
lean_closure_set(v___f_794_, 3, v_toPure_786_);
lean_closure_set(v___f_794_, 4, v_toBind_785_);
lean_closure_set(v___f_794_, 5, v___x_787_);
lean_closure_set(v___f_794_, 6, v_inst_777_);
lean_closure_set(v___f_794_, 7, v_val_791_);
lean_closure_set(v___f_794_, 8, v_inst_780_);
lean_closure_set(v___f_794_, 9, v_val_793_);
v___x_795_ = lean_apply_4(v_toBind_785_, lean_box(0), lean_box(0), v_inst_778_, v___f_794_);
return v___x_795_;
}
else
{
lean_object* v___x_796_; lean_object* v___x_797_; 
lean_dec(v___x_792_);
lean_dec(v_val_791_);
lean_dec(v_toBind_785_);
lean_dec_ref(v_inst_782_);
lean_dec_ref(v_inst_781_);
lean_dec(v_inst_780_);
lean_dec_ref(v_inst_779_);
lean_dec(v_inst_778_);
lean_dec_ref(v_inst_777_);
v___x_796_ = lean_box(0);
v___x_797_ = lean_apply_2(v_toPure_786_, lean_box(0), v___x_796_);
return v___x_797_;
}
}
else
{
lean_object* v___x_798_; lean_object* v___x_799_; 
lean_dec(v___x_790_);
lean_dec(v___x_788_);
lean_dec(v_toBind_785_);
lean_dec_ref(v_inst_782_);
lean_dec_ref(v_inst_781_);
lean_dec(v_inst_780_);
lean_dec_ref(v_inst_779_);
lean_dec(v_inst_778_);
lean_dec_ref(v_inst_777_);
v___x_798_ = lean_box(0);
v___x_799_ = lean_apply_2(v_toPure_786_, lean_box(0), v___x_798_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___redArg___boxed(lean_object* v_inst_800_, lean_object* v_inst_801_, lean_object* v_inst_802_, lean_object* v_inst_803_, lean_object* v_inst_804_, lean_object* v_inst_805_, lean_object* v_parseFailure_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_reportVersoParseFailure___redArg(v_inst_800_, v_inst_801_, v_inst_802_, v_inst_803_, v_inst_804_, v_inst_805_, v_parseFailure_806_);
lean_dec(v_parseFailure_806_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure(lean_object* v_m_808_, lean_object* v_inst_809_, lean_object* v_inst_810_, lean_object* v_inst_811_, lean_object* v_inst_812_, lean_object* v_inst_813_, lean_object* v_inst_814_, lean_object* v_inst_815_, lean_object* v_parseFailure_816_){
_start:
{
lean_object* v___x_817_; 
v___x_817_ = l_Lean_reportVersoParseFailure___redArg(v_inst_809_, v_inst_810_, v_inst_812_, v_inst_813_, v_inst_814_, v_inst_815_, v_parseFailure_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* l_Lean_reportVersoParseFailure___boxed(lean_object* v_m_818_, lean_object* v_inst_819_, lean_object* v_inst_820_, lean_object* v_inst_821_, lean_object* v_inst_822_, lean_object* v_inst_823_, lean_object* v_inst_824_, lean_object* v_inst_825_, lean_object* v_parseFailure_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_reportVersoParseFailure(v_m_818_, v_inst_819_, v_inst_820_, v_inst_821_, v_inst_822_, v_inst_823_, v_inst_824_, v_inst_825_, v_parseFailure_826_);
lean_dec(v_parseFailure_826_);
lean_dec_ref(v_inst_821_);
return v_res_827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(size_t v_sz_828_, size_t v_i_829_, lean_object* v_bs_830_){
_start:
{
uint8_t v___x_831_; 
v___x_831_ = lean_usize_dec_lt(v_i_829_, v_sz_828_);
if (v___x_831_ == 0)
{
return v_bs_830_;
}
else
{
lean_object* v_v_832_; lean_object* v___x_833_; lean_object* v_bs_x27_834_; size_t v___x_835_; size_t v___x_836_; lean_object* v___x_837_; 
v_v_832_ = lean_array_uget(v_bs_830_, v_i_829_);
v___x_833_ = lean_unsigned_to_nat(0u);
v_bs_x27_834_ = lean_array_uset(v_bs_830_, v_i_829_, v___x_833_);
v___x_835_ = ((size_t)1ULL);
v___x_836_ = lean_usize_add(v_i_829_, v___x_835_);
v___x_837_ = lean_array_uset(v_bs_x27_834_, v_i_829_, v_v_832_);
v_i_829_ = v___x_836_;
v_bs_830_ = v___x_837_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1___boxed(lean_object* v_sz_839_, lean_object* v_i_840_, lean_object* v_bs_841_){
_start:
{
size_t v_sz_boxed_842_; size_t v_i_boxed_843_; lean_object* v_res_844_; 
v_sz_boxed_842_ = lean_unbox_usize(v_sz_839_);
lean_dec(v_sz_839_);
v_i_boxed_843_ = lean_unbox_usize(v_i_840_);
lean_dec(v_i_840_);
v_res_844_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_boxed_842_, v_i_boxed_843_, v_bs_841_);
return v_res_844_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0(void){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_845_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1(void){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_846_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2(void){
_start:
{
lean_object* v___x_847_; 
v___x_847_ = lean_mk_string_unchecked("unsolvedGoals", 13, 13);
return v___x_847_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3(void){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = lean_mk_string_unchecked("synthPlaceholder", 16, 16);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_849_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5(void){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = lean_mk_string_unchecked("inductionWithNoAlts", 19, 19);
return v___x_850_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6(void){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = lean_mk_string_unchecked("_namedError", 11, 11);
return v___x_851_;
}
}
static lean_object* _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7(void){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_852_;
}
}
LEAN_EXPORT uint8_t l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(uint8_t v___x_853_, uint8_t v_suppressElabErrors_854_, lean_object* v_x_855_){
_start:
{
if (lean_obj_tag(v_x_855_) == 1)
{
lean_object* v_pre_856_; 
v_pre_856_ = lean_ctor_get(v_x_855_, 0);
switch(lean_obj_tag(v_pre_856_))
{
case 1:
{
lean_object* v_pre_857_; 
v_pre_857_ = lean_ctor_get(v_pre_856_, 0);
switch(lean_obj_tag(v_pre_857_))
{
case 0:
{
lean_object* v_str_858_; lean_object* v_str_859_; lean_object* v___x_860_; uint8_t v___x_861_; 
v_str_858_ = lean_ctor_get(v_x_855_, 1);
v_str_859_ = lean_ctor_get(v_pre_856_, 1);
v___x_860_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0);
v___x_861_ = lean_string_dec_eq(v_str_859_, v___x_860_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; uint8_t v___x_863_; 
v___x_862_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1);
v___x_863_ = lean_string_dec_eq(v_str_859_, v___x_862_);
if (v___x_863_ == 0)
{
return v___x_853_;
}
else
{
lean_object* v___x_864_; uint8_t v___x_865_; 
v___x_864_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2);
v___x_865_ = lean_string_dec_eq(v_str_858_, v___x_864_);
if (v___x_865_ == 0)
{
return v___x_853_;
}
else
{
return v_suppressElabErrors_854_;
}
}
}
else
{
lean_object* v___x_866_; uint8_t v___x_867_; 
v___x_866_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3);
v___x_867_ = lean_string_dec_eq(v_str_858_, v___x_866_);
if (v___x_867_ == 0)
{
return v___x_853_;
}
else
{
return v_suppressElabErrors_854_;
}
}
}
case 1:
{
lean_object* v_pre_868_; 
v_pre_868_ = lean_ctor_get(v_pre_857_, 0);
if (lean_obj_tag(v_pre_868_) == 0)
{
lean_object* v_str_869_; lean_object* v_str_870_; lean_object* v_str_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v_str_869_ = lean_ctor_get(v_x_855_, 1);
v_str_870_ = lean_ctor_get(v_pre_856_, 1);
v_str_871_ = lean_ctor_get(v_pre_857_, 1);
v___x_872_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4);
v___x_873_ = lean_string_dec_eq(v_str_871_, v___x_872_);
if (v___x_873_ == 0)
{
return v___x_853_;
}
else
{
lean_object* v___x_874_; uint8_t v___x_875_; 
v___x_874_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5);
v___x_875_ = lean_string_dec_eq(v_str_870_, v___x_874_);
if (v___x_875_ == 0)
{
return v___x_853_;
}
else
{
lean_object* v___x_876_; uint8_t v___x_877_; 
v___x_876_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6);
v___x_877_ = lean_string_dec_eq(v_str_869_, v___x_876_);
if (v___x_877_ == 0)
{
return v___x_853_;
}
else
{
return v_suppressElabErrors_854_;
}
}
}
}
else
{
return v___x_853_;
}
}
default: 
{
return v___x_853_;
}
}
}
case 0:
{
lean_object* v_str_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
v_str_878_ = lean_ctor_get(v_x_855_, 1);
v___x_879_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7);
v___x_880_ = lean_string_dec_eq(v_str_878_, v___x_879_);
if (v___x_880_ == 0)
{
return v___x_853_;
}
else
{
return v_suppressElabErrors_854_;
}
}
default: 
{
return v___x_853_;
}
}
}
else
{
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed(lean_object* v___x_881_, lean_object* v_suppressElabErrors_882_, lean_object* v_x_883_){
_start:
{
uint8_t v___x_10549__boxed_884_; uint8_t v_suppressElabErrors_boxed_885_; uint8_t v_res_886_; lean_object* v_r_887_; 
v___x_10549__boxed_884_ = lean_unbox(v___x_881_);
v_suppressElabErrors_boxed_885_ = lean_unbox(v_suppressElabErrors_882_);
v_res_886_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0(v___x_10549__boxed_884_, v_suppressElabErrors_boxed_885_, v_x_883_);
lean_dec(v_x_883_);
v_r_887_ = lean_box(v_res_886_);
return v_r_887_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = lean_box(1);
v___x_889_ = l_Lean_MessageData_ofFormat(v___x_888_);
return v___x_889_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1(void){
_start:
{
lean_object* v___x_890_; 
v___x_890_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_890_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2(void){
_start:
{
lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_891_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__1);
v___x_892_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_892_, 0, v___x_891_);
return v___x_892_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3(void){
_start:
{
lean_object* v___x_893_; lean_object* v___x_894_; 
v___x_893_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__2);
v___x_894_ = l_Lean_MessageData_ofFormat(v___x_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7(lean_object* v_x_895_, lean_object* v_x_896_){
_start:
{
if (lean_obj_tag(v_x_896_) == 0)
{
return v_x_895_;
}
else
{
lean_object* v_head_897_; lean_object* v_tail_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_920_; 
v_head_897_ = lean_ctor_get(v_x_896_, 0);
v_tail_898_ = lean_ctor_get(v_x_896_, 1);
v_isSharedCheck_920_ = !lean_is_exclusive(v_x_896_);
if (v_isSharedCheck_920_ == 0)
{
v___x_900_ = v_x_896_;
v_isShared_901_ = v_isSharedCheck_920_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_tail_898_);
lean_inc(v_head_897_);
lean_dec(v_x_896_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_920_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v_before_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_918_; 
v_before_902_ = lean_ctor_get(v_head_897_, 0);
v_isSharedCheck_918_ = !lean_is_exclusive(v_head_897_);
if (v_isSharedCheck_918_ == 0)
{
lean_object* v_unused_919_; 
v_unused_919_ = lean_ctor_get(v_head_897_, 1);
lean_dec(v_unused_919_);
v___x_904_ = v_head_897_;
v_isShared_905_ = v_isSharedCheck_918_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_before_902_);
lean_dec(v_head_897_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_918_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_906_; lean_object* v___x_908_; 
v___x_906_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0);
if (v_isShared_905_ == 0)
{
lean_ctor_set_tag(v___x_904_, 7);
lean_ctor_set(v___x_904_, 1, v___x_906_);
lean_ctor_set(v___x_904_, 0, v_x_895_);
v___x_908_ = v___x_904_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_x_895_);
lean_ctor_set(v_reuseFailAlloc_917_, 1, v___x_906_);
v___x_908_ = v_reuseFailAlloc_917_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
lean_object* v___x_909_; lean_object* v___x_911_; 
v___x_909_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__3);
if (v_isShared_901_ == 0)
{
lean_ctor_set_tag(v___x_900_, 7);
lean_ctor_set(v___x_900_, 1, v___x_909_);
lean_ctor_set(v___x_900_, 0, v___x_908_);
v___x_911_ = v___x_900_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_908_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v___x_909_);
v___x_911_ = v_reuseFailAlloc_916_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_912_ = l_Lean_MessageData_ofSyntax(v_before_902_);
v___x_913_ = l_Lean_indentD(v___x_912_);
v___x_914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_911_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v_x_895_ = v___x_914_;
v_x_896_ = v_tail_898_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(lean_object* v_opts_921_, lean_object* v_opt_922_){
_start:
{
lean_object* v_name_923_; lean_object* v_defValue_924_; lean_object* v_map_925_; lean_object* v___x_926_; 
v_name_923_ = lean_ctor_get(v_opt_922_, 0);
v_defValue_924_ = lean_ctor_get(v_opt_922_, 1);
v_map_925_ = lean_ctor_get(v_opts_921_, 0);
v___x_926_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_925_, v_name_923_);
if (lean_obj_tag(v___x_926_) == 0)
{
uint8_t v___x_927_; 
v___x_927_ = lean_unbox(v_defValue_924_);
return v___x_927_;
}
else
{
lean_object* v_val_928_; 
v_val_928_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_val_928_);
lean_dec_ref(v___x_926_);
if (lean_obj_tag(v_val_928_) == 1)
{
uint8_t v_v_929_; 
v_v_929_ = lean_ctor_get_uint8(v_val_928_, 0);
lean_dec_ref(v_val_928_);
return v_v_929_;
}
else
{
uint8_t v___x_930_; 
lean_dec(v_val_928_);
v___x_930_ = lean_unbox(v_defValue_924_);
return v___x_930_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6___boxed(lean_object* v_opts_931_, lean_object* v_opt_932_){
_start:
{
uint8_t v_res_933_; lean_object* v_r_934_; 
v_res_933_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_opts_931_, v_opt_932_);
lean_dec_ref(v_opt_932_);
lean_dec_ref(v_opts_931_);
v_r_934_ = lean_box(v_res_933_);
return v_r_934_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_935_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__0);
v___x_937_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; 
v___x_938_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__1);
v___x_939_ = l_Lean_MessageData_ofFormat(v___x_938_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(lean_object* v_msgData_940_, lean_object* v_macroStack_941_, lean_object* v___y_942_){
_start:
{
lean_object* v_options_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v_options_944_ = lean_ctor_get(v___y_942_, 2);
v___x_945_ = l_Lean_Elab_pp_macroStack;
v___x_946_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_options_944_, v___x_945_);
if (v___x_946_ == 0)
{
lean_object* v___x_947_; 
lean_dec(v_macroStack_941_);
v___x_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_947_, 0, v_msgData_940_);
return v___x_947_;
}
else
{
if (lean_obj_tag(v_macroStack_941_) == 0)
{
lean_object* v___x_948_; 
v___x_948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_948_, 0, v_msgData_940_);
return v___x_948_;
}
else
{
lean_object* v_head_949_; lean_object* v_after_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_965_; 
v_head_949_ = lean_ctor_get(v_macroStack_941_, 0);
lean_inc(v_head_949_);
v_after_950_ = lean_ctor_get(v_head_949_, 1);
v_isSharedCheck_965_ = !lean_is_exclusive(v_head_949_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; 
v_unused_966_ = lean_ctor_get(v_head_949_, 0);
lean_dec(v_unused_966_);
v___x_952_ = v_head_949_;
v_isShared_953_ = v_isSharedCheck_965_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_after_950_);
lean_dec(v_head_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_965_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_954_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7___closed__0);
if (v_isShared_953_ == 0)
{
lean_ctor_set_tag(v___x_952_, 7);
lean_ctor_set(v___x_952_, 1, v___x_954_);
lean_ctor_set(v___x_952_, 0, v_msgData_940_);
v___x_956_ = v___x_952_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_msgData_940_);
lean_ctor_set(v_reuseFailAlloc_964_, 1, v___x_954_);
v___x_956_ = v_reuseFailAlloc_964_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v_msgData_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_957_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___closed__2);
v___x_958_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_958_, 0, v___x_956_);
lean_ctor_set(v___x_958_, 1, v___x_957_);
v___x_959_ = l_Lean_MessageData_ofSyntax(v_after_950_);
v___x_960_ = l_Lean_indentD(v___x_959_);
v_msgData_961_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_961_, 0, v___x_958_);
lean_ctor_set(v_msgData_961_, 1, v___x_960_);
v___x_962_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__7(v_msgData_961_, v_macroStack_941_);
v___x_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_963_, 0, v___x_962_);
return v___x_963_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_msgData_967_, lean_object* v_macroStack_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(v_msgData_967_, v_macroStack_968_, v___y_969_);
lean_dec_ref(v___y_969_);
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(lean_object* v_msgData_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; lean_object* v_env_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v_mctx_982_; lean_object* v_lctx_983_; lean_object* v_options_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_978_ = lean_st_ref_get(v___y_976_);
v_env_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc_ref(v_env_979_);
lean_dec(v___x_978_);
v___x_980_ = lean_st_ref_get(v___y_976_);
lean_dec(v___x_980_);
v___x_981_ = lean_st_ref_get(v___y_974_);
v_mctx_982_ = lean_ctor_get(v___x_981_, 0);
lean_inc_ref(v_mctx_982_);
lean_dec(v___x_981_);
v_lctx_983_ = lean_ctor_get(v___y_973_, 2);
v_options_984_ = lean_ctor_get(v___y_975_, 2);
lean_inc_ref(v_options_984_);
lean_inc_ref(v_lctx_983_);
v___x_985_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_985_, 0, v_env_979_);
lean_ctor_set(v___x_985_, 1, v_mctx_982_);
lean_ctor_set(v___x_985_, 2, v_lctx_983_);
lean_ctor_set(v___x_985_, 3, v_options_984_);
v___x_986_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v_msgData_972_);
v___x_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_987_, 0, v___x_986_);
return v___x_987_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_msgData_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_){
_start:
{
lean_object* v_res_994_; 
v_res_994_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v_msgData_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
return v_res_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(lean_object* v_msg_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v_ref_1003_; lean_object* v___x_1004_; lean_object* v_a_1005_; lean_object* v_macroStack_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1017_; 
v_ref_1003_ = lean_ctor_get(v___y_1000_, 5);
v___x_1004_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v_msg_995_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
v_a_1005_ = lean_ctor_get(v___x_1004_, 0);
lean_inc(v_a_1005_);
lean_dec_ref(v___x_1004_);
v_macroStack_1006_ = lean_ctor_get(v___y_996_, 1);
v___x_1007_ = l_Lean_Elab_getBetterRef(v_ref_1003_, v_macroStack_1006_);
lean_inc(v_macroStack_1006_);
v___x_1008_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(v_a_1005_, v_macroStack_1006_, v___y_1000_);
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1017_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1013_; lean_object* v___x_1015_; 
v___x_1013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1013_, 0, v___x_1007_);
lean_ctor_set(v___x_1013_, 1, v_a_1009_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set_tag(v___x_1011_, 1);
lean_ctor_set(v___x_1011_, 0, v___x_1013_);
v___x_1015_ = v___x_1011_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v___x_1013_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_msg_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v_res_1026_; 
v_res_1026_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_);
lean_dec(v___y_1024_);
lean_dec_ref(v___y_1023_);
lean_dec(v___y_1022_);
lean_dec_ref(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
return v_res_1026_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(lean_object* v_ref_1027_, lean_object* v_msg_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_){
_start:
{
lean_object* v_fileName_1036_; lean_object* v_fileMap_1037_; lean_object* v_options_1038_; lean_object* v_currRecDepth_1039_; lean_object* v_maxRecDepth_1040_; lean_object* v_ref_1041_; lean_object* v_currNamespace_1042_; lean_object* v_openDecls_1043_; lean_object* v_initHeartbeats_1044_; lean_object* v_maxHeartbeats_1045_; lean_object* v_quotContext_1046_; lean_object* v_currMacroScope_1047_; uint8_t v_diag_1048_; lean_object* v_cancelTk_x3f_1049_; uint8_t v_suppressElabErrors_1050_; lean_object* v_inheritedTraceOptions_1051_; lean_object* v_ref_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; 
v_fileName_1036_ = lean_ctor_get(v___y_1033_, 0);
v_fileMap_1037_ = lean_ctor_get(v___y_1033_, 1);
v_options_1038_ = lean_ctor_get(v___y_1033_, 2);
v_currRecDepth_1039_ = lean_ctor_get(v___y_1033_, 3);
v_maxRecDepth_1040_ = lean_ctor_get(v___y_1033_, 4);
v_ref_1041_ = lean_ctor_get(v___y_1033_, 5);
v_currNamespace_1042_ = lean_ctor_get(v___y_1033_, 6);
v_openDecls_1043_ = lean_ctor_get(v___y_1033_, 7);
v_initHeartbeats_1044_ = lean_ctor_get(v___y_1033_, 8);
v_maxHeartbeats_1045_ = lean_ctor_get(v___y_1033_, 9);
v_quotContext_1046_ = lean_ctor_get(v___y_1033_, 10);
v_currMacroScope_1047_ = lean_ctor_get(v___y_1033_, 11);
v_diag_1048_ = lean_ctor_get_uint8(v___y_1033_, sizeof(void*)*14);
v_cancelTk_x3f_1049_ = lean_ctor_get(v___y_1033_, 12);
v_suppressElabErrors_1050_ = lean_ctor_get_uint8(v___y_1033_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1051_ = lean_ctor_get(v___y_1033_, 13);
v_ref_1052_ = l_Lean_replaceRef(v_ref_1027_, v_ref_1041_);
lean_inc_ref(v_inheritedTraceOptions_1051_);
lean_inc(v_cancelTk_x3f_1049_);
lean_inc(v_currMacroScope_1047_);
lean_inc(v_quotContext_1046_);
lean_inc(v_maxHeartbeats_1045_);
lean_inc(v_initHeartbeats_1044_);
lean_inc(v_openDecls_1043_);
lean_inc(v_currNamespace_1042_);
lean_inc(v_maxRecDepth_1040_);
lean_inc(v_currRecDepth_1039_);
lean_inc_ref(v_options_1038_);
lean_inc_ref(v_fileMap_1037_);
lean_inc_ref(v_fileName_1036_);
v___x_1053_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1053_, 0, v_fileName_1036_);
lean_ctor_set(v___x_1053_, 1, v_fileMap_1037_);
lean_ctor_set(v___x_1053_, 2, v_options_1038_);
lean_ctor_set(v___x_1053_, 3, v_currRecDepth_1039_);
lean_ctor_set(v___x_1053_, 4, v_maxRecDepth_1040_);
lean_ctor_set(v___x_1053_, 5, v_ref_1052_);
lean_ctor_set(v___x_1053_, 6, v_currNamespace_1042_);
lean_ctor_set(v___x_1053_, 7, v_openDecls_1043_);
lean_ctor_set(v___x_1053_, 8, v_initHeartbeats_1044_);
lean_ctor_set(v___x_1053_, 9, v_maxHeartbeats_1045_);
lean_ctor_set(v___x_1053_, 10, v_quotContext_1046_);
lean_ctor_set(v___x_1053_, 11, v_currMacroScope_1047_);
lean_ctor_set(v___x_1053_, 12, v_cancelTk_x3f_1049_);
lean_ctor_set(v___x_1053_, 13, v_inheritedTraceOptions_1051_);
lean_ctor_set_uint8(v___x_1053_, sizeof(void*)*14, v_diag_1048_);
lean_ctor_set_uint8(v___x_1053_, sizeof(void*)*14 + 1, v_suppressElabErrors_1050_);
v___x_1054_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___x_1053_, v___y_1034_);
lean_dec_ref(v___x_1053_);
return v___x_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg___boxed(lean_object* v_ref_1055_, lean_object* v_msg_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_1055_, v_msg_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v_ref_1055_);
return v_res_1064_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(uint8_t v___x_1065_, uint8_t v_suppressElabErrors_1066_, lean_object* v_x_1067_){
_start:
{
if (lean_obj_tag(v_x_1067_) == 1)
{
lean_object* v_pre_1068_; 
v_pre_1068_ = lean_ctor_get(v_x_1067_, 0);
switch(lean_obj_tag(v_pre_1068_))
{
case 1:
{
lean_object* v_pre_1069_; 
v_pre_1069_ = lean_ctor_get(v_pre_1068_, 0);
switch(lean_obj_tag(v_pre_1069_))
{
case 0:
{
lean_object* v_str_1070_; lean_object* v_str_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_str_1070_ = lean_ctor_get(v_x_1067_, 1);
v_str_1071_ = lean_ctor_get(v_pre_1068_, 1);
v___x_1072_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0);
v___x_1073_ = lean_string_dec_eq(v_str_1071_, v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1074_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1);
v___x_1075_ = lean_string_dec_eq(v_str_1071_, v___x_1074_);
if (v___x_1075_ == 0)
{
return v___x_1065_;
}
else
{
lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1076_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2);
v___x_1077_ = lean_string_dec_eq(v_str_1070_, v___x_1076_);
if (v___x_1077_ == 0)
{
return v___x_1065_;
}
else
{
return v_suppressElabErrors_1066_;
}
}
}
else
{
lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1078_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3);
v___x_1079_ = lean_string_dec_eq(v_str_1070_, v___x_1078_);
if (v___x_1079_ == 0)
{
return v___x_1065_;
}
else
{
return v_suppressElabErrors_1066_;
}
}
}
case 1:
{
lean_object* v_pre_1080_; 
v_pre_1080_ = lean_ctor_get(v_pre_1069_, 0);
if (lean_obj_tag(v_pre_1080_) == 0)
{
lean_object* v_str_1081_; lean_object* v_str_1082_; lean_object* v_str_1083_; lean_object* v___x_1084_; uint8_t v___x_1085_; 
v_str_1081_ = lean_ctor_get(v_x_1067_, 1);
v_str_1082_ = lean_ctor_get(v_pre_1068_, 1);
v_str_1083_ = lean_ctor_get(v_pre_1069_, 1);
v___x_1084_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4);
v___x_1085_ = lean_string_dec_eq(v_str_1083_, v___x_1084_);
if (v___x_1085_ == 0)
{
return v___x_1065_;
}
else
{
lean_object* v___x_1086_; uint8_t v___x_1087_; 
v___x_1086_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5);
v___x_1087_ = lean_string_dec_eq(v_str_1082_, v___x_1086_);
if (v___x_1087_ == 0)
{
return v___x_1065_;
}
else
{
lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1088_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6);
v___x_1089_ = lean_string_dec_eq(v_str_1081_, v___x_1088_);
if (v___x_1089_ == 0)
{
return v___x_1065_;
}
else
{
return v_suppressElabErrors_1066_;
}
}
}
}
else
{
return v___x_1065_;
}
}
default: 
{
return v___x_1065_;
}
}
}
case 0:
{
lean_object* v_str_1090_; lean_object* v___x_1091_; uint8_t v___x_1092_; 
v_str_1090_ = lean_ctor_get(v_x_1067_, 1);
v___x_1091_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7);
v___x_1092_ = lean_string_dec_eq(v_str_1090_, v___x_1091_);
if (v___x_1092_ == 0)
{
return v___x_1065_;
}
else
{
return v_suppressElabErrors_1066_;
}
}
default: 
{
return v___x_1065_;
}
}
}
else
{
return v___x_1065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v___x_1093_, lean_object* v_suppressElabErrors_1094_, lean_object* v_x_1095_){
_start:
{
uint8_t v___x_10866__boxed_1096_; uint8_t v_suppressElabErrors_boxed_1097_; uint8_t v_res_1098_; lean_object* v_r_1099_; 
v___x_10866__boxed_1096_ = lean_unbox(v___x_1093_);
v_suppressElabErrors_boxed_1097_ = lean_unbox(v_suppressElabErrors_1094_);
v_res_1098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0(v___x_10866__boxed_1096_, v_suppressElabErrors_boxed_1097_, v_x_1095_);
lean_dec(v_x_1095_);
v_r_1099_ = lean_box(v_res_1098_);
return v_r_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(lean_object* v___x_1100_, lean_object* v___x_1101_, lean_object* v_as_1102_, size_t v_sz_1103_, size_t v_i_1104_, lean_object* v_b_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_){
_start:
{
lean_object* v_a_1110_; uint8_t v___x_1114_; 
v___x_1114_ = lean_usize_dec_lt(v_i_1104_, v_sz_1103_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; 
lean_dec_ref(v___x_1100_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v_b_1105_);
return v___x_1115_;
}
else
{
lean_object* v_a_1116_; lean_object* v_snd_1117_; lean_object* v_fst_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1175_; 
v_a_1116_ = lean_array_uget(v_as_1102_, v_i_1104_);
v_snd_1117_ = lean_ctor_get(v_a_1116_, 1);
v_fst_1118_ = lean_ctor_get(v_a_1116_, 0);
v_isSharedCheck_1175_ = !lean_is_exclusive(v_a_1116_);
if (v_isSharedCheck_1175_ == 0)
{
v___x_1120_ = v_a_1116_;
v_isShared_1121_ = v_isSharedCheck_1175_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_snd_1117_);
lean_inc(v_fst_1118_);
lean_dec(v_a_1116_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1175_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v_snd_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1173_; 
v_snd_1122_ = lean_ctor_get(v_snd_1117_, 1);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_snd_1117_);
if (v_isSharedCheck_1173_ == 0)
{
lean_object* v_unused_1174_; 
v_unused_1174_ = lean_ctor_get(v_snd_1117_, 0);
lean_dec(v_unused_1174_);
v___x_1124_ = v_snd_1117_;
v_isShared_1125_ = v_isSharedCheck_1173_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_snd_1122_);
lean_dec(v_snd_1117_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1173_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v_fileName_1126_; uint8_t v_suppressElabErrors_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; uint8_t v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___y_1139_; lean_object* v___y_1140_; 
v_fileName_1126_ = lean_ctor_get(v___y_1106_, 0);
v_suppressElabErrors_1127_ = lean_ctor_get_uint8(v___y_1106_, sizeof(void*)*14 + 1);
v___x_1128_ = lean_box(0);
v___x_1129_ = lean_unsigned_to_nat(0u);
v___x_1130_ = lean_nat_dec_eq(v___x_1101_, v___x_1129_);
lean_inc_ref(v___x_1100_);
v___x_1131_ = l_Lean_FileMap_toPosition(v___x_1100_, v_fst_1118_);
lean_dec(v_fst_1118_);
v___x_1132_ = lean_box(0);
v___x_1133_ = 2;
v___x_1134_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__3___closed__0, &l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0);
v___x_1135_ = l_Lean_Parser_Error_toString(v_snd_1122_);
v___x_1136_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
v___x_1137_ = l_Lean_MessageData_ofFormat(v___x_1136_);
if (v_suppressElabErrors_1127_ == 0)
{
v___y_1139_ = v___y_1106_;
v___y_1140_ = v___y_1107_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___f_1171_; uint8_t v___x_1172_; 
v___x_1169_ = lean_box(v___x_1130_);
v___x_1170_ = lean_box(v_suppressElabErrors_1127_);
v___f_1171_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1171_, 0, v___x_1169_);
lean_closure_set(v___f_1171_, 1, v___x_1170_);
lean_inc_ref(v___x_1137_);
v___x_1172_ = l_Lean_MessageData_hasTag(v___f_1171_, v___x_1137_);
if (v___x_1172_ == 0)
{
lean_dec_ref(v___x_1137_);
lean_dec_ref(v___x_1131_);
lean_del_object(v___x_1124_);
lean_del_object(v___x_1120_);
v_a_1110_ = v___x_1128_;
goto v___jp_1109_;
}
else
{
v___y_1139_ = v___y_1106_;
v___y_1140_ = v___y_1107_;
goto v___jp_1138_;
}
}
v___jp_1138_:
{
lean_object* v___x_1141_; lean_object* v_currNamespace_1142_; lean_object* v_openDecls_1143_; lean_object* v___x_1145_; 
v___x_1141_ = lean_st_ref_take(v___y_1140_);
v_currNamespace_1142_ = lean_ctor_get(v___y_1139_, 6);
v_openDecls_1143_ = lean_ctor_get(v___y_1139_, 7);
lean_inc(v_openDecls_1143_);
lean_inc(v_currNamespace_1142_);
if (v_isShared_1125_ == 0)
{
lean_ctor_set(v___x_1124_, 1, v_openDecls_1143_);
lean_ctor_set(v___x_1124_, 0, v_currNamespace_1142_);
v___x_1145_ = v___x_1124_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_currNamespace_1142_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_openDecls_1143_);
v___x_1145_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1147_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set_tag(v___x_1120_, 4);
lean_ctor_set(v___x_1120_, 1, v___x_1137_);
lean_ctor_set(v___x_1120_, 0, v___x_1145_);
v___x_1147_ = v___x_1120_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1167_, 1, v___x_1137_);
v___x_1147_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
lean_object* v___x_1148_; lean_object* v_env_1149_; lean_object* v_nextMacroScope_1150_; lean_object* v_ngen_1151_; lean_object* v_auxDeclNGen_1152_; lean_object* v_traceState_1153_; lean_object* v_cache_1154_; lean_object* v_messages_1155_; lean_object* v_infoState_1156_; lean_object* v_snapshotTasks_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1166_; 
lean_inc_ref(v_fileName_1126_);
v___x_1148_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1148_, 0, v_fileName_1126_);
lean_ctor_set(v___x_1148_, 1, v___x_1131_);
lean_ctor_set(v___x_1148_, 2, v___x_1132_);
lean_ctor_set(v___x_1148_, 3, v___x_1134_);
lean_ctor_set(v___x_1148_, 4, v___x_1147_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*5, v___x_1130_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*5 + 1, v___x_1133_);
lean_ctor_set_uint8(v___x_1148_, sizeof(void*)*5 + 2, v___x_1130_);
v_env_1149_ = lean_ctor_get(v___x_1141_, 0);
v_nextMacroScope_1150_ = lean_ctor_get(v___x_1141_, 1);
v_ngen_1151_ = lean_ctor_get(v___x_1141_, 2);
v_auxDeclNGen_1152_ = lean_ctor_get(v___x_1141_, 3);
v_traceState_1153_ = lean_ctor_get(v___x_1141_, 4);
v_cache_1154_ = lean_ctor_get(v___x_1141_, 5);
v_messages_1155_ = lean_ctor_get(v___x_1141_, 6);
v_infoState_1156_ = lean_ctor_get(v___x_1141_, 7);
v_snapshotTasks_1157_ = lean_ctor_get(v___x_1141_, 8);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1159_ = v___x_1141_;
v_isShared_1160_ = v_isSharedCheck_1166_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_snapshotTasks_1157_);
lean_inc(v_infoState_1156_);
lean_inc(v_messages_1155_);
lean_inc(v_cache_1154_);
lean_inc(v_traceState_1153_);
lean_inc(v_auxDeclNGen_1152_);
lean_inc(v_ngen_1151_);
lean_inc(v_nextMacroScope_1150_);
lean_inc(v_env_1149_);
lean_dec(v___x_1141_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1166_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1163_; 
v___x_1161_ = l_Lean_MessageLog_add(v___x_1148_, v_messages_1155_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 6, v___x_1161_);
v___x_1163_ = v___x_1159_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_env_1149_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v_nextMacroScope_1150_);
lean_ctor_set(v_reuseFailAlloc_1165_, 2, v_ngen_1151_);
lean_ctor_set(v_reuseFailAlloc_1165_, 3, v_auxDeclNGen_1152_);
lean_ctor_set(v_reuseFailAlloc_1165_, 4, v_traceState_1153_);
lean_ctor_set(v_reuseFailAlloc_1165_, 5, v_cache_1154_);
lean_ctor_set(v_reuseFailAlloc_1165_, 6, v___x_1161_);
lean_ctor_set(v_reuseFailAlloc_1165_, 7, v_infoState_1156_);
lean_ctor_set(v_reuseFailAlloc_1165_, 8, v_snapshotTasks_1157_);
v___x_1163_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_st_ref_set(v___y_1140_, v___x_1163_);
v_a_1110_ = v___x_1128_;
goto v___jp_1109_;
}
}
}
}
}
}
}
}
v___jp_1109_:
{
size_t v___x_1111_; size_t v___x_1112_; 
v___x_1111_ = ((size_t)1ULL);
v___x_1112_ = lean_usize_add(v_i_1104_, v___x_1111_);
v_i_1104_ = v___x_1112_;
v_b_1105_ = v_a_1110_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg___boxed(lean_object* v___x_1176_, lean_object* v___x_1177_, lean_object* v_as_1178_, lean_object* v_sz_1179_, lean_object* v_i_1180_, lean_object* v_b_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
size_t v_sz_boxed_1185_; size_t v_i_boxed_1186_; lean_object* v_res_1187_; 
v_sz_boxed_1185_ = lean_unbox_usize(v_sz_1179_);
lean_dec(v_sz_1179_);
v_i_boxed_1186_ = lean_unbox_usize(v_i_1180_);
lean_dec(v_i_1180_);
v_res_1187_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_1176_, v___x_1177_, v_as_1178_, v_sz_boxed_1185_, v_i_boxed_1186_, v_b_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec_ref(v_as_1178_);
lean_dec(v___x_1177_);
return v_res_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(lean_object* v_docComment_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v___y_1200_; lean_object* v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; uint8_t v___y_1205_; uint8_t v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; uint8_t v___y_1234_; lean_object* v___y_1235_; lean_object* v___y_1236_; uint8_t v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; uint8_t v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1291_; lean_object* v___y_1292_; uint8_t v___y_1293_; lean_object* v___y_1294_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; uint8_t v___y_1300_; lean_object* v___y_1311_; uint8_t v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; uint8_t v___y_1316_; lean_object* v___y_1317_; lean_object* v___y_1318_; lean_object* v___y_1319_; lean_object* v___y_1320_; lean_object* v___y_1321_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
lean_inc(v_docComment_1188_);
v___x_1361_ = l_Lean_Syntax_getKind(v_docComment_1188_);
v___x_1362_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__0, &l_Lean_parseVersoDocString___redArg___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___closed__0);
v___x_1363_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__1, &l_Lean_parseVersoDocString___redArg___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___closed__1);
v___x_1364_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__2, &l_Lean_parseVersoDocString___redArg___closed__2_once, _init_l_Lean_parseVersoDocString___redArg___closed__2);
v___x_1365_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__4, &l_Lean_parseVersoDocString___redArg___closed__4_once, _init_l_Lean_parseVersoDocString___redArg___closed__4);
v___x_1366_ = lean_name_eq(v___x_1361_, v___x_1365_);
lean_dec(v___x_1361_);
if (v___x_1366_ == 0)
{
goto v___jp_1338_;
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; 
v___x_1367_ = lean_unsigned_to_nat(0u);
v___x_1368_ = l_Lean_Syntax_getArg(v_docComment_1188_, v___x_1367_);
if (lean_obj_tag(v___x_1368_) == 1)
{
lean_object* v_kind_1369_; 
v_kind_1369_ = lean_ctor_get(v___x_1368_, 1);
lean_inc(v_kind_1369_);
if (lean_obj_tag(v_kind_1369_) == 1)
{
lean_object* v_pre_1370_; 
v_pre_1370_ = lean_ctor_get(v_kind_1369_, 0);
lean_inc(v_pre_1370_);
if (lean_obj_tag(v_pre_1370_) == 1)
{
lean_object* v_pre_1371_; 
v_pre_1371_ = lean_ctor_get(v_pre_1370_, 0);
lean_inc(v_pre_1371_);
if (lean_obj_tag(v_pre_1371_) == 1)
{
lean_object* v_pre_1372_; 
v_pre_1372_ = lean_ctor_get(v_pre_1371_, 0);
lean_inc(v_pre_1372_);
if (lean_obj_tag(v_pre_1372_) == 1)
{
lean_object* v_pre_1373_; 
v_pre_1373_ = lean_ctor_get(v_pre_1372_, 0);
lean_inc(v_pre_1373_);
if (lean_obj_tag(v_pre_1373_) == 0)
{
lean_object* v_info_1374_; lean_object* v_args_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1401_; 
v_info_1374_ = lean_ctor_get(v___x_1368_, 0);
v_args_1375_ = lean_ctor_get(v___x_1368_, 2);
v_isSharedCheck_1401_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1401_ == 0)
{
lean_object* v_unused_1402_; 
v_unused_1402_ = lean_ctor_get(v___x_1368_, 1);
lean_dec(v_unused_1402_);
v___x_1377_ = v___x_1368_;
v_isShared_1378_ = v_isSharedCheck_1401_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_args_1375_);
lean_inc(v_info_1374_);
lean_dec(v___x_1368_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1401_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v_str_1379_; lean_object* v_str_1380_; lean_object* v_str_1381_; lean_object* v_str_1382_; uint8_t v___x_1383_; 
v_str_1379_ = lean_ctor_get(v_kind_1369_, 1);
lean_inc_ref(v_str_1379_);
lean_dec_ref(v_kind_1369_);
v_str_1380_ = lean_ctor_get(v_pre_1370_, 1);
lean_inc_ref(v_str_1380_);
lean_dec_ref(v_pre_1370_);
v_str_1381_ = lean_ctor_get(v_pre_1371_, 1);
lean_inc_ref(v_str_1381_);
lean_dec_ref(v_pre_1371_);
v_str_1382_ = lean_ctor_get(v_pre_1372_, 1);
lean_inc_ref(v_str_1382_);
lean_dec_ref(v_pre_1372_);
v___x_1383_ = lean_string_dec_eq(v_str_1382_, v___x_1362_);
lean_dec_ref(v_str_1382_);
if (v___x_1383_ == 0)
{
lean_dec_ref(v_str_1381_);
lean_dec_ref(v_str_1380_);
lean_dec_ref(v_str_1379_);
lean_del_object(v___x_1377_);
lean_dec_ref(v_args_1375_);
lean_dec(v_info_1374_);
goto v___jp_1338_;
}
else
{
uint8_t v___x_1384_; 
v___x_1384_ = lean_string_dec_eq(v_str_1381_, v___x_1363_);
lean_dec_ref(v_str_1381_);
if (v___x_1384_ == 0)
{
lean_dec_ref(v_str_1380_);
lean_dec_ref(v_str_1379_);
lean_del_object(v___x_1377_);
lean_dec_ref(v_args_1375_);
lean_dec(v_info_1374_);
goto v___jp_1338_;
}
else
{
uint8_t v___x_1385_; 
v___x_1385_ = lean_string_dec_eq(v_str_1380_, v___x_1364_);
lean_dec_ref(v_str_1380_);
if (v___x_1385_ == 0)
{
lean_dec_ref(v_str_1379_);
lean_del_object(v___x_1377_);
lean_dec_ref(v_args_1375_);
lean_dec(v_info_1374_);
goto v___jp_1338_;
}
else
{
lean_object* v___x_1386_; uint8_t v___x_1387_; 
v___x_1386_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__5, &l_Lean_parseVersoDocString___redArg___closed__5_once, _init_l_Lean_parseVersoDocString___redArg___closed__5);
v___x_1387_ = lean_string_dec_eq(v_str_1379_, v___x_1386_);
lean_dec_ref(v_str_1379_);
if (v___x_1387_ == 0)
{
lean_del_object(v___x_1377_);
lean_dec_ref(v_args_1375_);
lean_dec(v_info_1374_);
goto v___jp_1338_;
}
else
{
lean_dec(v_docComment_1188_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
lean_del_object(v___x_1377_);
lean_dec_ref(v_args_1375_);
lean_dec(v_info_1374_);
v___x_1388_ = lean_box(0);
v___x_1389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1395_; 
v___x_1390_ = l_Lean_Name_str___override(v_pre_1373_, v___x_1362_);
v___x_1391_ = l_Lean_Name_str___override(v___x_1390_, v___x_1363_);
v___x_1392_ = l_Lean_Name_str___override(v___x_1391_, v___x_1364_);
v___x_1393_ = l_Lean_Name_str___override(v___x_1392_, v___x_1386_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 1, v___x_1393_);
v___x_1395_ = v___x_1377_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_info_1374_);
lean_ctor_set(v_reuseFailAlloc_1400_, 1, v___x_1393_);
lean_ctor_set(v_reuseFailAlloc_1400_, 2, v_args_1375_);
v___x_1395_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1396_ = lean_unsigned_to_nat(1u);
v___x_1397_ = l_Lean_Syntax_getArg(v___x_1395_, v___x_1396_);
lean_dec_ref(v___x_1395_);
v___x_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1397_);
v___x_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
return v___x_1399_;
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
lean_dec(v_pre_1373_);
lean_dec_ref(v_pre_1372_);
lean_dec_ref(v_pre_1371_);
lean_dec_ref(v_pre_1370_);
lean_dec_ref(v_kind_1369_);
lean_dec_ref(v___x_1368_);
goto v___jp_1338_;
}
}
else
{
lean_dec_ref(v_pre_1371_);
lean_dec(v_pre_1372_);
lean_dec_ref(v_pre_1370_);
lean_dec_ref(v_kind_1369_);
lean_dec_ref(v___x_1368_);
goto v___jp_1338_;
}
}
else
{
lean_dec_ref(v_pre_1370_);
lean_dec(v_pre_1371_);
lean_dec_ref(v_kind_1369_);
lean_dec_ref(v___x_1368_);
goto v___jp_1338_;
}
}
else
{
lean_dec(v_pre_1370_);
lean_dec_ref(v_kind_1369_);
lean_dec_ref(v___x_1368_);
goto v___jp_1338_;
}
}
else
{
lean_dec_ref(v___x_1368_);
lean_dec(v_kind_1369_);
goto v___jp_1338_;
}
}
else
{
lean_dec(v___x_1368_);
goto v___jp_1338_;
}
}
v___jp_1196_:
{
lean_object* v___x_1197_; lean_object* v___x_1198_; 
v___x_1197_ = lean_box(0);
v___x_1198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1197_);
return v___x_1198_;
}
v___jp_1199_:
{
lean_object* v___x_1209_; lean_object* v_currNamespace_1210_; lean_object* v_openDecls_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v_env_1215_; lean_object* v_nextMacroScope_1216_; lean_object* v_ngen_1217_; lean_object* v_auxDeclNGen_1218_; lean_object* v_traceState_1219_; lean_object* v_cache_1220_; lean_object* v_messages_1221_; lean_object* v_infoState_1222_; lean_object* v_snapshotTasks_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1232_; 
v___x_1209_ = lean_st_ref_take(v___y_1208_);
v_currNamespace_1210_ = lean_ctor_get(v___y_1207_, 6);
v_openDecls_1211_ = lean_ctor_get(v___y_1207_, 7);
lean_inc(v_openDecls_1211_);
lean_inc(v_currNamespace_1210_);
v___x_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1212_, 0, v_currNamespace_1210_);
lean_ctor_set(v___x_1212_, 1, v_openDecls_1211_);
v___x_1213_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1213_, 0, v___x_1212_);
lean_ctor_set(v___x_1213_, 1, v___y_1200_);
lean_inc(v___y_1201_);
lean_inc_ref(v___y_1204_);
v___x_1214_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1214_, 0, v___y_1204_);
lean_ctor_set(v___x_1214_, 1, v___y_1202_);
lean_ctor_set(v___x_1214_, 2, v___y_1201_);
lean_ctor_set(v___x_1214_, 3, v___y_1203_);
lean_ctor_set(v___x_1214_, 4, v___x_1213_);
lean_ctor_set_uint8(v___x_1214_, sizeof(void*)*5, v___y_1205_);
lean_ctor_set_uint8(v___x_1214_, sizeof(void*)*5 + 1, v___y_1206_);
lean_ctor_set_uint8(v___x_1214_, sizeof(void*)*5 + 2, v___y_1205_);
v_env_1215_ = lean_ctor_get(v___x_1209_, 0);
v_nextMacroScope_1216_ = lean_ctor_get(v___x_1209_, 1);
v_ngen_1217_ = lean_ctor_get(v___x_1209_, 2);
v_auxDeclNGen_1218_ = lean_ctor_get(v___x_1209_, 3);
v_traceState_1219_ = lean_ctor_get(v___x_1209_, 4);
v_cache_1220_ = lean_ctor_get(v___x_1209_, 5);
v_messages_1221_ = lean_ctor_get(v___x_1209_, 6);
v_infoState_1222_ = lean_ctor_get(v___x_1209_, 7);
v_snapshotTasks_1223_ = lean_ctor_get(v___x_1209_, 8);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1225_ = v___x_1209_;
v_isShared_1226_ = v_isSharedCheck_1232_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_snapshotTasks_1223_);
lean_inc(v_infoState_1222_);
lean_inc(v_messages_1221_);
lean_inc(v_cache_1220_);
lean_inc(v_traceState_1219_);
lean_inc(v_auxDeclNGen_1218_);
lean_inc(v_ngen_1217_);
lean_inc(v_nextMacroScope_1216_);
lean_inc(v_env_1215_);
lean_dec(v___x_1209_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1232_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1227_; lean_object* v___x_1229_; 
v___x_1227_ = l_Lean_MessageLog_add(v___x_1214_, v_messages_1221_);
if (v_isShared_1226_ == 0)
{
lean_ctor_set(v___x_1225_, 6, v___x_1227_);
v___x_1229_ = v___x_1225_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_env_1215_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v_nextMacroScope_1216_);
lean_ctor_set(v_reuseFailAlloc_1231_, 2, v_ngen_1217_);
lean_ctor_set(v_reuseFailAlloc_1231_, 3, v_auxDeclNGen_1218_);
lean_ctor_set(v_reuseFailAlloc_1231_, 4, v_traceState_1219_);
lean_ctor_set(v_reuseFailAlloc_1231_, 5, v_cache_1220_);
lean_ctor_set(v_reuseFailAlloc_1231_, 6, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1231_, 7, v_infoState_1222_);
lean_ctor_set(v_reuseFailAlloc_1231_, 8, v_snapshotTasks_1223_);
v___x_1229_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1230_; 
v___x_1230_ = lean_st_ref_set(v___y_1208_, v___x_1229_);
goto v___jp_1196_;
}
}
}
v___jp_1233_:
{
lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
lean_inc_ref(v___y_1240_);
v___x_1241_ = l_Lean_Parser_ParserState_allErrors(v___y_1240_);
v___x_1242_ = lean_array_get_size(v___x_1241_);
v___x_1243_ = lean_unsigned_to_nat(0u);
v___x_1244_ = lean_nat_dec_eq(v___x_1242_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; size_t v_sz_1246_; size_t v___x_1247_; lean_object* v___x_1248_; 
lean_dec_ref(v___y_1240_);
lean_dec_ref(v___y_1239_);
v___x_1245_ = lean_box(0);
v_sz_1246_ = lean_array_size(v___x_1241_);
v___x_1247_ = ((size_t)0ULL);
lean_inc_ref(v___y_1236_);
v___x_1248_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___y_1236_, v___x_1242_, v___x_1241_, v_sz_1246_, v___x_1247_, v___x_1245_, v___y_1193_, v___y_1194_);
lean_dec_ref(v___x_1241_);
if (lean_obj_tag(v___x_1248_) == 0)
{
lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1256_; 
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1256_ == 0)
{
lean_object* v_unused_1257_; 
v_unused_1257_ = lean_ctor_get(v___x_1248_, 0);
lean_dec(v_unused_1257_);
v___x_1250_ = v___x_1248_;
v_isShared_1251_ = v_isSharedCheck_1256_;
goto v_resetjp_1249_;
}
else
{
lean_dec(v___x_1248_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1256_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1252_; lean_object* v___x_1254_; 
v___x_1252_ = lean_box(0);
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 0, v___x_1252_);
v___x_1254_ = v___x_1250_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1252_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
v_a_1258_ = lean_ctor_get(v___x_1248_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1248_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1248_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1248_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
else
{
lean_object* v_stxStack_1266_; lean_object* v_pos_1267_; uint8_t v___x_1268_; 
lean_dec_ref(v___x_1241_);
v_stxStack_1266_ = lean_ctor_get(v___y_1240_, 0);
lean_inc_ref(v_stxStack_1266_);
v_pos_1267_ = lean_ctor_get(v___y_1240_, 2);
lean_inc(v_pos_1267_);
lean_dec_ref(v___y_1240_);
v___x_1268_ = l_Lean_Parser_InputContext_atEnd(v___y_1239_, v_pos_1267_);
lean_dec_ref(v___y_1239_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; lean_object* v___x_1270_; uint8_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; uint32_t v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; 
lean_dec_ref(v_stxStack_1266_);
lean_inc_ref(v___y_1236_);
v___x_1269_ = l_Lean_FileMap_toPosition(v___y_1236_, v_pos_1267_);
v___x_1270_ = lean_box(0);
v___x_1271_ = 2;
v___x_1272_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__3___closed__0, &l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0);
v___x_1273_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__5___closed__0, &l_Lean_parseVersoDocString___redArg___lam__5___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__0);
v___x_1274_ = lean_string_utf8_get(v___y_1235_, v_pos_1267_);
lean_dec(v_pos_1267_);
v___x_1275_ = lean_string_push(v___x_1272_, v___x_1274_);
v___x_1276_ = lean_string_append(v___x_1273_, v___x_1275_);
lean_dec_ref(v___x_1275_);
v___x_1277_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__5___closed__1, &l_Lean_parseVersoDocString___redArg___lam__5___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__5___closed__1);
v___x_1278_ = lean_string_append(v___x_1276_, v___x_1277_);
v___x_1279_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
v___x_1280_ = l_Lean_MessageData_ofFormat(v___x_1279_);
if (v___y_1237_ == 0)
{
v___y_1200_ = v___x_1280_;
v___y_1201_ = v___x_1270_;
v___y_1202_ = v___x_1269_;
v___y_1203_ = v___x_1272_;
v___y_1204_ = v___y_1238_;
v___y_1205_ = v___x_1268_;
v___y_1206_ = v___x_1271_;
v___y_1207_ = v___y_1193_;
v___y_1208_ = v___y_1194_;
goto v___jp_1199_;
}
else
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___f_1283_; uint8_t v___x_1284_; 
v___x_1281_ = lean_box(v___x_1268_);
v___x_1282_ = lean_box(v___y_1234_);
v___f_1283_ = lean_alloc_closure((void*)(l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1283_, 0, v___x_1281_);
lean_closure_set(v___f_1283_, 1, v___x_1282_);
lean_inc_ref(v___x_1280_);
v___x_1284_ = l_Lean_MessageData_hasTag(v___f_1283_, v___x_1280_);
if (v___x_1284_ == 0)
{
lean_dec_ref(v___x_1280_);
lean_dec_ref(v___x_1269_);
goto v___jp_1196_;
}
else
{
v___y_1200_ = v___x_1280_;
v___y_1201_ = v___x_1270_;
v___y_1202_ = v___x_1269_;
v___y_1203_ = v___x_1272_;
v___y_1204_ = v___y_1238_;
v___y_1205_ = v___x_1268_;
v___y_1206_ = v___x_1271_;
v___y_1207_ = v___y_1193_;
v___y_1208_ = v___y_1194_;
goto v___jp_1199_;
}
}
}
else
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
lean_dec(v_pos_1267_);
v___x_1285_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1266_);
lean_dec_ref(v_stxStack_1266_);
v___x_1286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1286_, 0, v___x_1285_);
v___x_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1286_);
return v___x_1287_;
}
}
}
v___jp_1288_:
{
if (v___y_1300_ == 0)
{
lean_dec_ref(v___y_1299_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1290_);
v___y_1234_ = v___y_1289_;
v___y_1235_ = v___y_1291_;
v___y_1236_ = v___y_1292_;
v___y_1237_ = v___y_1293_;
v___y_1238_ = v___y_1295_;
v___y_1239_ = v___y_1297_;
v___y_1240_ = v___y_1298_;
goto v___jp_1233_;
}
else
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v_pos_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1301_ = lean_unsigned_to_nat(0u);
v___x_1302_ = lean_box(0);
v___x_1303_ = lean_box(0);
v___x_1304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___y_1294_);
lean_ctor_set(v___x_1304_, 1, v___x_1301_);
v___x_1305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1301_);
lean_ctor_set(v___x_1305_, 1, v___x_1302_);
lean_ctor_set(v___x_1305_, 2, v___x_1303_);
lean_ctor_set(v___x_1305_, 3, v___x_1304_);
lean_ctor_set(v___x_1305_, 4, v___x_1301_);
v_pos_1306_ = lean_ctor_get(v___y_1298_, 2);
lean_inc(v_pos_1306_);
lean_dec_ref(v___y_1298_);
v___x_1307_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_block), 3, 1);
lean_closure_set(v___x_1307_, 0, v___x_1305_);
v___x_1308_ = l_Lean_Parser_ParserState_setPos(v___y_1299_, v_pos_1306_);
lean_inc_ref(v___y_1297_);
v___x_1309_ = l_Lean_Parser_ParserFn_run(v___x_1307_, v___y_1297_, v___y_1290_, v___y_1296_, v___x_1308_);
v___y_1234_ = v___y_1289_;
v___y_1235_ = v___y_1291_;
v___y_1236_ = v___y_1292_;
v___y_1237_ = v___y_1293_;
v___y_1238_ = v___y_1295_;
v___y_1239_ = v___y_1297_;
v___y_1240_ = v___x_1309_;
goto v___jp_1233_;
}
}
v___jp_1310_:
{
lean_object* v___x_1322_; lean_object* v_env_1323_; lean_object* v_ictx_1324_; lean_object* v_pmctx_1325_; lean_object* v_blockCtxt_1326_; lean_object* v___x_1327_; lean_object* v_s_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v_s_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; 
v___x_1322_ = lean_st_ref_get(v___y_1194_);
v_env_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc_ref_n(v_env_1323_, 2);
lean_dec(v___x_1322_);
lean_inc(v___y_1321_);
lean_inc_ref_n(v___y_1313_, 2);
lean_inc_ref(v___y_1320_);
lean_inc_ref(v___y_1311_);
v_ictx_1324_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_ictx_1324_, 0, v___y_1311_);
lean_ctor_set(v_ictx_1324_, 1, v___y_1320_);
lean_ctor_set(v_ictx_1324_, 2, v___y_1313_);
lean_ctor_set(v_ictx_1324_, 3, v___y_1321_);
lean_inc(v___y_1318_);
lean_inc(v___y_1314_);
lean_inc_ref(v___y_1315_);
v_pmctx_1325_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_pmctx_1325_, 0, v_env_1323_);
lean_ctor_set(v_pmctx_1325_, 1, v___y_1315_);
lean_ctor_set(v_pmctx_1325_, 2, v___y_1314_);
lean_ctor_set(v_pmctx_1325_, 3, v___y_1318_);
lean_inc(v___y_1317_);
v_blockCtxt_1326_ = l_Lean_Doc_Parser_BlockCtxt_forDocString(v___y_1313_, v___y_1317_, v___y_1321_);
v___x_1327_ = l_Lean_Parser_mkParserState(v___y_1311_);
lean_inc_ref(v___x_1327_);
v_s_1328_ = l_Lean_Parser_ParserState_setPos(v___x_1327_, v___y_1317_);
v___x_1329_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_1329_, 0, v_blockCtxt_1326_);
v___x_1330_ = l_Lean_Parser_getTokenTable(v_env_1323_);
lean_inc_ref(v___x_1330_);
lean_inc_ref(v_pmctx_1325_);
lean_inc_ref(v_ictx_1324_);
v_s_1331_ = l_Lean_Parser_ParserFn_run(v___x_1329_, v_ictx_1324_, v_pmctx_1325_, v___x_1330_, v_s_1328_);
lean_inc_ref(v_s_1331_);
v___x_1332_ = l_Lean_Parser_ParserState_allErrors(v_s_1331_);
v___x_1333_ = lean_array_get_size(v___x_1332_);
lean_dec_ref(v___x_1332_);
v___x_1334_ = lean_unsigned_to_nat(0u);
v___x_1335_ = lean_nat_dec_eq(v___x_1333_, v___x_1334_);
if (v___x_1335_ == 0)
{
v___y_1289_ = v___y_1312_;
v___y_1290_ = v_pmctx_1325_;
v___y_1291_ = v___y_1311_;
v___y_1292_ = v___y_1313_;
v___y_1293_ = v___y_1316_;
v___y_1294_ = v___y_1319_;
v___y_1295_ = v___y_1320_;
v___y_1296_ = v___x_1330_;
v___y_1297_ = v_ictx_1324_;
v___y_1298_ = v_s_1331_;
v___y_1299_ = v___x_1327_;
v___y_1300_ = v___x_1335_;
goto v___jp_1288_;
}
else
{
lean_object* v_pos_1336_; uint8_t v___x_1337_; 
v_pos_1336_ = lean_ctor_get(v_s_1331_, 2);
lean_inc(v_pos_1336_);
v___x_1337_ = l_Lean_Parser_InputContext_atEnd(v_ictx_1324_, v_pos_1336_);
lean_dec(v_pos_1336_);
if (v___x_1337_ == 0)
{
v___y_1289_ = v___y_1312_;
v___y_1290_ = v_pmctx_1325_;
v___y_1291_ = v___y_1311_;
v___y_1292_ = v___y_1313_;
v___y_1293_ = v___y_1316_;
v___y_1294_ = v___y_1319_;
v___y_1295_ = v___y_1320_;
v___y_1296_ = v___x_1330_;
v___y_1297_ = v_ictx_1324_;
v___y_1298_ = v_s_1331_;
v___y_1299_ = v___x_1327_;
v___y_1300_ = v___x_1335_;
goto v___jp_1288_;
}
else
{
lean_dec_ref(v___x_1330_);
lean_dec_ref(v___x_1327_);
lean_dec_ref(v_pmctx_1325_);
lean_dec(v___y_1319_);
v___y_1234_ = v___y_1312_;
v___y_1235_ = v___y_1311_;
v___y_1236_ = v___y_1313_;
v___y_1237_ = v___y_1316_;
v___y_1238_ = v___y_1320_;
v___y_1239_ = v_ictx_1324_;
v___y_1240_ = v_s_1331_;
goto v___jp_1233_;
}
}
}
v___jp_1338_:
{
lean_object* v_fileName_1339_; lean_object* v_fileMap_1340_; lean_object* v_options_1341_; lean_object* v_currNamespace_1342_; lean_object* v_openDecls_1343_; uint8_t v_suppressElabErrors_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; lean_object* v___x_1348_; 
v_fileName_1339_ = lean_ctor_get(v___y_1193_, 0);
v_fileMap_1340_ = lean_ctor_get(v___y_1193_, 1);
v_options_1341_ = lean_ctor_get(v___y_1193_, 2);
v_currNamespace_1342_ = lean_ctor_get(v___y_1193_, 6);
v_openDecls_1343_ = lean_ctor_get(v___y_1193_, 7);
v_suppressElabErrors_1344_ = lean_ctor_get_uint8(v___y_1193_, sizeof(void*)*14 + 1);
v___x_1345_ = lean_unsigned_to_nat(1u);
v___x_1346_ = l_Lean_Syntax_getArg(v_docComment_1188_, v___x_1345_);
v___x_1347_ = 1;
v___x_1348_ = l_Lean_Syntax_getPos_x3f(v___x_1346_, v___x_1347_);
if (lean_obj_tag(v___x_1348_) == 1)
{
lean_object* v_val_1349_; lean_object* v___x_1350_; 
v_val_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_val_1349_);
lean_dec_ref(v___x_1348_);
v___x_1350_ = l_Lean_Syntax_getTailPos_x3f(v___x_1346_, v___x_1347_);
lean_dec(v___x_1346_);
if (lean_obj_tag(v___x_1350_) == 1)
{
lean_object* v_val_1351_; lean_object* v_source_1352_; lean_object* v___x_1353_; lean_object* v_endPos_1354_; lean_object* v___x_1355_; uint8_t v___x_1356_; 
lean_dec(v_docComment_1188_);
v_val_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc(v_val_1351_);
lean_dec_ref(v___x_1350_);
v_source_1352_ = lean_ctor_get(v_fileMap_1340_, 0);
v___x_1353_ = lean_string_utf8_prev(v_source_1352_, v_val_1351_);
lean_dec(v_val_1351_);
v_endPos_1354_ = lean_string_utf8_prev(v_source_1352_, v___x_1353_);
lean_dec(v___x_1353_);
v___x_1355_ = lean_string_utf8_byte_size(v_source_1352_);
v___x_1356_ = lean_nat_dec_le(v_endPos_1354_, v___x_1355_);
if (v___x_1356_ == 0)
{
lean_dec(v_endPos_1354_);
v___y_1311_ = v_source_1352_;
v___y_1312_ = v_suppressElabErrors_1344_;
v___y_1313_ = v_fileMap_1340_;
v___y_1314_ = v_currNamespace_1342_;
v___y_1315_ = v_options_1341_;
v___y_1316_ = v_suppressElabErrors_1344_;
v___y_1317_ = v_val_1349_;
v___y_1318_ = v_openDecls_1343_;
v___y_1319_ = v___x_1345_;
v___y_1320_ = v_fileName_1339_;
v___y_1321_ = v___x_1355_;
goto v___jp_1310_;
}
else
{
v___y_1311_ = v_source_1352_;
v___y_1312_ = v_suppressElabErrors_1344_;
v___y_1313_ = v_fileMap_1340_;
v___y_1314_ = v_currNamespace_1342_;
v___y_1315_ = v_options_1341_;
v___y_1316_ = v_suppressElabErrors_1344_;
v___y_1317_ = v_val_1349_;
v___y_1318_ = v_openDecls_1343_;
v___y_1319_ = v___x_1345_;
v___y_1320_ = v_fileName_1339_;
v___y_1321_ = v_endPos_1354_;
goto v___jp_1310_;
}
}
else
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
lean_dec(v___x_1350_);
lean_dec(v_val_1349_);
v___x_1357_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_1358_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1188_, v___x_1357_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v_docComment_1188_);
return v___x_1358_;
}
}
else
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec(v___x_1348_);
lean_dec(v___x_1346_);
v___x_1359_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__11___closed__1, &l_Lean_parseVersoDocString___redArg___lam__11___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___lam__11___closed__1);
v___x_1360_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_docComment_1188_, v___x_1359_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v_docComment_1188_);
return v___x_1360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___boxed(lean_object* v_docComment_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
return v_res_1411_;
}
}
static lean_object* _init_l_Lean_versoDocString___closed__0(void){
_start:
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = lean_unsigned_to_nat(0u);
v___x_1413_ = lean_mk_empty_array_with_capacity(v___x_1412_);
return v___x_1413_;
}
}
static lean_object* _init_l_Lean_versoDocString___closed__1(void){
_start:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = lean_obj_once(&l_Lean_versoDocString___closed__0, &l_Lean_versoDocString___closed__0_once, _init_l_Lean_versoDocString___closed__0);
v___x_1415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1415_, 0, v___x_1414_);
lean_ctor_set(v___x_1415_, 1, v___x_1414_);
return v___x_1415_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocString(lean_object* v_declName_1416_, lean_object* v_binders_1417_, lean_object* v_docComment_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_a_1424_){
_start:
{
lean_object* v___x_1426_; 
v___x_1426_ = l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0(v_docComment_1418_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1443_; 
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1429_ = v___x_1426_;
v_isShared_1430_ = v_isSharedCheck_1443_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1426_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1443_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
if (lean_obj_tag(v_a_1427_) == 1)
{
lean_object* v_val_1431_; lean_object* v___x_1432_; size_t v_sz_1433_; size_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; lean_object* v___x_1438_; 
lean_del_object(v___x_1429_);
v_val_1431_ = lean_ctor_get(v_a_1427_, 0);
lean_inc(v_val_1431_);
lean_dec_ref(v_a_1427_);
v___x_1432_ = l_Lean_Syntax_getArgs(v_val_1431_);
lean_dec(v_val_1431_);
v_sz_1433_ = lean_array_size(v___x_1432_);
v___x_1434_ = ((size_t)0ULL);
v___x_1435_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoDocString_spec__1(v_sz_1433_, v___x_1434_, v___x_1432_);
v___x_1436_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_1436_, 0, v___x_1435_);
v___x_1437_ = 0;
v___x_1438_ = l_Lean_Doc_DocM_exec___redArg(v_declName_1416_, v_binders_1417_, v___x_1436_, v___x_1437_, v_a_1419_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_, v_a_1424_);
return v___x_1438_;
}
else
{
lean_object* v___x_1439_; lean_object* v___x_1441_; 
lean_dec(v_a_1427_);
lean_dec(v_binders_1417_);
lean_dec(v_declName_1416_);
v___x_1439_ = lean_obj_once(&l_Lean_versoDocString___closed__1, &l_Lean_versoDocString___closed__1_once, _init_l_Lean_versoDocString___closed__1);
if (v_isShared_1430_ == 0)
{
lean_ctor_set(v___x_1429_, 0, v___x_1439_);
v___x_1441_ = v___x_1429_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v___x_1439_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec(v_binders_1417_);
lean_dec(v_declName_1416_);
v_a_1444_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1426_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1426_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
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
LEAN_EXPORT lean_object* l_Lean_versoDocString___boxed(lean_object* v_declName_1452_, lean_object* v_binders_1453_, lean_object* v_docComment_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_, lean_object* v_a_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lean_versoDocString(v_declName_1452_, v_binders_1453_, v_docComment_1454_, v_a_1455_, v_a_1456_, v_a_1457_, v_a_1458_, v_a_1459_, v_a_1460_);
lean_dec(v_a_1460_);
lean_dec_ref(v_a_1459_);
lean_dec(v_a_1458_);
lean_dec_ref(v_a_1457_);
lean_dec(v_a_1456_);
lean_dec_ref(v_a_1455_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(lean_object* v___x_1463_, lean_object* v___x_1464_, lean_object* v_as_1465_, size_t v_sz_1466_, size_t v_i_1467_, lean_object* v_b_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v___x_1476_; 
v___x_1476_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___redArg(v___x_1463_, v___x_1464_, v_as_1465_, v_sz_1466_, v_i_1467_, v_b_1468_, v___y_1473_, v___y_1474_);
return v___x_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0___boxed(lean_object* v___x_1477_, lean_object* v___x_1478_, lean_object* v_as_1479_, lean_object* v_sz_1480_, lean_object* v_i_1481_, lean_object* v_b_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
size_t v_sz_boxed_1490_; size_t v_i_boxed_1491_; lean_object* v_res_1492_; 
v_sz_boxed_1490_ = lean_unbox_usize(v_sz_1480_);
lean_dec(v_sz_1480_);
v_i_boxed_1491_ = lean_unbox_usize(v_i_1481_);
lean_dec(v_i_1481_);
v_res_1492_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__0(v___x_1477_, v___x_1478_, v_as_1479_, v_sz_boxed_1490_, v_i_boxed_1491_, v_b_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec_ref(v___y_1483_);
lean_dec_ref(v_as_1479_);
lean_dec(v___x_1478_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(lean_object* v_00_u03b1_1493_, lean_object* v_ref_1494_, lean_object* v_msg_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v___x_1503_; 
v___x_1503_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_ref_1494_, v_msg_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_);
return v___x_1503_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1504_, lean_object* v_ref_1505_, lean_object* v_msg_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_){
_start:
{
lean_object* v_res_1514_; 
v_res_1514_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1(v_00_u03b1_1504_, v_ref_1505_, v_msg_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v_ref_1505_);
return v_res_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_1515_, lean_object* v_msg_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v___x_1524_; 
v___x_1524_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v_msg_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1525_, lean_object* v_msg_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2(v_00_u03b1_1525_, v_msg_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5(lean_object* v_msgData_1535_, lean_object* v_macroStack_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___redArg(v_msgData_1535_, v_macroStack_1536_, v___y_1541_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5___boxed(lean_object* v_msgData_1545_, lean_object* v_macroStack_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_){
_start:
{
lean_object* v_res_1554_; 
v_res_1554_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5(v_msgData_1545_, v_macroStack_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec(v___y_1550_);
lean_dec_ref(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
return v_res_1554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(size_t v_sz_1555_, size_t v_i_1556_, lean_object* v_bs_1557_){
_start:
{
uint8_t v___x_1558_; 
v___x_1558_ = lean_usize_dec_lt(v_i_1556_, v_sz_1555_);
if (v___x_1558_ == 0)
{
return v_bs_1557_;
}
else
{
lean_object* v_v_1559_; lean_object* v___x_1560_; lean_object* v_bs_x27_1561_; size_t v___x_1562_; size_t v___x_1563_; lean_object* v___x_1564_; 
v_v_1559_ = lean_array_uget(v_bs_1557_, v_i_1556_);
v___x_1560_ = lean_unsigned_to_nat(0u);
v_bs_x27_1561_ = lean_array_uset(v_bs_1557_, v_i_1556_, v___x_1560_);
v___x_1562_ = ((size_t)1ULL);
v___x_1563_ = lean_usize_add(v_i_1556_, v___x_1562_);
v___x_1564_ = lean_array_uset(v_bs_x27_1561_, v_i_1556_, v_v_1559_);
v_i_1556_ = v___x_1563_;
v_bs_1557_ = v___x_1564_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0___boxed(lean_object* v_sz_1566_, lean_object* v_i_1567_, lean_object* v_bs_1568_){
_start:
{
size_t v_sz_boxed_1569_; size_t v_i_boxed_1570_; lean_object* v_res_1571_; 
v_sz_boxed_1569_ = lean_unbox_usize(v_sz_1566_);
lean_dec(v_sz_1566_);
v_i_boxed_1570_ = lean_unbox_usize(v_i_1567_);
lean_dec(v_i_1567_);
v_res_1571_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(v_sz_boxed_1569_, v_i_boxed_1570_, v_bs_1568_);
return v_res_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString(lean_object* v_range_1572_, lean_object* v_doc_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v_a_1577_, lean_object* v_a_1578_, lean_object* v_a_1579_){
_start:
{
lean_object* v___x_1581_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1589_; lean_object* v_env_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; 
v___x_1581_ = lean_st_ref_get(v_a_1579_);
v_env_1596_ = lean_ctor_get(v___x_1581_, 0);
lean_inc_ref(v_env_1596_);
lean_dec(v___x_1581_);
v___x_1597_ = l_Lean_getMainVersoModuleDocs(v_env_1596_);
v___x_1598_ = l_Lean_VersoModuleDocs_terminalNesting(v___x_1597_);
lean_dec_ref(v___x_1597_);
if (lean_obj_tag(v___x_1598_) == 0)
{
v___y_1589_ = v___x_1598_;
goto v___jp_1588_;
}
else
{
lean_object* v_val_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1608_; 
v_val_1599_ = lean_ctor_get(v___x_1598_, 0);
v_isSharedCheck_1608_ = !lean_is_exclusive(v___x_1598_);
if (v_isSharedCheck_1608_ == 0)
{
v___x_1601_ = v___x_1598_;
v_isShared_1602_ = v_isSharedCheck_1608_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_val_1599_);
lean_dec(v___x_1598_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1608_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1606_; 
v___x_1603_ = lean_unsigned_to_nat(1u);
v___x_1604_ = lean_nat_add(v_val_1599_, v___x_1603_);
lean_dec(v_val_1599_);
if (v_isShared_1602_ == 0)
{
lean_ctor_set(v___x_1601_, 0, v___x_1604_);
v___x_1606_ = v___x_1601_;
goto v_reusejp_1605_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1604_);
v___x_1606_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1605_;
}
v_reusejp_1605_:
{
v___y_1589_ = v___x_1606_;
goto v___jp_1588_;
}
}
}
v___jp_1582_:
{
lean_object* v___x_1585_; uint8_t v___x_1586_; lean_object* v___x_1587_; 
v___x_1585_ = lean_alloc_closure((void*)(l_Lean_Doc_elabModSnippet___boxed), 13, 3);
lean_closure_set(v___x_1585_, 0, v_range_1572_);
lean_closure_set(v___x_1585_, 1, v___y_1583_);
lean_closure_set(v___x_1585_, 2, v___y_1584_);
v___x_1586_ = 0;
v___x_1587_ = l_Lean_Doc_DocM_execForModule___redArg(v___x_1585_, v___x_1586_, v_a_1574_, v_a_1575_, v_a_1576_, v_a_1577_, v_a_1578_, v_a_1579_);
return v___x_1587_;
}
v___jp_1588_:
{
lean_object* v___x_1590_; size_t v_sz_1591_; size_t v___x_1592_; lean_object* v___x_1593_; 
v___x_1590_ = l_Lean_Syntax_getArgs(v_doc_1573_);
v_sz_1591_ = lean_array_size(v___x_1590_);
v___x_1592_ = ((size_t)0ULL);
v___x_1593_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(v_sz_1591_, v___x_1592_, v___x_1590_);
if (lean_obj_tag(v___y_1589_) == 0)
{
lean_object* v___x_1594_; 
v___x_1594_ = lean_unsigned_to_nat(0u);
v___y_1583_ = v___x_1593_;
v___y_1584_ = v___x_1594_;
goto v___jp_1582_;
}
else
{
lean_object* v_val_1595_; 
v_val_1595_ = lean_ctor_get(v___y_1589_, 0);
lean_inc(v_val_1595_);
lean_dec_ref(v___y_1589_);
v___y_1583_ = v___x_1593_;
v___y_1584_ = v_val_1595_;
goto v___jp_1582_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoModDocString___boxed(lean_object* v_range_1609_, lean_object* v_doc_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l_Lean_versoModDocString(v_range_1609_, v_doc_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_);
lean_dec(v_a_1616_);
lean_dec_ref(v_a_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
lean_dec(v_doc_1610_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0(lean_object* v___x_1619_, lean_object* v_declName_1620_, lean_object* v___x_1621_, lean_object* v___x_1622_, uint8_t v___x_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
lean_object* v_fileName_1631_; lean_object* v_options_1632_; lean_object* v_currRecDepth_1633_; lean_object* v_maxRecDepth_1634_; lean_object* v_ref_1635_; lean_object* v_currNamespace_1636_; lean_object* v_openDecls_1637_; lean_object* v_initHeartbeats_1638_; lean_object* v_maxHeartbeats_1639_; lean_object* v_quotContext_1640_; lean_object* v_currMacroScope_1641_; uint8_t v_diag_1642_; lean_object* v_cancelTk_x3f_1643_; uint8_t v_suppressElabErrors_1644_; lean_object* v_inheritedTraceOptions_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
v_fileName_1631_ = lean_ctor_get(v___y_1628_, 0);
v_options_1632_ = lean_ctor_get(v___y_1628_, 2);
v_currRecDepth_1633_ = lean_ctor_get(v___y_1628_, 3);
v_maxRecDepth_1634_ = lean_ctor_get(v___y_1628_, 4);
v_ref_1635_ = lean_ctor_get(v___y_1628_, 5);
v_currNamespace_1636_ = lean_ctor_get(v___y_1628_, 6);
v_openDecls_1637_ = lean_ctor_get(v___y_1628_, 7);
v_initHeartbeats_1638_ = lean_ctor_get(v___y_1628_, 8);
v_maxHeartbeats_1639_ = lean_ctor_get(v___y_1628_, 9);
v_quotContext_1640_ = lean_ctor_get(v___y_1628_, 10);
v_currMacroScope_1641_ = lean_ctor_get(v___y_1628_, 11);
v_diag_1642_ = lean_ctor_get_uint8(v___y_1628_, sizeof(void*)*14);
v_cancelTk_x3f_1643_ = lean_ctor_get(v___y_1628_, 12);
v_suppressElabErrors_1644_ = lean_ctor_get_uint8(v___y_1628_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1645_ = lean_ctor_get(v___y_1628_, 13);
lean_inc_ref(v_inheritedTraceOptions_1645_);
lean_inc(v_cancelTk_x3f_1643_);
lean_inc(v_currMacroScope_1641_);
lean_inc(v_quotContext_1640_);
lean_inc(v_maxHeartbeats_1639_);
lean_inc(v_initHeartbeats_1638_);
lean_inc(v_openDecls_1637_);
lean_inc(v_currNamespace_1636_);
lean_inc(v_ref_1635_);
lean_inc(v_maxRecDepth_1634_);
lean_inc(v_currRecDepth_1633_);
lean_inc_ref(v_options_1632_);
lean_inc_ref(v_fileName_1631_);
v___x_1646_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1646_, 0, v_fileName_1631_);
lean_ctor_set(v___x_1646_, 1, v___x_1619_);
lean_ctor_set(v___x_1646_, 2, v_options_1632_);
lean_ctor_set(v___x_1646_, 3, v_currRecDepth_1633_);
lean_ctor_set(v___x_1646_, 4, v_maxRecDepth_1634_);
lean_ctor_set(v___x_1646_, 5, v_ref_1635_);
lean_ctor_set(v___x_1646_, 6, v_currNamespace_1636_);
lean_ctor_set(v___x_1646_, 7, v_openDecls_1637_);
lean_ctor_set(v___x_1646_, 8, v_initHeartbeats_1638_);
lean_ctor_set(v___x_1646_, 9, v_maxHeartbeats_1639_);
lean_ctor_set(v___x_1646_, 10, v_quotContext_1640_);
lean_ctor_set(v___x_1646_, 11, v_currMacroScope_1641_);
lean_ctor_set(v___x_1646_, 12, v_cancelTk_x3f_1643_);
lean_ctor_set(v___x_1646_, 13, v_inheritedTraceOptions_1645_);
lean_ctor_set_uint8(v___x_1646_, sizeof(void*)*14, v_diag_1642_);
lean_ctor_set_uint8(v___x_1646_, sizeof(void*)*14 + 1, v_suppressElabErrors_1644_);
v___x_1647_ = l_Lean_Doc_DocM_exec___redArg(v_declName_1620_, v___x_1621_, v___x_1622_, v___x_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___x_1646_, v___y_1629_);
lean_dec_ref(v___x_1646_);
return v___x_1647_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___lam__0___boxed(lean_object* v___x_1648_, lean_object* v_declName_1649_, lean_object* v___x_1650_, lean_object* v___x_1651_, lean_object* v___x_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_){
_start:
{
uint8_t v___x_15599__boxed_1660_; lean_object* v_res_1661_; 
v___x_15599__boxed_1660_ = lean_unbox(v___x_1652_);
v_res_1661_ = l_Lean_versoDocStringFromString___lam__0(v___x_1648_, v_declName_1649_, v___x_1650_, v___x_1651_, v___x_15599__boxed_1660_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
return v_res_1661_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0(uint8_t v___y_1662_, uint8_t v_suppressElabErrors_1663_, lean_object* v_x_1664_){
_start:
{
if (lean_obj_tag(v_x_1664_) == 1)
{
lean_object* v_pre_1665_; 
v_pre_1665_ = lean_ctor_get(v_x_1664_, 0);
switch(lean_obj_tag(v_pre_1665_))
{
case 1:
{
lean_object* v_pre_1666_; 
v_pre_1666_ = lean_ctor_get(v_pre_1665_, 0);
switch(lean_obj_tag(v_pre_1666_))
{
case 0:
{
lean_object* v_str_1667_; lean_object* v_str_1668_; lean_object* v___x_1669_; uint8_t v___x_1670_; 
v_str_1667_ = lean_ctor_get(v_x_1664_, 1);
v_str_1668_ = lean_ctor_get(v_pre_1665_, 1);
v___x_1669_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__0);
v___x_1670_ = lean_string_dec_eq(v_str_1668_, v___x_1669_);
if (v___x_1670_ == 0)
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__1);
v___x_1672_ = lean_string_dec_eq(v_str_1668_, v___x_1671_);
if (v___x_1672_ == 0)
{
return v___y_1662_;
}
else
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__2);
v___x_1674_ = lean_string_dec_eq(v_str_1667_, v___x_1673_);
if (v___x_1674_ == 0)
{
return v___y_1662_;
}
else
{
return v_suppressElabErrors_1663_;
}
}
}
else
{
lean_object* v___x_1675_; uint8_t v___x_1676_; 
v___x_1675_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__3);
v___x_1676_ = lean_string_dec_eq(v_str_1667_, v___x_1675_);
if (v___x_1676_ == 0)
{
return v___y_1662_;
}
else
{
return v_suppressElabErrors_1663_;
}
}
}
case 1:
{
lean_object* v_pre_1677_; 
v_pre_1677_ = lean_ctor_get(v_pre_1666_, 0);
if (lean_obj_tag(v_pre_1677_) == 0)
{
lean_object* v_str_1678_; lean_object* v_str_1679_; lean_object* v_str_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
v_str_1678_ = lean_ctor_get(v_x_1664_, 1);
v_str_1679_ = lean_ctor_get(v_pre_1665_, 1);
v_str_1680_ = lean_ctor_get(v_pre_1666_, 1);
v___x_1681_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__4);
v___x_1682_ = lean_string_dec_eq(v_str_1680_, v___x_1681_);
if (v___x_1682_ == 0)
{
return v___y_1662_;
}
else
{
lean_object* v___x_1683_; uint8_t v___x_1684_; 
v___x_1683_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__5);
v___x_1684_ = lean_string_dec_eq(v_str_1679_, v___x_1683_);
if (v___x_1684_ == 0)
{
return v___y_1662_;
}
else
{
lean_object* v___x_1685_; uint8_t v___x_1686_; 
v___x_1685_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__6);
v___x_1686_ = lean_string_dec_eq(v_str_1678_, v___x_1685_);
if (v___x_1686_ == 0)
{
return v___y_1662_;
}
else
{
return v_suppressElabErrors_1663_;
}
}
}
}
else
{
return v___y_1662_;
}
}
default: 
{
return v___y_1662_;
}
}
}
case 0:
{
lean_object* v_str_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v_str_1687_ = lean_ctor_get(v_x_1664_, 1);
v___x_1688_ = lean_obj_once(&l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7, &l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7_once, _init_l_Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0___lam__0___closed__7);
v___x_1689_ = lean_string_dec_eq(v_str_1687_, v___x_1688_);
if (v___x_1689_ == 0)
{
return v___y_1662_;
}
else
{
return v_suppressElabErrors_1663_;
}
}
default: 
{
return v___y_1662_;
}
}
}
else
{
return v___y_1662_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0___boxed(lean_object* v___y_1690_, lean_object* v_suppressElabErrors_1691_, lean_object* v_x_1692_){
_start:
{
uint8_t v___y_15641__boxed_1693_; uint8_t v_suppressElabErrors_boxed_1694_; uint8_t v_res_1695_; lean_object* v_r_1696_; 
v___y_15641__boxed_1693_ = lean_unbox(v___y_1690_);
v_suppressElabErrors_boxed_1694_ = lean_unbox(v_suppressElabErrors_1691_);
v_res_1695_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0(v___y_15641__boxed_1693_, v_suppressElabErrors_boxed_1694_, v_x_1692_);
lean_dec(v_x_1692_);
v_r_1696_ = lean_box(v_res_1695_);
return v_r_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(lean_object* v_ref_1697_, lean_object* v_msgData_1698_, uint8_t v_severity_1699_, uint8_t v_isSilent_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v___y_1707_; uint8_t v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; uint8_t v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; uint8_t v___y_1746_; uint8_t v___y_1747_; uint8_t v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1768_; lean_object* v___y_1769_; lean_object* v___y_1770_; uint8_t v___y_1771_; uint8_t v___y_1772_; lean_object* v___y_1773_; uint8_t v___y_1774_; lean_object* v___y_1775_; lean_object* v___y_1779_; lean_object* v___y_1780_; lean_object* v___y_1781_; uint8_t v___y_1782_; uint8_t v___y_1783_; lean_object* v___y_1784_; uint8_t v___y_1785_; uint8_t v___x_1790_; lean_object* v___y_1792_; lean_object* v___y_1793_; lean_object* v___y_1794_; uint8_t v___y_1795_; lean_object* v___y_1796_; uint8_t v___y_1797_; uint8_t v___y_1798_; uint8_t v___y_1800_; uint8_t v___x_1815_; 
v___x_1790_ = 2;
v___x_1815_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1699_, v___x_1790_);
if (v___x_1815_ == 0)
{
v___y_1800_ = v___x_1815_;
goto v___jp_1799_;
}
else
{
uint8_t v___x_1816_; 
lean_inc_ref(v_msgData_1698_);
v___x_1816_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1698_);
v___y_1800_ = v___x_1816_;
goto v___jp_1799_;
}
v___jp_1706_:
{
lean_object* v___x_1716_; lean_object* v_currNamespace_1717_; lean_object* v_openDecls_1718_; lean_object* v_env_1719_; lean_object* v_nextMacroScope_1720_; lean_object* v_ngen_1721_; lean_object* v_auxDeclNGen_1722_; lean_object* v_traceState_1723_; lean_object* v_cache_1724_; lean_object* v_messages_1725_; lean_object* v_infoState_1726_; lean_object* v_snapshotTasks_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1741_; 
v___x_1716_ = lean_st_ref_take(v___y_1715_);
v_currNamespace_1717_ = lean_ctor_get(v___y_1714_, 6);
v_openDecls_1718_ = lean_ctor_get(v___y_1714_, 7);
v_env_1719_ = lean_ctor_get(v___x_1716_, 0);
v_nextMacroScope_1720_ = lean_ctor_get(v___x_1716_, 1);
v_ngen_1721_ = lean_ctor_get(v___x_1716_, 2);
v_auxDeclNGen_1722_ = lean_ctor_get(v___x_1716_, 3);
v_traceState_1723_ = lean_ctor_get(v___x_1716_, 4);
v_cache_1724_ = lean_ctor_get(v___x_1716_, 5);
v_messages_1725_ = lean_ctor_get(v___x_1716_, 6);
v_infoState_1726_ = lean_ctor_get(v___x_1716_, 7);
v_snapshotTasks_1727_ = lean_ctor_get(v___x_1716_, 8);
v_isSharedCheck_1741_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1741_ == 0)
{
v___x_1729_ = v___x_1716_;
v_isShared_1730_ = v_isSharedCheck_1741_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_snapshotTasks_1727_);
lean_inc(v_infoState_1726_);
lean_inc(v_messages_1725_);
lean_inc(v_cache_1724_);
lean_inc(v_traceState_1723_);
lean_inc(v_auxDeclNGen_1722_);
lean_inc(v_ngen_1721_);
lean_inc(v_nextMacroScope_1720_);
lean_inc(v_env_1719_);
lean_dec(v___x_1716_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1741_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1736_; 
lean_inc(v_openDecls_1718_);
lean_inc(v_currNamespace_1717_);
v___x_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1731_, 0, v_currNamespace_1717_);
lean_ctor_set(v___x_1731_, 1, v_openDecls_1718_);
v___x_1732_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
lean_ctor_set(v___x_1732_, 1, v___y_1710_);
lean_inc_ref(v___y_1709_);
lean_inc_ref(v___y_1707_);
v___x_1733_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1733_, 0, v___y_1707_);
lean_ctor_set(v___x_1733_, 1, v___y_1712_);
lean_ctor_set(v___x_1733_, 2, v___y_1711_);
lean_ctor_set(v___x_1733_, 3, v___y_1709_);
lean_ctor_set(v___x_1733_, 4, v___x_1732_);
lean_ctor_set_uint8(v___x_1733_, sizeof(void*)*5, v___y_1713_);
lean_ctor_set_uint8(v___x_1733_, sizeof(void*)*5 + 1, v___y_1708_);
lean_ctor_set_uint8(v___x_1733_, sizeof(void*)*5 + 2, v_isSilent_1700_);
v___x_1734_ = l_Lean_MessageLog_add(v___x_1733_, v_messages_1725_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 6, v___x_1734_);
v___x_1736_ = v___x_1729_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1740_; 
v_reuseFailAlloc_1740_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1740_, 0, v_env_1719_);
lean_ctor_set(v_reuseFailAlloc_1740_, 1, v_nextMacroScope_1720_);
lean_ctor_set(v_reuseFailAlloc_1740_, 2, v_ngen_1721_);
lean_ctor_set(v_reuseFailAlloc_1740_, 3, v_auxDeclNGen_1722_);
lean_ctor_set(v_reuseFailAlloc_1740_, 4, v_traceState_1723_);
lean_ctor_set(v_reuseFailAlloc_1740_, 5, v_cache_1724_);
lean_ctor_set(v_reuseFailAlloc_1740_, 6, v___x_1734_);
lean_ctor_set(v_reuseFailAlloc_1740_, 7, v_infoState_1726_);
lean_ctor_set(v_reuseFailAlloc_1740_, 8, v_snapshotTasks_1727_);
v___x_1736_ = v_reuseFailAlloc_1740_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = lean_st_ref_set(v___y_1715_, v___x_1736_);
v___x_1738_ = lean_box(0);
v___x_1739_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1738_);
return v___x_1739_;
}
}
}
v___jp_1742_:
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1766_; 
v___x_1751_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1698_);
v___x_1752_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__4(v___x_1751_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
v_a_1753_ = lean_ctor_get(v___x_1752_, 0);
v_isSharedCheck_1766_ = !lean_is_exclusive(v___x_1752_);
if (v_isSharedCheck_1766_ == 0)
{
v___x_1755_ = v___x_1752_;
v_isShared_1756_ = v_isSharedCheck_1766_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1752_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1766_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
lean_inc_ref_n(v___y_1749_, 2);
v___x_1757_ = l_Lean_FileMap_toPosition(v___y_1749_, v___y_1744_);
lean_dec(v___y_1744_);
v___x_1758_ = l_Lean_FileMap_toPosition(v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
v___x_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1759_, 0, v___x_1758_);
v___x_1760_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___lam__3___closed__0, &l_Lean_parseVersoDocString___redArg___lam__3___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___lam__3___closed__0);
if (v___y_1747_ == 0)
{
lean_del_object(v___x_1755_);
lean_dec_ref(v___y_1743_);
v___y_1707_ = v___y_1745_;
v___y_1708_ = v___y_1746_;
v___y_1709_ = v___x_1760_;
v___y_1710_ = v_a_1753_;
v___y_1711_ = v___x_1759_;
v___y_1712_ = v___x_1757_;
v___y_1713_ = v___y_1748_;
v___y_1714_ = v___y_1703_;
v___y_1715_ = v___y_1704_;
goto v___jp_1706_;
}
else
{
uint8_t v___x_1761_; 
lean_inc(v_a_1753_);
v___x_1761_ = l_Lean_MessageData_hasTag(v___y_1743_, v_a_1753_);
if (v___x_1761_ == 0)
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
lean_dec_ref(v___x_1759_);
lean_dec_ref(v___x_1757_);
lean_dec(v_a_1753_);
v___x_1762_ = lean_box(0);
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 0, v___x_1762_);
v___x_1764_ = v___x_1755_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
else
{
lean_del_object(v___x_1755_);
v___y_1707_ = v___y_1745_;
v___y_1708_ = v___y_1746_;
v___y_1709_ = v___x_1760_;
v___y_1710_ = v_a_1753_;
v___y_1711_ = v___x_1759_;
v___y_1712_ = v___x_1757_;
v___y_1713_ = v___y_1748_;
v___y_1714_ = v___y_1703_;
v___y_1715_ = v___y_1704_;
goto v___jp_1706_;
}
}
}
}
v___jp_1767_:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lean_Syntax_getTailPos_x3f(v___y_1769_, v___y_1774_);
lean_dec(v___y_1769_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_inc(v___y_1775_);
v___y_1743_ = v___y_1768_;
v___y_1744_ = v___y_1775_;
v___y_1745_ = v___y_1770_;
v___y_1746_ = v___y_1771_;
v___y_1747_ = v___y_1772_;
v___y_1748_ = v___y_1774_;
v___y_1749_ = v___y_1773_;
v___y_1750_ = v___y_1775_;
goto v___jp_1742_;
}
else
{
lean_object* v_val_1777_; 
v_val_1777_ = lean_ctor_get(v___x_1776_, 0);
lean_inc(v_val_1777_);
lean_dec_ref(v___x_1776_);
v___y_1743_ = v___y_1768_;
v___y_1744_ = v___y_1775_;
v___y_1745_ = v___y_1770_;
v___y_1746_ = v___y_1771_;
v___y_1747_ = v___y_1772_;
v___y_1748_ = v___y_1774_;
v___y_1749_ = v___y_1773_;
v___y_1750_ = v_val_1777_;
goto v___jp_1742_;
}
}
v___jp_1778_:
{
lean_object* v_ref_1786_; lean_object* v___x_1787_; 
v_ref_1786_ = l_Lean_replaceRef(v_ref_1697_, v___y_1780_);
v___x_1787_ = l_Lean_Syntax_getPos_x3f(v_ref_1786_, v___y_1783_);
if (lean_obj_tag(v___x_1787_) == 0)
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_unsigned_to_nat(0u);
v___y_1768_ = v___y_1779_;
v___y_1769_ = v_ref_1786_;
v___y_1770_ = v___y_1781_;
v___y_1771_ = v___y_1785_;
v___y_1772_ = v___y_1782_;
v___y_1773_ = v___y_1784_;
v___y_1774_ = v___y_1783_;
v___y_1775_ = v___x_1788_;
goto v___jp_1767_;
}
else
{
lean_object* v_val_1789_; 
v_val_1789_ = lean_ctor_get(v___x_1787_, 0);
lean_inc(v_val_1789_);
lean_dec_ref(v___x_1787_);
v___y_1768_ = v___y_1779_;
v___y_1769_ = v_ref_1786_;
v___y_1770_ = v___y_1781_;
v___y_1771_ = v___y_1785_;
v___y_1772_ = v___y_1782_;
v___y_1773_ = v___y_1784_;
v___y_1774_ = v___y_1783_;
v___y_1775_ = v_val_1789_;
goto v___jp_1767_;
}
}
v___jp_1791_:
{
if (v___y_1798_ == 0)
{
v___y_1779_ = v___y_1792_;
v___y_1780_ = v___y_1793_;
v___y_1781_ = v___y_1794_;
v___y_1782_ = v___y_1795_;
v___y_1783_ = v___y_1797_;
v___y_1784_ = v___y_1796_;
v___y_1785_ = v_severity_1699_;
goto v___jp_1778_;
}
else
{
v___y_1779_ = v___y_1792_;
v___y_1780_ = v___y_1793_;
v___y_1781_ = v___y_1794_;
v___y_1782_ = v___y_1795_;
v___y_1783_ = v___y_1797_;
v___y_1784_ = v___y_1796_;
v___y_1785_ = v___x_1790_;
goto v___jp_1778_;
}
}
v___jp_1799_:
{
if (v___y_1800_ == 0)
{
lean_object* v_fileName_1801_; lean_object* v_fileMap_1802_; lean_object* v_options_1803_; lean_object* v_ref_1804_; uint8_t v_suppressElabErrors_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___f_1808_; uint8_t v___x_1809_; uint8_t v___x_1810_; 
v_fileName_1801_ = lean_ctor_get(v___y_1703_, 0);
v_fileMap_1802_ = lean_ctor_get(v___y_1703_, 1);
v_options_1803_ = lean_ctor_get(v___y_1703_, 2);
v_ref_1804_ = lean_ctor_get(v___y_1703_, 5);
v_suppressElabErrors_1805_ = lean_ctor_get_uint8(v___y_1703_, sizeof(void*)*14 + 1);
v___x_1806_ = lean_box(v___y_1800_);
v___x_1807_ = lean_box(v_suppressElabErrors_1805_);
v___f_1808_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1808_, 0, v___x_1806_);
lean_closure_set(v___f_1808_, 1, v___x_1807_);
v___x_1809_ = 1;
v___x_1810_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1699_, v___x_1809_);
if (v___x_1810_ == 0)
{
v___y_1792_ = v___f_1808_;
v___y_1793_ = v_ref_1804_;
v___y_1794_ = v_fileName_1801_;
v___y_1795_ = v_suppressElabErrors_1805_;
v___y_1796_ = v_fileMap_1802_;
v___y_1797_ = v___y_1800_;
v___y_1798_ = v___x_1810_;
goto v___jp_1791_;
}
else
{
lean_object* v___x_1811_; uint8_t v___x_1812_; 
v___x_1811_ = l_Lean_warningAsError;
v___x_1812_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_options_1803_, v___x_1811_);
v___y_1792_ = v___f_1808_;
v___y_1793_ = v_ref_1804_;
v___y_1794_ = v_fileName_1801_;
v___y_1795_ = v_suppressElabErrors_1805_;
v___y_1796_ = v_fileMap_1802_;
v___y_1797_ = v___y_1800_;
v___y_1798_ = v___x_1812_;
goto v___jp_1791_;
}
}
else
{
lean_object* v___x_1813_; lean_object* v___x_1814_; 
lean_dec_ref(v_msgData_1698_);
v___x_1813_ = lean_box(0);
v___x_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
return v___x_1814_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg___boxed(lean_object* v_ref_1817_, lean_object* v_msgData_1818_, lean_object* v_severity_1819_, lean_object* v_isSilent_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
uint8_t v_severity_boxed_1826_; uint8_t v_isSilent_boxed_1827_; lean_object* v_res_1828_; 
v_severity_boxed_1826_ = lean_unbox(v_severity_1819_);
v_isSilent_boxed_1827_ = lean_unbox(v_isSilent_1820_);
v_res_1828_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_1817_, v_msgData_1818_, v_severity_boxed_1826_, v_isSilent_boxed_1827_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v_ref_1817_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(lean_object* v_as_1829_, size_t v_sz_1830_, size_t v_i_1831_, lean_object* v_b_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
uint8_t v___x_1840_; 
v___x_1840_ = lean_usize_dec_lt(v_i_1831_, v_sz_1830_);
if (v___x_1840_ == 0)
{
lean_object* v___x_1841_; 
v___x_1841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1841_, 0, v_b_1832_);
return v___x_1841_;
}
else
{
lean_object* v_ref_1842_; lean_object* v_a_1843_; uint8_t v_severity_1844_; lean_object* v_data_1845_; uint8_t v___x_1846_; lean_object* v___x_1847_; 
v_ref_1842_ = lean_ctor_get(v___y_1837_, 5);
v_a_1843_ = lean_array_uget_borrowed(v_as_1829_, v_i_1831_);
v_severity_1844_ = lean_ctor_get_uint8(v_a_1843_, sizeof(void*)*5 + 1);
v_data_1845_ = lean_ctor_get(v_a_1843_, 4);
v___x_1846_ = 0;
lean_inc(v_data_1845_);
v___x_1847_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_1842_, v_data_1845_, v_severity_1844_, v___x_1846_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v___x_1848_; size_t v___x_1849_; size_t v___x_1850_; 
lean_dec_ref(v___x_1847_);
v___x_1848_ = lean_box(0);
v___x_1849_ = ((size_t)1ULL);
v___x_1850_ = lean_usize_add(v_i_1831_, v___x_1849_);
v_i_1831_ = v___x_1850_;
v_b_1832_ = v___x_1848_;
goto _start;
}
else
{
return v___x_1847_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4___boxed(lean_object* v_as_1852_, lean_object* v_sz_1853_, lean_object* v_i_1854_, lean_object* v_b_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_){
_start:
{
size_t v_sz_boxed_1863_; size_t v_i_boxed_1864_; lean_object* v_res_1865_; 
v_sz_boxed_1863_ = lean_unbox_usize(v_sz_1853_);
lean_dec(v_sz_1853_);
v_i_boxed_1864_ = lean_unbox_usize(v_i_1854_);
lean_dec(v_i_1854_);
v_res_1865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(v_as_1852_, v_sz_boxed_1863_, v_i_boxed_1864_, v_b_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_, v___y_1861_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
lean_dec_ref(v_as_1852_);
return v_res_1865_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(lean_object* v_msgData_1866_, uint8_t v_severity_1867_, uint8_t v_isSilent_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_){
_start:
{
lean_object* v_ref_1876_; lean_object* v___x_1877_; 
v_ref_1876_ = lean_ctor_get(v___y_1873_, 5);
v___x_1877_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_1876_, v_msgData_1866_, v_severity_1867_, v_isSilent_1868_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
return v___x_1877_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0___boxed(lean_object* v_msgData_1878_, lean_object* v_severity_1879_, lean_object* v_isSilent_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
uint8_t v_severity_boxed_1888_; uint8_t v_isSilent_boxed_1889_; lean_object* v_res_1890_; 
v_severity_boxed_1888_ = lean_unbox(v_severity_1879_);
v_isSilent_boxed_1889_ = lean_unbox(v_isSilent_1880_);
v_res_1890_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(v_msgData_1878_, v_severity_boxed_1888_, v_isSilent_boxed_1889_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(lean_object* v_msgData_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
uint8_t v___x_1899_; uint8_t v___x_1900_; lean_object* v___x_1901_; 
v___x_1899_ = 2;
v___x_1900_ = 0;
v___x_1901_ = l_Lean_log___at___00Lean_logError___at___00Lean_versoDocStringFromString_spec__0_spec__0(v_msgData_1891_, v___x_1899_, v___x_1900_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0___boxed(lean_object* v_msgData_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(v_msgData_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_);
lean_dec(v___y_1908_);
lean_dec_ref(v___y_1907_);
lean_dec(v___y_1906_);
lean_dec_ref(v___y_1905_);
lean_dec(v___y_1904_);
lean_dec_ref(v___y_1903_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(lean_object* v_as_1911_, size_t v_sz_1912_, size_t v_i_1913_, lean_object* v_b_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
uint8_t v___x_1922_; 
v___x_1922_ = lean_usize_dec_lt(v_i_1913_, v_sz_1912_);
if (v___x_1922_ == 0)
{
lean_object* v___x_1923_; 
v___x_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1923_, 0, v_b_1914_);
return v___x_1923_;
}
else
{
lean_object* v_a_1924_; lean_object* v_snd_1925_; lean_object* v_snd_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_a_1924_ = lean_array_uget_borrowed(v_as_1911_, v_i_1913_);
v_snd_1925_ = lean_ctor_get(v_a_1924_, 1);
v_snd_1926_ = lean_ctor_get(v_snd_1925_, 1);
lean_inc(v_snd_1926_);
v___x_1927_ = l_Lean_Parser_Error_toString(v_snd_1926_);
v___x_1928_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1928_, 0, v___x_1927_);
v___x_1929_ = l_Lean_MessageData_ofFormat(v___x_1928_);
v___x_1930_ = l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(v___x_1929_, v___y_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v___x_1931_; size_t v___x_1932_; size_t v___x_1933_; 
lean_dec_ref(v___x_1930_);
v___x_1931_ = lean_box(0);
v___x_1932_ = ((size_t)1ULL);
v___x_1933_ = lean_usize_add(v_i_1913_, v___x_1932_);
v_i_1913_ = v___x_1933_;
v_b_1914_ = v___x_1931_;
goto _start;
}
else
{
return v___x_1930_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1___boxed(lean_object* v_as_1935_, lean_object* v_sz_1936_, lean_object* v_i_1937_, lean_object* v_b_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
size_t v_sz_boxed_1946_; size_t v_i_boxed_1947_; lean_object* v_res_1948_; 
v_sz_boxed_1946_ = lean_unbox_usize(v_sz_1936_);
lean_dec(v_sz_1936_);
v_i_boxed_1947_ = lean_unbox_usize(v_i_1937_);
lean_dec(v_i_1937_);
v_res_1948_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(v_as_1935_, v_sz_boxed_1946_, v_i_boxed_1947_, v_b_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
lean_dec(v___y_1942_);
lean_dec_ref(v___y_1941_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec_ref(v_as_1935_);
return v_res_1948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(uint8_t v_flag_1949_, lean_object* v___y_1950_){
_start:
{
lean_object* v___x_1952_; lean_object* v_infoState_1953_; lean_object* v_env_1954_; lean_object* v_nextMacroScope_1955_; lean_object* v_ngen_1956_; lean_object* v_auxDeclNGen_1957_; lean_object* v_traceState_1958_; lean_object* v_cache_1959_; lean_object* v_messages_1960_; lean_object* v_snapshotTasks_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1981_; 
v___x_1952_ = lean_st_ref_take(v___y_1950_);
v_infoState_1953_ = lean_ctor_get(v___x_1952_, 7);
v_env_1954_ = lean_ctor_get(v___x_1952_, 0);
v_nextMacroScope_1955_ = lean_ctor_get(v___x_1952_, 1);
v_ngen_1956_ = lean_ctor_get(v___x_1952_, 2);
v_auxDeclNGen_1957_ = lean_ctor_get(v___x_1952_, 3);
v_traceState_1958_ = lean_ctor_get(v___x_1952_, 4);
v_cache_1959_ = lean_ctor_get(v___x_1952_, 5);
v_messages_1960_ = lean_ctor_get(v___x_1952_, 6);
v_snapshotTasks_1961_ = lean_ctor_get(v___x_1952_, 8);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1952_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1963_ = v___x_1952_;
v_isShared_1964_ = v_isSharedCheck_1981_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_snapshotTasks_1961_);
lean_inc(v_infoState_1953_);
lean_inc(v_messages_1960_);
lean_inc(v_cache_1959_);
lean_inc(v_traceState_1958_);
lean_inc(v_auxDeclNGen_1957_);
lean_inc(v_ngen_1956_);
lean_inc(v_nextMacroScope_1955_);
lean_inc(v_env_1954_);
lean_dec(v___x_1952_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1981_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v_assignment_1965_; lean_object* v_lazyAssignment_1966_; lean_object* v_trees_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1980_; 
v_assignment_1965_ = lean_ctor_get(v_infoState_1953_, 0);
v_lazyAssignment_1966_ = lean_ctor_get(v_infoState_1953_, 1);
v_trees_1967_ = lean_ctor_get(v_infoState_1953_, 2);
v_isSharedCheck_1980_ = !lean_is_exclusive(v_infoState_1953_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1969_ = v_infoState_1953_;
v_isShared_1970_ = v_isSharedCheck_1980_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_trees_1967_);
lean_inc(v_lazyAssignment_1966_);
lean_inc(v_assignment_1965_);
lean_dec(v_infoState_1953_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1980_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_assignment_1965_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_lazyAssignment_1966_);
lean_ctor_set(v_reuseFailAlloc_1979_, 2, v_trees_1967_);
v___x_1972_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1974_; 
lean_ctor_set_uint8(v___x_1972_, sizeof(void*)*3, v_flag_1949_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 7, v___x_1972_);
v___x_1974_ = v___x_1963_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v_env_1954_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v_nextMacroScope_1955_);
lean_ctor_set(v_reuseFailAlloc_1978_, 2, v_ngen_1956_);
lean_ctor_set(v_reuseFailAlloc_1978_, 3, v_auxDeclNGen_1957_);
lean_ctor_set(v_reuseFailAlloc_1978_, 4, v_traceState_1958_);
lean_ctor_set(v_reuseFailAlloc_1978_, 5, v_cache_1959_);
lean_ctor_set(v_reuseFailAlloc_1978_, 6, v_messages_1960_);
lean_ctor_set(v_reuseFailAlloc_1978_, 7, v___x_1972_);
lean_ctor_set(v_reuseFailAlloc_1978_, 8, v_snapshotTasks_1961_);
v___x_1974_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1975_ = lean_st_ref_set(v___y_1950_, v___x_1974_);
v___x_1976_ = lean_box(0);
v___x_1977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
return v___x_1977_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg___boxed(lean_object* v_flag_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
uint8_t v_flag_boxed_1985_; lean_object* v_res_1986_; 
v_flag_boxed_1985_ = lean_unbox(v_flag_1982_);
v_res_1986_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_flag_boxed_1985_, v___y_1983_);
lean_dec(v___y_1983_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(uint8_t v_flag_1987_, lean_object* v_x_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v___x_1996_; lean_object* v_infoState_1997_; uint8_t v_enabled_1998_; lean_object* v_a_2000_; lean_object* v___x_2010_; lean_object* v___x_2011_; 
v___x_1996_ = lean_st_ref_get(v___y_1994_);
v_infoState_1997_ = lean_ctor_get(v___x_1996_, 7);
lean_inc_ref(v_infoState_1997_);
lean_dec(v___x_1996_);
v_enabled_1998_ = lean_ctor_get_uint8(v_infoState_1997_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1997_);
v___x_2010_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_flag_1987_, v___y_1994_);
lean_dec_ref(v___x_2010_);
lean_inc(v___y_1994_);
lean_inc_ref(v___y_1993_);
lean_inc(v___y_1992_);
lean_inc_ref(v___y_1991_);
lean_inc(v___y_1990_);
lean_inc_ref(v___y_1989_);
v___x_2011_ = lean_apply_7(v_x_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, lean_box(0));
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; lean_object* v___x_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2020_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2012_);
lean_dec_ref(v___x_2011_);
v___x_2013_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_enabled_1998_, v___y_1994_);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2020_ == 0)
{
lean_object* v_unused_2021_; 
v_unused_2021_ = lean_ctor_get(v___x_2013_, 0);
lean_dec(v_unused_2021_);
v___x_2015_ = v___x_2013_;
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
else
{
lean_dec(v___x_2013_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2020_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2018_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 0, v_a_2012_);
v___x_2018_ = v___x_2015_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v_a_2012_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
else
{
lean_object* v_a_2022_; 
v_a_2022_ = lean_ctor_get(v___x_2011_, 0);
lean_inc(v_a_2022_);
lean_dec_ref(v___x_2011_);
v_a_2000_ = v_a_2022_;
goto v___jp_1999_;
}
v___jp_1999_:
{
lean_object* v___x_2001_; lean_object* v___x_2003_; uint8_t v_isShared_2004_; uint8_t v_isSharedCheck_2008_; 
v___x_2001_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_enabled_1998_, v___y_1994_);
v_isSharedCheck_2008_ = !lean_is_exclusive(v___x_2001_);
if (v_isSharedCheck_2008_ == 0)
{
lean_object* v_unused_2009_; 
v_unused_2009_ = lean_ctor_get(v___x_2001_, 0);
lean_dec(v_unused_2009_);
v___x_2003_ = v___x_2001_;
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
else
{
lean_dec(v___x_2001_);
v___x_2003_ = lean_box(0);
v_isShared_2004_ = v_isSharedCheck_2008_;
goto v_resetjp_2002_;
}
v_resetjp_2002_:
{
lean_object* v___x_2006_; 
if (v_isShared_2004_ == 0)
{
lean_ctor_set_tag(v___x_2003_, 1);
lean_ctor_set(v___x_2003_, 0, v_a_2000_);
v___x_2006_ = v___x_2003_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v_a_2000_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
return v___x_2006_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg___boxed(lean_object* v_flag_2023_, lean_object* v_x_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
uint8_t v_flag_boxed_2032_; lean_object* v_res_2033_; 
v_flag_boxed_2032_ = lean_unbox(v_flag_2023_);
v_res_2033_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(v_flag_boxed_2032_, v_x_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
return v_res_2033_;
}
}
static lean_object* _init_l_Lean_versoDocStringFromString___closed__0(void){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; 
v___x_2034_ = lean_unsigned_to_nat(0u);
v___x_2035_ = lean_unsigned_to_nat(1u);
v___x_2036_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2035_);
lean_ctor_set(v___x_2036_, 1, v___x_2034_);
return v___x_2036_;
}
}
static lean_object* _init_l_Lean_versoDocStringFromString___closed__1(void){
_start:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2037_ = lean_obj_once(&l_Lean_versoDocStringFromString___closed__0, &l_Lean_versoDocStringFromString___closed__0_once, _init_l_Lean_versoDocStringFromString___closed__0);
v___x_2038_ = lean_box(0);
v___x_2039_ = lean_box(0);
v___x_2040_ = lean_unsigned_to_nat(0u);
v___x_2041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
lean_ctor_set(v___x_2041_, 1, v___x_2039_);
lean_ctor_set(v___x_2041_, 2, v___x_2038_);
lean_ctor_set(v___x_2041_, 3, v___x_2037_);
lean_ctor_set(v___x_2041_, 4, v___x_2040_);
return v___x_2041_;
}
}
static lean_object* _init_l_Lean_versoDocStringFromString___closed__2(void){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2042_ = lean_obj_once(&l_Lean_versoDocStringFromString___closed__1, &l_Lean_versoDocStringFromString___closed__1_once, _init_l_Lean_versoDocStringFromString___closed__1);
v___x_2043_ = lean_alloc_closure((void*)(l_Lean_Doc_Parser_document), 3, 1);
lean_closure_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
}
static lean_object* _init_l_Lean_versoDocStringFromString___closed__3(void){
_start:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2044_ = lean_unsigned_to_nat(0u);
v___x_2045_ = lean_mk_empty_array_with_capacity(v___x_2044_);
return v___x_2045_;
}
}
static lean_object* _init_l_Lean_versoDocStringFromString___closed__4(void){
_start:
{
lean_object* v___x_2046_; 
v___x_2046_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_2046_;
}
}
static lean_object* _init_l_Lean_versoDocStringFromString___closed__5(void){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; 
v___x_2047_ = lean_obj_once(&l_Lean_versoDocStringFromString___closed__4, &l_Lean_versoDocStringFromString___closed__4_once, _init_l_Lean_versoDocStringFromString___closed__4);
v___x_2048_ = l_Lean_Name_mkStr1(v___x_2047_);
return v___x_2048_;
}
}
static lean_object* _init_l_Lean_versoDocStringFromString___closed__6(void){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2049_ = lean_obj_once(&l_Lean_versoDocStringFromString___closed__3, &l_Lean_versoDocStringFromString___closed__3_once, _init_l_Lean_versoDocStringFromString___closed__3);
v___x_2050_ = lean_obj_once(&l_Lean_versoDocStringFromString___closed__5, &l_Lean_versoDocStringFromString___closed__5_once, _init_l_Lean_versoDocStringFromString___closed__5);
v___x_2051_ = lean_box(2);
v___x_2052_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
lean_ctor_set(v___x_2052_, 1, v___x_2050_);
lean_ctor_set(v___x_2052_, 2, v___x_2049_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString(lean_object* v_declName_2053_, lean_object* v_docComment_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v___x_2062_; lean_object* v_env_2063_; lean_object* v_fileName_2064_; lean_object* v_options_2065_; lean_object* v_currNamespace_2066_; lean_object* v_openDecls_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; 
v___x_2062_ = lean_st_ref_get(v_a_2060_);
v_env_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc_ref_n(v_env_2063_, 2);
lean_dec(v___x_2062_);
v_fileName_2064_ = lean_ctor_get(v_a_2059_, 0);
v_options_2065_ = lean_ctor_get(v_a_2059_, 2);
v_currNamespace_2066_ = lean_ctor_get(v_a_2059_, 6);
v_openDecls_2067_ = lean_ctor_get(v_a_2059_, 7);
v___x_2068_ = lean_string_utf8_byte_size(v_docComment_2054_);
lean_inc_ref_n(v_docComment_2054_, 2);
v___x_2069_ = l_Lean_FileMap_ofString(v_docComment_2054_);
lean_inc_ref(v___x_2069_);
lean_inc_ref(v_fileName_2064_);
v___x_2070_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2070_, 0, v_docComment_2054_);
lean_ctor_set(v___x_2070_, 1, v_fileName_2064_);
lean_ctor_set(v___x_2070_, 2, v___x_2069_);
lean_ctor_set(v___x_2070_, 3, v___x_2068_);
lean_inc(v_openDecls_2067_);
lean_inc(v_currNamespace_2066_);
lean_inc_ref(v_options_2065_);
v___x_2071_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2071_, 0, v_env_2063_);
lean_ctor_set(v___x_2071_, 1, v_options_2065_);
lean_ctor_set(v___x_2071_, 2, v_currNamespace_2066_);
lean_ctor_set(v___x_2071_, 3, v_openDecls_2067_);
v___x_2072_ = l_Lean_Parser_mkParserState(v_docComment_2054_);
lean_dec_ref(v_docComment_2054_);
v___x_2073_ = lean_unsigned_to_nat(0u);
v___x_2074_ = lean_obj_once(&l_Lean_versoDocStringFromString___closed__2, &l_Lean_versoDocStringFromString___closed__2_once, _init_l_Lean_versoDocStringFromString___closed__2);
v___x_2075_ = l_Lean_Parser_getTokenTable(v_env_2063_);
v___x_2076_ = l_Lean_Parser_ParserFn_run(v___x_2074_, v___x_2070_, v___x_2071_, v___x_2075_, v___x_2072_);
lean_inc_ref(v___x_2076_);
v___x_2077_ = l_Lean_Parser_ParserState_allErrors(v___x_2076_);
v___x_2078_ = lean_array_get_size(v___x_2077_);
v___x_2079_ = lean_nat_dec_eq(v___x_2078_, v___x_2073_);
if (v___x_2079_ == 0)
{
lean_object* v___x_2080_; size_t v_sz_2081_; size_t v___x_2082_; lean_object* v___x_2083_; 
lean_dec_ref(v___x_2076_);
lean_dec_ref(v___x_2069_);
lean_dec(v_declName_2053_);
v___x_2080_ = lean_box(0);
v_sz_2081_ = lean_array_size(v___x_2077_);
v___x_2082_ = ((size_t)0ULL);
v___x_2083_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__1(v___x_2077_, v_sz_2081_, v___x_2082_, v___x_2080_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
lean_dec_ref(v___x_2077_);
if (lean_obj_tag(v___x_2083_) == 0)
{
lean_object* v___x_2085_; uint8_t v_isShared_2086_; uint8_t v_isSharedCheck_2091_; 
v_isSharedCheck_2091_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2091_ == 0)
{
lean_object* v_unused_2092_; 
v_unused_2092_ = lean_ctor_get(v___x_2083_, 0);
lean_dec(v_unused_2092_);
v___x_2085_ = v___x_2083_;
v_isShared_2086_ = v_isSharedCheck_2091_;
goto v_resetjp_2084_;
}
else
{
lean_dec(v___x_2083_);
v___x_2085_ = lean_box(0);
v_isShared_2086_ = v_isSharedCheck_2091_;
goto v_resetjp_2084_;
}
v_resetjp_2084_:
{
lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2087_ = lean_obj_once(&l_Lean_versoDocString___closed__1, &l_Lean_versoDocString___closed__1_once, _init_l_Lean_versoDocString___closed__1);
if (v_isShared_2086_ == 0)
{
lean_ctor_set(v___x_2085_, 0, v___x_2087_);
v___x_2089_ = v___x_2085_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2087_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
v_a_2093_ = lean_ctor_get(v___x_2083_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2083_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2083_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2083_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
lean_object* v___x_2101_; 
lean_dec_ref(v___x_2077_);
v___x_2101_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_2060_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v_a_2104_; lean_object* v_stxStack_2122_; uint8_t v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; size_t v_sz_2127_; size_t v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; uint8_t v___x_2131_; lean_object* v___x_2132_; lean_object* v___f_2133_; lean_object* v___x_2134_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref(v___x_2101_);
v_stxStack_2122_ = lean_ctor_get(v___x_2076_, 0);
lean_inc_ref(v_stxStack_2122_);
lean_dec_ref(v___x_2076_);
v___x_2123_ = 0;
v___x_2124_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2122_);
lean_dec_ref(v_stxStack_2122_);
v___x_2125_ = l_Lean_Syntax_getArgs(v___x_2124_);
lean_dec(v___x_2124_);
v___x_2126_ = lean_obj_once(&l_Lean_versoDocStringFromString___closed__6, &l_Lean_versoDocStringFromString___closed__6_once, _init_l_Lean_versoDocStringFromString___closed__6);
v_sz_2127_ = lean_array_size(v___x_2125_);
v___x_2128_ = ((size_t)0ULL);
v___x_2129_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_versoModDocString_spec__0(v_sz_2127_, v___x_2128_, v___x_2125_);
v___x_2130_ = lean_alloc_closure((void*)(l_Lean_Doc_elabBlocks___boxed), 11, 1);
lean_closure_set(v___x_2130_, 0, v___x_2129_);
v___x_2131_ = 1;
v___x_2132_ = lean_box(v___x_2131_);
v___f_2133_ = lean_alloc_closure((void*)(l_Lean_versoDocStringFromString___lam__0___boxed), 12, 5);
lean_closure_set(v___f_2133_, 0, v___x_2069_);
lean_closure_set(v___f_2133_, 1, v_declName_2053_);
lean_closure_set(v___f_2133_, 2, v___x_2126_);
lean_closure_set(v___f_2133_, 3, v___x_2130_);
lean_closure_set(v___f_2133_, 4, v___x_2132_);
v___x_2134_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(v___x_2123_, v___f_2133_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v_a_2135_; lean_object* v___x_2136_; 
v_a_2135_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2135_);
lean_dec_ref(v___x_2134_);
v___x_2136_ = l_Lean_Core_getAndEmptyMessageLog___redArg(v_a_2060_);
if (lean_obj_tag(v___x_2136_) == 0)
{
lean_object* v_a_2137_; lean_object* v___x_2138_; 
v_a_2137_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2137_);
lean_dec_ref(v___x_2136_);
v___x_2138_ = l_Lean_Core_setMessageLog___redArg(v_a_2102_, v_a_2060_);
if (lean_obj_tag(v___x_2138_) == 0)
{
lean_object* v___x_2139_; lean_object* v___x_2140_; size_t v_sz_2141_; lean_object* v___x_2142_; 
lean_dec_ref(v___x_2138_);
v___x_2139_ = l_Lean_MessageLog_toArray(v_a_2137_);
lean_dec(v_a_2137_);
v___x_2140_ = lean_box(0);
v_sz_2141_ = lean_array_size(v___x_2139_);
v___x_2142_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_versoDocStringFromString_spec__4(v___x_2139_, v_sz_2141_, v___x_2128_, v___x_2140_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_);
lean_dec_ref(v___x_2139_);
if (lean_obj_tag(v___x_2142_) == 0)
{
lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2149_; 
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2149_ == 0)
{
lean_object* v_unused_2150_; 
v_unused_2150_ = lean_ctor_get(v___x_2142_, 0);
lean_dec(v_unused_2150_);
v___x_2144_ = v___x_2142_;
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
else
{
lean_dec(v___x_2142_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2149_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2147_; 
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 0, v_a_2135_);
v___x_2147_ = v___x_2144_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2148_, 0, v_a_2135_);
v___x_2147_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
return v___x_2147_;
}
}
}
else
{
lean_object* v_a_2151_; lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
lean_dec(v_a_2135_);
v_a_2151_ = lean_ctor_get(v___x_2142_, 0);
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2142_);
if (v_isSharedCheck_2158_ == 0)
{
v___x_2153_ = v___x_2142_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_inc(v_a_2151_);
lean_dec(v___x_2142_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v_a_2151_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
}
else
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2166_; 
lean_dec(v_a_2137_);
lean_dec(v_a_2135_);
v_a_2159_ = lean_ctor_get(v___x_2138_, 0);
v_isSharedCheck_2166_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2166_ == 0)
{
v___x_2161_ = v___x_2138_;
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2138_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2166_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2164_; 
if (v_isShared_2162_ == 0)
{
v___x_2164_ = v___x_2161_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2165_; 
v_reuseFailAlloc_2165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2165_, 0, v_a_2159_);
v___x_2164_ = v_reuseFailAlloc_2165_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
return v___x_2164_;
}
}
}
}
else
{
lean_object* v_a_2167_; 
lean_dec(v_a_2135_);
v_a_2167_ = lean_ctor_get(v___x_2136_, 0);
lean_inc(v_a_2167_);
lean_dec_ref(v___x_2136_);
v_a_2104_ = v_a_2167_;
goto v___jp_2103_;
}
}
else
{
lean_object* v_a_2168_; 
v_a_2168_ = lean_ctor_get(v___x_2134_, 0);
lean_inc(v_a_2168_);
lean_dec_ref(v___x_2134_);
v_a_2104_ = v_a_2168_;
goto v___jp_2103_;
}
v___jp_2103_:
{
lean_object* v___x_2105_; 
v___x_2105_ = l_Lean_Core_setMessageLog___redArg(v_a_2102_, v_a_2060_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2112_ == 0)
{
lean_object* v_unused_2113_; 
v_unused_2113_ = lean_ctor_get(v___x_2105_, 0);
lean_dec(v_unused_2113_);
v___x_2107_ = v___x_2105_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_dec(v___x_2105_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
lean_ctor_set_tag(v___x_2107_, 1);
lean_ctor_set(v___x_2107_, 0, v_a_2104_);
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2104_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
else
{
lean_object* v_a_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2121_; 
lean_dec_ref(v_a_2104_);
v_a_2114_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2116_ = v___x_2105_;
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_a_2114_);
lean_dec(v___x_2105_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2121_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2119_; 
if (v_isShared_2117_ == 0)
{
v___x_2119_ = v___x_2116_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_a_2114_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
}
}
else
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2176_; 
lean_dec_ref(v___x_2076_);
lean_dec_ref(v___x_2069_);
lean_dec(v_declName_2053_);
v_a_2169_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2171_ = v___x_2101_;
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2101_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2176_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
if (v_isShared_2172_ == 0)
{
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
return v___x_2174_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_versoDocStringFromString___boxed(lean_object* v_declName_2177_, lean_object* v_docComment_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lean_versoDocStringFromString(v_declName_2177_, v_docComment_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_);
lean_dec(v_a_2184_);
lean_dec_ref(v_a_2183_);
lean_dec(v_a_2182_);
lean_dec_ref(v_a_2181_);
lean_dec(v_a_2180_);
lean_dec_ref(v_a_2179_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3(uint8_t v_flag_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___redArg(v_flag_2187_, v___y_2193_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3___boxed(lean_object* v_flag_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_){
_start:
{
uint8_t v_flag_boxed_2204_; lean_object* v_res_2205_; 
v_flag_boxed_2204_ = lean_unbox(v_flag_2196_);
v_res_2205_ = l_Lean_Elab_enableInfoTree___at___00Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2_spec__3(v_flag_boxed_2204_, v___y_2197_, v___y_2198_, v___y_2199_, v___y_2200_, v___y_2201_, v___y_2202_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v___y_2199_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
return v_res_2205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2(lean_object* v_00_u03b1_2206_, uint8_t v_flag_2207_, lean_object* v_x_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___redArg(v_flag_2207_, v_x_2208_, v___y_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_, v___y_2214_);
return v___x_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2___boxed(lean_object* v_00_u03b1_2217_, lean_object* v_flag_2218_, lean_object* v_x_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
uint8_t v_flag_boxed_2227_; lean_object* v_res_2228_; 
v_flag_boxed_2227_ = lean_unbox(v_flag_2218_);
v_res_2228_ = l_Lean_Elab_withEnableInfoTree___at___00Lean_versoDocStringFromString_spec__2(v_00_u03b1_2217_, v_flag_boxed_2227_, v_x_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3(lean_object* v_ref_2229_, lean_object* v_msgData_2230_, uint8_t v_severity_2231_, uint8_t v_isSilent_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_){
_start:
{
lean_object* v___x_2240_; 
v___x_2240_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_2229_, v_msgData_2230_, v_severity_2231_, v_isSilent_2232_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_);
return v___x_2240_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___boxed(lean_object* v_ref_2241_, lean_object* v_msgData_2242_, lean_object* v_severity_2243_, lean_object* v_isSilent_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
uint8_t v_severity_boxed_2252_; uint8_t v_isSilent_boxed_2253_; lean_object* v_res_2254_; 
v_severity_boxed_2252_ = lean_unbox(v_severity_2243_);
v_isSilent_boxed_2253_ = lean_unbox(v_isSilent_2244_);
v_res_2254_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3(v_ref_2241_, v_msgData_2242_, v_severity_boxed_2252_, v_isSilent_boxed_2253_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v_ref_2241_);
return v_res_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__0(lean_object* v_docString_2255_, lean_object* v_declName_2256_, lean_object* v_env_2257_){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2258_ = l_Lean_docStringExt;
v___x_2259_ = l_String_removeLeadingSpaces(v_docString_2255_);
v___x_2260_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2258_, v_env_2257_, v_declName_2256_, v___x_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__1(lean_object* v_declName_2261_, lean_object* v_modifyEnv_2262_, lean_object* v_docString_2263_){
_start:
{
lean_object* v___f_2264_; lean_object* v___x_2265_; 
v___f_2264_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2264_, 0, v_docString_2263_);
lean_closure_set(v___f_2264_, 1, v_declName_2261_);
v___x_2265_ = lean_apply_1(v_modifyEnv_2262_, v___f_2264_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__2(lean_object* v_inst_2266_, lean_object* v_inst_2267_, lean_object* v_docComment_2268_, lean_object* v_toBind_2269_, lean_object* v___f_2270_, lean_object* v_____r_2271_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; 
v___x_2272_ = l_Lean_getDocStringText___redArg(v_inst_2266_, v_inst_2267_, v_docComment_2268_);
v___x_2273_ = lean_apply_4(v_toBind_2269_, lean_box(0), lean_box(0), v___x_2272_, v___f_2270_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3(lean_object* v_inst_2274_, lean_object* v_inst_2275_, lean_object* v_inst_2276_, lean_object* v_inst_2277_, lean_object* v_inst_2278_, lean_object* v_docComment_2279_, lean_object* v_toBind_2280_, lean_object* v___f_2281_, lean_object* v_____r_2282_){
_start:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2283_ = l_Lean_validateDocComment___redArg(v_inst_2274_, v_inst_2275_, v_inst_2276_, v_inst_2277_, v_inst_2278_, v_docComment_2279_);
v___x_2284_ = lean_apply_4(v_toBind_2280_, lean_box(0), lean_box(0), v___x_2283_, v___f_2281_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__3___boxed(lean_object* v_inst_2285_, lean_object* v_inst_2286_, lean_object* v_inst_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v_docComment_2290_, lean_object* v_toBind_2291_, lean_object* v___f_2292_, lean_object* v_____r_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_addMarkdownDocString___redArg___lam__3(v_inst_2285_, v_inst_2286_, v_inst_2287_, v_inst_2288_, v_inst_2289_, v_docComment_2290_, v_toBind_2291_, v___f_2292_, v_____r_2293_);
lean_dec(v_docComment_2290_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__4(lean_object* v___f_2295_, lean_object* v_____r_2296_){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_apply_1(v___f_2295_, v_____r_2296_);
return v___x_2297_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__0(void){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = lean_mk_string_unchecked("invalid doc string, declaration `", 33, 33);
return v___x_2298_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__0, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__0_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__0);
v___x_2300_ = l_Lean_stringToMessageData(v___x_2299_);
return v___x_2300_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__2(void){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = lean_mk_string_unchecked("` is in an imported module", 26, 26);
return v___x_2301_;
}
}
static lean_object* _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2302_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__2, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__2_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__2);
v___x_2303_ = l_Lean_stringToMessageData(v___x_2302_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5(lean_object* v___f_2304_, lean_object* v_declName_2305_, uint8_t v___x_2306_, lean_object* v_inst_2307_, lean_object* v_inst_2308_, lean_object* v_toBind_2309_, lean_object* v___f_2310_, lean_object* v_____do__lift_2311_){
_start:
{
lean_object* v___x_2315_; 
v___x_2315_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2311_, v_declName_2305_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_dec(v___f_2310_);
lean_dec(v_toBind_2309_);
lean_dec_ref(v_inst_2308_);
lean_dec_ref(v_inst_2307_);
lean_dec(v_declName_2305_);
goto v___jp_2312_;
}
else
{
lean_dec_ref(v___x_2315_);
if (v___x_2306_ == 0)
{
lean_object* v___x_2316_; lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; 
lean_dec(v___f_2304_);
v___x_2316_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2317_ = l_Lean_MessageData_ofConstName(v_declName_2305_, v___x_2306_);
v___x_2318_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2318_, 0, v___x_2316_);
lean_ctor_set(v___x_2318_, 1, v___x_2317_);
v___x_2319_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2320_, 0, v___x_2318_);
lean_ctor_set(v___x_2320_, 1, v___x_2319_);
v___x_2321_ = l_Lean_throwError___redArg(v_inst_2307_, v_inst_2308_, v___x_2320_);
v___x_2322_ = lean_apply_4(v_toBind_2309_, lean_box(0), lean_box(0), v___x_2321_, v___f_2310_);
return v___x_2322_;
}
else
{
lean_dec(v___f_2310_);
lean_dec(v_toBind_2309_);
lean_dec_ref(v_inst_2308_);
lean_dec_ref(v_inst_2307_);
lean_dec(v_declName_2305_);
goto v___jp_2312_;
}
}
v___jp_2312_:
{
lean_object* v___x_2313_; lean_object* v___x_2314_; 
v___x_2313_ = lean_box(0);
v___x_2314_ = lean_apply_1(v___f_2304_, v___x_2313_);
return v___x_2314_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg___lam__5___boxed(lean_object* v___f_2323_, lean_object* v_declName_2324_, lean_object* v___x_2325_, lean_object* v_inst_2326_, lean_object* v_inst_2327_, lean_object* v_toBind_2328_, lean_object* v___f_2329_, lean_object* v_____do__lift_2330_){
_start:
{
uint8_t v___x_390__boxed_2331_; lean_object* v_res_2332_; 
v___x_390__boxed_2331_ = lean_unbox(v___x_2325_);
v_res_2332_ = l_Lean_addMarkdownDocString___redArg___lam__5(v___f_2323_, v_declName_2324_, v___x_390__boxed_2331_, v_inst_2326_, v_inst_2327_, v_toBind_2328_, v___f_2329_, v_____do__lift_2330_);
lean_dec_ref(v_____do__lift_2330_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___redArg(lean_object* v_inst_2333_, lean_object* v_inst_2334_, lean_object* v_inst_2335_, lean_object* v_inst_2336_, lean_object* v_inst_2337_, lean_object* v_inst_2338_, lean_object* v_inst_2339_, lean_object* v_declName_2340_, lean_object* v_docComment_2341_){
_start:
{
uint8_t v___x_2342_; 
v___x_2342_ = l_Lean_Name_isAnonymous(v_declName_2340_);
if (v___x_2342_ == 0)
{
lean_object* v_toBind_2343_; lean_object* v_getEnv_2344_; lean_object* v_modifyEnv_2345_; lean_object* v___f_2346_; lean_object* v___f_2347_; lean_object* v___f_2348_; lean_object* v___f_2349_; lean_object* v___x_2350_; lean_object* v___f_2351_; lean_object* v___x_2352_; 
v_toBind_2343_ = lean_ctor_get(v_inst_2333_, 1);
lean_inc_n(v_toBind_2343_, 4);
v_getEnv_2344_ = lean_ctor_get(v_inst_2336_, 0);
lean_inc(v_getEnv_2344_);
v_modifyEnv_2345_ = lean_ctor_get(v_inst_2336_, 1);
lean_inc(v_modifyEnv_2345_);
lean_dec_ref(v_inst_2336_);
lean_inc(v_declName_2340_);
v___f_2346_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2346_, 0, v_declName_2340_);
lean_closure_set(v___f_2346_, 1, v_modifyEnv_2345_);
lean_inc(v_docComment_2341_);
lean_inc_ref(v_inst_2337_);
lean_inc_ref_n(v_inst_2333_, 2);
v___f_2347_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2347_, 0, v_inst_2333_);
lean_closure_set(v___f_2347_, 1, v_inst_2337_);
lean_closure_set(v___f_2347_, 2, v_docComment_2341_);
lean_closure_set(v___f_2347_, 3, v_toBind_2343_);
lean_closure_set(v___f_2347_, 4, v___f_2346_);
v___f_2348_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__3___boxed), 9, 8);
lean_closure_set(v___f_2348_, 0, v_inst_2333_);
lean_closure_set(v___f_2348_, 1, v_inst_2334_);
lean_closure_set(v___f_2348_, 2, v_inst_2338_);
lean_closure_set(v___f_2348_, 3, v_inst_2339_);
lean_closure_set(v___f_2348_, 4, v_inst_2335_);
lean_closure_set(v___f_2348_, 5, v_docComment_2341_);
lean_closure_set(v___f_2348_, 6, v_toBind_2343_);
lean_closure_set(v___f_2348_, 7, v___f_2347_);
lean_inc_ref(v___f_2348_);
v___f_2349_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__4), 2, 1);
lean_closure_set(v___f_2349_, 0, v___f_2348_);
v___x_2350_ = lean_box(v___x_2342_);
v___f_2351_ = lean_alloc_closure((void*)(l_Lean_addMarkdownDocString___redArg___lam__5___boxed), 8, 7);
lean_closure_set(v___f_2351_, 0, v___f_2348_);
lean_closure_set(v___f_2351_, 1, v_declName_2340_);
lean_closure_set(v___f_2351_, 2, v___x_2350_);
lean_closure_set(v___f_2351_, 3, v_inst_2333_);
lean_closure_set(v___f_2351_, 4, v_inst_2337_);
lean_closure_set(v___f_2351_, 5, v_toBind_2343_);
lean_closure_set(v___f_2351_, 6, v___f_2349_);
v___x_2352_ = lean_apply_4(v_toBind_2343_, lean_box(0), lean_box(0), v_getEnv_2344_, v___f_2351_);
return v___x_2352_;
}
else
{
lean_object* v_toApplicative_2353_; lean_object* v_toPure_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
lean_dec(v_docComment_2341_);
lean_dec(v_declName_2340_);
lean_dec(v_inst_2339_);
lean_dec_ref(v_inst_2338_);
lean_dec_ref(v_inst_2337_);
lean_dec_ref(v_inst_2336_);
lean_dec(v_inst_2335_);
lean_dec(v_inst_2334_);
v_toApplicative_2353_ = lean_ctor_get(v_inst_2333_, 0);
lean_inc_ref(v_toApplicative_2353_);
lean_dec_ref(v_inst_2333_);
v_toPure_2354_ = lean_ctor_get(v_toApplicative_2353_, 1);
lean_inc(v_toPure_2354_);
lean_dec_ref(v_toApplicative_2353_);
v___x_2355_ = lean_box(0);
v___x_2356_ = lean_apply_2(v_toPure_2354_, lean_box(0), v___x_2355_);
return v___x_2356_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString(lean_object* v_m_2357_, lean_object* v_inst_2358_, lean_object* v_inst_2359_, lean_object* v_inst_2360_, lean_object* v_inst_2361_, lean_object* v_inst_2362_, lean_object* v_inst_2363_, lean_object* v_inst_2364_, lean_object* v_declName_2365_, lean_object* v_docComment_2366_){
_start:
{
lean_object* v___x_2367_; 
v___x_2367_ = l_Lean_addMarkdownDocString___redArg(v_inst_2358_, v_inst_2359_, v_inst_2360_, v_inst_2361_, v_inst_2362_, v_inst_2363_, v_inst_2364_, v_declName_2365_, v_docComment_2366_);
return v___x_2367_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__0(lean_object* v_declName_2368_, lean_object* v_docs_2369_, lean_object* v_env_2370_){
_start:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2371_ = l_Lean_versoDocStringExt;
v___x_2372_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2371_, v_env_2370_, v_declName_2368_, v_docs_2369_);
return v___x_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__1(lean_object* v_modifyEnv_2373_, lean_object* v___f_2374_, lean_object* v_____r_2375_){
_start:
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_apply_1(v_modifyEnv_2373_, v___f_2374_);
return v___x_2376_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_2377_; 
v___x_2377_ = lean_mk_string_unchecked("invalid doc string, declaration '", 33, 33);
return v___x_2377_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2378_; 
v___x_2378_ = lean_mk_string_unchecked("' is in an imported module", 26, 26);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2(lean_object* v_declName_2379_, lean_object* v_modifyEnv_2380_, lean_object* v___f_2381_, uint8_t v___x_2382_, lean_object* v_inst_2383_, lean_object* v_inst_2384_, lean_object* v_toBind_2385_, lean_object* v___f_2386_, lean_object* v_____do__lift_2387_){
_start:
{
lean_object* v___x_2388_; 
v___x_2388_ = l_Lean_Environment_getModuleIdxFor_x3f(v_____do__lift_2387_, v_declName_2379_);
if (lean_obj_tag(v___x_2388_) == 0)
{
lean_object* v___x_2389_; 
lean_dec(v___f_2386_);
lean_dec(v_toBind_2385_);
lean_dec_ref(v_inst_2384_);
lean_dec_ref(v_inst_2383_);
lean_dec(v_declName_2379_);
v___x_2389_ = lean_apply_1(v_modifyEnv_2380_, v___f_2381_);
return v___x_2389_;
}
else
{
lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2406_; 
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2406_ == 0)
{
lean_object* v_unused_2407_; 
v_unused_2407_ = lean_ctor_get(v___x_2388_, 0);
lean_dec(v_unused_2407_);
v___x_2391_ = v___x_2388_;
v_isShared_2392_ = v_isSharedCheck_2406_;
goto v_resetjp_2390_;
}
else
{
lean_dec(v___x_2388_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2406_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
if (v___x_2382_ == 0)
{
lean_object* v___x_2393_; uint8_t v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2400_; 
lean_dec_ref(v___f_2381_);
lean_dec(v_modifyEnv_2380_);
v___x_2393_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0);
v___x_2394_ = 1;
v___x_2395_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2379_, v___x_2394_);
v___x_2396_ = lean_string_append(v___x_2393_, v___x_2395_);
lean_dec_ref(v___x_2395_);
v___x_2397_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1);
v___x_2398_ = lean_string_append(v___x_2396_, v___x_2397_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set_tag(v___x_2391_, 3);
lean_ctor_set(v___x_2391_, 0, v___x_2398_);
v___x_2400_ = v___x_2391_;
goto v_reusejp_2399_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2398_);
v___x_2400_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2399_;
}
v_reusejp_2399_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2401_ = l_Lean_MessageData_ofFormat(v___x_2400_);
v___x_2402_ = l_Lean_throwError___redArg(v_inst_2383_, v_inst_2384_, v___x_2401_);
v___x_2403_ = lean_apply_4(v_toBind_2385_, lean_box(0), lean_box(0), v___x_2402_, v___f_2386_);
return v___x_2403_;
}
}
else
{
lean_object* v___x_2405_; 
lean_del_object(v___x_2391_);
lean_dec(v___f_2386_);
lean_dec(v_toBind_2385_);
lean_dec_ref(v_inst_2384_);
lean_dec_ref(v_inst_2383_);
lean_dec(v_declName_2379_);
v___x_2405_ = lean_apply_1(v_modifyEnv_2380_, v___f_2381_);
return v___x_2405_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg___lam__2___boxed(lean_object* v_declName_2408_, lean_object* v_modifyEnv_2409_, lean_object* v___f_2410_, lean_object* v___x_2411_, lean_object* v_inst_2412_, lean_object* v_inst_2413_, lean_object* v_toBind_2414_, lean_object* v___f_2415_, lean_object* v_____do__lift_2416_){
_start:
{
uint8_t v___x_304__boxed_2417_; lean_object* v_res_2418_; 
v___x_304__boxed_2417_ = lean_unbox(v___x_2411_);
v_res_2418_ = l_Lean_addVersoDocStringCore___redArg___lam__2(v_declName_2408_, v_modifyEnv_2409_, v___f_2410_, v___x_304__boxed_2417_, v_inst_2412_, v_inst_2413_, v_toBind_2414_, v___f_2415_, v_____do__lift_2416_);
lean_dec_ref(v_____do__lift_2416_);
return v_res_2418_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___redArg(lean_object* v_inst_2419_, lean_object* v_inst_2420_, lean_object* v_inst_2421_, lean_object* v_declName_2422_, lean_object* v_docs_2423_){
_start:
{
uint8_t v___x_2424_; 
v___x_2424_ = l_Lean_Name_isAnonymous(v_declName_2422_);
if (v___x_2424_ == 0)
{
lean_object* v_toBind_2425_; lean_object* v_getEnv_2426_; lean_object* v_modifyEnv_2427_; lean_object* v___f_2428_; lean_object* v___f_2429_; lean_object* v___x_2430_; lean_object* v___f_2431_; lean_object* v___x_2432_; 
v_toBind_2425_ = lean_ctor_get(v_inst_2419_, 1);
lean_inc_n(v_toBind_2425_, 2);
v_getEnv_2426_ = lean_ctor_get(v_inst_2420_, 0);
lean_inc(v_getEnv_2426_);
v_modifyEnv_2427_ = lean_ctor_get(v_inst_2420_, 1);
lean_inc_n(v_modifyEnv_2427_, 2);
lean_dec_ref(v_inst_2420_);
lean_inc(v_declName_2422_);
v___f_2428_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2428_, 0, v_declName_2422_);
lean_closure_set(v___f_2428_, 1, v_docs_2423_);
lean_inc_ref(v___f_2428_);
v___f_2429_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2429_, 0, v_modifyEnv_2427_);
lean_closure_set(v___f_2429_, 1, v___f_2428_);
v___x_2430_ = lean_box(v___x_2424_);
v___f_2431_ = lean_alloc_closure((void*)(l_Lean_addVersoDocStringCore___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_2431_, 0, v_declName_2422_);
lean_closure_set(v___f_2431_, 1, v_modifyEnv_2427_);
lean_closure_set(v___f_2431_, 2, v___f_2428_);
lean_closure_set(v___f_2431_, 3, v___x_2430_);
lean_closure_set(v___f_2431_, 4, v_inst_2419_);
lean_closure_set(v___f_2431_, 5, v_inst_2421_);
lean_closure_set(v___f_2431_, 6, v_toBind_2425_);
lean_closure_set(v___f_2431_, 7, v___f_2429_);
v___x_2432_ = lean_apply_4(v_toBind_2425_, lean_box(0), lean_box(0), v_getEnv_2426_, v___f_2431_);
return v___x_2432_;
}
else
{
lean_object* v_toApplicative_2433_; lean_object* v_toPure_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
lean_dec_ref(v_docs_2423_);
lean_dec(v_declName_2422_);
lean_dec_ref(v_inst_2421_);
lean_dec_ref(v_inst_2420_);
v_toApplicative_2433_ = lean_ctor_get(v_inst_2419_, 0);
lean_inc_ref(v_toApplicative_2433_);
lean_dec_ref(v_inst_2419_);
v_toPure_2434_ = lean_ctor_get(v_toApplicative_2433_, 1);
lean_inc(v_toPure_2434_);
lean_dec_ref(v_toApplicative_2433_);
v___x_2435_ = lean_box(0);
v___x_2436_ = lean_apply_2(v_toPure_2434_, lean_box(0), v___x_2435_);
return v___x_2436_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore(lean_object* v_m_2437_, lean_object* v_inst_2438_, lean_object* v_inst_2439_, lean_object* v_inst_2440_, lean_object* v_inst_2441_, lean_object* v_declName_2442_, lean_object* v_docs_2443_){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = l_Lean_addVersoDocStringCore___redArg(v_inst_2438_, v_inst_2439_, v_inst_2441_, v_declName_2442_, v_docs_2443_);
return v___x_2444_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___boxed(lean_object* v_m_2445_, lean_object* v_inst_2446_, lean_object* v_inst_2447_, lean_object* v_inst_2448_, lean_object* v_inst_2449_, lean_object* v_declName_2450_, lean_object* v_docs_2451_){
_start:
{
lean_object* v_res_2452_; 
v_res_2452_ = l_Lean_addVersoDocStringCore(v_m_2445_, v_inst_2446_, v_inst_2447_, v_inst_2448_, v_inst_2449_, v_declName_2450_, v_docs_2451_);
lean_dec(v_inst_2448_);
return v_res_2452_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_mk_string_unchecked("Error adding module docs: ", 26, 26);
return v___x_2453_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__0);
v___x_2455_ = l_Lean_stringToMessageData(v___x_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__0(lean_object* v_docs_2456_, lean_object* v_inst_2457_, lean_object* v_inst_2458_, lean_object* v_inst_2459_, lean_object* v_____do__lift_2460_){
_start:
{
lean_object* v___x_2461_; 
v___x_2461_ = l_Lean_addVersoModuleDocSnippet(v_____do__lift_2460_, v_docs_2456_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
lean_dec_ref(v_inst_2459_);
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref(v___x_2461_);
v___x_2463_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_2464_ = l_Lean_stringToMessageData(v_a_2462_);
v___x_2465_ = l_Lean_indentD(v___x_2464_);
v___x_2466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2466_, 0, v___x_2463_);
lean_ctor_set(v___x_2466_, 1, v___x_2465_);
v___x_2467_ = l_Lean_throwError___redArg(v_inst_2457_, v_inst_2458_, v___x_2466_);
return v___x_2467_;
}
else
{
lean_object* v_a_2468_; lean_object* v___x_2469_; 
lean_dec_ref(v_inst_2458_);
lean_dec_ref(v_inst_2457_);
v_a_2468_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2468_);
lean_dec_ref(v___x_2461_);
v___x_2469_ = l_Lean_setEnv___redArg(v_inst_2459_, v_a_2468_);
return v___x_2469_;
}
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = lean_mk_string_unchecked("Can't add Verso-format module docs because there is already Markdown-format content present.", 92, 92);
return v___x_2470_;
}
}
static lean_object* _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; 
v___x_2471_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__0);
v___x_2472_ = l_Lean_stringToMessageData(v___x_2471_);
return v___x_2472_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg___lam__1(lean_object* v_inst_2473_, lean_object* v_inst_2474_, lean_object* v_toBind_2475_, lean_object* v_getEnv_2476_, lean_object* v___f_2477_, lean_object* v_____do__lift_2478_){
_start:
{
lean_object* v___x_2479_; uint8_t v___x_2480_; 
v___x_2479_ = l_Lean_getMainModuleDoc(v_____do__lift_2478_);
v___x_2480_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_2479_);
lean_dec_ref(v___x_2479_);
if (v___x_2480_ == 0)
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
lean_dec(v___f_2477_);
lean_dec(v_getEnv_2476_);
lean_dec(v_toBind_2475_);
v___x_2481_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_2482_ = l_Lean_throwError___redArg(v_inst_2473_, v_inst_2474_, v___x_2481_);
return v___x_2482_;
}
else
{
lean_object* v___x_2483_; 
lean_dec_ref(v_inst_2474_);
lean_dec_ref(v_inst_2473_);
v___x_2483_ = lean_apply_4(v_toBind_2475_, lean_box(0), lean_box(0), v_getEnv_2476_, v___f_2477_);
return v___x_2483_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___redArg(lean_object* v_inst_2484_, lean_object* v_inst_2485_, lean_object* v_inst_2486_, lean_object* v_docs_2487_){
_start:
{
lean_object* v_toBind_2488_; lean_object* v_getEnv_2489_; lean_object* v___f_2490_; lean_object* v___f_2491_; lean_object* v___x_2492_; 
v_toBind_2488_ = lean_ctor_get(v_inst_2484_, 1);
lean_inc_n(v_toBind_2488_, 2);
v_getEnv_2489_ = lean_ctor_get(v_inst_2485_, 0);
lean_inc_n(v_getEnv_2489_, 2);
lean_inc_ref(v_inst_2486_);
lean_inc_ref(v_inst_2484_);
v___f_2490_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2490_, 0, v_docs_2487_);
lean_closure_set(v___f_2490_, 1, v_inst_2484_);
lean_closure_set(v___f_2490_, 2, v_inst_2486_);
lean_closure_set(v___f_2490_, 3, v_inst_2485_);
v___f_2491_ = lean_alloc_closure((void*)(l_Lean_addVersoModDocStringCore___redArg___lam__1), 6, 5);
lean_closure_set(v___f_2491_, 0, v_inst_2484_);
lean_closure_set(v___f_2491_, 1, v_inst_2486_);
lean_closure_set(v___f_2491_, 2, v_toBind_2488_);
lean_closure_set(v___f_2491_, 3, v_getEnv_2489_);
lean_closure_set(v___f_2491_, 4, v___f_2490_);
v___x_2492_ = lean_apply_4(v_toBind_2488_, lean_box(0), lean_box(0), v_getEnv_2489_, v___f_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore(lean_object* v_m_2493_, lean_object* v_inst_2494_, lean_object* v_inst_2495_, lean_object* v_inst_2496_, lean_object* v_inst_2497_, lean_object* v_docs_2498_){
_start:
{
lean_object* v___x_2499_; 
v___x_2499_ = l_Lean_addVersoModDocStringCore___redArg(v_inst_2494_, v_inst_2495_, v_inst_2497_, v_docs_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___boxed(lean_object* v_m_2500_, lean_object* v_inst_2501_, lean_object* v_inst_2502_, lean_object* v_inst_2503_, lean_object* v_inst_2504_, lean_object* v_docs_2505_){
_start:
{
lean_object* v_res_2506_; 
v_res_2506_ = l_Lean_addVersoModDocStringCore(v_m_2500_, v_inst_2501_, v_inst_2502_, v_inst_2503_, v_inst_2504_, v_docs_2505_);
lean_dec(v_inst_2503_);
return v_res_2506_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2507_; 
v___x_2507_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2507_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__0);
v___x_2509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2509_, 0, v___x_2508_);
return v___x_2509_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
lean_ctor_set(v___x_2511_, 1, v___x_2510_);
return v___x_2511_;
}
}
static lean_object* _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__1);
v___x_2513_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2513_, 0, v___x_2512_);
lean_ctor_set(v___x_2513_, 1, v___x_2512_);
lean_ctor_set(v___x_2513_, 2, v___x_2512_);
lean_ctor_set(v___x_2513_, 3, v___x_2512_);
lean_ctor_set(v___x_2513_, 4, v___x_2512_);
lean_ctor_set(v___x_2513_, 5, v___x_2512_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(lean_object* v_declName_2514_, lean_object* v_docs_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v___y_2524_; lean_object* v___y_2525_; uint8_t v___x_2565_; 
v___x_2565_ = l_Lean_Name_isAnonymous(v_declName_2514_);
if (v___x_2565_ == 0)
{
lean_object* v___x_2566_; lean_object* v_env_2567_; lean_object* v___x_2568_; 
v___x_2566_ = lean_st_ref_get(v___y_2521_);
v_env_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc_ref(v_env_2567_);
lean_dec(v___x_2566_);
v___x_2568_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2567_, v_declName_2514_);
lean_dec_ref(v_env_2567_);
if (lean_obj_tag(v___x_2568_) == 0)
{
v___y_2524_ = v___y_2519_;
v___y_2525_ = v___y_2521_;
goto v___jp_2523_;
}
else
{
lean_object* v___x_2570_; uint8_t v_isShared_2571_; uint8_t v_isSharedCheck_2583_; 
v_isSharedCheck_2583_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2583_ == 0)
{
lean_object* v_unused_2584_; 
v_unused_2584_ = lean_ctor_get(v___x_2568_, 0);
lean_dec(v_unused_2584_);
v___x_2570_ = v___x_2568_;
v_isShared_2571_ = v_isSharedCheck_2583_;
goto v_resetjp_2569_;
}
else
{
lean_dec(v___x_2568_);
v___x_2570_ = lean_box(0);
v_isShared_2571_ = v_isSharedCheck_2583_;
goto v_resetjp_2569_;
}
v_resetjp_2569_:
{
if (v___x_2565_ == 0)
{
lean_object* v___x_2572_; uint8_t v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2579_; 
lean_dec_ref(v_docs_2515_);
v___x_2572_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0);
v___x_2573_ = 1;
v___x_2574_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2514_, v___x_2573_);
v___x_2575_ = lean_string_append(v___x_2572_, v___x_2574_);
lean_dec_ref(v___x_2574_);
v___x_2576_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1);
v___x_2577_ = lean_string_append(v___x_2575_, v___x_2576_);
if (v_isShared_2571_ == 0)
{
lean_ctor_set_tag(v___x_2570_, 3);
lean_ctor_set(v___x_2570_, 0, v___x_2577_);
v___x_2579_ = v___x_2570_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2577_);
v___x_2579_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2580_ = l_Lean_MessageData_ofFormat(v___x_2579_);
v___x_2581_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2580_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
return v___x_2581_;
}
}
else
{
lean_del_object(v___x_2570_);
v___y_2524_ = v___y_2519_;
v___y_2525_ = v___y_2521_;
goto v___jp_2523_;
}
}
}
}
else
{
lean_object* v___x_2585_; lean_object* v___x_2586_; 
lean_dec_ref(v_docs_2515_);
lean_dec(v_declName_2514_);
v___x_2585_ = lean_box(0);
v___x_2586_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2585_);
return v___x_2586_;
}
v___jp_2523_:
{
lean_object* v___x_2526_; lean_object* v_env_2527_; lean_object* v_nextMacroScope_2528_; lean_object* v_ngen_2529_; lean_object* v_auxDeclNGen_2530_; lean_object* v_traceState_2531_; lean_object* v_messages_2532_; lean_object* v_infoState_2533_; lean_object* v_snapshotTasks_2534_; lean_object* v___x_2536_; uint8_t v_isShared_2537_; uint8_t v_isSharedCheck_2563_; 
v___x_2526_ = lean_st_ref_take(v___y_2525_);
v_env_2527_ = lean_ctor_get(v___x_2526_, 0);
v_nextMacroScope_2528_ = lean_ctor_get(v___x_2526_, 1);
v_ngen_2529_ = lean_ctor_get(v___x_2526_, 2);
v_auxDeclNGen_2530_ = lean_ctor_get(v___x_2526_, 3);
v_traceState_2531_ = lean_ctor_get(v___x_2526_, 4);
v_messages_2532_ = lean_ctor_get(v___x_2526_, 6);
v_infoState_2533_ = lean_ctor_get(v___x_2526_, 7);
v_snapshotTasks_2534_ = lean_ctor_get(v___x_2526_, 8);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2563_ == 0)
{
lean_object* v_unused_2564_; 
v_unused_2564_ = lean_ctor_get(v___x_2526_, 5);
lean_dec(v_unused_2564_);
v___x_2536_ = v___x_2526_;
v_isShared_2537_ = v_isSharedCheck_2563_;
goto v_resetjp_2535_;
}
else
{
lean_inc(v_snapshotTasks_2534_);
lean_inc(v_infoState_2533_);
lean_inc(v_messages_2532_);
lean_inc(v_traceState_2531_);
lean_inc(v_auxDeclNGen_2530_);
lean_inc(v_ngen_2529_);
lean_inc(v_nextMacroScope_2528_);
lean_inc(v_env_2527_);
lean_dec(v___x_2526_);
v___x_2536_ = lean_box(0);
v_isShared_2537_ = v_isSharedCheck_2563_;
goto v_resetjp_2535_;
}
v_resetjp_2535_:
{
lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2542_; 
v___x_2538_ = l_Lean_versoDocStringExt;
v___x_2539_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2538_, v_env_2527_, v_declName_2514_, v_docs_2515_);
v___x_2540_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_2537_ == 0)
{
lean_ctor_set(v___x_2536_, 5, v___x_2540_);
lean_ctor_set(v___x_2536_, 0, v___x_2539_);
v___x_2542_ = v___x_2536_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v___x_2539_);
lean_ctor_set(v_reuseFailAlloc_2562_, 1, v_nextMacroScope_2528_);
lean_ctor_set(v_reuseFailAlloc_2562_, 2, v_ngen_2529_);
lean_ctor_set(v_reuseFailAlloc_2562_, 3, v_auxDeclNGen_2530_);
lean_ctor_set(v_reuseFailAlloc_2562_, 4, v_traceState_2531_);
lean_ctor_set(v_reuseFailAlloc_2562_, 5, v___x_2540_);
lean_ctor_set(v_reuseFailAlloc_2562_, 6, v_messages_2532_);
lean_ctor_set(v_reuseFailAlloc_2562_, 7, v_infoState_2533_);
lean_ctor_set(v_reuseFailAlloc_2562_, 8, v_snapshotTasks_2534_);
v___x_2542_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v_mctx_2546_; lean_object* v_zetaDeltaFVarIds_2547_; lean_object* v_postponed_2548_; lean_object* v_diag_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2560_; 
v___x_2543_ = lean_st_ref_set(v___y_2525_, v___x_2542_);
v___x_2544_ = lean_st_ref_get(v___y_2525_);
lean_dec(v___x_2544_);
v___x_2545_ = lean_st_ref_take(v___y_2524_);
v_mctx_2546_ = lean_ctor_get(v___x_2545_, 0);
v_zetaDeltaFVarIds_2547_ = lean_ctor_get(v___x_2545_, 2);
v_postponed_2548_ = lean_ctor_get(v___x_2545_, 3);
v_diag_2549_ = lean_ctor_get(v___x_2545_, 4);
v_isSharedCheck_2560_ = !lean_is_exclusive(v___x_2545_);
if (v_isSharedCheck_2560_ == 0)
{
lean_object* v_unused_2561_; 
v_unused_2561_ = lean_ctor_get(v___x_2545_, 1);
lean_dec(v_unused_2561_);
v___x_2551_ = v___x_2545_;
v_isShared_2552_ = v_isSharedCheck_2560_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_diag_2549_);
lean_inc(v_postponed_2548_);
lean_inc(v_zetaDeltaFVarIds_2547_);
lean_inc(v_mctx_2546_);
lean_dec(v___x_2545_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2560_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2553_; lean_object* v___x_2555_; 
v___x_2553_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_2552_ == 0)
{
lean_ctor_set(v___x_2551_, 1, v___x_2553_);
v___x_2555_ = v___x_2551_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2559_; 
v_reuseFailAlloc_2559_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2559_, 0, v_mctx_2546_);
lean_ctor_set(v_reuseFailAlloc_2559_, 1, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2559_, 2, v_zetaDeltaFVarIds_2547_);
lean_ctor_set(v_reuseFailAlloc_2559_, 3, v_postponed_2548_);
lean_ctor_set(v_reuseFailAlloc_2559_, 4, v_diag_2549_);
v___x_2555_ = v_reuseFailAlloc_2559_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2556_ = lean_st_ref_set(v___y_2524_, v___x_2555_);
v___x_2557_ = lean_box(0);
v___x_2558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2558_, 0, v___x_2557_);
return v___x_2558_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___boxed(lean_object* v_declName_2587_, lean_object* v_docs_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
lean_object* v_res_2596_; 
v_res_2596_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2587_, v_docs_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_);
lean_dec(v___y_2594_);
lean_dec_ref(v___y_2593_);
lean_dec(v___y_2592_);
lean_dec_ref(v___y_2591_);
lean_dec(v___y_2590_);
lean_dec_ref(v___y_2589_);
return v_res_2596_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString(lean_object* v_declName_2597_, lean_object* v_binders_2598_, lean_object* v_docComment_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_){
_start:
{
lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___x_2634_; lean_object* v_env_2635_; lean_object* v___x_2636_; 
v___x_2634_ = lean_st_ref_get(v_a_2605_);
v_env_2635_ = lean_ctor_get(v___x_2634_, 0);
lean_inc_ref(v_env_2635_);
lean_dec(v___x_2634_);
v___x_2636_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2635_, v_declName_2597_);
lean_dec_ref(v_env_2635_);
if (lean_obj_tag(v___x_2636_) == 0)
{
v___y_2608_ = v_a_2600_;
v___y_2609_ = v_a_2601_;
v___y_2610_ = v_a_2602_;
v___y_2611_ = v_a_2603_;
v___y_2612_ = v_a_2604_;
v___y_2613_ = v_a_2605_;
goto v___jp_2607_;
}
else
{
lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2651_; 
lean_dec(v_docComment_2599_);
lean_dec(v_binders_2598_);
v_isSharedCheck_2651_ = !lean_is_exclusive(v___x_2636_);
if (v_isSharedCheck_2651_ == 0)
{
lean_object* v_unused_2652_; 
v_unused_2652_ = lean_ctor_get(v___x_2636_, 0);
lean_dec(v_unused_2652_);
v___x_2638_ = v___x_2636_;
v_isShared_2639_ = v_isSharedCheck_2651_;
goto v_resetjp_2637_;
}
else
{
lean_dec(v___x_2636_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2651_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2640_; uint8_t v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2647_; 
v___x_2640_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0);
v___x_2641_ = 1;
v___x_2642_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2597_, v___x_2641_);
v___x_2643_ = lean_string_append(v___x_2640_, v___x_2642_);
lean_dec_ref(v___x_2642_);
v___x_2644_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1);
v___x_2645_ = lean_string_append(v___x_2643_, v___x_2644_);
if (v_isShared_2639_ == 0)
{
lean_ctor_set_tag(v___x_2638_, 3);
lean_ctor_set(v___x_2638_, 0, v___x_2645_);
v___x_2647_ = v___x_2638_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v___x_2645_);
v___x_2647_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2648_ = l_Lean_MessageData_ofFormat(v___x_2647_);
v___x_2649_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2648_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_);
return v___x_2649_;
}
}
}
v___jp_2607_:
{
lean_object* v___x_2614_; 
lean_inc(v_declName_2597_);
v___x_2614_ = l_Lean_versoDocString(v_declName_2597_, v_binders_2598_, v_docComment_2599_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
if (lean_obj_tag(v___x_2614_) == 0)
{
lean_object* v_a_2615_; lean_object* v_fst_2616_; lean_object* v_snd_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2625_; 
v_a_2615_ = lean_ctor_get(v___x_2614_, 0);
lean_inc(v_a_2615_);
lean_dec_ref(v___x_2614_);
v_fst_2616_ = lean_ctor_get(v_a_2615_, 0);
v_snd_2617_ = lean_ctor_get(v_a_2615_, 1);
v_isSharedCheck_2625_ = !lean_is_exclusive(v_a_2615_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2619_ = v_a_2615_;
v_isShared_2620_ = v_isSharedCheck_2625_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_snd_2617_);
lean_inc(v_fst_2616_);
lean_dec(v_a_2615_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2625_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2622_; 
if (v_isShared_2620_ == 0)
{
v___x_2622_ = v___x_2619_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v_fst_2616_);
lean_ctor_set(v_reuseFailAlloc_2624_, 1, v_snd_2617_);
v___x_2622_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
lean_object* v___x_2623_; 
v___x_2623_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2597_, v___x_2622_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
return v___x_2623_;
}
}
}
else
{
lean_object* v_a_2626_; lean_object* v___x_2628_; uint8_t v_isShared_2629_; uint8_t v_isSharedCheck_2633_; 
lean_dec(v_declName_2597_);
v_a_2626_ = lean_ctor_get(v___x_2614_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2614_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2628_ = v___x_2614_;
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
else
{
lean_inc(v_a_2626_);
lean_dec(v___x_2614_);
v___x_2628_ = lean_box(0);
v_isShared_2629_ = v_isSharedCheck_2633_;
goto v_resetjp_2627_;
}
v_resetjp_2627_:
{
lean_object* v___x_2631_; 
if (v_isShared_2629_ == 0)
{
v___x_2631_ = v___x_2628_;
goto v_reusejp_2630_;
}
else
{
lean_object* v_reuseFailAlloc_2632_; 
v_reuseFailAlloc_2632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2632_, 0, v_a_2626_);
v___x_2631_ = v_reuseFailAlloc_2632_;
goto v_reusejp_2630_;
}
v_reusejp_2630_:
{
return v___x_2631_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocString___boxed(lean_object* v_declName_2653_, lean_object* v_binders_2654_, lean_object* v_docComment_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lean_addVersoDocString(v_declName_2653_, v_binders_2654_, v_docComment_2655_, v_a_2656_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, v_a_2661_);
lean_dec(v_a_2661_);
lean_dec_ref(v_a_2660_);
lean_dec(v_a_2659_);
lean_dec_ref(v_a_2658_);
lean_dec(v_a_2657_);
lean_dec_ref(v_a_2656_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString(lean_object* v_declName_2664_, lean_object* v_docComment_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_){
_start:
{
lean_object* v___y_2674_; lean_object* v___y_2675_; lean_object* v___y_2676_; lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2679_; lean_object* v___x_2700_; lean_object* v_env_2701_; lean_object* v___x_2702_; 
v___x_2700_ = lean_st_ref_get(v_a_2671_);
v_env_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc_ref(v_env_2701_);
lean_dec(v___x_2700_);
v___x_2702_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2701_, v_declName_2664_);
lean_dec_ref(v_env_2701_);
if (lean_obj_tag(v___x_2702_) == 0)
{
v___y_2674_ = v_a_2666_;
v___y_2675_ = v_a_2667_;
v___y_2676_ = v_a_2668_;
v___y_2677_ = v_a_2669_;
v___y_2678_ = v_a_2670_;
v___y_2679_ = v_a_2671_;
goto v___jp_2673_;
}
else
{
lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2717_; 
lean_dec_ref(v_docComment_2665_);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2717_ == 0)
{
lean_object* v_unused_2718_; 
v_unused_2718_ = lean_ctor_get(v___x_2702_, 0);
lean_dec(v_unused_2718_);
v___x_2704_ = v___x_2702_;
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
else
{
lean_dec(v___x_2702_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2717_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2706_; uint8_t v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2713_; 
v___x_2706_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__0);
v___x_2707_ = 1;
v___x_2708_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_2664_, v___x_2707_);
v___x_2709_ = lean_string_append(v___x_2706_, v___x_2708_);
lean_dec_ref(v___x_2708_);
v___x_2710_ = lean_obj_once(&l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1, &l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1_once, _init_l_Lean_addVersoDocStringCore___redArg___lam__2___closed__1);
v___x_2711_ = lean_string_append(v___x_2709_, v___x_2710_);
if (v_isShared_2705_ == 0)
{
lean_ctor_set_tag(v___x_2704_, 3);
lean_ctor_set(v___x_2704_, 0, v___x_2711_);
v___x_2713_ = v___x_2704_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v___x_2711_);
v___x_2713_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
lean_object* v___x_2714_; lean_object* v___x_2715_; 
v___x_2714_ = l_Lean_MessageData_ofFormat(v___x_2713_);
v___x_2715_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2714_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_);
return v___x_2715_;
}
}
}
v___jp_2673_:
{
lean_object* v___x_2680_; 
lean_inc(v_declName_2664_);
v___x_2680_ = l_Lean_versoDocStringFromString(v_declName_2664_, v_docComment_2665_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
if (lean_obj_tag(v___x_2680_) == 0)
{
lean_object* v_a_2681_; lean_object* v_fst_2682_; lean_object* v_snd_2683_; lean_object* v___x_2685_; uint8_t v_isShared_2686_; uint8_t v_isSharedCheck_2691_; 
v_a_2681_ = lean_ctor_get(v___x_2680_, 0);
lean_inc(v_a_2681_);
lean_dec_ref(v___x_2680_);
v_fst_2682_ = lean_ctor_get(v_a_2681_, 0);
v_snd_2683_ = lean_ctor_get(v_a_2681_, 1);
v_isSharedCheck_2691_ = !lean_is_exclusive(v_a_2681_);
if (v_isSharedCheck_2691_ == 0)
{
v___x_2685_ = v_a_2681_;
v_isShared_2686_ = v_isSharedCheck_2691_;
goto v_resetjp_2684_;
}
else
{
lean_inc(v_snd_2683_);
lean_inc(v_fst_2682_);
lean_dec(v_a_2681_);
v___x_2685_ = lean_box(0);
v_isShared_2686_ = v_isSharedCheck_2691_;
goto v_resetjp_2684_;
}
v_resetjp_2684_:
{
lean_object* v___x_2688_; 
if (v_isShared_2686_ == 0)
{
v___x_2688_ = v___x_2685_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v_fst_2682_);
lean_ctor_set(v_reuseFailAlloc_2690_, 1, v_snd_2683_);
v___x_2688_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
lean_object* v___x_2689_; 
v___x_2689_ = l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0(v_declName_2664_, v___x_2688_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
return v___x_2689_;
}
}
}
else
{
lean_object* v_a_2692_; lean_object* v___x_2694_; uint8_t v_isShared_2695_; uint8_t v_isSharedCheck_2699_; 
lean_dec(v_declName_2664_);
v_a_2692_ = lean_ctor_get(v___x_2680_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2680_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2694_ = v___x_2680_;
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
else
{
lean_inc(v_a_2692_);
lean_dec(v___x_2680_);
v___x_2694_ = lean_box(0);
v_isShared_2695_ = v_isSharedCheck_2699_;
goto v_resetjp_2693_;
}
v_resetjp_2693_:
{
lean_object* v___x_2697_; 
if (v_isShared_2695_ == 0)
{
v___x_2697_ = v___x_2694_;
goto v_reusejp_2696_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v_a_2692_);
v___x_2697_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2696_;
}
v_reusejp_2696_:
{
return v___x_2697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoDocStringFromString___boxed(lean_object* v_declName_2719_, lean_object* v_docComment_2720_, lean_object* v_a_2721_, lean_object* v_a_2722_, lean_object* v_a_2723_, lean_object* v_a_2724_, lean_object* v_a_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_){
_start:
{
lean_object* v_res_2728_; 
v_res_2728_ = l_Lean_addVersoDocStringFromString(v_declName_2719_, v_docComment_2720_, v_a_2721_, v_a_2722_, v_a_2723_, v_a_2724_, v_a_2725_, v_a_2726_);
lean_dec(v_a_2726_);
lean_dec_ref(v_a_2725_);
lean_dec(v_a_2724_);
lean_dec_ref(v_a_2723_);
lean_dec(v_a_2722_);
lean_dec_ref(v_a_2721_);
return v_res_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(lean_object* v_ref_2729_, lean_object* v_msgData_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_){
_start:
{
uint8_t v___x_2736_; uint8_t v___x_2737_; lean_object* v___x_2738_; 
v___x_2736_ = 2;
v___x_2737_ = 0;
v___x_2738_ = l_Lean_logAt___at___00Lean_versoDocStringFromString_spec__3___redArg(v_ref_2729_, v_msgData_2730_, v___x_2736_, v___x_2737_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
return v___x_2738_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_2739_, lean_object* v_msgData_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_){
_start:
{
lean_object* v_res_2746_; 
v_res_2746_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_2739_, v_msgData_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_);
lean_dec(v___y_2744_);
lean_dec_ref(v___y_2743_);
lean_dec(v___y_2742_);
lean_dec_ref(v___y_2741_);
lean_dec(v_ref_2739_);
return v_res_2746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(lean_object* v___y_2747_, lean_object* v_str_2748_, lean_object* v_as_2749_, size_t v_sz_2750_, size_t v_i_2751_, lean_object* v_b_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_){
_start:
{
lean_object* v_a_2761_; uint8_t v___x_2765_; 
v___x_2765_ = lean_usize_dec_lt(v_i_2751_, v_sz_2750_);
if (v___x_2765_ == 0)
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2766_, 0, v_b_2752_);
return v___x_2766_;
}
else
{
lean_object* v_a_2767_; lean_object* v_fst_2768_; lean_object* v_snd_2769_; lean_object* v_start_2770_; lean_object* v_stop_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2791_; 
v_a_2767_ = lean_array_uget_borrowed(v_as_2749_, v_i_2751_);
v_fst_2768_ = lean_ctor_get(v_a_2767_, 0);
lean_inc(v_fst_2768_);
v_snd_2769_ = lean_ctor_get(v_a_2767_, 1);
v_start_2770_ = lean_ctor_get(v_fst_2768_, 0);
v_stop_2771_ = lean_ctor_get(v_fst_2768_, 1);
v_isSharedCheck_2791_ = !lean_is_exclusive(v_fst_2768_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2773_ = v_fst_2768_;
v_isShared_2774_ = v_isSharedCheck_2791_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_stop_2771_);
lean_inc(v_start_2770_);
lean_dec(v_fst_2768_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2791_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2775_; 
v___x_2775_ = lean_box(0);
if (lean_obj_tag(v___y_2747_) == 1)
{
lean_object* v_val_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; uint8_t v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2783_; 
v_val_2776_ = lean_ctor_get(v___y_2747_, 0);
v___x_2777_ = lean_nat_add(v_val_2776_, v_start_2770_);
v___x_2778_ = lean_nat_add(v_val_2776_, v_stop_2771_);
v___x_2779_ = 0;
v___x_2780_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_2780_, 0, v___x_2777_);
lean_ctor_set(v___x_2780_, 1, v___x_2778_);
lean_ctor_set_uint8(v___x_2780_, sizeof(void*)*2, v___x_2779_);
v___x_2781_ = lean_string_utf8_extract(v_str_2748_, v_start_2770_, v_stop_2771_);
lean_dec(v_stop_2771_);
lean_dec(v_start_2770_);
if (v_isShared_2774_ == 0)
{
lean_ctor_set_tag(v___x_2773_, 2);
lean_ctor_set(v___x_2773_, 1, v___x_2781_);
lean_ctor_set(v___x_2773_, 0, v___x_2780_);
v___x_2783_ = v___x_2773_;
goto v_reusejp_2782_;
}
else
{
lean_object* v_reuseFailAlloc_2787_; 
v_reuseFailAlloc_2787_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2787_, 0, v___x_2780_);
lean_ctor_set(v_reuseFailAlloc_2787_, 1, v___x_2781_);
v___x_2783_ = v_reuseFailAlloc_2787_;
goto v_reusejp_2782_;
}
v_reusejp_2782_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
lean_inc(v_snd_2769_);
v___x_2784_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2784_, 0, v_snd_2769_);
v___x_2785_ = l_Lean_MessageData_ofFormat(v___x_2784_);
v___x_2786_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v___x_2783_, v___x_2785_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_);
lean_dec_ref(v___x_2783_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_dec_ref(v___x_2786_);
v_a_2761_ = v___x_2775_;
goto v___jp_2760_;
}
else
{
return v___x_2786_;
}
}
}
else
{
lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; 
lean_del_object(v___x_2773_);
lean_dec(v_stop_2771_);
lean_dec(v_start_2770_);
lean_inc(v_snd_2769_);
v___x_2788_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2788_, 0, v_snd_2769_);
v___x_2789_ = l_Lean_MessageData_ofFormat(v___x_2788_);
v___x_2790_ = l_Lean_logError___at___00Lean_versoDocStringFromString_spec__0(v___x_2789_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_dec_ref(v___x_2790_);
v_a_2761_ = v___x_2775_;
goto v___jp_2760_;
}
else
{
return v___x_2790_;
}
}
}
}
v___jp_2760_:
{
size_t v___x_2762_; size_t v___x_2763_; 
v___x_2762_ = ((size_t)1ULL);
v___x_2763_ = lean_usize_add(v_i_2751_, v___x_2762_);
v_i_2751_ = v___x_2763_;
v_b_2752_ = v_a_2761_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2___boxed(lean_object* v___y_2792_, lean_object* v_str_2793_, lean_object* v_as_2794_, lean_object* v_sz_2795_, lean_object* v_i_2796_, lean_object* v_b_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
size_t v_sz_boxed_2805_; size_t v_i_boxed_2806_; lean_object* v_res_2807_; 
v_sz_boxed_2805_ = lean_unbox_usize(v_sz_2795_);
lean_dec(v_sz_2795_);
v_i_boxed_2806_ = lean_unbox_usize(v_i_2796_);
lean_dec(v_i_2796_);
v_res_2807_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2792_, v_str_2793_, v_as_2794_, v_sz_boxed_2805_, v_i_boxed_2806_, v_b_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_);
lean_dec(v___y_2803_);
lean_dec_ref(v___y_2802_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec_ref(v_as_2794_);
lean_dec_ref(v_str_2793_);
lean_dec(v___y_2792_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(lean_object* v_docstring_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_, lean_object* v___y_2814_){
_start:
{
lean_object* v_str_2816_; lean_object* v___y_2818_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v_str_2816_ = l_Lean_TSyntax_getDocString(v_docstring_2808_);
v___x_2834_ = lean_unsigned_to_nat(1u);
v___x_2835_ = l_Lean_Syntax_getArg(v_docstring_2808_, v___x_2834_);
v___x_2836_ = l_Lean_Syntax_getHeadInfo_x3f(v___x_2835_);
lean_dec(v___x_2835_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v___x_2837_; 
v___x_2837_ = lean_box(0);
v___y_2818_ = v___x_2837_;
goto v___jp_2817_;
}
else
{
lean_object* v_val_2838_; uint8_t v___x_2839_; lean_object* v___x_2840_; 
v_val_2838_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_val_2838_);
lean_dec_ref(v___x_2836_);
v___x_2839_ = 0;
v___x_2840_ = l_Lean_SourceInfo_getPos_x3f(v_val_2838_, v___x_2839_);
lean_dec(v_val_2838_);
v___y_2818_ = v___x_2840_;
goto v___jp_2817_;
}
v___jp_2817_:
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v_fst_2821_; lean_object* v___x_2822_; size_t v_sz_2823_; size_t v___x_2824_; lean_object* v___x_2825_; 
v___x_2819_ = lean_st_ref_get(v___y_2814_);
lean_dec(v___x_2819_);
lean_inc_ref(v_str_2816_);
v___x_2820_ = l_Lean_rewriteManualLinksCore(v_str_2816_);
v_fst_2821_ = lean_ctor_get(v___x_2820_, 0);
lean_inc(v_fst_2821_);
lean_dec_ref(v___x_2820_);
v___x_2822_ = lean_box(0);
v_sz_2823_ = lean_array_size(v_fst_2821_);
v___x_2824_ = ((size_t)0ULL);
v___x_2825_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__2(v___y_2818_, v_str_2816_, v_fst_2821_, v_sz_2823_, v___x_2824_, v___x_2822_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_, v___y_2814_);
lean_dec(v_fst_2821_);
lean_dec_ref(v_str_2816_);
lean_dec(v___y_2818_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v___x_2827_; uint8_t v_isShared_2828_; uint8_t v_isSharedCheck_2832_; 
v_isSharedCheck_2832_ = !lean_is_exclusive(v___x_2825_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; 
v_unused_2833_ = lean_ctor_get(v___x_2825_, 0);
lean_dec(v_unused_2833_);
v___x_2827_ = v___x_2825_;
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
else
{
lean_dec(v___x_2825_);
v___x_2827_ = lean_box(0);
v_isShared_2828_ = v_isSharedCheck_2832_;
goto v_resetjp_2826_;
}
v_resetjp_2826_:
{
lean_object* v___x_2830_; 
if (v_isShared_2828_ == 0)
{
lean_ctor_set(v___x_2827_, 0, v___x_2822_);
v___x_2830_ = v___x_2827_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2822_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
else
{
return v___x_2825_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0___boxed(lean_object* v_docstring_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v_res_2849_; 
v_res_2849_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docstring_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_, v___y_2847_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v_docstring_2841_);
return v_res_2849_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2850_; 
v___x_2850_ = lean_mk_string_unchecked("unexpected doc string", 21, 21);
return v___x_2850_;
}
}
static lean_object* _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__0);
v___x_2852_ = l_Lean_stringToMessageData(v___x_2851_);
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(lean_object* v_stx_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_){
_start:
{
lean_object* v_val_2868_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = lean_unsigned_to_nat(1u);
v___x_2876_ = l_Lean_Syntax_getArg(v_stx_2853_, v___x_2875_);
switch(lean_obj_tag(v___x_2876_))
{
case 2:
{
lean_object* v_val_2877_; 
lean_dec(v_stx_2853_);
v_val_2877_ = lean_ctor_get(v___x_2876_, 1);
lean_inc_ref(v_val_2877_);
lean_dec_ref(v___x_2876_);
v_val_2868_ = v_val_2877_;
goto v___jp_2867_;
}
case 1:
{
lean_object* v_kind_2878_; 
v_kind_2878_ = lean_ctor_get(v___x_2876_, 1);
lean_inc(v_kind_2878_);
if (lean_obj_tag(v_kind_2878_) == 1)
{
lean_object* v_pre_2879_; 
v_pre_2879_ = lean_ctor_get(v_kind_2878_, 0);
lean_inc(v_pre_2879_);
if (lean_obj_tag(v_pre_2879_) == 1)
{
lean_object* v_pre_2880_; 
v_pre_2880_ = lean_ctor_get(v_pre_2879_, 0);
lean_inc(v_pre_2880_);
if (lean_obj_tag(v_pre_2880_) == 1)
{
lean_object* v_pre_2881_; 
v_pre_2881_ = lean_ctor_get(v_pre_2880_, 0);
lean_inc(v_pre_2881_);
if (lean_obj_tag(v_pre_2881_) == 1)
{
lean_object* v_pre_2882_; 
v_pre_2882_ = lean_ctor_get(v_pre_2881_, 0);
if (lean_obj_tag(v_pre_2882_) == 0)
{
lean_object* v_str_2883_; lean_object* v_str_2884_; lean_object* v_str_2885_; lean_object* v_str_2886_; lean_object* v___x_2887_; uint8_t v___x_2888_; 
v_str_2883_ = lean_ctor_get(v_kind_2878_, 1);
lean_inc_ref(v_str_2883_);
lean_dec_ref(v_kind_2878_);
v_str_2884_ = lean_ctor_get(v_pre_2879_, 1);
lean_inc_ref(v_str_2884_);
lean_dec_ref(v_pre_2879_);
v_str_2885_ = lean_ctor_get(v_pre_2880_, 1);
lean_inc_ref(v_str_2885_);
lean_dec_ref(v_pre_2880_);
v_str_2886_ = lean_ctor_get(v_pre_2881_, 1);
lean_inc_ref(v_str_2886_);
lean_dec_ref(v_pre_2881_);
v___x_2887_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__0, &l_Lean_parseVersoDocString___redArg___closed__0_once, _init_l_Lean_parseVersoDocString___redArg___closed__0);
v___x_2888_ = lean_string_dec_eq(v_str_2886_, v___x_2887_);
lean_dec_ref(v_str_2886_);
if (v___x_2888_ == 0)
{
lean_dec_ref(v_str_2885_);
lean_dec_ref(v_str_2884_);
lean_dec_ref(v_str_2883_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
else
{
lean_object* v___x_2889_; uint8_t v___x_2890_; 
v___x_2889_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__1, &l_Lean_parseVersoDocString___redArg___closed__1_once, _init_l_Lean_parseVersoDocString___redArg___closed__1);
v___x_2890_ = lean_string_dec_eq(v_str_2885_, v___x_2889_);
lean_dec_ref(v_str_2885_);
if (v___x_2890_ == 0)
{
lean_dec_ref(v_str_2884_);
lean_dec_ref(v_str_2883_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
else
{
lean_object* v___x_2891_; uint8_t v___x_2892_; 
v___x_2891_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__2, &l_Lean_parseVersoDocString___redArg___closed__2_once, _init_l_Lean_parseVersoDocString___redArg___closed__2);
v___x_2892_ = lean_string_dec_eq(v_str_2884_, v___x_2891_);
lean_dec_ref(v_str_2884_);
if (v___x_2892_ == 0)
{
lean_dec_ref(v_str_2883_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
else
{
lean_object* v___x_2893_; uint8_t v___x_2894_; 
v___x_2893_ = lean_obj_once(&l_Lean_parseVersoDocString___redArg___closed__5, &l_Lean_parseVersoDocString___redArg___closed__5_once, _init_l_Lean_parseVersoDocString___redArg___closed__5);
v___x_2894_ = lean_string_dec_eq(v_str_2883_, v___x_2893_);
lean_dec_ref(v_str_2883_);
if (v___x_2894_ == 0)
{
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
else
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
v___x_2895_ = lean_unsigned_to_nat(0u);
v___x_2896_ = l_Lean_Syntax_getArg(v___x_2876_, v___x_2895_);
lean_dec_ref(v___x_2876_);
if (lean_obj_tag(v___x_2896_) == 2)
{
lean_object* v_val_2897_; 
lean_dec(v_stx_2853_);
v_val_2897_ = lean_ctor_get(v___x_2896_, 1);
lean_inc_ref(v_val_2897_);
lean_dec_ref(v___x_2896_);
v_val_2868_ = v_val_2897_;
goto v___jp_2867_;
}
else
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; 
lean_dec(v___x_2896_);
v___x_2898_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2853_);
v___x_2899_ = l_Lean_MessageData_ofSyntax(v_stx_2853_);
v___x_2900_ = l_Lean_indentD(v___x_2899_);
v___x_2901_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2901_, 0, v___x_2898_);
lean_ctor_set(v___x_2901_, 1, v___x_2900_);
v___x_2902_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_2853_, v___x_2901_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_);
lean_dec(v_stx_2853_);
return v___x_2902_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_pre_2881_);
lean_dec_ref(v_pre_2880_);
lean_dec_ref(v_pre_2879_);
lean_dec_ref(v_kind_2878_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
}
else
{
lean_dec_ref(v_pre_2880_);
lean_dec(v_pre_2881_);
lean_dec_ref(v_pre_2879_);
lean_dec_ref(v_kind_2878_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
}
else
{
lean_dec(v_pre_2880_);
lean_dec_ref(v_pre_2879_);
lean_dec_ref(v_kind_2878_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
}
else
{
lean_dec_ref(v_kind_2878_);
lean_dec(v_pre_2879_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
}
else
{
lean_dec(v_kind_2878_);
lean_dec_ref(v___x_2876_);
goto v___jp_2861_;
}
}
default: 
{
lean_dec(v___x_2876_);
goto v___jp_2861_;
}
}
v___jp_2861_:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2862_ = lean_obj_once(&l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1, &l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1_once, _init_l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___closed__1);
lean_inc(v_stx_2853_);
v___x_2863_ = l_Lean_MessageData_ofSyntax(v_stx_2853_);
v___x_2864_ = l_Lean_indentD(v___x_2863_);
v___x_2865_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2865_, 0, v___x_2862_);
lean_ctor_set(v___x_2865_, 1, v___x_2864_);
v___x_2866_ = l_Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1___redArg(v_stx_2853_, v___x_2865_, v___y_2854_, v___y_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_);
lean_dec(v_stx_2853_);
return v___x_2866_;
}
v___jp_2867_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v___x_2869_ = lean_unsigned_to_nat(0u);
v___x_2870_ = lean_string_utf8_byte_size(v_val_2868_);
v___x_2871_ = lean_unsigned_to_nat(2u);
v___x_2872_ = lean_nat_sub(v___x_2870_, v___x_2871_);
v___x_2873_ = lean_string_utf8_extract(v_val_2868_, v___x_2869_, v___x_2872_);
lean_dec(v___x_2872_);
lean_dec_ref(v_val_2868_);
v___x_2874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2874_, 0, v___x_2873_);
return v___x_2874_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1___boxed(lean_object* v_stx_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_, lean_object* v___y_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_){
_start:
{
lean_object* v_res_2911_; 
v_res_2911_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_stx_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
return v_res_2911_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(lean_object* v_declName_2912_, lean_object* v_docComment_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; uint8_t v___x_2985_; 
v___x_2985_ = l_Lean_Name_isAnonymous(v_declName_2912_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2986_; lean_object* v_env_2987_; lean_object* v___x_2988_; 
v___x_2986_ = lean_st_ref_get(v___y_2919_);
v_env_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc_ref(v_env_2987_);
lean_dec(v___x_2986_);
v___x_2988_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2987_, v_declName_2912_);
lean_dec_ref(v_env_2987_);
if (lean_obj_tag(v___x_2988_) == 0)
{
v___y_2922_ = v___y_2914_;
v___y_2923_ = v___y_2915_;
v___y_2924_ = v___y_2916_;
v___y_2925_ = v___y_2917_;
v___y_2926_ = v___y_2918_;
v___y_2927_ = v___y_2919_;
goto v___jp_2921_;
}
else
{
lean_dec_ref(v___x_2988_);
if (v___x_2985_ == 0)
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; 
lean_dec(v_docComment_2913_);
v___x_2989_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__1, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__1_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__1);
v___x_2990_ = l_Lean_MessageData_ofConstName(v_declName_2912_, v___x_2985_);
v___x_2991_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2989_);
lean_ctor_set(v___x_2991_, 1, v___x_2990_);
v___x_2992_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_2993_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2993_, 0, v___x_2991_);
lean_ctor_set(v___x_2993_, 1, v___x_2992_);
v___x_2994_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_2993_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
return v___x_2994_;
}
else
{
v___y_2922_ = v___y_2914_;
v___y_2923_ = v___y_2915_;
v___y_2924_ = v___y_2916_;
v___y_2925_ = v___y_2917_;
v___y_2926_ = v___y_2918_;
v___y_2927_ = v___y_2919_;
goto v___jp_2921_;
}
}
}
else
{
lean_object* v___x_2995_; lean_object* v___x_2996_; 
lean_dec(v_docComment_2913_);
lean_dec(v_declName_2912_);
v___x_2995_ = lean_box(0);
v___x_2996_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2996_, 0, v___x_2995_);
return v___x_2996_;
}
v___jp_2921_:
{
lean_object* v___x_2928_; 
v___x_2928_ = l_Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0(v_docComment_2913_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v___x_2929_; 
lean_dec_ref(v___x_2928_);
v___x_2929_ = l_Lean_getDocStringText___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__1(v_docComment_2913_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2929_) == 0)
{
lean_object* v_a_2930_; lean_object* v___x_2932_; uint8_t v_isShared_2933_; uint8_t v_isSharedCheck_2976_; 
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2932_ = v___x_2929_;
v_isShared_2933_ = v_isSharedCheck_2976_;
goto v_resetjp_2931_;
}
else
{
lean_inc(v_a_2930_);
lean_dec(v___x_2929_);
v___x_2932_ = lean_box(0);
v_isShared_2933_ = v_isSharedCheck_2976_;
goto v_resetjp_2931_;
}
v_resetjp_2931_:
{
lean_object* v___x_2934_; lean_object* v_env_2935_; lean_object* v_nextMacroScope_2936_; lean_object* v_ngen_2937_; lean_object* v_auxDeclNGen_2938_; lean_object* v_traceState_2939_; lean_object* v_messages_2940_; lean_object* v_infoState_2941_; lean_object* v_snapshotTasks_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2974_; 
v___x_2934_ = lean_st_ref_take(v___y_2927_);
v_env_2935_ = lean_ctor_get(v___x_2934_, 0);
v_nextMacroScope_2936_ = lean_ctor_get(v___x_2934_, 1);
v_ngen_2937_ = lean_ctor_get(v___x_2934_, 2);
v_auxDeclNGen_2938_ = lean_ctor_get(v___x_2934_, 3);
v_traceState_2939_ = lean_ctor_get(v___x_2934_, 4);
v_messages_2940_ = lean_ctor_get(v___x_2934_, 6);
v_infoState_2941_ = lean_ctor_get(v___x_2934_, 7);
v_snapshotTasks_2942_ = lean_ctor_get(v___x_2934_, 8);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2934_);
if (v_isSharedCheck_2974_ == 0)
{
lean_object* v_unused_2975_; 
v_unused_2975_ = lean_ctor_get(v___x_2934_, 5);
lean_dec(v_unused_2975_);
v___x_2944_ = v___x_2934_;
v_isShared_2945_ = v_isSharedCheck_2974_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_snapshotTasks_2942_);
lean_inc(v_infoState_2941_);
lean_inc(v_messages_2940_);
lean_inc(v_traceState_2939_);
lean_inc(v_auxDeclNGen_2938_);
lean_inc(v_ngen_2937_);
lean_inc(v_nextMacroScope_2936_);
lean_inc(v_env_2935_);
lean_dec(v___x_2934_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2974_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2951_; 
v___x_2946_ = l_Lean_docStringExt;
v___x_2947_ = l_String_removeLeadingSpaces(v_a_2930_);
v___x_2948_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_2946_, v_env_2935_, v_declName_2912_, v___x_2947_);
v___x_2949_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_2945_ == 0)
{
lean_ctor_set(v___x_2944_, 5, v___x_2949_);
lean_ctor_set(v___x_2944_, 0, v___x_2948_);
v___x_2951_ = v___x_2944_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v___x_2948_);
lean_ctor_set(v_reuseFailAlloc_2973_, 1, v_nextMacroScope_2936_);
lean_ctor_set(v_reuseFailAlloc_2973_, 2, v_ngen_2937_);
lean_ctor_set(v_reuseFailAlloc_2973_, 3, v_auxDeclNGen_2938_);
lean_ctor_set(v_reuseFailAlloc_2973_, 4, v_traceState_2939_);
lean_ctor_set(v_reuseFailAlloc_2973_, 5, v___x_2949_);
lean_ctor_set(v_reuseFailAlloc_2973_, 6, v_messages_2940_);
lean_ctor_set(v_reuseFailAlloc_2973_, 7, v_infoState_2941_);
lean_ctor_set(v_reuseFailAlloc_2973_, 8, v_snapshotTasks_2942_);
v___x_2951_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v_mctx_2955_; lean_object* v_zetaDeltaFVarIds_2956_; lean_object* v_postponed_2957_; lean_object* v_diag_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2971_; 
v___x_2952_ = lean_st_ref_set(v___y_2927_, v___x_2951_);
v___x_2953_ = lean_st_ref_get(v___y_2927_);
lean_dec(v___x_2953_);
v___x_2954_ = lean_st_ref_take(v___y_2925_);
v_mctx_2955_ = lean_ctor_get(v___x_2954_, 0);
v_zetaDeltaFVarIds_2956_ = lean_ctor_get(v___x_2954_, 2);
v_postponed_2957_ = lean_ctor_get(v___x_2954_, 3);
v_diag_2958_ = lean_ctor_get(v___x_2954_, 4);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2954_);
if (v_isSharedCheck_2971_ == 0)
{
lean_object* v_unused_2972_; 
v_unused_2972_ = lean_ctor_get(v___x_2954_, 1);
lean_dec(v_unused_2972_);
v___x_2960_ = v___x_2954_;
v_isShared_2961_ = v_isSharedCheck_2971_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_diag_2958_);
lean_inc(v_postponed_2957_);
lean_inc(v_zetaDeltaFVarIds_2956_);
lean_inc(v_mctx_2955_);
lean_dec(v___x_2954_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2971_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2962_; lean_object* v___x_2964_; 
v___x_2962_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_2961_ == 0)
{
lean_ctor_set(v___x_2960_, 1, v___x_2962_);
v___x_2964_ = v___x_2960_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_mctx_2955_);
lean_ctor_set(v_reuseFailAlloc_2970_, 1, v___x_2962_);
lean_ctor_set(v_reuseFailAlloc_2970_, 2, v_zetaDeltaFVarIds_2956_);
lean_ctor_set(v_reuseFailAlloc_2970_, 3, v_postponed_2957_);
lean_ctor_set(v_reuseFailAlloc_2970_, 4, v_diag_2958_);
v___x_2964_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v___x_2968_; 
v___x_2965_ = lean_st_ref_set(v___y_2925_, v___x_2964_);
v___x_2966_ = lean_box(0);
if (v_isShared_2933_ == 0)
{
lean_ctor_set(v___x_2932_, 0, v___x_2966_);
v___x_2968_ = v___x_2932_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2969_; 
v_reuseFailAlloc_2969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2969_, 0, v___x_2966_);
v___x_2968_ = v_reuseFailAlloc_2969_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
return v___x_2968_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_2984_; 
lean_dec(v_declName_2912_);
v_a_2977_ = lean_ctor_get(v___x_2929_, 0);
v_isSharedCheck_2984_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2984_ == 0)
{
v___x_2979_ = v___x_2929_;
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_a_2977_);
lean_dec(v___x_2929_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_2984_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2982_; 
if (v_isShared_2980_ == 0)
{
v___x_2982_ = v___x_2979_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_a_2977_);
v___x_2982_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
return v___x_2982_;
}
}
}
}
else
{
lean_dec(v_docComment_2913_);
lean_dec(v_declName_2912_);
return v___x_2928_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0___boxed(lean_object* v_declName_2997_, lean_object* v_docComment_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_2997_, v_docComment_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf(uint8_t v_isVerso_3007_, lean_object* v_declName_3008_, lean_object* v_binders_3009_, lean_object* v_docComment_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_, lean_object* v_a_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_){
_start:
{
if (v_isVerso_3007_ == 0)
{
lean_object* v___x_3018_; 
lean_dec(v_binders_3009_);
v___x_3018_ = l_Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0(v_declName_3008_, v_docComment_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_);
return v___x_3018_;
}
else
{
lean_object* v___x_3019_; 
v___x_3019_ = l_Lean_addVersoDocString(v_declName_3008_, v_binders_3009_, v_docComment_3010_, v_a_3011_, v_a_3012_, v_a_3013_, v_a_3014_, v_a_3015_, v_a_3016_);
return v___x_3019_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocStringOf___boxed(lean_object* v_isVerso_3020_, lean_object* v_declName_3021_, lean_object* v_binders_3022_, lean_object* v_docComment_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_){
_start:
{
uint8_t v_isVerso_boxed_3031_; lean_object* v_res_3032_; 
v_isVerso_boxed_3031_ = lean_unbox(v_isVerso_3020_);
v_res_3032_ = l_Lean_addDocStringOf(v_isVerso_boxed_3031_, v_declName_3021_, v_binders_3022_, v_docComment_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_, v_a_3029_);
lean_dec(v_a_3029_);
lean_dec_ref(v_a_3028_);
lean_dec(v_a_3027_);
lean_dec_ref(v_a_3026_);
lean_dec(v_a_3025_);
lean_dec_ref(v_a_3024_);
return v_res_3032_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(lean_object* v_ref_3033_, lean_object* v_msgData_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___redArg(v_ref_3033_, v_msgData_3034_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_3043_, lean_object* v_msgData_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l_Lean_logErrorAt___at___00Lean_validateDocComment___at___00Lean_addMarkdownDocString___at___00Lean_addDocStringOf_spec__0_spec__0_spec__1(v_ref_3043_, v_msgData_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec(v_ref_3043_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(lean_object* v_k_3053_, lean_object* v_t_3054_){
_start:
{
if (lean_obj_tag(v_t_3054_) == 0)
{
lean_object* v_k_3055_; lean_object* v_v_3056_; lean_object* v_l_3057_; lean_object* v_r_3058_; lean_object* v___x_3060_; uint8_t v_isShared_3061_; uint8_t v_isSharedCheck_3712_; 
v_k_3055_ = lean_ctor_get(v_t_3054_, 1);
v_v_3056_ = lean_ctor_get(v_t_3054_, 2);
v_l_3057_ = lean_ctor_get(v_t_3054_, 3);
v_r_3058_ = lean_ctor_get(v_t_3054_, 4);
v_isSharedCheck_3712_ = !lean_is_exclusive(v_t_3054_);
if (v_isSharedCheck_3712_ == 0)
{
lean_object* v_unused_3713_; 
v_unused_3713_ = lean_ctor_get(v_t_3054_, 0);
lean_dec(v_unused_3713_);
v___x_3060_ = v_t_3054_;
v_isShared_3061_ = v_isSharedCheck_3712_;
goto v_resetjp_3059_;
}
else
{
lean_inc(v_r_3058_);
lean_inc(v_l_3057_);
lean_inc(v_v_3056_);
lean_inc(v_k_3055_);
lean_dec(v_t_3054_);
v___x_3060_ = lean_box(0);
v_isShared_3061_ = v_isSharedCheck_3712_;
goto v_resetjp_3059_;
}
v_resetjp_3059_:
{
uint8_t v___x_3062_; 
v___x_3062_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3053_, v_k_3055_);
switch(v___x_3062_)
{
case 0:
{
lean_object* v_impl_3063_; lean_object* v___x_3064_; 
v_impl_3063_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3053_, v_l_3057_);
v___x_3064_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3063_) == 0)
{
if (lean_obj_tag(v_r_3058_) == 0)
{
lean_object* v_size_3065_; lean_object* v_size_3066_; lean_object* v_k_3067_; lean_object* v_v_3068_; lean_object* v_l_3069_; lean_object* v_r_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; uint8_t v___x_3073_; 
v_size_3065_ = lean_ctor_get(v_impl_3063_, 0);
lean_inc(v_size_3065_);
v_size_3066_ = lean_ctor_get(v_r_3058_, 0);
v_k_3067_ = lean_ctor_get(v_r_3058_, 1);
v_v_3068_ = lean_ctor_get(v_r_3058_, 2);
v_l_3069_ = lean_ctor_get(v_r_3058_, 3);
lean_inc(v_l_3069_);
v_r_3070_ = lean_ctor_get(v_r_3058_, 4);
v___x_3071_ = lean_unsigned_to_nat(3u);
v___x_3072_ = lean_nat_mul(v___x_3071_, v_size_3065_);
v___x_3073_ = lean_nat_dec_lt(v___x_3072_, v_size_3066_);
lean_dec(v___x_3072_);
if (v___x_3073_ == 0)
{
lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3077_; 
lean_dec(v_l_3069_);
v___x_3074_ = lean_nat_add(v___x_3064_, v_size_3065_);
lean_dec(v_size_3065_);
v___x_3075_ = lean_nat_add(v___x_3074_, v_size_3066_);
lean_dec(v___x_3074_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 3, v_impl_3063_);
lean_ctor_set(v___x_3060_, 0, v___x_3075_);
v___x_3077_ = v___x_3060_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v___x_3075_);
lean_ctor_set(v_reuseFailAlloc_3078_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3078_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3078_, 3, v_impl_3063_);
lean_ctor_set(v_reuseFailAlloc_3078_, 4, v_r_3058_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
else
{
lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3142_; 
lean_inc(v_r_3070_);
lean_inc(v_v_3068_);
lean_inc(v_k_3067_);
lean_inc(v_size_3066_);
v_isSharedCheck_3142_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3142_ == 0)
{
lean_object* v_unused_3143_; lean_object* v_unused_3144_; lean_object* v_unused_3145_; lean_object* v_unused_3146_; lean_object* v_unused_3147_; 
v_unused_3143_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3143_);
v_unused_3144_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3144_);
v_unused_3145_ = lean_ctor_get(v_r_3058_, 2);
lean_dec(v_unused_3145_);
v_unused_3146_ = lean_ctor_get(v_r_3058_, 1);
lean_dec(v_unused_3146_);
v_unused_3147_ = lean_ctor_get(v_r_3058_, 0);
lean_dec(v_unused_3147_);
v___x_3080_ = v_r_3058_;
v_isShared_3081_ = v_isSharedCheck_3142_;
goto v_resetjp_3079_;
}
else
{
lean_dec(v_r_3058_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3142_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v_size_3082_; lean_object* v_k_3083_; lean_object* v_v_3084_; lean_object* v_l_3085_; lean_object* v_r_3086_; lean_object* v_size_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; uint8_t v___x_3090_; 
v_size_3082_ = lean_ctor_get(v_l_3069_, 0);
v_k_3083_ = lean_ctor_get(v_l_3069_, 1);
v_v_3084_ = lean_ctor_get(v_l_3069_, 2);
v_l_3085_ = lean_ctor_get(v_l_3069_, 3);
v_r_3086_ = lean_ctor_get(v_l_3069_, 4);
v_size_3087_ = lean_ctor_get(v_r_3070_, 0);
v___x_3088_ = lean_unsigned_to_nat(2u);
v___x_3089_ = lean_nat_mul(v___x_3088_, v_size_3087_);
v___x_3090_ = lean_nat_dec_lt(v_size_3082_, v___x_3089_);
lean_dec(v___x_3089_);
if (v___x_3090_ == 0)
{
lean_object* v___x_3092_; uint8_t v_isShared_3093_; uint8_t v_isSharedCheck_3118_; 
lean_inc(v_r_3086_);
lean_inc(v_l_3085_);
lean_inc(v_v_3084_);
lean_inc(v_k_3083_);
v_isSharedCheck_3118_ = !lean_is_exclusive(v_l_3069_);
if (v_isSharedCheck_3118_ == 0)
{
lean_object* v_unused_3119_; lean_object* v_unused_3120_; lean_object* v_unused_3121_; lean_object* v_unused_3122_; lean_object* v_unused_3123_; 
v_unused_3119_ = lean_ctor_get(v_l_3069_, 4);
lean_dec(v_unused_3119_);
v_unused_3120_ = lean_ctor_get(v_l_3069_, 3);
lean_dec(v_unused_3120_);
v_unused_3121_ = lean_ctor_get(v_l_3069_, 2);
lean_dec(v_unused_3121_);
v_unused_3122_ = lean_ctor_get(v_l_3069_, 1);
lean_dec(v_unused_3122_);
v_unused_3123_ = lean_ctor_get(v_l_3069_, 0);
lean_dec(v_unused_3123_);
v___x_3092_ = v_l_3069_;
v_isShared_3093_ = v_isSharedCheck_3118_;
goto v_resetjp_3091_;
}
else
{
lean_dec(v_l_3069_);
v___x_3092_ = lean_box(0);
v_isShared_3093_ = v_isSharedCheck_3118_;
goto v_resetjp_3091_;
}
v_resetjp_3091_:
{
lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; lean_object* v___y_3108_; 
v___x_3094_ = lean_nat_add(v___x_3064_, v_size_3065_);
lean_dec(v_size_3065_);
v___x_3095_ = lean_nat_add(v___x_3094_, v_size_3066_);
lean_dec(v_size_3066_);
if (lean_obj_tag(v_l_3085_) == 0)
{
lean_object* v_size_3116_; 
v_size_3116_ = lean_ctor_get(v_l_3085_, 0);
lean_inc(v_size_3116_);
v___y_3108_ = v_size_3116_;
goto v___jp_3107_;
}
else
{
lean_object* v___x_3117_; 
v___x_3117_ = lean_unsigned_to_nat(0u);
v___y_3108_ = v___x_3117_;
goto v___jp_3107_;
}
v___jp_3096_:
{
lean_object* v___x_3100_; lean_object* v___x_3102_; 
v___x_3100_ = lean_nat_add(v___y_3097_, v___y_3099_);
lean_dec(v___y_3099_);
lean_dec(v___y_3097_);
if (v_isShared_3093_ == 0)
{
lean_ctor_set(v___x_3092_, 4, v_r_3070_);
lean_ctor_set(v___x_3092_, 3, v_r_3086_);
lean_ctor_set(v___x_3092_, 2, v_v_3068_);
lean_ctor_set(v___x_3092_, 1, v_k_3067_);
lean_ctor_set(v___x_3092_, 0, v___x_3100_);
v___x_3102_ = v___x_3092_;
goto v_reusejp_3101_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3100_);
lean_ctor_set(v_reuseFailAlloc_3106_, 1, v_k_3067_);
lean_ctor_set(v_reuseFailAlloc_3106_, 2, v_v_3068_);
lean_ctor_set(v_reuseFailAlloc_3106_, 3, v_r_3086_);
lean_ctor_set(v_reuseFailAlloc_3106_, 4, v_r_3070_);
v___x_3102_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3101_;
}
v_reusejp_3101_:
{
lean_object* v___x_3104_; 
if (v_isShared_3081_ == 0)
{
lean_ctor_set(v___x_3080_, 4, v___x_3102_);
lean_ctor_set(v___x_3080_, 3, v___y_3098_);
lean_ctor_set(v___x_3080_, 2, v_v_3084_);
lean_ctor_set(v___x_3080_, 1, v_k_3083_);
lean_ctor_set(v___x_3080_, 0, v___x_3095_);
v___x_3104_ = v___x_3080_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v___x_3095_);
lean_ctor_set(v_reuseFailAlloc_3105_, 1, v_k_3083_);
lean_ctor_set(v_reuseFailAlloc_3105_, 2, v_v_3084_);
lean_ctor_set(v_reuseFailAlloc_3105_, 3, v___y_3098_);
lean_ctor_set(v_reuseFailAlloc_3105_, 4, v___x_3102_);
v___x_3104_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
return v___x_3104_;
}
}
}
v___jp_3107_:
{
lean_object* v___x_3109_; lean_object* v___x_3111_; 
v___x_3109_ = lean_nat_add(v___x_3094_, v___y_3108_);
lean_dec(v___y_3108_);
lean_dec(v___x_3094_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_l_3085_);
lean_ctor_set(v___x_3060_, 3, v_impl_3063_);
lean_ctor_set(v___x_3060_, 0, v___x_3109_);
v___x_3111_ = v___x_3060_;
goto v_reusejp_3110_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3109_);
lean_ctor_set(v_reuseFailAlloc_3115_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3115_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3115_, 3, v_impl_3063_);
lean_ctor_set(v_reuseFailAlloc_3115_, 4, v_l_3085_);
v___x_3111_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3110_;
}
v_reusejp_3110_:
{
lean_object* v___x_3112_; 
v___x_3112_ = lean_nat_add(v___x_3064_, v_size_3087_);
if (lean_obj_tag(v_r_3086_) == 0)
{
lean_object* v_size_3113_; 
v_size_3113_ = lean_ctor_get(v_r_3086_, 0);
lean_inc(v_size_3113_);
v___y_3097_ = v___x_3112_;
v___y_3098_ = v___x_3111_;
v___y_3099_ = v_size_3113_;
goto v___jp_3096_;
}
else
{
lean_object* v___x_3114_; 
v___x_3114_ = lean_unsigned_to_nat(0u);
v___y_3097_ = v___x_3112_;
v___y_3098_ = v___x_3111_;
v___y_3099_ = v___x_3114_;
goto v___jp_3096_;
}
}
}
}
}
else
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3128_; 
lean_del_object(v___x_3060_);
v___x_3124_ = lean_nat_add(v___x_3064_, v_size_3065_);
lean_dec(v_size_3065_);
v___x_3125_ = lean_nat_add(v___x_3124_, v_size_3066_);
lean_dec(v_size_3066_);
v___x_3126_ = lean_nat_add(v___x_3124_, v_size_3082_);
lean_dec(v___x_3124_);
lean_inc_ref(v_impl_3063_);
if (v_isShared_3081_ == 0)
{
lean_ctor_set(v___x_3080_, 4, v_l_3069_);
lean_ctor_set(v___x_3080_, 3, v_impl_3063_);
lean_ctor_set(v___x_3080_, 2, v_v_3056_);
lean_ctor_set(v___x_3080_, 1, v_k_3055_);
lean_ctor_set(v___x_3080_, 0, v___x_3126_);
v___x_3128_ = v___x_3080_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v___x_3126_);
lean_ctor_set(v_reuseFailAlloc_3141_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3141_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3141_, 3, v_impl_3063_);
lean_ctor_set(v_reuseFailAlloc_3141_, 4, v_l_3069_);
v___x_3128_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
v_isSharedCheck_3135_ = !lean_is_exclusive(v_impl_3063_);
if (v_isSharedCheck_3135_ == 0)
{
lean_object* v_unused_3136_; lean_object* v_unused_3137_; lean_object* v_unused_3138_; lean_object* v_unused_3139_; lean_object* v_unused_3140_; 
v_unused_3136_ = lean_ctor_get(v_impl_3063_, 4);
lean_dec(v_unused_3136_);
v_unused_3137_ = lean_ctor_get(v_impl_3063_, 3);
lean_dec(v_unused_3137_);
v_unused_3138_ = lean_ctor_get(v_impl_3063_, 2);
lean_dec(v_unused_3138_);
v_unused_3139_ = lean_ctor_get(v_impl_3063_, 1);
lean_dec(v_unused_3139_);
v_unused_3140_ = lean_ctor_get(v_impl_3063_, 0);
lean_dec(v_unused_3140_);
v___x_3130_ = v_impl_3063_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_dec(v_impl_3063_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
lean_ctor_set(v___x_3130_, 4, v_r_3070_);
lean_ctor_set(v___x_3130_, 3, v___x_3128_);
lean_ctor_set(v___x_3130_, 2, v_v_3068_);
lean_ctor_set(v___x_3130_, 1, v_k_3067_);
lean_ctor_set(v___x_3130_, 0, v___x_3125_);
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v___x_3125_);
lean_ctor_set(v_reuseFailAlloc_3134_, 1, v_k_3067_);
lean_ctor_set(v_reuseFailAlloc_3134_, 2, v_v_3068_);
lean_ctor_set(v_reuseFailAlloc_3134_, 3, v___x_3128_);
lean_ctor_set(v_reuseFailAlloc_3134_, 4, v_r_3070_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3148_; lean_object* v___x_3149_; lean_object* v___x_3151_; 
v_size_3148_ = lean_ctor_get(v_impl_3063_, 0);
lean_inc(v_size_3148_);
v___x_3149_ = lean_nat_add(v___x_3064_, v_size_3148_);
lean_dec(v_size_3148_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 3, v_impl_3063_);
lean_ctor_set(v___x_3060_, 0, v___x_3149_);
v___x_3151_ = v___x_3060_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v___x_3149_);
lean_ctor_set(v_reuseFailAlloc_3152_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3152_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3152_, 3, v_impl_3063_);
lean_ctor_set(v_reuseFailAlloc_3152_, 4, v_r_3058_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
else
{
if (lean_obj_tag(v_r_3058_) == 0)
{
lean_object* v_l_3153_; 
v_l_3153_ = lean_ctor_get(v_r_3058_, 3);
lean_inc(v_l_3153_);
if (lean_obj_tag(v_l_3153_) == 0)
{
lean_object* v_r_3154_; 
v_r_3154_ = lean_ctor_get(v_r_3058_, 4);
lean_inc(v_r_3154_);
if (lean_obj_tag(v_r_3154_) == 0)
{
lean_object* v_size_3155_; lean_object* v_k_3156_; lean_object* v_v_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3170_; 
v_size_3155_ = lean_ctor_get(v_r_3058_, 0);
v_k_3156_ = lean_ctor_get(v_r_3058_, 1);
v_v_3157_ = lean_ctor_get(v_r_3058_, 2);
v_isSharedCheck_3170_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3170_ == 0)
{
lean_object* v_unused_3171_; lean_object* v_unused_3172_; 
v_unused_3171_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3171_);
v_unused_3172_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3172_);
v___x_3159_ = v_r_3058_;
v_isShared_3160_ = v_isSharedCheck_3170_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_v_3157_);
lean_inc(v_k_3156_);
lean_inc(v_size_3155_);
lean_dec(v_r_3058_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3170_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v_size_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3165_; 
v_size_3161_ = lean_ctor_get(v_l_3153_, 0);
v___x_3162_ = lean_nat_add(v___x_3064_, v_size_3155_);
lean_dec(v_size_3155_);
v___x_3163_ = lean_nat_add(v___x_3064_, v_size_3161_);
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 4, v_l_3153_);
lean_ctor_set(v___x_3159_, 3, v_impl_3063_);
lean_ctor_set(v___x_3159_, 2, v_v_3056_);
lean_ctor_set(v___x_3159_, 1, v_k_3055_);
lean_ctor_set(v___x_3159_, 0, v___x_3163_);
v___x_3165_ = v___x_3159_;
goto v_reusejp_3164_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v___x_3163_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3169_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3169_, 3, v_impl_3063_);
lean_ctor_set(v_reuseFailAlloc_3169_, 4, v_l_3153_);
v___x_3165_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3164_;
}
v_reusejp_3164_:
{
lean_object* v___x_3167_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_r_3154_);
lean_ctor_set(v___x_3060_, 3, v___x_3165_);
lean_ctor_set(v___x_3060_, 2, v_v_3157_);
lean_ctor_set(v___x_3060_, 1, v_k_3156_);
lean_ctor_set(v___x_3060_, 0, v___x_3162_);
v___x_3167_ = v___x_3060_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v___x_3162_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v_k_3156_);
lean_ctor_set(v_reuseFailAlloc_3168_, 2, v_v_3157_);
lean_ctor_set(v_reuseFailAlloc_3168_, 3, v___x_3165_);
lean_ctor_set(v_reuseFailAlloc_3168_, 4, v_r_3154_);
v___x_3167_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
return v___x_3167_;
}
}
}
}
else
{
lean_object* v_k_3173_; lean_object* v_v_3174_; lean_object* v___x_3176_; uint8_t v_isShared_3177_; uint8_t v_isSharedCheck_3197_; 
v_k_3173_ = lean_ctor_get(v_r_3058_, 1);
v_v_3174_ = lean_ctor_get(v_r_3058_, 2);
v_isSharedCheck_3197_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3197_ == 0)
{
lean_object* v_unused_3198_; lean_object* v_unused_3199_; lean_object* v_unused_3200_; 
v_unused_3198_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3198_);
v_unused_3199_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3199_);
v_unused_3200_ = lean_ctor_get(v_r_3058_, 0);
lean_dec(v_unused_3200_);
v___x_3176_ = v_r_3058_;
v_isShared_3177_ = v_isSharedCheck_3197_;
goto v_resetjp_3175_;
}
else
{
lean_inc(v_v_3174_);
lean_inc(v_k_3173_);
lean_dec(v_r_3058_);
v___x_3176_ = lean_box(0);
v_isShared_3177_ = v_isSharedCheck_3197_;
goto v_resetjp_3175_;
}
v_resetjp_3175_:
{
lean_object* v_k_3178_; lean_object* v_v_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3193_; 
v_k_3178_ = lean_ctor_get(v_l_3153_, 1);
v_v_3179_ = lean_ctor_get(v_l_3153_, 2);
v_isSharedCheck_3193_ = !lean_is_exclusive(v_l_3153_);
if (v_isSharedCheck_3193_ == 0)
{
lean_object* v_unused_3194_; lean_object* v_unused_3195_; lean_object* v_unused_3196_; 
v_unused_3194_ = lean_ctor_get(v_l_3153_, 4);
lean_dec(v_unused_3194_);
v_unused_3195_ = lean_ctor_get(v_l_3153_, 3);
lean_dec(v_unused_3195_);
v_unused_3196_ = lean_ctor_get(v_l_3153_, 0);
lean_dec(v_unused_3196_);
v___x_3181_ = v_l_3153_;
v_isShared_3182_ = v_isSharedCheck_3193_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_v_3179_);
lean_inc(v_k_3178_);
lean_dec(v_l_3153_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3193_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3183_; lean_object* v___x_3185_; 
v___x_3183_ = lean_unsigned_to_nat(3u);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 4, v_r_3154_);
lean_ctor_set(v___x_3181_, 3, v_r_3154_);
lean_ctor_set(v___x_3181_, 2, v_v_3056_);
lean_ctor_set(v___x_3181_, 1, v_k_3055_);
lean_ctor_set(v___x_3181_, 0, v___x_3064_);
v___x_3185_ = v___x_3181_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3192_; 
v_reuseFailAlloc_3192_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3192_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3192_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3192_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3192_, 3, v_r_3154_);
lean_ctor_set(v_reuseFailAlloc_3192_, 4, v_r_3154_);
v___x_3185_ = v_reuseFailAlloc_3192_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
lean_object* v___x_3187_; 
if (v_isShared_3177_ == 0)
{
lean_ctor_set(v___x_3176_, 3, v_r_3154_);
lean_ctor_set(v___x_3176_, 0, v___x_3064_);
v___x_3187_ = v___x_3176_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3191_, 1, v_k_3173_);
lean_ctor_set(v_reuseFailAlloc_3191_, 2, v_v_3174_);
lean_ctor_set(v_reuseFailAlloc_3191_, 3, v_r_3154_);
lean_ctor_set(v_reuseFailAlloc_3191_, 4, v_r_3154_);
v___x_3187_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
lean_object* v___x_3189_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v___x_3187_);
lean_ctor_set(v___x_3060_, 3, v___x_3185_);
lean_ctor_set(v___x_3060_, 2, v_v_3179_);
lean_ctor_set(v___x_3060_, 1, v_k_3178_);
lean_ctor_set(v___x_3060_, 0, v___x_3183_);
v___x_3189_ = v___x_3060_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v___x_3183_);
lean_ctor_set(v_reuseFailAlloc_3190_, 1, v_k_3178_);
lean_ctor_set(v_reuseFailAlloc_3190_, 2, v_v_3179_);
lean_ctor_set(v_reuseFailAlloc_3190_, 3, v___x_3185_);
lean_ctor_set(v_reuseFailAlloc_3190_, 4, v___x_3187_);
v___x_3189_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
return v___x_3189_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_3201_; 
v_r_3201_ = lean_ctor_get(v_r_3058_, 4);
lean_inc(v_r_3201_);
if (lean_obj_tag(v_r_3201_) == 0)
{
lean_object* v_k_3202_; lean_object* v_v_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3214_; 
v_k_3202_ = lean_ctor_get(v_r_3058_, 1);
v_v_3203_ = lean_ctor_get(v_r_3058_, 2);
v_isSharedCheck_3214_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3214_ == 0)
{
lean_object* v_unused_3215_; lean_object* v_unused_3216_; lean_object* v_unused_3217_; 
v_unused_3215_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3215_);
v_unused_3216_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3216_);
v_unused_3217_ = lean_ctor_get(v_r_3058_, 0);
lean_dec(v_unused_3217_);
v___x_3205_ = v_r_3058_;
v_isShared_3206_ = v_isSharedCheck_3214_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_v_3203_);
lean_inc(v_k_3202_);
lean_dec(v_r_3058_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3214_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3207_; lean_object* v___x_3209_; 
v___x_3207_ = lean_unsigned_to_nat(3u);
if (v_isShared_3206_ == 0)
{
lean_ctor_set(v___x_3205_, 4, v_l_3153_);
lean_ctor_set(v___x_3205_, 2, v_v_3056_);
lean_ctor_set(v___x_3205_, 1, v_k_3055_);
lean_ctor_set(v___x_3205_, 0, v___x_3064_);
v___x_3209_ = v___x_3205_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3213_; 
v_reuseFailAlloc_3213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3213_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3213_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3213_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3213_, 3, v_l_3153_);
lean_ctor_set(v_reuseFailAlloc_3213_, 4, v_l_3153_);
v___x_3209_ = v_reuseFailAlloc_3213_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
lean_object* v___x_3211_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_r_3201_);
lean_ctor_set(v___x_3060_, 3, v___x_3209_);
lean_ctor_set(v___x_3060_, 2, v_v_3203_);
lean_ctor_set(v___x_3060_, 1, v_k_3202_);
lean_ctor_set(v___x_3060_, 0, v___x_3207_);
v___x_3211_ = v___x_3060_;
goto v_reusejp_3210_;
}
else
{
lean_object* v_reuseFailAlloc_3212_; 
v_reuseFailAlloc_3212_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3212_, 0, v___x_3207_);
lean_ctor_set(v_reuseFailAlloc_3212_, 1, v_k_3202_);
lean_ctor_set(v_reuseFailAlloc_3212_, 2, v_v_3203_);
lean_ctor_set(v_reuseFailAlloc_3212_, 3, v___x_3209_);
lean_ctor_set(v_reuseFailAlloc_3212_, 4, v_r_3201_);
v___x_3211_ = v_reuseFailAlloc_3212_;
goto v_reusejp_3210_;
}
v_reusejp_3210_:
{
return v___x_3211_;
}
}
}
}
else
{
lean_object* v_size_3218_; lean_object* v_k_3219_; lean_object* v_v_3220_; lean_object* v___x_3222_; uint8_t v_isShared_3223_; uint8_t v_isSharedCheck_3231_; 
v_size_3218_ = lean_ctor_get(v_r_3058_, 0);
v_k_3219_ = lean_ctor_get(v_r_3058_, 1);
v_v_3220_ = lean_ctor_get(v_r_3058_, 2);
v_isSharedCheck_3231_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3231_ == 0)
{
lean_object* v_unused_3232_; lean_object* v_unused_3233_; 
v_unused_3232_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3232_);
v_unused_3233_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3233_);
v___x_3222_ = v_r_3058_;
v_isShared_3223_ = v_isSharedCheck_3231_;
goto v_resetjp_3221_;
}
else
{
lean_inc(v_v_3220_);
lean_inc(v_k_3219_);
lean_inc(v_size_3218_);
lean_dec(v_r_3058_);
v___x_3222_ = lean_box(0);
v_isShared_3223_ = v_isSharedCheck_3231_;
goto v_resetjp_3221_;
}
v_resetjp_3221_:
{
lean_object* v___x_3225_; 
if (v_isShared_3223_ == 0)
{
lean_ctor_set(v___x_3222_, 3, v_r_3201_);
v___x_3225_ = v___x_3222_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3230_; 
v_reuseFailAlloc_3230_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3230_, 0, v_size_3218_);
lean_ctor_set(v_reuseFailAlloc_3230_, 1, v_k_3219_);
lean_ctor_set(v_reuseFailAlloc_3230_, 2, v_v_3220_);
lean_ctor_set(v_reuseFailAlloc_3230_, 3, v_r_3201_);
lean_ctor_set(v_reuseFailAlloc_3230_, 4, v_r_3201_);
v___x_3225_ = v_reuseFailAlloc_3230_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
lean_object* v___x_3226_; lean_object* v___x_3228_; 
v___x_3226_ = lean_unsigned_to_nat(2u);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v___x_3225_);
lean_ctor_set(v___x_3060_, 3, v_r_3201_);
lean_ctor_set(v___x_3060_, 0, v___x_3226_);
v___x_3228_ = v___x_3060_;
goto v_reusejp_3227_;
}
else
{
lean_object* v_reuseFailAlloc_3229_; 
v_reuseFailAlloc_3229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3229_, 0, v___x_3226_);
lean_ctor_set(v_reuseFailAlloc_3229_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3229_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3229_, 3, v_r_3201_);
lean_ctor_set(v_reuseFailAlloc_3229_, 4, v___x_3225_);
v___x_3228_ = v_reuseFailAlloc_3229_;
goto v_reusejp_3227_;
}
v_reusejp_3227_:
{
return v___x_3228_;
}
}
}
}
}
}
else
{
lean_object* v___x_3235_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 3, v_r_3058_);
lean_ctor_set(v___x_3060_, 0, v___x_3064_);
v___x_3235_ = v___x_3060_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3236_; 
v_reuseFailAlloc_3236_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3236_, 0, v___x_3064_);
lean_ctor_set(v_reuseFailAlloc_3236_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3236_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3236_, 3, v_r_3058_);
lean_ctor_set(v_reuseFailAlloc_3236_, 4, v_r_3058_);
v___x_3235_ = v_reuseFailAlloc_3236_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
return v___x_3235_;
}
}
}
}
case 1:
{
lean_del_object(v___x_3060_);
lean_dec(v_v_3056_);
lean_dec(v_k_3055_);
if (lean_obj_tag(v_l_3057_) == 0)
{
if (lean_obj_tag(v_r_3058_) == 0)
{
lean_object* v_size_3237_; lean_object* v_k_3238_; lean_object* v_v_3239_; lean_object* v_l_3240_; lean_object* v_r_3241_; lean_object* v_size_3242_; lean_object* v_k_3243_; lean_object* v_v_3244_; lean_object* v_l_3245_; lean_object* v_r_3246_; lean_object* v___x_3247_; uint8_t v___x_3248_; 
v_size_3237_ = lean_ctor_get(v_l_3057_, 0);
v_k_3238_ = lean_ctor_get(v_l_3057_, 1);
v_v_3239_ = lean_ctor_get(v_l_3057_, 2);
v_l_3240_ = lean_ctor_get(v_l_3057_, 3);
v_r_3241_ = lean_ctor_get(v_l_3057_, 4);
lean_inc(v_r_3241_);
v_size_3242_ = lean_ctor_get(v_r_3058_, 0);
v_k_3243_ = lean_ctor_get(v_r_3058_, 1);
v_v_3244_ = lean_ctor_get(v_r_3058_, 2);
v_l_3245_ = lean_ctor_get(v_r_3058_, 3);
lean_inc(v_l_3245_);
v_r_3246_ = lean_ctor_get(v_r_3058_, 4);
v___x_3247_ = lean_unsigned_to_nat(1u);
v___x_3248_ = lean_nat_dec_lt(v_size_3237_, v_size_3242_);
if (v___x_3248_ == 0)
{
lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3384_; 
lean_inc(v_l_3240_);
lean_inc(v_v_3239_);
lean_inc(v_k_3238_);
v_isSharedCheck_3384_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3384_ == 0)
{
lean_object* v_unused_3385_; lean_object* v_unused_3386_; lean_object* v_unused_3387_; lean_object* v_unused_3388_; lean_object* v_unused_3389_; 
v_unused_3385_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3385_);
v_unused_3386_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3386_);
v_unused_3387_ = lean_ctor_get(v_l_3057_, 2);
lean_dec(v_unused_3387_);
v_unused_3388_ = lean_ctor_get(v_l_3057_, 1);
lean_dec(v_unused_3388_);
v_unused_3389_ = lean_ctor_get(v_l_3057_, 0);
lean_dec(v_unused_3389_);
v___x_3250_ = v_l_3057_;
v_isShared_3251_ = v_isSharedCheck_3384_;
goto v_resetjp_3249_;
}
else
{
lean_dec(v_l_3057_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3384_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3252_; lean_object* v_tree_3253_; 
v___x_3252_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_3238_, v_v_3239_, v_l_3240_, v_r_3241_);
v_tree_3253_ = lean_ctor_get(v___x_3252_, 2);
lean_inc(v_tree_3253_);
if (lean_obj_tag(v_tree_3253_) == 0)
{
lean_object* v_k_3254_; lean_object* v_v_3255_; lean_object* v_size_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; uint8_t v___x_3259_; 
v_k_3254_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_k_3254_);
v_v_3255_ = lean_ctor_get(v___x_3252_, 1);
lean_inc(v_v_3255_);
lean_dec_ref(v___x_3252_);
v_size_3256_ = lean_ctor_get(v_tree_3253_, 0);
v___x_3257_ = lean_unsigned_to_nat(3u);
v___x_3258_ = lean_nat_mul(v___x_3257_, v_size_3256_);
v___x_3259_ = lean_nat_dec_lt(v___x_3258_, v_size_3242_);
lean_dec(v___x_3258_);
if (v___x_3259_ == 0)
{
lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3263_; 
lean_dec(v_l_3245_);
v___x_3260_ = lean_nat_add(v___x_3247_, v_size_3256_);
v___x_3261_ = lean_nat_add(v___x_3260_, v_size_3242_);
lean_dec(v___x_3260_);
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 4, v_r_3058_);
lean_ctor_set(v___x_3250_, 3, v_tree_3253_);
lean_ctor_set(v___x_3250_, 2, v_v_3255_);
lean_ctor_set(v___x_3250_, 1, v_k_3254_);
lean_ctor_set(v___x_3250_, 0, v___x_3261_);
v___x_3263_ = v___x_3250_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v___x_3261_);
lean_ctor_set(v_reuseFailAlloc_3264_, 1, v_k_3254_);
lean_ctor_set(v_reuseFailAlloc_3264_, 2, v_v_3255_);
lean_ctor_set(v_reuseFailAlloc_3264_, 3, v_tree_3253_);
lean_ctor_set(v_reuseFailAlloc_3264_, 4, v_r_3058_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
else
{
lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3319_; 
lean_inc(v_r_3246_);
lean_inc(v_v_3244_);
lean_inc(v_k_3243_);
lean_inc(v_size_3242_);
v_isSharedCheck_3319_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3319_ == 0)
{
lean_object* v_unused_3320_; lean_object* v_unused_3321_; lean_object* v_unused_3322_; lean_object* v_unused_3323_; lean_object* v_unused_3324_; 
v_unused_3320_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3320_);
v_unused_3321_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3321_);
v_unused_3322_ = lean_ctor_get(v_r_3058_, 2);
lean_dec(v_unused_3322_);
v_unused_3323_ = lean_ctor_get(v_r_3058_, 1);
lean_dec(v_unused_3323_);
v_unused_3324_ = lean_ctor_get(v_r_3058_, 0);
lean_dec(v_unused_3324_);
v___x_3266_ = v_r_3058_;
v_isShared_3267_ = v_isSharedCheck_3319_;
goto v_resetjp_3265_;
}
else
{
lean_dec(v_r_3058_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3319_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v_size_3268_; lean_object* v_k_3269_; lean_object* v_v_3270_; lean_object* v_l_3271_; lean_object* v_r_3272_; lean_object* v_size_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; uint8_t v___x_3276_; 
v_size_3268_ = lean_ctor_get(v_l_3245_, 0);
v_k_3269_ = lean_ctor_get(v_l_3245_, 1);
v_v_3270_ = lean_ctor_get(v_l_3245_, 2);
v_l_3271_ = lean_ctor_get(v_l_3245_, 3);
v_r_3272_ = lean_ctor_get(v_l_3245_, 4);
v_size_3273_ = lean_ctor_get(v_r_3246_, 0);
v___x_3274_ = lean_unsigned_to_nat(2u);
v___x_3275_ = lean_nat_mul(v___x_3274_, v_size_3273_);
v___x_3276_ = lean_nat_dec_lt(v_size_3268_, v___x_3275_);
lean_dec(v___x_3275_);
if (v___x_3276_ == 0)
{
lean_object* v___x_3278_; uint8_t v_isShared_3279_; uint8_t v_isSharedCheck_3304_; 
lean_inc(v_r_3272_);
lean_inc(v_l_3271_);
lean_inc(v_v_3270_);
lean_inc(v_k_3269_);
v_isSharedCheck_3304_ = !lean_is_exclusive(v_l_3245_);
if (v_isSharedCheck_3304_ == 0)
{
lean_object* v_unused_3305_; lean_object* v_unused_3306_; lean_object* v_unused_3307_; lean_object* v_unused_3308_; lean_object* v_unused_3309_; 
v_unused_3305_ = lean_ctor_get(v_l_3245_, 4);
lean_dec(v_unused_3305_);
v_unused_3306_ = lean_ctor_get(v_l_3245_, 3);
lean_dec(v_unused_3306_);
v_unused_3307_ = lean_ctor_get(v_l_3245_, 2);
lean_dec(v_unused_3307_);
v_unused_3308_ = lean_ctor_get(v_l_3245_, 1);
lean_dec(v_unused_3308_);
v_unused_3309_ = lean_ctor_get(v_l_3245_, 0);
lean_dec(v_unused_3309_);
v___x_3278_ = v_l_3245_;
v_isShared_3279_ = v_isSharedCheck_3304_;
goto v_resetjp_3277_;
}
else
{
lean_dec(v_l_3245_);
v___x_3278_ = lean_box(0);
v_isShared_3279_ = v_isSharedCheck_3304_;
goto v_resetjp_3277_;
}
v_resetjp_3277_:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3285_; lean_object* v___y_3294_; 
v___x_3280_ = lean_nat_add(v___x_3247_, v_size_3256_);
v___x_3281_ = lean_nat_add(v___x_3280_, v_size_3242_);
lean_dec(v_size_3242_);
if (lean_obj_tag(v_l_3271_) == 0)
{
lean_object* v_size_3302_; 
v_size_3302_ = lean_ctor_get(v_l_3271_, 0);
lean_inc(v_size_3302_);
v___y_3294_ = v_size_3302_;
goto v___jp_3293_;
}
else
{
lean_object* v___x_3303_; 
v___x_3303_ = lean_unsigned_to_nat(0u);
v___y_3294_ = v___x_3303_;
goto v___jp_3293_;
}
v___jp_3282_:
{
lean_object* v___x_3286_; lean_object* v___x_3288_; 
v___x_3286_ = lean_nat_add(v___y_3284_, v___y_3285_);
lean_dec(v___y_3285_);
lean_dec(v___y_3284_);
if (v_isShared_3279_ == 0)
{
lean_ctor_set(v___x_3278_, 4, v_r_3246_);
lean_ctor_set(v___x_3278_, 3, v_r_3272_);
lean_ctor_set(v___x_3278_, 2, v_v_3244_);
lean_ctor_set(v___x_3278_, 1, v_k_3243_);
lean_ctor_set(v___x_3278_, 0, v___x_3286_);
v___x_3288_ = v___x_3278_;
goto v_reusejp_3287_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v___x_3286_);
lean_ctor_set(v_reuseFailAlloc_3292_, 1, v_k_3243_);
lean_ctor_set(v_reuseFailAlloc_3292_, 2, v_v_3244_);
lean_ctor_set(v_reuseFailAlloc_3292_, 3, v_r_3272_);
lean_ctor_set(v_reuseFailAlloc_3292_, 4, v_r_3246_);
v___x_3288_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3287_;
}
v_reusejp_3287_:
{
lean_object* v___x_3290_; 
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 4, v___x_3288_);
lean_ctor_set(v___x_3266_, 3, v___y_3283_);
lean_ctor_set(v___x_3266_, 2, v_v_3270_);
lean_ctor_set(v___x_3266_, 1, v_k_3269_);
lean_ctor_set(v___x_3266_, 0, v___x_3281_);
v___x_3290_ = v___x_3266_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v___x_3281_);
lean_ctor_set(v_reuseFailAlloc_3291_, 1, v_k_3269_);
lean_ctor_set(v_reuseFailAlloc_3291_, 2, v_v_3270_);
lean_ctor_set(v_reuseFailAlloc_3291_, 3, v___y_3283_);
lean_ctor_set(v_reuseFailAlloc_3291_, 4, v___x_3288_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
v___jp_3293_:
{
lean_object* v___x_3295_; lean_object* v___x_3297_; 
v___x_3295_ = lean_nat_add(v___x_3280_, v___y_3294_);
lean_dec(v___y_3294_);
lean_dec(v___x_3280_);
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 4, v_l_3271_);
lean_ctor_set(v___x_3250_, 3, v_tree_3253_);
lean_ctor_set(v___x_3250_, 2, v_v_3255_);
lean_ctor_set(v___x_3250_, 1, v_k_3254_);
lean_ctor_set(v___x_3250_, 0, v___x_3295_);
v___x_3297_ = v___x_3250_;
goto v_reusejp_3296_;
}
else
{
lean_object* v_reuseFailAlloc_3301_; 
v_reuseFailAlloc_3301_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3301_, 0, v___x_3295_);
lean_ctor_set(v_reuseFailAlloc_3301_, 1, v_k_3254_);
lean_ctor_set(v_reuseFailAlloc_3301_, 2, v_v_3255_);
lean_ctor_set(v_reuseFailAlloc_3301_, 3, v_tree_3253_);
lean_ctor_set(v_reuseFailAlloc_3301_, 4, v_l_3271_);
v___x_3297_ = v_reuseFailAlloc_3301_;
goto v_reusejp_3296_;
}
v_reusejp_3296_:
{
lean_object* v___x_3298_; 
v___x_3298_ = lean_nat_add(v___x_3247_, v_size_3273_);
if (lean_obj_tag(v_r_3272_) == 0)
{
lean_object* v_size_3299_; 
v_size_3299_ = lean_ctor_get(v_r_3272_, 0);
lean_inc(v_size_3299_);
v___y_3283_ = v___x_3297_;
v___y_3284_ = v___x_3298_;
v___y_3285_ = v_size_3299_;
goto v___jp_3282_;
}
else
{
lean_object* v___x_3300_; 
v___x_3300_ = lean_unsigned_to_nat(0u);
v___y_3283_ = v___x_3297_;
v___y_3284_ = v___x_3298_;
v___y_3285_ = v___x_3300_;
goto v___jp_3282_;
}
}
}
}
}
else
{
lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3314_; 
v___x_3310_ = lean_nat_add(v___x_3247_, v_size_3256_);
v___x_3311_ = lean_nat_add(v___x_3310_, v_size_3242_);
lean_dec(v_size_3242_);
v___x_3312_ = lean_nat_add(v___x_3310_, v_size_3268_);
lean_dec(v___x_3310_);
if (v_isShared_3267_ == 0)
{
lean_ctor_set(v___x_3266_, 4, v_l_3245_);
lean_ctor_set(v___x_3266_, 3, v_tree_3253_);
lean_ctor_set(v___x_3266_, 2, v_v_3255_);
lean_ctor_set(v___x_3266_, 1, v_k_3254_);
lean_ctor_set(v___x_3266_, 0, v___x_3312_);
v___x_3314_ = v___x_3266_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3318_; 
v_reuseFailAlloc_3318_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3318_, 0, v___x_3312_);
lean_ctor_set(v_reuseFailAlloc_3318_, 1, v_k_3254_);
lean_ctor_set(v_reuseFailAlloc_3318_, 2, v_v_3255_);
lean_ctor_set(v_reuseFailAlloc_3318_, 3, v_tree_3253_);
lean_ctor_set(v_reuseFailAlloc_3318_, 4, v_l_3245_);
v___x_3314_ = v_reuseFailAlloc_3318_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
lean_object* v___x_3316_; 
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 4, v_r_3246_);
lean_ctor_set(v___x_3250_, 3, v___x_3314_);
lean_ctor_set(v___x_3250_, 2, v_v_3244_);
lean_ctor_set(v___x_3250_, 1, v_k_3243_);
lean_ctor_set(v___x_3250_, 0, v___x_3311_);
v___x_3316_ = v___x_3250_;
goto v_reusejp_3315_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___x_3311_);
lean_ctor_set(v_reuseFailAlloc_3317_, 1, v_k_3243_);
lean_ctor_set(v_reuseFailAlloc_3317_, 2, v_v_3244_);
lean_ctor_set(v_reuseFailAlloc_3317_, 3, v___x_3314_);
lean_ctor_set(v_reuseFailAlloc_3317_, 4, v_r_3246_);
v___x_3316_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3315_;
}
v_reusejp_3315_:
{
return v___x_3316_;
}
}
}
}
}
}
else
{
lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3378_; 
lean_inc(v_r_3246_);
lean_inc(v_v_3244_);
lean_inc(v_k_3243_);
lean_inc(v_size_3242_);
v_isSharedCheck_3378_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3378_ == 0)
{
lean_object* v_unused_3379_; lean_object* v_unused_3380_; lean_object* v_unused_3381_; lean_object* v_unused_3382_; lean_object* v_unused_3383_; 
v_unused_3379_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3379_);
v_unused_3380_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3380_);
v_unused_3381_ = lean_ctor_get(v_r_3058_, 2);
lean_dec(v_unused_3381_);
v_unused_3382_ = lean_ctor_get(v_r_3058_, 1);
lean_dec(v_unused_3382_);
v_unused_3383_ = lean_ctor_get(v_r_3058_, 0);
lean_dec(v_unused_3383_);
v___x_3326_ = v_r_3058_;
v_isShared_3327_ = v_isSharedCheck_3378_;
goto v_resetjp_3325_;
}
else
{
lean_dec(v_r_3058_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3378_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
if (lean_obj_tag(v_l_3245_) == 0)
{
if (lean_obj_tag(v_r_3246_) == 0)
{
lean_object* v_k_3328_; lean_object* v_v_3329_; lean_object* v_size_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3334_; 
v_k_3328_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_k_3328_);
v_v_3329_ = lean_ctor_get(v___x_3252_, 1);
lean_inc(v_v_3329_);
lean_dec_ref(v___x_3252_);
v_size_3330_ = lean_ctor_get(v_l_3245_, 0);
v___x_3331_ = lean_nat_add(v___x_3247_, v_size_3242_);
lean_dec(v_size_3242_);
v___x_3332_ = lean_nat_add(v___x_3247_, v_size_3330_);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 4, v_l_3245_);
lean_ctor_set(v___x_3326_, 3, v_tree_3253_);
lean_ctor_set(v___x_3326_, 2, v_v_3329_);
lean_ctor_set(v___x_3326_, 1, v_k_3328_);
lean_ctor_set(v___x_3326_, 0, v___x_3332_);
v___x_3334_ = v___x_3326_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v___x_3332_);
lean_ctor_set(v_reuseFailAlloc_3338_, 1, v_k_3328_);
lean_ctor_set(v_reuseFailAlloc_3338_, 2, v_v_3329_);
lean_ctor_set(v_reuseFailAlloc_3338_, 3, v_tree_3253_);
lean_ctor_set(v_reuseFailAlloc_3338_, 4, v_l_3245_);
v___x_3334_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
lean_object* v___x_3336_; 
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 4, v_r_3246_);
lean_ctor_set(v___x_3250_, 3, v___x_3334_);
lean_ctor_set(v___x_3250_, 2, v_v_3244_);
lean_ctor_set(v___x_3250_, 1, v_k_3243_);
lean_ctor_set(v___x_3250_, 0, v___x_3331_);
v___x_3336_ = v___x_3250_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v___x_3331_);
lean_ctor_set(v_reuseFailAlloc_3337_, 1, v_k_3243_);
lean_ctor_set(v_reuseFailAlloc_3337_, 2, v_v_3244_);
lean_ctor_set(v_reuseFailAlloc_3337_, 3, v___x_3334_);
lean_ctor_set(v_reuseFailAlloc_3337_, 4, v_r_3246_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
else
{
lean_object* v_k_3339_; lean_object* v_v_3340_; lean_object* v_k_3341_; lean_object* v_v_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3356_; 
lean_dec(v_size_3242_);
v_k_3339_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_k_3339_);
v_v_3340_ = lean_ctor_get(v___x_3252_, 1);
lean_inc(v_v_3340_);
lean_dec_ref(v___x_3252_);
v_k_3341_ = lean_ctor_get(v_l_3245_, 1);
v_v_3342_ = lean_ctor_get(v_l_3245_, 2);
v_isSharedCheck_3356_ = !lean_is_exclusive(v_l_3245_);
if (v_isSharedCheck_3356_ == 0)
{
lean_object* v_unused_3357_; lean_object* v_unused_3358_; lean_object* v_unused_3359_; 
v_unused_3357_ = lean_ctor_get(v_l_3245_, 4);
lean_dec(v_unused_3357_);
v_unused_3358_ = lean_ctor_get(v_l_3245_, 3);
lean_dec(v_unused_3358_);
v_unused_3359_ = lean_ctor_get(v_l_3245_, 0);
lean_dec(v_unused_3359_);
v___x_3344_ = v_l_3245_;
v_isShared_3345_ = v_isSharedCheck_3356_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_v_3342_);
lean_inc(v_k_3341_);
lean_dec(v_l_3245_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3356_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
lean_object* v___x_3346_; lean_object* v___x_3348_; 
v___x_3346_ = lean_unsigned_to_nat(3u);
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 4, v_r_3246_);
lean_ctor_set(v___x_3344_, 3, v_r_3246_);
lean_ctor_set(v___x_3344_, 2, v_v_3340_);
lean_ctor_set(v___x_3344_, 1, v_k_3339_);
lean_ctor_set(v___x_3344_, 0, v___x_3247_);
v___x_3348_ = v___x_3344_;
goto v_reusejp_3347_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3355_, 1, v_k_3339_);
lean_ctor_set(v_reuseFailAlloc_3355_, 2, v_v_3340_);
lean_ctor_set(v_reuseFailAlloc_3355_, 3, v_r_3246_);
lean_ctor_set(v_reuseFailAlloc_3355_, 4, v_r_3246_);
v___x_3348_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3347_;
}
v_reusejp_3347_:
{
lean_object* v___x_3350_; 
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 3, v_r_3246_);
lean_ctor_set(v___x_3326_, 0, v___x_3247_);
v___x_3350_ = v___x_3326_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3354_, 1, v_k_3243_);
lean_ctor_set(v_reuseFailAlloc_3354_, 2, v_v_3244_);
lean_ctor_set(v_reuseFailAlloc_3354_, 3, v_r_3246_);
lean_ctor_set(v_reuseFailAlloc_3354_, 4, v_r_3246_);
v___x_3350_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3352_; 
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 4, v___x_3350_);
lean_ctor_set(v___x_3250_, 3, v___x_3348_);
lean_ctor_set(v___x_3250_, 2, v_v_3342_);
lean_ctor_set(v___x_3250_, 1, v_k_3341_);
lean_ctor_set(v___x_3250_, 0, v___x_3346_);
v___x_3352_ = v___x_3250_;
goto v_reusejp_3351_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3346_);
lean_ctor_set(v_reuseFailAlloc_3353_, 1, v_k_3341_);
lean_ctor_set(v_reuseFailAlloc_3353_, 2, v_v_3342_);
lean_ctor_set(v_reuseFailAlloc_3353_, 3, v___x_3348_);
lean_ctor_set(v_reuseFailAlloc_3353_, 4, v___x_3350_);
v___x_3352_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3351_;
}
v_reusejp_3351_:
{
return v___x_3352_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3246_) == 0)
{
lean_object* v_k_3360_; lean_object* v_v_3361_; lean_object* v___x_3362_; lean_object* v___x_3364_; 
lean_dec(v_size_3242_);
v_k_3360_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_k_3360_);
v_v_3361_ = lean_ctor_get(v___x_3252_, 1);
lean_inc(v_v_3361_);
lean_dec_ref(v___x_3252_);
v___x_3362_ = lean_unsigned_to_nat(3u);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 4, v_l_3245_);
lean_ctor_set(v___x_3326_, 2, v_v_3361_);
lean_ctor_set(v___x_3326_, 1, v_k_3360_);
lean_ctor_set(v___x_3326_, 0, v___x_3247_);
v___x_3364_ = v___x_3326_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3368_, 1, v_k_3360_);
lean_ctor_set(v_reuseFailAlloc_3368_, 2, v_v_3361_);
lean_ctor_set(v_reuseFailAlloc_3368_, 3, v_l_3245_);
lean_ctor_set(v_reuseFailAlloc_3368_, 4, v_l_3245_);
v___x_3364_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
lean_object* v___x_3366_; 
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 4, v_r_3246_);
lean_ctor_set(v___x_3250_, 3, v___x_3364_);
lean_ctor_set(v___x_3250_, 2, v_v_3244_);
lean_ctor_set(v___x_3250_, 1, v_k_3243_);
lean_ctor_set(v___x_3250_, 0, v___x_3362_);
v___x_3366_ = v___x_3250_;
goto v_reusejp_3365_;
}
else
{
lean_object* v_reuseFailAlloc_3367_; 
v_reuseFailAlloc_3367_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3367_, 0, v___x_3362_);
lean_ctor_set(v_reuseFailAlloc_3367_, 1, v_k_3243_);
lean_ctor_set(v_reuseFailAlloc_3367_, 2, v_v_3244_);
lean_ctor_set(v_reuseFailAlloc_3367_, 3, v___x_3364_);
lean_ctor_set(v_reuseFailAlloc_3367_, 4, v_r_3246_);
v___x_3366_ = v_reuseFailAlloc_3367_;
goto v_reusejp_3365_;
}
v_reusejp_3365_:
{
return v___x_3366_;
}
}
}
else
{
lean_object* v_k_3369_; lean_object* v_v_3370_; lean_object* v___x_3372_; 
v_k_3369_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_k_3369_);
v_v_3370_ = lean_ctor_get(v___x_3252_, 1);
lean_inc(v_v_3370_);
lean_dec_ref(v___x_3252_);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 3, v_r_3246_);
v___x_3372_ = v___x_3326_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3377_; 
v_reuseFailAlloc_3377_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3377_, 0, v_size_3242_);
lean_ctor_set(v_reuseFailAlloc_3377_, 1, v_k_3243_);
lean_ctor_set(v_reuseFailAlloc_3377_, 2, v_v_3244_);
lean_ctor_set(v_reuseFailAlloc_3377_, 3, v_r_3246_);
lean_ctor_set(v_reuseFailAlloc_3377_, 4, v_r_3246_);
v___x_3372_ = v_reuseFailAlloc_3377_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
lean_object* v___x_3373_; lean_object* v___x_3375_; 
v___x_3373_ = lean_unsigned_to_nat(2u);
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 4, v___x_3372_);
lean_ctor_set(v___x_3250_, 3, v_r_3246_);
lean_ctor_set(v___x_3250_, 2, v_v_3370_);
lean_ctor_set(v___x_3250_, 1, v_k_3369_);
lean_ctor_set(v___x_3250_, 0, v___x_3373_);
v___x_3375_ = v___x_3250_;
goto v_reusejp_3374_;
}
else
{
lean_object* v_reuseFailAlloc_3376_; 
v_reuseFailAlloc_3376_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3376_, 0, v___x_3373_);
lean_ctor_set(v_reuseFailAlloc_3376_, 1, v_k_3369_);
lean_ctor_set(v_reuseFailAlloc_3376_, 2, v_v_3370_);
lean_ctor_set(v_reuseFailAlloc_3376_, 3, v_r_3246_);
lean_ctor_set(v_reuseFailAlloc_3376_, 4, v___x_3372_);
v___x_3375_ = v_reuseFailAlloc_3376_;
goto v_reusejp_3374_;
}
v_reusejp_3374_:
{
return v___x_3375_;
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
lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3542_; 
lean_inc(v_r_3246_);
lean_inc(v_v_3244_);
lean_inc(v_k_3243_);
v_isSharedCheck_3542_ = !lean_is_exclusive(v_r_3058_);
if (v_isSharedCheck_3542_ == 0)
{
lean_object* v_unused_3543_; lean_object* v_unused_3544_; lean_object* v_unused_3545_; lean_object* v_unused_3546_; lean_object* v_unused_3547_; 
v_unused_3543_ = lean_ctor_get(v_r_3058_, 4);
lean_dec(v_unused_3543_);
v_unused_3544_ = lean_ctor_get(v_r_3058_, 3);
lean_dec(v_unused_3544_);
v_unused_3545_ = lean_ctor_get(v_r_3058_, 2);
lean_dec(v_unused_3545_);
v_unused_3546_ = lean_ctor_get(v_r_3058_, 1);
lean_dec(v_unused_3546_);
v_unused_3547_ = lean_ctor_get(v_r_3058_, 0);
lean_dec(v_unused_3547_);
v___x_3391_ = v_r_3058_;
v_isShared_3392_ = v_isSharedCheck_3542_;
goto v_resetjp_3390_;
}
else
{
lean_dec(v_r_3058_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3542_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3393_; lean_object* v_tree_3394_; 
v___x_3393_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_3243_, v_v_3244_, v_l_3245_, v_r_3246_);
v_tree_3394_ = lean_ctor_get(v___x_3393_, 2);
lean_inc(v_tree_3394_);
if (lean_obj_tag(v_tree_3394_) == 0)
{
lean_object* v_k_3395_; lean_object* v_v_3396_; lean_object* v_size_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; uint8_t v___x_3400_; 
v_k_3395_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_k_3395_);
v_v_3396_ = lean_ctor_get(v___x_3393_, 1);
lean_inc(v_v_3396_);
lean_dec_ref(v___x_3393_);
v_size_3397_ = lean_ctor_get(v_tree_3394_, 0);
v___x_3398_ = lean_unsigned_to_nat(3u);
v___x_3399_ = lean_nat_mul(v___x_3398_, v_size_3397_);
v___x_3400_ = lean_nat_dec_lt(v___x_3399_, v_size_3237_);
lean_dec(v___x_3399_);
if (v___x_3400_ == 0)
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3404_; 
lean_dec(v_r_3241_);
v___x_3401_ = lean_nat_add(v___x_3247_, v_size_3237_);
v___x_3402_ = lean_nat_add(v___x_3401_, v_size_3397_);
lean_dec(v___x_3401_);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 4, v_tree_3394_);
lean_ctor_set(v___x_3391_, 3, v_l_3057_);
lean_ctor_set(v___x_3391_, 2, v_v_3396_);
lean_ctor_set(v___x_3391_, 1, v_k_3395_);
lean_ctor_set(v___x_3391_, 0, v___x_3402_);
v___x_3404_ = v___x_3391_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v___x_3402_);
lean_ctor_set(v_reuseFailAlloc_3405_, 1, v_k_3395_);
lean_ctor_set(v_reuseFailAlloc_3405_, 2, v_v_3396_);
lean_ctor_set(v_reuseFailAlloc_3405_, 3, v_l_3057_);
lean_ctor_set(v_reuseFailAlloc_3405_, 4, v_tree_3394_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
else
{
lean_object* v___x_3407_; uint8_t v_isShared_3408_; uint8_t v_isSharedCheck_3471_; 
lean_inc(v_l_3240_);
lean_inc(v_v_3239_);
lean_inc(v_k_3238_);
lean_inc(v_size_3237_);
v_isSharedCheck_3471_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3471_ == 0)
{
lean_object* v_unused_3472_; lean_object* v_unused_3473_; lean_object* v_unused_3474_; lean_object* v_unused_3475_; lean_object* v_unused_3476_; 
v_unused_3472_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3472_);
v_unused_3473_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3473_);
v_unused_3474_ = lean_ctor_get(v_l_3057_, 2);
lean_dec(v_unused_3474_);
v_unused_3475_ = lean_ctor_get(v_l_3057_, 1);
lean_dec(v_unused_3475_);
v_unused_3476_ = lean_ctor_get(v_l_3057_, 0);
lean_dec(v_unused_3476_);
v___x_3407_ = v_l_3057_;
v_isShared_3408_ = v_isSharedCheck_3471_;
goto v_resetjp_3406_;
}
else
{
lean_dec(v_l_3057_);
v___x_3407_ = lean_box(0);
v_isShared_3408_ = v_isSharedCheck_3471_;
goto v_resetjp_3406_;
}
v_resetjp_3406_:
{
lean_object* v_size_3409_; lean_object* v_size_3410_; lean_object* v_k_3411_; lean_object* v_v_3412_; lean_object* v_l_3413_; lean_object* v_r_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; uint8_t v___x_3417_; 
v_size_3409_ = lean_ctor_get(v_l_3240_, 0);
v_size_3410_ = lean_ctor_get(v_r_3241_, 0);
v_k_3411_ = lean_ctor_get(v_r_3241_, 1);
v_v_3412_ = lean_ctor_get(v_r_3241_, 2);
v_l_3413_ = lean_ctor_get(v_r_3241_, 3);
v_r_3414_ = lean_ctor_get(v_r_3241_, 4);
v___x_3415_ = lean_unsigned_to_nat(2u);
v___x_3416_ = lean_nat_mul(v___x_3415_, v_size_3409_);
v___x_3417_ = lean_nat_dec_lt(v_size_3410_, v___x_3416_);
lean_dec(v___x_3416_);
if (v___x_3417_ == 0)
{
lean_object* v___x_3419_; uint8_t v_isShared_3420_; uint8_t v_isSharedCheck_3455_; 
lean_inc(v_r_3414_);
lean_inc(v_l_3413_);
lean_inc(v_v_3412_);
lean_inc(v_k_3411_);
lean_del_object(v___x_3407_);
v_isSharedCheck_3455_ = !lean_is_exclusive(v_r_3241_);
if (v_isSharedCheck_3455_ == 0)
{
lean_object* v_unused_3456_; lean_object* v_unused_3457_; lean_object* v_unused_3458_; lean_object* v_unused_3459_; lean_object* v_unused_3460_; 
v_unused_3456_ = lean_ctor_get(v_r_3241_, 4);
lean_dec(v_unused_3456_);
v_unused_3457_ = lean_ctor_get(v_r_3241_, 3);
lean_dec(v_unused_3457_);
v_unused_3458_ = lean_ctor_get(v_r_3241_, 2);
lean_dec(v_unused_3458_);
v_unused_3459_ = lean_ctor_get(v_r_3241_, 1);
lean_dec(v_unused_3459_);
v_unused_3460_ = lean_ctor_get(v_r_3241_, 0);
lean_dec(v_unused_3460_);
v___x_3419_ = v_r_3241_;
v_isShared_3420_ = v_isSharedCheck_3455_;
goto v_resetjp_3418_;
}
else
{
lean_dec(v_r_3241_);
v___x_3419_ = lean_box(0);
v_isShared_3420_ = v_isSharedCheck_3455_;
goto v_resetjp_3418_;
}
v_resetjp_3418_:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___y_3424_; lean_object* v___y_3425_; lean_object* v___y_3426_; lean_object* v___x_3443_; lean_object* v___y_3445_; 
v___x_3421_ = lean_nat_add(v___x_3247_, v_size_3237_);
lean_dec(v_size_3237_);
v___x_3422_ = lean_nat_add(v___x_3421_, v_size_3397_);
lean_dec(v___x_3421_);
v___x_3443_ = lean_nat_add(v___x_3247_, v_size_3409_);
if (lean_obj_tag(v_l_3413_) == 0)
{
lean_object* v_size_3453_; 
v_size_3453_ = lean_ctor_get(v_l_3413_, 0);
lean_inc(v_size_3453_);
v___y_3445_ = v_size_3453_;
goto v___jp_3444_;
}
else
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_unsigned_to_nat(0u);
v___y_3445_ = v___x_3454_;
goto v___jp_3444_;
}
v___jp_3423_:
{
lean_object* v___x_3427_; lean_object* v___x_3429_; 
v___x_3427_ = lean_nat_add(v___y_3424_, v___y_3426_);
lean_dec(v___y_3426_);
lean_dec(v___y_3424_);
lean_inc_ref(v_tree_3394_);
if (v_isShared_3420_ == 0)
{
lean_ctor_set(v___x_3419_, 4, v_tree_3394_);
lean_ctor_set(v___x_3419_, 3, v_r_3414_);
lean_ctor_set(v___x_3419_, 2, v_v_3396_);
lean_ctor_set(v___x_3419_, 1, v_k_3395_);
lean_ctor_set(v___x_3419_, 0, v___x_3427_);
v___x_3429_ = v___x_3419_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v___x_3427_);
lean_ctor_set(v_reuseFailAlloc_3442_, 1, v_k_3395_);
lean_ctor_set(v_reuseFailAlloc_3442_, 2, v_v_3396_);
lean_ctor_set(v_reuseFailAlloc_3442_, 3, v_r_3414_);
lean_ctor_set(v_reuseFailAlloc_3442_, 4, v_tree_3394_);
v___x_3429_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3436_; 
v_isSharedCheck_3436_ = !lean_is_exclusive(v_tree_3394_);
if (v_isSharedCheck_3436_ == 0)
{
lean_object* v_unused_3437_; lean_object* v_unused_3438_; lean_object* v_unused_3439_; lean_object* v_unused_3440_; lean_object* v_unused_3441_; 
v_unused_3437_ = lean_ctor_get(v_tree_3394_, 4);
lean_dec(v_unused_3437_);
v_unused_3438_ = lean_ctor_get(v_tree_3394_, 3);
lean_dec(v_unused_3438_);
v_unused_3439_ = lean_ctor_get(v_tree_3394_, 2);
lean_dec(v_unused_3439_);
v_unused_3440_ = lean_ctor_get(v_tree_3394_, 1);
lean_dec(v_unused_3440_);
v_unused_3441_ = lean_ctor_get(v_tree_3394_, 0);
lean_dec(v_unused_3441_);
v___x_3431_ = v_tree_3394_;
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
else
{
lean_dec(v_tree_3394_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___x_3434_; 
if (v_isShared_3432_ == 0)
{
lean_ctor_set(v___x_3431_, 4, v___x_3429_);
lean_ctor_set(v___x_3431_, 3, v___y_3425_);
lean_ctor_set(v___x_3431_, 2, v_v_3412_);
lean_ctor_set(v___x_3431_, 1, v_k_3411_);
lean_ctor_set(v___x_3431_, 0, v___x_3422_);
v___x_3434_ = v___x_3431_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3435_, 1, v_k_3411_);
lean_ctor_set(v_reuseFailAlloc_3435_, 2, v_v_3412_);
lean_ctor_set(v_reuseFailAlloc_3435_, 3, v___y_3425_);
lean_ctor_set(v_reuseFailAlloc_3435_, 4, v___x_3429_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
}
v___jp_3444_:
{
lean_object* v___x_3446_; lean_object* v___x_3448_; 
v___x_3446_ = lean_nat_add(v___x_3443_, v___y_3445_);
lean_dec(v___y_3445_);
lean_dec(v___x_3443_);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 4, v_l_3413_);
lean_ctor_set(v___x_3391_, 3, v_l_3240_);
lean_ctor_set(v___x_3391_, 2, v_v_3239_);
lean_ctor_set(v___x_3391_, 1, v_k_3238_);
lean_ctor_set(v___x_3391_, 0, v___x_3446_);
v___x_3448_ = v___x_3391_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3452_; 
v_reuseFailAlloc_3452_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3452_, 0, v___x_3446_);
lean_ctor_set(v_reuseFailAlloc_3452_, 1, v_k_3238_);
lean_ctor_set(v_reuseFailAlloc_3452_, 2, v_v_3239_);
lean_ctor_set(v_reuseFailAlloc_3452_, 3, v_l_3240_);
lean_ctor_set(v_reuseFailAlloc_3452_, 4, v_l_3413_);
v___x_3448_ = v_reuseFailAlloc_3452_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
lean_object* v___x_3449_; 
v___x_3449_ = lean_nat_add(v___x_3247_, v_size_3397_);
if (lean_obj_tag(v_r_3414_) == 0)
{
lean_object* v_size_3450_; 
v_size_3450_ = lean_ctor_get(v_r_3414_, 0);
lean_inc(v_size_3450_);
v___y_3424_ = v___x_3449_;
v___y_3425_ = v___x_3448_;
v___y_3426_ = v_size_3450_;
goto v___jp_3423_;
}
else
{
lean_object* v___x_3451_; 
v___x_3451_ = lean_unsigned_to_nat(0u);
v___y_3424_ = v___x_3449_;
v___y_3425_ = v___x_3448_;
v___y_3426_ = v___x_3451_;
goto v___jp_3423_;
}
}
}
}
}
else
{
lean_object* v___x_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3466_; 
v___x_3461_ = lean_nat_add(v___x_3247_, v_size_3237_);
lean_dec(v_size_3237_);
v___x_3462_ = lean_nat_add(v___x_3461_, v_size_3397_);
lean_dec(v___x_3461_);
v___x_3463_ = lean_nat_add(v___x_3247_, v_size_3397_);
v___x_3464_ = lean_nat_add(v___x_3463_, v_size_3410_);
lean_dec(v___x_3463_);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 4, v_tree_3394_);
lean_ctor_set(v___x_3391_, 3, v_r_3241_);
lean_ctor_set(v___x_3391_, 2, v_v_3396_);
lean_ctor_set(v___x_3391_, 1, v_k_3395_);
lean_ctor_set(v___x_3391_, 0, v___x_3464_);
v___x_3466_ = v___x_3391_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3470_; 
v_reuseFailAlloc_3470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3470_, 0, v___x_3464_);
lean_ctor_set(v_reuseFailAlloc_3470_, 1, v_k_3395_);
lean_ctor_set(v_reuseFailAlloc_3470_, 2, v_v_3396_);
lean_ctor_set(v_reuseFailAlloc_3470_, 3, v_r_3241_);
lean_ctor_set(v_reuseFailAlloc_3470_, 4, v_tree_3394_);
v___x_3466_ = v_reuseFailAlloc_3470_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
lean_object* v___x_3468_; 
if (v_isShared_3408_ == 0)
{
lean_ctor_set(v___x_3407_, 4, v___x_3466_);
lean_ctor_set(v___x_3407_, 0, v___x_3462_);
v___x_3468_ = v___x_3407_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v___x_3462_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v_k_3238_);
lean_ctor_set(v_reuseFailAlloc_3469_, 2, v_v_3239_);
lean_ctor_set(v_reuseFailAlloc_3469_, 3, v_l_3240_);
lean_ctor_set(v_reuseFailAlloc_3469_, 4, v___x_3466_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_3240_) == 0)
{
lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3500_; 
lean_inc_ref(v_l_3240_);
lean_inc(v_v_3239_);
lean_inc(v_k_3238_);
lean_inc(v_size_3237_);
v_isSharedCheck_3500_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3500_ == 0)
{
lean_object* v_unused_3501_; lean_object* v_unused_3502_; lean_object* v_unused_3503_; lean_object* v_unused_3504_; lean_object* v_unused_3505_; 
v_unused_3501_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3501_);
v_unused_3502_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3502_);
v_unused_3503_ = lean_ctor_get(v_l_3057_, 2);
lean_dec(v_unused_3503_);
v_unused_3504_ = lean_ctor_get(v_l_3057_, 1);
lean_dec(v_unused_3504_);
v_unused_3505_ = lean_ctor_get(v_l_3057_, 0);
lean_dec(v_unused_3505_);
v___x_3478_ = v_l_3057_;
v_isShared_3479_ = v_isSharedCheck_3500_;
goto v_resetjp_3477_;
}
else
{
lean_dec(v_l_3057_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3500_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
if (lean_obj_tag(v_r_3241_) == 0)
{
lean_object* v_k_3480_; lean_object* v_v_3481_; lean_object* v_size_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3486_; 
v_k_3480_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_k_3480_);
v_v_3481_ = lean_ctor_get(v___x_3393_, 1);
lean_inc(v_v_3481_);
lean_dec_ref(v___x_3393_);
v_size_3482_ = lean_ctor_get(v_r_3241_, 0);
v___x_3483_ = lean_nat_add(v___x_3247_, v_size_3237_);
lean_dec(v_size_3237_);
v___x_3484_ = lean_nat_add(v___x_3247_, v_size_3482_);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 4, v_tree_3394_);
lean_ctor_set(v___x_3391_, 3, v_r_3241_);
lean_ctor_set(v___x_3391_, 2, v_v_3481_);
lean_ctor_set(v___x_3391_, 1, v_k_3480_);
lean_ctor_set(v___x_3391_, 0, v___x_3484_);
v___x_3486_ = v___x_3391_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v___x_3484_);
lean_ctor_set(v_reuseFailAlloc_3490_, 1, v_k_3480_);
lean_ctor_set(v_reuseFailAlloc_3490_, 2, v_v_3481_);
lean_ctor_set(v_reuseFailAlloc_3490_, 3, v_r_3241_);
lean_ctor_set(v_reuseFailAlloc_3490_, 4, v_tree_3394_);
v___x_3486_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3488_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 4, v___x_3486_);
lean_ctor_set(v___x_3478_, 0, v___x_3483_);
v___x_3488_ = v___x_3478_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___x_3483_);
lean_ctor_set(v_reuseFailAlloc_3489_, 1, v_k_3238_);
lean_ctor_set(v_reuseFailAlloc_3489_, 2, v_v_3239_);
lean_ctor_set(v_reuseFailAlloc_3489_, 3, v_l_3240_);
lean_ctor_set(v_reuseFailAlloc_3489_, 4, v___x_3486_);
v___x_3488_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
return v___x_3488_;
}
}
}
else
{
lean_object* v_k_3491_; lean_object* v_v_3492_; lean_object* v___x_3493_; lean_object* v___x_3495_; 
lean_dec(v_size_3237_);
v_k_3491_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_k_3491_);
v_v_3492_ = lean_ctor_get(v___x_3393_, 1);
lean_inc(v_v_3492_);
lean_dec_ref(v___x_3393_);
v___x_3493_ = lean_unsigned_to_nat(3u);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 4, v_r_3241_);
lean_ctor_set(v___x_3391_, 3, v_r_3241_);
lean_ctor_set(v___x_3391_, 2, v_v_3492_);
lean_ctor_set(v___x_3391_, 1, v_k_3491_);
lean_ctor_set(v___x_3391_, 0, v___x_3247_);
v___x_3495_ = v___x_3391_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3499_, 1, v_k_3491_);
lean_ctor_set(v_reuseFailAlloc_3499_, 2, v_v_3492_);
lean_ctor_set(v_reuseFailAlloc_3499_, 3, v_r_3241_);
lean_ctor_set(v_reuseFailAlloc_3499_, 4, v_r_3241_);
v___x_3495_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
lean_object* v___x_3497_; 
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 4, v___x_3495_);
lean_ctor_set(v___x_3478_, 0, v___x_3493_);
v___x_3497_ = v___x_3478_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v___x_3493_);
lean_ctor_set(v_reuseFailAlloc_3498_, 1, v_k_3238_);
lean_ctor_set(v_reuseFailAlloc_3498_, 2, v_v_3239_);
lean_ctor_set(v_reuseFailAlloc_3498_, 3, v_l_3240_);
lean_ctor_set(v_reuseFailAlloc_3498_, 4, v___x_3495_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_3241_) == 0)
{
lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3530_; 
lean_inc(v_l_3240_);
lean_inc(v_v_3239_);
lean_inc(v_k_3238_);
v_isSharedCheck_3530_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3530_ == 0)
{
lean_object* v_unused_3531_; lean_object* v_unused_3532_; lean_object* v_unused_3533_; lean_object* v_unused_3534_; lean_object* v_unused_3535_; 
v_unused_3531_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3531_);
v_unused_3532_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3532_);
v_unused_3533_ = lean_ctor_get(v_l_3057_, 2);
lean_dec(v_unused_3533_);
v_unused_3534_ = lean_ctor_get(v_l_3057_, 1);
lean_dec(v_unused_3534_);
v_unused_3535_ = lean_ctor_get(v_l_3057_, 0);
lean_dec(v_unused_3535_);
v___x_3507_ = v_l_3057_;
v_isShared_3508_ = v_isSharedCheck_3530_;
goto v_resetjp_3506_;
}
else
{
lean_dec(v_l_3057_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3530_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v_k_3509_; lean_object* v_v_3510_; lean_object* v_k_3511_; lean_object* v_v_3512_; lean_object* v___x_3514_; uint8_t v_isShared_3515_; uint8_t v_isSharedCheck_3526_; 
v_k_3509_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_k_3509_);
v_v_3510_ = lean_ctor_get(v___x_3393_, 1);
lean_inc(v_v_3510_);
lean_dec_ref(v___x_3393_);
v_k_3511_ = lean_ctor_get(v_r_3241_, 1);
v_v_3512_ = lean_ctor_get(v_r_3241_, 2);
v_isSharedCheck_3526_ = !lean_is_exclusive(v_r_3241_);
if (v_isSharedCheck_3526_ == 0)
{
lean_object* v_unused_3527_; lean_object* v_unused_3528_; lean_object* v_unused_3529_; 
v_unused_3527_ = lean_ctor_get(v_r_3241_, 4);
lean_dec(v_unused_3527_);
v_unused_3528_ = lean_ctor_get(v_r_3241_, 3);
lean_dec(v_unused_3528_);
v_unused_3529_ = lean_ctor_get(v_r_3241_, 0);
lean_dec(v_unused_3529_);
v___x_3514_ = v_r_3241_;
v_isShared_3515_ = v_isSharedCheck_3526_;
goto v_resetjp_3513_;
}
else
{
lean_inc(v_v_3512_);
lean_inc(v_k_3511_);
lean_dec(v_r_3241_);
v___x_3514_ = lean_box(0);
v_isShared_3515_ = v_isSharedCheck_3526_;
goto v_resetjp_3513_;
}
v_resetjp_3513_:
{
lean_object* v___x_3516_; lean_object* v___x_3518_; 
v___x_3516_ = lean_unsigned_to_nat(3u);
if (v_isShared_3515_ == 0)
{
lean_ctor_set(v___x_3514_, 4, v_l_3240_);
lean_ctor_set(v___x_3514_, 3, v_l_3240_);
lean_ctor_set(v___x_3514_, 2, v_v_3239_);
lean_ctor_set(v___x_3514_, 1, v_k_3238_);
lean_ctor_set(v___x_3514_, 0, v___x_3247_);
v___x_3518_ = v___x_3514_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3525_; 
v_reuseFailAlloc_3525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3525_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3525_, 1, v_k_3238_);
lean_ctor_set(v_reuseFailAlloc_3525_, 2, v_v_3239_);
lean_ctor_set(v_reuseFailAlloc_3525_, 3, v_l_3240_);
lean_ctor_set(v_reuseFailAlloc_3525_, 4, v_l_3240_);
v___x_3518_ = v_reuseFailAlloc_3525_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
lean_object* v___x_3520_; 
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 4, v_l_3240_);
lean_ctor_set(v___x_3391_, 3, v_l_3240_);
lean_ctor_set(v___x_3391_, 2, v_v_3510_);
lean_ctor_set(v___x_3391_, 1, v_k_3509_);
lean_ctor_set(v___x_3391_, 0, v___x_3247_);
v___x_3520_ = v___x_3391_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3524_; 
v_reuseFailAlloc_3524_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3524_, 0, v___x_3247_);
lean_ctor_set(v_reuseFailAlloc_3524_, 1, v_k_3509_);
lean_ctor_set(v_reuseFailAlloc_3524_, 2, v_v_3510_);
lean_ctor_set(v_reuseFailAlloc_3524_, 3, v_l_3240_);
lean_ctor_set(v_reuseFailAlloc_3524_, 4, v_l_3240_);
v___x_3520_ = v_reuseFailAlloc_3524_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
lean_object* v___x_3522_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 4, v___x_3520_);
lean_ctor_set(v___x_3507_, 3, v___x_3518_);
lean_ctor_set(v___x_3507_, 2, v_v_3512_);
lean_ctor_set(v___x_3507_, 1, v_k_3511_);
lean_ctor_set(v___x_3507_, 0, v___x_3516_);
v___x_3522_ = v___x_3507_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v___x_3516_);
lean_ctor_set(v_reuseFailAlloc_3523_, 1, v_k_3511_);
lean_ctor_set(v_reuseFailAlloc_3523_, 2, v_v_3512_);
lean_ctor_set(v_reuseFailAlloc_3523_, 3, v___x_3518_);
lean_ctor_set(v_reuseFailAlloc_3523_, 4, v___x_3520_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
}
}
}
}
else
{
lean_object* v_k_3536_; lean_object* v_v_3537_; lean_object* v___x_3538_; lean_object* v___x_3540_; 
v_k_3536_ = lean_ctor_get(v___x_3393_, 0);
lean_inc(v_k_3536_);
v_v_3537_ = lean_ctor_get(v___x_3393_, 1);
lean_inc(v_v_3537_);
lean_dec_ref(v___x_3393_);
v___x_3538_ = lean_unsigned_to_nat(2u);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 4, v_r_3241_);
lean_ctor_set(v___x_3391_, 3, v_l_3057_);
lean_ctor_set(v___x_3391_, 2, v_v_3537_);
lean_ctor_set(v___x_3391_, 1, v_k_3536_);
lean_ctor_set(v___x_3391_, 0, v___x_3538_);
v___x_3540_ = v___x_3391_;
goto v_reusejp_3539_;
}
else
{
lean_object* v_reuseFailAlloc_3541_; 
v_reuseFailAlloc_3541_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3541_, 0, v___x_3538_);
lean_ctor_set(v_reuseFailAlloc_3541_, 1, v_k_3536_);
lean_ctor_set(v_reuseFailAlloc_3541_, 2, v_v_3537_);
lean_ctor_set(v_reuseFailAlloc_3541_, 3, v_l_3057_);
lean_ctor_set(v_reuseFailAlloc_3541_, 4, v_r_3241_);
v___x_3540_ = v_reuseFailAlloc_3541_;
goto v_reusejp_3539_;
}
v_reusejp_3539_:
{
return v___x_3540_;
}
}
}
}
}
}
}
else
{
return v_l_3057_;
}
}
else
{
return v_r_3058_;
}
}
default: 
{
lean_object* v_impl_3548_; lean_object* v___x_3549_; 
v_impl_3548_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3053_, v_r_3058_);
v___x_3549_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_3548_) == 0)
{
if (lean_obj_tag(v_l_3057_) == 0)
{
lean_object* v_size_3550_; lean_object* v_size_3551_; lean_object* v_k_3552_; lean_object* v_v_3553_; lean_object* v_l_3554_; lean_object* v_r_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; uint8_t v___x_3558_; 
v_size_3550_ = lean_ctor_get(v_impl_3548_, 0);
lean_inc(v_size_3550_);
v_size_3551_ = lean_ctor_get(v_l_3057_, 0);
v_k_3552_ = lean_ctor_get(v_l_3057_, 1);
v_v_3553_ = lean_ctor_get(v_l_3057_, 2);
v_l_3554_ = lean_ctor_get(v_l_3057_, 3);
v_r_3555_ = lean_ctor_get(v_l_3057_, 4);
lean_inc(v_r_3555_);
v___x_3556_ = lean_unsigned_to_nat(3u);
v___x_3557_ = lean_nat_mul(v___x_3556_, v_size_3550_);
v___x_3558_ = lean_nat_dec_lt(v___x_3557_, v_size_3551_);
lean_dec(v___x_3557_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3562_; 
lean_dec(v_r_3555_);
v___x_3559_ = lean_nat_add(v___x_3549_, v_size_3551_);
v___x_3560_ = lean_nat_add(v___x_3559_, v_size_3550_);
lean_dec(v_size_3550_);
lean_dec(v___x_3559_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_impl_3548_);
lean_ctor_set(v___x_3060_, 0, v___x_3560_);
v___x_3562_ = v___x_3060_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v___x_3560_);
lean_ctor_set(v_reuseFailAlloc_3563_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3563_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3563_, 3, v_l_3057_);
lean_ctor_set(v_reuseFailAlloc_3563_, 4, v_impl_3548_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
else
{
lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3629_; 
lean_inc(v_l_3554_);
lean_inc(v_v_3553_);
lean_inc(v_k_3552_);
lean_inc(v_size_3551_);
v_isSharedCheck_3629_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3629_ == 0)
{
lean_object* v_unused_3630_; lean_object* v_unused_3631_; lean_object* v_unused_3632_; lean_object* v_unused_3633_; lean_object* v_unused_3634_; 
v_unused_3630_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3630_);
v_unused_3631_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3631_);
v_unused_3632_ = lean_ctor_get(v_l_3057_, 2);
lean_dec(v_unused_3632_);
v_unused_3633_ = lean_ctor_get(v_l_3057_, 1);
lean_dec(v_unused_3633_);
v_unused_3634_ = lean_ctor_get(v_l_3057_, 0);
lean_dec(v_unused_3634_);
v___x_3565_ = v_l_3057_;
v_isShared_3566_ = v_isSharedCheck_3629_;
goto v_resetjp_3564_;
}
else
{
lean_dec(v_l_3057_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3629_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v_size_3567_; lean_object* v_size_3568_; lean_object* v_k_3569_; lean_object* v_v_3570_; lean_object* v_l_3571_; lean_object* v_r_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; uint8_t v___x_3575_; 
v_size_3567_ = lean_ctor_get(v_l_3554_, 0);
v_size_3568_ = lean_ctor_get(v_r_3555_, 0);
v_k_3569_ = lean_ctor_get(v_r_3555_, 1);
v_v_3570_ = lean_ctor_get(v_r_3555_, 2);
v_l_3571_ = lean_ctor_get(v_r_3555_, 3);
v_r_3572_ = lean_ctor_get(v_r_3555_, 4);
v___x_3573_ = lean_unsigned_to_nat(2u);
v___x_3574_ = lean_nat_mul(v___x_3573_, v_size_3567_);
v___x_3575_ = lean_nat_dec_lt(v_size_3568_, v___x_3574_);
lean_dec(v___x_3574_);
if (v___x_3575_ == 0)
{
lean_object* v___x_3577_; uint8_t v_isShared_3578_; uint8_t v_isSharedCheck_3604_; 
lean_inc(v_r_3572_);
lean_inc(v_l_3571_);
lean_inc(v_v_3570_);
lean_inc(v_k_3569_);
v_isSharedCheck_3604_ = !lean_is_exclusive(v_r_3555_);
if (v_isSharedCheck_3604_ == 0)
{
lean_object* v_unused_3605_; lean_object* v_unused_3606_; lean_object* v_unused_3607_; lean_object* v_unused_3608_; lean_object* v_unused_3609_; 
v_unused_3605_ = lean_ctor_get(v_r_3555_, 4);
lean_dec(v_unused_3605_);
v_unused_3606_ = lean_ctor_get(v_r_3555_, 3);
lean_dec(v_unused_3606_);
v_unused_3607_ = lean_ctor_get(v_r_3555_, 2);
lean_dec(v_unused_3607_);
v_unused_3608_ = lean_ctor_get(v_r_3555_, 1);
lean_dec(v_unused_3608_);
v_unused_3609_ = lean_ctor_get(v_r_3555_, 0);
lean_dec(v_unused_3609_);
v___x_3577_ = v_r_3555_;
v_isShared_3578_ = v_isSharedCheck_3604_;
goto v_resetjp_3576_;
}
else
{
lean_dec(v_r_3555_);
v___x_3577_ = lean_box(0);
v_isShared_3578_ = v_isSharedCheck_3604_;
goto v_resetjp_3576_;
}
v_resetjp_3576_:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___x_3592_; lean_object* v___y_3594_; 
v___x_3579_ = lean_nat_add(v___x_3549_, v_size_3551_);
lean_dec(v_size_3551_);
v___x_3580_ = lean_nat_add(v___x_3579_, v_size_3550_);
lean_dec(v___x_3579_);
v___x_3592_ = lean_nat_add(v___x_3549_, v_size_3567_);
if (lean_obj_tag(v_l_3571_) == 0)
{
lean_object* v_size_3602_; 
v_size_3602_ = lean_ctor_get(v_l_3571_, 0);
lean_inc(v_size_3602_);
v___y_3594_ = v_size_3602_;
goto v___jp_3593_;
}
else
{
lean_object* v___x_3603_; 
v___x_3603_ = lean_unsigned_to_nat(0u);
v___y_3594_ = v___x_3603_;
goto v___jp_3593_;
}
v___jp_3581_:
{
lean_object* v___x_3585_; lean_object* v___x_3587_; 
v___x_3585_ = lean_nat_add(v___y_3582_, v___y_3584_);
lean_dec(v___y_3584_);
lean_dec(v___y_3582_);
if (v_isShared_3578_ == 0)
{
lean_ctor_set(v___x_3577_, 4, v_impl_3548_);
lean_ctor_set(v___x_3577_, 3, v_r_3572_);
lean_ctor_set(v___x_3577_, 2, v_v_3056_);
lean_ctor_set(v___x_3577_, 1, v_k_3055_);
lean_ctor_set(v___x_3577_, 0, v___x_3585_);
v___x_3587_ = v___x_3577_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3591_; 
v_reuseFailAlloc_3591_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3591_, 0, v___x_3585_);
lean_ctor_set(v_reuseFailAlloc_3591_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3591_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3591_, 3, v_r_3572_);
lean_ctor_set(v_reuseFailAlloc_3591_, 4, v_impl_3548_);
v___x_3587_ = v_reuseFailAlloc_3591_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
lean_object* v___x_3589_; 
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 4, v___x_3587_);
lean_ctor_set(v___x_3565_, 3, v___y_3583_);
lean_ctor_set(v___x_3565_, 2, v_v_3570_);
lean_ctor_set(v___x_3565_, 1, v_k_3569_);
lean_ctor_set(v___x_3565_, 0, v___x_3580_);
v___x_3589_ = v___x_3565_;
goto v_reusejp_3588_;
}
else
{
lean_object* v_reuseFailAlloc_3590_; 
v_reuseFailAlloc_3590_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3590_, 0, v___x_3580_);
lean_ctor_set(v_reuseFailAlloc_3590_, 1, v_k_3569_);
lean_ctor_set(v_reuseFailAlloc_3590_, 2, v_v_3570_);
lean_ctor_set(v_reuseFailAlloc_3590_, 3, v___y_3583_);
lean_ctor_set(v_reuseFailAlloc_3590_, 4, v___x_3587_);
v___x_3589_ = v_reuseFailAlloc_3590_;
goto v_reusejp_3588_;
}
v_reusejp_3588_:
{
return v___x_3589_;
}
}
}
v___jp_3593_:
{
lean_object* v___x_3595_; lean_object* v___x_3597_; 
v___x_3595_ = lean_nat_add(v___x_3592_, v___y_3594_);
lean_dec(v___y_3594_);
lean_dec(v___x_3592_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_l_3571_);
lean_ctor_set(v___x_3060_, 3, v_l_3554_);
lean_ctor_set(v___x_3060_, 2, v_v_3553_);
lean_ctor_set(v___x_3060_, 1, v_k_3552_);
lean_ctor_set(v___x_3060_, 0, v___x_3595_);
v___x_3597_ = v___x_3060_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v___x_3595_);
lean_ctor_set(v_reuseFailAlloc_3601_, 1, v_k_3552_);
lean_ctor_set(v_reuseFailAlloc_3601_, 2, v_v_3553_);
lean_ctor_set(v_reuseFailAlloc_3601_, 3, v_l_3554_);
lean_ctor_set(v_reuseFailAlloc_3601_, 4, v_l_3571_);
v___x_3597_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
lean_object* v___x_3598_; 
v___x_3598_ = lean_nat_add(v___x_3549_, v_size_3550_);
lean_dec(v_size_3550_);
if (lean_obj_tag(v_r_3572_) == 0)
{
lean_object* v_size_3599_; 
v_size_3599_ = lean_ctor_get(v_r_3572_, 0);
lean_inc(v_size_3599_);
v___y_3582_ = v___x_3598_;
v___y_3583_ = v___x_3597_;
v___y_3584_ = v_size_3599_;
goto v___jp_3581_;
}
else
{
lean_object* v___x_3600_; 
v___x_3600_ = lean_unsigned_to_nat(0u);
v___y_3582_ = v___x_3598_;
v___y_3583_ = v___x_3597_;
v___y_3584_ = v___x_3600_;
goto v___jp_3581_;
}
}
}
}
}
else
{
lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3615_; 
lean_del_object(v___x_3060_);
v___x_3610_ = lean_nat_add(v___x_3549_, v_size_3551_);
lean_dec(v_size_3551_);
v___x_3611_ = lean_nat_add(v___x_3610_, v_size_3550_);
lean_dec(v___x_3610_);
v___x_3612_ = lean_nat_add(v___x_3549_, v_size_3550_);
lean_dec(v_size_3550_);
v___x_3613_ = lean_nat_add(v___x_3612_, v_size_3568_);
lean_dec(v___x_3612_);
lean_inc_ref(v_impl_3548_);
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 4, v_impl_3548_);
lean_ctor_set(v___x_3565_, 3, v_r_3555_);
lean_ctor_set(v___x_3565_, 2, v_v_3056_);
lean_ctor_set(v___x_3565_, 1, v_k_3055_);
lean_ctor_set(v___x_3565_, 0, v___x_3613_);
v___x_3615_ = v___x_3565_;
goto v_reusejp_3614_;
}
else
{
lean_object* v_reuseFailAlloc_3628_; 
v_reuseFailAlloc_3628_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3628_, 0, v___x_3613_);
lean_ctor_set(v_reuseFailAlloc_3628_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3628_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3628_, 3, v_r_3555_);
lean_ctor_set(v_reuseFailAlloc_3628_, 4, v_impl_3548_);
v___x_3615_ = v_reuseFailAlloc_3628_;
goto v_reusejp_3614_;
}
v_reusejp_3614_:
{
lean_object* v___x_3617_; uint8_t v_isShared_3618_; uint8_t v_isSharedCheck_3622_; 
v_isSharedCheck_3622_ = !lean_is_exclusive(v_impl_3548_);
if (v_isSharedCheck_3622_ == 0)
{
lean_object* v_unused_3623_; lean_object* v_unused_3624_; lean_object* v_unused_3625_; lean_object* v_unused_3626_; lean_object* v_unused_3627_; 
v_unused_3623_ = lean_ctor_get(v_impl_3548_, 4);
lean_dec(v_unused_3623_);
v_unused_3624_ = lean_ctor_get(v_impl_3548_, 3);
lean_dec(v_unused_3624_);
v_unused_3625_ = lean_ctor_get(v_impl_3548_, 2);
lean_dec(v_unused_3625_);
v_unused_3626_ = lean_ctor_get(v_impl_3548_, 1);
lean_dec(v_unused_3626_);
v_unused_3627_ = lean_ctor_get(v_impl_3548_, 0);
lean_dec(v_unused_3627_);
v___x_3617_ = v_impl_3548_;
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
else
{
lean_dec(v_impl_3548_);
v___x_3617_ = lean_box(0);
v_isShared_3618_ = v_isSharedCheck_3622_;
goto v_resetjp_3616_;
}
v_resetjp_3616_:
{
lean_object* v___x_3620_; 
if (v_isShared_3618_ == 0)
{
lean_ctor_set(v___x_3617_, 4, v___x_3615_);
lean_ctor_set(v___x_3617_, 3, v_l_3554_);
lean_ctor_set(v___x_3617_, 2, v_v_3553_);
lean_ctor_set(v___x_3617_, 1, v_k_3552_);
lean_ctor_set(v___x_3617_, 0, v___x_3611_);
v___x_3620_ = v___x_3617_;
goto v_reusejp_3619_;
}
else
{
lean_object* v_reuseFailAlloc_3621_; 
v_reuseFailAlloc_3621_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3621_, 0, v___x_3611_);
lean_ctor_set(v_reuseFailAlloc_3621_, 1, v_k_3552_);
lean_ctor_set(v_reuseFailAlloc_3621_, 2, v_v_3553_);
lean_ctor_set(v_reuseFailAlloc_3621_, 3, v_l_3554_);
lean_ctor_set(v_reuseFailAlloc_3621_, 4, v___x_3615_);
v___x_3620_ = v_reuseFailAlloc_3621_;
goto v_reusejp_3619_;
}
v_reusejp_3619_:
{
return v___x_3620_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_3635_; lean_object* v___x_3636_; lean_object* v___x_3638_; 
v_size_3635_ = lean_ctor_get(v_impl_3548_, 0);
lean_inc(v_size_3635_);
v___x_3636_ = lean_nat_add(v___x_3549_, v_size_3635_);
lean_dec(v_size_3635_);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_impl_3548_);
lean_ctor_set(v___x_3060_, 0, v___x_3636_);
v___x_3638_ = v___x_3060_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3636_);
lean_ctor_set(v_reuseFailAlloc_3639_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3639_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3639_, 3, v_l_3057_);
lean_ctor_set(v_reuseFailAlloc_3639_, 4, v_impl_3548_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
else
{
if (lean_obj_tag(v_l_3057_) == 0)
{
lean_object* v_l_3640_; 
v_l_3640_ = lean_ctor_get(v_l_3057_, 3);
if (lean_obj_tag(v_l_3640_) == 0)
{
lean_object* v_r_3641_; 
lean_inc_ref(v_l_3640_);
v_r_3641_ = lean_ctor_get(v_l_3057_, 4);
lean_inc(v_r_3641_);
if (lean_obj_tag(v_r_3641_) == 0)
{
lean_object* v_size_3642_; lean_object* v_k_3643_; lean_object* v_v_3644_; lean_object* v___x_3646_; uint8_t v_isShared_3647_; uint8_t v_isSharedCheck_3657_; 
v_size_3642_ = lean_ctor_get(v_l_3057_, 0);
v_k_3643_ = lean_ctor_get(v_l_3057_, 1);
v_v_3644_ = lean_ctor_get(v_l_3057_, 2);
v_isSharedCheck_3657_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3657_ == 0)
{
lean_object* v_unused_3658_; lean_object* v_unused_3659_; 
v_unused_3658_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3658_);
v_unused_3659_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3659_);
v___x_3646_ = v_l_3057_;
v_isShared_3647_ = v_isSharedCheck_3657_;
goto v_resetjp_3645_;
}
else
{
lean_inc(v_v_3644_);
lean_inc(v_k_3643_);
lean_inc(v_size_3642_);
lean_dec(v_l_3057_);
v___x_3646_ = lean_box(0);
v_isShared_3647_ = v_isSharedCheck_3657_;
goto v_resetjp_3645_;
}
v_resetjp_3645_:
{
lean_object* v_size_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3652_; 
v_size_3648_ = lean_ctor_get(v_r_3641_, 0);
v___x_3649_ = lean_nat_add(v___x_3549_, v_size_3642_);
lean_dec(v_size_3642_);
v___x_3650_ = lean_nat_add(v___x_3549_, v_size_3648_);
if (v_isShared_3647_ == 0)
{
lean_ctor_set(v___x_3646_, 4, v_impl_3548_);
lean_ctor_set(v___x_3646_, 3, v_r_3641_);
lean_ctor_set(v___x_3646_, 2, v_v_3056_);
lean_ctor_set(v___x_3646_, 1, v_k_3055_);
lean_ctor_set(v___x_3646_, 0, v___x_3650_);
v___x_3652_ = v___x_3646_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v___x_3650_);
lean_ctor_set(v_reuseFailAlloc_3656_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3656_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3656_, 3, v_r_3641_);
lean_ctor_set(v_reuseFailAlloc_3656_, 4, v_impl_3548_);
v___x_3652_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
lean_object* v___x_3654_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v___x_3652_);
lean_ctor_set(v___x_3060_, 3, v_l_3640_);
lean_ctor_set(v___x_3060_, 2, v_v_3644_);
lean_ctor_set(v___x_3060_, 1, v_k_3643_);
lean_ctor_set(v___x_3060_, 0, v___x_3649_);
v___x_3654_ = v___x_3060_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3649_);
lean_ctor_set(v_reuseFailAlloc_3655_, 1, v_k_3643_);
lean_ctor_set(v_reuseFailAlloc_3655_, 2, v_v_3644_);
lean_ctor_set(v_reuseFailAlloc_3655_, 3, v_l_3640_);
lean_ctor_set(v_reuseFailAlloc_3655_, 4, v___x_3652_);
v___x_3654_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
return v___x_3654_;
}
}
}
}
else
{
lean_object* v_k_3660_; lean_object* v_v_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3672_; 
v_k_3660_ = lean_ctor_get(v_l_3057_, 1);
v_v_3661_ = lean_ctor_get(v_l_3057_, 2);
v_isSharedCheck_3672_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3672_ == 0)
{
lean_object* v_unused_3673_; lean_object* v_unused_3674_; lean_object* v_unused_3675_; 
v_unused_3673_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3673_);
v_unused_3674_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3674_);
v_unused_3675_ = lean_ctor_get(v_l_3057_, 0);
lean_dec(v_unused_3675_);
v___x_3663_ = v_l_3057_;
v_isShared_3664_ = v_isSharedCheck_3672_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_v_3661_);
lean_inc(v_k_3660_);
lean_dec(v_l_3057_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3672_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3665_; lean_object* v___x_3667_; 
v___x_3665_ = lean_unsigned_to_nat(3u);
if (v_isShared_3664_ == 0)
{
lean_ctor_set(v___x_3663_, 3, v_r_3641_);
lean_ctor_set(v___x_3663_, 2, v_v_3056_);
lean_ctor_set(v___x_3663_, 1, v_k_3055_);
lean_ctor_set(v___x_3663_, 0, v___x_3549_);
v___x_3667_ = v___x_3663_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3671_; 
v_reuseFailAlloc_3671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3671_, 0, v___x_3549_);
lean_ctor_set(v_reuseFailAlloc_3671_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3671_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3671_, 3, v_r_3641_);
lean_ctor_set(v_reuseFailAlloc_3671_, 4, v_r_3641_);
v___x_3667_ = v_reuseFailAlloc_3671_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3669_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v___x_3667_);
lean_ctor_set(v___x_3060_, 3, v_l_3640_);
lean_ctor_set(v___x_3060_, 2, v_v_3661_);
lean_ctor_set(v___x_3060_, 1, v_k_3660_);
lean_ctor_set(v___x_3060_, 0, v___x_3665_);
v___x_3669_ = v___x_3060_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v___x_3665_);
lean_ctor_set(v_reuseFailAlloc_3670_, 1, v_k_3660_);
lean_ctor_set(v_reuseFailAlloc_3670_, 2, v_v_3661_);
lean_ctor_set(v_reuseFailAlloc_3670_, 3, v_l_3640_);
lean_ctor_set(v_reuseFailAlloc_3670_, 4, v___x_3667_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
}
else
{
lean_object* v_r_3676_; 
v_r_3676_ = lean_ctor_get(v_l_3057_, 4);
lean_inc(v_r_3676_);
if (lean_obj_tag(v_r_3676_) == 0)
{
lean_object* v_k_3677_; lean_object* v_v_3678_; lean_object* v___x_3680_; uint8_t v_isShared_3681_; uint8_t v_isSharedCheck_3701_; 
lean_inc(v_l_3640_);
v_k_3677_ = lean_ctor_get(v_l_3057_, 1);
v_v_3678_ = lean_ctor_get(v_l_3057_, 2);
v_isSharedCheck_3701_ = !lean_is_exclusive(v_l_3057_);
if (v_isSharedCheck_3701_ == 0)
{
lean_object* v_unused_3702_; lean_object* v_unused_3703_; lean_object* v_unused_3704_; 
v_unused_3702_ = lean_ctor_get(v_l_3057_, 4);
lean_dec(v_unused_3702_);
v_unused_3703_ = lean_ctor_get(v_l_3057_, 3);
lean_dec(v_unused_3703_);
v_unused_3704_ = lean_ctor_get(v_l_3057_, 0);
lean_dec(v_unused_3704_);
v___x_3680_ = v_l_3057_;
v_isShared_3681_ = v_isSharedCheck_3701_;
goto v_resetjp_3679_;
}
else
{
lean_inc(v_v_3678_);
lean_inc(v_k_3677_);
lean_dec(v_l_3057_);
v___x_3680_ = lean_box(0);
v_isShared_3681_ = v_isSharedCheck_3701_;
goto v_resetjp_3679_;
}
v_resetjp_3679_:
{
lean_object* v_k_3682_; lean_object* v_v_3683_; lean_object* v___x_3685_; uint8_t v_isShared_3686_; uint8_t v_isSharedCheck_3697_; 
v_k_3682_ = lean_ctor_get(v_r_3676_, 1);
v_v_3683_ = lean_ctor_get(v_r_3676_, 2);
v_isSharedCheck_3697_ = !lean_is_exclusive(v_r_3676_);
if (v_isSharedCheck_3697_ == 0)
{
lean_object* v_unused_3698_; lean_object* v_unused_3699_; lean_object* v_unused_3700_; 
v_unused_3698_ = lean_ctor_get(v_r_3676_, 4);
lean_dec(v_unused_3698_);
v_unused_3699_ = lean_ctor_get(v_r_3676_, 3);
lean_dec(v_unused_3699_);
v_unused_3700_ = lean_ctor_get(v_r_3676_, 0);
lean_dec(v_unused_3700_);
v___x_3685_ = v_r_3676_;
v_isShared_3686_ = v_isSharedCheck_3697_;
goto v_resetjp_3684_;
}
else
{
lean_inc(v_v_3683_);
lean_inc(v_k_3682_);
lean_dec(v_r_3676_);
v___x_3685_ = lean_box(0);
v_isShared_3686_ = v_isSharedCheck_3697_;
goto v_resetjp_3684_;
}
v_resetjp_3684_:
{
lean_object* v___x_3687_; lean_object* v___x_3689_; 
v___x_3687_ = lean_unsigned_to_nat(3u);
if (v_isShared_3686_ == 0)
{
lean_ctor_set(v___x_3685_, 4, v_l_3640_);
lean_ctor_set(v___x_3685_, 3, v_l_3640_);
lean_ctor_set(v___x_3685_, 2, v_v_3678_);
lean_ctor_set(v___x_3685_, 1, v_k_3677_);
lean_ctor_set(v___x_3685_, 0, v___x_3549_);
v___x_3689_ = v___x_3685_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v___x_3549_);
lean_ctor_set(v_reuseFailAlloc_3696_, 1, v_k_3677_);
lean_ctor_set(v_reuseFailAlloc_3696_, 2, v_v_3678_);
lean_ctor_set(v_reuseFailAlloc_3696_, 3, v_l_3640_);
lean_ctor_set(v_reuseFailAlloc_3696_, 4, v_l_3640_);
v___x_3689_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
lean_object* v___x_3691_; 
if (v_isShared_3681_ == 0)
{
lean_ctor_set(v___x_3680_, 4, v_l_3640_);
lean_ctor_set(v___x_3680_, 2, v_v_3056_);
lean_ctor_set(v___x_3680_, 1, v_k_3055_);
lean_ctor_set(v___x_3680_, 0, v___x_3549_);
v___x_3691_ = v___x_3680_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3695_; 
v_reuseFailAlloc_3695_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3695_, 0, v___x_3549_);
lean_ctor_set(v_reuseFailAlloc_3695_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3695_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3695_, 3, v_l_3640_);
lean_ctor_set(v_reuseFailAlloc_3695_, 4, v_l_3640_);
v___x_3691_ = v_reuseFailAlloc_3695_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
lean_object* v___x_3693_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v___x_3691_);
lean_ctor_set(v___x_3060_, 3, v___x_3689_);
lean_ctor_set(v___x_3060_, 2, v_v_3683_);
lean_ctor_set(v___x_3060_, 1, v_k_3682_);
lean_ctor_set(v___x_3060_, 0, v___x_3687_);
v___x_3693_ = v___x_3060_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3687_);
lean_ctor_set(v_reuseFailAlloc_3694_, 1, v_k_3682_);
lean_ctor_set(v_reuseFailAlloc_3694_, 2, v_v_3683_);
lean_ctor_set(v_reuseFailAlloc_3694_, 3, v___x_3689_);
lean_ctor_set(v_reuseFailAlloc_3694_, 4, v___x_3691_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
}
}
}
else
{
lean_object* v___x_3705_; lean_object* v___x_3707_; 
v___x_3705_ = lean_unsigned_to_nat(2u);
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_r_3676_);
lean_ctor_set(v___x_3060_, 0, v___x_3705_);
v___x_3707_ = v___x_3060_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3705_);
lean_ctor_set(v_reuseFailAlloc_3708_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3708_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3708_, 3, v_l_3057_);
lean_ctor_set(v_reuseFailAlloc_3708_, 4, v_r_3676_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
}
}
else
{
lean_object* v___x_3710_; 
if (v_isShared_3061_ == 0)
{
lean_ctor_set(v___x_3060_, 4, v_l_3057_);
lean_ctor_set(v___x_3060_, 0, v___x_3549_);
v___x_3710_ = v___x_3060_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3549_);
lean_ctor_set(v_reuseFailAlloc_3711_, 1, v_k_3055_);
lean_ctor_set(v_reuseFailAlloc_3711_, 2, v_v_3056_);
lean_ctor_set(v_reuseFailAlloc_3711_, 3, v_l_3057_);
lean_ctor_set(v_reuseFailAlloc_3711_, 4, v_l_3057_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
}
}
}
else
{
return v_t_3054_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg___boxed(lean_object* v_k_3714_, lean_object* v_t_3715_){
_start:
{
lean_object* v_res_3716_; 
v_res_3716_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3714_, v_t_3715_);
lean_dec(v_k_3714_);
return v_res_3716_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(lean_object* v_declName_3717_, lean_object* v_x_3718_){
_start:
{
lean_object* v___x_3719_; 
v___x_3719_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_declName_3717_, v_x_3718_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed(lean_object* v_declName_3720_, lean_object* v_x_3721_){
_start:
{
lean_object* v_res_3722_; 
v_res_3722_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0(v_declName_3720_, v_x_3721_);
lean_dec(v_declName_3720_);
return v_res_3722_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3723_; 
v___x_3723_ = lean_mk_string_unchecked("invalid doc string removal, declaration `", 41, 41);
return v___x_3723_;
}
}
static lean_object* _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1(void){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3724_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__0);
v___x_3725_ = l_Lean_stringToMessageData(v___x_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(lean_object* v_declName_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_){
_start:
{
lean_object* v___x_3734_; lean_object* v_env_3735_; lean_object* v___f_3736_; lean_object* v___y_3738_; lean_object* v___y_3739_; lean_object* v___x_3781_; 
v___x_3734_ = lean_st_ref_get(v___y_3732_);
v_env_3735_ = lean_ctor_get(v___x_3734_, 0);
lean_inc_ref(v_env_3735_);
lean_dec(v___x_3734_);
lean_inc(v_declName_3726_);
v___f_3736_ = lean_alloc_closure((void*)(l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3736_, 0, v_declName_3726_);
v___x_3781_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3735_, v_declName_3726_);
lean_dec_ref(v_env_3735_);
if (lean_obj_tag(v___x_3781_) == 0)
{
lean_dec(v_declName_3726_);
v___y_3738_ = v___y_3730_;
v___y_3739_ = v___y_3732_;
goto v___jp_3737_;
}
else
{
uint8_t v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; 
lean_dec_ref(v___x_3781_);
lean_dec_ref(v___f_3736_);
v___x_3782_ = 0;
v___x_3783_ = lean_obj_once(&l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1, &l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1_once, _init_l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___closed__1);
v___x_3784_ = l_Lean_MessageData_ofConstName(v_declName_3726_, v___x_3782_);
v___x_3785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3783_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = lean_obj_once(&l_Lean_addMarkdownDocString___redArg___lam__5___closed__3, &l_Lean_addMarkdownDocString___redArg___lam__5___closed__3_once, _init_l_Lean_addMarkdownDocString___redArg___lam__5___closed__3);
v___x_3787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3785_);
lean_ctor_set(v___x_3787_, 1, v___x_3786_);
v___x_3788_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3787_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
return v___x_3788_;
}
v___jp_3737_:
{
lean_object* v___x_3740_; lean_object* v_env_3741_; lean_object* v_nextMacroScope_3742_; lean_object* v_ngen_3743_; lean_object* v_auxDeclNGen_3744_; lean_object* v_traceState_3745_; lean_object* v_messages_3746_; lean_object* v_infoState_3747_; lean_object* v_snapshotTasks_3748_; lean_object* v___x_3750_; uint8_t v_isShared_3751_; uint8_t v_isSharedCheck_3779_; 
v___x_3740_ = lean_st_ref_take(v___y_3739_);
v_env_3741_ = lean_ctor_get(v___x_3740_, 0);
v_nextMacroScope_3742_ = lean_ctor_get(v___x_3740_, 1);
v_ngen_3743_ = lean_ctor_get(v___x_3740_, 2);
v_auxDeclNGen_3744_ = lean_ctor_get(v___x_3740_, 3);
v_traceState_3745_ = lean_ctor_get(v___x_3740_, 4);
v_messages_3746_ = lean_ctor_get(v___x_3740_, 6);
v_infoState_3747_ = lean_ctor_get(v___x_3740_, 7);
v_snapshotTasks_3748_ = lean_ctor_get(v___x_3740_, 8);
v_isSharedCheck_3779_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3779_ == 0)
{
lean_object* v_unused_3780_; 
v_unused_3780_ = lean_ctor_get(v___x_3740_, 5);
lean_dec(v_unused_3780_);
v___x_3750_ = v___x_3740_;
v_isShared_3751_ = v_isSharedCheck_3779_;
goto v_resetjp_3749_;
}
else
{
lean_inc(v_snapshotTasks_3748_);
lean_inc(v_infoState_3747_);
lean_inc(v_messages_3746_);
lean_inc(v_traceState_3745_);
lean_inc(v_auxDeclNGen_3744_);
lean_inc(v_ngen_3743_);
lean_inc(v_nextMacroScope_3742_);
lean_inc(v_env_3741_);
lean_dec(v___x_3740_);
v___x_3750_ = lean_box(0);
v_isShared_3751_ = v_isSharedCheck_3779_;
goto v_resetjp_3749_;
}
v_resetjp_3749_:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3758_; 
v___x_3752_ = l_Lean_docStringExt;
v___x_3753_ = lean_box(2);
v___x_3754_ = lean_box(0);
v___x_3755_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v___x_3752_, v_env_3741_, v___f_3736_, v___x_3753_, v___x_3754_);
v___x_3756_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3751_ == 0)
{
lean_ctor_set(v___x_3750_, 5, v___x_3756_);
lean_ctor_set(v___x_3750_, 0, v___x_3755_);
v___x_3758_ = v___x_3750_;
goto v_reusejp_3757_;
}
else
{
lean_object* v_reuseFailAlloc_3778_; 
v_reuseFailAlloc_3778_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3778_, 0, v___x_3755_);
lean_ctor_set(v_reuseFailAlloc_3778_, 1, v_nextMacroScope_3742_);
lean_ctor_set(v_reuseFailAlloc_3778_, 2, v_ngen_3743_);
lean_ctor_set(v_reuseFailAlloc_3778_, 3, v_auxDeclNGen_3744_);
lean_ctor_set(v_reuseFailAlloc_3778_, 4, v_traceState_3745_);
lean_ctor_set(v_reuseFailAlloc_3778_, 5, v___x_3756_);
lean_ctor_set(v_reuseFailAlloc_3778_, 6, v_messages_3746_);
lean_ctor_set(v_reuseFailAlloc_3778_, 7, v_infoState_3747_);
lean_ctor_set(v_reuseFailAlloc_3778_, 8, v_snapshotTasks_3748_);
v___x_3758_ = v_reuseFailAlloc_3778_;
goto v_reusejp_3757_;
}
v_reusejp_3757_:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v_mctx_3762_; lean_object* v_zetaDeltaFVarIds_3763_; lean_object* v_postponed_3764_; lean_object* v_diag_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3776_; 
v___x_3759_ = lean_st_ref_set(v___y_3739_, v___x_3758_);
v___x_3760_ = lean_st_ref_get(v___y_3739_);
lean_dec(v___x_3760_);
v___x_3761_ = lean_st_ref_take(v___y_3738_);
v_mctx_3762_ = lean_ctor_get(v___x_3761_, 0);
v_zetaDeltaFVarIds_3763_ = lean_ctor_get(v___x_3761_, 2);
v_postponed_3764_ = lean_ctor_get(v___x_3761_, 3);
v_diag_3765_ = lean_ctor_get(v___x_3761_, 4);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3761_);
if (v_isSharedCheck_3776_ == 0)
{
lean_object* v_unused_3777_; 
v_unused_3777_ = lean_ctor_get(v___x_3761_, 1);
lean_dec(v_unused_3777_);
v___x_3767_ = v___x_3761_;
v_isShared_3768_ = v_isSharedCheck_3776_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_diag_3765_);
lean_inc(v_postponed_3764_);
lean_inc(v_zetaDeltaFVarIds_3763_);
lean_inc(v_mctx_3762_);
lean_dec(v___x_3761_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3776_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3769_; lean_object* v___x_3771_; 
v___x_3769_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3768_ == 0)
{
lean_ctor_set(v___x_3767_, 1, v___x_3769_);
v___x_3771_ = v___x_3767_;
goto v_reusejp_3770_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v_mctx_3762_);
lean_ctor_set(v_reuseFailAlloc_3775_, 1, v___x_3769_);
lean_ctor_set(v_reuseFailAlloc_3775_, 2, v_zetaDeltaFVarIds_3763_);
lean_ctor_set(v_reuseFailAlloc_3775_, 3, v_postponed_3764_);
lean_ctor_set(v_reuseFailAlloc_3775_, 4, v_diag_3765_);
v___x_3771_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3770_;
}
v_reusejp_3770_:
{
lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; 
v___x_3772_ = lean_st_ref_set(v___y_3738_, v___x_3771_);
v___x_3773_ = lean_box(0);
v___x_3774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3773_);
return v___x_3774_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0___boxed(lean_object* v_declName_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_){
_start:
{
lean_object* v_res_3797_; 
v_res_3797_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3789_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_);
lean_dec(v___y_3795_);
lean_dec_ref(v___y_3794_);
lean_dec(v___y_3793_);
lean_dec_ref(v___y_3792_);
lean_dec(v___y_3791_);
lean_dec_ref(v___y_3790_);
return v_res_3797_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__0(void){
_start:
{
lean_object* v___x_3798_; 
v___x_3798_ = lean_mk_string_unchecked("Documentation for `", 19, 19);
return v___x_3798_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__1(void){
_start:
{
lean_object* v___x_3799_; lean_object* v___x_3800_; 
v___x_3799_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__0, &l_Lean_makeDocStringVerso___closed__0_once, _init_l_Lean_makeDocStringVerso___closed__0);
v___x_3800_ = l_Lean_stringToMessageData(v___x_3799_);
return v___x_3800_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__2(void){
_start:
{
lean_object* v___x_3801_; 
v___x_3801_ = lean_mk_string_unchecked("` is already in Verso format", 28, 28);
return v___x_3801_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__3(void){
_start:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; 
v___x_3802_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__2, &l_Lean_makeDocStringVerso___closed__2_once, _init_l_Lean_makeDocStringVerso___closed__2);
v___x_3803_ = l_Lean_stringToMessageData(v___x_3802_);
return v___x_3803_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__4(void){
_start:
{
lean_object* v___x_3804_; 
v___x_3804_ = lean_mk_string_unchecked("No documentation found for `", 28, 28);
return v___x_3804_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__5(void){
_start:
{
lean_object* v___x_3805_; lean_object* v___x_3806_; 
v___x_3805_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__4, &l_Lean_makeDocStringVerso___closed__4_once, _init_l_Lean_makeDocStringVerso___closed__4);
v___x_3806_ = l_Lean_stringToMessageData(v___x_3805_);
return v___x_3806_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__6(void){
_start:
{
lean_object* v___x_3807_; 
v___x_3807_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_3807_;
}
}
static lean_object* _init_l_Lean_makeDocStringVerso___closed__7(void){
_start:
{
lean_object* v___x_3808_; lean_object* v___x_3809_; 
v___x_3808_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__6, &l_Lean_makeDocStringVerso___closed__6_once, _init_l_Lean_makeDocStringVerso___closed__6);
v___x_3809_ = l_Lean_stringToMessageData(v___x_3808_);
return v___x_3809_;
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso(lean_object* v_declName_3810_, lean_object* v_a_3811_, lean_object* v_a_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_){
_start:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v_env_3820_; uint8_t v___x_3821_; lean_object* v___x_3822_; 
v___x_3818_ = lean_st_ref_get(v_a_3816_);
v___x_3819_ = lean_st_ref_get(v_a_3816_);
lean_dec(v___x_3819_);
v_env_3820_ = lean_ctor_get(v___x_3818_, 0);
lean_inc_ref(v_env_3820_);
lean_dec(v___x_3818_);
v___x_3821_ = 1;
lean_inc(v_declName_3810_);
v___x_3822_ = l_Lean_findInternalDocString_x3f(v_env_3820_, v_declName_3810_, v___x_3821_);
if (lean_obj_tag(v___x_3822_) == 0)
{
lean_object* v_a_3823_; 
v_a_3823_ = lean_ctor_get(v___x_3822_, 0);
lean_inc(v_a_3823_);
lean_dec_ref(v___x_3822_);
if (lean_obj_tag(v_a_3823_) == 1)
{
lean_object* v_val_3824_; 
v_val_3824_ = lean_ctor_get(v_a_3823_, 0);
lean_inc(v_val_3824_);
lean_dec_ref(v_a_3823_);
if (lean_obj_tag(v_val_3824_) == 0)
{
lean_object* v_val_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3848_; 
v_val_3825_ = lean_ctor_get(v_val_3824_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v_val_3824_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3827_ = v_val_3824_;
v_isShared_3828_ = v_isSharedCheck_3848_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_val_3825_);
lean_dec(v_val_3824_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3848_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
lean_object* v___x_3829_; lean_object* v___x_3830_; 
v___x_3829_ = lean_st_ref_get(v_a_3816_);
lean_dec(v___x_3829_);
v___x_3830_ = l_Lean_removeBuiltinDocString(v_declName_3810_);
if (lean_obj_tag(v___x_3830_) == 0)
{
lean_object* v___x_3831_; 
lean_dec_ref(v___x_3830_);
lean_del_object(v___x_3827_);
lean_inc(v_declName_3810_);
v___x_3831_ = l_Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0(v_declName_3810_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_);
if (lean_obj_tag(v___x_3831_) == 0)
{
lean_object* v___x_3832_; 
lean_dec_ref(v___x_3831_);
v___x_3832_ = l_Lean_addVersoDocStringFromString(v_declName_3810_, v_val_3825_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_);
return v___x_3832_;
}
else
{
lean_dec(v_val_3825_);
lean_dec(v_declName_3810_);
return v___x_3831_;
}
}
else
{
lean_object* v_a_3833_; lean_object* v___x_3835_; uint8_t v_isShared_3836_; uint8_t v_isSharedCheck_3847_; 
lean_dec(v_val_3825_);
lean_dec(v_declName_3810_);
v_a_3833_ = lean_ctor_get(v___x_3830_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3830_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3835_ = v___x_3830_;
v_isShared_3836_ = v_isSharedCheck_3847_;
goto v_resetjp_3834_;
}
else
{
lean_inc(v_a_3833_);
lean_dec(v___x_3830_);
v___x_3835_ = lean_box(0);
v_isShared_3836_ = v_isSharedCheck_3847_;
goto v_resetjp_3834_;
}
v_resetjp_3834_:
{
lean_object* v_ref_3837_; lean_object* v___x_3838_; lean_object* v___x_3840_; 
v_ref_3837_ = lean_ctor_get(v_a_3815_, 5);
v___x_3838_ = lean_io_error_to_string(v_a_3833_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set_tag(v___x_3827_, 3);
lean_ctor_set(v___x_3827_, 0, v___x_3838_);
v___x_3840_ = v___x_3827_;
goto v_reusejp_3839_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v___x_3838_);
v___x_3840_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3839_;
}
v_reusejp_3839_:
{
lean_object* v___x_3841_; lean_object* v___x_3842_; lean_object* v___x_3844_; 
v___x_3841_ = l_Lean_MessageData_ofFormat(v___x_3840_);
lean_inc(v_ref_3837_);
v___x_3842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3842_, 0, v_ref_3837_);
lean_ctor_set(v___x_3842_, 1, v___x_3841_);
if (v_isShared_3836_ == 0)
{
lean_ctor_set(v___x_3835_, 0, v___x_3842_);
v___x_3844_ = v___x_3835_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v___x_3842_);
v___x_3844_ = v_reuseFailAlloc_3845_;
goto v_reusejp_3843_;
}
v_reusejp_3843_:
{
return v___x_3844_;
}
}
}
}
}
}
else
{
lean_object* v___x_3849_; uint8_t v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
lean_dec(v_val_3824_);
v___x_3849_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__1, &l_Lean_makeDocStringVerso___closed__1_once, _init_l_Lean_makeDocStringVerso___closed__1);
v___x_3850_ = 0;
v___x_3851_ = l_Lean_MessageData_ofConstName(v_declName_3810_, v___x_3850_);
v___x_3852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3852_, 0, v___x_3849_);
lean_ctor_set(v___x_3852_, 1, v___x_3851_);
v___x_3853_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__3, &l_Lean_makeDocStringVerso___closed__3_once, _init_l_Lean_makeDocStringVerso___closed__3);
v___x_3854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3854_, 0, v___x_3852_);
lean_ctor_set(v___x_3854_, 1, v___x_3853_);
v___x_3855_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3854_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_);
return v___x_3855_;
}
}
else
{
lean_object* v___x_3856_; uint8_t v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
lean_dec(v_a_3823_);
v___x_3856_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__5, &l_Lean_makeDocStringVerso___closed__5_once, _init_l_Lean_makeDocStringVerso___closed__5);
v___x_3857_ = 0;
v___x_3858_ = l_Lean_MessageData_ofConstName(v_declName_3810_, v___x_3857_);
v___x_3859_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3856_);
lean_ctor_set(v___x_3859_, 1, v___x_3858_);
v___x_3860_ = lean_obj_once(&l_Lean_makeDocStringVerso___closed__7, &l_Lean_makeDocStringVerso___closed__7_once, _init_l_Lean_makeDocStringVerso___closed__7);
v___x_3861_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3861_, 0, v___x_3859_);
lean_ctor_set(v___x_3861_, 1, v___x_3860_);
v___x_3862_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_3861_, v_a_3811_, v_a_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_);
return v___x_3862_;
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3875_; 
lean_dec(v_declName_3810_);
v_a_3863_ = lean_ctor_get(v___x_3822_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3822_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3865_ = v___x_3822_;
v_isShared_3866_ = v_isSharedCheck_3875_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___x_3822_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3875_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v_ref_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3873_; 
v_ref_3867_ = lean_ctor_get(v_a_3815_, 5);
v___x_3868_ = lean_io_error_to_string(v_a_3863_);
v___x_3869_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3869_, 0, v___x_3868_);
v___x_3870_ = l_Lean_MessageData_ofFormat(v___x_3869_);
lean_inc(v_ref_3867_);
v___x_3871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3871_, 0, v_ref_3867_);
lean_ctor_set(v___x_3871_, 1, v___x_3870_);
if (v_isShared_3866_ == 0)
{
lean_ctor_set(v___x_3865_, 0, v___x_3871_);
v___x_3873_ = v___x_3865_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v___x_3871_);
v___x_3873_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
return v___x_3873_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_makeDocStringVerso___boxed(lean_object* v_declName_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_, lean_object* v_a_3883_){
_start:
{
lean_object* v_res_3884_; 
v_res_3884_ = l_Lean_makeDocStringVerso(v_declName_3876_, v_a_3877_, v_a_3878_, v_a_3879_, v_a_3880_, v_a_3881_, v_a_3882_);
lean_dec(v_a_3882_);
lean_dec_ref(v_a_3881_);
lean_dec(v_a_3880_);
lean_dec_ref(v_a_3879_);
lean_dec(v_a_3878_);
lean_dec_ref(v_a_3877_);
return v_res_3884_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(lean_object* v_00_u03b2_3885_, lean_object* v_k_3886_, lean_object* v_t_3887_, lean_object* v_h_3888_){
_start:
{
lean_object* v___x_3889_; 
v___x_3889_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___redArg(v_k_3886_, v_t_3887_);
return v___x_3889_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3890_, lean_object* v_k_3891_, lean_object* v_t_3892_, lean_object* v_h_3893_){
_start:
{
lean_object* v_res_3894_; 
v_res_3894_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_removeDocStringCore___at___00Lean_makeDocStringVerso_spec__0_spec__0(v_00_u03b2_3890_, v_k_3891_, v_t_3892_, v_h_3893_);
lean_dec(v_k_3891_);
return v_res_3894_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString(lean_object* v_declName_3895_, lean_object* v_binders_3896_, lean_object* v_docComment_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_){
_start:
{
lean_object* v_options_3905_; lean_object* v___x_3906_; uint8_t v___x_3907_; lean_object* v___x_3908_; 
v_options_3905_ = lean_ctor_get(v_a_3902_, 2);
v___x_3906_ = l_Lean_doc_verso;
v___x_3907_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2_spec__5_spec__6(v_options_3905_, v___x_3906_);
v___x_3908_ = l_Lean_addDocStringOf(v___x_3907_, v_declName_3895_, v_binders_3896_, v_docComment_3897_, v_a_3898_, v_a_3899_, v_a_3900_, v_a_3901_, v_a_3902_, v_a_3903_);
return v___x_3908_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString___boxed(lean_object* v_declName_3909_, lean_object* v_binders_3910_, lean_object* v_docComment_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_){
_start:
{
lean_object* v_res_3919_; 
v_res_3919_ = l_Lean_addDocString(v_declName_3909_, v_binders_3910_, v_docComment_3911_, v_a_3912_, v_a_3913_, v_a_3914_, v_a_3915_, v_a_3916_, v_a_3917_);
lean_dec(v_a_3917_);
lean_dec_ref(v_a_3916_);
lean_dec(v_a_3915_);
lean_dec_ref(v_a_3914_);
lean_dec(v_a_3913_);
lean_dec_ref(v_a_3912_);
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27(lean_object* v_declName_3920_, lean_object* v_binders_3921_, lean_object* v_docString_x3f_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_){
_start:
{
if (lean_obj_tag(v_docString_x3f_3922_) == 0)
{
lean_object* v___x_3930_; lean_object* v___x_3931_; 
lean_dec(v_binders_3921_);
lean_dec(v_declName_3920_);
v___x_3930_ = lean_box(0);
v___x_3931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
return v___x_3931_;
}
else
{
lean_object* v_val_3932_; lean_object* v___x_3933_; 
v_val_3932_ = lean_ctor_get(v_docString_x3f_3922_, 0);
lean_inc(v_val_3932_);
lean_dec_ref(v_docString_x3f_3922_);
v___x_3933_ = l_Lean_addDocString(v_declName_3920_, v_binders_3921_, v_val_3932_, v_a_3923_, v_a_3924_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_);
return v___x_3933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDocString_x27___boxed(lean_object* v_declName_3934_, lean_object* v_binders_3935_, lean_object* v_docString_x3f_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l_Lean_addDocString_x27(v_declName_3934_, v_binders_3935_, v_docString_x3f_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
lean_dec(v_a_3942_);
lean_dec_ref(v_a_3941_);
lean_dec(v_a_3940_);
lean_dec_ref(v_a_3939_);
lean_dec(v_a_3938_);
lean_dec_ref(v_a_3937_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(lean_object* v_env_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v___x_3949_; lean_object* v_nextMacroScope_3950_; lean_object* v_ngen_3951_; lean_object* v_auxDeclNGen_3952_; lean_object* v_traceState_3953_; lean_object* v_messages_3954_; lean_object* v_infoState_3955_; lean_object* v_snapshotTasks_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3983_; 
v___x_3949_ = lean_st_ref_take(v___y_3947_);
v_nextMacroScope_3950_ = lean_ctor_get(v___x_3949_, 1);
v_ngen_3951_ = lean_ctor_get(v___x_3949_, 2);
v_auxDeclNGen_3952_ = lean_ctor_get(v___x_3949_, 3);
v_traceState_3953_ = lean_ctor_get(v___x_3949_, 4);
v_messages_3954_ = lean_ctor_get(v___x_3949_, 6);
v_infoState_3955_ = lean_ctor_get(v___x_3949_, 7);
v_snapshotTasks_3956_ = lean_ctor_get(v___x_3949_, 8);
v_isSharedCheck_3983_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_3983_ == 0)
{
lean_object* v_unused_3984_; lean_object* v_unused_3985_; 
v_unused_3984_ = lean_ctor_get(v___x_3949_, 5);
lean_dec(v_unused_3984_);
v_unused_3985_ = lean_ctor_get(v___x_3949_, 0);
lean_dec(v_unused_3985_);
v___x_3958_ = v___x_3949_;
v_isShared_3959_ = v_isSharedCheck_3983_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_snapshotTasks_3956_);
lean_inc(v_infoState_3955_);
lean_inc(v_messages_3954_);
lean_inc(v_traceState_3953_);
lean_inc(v_auxDeclNGen_3952_);
lean_inc(v_ngen_3951_);
lean_inc(v_nextMacroScope_3950_);
lean_dec(v___x_3949_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3983_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3960_; lean_object* v___x_3962_; 
v___x_3960_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__2);
if (v_isShared_3959_ == 0)
{
lean_ctor_set(v___x_3958_, 5, v___x_3960_);
lean_ctor_set(v___x_3958_, 0, v_env_3945_);
v___x_3962_ = v___x_3958_;
goto v_reusejp_3961_;
}
else
{
lean_object* v_reuseFailAlloc_3982_; 
v_reuseFailAlloc_3982_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3982_, 0, v_env_3945_);
lean_ctor_set(v_reuseFailAlloc_3982_, 1, v_nextMacroScope_3950_);
lean_ctor_set(v_reuseFailAlloc_3982_, 2, v_ngen_3951_);
lean_ctor_set(v_reuseFailAlloc_3982_, 3, v_auxDeclNGen_3952_);
lean_ctor_set(v_reuseFailAlloc_3982_, 4, v_traceState_3953_);
lean_ctor_set(v_reuseFailAlloc_3982_, 5, v___x_3960_);
lean_ctor_set(v_reuseFailAlloc_3982_, 6, v_messages_3954_);
lean_ctor_set(v_reuseFailAlloc_3982_, 7, v_infoState_3955_);
lean_ctor_set(v_reuseFailAlloc_3982_, 8, v_snapshotTasks_3956_);
v___x_3962_ = v_reuseFailAlloc_3982_;
goto v_reusejp_3961_;
}
v_reusejp_3961_:
{
lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v_mctx_3966_; lean_object* v_zetaDeltaFVarIds_3967_; lean_object* v_postponed_3968_; lean_object* v_diag_3969_; lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3980_; 
v___x_3963_ = lean_st_ref_set(v___y_3947_, v___x_3962_);
v___x_3964_ = lean_st_ref_get(v___y_3947_);
lean_dec(v___x_3964_);
v___x_3965_ = lean_st_ref_take(v___y_3946_);
v_mctx_3966_ = lean_ctor_get(v___x_3965_, 0);
v_zetaDeltaFVarIds_3967_ = lean_ctor_get(v___x_3965_, 2);
v_postponed_3968_ = lean_ctor_get(v___x_3965_, 3);
v_diag_3969_ = lean_ctor_get(v___x_3965_, 4);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3965_);
if (v_isSharedCheck_3980_ == 0)
{
lean_object* v_unused_3981_; 
v_unused_3981_ = lean_ctor_get(v___x_3965_, 1);
lean_dec(v_unused_3981_);
v___x_3971_ = v___x_3965_;
v_isShared_3972_ = v_isSharedCheck_3980_;
goto v_resetjp_3970_;
}
else
{
lean_inc(v_diag_3969_);
lean_inc(v_postponed_3968_);
lean_inc(v_zetaDeltaFVarIds_3967_);
lean_inc(v_mctx_3966_);
lean_dec(v___x_3965_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3980_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3973_; lean_object* v___x_3975_; 
v___x_3973_ = lean_obj_once(&l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3, &l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3_once, _init_l_Lean_addVersoDocStringCore___at___00Lean_addVersoDocString_spec__0___closed__3);
if (v_isShared_3972_ == 0)
{
lean_ctor_set(v___x_3971_, 1, v___x_3973_);
v___x_3975_ = v___x_3971_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_mctx_3966_);
lean_ctor_set(v_reuseFailAlloc_3979_, 1, v___x_3973_);
lean_ctor_set(v_reuseFailAlloc_3979_, 2, v_zetaDeltaFVarIds_3967_);
lean_ctor_set(v_reuseFailAlloc_3979_, 3, v_postponed_3968_);
lean_ctor_set(v_reuseFailAlloc_3979_, 4, v_diag_3969_);
v___x_3975_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; 
v___x_3976_ = lean_st_ref_set(v___y_3946_, v___x_3975_);
v___x_3977_ = lean_box(0);
v___x_3978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3978_, 0, v___x_3977_);
return v___x_3978_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg___boxed(lean_object* v_env_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_){
_start:
{
lean_object* v_res_3990_; 
v_res_3990_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_3986_, v___y_3987_, v___y_3988_);
lean_dec(v___y_3988_);
lean_dec(v___y_3987_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(lean_object* v_docs_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v___x_3999_; lean_object* v_env_4000_; lean_object* v___x_4001_; uint8_t v___x_4002_; 
v___x_3999_ = lean_st_ref_get(v___y_3997_);
v_env_4000_ = lean_ctor_get(v___x_3999_, 0);
lean_inc_ref(v_env_4000_);
lean_dec(v___x_3999_);
v___x_4001_ = l_Lean_getMainModuleDoc(v_env_4000_);
v___x_4002_ = l_Lean_PersistentArray_isEmpty___redArg(v___x_4001_);
lean_dec_ref(v___x_4001_);
if (v___x_4002_ == 0)
{
lean_object* v___x_4003_; lean_object* v___x_4004_; 
lean_dec_ref(v_docs_3991_);
v___x_4003_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__1___closed__1);
v___x_4004_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4003_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
return v___x_4004_;
}
else
{
lean_object* v___x_4005_; lean_object* v_env_4006_; lean_object* v___x_4007_; 
v___x_4005_ = lean_st_ref_get(v___y_3997_);
v_env_4006_ = lean_ctor_get(v___x_4005_, 0);
lean_inc_ref(v_env_4006_);
lean_dec(v___x_4005_);
v___x_4007_ = l_Lean_addVersoModuleDocSnippet(v_env_4006_, v_docs_3991_);
if (lean_obj_tag(v___x_4007_) == 0)
{
lean_object* v_a_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; 
v_a_4008_ = lean_ctor_get(v___x_4007_, 0);
lean_inc(v_a_4008_);
lean_dec_ref(v___x_4007_);
v___x_4009_ = lean_obj_once(&l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1, &l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1_once, _init_l_Lean_addVersoModDocStringCore___redArg___lam__0___closed__1);
v___x_4010_ = l_Lean_stringToMessageData(v_a_4008_);
v___x_4011_ = l_Lean_indentD(v___x_4010_);
v___x_4012_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4012_, 0, v___x_4009_);
lean_ctor_set(v___x_4012_, 1, v___x_4011_);
v___x_4013_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_parseVersoDocString___at___00Lean_versoDocString_spec__0_spec__1_spec__2___redArg(v___x_4012_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
return v___x_4013_;
}
else
{
lean_object* v_a_4014_; lean_object* v___x_4015_; 
v_a_4014_ = lean_ctor_get(v___x_4007_, 0);
lean_inc(v_a_4014_);
lean_dec_ref(v___x_4007_);
v___x_4015_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_a_4014_, v___y_3995_, v___y_3997_);
return v___x_4015_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0___boxed(lean_object* v_docs_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_){
_start:
{
lean_object* v_res_4024_; 
v_res_4024_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_docs_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_, v___y_4021_, v___y_4022_);
lean_dec(v___y_4022_);
lean_dec_ref(v___y_4021_);
lean_dec(v___y_4020_);
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString(lean_object* v_range_4025_, lean_object* v_docComment_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_){
_start:
{
lean_object* v___x_4034_; 
v___x_4034_ = l_Lean_versoModDocString(v_range_4025_, v_docComment_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
if (lean_obj_tag(v___x_4034_) == 0)
{
lean_object* v_a_4035_; lean_object* v___x_4036_; 
v_a_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc(v_a_4035_);
lean_dec_ref(v___x_4034_);
v___x_4036_ = l_Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0(v_a_4035_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_, v_a_4032_);
return v___x_4036_;
}
else
{
lean_object* v_a_4037_; lean_object* v___x_4039_; uint8_t v_isShared_4040_; uint8_t v_isSharedCheck_4044_; 
v_a_4037_ = lean_ctor_get(v___x_4034_, 0);
v_isSharedCheck_4044_ = !lean_is_exclusive(v___x_4034_);
if (v_isSharedCheck_4044_ == 0)
{
v___x_4039_ = v___x_4034_;
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
else
{
lean_inc(v_a_4037_);
lean_dec(v___x_4034_);
v___x_4039_ = lean_box(0);
v_isShared_4040_ = v_isSharedCheck_4044_;
goto v_resetjp_4038_;
}
v_resetjp_4038_:
{
lean_object* v___x_4042_; 
if (v_isShared_4040_ == 0)
{
v___x_4042_ = v___x_4039_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4043_; 
v_reuseFailAlloc_4043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4043_, 0, v_a_4037_);
v___x_4042_ = v_reuseFailAlloc_4043_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
return v___x_4042_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addVersoModDocString___boxed(lean_object* v_range_4045_, lean_object* v_docComment_4046_, lean_object* v_a_4047_, lean_object* v_a_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_, lean_object* v_a_4051_, lean_object* v_a_4052_, lean_object* v_a_4053_){
_start:
{
lean_object* v_res_4054_; 
v_res_4054_ = l_Lean_addVersoModDocString(v_range_4045_, v_docComment_4046_, v_a_4047_, v_a_4048_, v_a_4049_, v_a_4050_, v_a_4051_, v_a_4052_);
lean_dec(v_a_4052_);
lean_dec_ref(v_a_4051_);
lean_dec(v_a_4050_);
lean_dec_ref(v_a_4049_);
lean_dec(v_a_4048_);
lean_dec_ref(v_a_4047_);
lean_dec(v_docComment_4046_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(lean_object* v_env_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v___x_4063_; 
v___x_4063_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___redArg(v_env_4055_, v___y_4059_, v___y_4061_);
return v___x_4063_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0___boxed(lean_object* v_env_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_){
_start:
{
lean_object* v_res_4072_; 
v_res_4072_ = l_Lean_setEnv___at___00Lean_addVersoModDocStringCore___at___00Lean_addVersoModDocString_spec__0_spec__0(v_env_4064_, v___y_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_);
lean_dec(v___y_4070_);
lean_dec_ref(v___y_4069_);
lean_dec(v___y_4068_);
lean_dec_ref(v___y_4067_);
lean_dec(v___y_4066_);
lean_dec_ref(v___y_4065_);
return v_res_4072_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_DocString_Parser(uint8_t builtin);
lean_object* initialize_Lean_Elab_Term_TermElabM(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Add(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Term_TermElabM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Add(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Add(builtin);
}
#ifdef __cplusplus
}
#endif
