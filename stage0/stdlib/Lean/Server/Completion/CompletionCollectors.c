// Lean compiler output
// Module: Lean.Server.Completion.CompletionCollectors
// Imports: public import Lean.Data.FuzzyMatching public import Lean.Elab.Tactic.Doc public import Lean.Server.Completion.CompletionResolution public import Lean.Server.Completion.EligibleHeaderDecls public import Lean.Server.RequestCancellation
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* lean_private_to_user_name(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_errorExplanationExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_FileMap_utf8PosToLspPos(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Char_utf8Size(uint32_t);
uint8_t l_String_charactersIn(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSubstring_x3f(lean_object*, uint8_t, uint8_t);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t l_Lean_Server_Completion_allowCompletion(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_getString_x21(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_lift(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadLiftTOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_forEligibleDeclsM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_replacePrefix(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Name_isAtomic(lean_object*);
uint8_t l_Lean_Name_isSuffixOf(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getEligibleHeaderDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_allowCompletion(lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionKindForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getCompletionTagsForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_getAliasState(lean_object*);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Data_Trie_findPrefix___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getNamespaces(lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Subarray_drop___redArg(lean_object*, lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_Zipper_prependNode___redArg(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Syntax_getHeadInfo(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Server_Completion_getDotIdCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivatePrefix(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_TreeSet_ofArray___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCoreUnfoldingAnnotations(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_ContextInfo_runMetaM___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Server_RequestCancellation_requestCancelled;
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Server_Completion_getDotCompletionTypeNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Lean_getStructureFieldsFlattened(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Tactic_Doc_allTacticDocs(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_getOptionDecls();
lean_object* lean_data_value_to_string(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_ErrorExplanation_summaryWithSeverity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Array_takeWhile___redArg(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Name_components(lean_object*);
extern lean_object* l_Lean_LocalContext_empty;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2;
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object*, lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_fieldIdCompletion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_fieldIdCompletion___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__0;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__1;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__0;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__1;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__2;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__3;
static lean_once_cell_t l_Lean_Server_Completion_optionCompletion___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_optionCompletion___closed__4;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0;
static lean_once_cell_t l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1;
static lean_once_cell_t l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2;
static lean_once_cell_t l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Server_Completion_endSectionCompletion___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Server_Completion_endSectionCompletion___closed__0;
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2_, 0, v___x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(lean_object* v_item_3_, lean_object* v_id_x3f_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_uri_11_; lean_object* v_pos_12_; lean_object* v_completionInfoPos_13_; lean_object* v_label_14_; lean_object* v_detail_x3f_15_; lean_object* v_documentation_x3f_16_; lean_object* v_kind_x3f_17_; lean_object* v_textEdit_x3f_18_; lean_object* v_sortText_x3f_19_; lean_object* v_tags_x3f_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_34_; 
v___x_9_ = lean_st_ref_get(v_a_7_);
lean_dec(v___x_9_);
v___x_10_ = lean_st_ref_take(v_a_6_);
v_uri_11_ = lean_ctor_get(v_a_5_, 0);
v_pos_12_ = lean_ctor_get(v_a_5_, 1);
v_completionInfoPos_13_ = lean_ctor_get(v_a_5_, 2);
v_label_14_ = lean_ctor_get(v_item_3_, 0);
v_detail_x3f_15_ = lean_ctor_get(v_item_3_, 1);
v_documentation_x3f_16_ = lean_ctor_get(v_item_3_, 2);
v_kind_x3f_17_ = lean_ctor_get(v_item_3_, 3);
v_textEdit_x3f_18_ = lean_ctor_get(v_item_3_, 4);
v_sortText_x3f_19_ = lean_ctor_get(v_item_3_, 5);
v_tags_x3f_20_ = lean_ctor_get(v_item_3_, 7);
v_isSharedCheck_34_ = !lean_is_exclusive(v_item_3_);
if (v_isSharedCheck_34_ == 0)
{
lean_object* v_unused_35_; 
v_unused_35_ = lean_ctor_get(v_item_3_, 6);
lean_dec(v_unused_35_);
v___x_22_ = v_item_3_;
v_isShared_23_ = v_isSharedCheck_34_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_tags_x3f_20_);
lean_inc(v_sortText_x3f_19_);
lean_inc(v_textEdit_x3f_18_);
lean_inc(v_kind_x3f_17_);
lean_inc(v_documentation_x3f_16_);
lean_inc(v_detail_x3f_15_);
lean_inc(v_label_14_);
lean_dec(v_item_3_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_34_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_28_; 
lean_inc(v_completionInfoPos_13_);
v___x_24_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_24_, 0, v_completionInfoPos_13_);
lean_inc_ref(v_pos_12_);
lean_inc_ref(v_uri_11_);
v___x_25_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_25_, 0, v_uri_11_);
lean_ctor_set(v___x_25_, 1, v_pos_12_);
lean_ctor_set(v___x_25_, 2, v___x_24_);
lean_ctor_set(v___x_25_, 3, v_id_x3f_4_);
v___x_26_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 6, v___x_26_);
v___x_28_ = v___x_22_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v_label_14_);
lean_ctor_set(v_reuseFailAlloc_33_, 1, v_detail_x3f_15_);
lean_ctor_set(v_reuseFailAlloc_33_, 2, v_documentation_x3f_16_);
lean_ctor_set(v_reuseFailAlloc_33_, 3, v_kind_x3f_17_);
lean_ctor_set(v_reuseFailAlloc_33_, 4, v_textEdit_x3f_18_);
lean_ctor_set(v_reuseFailAlloc_33_, 5, v_sortText_x3f_19_);
lean_ctor_set(v_reuseFailAlloc_33_, 6, v___x_26_);
lean_ctor_set(v_reuseFailAlloc_33_, 7, v_tags_x3f_20_);
v___x_28_ = v_reuseFailAlloc_33_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_29_ = lean_array_push(v___x_10_, v___x_28_);
v___x_30_ = lean_st_ref_set(v_a_6_, v___x_29_);
v___x_31_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_32_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_32_, 0, v___x_31_);
return v___x_32_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___boxed(lean_object* v_item_36_, lean_object* v_id_x3f_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_36_, v_id_x3f_37_, v_a_38_, v_a_39_, v_a_40_);
lean_dec(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(lean_object* v_item_43_, lean_object* v_id_x3f_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_43_, v_id_x3f_44_, v_a_45_, v_a_46_, v_a_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___boxed(lean_object* v_item_54_, lean_object* v_id_x3f_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem(v_item_54_, v_id_x3f_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec_ref(v_a_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(lean_object* v_label_65_, lean_object* v_id_66_, uint8_t v_kind_67_, lean_object* v_tags_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
uint8_t v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v_item_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_73_ = 1;
v___x_74_ = l_Lean_Name_toString(v_label_65_, v___x_73_);
v___x_75_ = lean_box(0);
v___x_76_ = lean_box(v_kind_67_);
v___x_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_77_, 0, v___x_76_);
v___x_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_78_, 0, v_tags_68_);
v_item_79_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_79_, 0, v___x_74_);
lean_ctor_set(v_item_79_, 1, v___x_75_);
lean_ctor_set(v_item_79_, 2, v___x_75_);
lean_ctor_set(v_item_79_, 3, v___x_77_);
lean_ctor_set(v_item_79_, 4, v___x_75_);
lean_ctor_set(v_item_79_, 5, v___x_75_);
lean_ctor_set(v_item_79_, 6, v___x_75_);
lean_ctor_set(v_item_79_, 7, v___x_78_);
v___x_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_80_, 0, v_id_66_);
v___x_81_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_79_, v___x_80_, v_a_69_, v_a_70_, v_a_71_);
return v___x_81_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg___boxed(lean_object* v_label_82_, lean_object* v_id_83_, lean_object* v_kind_84_, lean_object* v_tags_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
uint8_t v_kind_boxed_90_; lean_object* v_res_91_; 
v_kind_boxed_90_ = lean_unbox(v_kind_84_);
v_res_91_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_82_, v_id_83_, v_kind_boxed_90_, v_tags_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec(v_a_87_);
lean_dec_ref(v_a_86_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(lean_object* v_label_92_, lean_object* v_id_93_, uint8_t v_kind_94_, lean_object* v_tags_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_92_, v_id_93_, v_kind_94_, v_tags_95_, v_a_96_, v_a_97_, v_a_102_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___boxed(lean_object* v_label_105_, lean_object* v_id_106_, lean_object* v_kind_107_, lean_object* v_tags_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_){
_start:
{
uint8_t v_kind_boxed_117_; lean_object* v_res_118_; 
v_kind_boxed_117_ = lean_unbox(v_kind_107_);
v_res_118_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem(v_label_105_, v_id_106_, v_kind_boxed_117_, v_tags_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_, v_a_114_, v_a_115_);
lean_dec(v_a_115_);
lean_dec_ref(v_a_114_);
lean_dec(v_a_113_);
lean_dec_ref(v_a_112_);
lean_dec_ref(v_a_111_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(lean_object* v_label_119_, lean_object* v_declName_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v___x_128_; lean_object* v_env_129_; uint8_t v___x_130_; lean_object* v___x_131_; 
v___x_128_ = lean_st_ref_get(v_a_126_);
v_env_129_ = lean_ctor_get(v___x_128_, 0);
lean_inc_ref(v_env_129_);
lean_dec(v___x_128_);
v___x_130_ = 0;
lean_inc(v_declName_120_);
v___x_131_ = l_Lean_Environment_find_x3f(v_env_129_, v_declName_120_, v___x_130_);
if (lean_obj_tag(v___x_131_) == 1)
{
lean_object* v_val_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_161_; 
v_val_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_161_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_161_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_val_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_161_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_Server_Completion_getCompletionKindForDecl(v_val_132_, v_a_123_, v_a_124_, v_a_125_, v_a_126_);
lean_dec(v_val_132_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v_a_137_; lean_object* v___x_138_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_a_137_);
lean_dec_ref(v___x_136_);
lean_inc(v_declName_120_);
v___x_138_ = l_Lean_Server_Completion_getCompletionTagsForDecl___redArg(v_declName_120_, v_a_126_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_141_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
lean_inc(v_a_139_);
lean_dec_ref(v___x_138_);
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 0);
lean_ctor_set(v___x_134_, 0, v_declName_120_);
v___x_141_ = v___x_134_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_144_; 
v_reuseFailAlloc_144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_144_, 0, v_declName_120_);
v___x_141_ = v_reuseFailAlloc_144_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
uint8_t v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_unbox(v_a_137_);
lean_dec(v_a_137_);
v___x_143_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_label_119_, v___x_141_, v___x_142_, v_a_139_, v_a_121_, v_a_122_, v_a_126_);
return v___x_143_;
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
lean_dec(v_a_137_);
lean_del_object(v___x_134_);
lean_dec(v_declName_120_);
lean_dec(v_label_119_);
v_a_145_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_138_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_138_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_145_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
lean_del_object(v___x_134_);
lean_dec(v_declName_120_);
lean_dec(v_label_119_);
v_a_153_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_136_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_136_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec(v___x_131_);
lean_dec(v_declName_120_);
lean_dec(v_label_119_);
v___x_162_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg___boxed(lean_object* v_label_164_, lean_object* v_declName_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_){
_start:
{
lean_object* v_res_173_; 
v_res_173_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_164_, v_declName_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
lean_dec(v_a_171_);
lean_dec_ref(v_a_170_);
lean_dec(v_a_169_);
lean_dec_ref(v_a_168_);
lean_dec(v_a_167_);
lean_dec_ref(v_a_166_);
return v_res_173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(lean_object* v_label_174_, lean_object* v_declName_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_, lean_object* v_a_180_, lean_object* v_a_181_, lean_object* v_a_182_){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v_label_174_, v_declName_175_, v_a_176_, v_a_177_, v_a_179_, v_a_180_, v_a_181_, v_a_182_);
return v___x_184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___boxed(lean_object* v_label_185_, lean_object* v_declName_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_){
_start:
{
lean_object* v_res_195_; 
v_res_195_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl(v_label_185_, v_declName_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
return v_res_195_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0(void){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = lean_mk_string_unchecked("keyword", 7, 7);
return v___x_196_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1(void){
_start:
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__0);
v___x_198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
return v___x_198_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2(void){
_start:
{
uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_199_ = 13;
v___x_200_ = lean_box(v___x_199_);
v___x_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(lean_object* v_keyword_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v_item_210_; lean_object* v___x_211_; 
v___x_207_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__1);
v___x_208_ = lean_box(0);
v___x_209_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2);
v_item_210_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_210_, 0, v_keyword_202_);
lean_ctor_set(v_item_210_, 1, v___x_207_);
lean_ctor_set(v_item_210_, 2, v___x_208_);
lean_ctor_set(v_item_210_, 3, v___x_209_);
lean_ctor_set(v_item_210_, 4, v___x_208_);
lean_ctor_set(v_item_210_, 5, v___x_208_);
lean_ctor_set(v_item_210_, 6, v___x_208_);
lean_ctor_set(v_item_210_, 7, v___x_208_);
v___x_211_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_210_, v___x_208_, v_a_203_, v_a_204_, v_a_205_);
return v___x_211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___boxed(lean_object* v_keyword_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_212_, v_a_213_, v_a_214_, v_a_215_);
lean_dec(v_a_215_);
lean_dec(v_a_214_);
lean_dec_ref(v_a_213_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(lean_object* v_keyword_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v___x_227_; 
v___x_227_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_keyword_218_, v_a_219_, v_a_220_, v_a_225_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___boxed(lean_object* v_keyword_228_, lean_object* v_a_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem(v_keyword_228_, v_a_229_, v_a_230_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
lean_dec(v_a_233_);
lean_dec_ref(v_a_232_);
lean_dec_ref(v_a_231_);
lean_dec(v_a_230_);
lean_dec_ref(v_a_229_);
return v_res_237_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0(void){
_start:
{
lean_object* v___x_238_; 
v___x_238_ = lean_mk_string_unchecked("namespace", 9, 9);
return v___x_238_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; 
v___x_239_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__0);
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v___x_239_);
return v___x_240_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2(void){
_start:
{
uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = 8;
v___x_242_ = lean_box(v___x_241_);
v___x_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(lean_object* v_ns_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v_item_254_; lean_object* v___x_255_; 
v___x_249_ = 1;
v___x_250_ = l_Lean_Name_toString(v_ns_244_, v___x_249_);
v___x_251_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__1);
v___x_252_ = lean_box(0);
v___x_253_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2);
v_item_254_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_item_254_, 0, v___x_250_);
lean_ctor_set(v_item_254_, 1, v___x_251_);
lean_ctor_set(v_item_254_, 2, v___x_252_);
lean_ctor_set(v_item_254_, 3, v___x_253_);
lean_ctor_set(v_item_254_, 4, v___x_252_);
lean_ctor_set(v_item_254_, 5, v___x_252_);
lean_ctor_set(v_item_254_, 6, v___x_252_);
lean_ctor_set(v_item_254_, 7, v___x_252_);
v___x_255_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v_item_254_, v___x_252_, v_a_245_, v_a_246_, v_a_247_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___boxed(lean_object* v_ns_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_256_, v_a_257_, v_a_258_, v_a_259_);
lean_dec(v_a_259_);
lean_dec(v_a_258_);
lean_dec_ref(v_a_257_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(lean_object* v_ns_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_ns_262_, v_a_263_, v_a_264_, v_a_269_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___boxed(lean_object* v_ns_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, lean_object* v_a_279_, lean_object* v_a_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem(v_ns_272_, v_a_273_, v_a_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_, v_a_279_);
lean_dec(v_a_279_);
lean_dec_ref(v_a_278_);
lean_dec(v_a_277_);
lean_dec_ref(v_a_276_);
lean_dec_ref(v_a_275_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(lean_object* v___x_282_, lean_object* v_x_283_, lean_object* v___x_284_, lean_object* v_a_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_291_ = lean_st_ref_get(v___y_289_);
lean_dec(v___x_291_);
v___x_292_ = lean_st_mk_ref(v___x_282_);
lean_inc(v___y_289_);
lean_inc_ref(v_a_285_);
lean_inc(v___x_292_);
v___x_293_ = lean_apply_8(v_x_283_, v___x_284_, v___x_292_, v_a_285_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, lean_box(0));
if (lean_obj_tag(v___x_293_) == 0)
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_323_; 
v_a_294_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_323_ == 0)
{
v___x_296_ = v___x_293_;
v_isShared_297_ = v_isSharedCheck_323_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_293_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_323_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
if (lean_obj_tag(v_a_294_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_308_; 
lean_dec(v___x_292_);
lean_dec(v___y_289_);
v_a_298_ = lean_ctor_get(v_a_294_, 0);
v_isSharedCheck_308_ = !lean_is_exclusive(v_a_294_);
if (v_isSharedCheck_308_ == 0)
{
v___x_300_ = v_a_294_;
v_isShared_301_ = v_isSharedCheck_308_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v_a_294_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_308_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v___x_303_; 
if (v_isShared_301_ == 0)
{
v___x_303_ = v___x_300_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v_a_298_);
v___x_303_ = v_reuseFailAlloc_307_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
lean_object* v___x_305_; 
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___x_303_);
v___x_305_ = v___x_296_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_322_; 
v_a_309_ = lean_ctor_get(v_a_294_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_a_294_);
if (v_isSharedCheck_322_ == 0)
{
v___x_311_ = v_a_294_;
v_isShared_312_ = v_isSharedCheck_322_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v_a_294_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_322_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_313_ = lean_st_ref_get(v___y_289_);
lean_dec(v___y_289_);
lean_dec(v___x_313_);
v___x_314_ = lean_st_ref_get(v___x_292_);
lean_dec(v___x_292_);
v___x_315_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_315_, 0, v_a_309_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_315_);
v___x_317_ = v___x_311_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_315_);
v___x_317_ = v_reuseFailAlloc_321_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v___x_319_; 
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 0, v___x_317_);
v___x_319_ = v___x_296_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_317_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v___x_292_);
lean_dec(v___y_289_);
v_a_324_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_293_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_293_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed(lean_object* v___x_332_, lean_object* v_x_333_, lean_object* v___x_334_, lean_object* v_a_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0(v___x_332_, v_x_333_, v___x_334_, v_a_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
lean_dec_ref(v_a_335_);
return v_res_341_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = lean_unsigned_to_nat(0u);
v___x_343_ = lean_mk_empty_array_with_capacity(v___x_342_);
return v___x_343_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1(void){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_344_ = l_Lean_Server_RequestCancellation_requestCancelled;
v___x_345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_345_, 0, v___x_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(lean_object* v_uri_346_, lean_object* v_pos_347_, lean_object* v_completionInfoPos_348_, lean_object* v_ctx_349_, lean_object* v_lctx_350_, lean_object* v_x_351_, lean_object* v_a_352_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___f_356_; lean_object* v___x_357_; 
v___x_354_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_354_, 0, v_uri_346_);
lean_ctor_set(v___x_354_, 1, v_pos_347_);
lean_ctor_set(v___x_354_, 2, v_completionInfoPos_348_);
v___x_355_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0);
lean_inc_ref(v_a_352_);
v___f_356_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___lam__0___boxed), 9, 4);
lean_closure_set(v___f_356_, 0, v___x_355_);
lean_closure_set(v___f_356_, 1, v_x_351_);
lean_closure_set(v___f_356_, 2, v___x_354_);
lean_closure_set(v___f_356_, 3, v_a_352_);
v___x_357_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_349_, v_lctx_350_, v___f_356_);
if (lean_obj_tag(v___x_357_) == 0)
{
lean_object* v_a_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_378_; 
v_a_358_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_378_ == 0)
{
v___x_360_ = v___x_357_;
v_isShared_361_ = v_isSharedCheck_378_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_a_358_);
lean_dec(v___x_357_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_378_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
if (lean_obj_tag(v_a_358_) == 0)
{
lean_object* v___x_362_; lean_object* v___x_364_; 
lean_dec_ref(v_a_358_);
v___x_362_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__1);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v___x_362_);
v___x_364_ = v___x_360_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v___x_362_);
v___x_364_ = v_reuseFailAlloc_365_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
return v___x_364_;
}
}
else
{
lean_object* v_a_366_; lean_object* v___x_368_; uint8_t v_isShared_369_; uint8_t v_isSharedCheck_377_; 
v_a_366_ = lean_ctor_get(v_a_358_, 0);
v_isSharedCheck_377_ = !lean_is_exclusive(v_a_358_);
if (v_isSharedCheck_377_ == 0)
{
v___x_368_ = v_a_358_;
v_isShared_369_ = v_isSharedCheck_377_;
goto v_resetjp_367_;
}
else
{
lean_inc(v_a_366_);
lean_dec(v_a_358_);
v___x_368_ = lean_box(0);
v_isShared_369_ = v_isSharedCheck_377_;
goto v_resetjp_367_;
}
v_resetjp_367_:
{
lean_object* v_snd_370_; lean_object* v___x_372_; 
v_snd_370_ = lean_ctor_get(v_a_366_, 1);
lean_inc(v_snd_370_);
lean_dec(v_a_366_);
if (v_isShared_369_ == 0)
{
lean_ctor_set(v___x_368_, 0, v_snd_370_);
v___x_372_ = v___x_368_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_snd_370_);
v___x_372_ = v_reuseFailAlloc_376_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
lean_object* v___x_374_; 
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 0, v___x_372_);
v___x_374_ = v___x_360_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v___x_372_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
}
}
else
{
lean_object* v_a_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_386_; 
v_a_379_ = lean_ctor_get(v___x_357_, 0);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_357_);
if (v_isSharedCheck_386_ == 0)
{
v___x_381_ = v___x_357_;
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_a_379_);
lean_dec(v___x_357_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_386_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_384_; 
if (v_isShared_382_ == 0)
{
v___x_384_ = v___x_381_;
goto v_reusejp_383_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v_a_379_);
v___x_384_ = v_reuseFailAlloc_385_;
goto v_reusejp_383_;
}
v_reusejp_383_:
{
return v___x_384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___boxed(lean_object* v_uri_387_, lean_object* v_pos_388_, lean_object* v_completionInfoPos_389_, lean_object* v_ctx_390_, lean_object* v_lctx_391_, lean_object* v_x_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_387_, v_pos_388_, v_completionInfoPos_389_, v_ctx_390_, v_lctx_391_, v_x_392_, v_a_393_);
lean_dec_ref(v_a_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(lean_object* v_declName_396_, lean_object* v_a_397_){
_start:
{
lean_object* v___x_399_; 
lean_inc(v_declName_396_);
v___x_399_ = lean_private_to_user_name(v_declName_396_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v___x_400_; lean_object* v___x_401_; 
v___x_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_400_, 0, v_declName_396_);
v___x_401_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_401_, 0, v___x_400_);
return v___x_401_;
}
else
{
lean_object* v_val_402_; lean_object* v___x_403_; lean_object* v_env_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v_val_402_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_val_402_);
v___x_403_ = lean_st_ref_get(v_a_397_);
v_env_404_ = lean_ctor_get(v___x_403_, 0);
lean_inc_ref(v_env_404_);
lean_dec(v___x_403_);
v___x_405_ = l_Lean_mkPrivateName(v_env_404_, v_val_402_);
lean_dec_ref(v_env_404_);
v___x_406_ = lean_name_eq(v___x_405_, v_declName_396_);
lean_dec(v_declName_396_);
lean_dec(v___x_405_);
if (v___x_406_ == 0)
{
lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_414_; 
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_399_, 0);
lean_dec(v_unused_415_);
v___x_408_ = v___x_399_;
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
else
{
lean_dec(v___x_399_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_414_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_410_ = lean_box(0);
if (v_isShared_409_ == 0)
{
lean_ctor_set_tag(v___x_408_, 0);
lean_ctor_set(v___x_408_, 0, v___x_410_);
v___x_412_ = v___x_408_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
else
{
lean_object* v___x_416_; 
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_399_);
return v___x_416_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg___boxed(lean_object* v_declName_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_417_, v_a_418_);
lean_dec(v_a_418_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(lean_object* v_declName_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_421_, v_a_425_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___boxed(lean_object* v_declName_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f(v_declName_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(lean_object* v_ns_435_, lean_object* v_id_436_, uint8_t v_danglingDot_437_, lean_object* v_declName_438_, lean_object* v_a_439_){
_start:
{
lean_object* v___x_444_; lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_506_; 
v___x_444_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_438_, v_a_439_);
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_506_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_506_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_506_;
goto v_resetjp_446_;
}
v___jp_441_:
{
lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_442_ = lean_box(0);
v___x_443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_443_, 0, v___x_442_);
return v___x_443_;
}
v_resetjp_446_:
{
if (lean_obj_tag(v_a_445_) == 1)
{
lean_object* v_val_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_501_; 
v_val_449_ = lean_ctor_get(v_a_445_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v_a_445_);
if (v_isSharedCheck_501_ == 0)
{
v___x_451_ = v_a_445_;
v_isShared_452_ = v_isSharedCheck_501_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_val_449_);
lean_dec(v_a_445_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_501_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
uint8_t v___x_453_; 
v___x_453_ = l_Lean_Name_isPrefixOf(v_ns_435_, v_val_449_);
if (v___x_453_ == 0)
{
lean_object* v___x_454_; lean_object* v___x_456_; 
lean_del_object(v___x_451_);
lean_dec(v_val_449_);
v___x_454_ = lean_box(0);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_454_);
v___x_456_ = v___x_447_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v___x_454_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
else
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = lean_box(0);
v___x_459_ = l_Lean_Name_replacePrefix(v_val_449_, v_ns_435_, v___x_458_);
if (v_danglingDot_437_ == 0)
{
if (lean_obj_tag(v_id_436_) == 1)
{
if (lean_obj_tag(v___x_459_) == 1)
{
lean_object* v_pre_460_; lean_object* v_str_461_; lean_object* v_pre_462_; lean_object* v_str_463_; uint8_t v___x_464_; 
v_pre_460_ = lean_ctor_get(v_id_436_, 0);
v_str_461_ = lean_ctor_get(v_id_436_, 1);
v_pre_462_ = lean_ctor_get(v___x_459_, 0);
lean_inc(v_pre_462_);
v_str_463_ = lean_ctor_get(v___x_459_, 1);
lean_inc_ref(v_str_463_);
v___x_464_ = lean_name_eq(v_pre_460_, v_pre_462_);
lean_dec(v_pre_462_);
if (v___x_464_ == 0)
{
uint8_t v___x_465_; 
v___x_465_ = l_Lean_Name_isAnonymous(v_pre_460_);
if (v___x_465_ == 0)
{
lean_dec_ref(v_str_463_);
lean_dec_ref(v___x_459_);
lean_del_object(v___x_451_);
lean_del_object(v___x_447_);
goto v___jp_441_;
}
else
{
uint8_t v___x_466_; 
v___x_466_ = l_String_charactersIn(v_str_461_, v_str_463_);
lean_dec_ref(v_str_463_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; lean_object* v___x_469_; 
lean_dec_ref(v___x_459_);
lean_del_object(v___x_451_);
v___x_467_ = lean_box(0);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_467_);
v___x_469_ = v___x_447_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v___x_467_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
else
{
lean_object* v___x_472_; 
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_459_);
v___x_472_ = v___x_451_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_459_);
v___x_472_ = v_reuseFailAlloc_476_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
lean_object* v___x_474_; 
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_472_);
v___x_474_ = v___x_447_;
goto v_reusejp_473_;
}
else
{
lean_object* v_reuseFailAlloc_475_; 
v_reuseFailAlloc_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_475_, 0, v___x_472_);
v___x_474_ = v_reuseFailAlloc_475_;
goto v_reusejp_473_;
}
v_reusejp_473_:
{
return v___x_474_;
}
}
}
}
}
else
{
uint8_t v___x_477_; 
lean_dec_ref(v___x_459_);
v___x_477_ = l_String_charactersIn(v_str_461_, v_str_463_);
if (v___x_477_ == 0)
{
lean_object* v___x_478_; lean_object* v___x_480_; 
lean_dec_ref(v_str_463_);
lean_del_object(v___x_451_);
v___x_478_ = lean_box(0);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_478_);
v___x_480_ = v___x_447_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_478_);
v___x_480_ = v_reuseFailAlloc_481_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
return v___x_480_;
}
}
else
{
lean_object* v___x_482_; lean_object* v___x_484_; 
v___x_482_ = l_Lean_Name_str___override(v___x_458_, v_str_463_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_482_);
v___x_484_ = v___x_451_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v___x_482_);
v___x_484_ = v_reuseFailAlloc_488_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
lean_object* v___x_486_; 
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_484_);
v___x_486_ = v___x_447_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
}
else
{
lean_dec(v___x_459_);
lean_del_object(v___x_451_);
lean_del_object(v___x_447_);
goto v___jp_441_;
}
}
else
{
lean_dec(v___x_459_);
lean_del_object(v___x_451_);
lean_del_object(v___x_447_);
goto v___jp_441_;
}
}
else
{
uint8_t v___x_489_; 
v___x_489_ = l_Lean_Name_isPrefixOf(v_id_436_, v___x_459_);
if (v___x_489_ == 0)
{
lean_dec(v___x_459_);
lean_del_object(v___x_451_);
lean_del_object(v___x_447_);
goto v___jp_441_;
}
else
{
lean_object* v___x_490_; uint8_t v___y_492_; uint8_t v___x_499_; 
v___x_490_ = l_Lean_Name_replacePrefix(v___x_459_, v_id_436_, v___x_458_);
v___x_499_ = l_Lean_Name_isAtomic(v___x_490_);
if (v___x_499_ == 0)
{
v___y_492_ = v___x_499_;
goto v___jp_491_;
}
else
{
uint8_t v___x_500_; 
v___x_500_ = l_Lean_Name_isAnonymous(v___x_490_);
if (v___x_500_ == 0)
{
v___y_492_ = v___x_499_;
goto v___jp_491_;
}
else
{
lean_dec(v___x_490_);
lean_del_object(v___x_451_);
lean_del_object(v___x_447_);
goto v___jp_441_;
}
}
v___jp_491_:
{
if (v___y_492_ == 0)
{
lean_dec(v___x_490_);
lean_del_object(v___x_451_);
lean_del_object(v___x_447_);
goto v___jp_441_;
}
else
{
lean_object* v___x_494_; 
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 0, v___x_490_);
v___x_494_ = v___x_451_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_490_);
v___x_494_ = v_reuseFailAlloc_498_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_496_; 
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_494_);
v___x_496_ = v___x_447_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_494_);
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
}
}
}
}
}
else
{
lean_object* v___x_502_; lean_object* v___x_504_; 
lean_dec(v_a_445_);
v___x_502_ = lean_box(0);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_502_);
v___x_504_ = v___x_447_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg___boxed(lean_object* v_ns_507_, lean_object* v_id_508_, lean_object* v_danglingDot_509_, lean_object* v_declName_510_, lean_object* v_a_511_, lean_object* v_a_512_){
_start:
{
uint8_t v_danglingDot_boxed_513_; lean_object* v_res_514_; 
v_danglingDot_boxed_513_ = lean_unbox(v_danglingDot_509_);
v_res_514_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_507_, v_id_508_, v_danglingDot_boxed_513_, v_declName_510_, v_a_511_);
lean_dec(v_a_511_);
lean_dec(v_id_508_);
lean_dec(v_ns_507_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(lean_object* v_ns_515_, lean_object* v_id_516_, uint8_t v_danglingDot_517_, lean_object* v_declName_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_){
_start:
{
lean_object* v___x_524_; 
v___x_524_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_515_, v_id_516_, v_danglingDot_517_, v_declName_518_, v_a_522_);
return v___x_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___boxed(lean_object* v_ns_525_, lean_object* v_id_526_, lean_object* v_danglingDot_527_, lean_object* v_declName_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_){
_start:
{
uint8_t v_danglingDot_boxed_534_; lean_object* v_res_535_; 
v_danglingDot_boxed_534_ = lean_unbox(v_danglingDot_527_);
v_res_535_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f(v_ns_525_, v_id_526_, v_danglingDot_boxed_534_, v_declName_528_, v_a_529_, v_a_530_, v_a_531_, v_a_532_);
lean_dec(v_a_532_);
lean_dec_ref(v_a_531_);
lean_dec(v_a_530_);
lean_dec_ref(v_a_529_);
lean_dec(v_id_526_);
lean_dec(v_ns_525_);
return v_res_535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0(lean_object* v___y_536_, lean_object* v_toPure_537_, lean_object* v_a_538_){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; 
v___x_539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_539_, 0, v_a_538_);
lean_ctor_set(v___x_539_, 1, v___y_536_);
v___x_540_ = lean_apply_2(v_toPure_537_, lean_box(0), v___x_539_);
return v___x_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1(lean_object* v_f_541_, lean_object* v_decl_542_, lean_object* v_ci_543_, lean_object* v_toPure_544_, lean_object* v_toBind_545_, lean_object* v_____r_546_, lean_object* v___y_547_){
_start:
{
lean_object* v___x_548_; lean_object* v___f_549_; lean_object* v___x_550_; 
v___x_548_ = lean_apply_2(v_f_541_, v_decl_542_, v_ci_543_);
v___f_549_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__0), 3, 2);
lean_closure_set(v___f_549_, 0, v___y_547_);
lean_closure_set(v___f_549_, 1, v_toPure_544_);
v___x_550_ = lean_apply_4(v_toBind_545_, lean_box(0), lean_box(0), v___x_548_, v___f_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2(lean_object* v___f_551_, lean_object* v_____x_552_){
_start:
{
lean_object* v_fst_553_; lean_object* v_snd_554_; lean_object* v___x_555_; 
v_fst_553_ = lean_ctor_get(v_____x_552_, 0);
lean_inc(v_fst_553_);
v_snd_554_ = lean_ctor_get(v_____x_552_, 1);
lean_inc(v_snd_554_);
lean_dec_ref(v_____x_552_);
v___x_555_ = lean_apply_2(v___f_551_, v_fst_553_, v_snd_554_);
return v___x_555_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = lean_unsigned_to_nat(0u);
v___x_557_ = lean_box(0);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___x_556_);
return v___x_558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(lean_object* v_toPure_559_, lean_object* v_toBind_560_, lean_object* v___f_561_, lean_object* v_____x_562_){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___closed__0);
v___x_564_ = lean_apply_2(v_toPure_559_, lean_box(0), v___x_563_);
v___x_565_ = lean_apply_4(v_toBind_560_, lean_box(0), lean_box(0), v___x_564_, v___f_561_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed(lean_object* v_toPure_566_, lean_object* v_toBind_567_, lean_object* v___f_568_, lean_object* v_____x_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3(v_toPure_566_, v_toBind_567_, v___f_568_, v_____x_569_);
lean_dec_ref(v_____x_569_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4(lean_object* v_snd_571_, lean_object* v_toPure_572_, lean_object* v_a_573_){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v_a_573_);
lean_ctor_set(v___x_574_, 1, v_snd_571_);
v___x_575_ = lean_apply_2(v_toPure_572_, lean_box(0), v___x_574_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5(lean_object* v___f_576_, lean_object* v_toPure_577_, lean_object* v_toBind_578_, lean_object* v_inst_579_, lean_object* v___f_580_, lean_object* v_____x_581_){
_start:
{
lean_object* v_fst_582_; lean_object* v_snd_583_; lean_object* v___x_584_; uint8_t v___x_585_; 
v_fst_582_ = lean_ctor_get(v_____x_581_, 0);
lean_inc(v_fst_582_);
v_snd_583_ = lean_ctor_get(v_____x_581_, 1);
lean_inc(v_snd_583_);
lean_dec_ref(v_____x_581_);
v___x_584_ = lean_unsigned_to_nat(10000u);
v___x_585_ = lean_nat_dec_le(v___x_584_, v_fst_582_);
lean_dec(v_fst_582_);
if (v___x_585_ == 0)
{
lean_object* v___x_586_; lean_object* v___x_587_; 
lean_dec(v___f_580_);
lean_dec(v_inst_579_);
lean_dec(v_toBind_578_);
lean_dec(v_toPure_577_);
v___x_586_ = lean_box(0);
v___x_587_ = lean_apply_2(v___f_576_, v___x_586_, v_snd_583_);
return v___x_587_;
}
else
{
lean_object* v___f_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
lean_dec(v___f_576_);
v___f_588_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__4), 3, 2);
lean_closure_set(v___f_588_, 0, v_snd_583_);
lean_closure_set(v___f_588_, 1, v_toPure_577_);
lean_inc(v_toBind_578_);
v___x_589_ = lean_apply_4(v_toBind_578_, lean_box(0), lean_box(0), v_inst_579_, v___f_588_);
v___x_590_ = lean_apply_4(v_toBind_578_, lean_box(0), lean_box(0), v___x_589_, v___f_580_);
return v___x_590_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6(lean_object* v_toPure_591_, lean_object* v_toBind_592_, lean_object* v___f_593_, lean_object* v_____x_594_){
_start:
{
lean_object* v_snd_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_604_; 
v_snd_595_ = lean_ctor_get(v_____x_594_, 1);
v_isSharedCheck_604_ = !lean_is_exclusive(v_____x_594_);
if (v_isSharedCheck_604_ == 0)
{
lean_object* v_unused_605_; 
v_unused_605_ = lean_ctor_get(v_____x_594_, 0);
lean_dec(v_unused_605_);
v___x_597_ = v_____x_594_;
v_isShared_598_ = v_isSharedCheck_604_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_snd_595_);
lean_dec(v_____x_594_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_604_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
lean_inc(v_snd_595_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 0, v_snd_595_);
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_snd_595_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_snd_595_);
v___x_600_ = v_reuseFailAlloc_603_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_apply_2(v_toPure_591_, lean_box(0), v___x_600_);
v___x_602_ = lean_apply_4(v_toBind_592_, lean_box(0), lean_box(0), v___x_601_, v___f_593_);
return v___x_602_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(lean_object* v_f_606_, lean_object* v_toPure_607_, lean_object* v_toBind_608_, lean_object* v_inst_609_, lean_object* v_decl_610_, lean_object* v_ci_611_, lean_object* v___y_612_){
_start:
{
lean_object* v___f_613_; lean_object* v___f_614_; lean_object* v___f_615_; lean_object* v___f_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
lean_inc_n(v_toBind_608_, 4);
lean_inc_n(v_toPure_607_, 4);
v___f_613_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__1), 7, 5);
lean_closure_set(v___f_613_, 0, v_f_606_);
lean_closure_set(v___f_613_, 1, v_decl_610_);
lean_closure_set(v___f_613_, 2, v_ci_611_);
lean_closure_set(v___f_613_, 3, v_toPure_607_);
lean_closure_set(v___f_613_, 4, v_toBind_608_);
lean_inc_ref(v___f_613_);
v___f_614_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_614_, 0, v___f_613_);
v___f_615_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__3___boxed), 4, 3);
lean_closure_set(v___f_615_, 0, v_toPure_607_);
lean_closure_set(v___f_615_, 1, v_toBind_608_);
lean_closure_set(v___f_615_, 2, v___f_614_);
v___f_616_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__5), 6, 5);
lean_closure_set(v___f_616_, 0, v___f_613_);
lean_closure_set(v___f_616_, 1, v_toPure_607_);
lean_closure_set(v___f_616_, 2, v_toBind_608_);
lean_closure_set(v___f_616_, 3, v_inst_609_);
lean_closure_set(v___f_616_, 4, v___f_615_);
v___f_617_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__6), 4, 3);
lean_closure_set(v___f_617_, 0, v_toPure_607_);
lean_closure_set(v___f_617_, 1, v_toBind_608_);
lean_closure_set(v___f_617_, 2, v___f_616_);
v___x_618_ = lean_box(0);
v___x_619_ = lean_unsigned_to_nat(1u);
v___x_620_ = lean_nat_add(v___y_612_, v___x_619_);
v___x_621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_618_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = lean_apply_2(v_toPure_607_, lean_box(0), v___x_621_);
v___x_623_ = lean_apply_4(v_toBind_608_, lean_box(0), lean_box(0), v___x_622_, v___f_617_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed(lean_object* v_f_624_, lean_object* v_toPure_625_, lean_object* v_toBind_626_, lean_object* v_inst_627_, lean_object* v_decl_628_, lean_object* v_ci_629_, lean_object* v___y_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7(v_f_624_, v_toPure_625_, v_toBind_626_, v_inst_627_, v_decl_628_, v_ci_629_, v___y_630_);
lean_dec(v___y_630_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(lean_object* v_toPure_632_, lean_object* v_____x_633_){
_start:
{
lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_634_ = lean_box(0);
v___x_635_ = lean_apply_2(v_toPure_632_, lean_box(0), v___x_634_);
return v___x_635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed(lean_object* v_toPure_636_, lean_object* v_____x_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8(v_toPure_636_, v_____x_637_);
lean_dec_ref(v_____x_637_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(lean_object* v_inst_639_, lean_object* v_inst_640_, lean_object* v_inst_641_, lean_object* v_inst_642_, lean_object* v_f_643_){
_start:
{
lean_object* v_toApplicative_644_; lean_object* v_toBind_645_; lean_object* v___f_646_; lean_object* v___f_647_; lean_object* v___f_648_; lean_object* v___f_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v_getEnv_656_; lean_object* v_modifyEnv_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_675_; 
v_toApplicative_644_ = lean_ctor_get(v_inst_639_, 0);
lean_inc_ref(v_toApplicative_644_);
v_toBind_645_ = lean_ctor_get(v_inst_639_, 1);
lean_inc(v_toBind_645_);
lean_inc_ref_n(v_inst_639_, 7);
v___f_646_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_646_, 0, v_inst_639_);
v___f_647_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_647_, 0, v_inst_639_);
v___f_648_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_648_, 0, v_inst_639_);
v___f_649_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_649_, 0, v_inst_639_);
v___x_650_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_650_, 0, lean_box(0));
lean_closure_set(v___x_650_, 1, lean_box(0));
lean_closure_set(v___x_650_, 2, v_inst_639_);
v___x_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_651_, 0, v___x_650_);
lean_ctor_set(v___x_651_, 1, v___f_646_);
v___x_652_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_652_, 0, lean_box(0));
lean_closure_set(v___x_652_, 1, lean_box(0));
lean_closure_set(v___x_652_, 2, v_inst_639_);
v___x_653_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_653_, 0, v___x_651_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
lean_ctor_set(v___x_653_, 2, v___f_647_);
lean_ctor_set(v___x_653_, 3, v___f_648_);
lean_ctor_set(v___x_653_, 4, v___f_649_);
v___x_654_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_654_, 0, lean_box(0));
lean_closure_set(v___x_654_, 1, lean_box(0));
lean_closure_set(v___x_654_, 2, v_inst_639_);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_653_);
lean_ctor_set(v___x_655_, 1, v___x_654_);
v_getEnv_656_ = lean_ctor_get(v_inst_640_, 0);
v_modifyEnv_657_ = lean_ctor_get(v_inst_640_, 1);
v_isSharedCheck_675_ = !lean_is_exclusive(v_inst_640_);
if (v_isSharedCheck_675_ == 0)
{
v___x_659_ = v_inst_640_;
v_isShared_660_ = v_isSharedCheck_675_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_modifyEnv_657_);
lean_inc(v_getEnv_656_);
lean_dec(v_inst_640_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_675_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___f_662_; lean_object* v___x_663_; lean_object* v___x_665_; 
lean_inc_ref(v_inst_639_);
v___x_661_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 3);
lean_closure_set(v___x_661_, 0, lean_box(0));
lean_closure_set(v___x_661_, 1, lean_box(0));
lean_closure_set(v___x_661_, 2, v_inst_639_);
lean_inc_ref(v___x_661_);
v___f_662_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_662_, 0, v_modifyEnv_657_);
lean_closure_set(v___f_662_, 1, v___x_661_);
v___x_663_ = lean_alloc_closure((void*)(l_StateT_lift), 6, 5);
lean_closure_set(v___x_663_, 0, lean_box(0));
lean_closure_set(v___x_663_, 1, lean_box(0));
lean_closure_set(v___x_663_, 2, v_inst_639_);
lean_closure_set(v___x_663_, 3, lean_box(0));
lean_closure_set(v___x_663_, 4, v_getEnv_656_);
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 1, v___f_662_);
lean_ctor_set(v___x_659_, 0, v___x_663_);
v___x_665_ = v___x_659_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_674_, 1, v___f_662_);
v___x_665_ = v_reuseFailAlloc_674_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
lean_object* v_toPure_666_; lean_object* v___f_667_; lean_object* v___f_668_; lean_object* v___f_669_; lean_object* v___x_670_; lean_object* v___x_450__overap_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
v_toPure_666_ = lean_ctor_get(v_toApplicative_644_, 1);
lean_inc_n(v_toPure_666_, 2);
lean_dec_ref(v_toApplicative_644_);
lean_inc(v_toBind_645_);
v___f_667_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__7___boxed), 7, 4);
lean_closure_set(v___f_667_, 0, v_f_643_);
lean_closure_set(v___f_667_, 1, v_toPure_666_);
lean_closure_set(v___f_667_, 2, v_toBind_645_);
lean_closure_set(v___f_667_, 3, v_inst_642_);
v___f_668_ = lean_alloc_closure((void*)(l_instMonadLiftTOfMonadLift___redArg___lam__0), 4, 2);
lean_closure_set(v___f_668_, 0, v_inst_641_);
lean_closure_set(v___f_668_, 1, v___x_661_);
v___f_669_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg___lam__8___boxed), 2, 1);
lean_closure_set(v___f_669_, 0, v_toPure_666_);
v___x_670_ = lean_unsigned_to_nat(0u);
v___x_450__overap_671_ = l_Lean_Server_Completion_forEligibleDeclsM___redArg(v___x_655_, v___x_665_, v___f_668_, v___f_667_);
v___x_672_ = lean_apply_1(v___x_450__overap_671_, v___x_670_);
v___x_673_ = lean_apply_4(v_toBind_645_, lean_box(0), lean_box(0), v___x_672_, v___f_669_);
return v___x_673_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM(lean_object* v_m_676_, lean_object* v_inst_677_, lean_object* v_inst_678_, lean_object* v_inst_679_, lean_object* v_inst_680_, lean_object* v_f_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___redArg(v_inst_677_, v_inst_678_, v_inst_679_, v_inst_680_, v_f_681_);
return v___x_682_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(lean_object* v_id_683_, lean_object* v_declName_684_, uint8_t v_danglingDot_685_){
_start:
{
if (v_danglingDot_685_ == 0)
{
if (lean_obj_tag(v_id_683_) == 1)
{
lean_object* v_pre_686_; 
v_pre_686_ = lean_ctor_get(v_id_683_, 0);
if (lean_obj_tag(v_pre_686_) == 0)
{
if (lean_obj_tag(v_declName_684_) == 1)
{
lean_object* v_pre_687_; 
v_pre_687_ = lean_ctor_get(v_declName_684_, 0);
if (lean_obj_tag(v_pre_687_) == 0)
{
lean_object* v_str_688_; lean_object* v_str_689_; uint8_t v___x_690_; 
v_str_688_ = lean_ctor_get(v_id_683_, 1);
v_str_689_ = lean_ctor_get(v_declName_684_, 1);
v___x_690_ = l_String_charactersIn(v_str_688_, v_str_689_);
return v___x_690_;
}
else
{
return v_danglingDot_685_;
}
}
else
{
return v_danglingDot_685_;
}
}
else
{
return v_danglingDot_685_;
}
}
else
{
return v_danglingDot_685_;
}
}
else
{
uint8_t v___x_691_; 
v___x_691_ = 0;
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic___boxed(lean_object* v_id_692_, lean_object* v_declName_693_, lean_object* v_danglingDot_694_){
_start:
{
uint8_t v_danglingDot_boxed_695_; uint8_t v_res_696_; lean_object* v_r_697_; 
v_danglingDot_boxed_695_ = lean_unbox(v_danglingDot_694_);
v_res_696_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_692_, v_declName_693_, v_danglingDot_boxed_695_);
lean_dec(v_declName_693_);
lean_dec(v_id_692_);
v_r_697_ = lean_box(v_res_696_);
return v_r_697_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = lean_box(0);
v___x_700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_700_, 0, v___x_699_);
lean_ctor_set(v___x_700_, 1, v___x_698_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(lean_object* v_msg_701_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = lean_obj_once(&l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0, &l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0___closed__0);
v___x_703_ = lean_panic_fn_borrowed(v___x_702_, v_msg_701_);
return v___x_703_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0(void){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = lean_mk_string_unchecked("Lean.Server.Completion.CompletionCollectors", 43, 43);
return v___x_704_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1(void){
_start:
{
lean_object* v___x_705_; 
v___x_705_ = lean_mk_string_unchecked("_private.Lean.Server.Completion.CompletionCollectors.0.Lean.Server.Completion.truncate.go", 89, 89);
return v___x_705_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2(void){
_start:
{
lean_object* v___x_706_; 
v___x_706_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_706_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3(void){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_707_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__2);
v___x_708_ = lean_unsigned_to_nat(26u);
v___x_709_ = lean_unsigned_to_nat(177u);
v___x_710_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__1);
v___x_711_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__0);
v___x_712_ = l_mkPanicMessageWithDecl(v___x_711_, v___x_710_, v___x_709_, v___x_708_, v___x_707_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(lean_object* v_newLen_713_, lean_object* v_id_714_){
_start:
{
switch(lean_obj_tag(v_id_714_))
{
case 0:
{
lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec(v_newLen_713_);
v___x_715_ = lean_unsigned_to_nat(0u);
v___x_716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_716_, 0, v_id_714_);
lean_ctor_set(v___x_716_, 1, v___x_715_);
return v___x_716_;
}
case 1:
{
lean_object* v_pre_717_; lean_object* v_str_718_; lean_object* v___x_719_; lean_object* v_snd_720_; lean_object* v___y_722_; lean_object* v___x_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v_pre_717_ = lean_ctor_get(v_id_714_, 0);
v_str_718_ = lean_ctor_get(v_id_714_, 1);
lean_inc(v_pre_717_);
lean_inc(v_newLen_713_);
v___x_719_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_713_, v_pre_717_);
v_snd_720_ = lean_ctor_get(v___x_719_, 1);
lean_inc(v_snd_720_);
v___x_734_ = lean_unsigned_to_nat(1u);
v___x_735_ = lean_nat_add(v_snd_720_, v___x_734_);
v___x_736_ = lean_nat_dec_le(v_newLen_713_, v___x_735_);
lean_dec(v___x_735_);
if (v___x_736_ == 0)
{
uint8_t v___x_737_; 
lean_dec_ref(v___x_719_);
v___x_737_ = l_Lean_Name_isAnonymous(v_pre_717_);
if (v___x_737_ == 0)
{
v___y_722_ = v___x_734_;
goto v___jp_721_;
}
else
{
lean_object* v___x_738_; 
v___x_738_ = lean_unsigned_to_nat(0u);
v___y_722_ = v___x_738_;
goto v___jp_721_;
}
}
else
{
lean_dec(v_snd_720_);
lean_dec_ref(v_id_714_);
lean_dec(v_newLen_713_);
return v___x_719_;
}
v___jp_721_:
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v_len_x27_725_; uint8_t v___x_726_; 
v___x_723_ = lean_nat_add(v_snd_720_, v___y_722_);
v___x_724_ = lean_string_length(v_str_718_);
v_len_x27_725_ = lean_nat_add(v___x_723_, v___x_724_);
lean_dec(v___x_723_);
v___x_726_ = lean_nat_dec_le(v_len_x27_725_, v_newLen_713_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
lean_inc_ref(v_str_718_);
lean_inc(v_pre_717_);
lean_dec(v_len_x27_725_);
lean_dec_ref(v_id_714_);
v___x_727_ = lean_unsigned_to_nat(0u);
v___x_728_ = lean_nat_sub(v_newLen_713_, v___y_722_);
v___x_729_ = lean_nat_sub(v___x_728_, v_snd_720_);
lean_dec(v_snd_720_);
lean_dec(v___x_728_);
v___x_730_ = lean_string_utf8_extract(v_str_718_, v___x_727_, v___x_729_);
lean_dec(v___x_729_);
lean_dec_ref(v_str_718_);
v___x_731_ = l_Lean_Name_str___override(v_pre_717_, v___x_730_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_731_);
lean_ctor_set(v___x_732_, 1, v_newLen_713_);
return v___x_732_;
}
else
{
lean_object* v___x_733_; 
lean_dec(v_snd_720_);
lean_dec(v_newLen_713_);
v___x_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_733_, 0, v_id_714_);
lean_ctor_set(v___x_733_, 1, v_len_x27_725_);
return v___x_733_;
}
}
}
default: 
{
lean_object* v___x_739_; lean_object* v___x_740_; 
lean_dec_ref(v_id_714_);
lean_dec(v_newLen_713_);
v___x_739_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go___closed__3);
v___x_740_ = l_panic___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go_spec__0(v___x_739_);
return v___x_740_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(lean_object* v_id_741_, lean_object* v_newLen_742_){
_start:
{
lean_object* v___x_743_; lean_object* v_fst_744_; 
v___x_743_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate_go(v_newLen_742_, v_id_741_);
v_fst_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_fst_744_);
lean_dec_ref(v___x_743_);
return v_fst_744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(lean_object* v_matchUsingNamespace_745_, lean_object* v_ns_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_){
_start:
{
if (lean_obj_tag(v_ns_746_) == 1)
{
lean_object* v_pre_756_; lean_object* v___x_757_; 
v_pre_756_ = lean_ctor_get(v_ns_746_, 0);
lean_inc(v_pre_756_);
lean_inc_ref(v_matchUsingNamespace_745_);
lean_inc(v_a_754_);
lean_inc_ref(v_a_753_);
lean_inc(v_a_752_);
lean_inc_ref(v_a_751_);
lean_inc_ref(v_a_750_);
lean_inc(v_a_749_);
lean_inc_ref(v_a_748_);
v___x_757_ = lean_apply_10(v_matchUsingNamespace_745_, v_ns_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_, v_a_752_, v_a_753_, v_a_754_, lean_box(0));
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; 
v_a_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_758_);
if (lean_obj_tag(v_a_758_) == 0)
{
lean_dec_ref(v_a_758_);
lean_dec(v_pre_756_);
lean_dec_ref(v_matchUsingNamespace_745_);
return v___x_757_;
}
else
{
lean_object* v_a_759_; lean_object* v_snd_760_; 
lean_dec_ref(v___x_757_);
v_a_759_ = lean_ctor_get(v_a_758_, 0);
lean_inc(v_a_759_);
lean_dec_ref(v_a_758_);
v_snd_760_ = lean_ctor_get(v_a_759_, 1);
lean_inc(v_snd_760_);
lean_dec(v_a_759_);
v_ns_746_ = v_pre_756_;
v_a_747_ = v_snd_760_;
goto _start;
}
}
else
{
lean_dec(v_pre_756_);
lean_dec_ref(v_matchUsingNamespace_745_);
return v___x_757_;
}
}
else
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
lean_dec(v_ns_746_);
lean_dec_ref(v_matchUsingNamespace_745_);
v___x_762_ = lean_box(0);
v___x_763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_763_, 0, v___x_762_);
lean_ctor_set(v___x_763_, 1, v_a_747_);
v___x_764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_764_, 0, v___x_763_);
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
return v___x_765_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces___boxed(lean_object* v_matchUsingNamespace_766_, lean_object* v_ns_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_766_, v_ns_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_, v_a_772_, v_a_773_, v_a_774_, v_a_775_);
lean_dec(v_a_775_);
lean_dec_ref(v_a_774_);
lean_dec(v_a_773_);
lean_dec_ref(v_a_772_);
lean_dec_ref(v_a_771_);
lean_dec(v_a_770_);
lean_dec_ref(v_a_769_);
return v_res_777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(lean_object* v_id_778_, uint8_t v_danglingDot_779_, lean_object* v_declName_780_, lean_object* v_ns_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v___x_791_; lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_813_; 
v___x_791_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_781_, v_id_778_, v_danglingDot_779_, v_declName_780_, v___y_789_);
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_813_ == 0)
{
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_813_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_813_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
if (lean_obj_tag(v_a_792_) == 1)
{
lean_object* v_val_796_; lean_object* v___x_797_; lean_object* v___y_799_; 
v_val_796_ = lean_ctor_get(v_a_792_, 0);
v___x_797_ = lean_box(0);
if (lean_obj_tag(v___y_782_) == 0)
{
v___y_799_ = v_a_792_;
goto v___jp_798_;
}
else
{
lean_object* v_val_805_; uint8_t v___x_806_; 
v_val_805_ = lean_ctor_get(v___y_782_, 0);
v___x_806_ = l_Lean_Name_isSuffixOf(v_val_796_, v_val_805_);
if (v___x_806_ == 0)
{
lean_dec_ref(v_a_792_);
v___y_799_ = v___y_782_;
goto v___jp_798_;
}
else
{
lean_dec_ref(v___y_782_);
v___y_799_ = v_a_792_;
goto v___jp_798_;
}
}
v___jp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_803_; 
v___x_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_800_, 0, v___x_797_);
lean_ctor_set(v___x_800_, 1, v___y_799_);
v___x_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_800_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_801_);
v___x_803_ = v___x_794_;
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
lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_811_; 
lean_dec(v_a_792_);
v___x_807_ = lean_box(0);
v___x_808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
lean_ctor_set(v___x_808_, 1, v___y_782_);
v___x_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_809_, 0, v___x_808_);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_809_);
v___x_811_ = v___x_794_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed(lean_object* v_id_814_, lean_object* v_danglingDot_815_, lean_object* v_declName_816_, lean_object* v_ns_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v_danglingDot_boxed_827_; lean_object* v_res_828_; 
v_danglingDot_boxed_827_ = lean_unbox(v_danglingDot_815_);
v_res_828_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_814_, v_danglingDot_boxed_827_, v_declName_816_, v_ns_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v_ns_817_);
lean_dec(v_id_814_);
return v_res_828_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(lean_object* v_a_829_, lean_object* v_x_830_){
_start:
{
if (lean_obj_tag(v_x_830_) == 0)
{
uint8_t v___x_831_; 
v___x_831_ = 0;
return v___x_831_;
}
else
{
lean_object* v_head_832_; lean_object* v_tail_833_; uint8_t v___x_834_; 
v_head_832_ = lean_ctor_get(v_x_830_, 0);
v_tail_833_ = lean_ctor_get(v_x_830_, 1);
v___x_834_ = lean_name_eq(v_a_829_, v_head_832_);
if (v___x_834_ == 0)
{
v_x_830_ = v_tail_833_;
goto _start;
}
else
{
return v___x_834_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0___boxed(lean_object* v_a_836_, lean_object* v_x_837_){
_start:
{
uint8_t v_res_838_; lean_object* v_r_839_; 
v_res_838_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_a_836_, v_x_837_);
lean_dec(v_x_837_);
lean_dec(v_a_836_);
v_r_839_ = lean_box(v_res_838_);
return v_r_839_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(lean_object* v_declName_840_, lean_object* v_id_841_, uint8_t v_danglingDot_842_, lean_object* v_as_x27_843_, lean_object* v_b_844_, lean_object* v___y_845_, lean_object* v___y_846_){
_start:
{
if (lean_obj_tag(v_as_x27_843_) == 0)
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; 
lean_dec(v_declName_840_);
v___x_848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_848_, 0, v_b_844_);
lean_ctor_set(v___x_848_, 1, v___y_845_);
v___x_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_849_, 0, v___x_848_);
v___x_850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
return v___x_850_;
}
else
{
lean_object* v_head_851_; lean_object* v_tail_852_; lean_object* v___x_853_; 
v_head_851_ = lean_ctor_get(v_as_x27_843_, 0);
v_tail_852_ = lean_ctor_get(v_as_x27_843_, 1);
v___x_853_ = lean_box(0);
if (lean_obj_tag(v_head_851_) == 0)
{
lean_object* v_ns_854_; lean_object* v_except_855_; uint8_t v___x_856_; 
v_ns_854_ = lean_ctor_get(v_head_851_, 0);
v_except_855_ = lean_ctor_get(v_head_851_, 1);
v___x_856_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_840_, v_except_855_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; lean_object* v_a_858_; 
lean_inc(v_declName_840_);
v___x_857_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_854_, v_id_841_, v_danglingDot_842_, v_declName_840_, v___y_846_);
v_a_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_a_858_);
lean_dec_ref(v___x_857_);
if (lean_obj_tag(v_a_858_) == 1)
{
if (lean_obj_tag(v___y_845_) == 0)
{
v_as_x27_843_ = v_tail_852_;
v_b_844_ = v___x_853_;
v___y_845_ = v_a_858_;
goto _start;
}
else
{
lean_object* v_val_860_; lean_object* v_val_861_; uint8_t v___x_862_; 
v_val_860_ = lean_ctor_get(v_a_858_, 0);
v_val_861_ = lean_ctor_get(v___y_845_, 0);
v___x_862_ = l_Lean_Name_isSuffixOf(v_val_860_, v_val_861_);
if (v___x_862_ == 0)
{
lean_dec_ref(v_a_858_);
v_as_x27_843_ = v_tail_852_;
v_b_844_ = v___x_853_;
goto _start;
}
else
{
lean_dec_ref(v___y_845_);
v_as_x27_843_ = v_tail_852_;
v_b_844_ = v___x_853_;
v___y_845_ = v_a_858_;
goto _start;
}
}
}
else
{
lean_dec(v_a_858_);
v_as_x27_843_ = v_tail_852_;
v_b_844_ = v___x_853_;
goto _start;
}
}
else
{
v_as_x27_843_ = v_tail_852_;
v_b_844_ = v___x_853_;
goto _start;
}
}
else
{
v_as_x27_843_ = v_tail_852_;
v_b_844_ = v___x_853_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg___boxed(lean_object* v_declName_868_, lean_object* v_id_869_, lean_object* v_danglingDot_870_, lean_object* v_as_x27_871_, lean_object* v_b_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
uint8_t v_danglingDot_boxed_876_; lean_object* v_res_877_; 
v_danglingDot_boxed_876_ = lean_unbox(v_danglingDot_870_);
v_res_877_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_868_, v_id_869_, v_danglingDot_boxed_876_, v_as_x27_871_, v_b_872_, v___y_873_, v___y_874_);
lean_dec(v___y_874_);
lean_dec(v_as_x27_871_);
lean_dec(v_id_869_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(lean_object* v_declName_878_, lean_object* v_id_879_, uint8_t v_danglingDot_880_, lean_object* v_as_881_, lean_object* v_as_x27_882_, lean_object* v_b_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
if (lean_obj_tag(v_as_x27_882_) == 0)
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec(v_declName_878_);
v___x_893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_893_, 0, v_b_883_);
lean_ctor_set(v___x_893_, 1, v___y_884_);
v___x_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_894_, 0, v___x_893_);
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
else
{
lean_object* v_head_896_; lean_object* v_tail_897_; lean_object* v___x_898_; 
v_head_896_ = lean_ctor_get(v_as_x27_882_, 0);
v_tail_897_ = lean_ctor_get(v_as_x27_882_, 1);
v___x_898_ = lean_box(0);
if (lean_obj_tag(v_head_896_) == 0)
{
lean_object* v_ns_899_; lean_object* v_except_900_; uint8_t v___x_901_; 
v_ns_899_ = lean_ctor_get(v_head_896_, 0);
v_except_900_ = lean_ctor_get(v_head_896_, 1);
v___x_901_ = l_List_elem___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__0(v_declName_878_, v_except_900_);
if (v___x_901_ == 0)
{
lean_object* v___x_902_; lean_object* v_a_903_; 
lean_inc(v_declName_878_);
v___x_902_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v_ns_899_, v_id_879_, v_danglingDot_880_, v_declName_878_, v___y_891_);
v_a_903_ = lean_ctor_get(v___x_902_, 0);
lean_inc(v_a_903_);
lean_dec_ref(v___x_902_);
if (lean_obj_tag(v_a_903_) == 1)
{
if (lean_obj_tag(v___y_884_) == 0)
{
lean_object* v___x_904_; 
v___x_904_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_878_, v_id_879_, v_danglingDot_880_, v_tail_897_, v___x_898_, v_a_903_, v___y_891_);
return v___x_904_;
}
else
{
lean_object* v_val_905_; lean_object* v_val_906_; uint8_t v___x_907_; 
v_val_905_ = lean_ctor_get(v_a_903_, 0);
v_val_906_ = lean_ctor_get(v___y_884_, 0);
v___x_907_ = l_Lean_Name_isSuffixOf(v_val_905_, v_val_906_);
if (v___x_907_ == 0)
{
lean_object* v___x_908_; 
lean_dec_ref(v_a_903_);
v___x_908_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_878_, v_id_879_, v_danglingDot_880_, v_tail_897_, v___x_898_, v___y_884_, v___y_891_);
return v___x_908_;
}
else
{
lean_object* v___x_909_; 
lean_dec_ref(v___y_884_);
v___x_909_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_878_, v_id_879_, v_danglingDot_880_, v_tail_897_, v___x_898_, v_a_903_, v___y_891_);
return v___x_909_;
}
}
}
else
{
lean_object* v___x_910_; 
lean_dec(v_a_903_);
v___x_910_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_878_, v_id_879_, v_danglingDot_880_, v_tail_897_, v___x_898_, v___y_884_, v___y_891_);
return v___x_910_;
}
}
else
{
lean_object* v___x_911_; 
v___x_911_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_878_, v_id_879_, v_danglingDot_880_, v_tail_897_, v___x_898_, v___y_884_, v___y_891_);
return v___x_911_;
}
}
else
{
lean_object* v___x_912_; 
v___x_912_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_878_, v_id_879_, v_danglingDot_880_, v_tail_897_, v___x_898_, v___y_884_, v___y_891_);
return v___x_912_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg___boxed(lean_object* v_declName_913_, lean_object* v_id_914_, lean_object* v_danglingDot_915_, lean_object* v_as_916_, lean_object* v_as_x27_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
uint8_t v_danglingDot_boxed_928_; lean_object* v_res_929_; 
v_danglingDot_boxed_928_ = lean_unbox(v_danglingDot_915_);
v_res_929_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_913_, v_id_914_, v_danglingDot_boxed_928_, v_as_916_, v_as_x27_917_, v_b_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_, v___y_926_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v_as_x27_917_);
lean_dec(v_as_916_);
lean_dec(v_id_914_);
return v_res_929_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(lean_object* v_ctx_930_, lean_object* v_declName_931_, lean_object* v_id_932_, uint8_t v_danglingDot_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_){
_start:
{
lean_object* v___y_943_; lean_object* v_toCommandContextInfo_980_; lean_object* v_currNamespace_981_; lean_object* v_openDecls_982_; lean_object* v___x_983_; lean_object* v_matchUsingNamespace_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v_toCommandContextInfo_980_ = lean_ctor_get(v_ctx_930_, 0);
lean_inc_ref(v_toCommandContextInfo_980_);
lean_dec_ref(v_ctx_930_);
v_currNamespace_981_ = lean_ctor_get(v_toCommandContextInfo_980_, 5);
lean_inc(v_currNamespace_981_);
v_openDecls_982_ = lean_ctor_get(v_toCommandContextInfo_980_, 6);
lean_inc(v_openDecls_982_);
lean_dec_ref(v_toCommandContextInfo_980_);
v___x_983_ = lean_box(v_danglingDot_933_);
lean_inc(v_declName_931_);
lean_inc(v_id_932_);
v_matchUsingNamespace_984_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0___boxed), 13, 3);
lean_closure_set(v_matchUsingNamespace_984_, 0, v_id_932_);
lean_closure_set(v_matchUsingNamespace_984_, 1, v___x_983_);
lean_closure_set(v_matchUsingNamespace_984_, 2, v_declName_931_);
v___x_985_ = lean_box(0);
v___x_986_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_visitNamespaces(v_matchUsingNamespace_984_, v_currNamespace_981_, v___x_985_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; 
v_a_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_a_987_);
if (lean_obj_tag(v_a_987_) == 0)
{
lean_dec_ref(v_a_987_);
lean_dec(v_openDecls_982_);
lean_dec(v_id_932_);
lean_dec(v_declName_931_);
v___y_943_ = v___x_986_;
goto v___jp_942_;
}
else
{
lean_object* v_a_988_; lean_object* v_snd_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
lean_dec_ref(v___x_986_);
v_a_988_ = lean_ctor_get(v_a_987_, 0);
lean_inc(v_a_988_);
lean_dec_ref(v_a_987_);
v_snd_989_ = lean_ctor_get(v_a_988_, 1);
lean_inc(v_snd_989_);
lean_dec(v_a_988_);
v___x_990_ = lean_box(0);
lean_inc(v_declName_931_);
v___x_991_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_931_, v_id_932_, v_danglingDot_933_, v_openDecls_982_, v_openDecls_982_, v___x_990_, v_snd_989_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_openDecls_982_);
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v_a_993_; lean_object* v_snd_994_; lean_object* v___x_995_; lean_object* v___x_996_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
lean_inc(v_a_992_);
lean_dec_ref(v___x_991_);
v_a_993_ = lean_ctor_get(v_a_992_, 0);
lean_inc(v_a_993_);
lean_dec(v_a_992_);
v_snd_994_ = lean_ctor_get(v_a_993_, 1);
lean_inc(v_snd_994_);
lean_dec(v_a_993_);
v___x_995_ = lean_box(0);
v___x_996_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___lam__0(v_id_932_, v_danglingDot_933_, v_declName_931_, v___x_995_, v_snd_994_, v_a_934_, v_a_935_, v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_);
lean_dec(v_id_932_);
v___y_943_ = v___x_996_;
goto v___jp_942_;
}
else
{
lean_dec(v_id_932_);
lean_dec(v_declName_931_);
v___y_943_ = v___x_991_;
goto v___jp_942_;
}
}
}
else
{
lean_dec(v_openDecls_982_);
lean_dec(v_id_932_);
lean_dec(v_declName_931_);
v___y_943_ = v___x_986_;
goto v___jp_942_;
}
v___jp_942_:
{
if (lean_obj_tag(v___y_943_) == 0)
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_971_; 
v_a_944_ = lean_ctor_get(v___y_943_, 0);
v_isSharedCheck_971_ = !lean_is_exclusive(v___y_943_);
if (v_isSharedCheck_971_ == 0)
{
v___x_946_ = v___y_943_;
v_isShared_947_ = v_isSharedCheck_971_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___y_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_971_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
if (lean_obj_tag(v_a_944_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_958_; 
v_a_948_ = lean_ctor_get(v_a_944_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v_a_944_);
if (v_isSharedCheck_958_ == 0)
{
v___x_950_ = v_a_944_;
v_isShared_951_ = v_isSharedCheck_958_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_a_948_);
lean_dec(v_a_944_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_958_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v___x_953_; 
if (v_isShared_951_ == 0)
{
v___x_953_ = v___x_950_;
goto v_reusejp_952_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_948_);
v___x_953_ = v_reuseFailAlloc_957_;
goto v_reusejp_952_;
}
v_reusejp_952_:
{
lean_object* v___x_955_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_953_);
v___x_955_ = v___x_946_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_970_; 
v_a_959_ = lean_ctor_get(v_a_944_, 0);
v_isSharedCheck_970_ = !lean_is_exclusive(v_a_944_);
if (v_isSharedCheck_970_ == 0)
{
v___x_961_ = v_a_944_;
v_isShared_962_ = v_isSharedCheck_970_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v_a_944_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_970_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v_snd_963_; lean_object* v___x_965_; 
v_snd_963_ = lean_ctor_get(v_a_959_, 1);
lean_inc(v_snd_963_);
lean_dec(v_a_959_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 0, v_snd_963_);
v___x_965_ = v___x_961_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_snd_963_);
v___x_965_ = v_reuseFailAlloc_969_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_967_; 
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_965_);
v___x_967_ = v___x_946_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_965_);
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
}
}
else
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_979_; 
v_a_972_ = lean_ctor_get(v___y_943_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v___y_943_);
if (v_isSharedCheck_979_ == 0)
{
v___x_974_ = v___y_943_;
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___y_943_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_979_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_977_; 
if (v_isShared_975_ == 0)
{
v___x_977_ = v___x_974_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_a_972_);
v___x_977_ = v_reuseFailAlloc_978_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
return v___x_977_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f___boxed(lean_object* v_ctx_997_, lean_object* v_declName_998_, lean_object* v_id_999_, lean_object* v_danglingDot_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_){
_start:
{
uint8_t v_danglingDot_boxed_1009_; lean_object* v_res_1010_; 
v_danglingDot_boxed_1009_ = lean_unbox(v_danglingDot_1000_);
v_res_1010_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_997_, v_declName_998_, v_id_999_, v_danglingDot_boxed_1009_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_a_1005_);
lean_dec_ref(v_a_1004_);
lean_dec_ref(v_a_1003_);
lean_dec(v_a_1002_);
lean_dec_ref(v_a_1001_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(lean_object* v_declName_1011_, lean_object* v_id_1012_, uint8_t v_danglingDot_1013_, lean_object* v_as_1014_, lean_object* v_as_x27_1015_, lean_object* v_b_1016_, lean_object* v_a_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_){
_start:
{
lean_object* v___x_1027_; 
v___x_1027_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___redArg(v_declName_1011_, v_id_1012_, v_danglingDot_1013_, v_as_1014_, v_as_x27_1015_, v_b_1016_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
return v___x_1027_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1___boxed(lean_object* v_declName_1028_, lean_object* v_id_1029_, lean_object* v_danglingDot_1030_, lean_object* v_as_1031_, lean_object* v_as_x27_1032_, lean_object* v_b_1033_, lean_object* v_a_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
uint8_t v_danglingDot_boxed_1044_; lean_object* v_res_1045_; 
v_danglingDot_boxed_1044_ = lean_unbox(v_danglingDot_1030_);
v_res_1045_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1(v_declName_1028_, v_id_1029_, v_danglingDot_boxed_1044_, v_as_1031_, v_as_x27_1032_, v_b_1033_, v_a_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_);
lean_dec(v___y_1042_);
lean_dec_ref(v___y_1041_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v_as_x27_1032_);
lean_dec(v_as_1031_);
lean_dec(v_id_1029_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(lean_object* v_declName_1046_, lean_object* v_id_1047_, uint8_t v_danglingDot_1048_, lean_object* v_as_1049_, lean_object* v_as_x27_1050_, lean_object* v_b_1051_, lean_object* v_a_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___redArg(v_declName_1046_, v_id_1047_, v_danglingDot_1048_, v_as_x27_1050_, v_b_1051_, v___y_1053_, v___y_1060_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1___boxed(lean_object* v_declName_1063_, lean_object* v_id_1064_, lean_object* v_danglingDot_1065_, lean_object* v_as_1066_, lean_object* v_as_x27_1067_, lean_object* v_b_1068_, lean_object* v_a_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
uint8_t v_danglingDot_boxed_1079_; lean_object* v_res_1080_; 
v_danglingDot_boxed_1079_ = lean_unbox(v_danglingDot_1065_);
v_res_1080_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f_spec__1_spec__1(v_declName_1063_, v_id_1064_, v_danglingDot_boxed_1079_, v_as_1066_, v_as_x27_1067_, v_b_1068_, v_a_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v_as_x27_1067_);
lean_dec(v_as_1066_);
lean_dec(v_id_1064_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(lean_object* v_ctx_1081_, lean_object* v_id_1082_, uint8_t v_danglingDot_1083_, lean_object* v___x_1084_, lean_object* v_a_1085_, lean_object* v_b_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_it_1096_; lean_object* v_a_1100_; lean_object* v___x_1103_; lean_object* v___y_1105_; lean_object* v___y_1106_; uint8_t v___y_1107_; lean_object* v_it_1128_; lean_object* v_fst_1129_; lean_object* v_it_1134_; lean_object* v_fst_1135_; 
v___x_1103_ = lean_box(0);
if (lean_obj_tag(v_a_1085_) == 0)
{
lean_object* v_a_1137_; lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1205_; 
v_a_1137_ = lean_ctor_get(v_a_1085_, 0);
v_a_1138_ = lean_ctor_get(v_a_1085_, 1);
v_isSharedCheck_1205_ = !lean_is_exclusive(v_a_1085_);
if (v_isSharedCheck_1205_ == 0)
{
v___x_1140_ = v_a_1085_;
v_isShared_1141_ = v_isSharedCheck_1205_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_inc(v_a_1137_);
lean_dec(v_a_1085_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1205_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
lean_object* v_it_1143_; lean_object* v_it_u2082_1148_; 
v_it_u2082_1148_ = lean_ctor_get(v_a_1137_, 1);
lean_inc(v_it_u2082_1148_);
if (lean_obj_tag(v_it_u2082_1148_) == 0)
{
lean_object* v_it_u2081_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1173_; 
v_it_u2081_1149_ = lean_ctor_get(v_a_1137_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v_a_1137_);
if (v_isSharedCheck_1173_ == 0)
{
lean_object* v_unused_1174_; 
v_unused_1174_ = lean_ctor_get(v_a_1137_, 1);
lean_dec(v_unused_1174_);
v___x_1151_ = v_a_1137_;
v_isShared_1152_ = v_isSharedCheck_1173_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_it_u2081_1149_);
lean_dec(v_a_1137_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1173_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v_array_1153_; lean_object* v_pos_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1172_; 
v_array_1153_ = lean_ctor_get(v_it_u2081_1149_, 0);
v_pos_1154_ = lean_ctor_get(v_it_u2081_1149_, 1);
v_isSharedCheck_1172_ = !lean_is_exclusive(v_it_u2081_1149_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1156_ = v_it_u2081_1149_;
v_isShared_1157_ = v_isSharedCheck_1172_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_pos_1154_);
lean_inc(v_array_1153_);
lean_dec(v_it_u2081_1149_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1172_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1158_; uint8_t v___x_1159_; 
v___x_1158_ = lean_array_get_size(v_array_1153_);
v___x_1159_ = lean_nat_dec_lt(v_pos_1154_, v___x_1158_);
if (v___x_1159_ == 0)
{
lean_object* v___x_1160_; 
lean_del_object(v___x_1156_);
lean_dec(v_pos_1154_);
lean_dec_ref(v_array_1153_);
lean_del_object(v___x_1151_);
lean_del_object(v___x_1140_);
v___x_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1160_, 0, v_a_1138_);
v_a_1085_ = v___x_1160_;
goto _start;
}
else
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1162_ = lean_unsigned_to_nat(1u);
v___x_1163_ = lean_nat_add(v_pos_1154_, v___x_1162_);
lean_inc_ref(v_array_1153_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 1, v___x_1163_);
v___x_1165_ = v___x_1156_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_array_1153_);
lean_ctor_set(v_reuseFailAlloc_1171_, 1, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1169_; 
v___x_1166_ = lean_array_fget(v_array_1153_, v_pos_1154_);
lean_dec(v_pos_1154_);
lean_dec_ref(v_array_1153_);
v___x_1167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1166_);
if (v_isShared_1152_ == 0)
{
lean_ctor_set(v___x_1151_, 1, v___x_1167_);
lean_ctor_set(v___x_1151_, 0, v___x_1165_);
v___x_1169_ = v___x_1151_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v___x_1165_);
lean_ctor_set(v_reuseFailAlloc_1170_, 1, v___x_1167_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
v_it_1143_ = v___x_1169_;
goto v___jp_1142_;
}
}
}
}
}
}
else
{
lean_object* v_val_1175_; lean_object* v___x_1177_; uint8_t v_isShared_1178_; uint8_t v_isSharedCheck_1204_; 
v_val_1175_ = lean_ctor_get(v_it_u2082_1148_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_it_u2082_1148_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1177_ = v_it_u2082_1148_;
v_isShared_1178_ = v_isSharedCheck_1204_;
goto v_resetjp_1176_;
}
else
{
lean_inc(v_val_1175_);
lean_dec(v_it_u2082_1148_);
v___x_1177_ = lean_box(0);
v_isShared_1178_ = v_isSharedCheck_1204_;
goto v_resetjp_1176_;
}
v_resetjp_1176_:
{
if (lean_obj_tag(v_val_1175_) == 0)
{
lean_object* v_it_u2081_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1187_; 
lean_del_object(v___x_1177_);
v_it_u2081_1179_ = lean_ctor_get(v_a_1137_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_a_1137_);
if (v_isSharedCheck_1187_ == 0)
{
lean_object* v_unused_1188_; 
v_unused_1188_ = lean_ctor_get(v_a_1137_, 1);
lean_dec(v_unused_1188_);
v___x_1181_ = v_a_1137_;
v_isShared_1182_ = v_isSharedCheck_1187_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_it_u2081_1179_);
lean_dec(v_a_1137_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1187_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1185_; 
v___x_1183_ = lean_box(0);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v___x_1183_);
v___x_1185_ = v___x_1181_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_it_u2081_1179_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v___x_1183_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
v_it_1143_ = v___x_1185_;
goto v___jp_1142_;
}
}
}
else
{
lean_object* v_it_u2081_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1202_; 
lean_del_object(v___x_1140_);
v_it_u2081_1189_ = lean_ctor_get(v_a_1137_, 0);
v_isSharedCheck_1202_ = !lean_is_exclusive(v_a_1137_);
if (v_isSharedCheck_1202_ == 0)
{
lean_object* v_unused_1203_; 
v_unused_1203_ = lean_ctor_get(v_a_1137_, 1);
lean_dec(v_unused_1203_);
v___x_1191_ = v_a_1137_;
v_isShared_1192_ = v_isSharedCheck_1202_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_it_u2081_1189_);
lean_dec(v_a_1137_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1202_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
lean_object* v_key_1193_; lean_object* v_tail_1194_; lean_object* v___x_1196_; 
v_key_1193_ = lean_ctor_get(v_val_1175_, 0);
lean_inc(v_key_1193_);
v_tail_1194_ = lean_ctor_get(v_val_1175_, 2);
lean_inc(v_tail_1194_);
lean_dec_ref(v_val_1175_);
if (v_isShared_1178_ == 0)
{
lean_ctor_set(v___x_1177_, 0, v_tail_1194_);
v___x_1196_ = v___x_1177_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_tail_1194_);
v___x_1196_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1198_; 
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 1, v___x_1196_);
v___x_1198_ = v___x_1191_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_it_u2081_1189_);
lean_ctor_set(v_reuseFailAlloc_1200_, 1, v___x_1196_);
v___x_1198_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; 
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1198_);
lean_ctor_set(v___x_1199_, 1, v_a_1138_);
v_it_1128_ = v___x_1199_;
v_fst_1129_ = v_key_1193_;
goto v___jp_1127_;
}
}
}
}
}
}
v___jp_1142_:
{
lean_object* v___x_1145_; 
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v_it_1143_);
v___x_1145_ = v___x_1140_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_it_1143_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_a_1138_);
v___x_1145_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
v_a_1085_ = v___x_1145_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1206_; 
v_a_1206_ = lean_ctor_get(v_a_1085_, 0);
lean_inc(v_a_1206_);
lean_dec_ref(v_a_1085_);
switch(lean_obj_tag(v_a_1206_))
{
case 0:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
lean_dec_ref(v___x_1084_);
lean_dec(v_id_1082_);
lean_dec_ref(v_ctx_1081_);
v___x_1207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1207_, 0, v_b_1086_);
v___x_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
return v___x_1208_;
}
case 1:
{
lean_object* v_a_1209_; lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1228_; 
v_a_1209_ = lean_ctor_get(v_a_1206_, 0);
v_a_1210_ = lean_ctor_get(v_a_1206_, 1);
v_isSharedCheck_1228_ = !lean_is_exclusive(v_a_1206_);
if (v_isSharedCheck_1228_ == 0)
{
v___x_1212_ = v_a_1206_;
v_isShared_1213_ = v_isSharedCheck_1228_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_inc(v_a_1209_);
lean_dec(v_a_1206_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1228_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v_start_1214_; lean_object* v_stop_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v_start_1214_ = lean_ctor_get(v_a_1209_, 1);
v_stop_1215_ = lean_ctor_get(v_a_1209_, 2);
v___x_1216_ = lean_unsigned_to_nat(0u);
v___x_1217_ = lean_nat_sub(v_stop_1215_, v_start_1214_);
v___x_1218_ = lean_nat_dec_lt(v___x_1216_, v___x_1217_);
lean_dec(v___x_1217_);
if (v___x_1218_ == 0)
{
lean_del_object(v___x_1212_);
lean_dec_ref(v_a_1209_);
v_it_1096_ = v_a_1210_;
goto v___jp_1095_;
}
else
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v_z_1222_; 
v___x_1219_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_a_1209_);
v___x_1220_ = l_Subarray_drop___redArg(v_a_1209_, v___x_1219_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v___x_1220_);
v_z_1222_ = v___x_1212_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1227_, 1, v_a_1210_);
v_z_1222_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1223_; 
v___x_1223_ = l_Subarray_get___redArg(v_a_1209_, v___x_1216_);
lean_dec_ref(v_a_1209_);
switch(lean_obj_tag(v___x_1223_))
{
case 0:
{
lean_object* v_key_1224_; 
v_key_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_key_1224_);
lean_dec_ref(v___x_1223_);
v_it_1134_ = v_z_1222_;
v_fst_1135_ = v_key_1224_;
goto v___jp_1133_;
}
case 1:
{
lean_object* v_node_1225_; lean_object* v___x_1226_; 
v_node_1225_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_node_1225_);
lean_dec_ref(v___x_1223_);
v___x_1226_ = l_Lean_PersistentHashMap_Zipper_prependNode___redArg(v_node_1225_, v_z_1222_);
v_it_1096_ = v___x_1226_;
goto v___jp_1095_;
}
default: 
{
v_it_1096_ = v_z_1222_;
goto v___jp_1095_;
}
}
}
}
}
}
default: 
{
lean_object* v_vals_1229_; lean_object* v_keys_1230_; lean_object* v_a_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1247_; 
v_vals_1229_ = lean_ctor_get(v_a_1206_, 1);
v_keys_1230_ = lean_ctor_get(v_a_1206_, 0);
v_a_1231_ = lean_ctor_get(v_a_1206_, 2);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_a_1206_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1233_ = v_a_1206_;
v_isShared_1234_ = v_isSharedCheck_1247_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_a_1231_);
lean_inc(v_vals_1229_);
lean_inc(v_keys_1230_);
lean_dec(v_a_1206_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1247_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v_start_1235_; lean_object* v_stop_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
v_start_1235_ = lean_ctor_get(v_vals_1229_, 1);
v_stop_1236_ = lean_ctor_get(v_vals_1229_, 2);
v___x_1237_ = lean_unsigned_to_nat(0u);
v___x_1238_ = lean_nat_sub(v_stop_1236_, v_start_1235_);
v___x_1239_ = lean_nat_dec_lt(v___x_1237_, v___x_1238_);
lean_dec(v___x_1238_);
if (v___x_1239_ == 0)
{
lean_del_object(v___x_1233_);
lean_dec_ref(v_keys_1230_);
lean_dec_ref(v_vals_1229_);
v_it_1096_ = v_a_1231_;
goto v___jp_1095_;
}
else
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1244_; 
v___x_1240_ = lean_unsigned_to_nat(1u);
lean_inc_ref(v_keys_1230_);
v___x_1241_ = l_Subarray_drop___redArg(v_keys_1230_, v___x_1240_);
v___x_1242_ = l_Subarray_drop___redArg(v_vals_1229_, v___x_1240_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v___x_1242_);
lean_ctor_set(v___x_1233_, 0, v___x_1241_);
v___x_1244_ = v___x_1233_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v_a_1231_);
v___x_1244_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; 
v___x_1245_ = l_Subarray_get___redArg(v_keys_1230_, v___x_1237_);
lean_dec_ref(v_keys_1230_);
v_it_1134_ = v___x_1244_;
v_fst_1135_ = v___x_1245_;
goto v___jp_1133_;
}
}
}
}
}
}
v___jp_1095_:
{
lean_object* v___x_1097_; 
v___x_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_it_1096_);
v_a_1085_ = v___x_1097_;
goto _start;
}
v___jp_1099_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1101_, 0, v_a_1100_);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
v___jp_1104_:
{
if (v___y_1107_ == 0)
{
lean_object* v___x_1108_; 
lean_inc(v_id_1082_);
lean_inc_ref(v_ctx_1081_);
v___x_1108_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_1081_, v___y_1106_, v_id_1082_, v_danglingDot_1083_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_);
if (lean_obj_tag(v___x_1108_) == 0)
{
lean_object* v_a_1109_; 
v_a_1109_ = lean_ctor_get(v___x_1108_, 0);
lean_inc(v_a_1109_);
lean_dec_ref(v___x_1108_);
if (lean_obj_tag(v_a_1109_) == 0)
{
lean_object* v_a_1110_; 
lean_dec_ref(v___y_1105_);
lean_dec_ref(v___x_1084_);
lean_dec(v_id_1082_);
lean_dec_ref(v_ctx_1081_);
v_a_1110_ = lean_ctor_get(v_a_1109_, 0);
lean_inc(v_a_1110_);
lean_dec_ref(v_a_1109_);
v_a_1100_ = v_a_1110_;
goto v___jp_1099_;
}
else
{
lean_object* v_a_1111_; 
v_a_1111_ = lean_ctor_get(v_a_1109_, 0);
lean_inc(v_a_1111_);
lean_dec_ref(v_a_1109_);
if (lean_obj_tag(v_a_1111_) == 1)
{
lean_object* v_val_1112_; lean_object* v___x_1113_; 
v_val_1112_ = lean_ctor_get(v_a_1111_, 0);
lean_inc(v_val_1112_);
lean_dec_ref(v_a_1111_);
v___x_1113_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg(v_val_1112_, v___y_1087_, v___y_1088_, v___y_1093_);
if (lean_obj_tag(v___x_1113_) == 0)
{
lean_object* v_a_1114_; 
v_a_1114_ = lean_ctor_get(v___x_1113_, 0);
lean_inc(v_a_1114_);
lean_dec_ref(v___x_1113_);
if (lean_obj_tag(v_a_1114_) == 0)
{
lean_object* v_a_1115_; 
lean_dec_ref(v___y_1105_);
lean_dec_ref(v___x_1084_);
lean_dec(v_id_1082_);
lean_dec_ref(v_ctx_1081_);
v_a_1115_ = lean_ctor_get(v_a_1114_, 0);
lean_inc(v_a_1115_);
lean_dec_ref(v_a_1114_);
v_a_1100_ = v_a_1115_;
goto v___jp_1099_;
}
else
{
lean_dec_ref(v_a_1114_);
v_a_1085_ = v___y_1105_;
v_b_1086_ = v___x_1103_;
goto _start;
}
}
else
{
lean_dec_ref(v___y_1105_);
lean_dec_ref(v___x_1084_);
lean_dec(v_id_1082_);
lean_dec_ref(v_ctx_1081_);
return v___x_1113_;
}
}
else
{
lean_dec(v_a_1111_);
v_a_1085_ = v___y_1105_;
v_b_1086_ = v___x_1103_;
goto _start;
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec_ref(v___y_1105_);
lean_dec_ref(v___x_1084_);
lean_dec(v_id_1082_);
lean_dec_ref(v_ctx_1081_);
v_a_1118_ = lean_ctor_get(v___x_1108_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1108_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1108_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1108_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_dec(v___y_1106_);
v_a_1085_ = v___y_1105_;
v_b_1086_ = v___x_1103_;
goto _start;
}
}
v___jp_1127_:
{
uint8_t v___x_1130_; 
v___x_1130_ = l_Lean_Name_isInternal(v_fst_1129_);
if (v___x_1130_ == 0)
{
uint8_t v___x_1131_; uint8_t v___x_1132_; 
v___x_1131_ = 1;
lean_inc(v_fst_1129_);
lean_inc_ref(v___x_1084_);
v___x_1132_ = l_Lean_Environment_contains(v___x_1084_, v_fst_1129_, v___x_1131_);
v___y_1105_ = v_it_1128_;
v___y_1106_ = v_fst_1129_;
v___y_1107_ = v___x_1132_;
goto v___jp_1104_;
}
else
{
v___y_1105_ = v_it_1128_;
v___y_1106_ = v_fst_1129_;
v___y_1107_ = v___x_1130_;
goto v___jp_1104_;
}
}
v___jp_1133_:
{
lean_object* v___x_1136_; 
v___x_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1136_, 0, v_it_1134_);
v_it_1128_ = v___x_1136_;
v_fst_1129_ = v_fst_1135_;
goto v___jp_1127_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg___boxed(lean_object* v_ctx_1248_, lean_object* v_id_1249_, lean_object* v_danglingDot_1250_, lean_object* v___x_1251_, lean_object* v_a_1252_, lean_object* v_b_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
uint8_t v_danglingDot_boxed_1262_; lean_object* v_res_1263_; 
v_danglingDot_boxed_1262_ = lean_unbox(v_danglingDot_1250_);
v_res_1263_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_ctx_1248_, v_id_1249_, v_danglingDot_boxed_1262_, v___x_1251_, v_a_1252_, v_b_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(lean_object* v_ctx_1264_, lean_object* v_id_1265_, uint8_t v_danglingDot_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v___x_1275_; lean_object* v_env_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1275_ = lean_st_ref_get(v_a_1273_);
v_env_1276_ = lean_ctor_get(v___x_1275_, 0);
lean_inc_ref_n(v_env_1276_, 2);
lean_dec(v___x_1275_);
v___x_1277_ = l_Lean_Environment_getNamespaces(v_env_1276_);
v___x_1278_ = lean_box(0);
v___x_1279_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_ctx_1264_, v_id_1265_, v_danglingDot_1266_, v_env_1276_, v___x_1277_, v___x_1278_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_, v_a_1273_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
if (lean_obj_tag(v_a_1280_) == 0)
{
lean_dec_ref(v_a_1280_);
return v___x_1279_;
}
else
{
lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1288_; 
lean_dec_ref(v_a_1280_);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; 
v_unused_1289_ = lean_ctor_get(v___x_1279_, 0);
lean_dec(v_unused_1289_);
v___x_1282_ = v___x_1279_;
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
else
{
lean_dec(v___x_1279_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1288_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v___x_1284_; lean_object* v___x_1286_; 
v___x_1284_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_1283_ == 0)
{
lean_ctor_set(v___x_1282_, 0, v___x_1284_);
v___x_1286_ = v___x_1282_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
else
{
return v___x_1279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces___boxed(lean_object* v_ctx_1290_, lean_object* v_id_1291_, lean_object* v_danglingDot_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_, lean_object* v_a_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
uint8_t v_danglingDot_boxed_1301_; lean_object* v_res_1302_; 
v_danglingDot_boxed_1301_ = lean_unbox(v_danglingDot_1292_);
v_res_1302_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_1290_, v_id_1291_, v_danglingDot_boxed_1301_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_, v_a_1297_, v_a_1298_, v_a_1299_);
lean_dec(v_a_1299_);
lean_dec_ref(v_a_1298_);
lean_dec(v_a_1297_);
lean_dec_ref(v_a_1296_);
lean_dec_ref(v_a_1295_);
lean_dec(v_a_1294_);
lean_dec_ref(v_a_1293_);
return v_res_1302_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(lean_object* v_ctx_1303_, lean_object* v_id_1304_, uint8_t v_danglingDot_1305_, lean_object* v___x_1306_, lean_object* v_inst_1307_, lean_object* v_R_1308_, lean_object* v_a_1309_, lean_object* v_b_1310_, lean_object* v_c_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v___x_1320_; 
v___x_1320_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___redArg(v_ctx_1303_, v_id_1304_, v_danglingDot_1305_, v___x_1306_, v_a_1309_, v_b_1310_, v___y_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
return v___x_1320_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0___boxed(lean_object** _args){
lean_object* v_ctx_1321_ = _args[0];
lean_object* v_id_1322_ = _args[1];
lean_object* v_danglingDot_1323_ = _args[2];
lean_object* v___x_1324_ = _args[3];
lean_object* v_inst_1325_ = _args[4];
lean_object* v_R_1326_ = _args[5];
lean_object* v_a_1327_ = _args[6];
lean_object* v_b_1328_ = _args[7];
lean_object* v_c_1329_ = _args[8];
lean_object* v___y_1330_ = _args[9];
lean_object* v___y_1331_ = _args[10];
lean_object* v___y_1332_ = _args[11];
lean_object* v___y_1333_ = _args[12];
lean_object* v___y_1334_ = _args[13];
lean_object* v___y_1335_ = _args[14];
lean_object* v___y_1336_ = _args[15];
lean_object* v___y_1337_ = _args[16];
_start:
{
uint8_t v_danglingDot_boxed_1338_; lean_object* v_res_1339_; 
v_danglingDot_boxed_1338_ = lean_unbox(v_danglingDot_1323_);
v_res_1339_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces_spec__0(v_ctx_1321_, v_id_1322_, v_danglingDot_boxed_1338_, v___x_1324_, v_inst_1325_, v_R_1326_, v_a_1327_, v_b_1328_, v_c_1329_, v___y_1330_, v___y_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(lean_object* v_n_1340_){
_start:
{
if (lean_obj_tag(v_n_1340_) == 2)
{
lean_object* v_i_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v_i_1341_ = lean_ctor_get(v_n_1340_, 1);
v___x_1342_ = lean_unsigned_to_nat(0u);
v___x_1343_ = lean_nat_dec_eq(v_i_1341_, v___x_1342_);
if (v___x_1343_ == 0)
{
lean_inc_ref(v_n_1340_);
return v_n_1340_;
}
else
{
uint8_t v___x_1344_; 
v___x_1344_ = l_Lean_isPrivatePrefix(v_n_1340_);
if (v___x_1344_ == 0)
{
lean_inc_ref(v_n_1340_);
return v_n_1340_;
}
else
{
lean_object* v___x_1345_; 
v___x_1345_ = lean_box(0);
return v___x_1345_;
}
}
}
else
{
lean_inc(v_n_1340_);
return v_n_1340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix___boxed(lean_object* v_n_1346_){
_start:
{
lean_object* v_res_1347_; 
v_res_1347_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_1346_);
lean_dec(v_n_1346_);
return v_res_1347_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(lean_object* v_n_u2081_1348_, lean_object* v_n_u2082_1349_){
_start:
{
lean_object* v_n_u2081_1350_; lean_object* v_n_u2082_1351_; 
v_n_u2081_1350_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2081_1348_);
lean_dec(v_n_u2081_1348_);
v_n_u2082_1351_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_stripPrivatePrefix(v_n_u2082_1349_);
lean_dec(v_n_u2082_1349_);
switch(lean_obj_tag(v_n_u2081_1350_))
{
case 0:
{
if (lean_obj_tag(v_n_u2082_1351_) == 0)
{
uint8_t v___x_1352_; 
v___x_1352_ = 1;
return v___x_1352_;
}
else
{
uint8_t v___x_1353_; 
lean_dec(v_n_u2082_1351_);
v___x_1353_ = 0;
return v___x_1353_;
}
}
case 1:
{
if (lean_obj_tag(v_n_u2082_1351_) == 1)
{
lean_object* v_pre_1354_; lean_object* v_str_1355_; lean_object* v_pre_1356_; lean_object* v_str_1357_; uint8_t v___x_1358_; 
v_pre_1354_ = lean_ctor_get(v_n_u2081_1350_, 0);
lean_inc(v_pre_1354_);
v_str_1355_ = lean_ctor_get(v_n_u2081_1350_, 1);
lean_inc_ref(v_str_1355_);
lean_dec_ref(v_n_u2081_1350_);
v_pre_1356_ = lean_ctor_get(v_n_u2082_1351_, 0);
lean_inc(v_pre_1356_);
v_str_1357_ = lean_ctor_get(v_n_u2082_1351_, 1);
lean_inc_ref(v_str_1357_);
lean_dec_ref(v_n_u2082_1351_);
v___x_1358_ = lean_string_dec_lt(v_str_1355_, v_str_1357_);
if (v___x_1358_ == 0)
{
uint8_t v___x_1359_; 
v___x_1359_ = lean_string_dec_eq(v_str_1355_, v_str_1357_);
lean_dec_ref(v_str_1357_);
lean_dec_ref(v_str_1355_);
if (v___x_1359_ == 0)
{
uint8_t v___x_1360_; 
lean_dec(v_pre_1356_);
lean_dec(v_pre_1354_);
v___x_1360_ = 2;
return v___x_1360_;
}
else
{
v_n_u2081_1348_ = v_pre_1354_;
v_n_u2082_1349_ = v_pre_1356_;
goto _start;
}
}
else
{
uint8_t v___x_1362_; 
lean_dec_ref(v_str_1357_);
lean_dec(v_pre_1356_);
lean_dec_ref(v_str_1355_);
lean_dec(v_pre_1354_);
v___x_1362_ = 0;
return v___x_1362_;
}
}
else
{
uint8_t v___x_1363_; 
lean_dec_ref(v_n_u2081_1350_);
lean_dec(v_n_u2082_1351_);
v___x_1363_ = 2;
return v___x_1363_;
}
}
default: 
{
switch(lean_obj_tag(v_n_u2082_1351_))
{
case 0:
{
uint8_t v___x_1364_; 
lean_dec_ref(v_n_u2081_1350_);
v___x_1364_ = 2;
return v___x_1364_;
}
case 1:
{
uint8_t v___x_1365_; 
lean_dec_ref(v_n_u2082_1351_);
lean_dec_ref(v_n_u2081_1350_);
v___x_1365_ = 0;
return v___x_1365_;
}
default: 
{
lean_object* v_pre_1366_; lean_object* v_i_1367_; lean_object* v_pre_1368_; lean_object* v_i_1369_; uint8_t v___x_1370_; 
v_pre_1366_ = lean_ctor_get(v_n_u2081_1350_, 0);
lean_inc(v_pre_1366_);
v_i_1367_ = lean_ctor_get(v_n_u2081_1350_, 1);
lean_inc(v_i_1367_);
lean_dec_ref(v_n_u2081_1350_);
v_pre_1368_ = lean_ctor_get(v_n_u2082_1351_, 0);
lean_inc(v_pre_1368_);
v_i_1369_ = lean_ctor_get(v_n_u2082_1351_, 1);
lean_inc(v_i_1369_);
lean_dec_ref(v_n_u2082_1351_);
v___x_1370_ = lean_nat_dec_lt(v_i_1367_, v_i_1369_);
if (v___x_1370_ == 0)
{
uint8_t v___x_1371_; 
v___x_1371_ = lean_nat_dec_eq(v_i_1367_, v_i_1369_);
lean_dec(v_i_1369_);
lean_dec(v_i_1367_);
if (v___x_1371_ == 0)
{
uint8_t v___x_1372_; 
lean_dec(v_pre_1368_);
lean_dec(v_pre_1366_);
v___x_1372_ = 2;
return v___x_1372_;
}
else
{
v_n_u2081_1348_ = v_pre_1366_;
v_n_u2082_1349_ = v_pre_1368_;
goto _start;
}
}
else
{
uint8_t v___x_1374_; 
lean_dec(v_i_1369_);
lean_dec(v_pre_1368_);
lean_dec(v_i_1367_);
lean_dec(v_pre_1366_);
v___x_1374_ = 0;
return v___x_1374_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed(lean_object* v_n_u2081_1375_, lean_object* v_n_u2082_1376_){
_start:
{
uint8_t v_res_1377_; lean_object* v_r_1378_; 
v_res_1377_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_n_u2081_1375_, v_n_u2082_1376_);
v_r_1378_ = lean_box(v_res_1377_);
return v_r_1378_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0(void){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate___boxed), 2, 0);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(lean_object* v_names_1380_){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___closed__0);
v___x_1382_ = l_Std_TreeSet_ofArray___redArg(v_names_1380_, v___x_1381_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray___boxed(lean_object* v_names_1383_){
_start:
{
lean_object* v_res_1384_; 
v_res_1384_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_names_1383_);
lean_dec_ref(v_names_1383_);
return v_res_1384_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(lean_object* v_k_1385_, lean_object* v_v_1386_, lean_object* v_t_1387_){
_start:
{
if (lean_obj_tag(v_t_1387_) == 0)
{
lean_object* v_size_1388_; lean_object* v_k_1389_; lean_object* v_v_1390_; lean_object* v_l_1391_; lean_object* v_r_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1672_; 
v_size_1388_ = lean_ctor_get(v_t_1387_, 0);
v_k_1389_ = lean_ctor_get(v_t_1387_, 1);
v_v_1390_ = lean_ctor_get(v_t_1387_, 2);
v_l_1391_ = lean_ctor_get(v_t_1387_, 3);
v_r_1392_ = lean_ctor_get(v_t_1387_, 4);
v_isSharedCheck_1672_ = !lean_is_exclusive(v_t_1387_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1394_ = v_t_1387_;
v_isShared_1395_ = v_isSharedCheck_1672_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_r_1392_);
lean_inc(v_l_1391_);
lean_inc(v_v_1390_);
lean_inc(v_k_1389_);
lean_inc(v_size_1388_);
lean_dec(v_t_1387_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1672_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
uint8_t v___x_1396_; 
lean_inc(v_k_1389_);
lean_inc(v_k_1385_);
v___x_1396_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1385_, v_k_1389_);
switch(v___x_1396_)
{
case 0:
{
lean_object* v_impl_1397_; lean_object* v___x_1398_; 
lean_dec(v_size_1388_);
v_impl_1397_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1385_, v_v_1386_, v_l_1391_);
v___x_1398_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1392_) == 0)
{
lean_object* v_size_1399_; lean_object* v_size_1400_; lean_object* v_k_1401_; lean_object* v_v_1402_; lean_object* v_l_1403_; lean_object* v_r_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; uint8_t v___x_1407_; 
v_size_1399_ = lean_ctor_get(v_r_1392_, 0);
v_size_1400_ = lean_ctor_get(v_impl_1397_, 0);
lean_inc(v_size_1400_);
v_k_1401_ = lean_ctor_get(v_impl_1397_, 1);
lean_inc(v_k_1401_);
v_v_1402_ = lean_ctor_get(v_impl_1397_, 2);
lean_inc(v_v_1402_);
v_l_1403_ = lean_ctor_get(v_impl_1397_, 3);
lean_inc(v_l_1403_);
v_r_1404_ = lean_ctor_get(v_impl_1397_, 4);
lean_inc(v_r_1404_);
v___x_1405_ = lean_unsigned_to_nat(3u);
v___x_1406_ = lean_nat_mul(v___x_1405_, v_size_1399_);
v___x_1407_ = lean_nat_dec_lt(v___x_1406_, v_size_1400_);
lean_dec(v___x_1406_);
if (v___x_1407_ == 0)
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1411_; 
lean_dec(v_r_1404_);
lean_dec(v_l_1403_);
lean_dec(v_v_1402_);
lean_dec(v_k_1401_);
v___x_1408_ = lean_nat_add(v___x_1398_, v_size_1400_);
lean_dec(v_size_1400_);
v___x_1409_ = lean_nat_add(v___x_1408_, v_size_1399_);
lean_dec(v___x_1408_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 3, v_impl_1397_);
lean_ctor_set(v___x_1394_, 0, v___x_1409_);
v___x_1411_ = v___x_1394_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1409_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1412_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1412_, 3, v_impl_1397_);
lean_ctor_set(v_reuseFailAlloc_1412_, 4, v_r_1392_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
else
{
lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1478_; 
v_isSharedCheck_1478_ = !lean_is_exclusive(v_impl_1397_);
if (v_isSharedCheck_1478_ == 0)
{
lean_object* v_unused_1479_; lean_object* v_unused_1480_; lean_object* v_unused_1481_; lean_object* v_unused_1482_; lean_object* v_unused_1483_; 
v_unused_1479_ = lean_ctor_get(v_impl_1397_, 4);
lean_dec(v_unused_1479_);
v_unused_1480_ = lean_ctor_get(v_impl_1397_, 3);
lean_dec(v_unused_1480_);
v_unused_1481_ = lean_ctor_get(v_impl_1397_, 2);
lean_dec(v_unused_1481_);
v_unused_1482_ = lean_ctor_get(v_impl_1397_, 1);
lean_dec(v_unused_1482_);
v_unused_1483_ = lean_ctor_get(v_impl_1397_, 0);
lean_dec(v_unused_1483_);
v___x_1414_ = v_impl_1397_;
v_isShared_1415_ = v_isSharedCheck_1478_;
goto v_resetjp_1413_;
}
else
{
lean_dec(v_impl_1397_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1478_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v_size_1416_; lean_object* v_size_1417_; lean_object* v_k_1418_; lean_object* v_v_1419_; lean_object* v_l_1420_; lean_object* v_r_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v_size_1416_ = lean_ctor_get(v_l_1403_, 0);
v_size_1417_ = lean_ctor_get(v_r_1404_, 0);
v_k_1418_ = lean_ctor_get(v_r_1404_, 1);
v_v_1419_ = lean_ctor_get(v_r_1404_, 2);
v_l_1420_ = lean_ctor_get(v_r_1404_, 3);
v_r_1421_ = lean_ctor_get(v_r_1404_, 4);
v___x_1422_ = lean_unsigned_to_nat(2u);
v___x_1423_ = lean_nat_mul(v___x_1422_, v_size_1416_);
v___x_1424_ = lean_nat_dec_lt(v_size_1417_, v___x_1423_);
lean_dec(v___x_1423_);
if (v___x_1424_ == 0)
{
lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1453_; 
lean_inc(v_r_1421_);
lean_inc(v_l_1420_);
lean_inc(v_v_1419_);
lean_inc(v_k_1418_);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_r_1404_);
if (v_isSharedCheck_1453_ == 0)
{
lean_object* v_unused_1454_; lean_object* v_unused_1455_; lean_object* v_unused_1456_; lean_object* v_unused_1457_; lean_object* v_unused_1458_; 
v_unused_1454_ = lean_ctor_get(v_r_1404_, 4);
lean_dec(v_unused_1454_);
v_unused_1455_ = lean_ctor_get(v_r_1404_, 3);
lean_dec(v_unused_1455_);
v_unused_1456_ = lean_ctor_get(v_r_1404_, 2);
lean_dec(v_unused_1456_);
v_unused_1457_ = lean_ctor_get(v_r_1404_, 1);
lean_dec(v_unused_1457_);
v_unused_1458_ = lean_ctor_get(v_r_1404_, 0);
lean_dec(v_unused_1458_);
v___x_1426_ = v_r_1404_;
v_isShared_1427_ = v_isSharedCheck_1453_;
goto v_resetjp_1425_;
}
else
{
lean_dec(v_r_1404_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1453_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___x_1441_; lean_object* v___y_1443_; 
v___x_1428_ = lean_nat_add(v___x_1398_, v_size_1400_);
lean_dec(v_size_1400_);
v___x_1429_ = lean_nat_add(v___x_1428_, v_size_1399_);
lean_dec(v___x_1428_);
v___x_1441_ = lean_nat_add(v___x_1398_, v_size_1416_);
if (lean_obj_tag(v_l_1420_) == 0)
{
lean_object* v_size_1451_; 
v_size_1451_ = lean_ctor_get(v_l_1420_, 0);
lean_inc(v_size_1451_);
v___y_1443_ = v_size_1451_;
goto v___jp_1442_;
}
else
{
lean_object* v___x_1452_; 
v___x_1452_ = lean_unsigned_to_nat(0u);
v___y_1443_ = v___x_1452_;
goto v___jp_1442_;
}
v___jp_1430_:
{
lean_object* v___x_1434_; lean_object* v___x_1436_; 
v___x_1434_ = lean_nat_add(v___y_1431_, v___y_1433_);
lean_dec(v___y_1433_);
lean_dec(v___y_1431_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 4, v_r_1392_);
lean_ctor_set(v___x_1426_, 3, v_r_1421_);
lean_ctor_set(v___x_1426_, 2, v_v_1390_);
lean_ctor_set(v___x_1426_, 1, v_k_1389_);
lean_ctor_set(v___x_1426_, 0, v___x_1434_);
v___x_1436_ = v___x_1426_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1440_; 
v_reuseFailAlloc_1440_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1440_, 0, v___x_1434_);
lean_ctor_set(v_reuseFailAlloc_1440_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1440_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1440_, 3, v_r_1421_);
lean_ctor_set(v_reuseFailAlloc_1440_, 4, v_r_1392_);
v___x_1436_ = v_reuseFailAlloc_1440_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
lean_object* v___x_1438_; 
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 4, v___x_1436_);
lean_ctor_set(v___x_1414_, 3, v___y_1432_);
lean_ctor_set(v___x_1414_, 2, v_v_1419_);
lean_ctor_set(v___x_1414_, 1, v_k_1418_);
lean_ctor_set(v___x_1414_, 0, v___x_1429_);
v___x_1438_ = v___x_1414_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v___x_1429_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_k_1418_);
lean_ctor_set(v_reuseFailAlloc_1439_, 2, v_v_1419_);
lean_ctor_set(v_reuseFailAlloc_1439_, 3, v___y_1432_);
lean_ctor_set(v_reuseFailAlloc_1439_, 4, v___x_1436_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
v___jp_1442_:
{
lean_object* v___x_1444_; lean_object* v___x_1446_; 
v___x_1444_ = lean_nat_add(v___x_1441_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec(v___x_1441_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_l_1420_);
lean_ctor_set(v___x_1394_, 3, v_l_1403_);
lean_ctor_set(v___x_1394_, 2, v_v_1402_);
lean_ctor_set(v___x_1394_, 1, v_k_1401_);
lean_ctor_set(v___x_1394_, 0, v___x_1444_);
v___x_1446_ = v___x_1394_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v_k_1401_);
lean_ctor_set(v_reuseFailAlloc_1450_, 2, v_v_1402_);
lean_ctor_set(v_reuseFailAlloc_1450_, 3, v_l_1403_);
lean_ctor_set(v_reuseFailAlloc_1450_, 4, v_l_1420_);
v___x_1446_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1447_; 
v___x_1447_ = lean_nat_add(v___x_1398_, v_size_1399_);
if (lean_obj_tag(v_r_1421_) == 0)
{
lean_object* v_size_1448_; 
v_size_1448_ = lean_ctor_get(v_r_1421_, 0);
lean_inc(v_size_1448_);
v___y_1431_ = v___x_1447_;
v___y_1432_ = v___x_1446_;
v___y_1433_ = v_size_1448_;
goto v___jp_1430_;
}
else
{
lean_object* v___x_1449_; 
v___x_1449_ = lean_unsigned_to_nat(0u);
v___y_1431_ = v___x_1447_;
v___y_1432_ = v___x_1446_;
v___y_1433_ = v___x_1449_;
goto v___jp_1430_;
}
}
}
}
}
else
{
lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1464_; 
lean_del_object(v___x_1394_);
v___x_1459_ = lean_nat_add(v___x_1398_, v_size_1400_);
lean_dec(v_size_1400_);
v___x_1460_ = lean_nat_add(v___x_1459_, v_size_1399_);
lean_dec(v___x_1459_);
v___x_1461_ = lean_nat_add(v___x_1398_, v_size_1399_);
v___x_1462_ = lean_nat_add(v___x_1461_, v_size_1417_);
lean_dec(v___x_1461_);
lean_inc_ref(v_r_1392_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 4, v_r_1392_);
lean_ctor_set(v___x_1414_, 3, v_r_1404_);
lean_ctor_set(v___x_1414_, 2, v_v_1390_);
lean_ctor_set(v___x_1414_, 1, v_k_1389_);
lean_ctor_set(v___x_1414_, 0, v___x_1462_);
v___x_1464_ = v___x_1414_;
goto v_reusejp_1463_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v___x_1462_);
lean_ctor_set(v_reuseFailAlloc_1477_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1477_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1477_, 3, v_r_1404_);
lean_ctor_set(v_reuseFailAlloc_1477_, 4, v_r_1392_);
v___x_1464_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1463_;
}
v_reusejp_1463_:
{
lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1471_; 
v_isSharedCheck_1471_ = !lean_is_exclusive(v_r_1392_);
if (v_isSharedCheck_1471_ == 0)
{
lean_object* v_unused_1472_; lean_object* v_unused_1473_; lean_object* v_unused_1474_; lean_object* v_unused_1475_; lean_object* v_unused_1476_; 
v_unused_1472_ = lean_ctor_get(v_r_1392_, 4);
lean_dec(v_unused_1472_);
v_unused_1473_ = lean_ctor_get(v_r_1392_, 3);
lean_dec(v_unused_1473_);
v_unused_1474_ = lean_ctor_get(v_r_1392_, 2);
lean_dec(v_unused_1474_);
v_unused_1475_ = lean_ctor_get(v_r_1392_, 1);
lean_dec(v_unused_1475_);
v_unused_1476_ = lean_ctor_get(v_r_1392_, 0);
lean_dec(v_unused_1476_);
v___x_1466_ = v_r_1392_;
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
else
{
lean_dec(v_r_1392_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1471_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v___x_1469_; 
if (v_isShared_1467_ == 0)
{
lean_ctor_set(v___x_1466_, 4, v___x_1464_);
lean_ctor_set(v___x_1466_, 3, v_l_1403_);
lean_ctor_set(v___x_1466_, 2, v_v_1402_);
lean_ctor_set(v___x_1466_, 1, v_k_1401_);
lean_ctor_set(v___x_1466_, 0, v___x_1460_);
v___x_1469_ = v___x_1466_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1460_);
lean_ctor_set(v_reuseFailAlloc_1470_, 1, v_k_1401_);
lean_ctor_set(v_reuseFailAlloc_1470_, 2, v_v_1402_);
lean_ctor_set(v_reuseFailAlloc_1470_, 3, v_l_1403_);
lean_ctor_set(v_reuseFailAlloc_1470_, 4, v___x_1464_);
v___x_1469_ = v_reuseFailAlloc_1470_;
goto v_reusejp_1468_;
}
v_reusejp_1468_:
{
return v___x_1469_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1484_; 
v_l_1484_ = lean_ctor_get(v_impl_1397_, 3);
lean_inc(v_l_1484_);
if (lean_obj_tag(v_l_1484_) == 0)
{
lean_object* v_r_1485_; lean_object* v_k_1486_; lean_object* v_v_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1498_; 
v_r_1485_ = lean_ctor_get(v_impl_1397_, 4);
v_k_1486_ = lean_ctor_get(v_impl_1397_, 1);
v_v_1487_ = lean_ctor_get(v_impl_1397_, 2);
v_isSharedCheck_1498_ = !lean_is_exclusive(v_impl_1397_);
if (v_isSharedCheck_1498_ == 0)
{
lean_object* v_unused_1499_; lean_object* v_unused_1500_; 
v_unused_1499_ = lean_ctor_get(v_impl_1397_, 3);
lean_dec(v_unused_1499_);
v_unused_1500_ = lean_ctor_get(v_impl_1397_, 0);
lean_dec(v_unused_1500_);
v___x_1489_ = v_impl_1397_;
v_isShared_1490_ = v_isSharedCheck_1498_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_r_1485_);
lean_inc(v_v_1487_);
lean_inc(v_k_1486_);
lean_dec(v_impl_1397_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1498_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1491_; lean_object* v___x_1493_; 
v___x_1491_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1485_);
if (v_isShared_1490_ == 0)
{
lean_ctor_set(v___x_1489_, 3, v_r_1485_);
lean_ctor_set(v___x_1489_, 2, v_v_1390_);
lean_ctor_set(v___x_1489_, 1, v_k_1389_);
lean_ctor_set(v___x_1489_, 0, v___x_1398_);
v___x_1493_ = v___x_1489_;
goto v_reusejp_1492_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1497_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1497_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1497_, 3, v_r_1485_);
lean_ctor_set(v_reuseFailAlloc_1497_, 4, v_r_1485_);
v___x_1493_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1492_;
}
v_reusejp_1492_:
{
lean_object* v___x_1495_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v___x_1493_);
lean_ctor_set(v___x_1394_, 3, v_l_1484_);
lean_ctor_set(v___x_1394_, 2, v_v_1487_);
lean_ctor_set(v___x_1394_, 1, v_k_1486_);
lean_ctor_set(v___x_1394_, 0, v___x_1491_);
v___x_1495_ = v___x_1394_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1491_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v_k_1486_);
lean_ctor_set(v_reuseFailAlloc_1496_, 2, v_v_1487_);
lean_ctor_set(v_reuseFailAlloc_1496_, 3, v_l_1484_);
lean_ctor_set(v_reuseFailAlloc_1496_, 4, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
else
{
lean_object* v_r_1501_; 
v_r_1501_ = lean_ctor_get(v_impl_1397_, 4);
lean_inc(v_r_1501_);
if (lean_obj_tag(v_r_1501_) == 0)
{
lean_object* v_k_1502_; lean_object* v_v_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1526_; 
v_k_1502_ = lean_ctor_get(v_impl_1397_, 1);
v_v_1503_ = lean_ctor_get(v_impl_1397_, 2);
v_isSharedCheck_1526_ = !lean_is_exclusive(v_impl_1397_);
if (v_isSharedCheck_1526_ == 0)
{
lean_object* v_unused_1527_; lean_object* v_unused_1528_; lean_object* v_unused_1529_; 
v_unused_1527_ = lean_ctor_get(v_impl_1397_, 4);
lean_dec(v_unused_1527_);
v_unused_1528_ = lean_ctor_get(v_impl_1397_, 3);
lean_dec(v_unused_1528_);
v_unused_1529_ = lean_ctor_get(v_impl_1397_, 0);
lean_dec(v_unused_1529_);
v___x_1505_ = v_impl_1397_;
v_isShared_1506_ = v_isSharedCheck_1526_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_v_1503_);
lean_inc(v_k_1502_);
lean_dec(v_impl_1397_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1526_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v_k_1507_; lean_object* v_v_1508_; lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1522_; 
v_k_1507_ = lean_ctor_get(v_r_1501_, 1);
v_v_1508_ = lean_ctor_get(v_r_1501_, 2);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_r_1501_);
if (v_isSharedCheck_1522_ == 0)
{
lean_object* v_unused_1523_; lean_object* v_unused_1524_; lean_object* v_unused_1525_; 
v_unused_1523_ = lean_ctor_get(v_r_1501_, 4);
lean_dec(v_unused_1523_);
v_unused_1524_ = lean_ctor_get(v_r_1501_, 3);
lean_dec(v_unused_1524_);
v_unused_1525_ = lean_ctor_get(v_r_1501_, 0);
lean_dec(v_unused_1525_);
v___x_1510_ = v_r_1501_;
v_isShared_1511_ = v_isSharedCheck_1522_;
goto v_resetjp_1509_;
}
else
{
lean_inc(v_v_1508_);
lean_inc(v_k_1507_);
lean_dec(v_r_1501_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1522_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
lean_object* v___x_1512_; lean_object* v___x_1514_; 
v___x_1512_ = lean_unsigned_to_nat(3u);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 4, v_l_1484_);
lean_ctor_set(v___x_1510_, 3, v_l_1484_);
lean_ctor_set(v___x_1510_, 2, v_v_1503_);
lean_ctor_set(v___x_1510_, 1, v_k_1502_);
lean_ctor_set(v___x_1510_, 0, v___x_1398_);
v___x_1514_ = v___x_1510_;
goto v_reusejp_1513_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1521_, 1, v_k_1502_);
lean_ctor_set(v_reuseFailAlloc_1521_, 2, v_v_1503_);
lean_ctor_set(v_reuseFailAlloc_1521_, 3, v_l_1484_);
lean_ctor_set(v_reuseFailAlloc_1521_, 4, v_l_1484_);
v___x_1514_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1513_;
}
v_reusejp_1513_:
{
lean_object* v___x_1516_; 
if (v_isShared_1506_ == 0)
{
lean_ctor_set(v___x_1505_, 4, v_l_1484_);
lean_ctor_set(v___x_1505_, 2, v_v_1390_);
lean_ctor_set(v___x_1505_, 1, v_k_1389_);
lean_ctor_set(v___x_1505_, 0, v___x_1398_);
v___x_1516_ = v___x_1505_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1520_; 
v_reuseFailAlloc_1520_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1520_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1520_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1520_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1520_, 3, v_l_1484_);
lean_ctor_set(v_reuseFailAlloc_1520_, 4, v_l_1484_);
v___x_1516_ = v_reuseFailAlloc_1520_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1518_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v___x_1516_);
lean_ctor_set(v___x_1394_, 3, v___x_1514_);
lean_ctor_set(v___x_1394_, 2, v_v_1508_);
lean_ctor_set(v___x_1394_, 1, v_k_1507_);
lean_ctor_set(v___x_1394_, 0, v___x_1512_);
v___x_1518_ = v___x_1394_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v___x_1512_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v_k_1507_);
lean_ctor_set(v_reuseFailAlloc_1519_, 2, v_v_1508_);
lean_ctor_set(v_reuseFailAlloc_1519_, 3, v___x_1514_);
lean_ctor_set(v_reuseFailAlloc_1519_, 4, v___x_1516_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
}
}
else
{
lean_object* v___x_1530_; lean_object* v___x_1532_; 
v___x_1530_ = lean_unsigned_to_nat(2u);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_r_1501_);
lean_ctor_set(v___x_1394_, 3, v_impl_1397_);
lean_ctor_set(v___x_1394_, 0, v___x_1530_);
v___x_1532_ = v___x_1394_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
lean_ctor_set(v_reuseFailAlloc_1533_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1533_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1533_, 3, v_impl_1397_);
lean_ctor_set(v_reuseFailAlloc_1533_, 4, v_r_1501_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
}
case 1:
{
lean_object* v___x_1535_; 
lean_dec(v_v_1390_);
lean_dec(v_k_1389_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 2, v_v_1386_);
lean_ctor_set(v___x_1394_, 1, v_k_1385_);
v___x_1535_ = v___x_1394_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v_size_1388_);
lean_ctor_set(v_reuseFailAlloc_1536_, 1, v_k_1385_);
lean_ctor_set(v_reuseFailAlloc_1536_, 2, v_v_1386_);
lean_ctor_set(v_reuseFailAlloc_1536_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1536_, 4, v_r_1392_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
default: 
{
lean_object* v_impl_1537_; lean_object* v___x_1538_; 
lean_dec(v_size_1388_);
v_impl_1537_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1385_, v_v_1386_, v_r_1392_);
v___x_1538_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1391_) == 0)
{
lean_object* v_size_1539_; lean_object* v_size_1540_; lean_object* v_k_1541_; lean_object* v_v_1542_; lean_object* v_l_1543_; lean_object* v_r_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; uint8_t v___x_1547_; 
v_size_1539_ = lean_ctor_get(v_l_1391_, 0);
v_size_1540_ = lean_ctor_get(v_impl_1537_, 0);
lean_inc(v_size_1540_);
v_k_1541_ = lean_ctor_get(v_impl_1537_, 1);
lean_inc(v_k_1541_);
v_v_1542_ = lean_ctor_get(v_impl_1537_, 2);
lean_inc(v_v_1542_);
v_l_1543_ = lean_ctor_get(v_impl_1537_, 3);
lean_inc(v_l_1543_);
v_r_1544_ = lean_ctor_get(v_impl_1537_, 4);
lean_inc(v_r_1544_);
v___x_1545_ = lean_unsigned_to_nat(3u);
v___x_1546_ = lean_nat_mul(v___x_1545_, v_size_1539_);
v___x_1547_ = lean_nat_dec_lt(v___x_1546_, v_size_1540_);
lean_dec(v___x_1546_);
if (v___x_1547_ == 0)
{
lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1551_; 
lean_dec(v_r_1544_);
lean_dec(v_l_1543_);
lean_dec(v_v_1542_);
lean_dec(v_k_1541_);
v___x_1548_ = lean_nat_add(v___x_1538_, v_size_1539_);
v___x_1549_ = lean_nat_add(v___x_1548_, v_size_1540_);
lean_dec(v_size_1540_);
lean_dec(v___x_1548_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_impl_1537_);
lean_ctor_set(v___x_1394_, 0, v___x_1549_);
v___x_1551_ = v___x_1394_;
goto v_reusejp_1550_;
}
else
{
lean_object* v_reuseFailAlloc_1552_; 
v_reuseFailAlloc_1552_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1552_, 0, v___x_1549_);
lean_ctor_set(v_reuseFailAlloc_1552_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1552_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1552_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1552_, 4, v_impl_1537_);
v___x_1551_ = v_reuseFailAlloc_1552_;
goto v_reusejp_1550_;
}
v_reusejp_1550_:
{
return v___x_1551_;
}
}
else
{
lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1616_; 
v_isSharedCheck_1616_ = !lean_is_exclusive(v_impl_1537_);
if (v_isSharedCheck_1616_ == 0)
{
lean_object* v_unused_1617_; lean_object* v_unused_1618_; lean_object* v_unused_1619_; lean_object* v_unused_1620_; lean_object* v_unused_1621_; 
v_unused_1617_ = lean_ctor_get(v_impl_1537_, 4);
lean_dec(v_unused_1617_);
v_unused_1618_ = lean_ctor_get(v_impl_1537_, 3);
lean_dec(v_unused_1618_);
v_unused_1619_ = lean_ctor_get(v_impl_1537_, 2);
lean_dec(v_unused_1619_);
v_unused_1620_ = lean_ctor_get(v_impl_1537_, 1);
lean_dec(v_unused_1620_);
v_unused_1621_ = lean_ctor_get(v_impl_1537_, 0);
lean_dec(v_unused_1621_);
v___x_1554_ = v_impl_1537_;
v_isShared_1555_ = v_isSharedCheck_1616_;
goto v_resetjp_1553_;
}
else
{
lean_dec(v_impl_1537_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1616_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v_size_1556_; lean_object* v_k_1557_; lean_object* v_v_1558_; lean_object* v_l_1559_; lean_object* v_r_1560_; lean_object* v_size_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; uint8_t v___x_1564_; 
v_size_1556_ = lean_ctor_get(v_l_1543_, 0);
v_k_1557_ = lean_ctor_get(v_l_1543_, 1);
v_v_1558_ = lean_ctor_get(v_l_1543_, 2);
v_l_1559_ = lean_ctor_get(v_l_1543_, 3);
v_r_1560_ = lean_ctor_get(v_l_1543_, 4);
v_size_1561_ = lean_ctor_get(v_r_1544_, 0);
v___x_1562_ = lean_unsigned_to_nat(2u);
v___x_1563_ = lean_nat_mul(v___x_1562_, v_size_1561_);
v___x_1564_ = lean_nat_dec_lt(v_size_1556_, v___x_1563_);
lean_dec(v___x_1563_);
if (v___x_1564_ == 0)
{
lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1592_; 
lean_inc(v_r_1560_);
lean_inc(v_l_1559_);
lean_inc(v_v_1558_);
lean_inc(v_k_1557_);
v_isSharedCheck_1592_ = !lean_is_exclusive(v_l_1543_);
if (v_isSharedCheck_1592_ == 0)
{
lean_object* v_unused_1593_; lean_object* v_unused_1594_; lean_object* v_unused_1595_; lean_object* v_unused_1596_; lean_object* v_unused_1597_; 
v_unused_1593_ = lean_ctor_get(v_l_1543_, 4);
lean_dec(v_unused_1593_);
v_unused_1594_ = lean_ctor_get(v_l_1543_, 3);
lean_dec(v_unused_1594_);
v_unused_1595_ = lean_ctor_get(v_l_1543_, 2);
lean_dec(v_unused_1595_);
v_unused_1596_ = lean_ctor_get(v_l_1543_, 1);
lean_dec(v_unused_1596_);
v_unused_1597_ = lean_ctor_get(v_l_1543_, 0);
lean_dec(v_unused_1597_);
v___x_1566_ = v_l_1543_;
v_isShared_1567_ = v_isSharedCheck_1592_;
goto v_resetjp_1565_;
}
else
{
lean_dec(v_l_1543_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1592_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___y_1571_; lean_object* v___y_1572_; lean_object* v___y_1573_; lean_object* v___y_1582_; 
v___x_1568_ = lean_nat_add(v___x_1538_, v_size_1539_);
v___x_1569_ = lean_nat_add(v___x_1568_, v_size_1540_);
lean_dec(v_size_1540_);
if (lean_obj_tag(v_l_1559_) == 0)
{
lean_object* v_size_1590_; 
v_size_1590_ = lean_ctor_get(v_l_1559_, 0);
lean_inc(v_size_1590_);
v___y_1582_ = v_size_1590_;
goto v___jp_1581_;
}
else
{
lean_object* v___x_1591_; 
v___x_1591_ = lean_unsigned_to_nat(0u);
v___y_1582_ = v___x_1591_;
goto v___jp_1581_;
}
v___jp_1570_:
{
lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1574_ = lean_nat_add(v___y_1571_, v___y_1573_);
lean_dec(v___y_1573_);
lean_dec(v___y_1571_);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 4, v_r_1544_);
lean_ctor_set(v___x_1566_, 3, v_r_1560_);
lean_ctor_set(v___x_1566_, 2, v_v_1542_);
lean_ctor_set(v___x_1566_, 1, v_k_1541_);
lean_ctor_set(v___x_1566_, 0, v___x_1574_);
v___x_1576_ = v___x_1566_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1580_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1580_, 3, v_r_1560_);
lean_ctor_set(v_reuseFailAlloc_1580_, 4, v_r_1544_);
v___x_1576_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1578_; 
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 4, v___x_1576_);
lean_ctor_set(v___x_1554_, 3, v___y_1572_);
lean_ctor_set(v___x_1554_, 2, v_v_1558_);
lean_ctor_set(v___x_1554_, 1, v_k_1557_);
lean_ctor_set(v___x_1554_, 0, v___x_1569_);
v___x_1578_ = v___x_1554_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1579_, 1, v_k_1557_);
lean_ctor_set(v_reuseFailAlloc_1579_, 2, v_v_1558_);
lean_ctor_set(v_reuseFailAlloc_1579_, 3, v___y_1572_);
lean_ctor_set(v_reuseFailAlloc_1579_, 4, v___x_1576_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
v___jp_1581_:
{
lean_object* v___x_1583_; lean_object* v___x_1585_; 
v___x_1583_ = lean_nat_add(v___x_1568_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec(v___x_1568_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_l_1559_);
lean_ctor_set(v___x_1394_, 0, v___x_1583_);
v___x_1585_ = v___x_1394_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1583_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1589_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1589_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1589_, 4, v_l_1559_);
v___x_1585_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_nat_add(v___x_1538_, v_size_1561_);
if (lean_obj_tag(v_r_1560_) == 0)
{
lean_object* v_size_1587_; 
v_size_1587_ = lean_ctor_get(v_r_1560_, 0);
lean_inc(v_size_1587_);
v___y_1571_ = v___x_1586_;
v___y_1572_ = v___x_1585_;
v___y_1573_ = v_size_1587_;
goto v___jp_1570_;
}
else
{
lean_object* v___x_1588_; 
v___x_1588_ = lean_unsigned_to_nat(0u);
v___y_1571_ = v___x_1586_;
v___y_1572_ = v___x_1585_;
v___y_1573_ = v___x_1588_;
goto v___jp_1570_;
}
}
}
}
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; 
lean_del_object(v___x_1394_);
v___x_1598_ = lean_nat_add(v___x_1538_, v_size_1539_);
v___x_1599_ = lean_nat_add(v___x_1598_, v_size_1540_);
lean_dec(v_size_1540_);
v___x_1600_ = lean_nat_add(v___x_1598_, v_size_1556_);
lean_dec(v___x_1598_);
lean_inc_ref(v_l_1391_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 4, v_l_1543_);
lean_ctor_set(v___x_1554_, 3, v_l_1391_);
lean_ctor_set(v___x_1554_, 2, v_v_1390_);
lean_ctor_set(v___x_1554_, 1, v_k_1389_);
lean_ctor_set(v___x_1554_, 0, v___x_1600_);
v___x_1602_ = v___x_1554_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1615_; 
v_reuseFailAlloc_1615_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1615_, 0, v___x_1600_);
lean_ctor_set(v_reuseFailAlloc_1615_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1615_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1615_, 3, v_l_1391_);
lean_ctor_set(v_reuseFailAlloc_1615_, 4, v_l_1543_);
v___x_1602_ = v_reuseFailAlloc_1615_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
v_isSharedCheck_1609_ = !lean_is_exclusive(v_l_1391_);
if (v_isSharedCheck_1609_ == 0)
{
lean_object* v_unused_1610_; lean_object* v_unused_1611_; lean_object* v_unused_1612_; lean_object* v_unused_1613_; lean_object* v_unused_1614_; 
v_unused_1610_ = lean_ctor_get(v_l_1391_, 4);
lean_dec(v_unused_1610_);
v_unused_1611_ = lean_ctor_get(v_l_1391_, 3);
lean_dec(v_unused_1611_);
v_unused_1612_ = lean_ctor_get(v_l_1391_, 2);
lean_dec(v_unused_1612_);
v_unused_1613_ = lean_ctor_get(v_l_1391_, 1);
lean_dec(v_unused_1613_);
v_unused_1614_ = lean_ctor_get(v_l_1391_, 0);
lean_dec(v_unused_1614_);
v___x_1604_ = v_l_1391_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_dec(v_l_1391_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 4, v_r_1544_);
lean_ctor_set(v___x_1604_, 3, v___x_1602_);
lean_ctor_set(v___x_1604_, 2, v_v_1542_);
lean_ctor_set(v___x_1604_, 1, v_k_1541_);
lean_ctor_set(v___x_1604_, 0, v___x_1599_);
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1599_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v_k_1541_);
lean_ctor_set(v_reuseFailAlloc_1608_, 2, v_v_1542_);
lean_ctor_set(v_reuseFailAlloc_1608_, 3, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1608_, 4, v_r_1544_);
v___x_1607_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1606_;
}
v_reusejp_1606_:
{
return v___x_1607_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1622_; 
v_l_1622_ = lean_ctor_get(v_impl_1537_, 3);
lean_inc(v_l_1622_);
if (lean_obj_tag(v_l_1622_) == 0)
{
lean_object* v_r_1623_; lean_object* v_k_1624_; lean_object* v_v_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1648_; 
v_r_1623_ = lean_ctor_get(v_impl_1537_, 4);
v_k_1624_ = lean_ctor_get(v_impl_1537_, 1);
v_v_1625_ = lean_ctor_get(v_impl_1537_, 2);
v_isSharedCheck_1648_ = !lean_is_exclusive(v_impl_1537_);
if (v_isSharedCheck_1648_ == 0)
{
lean_object* v_unused_1649_; lean_object* v_unused_1650_; 
v_unused_1649_ = lean_ctor_get(v_impl_1537_, 3);
lean_dec(v_unused_1649_);
v_unused_1650_ = lean_ctor_get(v_impl_1537_, 0);
lean_dec(v_unused_1650_);
v___x_1627_ = v_impl_1537_;
v_isShared_1628_ = v_isSharedCheck_1648_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_r_1623_);
lean_inc(v_v_1625_);
lean_inc(v_k_1624_);
lean_dec(v_impl_1537_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1648_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v_k_1629_; lean_object* v_v_1630_; lean_object* v___x_1632_; uint8_t v_isShared_1633_; uint8_t v_isSharedCheck_1644_; 
v_k_1629_ = lean_ctor_get(v_l_1622_, 1);
v_v_1630_ = lean_ctor_get(v_l_1622_, 2);
v_isSharedCheck_1644_ = !lean_is_exclusive(v_l_1622_);
if (v_isSharedCheck_1644_ == 0)
{
lean_object* v_unused_1645_; lean_object* v_unused_1646_; lean_object* v_unused_1647_; 
v_unused_1645_ = lean_ctor_get(v_l_1622_, 4);
lean_dec(v_unused_1645_);
v_unused_1646_ = lean_ctor_get(v_l_1622_, 3);
lean_dec(v_unused_1646_);
v_unused_1647_ = lean_ctor_get(v_l_1622_, 0);
lean_dec(v_unused_1647_);
v___x_1632_ = v_l_1622_;
v_isShared_1633_ = v_isSharedCheck_1644_;
goto v_resetjp_1631_;
}
else
{
lean_inc(v_v_1630_);
lean_inc(v_k_1629_);
lean_dec(v_l_1622_);
v___x_1632_ = lean_box(0);
v_isShared_1633_ = v_isSharedCheck_1644_;
goto v_resetjp_1631_;
}
v_resetjp_1631_:
{
lean_object* v___x_1634_; lean_object* v___x_1636_; 
v___x_1634_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1623_, 2);
if (v_isShared_1633_ == 0)
{
lean_ctor_set(v___x_1632_, 4, v_r_1623_);
lean_ctor_set(v___x_1632_, 3, v_r_1623_);
lean_ctor_set(v___x_1632_, 2, v_v_1390_);
lean_ctor_set(v___x_1632_, 1, v_k_1389_);
lean_ctor_set(v___x_1632_, 0, v___x_1538_);
v___x_1636_ = v___x_1632_;
goto v_reusejp_1635_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1643_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1643_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1643_, 3, v_r_1623_);
lean_ctor_set(v_reuseFailAlloc_1643_, 4, v_r_1623_);
v___x_1636_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1635_;
}
v_reusejp_1635_:
{
lean_object* v___x_1638_; 
lean_inc(v_r_1623_);
if (v_isShared_1628_ == 0)
{
lean_ctor_set(v___x_1627_, 3, v_r_1623_);
lean_ctor_set(v___x_1627_, 0, v___x_1538_);
v___x_1638_ = v___x_1627_;
goto v_reusejp_1637_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1642_, 1, v_k_1624_);
lean_ctor_set(v_reuseFailAlloc_1642_, 2, v_v_1625_);
lean_ctor_set(v_reuseFailAlloc_1642_, 3, v_r_1623_);
lean_ctor_set(v_reuseFailAlloc_1642_, 4, v_r_1623_);
v___x_1638_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1637_;
}
v_reusejp_1637_:
{
lean_object* v___x_1640_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v___x_1638_);
lean_ctor_set(v___x_1394_, 3, v___x_1636_);
lean_ctor_set(v___x_1394_, 2, v_v_1630_);
lean_ctor_set(v___x_1394_, 1, v_k_1629_);
lean_ctor_set(v___x_1394_, 0, v___x_1634_);
v___x_1640_ = v___x_1394_;
goto v_reusejp_1639_;
}
else
{
lean_object* v_reuseFailAlloc_1641_; 
v_reuseFailAlloc_1641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1641_, 0, v___x_1634_);
lean_ctor_set(v_reuseFailAlloc_1641_, 1, v_k_1629_);
lean_ctor_set(v_reuseFailAlloc_1641_, 2, v_v_1630_);
lean_ctor_set(v_reuseFailAlloc_1641_, 3, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1641_, 4, v___x_1638_);
v___x_1640_ = v_reuseFailAlloc_1641_;
goto v_reusejp_1639_;
}
v_reusejp_1639_:
{
return v___x_1640_;
}
}
}
}
}
}
else
{
lean_object* v_r_1651_; 
v_r_1651_ = lean_ctor_get(v_impl_1537_, 4);
lean_inc(v_r_1651_);
if (lean_obj_tag(v_r_1651_) == 0)
{
lean_object* v_k_1652_; lean_object* v_v_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1664_; 
v_k_1652_ = lean_ctor_get(v_impl_1537_, 1);
v_v_1653_ = lean_ctor_get(v_impl_1537_, 2);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_impl_1537_);
if (v_isSharedCheck_1664_ == 0)
{
lean_object* v_unused_1665_; lean_object* v_unused_1666_; lean_object* v_unused_1667_; 
v_unused_1665_ = lean_ctor_get(v_impl_1537_, 4);
lean_dec(v_unused_1665_);
v_unused_1666_ = lean_ctor_get(v_impl_1537_, 3);
lean_dec(v_unused_1666_);
v_unused_1667_ = lean_ctor_get(v_impl_1537_, 0);
lean_dec(v_unused_1667_);
v___x_1655_ = v_impl_1537_;
v_isShared_1656_ = v_isSharedCheck_1664_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_v_1653_);
lean_inc(v_k_1652_);
lean_dec(v_impl_1537_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1664_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
lean_object* v___x_1657_; lean_object* v___x_1659_; 
v___x_1657_ = lean_unsigned_to_nat(3u);
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 4, v_l_1622_);
lean_ctor_set(v___x_1655_, 2, v_v_1390_);
lean_ctor_set(v___x_1655_, 1, v_k_1389_);
lean_ctor_set(v___x_1655_, 0, v___x_1538_);
v___x_1659_ = v___x_1655_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1538_);
lean_ctor_set(v_reuseFailAlloc_1663_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1663_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1663_, 3, v_l_1622_);
lean_ctor_set(v_reuseFailAlloc_1663_, 4, v_l_1622_);
v___x_1659_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
lean_object* v___x_1661_; 
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_r_1651_);
lean_ctor_set(v___x_1394_, 3, v___x_1659_);
lean_ctor_set(v___x_1394_, 2, v_v_1653_);
lean_ctor_set(v___x_1394_, 1, v_k_1652_);
lean_ctor_set(v___x_1394_, 0, v___x_1657_);
v___x_1661_ = v___x_1394_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1657_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_k_1652_);
lean_ctor_set(v_reuseFailAlloc_1662_, 2, v_v_1653_);
lean_ctor_set(v_reuseFailAlloc_1662_, 3, v___x_1659_);
lean_ctor_set(v_reuseFailAlloc_1662_, 4, v_r_1651_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
else
{
lean_object* v___x_1668_; lean_object* v___x_1670_; 
v___x_1668_ = lean_unsigned_to_nat(2u);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 4, v_impl_1537_);
lean_ctor_set(v___x_1394_, 3, v_r_1651_);
lean_ctor_set(v___x_1394_, 0, v___x_1668_);
v___x_1670_ = v___x_1394_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v___x_1668_);
lean_ctor_set(v_reuseFailAlloc_1671_, 1, v_k_1389_);
lean_ctor_set(v_reuseFailAlloc_1671_, 2, v_v_1390_);
lean_ctor_set(v_reuseFailAlloc_1671_, 3, v_r_1651_);
lean_ctor_set(v_reuseFailAlloc_1671_, 4, v_impl_1537_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
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
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = lean_unsigned_to_nat(1u);
v___x_1674_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
lean_ctor_set(v___x_1674_, 1, v_k_1385_);
lean_ctor_set(v___x_1674_, 2, v_v_1386_);
lean_ctor_set(v___x_1674_, 3, v_t_1387_);
lean_ctor_set(v___x_1674_, 4, v_t_1387_);
return v___x_1674_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(lean_object* v_k_1675_, lean_object* v_t_1676_){
_start:
{
if (lean_obj_tag(v_t_1676_) == 0)
{
lean_object* v_k_1677_; lean_object* v_l_1678_; lean_object* v_r_1679_; uint8_t v___x_1680_; 
v_k_1677_ = lean_ctor_get(v_t_1676_, 1);
lean_inc(v_k_1677_);
v_l_1678_ = lean_ctor_get(v_t_1676_, 3);
lean_inc(v_l_1678_);
v_r_1679_ = lean_ctor_get(v_t_1676_, 4);
lean_inc(v_r_1679_);
lean_dec_ref(v_t_1676_);
lean_inc(v_k_1675_);
v___x_1680_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_cmpModPrivate(v_k_1675_, v_k_1677_);
switch(v___x_1680_)
{
case 0:
{
lean_dec(v_r_1679_);
v_t_1676_ = v_l_1678_;
goto _start;
}
case 1:
{
uint8_t v___x_1682_; 
lean_dec(v_r_1679_);
lean_dec(v_l_1678_);
lean_dec(v_k_1675_);
v___x_1682_ = 1;
return v___x_1682_;
}
default: 
{
lean_dec(v_l_1678_);
v_t_1676_ = v_r_1679_;
goto _start;
}
}
}
else
{
uint8_t v___x_1684_; 
lean_dec(v_k_1675_);
v___x_1684_ = 0;
return v___x_1684_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg___boxed(lean_object* v_k_1685_, lean_object* v_t_1686_){
_start:
{
uint8_t v_res_1687_; lean_object* v_r_1688_; 
v_res_1687_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1685_, v_t_1686_);
v_r_1688_ = lean_box(v_res_1687_);
return v_r_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(lean_object* v_as_1689_, size_t v_sz_1690_, size_t v_i_1691_, lean_object* v_b_1692_){
_start:
{
lean_object* v___y_1695_; uint8_t v___x_1699_; 
v___x_1699_ = lean_usize_dec_lt(v_i_1691_, v_sz_1690_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; 
v___x_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_b_1692_);
return v___x_1700_;
}
else
{
lean_object* v_a_1701_; uint8_t v___x_1702_; 
v_a_1701_ = lean_array_uget_borrowed(v_as_1689_, v_i_1691_);
lean_inc(v_b_1692_);
lean_inc(v_a_1701_);
v___x_1702_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_a_1701_, v_b_1692_);
if (v___x_1702_ == 0)
{
lean_object* v___x_1703_; lean_object* v___x_1704_; 
v___x_1703_ = lean_box(0);
lean_inc(v_a_1701_);
v___x_1704_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_a_1701_, v___x_1703_, v_b_1692_);
v___y_1695_ = v___x_1704_;
goto v___jp_1694_;
}
else
{
v___y_1695_ = v_b_1692_;
goto v___jp_1694_;
}
}
v___jp_1694_:
{
size_t v___x_1696_; size_t v___x_1697_; 
v___x_1696_ = ((size_t)1ULL);
v___x_1697_ = lean_usize_add(v_i_1691_, v___x_1696_);
v_i_1691_ = v___x_1697_;
v_b_1692_ = v___y_1695_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg___boxed(lean_object* v_as_1705_, lean_object* v_sz_1706_, lean_object* v_i_1707_, lean_object* v_b_1708_, lean_object* v___y_1709_){
_start:
{
size_t v_sz_boxed_1710_; size_t v_i_boxed_1711_; lean_object* v_res_1712_; 
v_sz_boxed_1710_ = lean_unbox_usize(v_sz_1706_);
lean_dec(v_sz_1706_);
v_i_boxed_1711_ = lean_unbox_usize(v_i_1707_);
lean_dec(v_i_1707_);
v_res_1712_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1705_, v_sz_boxed_1710_, v_i_boxed_1711_, v_b_1708_);
lean_dec_ref(v_as_1705_);
return v_res_1712_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(lean_object* v_type_1713_, lean_object* v_a_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = l_Lean_Server_Completion_getDotCompletionTypeNames(v_type_1713_, v_a_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; lean_object* v_set_1721_; size_t v_sz_1722_; size_t v___x_1723_; lean_object* v___x_1724_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref(v___x_1719_);
v_set_1721_ = lean_box(1);
v_sz_1722_ = lean_array_size(v_a_1720_);
v___x_1723_ = ((size_t)0ULL);
v___x_1724_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_a_1720_, v_sz_1722_, v___x_1723_, v_set_1721_);
lean_dec(v_a_1720_);
return v___x_1724_;
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
v_a_1725_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1719_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1719_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet___boxed(lean_object* v_type_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_type_1733_, v_a_1734_, v_a_1735_, v_a_1736_, v_a_1737_);
lean_dec(v_a_1737_);
lean_dec_ref(v_a_1736_);
lean_dec(v_a_1735_);
lean_dec_ref(v_a_1734_);
return v_res_1739_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(lean_object* v_00_u03b2_1740_, lean_object* v_k_1741_, lean_object* v_t_1742_){
_start:
{
uint8_t v___x_1743_; 
v___x_1743_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_k_1741_, v_t_1742_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___boxed(lean_object* v_00_u03b2_1744_, lean_object* v_k_1745_, lean_object* v_t_1746_){
_start:
{
uint8_t v_res_1747_; lean_object* v_r_1748_; 
v_res_1747_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0(v_00_u03b2_1744_, v_k_1745_, v_t_1746_);
v_r_1748_ = lean_box(v_res_1747_);
return v_r_1748_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1(lean_object* v_00_u03b2_1749_, lean_object* v_k_1750_, lean_object* v_v_1751_, lean_object* v_t_1752_, lean_object* v_hl_1753_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Std_DTreeMap_Internal_Impl_insert___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__1___redArg(v_k_1750_, v_v_1751_, v_t_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(lean_object* v_as_1755_, size_t v_sz_1756_, size_t v_i_1757_, lean_object* v_b_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___redArg(v_as_1755_, v_sz_1756_, v_i_1757_, v_b_1758_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2___boxed(lean_object* v_as_1765_, lean_object* v_sz_1766_, lean_object* v_i_1767_, lean_object* v_b_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_){
_start:
{
size_t v_sz_boxed_1774_; size_t v_i_boxed_1775_; lean_object* v_res_1776_; 
v_sz_boxed_1774_ = lean_unbox_usize(v_sz_1766_);
lean_dec(v_sz_1766_);
v_i_boxed_1775_ = lean_unbox_usize(v_i_1767_);
lean_dec(v_i_1767_);
v_res_1776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__2(v_as_1765_, v_sz_boxed_1774_, v_i_boxed_1775_, v_b_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v___y_1770_);
lean_dec_ref(v___y_1769_);
lean_dec_ref(v_as_1765_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(lean_object* v_e_1777_, lean_object* v_declName_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
uint8_t v___y_1785_; uint8_t v___y_1807_; lean_object* v___x_1810_; 
v___x_1810_ = l_Lean_Expr_getAppFn(v_e_1777_);
if (lean_obj_tag(v___x_1810_) == 4)
{
lean_object* v_declName_1811_; lean_object* v___x_1812_; 
v_declName_1811_ = lean_ctor_get(v___x_1810_, 0);
lean_inc_n(v_declName_1811_, 2);
lean_dec_ref(v___x_1810_);
v___x_1812_ = lean_private_to_user_name(v_declName_1811_);
if (lean_obj_tag(v___x_1812_) == 0)
{
uint8_t v___x_1813_; 
v___x_1813_ = lean_name_eq(v_declName_1811_, v_declName_1778_);
lean_dec(v_declName_1811_);
v___y_1807_ = v___x_1813_;
goto v___jp_1806_;
}
else
{
lean_object* v_val_1814_; uint8_t v___x_1815_; 
lean_dec(v_declName_1811_);
v_val_1814_ = lean_ctor_get(v___x_1812_, 0);
lean_inc(v_val_1814_);
lean_dec_ref(v___x_1812_);
v___x_1815_ = lean_name_eq(v_val_1814_, v_declName_1778_);
lean_dec(v_val_1814_);
v___y_1807_ = v___x_1815_;
goto v___jp_1806_;
}
}
else
{
uint8_t v___x_1816_; 
lean_dec_ref(v___x_1810_);
v___x_1816_ = 0;
v___y_1785_ = v___x_1816_;
goto v___jp_1784_;
}
v___jp_1784_:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_e_1777_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1797_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1789_ = v___x_1786_;
v_isShared_1790_ = v_isSharedCheck_1797_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1786_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1797_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
if (lean_obj_tag(v_a_1787_) == 1)
{
lean_object* v_val_1791_; 
lean_del_object(v___x_1789_);
v_val_1791_ = lean_ctor_get(v_a_1787_, 0);
lean_inc(v_val_1791_);
lean_dec_ref(v_a_1787_);
v_e_1777_ = v_val_1791_;
goto _start;
}
else
{
lean_object* v___x_1793_; lean_object* v___x_1795_; 
lean_dec(v_a_1787_);
v___x_1793_ = lean_box(v___y_1785_);
if (v_isShared_1790_ == 0)
{
lean_ctor_set(v___x_1789_, 0, v___x_1793_);
v___x_1795_ = v___x_1789_;
goto v_reusejp_1794_;
}
else
{
lean_object* v_reuseFailAlloc_1796_; 
v_reuseFailAlloc_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1796_, 0, v___x_1793_);
v___x_1795_ = v_reuseFailAlloc_1796_;
goto v_reusejp_1794_;
}
v_reusejp_1794_:
{
return v___x_1795_;
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
v_a_1798_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1786_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1786_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1803_; 
if (v_isShared_1801_ == 0)
{
v___x_1803_ = v___x_1800_;
goto v_reusejp_1802_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1798_);
v___x_1803_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1802_;
}
v_reusejp_1802_:
{
return v___x_1803_;
}
}
}
}
v___jp_1806_:
{
if (v___y_1807_ == 0)
{
v___y_1785_ = v___y_1807_;
goto v___jp_1784_;
}
else
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
lean_dec_ref(v_e_1777_);
v___x_1808_ = lean_box(v___y_1807_);
v___x_1809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1808_);
return v___x_1809_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf___boxed(lean_object* v_e_1817_, lean_object* v_declName_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_, lean_object* v_a_1822_, lean_object* v_a_1823_){
_start:
{
lean_object* v_res_1824_; 
v_res_1824_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v_e_1817_, v_declName_1818_, v_a_1819_, v_a_1820_, v_a_1821_, v_a_1822_);
lean_dec(v_a_1822_);
lean_dec_ref(v_a_1821_);
lean_dec(v_a_1820_);
lean_dec_ref(v_a_1819_);
lean_dec(v_declName_1818_);
return v_res_1824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(lean_object* v_k_1825_, lean_object* v_b_1826_, lean_object* v_c_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v___x_1833_; 
lean_inc(v___y_1831_);
lean_inc_ref(v___y_1830_);
lean_inc(v___y_1829_);
lean_inc_ref(v___y_1828_);
v___x_1833_ = lean_apply_7(v_k_1825_, v_b_1826_, v_c_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, lean_box(0));
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed(lean_object* v_k_1834_, lean_object* v_b_1835_, lean_object* v_c_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_){
_start:
{
lean_object* v_res_1842_; 
v_res_1842_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0(v_k_1834_, v_b_1835_, v_c_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
return v_res_1842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(lean_object* v_type_1843_, lean_object* v_k_1844_, uint8_t v_cleanupAnnotations_1845_, uint8_t v_whnfType_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v___f_1852_; lean_object* v___x_1853_; 
v___f_1852_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1852_, 0, v_k_1844_);
v___x_1853_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1843_, v___f_1852_, v_cleanupAnnotations_1845_, v_whnfType_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1856_; uint8_t v_isShared_1857_; uint8_t v_isSharedCheck_1861_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1861_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1861_ == 0)
{
v___x_1856_ = v___x_1853_;
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
else
{
lean_inc(v_a_1854_);
lean_dec(v___x_1853_);
v___x_1856_ = lean_box(0);
v_isShared_1857_ = v_isSharedCheck_1861_;
goto v_resetjp_1855_;
}
v_resetjp_1855_:
{
lean_object* v___x_1859_; 
if (v_isShared_1857_ == 0)
{
v___x_1859_ = v___x_1856_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v_a_1854_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
v_a_1862_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1853_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1853_);
v___x_1864_ = lean_box(0);
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
v_resetjp_1863_:
{
lean_object* v___x_1867_; 
if (v_isShared_1865_ == 0)
{
v___x_1867_ = v___x_1864_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v_a_1862_);
v___x_1867_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
return v___x_1867_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___boxed(lean_object* v_type_1870_, lean_object* v_k_1871_, lean_object* v_cleanupAnnotations_1872_, lean_object* v_whnfType_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1879_; uint8_t v_whnfType_boxed_1880_; lean_object* v_res_1881_; 
v_cleanupAnnotations_boxed_1879_ = lean_unbox(v_cleanupAnnotations_1872_);
v_whnfType_boxed_1880_ = lean_unbox(v_whnfType_1873_);
v_res_1881_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1870_, v_k_1871_, v_cleanupAnnotations_boxed_1879_, v_whnfType_boxed_1880_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec_ref(v___y_1874_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(lean_object* v_00_u03b1_1882_, lean_object* v_type_1883_, lean_object* v_k_1884_, uint8_t v_cleanupAnnotations_1885_, uint8_t v_whnfType_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
lean_object* v___x_1892_; 
v___x_1892_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v_type_1883_, v_k_1884_, v_cleanupAnnotations_1885_, v_whnfType_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___boxed(lean_object* v_00_u03b1_1893_, lean_object* v_type_1894_, lean_object* v_k_1895_, lean_object* v_cleanupAnnotations_1896_, lean_object* v_whnfType_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1903_; uint8_t v_whnfType_boxed_1904_; lean_object* v_res_1905_; 
v_cleanupAnnotations_boxed_1903_ = lean_unbox(v_cleanupAnnotations_1896_);
v_whnfType_boxed_1904_ = lean_unbox(v_whnfType_1897_);
v_res_1905_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1(v_00_u03b1_1893_, v_type_1894_, v_k_1895_, v_cleanupAnnotations_boxed_1903_, v_whnfType_boxed_1904_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
return v_res_1905_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = lean_box(0);
v___x_1907_ = lean_box(0);
v___x_1908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1908_, 0, v___x_1907_);
lean_ctor_set(v___x_1908_, 1, v___x_1906_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(lean_object* v_typeName_1909_, lean_object* v_as_1910_, size_t v_sz_1911_, size_t v_i_1912_, lean_object* v_b_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
uint8_t v___x_1919_; 
v___x_1919_ = lean_usize_dec_lt(v_i_1912_, v_sz_1911_);
if (v___x_1919_ == 0)
{
lean_object* v___x_1920_; 
v___x_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1920_, 0, v_b_1913_);
return v___x_1920_;
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; 
lean_dec_ref(v_b_1913_);
v_a_1921_ = lean_array_uget_borrowed(v_as_1910_, v_i_1912_);
v___x_1922_ = l_Lean_Expr_fvarId_x21(v_a_1921_);
v___x_1923_ = l_Lean_FVarId_getDecl___redArg(v___x_1922_, v___y_1914_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref(v___x_1923_);
v___x_1925_ = l_Lean_LocalDecl_type(v_a_1924_);
lean_dec(v_a_1924_);
v___x_1926_ = l_Lean_Expr_consumeMData(v___x_1925_);
lean_dec_ref(v___x_1925_);
v___x_1927_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDefEqToAppOf(v___x_1926_, v_typeName_1909_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1943_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1943_ == 0)
{
v___x_1930_ = v___x_1927_;
v_isShared_1931_ = v_isSharedCheck_1943_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_a_1928_);
lean_dec(v___x_1927_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1943_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1932_ = lean_box(0);
v___x_1933_ = lean_unbox(v_a_1928_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; size_t v___x_1935_; size_t v___x_1936_; 
lean_del_object(v___x_1930_);
lean_dec(v_a_1928_);
v___x_1934_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0);
v___x_1935_ = ((size_t)1ULL);
v___x_1936_ = lean_usize_add(v_i_1912_, v___x_1935_);
v_i_1912_ = v___x_1936_;
v_b_1913_ = v___x_1934_;
goto _start;
}
else
{
lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1941_; 
v___x_1938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1938_, 0, v_a_1928_);
v___x_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1938_);
lean_ctor_set(v___x_1939_, 1, v___x_1932_);
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 0, v___x_1939_);
v___x_1941_ = v___x_1930_;
goto v_reusejp_1940_;
}
else
{
lean_object* v_reuseFailAlloc_1942_; 
v_reuseFailAlloc_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1942_, 0, v___x_1939_);
v___x_1941_ = v_reuseFailAlloc_1942_;
goto v_reusejp_1940_;
}
v_reusejp_1940_:
{
return v___x_1941_;
}
}
}
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
v_a_1944_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1927_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1927_);
v___x_1946_ = lean_box(0);
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
v_resetjp_1945_:
{
lean_object* v___x_1949_; 
if (v_isShared_1947_ == 0)
{
v___x_1949_ = v___x_1946_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v_a_1944_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
else
{
lean_object* v_a_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1959_; 
v_a_1952_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1959_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1954_ = v___x_1923_;
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_a_1952_);
lean_dec(v___x_1923_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1959_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v___x_1957_; 
if (v_isShared_1955_ == 0)
{
v___x_1957_ = v___x_1954_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_a_1952_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___boxed(lean_object* v_typeName_1960_, lean_object* v_as_1961_, lean_object* v_sz_1962_, lean_object* v_i_1963_, lean_object* v_b_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_){
_start:
{
size_t v_sz_boxed_1970_; size_t v_i_boxed_1971_; lean_object* v_res_1972_; 
v_sz_boxed_1970_ = lean_unbox_usize(v_sz_1962_);
lean_dec(v_sz_1962_);
v_i_boxed_1971_ = lean_unbox_usize(v_i_1963_);
lean_dec(v_i_1963_);
v_res_1972_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1960_, v_as_1961_, v_sz_boxed_1970_, v_i_boxed_1971_, v_b_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_);
lean_dec(v___y_1968_);
lean_dec_ref(v___y_1967_);
lean_dec(v___y_1966_);
lean_dec_ref(v___y_1965_);
lean_dec_ref(v_as_1961_);
lean_dec(v_typeName_1960_);
return v_res_1972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(lean_object* v_typeName_1973_, lean_object* v_xs_1974_, lean_object* v_x_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v___x_1981_; size_t v_sz_1982_; size_t v___x_1983_; lean_object* v___x_1984_; 
v___x_1981_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0___closed__0);
v_sz_1982_ = lean_array_size(v_xs_1974_);
v___x_1983_ = ((size_t)0ULL);
v___x_1984_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__0(v_typeName_1973_, v_xs_1974_, v_sz_1982_, v___x_1983_, v___x_1981_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
if (lean_obj_tag(v___x_1984_) == 0)
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1999_; 
v_a_1985_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1987_ = v___x_1984_;
v_isShared_1988_ = v_isSharedCheck_1999_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1984_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1999_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v_fst_1989_; 
v_fst_1989_ = lean_ctor_get(v_a_1985_, 0);
lean_inc(v_fst_1989_);
lean_dec(v_a_1985_);
if (lean_obj_tag(v_fst_1989_) == 0)
{
uint8_t v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1993_; 
v___x_1990_ = 0;
v___x_1991_ = lean_box(v___x_1990_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_1991_);
v___x_1993_ = v___x_1987_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v___x_1991_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
else
{
lean_object* v_val_1995_; lean_object* v___x_1997_; 
v_val_1995_ = lean_ctor_get(v_fst_1989_, 0);
lean_inc(v_val_1995_);
lean_dec_ref(v_fst_1989_);
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v_val_1995_);
v___x_1997_ = v___x_1987_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_val_1995_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
v_a_2000_ = lean_ctor_get(v___x_1984_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1984_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1984_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1984_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed(lean_object* v_typeName_2008_, lean_object* v_xs_2009_, lean_object* v_x_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0(v_typeName_2008_, v_xs_2009_, v_x_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
lean_dec(v___y_2014_);
lean_dec_ref(v___y_2013_);
lean_dec(v___y_2012_);
lean_dec_ref(v___y_2011_);
lean_dec_ref(v_x_2010_);
lean_dec_ref(v_xs_2009_);
lean_dec(v_typeName_2008_);
return v_res_2016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(lean_object* v_typeName_2017_, lean_object* v_info_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v___f_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; lean_object* v___x_2027_; 
v___f_2024_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2024_, 0, v_typeName_2017_);
v___x_2025_ = l_Lean_ConstantInfo_type(v_info_2018_);
v___x_2026_ = 0;
v___x_2027_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg(v___x_2025_, v___f_2024_, v___x_2026_, v___x_2026_, v_a_2019_, v_a_2020_, v_a_2021_, v_a_2022_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod___boxed(lean_object* v_typeName_2028_, lean_object* v_info_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_){
_start:
{
lean_object* v_res_2035_; 
v_res_2035_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v_typeName_2028_, v_info_2029_, v_a_2030_, v_a_2031_, v_a_2032_, v_a_2033_);
lean_dec(v_a_2033_);
lean_dec_ref(v_a_2032_);
lean_dec(v_a_2031_);
lean_dec_ref(v_a_2030_);
lean_dec_ref(v_info_2029_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(lean_object* v_e_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_){
_start:
{
uint8_t v___x_2040_; 
v___x_2040_ = l_Lean_Expr_hasMVar(v_e_2036_);
if (v___x_2040_ == 0)
{
lean_object* v___x_2041_; 
v___x_2041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2041_, 0, v_e_2036_);
return v___x_2041_;
}
else
{
lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v_mctx_2044_; lean_object* v___x_2045_; lean_object* v_fst_2046_; lean_object* v_snd_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v_cache_2050_; lean_object* v_zetaDeltaFVarIds_2051_; lean_object* v_postponed_2052_; lean_object* v_diag_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2062_; 
v___x_2042_ = lean_st_ref_get(v___y_2038_);
lean_dec(v___x_2042_);
v___x_2043_ = lean_st_ref_get(v___y_2037_);
v_mctx_2044_ = lean_ctor_get(v___x_2043_, 0);
lean_inc_ref(v_mctx_2044_);
lean_dec(v___x_2043_);
v___x_2045_ = l_Lean_instantiateMVarsCore(v_mctx_2044_, v_e_2036_);
v_fst_2046_ = lean_ctor_get(v___x_2045_, 0);
lean_inc(v_fst_2046_);
v_snd_2047_ = lean_ctor_get(v___x_2045_, 1);
lean_inc(v_snd_2047_);
lean_dec_ref(v___x_2045_);
v___x_2048_ = lean_st_ref_get(v___y_2038_);
lean_dec(v___x_2048_);
v___x_2049_ = lean_st_ref_take(v___y_2037_);
v_cache_2050_ = lean_ctor_get(v___x_2049_, 1);
v_zetaDeltaFVarIds_2051_ = lean_ctor_get(v___x_2049_, 2);
v_postponed_2052_ = lean_ctor_get(v___x_2049_, 3);
v_diag_2053_ = lean_ctor_get(v___x_2049_, 4);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2049_);
if (v_isSharedCheck_2062_ == 0)
{
lean_object* v_unused_2063_; 
v_unused_2063_ = lean_ctor_get(v___x_2049_, 0);
lean_dec(v_unused_2063_);
v___x_2055_ = v___x_2049_;
v_isShared_2056_ = v_isSharedCheck_2062_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_diag_2053_);
lean_inc(v_postponed_2052_);
lean_inc(v_zetaDeltaFVarIds_2051_);
lean_inc(v_cache_2050_);
lean_dec(v___x_2049_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2062_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2058_; 
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v_snd_2047_);
v___x_2058_ = v___x_2055_;
goto v_reusejp_2057_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_snd_2047_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v_cache_2050_);
lean_ctor_set(v_reuseFailAlloc_2061_, 2, v_zetaDeltaFVarIds_2051_);
lean_ctor_set(v_reuseFailAlloc_2061_, 3, v_postponed_2052_);
lean_ctor_set(v_reuseFailAlloc_2061_, 4, v_diag_2053_);
v___x_2058_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2057_;
}
v_reusejp_2057_:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2059_ = lean_st_ref_set(v___y_2037_, v___x_2058_);
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v_fst_2046_);
return v___x_2060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg___boxed(lean_object* v_e_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2064_, v___y_2065_, v___y_2066_);
lean_dec(v___y_2066_);
lean_dec(v___y_2065_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(lean_object* v_e_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v___x_2075_; 
v___x_2075_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_e_2069_, v___y_2071_, v___y_2073_);
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___boxed(lean_object* v_e_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_){
_start:
{
lean_object* v_res_2082_; 
v_res_2082_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0(v_e_2076_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(lean_object* v_type_2083_, lean_object* v_k_2084_, uint8_t v_cleanupAnnotations_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v___f_2091_; uint8_t v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___f_2091_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2091_, 0, v_k_2084_);
v___x_2092_ = 0;
v___x_2093_ = lean_box(0);
v___x_2094_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_2092_, v___x_2093_, v_type_2083_, v___f_2091_, v_cleanupAnnotations_2085_, v___x_2092_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2102_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2102_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2097_ = v___x_2094_;
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2094_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2102_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2100_; 
if (v_isShared_2098_ == 0)
{
v___x_2100_ = v___x_2097_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v_a_2095_);
v___x_2100_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
return v___x_2100_;
}
}
}
else
{
lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2110_; 
v_a_2103_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2110_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2105_ = v___x_2094_;
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2094_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2110_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2108_; 
if (v_isShared_2106_ == 0)
{
v___x_2108_ = v___x_2105_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_a_2103_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg___boxed(lean_object* v_type_2111_, lean_object* v_k_2112_, lean_object* v_cleanupAnnotations_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2119_; lean_object* v_res_2120_; 
v_cleanupAnnotations_boxed_2119_ = lean_unbox(v_cleanupAnnotations_2113_);
v_res_2120_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2111_, v_k_2112_, v_cleanupAnnotations_boxed_2119_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(lean_object* v_00_u03b1_2121_, lean_object* v_type_2122_, lean_object* v_k_2123_, uint8_t v_cleanupAnnotations_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_type_2122_, v_k_2123_, v_cleanupAnnotations_2124_, v___y_2125_, v___y_2126_, v___y_2127_, v___y_2128_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___boxed(lean_object* v_00_u03b1_2131_, lean_object* v_type_2132_, lean_object* v_k_2133_, lean_object* v_cleanupAnnotations_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2140_; lean_object* v_res_2141_; 
v_cleanupAnnotations_boxed_2140_ = lean_unbox(v_cleanupAnnotations_2134_);
v_res_2141_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1(v_00_u03b1_2131_, v_type_2132_, v_k_2133_, v_cleanupAnnotations_boxed_2140_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_);
lean_dec(v___y_2138_);
lean_dec_ref(v___y_2137_);
lean_dec(v___y_2136_);
lean_dec_ref(v___y_2135_);
return v_res_2141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed(lean_object* v_typeNameSet_2142_, lean_object* v_x_2143_, lean_object* v_type_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_){
_start:
{
lean_object* v_res_2150_; 
v_res_2150_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(v_typeNameSet_2142_, v_x_2143_, v_type_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec(v___y_2146_);
lean_dec_ref(v___y_2145_);
lean_dec_ref(v_x_2143_);
return v_res_2150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(lean_object* v_typeNameSet_2151_, lean_object* v_type_2152_, lean_object* v_a_2153_, lean_object* v_a_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_){
_start:
{
lean_object* v___f_2158_; lean_object* v_a_2160_; lean_object* v___y_2210_; lean_object* v___x_2220_; 
lean_inc(v_typeNameSet_2151_);
v___f_2158_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2158_, 0, v_typeNameSet_2151_);
lean_inc_ref(v_type_2152_);
v___x_2220_ = l_Lean_Meta_whnfCoreUnfoldingAnnotations(v_type_2152_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_);
if (lean_obj_tag(v___x_2220_) == 0)
{
lean_dec_ref(v_type_2152_);
v___y_2210_ = v___x_2220_;
goto v___jp_2209_;
}
else
{
lean_object* v_a_2221_; uint8_t v___y_2223_; uint8_t v___x_2224_; 
v_a_2221_ = lean_ctor_get(v___x_2220_, 0);
lean_inc(v_a_2221_);
v___x_2224_ = l_Lean_Exception_isInterrupt(v_a_2221_);
if (v___x_2224_ == 0)
{
uint8_t v___x_2225_; 
v___x_2225_ = l_Lean_Exception_isRuntime(v_a_2221_);
v___y_2223_ = v___x_2225_;
goto v___jp_2222_;
}
else
{
lean_dec(v_a_2221_);
v___y_2223_ = v___x_2224_;
goto v___jp_2222_;
}
v___jp_2222_:
{
if (v___y_2223_ == 0)
{
lean_dec_ref(v___x_2220_);
v_a_2160_ = v_type_2152_;
goto v___jp_2159_;
}
else
{
lean_dec_ref(v_type_2152_);
v___y_2210_ = v___x_2220_;
goto v___jp_2209_;
}
}
}
v___jp_2159_:
{
uint8_t v___x_2161_; 
v___x_2161_ = l_Lean_Expr_isForall(v_a_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; 
lean_dec_ref(v___f_2158_);
v___x_2162_ = l_Lean_instantiateMVars___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__0___redArg(v_a_2160_, v_a_2154_, v_a_2156_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2198_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2198_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2198_ == 0)
{
v___x_2165_ = v___x_2162_;
v_isShared_2166_ = v_isSharedCheck_2198_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2162_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2198_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2167_; 
v___x_2167_ = l_Lean_Expr_getAppFn(v_a_2163_);
if (lean_obj_tag(v___x_2167_) == 4)
{
lean_object* v_declName_2168_; uint8_t v___x_2169_; 
v_declName_2168_ = lean_ctor_get(v___x_2167_, 0);
lean_inc(v_declName_2168_);
lean_dec_ref(v___x_2167_);
lean_inc(v_typeNameSet_2151_);
v___x_2169_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_declName_2168_, v_typeNameSet_2151_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2170_; 
lean_del_object(v___x_2165_);
v___x_2170_ = l_Lean_Server_Completion_unfoldDefinitionGuarded_x3f(v_a_2163_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_);
if (lean_obj_tag(v___x_2170_) == 0)
{
lean_object* v_a_2171_; lean_object* v___x_2173_; uint8_t v_isShared_2174_; uint8_t v_isSharedCheck_2181_; 
v_a_2171_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2173_ = v___x_2170_;
v_isShared_2174_ = v_isSharedCheck_2181_;
goto v_resetjp_2172_;
}
else
{
lean_inc(v_a_2171_);
lean_dec(v___x_2170_);
v___x_2173_ = lean_box(0);
v_isShared_2174_ = v_isSharedCheck_2181_;
goto v_resetjp_2172_;
}
v_resetjp_2172_:
{
if (lean_obj_tag(v_a_2171_) == 1)
{
lean_object* v_val_2175_; 
lean_del_object(v___x_2173_);
v_val_2175_ = lean_ctor_get(v_a_2171_, 0);
lean_inc(v_val_2175_);
lean_dec_ref(v_a_2171_);
v_type_2152_ = v_val_2175_;
goto _start;
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2179_; 
lean_dec(v_a_2171_);
lean_dec(v_typeNameSet_2151_);
v___x_2177_ = lean_box(v___x_2169_);
if (v_isShared_2174_ == 0)
{
lean_ctor_set(v___x_2173_, 0, v___x_2177_);
v___x_2179_ = v___x_2173_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v___x_2177_);
v___x_2179_ = v_reuseFailAlloc_2180_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
return v___x_2179_;
}
}
}
}
else
{
lean_object* v_a_2182_; lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
lean_dec(v_typeNameSet_2151_);
v_a_2182_ = lean_ctor_get(v___x_2170_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2170_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2170_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2170_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_a_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
else
{
lean_object* v___x_2190_; lean_object* v___x_2192_; 
lean_dec(v_a_2163_);
lean_dec(v_typeNameSet_2151_);
v___x_2190_ = lean_box(v___x_2169_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2190_);
v___x_2192_ = v___x_2165_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2193_; 
v_reuseFailAlloc_2193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2193_, 0, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2193_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
return v___x_2192_;
}
}
}
else
{
lean_object* v___x_2194_; lean_object* v___x_2196_; 
lean_dec_ref(v___x_2167_);
lean_dec(v_a_2163_);
lean_dec(v_typeNameSet_2151_);
v___x_2194_ = lean_box(v___x_2161_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2194_);
v___x_2196_ = v___x_2165_;
goto v_reusejp_2195_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v___x_2194_);
v___x_2196_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2195_;
}
v_reusejp_2195_:
{
return v___x_2196_;
}
}
}
}
else
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2206_; 
lean_dec(v_typeNameSet_2151_);
v_a_2199_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2201_ = v___x_2162_;
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2162_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v___x_2204_; 
if (v_isShared_2202_ == 0)
{
v___x_2204_ = v___x_2201_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_a_2199_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
}
}
else
{
uint8_t v___x_2207_; lean_object* v___x_2208_; 
lean_dec(v_typeNameSet_2151_);
v___x_2207_ = 0;
v___x_2208_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit_spec__1___redArg(v_a_2160_, v___f_2158_, v___x_2207_, v_a_2153_, v_a_2154_, v_a_2155_, v_a_2156_);
return v___x_2208_;
}
}
v___jp_2209_:
{
if (lean_obj_tag(v___y_2210_) == 0)
{
lean_object* v_a_2211_; 
v_a_2211_ = lean_ctor_get(v___y_2210_, 0);
lean_inc(v_a_2211_);
lean_dec_ref(v___y_2210_);
v_a_2160_ = v_a_2211_;
goto v___jp_2159_;
}
else
{
lean_object* v_a_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
lean_dec_ref(v___f_2158_);
lean_dec(v_typeNameSet_2151_);
v_a_2212_ = lean_ctor_get(v___y_2210_, 0);
v_isSharedCheck_2219_ = !lean_is_exclusive(v___y_2210_);
if (v_isSharedCheck_2219_ == 0)
{
v___x_2214_ = v___y_2210_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_a_2212_);
lean_dec(v___y_2210_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2212_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___lam__0(lean_object* v_typeNameSet_2226_, lean_object* v_x_2227_, lean_object* v_type_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v___x_2234_; 
v___x_2234_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2226_, v_type_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit___boxed(lean_object* v_typeNameSet_2235_, lean_object* v_type_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2235_, v_type_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
lean_dec(v_a_2238_);
lean_dec_ref(v_a_2237_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(lean_object* v_typeNameSet_2243_, lean_object* v_info_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_, lean_object* v_a_2248_){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = l_Lean_ConstantInfo_type(v_info_2244_);
v___x_2251_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod_visit(v_typeNameSet_2243_, v___x_2250_, v_a_2245_, v_a_2246_, v_a_2247_, v_a_2248_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod___boxed(lean_object* v_typeNameSet_2252_, lean_object* v_info_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v_typeNameSet_2252_, v_info_2253_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_);
lean_dec(v_a_2257_);
lean_dec_ref(v_a_2256_);
lean_dec(v_a_2255_);
lean_dec_ref(v_a_2254_);
lean_dec_ref(v_info_2253_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(lean_object* v_matchAlias_2260_, lean_object* v_addAlias_2261_, lean_object* v_alias_2262_, lean_object* v_declNames_2263_, lean_object* v_ns_2264_, lean_object* v_a_2265_, lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_){
_start:
{
lean_object* v___x_2273_; uint8_t v___x_2274_; 
lean_inc_ref(v_matchAlias_2260_);
lean_inc(v_alias_2262_);
lean_inc(v_ns_2264_);
v___x_2273_ = lean_apply_2(v_matchAlias_2260_, v_ns_2264_, v_alias_2262_);
v___x_2274_ = lean_unbox(v___x_2273_);
if (v___x_2274_ == 0)
{
if (lean_obj_tag(v_ns_2264_) == 1)
{
lean_object* v_pre_2275_; 
v_pre_2275_ = lean_ctor_get(v_ns_2264_, 0);
lean_inc(v_pre_2275_);
lean_dec_ref(v_ns_2264_);
v_ns_2264_ = v_pre_2275_;
goto _start;
}
else
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
lean_dec(v_ns_2264_);
lean_dec(v_declNames_2263_);
lean_dec(v_alias_2262_);
lean_dec_ref(v_addAlias_2261_);
lean_dec_ref(v_matchAlias_2260_);
v___x_2277_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_2278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2277_);
return v___x_2278_;
}
}
else
{
lean_object* v___x_2279_; 
lean_dec(v_ns_2264_);
lean_dec_ref(v_matchAlias_2260_);
lean_inc(v_a_2271_);
lean_inc_ref(v_a_2270_);
lean_inc(v_a_2269_);
lean_inc_ref(v_a_2268_);
lean_inc_ref(v_a_2267_);
lean_inc(v_a_2266_);
lean_inc_ref(v_a_2265_);
v___x_2279_ = lean_apply_10(v_addAlias_2261_, v_alias_2262_, v_declNames_2263_, v_a_2265_, v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_, v_a_2270_, v_a_2271_, lean_box(0));
return v___x_2279_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias___boxed(lean_object* v_matchAlias_2280_, lean_object* v_addAlias_2281_, lean_object* v_alias_2282_, lean_object* v_declNames_2283_, lean_object* v_ns_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_){
_start:
{
lean_object* v_res_2293_; 
v_res_2293_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v_matchAlias_2280_, v_addAlias_2281_, v_alias_2282_, v_declNames_2283_, v_ns_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_, v_a_2291_);
lean_dec(v_a_2291_);
lean_dec_ref(v_a_2290_);
lean_dec(v_a_2289_);
lean_dec_ref(v_a_2288_);
lean_dec_ref(v_a_2287_);
lean_dec(v_a_2286_);
lean_dec_ref(v_a_2285_);
return v_res_2293_;
}
}
static lean_object* _init_l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; 
v___x_2294_ = lean_box(0);
v___x_2295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2295_, 0, v___x_2294_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(lean_object* v_a_2296_, lean_object* v___y_2297_){
_start:
{
lean_object* v___x_2299_; uint8_t v___x_2300_; 
v___x_2299_ = lean_st_ref_get(v___y_2297_);
lean_dec(v___x_2299_);
v___x_2300_ = l_Lean_Server_RequestCancellationToken_wasCancelledByCancelRequest(v_a_2296_);
if (v___x_2300_ == 0)
{
lean_object* v___x_2301_; lean_object* v___x_2302_; 
v___x_2301_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_2302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
return v___x_2302_;
}
else
{
lean_object* v___x_2303_; lean_object* v___x_2304_; 
v___x_2303_ = lean_obj_once(&l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0, &l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0_once, _init_l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___closed__0);
v___x_2304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2304_, 0, v___x_2303_);
return v___x_2304_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg___boxed(lean_object* v_a_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v_res_2308_; 
v_res_2308_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2305_, v___y_2306_);
lean_dec(v___y_2306_);
lean_dec_ref(v_a_2305_);
return v_res_2308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(lean_object* v_a_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v___x_2315_; 
v___x_2315_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v_a_2309_, v___y_2313_);
return v___x_2315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___boxed(lean_object* v_a_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_){
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1(v_a_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_);
lean_dec(v___y_2320_);
lean_dec_ref(v___y_2319_);
lean_dec(v___y_2318_);
lean_dec_ref(v___y_2317_);
lean_dec_ref(v_a_2316_);
return v_res_2322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(lean_object* v_ctx_2323_, lean_object* v_id_2324_, uint8_t v_danglingDot_2325_, lean_object* v_declName_2326_, lean_object* v_decl_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v___x_2336_; 
lean_inc(v_declName_2326_);
v___x_2336_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_bestLabelForDecl_x3f(v_ctx_2323_, v_declName_2326_, v_id_2324_, v_danglingDot_2325_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2389_; 
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2389_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2389_ == 0)
{
v___x_2339_ = v___x_2336_;
v_isShared_2340_ = v_isSharedCheck_2389_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2336_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2389_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
if (lean_obj_tag(v_a_2337_) == 0)
{
lean_object* v_a_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2351_; 
lean_dec_ref(v_decl_2327_);
lean_dec(v_declName_2326_);
v_a_2341_ = lean_ctor_get(v_a_2337_, 0);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_a_2337_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2343_ = v_a_2337_;
v_isShared_2344_ = v_isSharedCheck_2351_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_a_2341_);
lean_dec(v_a_2337_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2351_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_a_2341_);
v___x_2346_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2348_; 
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v___x_2346_);
v___x_2348_ = v___x_2339_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
else
{
lean_object* v_a_2352_; 
v_a_2352_ = lean_ctor_get(v_a_2337_, 0);
lean_inc(v_a_2352_);
lean_dec_ref(v_a_2337_);
if (lean_obj_tag(v_a_2352_) == 1)
{
lean_object* v_val_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2384_; 
lean_del_object(v___x_2339_);
v_val_2353_ = lean_ctor_get(v_a_2352_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v_a_2352_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2355_ = v_a_2352_;
v_isShared_2356_ = v_isSharedCheck_2384_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_val_2353_);
lean_dec(v_a_2352_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2384_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v_kind_2357_; lean_object* v_tags_2358_; lean_object* v___x_2359_; 
v_kind_2357_ = lean_ctor_get(v_decl_2327_, 1);
lean_inc_ref(v_kind_2357_);
v_tags_2358_ = lean_ctor_get(v_decl_2327_, 2);
lean_inc_ref(v_tags_2358_);
lean_dec_ref(v_decl_2327_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v___y_2332_);
lean_inc_ref(v___y_2331_);
v___x_2359_ = lean_apply_5(v_kind_2357_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, lean_box(0));
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_a_2360_; lean_object* v___x_2361_; 
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_a_2360_);
lean_dec_ref(v___x_2359_);
lean_inc(v___y_2334_);
lean_inc_ref(v___y_2333_);
lean_inc(v___y_2332_);
lean_inc_ref(v___y_2331_);
v___x_2361_ = lean_apply_5(v_tags_2358_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_, lean_box(0));
if (lean_obj_tag(v___x_2361_) == 0)
{
lean_object* v_a_2362_; lean_object* v___x_2364_; 
v_a_2362_ = lean_ctor_get(v___x_2361_, 0);
lean_inc(v_a_2362_);
lean_dec_ref(v___x_2361_);
if (v_isShared_2356_ == 0)
{
lean_ctor_set_tag(v___x_2355_, 0);
lean_ctor_set(v___x_2355_, 0, v_declName_2326_);
v___x_2364_ = v___x_2355_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_declName_2326_);
v___x_2364_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
uint8_t v___x_2365_; lean_object* v___x_2366_; 
v___x_2365_ = lean_unbox(v_a_2360_);
lean_dec(v_a_2360_);
v___x_2366_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_2353_, v___x_2364_, v___x_2365_, v_a_2362_, v___y_2328_, v___y_2329_, v___y_2334_);
return v___x_2366_;
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2375_; 
lean_dec(v_a_2360_);
lean_del_object(v___x_2355_);
lean_dec(v_val_2353_);
lean_dec(v_declName_2326_);
v_a_2368_ = lean_ctor_get(v___x_2361_, 0);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2361_);
if (v_isSharedCheck_2375_ == 0)
{
v___x_2370_ = v___x_2361_;
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2361_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2375_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
}
else
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2383_; 
lean_dec_ref(v_tags_2358_);
lean_del_object(v___x_2355_);
lean_dec(v_val_2353_);
lean_dec(v_declName_2326_);
v_a_2376_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2378_ = v___x_2359_;
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2359_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2383_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2381_; 
if (v_isShared_2379_ == 0)
{
v___x_2381_ = v___x_2378_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_a_2376_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
}
else
{
lean_object* v___x_2385_; lean_object* v___x_2387_; 
lean_dec(v_a_2352_);
lean_dec_ref(v_decl_2327_);
lean_dec(v_declName_2326_);
v___x_2385_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v___x_2385_);
v___x_2387_ = v___x_2339_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v___x_2385_);
v___x_2387_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
return v___x_2387_;
}
}
}
}
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2397_; 
lean_dec_ref(v_decl_2327_);
lean_dec(v_declName_2326_);
v_a_2390_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2392_ = v___x_2336_;
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2336_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___x_2395_; 
if (v_isShared_2393_ == 0)
{
v___x_2395_ = v___x_2392_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2396_; 
v_reuseFailAlloc_2396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2396_, 0, v_a_2390_);
v___x_2395_ = v_reuseFailAlloc_2396_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
return v___x_2395_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed(lean_object* v_ctx_2398_, lean_object* v_id_2399_, lean_object* v_danglingDot_2400_, lean_object* v_declName_2401_, lean_object* v_decl_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_){
_start:
{
uint8_t v_danglingDot_boxed_2411_; lean_object* v_res_2412_; 
v_danglingDot_boxed_2411_ = lean_unbox(v_danglingDot_2400_);
v_res_2412_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0(v_ctx_2398_, v_id_2399_, v_danglingDot_boxed_2411_, v_declName_2401_, v_decl_2402_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec_ref(v___y_2405_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
return v_res_2412_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(lean_object* v_id_2413_, uint8_t v_danglingDot_2414_, lean_object* v_ns_2415_, lean_object* v_alias_2416_){
_start:
{
uint8_t v___x_2417_; 
v___x_2417_ = l_Lean_Name_isPrefixOf(v_ns_2415_, v_alias_2416_);
if (v___x_2417_ == 0)
{
lean_dec(v_alias_2416_);
return v___x_2417_;
}
else
{
lean_object* v___x_2418_; lean_object* v___x_2419_; uint8_t v___x_2420_; 
v___x_2418_ = lean_box(0);
v___x_2419_ = l_Lean_Name_replacePrefix(v_alias_2416_, v_ns_2415_, v___x_2418_);
v___x_2420_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2413_, v___x_2419_, v_danglingDot_2414_);
lean_dec(v___x_2419_);
return v___x_2420_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed(lean_object* v_id_2421_, lean_object* v_danglingDot_2422_, lean_object* v_ns_2423_, lean_object* v_alias_2424_){
_start:
{
uint8_t v_danglingDot_boxed_2425_; uint8_t v_res_2426_; lean_object* v_r_2427_; 
v_danglingDot_boxed_2425_ = lean_unbox(v_danglingDot_2422_);
v_res_2426_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1(v_id_2421_, v_danglingDot_boxed_2425_, v_ns_2423_, v_alias_2424_);
lean_dec(v_ns_2423_);
lean_dec(v_id_2421_);
v_r_2427_ = lean_box(v_res_2426_);
return v_r_2427_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(lean_object* v_a_2428_, lean_object* v___x_2429_, lean_object* v_alias_2430_, lean_object* v_as_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
if (lean_obj_tag(v_as_2431_) == 0)
{
lean_object* v___x_2439_; lean_object* v___x_2440_; 
lean_dec_ref(v___x_2429_);
v___x_2439_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_2440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2440_, 0, v___x_2439_);
return v___x_2440_;
}
else
{
lean_object* v_head_2441_; lean_object* v_tail_2442_; uint8_t v___x_2443_; 
v_head_2441_ = lean_ctor_get(v_as_2431_, 0);
lean_inc_n(v_head_2441_, 2);
v_tail_2442_ = lean_ctor_get(v_as_2431_, 1);
lean_inc(v_tail_2442_);
lean_dec_ref(v_as_2431_);
lean_inc_ref(v___x_2429_);
v___x_2443_ = l_Lean_Server_Completion_allowCompletion(v_a_2428_, v___x_2429_, v_head_2441_);
if (v___x_2443_ == 0)
{
lean_dec(v_head_2441_);
v_as_2431_ = v_tail_2442_;
goto _start;
}
else
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2445_ = l_Lean_Name_getString_x21(v_alias_2430_);
v___x_2446_ = lean_box(0);
v___x_2447_ = l_Lean_Name_str___override(v___x_2446_, v___x_2445_);
v___x_2448_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_2447_, v_head_2441_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_, v___y_2437_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_dec_ref(v___x_2448_);
v_as_2431_ = v_tail_2442_;
goto _start;
}
else
{
lean_dec(v_tail_2442_);
lean_dec_ref(v___x_2429_);
return v___x_2448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg___boxed(lean_object* v_a_2450_, lean_object* v___x_2451_, lean_object* v_alias_2452_, lean_object* v_as_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2450_, v___x_2451_, v_alias_2452_, v_as_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v_alias_2452_);
lean_dec_ref(v_a_2450_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(lean_object* v_a_2462_, lean_object* v_env_2463_, lean_object* v_alias_2464_, lean_object* v_declNames_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v___x_2474_; 
v___x_2474_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_2462_, v_env_2463_, v_alias_2464_, v_declNames_2465_, v___y_2466_, v___y_2467_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_);
return v___x_2474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed(lean_object* v_a_2475_, lean_object* v_env_2476_, lean_object* v_alias_2477_, lean_object* v_declNames_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2(v_a_2475_, v_env_2476_, v_alias_2477_, v_declNames_2478_, v___y_2479_, v___y_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec_ref(v___y_2481_);
lean_dec(v___y_2480_);
lean_dec_ref(v___y_2479_);
lean_dec(v_alias_2477_);
lean_dec_ref(v_a_2475_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(lean_object* v___f_2488_, lean_object* v___f_2489_, lean_object* v_currNamespace_2490_, lean_object* v_alias_2491_, lean_object* v_declNames_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
lean_object* v___x_2501_; 
v___x_2501_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_searchAlias(v___f_2488_, v___f_2489_, v_alias_2491_, v_declNames_2492_, v_currNamespace_2490_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_);
return v___x_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed(lean_object* v___f_2502_, lean_object* v___f_2503_, lean_object* v_currNamespace_2504_, lean_object* v_alias_2505_, lean_object* v_declNames_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3(v___f_2502_, v___f_2503_, v_currNamespace_2504_, v_alias_2505_, v_declNames_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
lean_dec(v___y_2513_);
lean_dec_ref(v___y_2512_);
lean_dec(v___y_2511_);
lean_dec_ref(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
return v_res_2515_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = lean_unsigned_to_nat(0u);
v___x_2517_ = lean_mk_empty_array_with_capacity(v___x_2516_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(lean_object* v_id_2518_, uint8_t v_danglingDot_2519_, lean_object* v_as_2520_, size_t v_sz_2521_, size_t v_i_2522_, lean_object* v_b_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_){
_start:
{
uint8_t v___x_2528_; 
v___x_2528_ = lean_usize_dec_lt(v_i_2522_, v_sz_2521_);
if (v___x_2528_ == 0)
{
lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2529_, 0, v_b_2523_);
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
return v___x_2530_;
}
else
{
lean_object* v_snd_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2584_; 
v_snd_2531_ = lean_ctor_get(v_b_2523_, 1);
v_isSharedCheck_2584_ = !lean_is_exclusive(v_b_2523_);
if (v_isSharedCheck_2584_ == 0)
{
lean_object* v_unused_2585_; 
v_unused_2585_ = lean_ctor_get(v_b_2523_, 0);
lean_dec(v_unused_2585_);
v___x_2533_ = v_b_2523_;
v_isShared_2534_ = v_isSharedCheck_2584_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_snd_2531_);
lean_dec(v_b_2523_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2584_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2535_; lean_object* v_a_2537_; lean_object* v_a_2544_; 
v___x_2535_ = lean_box(0);
v_a_2544_ = lean_array_uget(v_as_2520_, v_i_2522_);
if (lean_obj_tag(v_a_2544_) == 0)
{
v_a_2537_ = v_snd_2531_;
goto v___jp_2536_;
}
else
{
lean_object* v_val_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2583_; 
lean_dec(v_snd_2531_);
v_val_2545_ = lean_ctor_get(v_a_2544_, 0);
v_isSharedCheck_2583_ = !lean_is_exclusive(v_a_2544_);
if (v_isSharedCheck_2583_ == 0)
{
v___x_2547_ = v_a_2544_;
v_isShared_2548_ = v_isSharedCheck_2583_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_val_2545_);
lean_dec(v_a_2544_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2583_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2549_ = lean_box(0);
v___x_2550_ = l_Lean_LocalDecl_userName(v_val_2545_);
v___x_2551_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2518_, v___x_2550_, v_danglingDot_2519_);
if (v___x_2551_ == 0)
{
lean_dec(v___x_2550_);
lean_del_object(v___x_2547_);
lean_dec(v_val_2545_);
v_a_2537_ = v___x_2549_;
goto v___jp_2536_;
}
else
{
lean_object* v___x_2552_; lean_object* v___x_2554_; 
v___x_2552_ = l_Lean_LocalDecl_fvarId(v_val_2545_);
lean_dec(v_val_2545_);
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 0, v___x_2552_);
v___x_2554_ = v___x_2547_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2552_);
v___x_2554_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
uint8_t v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2555_ = 5;
v___x_2556_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0);
v___x_2557_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_2550_, v___x_2554_, v___x_2555_, v___x_2556_, v___y_2524_, v___y_2525_, v___y_2526_);
if (lean_obj_tag(v___x_2557_) == 0)
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2573_; 
v_a_2558_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2560_ = v___x_2557_;
v_isShared_2561_ = v_isSharedCheck_2573_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2557_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2573_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
if (lean_obj_tag(v_a_2558_) == 0)
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2572_; 
lean_del_object(v___x_2533_);
v_a_2562_ = lean_ctor_get(v_a_2558_, 0);
v_isSharedCheck_2572_ = !lean_is_exclusive(v_a_2558_);
if (v_isSharedCheck_2572_ == 0)
{
v___x_2564_ = v_a_2558_;
v_isShared_2565_ = v_isSharedCheck_2572_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v_a_2558_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2572_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2567_; 
if (v_isShared_2565_ == 0)
{
v___x_2567_ = v___x_2564_;
goto v_reusejp_2566_;
}
else
{
lean_object* v_reuseFailAlloc_2571_; 
v_reuseFailAlloc_2571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2571_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2571_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
lean_object* v___x_2569_; 
if (v_isShared_2561_ == 0)
{
lean_ctor_set(v___x_2560_, 0, v___x_2567_);
v___x_2569_ = v___x_2560_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v___x_2567_);
v___x_2569_ = v_reuseFailAlloc_2570_;
goto v_reusejp_2568_;
}
v_reusejp_2568_:
{
return v___x_2569_;
}
}
}
}
else
{
lean_dec_ref(v_a_2558_);
lean_del_object(v___x_2560_);
v_a_2537_ = v___x_2549_;
goto v___jp_2536_;
}
}
}
else
{
lean_object* v_a_2574_; lean_object* v___x_2576_; uint8_t v_isShared_2577_; uint8_t v_isSharedCheck_2581_; 
lean_del_object(v___x_2533_);
v_a_2574_ = lean_ctor_get(v___x_2557_, 0);
v_isSharedCheck_2581_ = !lean_is_exclusive(v___x_2557_);
if (v_isSharedCheck_2581_ == 0)
{
v___x_2576_ = v___x_2557_;
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
else
{
lean_inc(v_a_2574_);
lean_dec(v___x_2557_);
v___x_2576_ = lean_box(0);
v_isShared_2577_ = v_isSharedCheck_2581_;
goto v_resetjp_2575_;
}
v_resetjp_2575_:
{
lean_object* v___x_2579_; 
if (v_isShared_2577_ == 0)
{
v___x_2579_ = v___x_2576_;
goto v_reusejp_2578_;
}
else
{
lean_object* v_reuseFailAlloc_2580_; 
v_reuseFailAlloc_2580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2580_, 0, v_a_2574_);
v___x_2579_ = v_reuseFailAlloc_2580_;
goto v_reusejp_2578_;
}
v_reusejp_2578_:
{
return v___x_2579_;
}
}
}
}
}
}
}
v___jp_2536_:
{
lean_object* v___x_2539_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 1, v_a_2537_);
lean_ctor_set(v___x_2533_, 0, v___x_2535_);
v___x_2539_ = v___x_2533_;
goto v_reusejp_2538_;
}
else
{
lean_object* v_reuseFailAlloc_2543_; 
v_reuseFailAlloc_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2543_, 0, v___x_2535_);
lean_ctor_set(v_reuseFailAlloc_2543_, 1, v_a_2537_);
v___x_2539_ = v_reuseFailAlloc_2543_;
goto v_reusejp_2538_;
}
v_reusejp_2538_:
{
size_t v___x_2540_; size_t v___x_2541_; 
v___x_2540_ = ((size_t)1ULL);
v___x_2541_ = lean_usize_add(v_i_2522_, v___x_2540_);
v_i_2522_ = v___x_2541_;
v_b_2523_ = v___x_2539_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___boxed(lean_object* v_id_2586_, lean_object* v_danglingDot_2587_, lean_object* v_as_2588_, lean_object* v_sz_2589_, lean_object* v_i_2590_, lean_object* v_b_2591_, lean_object* v___y_2592_, lean_object* v___y_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_){
_start:
{
uint8_t v_danglingDot_boxed_2596_; size_t v_sz_boxed_2597_; size_t v_i_boxed_2598_; lean_object* v_res_2599_; 
v_danglingDot_boxed_2596_ = lean_unbox(v_danglingDot_2587_);
v_sz_boxed_2597_ = lean_unbox_usize(v_sz_2589_);
lean_dec(v_sz_2589_);
v_i_boxed_2598_ = lean_unbox_usize(v_i_2590_);
lean_dec(v_i_2590_);
v_res_2599_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_2586_, v_danglingDot_boxed_2596_, v_as_2588_, v_sz_boxed_2597_, v_i_boxed_2598_, v_b_2591_, v___y_2592_, v___y_2593_, v___y_2594_);
lean_dec(v___y_2594_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec_ref(v_as_2588_);
lean_dec(v_id_2586_);
return v_res_2599_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(lean_object* v_id_2600_, uint8_t v_danglingDot_2601_, lean_object* v_as_2602_, size_t v_sz_2603_, size_t v_i_2604_, lean_object* v_b_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_){
_start:
{
uint8_t v___x_2614_; 
v___x_2614_ = lean_usize_dec_lt(v_i_2604_, v_sz_2603_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; lean_object* v___x_2616_; 
v___x_2615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2615_, 0, v_b_2605_);
v___x_2616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2615_);
return v___x_2616_;
}
else
{
lean_object* v_snd_2617_; lean_object* v___x_2619_; uint8_t v_isShared_2620_; uint8_t v_isSharedCheck_2670_; 
v_snd_2617_ = lean_ctor_get(v_b_2605_, 1);
v_isSharedCheck_2670_ = !lean_is_exclusive(v_b_2605_);
if (v_isSharedCheck_2670_ == 0)
{
lean_object* v_unused_2671_; 
v_unused_2671_ = lean_ctor_get(v_b_2605_, 0);
lean_dec(v_unused_2671_);
v___x_2619_ = v_b_2605_;
v_isShared_2620_ = v_isSharedCheck_2670_;
goto v_resetjp_2618_;
}
else
{
lean_inc(v_snd_2617_);
lean_dec(v_b_2605_);
v___x_2619_ = lean_box(0);
v_isShared_2620_ = v_isSharedCheck_2670_;
goto v_resetjp_2618_;
}
v_resetjp_2618_:
{
lean_object* v___x_2621_; lean_object* v_a_2623_; lean_object* v_a_2630_; 
v___x_2621_ = lean_box(0);
v_a_2630_ = lean_array_uget(v_as_2602_, v_i_2604_);
if (lean_obj_tag(v_a_2630_) == 0)
{
v_a_2623_ = v_snd_2617_;
goto v___jp_2622_;
}
else
{
lean_object* v_val_2631_; lean_object* v___x_2633_; uint8_t v_isShared_2634_; uint8_t v_isSharedCheck_2669_; 
lean_dec(v_snd_2617_);
v_val_2631_ = lean_ctor_get(v_a_2630_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_a_2630_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2633_ = v_a_2630_;
v_isShared_2634_ = v_isSharedCheck_2669_;
goto v_resetjp_2632_;
}
else
{
lean_inc(v_val_2631_);
lean_dec(v_a_2630_);
v___x_2633_ = lean_box(0);
v_isShared_2634_ = v_isSharedCheck_2669_;
goto v_resetjp_2632_;
}
v_resetjp_2632_:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; uint8_t v___x_2637_; 
v___x_2635_ = lean_box(0);
v___x_2636_ = l_Lean_LocalDecl_userName(v_val_2631_);
v___x_2637_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2600_, v___x_2636_, v_danglingDot_2601_);
if (v___x_2637_ == 0)
{
lean_dec(v___x_2636_);
lean_del_object(v___x_2633_);
lean_dec(v_val_2631_);
v_a_2623_ = v___x_2635_;
goto v___jp_2622_;
}
else
{
lean_object* v___x_2638_; lean_object* v___x_2640_; 
v___x_2638_ = l_Lean_LocalDecl_fvarId(v_val_2631_);
lean_dec(v_val_2631_);
if (v_isShared_2634_ == 0)
{
lean_ctor_set(v___x_2633_, 0, v___x_2638_);
v___x_2640_ = v___x_2633_;
goto v_reusejp_2639_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v___x_2638_);
v___x_2640_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2639_;
}
v_reusejp_2639_:
{
uint8_t v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2641_ = 5;
v___x_2642_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0);
v___x_2643_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_2636_, v___x_2640_, v___x_2641_, v___x_2642_, v___y_2606_, v___y_2607_, v___y_2612_);
if (lean_obj_tag(v___x_2643_) == 0)
{
lean_object* v_a_2644_; lean_object* v___x_2646_; uint8_t v_isShared_2647_; uint8_t v_isSharedCheck_2659_; 
v_a_2644_ = lean_ctor_get(v___x_2643_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2643_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2646_ = v___x_2643_;
v_isShared_2647_ = v_isSharedCheck_2659_;
goto v_resetjp_2645_;
}
else
{
lean_inc(v_a_2644_);
lean_dec(v___x_2643_);
v___x_2646_ = lean_box(0);
v_isShared_2647_ = v_isSharedCheck_2659_;
goto v_resetjp_2645_;
}
v_resetjp_2645_:
{
if (lean_obj_tag(v_a_2644_) == 0)
{
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2658_; 
lean_del_object(v___x_2619_);
v_a_2648_ = lean_ctor_get(v_a_2644_, 0);
v_isSharedCheck_2658_ = !lean_is_exclusive(v_a_2644_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2650_ = v_a_2644_;
v_isShared_2651_ = v_isSharedCheck_2658_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v_a_2644_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2658_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2653_; 
if (v_isShared_2651_ == 0)
{
v___x_2653_ = v___x_2650_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v_a_2648_);
v___x_2653_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
lean_object* v___x_2655_; 
if (v_isShared_2647_ == 0)
{
lean_ctor_set(v___x_2646_, 0, v___x_2653_);
v___x_2655_ = v___x_2646_;
goto v_reusejp_2654_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v___x_2653_);
v___x_2655_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2654_;
}
v_reusejp_2654_:
{
return v___x_2655_;
}
}
}
}
else
{
lean_dec_ref(v_a_2644_);
lean_del_object(v___x_2646_);
v_a_2623_ = v___x_2635_;
goto v___jp_2622_;
}
}
}
else
{
lean_object* v_a_2660_; lean_object* v___x_2662_; uint8_t v_isShared_2663_; uint8_t v_isSharedCheck_2667_; 
lean_del_object(v___x_2619_);
v_a_2660_ = lean_ctor_get(v___x_2643_, 0);
v_isSharedCheck_2667_ = !lean_is_exclusive(v___x_2643_);
if (v_isSharedCheck_2667_ == 0)
{
v___x_2662_ = v___x_2643_;
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
else
{
lean_inc(v_a_2660_);
lean_dec(v___x_2643_);
v___x_2662_ = lean_box(0);
v_isShared_2663_ = v_isSharedCheck_2667_;
goto v_resetjp_2661_;
}
v_resetjp_2661_:
{
lean_object* v___x_2665_; 
if (v_isShared_2663_ == 0)
{
v___x_2665_ = v___x_2662_;
goto v_reusejp_2664_;
}
else
{
lean_object* v_reuseFailAlloc_2666_; 
v_reuseFailAlloc_2666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2666_, 0, v_a_2660_);
v___x_2665_ = v_reuseFailAlloc_2666_;
goto v_reusejp_2664_;
}
v_reusejp_2664_:
{
return v___x_2665_;
}
}
}
}
}
}
}
v___jp_2622_:
{
lean_object* v___x_2625_; 
if (v_isShared_2620_ == 0)
{
lean_ctor_set(v___x_2619_, 1, v_a_2623_);
lean_ctor_set(v___x_2619_, 0, v___x_2621_);
v___x_2625_ = v___x_2619_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2629_; 
v_reuseFailAlloc_2629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2629_, 0, v___x_2621_);
lean_ctor_set(v_reuseFailAlloc_2629_, 1, v_a_2623_);
v___x_2625_ = v_reuseFailAlloc_2629_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
size_t v___x_2626_; size_t v___x_2627_; lean_object* v___x_2628_; 
v___x_2626_ = ((size_t)1ULL);
v___x_2627_ = lean_usize_add(v_i_2604_, v___x_2626_);
v___x_2628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_2600_, v_danglingDot_2601_, v_as_2602_, v_sz_2603_, v___x_2627_, v___x_2625_, v___y_2606_, v___y_2607_, v___y_2612_);
return v___x_2628_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12___boxed(lean_object* v_id_2672_, lean_object* v_danglingDot_2673_, lean_object* v_as_2674_, lean_object* v_sz_2675_, lean_object* v_i_2676_, lean_object* v_b_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
uint8_t v_danglingDot_boxed_2686_; size_t v_sz_boxed_2687_; size_t v_i_boxed_2688_; lean_object* v_res_2689_; 
v_danglingDot_boxed_2686_ = lean_unbox(v_danglingDot_2673_);
v_sz_boxed_2687_ = lean_unbox_usize(v_sz_2675_);
lean_dec(v_sz_2675_);
v_i_boxed_2688_ = lean_unbox_usize(v_i_2676_);
lean_dec(v_i_2676_);
v_res_2689_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_2672_, v_danglingDot_boxed_2686_, v_as_2674_, v_sz_boxed_2687_, v_i_boxed_2688_, v_b_2677_, v___y_2678_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
lean_dec_ref(v___y_2680_);
lean_dec(v___y_2679_);
lean_dec_ref(v___y_2678_);
lean_dec_ref(v_as_2674_);
lean_dec(v_id_2672_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(lean_object* v_id_2690_, uint8_t v_danglingDot_2691_, lean_object* v_as_2692_, size_t v_sz_2693_, size_t v_i_2694_, lean_object* v_b_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_){
_start:
{
uint8_t v___x_2700_; 
v___x_2700_ = lean_usize_dec_lt(v_i_2694_, v_sz_2693_);
if (v___x_2700_ == 0)
{
lean_object* v___x_2701_; lean_object* v___x_2702_; 
v___x_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2701_, 0, v_b_2695_);
v___x_2702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2702_, 0, v___x_2701_);
return v___x_2702_;
}
else
{
lean_object* v_snd_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2756_; 
v_snd_2703_ = lean_ctor_get(v_b_2695_, 1);
v_isSharedCheck_2756_ = !lean_is_exclusive(v_b_2695_);
if (v_isSharedCheck_2756_ == 0)
{
lean_object* v_unused_2757_; 
v_unused_2757_ = lean_ctor_get(v_b_2695_, 0);
lean_dec(v_unused_2757_);
v___x_2705_ = v_b_2695_;
v_isShared_2706_ = v_isSharedCheck_2756_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_snd_2703_);
lean_dec(v_b_2695_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2756_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2707_; lean_object* v_a_2709_; lean_object* v_a_2716_; 
v___x_2707_ = lean_box(0);
v_a_2716_ = lean_array_uget(v_as_2692_, v_i_2694_);
if (lean_obj_tag(v_a_2716_) == 0)
{
v_a_2709_ = v_snd_2703_;
goto v___jp_2708_;
}
else
{
lean_object* v_val_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2755_; 
lean_dec(v_snd_2703_);
v_val_2717_ = lean_ctor_get(v_a_2716_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_a_2716_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2719_ = v_a_2716_;
v_isShared_2720_ = v_isSharedCheck_2755_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_val_2717_);
lean_dec(v_a_2716_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2755_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2721_ = lean_box(0);
v___x_2722_ = l_Lean_LocalDecl_userName(v_val_2717_);
v___x_2723_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2690_, v___x_2722_, v_danglingDot_2691_);
if (v___x_2723_ == 0)
{
lean_dec(v___x_2722_);
lean_del_object(v___x_2719_);
lean_dec(v_val_2717_);
v_a_2709_ = v___x_2721_;
goto v___jp_2708_;
}
else
{
lean_object* v___x_2724_; lean_object* v___x_2726_; 
v___x_2724_ = l_Lean_LocalDecl_fvarId(v_val_2717_);
lean_dec(v_val_2717_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 0, v___x_2724_);
v___x_2726_ = v___x_2719_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v___x_2724_);
v___x_2726_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
uint8_t v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2727_ = 5;
v___x_2728_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0);
v___x_2729_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_2722_, v___x_2726_, v___x_2727_, v___x_2728_, v___y_2696_, v___y_2697_, v___y_2698_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; lean_object* v___x_2732_; uint8_t v_isShared_2733_; uint8_t v_isSharedCheck_2745_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2732_ = v___x_2729_;
v_isShared_2733_ = v_isSharedCheck_2745_;
goto v_resetjp_2731_;
}
else
{
lean_inc(v_a_2730_);
lean_dec(v___x_2729_);
v___x_2732_ = lean_box(0);
v_isShared_2733_ = v_isSharedCheck_2745_;
goto v_resetjp_2731_;
}
v_resetjp_2731_:
{
if (lean_obj_tag(v_a_2730_) == 0)
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2744_; 
lean_del_object(v___x_2705_);
v_a_2734_ = lean_ctor_get(v_a_2730_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_a_2730_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2736_ = v_a_2730_;
v_isShared_2737_ = v_isSharedCheck_2744_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v_a_2730_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2744_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
lean_object* v___x_2741_; 
if (v_isShared_2733_ == 0)
{
lean_ctor_set(v___x_2732_, 0, v___x_2739_);
v___x_2741_ = v___x_2732_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v___x_2739_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
lean_dec_ref(v_a_2730_);
lean_del_object(v___x_2732_);
v_a_2709_ = v___x_2721_;
goto v___jp_2708_;
}
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_del_object(v___x_2705_);
v_a_2746_ = lean_ctor_get(v___x_2729_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2729_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2729_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2729_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
}
}
}
}
v___jp_2708_:
{
lean_object* v___x_2711_; 
if (v_isShared_2706_ == 0)
{
lean_ctor_set(v___x_2705_, 1, v_a_2709_);
lean_ctor_set(v___x_2705_, 0, v___x_2707_);
v___x_2711_ = v___x_2705_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2707_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v_a_2709_);
v___x_2711_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
size_t v___x_2712_; size_t v___x_2713_; 
v___x_2712_ = ((size_t)1ULL);
v___x_2713_ = lean_usize_add(v_i_2694_, v___x_2712_);
v_i_2694_ = v___x_2713_;
v_b_2695_ = v___x_2711_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg___boxed(lean_object* v_id_2758_, lean_object* v_danglingDot_2759_, lean_object* v_as_2760_, lean_object* v_sz_2761_, lean_object* v_i_2762_, lean_object* v_b_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
uint8_t v_danglingDot_boxed_2768_; size_t v_sz_boxed_2769_; size_t v_i_boxed_2770_; lean_object* v_res_2771_; 
v_danglingDot_boxed_2768_ = lean_unbox(v_danglingDot_2759_);
v_sz_boxed_2769_ = lean_unbox_usize(v_sz_2761_);
lean_dec(v_sz_2761_);
v_i_boxed_2770_ = lean_unbox_usize(v_i_2762_);
lean_dec(v_i_2762_);
v_res_2771_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_2758_, v_danglingDot_boxed_2768_, v_as_2760_, v_sz_boxed_2769_, v_i_boxed_2770_, v_b_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec_ref(v_as_2760_);
lean_dec(v_id_2758_);
return v_res_2771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(lean_object* v_id_2772_, uint8_t v_danglingDot_2773_, lean_object* v_as_2774_, size_t v_sz_2775_, size_t v_i_2776_, lean_object* v_b_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
uint8_t v___x_2786_; 
v___x_2786_ = lean_usize_dec_lt(v_i_2776_, v_sz_2775_);
if (v___x_2786_ == 0)
{
lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2787_, 0, v_b_2777_);
v___x_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2788_, 0, v___x_2787_);
return v___x_2788_;
}
else
{
lean_object* v_snd_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2842_; 
v_snd_2789_ = lean_ctor_get(v_b_2777_, 1);
v_isSharedCheck_2842_ = !lean_is_exclusive(v_b_2777_);
if (v_isSharedCheck_2842_ == 0)
{
lean_object* v_unused_2843_; 
v_unused_2843_ = lean_ctor_get(v_b_2777_, 0);
lean_dec(v_unused_2843_);
v___x_2791_ = v_b_2777_;
v_isShared_2792_ = v_isSharedCheck_2842_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_snd_2789_);
lean_dec(v_b_2777_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2842_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2793_; lean_object* v_a_2795_; lean_object* v_a_2802_; 
v___x_2793_ = lean_box(0);
v_a_2802_ = lean_array_uget(v_as_2774_, v_i_2776_);
if (lean_obj_tag(v_a_2802_) == 0)
{
v_a_2795_ = v_snd_2789_;
goto v___jp_2794_;
}
else
{
lean_object* v_val_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2841_; 
lean_dec(v_snd_2789_);
v_val_2803_ = lean_ctor_get(v_a_2802_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_a_2802_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2805_ = v_a_2802_;
v_isShared_2806_ = v_isSharedCheck_2841_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_val_2803_);
lean_dec(v_a_2802_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2841_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; uint8_t v___x_2809_; 
v___x_2807_ = lean_box(0);
v___x_2808_ = l_Lean_LocalDecl_userName(v_val_2803_);
v___x_2809_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_2772_, v___x_2808_, v_danglingDot_2773_);
if (v___x_2809_ == 0)
{
lean_dec(v___x_2808_);
lean_del_object(v___x_2805_);
lean_dec(v_val_2803_);
v_a_2795_ = v___x_2807_;
goto v___jp_2794_;
}
else
{
lean_object* v___x_2810_; lean_object* v___x_2812_; 
v___x_2810_ = l_Lean_LocalDecl_fvarId(v_val_2803_);
lean_dec(v_val_2803_);
if (v_isShared_2806_ == 0)
{
lean_ctor_set(v___x_2805_, 0, v___x_2810_);
v___x_2812_ = v___x_2805_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v___x_2810_);
v___x_2812_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
uint8_t v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2813_ = 5;
v___x_2814_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg___closed__0);
v___x_2815_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_2808_, v___x_2812_, v___x_2813_, v___x_2814_, v___y_2778_, v___y_2779_, v___y_2784_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2831_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2818_ = v___x_2815_;
v_isShared_2819_ = v_isSharedCheck_2831_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2815_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2831_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
if (lean_obj_tag(v_a_2816_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2822_; uint8_t v_isShared_2823_; uint8_t v_isSharedCheck_2830_; 
lean_del_object(v___x_2791_);
v_a_2820_ = lean_ctor_get(v_a_2816_, 0);
v_isSharedCheck_2830_ = !lean_is_exclusive(v_a_2816_);
if (v_isSharedCheck_2830_ == 0)
{
v___x_2822_ = v_a_2816_;
v_isShared_2823_ = v_isSharedCheck_2830_;
goto v_resetjp_2821_;
}
else
{
lean_inc(v_a_2820_);
lean_dec(v_a_2816_);
v___x_2822_ = lean_box(0);
v_isShared_2823_ = v_isSharedCheck_2830_;
goto v_resetjp_2821_;
}
v_resetjp_2821_:
{
lean_object* v___x_2825_; 
if (v_isShared_2823_ == 0)
{
v___x_2825_ = v___x_2822_;
goto v_reusejp_2824_;
}
else
{
lean_object* v_reuseFailAlloc_2829_; 
v_reuseFailAlloc_2829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2829_, 0, v_a_2820_);
v___x_2825_ = v_reuseFailAlloc_2829_;
goto v_reusejp_2824_;
}
v_reusejp_2824_:
{
lean_object* v___x_2827_; 
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 0, v___x_2825_);
v___x_2827_ = v___x_2818_;
goto v_reusejp_2826_;
}
else
{
lean_object* v_reuseFailAlloc_2828_; 
v_reuseFailAlloc_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2828_, 0, v___x_2825_);
v___x_2827_ = v_reuseFailAlloc_2828_;
goto v_reusejp_2826_;
}
v_reusejp_2826_:
{
return v___x_2827_;
}
}
}
}
else
{
lean_dec_ref(v_a_2816_);
lean_del_object(v___x_2818_);
v_a_2795_ = v___x_2807_;
goto v___jp_2794_;
}
}
}
else
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
lean_del_object(v___x_2791_);
v_a_2832_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2815_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2815_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
}
}
}
}
v___jp_2794_:
{
lean_object* v___x_2797_; 
if (v_isShared_2792_ == 0)
{
lean_ctor_set(v___x_2791_, 1, v_a_2795_);
lean_ctor_set(v___x_2791_, 0, v___x_2793_);
v___x_2797_ = v___x_2791_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v___x_2793_);
lean_ctor_set(v_reuseFailAlloc_2801_, 1, v_a_2795_);
v___x_2797_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
size_t v___x_2798_; size_t v___x_2799_; lean_object* v___x_2800_; 
v___x_2798_ = ((size_t)1ULL);
v___x_2799_ = lean_usize_add(v_i_2776_, v___x_2798_);
v___x_2800_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_2772_, v_danglingDot_2773_, v_as_2774_, v_sz_2775_, v___x_2799_, v___x_2797_, v___y_2778_, v___y_2779_, v___y_2784_);
return v___x_2800_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17___boxed(lean_object* v_id_2844_, lean_object* v_danglingDot_2845_, lean_object* v_as_2846_, lean_object* v_sz_2847_, lean_object* v_i_2848_, lean_object* v_b_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_){
_start:
{
uint8_t v_danglingDot_boxed_2858_; size_t v_sz_boxed_2859_; size_t v_i_boxed_2860_; lean_object* v_res_2861_; 
v_danglingDot_boxed_2858_ = lean_unbox(v_danglingDot_2845_);
v_sz_boxed_2859_ = lean_unbox_usize(v_sz_2847_);
lean_dec(v_sz_2847_);
v_i_boxed_2860_ = lean_unbox_usize(v_i_2848_);
lean_dec(v_i_2848_);
v_res_2861_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_2844_, v_danglingDot_boxed_2858_, v_as_2846_, v_sz_boxed_2859_, v_i_boxed_2860_, v_b_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
lean_dec(v___y_2856_);
lean_dec_ref(v___y_2855_);
lean_dec(v___y_2854_);
lean_dec_ref(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec_ref(v_as_2846_);
lean_dec(v_id_2844_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(lean_object* v_init_2862_, lean_object* v_id_2863_, uint8_t v_danglingDot_2864_, lean_object* v_n_2865_, lean_object* v_b_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
if (lean_obj_tag(v_n_2865_) == 0)
{
lean_object* v_cs_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; size_t v_sz_2878_; size_t v___x_2879_; lean_object* v___x_2880_; 
v_cs_2875_ = lean_ctor_get(v_n_2865_, 0);
v___x_2876_ = lean_box(0);
v___x_2877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2877_, 0, v___x_2876_);
lean_ctor_set(v___x_2877_, 1, v_b_2866_);
v_sz_2878_ = lean_array_size(v_cs_2875_);
v___x_2879_ = ((size_t)0ULL);
v___x_2880_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_2862_, v_id_2863_, v_danglingDot_2864_, v_cs_2875_, v_sz_2878_, v___x_2879_, v___x_2877_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
if (lean_obj_tag(v___x_2880_) == 0)
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2917_; 
v_a_2881_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2917_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2883_ = v___x_2880_;
v_isShared_2884_ = v_isSharedCheck_2917_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2880_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2917_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
if (lean_obj_tag(v_a_2881_) == 0)
{
lean_object* v_a_2885_; lean_object* v___x_2887_; uint8_t v_isShared_2888_; uint8_t v_isSharedCheck_2895_; 
v_a_2885_ = lean_ctor_get(v_a_2881_, 0);
v_isSharedCheck_2895_ = !lean_is_exclusive(v_a_2881_);
if (v_isSharedCheck_2895_ == 0)
{
v___x_2887_ = v_a_2881_;
v_isShared_2888_ = v_isSharedCheck_2895_;
goto v_resetjp_2886_;
}
else
{
lean_inc(v_a_2885_);
lean_dec(v_a_2881_);
v___x_2887_ = lean_box(0);
v_isShared_2888_ = v_isSharedCheck_2895_;
goto v_resetjp_2886_;
}
v_resetjp_2886_:
{
lean_object* v___x_2890_; 
if (v_isShared_2888_ == 0)
{
v___x_2890_ = v___x_2887_;
goto v_reusejp_2889_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_a_2885_);
v___x_2890_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2889_;
}
v_reusejp_2889_:
{
lean_object* v___x_2892_; 
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 0, v___x_2890_);
v___x_2892_ = v___x_2883_;
goto v_reusejp_2891_;
}
else
{
lean_object* v_reuseFailAlloc_2893_; 
v_reuseFailAlloc_2893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2893_, 0, v___x_2890_);
v___x_2892_ = v_reuseFailAlloc_2893_;
goto v_reusejp_2891_;
}
v_reusejp_2891_:
{
return v___x_2892_;
}
}
}
}
else
{
lean_object* v_a_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2916_; 
v_a_2896_ = lean_ctor_get(v_a_2881_, 0);
v_isSharedCheck_2916_ = !lean_is_exclusive(v_a_2881_);
if (v_isSharedCheck_2916_ == 0)
{
v___x_2898_ = v_a_2881_;
v_isShared_2899_ = v_isSharedCheck_2916_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_a_2896_);
lean_dec(v_a_2881_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2916_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v_fst_2900_; 
v_fst_2900_ = lean_ctor_get(v_a_2896_, 0);
if (lean_obj_tag(v_fst_2900_) == 0)
{
lean_object* v_snd_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
v_snd_2901_ = lean_ctor_get(v_a_2896_, 1);
lean_inc(v_snd_2901_);
lean_dec(v_a_2896_);
v___x_2902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2902_, 0, v_snd_2901_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 0, v___x_2902_);
v___x_2904_ = v___x_2898_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v___x_2902_);
v___x_2904_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2906_; 
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 0, v___x_2904_);
v___x_2906_ = v___x_2883_;
goto v_reusejp_2905_;
}
else
{
lean_object* v_reuseFailAlloc_2907_; 
v_reuseFailAlloc_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2907_, 0, v___x_2904_);
v___x_2906_ = v_reuseFailAlloc_2907_;
goto v_reusejp_2905_;
}
v_reusejp_2905_:
{
return v___x_2906_;
}
}
}
else
{
lean_object* v_val_2909_; lean_object* v___x_2911_; 
lean_inc_ref(v_fst_2900_);
lean_dec(v_a_2896_);
v_val_2909_ = lean_ctor_get(v_fst_2900_, 0);
lean_inc(v_val_2909_);
lean_dec_ref(v_fst_2900_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 0, v_val_2909_);
v___x_2911_ = v___x_2898_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v_val_2909_);
v___x_2911_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
lean_object* v___x_2913_; 
if (v_isShared_2884_ == 0)
{
lean_ctor_set(v___x_2883_, 0, v___x_2911_);
v___x_2913_ = v___x_2883_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v___x_2911_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
v_a_2918_ = lean_ctor_get(v___x_2880_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2880_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2880_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_a_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
else
{
lean_object* v_vs_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; size_t v_sz_2929_; size_t v___x_2930_; lean_object* v___x_2931_; 
v_vs_2926_ = lean_ctor_get(v_n_2865_, 0);
v___x_2927_ = lean_box(0);
v___x_2928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2928_, 0, v___x_2927_);
lean_ctor_set(v___x_2928_, 1, v_b_2866_);
v_sz_2929_ = lean_array_size(v_vs_2926_);
v___x_2930_ = ((size_t)0ULL);
v___x_2931_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17(v_id_2863_, v_danglingDot_2864_, v_vs_2926_, v_sz_2929_, v___x_2930_, v___x_2928_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_);
if (lean_obj_tag(v___x_2931_) == 0)
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2968_; 
v_a_2932_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2968_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2968_ == 0)
{
v___x_2934_ = v___x_2931_;
v_isShared_2935_ = v_isSharedCheck_2968_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2931_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2968_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
if (lean_obj_tag(v_a_2932_) == 0)
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2946_; 
v_a_2936_ = lean_ctor_get(v_a_2932_, 0);
v_isSharedCheck_2946_ = !lean_is_exclusive(v_a_2932_);
if (v_isSharedCheck_2946_ == 0)
{
v___x_2938_ = v_a_2932_;
v_isShared_2939_ = v_isSharedCheck_2946_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v_a_2932_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2946_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2945_; 
v_reuseFailAlloc_2945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2945_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2945_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2943_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_2941_);
v___x_2943_ = v___x_2934_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v___x_2941_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
}
}
else
{
lean_object* v_a_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2967_; 
v_a_2947_ = lean_ctor_get(v_a_2932_, 0);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_a_2932_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2949_ = v_a_2932_;
v_isShared_2950_ = v_isSharedCheck_2967_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_a_2947_);
lean_dec(v_a_2932_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2967_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v_fst_2951_; 
v_fst_2951_ = lean_ctor_get(v_a_2947_, 0);
if (lean_obj_tag(v_fst_2951_) == 0)
{
lean_object* v_snd_2952_; lean_object* v___x_2953_; lean_object* v___x_2955_; 
v_snd_2952_ = lean_ctor_get(v_a_2947_, 1);
lean_inc(v_snd_2952_);
lean_dec(v_a_2947_);
v___x_2953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2953_, 0, v_snd_2952_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 0, v___x_2953_);
v___x_2955_ = v___x_2949_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2953_);
v___x_2955_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
lean_object* v___x_2957_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_2955_);
v___x_2957_ = v___x_2934_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v___x_2955_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
else
{
lean_object* v_val_2960_; lean_object* v___x_2962_; 
lean_inc_ref(v_fst_2951_);
lean_dec(v_a_2947_);
v_val_2960_ = lean_ctor_get(v_fst_2951_, 0);
lean_inc(v_val_2960_);
lean_dec_ref(v_fst_2951_);
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 0, v_val_2960_);
v___x_2962_ = v___x_2949_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v_val_2960_);
v___x_2962_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
lean_object* v___x_2964_; 
if (v_isShared_2935_ == 0)
{
lean_ctor_set(v___x_2934_, 0, v___x_2962_);
v___x_2964_ = v___x_2934_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v___x_2962_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2976_; 
v_a_2969_ = lean_ctor_get(v___x_2931_, 0);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2931_);
if (v_isSharedCheck_2976_ == 0)
{
v___x_2971_ = v___x_2931_;
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2931_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2976_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v___x_2974_; 
if (v_isShared_2972_ == 0)
{
v___x_2974_ = v___x_2971_;
goto v_reusejp_2973_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v_a_2969_);
v___x_2974_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2973_;
}
v_reusejp_2973_:
{
return v___x_2974_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(lean_object* v_init_2977_, lean_object* v_id_2978_, uint8_t v_danglingDot_2979_, lean_object* v_as_2980_, size_t v_sz_2981_, size_t v_i_2982_, lean_object* v_b_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_){
_start:
{
uint8_t v___x_2992_; 
v___x_2992_ = lean_usize_dec_lt(v_i_2982_, v_sz_2981_);
if (v___x_2992_ == 0)
{
lean_object* v___x_2993_; lean_object* v___x_2994_; 
v___x_2993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2993_, 0, v_b_2983_);
v___x_2994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2993_);
return v___x_2994_;
}
else
{
lean_object* v_snd_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3048_; 
v_snd_2995_ = lean_ctor_get(v_b_2983_, 1);
v_isSharedCheck_3048_ = !lean_is_exclusive(v_b_2983_);
if (v_isSharedCheck_3048_ == 0)
{
lean_object* v_unused_3049_; 
v_unused_3049_ = lean_ctor_get(v_b_2983_, 0);
lean_dec(v_unused_3049_);
v___x_2997_ = v_b_2983_;
v_isShared_2998_ = v_isSharedCheck_3048_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_snd_2995_);
lean_dec(v_b_2983_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3048_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v_a_2999_; lean_object* v___x_3000_; 
v_a_2999_ = lean_array_uget_borrowed(v_as_2980_, v_i_2982_);
lean_inc(v_snd_2995_);
v___x_3000_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_2977_, v_id_2978_, v_danglingDot_2979_, v_a_2999_, v_snd_2995_, v___y_2984_, v___y_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_);
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; lean_object* v___x_3003_; uint8_t v_isShared_3004_; uint8_t v_isSharedCheck_3039_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3039_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3039_ == 0)
{
v___x_3003_ = v___x_3000_;
v_isShared_3004_ = v_isSharedCheck_3039_;
goto v_resetjp_3002_;
}
else
{
lean_inc(v_a_3001_);
lean_dec(v___x_3000_);
v___x_3003_ = lean_box(0);
v_isShared_3004_ = v_isSharedCheck_3039_;
goto v_resetjp_3002_;
}
v_resetjp_3002_:
{
if (lean_obj_tag(v_a_3001_) == 0)
{
lean_object* v_a_3005_; lean_object* v___x_3007_; uint8_t v_isShared_3008_; uint8_t v_isSharedCheck_3015_; 
lean_del_object(v___x_2997_);
lean_dec(v_snd_2995_);
v_a_3005_ = lean_ctor_get(v_a_3001_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v_a_3001_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3007_ = v_a_3001_;
v_isShared_3008_ = v_isSharedCheck_3015_;
goto v_resetjp_3006_;
}
else
{
lean_inc(v_a_3005_);
lean_dec(v_a_3001_);
v___x_3007_ = lean_box(0);
v_isShared_3008_ = v_isSharedCheck_3015_;
goto v_resetjp_3006_;
}
v_resetjp_3006_:
{
lean_object* v___x_3010_; 
if (v_isShared_3008_ == 0)
{
v___x_3010_ = v___x_3007_;
goto v_reusejp_3009_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3005_);
v___x_3010_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3009_;
}
v_reusejp_3009_:
{
lean_object* v___x_3012_; 
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 0, v___x_3010_);
v___x_3012_ = v___x_3003_;
goto v_reusejp_3011_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v___x_3010_);
v___x_3012_ = v_reuseFailAlloc_3013_;
goto v_reusejp_3011_;
}
v_reusejp_3011_:
{
return v___x_3012_;
}
}
}
}
else
{
lean_object* v_a_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3038_; 
v_a_3016_ = lean_ctor_get(v_a_3001_, 0);
v_isSharedCheck_3038_ = !lean_is_exclusive(v_a_3001_);
if (v_isSharedCheck_3038_ == 0)
{
v___x_3018_ = v_a_3001_;
v_isShared_3019_ = v_isSharedCheck_3038_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_a_3016_);
lean_dec(v_a_3001_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3038_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
if (lean_obj_tag(v_a_3016_) == 0)
{
lean_object* v___x_3020_; lean_object* v___x_3022_; 
v___x_3020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3020_, 0, v_a_3016_);
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 0, v___x_3020_);
v___x_3022_ = v___x_2997_;
goto v_reusejp_3021_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3020_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v_snd_2995_);
v___x_3022_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3021_;
}
v_reusejp_3021_:
{
lean_object* v___x_3024_; 
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 0, v___x_3022_);
v___x_3024_ = v___x_3018_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3028_; 
v_reuseFailAlloc_3028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3028_, 0, v___x_3022_);
v___x_3024_ = v_reuseFailAlloc_3028_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
lean_object* v___x_3026_; 
if (v_isShared_3004_ == 0)
{
lean_ctor_set(v___x_3003_, 0, v___x_3024_);
v___x_3026_ = v___x_3003_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3027_; 
v_reuseFailAlloc_3027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3027_, 0, v___x_3024_);
v___x_3026_ = v_reuseFailAlloc_3027_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
return v___x_3026_;
}
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3031_; lean_object* v___x_3033_; 
lean_del_object(v___x_3018_);
lean_del_object(v___x_3003_);
lean_dec(v_snd_2995_);
v_a_3030_ = lean_ctor_get(v_a_3016_, 0);
lean_inc(v_a_3030_);
lean_dec_ref(v_a_3016_);
v___x_3031_ = lean_box(0);
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 1, v_a_3030_);
lean_ctor_set(v___x_2997_, 0, v___x_3031_);
v___x_3033_ = v___x_2997_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v___x_3031_);
lean_ctor_set(v_reuseFailAlloc_3037_, 1, v_a_3030_);
v___x_3033_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
size_t v___x_3034_; size_t v___x_3035_; 
v___x_3034_ = ((size_t)1ULL);
v___x_3035_ = lean_usize_add(v_i_2982_, v___x_3034_);
v_i_2982_ = v___x_3035_;
v_b_2983_ = v___x_3033_;
goto _start;
}
}
}
}
}
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_del_object(v___x_2997_);
lean_dec(v_snd_2995_);
v_a_3040_ = lean_ctor_get(v___x_3000_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_3000_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_3000_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_3000_);
v___x_3042_ = lean_box(0);
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
v_resetjp_3041_:
{
lean_object* v___x_3045_; 
if (v_isShared_3043_ == 0)
{
v___x_3045_ = v___x_3042_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3046_; 
v_reuseFailAlloc_3046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3046_, 0, v_a_3040_);
v___x_3045_ = v_reuseFailAlloc_3046_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
return v___x_3045_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16___boxed(lean_object* v_init_3050_, lean_object* v_id_3051_, lean_object* v_danglingDot_3052_, lean_object* v_as_3053_, lean_object* v_sz_3054_, lean_object* v_i_3055_, lean_object* v_b_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_){
_start:
{
uint8_t v_danglingDot_boxed_3065_; size_t v_sz_boxed_3066_; size_t v_i_boxed_3067_; lean_object* v_res_3068_; 
v_danglingDot_boxed_3065_ = lean_unbox(v_danglingDot_3052_);
v_sz_boxed_3066_ = lean_unbox_usize(v_sz_3054_);
lean_dec(v_sz_3054_);
v_i_boxed_3067_ = lean_unbox_usize(v_i_3055_);
lean_dec(v_i_3055_);
v_res_3068_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__16(v_init_3050_, v_id_3051_, v_danglingDot_boxed_3065_, v_as_3053_, v_sz_boxed_3066_, v_i_boxed_3067_, v_b_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec_ref(v___y_3059_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
lean_dec_ref(v_as_3053_);
lean_dec(v_id_3051_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11___boxed(lean_object* v_init_3069_, lean_object* v_id_3070_, lean_object* v_danglingDot_3071_, lean_object* v_n_3072_, lean_object* v_b_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_){
_start:
{
uint8_t v_danglingDot_boxed_3082_; lean_object* v_res_3083_; 
v_danglingDot_boxed_3082_ = lean_unbox(v_danglingDot_3071_);
v_res_3083_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3069_, v_id_3070_, v_danglingDot_boxed_3082_, v_n_3072_, v_b_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_);
lean_dec(v___y_3080_);
lean_dec_ref(v___y_3079_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec(v___y_3075_);
lean_dec_ref(v___y_3074_);
lean_dec_ref(v_n_3072_);
lean_dec(v_id_3070_);
return v_res_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(lean_object* v_id_3084_, uint8_t v_danglingDot_3085_, lean_object* v_t_3086_, lean_object* v_init_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_, lean_object* v___y_3090_, lean_object* v___y_3091_, lean_object* v___y_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_){
_start:
{
lean_object* v_b_3097_; lean_object* v_root_3100_; lean_object* v_tail_3101_; lean_object* v___x_3102_; 
v_root_3100_ = lean_ctor_get(v_t_3086_, 0);
v_tail_3101_ = lean_ctor_get(v_t_3086_, 1);
v___x_3102_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11(v_init_3087_, v_id_3084_, v_danglingDot_3085_, v_root_3100_, v_init_3087_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3164_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3105_ = v___x_3102_;
v_isShared_3106_ = v_isSharedCheck_3164_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3102_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3164_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
if (lean_obj_tag(v_a_3103_) == 0)
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3117_; 
v_a_3107_ = lean_ctor_get(v_a_3103_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v_a_3103_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3109_ = v_a_3103_;
v_isShared_3110_ = v_isSharedCheck_3117_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v_a_3103_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3117_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
lean_object* v___x_3114_; 
if (v_isShared_3106_ == 0)
{
lean_ctor_set(v___x_3105_, 0, v___x_3112_);
v___x_3114_ = v___x_3105_;
goto v_reusejp_3113_;
}
else
{
lean_object* v_reuseFailAlloc_3115_; 
v_reuseFailAlloc_3115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3115_, 0, v___x_3112_);
v___x_3114_ = v_reuseFailAlloc_3115_;
goto v_reusejp_3113_;
}
v_reusejp_3113_:
{
return v___x_3114_;
}
}
}
}
else
{
lean_object* v_a_3118_; 
lean_del_object(v___x_3105_);
v_a_3118_ = lean_ctor_get(v_a_3103_, 0);
lean_inc(v_a_3118_);
lean_dec_ref(v_a_3103_);
if (lean_obj_tag(v_a_3118_) == 0)
{
lean_object* v_a_3119_; 
v_a_3119_ = lean_ctor_get(v_a_3118_, 0);
lean_inc(v_a_3119_);
lean_dec_ref(v_a_3118_);
v_b_3097_ = v_a_3119_;
goto v___jp_3096_;
}
else
{
lean_object* v_a_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; size_t v_sz_3123_; size_t v___x_3124_; lean_object* v___x_3125_; 
v_a_3120_ = lean_ctor_get(v_a_3118_, 0);
lean_inc(v_a_3120_);
lean_dec_ref(v_a_3118_);
v___x_3121_ = lean_box(0);
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
lean_ctor_set(v___x_3122_, 1, v_a_3120_);
v_sz_3123_ = lean_array_size(v_tail_3101_);
v___x_3124_ = ((size_t)0ULL);
v___x_3125_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12(v_id_3084_, v_danglingDot_3085_, v_tail_3101_, v_sz_3123_, v___x_3124_, v___x_3122_, v___y_3088_, v___y_3089_, v___y_3090_, v___y_3091_, v___y_3092_, v___y_3093_, v___y_3094_);
if (lean_obj_tag(v___x_3125_) == 0)
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3155_; 
v_a_3126_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3128_ = v___x_3125_;
v_isShared_3129_ = v_isSharedCheck_3155_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3125_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3155_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
if (lean_obj_tag(v_a_3126_) == 0)
{
lean_object* v_a_3130_; lean_object* v___x_3132_; uint8_t v_isShared_3133_; uint8_t v_isSharedCheck_3140_; 
v_a_3130_ = lean_ctor_get(v_a_3126_, 0);
v_isSharedCheck_3140_ = !lean_is_exclusive(v_a_3126_);
if (v_isSharedCheck_3140_ == 0)
{
v___x_3132_ = v_a_3126_;
v_isShared_3133_ = v_isSharedCheck_3140_;
goto v_resetjp_3131_;
}
else
{
lean_inc(v_a_3130_);
lean_dec(v_a_3126_);
v___x_3132_ = lean_box(0);
v_isShared_3133_ = v_isSharedCheck_3140_;
goto v_resetjp_3131_;
}
v_resetjp_3131_:
{
lean_object* v___x_3135_; 
if (v_isShared_3133_ == 0)
{
v___x_3135_ = v___x_3132_;
goto v_reusejp_3134_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_a_3130_);
v___x_3135_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3134_;
}
v_reusejp_3134_:
{
lean_object* v___x_3137_; 
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 0, v___x_3135_);
v___x_3137_ = v___x_3128_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v___x_3135_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
else
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3154_; 
v_a_3141_ = lean_ctor_get(v_a_3126_, 0);
v_isSharedCheck_3154_ = !lean_is_exclusive(v_a_3126_);
if (v_isSharedCheck_3154_ == 0)
{
v___x_3143_ = v_a_3126_;
v_isShared_3144_ = v_isSharedCheck_3154_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v_a_3126_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3154_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
lean_object* v_fst_3145_; 
v_fst_3145_ = lean_ctor_get(v_a_3141_, 0);
if (lean_obj_tag(v_fst_3145_) == 0)
{
lean_object* v_snd_3146_; lean_object* v___x_3148_; 
v_snd_3146_ = lean_ctor_get(v_a_3141_, 1);
lean_inc(v_snd_3146_);
lean_dec(v_a_3141_);
if (v_isShared_3144_ == 0)
{
lean_ctor_set(v___x_3143_, 0, v_snd_3146_);
v___x_3148_ = v___x_3143_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_snd_3146_);
v___x_3148_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
lean_object* v___x_3150_; 
if (v_isShared_3129_ == 0)
{
lean_ctor_set(v___x_3128_, 0, v___x_3148_);
v___x_3150_ = v___x_3128_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v___x_3148_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
else
{
lean_object* v_val_3153_; 
lean_inc_ref(v_fst_3145_);
lean_del_object(v___x_3143_);
lean_dec(v_a_3141_);
lean_del_object(v___x_3128_);
v_val_3153_ = lean_ctor_get(v_fst_3145_, 0);
lean_inc(v_val_3153_);
lean_dec_ref(v_fst_3145_);
v_b_3097_ = v_val_3153_;
goto v___jp_3096_;
}
}
}
}
}
else
{
lean_object* v_a_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3163_; 
v_a_3156_ = lean_ctor_get(v___x_3125_, 0);
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3125_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3158_ = v___x_3125_;
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_a_3156_);
lean_dec(v___x_3125_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3161_; 
if (v_isShared_3159_ == 0)
{
v___x_3161_ = v___x_3158_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_a_3156_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
v_a_3165_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3102_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3102_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
lean_object* v___x_3170_; 
if (v_isShared_3168_ == 0)
{
v___x_3170_ = v___x_3167_;
goto v_reusejp_3169_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3165_);
v___x_3170_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3169_;
}
v_reusejp_3169_:
{
return v___x_3170_;
}
}
}
v___jp_3096_:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3098_, 0, v_b_3097_);
v___x_3099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3098_);
return v___x_3099_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6___boxed(lean_object* v_id_3173_, lean_object* v_danglingDot_3174_, lean_object* v_t_3175_, lean_object* v_init_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_){
_start:
{
uint8_t v_danglingDot_boxed_3185_; lean_object* v_res_3186_; 
v_danglingDot_boxed_3185_ = lean_unbox(v_danglingDot_3174_);
v_res_3186_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_3173_, v_danglingDot_boxed_3185_, v_t_3175_, v_init_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_, v___y_3182_, v___y_3183_);
lean_dec(v___y_3183_);
lean_dec_ref(v___y_3182_);
lean_dec(v___y_3181_);
lean_dec_ref(v___y_3180_);
lean_dec_ref(v___y_3179_);
lean_dec(v___y_3178_);
lean_dec_ref(v___y_3177_);
lean_dec_ref(v_t_3175_);
lean_dec(v_id_3173_);
return v_res_3186_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(lean_object* v_f_3187_, lean_object* v_x_3188_, lean_object* v_x_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_){
_start:
{
if (lean_obj_tag(v_x_3189_) == 0)
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
lean_dec_ref(v_f_3187_);
v___x_3198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3198_, 0, v_x_3188_);
v___x_3199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3199_, 0, v___x_3198_);
return v___x_3199_;
}
else
{
lean_object* v_key_3200_; lean_object* v_value_3201_; lean_object* v_tail_3202_; lean_object* v___x_3203_; 
v_key_3200_ = lean_ctor_get(v_x_3189_, 0);
lean_inc(v_key_3200_);
v_value_3201_ = lean_ctor_get(v_x_3189_, 1);
lean_inc(v_value_3201_);
v_tail_3202_ = lean_ctor_get(v_x_3189_, 2);
lean_inc(v_tail_3202_);
lean_dec_ref(v_x_3189_);
lean_inc_ref(v_f_3187_);
lean_inc(v___y_3196_);
lean_inc_ref(v___y_3195_);
lean_inc(v___y_3194_);
lean_inc_ref(v___y_3193_);
lean_inc_ref(v___y_3192_);
lean_inc(v___y_3191_);
lean_inc_ref(v___y_3190_);
v___x_3203_ = lean_apply_10(v_f_3187_, v_key_3200_, v_value_3201_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_, lean_box(0));
if (lean_obj_tag(v___x_3203_) == 0)
{
lean_object* v_a_3204_; 
v_a_3204_ = lean_ctor_get(v___x_3203_, 0);
lean_inc(v_a_3204_);
if (lean_obj_tag(v_a_3204_) == 0)
{
lean_dec_ref(v_a_3204_);
lean_dec(v_tail_3202_);
lean_dec_ref(v_f_3187_);
return v___x_3203_;
}
else
{
lean_object* v_a_3205_; 
lean_dec_ref(v___x_3203_);
v_a_3205_ = lean_ctor_get(v_a_3204_, 0);
lean_inc(v_a_3205_);
lean_dec_ref(v_a_3204_);
v_x_3188_ = v_a_3205_;
v_x_3189_ = v_tail_3202_;
goto _start;
}
}
else
{
lean_dec(v_tail_3202_);
lean_dec_ref(v_f_3187_);
return v___x_3203_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg___boxed(lean_object* v_f_3207_, lean_object* v_x_3208_, lean_object* v_x_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_){
_start:
{
lean_object* v_res_3218_; 
v_res_3218_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_3207_, v_x_3208_, v_x_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_);
lean_dec(v___y_3216_);
lean_dec_ref(v___y_3215_);
lean_dec(v___y_3214_);
lean_dec_ref(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
return v_res_3218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(lean_object* v_f_3219_, lean_object* v_as_3220_, size_t v_i_3221_, size_t v_stop_3222_, lean_object* v_b_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_){
_start:
{
uint8_t v___x_3232_; 
v___x_3232_ = lean_usize_dec_eq(v_i_3221_, v_stop_3222_);
if (v___x_3232_ == 0)
{
lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3233_ = lean_array_uget_borrowed(v_as_3220_, v_i_3221_);
v___x_3234_ = lean_box(0);
lean_inc(v___x_3233_);
lean_inc_ref(v_f_3219_);
v___x_3235_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_3219_, v___x_3234_, v___x_3233_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v_a_3236_; 
v_a_3236_ = lean_ctor_get(v___x_3235_, 0);
lean_inc(v_a_3236_);
if (lean_obj_tag(v_a_3236_) == 0)
{
lean_dec_ref(v_a_3236_);
lean_dec_ref(v_f_3219_);
return v___x_3235_;
}
else
{
lean_object* v_a_3237_; size_t v___x_3238_; size_t v___x_3239_; 
lean_dec_ref(v___x_3235_);
v_a_3237_ = lean_ctor_get(v_a_3236_, 0);
lean_inc(v_a_3237_);
lean_dec_ref(v_a_3236_);
v___x_3238_ = ((size_t)1ULL);
v___x_3239_ = lean_usize_add(v_i_3221_, v___x_3238_);
v_i_3221_ = v___x_3239_;
v_b_3223_ = v_a_3237_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_3219_);
return v___x_3235_;
}
}
else
{
lean_object* v___x_3241_; lean_object* v___x_3242_; 
lean_dec_ref(v_f_3219_);
v___x_3241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3241_, 0, v_b_3223_);
v___x_3242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3242_, 0, v___x_3241_);
return v___x_3242_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg___boxed(lean_object* v_f_3243_, lean_object* v_as_3244_, lean_object* v_i_3245_, lean_object* v_stop_3246_, lean_object* v_b_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_){
_start:
{
size_t v_i_boxed_3256_; size_t v_stop_boxed_3257_; lean_object* v_res_3258_; 
v_i_boxed_3256_ = lean_unbox_usize(v_i_3245_);
lean_dec(v_i_3245_);
v_stop_boxed_3257_ = lean_unbox_usize(v_stop_3246_);
lean_dec(v_stop_3246_);
v_res_3258_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_3243_, v_as_3244_, v_i_boxed_3256_, v_stop_boxed_3257_, v_b_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_);
lean_dec(v___y_3254_);
lean_dec_ref(v___y_3253_);
lean_dec(v___y_3252_);
lean_dec_ref(v___y_3251_);
lean_dec_ref(v___y_3250_);
lean_dec(v___y_3249_);
lean_dec_ref(v___y_3248_);
lean_dec_ref(v_as_3244_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(lean_object* v_f_3259_, lean_object* v_keys_3260_, lean_object* v_vals_3261_, lean_object* v_i_3262_, lean_object* v_acc_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v___x_3272_; uint8_t v___x_3273_; 
v___x_3272_ = lean_array_get_size(v_keys_3260_);
v___x_3273_ = lean_nat_dec_lt(v_i_3262_, v___x_3272_);
if (v___x_3273_ == 0)
{
lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_dec(v_i_3262_);
lean_dec_ref(v_f_3259_);
v___x_3274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3274_, 0, v_acc_3263_);
v___x_3275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
return v___x_3275_;
}
else
{
lean_object* v_k_3276_; lean_object* v_v_3277_; lean_object* v___x_3278_; 
v_k_3276_ = lean_array_fget_borrowed(v_keys_3260_, v_i_3262_);
v_v_3277_ = lean_array_fget_borrowed(v_vals_3261_, v_i_3262_);
lean_inc_ref(v_f_3259_);
lean_inc(v___y_3270_);
lean_inc_ref(v___y_3269_);
lean_inc(v___y_3268_);
lean_inc_ref(v___y_3267_);
lean_inc_ref(v___y_3266_);
lean_inc(v___y_3265_);
lean_inc_ref(v___y_3264_);
lean_inc(v_v_3277_);
lean_inc(v_k_3276_);
v___x_3278_ = lean_apply_11(v_f_3259_, v_acc_3263_, v_k_3276_, v_v_3277_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_, v___y_3270_, lean_box(0));
if (lean_obj_tag(v___x_3278_) == 0)
{
lean_object* v_a_3279_; 
v_a_3279_ = lean_ctor_get(v___x_3278_, 0);
lean_inc(v_a_3279_);
if (lean_obj_tag(v_a_3279_) == 0)
{
lean_dec_ref(v_a_3279_);
lean_dec(v_i_3262_);
lean_dec_ref(v_f_3259_);
return v___x_3278_;
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; 
lean_dec_ref(v___x_3278_);
v_a_3280_ = lean_ctor_get(v_a_3279_, 0);
lean_inc(v_a_3280_);
lean_dec_ref(v_a_3279_);
v___x_3281_ = lean_unsigned_to_nat(1u);
v___x_3282_ = lean_nat_add(v_i_3262_, v___x_3281_);
lean_dec(v_i_3262_);
v_i_3262_ = v___x_3282_;
v_acc_3263_ = v_a_3280_;
goto _start;
}
}
else
{
lean_dec(v_i_3262_);
lean_dec_ref(v_f_3259_);
return v___x_3278_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg___boxed(lean_object* v_f_3284_, lean_object* v_keys_3285_, lean_object* v_vals_3286_, lean_object* v_i_3287_, lean_object* v_acc_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
lean_object* v_res_3297_; 
v_res_3297_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_3284_, v_keys_3285_, v_vals_3286_, v_i_3287_, v_acc_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
lean_dec_ref(v_vals_3286_);
lean_dec_ref(v_keys_3285_);
return v_res_3297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(lean_object* v_f_3298_, lean_object* v_x_3299_, lean_object* v_x_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_){
_start:
{
if (lean_obj_tag(v_x_3299_) == 0)
{
lean_object* v_es_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3331_; 
v_es_3309_ = lean_ctor_get(v_x_3299_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v_x_3299_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3311_ = v_x_3299_;
v_isShared_3312_ = v_isSharedCheck_3331_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_es_3309_);
lean_dec(v_x_3299_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3331_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
lean_object* v___x_3313_; lean_object* v___x_3314_; uint8_t v___x_3315_; 
v___x_3313_ = lean_unsigned_to_nat(0u);
v___x_3314_ = lean_array_get_size(v_es_3309_);
v___x_3315_ = lean_nat_dec_lt(v___x_3313_, v___x_3314_);
if (v___x_3315_ == 0)
{
lean_object* v___x_3317_; 
lean_dec_ref(v_es_3309_);
lean_dec_ref(v_f_3298_);
if (v_isShared_3312_ == 0)
{
lean_ctor_set_tag(v___x_3311_, 1);
lean_ctor_set(v___x_3311_, 0, v_x_3300_);
v___x_3317_ = v___x_3311_;
goto v_reusejp_3316_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_x_3300_);
v___x_3317_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3316_;
}
v_reusejp_3316_:
{
lean_object* v___x_3318_; 
v___x_3318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3318_, 0, v___x_3317_);
return v___x_3318_;
}
}
else
{
uint8_t v___x_3320_; 
v___x_3320_ = lean_nat_dec_le(v___x_3314_, v___x_3314_);
if (v___x_3320_ == 0)
{
if (v___x_3315_ == 0)
{
lean_object* v___x_3322_; 
lean_dec_ref(v_es_3309_);
lean_dec_ref(v_f_3298_);
if (v_isShared_3312_ == 0)
{
lean_ctor_set_tag(v___x_3311_, 1);
lean_ctor_set(v___x_3311_, 0, v_x_3300_);
v___x_3322_ = v___x_3311_;
goto v_reusejp_3321_;
}
else
{
lean_object* v_reuseFailAlloc_3324_; 
v_reuseFailAlloc_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3324_, 0, v_x_3300_);
v___x_3322_ = v_reuseFailAlloc_3324_;
goto v_reusejp_3321_;
}
v_reusejp_3321_:
{
lean_object* v___x_3323_; 
v___x_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
return v___x_3323_;
}
}
else
{
size_t v___x_3325_; size_t v___x_3326_; lean_object* v___x_3327_; 
lean_del_object(v___x_3311_);
v___x_3325_ = ((size_t)0ULL);
v___x_3326_ = lean_usize_of_nat(v___x_3314_);
v___x_3327_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_3298_, v_es_3309_, v___x_3325_, v___x_3326_, v_x_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
lean_dec_ref(v_es_3309_);
return v___x_3327_;
}
}
else
{
size_t v___x_3328_; size_t v___x_3329_; lean_object* v___x_3330_; 
lean_del_object(v___x_3311_);
v___x_3328_ = ((size_t)0ULL);
v___x_3329_ = lean_usize_of_nat(v___x_3314_);
v___x_3330_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_3298_, v_es_3309_, v___x_3328_, v___x_3329_, v_x_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
lean_dec_ref(v_es_3309_);
return v___x_3330_;
}
}
}
}
else
{
lean_object* v_ks_3332_; lean_object* v_vs_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v_ks_3332_ = lean_ctor_get(v_x_3299_, 0);
lean_inc_ref(v_ks_3332_);
v_vs_3333_ = lean_ctor_get(v_x_3299_, 1);
lean_inc_ref(v_vs_3333_);
lean_dec_ref(v_x_3299_);
v___x_3334_ = lean_unsigned_to_nat(0u);
v___x_3335_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_3298_, v_ks_3332_, v_vs_3333_, v___x_3334_, v_x_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_);
lean_dec_ref(v_vs_3333_);
lean_dec_ref(v_ks_3332_);
return v___x_3335_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(lean_object* v_f_3336_, lean_object* v_as_3337_, size_t v_i_3338_, size_t v_stop_3339_, lean_object* v_b_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
lean_object* v_a_3350_; lean_object* v___y_3355_; uint8_t v___x_3358_; 
v___x_3358_ = lean_usize_dec_eq(v_i_3338_, v_stop_3339_);
if (v___x_3358_ == 0)
{
lean_object* v___x_3359_; 
v___x_3359_ = lean_array_uget_borrowed(v_as_3337_, v_i_3338_);
switch(lean_obj_tag(v___x_3359_))
{
case 0:
{
lean_object* v_key_3360_; lean_object* v_val_3361_; lean_object* v___x_3362_; 
v_key_3360_ = lean_ctor_get(v___x_3359_, 0);
v_val_3361_ = lean_ctor_get(v___x_3359_, 1);
lean_inc_ref(v_f_3336_);
lean_inc(v___y_3347_);
lean_inc_ref(v___y_3346_);
lean_inc(v___y_3345_);
lean_inc_ref(v___y_3344_);
lean_inc_ref(v___y_3343_);
lean_inc(v___y_3342_);
lean_inc_ref(v___y_3341_);
lean_inc(v_val_3361_);
lean_inc(v_key_3360_);
v___x_3362_ = lean_apply_11(v_f_3336_, v_b_3340_, v_key_3360_, v_val_3361_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_, lean_box(0));
v___y_3355_ = v___x_3362_;
goto v___jp_3354_;
}
case 1:
{
lean_object* v_node_3363_; lean_object* v___x_3364_; 
v_node_3363_ = lean_ctor_get(v___x_3359_, 0);
lean_inc(v_node_3363_);
lean_inc_ref(v_f_3336_);
v___x_3364_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_3336_, v_node_3363_, v_b_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
v___y_3355_ = v___x_3364_;
goto v___jp_3354_;
}
default: 
{
v_a_3350_ = v_b_3340_;
goto v___jp_3349_;
}
}
}
else
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
lean_dec_ref(v_f_3336_);
v___x_3365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3365_, 0, v_b_3340_);
v___x_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3366_, 0, v___x_3365_);
return v___x_3366_;
}
v___jp_3349_:
{
size_t v___x_3351_; size_t v___x_3352_; 
v___x_3351_ = ((size_t)1ULL);
v___x_3352_ = lean_usize_add(v_i_3338_, v___x_3351_);
v_i_3338_ = v___x_3352_;
v_b_3340_ = v_a_3350_;
goto _start;
}
v___jp_3354_:
{
if (lean_obj_tag(v___y_3355_) == 0)
{
lean_object* v_a_3356_; 
v_a_3356_ = lean_ctor_get(v___y_3355_, 0);
if (lean_obj_tag(v_a_3356_) == 0)
{
lean_dec_ref(v_f_3336_);
return v___y_3355_;
}
else
{
lean_object* v_a_3357_; 
lean_inc_ref(v_a_3356_);
lean_dec_ref(v___y_3355_);
v_a_3357_ = lean_ctor_get(v_a_3356_, 0);
lean_inc(v_a_3357_);
lean_dec_ref(v_a_3356_);
v_a_3350_ = v_a_3357_;
goto v___jp_3349_;
}
}
else
{
lean_dec_ref(v_f_3336_);
return v___y_3355_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg___boxed(lean_object* v_f_3367_, lean_object* v_as_3368_, lean_object* v_i_3369_, lean_object* v_stop_3370_, lean_object* v_b_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_){
_start:
{
size_t v_i_boxed_3380_; size_t v_stop_boxed_3381_; lean_object* v_res_3382_; 
v_i_boxed_3380_ = lean_unbox_usize(v_i_3369_);
lean_dec(v_i_3369_);
v_stop_boxed_3381_ = lean_unbox_usize(v_stop_3370_);
lean_dec(v_stop_3370_);
v_res_3382_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_3367_, v_as_3368_, v_i_boxed_3380_, v_stop_boxed_3381_, v_b_3371_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_, v___y_3377_, v___y_3378_);
lean_dec(v___y_3378_);
lean_dec_ref(v___y_3377_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec_ref(v___y_3374_);
lean_dec(v___y_3373_);
lean_dec_ref(v___y_3372_);
lean_dec_ref(v_as_3368_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg___boxed(lean_object* v_f_3383_, lean_object* v_x_3384_, lean_object* v_x_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_3383_, v_x_3384_, v_x_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(lean_object* v_f_3395_, lean_object* v_x_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_){
_start:
{
lean_object* v___x_3407_; 
lean_inc(v___y_3405_);
lean_inc_ref(v___y_3404_);
lean_inc(v___y_3403_);
lean_inc_ref(v___y_3402_);
lean_inc_ref(v___y_3401_);
lean_inc(v___y_3400_);
lean_inc_ref(v___y_3399_);
v___x_3407_ = lean_apply_10(v_f_3395_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_, lean_box(0));
return v___x_3407_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed(lean_object* v_f_3408_, lean_object* v_x_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_){
_start:
{
lean_object* v_res_3420_; 
v_res_3420_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0(v_f_3408_, v_x_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
lean_dec(v___y_3418_);
lean_dec_ref(v___y_3417_);
lean_dec(v___y_3416_);
lean_dec_ref(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(lean_object* v_map_3421_, lean_object* v_f_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_){
_start:
{
lean_object* v___f_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___f_3431_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___lam__0___boxed), 12, 1);
lean_closure_set(v___f_3431_, 0, v_f_3422_);
v___x_3432_ = lean_box(0);
v___x_3433_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v___f_3431_, v_map_3421_, v___x_3432_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg___boxed(lean_object* v_map_3434_, lean_object* v_f_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_){
_start:
{
lean_object* v_res_3444_; 
v_res_3444_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_3434_, v_f_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_, v___y_3442_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v___y_3440_);
lean_dec_ref(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(lean_object* v_s_3445_, lean_object* v_f_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_){
_start:
{
lean_object* v_map_u2081_3455_; lean_object* v_map_u2082_3456_; lean_object* v_buckets_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; uint8_t v___x_3460_; 
v_map_u2081_3455_ = lean_ctor_get(v_s_3445_, 0);
lean_inc_ref(v_map_u2081_3455_);
v_map_u2082_3456_ = lean_ctor_get(v_s_3445_, 1);
lean_inc_ref(v_map_u2082_3456_);
lean_dec_ref(v_s_3445_);
v_buckets_3457_ = lean_ctor_get(v_map_u2081_3455_, 1);
lean_inc_ref(v_buckets_3457_);
lean_dec_ref(v_map_u2081_3455_);
v___x_3458_ = lean_unsigned_to_nat(0u);
v___x_3459_ = lean_array_get_size(v_buckets_3457_);
v___x_3460_ = lean_nat_dec_lt(v___x_3458_, v___x_3459_);
if (v___x_3460_ == 0)
{
lean_object* v___x_3461_; 
lean_dec_ref(v_buckets_3457_);
v___x_3461_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_3456_, v_f_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
return v___x_3461_;
}
else
{
lean_object* v___x_3462_; uint8_t v___x_3463_; 
v___x_3462_ = lean_box(0);
v___x_3463_ = lean_nat_dec_le(v___x_3459_, v___x_3459_);
if (v___x_3463_ == 0)
{
if (v___x_3460_ == 0)
{
lean_object* v___x_3464_; 
lean_dec_ref(v_buckets_3457_);
v___x_3464_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_3456_, v_f_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
return v___x_3464_;
}
else
{
size_t v___x_3465_; size_t v___x_3466_; lean_object* v___x_3467_; 
v___x_3465_ = ((size_t)0ULL);
v___x_3466_ = lean_usize_of_nat(v___x_3459_);
lean_inc_ref(v_f_3446_);
v___x_3467_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_3446_, v_buckets_3457_, v___x_3465_, v___x_3466_, v___x_3462_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
lean_dec_ref(v_buckets_3457_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v_a_3468_; 
v_a_3468_ = lean_ctor_get(v___x_3467_, 0);
lean_inc(v_a_3468_);
if (lean_obj_tag(v_a_3468_) == 0)
{
lean_dec_ref(v_a_3468_);
lean_dec_ref(v_map_u2082_3456_);
lean_dec_ref(v_f_3446_);
return v___x_3467_;
}
else
{
lean_object* v___x_3469_; 
lean_dec_ref(v_a_3468_);
lean_dec_ref(v___x_3467_);
v___x_3469_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_3456_, v_f_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
return v___x_3469_;
}
}
else
{
lean_dec_ref(v_map_u2082_3456_);
lean_dec_ref(v_f_3446_);
return v___x_3467_;
}
}
}
else
{
size_t v___x_3470_; size_t v___x_3471_; lean_object* v___x_3472_; 
v___x_3470_ = ((size_t)0ULL);
v___x_3471_ = lean_usize_of_nat(v___x_3459_);
lean_inc_ref(v_f_3446_);
v___x_3472_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_3446_, v_buckets_3457_, v___x_3470_, v___x_3471_, v___x_3462_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
lean_dec_ref(v_buckets_3457_);
if (lean_obj_tag(v___x_3472_) == 0)
{
lean_object* v_a_3473_; 
v_a_3473_ = lean_ctor_get(v___x_3472_, 0);
lean_inc(v_a_3473_);
if (lean_obj_tag(v_a_3473_) == 0)
{
lean_dec_ref(v_a_3473_);
lean_dec_ref(v_map_u2082_3456_);
lean_dec_ref(v_f_3446_);
return v___x_3472_;
}
else
{
lean_object* v___x_3474_; 
lean_dec_ref(v_a_3473_);
lean_dec_ref(v___x_3472_);
v___x_3474_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_u2082_3456_, v_f_3446_, v___y_3447_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_, v___y_3452_, v___y_3453_);
return v___x_3474_;
}
}
else
{
lean_dec_ref(v_map_u2082_3456_);
lean_dec_ref(v_f_3446_);
return v___x_3472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg___boxed(lean_object* v_s_3475_, lean_object* v_f_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
lean_object* v_res_3485_; 
v_res_3485_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_3475_, v_f_3476_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec_ref(v___y_3479_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
return v_res_3485_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(lean_object* v_as_3486_, size_t v_sz_3487_, size_t v_i_3488_, lean_object* v_b_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_){
_start:
{
uint8_t v___x_3494_; 
v___x_3494_ = lean_usize_dec_lt(v_i_3488_, v_sz_3487_);
if (v___x_3494_ == 0)
{
lean_object* v___x_3495_; lean_object* v___x_3496_; 
v___x_3495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3495_, 0, v_b_3489_);
v___x_3496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3496_, 0, v___x_3495_);
return v___x_3496_;
}
else
{
lean_object* v_a_3497_; lean_object* v___x_3498_; 
v_a_3497_ = lean_array_uget_borrowed(v_as_3486_, v_i_3488_);
lean_inc(v_a_3497_);
v___x_3498_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg(v_a_3497_, v___y_3490_, v___y_3491_, v___y_3492_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v_a_3499_; 
v_a_3499_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3499_);
if (lean_obj_tag(v_a_3499_) == 0)
{
lean_dec_ref(v_a_3499_);
return v___x_3498_;
}
else
{
lean_object* v___x_3500_; size_t v___x_3501_; size_t v___x_3502_; 
lean_dec_ref(v_a_3499_);
lean_dec_ref(v___x_3498_);
v___x_3500_ = lean_box(0);
v___x_3501_ = ((size_t)1ULL);
v___x_3502_ = lean_usize_add(v_i_3488_, v___x_3501_);
v_i_3488_ = v___x_3502_;
v_b_3489_ = v___x_3500_;
goto _start;
}
}
else
{
return v___x_3498_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg___boxed(lean_object* v_as_3504_, lean_object* v_sz_3505_, lean_object* v_i_3506_, lean_object* v_b_3507_, lean_object* v___y_3508_, lean_object* v___y_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_){
_start:
{
size_t v_sz_boxed_3512_; size_t v_i_boxed_3513_; lean_object* v_res_3514_; 
v_sz_boxed_3512_ = lean_unbox_usize(v_sz_3505_);
lean_dec(v_sz_3505_);
v_i_boxed_3513_ = lean_unbox_usize(v_i_3506_);
lean_dec(v_i_3506_);
v_res_3514_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_3504_, v_sz_boxed_3512_, v_i_boxed_3513_, v_b_3507_, v___y_3508_, v___y_3509_, v___y_3510_);
lean_dec(v___y_3510_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec_ref(v_as_3504_);
return v_res_3514_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(lean_object* v___x_3515_, lean_object* v_a_3516_, lean_object* v___x_3517_, lean_object* v_ns_3518_, lean_object* v_id_3519_, uint8_t v_danglingDot_3520_, lean_object* v_alias_3521_, lean_object* v_declNames_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_){
_start:
{
uint8_t v___y_3532_; uint8_t v___x_3536_; 
v___x_3536_ = l_Lean_Name_isPrefixOf(v_ns_3518_, v_alias_3521_);
if (v___x_3536_ == 0)
{
v___y_3532_ = v___x_3536_;
goto v___jp_3531_;
}
else
{
lean_object* v___x_3537_; lean_object* v___x_3538_; uint8_t v___x_3539_; 
v___x_3537_ = lean_box(0);
lean_inc(v_alias_3521_);
v___x_3538_ = l_Lean_Name_replacePrefix(v_alias_3521_, v_ns_3518_, v___x_3537_);
v___x_3539_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3519_, v___x_3538_, v_danglingDot_3520_);
lean_dec(v___x_3538_);
v___y_3532_ = v___x_3539_;
goto v___jp_3531_;
}
v___jp_3531_:
{
if (v___y_3532_ == 0)
{
lean_object* v___x_3533_; lean_object* v___x_3534_; 
lean_dec(v_declNames_3522_);
lean_dec(v_alias_3521_);
lean_dec_ref(v___x_3517_);
v___x_3533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3515_);
v___x_3534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3534_, 0, v___x_3533_);
return v___x_3534_;
}
else
{
lean_object* v___x_3535_; 
v___x_3535_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_3516_, v___x_3517_, v_alias_3521_, v_declNames_3522_, v___y_3523_, v___y_3524_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_);
lean_dec(v_alias_3521_);
return v___x_3535_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed(lean_object* v___x_3540_, lean_object* v_a_3541_, lean_object* v___x_3542_, lean_object* v_ns_3543_, lean_object* v_id_3544_, lean_object* v_danglingDot_3545_, lean_object* v_alias_3546_, lean_object* v_declNames_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_){
_start:
{
uint8_t v_danglingDot_boxed_3556_; lean_object* v_res_3557_; 
v_danglingDot_boxed_3556_ = lean_unbox(v_danglingDot_3545_);
v_res_3557_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0(v___x_3540_, v_a_3541_, v___x_3542_, v_ns_3543_, v_id_3544_, v_danglingDot_boxed_3556_, v_alias_3546_, v_declNames_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
lean_dec(v___y_3554_);
lean_dec_ref(v___y_3553_);
lean_dec(v___y_3552_);
lean_dec_ref(v___y_3551_);
lean_dec_ref(v___y_3550_);
lean_dec(v___y_3549_);
lean_dec_ref(v___y_3548_);
lean_dec(v_id_3544_);
lean_dec(v_ns_3543_);
lean_dec_ref(v_a_3541_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(lean_object* v_a_3558_, lean_object* v___x_3559_, lean_object* v_id_3560_, uint8_t v_danglingDot_3561_, lean_object* v_as_x27_3562_, lean_object* v_b_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_){
_start:
{
lean_object* v_a_3573_; 
if (lean_obj_tag(v_as_x27_3562_) == 0)
{
lean_object* v___x_3576_; lean_object* v___x_3577_; 
lean_dec(v_id_3560_);
lean_dec_ref(v___x_3559_);
lean_dec_ref(v_a_3558_);
v___x_3576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3576_, 0, v_b_3563_);
v___x_3577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3576_);
return v___x_3577_;
}
else
{
lean_object* v_head_3578_; lean_object* v_tail_3579_; lean_object* v___x_3580_; 
v_head_3578_ = lean_ctor_get(v_as_x27_3562_, 0);
v_tail_3579_ = lean_ctor_get(v_as_x27_3562_, 1);
v___x_3580_ = lean_box(0);
if (lean_obj_tag(v_head_3578_) == 0)
{
lean_object* v_ns_3581_; lean_object* v___x_3582_; lean_object* v___f_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v_ns_3581_ = lean_ctor_get(v_head_3578_, 0);
v___x_3582_ = lean_box(v_danglingDot_3561_);
lean_inc(v_id_3560_);
lean_inc(v_ns_3581_);
lean_inc_ref_n(v___x_3559_, 2);
lean_inc_ref(v_a_3558_);
v___f_3583_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_3583_, 0, v___x_3580_);
lean_closure_set(v___f_3583_, 1, v_a_3558_);
lean_closure_set(v___f_3583_, 2, v___x_3559_);
lean_closure_set(v___f_3583_, 3, v_ns_3581_);
lean_closure_set(v___f_3583_, 4, v_id_3560_);
lean_closure_set(v___f_3583_, 5, v___x_3582_);
v___x_3584_ = l_Lean_getAliasState(v___x_3559_);
v___x_3585_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_3584_, v___f_3583_, v___y_3564_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v_a_3586_; 
v_a_3586_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_a_3586_);
lean_dec_ref(v___x_3585_);
if (lean_obj_tag(v_a_3586_) == 0)
{
lean_object* v_a_3587_; 
lean_dec(v_id_3560_);
lean_dec_ref(v___x_3559_);
lean_dec_ref(v_a_3558_);
v_a_3587_ = lean_ctor_get(v_a_3586_, 0);
lean_inc(v_a_3587_);
lean_dec_ref(v_a_3586_);
v_a_3573_ = v_a_3587_;
goto v___jp_3572_;
}
else
{
lean_dec_ref(v_a_3586_);
v_as_x27_3562_ = v_tail_3579_;
v_b_3563_ = v___x_3580_;
goto _start;
}
}
else
{
lean_dec(v_id_3560_);
lean_dec_ref(v___x_3559_);
lean_dec_ref(v_a_3558_);
return v___x_3585_;
}
}
else
{
lean_object* v_id_3589_; lean_object* v_declName_3590_; uint8_t v___x_3591_; 
v_id_3589_ = lean_ctor_get(v_head_3578_, 0);
v_declName_3590_ = lean_ctor_get(v_head_3578_, 1);
lean_inc(v_declName_3590_);
lean_inc_ref(v___x_3559_);
v___x_3591_ = l_Lean_Server_Completion_allowCompletion(v_a_3558_, v___x_3559_, v_declName_3590_);
if (v___x_3591_ == 0)
{
v_as_x27_3562_ = v_tail_3579_;
v_b_3563_ = v___x_3580_;
goto _start;
}
else
{
uint8_t v___x_3593_; 
v___x_3593_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3560_, v_id_3589_, v_danglingDot_3561_);
if (v___x_3593_ == 0)
{
v_as_x27_3562_ = v_tail_3579_;
v_b_3563_ = v___x_3580_;
goto _start;
}
else
{
lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
v___x_3595_ = l_Lean_Name_getString_x21(v_id_3589_);
v___x_3596_ = lean_box(0);
v___x_3597_ = l_Lean_Name_str___override(v___x_3596_, v___x_3595_);
lean_inc(v_declName_3590_);
v___x_3598_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_3597_, v_declName_3590_, v___y_3564_, v___y_3565_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_);
if (lean_obj_tag(v___x_3598_) == 0)
{
lean_dec_ref(v___x_3598_);
v_as_x27_3562_ = v_tail_3579_;
v_b_3563_ = v___x_3580_;
goto _start;
}
else
{
lean_dec(v_id_3560_);
lean_dec_ref(v___x_3559_);
lean_dec_ref(v_a_3558_);
return v___x_3598_;
}
}
}
}
}
v___jp_3572_:
{
lean_object* v___x_3574_; lean_object* v___x_3575_; 
v___x_3574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3574_, 0, v_a_3573_);
v___x_3575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3574_);
return v___x_3575_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg___boxed(lean_object* v_a_3600_, lean_object* v___x_3601_, lean_object* v_id_3602_, lean_object* v_danglingDot_3603_, lean_object* v_as_x27_3604_, lean_object* v_b_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_, lean_object* v___y_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_){
_start:
{
uint8_t v_danglingDot_boxed_3614_; lean_object* v_res_3615_; 
v_danglingDot_boxed_3614_ = lean_unbox(v_danglingDot_3603_);
v_res_3615_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_3600_, v___x_3601_, v_id_3602_, v_danglingDot_boxed_3614_, v_as_x27_3604_, v_b_3605_, v___y_3606_, v___y_3607_, v___y_3608_, v___y_3609_, v___y_3610_, v___y_3611_, v___y_3612_);
lean_dec(v___y_3612_);
lean_dec_ref(v___y_3611_);
lean_dec(v___y_3610_);
lean_dec_ref(v___y_3609_);
lean_dec_ref(v___y_3608_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec(v_as_x27_3604_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(lean_object* v_id_3616_, uint8_t v_danglingDot_3617_, lean_object* v_a_3618_, lean_object* v___x_3619_, lean_object* v_as_3620_, lean_object* v_as_x27_3621_, lean_object* v_b_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_){
_start:
{
lean_object* v_a_3632_; 
if (lean_obj_tag(v_as_x27_3621_) == 0)
{
lean_object* v___x_3635_; lean_object* v___x_3636_; 
lean_dec_ref(v___x_3619_);
lean_dec_ref(v_a_3618_);
lean_dec(v_id_3616_);
v___x_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3635_, 0, v_b_3622_);
v___x_3636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
return v___x_3636_;
}
else
{
lean_object* v_head_3637_; lean_object* v_tail_3638_; lean_object* v___x_3639_; 
v_head_3637_ = lean_ctor_get(v_as_x27_3621_, 0);
v_tail_3638_ = lean_ctor_get(v_as_x27_3621_, 1);
v___x_3639_ = lean_box(0);
if (lean_obj_tag(v_head_3637_) == 0)
{
lean_object* v_ns_3640_; lean_object* v___x_3641_; lean_object* v___f_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; 
v_ns_3640_ = lean_ctor_get(v_head_3637_, 0);
v___x_3641_ = lean_box(v_danglingDot_3617_);
lean_inc(v_id_3616_);
lean_inc(v_ns_3640_);
lean_inc_ref_n(v___x_3619_, 2);
lean_inc_ref(v_a_3618_);
v___f_3642_ = lean_alloc_closure((void*)(l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___lam__0___boxed), 16, 6);
lean_closure_set(v___f_3642_, 0, v___x_3639_);
lean_closure_set(v___f_3642_, 1, v_a_3618_);
lean_closure_set(v___f_3642_, 2, v___x_3619_);
lean_closure_set(v___f_3642_, 3, v_ns_3640_);
lean_closure_set(v___f_3642_, 4, v_id_3616_);
lean_closure_set(v___f_3642_, 5, v___x_3641_);
v___x_3643_ = l_Lean_getAliasState(v___x_3619_);
v___x_3644_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_3643_, v___f_3642_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
if (lean_obj_tag(v___x_3644_) == 0)
{
lean_object* v_a_3645_; 
v_a_3645_ = lean_ctor_get(v___x_3644_, 0);
lean_inc(v_a_3645_);
lean_dec_ref(v___x_3644_);
if (lean_obj_tag(v_a_3645_) == 0)
{
lean_object* v_a_3646_; 
lean_dec_ref(v___x_3619_);
lean_dec_ref(v_a_3618_);
lean_dec(v_id_3616_);
v_a_3646_ = lean_ctor_get(v_a_3645_, 0);
lean_inc(v_a_3646_);
lean_dec_ref(v_a_3645_);
v_a_3632_ = v_a_3646_;
goto v___jp_3631_;
}
else
{
lean_object* v___x_3647_; 
lean_dec_ref(v_a_3645_);
v___x_3647_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_3618_, v___x_3619_, v_id_3616_, v_danglingDot_3617_, v_tail_3638_, v___x_3639_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
return v___x_3647_;
}
}
else
{
lean_dec_ref(v___x_3619_);
lean_dec_ref(v_a_3618_);
lean_dec(v_id_3616_);
return v___x_3644_;
}
}
else
{
lean_object* v_id_3648_; lean_object* v_declName_3649_; uint8_t v___x_3650_; 
v_id_3648_ = lean_ctor_get(v_head_3637_, 0);
v_declName_3649_ = lean_ctor_get(v_head_3637_, 1);
lean_inc(v_declName_3649_);
lean_inc_ref(v___x_3619_);
v___x_3650_ = l_Lean_Server_Completion_allowCompletion(v_a_3618_, v___x_3619_, v_declName_3649_);
if (v___x_3650_ == 0)
{
lean_object* v___x_3651_; 
v___x_3651_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_3618_, v___x_3619_, v_id_3616_, v_danglingDot_3617_, v_tail_3638_, v___x_3639_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
return v___x_3651_;
}
else
{
uint8_t v___x_3652_; 
v___x_3652_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchAtomic(v_id_3616_, v_id_3648_, v_danglingDot_3617_);
if (v___x_3652_ == 0)
{
lean_object* v___x_3653_; 
v___x_3653_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_3618_, v___x_3619_, v_id_3616_, v_danglingDot_3617_, v_tail_3638_, v___x_3639_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
return v___x_3653_;
}
else
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; 
v___x_3654_ = l_Lean_Name_getString_x21(v_id_3648_);
v___x_3655_ = lean_box(0);
v___x_3656_ = l_Lean_Name_str___override(v___x_3655_, v___x_3654_);
lean_inc(v_declName_3649_);
v___x_3657_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItemForDecl___redArg(v___x_3656_, v_declName_3649_, v___y_3623_, v___y_3624_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v___x_3658_; 
lean_dec_ref(v___x_3657_);
v___x_3658_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_3618_, v___x_3619_, v_id_3616_, v_danglingDot_3617_, v_tail_3638_, v___x_3639_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_);
return v___x_3658_;
}
else
{
lean_dec_ref(v___x_3619_);
lean_dec_ref(v_a_3618_);
lean_dec(v_id_3616_);
return v___x_3657_;
}
}
}
}
}
v___jp_3631_:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3633_, 0, v_a_3632_);
v___x_3634_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3634_, 0, v___x_3633_);
return v___x_3634_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg___boxed(lean_object* v_id_3659_, lean_object* v_danglingDot_3660_, lean_object* v_a_3661_, lean_object* v___x_3662_, lean_object* v_as_3663_, lean_object* v_as_x27_3664_, lean_object* v_b_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_){
_start:
{
uint8_t v_danglingDot_boxed_3674_; lean_object* v_res_3675_; 
v_danglingDot_boxed_3674_ = lean_unbox(v_danglingDot_3660_);
v_res_3675_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_3659_, v_danglingDot_boxed_3674_, v_a_3661_, v___x_3662_, v_as_3663_, v_as_x27_3664_, v_b_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_);
lean_dec(v___y_3672_);
lean_dec_ref(v___y_3671_);
lean_dec(v___y_3670_);
lean_dec_ref(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v_as_x27_3664_);
lean_dec(v_as_3663_);
return v_res_3675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(lean_object* v_f_3676_, lean_object* v_decl_3677_, lean_object* v_ci_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
lean_object* v___y_3689_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; uint8_t v___x_3730_; 
v___x_3727_ = lean_unsigned_to_nat(1u);
v___x_3728_ = lean_nat_add(v___y_3679_, v___x_3727_);
v___x_3729_ = lean_unsigned_to_nat(10000u);
v___x_3730_ = lean_nat_dec_le(v___x_3729_, v___x_3728_);
if (v___x_3730_ == 0)
{
v___y_3689_ = v___x_3728_;
goto v___jp_3688_;
}
else
{
lean_object* v___x_3731_; lean_object* v_a_3732_; lean_object* v___x_3734_; uint8_t v_isShared_3735_; uint8_t v_isSharedCheck_3748_; 
lean_dec(v___x_3728_);
v___x_3731_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_3682_, v___y_3686_);
v_a_3732_ = lean_ctor_get(v___x_3731_, 0);
v_isSharedCheck_3748_ = !lean_is_exclusive(v___x_3731_);
if (v_isSharedCheck_3748_ == 0)
{
v___x_3734_ = v___x_3731_;
v_isShared_3735_ = v_isSharedCheck_3748_;
goto v_resetjp_3733_;
}
else
{
lean_inc(v_a_3732_);
lean_dec(v___x_3731_);
v___x_3734_ = lean_box(0);
v_isShared_3735_ = v_isSharedCheck_3748_;
goto v_resetjp_3733_;
}
v_resetjp_3733_:
{
if (lean_obj_tag(v_a_3732_) == 0)
{
lean_object* v_a_3736_; lean_object* v___x_3738_; uint8_t v_isShared_3739_; uint8_t v_isSharedCheck_3746_; 
lean_dec_ref(v_ci_3678_);
lean_dec(v_decl_3677_);
lean_dec_ref(v_f_3676_);
v_a_3736_ = lean_ctor_get(v_a_3732_, 0);
v_isSharedCheck_3746_ = !lean_is_exclusive(v_a_3732_);
if (v_isSharedCheck_3746_ == 0)
{
v___x_3738_ = v_a_3732_;
v_isShared_3739_ = v_isSharedCheck_3746_;
goto v_resetjp_3737_;
}
else
{
lean_inc(v_a_3736_);
lean_dec(v_a_3732_);
v___x_3738_ = lean_box(0);
v_isShared_3739_ = v_isSharedCheck_3746_;
goto v_resetjp_3737_;
}
v_resetjp_3737_:
{
lean_object* v___x_3741_; 
if (v_isShared_3739_ == 0)
{
v___x_3741_ = v___x_3738_;
goto v_reusejp_3740_;
}
else
{
lean_object* v_reuseFailAlloc_3745_; 
v_reuseFailAlloc_3745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3745_, 0, v_a_3736_);
v___x_3741_ = v_reuseFailAlloc_3745_;
goto v_reusejp_3740_;
}
v_reusejp_3740_:
{
lean_object* v___x_3743_; 
if (v_isShared_3735_ == 0)
{
lean_ctor_set(v___x_3734_, 0, v___x_3741_);
v___x_3743_ = v___x_3734_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3741_);
v___x_3743_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
return v___x_3743_;
}
}
}
}
else
{
lean_object* v___x_3747_; 
lean_dec_ref(v_a_3732_);
lean_del_object(v___x_3734_);
v___x_3747_ = lean_unsigned_to_nat(0u);
v___y_3689_ = v___x_3747_;
goto v___jp_3688_;
}
}
}
v___jp_3688_:
{
lean_object* v___x_3690_; 
lean_inc(v___y_3686_);
lean_inc_ref(v___y_3685_);
lean_inc(v___y_3684_);
lean_inc_ref(v___y_3683_);
lean_inc_ref(v___y_3682_);
lean_inc(v___y_3681_);
lean_inc_ref(v___y_3680_);
v___x_3690_ = lean_apply_10(v_f_3676_, v_decl_3677_, v_ci_3678_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_, v___y_3686_, lean_box(0));
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3718_; 
v_a_3691_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3718_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3718_ == 0)
{
v___x_3693_ = v___x_3690_;
v_isShared_3694_ = v_isSharedCheck_3718_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3690_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3718_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
if (lean_obj_tag(v_a_3691_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3705_; 
lean_dec(v___y_3689_);
v_a_3695_ = lean_ctor_get(v_a_3691_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v_a_3691_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3697_ = v_a_3691_;
v_isShared_3698_ = v_isSharedCheck_3705_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v_a_3691_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3705_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3700_; 
if (v_isShared_3698_ == 0)
{
v___x_3700_ = v___x_3697_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_a_3695_);
v___x_3700_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
lean_object* v___x_3702_; 
if (v_isShared_3694_ == 0)
{
lean_ctor_set(v___x_3693_, 0, v___x_3700_);
v___x_3702_ = v___x_3693_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v___x_3700_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
}
else
{
lean_object* v_a_3706_; lean_object* v___x_3708_; uint8_t v_isShared_3709_; uint8_t v_isSharedCheck_3717_; 
v_a_3706_ = lean_ctor_get(v_a_3691_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v_a_3691_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3708_ = v_a_3691_;
v_isShared_3709_ = v_isSharedCheck_3717_;
goto v_resetjp_3707_;
}
else
{
lean_inc(v_a_3706_);
lean_dec(v_a_3691_);
v___x_3708_ = lean_box(0);
v_isShared_3709_ = v_isSharedCheck_3717_;
goto v_resetjp_3707_;
}
v_resetjp_3707_:
{
lean_object* v___x_3710_; lean_object* v___x_3712_; 
v___x_3710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3710_, 0, v_a_3706_);
lean_ctor_set(v___x_3710_, 1, v___y_3689_);
if (v_isShared_3709_ == 0)
{
lean_ctor_set(v___x_3708_, 0, v___x_3710_);
v___x_3712_ = v___x_3708_;
goto v_reusejp_3711_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3716_, 0, v___x_3710_);
v___x_3712_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3711_;
}
v_reusejp_3711_:
{
lean_object* v___x_3714_; 
if (v_isShared_3694_ == 0)
{
lean_ctor_set(v___x_3693_, 0, v___x_3712_);
v___x_3714_ = v___x_3693_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v___x_3712_);
v___x_3714_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
return v___x_3714_;
}
}
}
}
}
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
lean_dec(v___y_3689_);
v_a_3719_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3690_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3690_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed(lean_object* v_f_3749_, lean_object* v_decl_3750_, lean_object* v_ci_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_){
_start:
{
lean_object* v_res_3761_; 
v_res_3761_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0(v_f_3749_, v_decl_3750_, v_ci_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_, v___y_3757_, v___y_3758_, v___y_3759_);
lean_dec(v___y_3759_);
lean_dec_ref(v___y_3758_);
lean_dec(v___y_3757_);
lean_dec_ref(v___y_3756_);
lean_dec_ref(v___y_3755_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
lean_dec(v___y_3752_);
return v_res_3761_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(lean_object* v_f_3762_, lean_object* v_x_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_){
_start:
{
lean_object* v___x_3775_; 
lean_inc(v___y_3773_);
lean_inc_ref(v___y_3772_);
lean_inc(v___y_3771_);
lean_inc_ref(v___y_3770_);
lean_inc_ref(v___y_3769_);
lean_inc(v___y_3768_);
lean_inc_ref(v___y_3767_);
v___x_3775_ = lean_apply_11(v_f_3762_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_, lean_box(0));
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed(lean_object* v_f_3776_, lean_object* v_x_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0(v_f_3776_, v_x_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec_ref(v___y_3783_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(lean_object* v_f_3790_, lean_object* v_keys_3791_, lean_object* v_vals_3792_, lean_object* v_i_3793_, lean_object* v_acc_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_){
_start:
{
lean_object* v___x_3804_; uint8_t v___x_3805_; 
v___x_3804_ = lean_array_get_size(v_keys_3791_);
v___x_3805_ = lean_nat_dec_lt(v_i_3793_, v___x_3804_);
if (v___x_3805_ == 0)
{
lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; 
lean_dec(v_i_3793_);
lean_dec_ref(v_f_3790_);
v___x_3806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3806_, 0, v_acc_3794_);
lean_ctor_set(v___x_3806_, 1, v___y_3795_);
v___x_3807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3806_);
v___x_3808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3808_, 0, v___x_3807_);
return v___x_3808_;
}
else
{
lean_object* v_k_3809_; lean_object* v_v_3810_; lean_object* v___x_3811_; 
v_k_3809_ = lean_array_fget_borrowed(v_keys_3791_, v_i_3793_);
v_v_3810_ = lean_array_fget_borrowed(v_vals_3792_, v_i_3793_);
lean_inc_ref(v_f_3790_);
lean_inc(v___y_3802_);
lean_inc_ref(v___y_3801_);
lean_inc(v___y_3800_);
lean_inc_ref(v___y_3799_);
lean_inc_ref(v___y_3798_);
lean_inc(v___y_3797_);
lean_inc_ref(v___y_3796_);
lean_inc(v_v_3810_);
lean_inc(v_k_3809_);
v___x_3811_ = lean_apply_12(v_f_3790_, v_acc_3794_, v_k_3809_, v_v_3810_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, lean_box(0));
if (lean_obj_tag(v___x_3811_) == 0)
{
lean_object* v_a_3812_; 
v_a_3812_ = lean_ctor_get(v___x_3811_, 0);
lean_inc(v_a_3812_);
if (lean_obj_tag(v_a_3812_) == 0)
{
lean_dec_ref(v_a_3812_);
lean_dec(v_i_3793_);
lean_dec_ref(v_f_3790_);
return v___x_3811_;
}
else
{
lean_object* v_a_3813_; lean_object* v_fst_3814_; lean_object* v_snd_3815_; lean_object* v___x_3816_; lean_object* v___x_3817_; 
lean_dec_ref(v___x_3811_);
v_a_3813_ = lean_ctor_get(v_a_3812_, 0);
lean_inc(v_a_3813_);
lean_dec_ref(v_a_3812_);
v_fst_3814_ = lean_ctor_get(v_a_3813_, 0);
lean_inc(v_fst_3814_);
v_snd_3815_ = lean_ctor_get(v_a_3813_, 1);
lean_inc(v_snd_3815_);
lean_dec(v_a_3813_);
v___x_3816_ = lean_unsigned_to_nat(1u);
v___x_3817_ = lean_nat_add(v_i_3793_, v___x_3816_);
lean_dec(v_i_3793_);
v_i_3793_ = v___x_3817_;
v_acc_3794_ = v_fst_3814_;
v___y_3795_ = v_snd_3815_;
goto _start;
}
}
else
{
lean_dec(v_i_3793_);
lean_dec_ref(v_f_3790_);
return v___x_3811_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg___boxed(lean_object* v_f_3819_, lean_object* v_keys_3820_, lean_object* v_vals_3821_, lean_object* v_i_3822_, lean_object* v_acc_3823_, lean_object* v___y_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_){
_start:
{
lean_object* v_res_3833_; 
v_res_3833_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_3819_, v_keys_3820_, v_vals_3821_, v_i_3822_, v_acc_3823_, v___y_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
lean_dec(v___y_3829_);
lean_dec_ref(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec_ref(v_vals_3821_);
lean_dec_ref(v_keys_3820_);
return v_res_3833_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(lean_object* v_f_3834_, lean_object* v_x_3835_, lean_object* v_x_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_){
_start:
{
if (lean_obj_tag(v_x_3835_) == 0)
{
lean_object* v_es_3846_; lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3870_; 
v_es_3846_ = lean_ctor_get(v_x_3835_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v_x_3835_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3848_ = v_x_3835_;
v_isShared_3849_ = v_isSharedCheck_3870_;
goto v_resetjp_3847_;
}
else
{
lean_inc(v_es_3846_);
lean_dec(v_x_3835_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3870_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; uint8_t v___x_3852_; 
v___x_3850_ = lean_unsigned_to_nat(0u);
v___x_3851_ = lean_array_get_size(v_es_3846_);
v___x_3852_ = lean_nat_dec_lt(v___x_3850_, v___x_3851_);
if (v___x_3852_ == 0)
{
lean_object* v___x_3853_; lean_object* v___x_3855_; 
lean_dec_ref(v_es_3846_);
lean_dec_ref(v_f_3834_);
v___x_3853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3853_, 0, v_x_3836_);
lean_ctor_set(v___x_3853_, 1, v___y_3837_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set_tag(v___x_3848_, 1);
lean_ctor_set(v___x_3848_, 0, v___x_3853_);
v___x_3855_ = v___x_3848_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3857_; 
v_reuseFailAlloc_3857_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3857_, 0, v___x_3853_);
v___x_3855_ = v_reuseFailAlloc_3857_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
lean_object* v___x_3856_; 
v___x_3856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3856_, 0, v___x_3855_);
return v___x_3856_;
}
}
else
{
uint8_t v___x_3858_; 
v___x_3858_ = lean_nat_dec_le(v___x_3851_, v___x_3851_);
if (v___x_3858_ == 0)
{
if (v___x_3852_ == 0)
{
lean_object* v___x_3859_; lean_object* v___x_3861_; 
lean_dec_ref(v_es_3846_);
lean_dec_ref(v_f_3834_);
v___x_3859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3859_, 0, v_x_3836_);
lean_ctor_set(v___x_3859_, 1, v___y_3837_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set_tag(v___x_3848_, 1);
lean_ctor_set(v___x_3848_, 0, v___x_3859_);
v___x_3861_ = v___x_3848_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3859_);
v___x_3861_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
lean_object* v___x_3862_; 
v___x_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3862_, 0, v___x_3861_);
return v___x_3862_;
}
}
else
{
size_t v___x_3864_; size_t v___x_3865_; lean_object* v___x_3866_; 
lean_del_object(v___x_3848_);
v___x_3864_ = ((size_t)0ULL);
v___x_3865_ = lean_usize_of_nat(v___x_3851_);
v___x_3866_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_3834_, v_es_3846_, v___x_3864_, v___x_3865_, v_x_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
lean_dec_ref(v_es_3846_);
return v___x_3866_;
}
}
else
{
size_t v___x_3867_; size_t v___x_3868_; lean_object* v___x_3869_; 
lean_del_object(v___x_3848_);
v___x_3867_ = ((size_t)0ULL);
v___x_3868_ = lean_usize_of_nat(v___x_3851_);
v___x_3869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_3834_, v_es_3846_, v___x_3867_, v___x_3868_, v_x_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
lean_dec_ref(v_es_3846_);
return v___x_3869_;
}
}
}
}
else
{
lean_object* v_ks_3871_; lean_object* v_vs_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; 
v_ks_3871_ = lean_ctor_get(v_x_3835_, 0);
lean_inc_ref(v_ks_3871_);
v_vs_3872_ = lean_ctor_get(v_x_3835_, 1);
lean_inc_ref(v_vs_3872_);
lean_dec_ref(v_x_3835_);
v___x_3873_ = lean_unsigned_to_nat(0u);
v___x_3874_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_3834_, v_ks_3871_, v_vs_3872_, v___x_3873_, v_x_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
lean_dec_ref(v_vs_3872_);
lean_dec_ref(v_ks_3871_);
return v___x_3874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(lean_object* v_f_3875_, lean_object* v_as_3876_, size_t v_i_3877_, size_t v_stop_3878_, lean_object* v_b_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_){
_start:
{
lean_object* v_fst_3890_; lean_object* v_snd_3891_; lean_object* v___y_3896_; uint8_t v___x_3901_; 
v___x_3901_ = lean_usize_dec_eq(v_i_3877_, v_stop_3878_);
if (v___x_3901_ == 0)
{
lean_object* v___x_3902_; 
v___x_3902_ = lean_array_uget_borrowed(v_as_3876_, v_i_3877_);
switch(lean_obj_tag(v___x_3902_))
{
case 0:
{
lean_object* v_key_3903_; lean_object* v_val_3904_; lean_object* v___x_3905_; 
v_key_3903_ = lean_ctor_get(v___x_3902_, 0);
v_val_3904_ = lean_ctor_get(v___x_3902_, 1);
lean_inc_ref(v_f_3875_);
lean_inc(v___y_3887_);
lean_inc_ref(v___y_3886_);
lean_inc(v___y_3885_);
lean_inc_ref(v___y_3884_);
lean_inc_ref(v___y_3883_);
lean_inc(v___y_3882_);
lean_inc_ref(v___y_3881_);
lean_inc(v_val_3904_);
lean_inc(v_key_3903_);
v___x_3905_ = lean_apply_12(v_f_3875_, v_b_3879_, v_key_3903_, v_val_3904_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_, lean_box(0));
v___y_3896_ = v___x_3905_;
goto v___jp_3895_;
}
case 1:
{
lean_object* v_node_3906_; lean_object* v___x_3907_; 
v_node_3906_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_node_3906_);
lean_inc_ref(v_f_3875_);
v___x_3907_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_3875_, v_node_3906_, v_b_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
v___y_3896_ = v___x_3907_;
goto v___jp_3895_;
}
default: 
{
v_fst_3890_ = v_b_3879_;
v_snd_3891_ = v___y_3880_;
goto v___jp_3889_;
}
}
}
else
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; 
lean_dec_ref(v_f_3875_);
v___x_3908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3908_, 0, v_b_3879_);
lean_ctor_set(v___x_3908_, 1, v___y_3880_);
v___x_3909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3909_, 0, v___x_3908_);
v___x_3910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3909_);
return v___x_3910_;
}
v___jp_3889_:
{
size_t v___x_3892_; size_t v___x_3893_; 
v___x_3892_ = ((size_t)1ULL);
v___x_3893_ = lean_usize_add(v_i_3877_, v___x_3892_);
v_i_3877_ = v___x_3893_;
v_b_3879_ = v_fst_3890_;
v___y_3880_ = v_snd_3891_;
goto _start;
}
v___jp_3895_:
{
if (lean_obj_tag(v___y_3896_) == 0)
{
lean_object* v_a_3897_; 
v_a_3897_ = lean_ctor_get(v___y_3896_, 0);
if (lean_obj_tag(v_a_3897_) == 0)
{
lean_dec_ref(v_f_3875_);
return v___y_3896_;
}
else
{
lean_object* v_a_3898_; lean_object* v_fst_3899_; lean_object* v_snd_3900_; 
lean_inc_ref(v_a_3897_);
lean_dec_ref(v___y_3896_);
v_a_3898_ = lean_ctor_get(v_a_3897_, 0);
lean_inc(v_a_3898_);
lean_dec_ref(v_a_3897_);
v_fst_3899_ = lean_ctor_get(v_a_3898_, 0);
lean_inc(v_fst_3899_);
v_snd_3900_ = lean_ctor_get(v_a_3898_, 1);
lean_inc(v_snd_3900_);
lean_dec(v_a_3898_);
v_fst_3890_ = v_fst_3899_;
v_snd_3891_ = v_snd_3900_;
goto v___jp_3889_;
}
}
else
{
lean_dec_ref(v_f_3875_);
return v___y_3896_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg___boxed(lean_object* v_f_3911_, lean_object* v_as_3912_, lean_object* v_i_3913_, lean_object* v_stop_3914_, lean_object* v_b_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_){
_start:
{
size_t v_i_boxed_3925_; size_t v_stop_boxed_3926_; lean_object* v_res_3927_; 
v_i_boxed_3925_ = lean_unbox_usize(v_i_3913_);
lean_dec(v_i_3913_);
v_stop_boxed_3926_ = lean_unbox_usize(v_stop_3914_);
lean_dec(v_stop_3914_);
v_res_3927_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_3911_, v_as_3912_, v_i_boxed_3925_, v_stop_boxed_3926_, v_b_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_, v___y_3920_, v___y_3921_, v___y_3922_, v___y_3923_);
lean_dec(v___y_3923_);
lean_dec_ref(v___y_3922_);
lean_dec(v___y_3921_);
lean_dec_ref(v___y_3920_);
lean_dec_ref(v___y_3919_);
lean_dec(v___y_3918_);
lean_dec_ref(v___y_3917_);
lean_dec_ref(v_as_3912_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg___boxed(lean_object* v_f_3928_, lean_object* v_x_3929_, lean_object* v_x_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_){
_start:
{
lean_object* v_res_3940_; 
v_res_3940_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_3928_, v_x_3929_, v_x_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_);
lean_dec(v___y_3938_);
lean_dec_ref(v___y_3937_);
lean_dec(v___y_3936_);
lean_dec_ref(v___y_3935_);
lean_dec_ref(v___y_3934_);
lean_dec(v___y_3933_);
lean_dec_ref(v___y_3932_);
return v_res_3940_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(lean_object* v_map_3941_, lean_object* v_f_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_){
_start:
{
lean_object* v___f_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___f_3952_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___lam__0___boxed), 13, 1);
lean_closure_set(v___f_3952_, 0, v_f_3942_);
v___x_3953_ = lean_box(0);
v___x_3954_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v___f_3952_, v_map_3941_, v___x_3953_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_, v___y_3949_, v___y_3950_);
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_map_3955_, lean_object* v_f_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_){
_start:
{
lean_object* v_res_3966_; 
v_res_3966_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_3955_, v_f_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
lean_dec(v___y_3964_);
lean_dec_ref(v___y_3963_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
return v_res_3966_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(lean_object* v_f_3967_, lean_object* v_x_3968_, lean_object* v_x_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_){
_start:
{
if (lean_obj_tag(v_x_3969_) == 0)
{
lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; 
lean_dec_ref(v_f_3967_);
v___x_3979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3979_, 0, v_x_3968_);
lean_ctor_set(v___x_3979_, 1, v___y_3970_);
v___x_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3980_, 0, v___x_3979_);
v___x_3981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3981_, 0, v___x_3980_);
return v___x_3981_;
}
else
{
lean_object* v_key_3982_; lean_object* v_value_3983_; lean_object* v_tail_3984_; lean_object* v___x_3985_; 
v_key_3982_ = lean_ctor_get(v_x_3969_, 0);
lean_inc(v_key_3982_);
v_value_3983_ = lean_ctor_get(v_x_3969_, 1);
lean_inc(v_value_3983_);
v_tail_3984_ = lean_ctor_get(v_x_3969_, 2);
lean_inc(v_tail_3984_);
lean_dec_ref(v_x_3969_);
lean_inc_ref(v_f_3967_);
lean_inc(v___y_3977_);
lean_inc_ref(v___y_3976_);
lean_inc(v___y_3975_);
lean_inc_ref(v___y_3974_);
lean_inc_ref(v___y_3973_);
lean_inc(v___y_3972_);
lean_inc_ref(v___y_3971_);
v___x_3985_ = lean_apply_11(v_f_3967_, v_key_3982_, v_value_3983_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_, v___y_3977_, lean_box(0));
if (lean_obj_tag(v___x_3985_) == 0)
{
lean_object* v_a_3986_; 
v_a_3986_ = lean_ctor_get(v___x_3985_, 0);
lean_inc(v_a_3986_);
if (lean_obj_tag(v_a_3986_) == 0)
{
lean_dec_ref(v_a_3986_);
lean_dec(v_tail_3984_);
lean_dec_ref(v_f_3967_);
return v___x_3985_;
}
else
{
lean_object* v_a_3987_; lean_object* v_fst_3988_; lean_object* v_snd_3989_; 
lean_dec_ref(v___x_3985_);
v_a_3987_ = lean_ctor_get(v_a_3986_, 0);
lean_inc(v_a_3987_);
lean_dec_ref(v_a_3986_);
v_fst_3988_ = lean_ctor_get(v_a_3987_, 0);
lean_inc(v_fst_3988_);
v_snd_3989_ = lean_ctor_get(v_a_3987_, 1);
lean_inc(v_snd_3989_);
lean_dec(v_a_3987_);
v_x_3968_ = v_fst_3988_;
v_x_3969_ = v_tail_3984_;
v___y_3970_ = v_snd_3989_;
goto _start;
}
}
else
{
lean_dec(v_tail_3984_);
lean_dec_ref(v_f_3967_);
return v___x_3985_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2___boxed(lean_object* v_f_3991_, lean_object* v_x_3992_, lean_object* v_x_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_){
_start:
{
lean_object* v_res_4003_; 
v_res_4003_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_3991_, v_x_3992_, v_x_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_);
lean_dec(v___y_4001_);
lean_dec_ref(v___y_4000_);
lean_dec(v___y_3999_);
lean_dec_ref(v___y_3998_);
lean_dec_ref(v___y_3997_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
return v_res_4003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(lean_object* v_f_4004_, lean_object* v_as_4005_, size_t v_i_4006_, size_t v_stop_4007_, lean_object* v_b_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_){
_start:
{
uint8_t v___x_4018_; 
v___x_4018_ = lean_usize_dec_eq(v_i_4006_, v_stop_4007_);
if (v___x_4018_ == 0)
{
lean_object* v___x_4019_; lean_object* v___x_4020_; lean_object* v___x_4021_; 
v___x_4019_ = lean_array_uget_borrowed(v_as_4005_, v_i_4006_);
v___x_4020_ = lean_box(0);
lean_inc(v___x_4019_);
lean_inc_ref(v_f_4004_);
v___x_4021_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__2(v_f_4004_, v___x_4020_, v___x_4019_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
lean_inc(v_a_4022_);
if (lean_obj_tag(v_a_4022_) == 0)
{
lean_dec_ref(v_a_4022_);
lean_dec_ref(v_f_4004_);
return v___x_4021_;
}
else
{
lean_object* v_a_4023_; lean_object* v_fst_4024_; lean_object* v_snd_4025_; size_t v___x_4026_; size_t v___x_4027_; 
lean_dec_ref(v___x_4021_);
v_a_4023_ = lean_ctor_get(v_a_4022_, 0);
lean_inc(v_a_4023_);
lean_dec_ref(v_a_4022_);
v_fst_4024_ = lean_ctor_get(v_a_4023_, 0);
lean_inc(v_fst_4024_);
v_snd_4025_ = lean_ctor_get(v_a_4023_, 1);
lean_inc(v_snd_4025_);
lean_dec(v_a_4023_);
v___x_4026_ = ((size_t)1ULL);
v___x_4027_ = lean_usize_add(v_i_4006_, v___x_4026_);
v_i_4006_ = v___x_4027_;
v_b_4008_ = v_fst_4024_;
v___y_4009_ = v_snd_4025_;
goto _start;
}
}
else
{
lean_dec_ref(v_f_4004_);
return v___x_4021_;
}
}
else
{
lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; 
lean_dec_ref(v_f_4004_);
v___x_4029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4029_, 0, v_b_4008_);
lean_ctor_set(v___x_4029_, 1, v___y_4009_);
v___x_4030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4029_);
v___x_4031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4031_, 0, v___x_4030_);
return v___x_4031_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4___boxed(lean_object* v_f_4032_, lean_object* v_as_4033_, lean_object* v_i_4034_, lean_object* v_stop_4035_, lean_object* v_b_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
size_t v_i_boxed_4046_; size_t v_stop_boxed_4047_; lean_object* v_res_4048_; 
v_i_boxed_4046_ = lean_unbox_usize(v_i_4034_);
lean_dec(v_i_4034_);
v_stop_boxed_4047_ = lean_unbox_usize(v_stop_4035_);
lean_dec(v_stop_4035_);
v_res_4048_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_4032_, v_as_4033_, v_i_boxed_4046_, v_stop_boxed_4047_, v_b_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_);
lean_dec(v___y_4044_);
lean_dec_ref(v___y_4043_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v___y_4038_);
lean_dec_ref(v_as_4033_);
return v_res_4048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(lean_object* v_env_4049_, lean_object* v_f_4050_, lean_object* v_name_4051_, lean_object* v_c_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_){
_start:
{
uint8_t v___x_4062_; 
lean_inc(v_name_4051_);
v___x_4062_ = l_Lean_Meta_allowCompletion(v_env_4049_, v_name_4051_);
if (v___x_4062_ == 0)
{
lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
lean_dec_ref(v_c_4052_);
lean_dec(v_name_4051_);
lean_dec_ref(v_f_4050_);
v___x_4063_ = lean_box(0);
v___x_4064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4064_, 0, v___x_4063_);
lean_ctor_set(v___x_4064_, 1, v___y_4053_);
v___x_4065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
v___x_4066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4065_);
return v___x_4066_;
}
else
{
lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; 
lean_inc_ref(v_c_4052_);
v___x_4067_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionKindForDecl___boxed), 6, 1);
lean_closure_set(v___x_4067_, 0, v_c_4052_);
lean_inc(v_name_4051_);
v___x_4068_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_getCompletionTagsForDecl___boxed), 6, 1);
lean_closure_set(v___x_4068_, 0, v_name_4051_);
v___x_4069_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4069_, 0, v_c_4052_);
lean_ctor_set(v___x_4069_, 1, v___x_4067_);
lean_ctor_set(v___x_4069_, 2, v___x_4068_);
lean_inc(v___y_4060_);
lean_inc_ref(v___y_4059_);
lean_inc(v___y_4058_);
lean_inc_ref(v___y_4057_);
lean_inc_ref(v___y_4056_);
lean_inc(v___y_4055_);
lean_inc_ref(v___y_4054_);
v___x_4070_ = lean_apply_11(v_f_4050_, v_name_4051_, v___x_4069_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_, v___y_4059_, v___y_4060_, lean_box(0));
return v___x_4070_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed(lean_object* v_env_4071_, lean_object* v_f_4072_, lean_object* v_name_4073_, lean_object* v_c_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_){
_start:
{
lean_object* v_res_4084_; 
v_res_4084_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0(v_env_4071_, v_f_4072_, v_name_4073_, v_c_4074_, v___y_4075_, v___y_4076_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
lean_dec_ref(v___y_4078_);
lean_dec(v___y_4077_);
lean_dec_ref(v___y_4076_);
return v_res_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(lean_object* v_f_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_){
_start:
{
lean_object* v___x_4095_; lean_object* v_env_4096_; lean_object* v___x_4097_; 
v___x_4095_ = lean_st_ref_get(v___y_4093_);
v_env_4096_ = lean_ctor_get(v___x_4095_, 0);
lean_inc_ref_n(v_env_4096_, 2);
lean_dec(v___x_4095_);
v___x_4097_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_4096_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_);
if (lean_obj_tag(v___x_4097_) == 0)
{
lean_object* v_a_4098_; lean_object* v_buckets_4099_; lean_object* v___f_4100_; lean_object* v___y_4102_; lean_object* v___y_4103_; lean_object* v___y_4104_; lean_object* v___y_4105_; lean_object* v___y_4106_; lean_object* v___y_4107_; lean_object* v___y_4108_; lean_object* v___y_4109_; lean_object* v___x_4113_; lean_object* v___x_4114_; uint8_t v___x_4115_; 
v_a_4098_ = lean_ctor_get(v___x_4097_, 0);
lean_inc(v_a_4098_);
lean_dec_ref(v___x_4097_);
v_buckets_4099_ = lean_ctor_get(v_a_4098_, 1);
lean_inc_ref(v_buckets_4099_);
lean_dec(v_a_4098_);
lean_inc_ref(v_f_4085_);
lean_inc_ref(v_env_4096_);
v___f_4100_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___lam__0___boxed), 13, 2);
lean_closure_set(v___f_4100_, 0, v_env_4096_);
lean_closure_set(v___f_4100_, 1, v_f_4085_);
v___x_4113_ = lean_unsigned_to_nat(0u);
v___x_4114_ = lean_array_get_size(v_buckets_4099_);
v___x_4115_ = lean_nat_dec_lt(v___x_4113_, v___x_4114_);
if (v___x_4115_ == 0)
{
lean_object* v___x_4116_; lean_object* v_map_u2082_4117_; lean_object* v___x_4118_; 
lean_dec_ref(v_buckets_4099_);
lean_dec_ref(v_f_4085_);
v___x_4116_ = l_Lean_Environment_constants(v_env_4096_);
v_map_u2082_4117_ = lean_ctor_get(v___x_4116_, 1);
lean_inc_ref(v_map_u2082_4117_);
lean_dec_ref(v___x_4116_);
v___x_4118_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_4117_, v___f_4100_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_);
return v___x_4118_;
}
else
{
lean_object* v___x_4119_; uint8_t v___x_4120_; 
v___x_4119_ = lean_box(0);
v___x_4120_ = lean_nat_dec_le(v___x_4114_, v___x_4114_);
if (v___x_4120_ == 0)
{
if (v___x_4115_ == 0)
{
lean_dec_ref(v_buckets_4099_);
lean_dec_ref(v_f_4085_);
v___y_4102_ = v___y_4086_;
v___y_4103_ = v___y_4087_;
v___y_4104_ = v___y_4088_;
v___y_4105_ = v___y_4089_;
v___y_4106_ = v___y_4090_;
v___y_4107_ = v___y_4091_;
v___y_4108_ = v___y_4092_;
v___y_4109_ = v___y_4093_;
goto v___jp_4101_;
}
else
{
size_t v___x_4121_; size_t v___x_4122_; lean_object* v___x_4123_; 
v___x_4121_ = ((size_t)0ULL);
v___x_4122_ = lean_usize_of_nat(v___x_4114_);
v___x_4123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_4085_, v_buckets_4099_, v___x_4121_, v___x_4122_, v___x_4119_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_);
lean_dec_ref(v_buckets_4099_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
lean_inc(v_a_4124_);
if (lean_obj_tag(v_a_4124_) == 0)
{
lean_dec_ref(v_a_4124_);
lean_dec_ref(v___f_4100_);
lean_dec_ref(v_env_4096_);
return v___x_4123_;
}
else
{
lean_object* v_a_4125_; lean_object* v_snd_4126_; 
lean_dec_ref(v___x_4123_);
v_a_4125_ = lean_ctor_get(v_a_4124_, 0);
lean_inc(v_a_4125_);
lean_dec_ref(v_a_4124_);
v_snd_4126_ = lean_ctor_get(v_a_4125_, 1);
lean_inc(v_snd_4126_);
lean_dec(v_a_4125_);
v___y_4102_ = v_snd_4126_;
v___y_4103_ = v___y_4087_;
v___y_4104_ = v___y_4088_;
v___y_4105_ = v___y_4089_;
v___y_4106_ = v___y_4090_;
v___y_4107_ = v___y_4091_;
v___y_4108_ = v___y_4092_;
v___y_4109_ = v___y_4093_;
goto v___jp_4101_;
}
}
else
{
lean_dec_ref(v___f_4100_);
lean_dec_ref(v_env_4096_);
return v___x_4123_;
}
}
}
else
{
size_t v___x_4127_; size_t v___x_4128_; lean_object* v___x_4129_; 
v___x_4127_ = ((size_t)0ULL);
v___x_4128_ = lean_usize_of_nat(v___x_4114_);
v___x_4129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__4(v_f_4085_, v_buckets_4099_, v___x_4127_, v___x_4128_, v___x_4119_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_);
lean_dec_ref(v_buckets_4099_);
if (lean_obj_tag(v___x_4129_) == 0)
{
lean_object* v_a_4130_; 
v_a_4130_ = lean_ctor_get(v___x_4129_, 0);
lean_inc(v_a_4130_);
if (lean_obj_tag(v_a_4130_) == 0)
{
lean_dec_ref(v_a_4130_);
lean_dec_ref(v___f_4100_);
lean_dec_ref(v_env_4096_);
return v___x_4129_;
}
else
{
lean_object* v_a_4131_; lean_object* v_snd_4132_; 
lean_dec_ref(v___x_4129_);
v_a_4131_ = lean_ctor_get(v_a_4130_, 0);
lean_inc(v_a_4131_);
lean_dec_ref(v_a_4130_);
v_snd_4132_ = lean_ctor_get(v_a_4131_, 1);
lean_inc(v_snd_4132_);
lean_dec(v_a_4131_);
v___y_4102_ = v_snd_4132_;
v___y_4103_ = v___y_4087_;
v___y_4104_ = v___y_4088_;
v___y_4105_ = v___y_4089_;
v___y_4106_ = v___y_4090_;
v___y_4107_ = v___y_4091_;
v___y_4108_ = v___y_4092_;
v___y_4109_ = v___y_4093_;
goto v___jp_4101_;
}
}
else
{
lean_dec_ref(v___f_4100_);
lean_dec_ref(v_env_4096_);
return v___x_4129_;
}
}
}
v___jp_4101_:
{
lean_object* v___x_4110_; lean_object* v_map_u2082_4111_; lean_object* v___x_4112_; 
v___x_4110_ = l_Lean_Environment_constants(v_env_4096_);
v_map_u2082_4111_ = lean_ctor_get(v___x_4110_, 1);
lean_inc_ref(v_map_u2082_4111_);
lean_dec_ref(v___x_4110_);
v___x_4112_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_u2082_4111_, v___f_4100_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
return v___x_4112_;
}
}
else
{
lean_object* v_a_4133_; lean_object* v___x_4135_; uint8_t v_isShared_4136_; uint8_t v_isSharedCheck_4140_; 
lean_dec_ref(v_env_4096_);
lean_dec(v___y_4086_);
lean_dec_ref(v_f_4085_);
v_a_4133_ = lean_ctor_get(v___x_4097_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4097_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4135_ = v___x_4097_;
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
else
{
lean_inc(v_a_4133_);
lean_dec(v___x_4097_);
v___x_4135_ = lean_box(0);
v_isShared_4136_ = v_isSharedCheck_4140_;
goto v_resetjp_4134_;
}
v_resetjp_4134_:
{
lean_object* v___x_4138_; 
if (v_isShared_4136_ == 0)
{
v___x_4138_ = v___x_4135_;
goto v_reusejp_4137_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v_a_4133_);
v___x_4138_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4137_;
}
v_reusejp_4137_:
{
return v___x_4138_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0___boxed(lean_object* v_f_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v_f_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
lean_dec_ref(v___y_4145_);
lean_dec(v___y_4144_);
lean_dec_ref(v___y_4143_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(lean_object* v_f_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_){
_start:
{
lean_object* v___f_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; 
v___f_4161_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___lam__0___boxed), 12, 1);
lean_closure_set(v___f_4161_, 0, v_f_4152_);
v___x_4162_ = lean_unsigned_to_nat(0u);
v___x_4163_ = l_Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0(v___f_4161_, v___x_4162_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4183_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4166_ = v___x_4163_;
v_isShared_4167_ = v_isSharedCheck_4183_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v___x_4163_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4183_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
if (lean_obj_tag(v_a_4164_) == 0)
{
lean_object* v_a_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4178_; 
v_a_4168_ = lean_ctor_get(v_a_4164_, 0);
v_isSharedCheck_4178_ = !lean_is_exclusive(v_a_4164_);
if (v_isSharedCheck_4178_ == 0)
{
v___x_4170_ = v_a_4164_;
v_isShared_4171_ = v_isSharedCheck_4178_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_a_4168_);
lean_dec(v_a_4164_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4178_;
goto v_resetjp_4169_;
}
v_resetjp_4169_:
{
lean_object* v___x_4173_; 
if (v_isShared_4171_ == 0)
{
v___x_4173_ = v___x_4170_;
goto v_reusejp_4172_;
}
else
{
lean_object* v_reuseFailAlloc_4177_; 
v_reuseFailAlloc_4177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4177_, 0, v_a_4168_);
v___x_4173_ = v_reuseFailAlloc_4177_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
lean_object* v___x_4175_; 
if (v_isShared_4167_ == 0)
{
lean_ctor_set(v___x_4166_, 0, v___x_4173_);
v___x_4175_ = v___x_4166_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v___x_4173_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
}
else
{
lean_object* v___x_4179_; lean_object* v___x_4181_; 
lean_dec_ref(v_a_4164_);
v___x_4179_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_4167_ == 0)
{
lean_ctor_set(v___x_4166_, 0, v___x_4179_);
v___x_4181_ = v___x_4166_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v___x_4179_);
v___x_4181_ = v_reuseFailAlloc_4182_;
goto v_reusejp_4180_;
}
v_reusejp_4180_:
{
return v___x_4181_;
}
}
}
}
else
{
lean_object* v_a_4184_; lean_object* v___x_4186_; uint8_t v_isShared_4187_; uint8_t v_isSharedCheck_4191_; 
v_a_4184_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4186_ = v___x_4163_;
v_isShared_4187_ = v_isSharedCheck_4191_;
goto v_resetjp_4185_;
}
else
{
lean_inc(v_a_4184_);
lean_dec(v___x_4163_);
v___x_4186_ = lean_box(0);
v_isShared_4187_ = v_isSharedCheck_4191_;
goto v_resetjp_4185_;
}
v_resetjp_4185_:
{
lean_object* v___x_4189_; 
if (v_isShared_4187_ == 0)
{
v___x_4189_ = v___x_4186_;
goto v_reusejp_4188_;
}
else
{
lean_object* v_reuseFailAlloc_4190_; 
v_reuseFailAlloc_4190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4190_, 0, v_a_4184_);
v___x_4189_ = v_reuseFailAlloc_4190_;
goto v_reusejp_4188_;
}
v_reusejp_4188_:
{
return v___x_4189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0___boxed(lean_object* v_f_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_, lean_object* v___y_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_){
_start:
{
lean_object* v_res_4201_; 
v_res_4201_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v_f_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_, v___y_4197_, v___y_4198_, v___y_4199_);
lean_dec(v___y_4199_);
lean_dec_ref(v___y_4198_);
lean_dec(v___y_4197_);
lean_dec_ref(v___y_4196_);
lean_dec_ref(v___y_4195_);
lean_dec(v___y_4194_);
lean_dec_ref(v___y_4193_);
return v_res_4201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(lean_object* v_ctx_4202_, lean_object* v_stx_4203_, lean_object* v_id_4204_, lean_object* v_hoverInfo_4205_, uint8_t v_danglingDot_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_, lean_object* v_a_4210_, lean_object* v_a_4211_, lean_object* v_a_4212_, lean_object* v_a_4213_){
_start:
{
lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; lean_object* v___y_4219_; uint8_t v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v_id_4267_; uint8_t v_danglingDot_4268_; lean_object* v___y_4269_; lean_object* v___y_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v_id_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___y_4293_; lean_object* v___y_4294_; uint8_t v___x_4298_; 
v___x_4298_ = l_Lean_Name_hasMacroScopes(v_id_4204_);
if (v___x_4298_ == 0)
{
v_id_4287_ = v_id_4204_;
v___y_4288_ = v_a_4207_;
v___y_4289_ = v_a_4208_;
v___y_4290_ = v_a_4209_;
v___y_4291_ = v_a_4210_;
v___y_4292_ = v_a_4211_;
v___y_4293_ = v_a_4212_;
v___y_4294_ = v_a_4213_;
goto v___jp_4286_;
}
else
{
lean_object* v___x_4299_; 
v___x_4299_ = l_Lean_Syntax_getHeadInfo(v_stx_4203_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_object* v_id_4300_; 
lean_dec_ref(v___x_4299_);
v_id_4300_ = lean_erase_macro_scopes(v_id_4204_);
v_id_4287_ = v_id_4300_;
v___y_4288_ = v_a_4207_;
v___y_4289_ = v_a_4208_;
v___y_4290_ = v_a_4209_;
v___y_4291_ = v_a_4210_;
v___y_4292_ = v_a_4211_;
v___y_4293_ = v_a_4212_;
v___y_4294_ = v_a_4213_;
goto v___jp_4286_;
}
else
{
lean_object* v___x_4301_; lean_object* v___x_4302_; 
lean_dec(v___x_4299_);
lean_dec(v_hoverInfo_4205_);
lean_dec(v_id_4204_);
lean_dec_ref(v_ctx_4202_);
v___x_4301_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_4302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4301_);
return v___x_4302_;
}
}
v___jp_4215_:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4227_ = lean_st_ref_get(v___y_4218_);
v___x_4228_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___y_4219_, v___y_4217_, v___y_4222_, v___y_4221_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
if (lean_obj_tag(v___x_4228_) == 0)
{
lean_object* v_a_4229_; 
v_a_4229_ = lean_ctor_get(v___x_4228_, 0);
lean_inc(v_a_4229_);
if (lean_obj_tag(v_a_4229_) == 0)
{
lean_dec_ref(v_a_4229_);
lean_dec(v___x_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v_ctx_4202_);
return v___x_4228_;
}
else
{
lean_object* v___x_4230_; lean_object* v_a_4231_; 
lean_dec_ref(v_a_4229_);
lean_dec_ref(v___x_4228_);
v___x_4230_ = l_Lean_Server_CancellableT_checkCancelled___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__1___redArg(v___y_4221_, v___y_4218_);
v_a_4231_ = lean_ctor_get(v___x_4230_, 0);
lean_inc(v_a_4231_);
if (lean_obj_tag(v_a_4231_) == 0)
{
lean_dec_ref(v_a_4231_);
lean_dec(v___x_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v_ctx_4202_);
return v___x_4230_;
}
else
{
lean_object* v_env_4232_; lean_object* v___x_4233_; 
lean_dec_ref(v_a_4231_);
lean_dec_ref(v___x_4230_);
v_env_4232_ = lean_ctor_get(v___x_4227_, 0);
lean_inc_ref_n(v_env_4232_, 2);
lean_dec(v___x_4227_);
v___x_4233_ = l_Lean_Server_Completion_getEligibleHeaderDecls(v_env_4232_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
if (lean_obj_tag(v___x_4233_) == 0)
{
lean_object* v_toCommandContextInfo_4234_; lean_object* v_a_4235_; lean_object* v_currNamespace_4236_; lean_object* v_openDecls_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; 
v_toCommandContextInfo_4234_ = lean_ctor_get(v_ctx_4202_, 0);
v_a_4235_ = lean_ctor_get(v___x_4233_, 0);
lean_inc_n(v_a_4235_, 2);
lean_dec_ref(v___x_4233_);
v_currNamespace_4236_ = lean_ctor_get(v_toCommandContextInfo_4234_, 5);
v_openDecls_4237_ = lean_ctor_get(v_toCommandContextInfo_4234_, 6);
v___x_4238_ = lean_box(0);
lean_inc_ref(v_env_4232_);
lean_inc(v___y_4226_);
v___x_4239_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v___y_4226_, v___y_4220_, v_a_4235_, v_env_4232_, v_openDecls_4237_, v_openDecls_4237_, v___x_4238_, v___y_4217_, v___y_4222_, v___y_4221_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
if (lean_obj_tag(v___x_4239_) == 0)
{
lean_object* v_a_4240_; 
v_a_4240_ = lean_ctor_get(v___x_4239_, 0);
lean_inc(v_a_4240_);
if (lean_obj_tag(v_a_4240_) == 0)
{
lean_dec_ref(v_a_4240_);
lean_dec(v_a_4235_);
lean_dec_ref(v_env_4232_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v_ctx_4202_);
return v___x_4239_;
}
else
{
lean_object* v___f_4241_; lean_object* v___f_4242_; lean_object* v___x_4243_; lean_object* v___x_4244_; 
lean_dec_ref(v_a_4240_);
lean_dec_ref(v___x_4239_);
lean_inc_ref_n(v_env_4232_, 2);
v___f_4241_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__2___boxed), 12, 2);
lean_closure_set(v___f_4241_, 0, v_a_4235_);
lean_closure_set(v___f_4241_, 1, v_env_4232_);
lean_inc(v_currNamespace_4236_);
v___f_4242_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__3___boxed), 13, 3);
lean_closure_set(v___f_4242_, 0, v___y_4225_);
lean_closure_set(v___f_4242_, 1, v___f_4241_);
lean_closure_set(v___f_4242_, 2, v_currNamespace_4236_);
v___x_4243_ = l_Lean_getAliasState(v_env_4232_);
v___x_4244_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v___x_4243_, v___f_4242_, v___y_4217_, v___y_4222_, v___y_4221_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
if (lean_obj_tag(v___x_4244_) == 0)
{
lean_object* v_a_4245_; 
v_a_4245_ = lean_ctor_get(v___x_4244_, 0);
lean_inc(v_a_4245_);
if (lean_obj_tag(v_a_4245_) == 0)
{
lean_dec_ref(v_a_4245_);
lean_dec_ref(v_env_4232_);
lean_dec(v___y_4226_);
lean_dec_ref(v_ctx_4202_);
return v___x_4244_;
}
else
{
lean_dec_ref(v_a_4245_);
lean_dec_ref(v___x_4244_);
if (v___y_4220_ == 0)
{
if (lean_obj_tag(v___y_4226_) == 1)
{
lean_object* v_pre_4246_; 
v_pre_4246_ = lean_ctor_get(v___y_4226_, 0);
if (lean_obj_tag(v_pre_4246_) == 0)
{
lean_object* v_str_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; size_t v_sz_4250_; size_t v___x_4251_; lean_object* v___x_4252_; 
v_str_4247_ = lean_ctor_get(v___y_4226_, 1);
v___x_4248_ = l_Lean_Parser_getTokenTable(v_env_4232_);
v___x_4249_ = l_Lean_Data_Trie_findPrefix___redArg(v___x_4248_, v_str_4247_);
lean_dec_ref(v___x_4248_);
v_sz_4250_ = lean_array_size(v___x_4249_);
v___x_4251_ = ((size_t)0ULL);
v___x_4252_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v___x_4249_, v_sz_4250_, v___x_4251_, v___x_4238_, v___y_4217_, v___y_4222_, v___y_4218_);
lean_dec_ref(v___x_4249_);
if (lean_obj_tag(v___x_4252_) == 0)
{
lean_object* v_a_4253_; 
v_a_4253_ = lean_ctor_get(v___x_4252_, 0);
lean_inc(v_a_4253_);
if (lean_obj_tag(v_a_4253_) == 0)
{
lean_dec_ref(v_a_4253_);
lean_dec_ref(v___y_4226_);
lean_dec_ref(v_ctx_4202_);
return v___x_4252_;
}
else
{
lean_object* v___x_4254_; 
lean_dec_ref(v_a_4253_);
lean_dec_ref(v___x_4252_);
v___x_4254_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4202_, v___y_4226_, v___y_4220_, v___y_4217_, v___y_4222_, v___y_4221_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
return v___x_4254_;
}
}
else
{
lean_dec_ref(v___y_4226_);
lean_dec_ref(v_ctx_4202_);
return v___x_4252_;
}
}
else
{
lean_object* v___x_4255_; 
lean_dec_ref(v_env_4232_);
v___x_4255_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4202_, v___y_4226_, v___y_4220_, v___y_4217_, v___y_4222_, v___y_4221_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
return v___x_4255_;
}
}
else
{
lean_object* v___x_4256_; 
lean_dec_ref(v_env_4232_);
v___x_4256_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4202_, v___y_4226_, v___y_4220_, v___y_4217_, v___y_4222_, v___y_4221_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
return v___x_4256_;
}
}
else
{
lean_object* v___x_4257_; 
lean_dec_ref(v_env_4232_);
v___x_4257_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_completeNamespaces(v_ctx_4202_, v___y_4226_, v___y_4220_, v___y_4217_, v___y_4222_, v___y_4221_, v___y_4216_, v___y_4223_, v___y_4224_, v___y_4218_);
return v___x_4257_;
}
}
}
else
{
lean_dec_ref(v_env_4232_);
lean_dec(v___y_4226_);
lean_dec_ref(v_ctx_4202_);
return v___x_4244_;
}
}
}
else
{
lean_dec(v_a_4235_);
lean_dec_ref(v_env_4232_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v_ctx_4202_);
return v___x_4239_;
}
}
else
{
lean_object* v_a_4258_; lean_object* v___x_4260_; uint8_t v_isShared_4261_; uint8_t v_isSharedCheck_4265_; 
lean_dec_ref(v_env_4232_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v_ctx_4202_);
v_a_4258_ = lean_ctor_get(v___x_4233_, 0);
v_isSharedCheck_4265_ = !lean_is_exclusive(v___x_4233_);
if (v_isSharedCheck_4265_ == 0)
{
v___x_4260_ = v___x_4233_;
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
else
{
lean_inc(v_a_4258_);
lean_dec(v___x_4233_);
v___x_4260_ = lean_box(0);
v_isShared_4261_ = v_isSharedCheck_4265_;
goto v_resetjp_4259_;
}
v_resetjp_4259_:
{
lean_object* v___x_4263_; 
if (v_isShared_4261_ == 0)
{
v___x_4263_ = v___x_4260_;
goto v_reusejp_4262_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v_a_4258_);
v___x_4263_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4262_;
}
v_reusejp_4262_:
{
return v___x_4263_;
}
}
}
}
}
}
else
{
lean_dec(v___x_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
lean_dec_ref(v_ctx_4202_);
return v___x_4228_;
}
}
v___jp_4266_:
{
lean_object* v___x_4276_; lean_object* v___f_4277_; lean_object* v___x_4278_; lean_object* v___f_4279_; uint8_t v___x_4280_; 
v___x_4276_ = lean_box(v_danglingDot_4268_);
lean_inc_n(v_id_4267_, 2);
lean_inc_ref(v_ctx_4202_);
v___f_4277_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__0___boxed), 13, 3);
lean_closure_set(v___f_4277_, 0, v_ctx_4202_);
lean_closure_set(v___f_4277_, 1, v_id_4267_);
lean_closure_set(v___f_4277_, 2, v___x_4276_);
v___x_4278_ = lean_box(v_danglingDot_4268_);
v___f_4279_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___lam__1___boxed), 4, 2);
lean_closure_set(v___f_4279_, 0, v_id_4267_);
lean_closure_set(v___f_4279_, 1, v___x_4278_);
v___x_4280_ = l_Lean_Name_isAtomic(v_id_4267_);
if (v___x_4280_ == 0)
{
v___y_4216_ = v___y_4272_;
v___y_4217_ = v___y_4269_;
v___y_4218_ = v___y_4275_;
v___y_4219_ = v___f_4277_;
v___y_4220_ = v_danglingDot_4268_;
v___y_4221_ = v___y_4271_;
v___y_4222_ = v___y_4270_;
v___y_4223_ = v___y_4273_;
v___y_4224_ = v___y_4274_;
v___y_4225_ = v___f_4279_;
v___y_4226_ = v_id_4267_;
goto v___jp_4215_;
}
else
{
lean_object* v_lctx_4281_; lean_object* v_decls_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; 
v_lctx_4281_ = lean_ctor_get(v___y_4272_, 2);
v_decls_4282_ = lean_ctor_get(v_lctx_4281_, 1);
v___x_4283_ = lean_box(0);
v___x_4284_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6(v_id_4267_, v_danglingDot_4268_, v_decls_4282_, v___x_4283_, v___y_4269_, v___y_4270_, v___y_4271_, v___y_4272_, v___y_4273_, v___y_4274_, v___y_4275_);
if (lean_obj_tag(v___x_4284_) == 0)
{
lean_object* v_a_4285_; 
v_a_4285_ = lean_ctor_get(v___x_4284_, 0);
lean_inc(v_a_4285_);
if (lean_obj_tag(v_a_4285_) == 0)
{
lean_dec_ref(v_a_4285_);
lean_dec_ref(v___f_4279_);
lean_dec_ref(v___f_4277_);
lean_dec(v_id_4267_);
lean_dec_ref(v_ctx_4202_);
return v___x_4284_;
}
else
{
lean_dec_ref(v_a_4285_);
lean_dec_ref(v___x_4284_);
v___y_4216_ = v___y_4272_;
v___y_4217_ = v___y_4269_;
v___y_4218_ = v___y_4275_;
v___y_4219_ = v___f_4277_;
v___y_4220_ = v_danglingDot_4268_;
v___y_4221_ = v___y_4271_;
v___y_4222_ = v___y_4270_;
v___y_4223_ = v___y_4273_;
v___y_4224_ = v___y_4274_;
v___y_4225_ = v___f_4279_;
v___y_4226_ = v_id_4267_;
goto v___jp_4215_;
}
}
else
{
lean_dec_ref(v___f_4279_);
lean_dec_ref(v___f_4277_);
lean_dec(v_id_4267_);
lean_dec_ref(v_ctx_4202_);
return v___x_4284_;
}
}
}
v___jp_4286_:
{
if (lean_obj_tag(v_hoverInfo_4205_) == 1)
{
lean_object* v_delta_4295_; lean_object* v_id_4296_; uint8_t v_danglingDot_4297_; 
v_delta_4295_ = lean_ctor_get(v_hoverInfo_4205_, 0);
lean_inc(v_delta_4295_);
lean_dec_ref(v_hoverInfo_4205_);
v_id_4296_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_truncate(v_id_4287_, v_delta_4295_);
v_danglingDot_4297_ = 0;
v_id_4267_ = v_id_4296_;
v_danglingDot_4268_ = v_danglingDot_4297_;
v___y_4269_ = v___y_4288_;
v___y_4270_ = v___y_4289_;
v___y_4271_ = v___y_4290_;
v___y_4272_ = v___y_4291_;
v___y_4273_ = v___y_4292_;
v___y_4274_ = v___y_4293_;
v___y_4275_ = v___y_4294_;
goto v___jp_4266_;
}
else
{
lean_dec(v_hoverInfo_4205_);
v_id_4267_ = v_id_4287_;
v_danglingDot_4268_ = v_danglingDot_4206_;
v___y_4269_ = v___y_4288_;
v___y_4270_ = v___y_4289_;
v___y_4271_ = v___y_4290_;
v___y_4272_ = v___y_4291_;
v___y_4273_ = v___y_4292_;
v___y_4274_ = v___y_4293_;
v___y_4275_ = v___y_4294_;
goto v___jp_4266_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed(lean_object* v_ctx_4303_, lean_object* v_stx_4304_, lean_object* v_id_4305_, lean_object* v_hoverInfo_4306_, lean_object* v_danglingDot_4307_, lean_object* v_a_4308_, lean_object* v_a_4309_, lean_object* v_a_4310_, lean_object* v_a_4311_, lean_object* v_a_4312_, lean_object* v_a_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_){
_start:
{
uint8_t v_danglingDot_boxed_4316_; lean_object* v_res_4317_; 
v_danglingDot_boxed_4316_ = lean_unbox(v_danglingDot_4307_);
v_res_4317_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore(v_ctx_4303_, v_stx_4304_, v_id_4305_, v_hoverInfo_4306_, v_danglingDot_boxed_4316_, v_a_4308_, v_a_4309_, v_a_4310_, v_a_4311_, v_a_4312_, v_a_4313_, v_a_4314_);
lean_dec(v_a_4314_);
lean_dec_ref(v_a_4313_);
lean_dec(v_a_4312_);
lean_dec_ref(v_a_4311_);
lean_dec_ref(v_a_4310_);
lean_dec(v_a_4309_);
lean_dec_ref(v_a_4308_);
lean_dec(v_stx_4304_);
return v_res_4317_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(lean_object* v_a_4318_, lean_object* v___x_4319_, lean_object* v_alias_4320_, lean_object* v_as_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_, lean_object* v___y_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_){
_start:
{
lean_object* v___x_4330_; 
v___x_4330_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___redArg(v_a_4318_, v___x_4319_, v_alias_4320_, v_as_4321_, v___y_4322_, v___y_4323_, v___y_4325_, v___y_4326_, v___y_4327_, v___y_4328_);
return v___x_4330_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2___boxed(lean_object* v_a_4331_, lean_object* v___x_4332_, lean_object* v_alias_4333_, lean_object* v_as_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_){
_start:
{
lean_object* v_res_4343_; 
v_res_4343_ = l_List_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__2(v_a_4331_, v___x_4332_, v_alias_4333_, v_as_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_, v___y_4341_);
lean_dec(v___y_4341_);
lean_dec_ref(v___y_4340_);
lean_dec(v___y_4339_);
lean_dec_ref(v___y_4338_);
lean_dec_ref(v___y_4337_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec(v_alias_4333_);
lean_dec_ref(v_a_4331_);
return v_res_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(lean_object* v_00_u03b2_4344_, lean_object* v_s_4345_, lean_object* v_f_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
lean_object* v___x_4355_; 
v___x_4355_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___redArg(v_s_4345_, v_f_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_);
return v___x_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3___boxed(lean_object* v_00_u03b2_4356_, lean_object* v_s_4357_, lean_object* v_f_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_){
_start:
{
lean_object* v_res_4367_; 
v_res_4367_ = l_Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3(v_00_u03b2_4356_, v_s_4357_, v_f_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, v___y_4365_);
lean_dec(v___y_4365_);
lean_dec_ref(v___y_4364_);
lean_dec(v___y_4363_);
lean_dec_ref(v___y_4362_);
lean_dec_ref(v___y_4361_);
lean_dec(v___y_4360_);
lean_dec_ref(v___y_4359_);
return v_res_4367_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(lean_object* v_id_4368_, uint8_t v_danglingDot_4369_, lean_object* v_a_4370_, lean_object* v___x_4371_, lean_object* v_as_4372_, lean_object* v_as_x27_4373_, lean_object* v_b_4374_, lean_object* v_a_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
lean_object* v___x_4384_; 
v___x_4384_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___redArg(v_id_4368_, v_danglingDot_4369_, v_a_4370_, v___x_4371_, v_as_4372_, v_as_x27_4373_, v_b_4374_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
return v___x_4384_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4___boxed(lean_object* v_id_4385_, lean_object* v_danglingDot_4386_, lean_object* v_a_4387_, lean_object* v___x_4388_, lean_object* v_as_4389_, lean_object* v_as_x27_4390_, lean_object* v_b_4391_, lean_object* v_a_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_){
_start:
{
uint8_t v_danglingDot_boxed_4401_; lean_object* v_res_4402_; 
v_danglingDot_boxed_4401_ = lean_unbox(v_danglingDot_4386_);
v_res_4402_ = l_List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4(v_id_4385_, v_danglingDot_boxed_4401_, v_a_4387_, v___x_4388_, v_as_4389_, v_as_x27_4390_, v_b_4391_, v_a_4392_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_);
lean_dec(v___y_4399_);
lean_dec_ref(v___y_4398_);
lean_dec(v___y_4397_);
lean_dec_ref(v___y_4396_);
lean_dec_ref(v___y_4395_);
lean_dec(v___y_4394_);
lean_dec_ref(v___y_4393_);
lean_dec(v_as_x27_4390_);
lean_dec(v_as_4389_);
return v_res_4402_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(lean_object* v_as_4403_, size_t v_sz_4404_, size_t v_i_4405_, lean_object* v_b_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_){
_start:
{
lean_object* v___x_4415_; 
v___x_4415_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___redArg(v_as_4403_, v_sz_4404_, v_i_4405_, v_b_4406_, v___y_4407_, v___y_4408_, v___y_4413_);
return v___x_4415_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5___boxed(lean_object* v_as_4416_, lean_object* v_sz_4417_, lean_object* v_i_4418_, lean_object* v_b_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_){
_start:
{
size_t v_sz_boxed_4428_; size_t v_i_boxed_4429_; lean_object* v_res_4430_; 
v_sz_boxed_4428_ = lean_unbox_usize(v_sz_4417_);
lean_dec(v_sz_4417_);
v_i_boxed_4429_ = lean_unbox_usize(v_i_4418_);
lean_dec(v_i_4418_);
v_res_4430_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__5(v_as_4416_, v_sz_boxed_4428_, v_i_boxed_4429_, v_b_4419_, v___y_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_);
lean_dec(v___y_4426_);
lean_dec_ref(v___y_4425_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
lean_dec_ref(v___y_4422_);
lean_dec(v___y_4421_);
lean_dec_ref(v___y_4420_);
lean_dec_ref(v_as_4416_);
return v_res_4430_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(lean_object* v_00_u03b2_4431_, lean_object* v_f_4432_, lean_object* v_x_4433_, lean_object* v_x_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_){
_start:
{
lean_object* v___x_4443_; 
v___x_4443_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___redArg(v_f_4432_, v_x_4433_, v_x_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_);
return v___x_4443_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4___boxed(lean_object* v_00_u03b2_4444_, lean_object* v_f_4445_, lean_object* v_x_4446_, lean_object* v_x_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__4(v_00_u03b2_4444_, v_f_4445_, v_x_4446_, v_x_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_);
lean_dec(v___y_4454_);
lean_dec_ref(v___y_4453_);
lean_dec(v___y_4452_);
lean_dec_ref(v___y_4451_);
lean_dec_ref(v___y_4450_);
lean_dec(v___y_4449_);
lean_dec_ref(v___y_4448_);
return v_res_4456_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(lean_object* v_00_u03b2_4457_, lean_object* v_map_4458_, lean_object* v_f_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_){
_start:
{
lean_object* v___x_4468_; 
v___x_4468_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___redArg(v_map_4458_, v_f_4459_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_, v___y_4466_);
return v___x_4468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5___boxed(lean_object* v_00_u03b2_4469_, lean_object* v_map_4470_, lean_object* v_f_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_, lean_object* v___y_4476_, lean_object* v___y_4477_, lean_object* v___y_4478_, lean_object* v___y_4479_){
_start:
{
lean_object* v_res_4480_; 
v_res_4480_ = l_Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5(v_00_u03b2_4469_, v_map_4470_, v_f_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_, v___y_4476_, v___y_4477_, v___y_4478_);
lean_dec(v___y_4478_);
lean_dec_ref(v___y_4477_);
lean_dec(v___y_4476_);
lean_dec_ref(v___y_4475_);
lean_dec_ref(v___y_4474_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
return v_res_4480_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(lean_object* v_00_u03b2_4481_, lean_object* v_f_4482_, lean_object* v_as_4483_, size_t v_i_4484_, size_t v_stop_4485_, lean_object* v_b_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_, lean_object* v___y_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_){
_start:
{
lean_object* v___x_4495_; 
v___x_4495_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___redArg(v_f_4482_, v_as_4483_, v_i_4484_, v_stop_4485_, v_b_4486_, v___y_4487_, v___y_4488_, v___y_4489_, v___y_4490_, v___y_4491_, v___y_4492_, v___y_4493_);
return v___x_4495_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_4496_, lean_object* v_f_4497_, lean_object* v_as_4498_, lean_object* v_i_4499_, lean_object* v_stop_4500_, lean_object* v_b_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_){
_start:
{
size_t v_i_boxed_4510_; size_t v_stop_boxed_4511_; lean_object* v_res_4512_; 
v_i_boxed_4510_ = lean_unbox_usize(v_i_4499_);
lean_dec(v_i_4499_);
v_stop_boxed_4511_ = lean_unbox_usize(v_stop_4500_);
lean_dec(v_stop_4500_);
v_res_4512_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__6(v_00_u03b2_4496_, v_f_4497_, v_as_4498_, v_i_boxed_4510_, v_stop_boxed_4511_, v_b_4501_, v___y_4502_, v___y_4503_, v___y_4504_, v___y_4505_, v___y_4506_, v___y_4507_, v___y_4508_);
lean_dec(v___y_4508_);
lean_dec_ref(v___y_4507_);
lean_dec(v___y_4506_);
lean_dec_ref(v___y_4505_);
lean_dec_ref(v___y_4504_);
lean_dec(v___y_4503_);
lean_dec_ref(v___y_4502_);
lean_dec_ref(v_as_4498_);
return v_res_4512_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(lean_object* v_a_4513_, lean_object* v___x_4514_, lean_object* v_id_4515_, uint8_t v_danglingDot_4516_, lean_object* v_as_4517_, lean_object* v_as_x27_4518_, lean_object* v_b_4519_, lean_object* v_a_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_){
_start:
{
lean_object* v___x_4529_; 
v___x_4529_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___redArg(v_a_4513_, v___x_4514_, v_id_4515_, v_danglingDot_4516_, v_as_x27_4518_, v_b_4519_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_);
return v___x_4529_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8___boxed(lean_object* v_a_4530_, lean_object* v___x_4531_, lean_object* v_id_4532_, lean_object* v_danglingDot_4533_, lean_object* v_as_4534_, lean_object* v_as_x27_4535_, lean_object* v_b_4536_, lean_object* v_a_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_){
_start:
{
uint8_t v_danglingDot_boxed_4546_; lean_object* v_res_4547_; 
v_danglingDot_boxed_4546_ = lean_unbox(v_danglingDot_4533_);
v_res_4547_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__4_spec__8(v_a_4530_, v___x_4531_, v_id_4532_, v_danglingDot_boxed_4546_, v_as_4534_, v_as_x27_4535_, v_b_4536_, v_a_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
lean_dec(v___y_4542_);
lean_dec_ref(v___y_4541_);
lean_dec_ref(v___y_4540_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
lean_dec(v_as_x27_4535_);
lean_dec(v_as_4534_);
return v_res_4547_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_4548_, lean_object* v_map_4549_, lean_object* v_f_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_){
_start:
{
lean_object* v___x_4560_; 
v___x_4560_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___redArg(v_map_4549_, v_f_4550_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_);
return v___x_4560_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_4561_, lean_object* v_map_4562_, lean_object* v_f_4563_, lean_object* v___y_4564_, lean_object* v___y_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_){
_start:
{
lean_object* v_res_4573_; 
v_res_4573_ = l_Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3(v_00_u03b2_4561_, v_map_4562_, v_f_4563_, v___y_4564_, v___y_4565_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_, v___y_4571_);
lean_dec(v___y_4571_);
lean_dec_ref(v___y_4570_);
lean_dec(v___y_4569_);
lean_dec_ref(v___y_4568_);
lean_dec_ref(v___y_4567_);
lean_dec(v___y_4566_);
lean_dec_ref(v___y_4565_);
return v_res_4573_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(lean_object* v_map_4574_, lean_object* v_f_4575_, lean_object* v_init_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_){
_start:
{
lean_object* v___x_4585_; 
v___x_4585_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4575_, v_map_4574_, v_init_4576_, v___y_4577_, v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_, v___y_4582_, v___y_4583_);
return v___x_4585_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg___boxed(lean_object* v_map_4586_, lean_object* v_f_4587_, lean_object* v_init_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_, lean_object* v___y_4592_, lean_object* v___y_4593_, lean_object* v___y_4594_, lean_object* v___y_4595_, lean_object* v___y_4596_){
_start:
{
lean_object* v_res_4597_; 
v_res_4597_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___redArg(v_map_4586_, v_f_4587_, v_init_4588_, v___y_4589_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_);
lean_dec(v___y_4595_);
lean_dec_ref(v___y_4594_);
lean_dec(v___y_4593_);
lean_dec_ref(v___y_4592_);
lean_dec_ref(v___y_4591_);
lean_dec(v___y_4590_);
lean_dec_ref(v___y_4589_);
return v_res_4597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(lean_object* v_00_u03c3_4598_, lean_object* v_00_u03b2_4599_, lean_object* v_map_4600_, lean_object* v_f_4601_, lean_object* v_init_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_){
_start:
{
lean_object* v___x_4611_; 
v___x_4611_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4601_, v_map_4600_, v_init_4602_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_);
return v___x_4611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9___boxed(lean_object* v_00_u03c3_4612_, lean_object* v_00_u03b2_4613_, lean_object* v_map_4614_, lean_object* v_f_4615_, lean_object* v_init_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_){
_start:
{
lean_object* v_res_4625_; 
v_res_4625_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9(v_00_u03c3_4612_, v_00_u03b2_4613_, v_map_4614_, v_f_4615_, v_init_4616_, v___y_4617_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_);
lean_dec(v___y_4623_);
lean_dec_ref(v___y_4622_);
lean_dec(v___y_4621_);
lean_dec_ref(v___y_4620_);
lean_dec_ref(v___y_4619_);
lean_dec(v___y_4618_);
lean_dec_ref(v___y_4617_);
return v_res_4625_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(lean_object* v_id_4626_, uint8_t v_danglingDot_4627_, lean_object* v_as_4628_, size_t v_sz_4629_, size_t v_i_4630_, lean_object* v_b_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_){
_start:
{
lean_object* v___x_4640_; 
v___x_4640_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___redArg(v_id_4626_, v_danglingDot_4627_, v_as_4628_, v_sz_4629_, v_i_4630_, v_b_4631_, v___y_4632_, v___y_4633_, v___y_4638_);
return v___x_4640_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19___boxed(lean_object* v_id_4641_, lean_object* v_danglingDot_4642_, lean_object* v_as_4643_, lean_object* v_sz_4644_, lean_object* v_i_4645_, lean_object* v_b_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_){
_start:
{
uint8_t v_danglingDot_boxed_4655_; size_t v_sz_boxed_4656_; size_t v_i_boxed_4657_; lean_object* v_res_4658_; 
v_danglingDot_boxed_4655_ = lean_unbox(v_danglingDot_4642_);
v_sz_boxed_4656_ = lean_unbox_usize(v_sz_4644_);
lean_dec(v_sz_4644_);
v_i_boxed_4657_ = lean_unbox_usize(v_i_4645_);
lean_dec(v_i_4645_);
v_res_4658_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__12_spec__19(v_id_4641_, v_danglingDot_boxed_4655_, v_as_4643_, v_sz_boxed_4656_, v_i_boxed_4657_, v_b_4646_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_);
lean_dec(v___y_4653_);
lean_dec_ref(v___y_4652_);
lean_dec(v___y_4651_);
lean_dec_ref(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
lean_dec_ref(v_as_4643_);
lean_dec(v_id_4641_);
return v_res_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(lean_object* v_map_4659_, lean_object* v_f_4660_, lean_object* v_init_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_){
_start:
{
lean_object* v___x_4671_; 
v___x_4671_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4660_, v_map_4659_, v_init_4661_, v___y_4662_, v___y_4663_, v___y_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_, v___y_4669_);
return v___x_4671_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg___boxed(lean_object* v_map_4672_, lean_object* v_f_4673_, lean_object* v_init_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_){
_start:
{
lean_object* v_res_4684_; 
v_res_4684_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___redArg(v_map_4672_, v_f_4673_, v_init_4674_, v___y_4675_, v___y_4676_, v___y_4677_, v___y_4678_, v___y_4679_, v___y_4680_, v___y_4681_, v___y_4682_);
lean_dec(v___y_4682_);
lean_dec_ref(v___y_4681_);
lean_dec(v___y_4680_);
lean_dec_ref(v___y_4679_);
lean_dec_ref(v___y_4678_);
lean_dec(v___y_4677_);
lean_dec_ref(v___y_4676_);
return v_res_4684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(lean_object* v_00_u03c3_4685_, lean_object* v_00_u03b2_4686_, lean_object* v_map_4687_, lean_object* v_f_4688_, lean_object* v_init_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_){
_start:
{
lean_object* v___x_4699_; 
v___x_4699_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4688_, v_map_4687_, v_init_4689_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_, v___y_4696_, v___y_4697_);
return v___x_4699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9___boxed(lean_object* v_00_u03c3_4700_, lean_object* v_00_u03b2_4701_, lean_object* v_map_4702_, lean_object* v_f_4703_, lean_object* v_init_4704_, lean_object* v___y_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_){
_start:
{
lean_object* v_res_4714_; 
v_res_4714_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9(v_00_u03c3_4700_, v_00_u03b2_4701_, v_map_4702_, v_f_4703_, v_init_4704_, v___y_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_, v___y_4711_, v___y_4712_);
lean_dec(v___y_4712_);
lean_dec_ref(v___y_4711_);
lean_dec(v___y_4710_);
lean_dec_ref(v___y_4709_);
lean_dec_ref(v___y_4708_);
lean_dec(v___y_4707_);
lean_dec_ref(v___y_4706_);
return v_res_4714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(lean_object* v_00_u03c3_4715_, lean_object* v_00_u03b1_4716_, lean_object* v_00_u03b2_4717_, lean_object* v_f_4718_, lean_object* v_x_4719_, lean_object* v_x_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_){
_start:
{
lean_object* v___x_4729_; 
v___x_4729_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___redArg(v_f_4718_, v_x_4719_, v_x_4720_, v___y_4721_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_, v___y_4726_, v___y_4727_);
return v___x_4729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14___boxed(lean_object* v_00_u03c3_4730_, lean_object* v_00_u03b1_4731_, lean_object* v_00_u03b2_4732_, lean_object* v_f_4733_, lean_object* v_x_4734_, lean_object* v_x_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_){
_start:
{
lean_object* v_res_4744_; 
v_res_4744_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14(v_00_u03c3_4730_, v_00_u03b1_4731_, v_00_u03b2_4732_, v_f_4733_, v_x_4734_, v_x_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_, v___y_4740_, v___y_4741_, v___y_4742_);
lean_dec(v___y_4742_);
lean_dec_ref(v___y_4741_);
lean_dec(v___y_4740_);
lean_dec_ref(v___y_4739_);
lean_dec_ref(v___y_4738_);
lean_dec(v___y_4737_);
lean_dec_ref(v___y_4736_);
return v_res_4744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(lean_object* v_id_4745_, uint8_t v_danglingDot_4746_, lean_object* v_as_4747_, size_t v_sz_4748_, size_t v_i_4749_, lean_object* v_b_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_){
_start:
{
lean_object* v___x_4759_; 
v___x_4759_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___redArg(v_id_4745_, v_danglingDot_4746_, v_as_4747_, v_sz_4748_, v_i_4749_, v_b_4750_, v___y_4751_, v___y_4752_, v___y_4757_);
return v___x_4759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20___boxed(lean_object* v_id_4760_, lean_object* v_danglingDot_4761_, lean_object* v_as_4762_, lean_object* v_sz_4763_, lean_object* v_i_4764_, lean_object* v_b_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_, lean_object* v___y_4773_){
_start:
{
uint8_t v_danglingDot_boxed_4774_; size_t v_sz_boxed_4775_; size_t v_i_boxed_4776_; lean_object* v_res_4777_; 
v_danglingDot_boxed_4774_ = lean_unbox(v_danglingDot_4761_);
v_sz_boxed_4775_ = lean_unbox_usize(v_sz_4763_);
lean_dec(v_sz_4763_);
v_i_boxed_4776_ = lean_unbox_usize(v_i_4764_);
lean_dec(v_i_4764_);
v_res_4777_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__6_spec__11_spec__17_spec__20(v_id_4760_, v_danglingDot_boxed_4774_, v_as_4762_, v_sz_boxed_4775_, v_i_boxed_4776_, v_b_4765_, v___y_4766_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_, v___y_4772_);
lean_dec(v___y_4772_);
lean_dec_ref(v___y_4771_);
lean_dec(v___y_4770_);
lean_dec_ref(v___y_4769_);
lean_dec_ref(v___y_4768_);
lean_dec(v___y_4767_);
lean_dec_ref(v___y_4766_);
lean_dec_ref(v_as_4762_);
lean_dec(v_id_4760_);
return v_res_4777_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(lean_object* v_00_u03c3_4778_, lean_object* v_00_u03b1_4779_, lean_object* v_00_u03b2_4780_, lean_object* v_f_4781_, lean_object* v_x_4782_, lean_object* v_x_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_, lean_object* v___y_4791_){
_start:
{
lean_object* v___x_4793_; 
v___x_4793_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___redArg(v_f_4781_, v_x_4782_, v_x_4783_, v___y_4784_, v___y_4785_, v___y_4786_, v___y_4787_, v___y_4788_, v___y_4789_, v___y_4790_, v___y_4791_);
return v___x_4793_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16___boxed(lean_object* v_00_u03c3_4794_, lean_object* v_00_u03b1_4795_, lean_object* v_00_u03b2_4796_, lean_object* v_f_4797_, lean_object* v_x_4798_, lean_object* v_x_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_){
_start:
{
lean_object* v_res_4809_; 
v_res_4809_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16(v_00_u03c3_4794_, v_00_u03b1_4795_, v_00_u03b2_4796_, v_f_4797_, v_x_4798_, v_x_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_, v___y_4805_, v___y_4806_, v___y_4807_);
lean_dec(v___y_4807_);
lean_dec_ref(v___y_4806_);
lean_dec(v___y_4805_);
lean_dec_ref(v___y_4804_);
lean_dec_ref(v___y_4803_);
lean_dec(v___y_4802_);
lean_dec_ref(v___y_4801_);
return v_res_4809_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(lean_object* v_00_u03b1_4810_, lean_object* v_00_u03b2_4811_, lean_object* v_00_u03c3_4812_, lean_object* v_f_4813_, lean_object* v_as_4814_, size_t v_i_4815_, size_t v_stop_4816_, lean_object* v_b_4817_, lean_object* v___y_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_){
_start:
{
lean_object* v___x_4826_; 
v___x_4826_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___redArg(v_f_4813_, v_as_4814_, v_i_4815_, v_stop_4816_, v_b_4817_, v___y_4818_, v___y_4819_, v___y_4820_, v___y_4821_, v___y_4822_, v___y_4823_, v___y_4824_);
return v___x_4826_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20___boxed(lean_object* v_00_u03b1_4827_, lean_object* v_00_u03b2_4828_, lean_object* v_00_u03c3_4829_, lean_object* v_f_4830_, lean_object* v_as_4831_, lean_object* v_i_4832_, lean_object* v_stop_4833_, lean_object* v_b_4834_, lean_object* v___y_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_){
_start:
{
size_t v_i_boxed_4843_; size_t v_stop_boxed_4844_; lean_object* v_res_4845_; 
v_i_boxed_4843_ = lean_unbox_usize(v_i_4832_);
lean_dec(v_i_4832_);
v_stop_boxed_4844_ = lean_unbox_usize(v_stop_4833_);
lean_dec(v_stop_4833_);
v_res_4845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__20(v_00_u03b1_4827_, v_00_u03b2_4828_, v_00_u03c3_4829_, v_f_4830_, v_as_4831_, v_i_boxed_4843_, v_stop_boxed_4844_, v_b_4834_, v___y_4835_, v___y_4836_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_, v___y_4841_);
lean_dec(v___y_4841_);
lean_dec_ref(v___y_4840_);
lean_dec(v___y_4839_);
lean_dec_ref(v___y_4838_);
lean_dec_ref(v___y_4837_);
lean_dec(v___y_4836_);
lean_dec_ref(v___y_4835_);
lean_dec_ref(v_as_4831_);
return v_res_4845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(lean_object* v_00_u03c3_4846_, lean_object* v_00_u03b1_4847_, lean_object* v_00_u03b2_4848_, lean_object* v_f_4849_, lean_object* v_keys_4850_, lean_object* v_vals_4851_, lean_object* v_heq_4852_, lean_object* v_i_4853_, lean_object* v_acc_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_, lean_object* v___y_4861_){
_start:
{
lean_object* v___x_4863_; 
v___x_4863_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___redArg(v_f_4849_, v_keys_4850_, v_vals_4851_, v_i_4853_, v_acc_4854_, v___y_4855_, v___y_4856_, v___y_4857_, v___y_4858_, v___y_4859_, v___y_4860_, v___y_4861_);
return v___x_4863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21___boxed(lean_object** _args){
lean_object* v_00_u03c3_4864_ = _args[0];
lean_object* v_00_u03b1_4865_ = _args[1];
lean_object* v_00_u03b2_4866_ = _args[2];
lean_object* v_f_4867_ = _args[3];
lean_object* v_keys_4868_ = _args[4];
lean_object* v_vals_4869_ = _args[5];
lean_object* v_heq_4870_ = _args[6];
lean_object* v_i_4871_ = _args[7];
lean_object* v_acc_4872_ = _args[8];
lean_object* v___y_4873_ = _args[9];
lean_object* v___y_4874_ = _args[10];
lean_object* v___y_4875_ = _args[11];
lean_object* v___y_4876_ = _args[12];
lean_object* v___y_4877_ = _args[13];
lean_object* v___y_4878_ = _args[14];
lean_object* v___y_4879_ = _args[15];
lean_object* v___y_4880_ = _args[16];
_start:
{
lean_object* v_res_4881_; 
v_res_4881_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_SMap_forM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__3_spec__5_spec__9_spec__14_spec__21(v_00_u03c3_4864_, v_00_u03b1_4865_, v_00_u03b2_4866_, v_f_4867_, v_keys_4868_, v_vals_4869_, v_heq_4870_, v_i_4871_, v_acc_4872_, v___y_4873_, v___y_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_, v___y_4879_);
lean_dec(v___y_4879_);
lean_dec_ref(v___y_4878_);
lean_dec(v___y_4877_);
lean_dec_ref(v___y_4876_);
lean_dec_ref(v___y_4875_);
lean_dec(v___y_4874_);
lean_dec_ref(v___y_4873_);
lean_dec_ref(v_vals_4869_);
lean_dec_ref(v_keys_4868_);
return v_res_4881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(lean_object* v_00_u03b1_4882_, lean_object* v_00_u03b2_4883_, lean_object* v_00_u03c3_4884_, lean_object* v_f_4885_, lean_object* v_as_4886_, size_t v_i_4887_, size_t v_stop_4888_, lean_object* v_b_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_, lean_object* v___y_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_, lean_object* v___y_4897_){
_start:
{
lean_object* v___x_4899_; 
v___x_4899_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___redArg(v_f_4885_, v_as_4886_, v_i_4887_, v_stop_4888_, v_b_4889_, v___y_4890_, v___y_4891_, v___y_4892_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_, v___y_4897_);
return v___x_4899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22___boxed(lean_object** _args){
lean_object* v_00_u03b1_4900_ = _args[0];
lean_object* v_00_u03b2_4901_ = _args[1];
lean_object* v_00_u03c3_4902_ = _args[2];
lean_object* v_f_4903_ = _args[3];
lean_object* v_as_4904_ = _args[4];
lean_object* v_i_4905_ = _args[5];
lean_object* v_stop_4906_ = _args[6];
lean_object* v_b_4907_ = _args[7];
lean_object* v___y_4908_ = _args[8];
lean_object* v___y_4909_ = _args[9];
lean_object* v___y_4910_ = _args[10];
lean_object* v___y_4911_ = _args[11];
lean_object* v___y_4912_ = _args[12];
lean_object* v___y_4913_ = _args[13];
lean_object* v___y_4914_ = _args[14];
lean_object* v___y_4915_ = _args[15];
lean_object* v___y_4916_ = _args[16];
_start:
{
size_t v_i_boxed_4917_; size_t v_stop_boxed_4918_; lean_object* v_res_4919_; 
v_i_boxed_4917_ = lean_unbox_usize(v_i_4905_);
lean_dec(v_i_4905_);
v_stop_boxed_4918_ = lean_unbox_usize(v_stop_4906_);
lean_dec(v_stop_4906_);
v_res_4919_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__22(v_00_u03b1_4900_, v_00_u03b2_4901_, v_00_u03c3_4902_, v_f_4903_, v_as_4904_, v_i_boxed_4917_, v_stop_boxed_4918_, v_b_4907_, v___y_4908_, v___y_4909_, v___y_4910_, v___y_4911_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_);
lean_dec(v___y_4915_);
lean_dec_ref(v___y_4914_);
lean_dec(v___y_4913_);
lean_dec_ref(v___y_4912_);
lean_dec_ref(v___y_4911_);
lean_dec(v___y_4910_);
lean_dec_ref(v___y_4909_);
lean_dec_ref(v_as_4904_);
return v_res_4919_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(lean_object* v_00_u03c3_4920_, lean_object* v_00_u03b1_4921_, lean_object* v_00_u03b2_4922_, lean_object* v_f_4923_, lean_object* v_keys_4924_, lean_object* v_vals_4925_, lean_object* v_heq_4926_, lean_object* v_i_4927_, lean_object* v_acc_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_, lean_object* v___y_4936_){
_start:
{
lean_object* v___x_4938_; 
v___x_4938_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___redArg(v_f_4923_, v_keys_4924_, v_vals_4925_, v_i_4927_, v_acc_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_, v___y_4933_, v___y_4934_, v___y_4935_, v___y_4936_);
return v___x_4938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23___boxed(lean_object** _args){
lean_object* v_00_u03c3_4939_ = _args[0];
lean_object* v_00_u03b1_4940_ = _args[1];
lean_object* v_00_u03b2_4941_ = _args[2];
lean_object* v_f_4942_ = _args[3];
lean_object* v_keys_4943_ = _args[4];
lean_object* v_vals_4944_ = _args[5];
lean_object* v_heq_4945_ = _args[6];
lean_object* v_i_4946_ = _args[7];
lean_object* v_acc_4947_ = _args[8];
lean_object* v___y_4948_ = _args[9];
lean_object* v___y_4949_ = _args[10];
lean_object* v___y_4950_ = _args[11];
lean_object* v___y_4951_ = _args[12];
lean_object* v___y_4952_ = _args[13];
lean_object* v___y_4953_ = _args[14];
lean_object* v___y_4954_ = _args[15];
lean_object* v___y_4955_ = _args[16];
lean_object* v___y_4956_ = _args[17];
_start:
{
lean_object* v_res_4957_; 
v_res_4957_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_forM___at___00Lean_Server_Completion_forEligibleDeclsM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0_spec__0_spec__3_spec__9_spec__16_spec__23(v_00_u03c3_4939_, v_00_u03b1_4940_, v_00_u03b2_4941_, v_f_4942_, v_keys_4943_, v_vals_4944_, v_heq_4945_, v_i_4946_, v_acc_4947_, v___y_4948_, v___y_4949_, v___y_4950_, v___y_4951_, v___y_4952_, v___y_4953_, v___y_4954_, v___y_4955_);
lean_dec(v___y_4955_);
lean_dec_ref(v___y_4954_);
lean_dec(v___y_4953_);
lean_dec_ref(v___y_4952_);
lean_dec_ref(v___y_4951_);
lean_dec(v___y_4950_);
lean_dec_ref(v___y_4949_);
lean_dec_ref(v_vals_4944_);
lean_dec_ref(v_keys_4943_);
return v_res_4957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion(lean_object* v_uri_4958_, lean_object* v_pos_4959_, lean_object* v_completionInfoPos_4960_, lean_object* v_ctx_4961_, lean_object* v_lctx_4962_, lean_object* v_stx_4963_, lean_object* v_id_4964_, lean_object* v_hoverInfo_4965_, uint8_t v_danglingDot_4966_, lean_object* v_a_4967_){
_start:
{
lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; 
v___x_4969_ = lean_box(v_danglingDot_4966_);
lean_inc_ref(v_ctx_4961_);
v___x_4970_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore___boxed), 13, 5);
lean_closure_set(v___x_4970_, 0, v_ctx_4961_);
lean_closure_set(v___x_4970_, 1, v_stx_4963_);
lean_closure_set(v___x_4970_, 2, v_id_4964_);
lean_closure_set(v___x_4970_, 3, v_hoverInfo_4965_);
lean_closure_set(v___x_4970_, 4, v___x_4969_);
v___x_4971_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_4958_, v_pos_4959_, v_completionInfoPos_4960_, v_ctx_4961_, v_lctx_4962_, v___x_4970_, v_a_4967_);
return v___x_4971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_idCompletion___boxed(lean_object* v_uri_4972_, lean_object* v_pos_4973_, lean_object* v_completionInfoPos_4974_, lean_object* v_ctx_4975_, lean_object* v_lctx_4976_, lean_object* v_stx_4977_, lean_object* v_id_4978_, lean_object* v_hoverInfo_4979_, lean_object* v_danglingDot_4980_, lean_object* v_a_4981_, lean_object* v_a_4982_){
_start:
{
uint8_t v_danglingDot_boxed_4983_; lean_object* v_res_4984_; 
v_danglingDot_boxed_4983_ = lean_unbox(v_danglingDot_4980_);
v_res_4984_ = l_Lean_Server_Completion_idCompletion(v_uri_4972_, v_pos_4973_, v_completionInfoPos_4974_, v_ctx_4975_, v_lctx_4976_, v_stx_4977_, v_id_4978_, v_hoverInfo_4979_, v_danglingDot_boxed_4983_, v_a_4981_);
lean_dec_ref(v_a_4981_);
return v_res_4984_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(lean_object* v_e_4985_, lean_object* v___y_4986_, lean_object* v___y_4987_){
_start:
{
uint8_t v___x_4989_; 
v___x_4989_ = l_Lean_Expr_hasMVar(v_e_4985_);
if (v___x_4989_ == 0)
{
lean_object* v___x_4990_; lean_object* v___x_4991_; 
v___x_4990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4990_, 0, v_e_4985_);
v___x_4991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4991_, 0, v___x_4990_);
return v___x_4991_;
}
else
{
lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v_mctx_4994_; lean_object* v___x_4995_; lean_object* v_fst_4996_; lean_object* v_snd_4997_; lean_object* v___x_4998_; lean_object* v___x_4999_; lean_object* v_cache_5000_; lean_object* v_zetaDeltaFVarIds_5001_; lean_object* v_postponed_5002_; lean_object* v_diag_5003_; lean_object* v___x_5005_; uint8_t v_isShared_5006_; uint8_t v_isSharedCheck_5013_; 
v___x_4992_ = lean_st_ref_get(v___y_4987_);
lean_dec(v___x_4992_);
v___x_4993_ = lean_st_ref_get(v___y_4986_);
v_mctx_4994_ = lean_ctor_get(v___x_4993_, 0);
lean_inc_ref(v_mctx_4994_);
lean_dec(v___x_4993_);
v___x_4995_ = l_Lean_instantiateMVarsCore(v_mctx_4994_, v_e_4985_);
v_fst_4996_ = lean_ctor_get(v___x_4995_, 0);
lean_inc(v_fst_4996_);
v_snd_4997_ = lean_ctor_get(v___x_4995_, 1);
lean_inc(v_snd_4997_);
lean_dec_ref(v___x_4995_);
v___x_4998_ = lean_st_ref_get(v___y_4987_);
lean_dec(v___x_4998_);
v___x_4999_ = lean_st_ref_take(v___y_4986_);
v_cache_5000_ = lean_ctor_get(v___x_4999_, 1);
v_zetaDeltaFVarIds_5001_ = lean_ctor_get(v___x_4999_, 2);
v_postponed_5002_ = lean_ctor_get(v___x_4999_, 3);
v_diag_5003_ = lean_ctor_get(v___x_4999_, 4);
v_isSharedCheck_5013_ = !lean_is_exclusive(v___x_4999_);
if (v_isSharedCheck_5013_ == 0)
{
lean_object* v_unused_5014_; 
v_unused_5014_ = lean_ctor_get(v___x_4999_, 0);
lean_dec(v_unused_5014_);
v___x_5005_ = v___x_4999_;
v_isShared_5006_ = v_isSharedCheck_5013_;
goto v_resetjp_5004_;
}
else
{
lean_inc(v_diag_5003_);
lean_inc(v_postponed_5002_);
lean_inc(v_zetaDeltaFVarIds_5001_);
lean_inc(v_cache_5000_);
lean_dec(v___x_4999_);
v___x_5005_ = lean_box(0);
v_isShared_5006_ = v_isSharedCheck_5013_;
goto v_resetjp_5004_;
}
v_resetjp_5004_:
{
lean_object* v___x_5008_; 
if (v_isShared_5006_ == 0)
{
lean_ctor_set(v___x_5005_, 0, v_snd_4997_);
v___x_5008_ = v___x_5005_;
goto v_reusejp_5007_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v_snd_4997_);
lean_ctor_set(v_reuseFailAlloc_5012_, 1, v_cache_5000_);
lean_ctor_set(v_reuseFailAlloc_5012_, 2, v_zetaDeltaFVarIds_5001_);
lean_ctor_set(v_reuseFailAlloc_5012_, 3, v_postponed_5002_);
lean_ctor_set(v_reuseFailAlloc_5012_, 4, v_diag_5003_);
v___x_5008_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5007_;
}
v_reusejp_5007_:
{
lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; 
v___x_5009_ = lean_st_ref_set(v___y_4986_, v___x_5008_);
v___x_5010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5010_, 0, v_fst_4996_);
v___x_5011_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5011_, 0, v___x_5010_);
return v___x_5011_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg___boxed(lean_object* v_e_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_){
_start:
{
lean_object* v_res_5019_; 
v_res_5019_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_5015_, v___y_5016_, v___y_5017_);
lean_dec(v___y_5017_);
lean_dec(v___y_5016_);
return v_res_5019_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(lean_object* v_e_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_){
_start:
{
lean_object* v___x_5029_; 
v___x_5029_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_e_5020_, v___y_5025_, v___y_5027_);
return v___x_5029_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___boxed(lean_object* v_e_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_){
_start:
{
lean_object* v_res_5039_; 
v_res_5039_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0(v_e_5030_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_);
lean_dec(v___y_5037_);
lean_dec_ref(v___y_5036_);
lean_dec(v___y_5035_);
lean_dec_ref(v___y_5034_);
lean_dec_ref(v___y_5033_);
lean_dec(v___y_5032_);
lean_dec_ref(v___y_5031_);
return v_res_5039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0(lean_object* v_a_5040_, lean_object* v_declName_5041_, lean_object* v_decl_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_){
_start:
{
lean_object* v_unnormedTypeName_5051_; uint8_t v___x_5052_; 
v_unnormedTypeName_5051_ = l_Lean_Name_getPrefix(v_declName_5041_);
v___x_5052_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v_unnormedTypeName_5051_, v_a_5040_);
if (v___x_5052_ == 0)
{
lean_object* v___x_5053_; lean_object* v___x_5054_; 
lean_dec_ref(v_decl_5042_);
lean_dec(v_declName_5041_);
v___x_5053_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_5054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5054_, 0, v___x_5053_);
return v___x_5054_;
}
else
{
lean_object* v___x_5055_; lean_object* v_a_5056_; lean_object* v___x_5058_; uint8_t v_isShared_5059_; uint8_t v_isSharedCheck_5121_; 
v___x_5055_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_5041_, v___y_5049_);
v_a_5056_ = lean_ctor_get(v___x_5055_, 0);
v_isSharedCheck_5121_ = !lean_is_exclusive(v___x_5055_);
if (v_isSharedCheck_5121_ == 0)
{
v___x_5058_ = v___x_5055_;
v_isShared_5059_ = v_isSharedCheck_5121_;
goto v_resetjp_5057_;
}
else
{
lean_inc(v_a_5056_);
lean_dec(v___x_5055_);
v___x_5058_ = lean_box(0);
v_isShared_5059_ = v_isSharedCheck_5121_;
goto v_resetjp_5057_;
}
v_resetjp_5057_:
{
if (lean_obj_tag(v_a_5056_) == 1)
{
lean_object* v_val_5060_; lean_object* v___x_5062_; uint8_t v_isShared_5063_; uint8_t v_isSharedCheck_5116_; 
lean_del_object(v___x_5058_);
v_val_5060_ = lean_ctor_get(v_a_5056_, 0);
v_isSharedCheck_5116_ = !lean_is_exclusive(v_a_5056_);
if (v_isSharedCheck_5116_ == 0)
{
v___x_5062_ = v_a_5056_;
v_isShared_5063_ = v_isSharedCheck_5116_;
goto v_resetjp_5061_;
}
else
{
lean_inc(v_val_5060_);
lean_dec(v_a_5056_);
v___x_5062_ = lean_box(0);
v_isShared_5063_ = v_isSharedCheck_5116_;
goto v_resetjp_5061_;
}
v_resetjp_5061_:
{
lean_object* v_info_5064_; lean_object* v_kind_5065_; lean_object* v_tags_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; 
v_info_5064_ = lean_ctor_get(v_decl_5042_, 0);
lean_inc_ref(v_info_5064_);
v_kind_5065_ = lean_ctor_get(v_decl_5042_, 1);
lean_inc_ref(v_kind_5065_);
v_tags_5066_ = lean_ctor_get(v_decl_5042_, 2);
lean_inc_ref(v_tags_5066_);
lean_dec_ref(v_decl_5042_);
v___x_5067_ = l_Lean_Name_getPrefix(v_val_5060_);
lean_dec(v_val_5060_);
v___x_5068_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotCompletionMethod(v___x_5067_, v_info_5064_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_);
if (lean_obj_tag(v___x_5068_) == 0)
{
lean_object* v_a_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5107_; 
v_a_5069_ = lean_ctor_get(v___x_5068_, 0);
v_isSharedCheck_5107_ = !lean_is_exclusive(v___x_5068_);
if (v_isSharedCheck_5107_ == 0)
{
v___x_5071_ = v___x_5068_;
v_isShared_5072_ = v_isSharedCheck_5107_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_a_5069_);
lean_dec(v___x_5068_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5107_;
goto v_resetjp_5070_;
}
v_resetjp_5070_:
{
uint8_t v___x_5073_; 
v___x_5073_ = lean_unbox(v_a_5069_);
lean_dec(v_a_5069_);
if (v___x_5073_ == 0)
{
lean_object* v___x_5074_; lean_object* v___x_5076_; 
lean_dec_ref(v_tags_5066_);
lean_dec_ref(v_kind_5065_);
lean_dec_ref(v_info_5064_);
lean_del_object(v___x_5062_);
v___x_5074_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5072_ == 0)
{
lean_ctor_set(v___x_5071_, 0, v___x_5074_);
v___x_5076_ = v___x_5071_;
goto v_reusejp_5075_;
}
else
{
lean_object* v_reuseFailAlloc_5077_; 
v_reuseFailAlloc_5077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5077_, 0, v___x_5074_);
v___x_5076_ = v_reuseFailAlloc_5077_;
goto v_reusejp_5075_;
}
v_reusejp_5075_:
{
return v___x_5076_;
}
}
else
{
lean_object* v___x_5078_; 
lean_del_object(v___x_5071_);
lean_inc(v___y_5049_);
lean_inc_ref(v___y_5048_);
lean_inc(v___y_5047_);
lean_inc_ref(v___y_5046_);
v___x_5078_ = lean_apply_5(v_kind_5065_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_, lean_box(0));
if (lean_obj_tag(v___x_5078_) == 0)
{
lean_object* v_a_5079_; lean_object* v___x_5080_; 
v_a_5079_ = lean_ctor_get(v___x_5078_, 0);
lean_inc(v_a_5079_);
lean_dec_ref(v___x_5078_);
lean_inc(v___y_5049_);
lean_inc_ref(v___y_5048_);
lean_inc(v___y_5047_);
lean_inc_ref(v___y_5046_);
v___x_5080_ = lean_apply_5(v_tags_5066_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_, lean_box(0));
if (lean_obj_tag(v___x_5080_) == 0)
{
lean_object* v_a_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5087_; 
v_a_5081_ = lean_ctor_get(v___x_5080_, 0);
lean_inc(v_a_5081_);
lean_dec_ref(v___x_5080_);
v___x_5082_ = l_Lean_ConstantInfo_name(v_info_5064_);
lean_dec_ref(v_info_5064_);
v___x_5083_ = l_Lean_Name_getString_x21(v___x_5082_);
v___x_5084_ = lean_box(0);
v___x_5085_ = l_Lean_Name_str___override(v___x_5084_, v___x_5083_);
if (v_isShared_5063_ == 0)
{
lean_ctor_set_tag(v___x_5062_, 0);
lean_ctor_set(v___x_5062_, 0, v___x_5082_);
v___x_5087_ = v___x_5062_;
goto v_reusejp_5086_;
}
else
{
lean_object* v_reuseFailAlloc_5090_; 
v_reuseFailAlloc_5090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5090_, 0, v___x_5082_);
v___x_5087_ = v_reuseFailAlloc_5090_;
goto v_reusejp_5086_;
}
v_reusejp_5086_:
{
uint8_t v___x_5088_; lean_object* v___x_5089_; 
v___x_5088_ = lean_unbox(v_a_5079_);
lean_dec(v_a_5079_);
v___x_5089_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5085_, v___x_5087_, v___x_5088_, v_a_5081_, v___y_5043_, v___y_5044_, v___y_5049_);
return v___x_5089_;
}
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
lean_dec(v_a_5079_);
lean_dec_ref(v_info_5064_);
lean_del_object(v___x_5062_);
v_a_5091_ = lean_ctor_get(v___x_5080_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v___x_5080_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5093_ = v___x_5080_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v___x_5080_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5091_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
}
else
{
lean_object* v_a_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5106_; 
lean_dec_ref(v_tags_5066_);
lean_dec_ref(v_info_5064_);
lean_del_object(v___x_5062_);
v_a_5099_ = lean_ctor_get(v___x_5078_, 0);
v_isSharedCheck_5106_ = !lean_is_exclusive(v___x_5078_);
if (v_isSharedCheck_5106_ == 0)
{
v___x_5101_ = v___x_5078_;
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_a_5099_);
lean_dec(v___x_5078_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5104_; 
if (v_isShared_5102_ == 0)
{
v___x_5104_ = v___x_5101_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v_a_5099_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
return v___x_5104_;
}
}
}
}
}
}
else
{
lean_object* v_a_5108_; lean_object* v___x_5110_; uint8_t v_isShared_5111_; uint8_t v_isSharedCheck_5115_; 
lean_dec_ref(v_tags_5066_);
lean_dec_ref(v_kind_5065_);
lean_dec_ref(v_info_5064_);
lean_del_object(v___x_5062_);
v_a_5108_ = lean_ctor_get(v___x_5068_, 0);
v_isSharedCheck_5115_ = !lean_is_exclusive(v___x_5068_);
if (v_isSharedCheck_5115_ == 0)
{
v___x_5110_ = v___x_5068_;
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
else
{
lean_inc(v_a_5108_);
lean_dec(v___x_5068_);
v___x_5110_ = lean_box(0);
v_isShared_5111_ = v_isSharedCheck_5115_;
goto v_resetjp_5109_;
}
v_resetjp_5109_:
{
lean_object* v___x_5113_; 
if (v_isShared_5111_ == 0)
{
v___x_5113_ = v___x_5110_;
goto v_reusejp_5112_;
}
else
{
lean_object* v_reuseFailAlloc_5114_; 
v_reuseFailAlloc_5114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5114_, 0, v_a_5108_);
v___x_5113_ = v_reuseFailAlloc_5114_;
goto v_reusejp_5112_;
}
v_reusejp_5112_:
{
return v___x_5113_;
}
}
}
}
}
else
{
lean_object* v___x_5117_; lean_object* v___x_5119_; 
lean_dec(v_a_5056_);
lean_dec_ref(v_decl_5042_);
v___x_5117_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5059_ == 0)
{
lean_ctor_set(v___x_5058_, 0, v___x_5117_);
v___x_5119_ = v___x_5058_;
goto v_reusejp_5118_;
}
else
{
lean_object* v_reuseFailAlloc_5120_; 
v_reuseFailAlloc_5120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5120_, 0, v___x_5117_);
v___x_5119_ = v_reuseFailAlloc_5120_;
goto v_reusejp_5118_;
}
v_reusejp_5118_:
{
return v___x_5119_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__0___boxed(lean_object* v_a_5122_, lean_object* v_declName_5123_, lean_object* v_decl_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_, lean_object* v___y_5132_){
_start:
{
lean_object* v_res_5133_; 
v_res_5133_ = l_Lean_Server_Completion_dotCompletion___lam__0(v_a_5122_, v_declName_5123_, v_decl_5124_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_, v___y_5129_, v___y_5130_, v___y_5131_);
lean_dec(v___y_5131_);
lean_dec_ref(v___y_5130_);
lean_dec(v___y_5129_);
lean_dec_ref(v___y_5128_);
lean_dec_ref(v___y_5127_);
lean_dec(v___y_5126_);
lean_dec_ref(v___y_5125_);
return v_res_5133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1(lean_object* v_expr_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_){
_start:
{
lean_object* v_a_5147_; lean_object* v___y_5151_; uint8_t v___y_5152_; lean_object* v___y_5162_; lean_object* v_a_5163_; lean_object* v___x_5166_; 
lean_inc(v___y_5141_);
lean_inc_ref(v___y_5140_);
lean_inc(v___y_5139_);
lean_inc_ref(v___y_5138_);
v___x_5166_ = lean_infer_type(v_expr_5134_, v___y_5138_, v___y_5139_, v___y_5140_, v___y_5141_);
if (lean_obj_tag(v___x_5166_) == 0)
{
lean_object* v_a_5167_; lean_object* v___x_5168_; lean_object* v_a_5169_; lean_object* v_a_5170_; lean_object* v___x_5171_; 
v_a_5167_ = lean_ctor_get(v___x_5166_, 0);
lean_inc(v_a_5167_);
lean_dec_ref(v___x_5166_);
v___x_5168_ = l_Lean_instantiateMVars___at___00Lean_Server_Completion_dotCompletion_spec__0___redArg(v_a_5167_, v___y_5139_, v___y_5141_);
v_a_5169_ = lean_ctor_get(v___x_5168_, 0);
lean_inc(v_a_5169_);
lean_dec_ref(v___x_5168_);
v_a_5170_ = lean_ctor_get(v_a_5169_, 0);
lean_inc(v_a_5170_);
lean_dec(v_a_5169_);
v___x_5171_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet(v_a_5170_, v___y_5138_, v___y_5139_, v___y_5140_, v___y_5141_);
if (lean_obj_tag(v___x_5171_) == 0)
{
lean_object* v_a_5172_; 
v_a_5172_ = lean_ctor_get(v___x_5171_, 0);
lean_inc(v_a_5172_);
lean_dec_ref(v___x_5171_);
v_a_5147_ = v_a_5172_;
goto v___jp_5146_;
}
else
{
lean_object* v_a_5173_; lean_object* v___x_5175_; uint8_t v_isShared_5176_; uint8_t v_isSharedCheck_5180_; 
v_a_5173_ = lean_ctor_get(v___x_5171_, 0);
v_isSharedCheck_5180_ = !lean_is_exclusive(v___x_5171_);
if (v_isSharedCheck_5180_ == 0)
{
v___x_5175_ = v___x_5171_;
v_isShared_5176_ = v_isSharedCheck_5180_;
goto v_resetjp_5174_;
}
else
{
lean_inc(v_a_5173_);
lean_dec(v___x_5171_);
v___x_5175_ = lean_box(0);
v_isShared_5176_ = v_isSharedCheck_5180_;
goto v_resetjp_5174_;
}
v_resetjp_5174_:
{
lean_object* v___x_5178_; 
lean_inc(v_a_5173_);
if (v_isShared_5176_ == 0)
{
v___x_5178_ = v___x_5175_;
goto v_reusejp_5177_;
}
else
{
lean_object* v_reuseFailAlloc_5179_; 
v_reuseFailAlloc_5179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5179_, 0, v_a_5173_);
v___x_5178_ = v_reuseFailAlloc_5179_;
goto v_reusejp_5177_;
}
v_reusejp_5177_:
{
v___y_5162_ = v___x_5178_;
v_a_5163_ = v_a_5173_;
goto v___jp_5161_;
}
}
}
}
else
{
lean_object* v_a_5181_; lean_object* v___x_5183_; uint8_t v_isShared_5184_; uint8_t v_isSharedCheck_5188_; 
v_a_5181_ = lean_ctor_get(v___x_5166_, 0);
v_isSharedCheck_5188_ = !lean_is_exclusive(v___x_5166_);
if (v_isSharedCheck_5188_ == 0)
{
v___x_5183_ = v___x_5166_;
v_isShared_5184_ = v_isSharedCheck_5188_;
goto v_resetjp_5182_;
}
else
{
lean_inc(v_a_5181_);
lean_dec(v___x_5166_);
v___x_5183_ = lean_box(0);
v_isShared_5184_ = v_isSharedCheck_5188_;
goto v_resetjp_5182_;
}
v_resetjp_5182_:
{
lean_object* v___x_5186_; 
lean_inc(v_a_5181_);
if (v_isShared_5184_ == 0)
{
v___x_5186_ = v___x_5183_;
goto v_reusejp_5185_;
}
else
{
lean_object* v_reuseFailAlloc_5187_; 
v_reuseFailAlloc_5187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5187_, 0, v_a_5181_);
v___x_5186_ = v_reuseFailAlloc_5187_;
goto v_reusejp_5185_;
}
v_reusejp_5185_:
{
v___y_5162_ = v___x_5186_;
v_a_5163_ = v_a_5181_;
goto v___jp_5161_;
}
}
}
v___jp_5143_:
{
lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5144_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_5145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5145_, 0, v___x_5144_);
return v___x_5145_;
}
v___jp_5146_:
{
if (lean_obj_tag(v_a_5147_) == 0)
{
lean_object* v___f_5148_; lean_object* v___x_5149_; 
v___f_5148_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__0___boxed), 11, 1);
lean_closure_set(v___f_5148_, 0, v_a_5147_);
v___x_5149_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5148_, v___y_5135_, v___y_5136_, v___y_5137_, v___y_5138_, v___y_5139_, v___y_5140_, v___y_5141_);
return v___x_5149_;
}
else
{
goto v___jp_5143_;
}
}
v___jp_5150_:
{
if (v___y_5152_ == 0)
{
lean_dec_ref(v___y_5151_);
goto v___jp_5143_;
}
else
{
lean_object* v_a_5153_; lean_object* v___x_5155_; uint8_t v_isShared_5156_; uint8_t v_isSharedCheck_5160_; 
v_a_5153_ = lean_ctor_get(v___y_5151_, 0);
v_isSharedCheck_5160_ = !lean_is_exclusive(v___y_5151_);
if (v_isSharedCheck_5160_ == 0)
{
v___x_5155_ = v___y_5151_;
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
else
{
lean_inc(v_a_5153_);
lean_dec(v___y_5151_);
v___x_5155_ = lean_box(0);
v_isShared_5156_ = v_isSharedCheck_5160_;
goto v_resetjp_5154_;
}
v_resetjp_5154_:
{
lean_object* v___x_5158_; 
if (v_isShared_5156_ == 0)
{
v___x_5158_ = v___x_5155_;
goto v_reusejp_5157_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v_a_5153_);
v___x_5158_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5157_;
}
v_reusejp_5157_:
{
return v___x_5158_;
}
}
}
}
v___jp_5161_:
{
uint8_t v___x_5164_; 
v___x_5164_ = l_Lean_Exception_isInterrupt(v_a_5163_);
if (v___x_5164_ == 0)
{
uint8_t v___x_5165_; 
v___x_5165_ = l_Lean_Exception_isRuntime(v_a_5163_);
v___y_5151_ = v___y_5162_;
v___y_5152_ = v___x_5165_;
goto v___jp_5150_;
}
else
{
lean_dec_ref(v_a_5163_);
v___y_5151_ = v___y_5162_;
v___y_5152_ = v___x_5164_;
goto v___jp_5150_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___lam__1___boxed(lean_object* v_expr_5189_, lean_object* v___y_5190_, lean_object* v___y_5191_, lean_object* v___y_5192_, lean_object* v___y_5193_, lean_object* v___y_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_){
_start:
{
lean_object* v_res_5198_; 
v_res_5198_ = l_Lean_Server_Completion_dotCompletion___lam__1(v_expr_5189_, v___y_5190_, v___y_5191_, v___y_5192_, v___y_5193_, v___y_5194_, v___y_5195_, v___y_5196_);
lean_dec(v___y_5196_);
lean_dec_ref(v___y_5195_);
lean_dec(v___y_5194_);
lean_dec_ref(v___y_5193_);
lean_dec_ref(v___y_5192_);
lean_dec(v___y_5191_);
lean_dec_ref(v___y_5190_);
return v_res_5198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion(lean_object* v_uri_5199_, lean_object* v_pos_5200_, lean_object* v_completionInfoPos_5201_, lean_object* v_ctx_5202_, lean_object* v_info_5203_, lean_object* v_a_5204_){
_start:
{
lean_object* v_lctx_5206_; lean_object* v_expr_5207_; lean_object* v___f_5208_; lean_object* v___x_5209_; 
v_lctx_5206_ = lean_ctor_get(v_info_5203_, 1);
lean_inc_ref(v_lctx_5206_);
v_expr_5207_ = lean_ctor_get(v_info_5203_, 3);
lean_inc_ref(v_expr_5207_);
lean_dec_ref(v_info_5203_);
v___f_5208_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotCompletion___lam__1___boxed), 9, 1);
lean_closure_set(v___f_5208_, 0, v_expr_5207_);
v___x_5209_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5199_, v_pos_5200_, v_completionInfoPos_5201_, v_ctx_5202_, v_lctx_5206_, v___f_5208_, v_a_5204_);
return v___x_5209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotCompletion___boxed(lean_object* v_uri_5210_, lean_object* v_pos_5211_, lean_object* v_completionInfoPos_5212_, lean_object* v_ctx_5213_, lean_object* v_info_5214_, lean_object* v_a_5215_, lean_object* v_a_5216_){
_start:
{
lean_object* v_res_5217_; 
v_res_5217_ = l_Lean_Server_Completion_dotCompletion(v_uri_5210_, v_pos_5211_, v_completionInfoPos_5212_, v_ctx_5213_, v_info_5214_, v_a_5215_);
lean_dec_ref(v_a_5215_);
return v_res_5217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0(lean_object* v___x_5218_, uint8_t v___x_5219_, lean_object* v_id_5220_, lean_object* v_declName_5221_, lean_object* v_decl_5222_, lean_object* v___y_5223_, lean_object* v___y_5224_, lean_object* v___y_5225_, lean_object* v___y_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_){
_start:
{
lean_object* v___x_5234_; uint8_t v___x_5235_; 
v___x_5234_ = l_Lean_Name_getPrefix(v_declName_5221_);
lean_inc(v___x_5218_);
v___x_5235_ = l_Std_DTreeMap_Internal_Impl_contains___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_getDotCompletionTypeNameSet_spec__0___redArg(v___x_5234_, v___x_5218_);
if (v___x_5235_ == 0)
{
lean_dec_ref(v_decl_5222_);
lean_dec(v_declName_5221_);
lean_dec(v___x_5218_);
goto v___jp_5231_;
}
else
{
if (v___x_5219_ == 0)
{
lean_object* v___x_5236_; lean_object* v_a_5237_; lean_object* v___x_5239_; uint8_t v_isShared_5240_; uint8_t v_isSharedCheck_5333_; 
v___x_5236_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_normPrivateName_x3f___redArg(v_declName_5221_, v___y_5229_);
v_a_5237_ = lean_ctor_get(v___x_5236_, 0);
v_isSharedCheck_5333_ = !lean_is_exclusive(v___x_5236_);
if (v_isSharedCheck_5333_ == 0)
{
v___x_5239_ = v___x_5236_;
v_isShared_5240_ = v_isSharedCheck_5333_;
goto v_resetjp_5238_;
}
else
{
lean_inc(v_a_5237_);
lean_dec(v___x_5236_);
v___x_5239_ = lean_box(0);
v_isShared_5240_ = v_isSharedCheck_5333_;
goto v_resetjp_5238_;
}
v_resetjp_5238_:
{
if (lean_obj_tag(v_a_5237_) == 1)
{
lean_object* v_val_5241_; lean_object* v___x_5243_; uint8_t v_isShared_5244_; uint8_t v_isSharedCheck_5328_; 
lean_del_object(v___x_5239_);
v_val_5241_ = lean_ctor_get(v_a_5237_, 0);
v_isSharedCheck_5328_ = !lean_is_exclusive(v_a_5237_);
if (v_isSharedCheck_5328_ == 0)
{
v___x_5243_ = v_a_5237_;
v_isShared_5244_ = v_isSharedCheck_5328_;
goto v_resetjp_5242_;
}
else
{
lean_inc(v_val_5241_);
lean_dec(v_a_5237_);
v___x_5243_ = lean_box(0);
v_isShared_5244_ = v_isSharedCheck_5328_;
goto v_resetjp_5242_;
}
v_resetjp_5242_:
{
lean_object* v_info_5245_; lean_object* v_kind_5246_; lean_object* v_tags_5247_; lean_object* v___x_5248_; 
v_info_5245_ = lean_ctor_get(v_decl_5222_, 0);
lean_inc_ref(v_info_5245_);
v_kind_5246_ = lean_ctor_get(v_decl_5222_, 1);
lean_inc_ref(v_kind_5246_);
v_tags_5247_ = lean_ctor_get(v_decl_5222_, 2);
lean_inc_ref(v_tags_5247_);
lean_dec_ref(v_decl_5222_);
v___x_5248_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_isDotIdCompletionMethod(v___x_5218_, v_info_5245_, v___y_5226_, v___y_5227_, v___y_5228_, v___y_5229_);
if (lean_obj_tag(v___x_5248_) == 0)
{
lean_object* v_a_5249_; lean_object* v___x_5251_; uint8_t v_isShared_5252_; uint8_t v_isSharedCheck_5319_; 
v_a_5249_ = lean_ctor_get(v___x_5248_, 0);
v_isSharedCheck_5319_ = !lean_is_exclusive(v___x_5248_);
if (v_isSharedCheck_5319_ == 0)
{
v___x_5251_ = v___x_5248_;
v_isShared_5252_ = v_isSharedCheck_5319_;
goto v_resetjp_5250_;
}
else
{
lean_inc(v_a_5249_);
lean_dec(v___x_5248_);
v___x_5251_ = lean_box(0);
v_isShared_5252_ = v_isSharedCheck_5319_;
goto v_resetjp_5250_;
}
v_resetjp_5250_:
{
uint8_t v___x_5253_; 
v___x_5253_ = lean_unbox(v_a_5249_);
lean_dec(v_a_5249_);
if (v___x_5253_ == 0)
{
lean_object* v___x_5254_; lean_object* v___x_5256_; 
lean_dec_ref(v_tags_5247_);
lean_dec_ref(v_kind_5246_);
lean_dec_ref(v_info_5245_);
lean_del_object(v___x_5243_);
lean_dec(v_val_5241_);
v___x_5254_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5252_ == 0)
{
lean_ctor_set(v___x_5251_, 0, v___x_5254_);
v___x_5256_ = v___x_5251_;
goto v_reusejp_5255_;
}
else
{
lean_object* v_reuseFailAlloc_5257_; 
v_reuseFailAlloc_5257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5257_, 0, v___x_5254_);
v___x_5256_ = v_reuseFailAlloc_5257_;
goto v_reusejp_5255_;
}
v_reusejp_5255_:
{
return v___x_5256_;
}
}
else
{
lean_object* v___x_5258_; 
lean_del_object(v___x_5251_);
lean_inc(v___y_5229_);
lean_inc_ref(v___y_5228_);
lean_inc(v___y_5227_);
lean_inc_ref(v___y_5226_);
v___x_5258_ = lean_apply_5(v_kind_5246_, v___y_5226_, v___y_5227_, v___y_5228_, v___y_5229_, lean_box(0));
if (lean_obj_tag(v___x_5258_) == 0)
{
lean_object* v_a_5259_; lean_object* v___x_5260_; 
v_a_5259_ = lean_ctor_get(v___x_5258_, 0);
lean_inc(v_a_5259_);
lean_dec_ref(v___x_5258_);
lean_inc(v___y_5229_);
lean_inc_ref(v___y_5228_);
lean_inc(v___y_5227_);
lean_inc_ref(v___y_5226_);
v___x_5260_ = lean_apply_5(v_tags_5247_, v___y_5226_, v___y_5227_, v___y_5228_, v___y_5229_, lean_box(0));
if (lean_obj_tag(v___x_5260_) == 0)
{
lean_object* v_a_5261_; uint8_t v___x_5262_; 
v_a_5261_ = lean_ctor_get(v___x_5260_, 0);
lean_inc(v_a_5261_);
lean_dec_ref(v___x_5260_);
v___x_5262_ = l_Lean_Name_isAnonymous(v_id_5220_);
if (v___x_5262_ == 0)
{
lean_object* v___x_5263_; lean_object* v___x_5264_; lean_object* v_a_5265_; lean_object* v___x_5267_; uint8_t v_isShared_5268_; uint8_t v_isSharedCheck_5284_; 
lean_del_object(v___x_5243_);
v___x_5263_ = l_Lean_Name_getPrefix(v_val_5241_);
v___x_5264_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_matchDecl_x3f___redArg(v___x_5263_, v_id_5220_, v___x_5262_, v_val_5241_, v___y_5229_);
lean_dec(v___x_5263_);
v_a_5265_ = lean_ctor_get(v___x_5264_, 0);
v_isSharedCheck_5284_ = !lean_is_exclusive(v___x_5264_);
if (v_isSharedCheck_5284_ == 0)
{
v___x_5267_ = v___x_5264_;
v_isShared_5268_ = v_isSharedCheck_5284_;
goto v_resetjp_5266_;
}
else
{
lean_inc(v_a_5265_);
lean_dec(v___x_5264_);
v___x_5267_ = lean_box(0);
v_isShared_5268_ = v_isSharedCheck_5284_;
goto v_resetjp_5266_;
}
v_resetjp_5266_:
{
if (lean_obj_tag(v_a_5265_) == 1)
{
lean_object* v_val_5269_; lean_object* v___x_5271_; uint8_t v_isShared_5272_; uint8_t v_isSharedCheck_5279_; 
lean_del_object(v___x_5267_);
v_val_5269_ = lean_ctor_get(v_a_5265_, 0);
v_isSharedCheck_5279_ = !lean_is_exclusive(v_a_5265_);
if (v_isSharedCheck_5279_ == 0)
{
v___x_5271_ = v_a_5265_;
v_isShared_5272_ = v_isSharedCheck_5279_;
goto v_resetjp_5270_;
}
else
{
lean_inc(v_val_5269_);
lean_dec(v_a_5265_);
v___x_5271_ = lean_box(0);
v_isShared_5272_ = v_isSharedCheck_5279_;
goto v_resetjp_5270_;
}
v_resetjp_5270_:
{
lean_object* v___x_5273_; lean_object* v___x_5275_; 
v___x_5273_ = l_Lean_ConstantInfo_name(v_info_5245_);
lean_dec_ref(v_info_5245_);
if (v_isShared_5272_ == 0)
{
lean_ctor_set_tag(v___x_5271_, 0);
lean_ctor_set(v___x_5271_, 0, v___x_5273_);
v___x_5275_ = v___x_5271_;
goto v_reusejp_5274_;
}
else
{
lean_object* v_reuseFailAlloc_5278_; 
v_reuseFailAlloc_5278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5278_, 0, v___x_5273_);
v___x_5275_ = v_reuseFailAlloc_5278_;
goto v_reusejp_5274_;
}
v_reusejp_5274_:
{
uint8_t v___x_5276_; lean_object* v___x_5277_; 
v___x_5276_ = lean_unbox(v_a_5259_);
lean_dec(v_a_5259_);
v___x_5277_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v_val_5269_, v___x_5275_, v___x_5276_, v_a_5261_, v___y_5223_, v___y_5224_, v___y_5229_);
return v___x_5277_;
}
}
}
else
{
lean_object* v___x_5280_; lean_object* v___x_5282_; 
lean_dec(v_a_5265_);
lean_dec(v_a_5261_);
lean_dec(v_a_5259_);
lean_dec_ref(v_info_5245_);
v___x_5280_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5268_ == 0)
{
lean_ctor_set(v___x_5267_, 0, v___x_5280_);
v___x_5282_ = v___x_5267_;
goto v_reusejp_5281_;
}
else
{
lean_object* v_reuseFailAlloc_5283_; 
v_reuseFailAlloc_5283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5283_, 0, v___x_5280_);
v___x_5282_ = v_reuseFailAlloc_5283_;
goto v_reusejp_5281_;
}
v_reusejp_5281_:
{
return v___x_5282_;
}
}
}
}
else
{
lean_object* v___x_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5290_; 
lean_dec(v_val_5241_);
v___x_5285_ = l_Lean_ConstantInfo_name(v_info_5245_);
lean_dec_ref(v_info_5245_);
v___x_5286_ = l_Lean_Name_getString_x21(v___x_5285_);
v___x_5287_ = lean_box(0);
v___x_5288_ = l_Lean_Name_str___override(v___x_5287_, v___x_5286_);
if (v_isShared_5244_ == 0)
{
lean_ctor_set_tag(v___x_5243_, 0);
lean_ctor_set(v___x_5243_, 0, v___x_5285_);
v___x_5290_ = v___x_5243_;
goto v_reusejp_5289_;
}
else
{
lean_object* v_reuseFailAlloc_5302_; 
v_reuseFailAlloc_5302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5302_, 0, v___x_5285_);
v___x_5290_ = v_reuseFailAlloc_5302_;
goto v_reusejp_5289_;
}
v_reusejp_5289_:
{
uint8_t v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5294_; uint8_t v_isShared_5295_; uint8_t v_isSharedCheck_5300_; 
v___x_5291_ = lean_unbox(v_a_5259_);
lean_dec(v_a_5259_);
v___x_5292_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addUnresolvedCompletionItem___redArg(v___x_5288_, v___x_5290_, v___x_5291_, v_a_5261_, v___y_5223_, v___y_5224_, v___y_5229_);
v_isSharedCheck_5300_ = !lean_is_exclusive(v___x_5292_);
if (v_isSharedCheck_5300_ == 0)
{
lean_object* v_unused_5301_; 
v_unused_5301_ = lean_ctor_get(v___x_5292_, 0);
lean_dec(v_unused_5301_);
v___x_5294_ = v___x_5292_;
v_isShared_5295_ = v_isSharedCheck_5300_;
goto v_resetjp_5293_;
}
else
{
lean_dec(v___x_5292_);
v___x_5294_ = lean_box(0);
v_isShared_5295_ = v_isSharedCheck_5300_;
goto v_resetjp_5293_;
}
v_resetjp_5293_:
{
lean_object* v___x_5296_; lean_object* v___x_5298_; 
v___x_5296_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5295_ == 0)
{
lean_ctor_set(v___x_5294_, 0, v___x_5296_);
v___x_5298_ = v___x_5294_;
goto v_reusejp_5297_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v___x_5296_);
v___x_5298_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5297_;
}
v_reusejp_5297_:
{
return v___x_5298_;
}
}
}
}
}
else
{
lean_object* v_a_5303_; lean_object* v___x_5305_; uint8_t v_isShared_5306_; uint8_t v_isSharedCheck_5310_; 
lean_dec(v_a_5259_);
lean_dec_ref(v_info_5245_);
lean_del_object(v___x_5243_);
lean_dec(v_val_5241_);
v_a_5303_ = lean_ctor_get(v___x_5260_, 0);
v_isSharedCheck_5310_ = !lean_is_exclusive(v___x_5260_);
if (v_isSharedCheck_5310_ == 0)
{
v___x_5305_ = v___x_5260_;
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
else
{
lean_inc(v_a_5303_);
lean_dec(v___x_5260_);
v___x_5305_ = lean_box(0);
v_isShared_5306_ = v_isSharedCheck_5310_;
goto v_resetjp_5304_;
}
v_resetjp_5304_:
{
lean_object* v___x_5308_; 
if (v_isShared_5306_ == 0)
{
v___x_5308_ = v___x_5305_;
goto v_reusejp_5307_;
}
else
{
lean_object* v_reuseFailAlloc_5309_; 
v_reuseFailAlloc_5309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5309_, 0, v_a_5303_);
v___x_5308_ = v_reuseFailAlloc_5309_;
goto v_reusejp_5307_;
}
v_reusejp_5307_:
{
return v___x_5308_;
}
}
}
}
else
{
lean_object* v_a_5311_; lean_object* v___x_5313_; uint8_t v_isShared_5314_; uint8_t v_isSharedCheck_5318_; 
lean_dec_ref(v_tags_5247_);
lean_dec_ref(v_info_5245_);
lean_del_object(v___x_5243_);
lean_dec(v_val_5241_);
v_a_5311_ = lean_ctor_get(v___x_5258_, 0);
v_isSharedCheck_5318_ = !lean_is_exclusive(v___x_5258_);
if (v_isSharedCheck_5318_ == 0)
{
v___x_5313_ = v___x_5258_;
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
else
{
lean_inc(v_a_5311_);
lean_dec(v___x_5258_);
v___x_5313_ = lean_box(0);
v_isShared_5314_ = v_isSharedCheck_5318_;
goto v_resetjp_5312_;
}
v_resetjp_5312_:
{
lean_object* v___x_5316_; 
if (v_isShared_5314_ == 0)
{
v___x_5316_ = v___x_5313_;
goto v_reusejp_5315_;
}
else
{
lean_object* v_reuseFailAlloc_5317_; 
v_reuseFailAlloc_5317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5317_, 0, v_a_5311_);
v___x_5316_ = v_reuseFailAlloc_5317_;
goto v_reusejp_5315_;
}
v_reusejp_5315_:
{
return v___x_5316_;
}
}
}
}
}
}
else
{
lean_object* v_a_5320_; lean_object* v___x_5322_; uint8_t v_isShared_5323_; uint8_t v_isSharedCheck_5327_; 
lean_dec_ref(v_tags_5247_);
lean_dec_ref(v_kind_5246_);
lean_dec_ref(v_info_5245_);
lean_del_object(v___x_5243_);
lean_dec(v_val_5241_);
v_a_5320_ = lean_ctor_get(v___x_5248_, 0);
v_isSharedCheck_5327_ = !lean_is_exclusive(v___x_5248_);
if (v_isSharedCheck_5327_ == 0)
{
v___x_5322_ = v___x_5248_;
v_isShared_5323_ = v_isSharedCheck_5327_;
goto v_resetjp_5321_;
}
else
{
lean_inc(v_a_5320_);
lean_dec(v___x_5248_);
v___x_5322_ = lean_box(0);
v_isShared_5323_ = v_isSharedCheck_5327_;
goto v_resetjp_5321_;
}
v_resetjp_5321_:
{
lean_object* v___x_5325_; 
if (v_isShared_5323_ == 0)
{
v___x_5325_ = v___x_5322_;
goto v_reusejp_5324_;
}
else
{
lean_object* v_reuseFailAlloc_5326_; 
v_reuseFailAlloc_5326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5326_, 0, v_a_5320_);
v___x_5325_ = v_reuseFailAlloc_5326_;
goto v_reusejp_5324_;
}
v_reusejp_5324_:
{
return v___x_5325_;
}
}
}
}
}
else
{
lean_object* v___x_5329_; lean_object* v___x_5331_; 
lean_dec(v_a_5237_);
lean_dec_ref(v_decl_5222_);
lean_dec(v___x_5218_);
v___x_5329_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5240_ == 0)
{
lean_ctor_set(v___x_5239_, 0, v___x_5329_);
v___x_5331_ = v___x_5239_;
goto v_reusejp_5330_;
}
else
{
lean_object* v_reuseFailAlloc_5332_; 
v_reuseFailAlloc_5332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5332_, 0, v___x_5329_);
v___x_5331_ = v_reuseFailAlloc_5332_;
goto v_reusejp_5330_;
}
v_reusejp_5330_:
{
return v___x_5331_;
}
}
}
}
else
{
lean_dec_ref(v_decl_5222_);
lean_dec(v_declName_5221_);
lean_dec(v___x_5218_);
goto v___jp_5231_;
}
}
v___jp_5231_:
{
lean_object* v___x_5232_; lean_object* v___x_5233_; 
v___x_5232_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_5233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5233_, 0, v___x_5232_);
return v___x_5233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed(lean_object* v___x_5334_, lean_object* v___x_5335_, lean_object* v_id_5336_, lean_object* v_declName_5337_, lean_object* v_decl_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_){
_start:
{
uint8_t v___x_21370__boxed_5347_; lean_object* v_res_5348_; 
v___x_21370__boxed_5347_ = lean_unbox(v___x_5335_);
v_res_5348_ = l_Lean_Server_Completion_dotIdCompletion___lam__0(v___x_5334_, v___x_21370__boxed_5347_, v_id_5336_, v_declName_5337_, v_decl_5338_, v___y_5339_, v___y_5340_, v___y_5341_, v___y_5342_, v___y_5343_, v___y_5344_, v___y_5345_);
lean_dec(v___y_5345_);
lean_dec_ref(v___y_5344_);
lean_dec(v___y_5343_);
lean_dec_ref(v___y_5342_);
lean_dec_ref(v___y_5341_);
lean_dec(v___y_5340_);
lean_dec_ref(v___y_5339_);
lean_dec(v_id_5336_);
return v_res_5348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1(lean_object* v_expectedType_x3f_5349_, lean_object* v_id_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_){
_start:
{
if (lean_obj_tag(v_expectedType_x3f_5349_) == 1)
{
lean_object* v_val_5359_; lean_object* v___x_5360_; 
v_val_5359_ = lean_ctor_get(v_expectedType_x3f_5349_, 0);
lean_inc(v_val_5359_);
lean_dec_ref(v_expectedType_x3f_5349_);
v___x_5360_ = l_Lean_Server_Completion_getDotIdCompletionTypeNames(v_val_5359_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_);
if (lean_obj_tag(v___x_5360_) == 0)
{
lean_object* v_a_5361_; lean_object* v___x_5363_; uint8_t v_isShared_5364_; uint8_t v_isSharedCheck_5376_; 
v_a_5361_ = lean_ctor_get(v___x_5360_, 0);
v_isSharedCheck_5376_ = !lean_is_exclusive(v___x_5360_);
if (v_isSharedCheck_5376_ == 0)
{
v___x_5363_ = v___x_5360_;
v_isShared_5364_ = v_isSharedCheck_5376_;
goto v_resetjp_5362_;
}
else
{
lean_inc(v_a_5361_);
lean_dec(v___x_5360_);
v___x_5363_ = lean_box(0);
v_isShared_5364_ = v_isSharedCheck_5376_;
goto v_resetjp_5362_;
}
v_resetjp_5362_:
{
lean_object* v___x_5365_; lean_object* v___x_5366_; uint8_t v___x_5367_; 
v___x_5365_ = lean_array_get_size(v_a_5361_);
v___x_5366_ = lean_unsigned_to_nat(0u);
v___x_5367_ = lean_nat_dec_eq(v___x_5365_, v___x_5366_);
if (v___x_5367_ == 0)
{
lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___f_5370_; lean_object* v___x_5371_; 
lean_del_object(v___x_5363_);
v___x_5368_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_NameSetModPrivate_ofArray(v_a_5361_);
lean_dec(v_a_5361_);
v___x_5369_ = lean_box(v___x_5367_);
v___f_5370_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__0___boxed), 13, 3);
lean_closure_set(v___f_5370_, 0, v___x_5368_);
lean_closure_set(v___f_5370_, 1, v___x_5369_);
lean_closure_set(v___f_5370_, 2, v_id_5350_);
v___x_5371_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_forEligibleDeclsWithCancellationM___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_idCompletionCore_spec__0(v___f_5370_, v___y_5351_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_, v___y_5356_, v___y_5357_);
return v___x_5371_;
}
else
{
lean_object* v___x_5372_; lean_object* v___x_5374_; 
lean_dec(v_a_5361_);
lean_dec(v_id_5350_);
v___x_5372_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5364_ == 0)
{
lean_ctor_set(v___x_5363_, 0, v___x_5372_);
v___x_5374_ = v___x_5363_;
goto v_reusejp_5373_;
}
else
{
lean_object* v_reuseFailAlloc_5375_; 
v_reuseFailAlloc_5375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5375_, 0, v___x_5372_);
v___x_5374_ = v_reuseFailAlloc_5375_;
goto v_reusejp_5373_;
}
v_reusejp_5373_:
{
return v___x_5374_;
}
}
}
}
else
{
lean_object* v_a_5377_; lean_object* v___x_5379_; uint8_t v_isShared_5380_; uint8_t v_isSharedCheck_5384_; 
lean_dec(v_id_5350_);
v_a_5377_ = lean_ctor_get(v___x_5360_, 0);
v_isSharedCheck_5384_ = !lean_is_exclusive(v___x_5360_);
if (v_isSharedCheck_5384_ == 0)
{
v___x_5379_ = v___x_5360_;
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
else
{
lean_inc(v_a_5377_);
lean_dec(v___x_5360_);
v___x_5379_ = lean_box(0);
v_isShared_5380_ = v_isSharedCheck_5384_;
goto v_resetjp_5378_;
}
v_resetjp_5378_:
{
lean_object* v___x_5382_; 
if (v_isShared_5380_ == 0)
{
v___x_5382_ = v___x_5379_;
goto v_reusejp_5381_;
}
else
{
lean_object* v_reuseFailAlloc_5383_; 
v_reuseFailAlloc_5383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5383_, 0, v_a_5377_);
v___x_5382_ = v_reuseFailAlloc_5383_;
goto v_reusejp_5381_;
}
v_reusejp_5381_:
{
return v___x_5382_;
}
}
}
}
else
{
lean_object* v___x_5385_; lean_object* v___x_5386_; 
lean_dec(v_id_5350_);
lean_dec(v_expectedType_x3f_5349_);
v___x_5385_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
v___x_5386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5386_, 0, v___x_5385_);
return v___x_5386_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed(lean_object* v_expectedType_x3f_5387_, lean_object* v_id_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_){
_start:
{
lean_object* v_res_5397_; 
v_res_5397_ = l_Lean_Server_Completion_dotIdCompletion___lam__1(v_expectedType_x3f_5387_, v_id_5388_, v___y_5389_, v___y_5390_, v___y_5391_, v___y_5392_, v___y_5393_, v___y_5394_, v___y_5395_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
lean_dec(v___y_5393_);
lean_dec_ref(v___y_5392_);
lean_dec_ref(v___y_5391_);
lean_dec(v___y_5390_);
lean_dec_ref(v___y_5389_);
return v_res_5397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion(lean_object* v_uri_5398_, lean_object* v_pos_5399_, lean_object* v_completionInfoPos_5400_, lean_object* v_ctx_5401_, lean_object* v_lctx_5402_, lean_object* v_id_5403_, lean_object* v_expectedType_x3f_5404_, lean_object* v_a_5405_){
_start:
{
lean_object* v___y_5407_; lean_object* v___x_5408_; 
v___y_5407_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_dotIdCompletion___lam__1___boxed), 10, 2);
lean_closure_set(v___y_5407_, 0, v_expectedType_x3f_5404_);
lean_closure_set(v___y_5407_, 1, v_id_5403_);
v___x_5408_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5398_, v_pos_5399_, v_completionInfoPos_5400_, v_ctx_5401_, v_lctx_5402_, v___y_5407_, v_a_5405_);
return v___x_5408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_dotIdCompletion___boxed(lean_object* v_uri_5409_, lean_object* v_pos_5410_, lean_object* v_completionInfoPos_5411_, lean_object* v_ctx_5412_, lean_object* v_lctx_5413_, lean_object* v_id_5414_, lean_object* v_expectedType_x3f_5415_, lean_object* v_a_5416_, lean_object* v_a_5417_){
_start:
{
lean_object* v_res_5418_; 
v_res_5418_ = l_Lean_Server_Completion_dotIdCompletion(v_uri_5409_, v_pos_5410_, v_completionInfoPos_5411_, v_ctx_5412_, v_lctx_5413_, v_id_5414_, v_expectedType_x3f_5415_, v_a_5416_);
lean_dec_ref(v_a_5416_);
return v_res_5418_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_5419_; 
v___x_5419_ = lean_mk_string_unchecked("field", 5, 5);
return v___x_5419_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_5420_; lean_object* v___x_5421_; 
v___x_5420_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__0);
v___x_5421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5421_, 0, v___x_5420_);
return v___x_5421_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2(void){
_start:
{
uint8_t v___x_5422_; lean_object* v___x_5423_; lean_object* v___x_5424_; 
v___x_5422_ = 4;
v___x_5423_ = lean_box(v___x_5422_);
v___x_5424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5424_, 0, v___x_5423_);
return v___x_5424_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(lean_object* v___y_5425_, lean_object* v_as_5426_, size_t v_sz_5427_, size_t v_i_5428_, lean_object* v_b_5429_, lean_object* v___y_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_){
_start:
{
lean_object* v_a_5435_; uint8_t v___x_5439_; 
v___x_5439_ = lean_usize_dec_lt(v_i_5428_, v_sz_5427_);
if (v___x_5439_ == 0)
{
lean_object* v___x_5440_; lean_object* v___x_5441_; 
v___x_5440_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5440_, 0, v_b_5429_);
v___x_5441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5441_, 0, v___x_5440_);
return v___x_5441_;
}
else
{
lean_object* v___x_5442_; lean_object* v_a_5443_; 
v___x_5442_ = lean_box(0);
v_a_5443_ = lean_array_uget_borrowed(v_as_5426_, v_i_5428_);
if (lean_obj_tag(v_a_5443_) == 1)
{
lean_object* v_str_5444_; uint8_t v___x_5445_; 
v_str_5444_ = lean_ctor_get(v_a_5443_, 1);
v___x_5445_ = l_String_charactersIn(v___y_5425_, v_str_5444_);
if (v___x_5445_ == 0)
{
v_a_5435_ = v___x_5442_;
goto v___jp_5434_;
}
else
{
lean_object* v___x_5446_; lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; lean_object* v___x_5450_; 
v___x_5446_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__1);
v___x_5447_ = lean_box(0);
v___x_5448_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___closed__2);
lean_inc_ref(v_str_5444_);
v___x_5449_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5449_, 0, v_str_5444_);
lean_ctor_set(v___x_5449_, 1, v___x_5446_);
lean_ctor_set(v___x_5449_, 2, v___x_5447_);
lean_ctor_set(v___x_5449_, 3, v___x_5448_);
lean_ctor_set(v___x_5449_, 4, v___x_5447_);
lean_ctor_set(v___x_5449_, 5, v___x_5447_);
lean_ctor_set(v___x_5449_, 6, v___x_5447_);
lean_ctor_set(v___x_5449_, 7, v___x_5447_);
v___x_5450_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg(v___x_5449_, v___x_5447_, v___y_5430_, v___y_5431_, v___y_5432_);
if (lean_obj_tag(v___x_5450_) == 0)
{
lean_object* v_a_5451_; 
v_a_5451_ = lean_ctor_get(v___x_5450_, 0);
lean_inc(v_a_5451_);
if (lean_obj_tag(v_a_5451_) == 0)
{
lean_dec_ref(v_a_5451_);
return v___x_5450_;
}
else
{
lean_dec_ref(v_a_5451_);
lean_dec_ref(v___x_5450_);
v_a_5435_ = v___x_5442_;
goto v___jp_5434_;
}
}
else
{
return v___x_5450_;
}
}
}
else
{
v_a_5435_ = v___x_5442_;
goto v___jp_5434_;
}
}
v___jp_5434_:
{
size_t v___x_5436_; size_t v___x_5437_; 
v___x_5436_ = ((size_t)1ULL);
v___x_5437_ = lean_usize_add(v_i_5428_, v___x_5436_);
v_i_5428_ = v___x_5437_;
v_b_5429_ = v_a_5435_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg___boxed(lean_object* v___y_5452_, lean_object* v_as_5453_, lean_object* v_sz_5454_, lean_object* v_i_5455_, lean_object* v_b_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_){
_start:
{
size_t v_sz_boxed_5461_; size_t v_i_boxed_5462_; lean_object* v_res_5463_; 
v_sz_boxed_5461_ = lean_unbox_usize(v_sz_5454_);
lean_dec(v_sz_5454_);
v_i_boxed_5462_ = lean_unbox_usize(v_i_5455_);
lean_dec(v_i_5455_);
v_res_5463_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5452_, v_as_5453_, v_sz_boxed_5461_, v_i_boxed_5462_, v_b_5456_, v___y_5457_, v___y_5458_, v___y_5459_);
lean_dec(v___y_5459_);
lean_dec(v___y_5458_);
lean_dec_ref(v___y_5457_);
lean_dec_ref(v_as_5453_);
lean_dec_ref(v___y_5452_);
return v_res_5463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0(lean_object* v_structName_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_, lean_object* v___y_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_){
_start:
{
lean_object* v___x_5474_; lean_object* v_env_5475_; uint8_t v___x_5476_; lean_object* v_fieldNames_5477_; lean_object* v___x_5478_; size_t v_sz_5479_; size_t v___x_5480_; lean_object* v___x_5481_; 
v___x_5474_ = lean_st_ref_get(v___y_5472_);
v_env_5475_ = lean_ctor_get(v___x_5474_, 0);
lean_inc_ref(v_env_5475_);
lean_dec(v___x_5474_);
v___x_5476_ = 0;
v_fieldNames_5477_ = l_Lean_getStructureFieldsFlattened(v_env_5475_, v_structName_5464_, v___x_5476_);
v___x_5478_ = lean_box(0);
v_sz_5479_ = lean_array_size(v_fieldNames_5477_);
v___x_5480_ = ((size_t)0ULL);
v___x_5481_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5465_, v_fieldNames_5477_, v_sz_5479_, v___x_5480_, v___x_5478_, v___y_5466_, v___y_5467_, v___y_5472_);
lean_dec_ref(v_fieldNames_5477_);
if (lean_obj_tag(v___x_5481_) == 0)
{
lean_object* v_a_5482_; 
v_a_5482_ = lean_ctor_get(v___x_5481_, 0);
lean_inc(v_a_5482_);
if (lean_obj_tag(v_a_5482_) == 0)
{
lean_dec_ref(v_a_5482_);
return v___x_5481_;
}
else
{
lean_object* v___x_5484_; uint8_t v_isShared_5485_; uint8_t v_isSharedCheck_5490_; 
lean_dec_ref(v_a_5482_);
v_isSharedCheck_5490_ = !lean_is_exclusive(v___x_5481_);
if (v_isSharedCheck_5490_ == 0)
{
lean_object* v_unused_5491_; 
v_unused_5491_ = lean_ctor_get(v___x_5481_, 0);
lean_dec(v_unused_5491_);
v___x_5484_ = v___x_5481_;
v_isShared_5485_ = v_isSharedCheck_5490_;
goto v_resetjp_5483_;
}
else
{
lean_dec(v___x_5481_);
v___x_5484_ = lean_box(0);
v_isShared_5485_ = v_isSharedCheck_5490_;
goto v_resetjp_5483_;
}
v_resetjp_5483_:
{
lean_object* v___x_5486_; lean_object* v___x_5488_; 
v___x_5486_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addItem___redArg___closed__0);
if (v_isShared_5485_ == 0)
{
lean_ctor_set(v___x_5484_, 0, v___x_5486_);
v___x_5488_ = v___x_5484_;
goto v_reusejp_5487_;
}
else
{
lean_object* v_reuseFailAlloc_5489_; 
v_reuseFailAlloc_5489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5489_, 0, v___x_5486_);
v___x_5488_ = v_reuseFailAlloc_5489_;
goto v_reusejp_5487_;
}
v_reusejp_5487_:
{
return v___x_5488_;
}
}
}
}
else
{
return v___x_5481_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed(lean_object* v_structName_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_, lean_object* v___y_5496_, lean_object* v___y_5497_, lean_object* v___y_5498_, lean_object* v___y_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_){
_start:
{
lean_object* v_res_5502_; 
v_res_5502_ = l_Lean_Server_Completion_fieldIdCompletion___lam__0(v_structName_5492_, v___y_5493_, v___y_5494_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_);
lean_dec(v___y_5500_);
lean_dec_ref(v___y_5499_);
lean_dec(v___y_5498_);
lean_dec_ref(v___y_5497_);
lean_dec_ref(v___y_5496_);
lean_dec(v___y_5495_);
lean_dec_ref(v___y_5494_);
lean_dec_ref(v___y_5493_);
return v_res_5502_;
}
}
static lean_object* _init_l_Lean_Server_Completion_fieldIdCompletion___closed__0(void){
_start:
{
lean_object* v___x_5503_; 
v___x_5503_ = lean_mk_string_unchecked("", 0, 0);
return v___x_5503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion(lean_object* v_uri_5504_, lean_object* v_pos_5505_, lean_object* v_completionInfoPos_5506_, lean_object* v_ctx_5507_, lean_object* v_lctx_5508_, lean_object* v_id_5509_, lean_object* v_structName_5510_, lean_object* v_a_5511_){
_start:
{
lean_object* v___y_5514_; 
if (lean_obj_tag(v_id_5509_) == 0)
{
lean_object* v___x_5517_; 
v___x_5517_ = lean_obj_once(&l_Lean_Server_Completion_fieldIdCompletion___closed__0, &l_Lean_Server_Completion_fieldIdCompletion___closed__0_once, _init_l_Lean_Server_Completion_fieldIdCompletion___closed__0);
v___y_5514_ = v___x_5517_;
goto v___jp_5513_;
}
else
{
lean_object* v_val_5518_; uint8_t v___x_5519_; lean_object* v___x_5520_; 
v_val_5518_ = lean_ctor_get(v_id_5509_, 0);
lean_inc(v_val_5518_);
lean_dec_ref(v_id_5509_);
v___x_5519_ = 1;
v___x_5520_ = l_Lean_Name_toString(v_val_5518_, v___x_5519_);
v___y_5514_ = v___x_5520_;
goto v___jp_5513_;
}
v___jp_5513_:
{
lean_object* v___f_5515_; lean_object* v___x_5516_; 
v___f_5515_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_fieldIdCompletion___lam__0___boxed), 10, 2);
lean_closure_set(v___f_5515_, 0, v_structName_5510_);
lean_closure_set(v___f_5515_, 1, v___y_5514_);
v___x_5516_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM(v_uri_5504_, v_pos_5505_, v_completionInfoPos_5506_, v_ctx_5507_, v_lctx_5508_, v___f_5515_, v_a_5511_);
return v___x_5516_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_fieldIdCompletion___boxed(lean_object* v_uri_5521_, lean_object* v_pos_5522_, lean_object* v_completionInfoPos_5523_, lean_object* v_ctx_5524_, lean_object* v_lctx_5525_, lean_object* v_id_5526_, lean_object* v_structName_5527_, lean_object* v_a_5528_, lean_object* v_a_5529_){
_start:
{
lean_object* v_res_5530_; 
v_res_5530_ = l_Lean_Server_Completion_fieldIdCompletion(v_uri_5521_, v_pos_5522_, v_completionInfoPos_5523_, v_ctx_5524_, v_lctx_5525_, v_id_5526_, v_structName_5527_, v_a_5528_);
lean_dec_ref(v_a_5528_);
return v_res_5530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(lean_object* v___y_5531_, lean_object* v_as_5532_, size_t v_sz_5533_, size_t v_i_5534_, lean_object* v_b_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_){
_start:
{
lean_object* v___x_5544_; 
v___x_5544_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___redArg(v___y_5531_, v_as_5532_, v_sz_5533_, v_i_5534_, v_b_5535_, v___y_5536_, v___y_5537_, v___y_5542_);
return v___x_5544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0___boxed(lean_object* v___y_5545_, lean_object* v_as_5546_, lean_object* v_sz_5547_, lean_object* v_i_5548_, lean_object* v_b_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_){
_start:
{
size_t v_sz_boxed_5558_; size_t v_i_boxed_5559_; lean_object* v_res_5560_; 
v_sz_boxed_5558_ = lean_unbox_usize(v_sz_5547_);
lean_dec(v_sz_5547_);
v_i_boxed_5559_ = lean_unbox_usize(v_i_5548_);
lean_dec(v_i_5548_);
v_res_5560_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Server_Completion_fieldIdCompletion_spec__0(v___y_5545_, v_as_5546_, v_sz_boxed_5558_, v_i_boxed_5559_, v_b_5549_, v___y_5550_, v___y_5551_, v___y_5552_, v___y_5553_, v___y_5554_, v___y_5555_, v___y_5556_);
lean_dec(v___y_5556_);
lean_dec_ref(v___y_5555_);
lean_dec(v___y_5554_);
lean_dec_ref(v___y_5553_);
lean_dec_ref(v___y_5552_);
lean_dec(v___y_5551_);
lean_dec_ref(v___y_5550_);
lean_dec_ref(v_as_5546_);
lean_dec_ref(v___y_5545_);
return v_res_5560_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0(void){
_start:
{
uint32_t v___x_5561_; lean_object* v___x_5562_; 
v___x_5561_ = 32;
v___x_5562_ = l_Char_utf8Size(v___x_5561_);
return v___x_5562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(lean_object* v_fst_5563_, lean_object* v_caps_5564_, lean_object* v_mkItem_5565_, lean_object* v_ctx_5566_, lean_object* v_stx_5567_, uint8_t v_snd_5568_, lean_object* v_x_5569_, lean_object* v_____s_5570_){
_start:
{
lean_object* v_fst_5571_; lean_object* v_snd_5572_; lean_object* v___x_5574_; uint8_t v_isShared_5575_; uint8_t v_isSharedCheck_5625_; 
v_fst_5571_ = lean_ctor_get(v_x_5569_, 0);
v_snd_5572_ = lean_ctor_get(v_x_5569_, 1);
v_isSharedCheck_5625_ = !lean_is_exclusive(v_x_5569_);
if (v_isSharedCheck_5625_ == 0)
{
v___x_5574_ = v_x_5569_;
v_isShared_5575_ = v_isSharedCheck_5625_;
goto v_resetjp_5573_;
}
else
{
lean_inc(v_snd_5572_);
lean_inc(v_fst_5571_);
lean_dec(v_x_5569_);
v___x_5574_ = lean_box(0);
v_isShared_5575_ = v_isSharedCheck_5625_;
goto v_resetjp_5573_;
}
v_resetjp_5573_:
{
lean_object* v___y_5577_; uint8_t v___x_5581_; lean_object* v___x_5582_; lean_object* v___y_5584_; lean_object* v___y_5585_; uint8_t v___x_5614_; 
v___x_5581_ = 1;
lean_inc(v_fst_5571_);
v___x_5582_ = l_Lean_Name_toString(v_fst_5571_, v___x_5581_);
v___x_5614_ = l_String_charactersIn(v_fst_5563_, v___x_5582_);
if (v___x_5614_ == 0)
{
lean_object* v___x_5617_; 
lean_dec_ref(v___x_5582_);
lean_del_object(v___x_5574_);
lean_dec(v_snd_5572_);
lean_dec(v_fst_5571_);
lean_dec_ref(v_ctx_5566_);
lean_dec_ref(v_mkItem_5565_);
v___x_5617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5617_, 0, v_____s_5570_);
return v___x_5617_;
}
else
{
lean_object* v_textDocument_x3f_5618_; 
v_textDocument_x3f_5618_ = lean_ctor_get(v_caps_5564_, 0);
if (lean_obj_tag(v_textDocument_x3f_5618_) == 0)
{
goto v___jp_5615_;
}
else
{
lean_object* v_val_5619_; lean_object* v_completion_x3f_5620_; 
v_val_5619_ = lean_ctor_get(v_textDocument_x3f_5618_, 0);
v_completion_x3f_5620_ = lean_ctor_get(v_val_5619_, 0);
if (lean_obj_tag(v_completion_x3f_5620_) == 0)
{
goto v___jp_5615_;
}
else
{
lean_object* v_val_5621_; 
v_val_5621_ = lean_ctor_get(v_completion_x3f_5620_, 0);
if (lean_obj_tag(v_val_5621_) == 0)
{
goto v___jp_5615_;
}
else
{
lean_object* v_val_5622_; 
v_val_5622_ = lean_ctor_get(v_val_5621_, 0);
if (lean_obj_tag(v_val_5622_) == 0)
{
goto v___jp_5615_;
}
else
{
lean_object* v_val_5623_; uint8_t v___x_5624_; 
v_val_5623_ = lean_ctor_get(v_val_5622_, 0);
v___x_5624_ = lean_unbox(v_val_5623_);
if (v___x_5624_ == 0)
{
goto v___jp_5615_;
}
else
{
goto v___jp_5603_;
}
}
}
}
}
}
v___jp_5576_:
{
lean_object* v___x_5578_; lean_object* v_items_5579_; lean_object* v___x_5580_; 
v___x_5578_ = lean_apply_3(v_mkItem_5565_, v_fst_5571_, v_snd_5572_, v___y_5577_);
v_items_5579_ = lean_array_push(v_____s_5570_, v___x_5578_);
v___x_5580_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5580_, 0, v_items_5579_);
return v___x_5580_;
}
v___jp_5583_:
{
lean_object* v_toCommandContextInfo_5586_; lean_object* v___x_5588_; uint8_t v_isShared_5589_; uint8_t v_isSharedCheck_5600_; 
v_toCommandContextInfo_5586_ = lean_ctor_get(v_ctx_5566_, 0);
v_isSharedCheck_5600_ = !lean_is_exclusive(v_ctx_5566_);
if (v_isSharedCheck_5600_ == 0)
{
lean_object* v_unused_5601_; lean_object* v_unused_5602_; 
v_unused_5601_ = lean_ctor_get(v_ctx_5566_, 2);
lean_dec(v_unused_5601_);
v_unused_5602_ = lean_ctor_get(v_ctx_5566_, 1);
lean_dec(v_unused_5602_);
v___x_5588_ = v_ctx_5566_;
v_isShared_5589_ = v_isSharedCheck_5600_;
goto v_resetjp_5587_;
}
else
{
lean_inc(v_toCommandContextInfo_5586_);
lean_dec(v_ctx_5566_);
v___x_5588_ = lean_box(0);
v_isShared_5589_ = v_isSharedCheck_5600_;
goto v_resetjp_5587_;
}
v_resetjp_5587_:
{
lean_object* v_fileMap_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v_range_5594_; 
v_fileMap_5590_ = lean_ctor_get(v_toCommandContextInfo_5586_, 2);
lean_inc_ref_n(v_fileMap_5590_, 2);
lean_dec_ref(v_toCommandContextInfo_5586_);
v___x_5591_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5590_, v___y_5584_);
lean_dec(v___y_5584_);
v___x_5592_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5590_, v___y_5585_);
lean_dec(v___y_5585_);
if (v_isShared_5575_ == 0)
{
lean_ctor_set(v___x_5574_, 1, v___x_5592_);
lean_ctor_set(v___x_5574_, 0, v___x_5591_);
v_range_5594_ = v___x_5574_;
goto v_reusejp_5593_;
}
else
{
lean_object* v_reuseFailAlloc_5599_; 
v_reuseFailAlloc_5599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5599_, 0, v___x_5591_);
lean_ctor_set(v_reuseFailAlloc_5599_, 1, v___x_5592_);
v_range_5594_ = v_reuseFailAlloc_5599_;
goto v_reusejp_5593_;
}
v_reusejp_5593_:
{
lean_object* v___x_5596_; 
lean_inc_ref(v_range_5594_);
if (v_isShared_5589_ == 0)
{
lean_ctor_set(v___x_5588_, 2, v_range_5594_);
lean_ctor_set(v___x_5588_, 1, v_range_5594_);
lean_ctor_set(v___x_5588_, 0, v___x_5582_);
v___x_5596_ = v___x_5588_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5598_; 
v_reuseFailAlloc_5598_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5598_, 0, v___x_5582_);
lean_ctor_set(v_reuseFailAlloc_5598_, 1, v_range_5594_);
lean_ctor_set(v_reuseFailAlloc_5598_, 2, v_range_5594_);
v___x_5596_ = v_reuseFailAlloc_5598_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
lean_object* v___x_5597_; 
v___x_5597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5597_, 0, v___x_5596_);
v___y_5577_ = v___x_5597_;
goto v___jp_5576_;
}
}
}
}
v___jp_5603_:
{
uint8_t v___x_5604_; lean_object* v___x_5605_; 
v___x_5604_ = 0;
v___x_5605_ = l_Lean_Syntax_getRange_x3f(v_stx_5567_, v___x_5604_);
if (lean_obj_tag(v___x_5605_) == 1)
{
lean_object* v_val_5606_; 
v_val_5606_ = lean_ctor_get(v___x_5605_, 0);
lean_inc(v_val_5606_);
lean_dec_ref(v___x_5605_);
if (v_snd_5568_ == 0)
{
lean_object* v_start_5607_; lean_object* v_stop_5608_; 
v_start_5607_ = lean_ctor_get(v_val_5606_, 0);
lean_inc(v_start_5607_);
v_stop_5608_ = lean_ctor_get(v_val_5606_, 1);
lean_inc(v_stop_5608_);
lean_dec(v_val_5606_);
v___y_5584_ = v_start_5607_;
v___y_5585_ = v_stop_5608_;
goto v___jp_5583_;
}
else
{
lean_object* v_start_5609_; lean_object* v_stop_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; 
v_start_5609_ = lean_ctor_get(v_val_5606_, 0);
lean_inc(v_start_5609_);
v_stop_5610_ = lean_ctor_get(v_val_5606_, 1);
lean_inc(v_stop_5610_);
lean_dec(v_val_5606_);
v___x_5611_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0);
v___x_5612_ = lean_nat_add(v_stop_5610_, v___x_5611_);
lean_dec(v_stop_5610_);
v___y_5584_ = v_start_5609_;
v___y_5585_ = v___x_5612_;
goto v___jp_5583_;
}
}
else
{
lean_object* v___x_5613_; 
lean_dec(v___x_5605_);
lean_dec_ref(v___x_5582_);
lean_del_object(v___x_5574_);
lean_dec_ref(v_ctx_5566_);
v___x_5613_ = lean_box(0);
v___y_5577_ = v___x_5613_;
goto v___jp_5576_;
}
}
v___jp_5615_:
{
if (v___x_5614_ == 0)
{
goto v___jp_5603_;
}
else
{
lean_object* v___x_5616_; 
lean_dec_ref(v___x_5582_);
lean_del_object(v___x_5574_);
lean_dec_ref(v_ctx_5566_);
v___x_5616_ = lean_box(0);
v___y_5577_ = v___x_5616_;
goto v___jp_5576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed(lean_object* v_fst_5626_, lean_object* v_caps_5627_, lean_object* v_mkItem_5628_, lean_object* v_ctx_5629_, lean_object* v_stx_5630_, lean_object* v_snd_5631_, lean_object* v_x_5632_, lean_object* v_____s_5633_){
_start:
{
uint8_t v_snd_1079__boxed_5634_; lean_object* v_res_5635_; 
v_snd_1079__boxed_5634_ = lean_unbox(v_snd_5631_);
v_res_5635_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0(v_fst_5626_, v_caps_5627_, v_mkItem_5628_, v_ctx_5629_, v_stx_5630_, v_snd_1079__boxed_5634_, v_x_5632_, v_____s_5633_);
lean_dec(v_stx_5630_);
lean_dec_ref(v_caps_5627_);
lean_dec_ref(v_fst_5626_);
return v_res_5635_;
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0(void){
_start:
{
lean_object* v___x_5636_; 
v___x_5636_ = lean_mk_string_unchecked(".", 1, 1);
return v___x_5636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(lean_object* v_inst_5637_, lean_object* v_entries_5638_, lean_object* v_stx_5639_, lean_object* v_caps_5640_, lean_object* v_ctx_5641_, lean_object* v_mkItem_5642_){
_start:
{
lean_object* v_fst_5644_; uint8_t v_snd_5645_; uint8_t v___x_5650_; lean_object* v___x_5651_; 
v___x_5650_ = 0;
v___x_5651_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5639_, v___x_5650_, v___x_5650_);
if (lean_obj_tag(v___x_5651_) == 0)
{
lean_object* v___x_5652_; 
v___x_5652_ = lean_obj_once(&l_Lean_Server_Completion_fieldIdCompletion___closed__0, &l_Lean_Server_Completion_fieldIdCompletion___closed__0_once, _init_l_Lean_Server_Completion_fieldIdCompletion___closed__0);
v_fst_5644_ = v___x_5652_;
v_snd_5645_ = v___x_5650_;
goto v___jp_5643_;
}
else
{
lean_object* v_val_5653_; lean_object* v_str_5654_; lean_object* v_startPos_5655_; lean_object* v_stopPos_5656_; uint8_t v___y_5658_; uint8_t v___x_5660_; 
v_val_5653_ = lean_ctor_get(v___x_5651_, 0);
lean_inc(v_val_5653_);
lean_dec_ref(v___x_5651_);
v_str_5654_ = lean_ctor_get(v_val_5653_, 0);
lean_inc_ref(v_str_5654_);
v_startPos_5655_ = lean_ctor_get(v_val_5653_, 1);
lean_inc(v_startPos_5655_);
v_stopPos_5656_ = lean_ctor_get(v_val_5653_, 2);
lean_inc(v_stopPos_5656_);
lean_dec(v_val_5653_);
v___x_5660_ = lean_string_utf8_at_end(v_str_5654_, v_stopPos_5656_);
if (v___x_5660_ == 0)
{
uint32_t v___x_5661_; uint32_t v___x_5662_; uint8_t v___x_5663_; 
v___x_5661_ = lean_string_utf8_get(v_str_5654_, v_stopPos_5656_);
v___x_5662_ = 46;
v___x_5663_ = lean_uint32_dec_eq(v___x_5661_, v___x_5662_);
if (v___x_5663_ == 0)
{
v___y_5658_ = v___x_5663_;
goto v___jp_5657_;
}
else
{
lean_object* v___x_5664_; lean_object* v___x_5665_; lean_object* v___x_5666_; 
v___x_5664_ = lean_string_utf8_extract(v_str_5654_, v_startPos_5655_, v_stopPos_5656_);
lean_dec(v_stopPos_5656_);
lean_dec(v_startPos_5655_);
lean_dec_ref(v_str_5654_);
v___x_5665_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0);
v___x_5666_ = lean_string_append(v___x_5664_, v___x_5665_);
v_fst_5644_ = v___x_5666_;
v_snd_5645_ = v___x_5663_;
goto v___jp_5643_;
}
}
else
{
v___y_5658_ = v___x_5650_;
goto v___jp_5657_;
}
v___jp_5657_:
{
lean_object* v___x_5659_; 
v___x_5659_ = lean_string_utf8_extract(v_str_5654_, v_startPos_5655_, v_stopPos_5656_);
lean_dec(v_stopPos_5656_);
lean_dec(v_startPos_5655_);
lean_dec_ref(v_str_5654_);
v_fst_5644_ = v___x_5659_;
v_snd_5645_ = v___y_5658_;
goto v___jp_5643_;
}
}
v___jp_5643_:
{
lean_object* v___x_5646_; lean_object* v___f_5647_; lean_object* v_items_5648_; lean_object* v___x_5649_; 
v___x_5646_ = lean_box(v_snd_5645_);
v___f_5647_ = lean_alloc_closure((void*)(l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___boxed), 8, 6);
lean_closure_set(v___f_5647_, 0, v_fst_5644_);
lean_closure_set(v___f_5647_, 1, v_caps_5640_);
lean_closure_set(v___f_5647_, 2, v_mkItem_5642_);
lean_closure_set(v___f_5647_, 3, v_ctx_5641_);
lean_closure_set(v___f_5647_, 4, v_stx_5639_);
lean_closure_set(v___f_5647_, 5, v___x_5646_);
v_items_5648_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0);
v___x_5649_ = lean_apply_4(v_inst_5637_, lean_box(0), v_entries_5638_, v_items_5648_, v___f_5647_);
return v___x_5649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion(lean_object* v_Coll_5667_, lean_object* v_00_u03b1_5668_, lean_object* v_inst_5669_, lean_object* v_entries_5670_, lean_object* v_stx_5671_, lean_object* v_caps_5672_, lean_object* v_ctx_5673_, lean_object* v_mkItem_5674_){
_start:
{
lean_object* v___x_5675_; 
v___x_5675_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg(v_inst_5669_, v_entries_5670_, v_stx_5671_, v_caps_5672_, v_ctx_5673_, v_mkItem_5674_);
return v___x_5675_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5676_; 
v___x_5676_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_5676_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5677_; 
v___x_5677_ = lean_mk_string_unchecked("), ", 3, 3);
return v___x_5677_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___lam__0___closed__2(void){
_start:
{
uint8_t v___x_5678_; lean_object* v___x_5679_; lean_object* v___x_5680_; 
v___x_5678_ = 9;
v___x_5679_ = lean_box(v___x_5678_);
v___x_5680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5680_, 0, v___x_5679_);
return v___x_5680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0(lean_object* v_options_5681_, lean_object* v_completionInfoPos_5682_, lean_object* v_uri_5683_, lean_object* v_pos_5684_, lean_object* v_name_5685_, lean_object* v_decl_5686_, lean_object* v_textEdit_x3f_5687_){
_start:
{
lean_object* v_defValue_5688_; lean_object* v_descr_5689_; lean_object* v_map_5690_; uint8_t v___x_5691_; lean_object* v___x_5692_; lean_object* v___x_5693_; lean_object* v___y_5695_; lean_object* v___x_5708_; 
v_defValue_5688_ = lean_ctor_get(v_decl_5686_, 2);
lean_inc_ref(v_defValue_5688_);
v_descr_5689_ = lean_ctor_get(v_decl_5686_, 3);
lean_inc_ref(v_descr_5689_);
lean_dec_ref(v_decl_5686_);
v_map_5690_ = lean_ctor_get(v_options_5681_, 0);
v___x_5691_ = 1;
lean_inc(v_name_5685_);
v___x_5692_ = l_Lean_Name_toString(v_name_5685_, v___x_5691_);
v___x_5693_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___lam__0___closed__0, &l_Lean_Server_Completion_optionCompletion___lam__0___closed__0_once, _init_l_Lean_Server_Completion_optionCompletion___lam__0___closed__0);
v___x_5708_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_5690_, v_name_5685_);
lean_dec(v_name_5685_);
if (lean_obj_tag(v___x_5708_) == 0)
{
v___y_5695_ = v_defValue_5688_;
goto v___jp_5694_;
}
else
{
if (lean_obj_tag(v___x_5708_) == 0)
{
v___y_5695_ = v_defValue_5688_;
goto v___jp_5694_;
}
else
{
lean_object* v_val_5709_; 
lean_dec_ref(v_defValue_5688_);
v_val_5709_ = lean_ctor_get(v___x_5708_, 0);
lean_inc(v_val_5709_);
lean_dec_ref(v___x_5708_);
v___y_5695_ = v_val_5709_;
goto v___jp_5694_;
}
}
v___jp_5694_:
{
lean_object* v___x_5696_; lean_object* v___x_5697_; lean_object* v___x_5698_; lean_object* v___x_5699_; lean_object* v___x_5700_; lean_object* v___x_5701_; lean_object* v___x_5702_; lean_object* v___x_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; 
v___x_5696_ = lean_data_value_to_string(v___y_5695_);
v___x_5697_ = lean_string_append(v___x_5693_, v___x_5696_);
lean_dec_ref(v___x_5696_);
v___x_5698_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___lam__0___closed__1, &l_Lean_Server_Completion_optionCompletion___lam__0___closed__1_once, _init_l_Lean_Server_Completion_optionCompletion___lam__0___closed__1);
v___x_5699_ = lean_string_append(v___x_5697_, v___x_5698_);
v___x_5700_ = lean_string_append(v___x_5699_, v_descr_5689_);
lean_dec_ref(v_descr_5689_);
v___x_5701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5701_, 0, v___x_5700_);
v___x_5702_ = lean_box(0);
v___x_5703_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___lam__0___closed__2, &l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_once, _init_l_Lean_Server_Completion_optionCompletion___lam__0___closed__2);
v___x_5704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5704_, 0, v_completionInfoPos_5682_);
v___x_5705_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5705_, 0, v_uri_5683_);
lean_ctor_set(v___x_5705_, 1, v_pos_5684_);
lean_ctor_set(v___x_5705_, 2, v___x_5704_);
lean_ctor_set(v___x_5705_, 3, v___x_5702_);
v___x_5706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5706_, 0, v___x_5705_);
v___x_5707_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5707_, 0, v___x_5692_);
lean_ctor_set(v___x_5707_, 1, v___x_5701_);
lean_ctor_set(v___x_5707_, 2, v___x_5702_);
lean_ctor_set(v___x_5707_, 3, v___x_5703_);
lean_ctor_set(v___x_5707_, 4, v_textEdit_x3f_5687_);
lean_ctor_set(v___x_5707_, 5, v___x_5702_);
lean_ctor_set(v___x_5707_, 6, v___x_5706_);
lean_ctor_set(v___x_5707_, 7, v___x_5702_);
return v___x_5707_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__0___boxed(lean_object* v_options_5710_, lean_object* v_completionInfoPos_5711_, lean_object* v_uri_5712_, lean_object* v_pos_5713_, lean_object* v_name_5714_, lean_object* v_decl_5715_, lean_object* v_textEdit_x3f_5716_){
_start:
{
lean_object* v_res_5717_; 
v_res_5717_ = l_Lean_Server_Completion_optionCompletion___lam__0(v_options_5710_, v_completionInfoPos_5711_, v_uri_5712_, v_pos_5713_, v_name_5714_, v_decl_5715_, v_textEdit_x3f_5716_);
lean_dec_ref(v_options_5710_);
return v_res_5717_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(lean_object* v_mkItem_5718_, lean_object* v_stx_5719_, lean_object* v_ctx_5720_, uint8_t v_snd_5721_, lean_object* v_fst_5722_, lean_object* v_caps_5723_, lean_object* v_init_5724_, lean_object* v_x_5725_){
_start:
{
if (lean_obj_tag(v_x_5725_) == 0)
{
lean_object* v_k_5726_; lean_object* v_v_5727_; lean_object* v_l_5728_; lean_object* v_r_5729_; lean_object* v___x_5730_; lean_object* v_a_5731_; lean_object* v___y_5733_; uint8_t v___x_5737_; lean_object* v___x_5738_; lean_object* v___y_5740_; lean_object* v___y_5741_; uint8_t v___x_5760_; 
v_k_5726_ = lean_ctor_get(v_x_5725_, 1);
lean_inc_n(v_k_5726_, 2);
v_v_5727_ = lean_ctor_get(v_x_5725_, 2);
lean_inc(v_v_5727_);
v_l_5728_ = lean_ctor_get(v_x_5725_, 3);
lean_inc(v_l_5728_);
v_r_5729_ = lean_ctor_get(v_x_5725_, 4);
lean_inc(v_r_5729_);
lean_dec_ref(v_x_5725_);
lean_inc_ref(v_ctx_5720_);
lean_inc_ref(v_mkItem_5718_);
v___x_5730_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5718_, v_stx_5719_, v_ctx_5720_, v_snd_5721_, v_fst_5722_, v_caps_5723_, v_init_5724_, v_l_5728_);
v_a_5731_ = lean_ctor_get(v___x_5730_, 0);
lean_inc(v_a_5731_);
v___x_5737_ = 1;
v___x_5738_ = l_Lean_Name_toString(v_k_5726_, v___x_5737_);
v___x_5760_ = l_String_charactersIn(v_fst_5722_, v___x_5738_);
if (v___x_5760_ == 0)
{
lean_object* v_a_5763_; 
lean_dec_ref(v___x_5738_);
lean_dec(v_a_5731_);
lean_dec(v_v_5727_);
lean_dec(v_k_5726_);
v_a_5763_ = lean_ctor_get(v___x_5730_, 0);
lean_inc(v_a_5763_);
lean_dec_ref(v___x_5730_);
v_init_5724_ = v_a_5763_;
v_x_5725_ = v_r_5729_;
goto _start;
}
else
{
lean_object* v_textDocument_x3f_5765_; 
lean_dec_ref(v___x_5730_);
v_textDocument_x3f_5765_ = lean_ctor_get(v_caps_5723_, 0);
if (lean_obj_tag(v_textDocument_x3f_5765_) == 0)
{
goto v___jp_5761_;
}
else
{
lean_object* v_val_5766_; lean_object* v_completion_x3f_5767_; 
v_val_5766_ = lean_ctor_get(v_textDocument_x3f_5765_, 0);
v_completion_x3f_5767_ = lean_ctor_get(v_val_5766_, 0);
if (lean_obj_tag(v_completion_x3f_5767_) == 0)
{
goto v___jp_5761_;
}
else
{
lean_object* v_val_5768_; 
v_val_5768_ = lean_ctor_get(v_completion_x3f_5767_, 0);
if (lean_obj_tag(v_val_5768_) == 0)
{
goto v___jp_5761_;
}
else
{
lean_object* v_val_5769_; 
v_val_5769_ = lean_ctor_get(v_val_5768_, 0);
if (lean_obj_tag(v_val_5769_) == 0)
{
goto v___jp_5761_;
}
else
{
lean_object* v_val_5770_; uint8_t v___x_5771_; 
v_val_5770_ = lean_ctor_get(v_val_5769_, 0);
v___x_5771_ = lean_unbox(v_val_5770_);
if (v___x_5771_ == 0)
{
goto v___jp_5761_;
}
else
{
goto v___jp_5749_;
}
}
}
}
}
}
v___jp_5732_:
{
lean_object* v___x_5734_; lean_object* v_items_5735_; 
lean_inc_ref(v_mkItem_5718_);
v___x_5734_ = lean_apply_3(v_mkItem_5718_, v_k_5726_, v_v_5727_, v___y_5733_);
v_items_5735_ = lean_array_push(v_a_5731_, v___x_5734_);
v_init_5724_ = v_items_5735_;
v_x_5725_ = v_r_5729_;
goto _start;
}
v___jp_5739_:
{
lean_object* v_toCommandContextInfo_5742_; lean_object* v_fileMap_5743_; lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v_range_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; 
v_toCommandContextInfo_5742_ = lean_ctor_get(v_ctx_5720_, 0);
v_fileMap_5743_ = lean_ctor_get(v_toCommandContextInfo_5742_, 2);
lean_inc_ref_n(v_fileMap_5743_, 2);
v___x_5744_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5743_, v___y_5740_);
lean_dec(v___y_5740_);
v___x_5745_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5743_, v___y_5741_);
lean_dec(v___y_5741_);
v_range_5746_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_range_5746_, 0, v___x_5744_);
lean_ctor_set(v_range_5746_, 1, v___x_5745_);
lean_inc_ref(v_range_5746_);
v___x_5747_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5747_, 0, v___x_5738_);
lean_ctor_set(v___x_5747_, 1, v_range_5746_);
lean_ctor_set(v___x_5747_, 2, v_range_5746_);
v___x_5748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5748_, 0, v___x_5747_);
v___y_5733_ = v___x_5748_;
goto v___jp_5732_;
}
v___jp_5749_:
{
uint8_t v___x_5750_; lean_object* v___x_5751_; 
v___x_5750_ = 0;
v___x_5751_ = l_Lean_Syntax_getRange_x3f(v_stx_5719_, v___x_5750_);
if (lean_obj_tag(v___x_5751_) == 1)
{
lean_object* v_val_5752_; 
v_val_5752_ = lean_ctor_get(v___x_5751_, 0);
lean_inc(v_val_5752_);
lean_dec_ref(v___x_5751_);
if (v_snd_5721_ == 0)
{
lean_object* v_start_5753_; lean_object* v_stop_5754_; 
v_start_5753_ = lean_ctor_get(v_val_5752_, 0);
lean_inc(v_start_5753_);
v_stop_5754_ = lean_ctor_get(v_val_5752_, 1);
lean_inc(v_stop_5754_);
lean_dec(v_val_5752_);
v___y_5740_ = v_start_5753_;
v___y_5741_ = v_stop_5754_;
goto v___jp_5739_;
}
else
{
lean_object* v_start_5755_; lean_object* v_stop_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; 
v_start_5755_ = lean_ctor_get(v_val_5752_, 0);
lean_inc(v_start_5755_);
v_stop_5756_ = lean_ctor_get(v_val_5752_, 1);
lean_inc(v_stop_5756_);
lean_dec(v_val_5752_);
v___x_5757_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0);
v___x_5758_ = lean_nat_add(v_stop_5756_, v___x_5757_);
lean_dec(v_stop_5756_);
v___y_5740_ = v_start_5755_;
v___y_5741_ = v___x_5758_;
goto v___jp_5739_;
}
}
else
{
lean_object* v___x_5759_; 
lean_dec(v___x_5751_);
lean_dec_ref(v___x_5738_);
v___x_5759_ = lean_box(0);
v___y_5733_ = v___x_5759_;
goto v___jp_5732_;
}
}
v___jp_5761_:
{
if (v___x_5760_ == 0)
{
goto v___jp_5749_;
}
else
{
lean_object* v___x_5762_; 
lean_dec_ref(v___x_5738_);
v___x_5762_ = lean_box(0);
v___y_5733_ = v___x_5762_;
goto v___jp_5732_;
}
}
}
else
{
lean_object* v___x_5772_; 
lean_dec_ref(v_ctx_5720_);
lean_dec_ref(v_mkItem_5718_);
v___x_5772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5772_, 0, v_init_5724_);
return v___x_5772_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0___boxed(lean_object* v_mkItem_5773_, lean_object* v_stx_5774_, lean_object* v_ctx_5775_, lean_object* v_snd_5776_, lean_object* v_fst_5777_, lean_object* v_caps_5778_, lean_object* v_init_5779_, lean_object* v_x_5780_){
_start:
{
uint8_t v_snd_1472__boxed_5781_; lean_object* v_res_5782_; 
v_snd_1472__boxed_5781_ = lean_unbox(v_snd_5776_);
v_res_5782_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5773_, v_stx_5774_, v_ctx_5775_, v_snd_1472__boxed_5781_, v_fst_5777_, v_caps_5778_, v_init_5779_, v_x_5780_);
lean_dec_ref(v_caps_5778_);
lean_dec_ref(v_fst_5777_);
lean_dec(v_stx_5774_);
return v_res_5782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(lean_object* v_entries_5783_, lean_object* v_stx_5784_, lean_object* v_caps_5785_, lean_object* v_ctx_5786_, lean_object* v_mkItem_5787_){
_start:
{
lean_object* v_fst_5789_; uint8_t v_snd_5790_; uint8_t v___x_5794_; lean_object* v___x_5795_; 
v___x_5794_ = 0;
v___x_5795_ = l_Lean_Syntax_getSubstring_x3f(v_stx_5784_, v___x_5794_, v___x_5794_);
if (lean_obj_tag(v___x_5795_) == 0)
{
lean_object* v___x_5796_; 
v___x_5796_ = lean_obj_once(&l_Lean_Server_Completion_fieldIdCompletion___closed__0, &l_Lean_Server_Completion_fieldIdCompletion___closed__0_once, _init_l_Lean_Server_Completion_fieldIdCompletion___closed__0);
v_fst_5789_ = v___x_5796_;
v_snd_5790_ = v___x_5794_;
goto v___jp_5788_;
}
else
{
lean_object* v_val_5797_; lean_object* v_str_5798_; lean_object* v_startPos_5799_; lean_object* v_stopPos_5800_; uint8_t v___y_5802_; uint8_t v___x_5804_; 
v_val_5797_ = lean_ctor_get(v___x_5795_, 0);
lean_inc(v_val_5797_);
lean_dec_ref(v___x_5795_);
v_str_5798_ = lean_ctor_get(v_val_5797_, 0);
lean_inc_ref(v_str_5798_);
v_startPos_5799_ = lean_ctor_get(v_val_5797_, 1);
lean_inc(v_startPos_5799_);
v_stopPos_5800_ = lean_ctor_get(v_val_5797_, 2);
lean_inc(v_stopPos_5800_);
lean_dec(v_val_5797_);
v___x_5804_ = lean_string_utf8_at_end(v_str_5798_, v_stopPos_5800_);
if (v___x_5804_ == 0)
{
uint32_t v___x_5805_; uint32_t v___x_5806_; uint8_t v___x_5807_; 
v___x_5805_ = lean_string_utf8_get(v_str_5798_, v_stopPos_5800_);
v___x_5806_ = 46;
v___x_5807_ = lean_uint32_dec_eq(v___x_5805_, v___x_5806_);
if (v___x_5807_ == 0)
{
v___y_5802_ = v___x_5807_;
goto v___jp_5801_;
}
else
{
lean_object* v___x_5808_; lean_object* v___x_5809_; lean_object* v___x_5810_; 
v___x_5808_ = lean_string_utf8_extract(v_str_5798_, v_startPos_5799_, v_stopPos_5800_);
lean_dec(v_stopPos_5800_);
lean_dec(v_startPos_5799_);
lean_dec_ref(v_str_5798_);
v___x_5809_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0);
v___x_5810_ = lean_string_append(v___x_5808_, v___x_5809_);
v_fst_5789_ = v___x_5810_;
v_snd_5790_ = v___x_5807_;
goto v___jp_5788_;
}
}
else
{
v___y_5802_ = v___x_5794_;
goto v___jp_5801_;
}
v___jp_5801_:
{
lean_object* v___x_5803_; 
v___x_5803_ = lean_string_utf8_extract(v_str_5798_, v_startPos_5799_, v_stopPos_5800_);
lean_dec(v_stopPos_5800_);
lean_dec(v_startPos_5799_);
lean_dec_ref(v_str_5798_);
v_fst_5789_ = v___x_5803_;
v_snd_5790_ = v___y_5802_;
goto v___jp_5788_;
}
}
v___jp_5788_:
{
lean_object* v_items_5791_; lean_object* v___x_5792_; lean_object* v_a_5793_; 
v_items_5791_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0);
v___x_5792_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0_spec__0(v_mkItem_5787_, v_stx_5784_, v_ctx_5786_, v_snd_5790_, v_fst_5789_, v_caps_5785_, v_items_5791_, v_entries_5783_);
lean_dec_ref(v_fst_5789_);
v_a_5793_ = lean_ctor_get(v___x_5792_, 0);
lean_inc(v_a_5793_);
lean_dec_ref(v___x_5792_);
return v_a_5793_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0___boxed(lean_object* v_entries_5811_, lean_object* v_stx_5812_, lean_object* v_caps_5813_, lean_object* v_ctx_5814_, lean_object* v_mkItem_5815_){
_start:
{
lean_object* v_res_5816_; 
v_res_5816_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_entries_5811_, v_stx_5812_, v_caps_5813_, v_ctx_5814_, v_mkItem_5815_);
lean_dec_ref(v_caps_5813_);
lean_dec(v_stx_5812_);
return v_res_5816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1(lean_object* v_completionInfoPos_5817_, lean_object* v_uri_5818_, lean_object* v_pos_5819_, lean_object* v_stx_5820_, lean_object* v_caps_5821_, lean_object* v_ctx_5822_, lean_object* v___y_5823_, lean_object* v___y_5824_, lean_object* v___y_5825_, lean_object* v___y_5826_){
_start:
{
lean_object* v___x_5828_; lean_object* v___x_5829_; 
v___x_5828_ = lean_st_ref_get(v___y_5826_);
lean_dec(v___x_5828_);
v___x_5829_ = l_Lean_getOptionDecls();
if (lean_obj_tag(v___x_5829_) == 0)
{
lean_object* v_a_5830_; lean_object* v___x_5832_; uint8_t v_isShared_5833_; uint8_t v_isSharedCheck_5842_; 
v_a_5830_ = lean_ctor_get(v___x_5829_, 0);
v_isSharedCheck_5842_ = !lean_is_exclusive(v___x_5829_);
if (v_isSharedCheck_5842_ == 0)
{
v___x_5832_ = v___x_5829_;
v_isShared_5833_ = v_isSharedCheck_5842_;
goto v_resetjp_5831_;
}
else
{
lean_inc(v_a_5830_);
lean_dec(v___x_5829_);
v___x_5832_ = lean_box(0);
v_isShared_5833_ = v_isSharedCheck_5842_;
goto v_resetjp_5831_;
}
v_resetjp_5831_:
{
lean_object* v_options_5834_; lean_object* v___f_5835_; lean_object* v___x_5836_; lean_object* v___x_5837_; lean_object* v___x_5838_; lean_object* v___x_5840_; 
v_options_5834_ = lean_ctor_get(v___y_5825_, 2);
lean_inc_ref(v_options_5834_);
lean_dec_ref(v___y_5825_);
v___f_5835_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5835_, 0, v_options_5834_);
lean_closure_set(v___f_5835_, 1, v_completionInfoPos_5817_);
lean_closure_set(v___f_5835_, 2, v_uri_5818_);
lean_closure_set(v___f_5835_, 3, v_pos_5819_);
v___x_5836_ = lean_unsigned_to_nat(1u);
v___x_5837_ = l_Lean_Syntax_getArg(v_stx_5820_, v___x_5836_);
v___x_5838_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_optionCompletion_spec__0(v_a_5830_, v___x_5837_, v_caps_5821_, v_ctx_5822_, v___f_5835_);
lean_dec(v___x_5837_);
if (v_isShared_5833_ == 0)
{
lean_ctor_set(v___x_5832_, 0, v___x_5838_);
v___x_5840_ = v___x_5832_;
goto v_reusejp_5839_;
}
else
{
lean_object* v_reuseFailAlloc_5841_; 
v_reuseFailAlloc_5841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5841_, 0, v___x_5838_);
v___x_5840_ = v_reuseFailAlloc_5841_;
goto v_reusejp_5839_;
}
v_reusejp_5839_:
{
return v___x_5840_;
}
}
}
else
{
lean_object* v_a_5843_; lean_object* v___x_5845_; uint8_t v_isShared_5846_; uint8_t v_isSharedCheck_5855_; 
lean_dec_ref(v_ctx_5822_);
lean_dec_ref(v_pos_5819_);
lean_dec_ref(v_uri_5818_);
lean_dec(v_completionInfoPos_5817_);
v_a_5843_ = lean_ctor_get(v___x_5829_, 0);
v_isSharedCheck_5855_ = !lean_is_exclusive(v___x_5829_);
if (v_isSharedCheck_5855_ == 0)
{
v___x_5845_ = v___x_5829_;
v_isShared_5846_ = v_isSharedCheck_5855_;
goto v_resetjp_5844_;
}
else
{
lean_inc(v_a_5843_);
lean_dec(v___x_5829_);
v___x_5845_ = lean_box(0);
v_isShared_5846_ = v_isSharedCheck_5855_;
goto v_resetjp_5844_;
}
v_resetjp_5844_:
{
lean_object* v_ref_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___x_5851_; lean_object* v___x_5853_; 
v_ref_5847_ = lean_ctor_get(v___y_5825_, 5);
lean_inc(v_ref_5847_);
lean_dec_ref(v___y_5825_);
v___x_5848_ = lean_io_error_to_string(v_a_5843_);
v___x_5849_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5849_, 0, v___x_5848_);
v___x_5850_ = l_Lean_MessageData_ofFormat(v___x_5849_);
v___x_5851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5851_, 0, v_ref_5847_);
lean_ctor_set(v___x_5851_, 1, v___x_5850_);
if (v_isShared_5846_ == 0)
{
lean_ctor_set(v___x_5845_, 0, v___x_5851_);
v___x_5853_ = v___x_5845_;
goto v_reusejp_5852_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v___x_5851_);
v___x_5853_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5852_;
}
v_reusejp_5852_:
{
return v___x_5853_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___lam__1___boxed(lean_object* v_completionInfoPos_5856_, lean_object* v_uri_5857_, lean_object* v_pos_5858_, lean_object* v_stx_5859_, lean_object* v_caps_5860_, lean_object* v_ctx_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_, lean_object* v___y_5866_){
_start:
{
lean_object* v_res_5867_; 
v_res_5867_ = l_Lean_Server_Completion_optionCompletion___lam__1(v_completionInfoPos_5856_, v_uri_5857_, v_pos_5858_, v_stx_5859_, v_caps_5860_, v_ctx_5861_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_);
lean_dec(v___y_5865_);
lean_dec(v___y_5863_);
lean_dec_ref(v___y_5862_);
lean_dec_ref(v_caps_5860_);
lean_dec(v_stx_5859_);
return v_res_5867_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__0(void){
_start:
{
lean_object* v___x_5868_; 
v___x_5868_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_5868_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__1(void){
_start:
{
lean_object* v___x_5869_; lean_object* v___x_5870_; 
v___x_5869_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__0, &l_Lean_Server_Completion_optionCompletion___closed__0_once, _init_l_Lean_Server_Completion_optionCompletion___closed__0);
v___x_5870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5870_, 0, v___x_5869_);
return v___x_5870_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__2(void){
_start:
{
lean_object* v___x_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; 
v___x_5871_ = lean_unsigned_to_nat(32u);
v___x_5872_ = lean_mk_empty_array_with_capacity(v___x_5871_);
v___x_5873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5873_, 0, v___x_5872_);
return v___x_5873_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__3(void){
_start:
{
size_t v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; lean_object* v___x_5879_; 
v___x_5874_ = ((size_t)5ULL);
v___x_5875_ = lean_unsigned_to_nat(0u);
v___x_5876_ = lean_unsigned_to_nat(32u);
v___x_5877_ = lean_mk_empty_array_with_capacity(v___x_5876_);
v___x_5878_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__2, &l_Lean_Server_Completion_optionCompletion___closed__2_once, _init_l_Lean_Server_Completion_optionCompletion___closed__2);
v___x_5879_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5879_, 0, v___x_5878_);
lean_ctor_set(v___x_5879_, 1, v___x_5877_);
lean_ctor_set(v___x_5879_, 2, v___x_5875_);
lean_ctor_set(v___x_5879_, 3, v___x_5875_);
lean_ctor_set_usize(v___x_5879_, 4, v___x_5874_);
return v___x_5879_;
}
}
static lean_object* _init_l_Lean_Server_Completion_optionCompletion___closed__4(void){
_start:
{
lean_object* v___x_5880_; lean_object* v___x_5881_; lean_object* v___x_5882_; lean_object* v___x_5883_; 
v___x_5880_ = lean_box(1);
v___x_5881_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__3, &l_Lean_Server_Completion_optionCompletion___closed__3_once, _init_l_Lean_Server_Completion_optionCompletion___closed__3);
v___x_5882_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__1, &l_Lean_Server_Completion_optionCompletion___closed__1_once, _init_l_Lean_Server_Completion_optionCompletion___closed__1);
v___x_5883_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5883_, 0, v___x_5882_);
lean_ctor_set(v___x_5883_, 1, v___x_5881_);
lean_ctor_set(v___x_5883_, 2, v___x_5880_);
return v___x_5883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion(lean_object* v_uri_5884_, lean_object* v_pos_5885_, lean_object* v_completionInfoPos_5886_, lean_object* v_ctx_5887_, lean_object* v_stx_5888_, lean_object* v_caps_5889_){
_start:
{
lean_object* v___f_5891_; lean_object* v___x_5892_; lean_object* v___x_5893_; 
lean_inc_ref(v_ctx_5887_);
v___f_5891_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_optionCompletion___lam__1___boxed), 11, 6);
lean_closure_set(v___f_5891_, 0, v_completionInfoPos_5886_);
lean_closure_set(v___f_5891_, 1, v_uri_5884_);
lean_closure_set(v___f_5891_, 2, v_pos_5885_);
lean_closure_set(v___f_5891_, 3, v_stx_5888_);
lean_closure_set(v___f_5891_, 4, v_caps_5889_);
lean_closure_set(v___f_5891_, 5, v_ctx_5887_);
v___x_5892_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_5893_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_5887_, v___x_5892_, v___f_5891_);
return v___x_5893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_optionCompletion___boxed(lean_object* v_uri_5894_, lean_object* v_pos_5895_, lean_object* v_completionInfoPos_5896_, lean_object* v_ctx_5897_, lean_object* v_stx_5898_, lean_object* v_caps_5899_, lean_object* v_a_5900_){
_start:
{
lean_object* v_res_5901_; 
v_res_5901_ = l_Lean_Server_Completion_optionCompletion(v_uri_5894_, v_pos_5895_, v_completionInfoPos_5896_, v_ctx_5897_, v_stx_5898_, v_caps_5899_);
return v_res_5901_;
}
}
static lean_object* _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5902_; 
v___x_5902_ = lean_mk_string_unchecked("error name", 10, 10);
return v___x_5902_;
}
}
static lean_object* _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5903_; lean_object* v___x_5904_; 
v___x_5903_ = lean_obj_once(&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0, &l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0_once, _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__0);
v___x_5904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5904_, 0, v___x_5903_);
return v___x_5904_;
}
}
static lean_object* _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2(void){
_start:
{
lean_object* v___x_5905_; lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; 
v___x_5905_ = lean_box(0);
v___x_5906_ = lean_unsigned_to_nat(1u);
v___x_5907_ = lean_mk_empty_array_with_capacity(v___x_5906_);
v___x_5908_ = lean_array_push(v___x_5907_, v___x_5905_);
return v___x_5908_;
}
}
static lean_object* _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3(void){
_start:
{
lean_object* v___x_5909_; lean_object* v___x_5910_; 
v___x_5909_ = lean_obj_once(&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2, &l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2_once, _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__2);
v___x_5910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5910_, 0, v___x_5909_);
return v___x_5910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0(lean_object* v_completionInfoPos_5911_, lean_object* v_uri_5912_, lean_object* v_pos_5913_, lean_object* v_name_5914_, lean_object* v_explan_5915_, lean_object* v_textEdit_x3f_5916_){
_start:
{
lean_object* v_metadata_5917_; lean_object* v_removedVersion_x3f_5918_; uint8_t v___x_5919_; lean_object* v___x_5920_; lean_object* v___x_5921_; uint8_t v___x_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5926_; lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; 
v_metadata_5917_ = lean_ctor_get(v_explan_5915_, 1);
v_removedVersion_x3f_5918_ = lean_ctor_get(v_metadata_5917_, 2);
v___x_5919_ = 1;
v___x_5920_ = l_Lean_Name_toString(v_name_5914_, v___x_5919_);
v___x_5921_ = lean_obj_once(&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1, &l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1_once, _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__1);
v___x_5922_ = 1;
v___x_5923_ = l_Lean_ErrorExplanation_summaryWithSeverity(v_explan_5915_);
v___x_5924_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_5924_, 0, v___x_5923_);
lean_ctor_set_uint8(v___x_5924_, sizeof(void*)*1, v___x_5922_);
v___x_5925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5925_, 0, v___x_5924_);
v___x_5926_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___lam__0___closed__2, &l_Lean_Server_Completion_optionCompletion___lam__0___closed__2_once, _init_l_Lean_Server_Completion_optionCompletion___lam__0___closed__2);
v___x_5927_ = lean_box(0);
v___x_5928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5928_, 0, v_completionInfoPos_5911_);
v___x_5929_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5929_, 0, v_uri_5912_);
lean_ctor_set(v___x_5929_, 1, v_pos_5913_);
lean_ctor_set(v___x_5929_, 2, v___x_5928_);
lean_ctor_set(v___x_5929_, 3, v___x_5927_);
v___x_5930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5930_, 0, v___x_5929_);
if (lean_obj_tag(v_removedVersion_x3f_5918_) == 0)
{
lean_object* v___x_5931_; 
v___x_5931_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5931_, 0, v___x_5920_);
lean_ctor_set(v___x_5931_, 1, v___x_5921_);
lean_ctor_set(v___x_5931_, 2, v___x_5925_);
lean_ctor_set(v___x_5931_, 3, v___x_5926_);
lean_ctor_set(v___x_5931_, 4, v_textEdit_x3f_5916_);
lean_ctor_set(v___x_5931_, 5, v___x_5927_);
lean_ctor_set(v___x_5931_, 6, v___x_5930_);
lean_ctor_set(v___x_5931_, 7, v___x_5927_);
return v___x_5931_;
}
else
{
lean_object* v___x_5932_; lean_object* v___x_5933_; 
v___x_5932_ = lean_obj_once(&l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3, &l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3_once, _init_l_Lean_Server_Completion_errorNameCompletion___lam__0___closed__3);
v___x_5933_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_5933_, 0, v___x_5920_);
lean_ctor_set(v___x_5933_, 1, v___x_5921_);
lean_ctor_set(v___x_5933_, 2, v___x_5925_);
lean_ctor_set(v___x_5933_, 3, v___x_5926_);
lean_ctor_set(v___x_5933_, 4, v_textEdit_x3f_5916_);
lean_ctor_set(v___x_5933_, 5, v___x_5927_);
lean_ctor_set(v___x_5933_, 6, v___x_5930_);
lean_ctor_set(v___x_5933_, 7, v___x_5932_);
return v___x_5933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed(lean_object* v_completionInfoPos_5934_, lean_object* v_uri_5935_, lean_object* v_pos_5936_, lean_object* v_name_5937_, lean_object* v_explan_5938_, lean_object* v_textEdit_x3f_5939_){
_start:
{
lean_object* v_res_5940_; 
v_res_5940_ = l_Lean_Server_Completion_errorNameCompletion___lam__0(v_completionInfoPos_5934_, v_uri_5935_, v_pos_5936_, v_name_5937_, v_explan_5938_, v_textEdit_x3f_5939_);
lean_dec_ref(v_explan_5938_);
return v_res_5940_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(lean_object* v_mkItem_5941_, lean_object* v_stx_5942_, lean_object* v_ctx_5943_, uint8_t v_snd_5944_, lean_object* v_fst_5945_, lean_object* v_caps_5946_, lean_object* v_as_5947_, size_t v_sz_5948_, size_t v_i_5949_, lean_object* v_b_5950_){
_start:
{
lean_object* v_a_5952_; uint8_t v___x_5956_; 
v___x_5956_ = lean_usize_dec_lt(v_i_5949_, v_sz_5948_);
if (v___x_5956_ == 0)
{
lean_dec_ref(v_ctx_5943_);
lean_dec_ref(v_mkItem_5941_);
return v_b_5950_;
}
else
{
lean_object* v_a_5957_; lean_object* v_fst_5958_; lean_object* v_snd_5959_; lean_object* v___x_5961_; uint8_t v_isShared_5962_; uint8_t v_isSharedCheck_6001_; 
v_a_5957_ = lean_array_uget(v_as_5947_, v_i_5949_);
v_fst_5958_ = lean_ctor_get(v_a_5957_, 0);
v_snd_5959_ = lean_ctor_get(v_a_5957_, 1);
v_isSharedCheck_6001_ = !lean_is_exclusive(v_a_5957_);
if (v_isSharedCheck_6001_ == 0)
{
v___x_5961_ = v_a_5957_;
v_isShared_5962_ = v_isSharedCheck_6001_;
goto v_resetjp_5960_;
}
else
{
lean_inc(v_snd_5959_);
lean_inc(v_fst_5958_);
lean_dec(v_a_5957_);
v___x_5961_ = lean_box(0);
v_isShared_5962_ = v_isSharedCheck_6001_;
goto v_resetjp_5960_;
}
v_resetjp_5960_:
{
lean_object* v___y_5964_; lean_object* v___x_5967_; lean_object* v___y_5969_; lean_object* v___y_5970_; uint8_t v___x_5991_; 
lean_inc(v_fst_5958_);
v___x_5967_ = l_Lean_Name_toString(v_fst_5958_, v___x_5956_);
v___x_5991_ = l_String_charactersIn(v_fst_5945_, v___x_5967_);
if (v___x_5991_ == 0)
{
lean_dec_ref(v___x_5967_);
lean_del_object(v___x_5961_);
lean_dec(v_snd_5959_);
lean_dec(v_fst_5958_);
v_a_5952_ = v_b_5950_;
goto v___jp_5951_;
}
else
{
lean_object* v_textDocument_x3f_5994_; 
v_textDocument_x3f_5994_ = lean_ctor_get(v_caps_5946_, 0);
if (lean_obj_tag(v_textDocument_x3f_5994_) == 0)
{
goto v___jp_5992_;
}
else
{
lean_object* v_val_5995_; lean_object* v_completion_x3f_5996_; 
v_val_5995_ = lean_ctor_get(v_textDocument_x3f_5994_, 0);
v_completion_x3f_5996_ = lean_ctor_get(v_val_5995_, 0);
if (lean_obj_tag(v_completion_x3f_5996_) == 0)
{
goto v___jp_5992_;
}
else
{
lean_object* v_val_5997_; 
v_val_5997_ = lean_ctor_get(v_completion_x3f_5996_, 0);
if (lean_obj_tag(v_val_5997_) == 0)
{
goto v___jp_5992_;
}
else
{
lean_object* v_val_5998_; 
v_val_5998_ = lean_ctor_get(v_val_5997_, 0);
if (lean_obj_tag(v_val_5998_) == 0)
{
goto v___jp_5992_;
}
else
{
lean_object* v_val_5999_; uint8_t v___x_6000_; 
v_val_5999_ = lean_ctor_get(v_val_5998_, 0);
v___x_6000_ = lean_unbox(v_val_5999_);
if (v___x_6000_ == 0)
{
goto v___jp_5992_;
}
else
{
goto v___jp_5980_;
}
}
}
}
}
}
v___jp_5963_:
{
lean_object* v___x_5965_; lean_object* v_items_5966_; 
lean_inc_ref(v_mkItem_5941_);
v___x_5965_ = lean_apply_3(v_mkItem_5941_, v_fst_5958_, v_snd_5959_, v___y_5964_);
v_items_5966_ = lean_array_push(v_b_5950_, v___x_5965_);
v_a_5952_ = v_items_5966_;
goto v___jp_5951_;
}
v___jp_5968_:
{
lean_object* v_toCommandContextInfo_5971_; lean_object* v_fileMap_5972_; lean_object* v___x_5973_; lean_object* v___x_5974_; lean_object* v_range_5976_; 
v_toCommandContextInfo_5971_ = lean_ctor_get(v_ctx_5943_, 0);
v_fileMap_5972_ = lean_ctor_get(v_toCommandContextInfo_5971_, 2);
lean_inc_ref_n(v_fileMap_5972_, 2);
v___x_5973_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5972_, v___y_5969_);
lean_dec(v___y_5969_);
v___x_5974_ = l_Lean_FileMap_utf8PosToLspPos(v_fileMap_5972_, v___y_5970_);
lean_dec(v___y_5970_);
if (v_isShared_5962_ == 0)
{
lean_ctor_set(v___x_5961_, 1, v___x_5974_);
lean_ctor_set(v___x_5961_, 0, v___x_5973_);
v_range_5976_ = v___x_5961_;
goto v_reusejp_5975_;
}
else
{
lean_object* v_reuseFailAlloc_5979_; 
v_reuseFailAlloc_5979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5979_, 0, v___x_5973_);
lean_ctor_set(v_reuseFailAlloc_5979_, 1, v___x_5974_);
v_range_5976_ = v_reuseFailAlloc_5979_;
goto v_reusejp_5975_;
}
v_reusejp_5975_:
{
lean_object* v___x_5977_; lean_object* v___x_5978_; 
lean_inc_ref(v_range_5976_);
v___x_5977_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5977_, 0, v___x_5967_);
lean_ctor_set(v___x_5977_, 1, v_range_5976_);
lean_ctor_set(v___x_5977_, 2, v_range_5976_);
v___x_5978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5978_, 0, v___x_5977_);
v___y_5964_ = v___x_5978_;
goto v___jp_5963_;
}
}
v___jp_5980_:
{
uint8_t v___x_5981_; lean_object* v___x_5982_; 
v___x_5981_ = 0;
v___x_5982_ = l_Lean_Syntax_getRange_x3f(v_stx_5942_, v___x_5981_);
if (lean_obj_tag(v___x_5982_) == 1)
{
lean_object* v_val_5983_; 
v_val_5983_ = lean_ctor_get(v___x_5982_, 0);
lean_inc(v_val_5983_);
lean_dec_ref(v___x_5982_);
if (v_snd_5944_ == 0)
{
lean_object* v_start_5984_; lean_object* v_stop_5985_; 
v_start_5984_ = lean_ctor_get(v_val_5983_, 0);
lean_inc(v_start_5984_);
v_stop_5985_ = lean_ctor_get(v_val_5983_, 1);
lean_inc(v_stop_5985_);
lean_dec(v_val_5983_);
v___y_5969_ = v_start_5984_;
v___y_5970_ = v_stop_5985_;
goto v___jp_5968_;
}
else
{
lean_object* v_start_5986_; lean_object* v_stop_5987_; lean_object* v___x_5988_; lean_object* v___x_5989_; 
v_start_5986_ = lean_ctor_get(v_val_5983_, 0);
lean_inc(v_start_5986_);
v_stop_5987_ = lean_ctor_get(v_val_5983_, 1);
lean_inc(v_stop_5987_);
lean_dec(v_val_5983_);
v___x_5988_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___lam__0___closed__0);
v___x_5989_ = lean_nat_add(v_stop_5987_, v___x_5988_);
lean_dec(v_stop_5987_);
v___y_5969_ = v_start_5986_;
v___y_5970_ = v___x_5989_;
goto v___jp_5968_;
}
}
else
{
lean_object* v___x_5990_; 
lean_dec(v___x_5982_);
lean_dec_ref(v___x_5967_);
lean_del_object(v___x_5961_);
v___x_5990_ = lean_box(0);
v___y_5964_ = v___x_5990_;
goto v___jp_5963_;
}
}
v___jp_5992_:
{
if (v___x_5991_ == 0)
{
goto v___jp_5980_;
}
else
{
lean_object* v___x_5993_; 
lean_dec_ref(v___x_5967_);
lean_del_object(v___x_5961_);
v___x_5993_ = lean_box(0);
v___y_5964_ = v___x_5993_;
goto v___jp_5963_;
}
}
}
}
v___jp_5951_:
{
size_t v___x_5953_; size_t v___x_5954_; 
v___x_5953_ = ((size_t)1ULL);
v___x_5954_ = lean_usize_add(v_i_5949_, v___x_5953_);
v_i_5949_ = v___x_5954_;
v_b_5950_ = v_a_5952_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3___boxed(lean_object* v_mkItem_6002_, lean_object* v_stx_6003_, lean_object* v_ctx_6004_, lean_object* v_snd_6005_, lean_object* v_fst_6006_, lean_object* v_caps_6007_, lean_object* v_as_6008_, lean_object* v_sz_6009_, lean_object* v_i_6010_, lean_object* v_b_6011_){
_start:
{
uint8_t v_snd_1554__boxed_6012_; size_t v_sz_boxed_6013_; size_t v_i_boxed_6014_; lean_object* v_res_6015_; 
v_snd_1554__boxed_6012_ = lean_unbox(v_snd_6005_);
v_sz_boxed_6013_ = lean_unbox_usize(v_sz_6009_);
lean_dec(v_sz_6009_);
v_i_boxed_6014_ = lean_unbox_usize(v_i_6010_);
lean_dec(v_i_6010_);
v_res_6015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6002_, v_stx_6003_, v_ctx_6004_, v_snd_1554__boxed_6012_, v_fst_6006_, v_caps_6007_, v_as_6008_, v_sz_boxed_6013_, v_i_boxed_6014_, v_b_6011_);
lean_dec_ref(v_as_6008_);
lean_dec_ref(v_caps_6007_);
lean_dec_ref(v_fst_6006_);
lean_dec(v_stx_6003_);
return v_res_6015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(lean_object* v_entries_6016_, lean_object* v_stx_6017_, lean_object* v_caps_6018_, lean_object* v_ctx_6019_, lean_object* v_mkItem_6020_){
_start:
{
lean_object* v_fst_6022_; uint8_t v_snd_6023_; uint8_t v___x_6028_; lean_object* v___x_6029_; 
v___x_6028_ = 0;
v___x_6029_ = l_Lean_Syntax_getSubstring_x3f(v_stx_6017_, v___x_6028_, v___x_6028_);
if (lean_obj_tag(v___x_6029_) == 0)
{
lean_object* v___x_6030_; 
v___x_6030_ = lean_obj_once(&l_Lean_Server_Completion_fieldIdCompletion___closed__0, &l_Lean_Server_Completion_fieldIdCompletion___closed__0_once, _init_l_Lean_Server_Completion_fieldIdCompletion___closed__0);
v_fst_6022_ = v___x_6030_;
v_snd_6023_ = v___x_6028_;
goto v___jp_6021_;
}
else
{
lean_object* v_val_6031_; lean_object* v_str_6032_; lean_object* v_startPos_6033_; lean_object* v_stopPos_6034_; uint8_t v___y_6036_; uint8_t v___x_6038_; 
v_val_6031_ = lean_ctor_get(v___x_6029_, 0);
lean_inc(v_val_6031_);
lean_dec_ref(v___x_6029_);
v_str_6032_ = lean_ctor_get(v_val_6031_, 0);
lean_inc_ref(v_str_6032_);
v_startPos_6033_ = lean_ctor_get(v_val_6031_, 1);
lean_inc(v_startPos_6033_);
v_stopPos_6034_ = lean_ctor_get(v_val_6031_, 2);
lean_inc(v_stopPos_6034_);
lean_dec(v_val_6031_);
v___x_6038_ = lean_string_utf8_at_end(v_str_6032_, v_stopPos_6034_);
if (v___x_6038_ == 0)
{
uint32_t v___x_6039_; uint32_t v___x_6040_; uint8_t v___x_6041_; 
v___x_6039_ = lean_string_utf8_get(v_str_6032_, v_stopPos_6034_);
v___x_6040_ = 46;
v___x_6041_ = lean_uint32_dec_eq(v___x_6039_, v___x_6040_);
if (v___x_6041_ == 0)
{
v___y_6036_ = v___x_6041_;
goto v___jp_6035_;
}
else
{
lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; 
v___x_6042_ = lean_string_utf8_extract(v_str_6032_, v_startPos_6033_, v_stopPos_6034_);
lean_dec(v_stopPos_6034_);
lean_dec(v_startPos_6033_);
lean_dec_ref(v_str_6032_);
v___x_6043_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0);
v___x_6044_ = lean_string_append(v___x_6042_, v___x_6043_);
v_fst_6022_ = v___x_6044_;
v_snd_6023_ = v___x_6041_;
goto v___jp_6021_;
}
}
else
{
v___y_6036_ = v___x_6028_;
goto v___jp_6035_;
}
v___jp_6035_:
{
lean_object* v___x_6037_; 
v___x_6037_ = lean_string_utf8_extract(v_str_6032_, v_startPos_6033_, v_stopPos_6034_);
lean_dec(v_stopPos_6034_);
lean_dec(v_startPos_6033_);
lean_dec_ref(v_str_6032_);
v_fst_6022_ = v___x_6037_;
v_snd_6023_ = v___y_6036_;
goto v___jp_6021_;
}
}
v___jp_6021_:
{
lean_object* v_items_6024_; size_t v_sz_6025_; size_t v___x_6026_; lean_object* v___x_6027_; 
v_items_6024_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_runM___closed__0);
v_sz_6025_ = lean_array_size(v_entries_6016_);
v___x_6026_ = ((size_t)0ULL);
v___x_6027_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1_spec__3(v_mkItem_6020_, v_stx_6017_, v_ctx_6019_, v_snd_6023_, v_fst_6022_, v_caps_6018_, v_entries_6016_, v_sz_6025_, v___x_6026_, v_items_6024_);
lean_dec_ref(v_fst_6022_);
return v___x_6027_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1___boxed(lean_object* v_entries_6045_, lean_object* v_stx_6046_, lean_object* v_caps_6047_, lean_object* v_ctx_6048_, lean_object* v_mkItem_6049_){
_start:
{
lean_object* v_res_6050_; 
v_res_6050_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_entries_6045_, v_stx_6046_, v_caps_6047_, v_ctx_6048_, v_mkItem_6049_);
lean_dec_ref(v_caps_6047_);
lean_dec(v_stx_6046_);
lean_dec_ref(v_entries_6045_);
return v_res_6050_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(lean_object* v_init_6051_, lean_object* v_x_6052_){
_start:
{
if (lean_obj_tag(v_x_6052_) == 0)
{
lean_object* v_k_6053_; lean_object* v_v_6054_; lean_object* v_l_6055_; lean_object* v_r_6056_; lean_object* v___x_6057_; lean_object* v___x_6058_; lean_object* v___x_6059_; 
v_k_6053_ = lean_ctor_get(v_x_6052_, 1);
v_v_6054_ = lean_ctor_get(v_x_6052_, 2);
v_l_6055_ = lean_ctor_get(v_x_6052_, 3);
v_r_6056_ = lean_ctor_get(v_x_6052_, 4);
v___x_6057_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_6051_, v_l_6055_);
lean_inc(v_v_6054_);
lean_inc(v_k_6053_);
v___x_6058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6058_, 0, v_k_6053_);
lean_ctor_set(v___x_6058_, 1, v_v_6054_);
v___x_6059_ = lean_array_push(v___x_6057_, v___x_6058_);
v_init_6051_ = v___x_6059_;
v_x_6052_ = v_r_6056_;
goto _start;
}
else
{
return v_init_6051_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1___boxed(lean_object* v_init_6061_, lean_object* v_x_6062_){
_start:
{
lean_object* v_res_6063_; 
v_res_6063_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_6061_, v_x_6062_);
lean_dec(v_x_6062_);
return v_res_6063_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(lean_object* v_hi_6064_, lean_object* v_pivot_6065_, lean_object* v_as_6066_, lean_object* v_i_6067_, lean_object* v_k_6068_){
_start:
{
uint8_t v___x_6069_; 
v___x_6069_ = lean_nat_dec_lt(v_k_6068_, v_hi_6064_);
if (v___x_6069_ == 0)
{
lean_object* v___x_6070_; lean_object* v___x_6071_; 
lean_dec(v_k_6068_);
lean_dec_ref(v_pivot_6065_);
v___x_6070_ = lean_array_fswap(v_as_6066_, v_i_6067_, v_hi_6064_);
v___x_6071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6071_, 0, v_i_6067_);
lean_ctor_set(v___x_6071_, 1, v___x_6070_);
return v___x_6071_;
}
else
{
lean_object* v___x_6072_; lean_object* v_fst_6073_; lean_object* v_fst_6074_; lean_object* v___x_6075_; lean_object* v___x_6076_; uint8_t v___x_6077_; 
v___x_6072_ = lean_array_fget_borrowed(v_as_6066_, v_k_6068_);
v_fst_6073_ = lean_ctor_get(v___x_6072_, 0);
v_fst_6074_ = lean_ctor_get(v_pivot_6065_, 0);
lean_inc(v_fst_6073_);
v___x_6075_ = l_Lean_Name_toString(v_fst_6073_, v___x_6069_);
lean_inc(v_fst_6074_);
v___x_6076_ = l_Lean_Name_toString(v_fst_6074_, v___x_6069_);
v___x_6077_ = lean_string_dec_lt(v___x_6075_, v___x_6076_);
lean_dec_ref(v___x_6076_);
lean_dec_ref(v___x_6075_);
if (v___x_6077_ == 0)
{
lean_object* v___x_6078_; lean_object* v___x_6079_; 
v___x_6078_ = lean_unsigned_to_nat(1u);
v___x_6079_ = lean_nat_add(v_k_6068_, v___x_6078_);
lean_dec(v_k_6068_);
v_k_6068_ = v___x_6079_;
goto _start;
}
else
{
lean_object* v___x_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; lean_object* v___x_6084_; 
v___x_6081_ = lean_array_fswap(v_as_6066_, v_i_6067_, v_k_6068_);
v___x_6082_ = lean_unsigned_to_nat(1u);
v___x_6083_ = lean_nat_add(v_i_6067_, v___x_6082_);
lean_dec(v_i_6067_);
v___x_6084_ = lean_nat_add(v_k_6068_, v___x_6082_);
lean_dec(v_k_6068_);
v_as_6066_ = v___x_6081_;
v_i_6067_ = v___x_6083_;
v_k_6068_ = v___x_6084_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_hi_6086_, lean_object* v_pivot_6087_, lean_object* v_as_6088_, lean_object* v_i_6089_, lean_object* v_k_6090_){
_start:
{
lean_object* v_res_6091_; 
v_res_6091_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_6086_, v_pivot_6087_, v_as_6088_, v_i_6089_, v_k_6090_);
lean_dec(v_hi_6086_);
return v_res_6091_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(uint8_t v___x_6092_, lean_object* v_e_6093_, lean_object* v_e_x27_6094_){
_start:
{
lean_object* v_fst_6095_; lean_object* v_fst_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; uint8_t v___x_6099_; 
v_fst_6095_ = lean_ctor_get(v_e_6093_, 0);
lean_inc(v_fst_6095_);
lean_dec_ref(v_e_6093_);
v_fst_6096_ = lean_ctor_get(v_e_x27_6094_, 0);
lean_inc(v_fst_6096_);
lean_dec_ref(v_e_x27_6094_);
v___x_6097_ = l_Lean_Name_toString(v_fst_6095_, v___x_6092_);
v___x_6098_ = l_Lean_Name_toString(v_fst_6096_, v___x_6092_);
v___x_6099_ = lean_string_dec_lt(v___x_6097_, v___x_6098_);
lean_dec_ref(v___x_6098_);
lean_dec_ref(v___x_6097_);
return v___x_6099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_6100_, lean_object* v_e_6101_, lean_object* v_e_x27_6102_){
_start:
{
uint8_t v___x_1741__boxed_6103_; uint8_t v_res_6104_; lean_object* v_r_6105_; 
v___x_1741__boxed_6103_ = lean_unbox(v___x_6100_);
v_res_6104_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_1741__boxed_6103_, v_e_6101_, v_e_x27_6102_);
v_r_6105_ = lean_box(v_res_6104_);
return v_r_6105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(lean_object* v_n_6106_, lean_object* v_as_6107_, lean_object* v_lo_6108_, lean_object* v_hi_6109_){
_start:
{
lean_object* v___y_6111_; uint8_t v___x_6121_; 
v___x_6121_ = lean_nat_dec_lt(v_lo_6108_, v_hi_6109_);
if (v___x_6121_ == 0)
{
lean_dec(v_lo_6108_);
return v_as_6107_;
}
else
{
lean_object* v___x_6122_; lean_object* v___x_6123_; lean_object* v_mid_6124_; lean_object* v___y_6126_; lean_object* v___y_6132_; lean_object* v___x_6137_; lean_object* v___x_6138_; uint8_t v___x_6139_; 
v___x_6122_ = lean_nat_add(v_lo_6108_, v_hi_6109_);
v___x_6123_ = lean_unsigned_to_nat(1u);
v_mid_6124_ = lean_nat_shiftr(v___x_6122_, v___x_6123_);
lean_dec(v___x_6122_);
v___x_6137_ = lean_array_fget_borrowed(v_as_6107_, v_mid_6124_);
v___x_6138_ = lean_array_fget_borrowed(v_as_6107_, v_lo_6108_);
lean_inc(v___x_6138_);
lean_inc(v___x_6137_);
v___x_6139_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_6121_, v___x_6137_, v___x_6138_);
if (v___x_6139_ == 0)
{
v___y_6132_ = v_as_6107_;
goto v___jp_6131_;
}
else
{
lean_object* v___x_6140_; 
v___x_6140_ = lean_array_fswap(v_as_6107_, v_lo_6108_, v_mid_6124_);
v___y_6132_ = v___x_6140_;
goto v___jp_6131_;
}
v___jp_6125_:
{
lean_object* v___x_6127_; lean_object* v___x_6128_; uint8_t v___x_6129_; 
v___x_6127_ = lean_array_fget_borrowed(v___y_6126_, v_mid_6124_);
v___x_6128_ = lean_array_fget_borrowed(v___y_6126_, v_hi_6109_);
lean_inc(v___x_6128_);
lean_inc(v___x_6127_);
v___x_6129_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_6121_, v___x_6127_, v___x_6128_);
if (v___x_6129_ == 0)
{
lean_dec(v_mid_6124_);
v___y_6111_ = v___y_6126_;
goto v___jp_6110_;
}
else
{
lean_object* v___x_6130_; 
v___x_6130_ = lean_array_fswap(v___y_6126_, v_mid_6124_, v_hi_6109_);
lean_dec(v_mid_6124_);
v___y_6111_ = v___x_6130_;
goto v___jp_6110_;
}
}
v___jp_6131_:
{
lean_object* v___x_6133_; lean_object* v___x_6134_; uint8_t v___x_6135_; 
v___x_6133_ = lean_array_fget_borrowed(v___y_6132_, v_hi_6109_);
v___x_6134_ = lean_array_fget_borrowed(v___y_6132_, v_lo_6108_);
lean_inc(v___x_6134_);
lean_inc(v___x_6133_);
v___x_6135_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___lam__0(v___x_6121_, v___x_6133_, v___x_6134_);
if (v___x_6135_ == 0)
{
v___y_6126_ = v___y_6132_;
goto v___jp_6125_;
}
else
{
lean_object* v___x_6136_; 
v___x_6136_ = lean_array_fswap(v___y_6132_, v_lo_6108_, v_hi_6109_);
v___y_6126_ = v___x_6136_;
goto v___jp_6125_;
}
}
}
v___jp_6110_:
{
lean_object* v_pivot_6112_; lean_object* v___x_6113_; lean_object* v_fst_6114_; lean_object* v_snd_6115_; uint8_t v___x_6116_; 
v_pivot_6112_ = lean_array_fget(v___y_6111_, v_hi_6109_);
lean_inc_n(v_lo_6108_, 2);
v___x_6113_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_6109_, v_pivot_6112_, v___y_6111_, v_lo_6108_, v_lo_6108_);
v_fst_6114_ = lean_ctor_get(v___x_6113_, 0);
lean_inc(v_fst_6114_);
v_snd_6115_ = lean_ctor_get(v___x_6113_, 1);
lean_inc(v_snd_6115_);
lean_dec_ref(v___x_6113_);
v___x_6116_ = lean_nat_dec_le(v_hi_6109_, v_fst_6114_);
if (v___x_6116_ == 0)
{
lean_object* v___x_6117_; lean_object* v___x_6118_; lean_object* v___x_6119_; 
v___x_6117_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_6106_, v_snd_6115_, v_lo_6108_, v_fst_6114_);
v___x_6118_ = lean_unsigned_to_nat(1u);
v___x_6119_ = lean_nat_add(v_fst_6114_, v___x_6118_);
lean_dec(v_fst_6114_);
v_as_6107_ = v___x_6117_;
v_lo_6108_ = v___x_6119_;
goto _start;
}
else
{
lean_dec(v_fst_6114_);
lean_dec(v_lo_6108_);
return v_snd_6115_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg___boxed(lean_object* v_n_6141_, lean_object* v_as_6142_, lean_object* v_lo_6143_, lean_object* v_hi_6144_){
_start:
{
lean_object* v_res_6145_; 
v_res_6145_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_6141_, v_as_6142_, v_lo_6143_, v_hi_6144_);
lean_dec(v_hi_6144_);
lean_dec(v_n_6141_);
return v_res_6145_;
}
}
static lean_object* _init_l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_6146_; lean_object* v___x_6147_; 
v___x_6146_ = lean_unsigned_to_nat(0u);
v___x_6147_ = lean_mk_empty_array_with_capacity(v___x_6146_);
return v___x_6147_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(lean_object* v___y_6148_){
_start:
{
lean_object* v___x_6150_; lean_object* v_env_6151_; lean_object* v___x_6152_; lean_object* v_toEnvExtension_6153_; lean_object* v_asyncMode_6154_; lean_object* v___x_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___x_6158_; lean_object* v___x_6159_; lean_object* v___x_6160_; lean_object* v___x_6161_; lean_object* v___y_6163_; lean_object* v___y_6164_; uint8_t v___x_6167_; 
v___x_6150_ = lean_st_ref_get(v___y_6148_);
v_env_6151_ = lean_ctor_get(v___x_6150_, 0);
lean_inc_ref(v_env_6151_);
lean_dec(v___x_6150_);
v___x_6152_ = l_Lean_errorExplanationExt;
v_toEnvExtension_6153_ = lean_ctor_get(v___x_6152_, 0);
v_asyncMode_6154_ = lean_ctor_get(v_toEnvExtension_6153_, 2);
v___x_6155_ = lean_box(1);
v___x_6156_ = lean_box(0);
v___x_6157_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_6155_, v___x_6152_, v_env_6151_, v_asyncMode_6154_, v___x_6156_);
v___x_6158_ = lean_unsigned_to_nat(0u);
v___x_6159_ = lean_obj_once(&l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0, &l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0_once, _init_l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___closed__0);
v___x_6160_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v___x_6159_, v___x_6157_);
lean_dec(v___x_6157_);
v___x_6161_ = lean_array_get_size(v___x_6160_);
v___x_6167_ = lean_nat_dec_eq(v___x_6161_, v___x_6158_);
if (v___x_6167_ == 0)
{
lean_object* v___x_6168_; lean_object* v___x_6169_; lean_object* v___y_6171_; uint8_t v___x_6173_; 
v___x_6168_ = lean_unsigned_to_nat(1u);
v___x_6169_ = lean_nat_sub(v___x_6161_, v___x_6168_);
v___x_6173_ = lean_nat_dec_le(v___x_6158_, v___x_6169_);
if (v___x_6173_ == 0)
{
lean_inc(v___x_6169_);
v___y_6171_ = v___x_6169_;
goto v___jp_6170_;
}
else
{
v___y_6171_ = v___x_6158_;
goto v___jp_6170_;
}
v___jp_6170_:
{
uint8_t v___x_6172_; 
v___x_6172_ = lean_nat_dec_le(v___y_6171_, v___x_6169_);
if (v___x_6172_ == 0)
{
lean_dec(v___x_6169_);
lean_inc(v___y_6171_);
v___y_6163_ = v___y_6171_;
v___y_6164_ = v___y_6171_;
goto v___jp_6162_;
}
else
{
v___y_6163_ = v___y_6171_;
v___y_6164_ = v___x_6169_;
goto v___jp_6162_;
}
}
}
else
{
lean_object* v___x_6174_; 
v___x_6174_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6174_, 0, v___x_6160_);
return v___x_6174_;
}
v___jp_6162_:
{
lean_object* v___x_6165_; lean_object* v___x_6166_; 
v___x_6165_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v___x_6161_, v___x_6160_, v___y_6163_, v___y_6164_);
lean_dec(v___y_6164_);
v___x_6166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6166_, 0, v___x_6165_);
return v___x_6166_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg___boxed(lean_object* v___y_6175_, lean_object* v___y_6176_){
_start:
{
lean_object* v_res_6177_; 
v_res_6177_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6175_);
lean_dec(v___y_6175_);
return v_res_6177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1(lean_object* v_partialId_6178_, lean_object* v_caps_6179_, lean_object* v_ctx_6180_, lean_object* v___f_6181_, lean_object* v___y_6182_, lean_object* v___y_6183_, lean_object* v___y_6184_, lean_object* v___y_6185_){
_start:
{
lean_object* v___x_6187_; lean_object* v_a_6188_; lean_object* v___x_6190_; uint8_t v_isShared_6191_; uint8_t v_isSharedCheck_6196_; 
v___x_6187_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6185_);
v_a_6188_ = lean_ctor_get(v___x_6187_, 0);
v_isSharedCheck_6196_ = !lean_is_exclusive(v___x_6187_);
if (v_isSharedCheck_6196_ == 0)
{
v___x_6190_ = v___x_6187_;
v_isShared_6191_ = v_isSharedCheck_6196_;
goto v_resetjp_6189_;
}
else
{
lean_inc(v_a_6188_);
lean_dec(v___x_6187_);
v___x_6190_ = lean_box(0);
v_isShared_6191_ = v_isSharedCheck_6196_;
goto v_resetjp_6189_;
}
v_resetjp_6189_:
{
lean_object* v___x_6192_; lean_object* v___x_6194_; 
v___x_6192_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___at___00Lean_Server_Completion_errorNameCompletion_spec__1(v_a_6188_, v_partialId_6178_, v_caps_6179_, v_ctx_6180_, v___f_6181_);
lean_dec(v_a_6188_);
if (v_isShared_6191_ == 0)
{
lean_ctor_set(v___x_6190_, 0, v___x_6192_);
v___x_6194_ = v___x_6190_;
goto v_reusejp_6193_;
}
else
{
lean_object* v_reuseFailAlloc_6195_; 
v_reuseFailAlloc_6195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6195_, 0, v___x_6192_);
v___x_6194_ = v_reuseFailAlloc_6195_;
goto v_reusejp_6193_;
}
v_reusejp_6193_:
{
return v___x_6194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed(lean_object* v_partialId_6197_, lean_object* v_caps_6198_, lean_object* v_ctx_6199_, lean_object* v___f_6200_, lean_object* v___y_6201_, lean_object* v___y_6202_, lean_object* v___y_6203_, lean_object* v___y_6204_, lean_object* v___y_6205_){
_start:
{
lean_object* v_res_6206_; 
v_res_6206_ = l_Lean_Server_Completion_errorNameCompletion___lam__1(v_partialId_6197_, v_caps_6198_, v_ctx_6199_, v___f_6200_, v___y_6201_, v___y_6202_, v___y_6203_, v___y_6204_);
lean_dec(v___y_6204_);
lean_dec_ref(v___y_6203_);
lean_dec(v___y_6202_);
lean_dec_ref(v___y_6201_);
lean_dec_ref(v_caps_6198_);
lean_dec(v_partialId_6197_);
return v_res_6206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion(lean_object* v_uri_6207_, lean_object* v_pos_6208_, lean_object* v_completionInfoPos_6209_, lean_object* v_ctx_6210_, lean_object* v_partialId_6211_, lean_object* v_caps_6212_){
_start:
{
lean_object* v___f_6214_; lean_object* v___f_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; lean_object* v___x_6218_; lean_object* v___x_6219_; 
v___f_6214_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__0___boxed), 6, 3);
lean_closure_set(v___f_6214_, 0, v_completionInfoPos_6209_);
lean_closure_set(v___f_6214_, 1, v_uri_6207_);
lean_closure_set(v___f_6214_, 2, v_pos_6208_);
lean_inc_ref(v_ctx_6210_);
v___f_6215_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_errorNameCompletion___lam__1___boxed), 9, 4);
lean_closure_set(v___f_6215_, 0, v_partialId_6211_);
lean_closure_set(v___f_6215_, 1, v_caps_6212_);
lean_closure_set(v___f_6215_, 2, v_ctx_6210_);
lean_closure_set(v___f_6215_, 3, v___f_6214_);
v___x_6216_ = lean_unsigned_to_nat(32u);
v___x_6217_ = lean_mk_empty_array_with_capacity(v___x_6216_);
lean_dec_ref(v___x_6217_);
v___x_6218_ = lean_obj_once(&l_Lean_Server_Completion_optionCompletion___closed__4, &l_Lean_Server_Completion_optionCompletion___closed__4_once, _init_l_Lean_Server_Completion_optionCompletion___closed__4);
v___x_6219_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6210_, v___x_6218_, v___f_6215_);
return v___x_6219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_errorNameCompletion___boxed(lean_object* v_uri_6220_, lean_object* v_pos_6221_, lean_object* v_completionInfoPos_6222_, lean_object* v_ctx_6223_, lean_object* v_partialId_6224_, lean_object* v_caps_6225_, lean_object* v_a_6226_){
_start:
{
lean_object* v_res_6227_; 
v_res_6227_ = l_Lean_Server_Completion_errorNameCompletion(v_uri_6220_, v_pos_6221_, v_completionInfoPos_6222_, v_ctx_6223_, v_partialId_6224_, v_caps_6225_);
return v_res_6227_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(lean_object* v___y_6228_, lean_object* v___y_6229_, lean_object* v___y_6230_, lean_object* v___y_6231_){
_start:
{
lean_object* v___x_6233_; 
v___x_6233_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___redArg(v___y_6231_);
return v___x_6233_;
}
}
LEAN_EXPORT lean_object* l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0___boxed(lean_object* v___y_6234_, lean_object* v___y_6235_, lean_object* v___y_6236_, lean_object* v___y_6237_, lean_object* v___y_6238_){
_start:
{
lean_object* v_res_6239_; 
v_res_6239_ = l_Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0(v___y_6234_, v___y_6235_, v___y_6236_, v___y_6237_);
lean_dec(v___y_6237_);
lean_dec_ref(v___y_6236_);
lean_dec(v___y_6235_);
lean_dec_ref(v___y_6234_);
return v_res_6239_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(lean_object* v_init_6240_, lean_object* v_t_6241_){
_start:
{
lean_object* v___x_6242_; 
v___x_6242_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0_spec__1(v_init_6240_, v_t_6241_);
return v___x_6242_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0___boxed(lean_object* v_init_6243_, lean_object* v_t_6244_){
_start:
{
lean_object* v_res_6245_; 
v_res_6245_ = l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__0(v_init_6243_, v_t_6244_);
lean_dec(v_t_6244_);
return v_res_6245_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(lean_object* v_n_6246_, lean_object* v_as_6247_, lean_object* v_lo_6248_, lean_object* v_hi_6249_, lean_object* v_w_6250_, lean_object* v_hlo_6251_, lean_object* v_hhi_6252_){
_start:
{
lean_object* v___x_6253_; 
v___x_6253_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___redArg(v_n_6246_, v_as_6247_, v_lo_6248_, v_hi_6249_);
return v___x_6253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1___boxed(lean_object* v_n_6254_, lean_object* v_as_6255_, lean_object* v_lo_6256_, lean_object* v_hi_6257_, lean_object* v_w_6258_, lean_object* v_hlo_6259_, lean_object* v_hhi_6260_){
_start:
{
lean_object* v_res_6261_; 
v_res_6261_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1(v_n_6254_, v_as_6255_, v_lo_6256_, v_hi_6257_, v_w_6258_, v_hlo_6259_, v_hhi_6260_);
lean_dec(v_hi_6257_);
lean_dec(v_n_6254_);
return v_res_6261_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(lean_object* v_n_6262_, lean_object* v_lo_6263_, lean_object* v_hi_6264_, lean_object* v_hhi_6265_, lean_object* v_pivot_6266_, lean_object* v_as_6267_, lean_object* v_i_6268_, lean_object* v_k_6269_, lean_object* v_ilo_6270_, lean_object* v_ik_6271_, lean_object* v_w_6272_){
_start:
{
lean_object* v___x_6273_; 
v___x_6273_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___redArg(v_hi_6264_, v_pivot_6266_, v_as_6267_, v_i_6268_, v_k_6269_);
return v___x_6273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3___boxed(lean_object* v_n_6274_, lean_object* v_lo_6275_, lean_object* v_hi_6276_, lean_object* v_hhi_6277_, lean_object* v_pivot_6278_, lean_object* v_as_6279_, lean_object* v_i_6280_, lean_object* v_k_6281_, lean_object* v_ilo_6282_, lean_object* v_ik_6283_, lean_object* v_w_6284_){
_start:
{
lean_object* v_res_6285_; 
v_res_6285_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_getErrorExplanations___at___00Lean_Server_Completion_errorNameCompletion_spec__0_spec__1_spec__3(v_n_6274_, v_lo_6275_, v_hi_6276_, v_hhi_6277_, v_pivot_6278_, v_as_6279_, v_i_6280_, v_k_6281_, v_ilo_6282_, v_ik_6283_, v_w_6284_);
lean_dec(v_hi_6276_);
lean_dec(v_lo_6275_);
lean_dec(v_n_6274_);
return v_res_6285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(lean_object* v_completionInfoPos_6286_, lean_object* v_uri_6287_, lean_object* v_pos_6288_, size_t v_sz_6289_, size_t v_i_6290_, lean_object* v_bs_6291_){
_start:
{
uint8_t v___x_6292_; 
v___x_6292_ = lean_usize_dec_lt(v_i_6290_, v_sz_6289_);
if (v___x_6292_ == 0)
{
lean_dec_ref(v_pos_6288_);
lean_dec_ref(v_uri_6287_);
lean_dec(v_completionInfoPos_6286_);
return v_bs_6291_;
}
else
{
lean_object* v_v_6293_; lean_object* v_userName_6294_; lean_object* v_docString_6295_; lean_object* v___x_6296_; lean_object* v_bs_x27_6297_; lean_object* v___x_6298_; lean_object* v___y_6300_; 
v_v_6293_ = lean_array_uget_borrowed(v_bs_6291_, v_i_6290_);
v_userName_6294_ = lean_ctor_get(v_v_6293_, 1);
lean_inc_ref(v_userName_6294_);
v_docString_6295_ = lean_ctor_get(v_v_6293_, 3);
lean_inc(v_docString_6295_);
v___x_6296_ = lean_unsigned_to_nat(0u);
v_bs_x27_6297_ = lean_array_uset(v_bs_6291_, v_i_6290_, v___x_6296_);
v___x_6298_ = lean_box(0);
if (lean_obj_tag(v_docString_6295_) == 0)
{
v___y_6300_ = v___x_6298_;
goto v___jp_6299_;
}
else
{
lean_object* v_val_6310_; lean_object* v___x_6312_; uint8_t v_isShared_6313_; uint8_t v_isSharedCheck_6319_; 
v_val_6310_ = lean_ctor_get(v_docString_6295_, 0);
v_isSharedCheck_6319_ = !lean_is_exclusive(v_docString_6295_);
if (v_isSharedCheck_6319_ == 0)
{
v___x_6312_ = v_docString_6295_;
v_isShared_6313_ = v_isSharedCheck_6319_;
goto v_resetjp_6311_;
}
else
{
lean_inc(v_val_6310_);
lean_dec(v_docString_6295_);
v___x_6312_ = lean_box(0);
v_isShared_6313_ = v_isSharedCheck_6319_;
goto v_resetjp_6311_;
}
v_resetjp_6311_:
{
uint8_t v___x_6314_; lean_object* v___x_6315_; lean_object* v___x_6317_; 
v___x_6314_ = 1;
v___x_6315_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_6315_, 0, v_val_6310_);
lean_ctor_set_uint8(v___x_6315_, sizeof(void*)*1, v___x_6314_);
if (v_isShared_6313_ == 0)
{
lean_ctor_set(v___x_6312_, 0, v___x_6315_);
v___x_6317_ = v___x_6312_;
goto v_reusejp_6316_;
}
else
{
lean_object* v_reuseFailAlloc_6318_; 
v_reuseFailAlloc_6318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6318_, 0, v___x_6315_);
v___x_6317_ = v_reuseFailAlloc_6318_;
goto v_reusejp_6316_;
}
v_reusejp_6316_:
{
v___y_6300_ = v___x_6317_;
goto v___jp_6299_;
}
}
}
v___jp_6299_:
{
lean_object* v___x_6301_; lean_object* v___x_6302_; lean_object* v___x_6303_; lean_object* v___x_6304_; lean_object* v___x_6305_; size_t v___x_6306_; size_t v___x_6307_; lean_object* v___x_6308_; 
v___x_6301_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addKeywordCompletionItem___redArg___closed__2);
lean_inc(v_completionInfoPos_6286_);
v___x_6302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6302_, 0, v_completionInfoPos_6286_);
lean_inc_ref(v_pos_6288_);
lean_inc_ref(v_uri_6287_);
v___x_6303_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6303_, 0, v_uri_6287_);
lean_ctor_set(v___x_6303_, 1, v_pos_6288_);
lean_ctor_set(v___x_6303_, 2, v___x_6302_);
lean_ctor_set(v___x_6303_, 3, v___x_6298_);
v___x_6304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6304_, 0, v___x_6303_);
v___x_6305_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6305_, 0, v_userName_6294_);
lean_ctor_set(v___x_6305_, 1, v___x_6298_);
lean_ctor_set(v___x_6305_, 2, v___y_6300_);
lean_ctor_set(v___x_6305_, 3, v___x_6301_);
lean_ctor_set(v___x_6305_, 4, v___x_6298_);
lean_ctor_set(v___x_6305_, 5, v___x_6298_);
lean_ctor_set(v___x_6305_, 6, v___x_6304_);
lean_ctor_set(v___x_6305_, 7, v___x_6298_);
v___x_6306_ = ((size_t)1ULL);
v___x_6307_ = lean_usize_add(v_i_6290_, v___x_6306_);
v___x_6308_ = lean_array_uset(v_bs_x27_6297_, v_i_6290_, v___x_6305_);
v_i_6290_ = v___x_6307_;
v_bs_6291_ = v___x_6308_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6320_, lean_object* v_uri_6321_, lean_object* v_pos_6322_, lean_object* v_sz_6323_, lean_object* v_i_6324_, lean_object* v_bs_6325_){
_start:
{
size_t v_sz_boxed_6326_; size_t v_i_boxed_6327_; lean_object* v_res_6328_; 
v_sz_boxed_6326_ = lean_unbox_usize(v_sz_6323_);
lean_dec(v_sz_6323_);
v_i_boxed_6327_ = lean_unbox_usize(v_i_6324_);
lean_dec(v_i_6324_);
v_res_6328_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6320_, v_uri_6321_, v_pos_6322_, v_sz_boxed_6326_, v_i_boxed_6327_, v_bs_6325_);
return v_res_6328_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0(uint8_t v___x_6329_, lean_object* v_completionInfoPos_6330_, lean_object* v_uri_6331_, lean_object* v_pos_6332_, lean_object* v___y_6333_, lean_object* v___y_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_){
_start:
{
lean_object* v___x_6338_; 
v___x_6338_ = l_Lean_Elab_Tactic_Doc_allTacticDocs(v___x_6329_, v___y_6333_, v___y_6334_, v___y_6335_, v___y_6336_);
if (lean_obj_tag(v___x_6338_) == 0)
{
lean_object* v_a_6339_; lean_object* v___x_6341_; uint8_t v_isShared_6342_; uint8_t v_isSharedCheck_6349_; 
v_a_6339_ = lean_ctor_get(v___x_6338_, 0);
v_isSharedCheck_6349_ = !lean_is_exclusive(v___x_6338_);
if (v_isSharedCheck_6349_ == 0)
{
v___x_6341_ = v___x_6338_;
v_isShared_6342_ = v_isSharedCheck_6349_;
goto v_resetjp_6340_;
}
else
{
lean_inc(v_a_6339_);
lean_dec(v___x_6338_);
v___x_6341_ = lean_box(0);
v_isShared_6342_ = v_isSharedCheck_6349_;
goto v_resetjp_6340_;
}
v_resetjp_6340_:
{
size_t v_sz_6343_; size_t v___x_6344_; lean_object* v___x_6345_; lean_object* v___x_6347_; 
v_sz_6343_ = lean_array_size(v_a_6339_);
v___x_6344_ = ((size_t)0ULL);
v___x_6345_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_tacticCompletion_spec__0(v_completionInfoPos_6330_, v_uri_6331_, v_pos_6332_, v_sz_6343_, v___x_6344_, v_a_6339_);
if (v_isShared_6342_ == 0)
{
lean_ctor_set(v___x_6341_, 0, v___x_6345_);
v___x_6347_ = v___x_6341_;
goto v_reusejp_6346_;
}
else
{
lean_object* v_reuseFailAlloc_6348_; 
v_reuseFailAlloc_6348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6348_, 0, v___x_6345_);
v___x_6347_ = v_reuseFailAlloc_6348_;
goto v_reusejp_6346_;
}
v_reusejp_6346_:
{
return v___x_6347_;
}
}
}
else
{
lean_object* v_a_6350_; lean_object* v___x_6352_; uint8_t v_isShared_6353_; uint8_t v_isSharedCheck_6357_; 
lean_dec_ref(v_pos_6332_);
lean_dec_ref(v_uri_6331_);
lean_dec(v_completionInfoPos_6330_);
v_a_6350_ = lean_ctor_get(v___x_6338_, 0);
v_isSharedCheck_6357_ = !lean_is_exclusive(v___x_6338_);
if (v_isSharedCheck_6357_ == 0)
{
v___x_6352_ = v___x_6338_;
v_isShared_6353_ = v_isSharedCheck_6357_;
goto v_resetjp_6351_;
}
else
{
lean_inc(v_a_6350_);
lean_dec(v___x_6338_);
v___x_6352_ = lean_box(0);
v_isShared_6353_ = v_isSharedCheck_6357_;
goto v_resetjp_6351_;
}
v_resetjp_6351_:
{
lean_object* v___x_6355_; 
if (v_isShared_6353_ == 0)
{
v___x_6355_ = v___x_6352_;
goto v_reusejp_6354_;
}
else
{
lean_object* v_reuseFailAlloc_6356_; 
v_reuseFailAlloc_6356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6356_, 0, v_a_6350_);
v___x_6355_ = v_reuseFailAlloc_6356_;
goto v_reusejp_6354_;
}
v_reusejp_6354_:
{
return v___x_6355_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___lam__0___boxed(lean_object* v___x_6358_, lean_object* v_completionInfoPos_6359_, lean_object* v_uri_6360_, lean_object* v_pos_6361_, lean_object* v___y_6362_, lean_object* v___y_6363_, lean_object* v___y_6364_, lean_object* v___y_6365_, lean_object* v___y_6366_){
_start:
{
uint8_t v___x_495__boxed_6367_; lean_object* v_res_6368_; 
v___x_495__boxed_6367_ = lean_unbox(v___x_6358_);
v_res_6368_ = l_Lean_Server_Completion_tacticCompletion___lam__0(v___x_495__boxed_6367_, v_completionInfoPos_6359_, v_uri_6360_, v_pos_6361_, v___y_6362_, v___y_6363_, v___y_6364_, v___y_6365_);
lean_dec(v___y_6365_);
lean_dec_ref(v___y_6364_);
lean_dec(v___y_6363_);
lean_dec_ref(v___y_6362_);
return v_res_6368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion(lean_object* v_uri_6369_, lean_object* v_pos_6370_, lean_object* v_completionInfoPos_6371_, lean_object* v_ctx_6372_){
_start:
{
lean_object* v___x_6374_; uint8_t v___x_6375_; lean_object* v___x_6376_; lean_object* v___f_6377_; lean_object* v___x_6378_; 
v___x_6374_ = l_Lean_LocalContext_empty;
v___x_6375_ = 0;
v___x_6376_ = lean_box(v___x_6375_);
v___f_6377_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_tacticCompletion___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6377_, 0, v___x_6376_);
lean_closure_set(v___f_6377_, 1, v_completionInfoPos_6371_);
lean_closure_set(v___f_6377_, 2, v_uri_6369_);
lean_closure_set(v___f_6377_, 3, v_pos_6370_);
v___x_6378_ = l_Lean_Elab_ContextInfo_runMetaM___redArg(v_ctx_6372_, v___x_6374_, v___f_6377_);
return v___x_6378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_tacticCompletion___boxed(lean_object* v_uri_6379_, lean_object* v_pos_6380_, lean_object* v_completionInfoPos_6381_, lean_object* v_ctx_6382_, lean_object* v_a_6383_){
_start:
{
lean_object* v_res_6384_; 
v_res_6384_ = l_Lean_Server_Completion_tacticCompletion(v_uri_6379_, v_pos_6380_, v_completionInfoPos_6381_, v_ctx_6382_);
return v_res_6384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(lean_object* v_a_6385_, lean_object* v_b_6386_){
_start:
{
lean_object* v_array_6387_; lean_object* v_start_6388_; lean_object* v_stop_6389_; lean_object* v___x_6391_; uint8_t v_isShared_6392_; uint8_t v_isSharedCheck_6402_; 
v_array_6387_ = lean_ctor_get(v_a_6385_, 0);
v_start_6388_ = lean_ctor_get(v_a_6385_, 1);
v_stop_6389_ = lean_ctor_get(v_a_6385_, 2);
v_isSharedCheck_6402_ = !lean_is_exclusive(v_a_6385_);
if (v_isSharedCheck_6402_ == 0)
{
v___x_6391_ = v_a_6385_;
v_isShared_6392_ = v_isSharedCheck_6402_;
goto v_resetjp_6390_;
}
else
{
lean_inc(v_stop_6389_);
lean_inc(v_start_6388_);
lean_inc(v_array_6387_);
lean_dec(v_a_6385_);
v___x_6391_ = lean_box(0);
v_isShared_6392_ = v_isSharedCheck_6402_;
goto v_resetjp_6390_;
}
v_resetjp_6390_:
{
uint8_t v___x_6393_; 
v___x_6393_ = lean_nat_dec_lt(v_start_6388_, v_stop_6389_);
if (v___x_6393_ == 0)
{
lean_del_object(v___x_6391_);
lean_dec(v_stop_6389_);
lean_dec(v_start_6388_);
lean_dec_ref(v_array_6387_);
return v_b_6386_;
}
else
{
lean_object* v___x_6394_; lean_object* v___x_6395_; lean_object* v___x_6397_; 
v___x_6394_ = lean_unsigned_to_nat(1u);
v___x_6395_ = lean_nat_add(v_start_6388_, v___x_6394_);
lean_inc_ref(v_array_6387_);
if (v_isShared_6392_ == 0)
{
lean_ctor_set(v___x_6391_, 1, v___x_6395_);
v___x_6397_ = v___x_6391_;
goto v_reusejp_6396_;
}
else
{
lean_object* v_reuseFailAlloc_6401_; 
v_reuseFailAlloc_6401_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6401_, 0, v_array_6387_);
lean_ctor_set(v_reuseFailAlloc_6401_, 1, v___x_6395_);
lean_ctor_set(v_reuseFailAlloc_6401_, 2, v_stop_6389_);
v___x_6397_ = v_reuseFailAlloc_6401_;
goto v_reusejp_6396_;
}
v_reusejp_6396_:
{
lean_object* v___x_6398_; lean_object* v___x_6399_; 
v___x_6398_ = lean_array_fget(v_array_6387_, v_start_6388_);
lean_dec(v_start_6388_);
lean_dec_ref(v_array_6387_);
v___x_6399_ = lean_array_push(v_b_6386_, v___x_6398_);
v_a_6385_ = v___x_6397_;
v_b_6386_ = v___x_6399_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0(void){
_start:
{
lean_object* v___x_6403_; lean_object* v___x_6404_; 
v___x_6403_ = lean_unsigned_to_nat(0u);
v___x_6404_ = lean_mk_empty_array_with_capacity(v___x_6403_);
return v___x_6404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(lean_object* v_scopeNames_6405_, lean_object* v_idx_6406_){
_start:
{
lean_object* v___x_6407_; lean_object* v___x_6408_; lean_object* v___x_6409_; lean_object* v___x_6410_; lean_object* v___x_6411_; lean_object* v___x_6412_; lean_object* v___x_6413_; 
v___x_6407_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_trailingDotCompletion___redArg___closed__0);
v___x_6408_ = lean_array_get_size(v_scopeNames_6405_);
v___x_6409_ = l_Array_toSubarray___redArg(v_scopeNames_6405_, v_idx_6406_, v___x_6408_);
v___x_6410_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0);
v___x_6411_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v___x_6409_, v___x_6410_);
v___x_6412_ = lean_array_to_list(v___x_6411_);
v___x_6413_ = l_String_intercalate(v___x_6407_, v___x_6412_);
return v___x_6413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0(lean_object* v_inst_6414_, lean_object* v_R_6415_, lean_object* v_a_6416_, lean_object* v_b_6417_){
_start:
{
lean_object* v___x_6418_; 
v___x_6418_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate_spec__0___redArg(v_a_6416_, v_b_6417_);
return v___x_6418_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(lean_object* v_upperBound_6419_, lean_object* v_next_6420_, lean_object* v_scopeNames_6421_, lean_object* v_idComponents_6422_, lean_object* v_a_6423_, uint8_t v_b_6424_){
_start:
{
uint8_t v___x_6425_; 
v___x_6425_ = lean_nat_dec_lt(v_a_6423_, v_upperBound_6419_);
if (v___x_6425_ == 0)
{
lean_dec(v_a_6423_);
return v_b_6424_;
}
else
{
uint8_t v___x_6426_; lean_object* v___x_6427_; lean_object* v___x_6428_; uint8_t v___x_6429_; 
v___x_6426_ = 0;
v___x_6427_ = lean_nat_add(v_next_6420_, v_a_6423_);
v___x_6428_ = lean_array_get_size(v_scopeNames_6421_);
v___x_6429_ = lean_nat_dec_lt(v___x_6427_, v___x_6428_);
if (v___x_6429_ == 0)
{
lean_dec(v___x_6427_);
lean_dec(v_a_6423_);
return v___x_6426_;
}
else
{
lean_object* v___x_6430_; lean_object* v___x_6431_; lean_object* v___x_6432_; uint8_t v___x_6433_; 
v___x_6430_ = lean_array_fget_borrowed(v_scopeNames_6421_, v___x_6427_);
lean_dec(v___x_6427_);
v___x_6431_ = lean_obj_once(&l_Lean_Server_Completion_fieldIdCompletion___closed__0, &l_Lean_Server_Completion_fieldIdCompletion___closed__0_once, _init_l_Lean_Server_Completion_fieldIdCompletion___closed__0);
v___x_6432_ = lean_array_get_borrowed(v___x_6431_, v_idComponents_6422_, v_a_6423_);
v___x_6433_ = lean_string_dec_eq(v___x_6432_, v___x_6430_);
if (v___x_6433_ == 0)
{
lean_dec(v_a_6423_);
return v___x_6426_;
}
else
{
lean_object* v___x_6434_; lean_object* v___x_6435_; 
v___x_6434_ = lean_unsigned_to_nat(1u);
v___x_6435_ = lean_nat_add(v_a_6423_, v___x_6434_);
lean_dec(v_a_6423_);
v_a_6423_ = v___x_6435_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg___boxed(lean_object* v_upperBound_6437_, lean_object* v_next_6438_, lean_object* v_scopeNames_6439_, lean_object* v_idComponents_6440_, lean_object* v_a_6441_, lean_object* v_b_6442_){
_start:
{
uint8_t v_b_boxed_6443_; uint8_t v_res_6444_; lean_object* v_r_6445_; 
v_b_boxed_6443_ = lean_unbox(v_b_6442_);
v_res_6444_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6437_, v_next_6438_, v_scopeNames_6439_, v_idComponents_6440_, v_a_6441_, v_b_boxed_6443_);
lean_dec_ref(v_idComponents_6440_);
lean_dec_ref(v_scopeNames_6439_);
lean_dec(v_next_6438_);
lean_dec(v_upperBound_6437_);
v_r_6445_ = lean_box(v_res_6444_);
return v_r_6445_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(lean_object* v_upperBound_6446_, lean_object* v_idComponents_6447_, lean_object* v_scopeNames_6448_, lean_object* v_a_6449_, lean_object* v_b_6450_){
_start:
{
lean_object* v_a_6452_; uint8_t v___x_6456_; 
v___x_6456_ = lean_nat_dec_lt(v_a_6449_, v_upperBound_6446_);
if (v___x_6456_ == 0)
{
lean_dec(v_a_6449_);
lean_dec_ref(v_scopeNames_6448_);
return v_b_6450_;
}
else
{
lean_object* v___x_6457_; lean_object* v___x_6458_; lean_object* v___x_6459_; uint8_t v___x_6460_; 
v___x_6457_ = lean_array_get_size(v_idComponents_6447_);
v___x_6458_ = lean_unsigned_to_nat(1u);
v___x_6459_ = lean_nat_sub(v___x_6457_, v___x_6458_);
v___x_6460_ = lean_nat_dec_lt(v___x_6459_, v___x_6457_);
if (v___x_6460_ == 0)
{
lean_object* v___x_6461_; lean_object* v___x_6462_; 
lean_dec(v___x_6459_);
lean_inc(v_a_6449_);
lean_inc_ref(v_scopeNames_6448_);
v___x_6461_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6448_, v_a_6449_);
v___x_6462_ = lean_array_push(v_b_6450_, v___x_6461_);
v_a_6452_ = v___x_6462_;
goto v___jp_6451_;
}
else
{
lean_object* v___x_6463_; lean_object* v___x_6464_; lean_object* v___x_6465_; uint8_t v___x_6466_; 
v___x_6463_ = lean_nat_add(v_a_6449_, v___x_6457_);
v___x_6464_ = lean_nat_sub(v___x_6463_, v___x_6458_);
lean_dec(v___x_6463_);
v___x_6465_ = lean_array_get_size(v_scopeNames_6448_);
v___x_6466_ = lean_nat_dec_lt(v___x_6464_, v___x_6465_);
if (v___x_6466_ == 0)
{
lean_dec(v___x_6464_);
lean_dec(v___x_6459_);
v_a_6452_ = v_b_6450_;
goto v___jp_6451_;
}
else
{
lean_object* v___x_6467_; lean_object* v___x_6468_; uint8_t v___x_6469_; 
v___x_6467_ = lean_array_fget_borrowed(v_idComponents_6447_, v___x_6459_);
v___x_6468_ = lean_array_fget_borrowed(v_scopeNames_6448_, v___x_6464_);
v___x_6469_ = l_String_charactersIn(v___x_6467_, v___x_6468_);
if (v___x_6469_ == 0)
{
lean_dec(v___x_6464_);
lean_dec(v___x_6459_);
v_a_6452_ = v_b_6450_;
goto v___jp_6451_;
}
else
{
lean_object* v___x_6470_; uint8_t v___x_6471_; 
v___x_6470_ = lean_unsigned_to_nat(0u);
v___x_6471_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v___x_6459_, v_a_6449_, v_scopeNames_6448_, v_idComponents_6447_, v___x_6470_, v___x_6469_);
lean_dec(v___x_6459_);
if (v___x_6471_ == 0)
{
lean_dec(v___x_6464_);
v_a_6452_ = v_b_6450_;
goto v___jp_6451_;
}
else
{
lean_object* v___x_6472_; lean_object* v___x_6473_; 
lean_inc_ref(v_scopeNames_6448_);
v___x_6472_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate(v_scopeNames_6448_, v___x_6464_);
v___x_6473_ = lean_array_push(v_b_6450_, v___x_6472_);
v_a_6452_ = v___x_6473_;
goto v___jp_6451_;
}
}
}
}
}
v___jp_6451_:
{
lean_object* v___x_6453_; lean_object* v___x_6454_; 
v___x_6453_ = lean_unsigned_to_nat(1u);
v___x_6454_ = lean_nat_add(v_a_6449_, v___x_6453_);
lean_dec(v_a_6449_);
v_a_6449_ = v___x_6454_;
v_b_6450_ = v_a_6452_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg___boxed(lean_object* v_upperBound_6474_, lean_object* v_idComponents_6475_, lean_object* v_scopeNames_6476_, lean_object* v_a_6477_, lean_object* v_b_6478_){
_start:
{
lean_object* v_res_6479_; 
v_res_6479_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6474_, v_idComponents_6475_, v_scopeNames_6476_, v_a_6477_, v_b_6478_);
lean_dec_ref(v_idComponents_6475_);
lean_dec(v_upperBound_6474_);
return v_res_6479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(lean_object* v_idComponents_6480_, lean_object* v_scopeNames_6481_){
_start:
{
lean_object* v___x_6482_; lean_object* v___x_6483_; lean_object* v_r_6484_; lean_object* v___x_6485_; 
v___x_6482_ = lean_unsigned_to_nat(0u);
v___x_6483_ = lean_array_get_size(v_scopeNames_6481_);
v_r_6484_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0);
v___x_6485_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v___x_6483_, v_idComponents_6480_, v_scopeNames_6481_, v___x_6482_, v_r_6484_);
return v___x_6485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates___boxed(lean_object* v_idComponents_6486_, lean_object* v_scopeNames_6487_){
_start:
{
lean_object* v_res_6488_; 
v_res_6488_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6486_, v_scopeNames_6487_);
lean_dec_ref(v_idComponents_6486_);
return v_res_6488_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(lean_object* v_upperBound_6489_, lean_object* v_next_6490_, lean_object* v_scopeNames_6491_, lean_object* v_idComponents_6492_, lean_object* v_inst_6493_, lean_object* v_R_6494_, lean_object* v_a_6495_, uint8_t v_b_6496_, lean_object* v_c_6497_){
_start:
{
uint8_t v___x_6498_; 
v___x_6498_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___redArg(v_upperBound_6489_, v_next_6490_, v_scopeNames_6491_, v_idComponents_6492_, v_a_6495_, v_b_6496_);
return v___x_6498_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0___boxed(lean_object* v_upperBound_6499_, lean_object* v_next_6500_, lean_object* v_scopeNames_6501_, lean_object* v_idComponents_6502_, lean_object* v_inst_6503_, lean_object* v_R_6504_, lean_object* v_a_6505_, lean_object* v_b_6506_, lean_object* v_c_6507_){
_start:
{
uint8_t v_b_boxed_6508_; uint8_t v_res_6509_; lean_object* v_r_6510_; 
v_b_boxed_6508_ = lean_unbox(v_b_6506_);
v_res_6509_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__0(v_upperBound_6499_, v_next_6500_, v_scopeNames_6501_, v_idComponents_6502_, v_inst_6503_, v_R_6504_, v_a_6505_, v_b_boxed_6508_, v_c_6507_);
lean_dec_ref(v_idComponents_6502_);
lean_dec_ref(v_scopeNames_6501_);
lean_dec(v_next_6500_);
lean_dec(v_upperBound_6499_);
v_r_6510_ = lean_box(v_res_6509_);
return v_r_6510_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(lean_object* v_upperBound_6511_, lean_object* v_idComponents_6512_, lean_object* v_scopeNames_6513_, lean_object* v_inst_6514_, lean_object* v_R_6515_, lean_object* v_a_6516_, lean_object* v_b_6517_, lean_object* v_c_6518_){
_start:
{
lean_object* v___x_6519_; 
v___x_6519_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___redArg(v_upperBound_6511_, v_idComponents_6512_, v_scopeNames_6513_, v_a_6516_, v_b_6517_);
return v___x_6519_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1___boxed(lean_object* v_upperBound_6520_, lean_object* v_idComponents_6521_, lean_object* v_scopeNames_6522_, lean_object* v_inst_6523_, lean_object* v_R_6524_, lean_object* v_a_6525_, lean_object* v_b_6526_, lean_object* v_c_6527_){
_start:
{
lean_object* v_res_6528_; 
v_res_6528_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_spec__1(v_upperBound_6520_, v_idComponents_6521_, v_scopeNames_6522_, v_inst_6523_, v_R_6524_, v_a_6525_, v_b_6526_, v_c_6527_);
lean_dec_ref(v_idComponents_6521_);
lean_dec(v_upperBound_6520_);
return v_res_6528_;
}
}
LEAN_EXPORT uint8_t l_Lean_Server_Completion_endSectionCompletion___lam__0(lean_object* v_x_6529_){
_start:
{
lean_object* v___x_6530_; lean_object* v___x_6531_; uint8_t v___x_6532_; 
v___x_6530_ = lean_string_utf8_byte_size(v_x_6529_);
v___x_6531_ = lean_unsigned_to_nat(0u);
v___x_6532_ = lean_nat_dec_eq(v___x_6530_, v___x_6531_);
if (v___x_6532_ == 0)
{
uint8_t v___x_6533_; 
v___x_6533_ = 1;
return v___x_6533_;
}
else
{
uint8_t v___x_6534_; 
v___x_6534_ = 0;
return v___x_6534_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed(lean_object* v_x_6535_){
_start:
{
uint8_t v_res_6536_; lean_object* v_r_6537_; 
v_res_6536_ = l_Lean_Server_Completion_endSectionCompletion___lam__0(v_x_6535_);
lean_dec_ref(v_x_6535_);
v_r_6537_ = lean_box(v_res_6536_);
return v_r_6537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(lean_object* v_completionInfoPos_6538_, lean_object* v_uri_6539_, lean_object* v_pos_6540_, size_t v_sz_6541_, size_t v_i_6542_, lean_object* v_bs_6543_){
_start:
{
uint8_t v___x_6544_; 
v___x_6544_ = lean_usize_dec_lt(v_i_6542_, v_sz_6541_);
if (v___x_6544_ == 0)
{
lean_dec_ref(v_pos_6540_);
lean_dec_ref(v_uri_6539_);
lean_dec(v_completionInfoPos_6538_);
return v_bs_6543_;
}
else
{
lean_object* v_v_6545_; lean_object* v___x_6546_; lean_object* v_bs_x27_6547_; lean_object* v___x_6548_; lean_object* v___x_6549_; lean_object* v___x_6550_; lean_object* v___x_6551_; lean_object* v___x_6552_; lean_object* v___x_6553_; size_t v___x_6554_; size_t v___x_6555_; lean_object* v___x_6556_; 
v_v_6545_ = lean_array_uget(v_bs_6543_, v_i_6542_);
v___x_6546_ = lean_unsigned_to_nat(0u);
v_bs_x27_6547_ = lean_array_uset(v_bs_6543_, v_i_6542_, v___x_6546_);
v___x_6548_ = lean_box(0);
v___x_6549_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_addNamespaceCompletionItem___redArg___closed__2);
lean_inc(v_completionInfoPos_6538_);
v___x_6550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6550_, 0, v_completionInfoPos_6538_);
lean_inc_ref(v_pos_6540_);
lean_inc_ref(v_uri_6539_);
v___x_6551_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6551_, 0, v_uri_6539_);
lean_ctor_set(v___x_6551_, 1, v_pos_6540_);
lean_ctor_set(v___x_6551_, 2, v___x_6550_);
lean_ctor_set(v___x_6551_, 3, v___x_6548_);
v___x_6552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6552_, 0, v___x_6551_);
v___x_6553_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6553_, 0, v_v_6545_);
lean_ctor_set(v___x_6553_, 1, v___x_6548_);
lean_ctor_set(v___x_6553_, 2, v___x_6548_);
lean_ctor_set(v___x_6553_, 3, v___x_6549_);
lean_ctor_set(v___x_6553_, 4, v___x_6548_);
lean_ctor_set(v___x_6553_, 5, v___x_6548_);
lean_ctor_set(v___x_6553_, 6, v___x_6552_);
lean_ctor_set(v___x_6553_, 7, v___x_6548_);
v___x_6554_ = ((size_t)1ULL);
v___x_6555_ = lean_usize_add(v_i_6542_, v___x_6554_);
v___x_6556_ = lean_array_uset(v_bs_x27_6547_, v_i_6542_, v___x_6553_);
v_i_6542_ = v___x_6555_;
v_bs_6543_ = v___x_6556_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0___boxed(lean_object* v_completionInfoPos_6558_, lean_object* v_uri_6559_, lean_object* v_pos_6560_, lean_object* v_sz_6561_, lean_object* v_i_6562_, lean_object* v_bs_6563_){
_start:
{
size_t v_sz_boxed_6564_; size_t v_i_boxed_6565_; lean_object* v_res_6566_; 
v_sz_boxed_6564_ = lean_unbox_usize(v_sz_6561_);
lean_dec(v_sz_6561_);
v_i_boxed_6565_ = lean_unbox_usize(v_i_6562_);
lean_dec(v_i_6562_);
v_res_6566_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6558_, v_uri_6559_, v_pos_6560_, v_sz_boxed_6564_, v_i_boxed_6565_, v_bs_6563_);
return v_res_6566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(size_t v_sz_6567_, size_t v_i_6568_, lean_object* v_bs_6569_){
_start:
{
uint8_t v___x_6570_; 
v___x_6570_ = lean_usize_dec_lt(v_i_6568_, v_sz_6567_);
if (v___x_6570_ == 0)
{
return v_bs_6569_;
}
else
{
lean_object* v_v_6571_; lean_object* v___x_6572_; lean_object* v_bs_x27_6573_; lean_object* v___x_6574_; size_t v___x_6575_; size_t v___x_6576_; lean_object* v___x_6577_; 
v_v_6571_ = lean_array_uget(v_bs_6569_, v_i_6568_);
v___x_6572_ = lean_unsigned_to_nat(0u);
v_bs_x27_6573_ = lean_array_uset(v_bs_6569_, v_i_6568_, v___x_6572_);
v___x_6574_ = l_Lean_Name_toString(v_v_6571_, v___x_6570_);
v___x_6575_ = ((size_t)1ULL);
v___x_6576_ = lean_usize_add(v_i_6568_, v___x_6575_);
v___x_6577_ = lean_array_uset(v_bs_x27_6573_, v_i_6568_, v___x_6574_);
v_i_6568_ = v___x_6576_;
v_bs_6569_ = v___x_6577_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1___boxed(lean_object* v_sz_6579_, lean_object* v_i_6580_, lean_object* v_bs_6581_){
_start:
{
size_t v_sz_boxed_6582_; size_t v_i_boxed_6583_; lean_object* v_res_6584_; 
v_sz_boxed_6582_ = lean_unbox_usize(v_sz_6579_);
lean_dec(v_sz_6579_);
v_i_boxed_6583_ = lean_unbox_usize(v_i_6580_);
lean_dec(v_i_6580_);
v_res_6584_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_boxed_6582_, v_i_boxed_6583_, v_bs_6581_);
return v_res_6584_;
}
}
static lean_object* _init_l_Lean_Server_Completion_endSectionCompletion___closed__0(void){
_start:
{
lean_object* v___f_6585_; 
v___f_6585_ = lean_alloc_closure((void*)(l_Lean_Server_Completion_endSectionCompletion___lam__0___boxed), 1, 0);
return v___f_6585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion(lean_object* v_uri_6586_, lean_object* v_pos_6587_, lean_object* v_completionInfoPos_6588_, lean_object* v_id_x3f_6589_, uint8_t v_danglingDot_6590_, lean_object* v_scopeNames_6591_){
_start:
{
lean_object* v___f_6593_; lean_object* v_idComponents_6595_; lean_object* v___y_6606_; 
v___f_6593_ = lean_obj_once(&l_Lean_Server_Completion_endSectionCompletion___closed__0, &l_Lean_Server_Completion_endSectionCompletion___closed__0_once, _init_l_Lean_Server_Completion_endSectionCompletion___closed__0);
if (lean_obj_tag(v_id_x3f_6589_) == 0)
{
lean_object* v___x_6609_; 
v___x_6609_ = lean_obj_once(&l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0, &l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0_once, _init_l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates_mkCandidate___closed__0);
v___y_6606_ = v___x_6609_;
goto v___jp_6605_;
}
else
{
lean_object* v_val_6610_; lean_object* v___x_6611_; lean_object* v___x_6612_; size_t v_sz_6613_; size_t v___x_6614_; lean_object* v___x_6615_; 
v_val_6610_ = lean_ctor_get(v_id_x3f_6589_, 0);
lean_inc(v_val_6610_);
lean_dec_ref(v_id_x3f_6589_);
v___x_6611_ = l_Lean_Name_components(v_val_6610_);
v___x_6612_ = lean_array_mk(v___x_6611_);
v_sz_6613_ = lean_array_size(v___x_6612_);
v___x_6614_ = ((size_t)0ULL);
v___x_6615_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__1(v_sz_6613_, v___x_6614_, v___x_6612_);
v___y_6606_ = v___x_6615_;
goto v___jp_6605_;
}
v___jp_6594_:
{
lean_object* v___x_6596_; lean_object* v___x_6597_; lean_object* v___x_6598_; lean_object* v_scopeNames_6599_; lean_object* v_candidates_6600_; size_t v_sz_6601_; size_t v___x_6602_; lean_object* v___x_6603_; lean_object* v___x_6604_; 
v___x_6596_ = lean_array_mk(v_scopeNames_6591_);
v___x_6597_ = lean_array_pop(v___x_6596_);
v___x_6598_ = l_Array_takeWhile___redArg(v___f_6593_, v___x_6597_);
lean_dec_ref(v___x_6597_);
v_scopeNames_6599_ = l_Array_reverse___redArg(v___x_6598_);
v_candidates_6600_ = l___private_Lean_Server_Completion_CompletionCollectors_0__Lean_Server_Completion_findEndSectionCompletionCandidates(v_idComponents_6595_, v_scopeNames_6599_);
lean_dec_ref(v_idComponents_6595_);
v_sz_6601_ = lean_array_size(v_candidates_6600_);
v___x_6602_ = ((size_t)0ULL);
v___x_6603_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Server_Completion_endSectionCompletion_spec__0(v_completionInfoPos_6588_, v_uri_6586_, v_pos_6587_, v_sz_6601_, v___x_6602_, v_candidates_6600_);
v___x_6604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6604_, 0, v___x_6603_);
return v___x_6604_;
}
v___jp_6605_:
{
if (v_danglingDot_6590_ == 0)
{
v_idComponents_6595_ = v___y_6606_;
goto v___jp_6594_;
}
else
{
lean_object* v___x_6607_; lean_object* v_idComponents_6608_; 
v___x_6607_ = lean_obj_once(&l_Lean_Server_Completion_fieldIdCompletion___closed__0, &l_Lean_Server_Completion_fieldIdCompletion___closed__0_once, _init_l_Lean_Server_Completion_fieldIdCompletion___closed__0);
v_idComponents_6608_ = lean_array_push(v___y_6606_, v___x_6607_);
v_idComponents_6595_ = v_idComponents_6608_;
goto v___jp_6594_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Server_Completion_endSectionCompletion___boxed(lean_object* v_uri_6616_, lean_object* v_pos_6617_, lean_object* v_completionInfoPos_6618_, lean_object* v_id_x3f_6619_, lean_object* v_danglingDot_6620_, lean_object* v_scopeNames_6621_, lean_object* v_a_6622_){
_start:
{
uint8_t v_danglingDot_boxed_6623_; lean_object* v_res_6624_; 
v_danglingDot_boxed_6623_ = lean_unbox(v_danglingDot_6620_);
v_res_6624_ = l_Lean_Server_Completion_endSectionCompletion(v_uri_6616_, v_pos_6617_, v_completionInfoPos_6618_, v_id_x3f_6619_, v_danglingDot_boxed_6623_, v_scopeNames_6621_);
return v_res_6624_;
}
}
lean_object* runtime_initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* runtime_initialize_Lean_Server_RequestCancellation(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_FuzzyMatching(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Doc(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_CompletionResolution(uint8_t builtin);
lean_object* initialize_Lean_Server_Completion_EligibleHeaderDecls(uint8_t builtin);
lean_object* initialize_Lean_Server_RequestCancellation(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Server_Completion_CompletionCollectors(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_FuzzyMatching(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Doc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_CompletionResolution(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_Completion_EligibleHeaderDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Server_RequestCancellation(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Server_Completion_CompletionCollectors(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Server_Completion_CompletionCollectors(builtin);
}
#ifdef __cplusplus
}
#endif
