// Lean compiler output
// Module: Lean.Elab.BuiltinDo.Let
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.BuiltinDo.Basic import Lean.Elab.Do.PatternVar
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
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoElem(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoIdDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_ensureUnitAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_declareMutVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_throwUnlessMutVarsDeclared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_checkMutVarsForShadowing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Meta_getLocalDeclFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Elab_Term_exprToSyntax(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkLetConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withFreshMacroScope___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_Elab_Do_getLetDeclVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadicType___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_mkLetIdDeclView(lean_object*);
lean_object* l_Lean_Elab_Term_elabType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabBindersEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addLocalVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_continueWithUnit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarFromUserName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_declareMutVars_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
uint8_t l_Lean_LocalDeclKind_ofBinderName(lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Term_withPushMacroExpansionStack___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_expandLetEqnsDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_expandMacroImpl_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_privateToUserName(lean_object*);
lean_object* l_Lean_ResolveName_resolveNamespace(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ResolveName_resolveGlobalName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getLetRecDeclsVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Do_declareMutVars_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_getPatternVarsEx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__0;
static lean_once_cell_t l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__1;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__2;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__17;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__18;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__19;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__22;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__9;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__14;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__16;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__17;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__18;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__19;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__20;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__21;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__22;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__23;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__24;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__18(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__0;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__1;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__2;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__3;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__7;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__8;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__9;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__1___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoArrow___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoArrow___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLet___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLet___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLet___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoHave___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoHave___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetRec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetRec___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassign___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassign___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassign___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassign___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassign___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassign___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassign___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassign___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__4;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__3;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__4;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__5;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__6;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__7;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__8;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__9;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__10;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__11;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__12;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__13;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__14;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__15;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__16;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__17;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__18;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__19;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__20;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__21;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__22;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__23;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__24;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetElse___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetElse___closed__25;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetArrow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetArrow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__1;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetArrow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__2;
static lean_once_cell_t l_Lean_Elab_Do_elabDoLetArrow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoLetArrow___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassignArrow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__0;
static lean_once_cell_t l_Lean_Elab_Do_elabDoReassignArrow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Do_elabDoReassignArrow___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_Elab_Do_LetOrReassign_ctorIdx(v_x_5_);
lean_dec(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 0)
{
lean_object* v_mutTk_x3f_9_; lean_object* v___x_10_; 
v_mutTk_x3f_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_mutTk_x3f_9_);
lean_dec_ref(v_t_7_);
v___x_10_ = lean_apply_1(v_k_8_, v_mutTk_x3f_9_);
return v___x_10_;
}
else
{
lean_dec(v_t_7_);
return v_k_8_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, lean_object* v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_object* v___x_16_; 
v___x_16_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_13_, v_k_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_ctorElim___boxed(lean_object* v_motive_17_, lean_object* v_ctorIdx_18_, lean_object* v_t_19_, lean_object* v_h_20_, lean_object* v_k_21_){
_start:
{
lean_object* v_res_22_; 
v_res_22_ = l_Lean_Elab_Do_LetOrReassign_ctorElim(v_motive_17_, v_ctorIdx_18_, v_t_19_, v_h_20_, v_k_21_);
lean_dec(v_ctorIdx_18_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim___redArg(lean_object* v_t_23_, lean_object* v_let_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_23_, v_let_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_let_elim(lean_object* v_motive_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_let_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_27_, v_let_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim___redArg(lean_object* v_t_31_, lean_object* v_have_32_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_31_, v_have_32_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_have_elim(lean_object* v_motive_34_, lean_object* v_t_35_, lean_object* v_h_36_, lean_object* v_have_37_){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_35_, v_have_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim___redArg(lean_object* v_t_39_, lean_object* v_reassign_40_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_39_, v_reassign_40_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_reassign_elim(lean_object* v_motive_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_reassign_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_Elab_Do_LetOrReassign_ctorElim___redArg(v_t_43_, v_reassign_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(lean_object* v_letOrReassign_47_){
_start:
{
if (lean_obj_tag(v_letOrReassign_47_) == 0)
{
lean_object* v_mutTk_x3f_48_; 
v_mutTk_x3f_48_ = lean_ctor_get(v_letOrReassign_47_, 0);
lean_inc(v_mutTk_x3f_48_);
return v_mutTk_x3f_48_;
}
else
{
lean_object* v___x_49_; 
v___x_49_ = lean_box(0);
return v___x_49_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f___boxed(lean_object* v_letOrReassign_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_50_);
lean_dec(v_letOrReassign_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars(lean_object* v_letOrReassign_52_, lean_object* v_vars_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_){
_start:
{
if (lean_obj_tag(v_letOrReassign_52_) == 2)
{
lean_object* v___x_62_; 
v___x_62_ = l_Lean_Elab_Do_throwUnlessMutVarsDeclared(v_vars_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_);
return v___x_62_;
}
else
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Elab_Do_checkMutVarsForShadowing(v_vars_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_);
return v___x_63_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_checkMutVars___boxed(lean_object* v_letOrReassign_64_, lean_object* v_vars_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v_res_74_; 
v_res_74_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_64_, v_vars_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_, v_a_72_);
lean_dec(v_a_72_);
lean_dec_ref(v_a_71_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
lean_dec_ref(v_a_66_);
lean_dec_ref(v_vars_65_);
lean_dec(v_letOrReassign_64_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___redArg(lean_object* v_t_75_, lean_object* v___y_76_){
_start:
{
lean_object* v___x_78_; lean_object* v_infoState_79_; uint8_t v_enabled_80_; 
v___x_78_ = lean_st_ref_get(v___y_76_);
v_infoState_79_ = lean_ctor_get(v___x_78_, 7);
lean_inc_ref(v_infoState_79_);
lean_dec(v___x_78_);
v_enabled_80_ = lean_ctor_get_uint8(v_infoState_79_, sizeof(void*)*3);
lean_dec_ref(v_infoState_79_);
if (v_enabled_80_ == 0)
{
lean_object* v___x_81_; lean_object* v___x_82_; 
lean_dec_ref(v_t_75_);
v___x_81_ = lean_box(0);
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
return v___x_82_;
}
else
{
lean_object* v___x_83_; lean_object* v_infoState_84_; lean_object* v_env_85_; lean_object* v_nextMacroScope_86_; lean_object* v_ngen_87_; lean_object* v_auxDeclNGen_88_; lean_object* v_traceState_89_; lean_object* v_cache_90_; lean_object* v_messages_91_; lean_object* v_snapshotTasks_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_114_; 
v___x_83_ = lean_st_ref_take(v___y_76_);
v_infoState_84_ = lean_ctor_get(v___x_83_, 7);
v_env_85_ = lean_ctor_get(v___x_83_, 0);
v_nextMacroScope_86_ = lean_ctor_get(v___x_83_, 1);
v_ngen_87_ = lean_ctor_get(v___x_83_, 2);
v_auxDeclNGen_88_ = lean_ctor_get(v___x_83_, 3);
v_traceState_89_ = lean_ctor_get(v___x_83_, 4);
v_cache_90_ = lean_ctor_get(v___x_83_, 5);
v_messages_91_ = lean_ctor_get(v___x_83_, 6);
v_snapshotTasks_92_ = lean_ctor_get(v___x_83_, 8);
v_isSharedCheck_114_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_114_ == 0)
{
v___x_94_ = v___x_83_;
v_isShared_95_ = v_isSharedCheck_114_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_snapshotTasks_92_);
lean_inc(v_infoState_84_);
lean_inc(v_messages_91_);
lean_inc(v_cache_90_);
lean_inc(v_traceState_89_);
lean_inc(v_auxDeclNGen_88_);
lean_inc(v_ngen_87_);
lean_inc(v_nextMacroScope_86_);
lean_inc(v_env_85_);
lean_dec(v___x_83_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_114_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
uint8_t v_enabled_96_; lean_object* v_assignment_97_; lean_object* v_lazyAssignment_98_; lean_object* v_trees_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_113_; 
v_enabled_96_ = lean_ctor_get_uint8(v_infoState_84_, sizeof(void*)*3);
v_assignment_97_ = lean_ctor_get(v_infoState_84_, 0);
v_lazyAssignment_98_ = lean_ctor_get(v_infoState_84_, 1);
v_trees_99_ = lean_ctor_get(v_infoState_84_, 2);
v_isSharedCheck_113_ = !lean_is_exclusive(v_infoState_84_);
if (v_isSharedCheck_113_ == 0)
{
v___x_101_ = v_infoState_84_;
v_isShared_102_ = v_isSharedCheck_113_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_trees_99_);
lean_inc(v_lazyAssignment_98_);
lean_inc(v_assignment_97_);
lean_dec(v_infoState_84_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_113_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_103_; lean_object* v___x_105_; 
v___x_103_ = l_Lean_PersistentArray_push___redArg(v_trees_99_, v_t_75_);
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 2, v___x_103_);
v___x_105_ = v___x_101_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_assignment_97_);
lean_ctor_set(v_reuseFailAlloc_112_, 1, v_lazyAssignment_98_);
lean_ctor_set(v_reuseFailAlloc_112_, 2, v___x_103_);
lean_ctor_set_uint8(v_reuseFailAlloc_112_, sizeof(void*)*3, v_enabled_96_);
v___x_105_ = v_reuseFailAlloc_112_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
lean_object* v___x_107_; 
if (v_isShared_95_ == 0)
{
lean_ctor_set(v___x_94_, 7, v___x_105_);
v___x_107_ = v___x_94_;
goto v_reusejp_106_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_env_85_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v_nextMacroScope_86_);
lean_ctor_set(v_reuseFailAlloc_111_, 2, v_ngen_87_);
lean_ctor_set(v_reuseFailAlloc_111_, 3, v_auxDeclNGen_88_);
lean_ctor_set(v_reuseFailAlloc_111_, 4, v_traceState_89_);
lean_ctor_set(v_reuseFailAlloc_111_, 5, v_cache_90_);
lean_ctor_set(v_reuseFailAlloc_111_, 6, v_messages_91_);
lean_ctor_set(v_reuseFailAlloc_111_, 7, v___x_105_);
lean_ctor_set(v_reuseFailAlloc_111_, 8, v_snapshotTasks_92_);
v___x_107_ = v_reuseFailAlloc_111_;
goto v_reusejp_106_;
}
v_reusejp_106_:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_st_ref_set(v___y_76_, v___x_107_);
v___x_109_ = lean_box(0);
v___x_110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_110_, 0, v___x_109_);
return v___x_110_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___redArg___boxed(lean_object* v_t_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___redArg(v_t_115_, v___y_116_);
lean_dec(v___y_116_);
return v_res_118_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_119_ = lean_unsigned_to_nat(32u);
v___x_120_ = lean_mk_empty_array_with_capacity(v___x_119_);
v___x_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1(void){
_start:
{
size_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_122_ = ((size_t)5ULL);
v___x_123_ = lean_unsigned_to_nat(0u);
v___x_124_ = lean_unsigned_to_nat(32u);
v___x_125_ = lean_mk_empty_array_with_capacity(v___x_124_);
v___x_126_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__0, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__0_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__0);
v___x_127_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___x_125_);
lean_ctor_set(v___x_127_, 2, v___x_123_);
lean_ctor_set(v___x_127_, 3, v___x_123_);
lean_ctor_set_usize(v___x_127_, 4, v___x_122_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1(lean_object* v_t_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; lean_object* v_infoState_138_; uint8_t v_enabled_139_; 
v___x_137_ = lean_st_ref_get(v___y_135_);
v_infoState_138_ = lean_ctor_get(v___x_137_, 7);
lean_inc_ref(v_infoState_138_);
lean_dec(v___x_137_);
v_enabled_139_ = lean_ctor_get_uint8(v_infoState_138_, sizeof(void*)*3);
lean_dec_ref(v_infoState_138_);
if (v_enabled_139_ == 0)
{
lean_object* v___x_140_; lean_object* v___x_141_; 
lean_dec_ref(v_t_128_);
v___x_140_ = lean_box(0);
v___x_141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
return v___x_141_;
}
else
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1);
v___x_143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_143_, 0, v_t_128_);
lean_ctor_set(v___x_143_, 1, v___x_142_);
v___x_144_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___redArg(v___x_143_, v___y_135_);
return v___x_144_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___boxed(lean_object* v_t_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1(v_t_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec_ref(v___y_146_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___redArg(lean_object* v_a_155_, lean_object* v_x_156_){
_start:
{
if (lean_obj_tag(v_x_156_) == 0)
{
lean_object* v___x_157_; 
v___x_157_ = lean_box(0);
return v___x_157_;
}
else
{
lean_object* v_key_158_; lean_object* v_value_159_; lean_object* v_tail_160_; uint8_t v___x_161_; 
v_key_158_ = lean_ctor_get(v_x_156_, 0);
v_value_159_ = lean_ctor_get(v_x_156_, 1);
v_tail_160_ = lean_ctor_get(v_x_156_, 2);
v___x_161_ = lean_name_eq(v_key_158_, v_a_155_);
if (v___x_161_ == 0)
{
v_x_156_ = v_tail_160_;
goto _start;
}
else
{
lean_object* v___x_163_; 
lean_inc(v_value_159_);
v___x_163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_163_, 0, v_value_159_);
return v___x_163_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___redArg___boxed(lean_object* v_a_164_, lean_object* v_x_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___redArg(v_a_164_, v_x_165_);
lean_dec(v_x_165_);
lean_dec(v_a_164_);
return v_res_166_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_167_; uint64_t v___x_168_; 
v___x_167_ = lean_unsigned_to_nat(1723u);
v___x_168_ = lean_uint64_of_nat(v___x_167_);
return v___x_168_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg(lean_object* v_m_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_buckets_171_; lean_object* v___x_172_; uint64_t v___y_174_; 
v_buckets_171_ = lean_ctor_get(v_m_169_, 1);
v___x_172_ = lean_array_get_size(v_buckets_171_);
if (lean_obj_tag(v_a_170_) == 0)
{
uint64_t v___x_188_; 
v___x_188_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___closed__0);
v___y_174_ = v___x_188_;
goto v___jp_173_;
}
else
{
uint64_t v_hash_189_; 
v_hash_189_ = lean_ctor_get_uint64(v_a_170_, sizeof(void*)*2);
v___y_174_ = v_hash_189_;
goto v___jp_173_;
}
v___jp_173_:
{
uint64_t v___x_175_; uint64_t v___x_176_; uint64_t v_fold_177_; uint64_t v___x_178_; uint64_t v___x_179_; uint64_t v___x_180_; size_t v___x_181_; size_t v___x_182_; size_t v___x_183_; size_t v___x_184_; size_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; 
v___x_175_ = 32ULL;
v___x_176_ = lean_uint64_shift_right(v___y_174_, v___x_175_);
v_fold_177_ = lean_uint64_xor(v___y_174_, v___x_176_);
v___x_178_ = 16ULL;
v___x_179_ = lean_uint64_shift_right(v_fold_177_, v___x_178_);
v___x_180_ = lean_uint64_xor(v_fold_177_, v___x_179_);
v___x_181_ = lean_uint64_to_usize(v___x_180_);
v___x_182_ = lean_usize_of_nat(v___x_172_);
v___x_183_ = ((size_t)1ULL);
v___x_184_ = lean_usize_sub(v___x_182_, v___x_183_);
v___x_185_ = lean_usize_land(v___x_181_, v___x_184_);
v___x_186_ = lean_array_uget_borrowed(v_buckets_171_, v___x_185_);
v___x_187_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___redArg(v_a_170_, v___x_186_);
return v___x_187_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg___boxed(lean_object* v_m_190_, lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg(v_m_190_, v_a_191_);
lean_dec(v_a_191_);
lean_dec_ref(v_m_190_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__2(lean_object* v___x_193_, lean_object* v_as_194_, size_t v_sz_195_, size_t v_i_196_, lean_object* v_b_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_a_207_; uint8_t v___x_211_; 
v___x_211_ = lean_usize_dec_lt(v_i_196_, v_sz_195_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; 
v___x_212_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_212_, 0, v_b_197_);
return v___x_212_;
}
else
{
lean_object* v___x_213_; lean_object* v_a_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v___x_213_ = lean_box(0);
v_a_214_ = lean_array_uget_borrowed(v_as_194_, v_i_196_);
v___x_215_ = l_Lean_TSyntax_getId(v_a_214_);
v___x_216_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg(v___x_193_, v___x_215_);
if (lean_obj_tag(v___x_216_) == 1)
{
lean_object* v_val_217_; lean_object* v___x_219_; uint8_t v_isShared_220_; uint8_t v_isSharedCheck_238_; 
v_val_217_ = lean_ctor_get(v___x_216_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_216_);
if (v_isSharedCheck_238_ == 0)
{
v___x_219_ = v___x_216_;
v_isShared_220_ = v_isSharedCheck_238_;
goto v_resetjp_218_;
}
else
{
lean_inc(v_val_217_);
lean_dec(v___x_216_);
v___x_219_ = lean_box(0);
v_isShared_220_ = v_isSharedCheck_238_;
goto v_resetjp_218_;
}
v_resetjp_218_:
{
lean_object* v___x_221_; 
lean_inc(v___x_215_);
v___x_221_ = l_Lean_Meta_getFVarFromUserName(v___x_215_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_object* v_a_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_a_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_a_222_);
lean_dec_ref(v___x_221_);
v___x_223_ = l_Lean_Expr_fvarId_x21(v_a_222_);
lean_dec(v_a_222_);
v___x_224_ = l_Lean_instBEqFVarId_beq(v___x_223_, v_val_217_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_227_; 
v___x_225_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_225_, 0, v___x_215_);
lean_ctor_set(v___x_225_, 1, v___x_223_);
lean_ctor_set(v___x_225_, 2, v_val_217_);
if (v_isShared_220_ == 0)
{
lean_ctor_set_tag(v___x_219_, 11);
lean_ctor_set(v___x_219_, 0, v___x_225_);
v___x_227_ = v___x_219_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(11, 1, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v___x_225_);
v___x_227_ = v_reuseFailAlloc_229_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1(v___x_227_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_dec_ref(v___x_228_);
v_a_207_ = v___x_213_;
goto v___jp_206_;
}
else
{
return v___x_228_;
}
}
}
else
{
lean_dec(v___x_223_);
lean_del_object(v___x_219_);
lean_dec(v_val_217_);
lean_dec(v___x_215_);
v_a_207_ = v___x_213_;
goto v___jp_206_;
}
}
else
{
lean_object* v_a_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_237_; 
lean_del_object(v___x_219_);
lean_dec(v_val_217_);
lean_dec(v___x_215_);
v_a_230_ = lean_ctor_get(v___x_221_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_237_ == 0)
{
v___x_232_ = v___x_221_;
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_a_230_);
lean_dec(v___x_221_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_237_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___x_235_; 
if (v_isShared_233_ == 0)
{
v___x_235_ = v___x_232_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v_a_230_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
}
else
{
lean_dec(v___x_216_);
lean_dec(v___x_215_);
v_a_207_ = v___x_213_;
goto v___jp_206_;
}
}
v___jp_206_:
{
size_t v___x_208_; size_t v___x_209_; 
v___x_208_ = ((size_t)1ULL);
v___x_209_ = lean_usize_add(v_i_196_, v___x_208_);
v_i_196_ = v___x_209_;
v_b_197_ = v_a_207_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__2___boxed(lean_object* v___x_239_, lean_object* v_as_240_, lean_object* v_sz_241_, lean_object* v_i_242_, lean_object* v_b_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_){
_start:
{
size_t v_sz_boxed_252_; size_t v_i_boxed_253_; lean_object* v_res_254_; 
v_sz_boxed_252_ = lean_unbox_usize(v_sz_241_);
lean_dec(v_sz_241_);
v_i_boxed_253_ = lean_unbox_usize(v_i_242_);
lean_dec(v_i_242_);
v_res_254_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__2(v___x_239_, v_as_240_, v_sz_boxed_252_, v_i_boxed_253_, v_b_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec(v___y_246_);
lean_dec_ref(v___y_245_);
lean_dec_ref(v___y_244_);
lean_dec_ref(v_as_240_);
lean_dec_ref(v___x_239_);
return v_res_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(lean_object* v_letOrReassign_255_, lean_object* v_vars_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_){
_start:
{
if (lean_obj_tag(v_letOrReassign_255_) == 2)
{
lean_object* v_mutVarDefs_265_; lean_object* v___x_266_; size_t v_sz_267_; size_t v___x_268_; lean_object* v___x_269_; 
v_mutVarDefs_265_ = lean_ctor_get(v_a_257_, 2);
v___x_266_ = lean_box(0);
v_sz_267_ = lean_array_size(v_vars_256_);
v___x_268_ = ((size_t)0ULL);
v___x_269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__2(v_mutVarDefs_265_, v_vars_256_, v_sz_267_, v___x_268_, v___x_266_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_, v_a_263_);
if (lean_obj_tag(v___x_269_) == 0)
{
lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_269_);
if (v_isSharedCheck_276_ == 0)
{
lean_object* v_unused_277_; 
v_unused_277_ = lean_ctor_get(v___x_269_, 0);
lean_dec(v_unused_277_);
v___x_271_ = v___x_269_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_dec(v___x_269_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
lean_ctor_set(v___x_271_, 0, v___x_266_);
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_266_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
else
{
return v___x_269_;
}
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_box(0);
v___x_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_279_, 0, v___x_278_);
return v___x_279_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo___boxed(lean_object* v_letOrReassign_280_, lean_object* v_vars_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_, lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_280_, v_vars_281_, v_a_282_, v_a_283_, v_a_284_, v_a_285_, v_a_286_, v_a_287_, v_a_288_);
lean_dec(v_a_288_);
lean_dec_ref(v_a_287_);
lean_dec(v_a_286_);
lean_dec_ref(v_a_285_);
lean_dec(v_a_284_);
lean_dec_ref(v_a_283_);
lean_dec_ref(v_a_282_);
lean_dec_ref(v_vars_281_);
lean_dec(v_letOrReassign_280_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(lean_object* v_00_u03b2_291_, lean_object* v_m_292_, lean_object* v_a_293_){
_start:
{
lean_object* v___x_294_; 
v___x_294_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg(v_m_292_, v_a_293_);
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___boxed(lean_object* v_00_u03b2_295_, lean_object* v_m_296_, lean_object* v_a_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0(v_00_u03b2_295_, v_m_296_, v_a_297_);
lean_dec(v_a_297_);
lean_dec_ref(v_m_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2(lean_object* v_t_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; 
v___x_308_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___redArg(v_t_299_, v___y_306_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2___boxed(lean_object* v_t_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1_spec__2(v_t_309_, v___y_310_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
lean_dec(v___y_312_);
lean_dec_ref(v___y_311_);
lean_dec_ref(v___y_310_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0(lean_object* v_00_u03b2_319_, lean_object* v_a_320_, lean_object* v_x_321_){
_start:
{
lean_object* v___x_322_; 
v___x_322_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___redArg(v_a_320_, v_x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0___boxed(lean_object* v_00_u03b2_323_, lean_object* v_a_324_, lean_object* v_x_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0_spec__0(v_00_u03b2_323_, v_a_324_, v_x_325_);
lean_dec(v_x_325_);
lean_dec(v_a_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__0(lean_object* v_elabBody_327_, lean_object* v_body_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v___x_337_; 
lean_inc(v___y_335_);
lean_inc_ref(v___y_334_);
lean_inc(v___y_333_);
lean_inc_ref(v___y_332_);
lean_inc(v___y_331_);
lean_inc_ref(v___y_330_);
v___x_337_ = lean_apply_8(v_elabBody_327_, v_body_328_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, lean_box(0));
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__0___boxed(lean_object* v_elabBody_338_, lean_object* v_body_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__0(v_elabBody_338_, v_body_339_, v___y_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, v___y_345_, v___y_346_);
lean_dec(v___y_346_);
lean_dec_ref(v___y_345_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec_ref(v___y_340_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__1(lean_object* v_letOrReassign_349_, lean_object* v_vars_350_, lean_object* v_k_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo(v_letOrReassign_349_, v_vars_350_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
if (lean_obj_tag(v___x_360_) == 0)
{
lean_object* v___x_361_; 
lean_dec_ref(v___x_360_);
lean_inc(v___y_358_);
lean_inc_ref(v___y_357_);
lean_inc(v___y_356_);
lean_inc_ref(v___y_355_);
lean_inc(v___y_354_);
lean_inc_ref(v___y_353_);
lean_inc_ref(v___y_352_);
v___x_361_ = lean_apply_8(v_k_351_, v___y_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_, lean_box(0));
return v___x_361_;
}
else
{
lean_object* v_a_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_369_; 
lean_dec_ref(v_k_351_);
v_a_362_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_369_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_369_ == 0)
{
v___x_364_ = v___x_360_;
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_a_362_);
lean_dec(v___x_360_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_369_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_367_; 
if (v_isShared_365_ == 0)
{
v___x_367_ = v___x_364_;
goto v_reusejp_366_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v_a_362_);
v___x_367_ = v_reuseFailAlloc_368_;
goto v_reusejp_366_;
}
v_reusejp_366_:
{
return v___x_367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__1___boxed(lean_object* v_letOrReassign_370_, lean_object* v_vars_371_, lean_object* v_k_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__1(v_letOrReassign_370_, v_vars_371_, v_k_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec_ref(v___y_373_);
lean_dec_ref(v_vars_371_);
lean_dec(v_letOrReassign_370_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith(lean_object* v_hint_382_, lean_object* v_letOrReassign_383_, lean_object* v_vars_384_, lean_object* v_k_385_, lean_object* v_elabBody_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_){
_start:
{
lean_object* v___f_395_; lean_object* v___f_396_; lean_object* v___x_397_; lean_object* v_elabCont_398_; lean_object* v___x_399_; lean_object* v___x_400_; 
v___f_395_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__0___boxed), 10, 1);
lean_closure_set(v___f_395_, 0, v_elabBody_386_);
lean_inc_ref(v_vars_384_);
lean_inc(v_letOrReassign_383_);
v___f_396_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__1___boxed), 11, 3);
lean_closure_set(v___f_396_, 0, v_letOrReassign_383_);
lean_closure_set(v___f_396_, 1, v_vars_384_);
lean_closure_set(v___f_396_, 2, v_k_385_);
v___x_397_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_383_);
lean_dec(v_letOrReassign_383_);
v_elabCont_398_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_declareMutVars_x3f___boxed), 12, 4);
lean_closure_set(v_elabCont_398_, 0, lean_box(0));
lean_closure_set(v_elabCont_398_, 1, v___x_397_);
lean_closure_set(v_elabCont_398_, 2, v_vars_384_);
lean_closure_set(v_elabCont_398_, 3, v___f_396_);
v___x_399_ = lean_box(0);
v___x_400_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v_hint_382_, v_elabCont_398_, v___f_395_, v___x_399_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_, v_a_392_, v_a_393_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassignWith___boxed(lean_object* v_hint_401_, lean_object* v_letOrReassign_402_, lean_object* v_vars_403_, lean_object* v_k_404_, lean_object* v_elabBody_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_Elab_Do_elabDoLetOrReassignWith(v_hint_401_, v_letOrReassign_402_, v_vars_403_, v_k_404_, v_elabBody_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec_ref(v_a_406_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments(lean_object* v_letOrReassign_415_, lean_object* v_vars_416_, lean_object* v_k_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v___f_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
lean_inc_ref(v_vars_416_);
lean_inc(v_letOrReassign_415_);
v___f_426_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassignWith___lam__1___boxed), 11, 3);
lean_closure_set(v___f_426_, 0, v_letOrReassign_415_);
lean_closure_set(v___f_426_, 1, v_vars_416_);
lean_closure_set(v___f_426_, 2, v_k_417_);
v___x_427_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_415_);
lean_dec(v_letOrReassign_415_);
v___x_428_ = l_Lean_Elab_Do_declareMutVars_x3f___redArg(v___x_427_, v_vars_416_, v___f_426_, v_a_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
lean_dec(v___x_427_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabWithReassignments___boxed(lean_object* v_letOrReassign_429_, lean_object* v_vars_430_, lean_object* v_k_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_429_, v_vars_430_, v_k_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec_ref(v_a_432_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(lean_object* v_a_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v___x_449_; 
v___x_449_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_);
return v___x_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg___boxed(lean_object* v_a_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___redArg(v_a_450_, v___y_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
lean_dec(v___y_452_);
lean_dec_ref(v___y_451_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(lean_object* v_00_u03b1_459_, lean_object* v_a_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1___boxed(lean_object* v_00_u03b1_469_, lean_object* v_a_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__1(v_00_u03b1_469_, v_a_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(lean_object* v_msgData_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v___x_485_; lean_object* v_env_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_mctx_489_; lean_object* v_lctx_490_; lean_object* v_options_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; 
v___x_485_ = lean_st_ref_get(v___y_483_);
v_env_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc_ref(v_env_486_);
lean_dec(v___x_485_);
v___x_487_ = lean_st_ref_get(v___y_483_);
lean_dec(v___x_487_);
v___x_488_ = lean_st_ref_get(v___y_481_);
v_mctx_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc_ref(v_mctx_489_);
lean_dec(v___x_488_);
v_lctx_490_ = lean_ctor_get(v___y_480_, 2);
v_options_491_ = lean_ctor_get(v___y_482_, 2);
lean_inc_ref(v_options_491_);
lean_inc_ref(v_lctx_490_);
v___x_492_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_492_, 0, v_env_486_);
lean_ctor_set(v___x_492_, 1, v_mctx_489_);
lean_ctor_set(v___x_492_, 2, v_lctx_490_);
lean_ctor_set(v___x_492_, 3, v_options_491_);
v___x_493_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
lean_ctor_set(v___x_493_, 1, v_msgData_479_);
v___x_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_494_, 0, v___x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0___boxed(lean_object* v_msgData_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(v_msgData_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
return v_res_501_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__3(lean_object* v_opts_502_, lean_object* v_opt_503_){
_start:
{
lean_object* v_name_504_; lean_object* v_defValue_505_; lean_object* v_map_506_; lean_object* v___x_507_; 
v_name_504_ = lean_ctor_get(v_opt_503_, 0);
v_defValue_505_ = lean_ctor_get(v_opt_503_, 1);
v_map_506_ = lean_ctor_get(v_opts_502_, 0);
v___x_507_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_506_, v_name_504_);
if (lean_obj_tag(v___x_507_) == 0)
{
uint8_t v___x_508_; 
v___x_508_ = lean_unbox(v_defValue_505_);
return v___x_508_;
}
else
{
lean_object* v_val_509_; 
v_val_509_ = lean_ctor_get(v___x_507_, 0);
lean_inc(v_val_509_);
lean_dec_ref(v___x_507_);
if (lean_obj_tag(v_val_509_) == 1)
{
uint8_t v_v_510_; 
v_v_510_ = lean_ctor_get_uint8(v_val_509_, 0);
lean_dec_ref(v_val_509_);
return v_v_510_;
}
else
{
uint8_t v___x_511_; 
lean_dec(v_val_509_);
v___x_511_ = lean_unbox(v_defValue_505_);
return v___x_511_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__3___boxed(lean_object* v_opts_512_, lean_object* v_opt_513_){
_start:
{
uint8_t v_res_514_; lean_object* v_r_515_; 
v_res_514_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__3(v_opts_512_, v_opt_513_);
lean_dec_ref(v_opt_513_);
lean_dec_ref(v_opts_512_);
v_r_515_ = lean_box(v_res_514_);
return v_r_515_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_box(1);
v___x_517_ = l_Lean_MessageData_ofFormat(v___x_516_);
return v___x_517_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__1(void){
_start:
{
lean_object* v___x_518_; 
v___x_518_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_518_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__2(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__1);
v___x_520_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__3(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__2);
v___x_522_ = l_Lean_MessageData_ofFormat(v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4(lean_object* v_x_523_, lean_object* v_x_524_){
_start:
{
if (lean_obj_tag(v_x_524_) == 0)
{
return v_x_523_;
}
else
{
lean_object* v_head_525_; lean_object* v_tail_526_; lean_object* v___x_528_; uint8_t v_isShared_529_; uint8_t v_isSharedCheck_548_; 
v_head_525_ = lean_ctor_get(v_x_524_, 0);
v_tail_526_ = lean_ctor_get(v_x_524_, 1);
v_isSharedCheck_548_ = !lean_is_exclusive(v_x_524_);
if (v_isSharedCheck_548_ == 0)
{
v___x_528_ = v_x_524_;
v_isShared_529_ = v_isSharedCheck_548_;
goto v_resetjp_527_;
}
else
{
lean_inc(v_tail_526_);
lean_inc(v_head_525_);
lean_dec(v_x_524_);
v___x_528_ = lean_box(0);
v_isShared_529_ = v_isSharedCheck_548_;
goto v_resetjp_527_;
}
v_resetjp_527_:
{
lean_object* v_before_530_; lean_object* v___x_532_; uint8_t v_isShared_533_; uint8_t v_isSharedCheck_546_; 
v_before_530_ = lean_ctor_get(v_head_525_, 0);
v_isSharedCheck_546_ = !lean_is_exclusive(v_head_525_);
if (v_isSharedCheck_546_ == 0)
{
lean_object* v_unused_547_; 
v_unused_547_ = lean_ctor_get(v_head_525_, 1);
lean_dec(v_unused_547_);
v___x_532_ = v_head_525_;
v_isShared_533_ = v_isSharedCheck_546_;
goto v_resetjp_531_;
}
else
{
lean_inc(v_before_530_);
lean_dec(v_head_525_);
v___x_532_ = lean_box(0);
v_isShared_533_ = v_isSharedCheck_546_;
goto v_resetjp_531_;
}
v_resetjp_531_:
{
lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_534_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0);
if (v_isShared_533_ == 0)
{
lean_ctor_set_tag(v___x_532_, 7);
lean_ctor_set(v___x_532_, 1, v___x_534_);
lean_ctor_set(v___x_532_, 0, v_x_523_);
v___x_536_ = v___x_532_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_x_523_);
lean_ctor_set(v_reuseFailAlloc_545_, 1, v___x_534_);
v___x_536_ = v_reuseFailAlloc_545_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
lean_object* v___x_537_; lean_object* v___x_539_; 
v___x_537_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__3);
if (v_isShared_529_ == 0)
{
lean_ctor_set_tag(v___x_528_, 7);
lean_ctor_set(v___x_528_, 1, v___x_537_);
lean_ctor_set(v___x_528_, 0, v___x_536_);
v___x_539_ = v___x_528_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v___x_537_);
v___x_539_ = v_reuseFailAlloc_544_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_540_ = l_Lean_MessageData_ofSyntax(v_before_530_);
v___x_541_ = l_Lean_indentD(v___x_540_);
v___x_542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_542_, 0, v___x_539_);
lean_ctor_set(v___x_542_, 1, v___x_541_);
v_x_523_ = v___x_542_;
v_x_524_ = v_tail_526_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_549_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__0);
v___x_551_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__1);
v___x_553_ = l_Lean_MessageData_ofFormat(v___x_552_);
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg(lean_object* v_msgData_554_, lean_object* v_macroStack_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_options_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v_options_558_ = lean_ctor_get(v___y_556_, 2);
v___x_559_ = l_Lean_Elab_pp_macroStack;
v___x_560_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__3(v_options_558_, v___x_559_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; 
lean_dec(v_macroStack_555_);
v___x_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_561_, 0, v_msgData_554_);
return v___x_561_;
}
else
{
if (lean_obj_tag(v_macroStack_555_) == 0)
{
lean_object* v___x_562_; 
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v_msgData_554_);
return v___x_562_;
}
else
{
lean_object* v_head_563_; lean_object* v_after_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_579_; 
v_head_563_ = lean_ctor_get(v_macroStack_555_, 0);
lean_inc(v_head_563_);
v_after_564_ = lean_ctor_get(v_head_563_, 1);
v_isSharedCheck_579_ = !lean_is_exclusive(v_head_563_);
if (v_isSharedCheck_579_ == 0)
{
lean_object* v_unused_580_; 
v_unused_580_ = lean_ctor_get(v_head_563_, 0);
lean_dec(v_unused_580_);
v___x_566_ = v_head_563_;
v_isShared_567_ = v_isSharedCheck_579_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_after_564_);
lean_dec(v_head_563_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_579_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4___closed__0);
if (v_isShared_567_ == 0)
{
lean_ctor_set_tag(v___x_566_, 7);
lean_ctor_set(v___x_566_, 1, v___x_568_);
lean_ctor_set(v___x_566_, 0, v_msgData_554_);
v___x_570_ = v___x_566_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_msgData_554_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v___x_568_);
v___x_570_ = v_reuseFailAlloc_578_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v_msgData_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_571_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___closed__2);
v___x_572_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_572_, 0, v___x_570_);
lean_ctor_set(v___x_572_, 1, v___x_571_);
v___x_573_ = l_Lean_MessageData_ofSyntax(v_after_564_);
v___x_574_ = l_Lean_indentD(v___x_573_);
v_msgData_575_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_575_, 0, v___x_572_);
lean_ctor_set(v_msgData_575_, 1, v___x_574_);
v___x_576_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1_spec__4(v_msgData_575_, v_macroStack_555_);
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg___boxed(lean_object* v_msgData_581_, lean_object* v_macroStack_582_, lean_object* v___y_583_, lean_object* v___y_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg(v_msgData_581_, v_macroStack_582_, v___y_583_);
lean_dec_ref(v___y_583_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(lean_object* v_msg_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_ref_594_; lean_object* v___x_595_; lean_object* v_a_596_; lean_object* v_macroStack_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v_a_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_608_; 
v_ref_594_ = lean_ctor_get(v___y_591_, 5);
v___x_595_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(v_msg_586_, v___y_589_, v___y_590_, v___y_591_, v___y_592_);
v_a_596_ = lean_ctor_get(v___x_595_, 0);
lean_inc(v_a_596_);
lean_dec_ref(v___x_595_);
v_macroStack_597_ = lean_ctor_get(v___y_587_, 1);
v___x_598_ = l_Lean_Elab_getBetterRef(v_ref_594_, v_macroStack_597_);
lean_inc(v_macroStack_597_);
v___x_599_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg(v_a_596_, v_macroStack_597_, v___y_591_);
v_a_600_ = lean_ctor_get(v___x_599_, 0);
v_isSharedCheck_608_ = !lean_is_exclusive(v___x_599_);
if (v_isSharedCheck_608_ == 0)
{
v___x_602_ = v___x_599_;
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_a_600_);
lean_dec(v___x_599_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_608_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
lean_object* v___x_604_; lean_object* v___x_606_; 
v___x_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_604_, 0, v___x_598_);
lean_ctor_set(v___x_604_, 1, v_a_600_);
if (v_isShared_603_ == 0)
{
lean_ctor_set_tag(v___x_602_, 1);
lean_ctor_set(v___x_602_, 0, v___x_604_);
v___x_606_ = v___x_602_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_607_; 
v_reuseFailAlloc_607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_607_, 0, v___x_604_);
v___x_606_ = v_reuseFailAlloc_607_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
return v___x_606_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg___boxed(lean_object* v_msg_609_, lean_object* v___y_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_609_, v___y_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec(v___y_611_);
lean_dec_ref(v___y_610_);
return v_res_617_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0(void){
_start:
{
lean_object* v___x_618_; 
v___x_618_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_618_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1(void){
_start:
{
lean_object* v___x_619_; 
v___x_619_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_619_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2(void){
_start:
{
lean_object* v___x_620_; 
v___x_620_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_620_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3(void){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = lean_mk_string_unchecked("letDecl", 7, 7);
return v___x_621_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_622_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3);
v___x_623_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_624_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_625_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_626_ = l_Lean_Name_mkStr4(v___x_625_, v___x_624_, v___x_623_, v___x_622_);
return v___x_626_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5(void){
_start:
{
lean_object* v___x_627_; 
v___x_627_ = lean_mk_string_unchecked("Impossible case in elabDoLetOrReassign. This is an elaborator bug.\n", 67, 67);
return v___x_627_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__5);
v___x_629_ = l_Lean_stringToMessageData(v___x_628_);
return v___x_629_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7(void){
_start:
{
lean_object* v___x_630_; 
v___x_630_ = lean_mk_string_unchecked("letIdDecl", 9, 9);
return v___x_630_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8(void){
_start:
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; 
v___x_631_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__7);
v___x_632_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_633_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_634_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_635_ = l_Lean_Name_mkStr4(v___x_634_, v___x_633_, v___x_632_, v___x_631_);
return v___x_635_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9(void){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_mk_string_unchecked("letPatDecl", 10, 10);
return v___x_636_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10(void){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_637_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9);
v___x_638_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_639_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_640_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_641_ = l_Lean_Name_mkStr4(v___x_640_, v___x_639_, v___x_638_, v___x_637_);
return v___x_641_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11(void){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_642_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12(void){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_643_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__11);
v___x_644_ = l_Lean_Name_mkStr1(v___x_643_);
return v___x_644_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13(void){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = l_Array_mkArray0(lean_box(0));
return v___x_645_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14(void){
_start:
{
lean_object* v___x_646_; 
v___x_646_ = lean_mk_string_unchecked(":=", 2, 2);
return v___x_646_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15(void){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = lean_mk_string_unchecked("typeAscription", 14, 14);
return v___x_647_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16(void){
_start:
{
lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_648_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__15);
v___x_649_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_650_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_651_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_652_ = l_Lean_Name_mkStr4(v___x_651_, v___x_650_, v___x_649_, v___x_648_);
return v___x_652_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17(void){
_start:
{
lean_object* v___x_653_; 
v___x_653_ = lean_mk_string_unchecked("hygienicLParen", 14, 14);
return v___x_653_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18(void){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; 
v___x_654_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__17);
v___x_655_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_656_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_657_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_658_ = l_Lean_Name_mkStr4(v___x_657_, v___x_656_, v___x_655_, v___x_654_);
return v___x_658_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19(void){
_start:
{
lean_object* v___x_659_; 
v___x_659_ = lean_mk_string_unchecked("(", 1, 1);
return v___x_659_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20(void){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = lean_mk_string_unchecked("hygieneInfo", 11, 11);
return v___x_660_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_661_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__20);
v___x_662_ = l_Lean_Name_mkStr1(v___x_661_);
return v___x_662_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22(void){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = lean_mk_string_unchecked("", 0, 0);
return v___x_663_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23(void){
_start:
{
lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_664_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22);
v___x_665_ = l_String_toRawSubstring_x27(v___x_664_);
return v___x_665_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24(void){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_666_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25(void){
_start:
{
lean_object* v___x_667_; 
v___x_667_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_667_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26(void){
_start:
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_668_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_669_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_670_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_671_ = l_Lean_Name_mkStr3(v___x_670_, v___x_669_, v___x_668_);
return v___x_671_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__26);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28(void){
_start:
{
lean_object* v___x_674_; 
v___x_674_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_674_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29(void){
_start:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__28);
v___x_676_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_677_ = l_Lean_Name_mkStr2(v___x_676_, v___x_675_);
return v___x_677_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30(void){
_start:
{
lean_object* v___x_678_; lean_object* v___x_679_; 
v___x_678_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__29);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31(void){
_start:
{
lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_680_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_681_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_682_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_683_ = l_Lean_Name_mkStr3(v___x_682_, v___x_681_, v___x_680_);
return v___x_683_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__31);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
return v___x_685_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_686_ = lean_box(0);
v___x_687_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__32);
v___x_688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
lean_ctor_set(v___x_688_, 1, v___x_686_);
return v___x_688_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34(void){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
v___x_689_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__33);
v___x_690_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__30);
v___x_691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_690_);
lean_ctor_set(v___x_691_, 1, v___x_689_);
return v___x_691_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35(void){
_start:
{
lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_692_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__34);
v___x_693_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__27);
v___x_694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_694_, 0, v___x_693_);
lean_ctor_set(v___x_694_, 1, v___x_692_);
return v___x_694_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36(void){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_695_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37(void){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = lean_mk_string_unchecked(")", 1, 1);
return v___x_696_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38(void){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = lean_mk_string_unchecked("typeSpec", 8, 8);
return v___x_697_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39(void){
_start:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
v___x_698_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__38);
v___x_699_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_700_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_701_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_702_ = l_Lean_Name_mkStr4(v___x_701_, v___x_700_, v___x_699_, v___x_698_);
return v___x_702_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40(void){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lean_mk_string_unchecked("letId", 5, 5);
return v___x_703_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_704_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__40);
v___x_705_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_706_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_707_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_708_ = l_Lean_Name_mkStr4(v___x_707_, v___x_706_, v___x_705_, v___x_704_);
return v___x_708_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42(void){
_start:
{
lean_object* v___x_709_; 
v___x_709_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_709_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43(void){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; 
v___x_710_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__42);
v___x_711_ = l_Lean_Name_mkStr1(v___x_710_);
return v___x_711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(lean_object* v_letOrReassign_712_, lean_object* v_decl_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
if (lean_obj_tag(v_letOrReassign_712_) == 2)
{
lean_object* v___x_721_; uint8_t v___x_722_; 
v___x_721_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
lean_inc(v_decl_713_);
v___x_722_ = l_Lean_Syntax_isOfKind(v_decl_713_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; 
v___x_723_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_724_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set(v___x_725_, 1, v___x_724_);
v___x_726_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_725_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_726_;
}
else
{
lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v___x_727_ = lean_unsigned_to_nat(0u);
v___x_728_ = l_Lean_Syntax_getArg(v_decl_713_, v___x_727_);
v___x_729_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8);
lean_inc(v___x_728_);
v___x_730_ = l_Lean_Syntax_isOfKind(v___x_728_, v___x_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; lean_object* v___y_733_; lean_object* v_pattern_734_; lean_object* v___y_735_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v___y_738_; lean_object* v___y_739_; lean_object* v___y_740_; uint8_t v___x_803_; 
v___x_731_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10);
lean_inc(v___x_728_);
v___x_803_ = l_Lean_Syntax_isOfKind(v___x_728_, v___x_731_);
if (v___x_803_ == 0)
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
lean_dec(v___x_728_);
v___x_804_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_805_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_806_, 0, v___x_804_);
lean_ctor_set(v___x_806_, 1, v___x_805_);
v___x_807_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_806_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_807_;
}
else
{
lean_object* v___x_808_; lean_object* v___x_809_; uint8_t v___x_810_; 
v___x_808_ = lean_unsigned_to_nat(1u);
v___x_809_ = l_Lean_Syntax_getArg(v___x_728_, v___x_808_);
v___x_810_ = l_Lean_Syntax_matchesNull(v___x_809_, v___x_727_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; 
lean_dec(v___x_728_);
v___x_811_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_812_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_813_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_814_;
}
else
{
lean_object* v_pattern_815_; lean_object* v_xType_x3f_817_; lean_object* v___y_818_; lean_object* v___y_819_; lean_object* v___y_820_; lean_object* v___y_821_; lean_object* v___y_822_; lean_object* v___y_823_; lean_object* v___x_850_; lean_object* v___x_851_; uint8_t v___x_852_; 
v_pattern_815_ = l_Lean_Syntax_getArg(v___x_728_, v___x_727_);
v___x_850_ = lean_unsigned_to_nat(2u);
v___x_851_ = l_Lean_Syntax_getArg(v___x_728_, v___x_850_);
v___x_852_ = l_Lean_Syntax_isNone(v___x_851_);
if (v___x_852_ == 0)
{
uint8_t v___x_853_; 
lean_inc(v___x_851_);
v___x_853_ = l_Lean_Syntax_matchesNull(v___x_851_, v___x_808_);
if (v___x_853_ == 0)
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; 
lean_dec(v___x_851_);
lean_dec(v_pattern_815_);
lean_dec(v___x_728_);
v___x_854_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_855_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_856_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_857_;
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; uint8_t v___x_860_; 
v___x_858_ = l_Lean_Syntax_getArg(v___x_851_, v___x_727_);
lean_dec(v___x_851_);
v___x_859_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
lean_inc(v___x_858_);
v___x_860_ = l_Lean_Syntax_isOfKind(v___x_858_, v___x_859_);
if (v___x_860_ == 0)
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
lean_dec(v___x_858_);
lean_dec(v_pattern_815_);
lean_dec(v___x_728_);
v___x_861_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_862_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_863_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_863_, 0, v___x_861_);
lean_ctor_set(v___x_863_, 1, v___x_862_);
v___x_864_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_863_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_864_;
}
else
{
lean_object* v_xType_x3f_865_; lean_object* v___x_866_; 
lean_dec(v_decl_713_);
v_xType_x3f_865_ = l_Lean_Syntax_getArg(v___x_858_, v___x_808_);
lean_dec(v___x_858_);
v___x_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_866_, 0, v_xType_x3f_865_);
v_xType_x3f_817_ = v___x_866_;
v___y_818_ = v_a_714_;
v___y_819_ = v_a_715_;
v___y_820_ = v_a_716_;
v___y_821_ = v_a_717_;
v___y_822_ = v_a_718_;
v___y_823_ = v_a_719_;
goto v___jp_816_;
}
}
}
else
{
lean_object* v___x_867_; 
lean_dec(v___x_851_);
lean_dec(v_decl_713_);
v___x_867_ = lean_box(0);
v_xType_x3f_817_ = v___x_867_;
v___y_818_ = v_a_714_;
v___y_819_ = v_a_715_;
v___y_820_ = v_a_716_;
v___y_821_ = v_a_717_;
v___y_822_ = v_a_718_;
v___y_823_ = v_a_719_;
goto v___jp_816_;
}
v___jp_816_:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(4u);
v___x_825_ = l_Lean_Syntax_getArg(v___x_728_, v___x_824_);
lean_dec(v___x_728_);
if (lean_obj_tag(v_xType_x3f_817_) == 0)
{
v___y_733_ = v___x_825_;
v_pattern_734_ = v_pattern_815_;
v___y_735_ = v___y_818_;
v___y_736_ = v___y_819_;
v___y_737_ = v___y_820_;
v___y_738_ = v___y_821_;
v___y_739_ = v___y_822_;
v___y_740_ = v___y_823_;
goto v___jp_732_;
}
else
{
lean_object* v_val_826_; lean_object* v_ref_827_; lean_object* v_quotContext_828_; lean_object* v_currMacroScope_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v_val_826_ = lean_ctor_get(v_xType_x3f_817_, 0);
lean_inc(v_val_826_);
lean_dec_ref(v_xType_x3f_817_);
v_ref_827_ = lean_ctor_get(v___y_822_, 5);
v_quotContext_828_ = lean_ctor_get(v___y_822_, 10);
v_currMacroScope_829_ = lean_ctor_get(v___y_822_, 11);
v___x_830_ = l_Lean_SourceInfo_fromRef(v_ref_827_, v___x_730_);
v___x_831_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16);
v___x_832_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18);
v___x_833_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19);
lean_inc_n(v___x_830_, 7);
v___x_834_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_834_, 0, v___x_830_);
lean_ctor_set(v___x_834_, 1, v___x_833_);
v___x_835_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21);
v___x_836_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_837_ = lean_box(0);
lean_inc(v_currMacroScope_829_);
lean_inc(v_quotContext_828_);
v___x_838_ = l_Lean_addMacroScope(v_quotContext_828_, v___x_837_, v_currMacroScope_829_);
v___x_839_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35);
v___x_840_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_840_, 0, v___x_830_);
lean_ctor_set(v___x_840_, 1, v___x_836_);
lean_ctor_set(v___x_840_, 2, v___x_838_);
lean_ctor_set(v___x_840_, 3, v___x_839_);
v___x_841_ = l_Lean_Syntax_node1(v___x_830_, v___x_835_, v___x_840_);
v___x_842_ = l_Lean_Syntax_node2(v___x_830_, v___x_832_, v___x_834_, v___x_841_);
v___x_843_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36);
v___x_844_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_830_);
lean_ctor_set(v___x_844_, 1, v___x_843_);
v___x_845_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_846_ = l_Lean_Syntax_node1(v___x_830_, v___x_845_, v_val_826_);
v___x_847_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37);
v___x_848_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_848_, 0, v___x_830_);
lean_ctor_set(v___x_848_, 1, v___x_847_);
v___x_849_ = l_Lean_Syntax_node5(v___x_830_, v___x_831_, v___x_842_, v_pattern_815_, v___x_844_, v___x_846_, v___x_848_);
v___y_733_ = v___x_825_;
v_pattern_734_ = v___x_849_;
v___y_735_ = v___y_818_;
v___y_736_ = v___y_819_;
v___y_737_ = v___y_820_;
v___y_738_ = v___y_821_;
v___y_739_ = v___y_822_;
v___y_740_ = v___y_823_;
goto v___jp_732_;
}
}
}
}
v___jp_732_:
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
v___x_741_ = lean_box(0);
v___x_742_ = lean_box(v___x_722_);
v___x_743_ = lean_box(v___x_722_);
lean_inc(v_pattern_734_);
v___x_744_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_744_, 0, v_pattern_734_);
lean_closure_set(v___x_744_, 1, v___x_741_);
lean_closure_set(v___x_744_, 2, v___x_742_);
lean_closure_set(v___x_744_, 3, v___x_743_);
v___x_745_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_744_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_747_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref(v___x_745_);
lean_inc(v___y_740_);
lean_inc_ref(v___y_739_);
lean_inc(v___y_738_);
lean_inc_ref(v___y_737_);
v___x_747_ = lean_infer_type(v_a_746_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_749_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref(v___x_747_);
v___x_749_ = l_Lean_Elab_Term_exprToSyntax(v_a_748_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_786_; 
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_786_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_786_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_786_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v_ref_754_; lean_object* v_quotContext_755_; lean_object* v_currMacroScope_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_784_; 
v_ref_754_ = lean_ctor_get(v___y_739_, 5);
v_quotContext_755_ = lean_ctor_get(v___y_739_, 10);
v_currMacroScope_756_ = lean_ctor_get(v___y_739_, 11);
v___x_757_ = l_Lean_SourceInfo_fromRef(v_ref_754_, v___x_730_);
v___x_758_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_759_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_757_, 11);
v___x_760_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_760_, 0, v___x_757_);
lean_ctor_set(v___x_760_, 1, v___x_758_);
lean_ctor_set(v___x_760_, 2, v___x_759_);
v___x_761_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_762_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_757_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16);
v___x_764_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18);
v___x_765_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19);
v___x_766_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_757_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21);
v___x_768_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_769_ = lean_box(0);
lean_inc(v_currMacroScope_756_);
lean_inc(v_quotContext_755_);
v___x_770_ = l_Lean_addMacroScope(v_quotContext_755_, v___x_769_, v_currMacroScope_756_);
v___x_771_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35);
v___x_772_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_772_, 0, v___x_757_);
lean_ctor_set(v___x_772_, 1, v___x_768_);
lean_ctor_set(v___x_772_, 2, v___x_770_);
lean_ctor_set(v___x_772_, 3, v___x_771_);
v___x_773_ = l_Lean_Syntax_node1(v___x_757_, v___x_767_, v___x_772_);
v___x_774_ = l_Lean_Syntax_node2(v___x_757_, v___x_764_, v___x_766_, v___x_773_);
v___x_775_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36);
v___x_776_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_776_, 0, v___x_757_);
lean_ctor_set(v___x_776_, 1, v___x_775_);
v___x_777_ = l_Lean_Syntax_node1(v___x_757_, v___x_758_, v_a_750_);
v___x_778_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37);
v___x_779_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_779_, 0, v___x_757_);
lean_ctor_set(v___x_779_, 1, v___x_778_);
v___x_780_ = l_Lean_Syntax_node5(v___x_757_, v___x_763_, v___x_774_, v___y_733_, v___x_776_, v___x_777_, v___x_779_);
lean_inc_ref(v___x_760_);
v___x_781_ = l_Lean_Syntax_node5(v___x_757_, v___x_731_, v_pattern_734_, v___x_760_, v___x_760_, v___x_762_, v___x_780_);
v___x_782_ = l_Lean_Syntax_node1(v___x_757_, v___x_721_, v___x_781_);
if (v_isShared_753_ == 0)
{
lean_ctor_set(v___x_752_, 0, v___x_782_);
v___x_784_ = v___x_752_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v___x_782_);
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
lean_dec(v_pattern_734_);
lean_dec(v___y_733_);
return v___x_749_;
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_dec(v_pattern_734_);
lean_dec(v___y_733_);
v_a_787_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_747_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_747_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_dec(v_pattern_734_);
lean_dec(v___y_733_);
v_a_795_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_745_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_745_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
else
{
lean_object* v___x_868_; lean_object* v___x_869_; uint8_t v___x_870_; 
v___x_868_ = l_Lean_Syntax_getArg(v___x_728_, v___x_727_);
v___x_869_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41);
lean_inc(v___x_868_);
v___x_870_ = l_Lean_Syntax_isOfKind(v___x_868_, v___x_869_);
if (v___x_870_ == 0)
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; 
lean_dec(v___x_868_);
lean_dec(v___x_728_);
v___x_871_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_872_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_873_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_874_;
}
else
{
lean_object* v_x_875_; lean_object* v___y_877_; lean_object* v___y_878_; lean_object* v___y_879_; lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v_a_884_; lean_object* v_xType_x3f_933_; lean_object* v___y_934_; lean_object* v___y_935_; lean_object* v___y_936_; lean_object* v___y_937_; lean_object* v___y_938_; lean_object* v___y_939_; lean_object* v___x_961_; uint8_t v___x_962_; 
v_x_875_ = l_Lean_Syntax_getArg(v___x_868_, v___x_727_);
lean_dec(v___x_868_);
v___x_961_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43);
lean_inc(v_x_875_);
v___x_962_ = l_Lean_Syntax_isOfKind(v_x_875_, v___x_961_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
lean_dec(v_x_875_);
lean_dec(v___x_728_);
v___x_963_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_964_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_965_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_966_;
}
else
{
lean_object* v___x_967_; lean_object* v___x_968_; uint8_t v___x_969_; 
v___x_967_ = lean_unsigned_to_nat(1u);
v___x_968_ = l_Lean_Syntax_getArg(v___x_728_, v___x_967_);
v___x_969_ = l_Lean_Syntax_matchesNull(v___x_968_, v___x_727_);
if (v___x_969_ == 0)
{
lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; 
lean_dec(v_x_875_);
lean_dec(v___x_728_);
v___x_970_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_971_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_972_, 0, v___x_970_);
lean_ctor_set(v___x_972_, 1, v___x_971_);
v___x_973_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_972_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_973_;
}
else
{
lean_object* v___x_974_; lean_object* v___x_975_; uint8_t v___x_976_; 
v___x_974_ = lean_unsigned_to_nat(2u);
v___x_975_ = l_Lean_Syntax_getArg(v___x_728_, v___x_974_);
v___x_976_ = l_Lean_Syntax_isNone(v___x_975_);
if (v___x_976_ == 0)
{
uint8_t v___x_977_; 
lean_inc(v___x_975_);
v___x_977_ = l_Lean_Syntax_matchesNull(v___x_975_, v___x_967_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
lean_dec(v___x_975_);
lean_dec(v_x_875_);
lean_dec(v___x_728_);
v___x_978_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_979_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_980_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_980_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_981_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_982_ = l_Lean_Syntax_getArg(v___x_975_, v___x_727_);
lean_dec(v___x_975_);
v___x_983_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
lean_inc(v___x_982_);
v___x_984_ = l_Lean_Syntax_isOfKind(v___x_982_, v___x_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
lean_dec(v___x_982_);
lean_dec(v_x_875_);
lean_dec(v___x_728_);
v___x_985_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__6);
v___x_986_ = l_Lean_MessageData_ofSyntax(v_decl_713_);
v___x_987_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_985_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v___x_987_, v_a_714_, v_a_715_, v_a_716_, v_a_717_, v_a_718_, v_a_719_);
return v___x_988_;
}
else
{
lean_object* v_xType_x3f_989_; lean_object* v___x_990_; 
lean_dec(v_decl_713_);
v_xType_x3f_989_ = l_Lean_Syntax_getArg(v___x_982_, v___x_967_);
lean_dec(v___x_982_);
v___x_990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_990_, 0, v_xType_x3f_989_);
v_xType_x3f_933_ = v___x_990_;
v___y_934_ = v_a_714_;
v___y_935_ = v_a_715_;
v___y_936_ = v_a_716_;
v___y_937_ = v_a_717_;
v___y_938_ = v_a_718_;
v___y_939_ = v_a_719_;
goto v___jp_932_;
}
}
}
else
{
lean_object* v___x_991_; 
lean_dec(v___x_975_);
lean_dec(v_decl_713_);
v___x_991_ = lean_box(0);
v_xType_x3f_933_ = v___x_991_;
v___y_934_ = v_a_714_;
v___y_935_ = v_a_715_;
v___y_936_ = v_a_716_;
v___y_937_ = v_a_717_;
v___y_938_ = v_a_718_;
v___y_939_ = v_a_719_;
goto v___jp_932_;
}
}
}
v___jp_876_:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = lean_box(0);
lean_inc(v_x_875_);
v___x_886_ = l_Lean_Elab_Term_elabTermEnsuringType(v_x_875_, v_a_884_, v___x_722_, v___x_722_, v___x_885_, v___y_883_, v___y_881_, v___y_882_, v___y_880_, v___y_879_, v___y_878_);
if (lean_obj_tag(v___x_886_) == 0)
{
lean_object* v___x_887_; lean_object* v___x_888_; 
lean_dec_ref(v___x_886_);
v___x_887_ = l_Lean_TSyntax_getId(v_x_875_);
v___x_888_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_887_, v___y_882_, v___y_880_, v___y_879_, v___y_878_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref(v___x_888_);
v___x_890_ = l_Lean_LocalDecl_type(v_a_889_);
lean_dec(v_a_889_);
v___x_891_ = l_Lean_Elab_Term_exprToSyntax(v___x_890_, v___y_883_, v___y_881_, v___y_882_, v___y_880_, v___y_879_, v___y_878_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_915_; 
v_a_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_915_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_915_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_915_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v_ref_896_; uint8_t v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_913_; 
v_ref_896_ = lean_ctor_get(v___y_879_, 5);
v___x_897_ = 0;
v___x_898_ = l_Lean_SourceInfo_fromRef(v_ref_896_, v___x_897_);
lean_inc_n(v___x_898_, 7);
v___x_899_ = l_Lean_Syntax_node1(v___x_898_, v___x_869_, v_x_875_);
v___x_900_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_901_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_902_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_902_, 0, v___x_898_);
lean_ctor_set(v___x_902_, 1, v___x_900_);
lean_ctor_set(v___x_902_, 2, v___x_901_);
v___x_903_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
v___x_904_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36);
v___x_905_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_905_, 0, v___x_898_);
lean_ctor_set(v___x_905_, 1, v___x_904_);
v___x_906_ = l_Lean_Syntax_node2(v___x_898_, v___x_903_, v___x_905_, v_a_892_);
v___x_907_ = l_Lean_Syntax_node1(v___x_898_, v___x_900_, v___x_906_);
v___x_908_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_909_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_909_, 0, v___x_898_);
lean_ctor_set(v___x_909_, 1, v___x_908_);
v___x_910_ = l_Lean_Syntax_node5(v___x_898_, v___x_729_, v___x_899_, v___x_902_, v___x_907_, v___x_909_, v___y_877_);
v___x_911_ = l_Lean_Syntax_node1(v___x_898_, v___x_721_, v___x_910_);
if (v_isShared_895_ == 0)
{
lean_ctor_set(v___x_894_, 0, v___x_911_);
v___x_913_ = v___x_894_;
goto v_reusejp_912_;
}
else
{
lean_object* v_reuseFailAlloc_914_; 
v_reuseFailAlloc_914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_914_, 0, v___x_911_);
v___x_913_ = v_reuseFailAlloc_914_;
goto v_reusejp_912_;
}
v_reusejp_912_:
{
return v___x_913_;
}
}
}
else
{
lean_dec(v___y_877_);
lean_dec(v_x_875_);
return v___x_891_;
}
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec(v___y_877_);
lean_dec(v_x_875_);
v_a_916_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_888_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_888_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_922_; 
v_reuseFailAlloc_922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_922_, 0, v_a_916_);
v___x_921_ = v_reuseFailAlloc_922_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
return v___x_921_;
}
}
}
}
else
{
lean_object* v_a_924_; lean_object* v___x_926_; uint8_t v_isShared_927_; uint8_t v_isSharedCheck_931_; 
lean_dec(v___y_877_);
lean_dec(v_x_875_);
v_a_924_ = lean_ctor_get(v___x_886_, 0);
v_isSharedCheck_931_ = !lean_is_exclusive(v___x_886_);
if (v_isSharedCheck_931_ == 0)
{
v___x_926_ = v___x_886_;
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
else
{
lean_inc(v_a_924_);
lean_dec(v___x_886_);
v___x_926_ = lean_box(0);
v_isShared_927_ = v_isSharedCheck_931_;
goto v_resetjp_925_;
}
v_resetjp_925_:
{
lean_object* v___x_929_; 
if (v_isShared_927_ == 0)
{
v___x_929_ = v___x_926_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_930_; 
v_reuseFailAlloc_930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_930_, 0, v_a_924_);
v___x_929_ = v_reuseFailAlloc_930_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
return v___x_929_;
}
}
}
}
v___jp_932_:
{
lean_object* v___x_940_; lean_object* v___x_941_; 
v___x_940_ = lean_unsigned_to_nat(4u);
v___x_941_ = l_Lean_Syntax_getArg(v___x_728_, v___x_940_);
lean_dec(v___x_728_);
if (lean_obj_tag(v_xType_x3f_933_) == 0)
{
lean_object* v___x_942_; 
v___x_942_ = lean_box(0);
v___y_877_ = v___x_941_;
v___y_878_ = v___y_939_;
v___y_879_ = v___y_938_;
v___y_880_ = v___y_937_;
v___y_881_ = v___y_935_;
v___y_882_ = v___y_936_;
v___y_883_ = v___y_934_;
v_a_884_ = v___x_942_;
goto v___jp_876_;
}
else
{
lean_object* v_val_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_960_; 
v_val_943_ = lean_ctor_get(v_xType_x3f_933_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v_xType_x3f_933_);
if (v_isSharedCheck_960_ == 0)
{
v___x_945_ = v_xType_x3f_933_;
v_isShared_946_ = v_isSharedCheck_960_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_val_943_);
lean_dec(v_xType_x3f_933_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_960_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_947_; 
v___x_947_ = l_Lean_Elab_Term_elabType(v_val_943_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_950_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref(v___x_947_);
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v_a_948_);
v___x_950_ = v___x_945_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_a_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
v___y_877_ = v___x_941_;
v___y_878_ = v___y_939_;
v___y_879_ = v___y_938_;
v___y_880_ = v___y_937_;
v___y_881_ = v___y_935_;
v___y_882_ = v___y_936_;
v___y_883_ = v___y_934_;
v_a_884_ = v___x_950_;
goto v___jp_876_;
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_del_object(v___x_945_);
lean_dec(v___x_941_);
lean_dec(v_x_875_);
v_a_952_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_947_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_947_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
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
lean_object* v___x_992_; 
v___x_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_992_, 0, v_decl_713_);
return v___x_992_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___boxed(lean_object* v_letOrReassign_993_, lean_object* v_decl_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_993_, v_decl_994_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
lean_dec(v_a_1000_);
lean_dec_ref(v_a_999_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
lean_dec(v_a_996_);
lean_dec_ref(v_a_995_);
lean_dec(v_letOrReassign_993_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(lean_object* v_00_u03b1_1003_, lean_object* v_msg_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___redArg(v_msg_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0___boxed(lean_object* v_00_u03b1_1013_, lean_object* v_msg_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v_res_1022_; 
v_res_1022_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0(v_00_u03b1_1013_, v_msg_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_);
lean_dec(v___y_1020_);
lean_dec_ref(v___y_1019_);
lean_dec(v___y_1018_);
lean_dec_ref(v___y_1017_);
lean_dec(v___y_1016_);
lean_dec_ref(v___y_1015_);
return v_res_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1(lean_object* v_msgData_1023_, lean_object* v_macroStack_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___redArg(v_msgData_1023_, v_macroStack_1024_, v___y_1029_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1___boxed(lean_object* v_msgData_1033_, lean_object* v_macroStack_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_){
_start:
{
lean_object* v_res_1042_; 
v_res_1042_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__1(v_msgData_1033_, v_macroStack_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_, v___y_1040_);
lean_dec(v___y_1040_);
lean_dec_ref(v___y_1039_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(lean_object* v_msg_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_){
_start:
{
lean_object* v_ref_1049_; lean_object* v___x_1050_; lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1059_; 
v_ref_1049_ = lean_ctor_get(v___y_1046_, 5);
v___x_1050_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(v_msg_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1050_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1053_ = v___x_1050_;
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1050_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1059_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_inc(v_ref_1049_);
v___x_1055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1055_, 0, v_ref_1049_);
lean_ctor_set(v___x_1055_, 1, v_a_1051_);
if (v_isShared_1054_ == 0)
{
lean_ctor_set_tag(v___x_1053_, 1);
lean_ctor_set(v___x_1053_, 0, v___x_1055_);
v___x_1057_ = v___x_1053_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg___boxed(lean_object* v_msg_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(v_msg_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
return v_res_1066_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__0(void){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_mk_string_unchecked("`+generalize` is not supported in `do` blocks", 45, 45);
return v___x_1067_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__1(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__0);
v___x_1069_ = l_Lean_stringToMessageData(v___x_1068_);
return v___x_1069_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__2(void){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_mk_string_unchecked("`+postponeValue` is not supported in `do` blocks", 48, 48);
return v___x_1070_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__3(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__2);
v___x_1072_ = l_Lean_stringToMessageData(v___x_1071_);
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(lean_object* v_config_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_, lean_object* v_a_1080_){
_start:
{
uint8_t v_postponeValue_1082_; uint8_t v_generalize_1083_; lean_object* v___y_1085_; lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; 
v_postponeValue_1082_ = lean_ctor_get_uint8(v_config_1073_, sizeof(void*)*1 + 3);
v_generalize_1083_ = lean_ctor_get_uint8(v_config_1073_, sizeof(void*)*1 + 4);
if (v_postponeValue_1082_ == 0)
{
v___y_1085_ = v_a_1074_;
v___y_1086_ = v_a_1075_;
v___y_1087_ = v_a_1076_;
v___y_1088_ = v_a_1077_;
v___y_1089_ = v_a_1078_;
v___y_1090_ = v_a_1079_;
v___y_1091_ = v_a_1080_;
goto v___jp_1084_;
}
else
{
lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1096_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__3);
v___x_1097_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(v___x_1096_, v_a_1077_, v_a_1078_, v_a_1079_, v_a_1080_);
return v___x_1097_;
}
v___jp_1084_:
{
if (v_generalize_1083_ == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___x_1092_ = lean_box(0);
v___x_1093_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1093_, 0, v___x_1092_);
return v___x_1093_;
}
else
{
lean_object* v___x_1094_; lean_object* v___x_1095_; 
v___x_1094_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___closed__1);
v___x_1095_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(v___x_1094_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
return v___x_1095_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo___boxed(lean_object* v_config_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(v_config_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_);
lean_dec(v_a_1105_);
lean_dec_ref(v_a_1104_);
lean_dec(v_a_1103_);
lean_dec_ref(v_a_1102_);
lean_dec(v_a_1101_);
lean_dec_ref(v_a_1100_);
lean_dec_ref(v_a_1099_);
lean_dec_ref(v_config_1098_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0(lean_object* v_00_u03b1_1108_, lean_object* v_msg_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(v_msg_1109_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_msg_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0(v_00_u03b1_1119_, v_msg_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec_ref(v___y_1121_);
return v_res_1129_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_box(0);
v___x_1131_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v___x_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg(){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___closed__0);
v___x_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg___boxed(lean_object* v___y_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(lean_object* v_00_u03b1_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
lean_object* v___x_1147_; 
v___x_1147_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___boxed(lean_object* v_00_u03b1_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1(v_00_u03b1_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
lean_dec(v___y_1155_);
lean_dec_ref(v___y_1154_);
lean_dec(v___y_1153_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1151_);
lean_dec_ref(v___y_1150_);
lean_dec_ref(v___y_1149_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___redArg(lean_object* v_lctx_1158_, lean_object* v_x_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v_keyedConfig_1167_; uint8_t v_trackZetaDelta_1168_; lean_object* v_zetaDeltaSet_1169_; lean_object* v_localInstances_1170_; lean_object* v_defEqCtx_x3f_1171_; lean_object* v_synthPendingDepth_1172_; lean_object* v_canUnfold_x3f_1173_; uint8_t v_univApprox_1174_; uint8_t v_inTypeClassResolution_1175_; uint8_t v_cacheInferType_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v_keyedConfig_1167_ = lean_ctor_get(v___y_1162_, 0);
v_trackZetaDelta_1168_ = lean_ctor_get_uint8(v___y_1162_, sizeof(void*)*7);
v_zetaDeltaSet_1169_ = lean_ctor_get(v___y_1162_, 1);
v_localInstances_1170_ = lean_ctor_get(v___y_1162_, 3);
v_defEqCtx_x3f_1171_ = lean_ctor_get(v___y_1162_, 4);
v_synthPendingDepth_1172_ = lean_ctor_get(v___y_1162_, 5);
v_canUnfold_x3f_1173_ = lean_ctor_get(v___y_1162_, 6);
v_univApprox_1174_ = lean_ctor_get_uint8(v___y_1162_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1175_ = lean_ctor_get_uint8(v___y_1162_, sizeof(void*)*7 + 2);
v_cacheInferType_1176_ = lean_ctor_get_uint8(v___y_1162_, sizeof(void*)*7 + 3);
lean_inc(v_canUnfold_x3f_1173_);
lean_inc(v_synthPendingDepth_1172_);
lean_inc(v_defEqCtx_x3f_1171_);
lean_inc_ref(v_localInstances_1170_);
lean_inc(v_zetaDeltaSet_1169_);
lean_inc_ref(v_keyedConfig_1167_);
v___x_1177_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1177_, 0, v_keyedConfig_1167_);
lean_ctor_set(v___x_1177_, 1, v_zetaDeltaSet_1169_);
lean_ctor_set(v___x_1177_, 2, v_lctx_1158_);
lean_ctor_set(v___x_1177_, 3, v_localInstances_1170_);
lean_ctor_set(v___x_1177_, 4, v_defEqCtx_x3f_1171_);
lean_ctor_set(v___x_1177_, 5, v_synthPendingDepth_1172_);
lean_ctor_set(v___x_1177_, 6, v_canUnfold_x3f_1173_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*7, v_trackZetaDelta_1168_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*7 + 1, v_univApprox_1174_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1175_);
lean_ctor_set_uint8(v___x_1177_, sizeof(void*)*7 + 3, v_cacheInferType_1176_);
lean_inc(v___y_1165_);
lean_inc_ref(v___y_1164_);
lean_inc(v___y_1163_);
lean_inc(v___y_1161_);
lean_inc_ref(v___y_1160_);
v___x_1178_ = lean_apply_7(v_x_1159_, v___y_1160_, v___y_1161_, v___x_1177_, v___y_1163_, v___y_1164_, v___y_1165_, lean_box(0));
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
v_a_1179_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1178_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1178_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
else
{
return v___x_1178_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___redArg___boxed(lean_object* v_lctx_1187_, lean_object* v_x_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___redArg(v_lctx_1187_, v_x_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(lean_object* v_00_u03b1_1197_, lean_object* v_lctx_1198_, lean_object* v_x_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_){
_start:
{
lean_object* v___x_1207_; 
v___x_1207_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___redArg(v_lctx_1198_, v_x_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_);
return v___x_1207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___boxed(lean_object* v_00_u03b1_1208_, lean_object* v_lctx_1209_, lean_object* v_x_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
lean_object* v_res_1218_; 
v_res_1218_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3(v_00_u03b1_1208_, v_lctx_1209_, v_x_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___lam__0(lean_object* v_k_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v_b_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_){
_start:
{
lean_object* v___x_1229_; 
lean_inc(v___y_1227_);
lean_inc_ref(v___y_1226_);
lean_inc(v___y_1225_);
lean_inc_ref(v___y_1224_);
lean_inc(v___y_1222_);
lean_inc_ref(v___y_1221_);
lean_inc_ref(v___y_1220_);
v___x_1229_ = lean_apply_9(v_k_1219_, v_b_1223_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, lean_box(0));
return v___x_1229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___lam__0___boxed(lean_object* v_k_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v_b_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___lam__0(v_k_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v_b_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_);
lean_dec(v___y_1238_);
lean_dec_ref(v___y_1237_);
lean_dec(v___y_1236_);
lean_dec_ref(v___y_1235_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec_ref(v___y_1231_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(lean_object* v_name_1241_, lean_object* v_type_1242_, lean_object* v_val_1243_, lean_object* v_k_1244_, uint8_t v_nondep_1245_, uint8_t v_kind_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___f_1255_; lean_object* v___x_1256_; 
lean_inc(v___y_1249_);
lean_inc_ref(v___y_1248_);
lean_inc_ref(v___y_1247_);
v___f_1255_ = lean_alloc_closure((void*)(l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1255_, 0, v_k_1244_);
lean_closure_set(v___f_1255_, 1, v___y_1247_);
lean_closure_set(v___f_1255_, 2, v___y_1248_);
lean_closure_set(v___f_1255_, 3, v___y_1249_);
v___x_1256_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1241_, v_type_1242_, v_val_1243_, v___f_1255_, v_nondep_1245_, v_kind_1246_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_);
if (lean_obj_tag(v___x_1256_) == 0)
{
return v___x_1256_;
}
else
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1264_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1264_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1264_ == 0)
{
v___x_1259_ = v___x_1256_;
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1256_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1264_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1262_; 
if (v_isShared_1260_ == 0)
{
v___x_1262_ = v___x_1259_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v_a_1257_);
v___x_1262_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
return v___x_1262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg___boxed(lean_object* v_name_1265_, lean_object* v_type_1266_, lean_object* v_val_1267_, lean_object* v_k_1268_, lean_object* v_nondep_1269_, lean_object* v_kind_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
uint8_t v_nondep_boxed_1279_; uint8_t v_kind_boxed_1280_; lean_object* v_res_1281_; 
v_nondep_boxed_1279_ = lean_unbox(v_nondep_1269_);
v_kind_boxed_1280_ = lean_unbox(v_kind_1270_);
v_res_1281_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_name_1265_, v_type_1266_, v_val_1267_, v_k_1268_, v_nondep_boxed_1279_, v_kind_boxed_1280_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
lean_dec_ref(v___y_1271_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(lean_object* v_00_u03b1_1282_, lean_object* v_name_1283_, lean_object* v_type_1284_, lean_object* v_val_1285_, lean_object* v_k_1286_, uint8_t v_nondep_1287_, uint8_t v_kind_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v_name_1283_, v_type_1284_, v_val_1285_, v_k_1286_, v_nondep_1287_, v_kind_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_, v___y_1295_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___boxed(lean_object* v_00_u03b1_1298_, lean_object* v_name_1299_, lean_object* v_type_1300_, lean_object* v_val_1301_, lean_object* v_k_1302_, lean_object* v_nondep_1303_, lean_object* v_kind_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
uint8_t v_nondep_boxed_1313_; uint8_t v_kind_boxed_1314_; lean_object* v_res_1315_; 
v_nondep_boxed_1313_ = lean_unbox(v_nondep_1303_);
v_kind_boxed_1314_ = lean_unbox(v_kind_1304_);
v_res_1315_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5(v_00_u03b1_1298_, v_name_1299_, v_type_1300_, v_val_1301_, v_k_1302_, v_nondep_boxed_1313_, v_kind_boxed_1314_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
lean_dec(v___y_1307_);
lean_dec_ref(v___y_1306_);
lean_dec_ref(v___y_1305_);
return v_res_1315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(lean_object* v_value_1316_, lean_object* v___x_1317_, uint8_t v___x_1318_, lean_object* v___x_1319_, lean_object* v___x_1320_, uint8_t v___x_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lean_Elab_Term_elabTermEnsuringType(v_value_1316_, v___x_1317_, v___x_1318_, v___x_1318_, v___x_1319_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
lean_inc(v_a_1330_);
lean_dec_ref(v___x_1329_);
v___x_1331_ = 1;
v___x_1332_ = l_Lean_Meta_mkLambdaFVars(v___x_1320_, v_a_1330_, v___x_1321_, v___x_1321_, v___x_1321_, v___x_1318_, v___x_1331_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_);
return v___x_1332_;
}
else
{
return v___x_1329_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed(lean_object* v_value_1333_, lean_object* v___x_1334_, lean_object* v___x_1335_, lean_object* v___x_1336_, lean_object* v___x_1337_, lean_object* v___x_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_){
_start:
{
uint8_t v___x_98746__boxed_1346_; uint8_t v___x_98749__boxed_1347_; lean_object* v_res_1348_; 
v___x_98746__boxed_1346_ = lean_unbox(v___x_1335_);
v___x_98749__boxed_1347_ = lean_unbox(v___x_1338_);
v_res_1348_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__0(v_value_1333_, v___x_1334_, v___x_98746__boxed_1346_, v___x_1336_, v___x_1337_, v___x_98749__boxed_1347_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_, v___y_1344_);
lean_dec(v___y_1344_);
lean_dec_ref(v___y_1343_);
lean_dec(v___y_1342_);
lean_dec_ref(v___y_1341_);
lean_dec(v___y_1340_);
lean_dec_ref(v___y_1339_);
lean_dec_ref(v___x_1337_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4_spec__14___redArg(lean_object* v_x_1349_, lean_object* v_x_1350_, lean_object* v_x_1351_, lean_object* v_x_1352_){
_start:
{
lean_object* v_ks_1353_; lean_object* v_vs_1354_; lean_object* v___x_1356_; uint8_t v_isShared_1357_; uint8_t v_isSharedCheck_1378_; 
v_ks_1353_ = lean_ctor_get(v_x_1349_, 0);
v_vs_1354_ = lean_ctor_get(v_x_1349_, 1);
v_isSharedCheck_1378_ = !lean_is_exclusive(v_x_1349_);
if (v_isSharedCheck_1378_ == 0)
{
v___x_1356_ = v_x_1349_;
v_isShared_1357_ = v_isSharedCheck_1378_;
goto v_resetjp_1355_;
}
else
{
lean_inc(v_vs_1354_);
lean_inc(v_ks_1353_);
lean_dec(v_x_1349_);
v___x_1356_ = lean_box(0);
v_isShared_1357_ = v_isSharedCheck_1378_;
goto v_resetjp_1355_;
}
v_resetjp_1355_:
{
lean_object* v___x_1358_; uint8_t v___x_1359_; 
v___x_1358_ = lean_array_get_size(v_ks_1353_);
v___x_1359_ = lean_nat_dec_lt(v_x_1350_, v___x_1358_);
if (v___x_1359_ == 0)
{
lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1363_; 
lean_dec(v_x_1350_);
v___x_1360_ = lean_array_push(v_ks_1353_, v_x_1351_);
v___x_1361_ = lean_array_push(v_vs_1354_, v_x_1352_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 1, v___x_1361_);
lean_ctor_set(v___x_1356_, 0, v___x_1360_);
v___x_1363_ = v___x_1356_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1360_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
return v___x_1363_;
}
}
else
{
lean_object* v_k_x27_1365_; uint8_t v___x_1366_; 
v_k_x27_1365_ = lean_array_fget_borrowed(v_ks_1353_, v_x_1350_);
v___x_1366_ = l_Lean_instBEqFVarId_beq(v_x_1351_, v_k_x27_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1368_; 
if (v_isShared_1357_ == 0)
{
v___x_1368_ = v___x_1356_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_ks_1353_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_vs_1354_);
v___x_1368_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = lean_unsigned_to_nat(1u);
v___x_1370_ = lean_nat_add(v_x_1350_, v___x_1369_);
lean_dec(v_x_1350_);
v_x_1349_ = v___x_1368_;
v_x_1350_ = v___x_1370_;
goto _start;
}
}
else
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1376_; 
v___x_1373_ = lean_array_fset(v_ks_1353_, v_x_1350_, v_x_1351_);
v___x_1374_ = lean_array_fset(v_vs_1354_, v_x_1350_, v_x_1352_);
lean_dec(v_x_1350_);
if (v_isShared_1357_ == 0)
{
lean_ctor_set(v___x_1356_, 1, v___x_1374_);
lean_ctor_set(v___x_1356_, 0, v___x_1373_);
v___x_1376_ = v___x_1356_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1377_; 
v_reuseFailAlloc_1377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1377_, 0, v___x_1373_);
lean_ctor_set(v_reuseFailAlloc_1377_, 1, v___x_1374_);
v___x_1376_ = v_reuseFailAlloc_1377_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
return v___x_1376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(lean_object* v_n_1379_, lean_object* v_k_1380_, lean_object* v_v_1381_){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; 
v___x_1382_ = lean_unsigned_to_nat(0u);
v___x_1383_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4_spec__14___redArg(v_n_1379_, v___x_1382_, v_k_1380_, v_v_1381_);
return v___x_1383_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_1384_; size_t v___x_1385_; size_t v___x_1386_; 
v___x_1384_ = ((size_t)5ULL);
v___x_1385_ = ((size_t)1ULL);
v___x_1386_ = lean_usize_shift_left(v___x_1385_, v___x_1384_);
return v___x_1386_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1387_; size_t v___x_1388_; size_t v___x_1389_; 
v___x_1387_ = ((size_t)1ULL);
v___x_1388_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__0);
v___x_1389_ = lean_usize_sub(v___x_1388_, v___x_1387_);
return v___x_1389_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(lean_object* v_x_1391_, size_t v_x_1392_, size_t v_x_1393_, lean_object* v_x_1394_, lean_object* v_x_1395_){
_start:
{
if (lean_obj_tag(v_x_1391_) == 0)
{
lean_object* v_es_1396_; size_t v___x_1397_; size_t v___x_1398_; size_t v___x_1399_; size_t v___x_1400_; lean_object* v_j_1401_; lean_object* v___x_1402_; uint8_t v___x_1403_; 
v_es_1396_ = lean_ctor_get(v_x_1391_, 0);
v___x_1397_ = ((size_t)5ULL);
v___x_1398_ = ((size_t)1ULL);
v___x_1399_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1);
v___x_1400_ = lean_usize_land(v_x_1392_, v___x_1399_);
v_j_1401_ = lean_usize_to_nat(v___x_1400_);
v___x_1402_ = lean_array_get_size(v_es_1396_);
v___x_1403_ = lean_nat_dec_lt(v_j_1401_, v___x_1402_);
if (v___x_1403_ == 0)
{
lean_dec(v_j_1401_);
lean_dec(v_x_1395_);
lean_dec(v_x_1394_);
return v_x_1391_;
}
else
{
lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1440_; 
lean_inc_ref(v_es_1396_);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_x_1391_);
if (v_isSharedCheck_1440_ == 0)
{
lean_object* v_unused_1441_; 
v_unused_1441_ = lean_ctor_get(v_x_1391_, 0);
lean_dec(v_unused_1441_);
v___x_1405_ = v_x_1391_;
v_isShared_1406_ = v_isSharedCheck_1440_;
goto v_resetjp_1404_;
}
else
{
lean_dec(v_x_1391_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1440_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v_v_1407_; lean_object* v___x_1408_; lean_object* v_xs_x27_1409_; lean_object* v___y_1411_; 
v_v_1407_ = lean_array_fget(v_es_1396_, v_j_1401_);
v___x_1408_ = lean_box(0);
v_xs_x27_1409_ = lean_array_fset(v_es_1396_, v_j_1401_, v___x_1408_);
switch(lean_obj_tag(v_v_1407_))
{
case 0:
{
lean_object* v_key_1416_; lean_object* v_val_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1427_; 
v_key_1416_ = lean_ctor_get(v_v_1407_, 0);
v_val_1417_ = lean_ctor_get(v_v_1407_, 1);
v_isSharedCheck_1427_ = !lean_is_exclusive(v_v_1407_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1419_ = v_v_1407_;
v_isShared_1420_ = v_isSharedCheck_1427_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_val_1417_);
lean_inc(v_key_1416_);
lean_dec(v_v_1407_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1427_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
uint8_t v___x_1421_; 
v___x_1421_ = l_Lean_instBEqFVarId_beq(v_x_1394_, v_key_1416_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
lean_del_object(v___x_1419_);
v___x_1422_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1416_, v_val_1417_, v_x_1394_, v_x_1395_);
v___x_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
v___y_1411_ = v___x_1423_;
goto v___jp_1410_;
}
else
{
lean_object* v___x_1425_; 
lean_dec(v_val_1417_);
lean_dec(v_key_1416_);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 1, v_x_1395_);
lean_ctor_set(v___x_1419_, 0, v_x_1394_);
v___x_1425_ = v___x_1419_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_x_1394_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v_x_1395_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
v___y_1411_ = v___x_1425_;
goto v___jp_1410_;
}
}
}
}
case 1:
{
lean_object* v_node_1428_; lean_object* v___x_1430_; uint8_t v_isShared_1431_; uint8_t v_isSharedCheck_1438_; 
v_node_1428_ = lean_ctor_get(v_v_1407_, 0);
v_isSharedCheck_1438_ = !lean_is_exclusive(v_v_1407_);
if (v_isSharedCheck_1438_ == 0)
{
v___x_1430_ = v_v_1407_;
v_isShared_1431_ = v_isSharedCheck_1438_;
goto v_resetjp_1429_;
}
else
{
lean_inc(v_node_1428_);
lean_dec(v_v_1407_);
v___x_1430_ = lean_box(0);
v_isShared_1431_ = v_isSharedCheck_1438_;
goto v_resetjp_1429_;
}
v_resetjp_1429_:
{
size_t v___x_1432_; size_t v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1436_; 
v___x_1432_ = lean_usize_shift_right(v_x_1392_, v___x_1397_);
v___x_1433_ = lean_usize_add(v_x_1393_, v___x_1398_);
v___x_1434_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_node_1428_, v___x_1432_, v___x_1433_, v_x_1394_, v_x_1395_);
if (v_isShared_1431_ == 0)
{
lean_ctor_set(v___x_1430_, 0, v___x_1434_);
v___x_1436_ = v___x_1430_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1434_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
v___y_1411_ = v___x_1436_;
goto v___jp_1410_;
}
}
}
default: 
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1439_, 0, v_x_1394_);
lean_ctor_set(v___x_1439_, 1, v_x_1395_);
v___y_1411_ = v___x_1439_;
goto v___jp_1410_;
}
}
v___jp_1410_:
{
lean_object* v___x_1412_; lean_object* v___x_1414_; 
v___x_1412_ = lean_array_fset(v_xs_x27_1409_, v_j_1401_, v___y_1411_);
lean_dec(v_j_1401_);
if (v_isShared_1406_ == 0)
{
lean_ctor_set(v___x_1405_, 0, v___x_1412_);
v___x_1414_ = v___x_1405_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
else
{
lean_object* v_ks_1442_; lean_object* v_vs_1443_; lean_object* v___x_1445_; uint8_t v_isShared_1446_; uint8_t v_isSharedCheck_1463_; 
v_ks_1442_ = lean_ctor_get(v_x_1391_, 0);
v_vs_1443_ = lean_ctor_get(v_x_1391_, 1);
v_isSharedCheck_1463_ = !lean_is_exclusive(v_x_1391_);
if (v_isSharedCheck_1463_ == 0)
{
v___x_1445_ = v_x_1391_;
v_isShared_1446_ = v_isSharedCheck_1463_;
goto v_resetjp_1444_;
}
else
{
lean_inc(v_vs_1443_);
lean_inc(v_ks_1442_);
lean_dec(v_x_1391_);
v___x_1445_ = lean_box(0);
v_isShared_1446_ = v_isSharedCheck_1463_;
goto v_resetjp_1444_;
}
v_resetjp_1444_:
{
lean_object* v___x_1448_; 
if (v_isShared_1446_ == 0)
{
v___x_1448_ = v___x_1445_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v_ks_1442_);
lean_ctor_set(v_reuseFailAlloc_1462_, 1, v_vs_1443_);
v___x_1448_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
lean_object* v_newNode_1449_; uint8_t v___y_1451_; size_t v___x_1457_; uint8_t v___x_1458_; 
v_newNode_1449_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v___x_1448_, v_x_1394_, v_x_1395_);
v___x_1457_ = ((size_t)7ULL);
v___x_1458_ = lean_usize_dec_le(v___x_1457_, v_x_1393_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1459_; lean_object* v___x_1460_; uint8_t v___x_1461_; 
v___x_1459_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1449_);
v___x_1460_ = lean_unsigned_to_nat(4u);
v___x_1461_ = lean_nat_dec_lt(v___x_1459_, v___x_1460_);
lean_dec(v___x_1459_);
v___y_1451_ = v___x_1461_;
goto v___jp_1450_;
}
else
{
v___y_1451_ = v___x_1458_;
goto v___jp_1450_;
}
v___jp_1450_:
{
if (v___y_1451_ == 0)
{
lean_object* v_ks_1452_; lean_object* v_vs_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v_ks_1452_ = lean_ctor_get(v_newNode_1449_, 0);
lean_inc_ref(v_ks_1452_);
v_vs_1453_ = lean_ctor_get(v_newNode_1449_, 1);
lean_inc_ref(v_vs_1453_);
lean_dec_ref(v_newNode_1449_);
v___x_1454_ = lean_unsigned_to_nat(0u);
v___x_1455_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__2);
v___x_1456_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___redArg(v_x_1393_, v_ks_1452_, v_vs_1453_, v___x_1454_, v___x_1455_);
lean_dec_ref(v_vs_1453_);
lean_dec_ref(v_ks_1452_);
return v___x_1456_;
}
else
{
return v_newNode_1449_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___redArg(size_t v_depth_1464_, lean_object* v_keys_1465_, lean_object* v_vals_1466_, lean_object* v_i_1467_, lean_object* v_entries_1468_){
_start:
{
lean_object* v___x_1469_; uint8_t v___x_1470_; 
v___x_1469_ = lean_array_get_size(v_keys_1465_);
v___x_1470_ = lean_nat_dec_lt(v_i_1467_, v___x_1469_);
if (v___x_1470_ == 0)
{
lean_dec(v_i_1467_);
return v_entries_1468_;
}
else
{
lean_object* v_k_1471_; lean_object* v_v_1472_; uint64_t v___x_1473_; size_t v_h_1474_; size_t v___x_1475_; lean_object* v___x_1476_; size_t v___x_1477_; size_t v___x_1478_; size_t v___x_1479_; size_t v_h_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v_k_1471_ = lean_array_fget_borrowed(v_keys_1465_, v_i_1467_);
v_v_1472_ = lean_array_fget_borrowed(v_vals_1466_, v_i_1467_);
v___x_1473_ = l_Lean_instHashableFVarId_hash(v_k_1471_);
v_h_1474_ = lean_uint64_to_usize(v___x_1473_);
v___x_1475_ = ((size_t)5ULL);
v___x_1476_ = lean_unsigned_to_nat(1u);
v___x_1477_ = ((size_t)1ULL);
v___x_1478_ = lean_usize_sub(v_depth_1464_, v___x_1477_);
v___x_1479_ = lean_usize_mul(v___x_1475_, v___x_1478_);
v_h_1480_ = lean_usize_shift_right(v_h_1474_, v___x_1479_);
v___x_1481_ = lean_nat_add(v_i_1467_, v___x_1476_);
lean_dec(v_i_1467_);
lean_inc(v_v_1472_);
lean_inc(v_k_1471_);
v___x_1482_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_entries_1468_, v_h_1480_, v_depth_1464_, v_k_1471_, v_v_1472_);
v_i_1467_ = v___x_1481_;
v_entries_1468_ = v___x_1482_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_depth_1484_, lean_object* v_keys_1485_, lean_object* v_vals_1486_, lean_object* v_i_1487_, lean_object* v_entries_1488_){
_start:
{
size_t v_depth_boxed_1489_; lean_object* v_res_1490_; 
v_depth_boxed_1489_ = lean_unbox_usize(v_depth_1484_);
lean_dec(v_depth_1484_);
v_res_1490_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___redArg(v_depth_boxed_1489_, v_keys_1485_, v_vals_1486_, v_i_1487_, v_entries_1488_);
lean_dec_ref(v_vals_1486_);
lean_dec_ref(v_keys_1485_);
return v_res_1490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___boxed(lean_object* v_x_1491_, lean_object* v_x_1492_, lean_object* v_x_1493_, lean_object* v_x_1494_, lean_object* v_x_1495_){
_start:
{
size_t v_x_98881__boxed_1496_; size_t v_x_98882__boxed_1497_; lean_object* v_res_1498_; 
v_x_98881__boxed_1496_ = lean_unbox_usize(v_x_1492_);
lean_dec(v_x_1492_);
v_x_98882__boxed_1497_ = lean_unbox_usize(v_x_1493_);
lean_dec(v_x_1493_);
v_res_1498_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1491_, v_x_98881__boxed_1496_, v_x_98882__boxed_1497_, v_x_1494_, v_x_1495_);
return v_res_1498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(lean_object* v_x_1499_, lean_object* v_x_1500_, lean_object* v_x_1501_){
_start:
{
uint64_t v___x_1502_; size_t v___x_1503_; size_t v___x_1504_; lean_object* v___x_1505_; 
v___x_1502_ = l_Lean_instHashableFVarId_hash(v_x_1500_);
v___x_1503_ = lean_uint64_to_usize(v___x_1502_);
v___x_1504_ = ((size_t)1ULL);
v___x_1505_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_1499_, v___x_1503_, v___x_1504_, v_x_1500_, v_x_1501_);
return v___x_1505_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(lean_object* v_as_1506_, size_t v_i_1507_, size_t v_stop_1508_, lean_object* v_b_1509_){
_start:
{
lean_object* v___y_1511_; uint8_t v___x_1515_; 
v___x_1515_ = lean_usize_dec_eq(v_i_1507_, v_stop_1508_);
if (v___x_1515_ == 0)
{
lean_object* v_fvarIdToDecl_1516_; lean_object* v_decls_1517_; lean_object* v_auxDeclToFullName_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; 
v_fvarIdToDecl_1516_ = lean_ctor_get(v_b_1509_, 0);
v_decls_1517_ = lean_ctor_get(v_b_1509_, 1);
v_auxDeclToFullName_1518_ = lean_ctor_get(v_b_1509_, 2);
v___x_1519_ = lean_array_uget_borrowed(v_as_1506_, v_i_1507_);
v___x_1520_ = l_Lean_Expr_fvarId_x21(v___x_1519_);
lean_inc_ref(v_b_1509_);
v___x_1521_ = lean_local_ctx_find(v_b_1509_, v___x_1520_);
if (lean_obj_tag(v___x_1521_) == 0)
{
v___y_1511_ = v_b_1509_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1548_; 
lean_inc(v_auxDeclToFullName_1518_);
lean_inc_ref(v_decls_1517_);
lean_inc_ref(v_fvarIdToDecl_1516_);
v_isSharedCheck_1548_ = !lean_is_exclusive(v_b_1509_);
if (v_isSharedCheck_1548_ == 0)
{
lean_object* v_unused_1549_; lean_object* v_unused_1550_; lean_object* v_unused_1551_; 
v_unused_1549_ = lean_ctor_get(v_b_1509_, 2);
lean_dec(v_unused_1549_);
v_unused_1550_ = lean_ctor_get(v_b_1509_, 1);
lean_dec(v_unused_1550_);
v_unused_1551_ = lean_ctor_get(v_b_1509_, 0);
lean_dec(v_unused_1551_);
v___x_1523_ = v_b_1509_;
v_isShared_1524_ = v_isSharedCheck_1548_;
goto v_resetjp_1522_;
}
else
{
lean_dec(v_b_1509_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1548_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v_val_1525_; lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1547_; 
v_val_1525_ = lean_ctor_get(v___x_1521_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1521_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1527_ = v___x_1521_;
v_isShared_1528_ = v_isSharedCheck_1547_;
goto v_resetjp_1526_;
}
else
{
lean_inc(v_val_1525_);
lean_dec(v___x_1521_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1547_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___y_1533_; lean_object* v___y_1534_; lean_object* v___y_1543_; lean_object* v_fvarId_1546_; 
v___x_1529_ = l_Lean_LocalDecl_type(v_val_1525_);
v___x_1530_ = l_Lean_Expr_cleanupAnnotations(v___x_1529_);
v___x_1531_ = l_Lean_LocalDecl_setType(v_val_1525_, v___x_1530_);
v_fvarId_1546_ = lean_ctor_get(v___x_1531_, 1);
lean_inc(v_fvarId_1546_);
v___y_1543_ = v_fvarId_1546_;
goto v___jp_1542_;
v___jp_1532_:
{
lean_object* v___x_1536_; 
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1531_);
v___x_1536_ = v___x_1527_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___x_1531_);
v___x_1536_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
lean_object* v___x_1537_; lean_object* v___x_1539_; 
v___x_1537_ = l_Lean_PersistentArray_set___redArg(v_decls_1517_, v___y_1534_, v___x_1536_);
lean_dec(v___y_1534_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 1, v___x_1537_);
lean_ctor_set(v___x_1523_, 0, v___y_1533_);
v___x_1539_ = v___x_1523_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v___y_1533_);
lean_ctor_set(v_reuseFailAlloc_1540_, 1, v___x_1537_);
lean_ctor_set(v_reuseFailAlloc_1540_, 2, v_auxDeclToFullName_1518_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
v___y_1511_ = v___x_1539_;
goto v___jp_1510_;
}
}
}
v___jp_1542_:
{
lean_object* v___x_1544_; lean_object* v_index_1545_; 
lean_inc_ref(v___x_1531_);
v___x_1544_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_fvarIdToDecl_1516_, v___y_1543_, v___x_1531_);
v_index_1545_ = lean_ctor_get(v___x_1531_, 0);
lean_inc(v_index_1545_);
v___y_1533_ = v___x_1544_;
v___y_1534_ = v_index_1545_;
goto v___jp_1532_;
}
}
}
}
}
else
{
return v_b_1509_;
}
v___jp_1510_:
{
size_t v___x_1512_; size_t v___x_1513_; 
v___x_1512_ = ((size_t)1ULL);
v___x_1513_ = lean_usize_add(v_i_1507_, v___x_1512_);
v_i_1507_ = v___x_1513_;
v_b_1509_ = v___y_1511_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4___boxed(lean_object* v_as_1552_, lean_object* v_i_1553_, lean_object* v_stop_1554_, lean_object* v_b_1555_){
_start:
{
size_t v_i_boxed_1556_; size_t v_stop_boxed_1557_; lean_object* v_res_1558_; 
v_i_boxed_1556_ = lean_unbox_usize(v_i_1553_);
lean_dec(v_i_1553_);
v_stop_boxed_1557_ = lean_unbox_usize(v_stop_1554_);
lean_dec(v_stop_1554_);
v_res_1558_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(v_as_1552_, v_i_boxed_1556_, v_stop_boxed_1557_, v_b_1555_);
lean_dec_ref(v_as_1552_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(size_t v_sz_1559_, size_t v_i_1560_, lean_object* v_bs_1561_){
_start:
{
uint8_t v___x_1562_; 
v___x_1562_ = lean_usize_dec_lt(v_i_1560_, v_sz_1559_);
if (v___x_1562_ == 0)
{
return v_bs_1561_;
}
else
{
lean_object* v_v_1563_; lean_object* v_snd_1564_; lean_object* v___x_1565_; lean_object* v_bs_x27_1566_; size_t v___x_1567_; size_t v___x_1568_; lean_object* v___x_1569_; 
v_v_1563_ = lean_array_uget_borrowed(v_bs_1561_, v_i_1560_);
v_snd_1564_ = lean_ctor_get(v_v_1563_, 1);
lean_inc(v_snd_1564_);
v___x_1565_ = lean_unsigned_to_nat(0u);
v_bs_x27_1566_ = lean_array_uset(v_bs_1561_, v_i_1560_, v___x_1565_);
v___x_1567_ = ((size_t)1ULL);
v___x_1568_ = lean_usize_add(v_i_1560_, v___x_1567_);
v___x_1569_ = lean_array_uset(v_bs_x27_1566_, v_i_1560_, v_snd_1564_);
v_i_1560_ = v___x_1568_;
v_bs_1561_ = v___x_1569_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2___boxed(lean_object* v_sz_1571_, lean_object* v_i_1572_, lean_object* v_bs_1573_){
_start:
{
size_t v_sz_boxed_1574_; size_t v_i_boxed_1575_; lean_object* v_res_1576_; 
v_sz_boxed_1574_ = lean_unbox_usize(v_sz_1571_);
lean_dec(v_sz_1571_);
v_i_boxed_1575_ = lean_unbox_usize(v_i_1572_);
lean_dec(v_i_1572_);
v_res_1576_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(v_sz_boxed_1574_, v_i_boxed_1575_, v_bs_1573_);
return v_res_1576_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1577_; 
v___x_1577_ = lean_mk_string_unchecked("failed to infer `", 17, 17);
return v___x_1577_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1578_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__0);
v___x_1579_ = l_Lean_stringToMessageData(v___x_1578_);
return v___x_1579_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1580_; 
v___x_1580_ = lean_mk_string_unchecked("` declaration type", 18, 18);
return v___x_1580_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1581_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__2);
v___x_1582_ = l_Lean_stringToMessageData(v___x_1581_);
return v___x_1582_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1583_; 
v___x_1583_ = lean_mk_string_unchecked("failed to infer universe levels in `", 36, 36);
return v___x_1583_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1584_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__4);
v___x_1585_ = l_Lean_stringToMessageData(v___x_1584_);
return v___x_1585_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1586_; 
v___x_1586_ = lean_mk_string_unchecked("let", 3, 3);
return v___x_1586_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7(void){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = lean_mk_string_unchecked("have", 4, 4);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(lean_object* v_type_1588_, lean_object* v_value_1589_, uint8_t v___x_1590_, uint8_t v___x_1591_, lean_object* v___x_1592_, uint8_t v___y_1593_, lean_object* v_xs_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v___x_1602_; uint8_t v___x_1603_; lean_object* v___x_1604_; 
lean_inc(v_type_1588_);
v___x_1602_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabType___boxed), 8, 1);
lean_closure_set(v___x_1602_, 0, v_type_1588_);
v___x_1603_ = 2;
v___x_1604_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1602_, v___x_1603_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
if (lean_obj_tag(v___x_1604_) == 0)
{
lean_object* v_a_1605_; size_t v_sz_1606_; size_t v___x_1607_; lean_object* v___x_1608_; lean_object* v___y_1610_; lean_object* v___y_1646_; 
v_a_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_a_1605_);
lean_dec_ref(v___x_1604_);
v_sz_1606_ = lean_array_size(v_xs_1594_);
v___x_1607_ = ((size_t)0ULL);
v___x_1608_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__2(v_sz_1606_, v___x_1607_, v_xs_1594_);
if (v___y_1593_ == 0)
{
lean_object* v___x_1682_; 
v___x_1682_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
v___y_1646_ = v___x_1682_;
goto v___jp_1645_;
}
else
{
lean_object* v___x_1683_; 
v___x_1683_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7);
v___y_1646_ = v___x_1683_;
goto v___jp_1645_;
}
v___jp_1609_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___f_1615_; lean_object* v___x_1616_; 
lean_inc(v_a_1605_);
v___x_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1611_, 0, v_a_1605_);
v___x_1612_ = lean_box(0);
v___x_1613_ = lean_box(v___x_1590_);
v___x_1614_ = lean_box(v___x_1591_);
lean_inc_ref(v___x_1608_);
v___f_1615_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__0___boxed), 13, 6);
lean_closure_set(v___f_1615_, 0, v_value_1589_);
lean_closure_set(v___f_1615_, 1, v___x_1611_);
lean_closure_set(v___f_1615_, 2, v___x_1613_);
lean_closure_set(v___f_1615_, 3, v___x_1612_);
lean_closure_set(v___f_1615_, 4, v___x_1608_);
lean_closure_set(v___f_1615_, 5, v___x_1614_);
v___x_1616_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__3___redArg(v___y_1610_, v___f_1615_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v_a_1617_; uint8_t v___x_1618_; lean_object* v___x_1619_; 
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
lean_inc(v_a_1617_);
lean_dec_ref(v___x_1616_);
v___x_1618_ = 1;
v___x_1619_ = l_Lean_Meta_mkForallFVars(v___x_1608_, v_a_1605_, v___x_1591_, v___x_1590_, v___x_1590_, v___x_1618_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec_ref(v___x_1608_);
if (lean_obj_tag(v___x_1619_) == 0)
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1628_; 
v_a_1620_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1628_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1622_ = v___x_1619_;
v_isShared_1623_ = v_isSharedCheck_1628_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1619_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1628_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1624_; lean_object* v___x_1626_; 
v___x_1624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1624_, 0, v_a_1620_);
lean_ctor_set(v___x_1624_, 1, v_a_1617_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 0, v___x_1624_);
v___x_1626_ = v___x_1622_;
goto v_reusejp_1625_;
}
else
{
lean_object* v_reuseFailAlloc_1627_; 
v_reuseFailAlloc_1627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1627_, 0, v___x_1624_);
v___x_1626_ = v_reuseFailAlloc_1627_;
goto v_reusejp_1625_;
}
v_reusejp_1625_:
{
return v___x_1626_;
}
}
}
else
{
lean_object* v_a_1629_; lean_object* v___x_1631_; uint8_t v_isShared_1632_; uint8_t v_isSharedCheck_1636_; 
lean_dec(v_a_1617_);
v_a_1629_ = lean_ctor_get(v___x_1619_, 0);
v_isSharedCheck_1636_ = !lean_is_exclusive(v___x_1619_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1631_ = v___x_1619_;
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
else
{
lean_inc(v_a_1629_);
lean_dec(v___x_1619_);
v___x_1631_ = lean_box(0);
v_isShared_1632_ = v_isSharedCheck_1636_;
goto v_resetjp_1630_;
}
v_resetjp_1630_:
{
lean_object* v___x_1634_; 
if (v_isShared_1632_ == 0)
{
v___x_1634_ = v___x_1631_;
goto v_reusejp_1633_;
}
else
{
lean_object* v_reuseFailAlloc_1635_; 
v_reuseFailAlloc_1635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1635_, 0, v_a_1629_);
v___x_1634_ = v_reuseFailAlloc_1635_;
goto v_reusejp_1633_;
}
v_reusejp_1633_:
{
return v___x_1634_;
}
}
}
}
else
{
lean_object* v_a_1637_; lean_object* v___x_1639_; uint8_t v_isShared_1640_; uint8_t v_isSharedCheck_1644_; 
lean_dec_ref(v___x_1608_);
lean_dec(v_a_1605_);
v_a_1637_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1644_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1644_ == 0)
{
v___x_1639_ = v___x_1616_;
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
else
{
lean_inc(v_a_1637_);
lean_dec(v___x_1616_);
v___x_1639_ = lean_box(0);
v_isShared_1640_ = v_isSharedCheck_1644_;
goto v_resetjp_1638_;
}
v_resetjp_1638_:
{
lean_object* v___x_1642_; 
if (v_isShared_1640_ == 0)
{
v___x_1642_ = v___x_1639_;
goto v_reusejp_1641_;
}
else
{
lean_object* v_reuseFailAlloc_1643_; 
v_reuseFailAlloc_1643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1643_, 0, v_a_1637_);
v___x_1642_ = v_reuseFailAlloc_1643_;
goto v_reusejp_1641_;
}
v_reusejp_1641_:
{
return v___x_1642_;
}
}
}
}
v___jp_1645_:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1647_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__1);
lean_inc_ref(v___y_1646_);
v___x_1648_ = l_Lean_stringToMessageData(v___y_1646_);
lean_inc_ref(v___x_1648_);
v___x_1649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1647_);
lean_ctor_set(v___x_1649_, 1, v___x_1648_);
v___x_1650_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__3);
v___x_1651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1649_);
lean_ctor_set(v___x_1651_, 1, v___x_1650_);
lean_inc(v_type_1588_);
v___x_1652_ = l_Lean_Elab_Term_registerCustomErrorIfMVar___redArg(v_a_1605_, v_type_1588_, v___x_1651_, v___y_1596_, v___y_1600_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; 
lean_dec_ref(v___x_1652_);
v___x_1653_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__5);
v___x_1654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
lean_ctor_set(v___x_1654_, 1, v___x_1648_);
v___x_1655_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1655_, 0, v___x_1654_);
lean_ctor_set(v___x_1655_, 1, v___x_1650_);
v___x_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
lean_inc(v_a_1605_);
v___x_1657_ = l_Lean_Elab_Term_registerLevelMVarErrorExprInfo___redArg(v_a_1605_, v_type_1588_, v___x_1656_, v___y_1596_, v___y_1597_, v___y_1600_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v_lctx_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
lean_dec_ref(v___x_1657_);
v_lctx_1658_ = lean_ctor_get(v___y_1597_, 2);
v___x_1659_ = lean_array_get_size(v___x_1608_);
v___x_1660_ = lean_nat_dec_lt(v___x_1592_, v___x_1659_);
if (v___x_1660_ == 0)
{
lean_inc_ref(v_lctx_1658_);
v___y_1610_ = v_lctx_1658_;
goto v___jp_1609_;
}
else
{
uint8_t v___x_1661_; 
v___x_1661_ = lean_nat_dec_le(v___x_1659_, v___x_1659_);
if (v___x_1661_ == 0)
{
if (v___x_1660_ == 0)
{
lean_inc_ref(v_lctx_1658_);
v___y_1610_ = v_lctx_1658_;
goto v___jp_1609_;
}
else
{
size_t v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_usize_of_nat(v___x_1659_);
lean_inc_ref(v_lctx_1658_);
v___x_1663_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(v___x_1608_, v___x_1607_, v___x_1662_, v_lctx_1658_);
v___y_1610_ = v___x_1663_;
goto v___jp_1609_;
}
}
else
{
size_t v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = lean_usize_of_nat(v___x_1659_);
lean_inc_ref(v_lctx_1658_);
v___x_1665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__4(v___x_1608_, v___x_1607_, v___x_1664_, v_lctx_1658_);
v___y_1610_ = v___x_1665_;
goto v___jp_1609_;
}
}
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec_ref(v___x_1608_);
lean_dec(v_a_1605_);
lean_dec(v_value_1589_);
v_a_1666_ = lean_ctor_get(v___x_1657_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1657_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1657_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
}
}
}
}
else
{
lean_object* v_a_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1681_; 
lean_dec_ref(v___x_1648_);
lean_dec_ref(v___x_1608_);
lean_dec(v_a_1605_);
lean_dec(v_value_1589_);
lean_dec(v_type_1588_);
v_a_1674_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1676_ = v___x_1652_;
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_a_1674_);
lean_dec(v___x_1652_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1681_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v___x_1679_; 
if (v_isShared_1677_ == 0)
{
v___x_1679_ = v___x_1676_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v_a_1674_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
}
}
}
else
{
lean_object* v_a_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1691_; 
lean_dec_ref(v_xs_1594_);
lean_dec(v_value_1589_);
lean_dec(v_type_1588_);
v_a_1684_ = lean_ctor_get(v___x_1604_, 0);
v_isSharedCheck_1691_ = !lean_is_exclusive(v___x_1604_);
if (v_isSharedCheck_1691_ == 0)
{
v___x_1686_ = v___x_1604_;
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_a_1684_);
lean_dec(v___x_1604_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1691_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v___x_1689_; 
if (v_isShared_1687_ == 0)
{
v___x_1689_ = v___x_1686_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v_a_1684_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed(lean_object* v_type_1692_, lean_object* v_value_1693_, lean_object* v___x_1694_, lean_object* v___x_1695_, lean_object* v___x_1696_, lean_object* v___y_1697_, lean_object* v_xs_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_){
_start:
{
uint8_t v___x_99200__boxed_1706_; uint8_t v___x_99201__boxed_1707_; uint8_t v___y_99203__boxed_1708_; lean_object* v_res_1709_; 
v___x_99200__boxed_1706_ = lean_unbox(v___x_1694_);
v___x_99201__boxed_1707_ = lean_unbox(v___x_1695_);
v___y_99203__boxed_1708_ = lean_unbox(v___y_1697_);
v_res_1709_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__1(v_type_1692_, v_value_1693_, v___x_99200__boxed_1706_, v___x_99201__boxed_1707_, v___x_1696_, v___y_99203__boxed_1708_, v_xs_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
lean_dec(v___y_1704_);
lean_dec_ref(v___y_1703_);
lean_dec(v___y_1702_);
lean_dec_ref(v___y_1701_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___x_1696_);
return v_res_1709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(lean_object* v_val_1710_, lean_object* v_a_1711_, uint8_t v_zeta_1712_, uint8_t v___y_1713_, lean_object* v_x_1714_, uint8_t v_usedOnly_1715_, uint8_t v___x_1716_, uint8_t v___x_1717_, lean_object* v_snd_1718_, lean_object* v_h_x27_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
lean_object* v___x_1728_; 
lean_inc_ref(v_h_x27_1719_);
v___x_1728_ = l_Lean_Elab_Term_addLocalVarInfo(v_val_1710_, v_h_x27_1719_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v___x_1729_; 
lean_dec_ref(v___x_1728_);
v___x_1729_ = l_Lean_Elab_Do_DoElemCont_continueWithUnit(v_a_1711_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1729_) == 0)
{
if (v_zeta_1712_ == 0)
{
if (v___y_1713_ == 0)
{
lean_object* v_a_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; uint8_t v___x_1735_; lean_object* v___x_1736_; 
lean_dec_ref(v_snd_1718_);
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1730_);
lean_dec_ref(v___x_1729_);
v___x_1731_ = lean_unsigned_to_nat(2u);
v___x_1732_ = lean_mk_empty_array_with_capacity(v___x_1731_);
v___x_1733_ = lean_array_push(v___x_1732_, v_x_1714_);
v___x_1734_ = lean_array_push(v___x_1733_, v_h_x27_1719_);
v___x_1735_ = 1;
v___x_1736_ = l_Lean_Meta_mkLetFVars(v___x_1734_, v_a_1730_, v_usedOnly_1715_, v___x_1716_, v___x_1735_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
lean_dec_ref(v___x_1734_);
return v___x_1736_;
}
else
{
lean_object* v_a_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; uint8_t v___x_1742_; lean_object* v___x_1743_; 
v_a_1737_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1737_);
lean_dec_ref(v___x_1729_);
v___x_1738_ = lean_unsigned_to_nat(2u);
v___x_1739_ = lean_mk_empty_array_with_capacity(v___x_1738_);
v___x_1740_ = lean_array_push(v___x_1739_, v_x_1714_);
v___x_1741_ = lean_array_push(v___x_1740_, v_h_x27_1719_);
v___x_1742_ = 1;
v___x_1743_ = l_Lean_Meta_mkLambdaFVars(v___x_1741_, v_a_1737_, v___x_1716_, v___x_1717_, v___x_1716_, v___x_1717_, v___x_1742_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
lean_dec_ref(v___x_1741_);
if (lean_obj_tag(v___x_1743_) == 0)
{
lean_object* v_a_1744_; lean_object* v___x_1745_; 
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref(v___x_1743_);
lean_inc_ref(v_snd_1718_);
v___x_1745_ = l_Lean_Meta_mkEqRefl(v_snd_1718_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1754_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1754_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1748_ = v___x_1745_;
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1745_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1754_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1750_; lean_object* v___x_1752_; 
v___x_1750_ = l_Lean_mkAppB(v_a_1744_, v_snd_1718_, v_a_1746_);
if (v_isShared_1749_ == 0)
{
lean_ctor_set(v___x_1748_, 0, v___x_1750_);
v___x_1752_ = v___x_1748_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1750_);
v___x_1752_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
return v___x_1752_;
}
}
}
else
{
lean_dec(v_a_1744_);
lean_dec_ref(v_snd_1718_);
return v___x_1745_;
}
}
else
{
lean_dec_ref(v_snd_1718_);
return v___x_1743_;
}
}
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; 
v_a_1755_ = lean_ctor_get(v___x_1729_, 0);
lean_inc(v_a_1755_);
lean_dec_ref(v___x_1729_);
v___x_1756_ = lean_unsigned_to_nat(2u);
v___x_1757_ = lean_mk_empty_array_with_capacity(v___x_1756_);
lean_inc_ref(v___x_1757_);
v___x_1758_ = lean_array_push(v___x_1757_, v_x_1714_);
v___x_1759_ = lean_array_push(v___x_1758_, v_h_x27_1719_);
v___x_1760_ = l_Lean_Expr_abstractM(v_a_1755_, v___x_1759_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
lean_dec_ref(v___x_1759_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1762_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
lean_inc(v_a_1761_);
lean_dec_ref(v___x_1760_);
lean_inc_ref(v_snd_1718_);
v___x_1762_ = l_Lean_Meta_mkEqRefl(v_snd_1718_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1762_) == 0)
{
lean_object* v_a_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1773_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_1773_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1765_ = v___x_1762_;
v_isShared_1766_ = v_isSharedCheck_1773_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_a_1763_);
lean_dec(v___x_1762_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1773_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1771_; 
v___x_1767_ = lean_array_push(v___x_1757_, v_snd_1718_);
v___x_1768_ = lean_array_push(v___x_1767_, v_a_1763_);
v___x_1769_ = lean_expr_instantiate_rev(v_a_1761_, v___x_1768_);
lean_dec_ref(v___x_1768_);
lean_dec(v_a_1761_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1769_);
v___x_1771_ = v___x_1765_;
goto v_reusejp_1770_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1769_);
v___x_1771_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1770_;
}
v_reusejp_1770_:
{
return v___x_1771_;
}
}
}
else
{
lean_dec(v_a_1761_);
lean_dec_ref(v___x_1757_);
lean_dec_ref(v_snd_1718_);
return v___x_1762_;
}
}
else
{
lean_dec_ref(v___x_1757_);
lean_dec_ref(v_snd_1718_);
return v___x_1760_;
}
}
}
else
{
lean_dec_ref(v_h_x27_1719_);
lean_dec_ref(v_snd_1718_);
lean_dec_ref(v_x_1714_);
return v___x_1729_;
}
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1781_; 
lean_dec_ref(v_h_x27_1719_);
lean_dec_ref(v_snd_1718_);
lean_dec_ref(v_x_1714_);
lean_dec_ref(v_a_1711_);
v_a_1774_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1776_ = v___x_1728_;
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1728_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed(lean_object** _args){
lean_object* v_val_1782_ = _args[0];
lean_object* v_a_1783_ = _args[1];
lean_object* v_zeta_1784_ = _args[2];
lean_object* v___y_1785_ = _args[3];
lean_object* v_x_1786_ = _args[4];
lean_object* v_usedOnly_1787_ = _args[5];
lean_object* v___x_1788_ = _args[6];
lean_object* v___x_1789_ = _args[7];
lean_object* v_snd_1790_ = _args[8];
lean_object* v_h_x27_1791_ = _args[9];
lean_object* v___y_1792_ = _args[10];
lean_object* v___y_1793_ = _args[11];
lean_object* v___y_1794_ = _args[12];
lean_object* v___y_1795_ = _args[13];
lean_object* v___y_1796_ = _args[14];
lean_object* v___y_1797_ = _args[15];
lean_object* v___y_1798_ = _args[16];
lean_object* v___y_1799_ = _args[17];
_start:
{
uint8_t v_zeta_boxed_1800_; uint8_t v___y_99427__boxed_1801_; uint8_t v_usedOnly_boxed_1802_; uint8_t v___x_99428__boxed_1803_; uint8_t v___x_99429__boxed_1804_; lean_object* v_res_1805_; 
v_zeta_boxed_1800_ = lean_unbox(v_zeta_1784_);
v___y_99427__boxed_1801_ = lean_unbox(v___y_1785_);
v_usedOnly_boxed_1802_ = lean_unbox(v_usedOnly_1787_);
v___x_99428__boxed_1803_ = lean_unbox(v___x_1788_);
v___x_99429__boxed_1804_ = lean_unbox(v___x_1789_);
v_res_1805_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__2(v_val_1782_, v_a_1783_, v_zeta_boxed_1800_, v___y_99427__boxed_1801_, v_x_1786_, v_usedOnly_boxed_1802_, v___x_99428__boxed_1803_, v___x_99429__boxed_1804_, v_snd_1790_, v_h_x27_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_);
lean_dec(v___y_1798_);
lean_dec_ref(v___y_1797_);
lean_dec(v___y_1796_);
lean_dec_ref(v___y_1795_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
lean_dec_ref(v___y_1792_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(lean_object* v_eq_x3f_1806_, lean_object* v_a_1807_, uint8_t v_zeta_1808_, lean_object* v_x_1809_, uint8_t v_usedOnly_1810_, uint8_t v___x_1811_, lean_object* v_snd_1812_, uint8_t v___y_1813_, uint8_t v___x_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_){
_start:
{
if (lean_obj_tag(v_eq_x3f_1806_) == 0)
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Lean_Elab_Do_DoElemCont_continueWithUnit(v_a_1807_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_1823_) == 0)
{
if (v_zeta_1808_ == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; uint8_t v___x_1828_; lean_object* v___x_1829_; 
lean_dec_ref(v_snd_1812_);
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref(v___x_1823_);
v___x_1825_ = lean_unsigned_to_nat(1u);
v___x_1826_ = lean_mk_empty_array_with_capacity(v___x_1825_);
v___x_1827_ = lean_array_push(v___x_1826_, v_x_1809_);
v___x_1828_ = 1;
v___x_1829_ = l_Lean_Meta_mkLetFVars(v___x_1827_, v_a_1824_, v_usedOnly_1810_, v___x_1811_, v___x_1828_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec_ref(v___x_1827_);
return v___x_1829_;
}
else
{
lean_object* v_a_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v_a_1830_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1830_);
lean_dec_ref(v___x_1823_);
v___x_1831_ = lean_unsigned_to_nat(1u);
v___x_1832_ = lean_mk_empty_array_with_capacity(v___x_1831_);
v___x_1833_ = lean_array_push(v___x_1832_, v_x_1809_);
v___x_1834_ = l_Lean_Expr_abstractM(v_a_1830_, v___x_1833_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
lean_dec_ref(v___x_1833_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; lean_object* v___x_1837_; uint8_t v_isShared_1838_; uint8_t v_isSharedCheck_1843_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1837_ = v___x_1834_;
v_isShared_1838_ = v_isSharedCheck_1843_;
goto v_resetjp_1836_;
}
else
{
lean_inc(v_a_1835_);
lean_dec(v___x_1834_);
v___x_1837_ = lean_box(0);
v_isShared_1838_ = v_isSharedCheck_1843_;
goto v_resetjp_1836_;
}
v_resetjp_1836_:
{
lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1839_ = lean_expr_instantiate1(v_a_1835_, v_snd_1812_);
lean_dec_ref(v_snd_1812_);
lean_dec(v_a_1835_);
if (v_isShared_1838_ == 0)
{
lean_ctor_set(v___x_1837_, 0, v___x_1839_);
v___x_1841_ = v___x_1837_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
else
{
lean_dec_ref(v_snd_1812_);
return v___x_1834_;
}
}
}
else
{
lean_dec_ref(v_snd_1812_);
lean_dec_ref(v_x_1809_);
return v___x_1823_;
}
}
else
{
lean_object* v_val_1844_; lean_object* v___x_1845_; 
v_val_1844_ = lean_ctor_get(v_eq_x3f_1806_, 0);
lean_inc(v_val_1844_);
lean_dec_ref(v_eq_x3f_1806_);
lean_inc_ref(v_snd_1812_);
lean_inc_ref(v_x_1809_);
v___x_1845_ = l_Lean_Meta_mkEq(v_x_1809_, v_snd_1812_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1847_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
lean_inc(v_a_1846_);
lean_dec_ref(v___x_1845_);
lean_inc_ref(v_x_1809_);
v___x_1847_ = l_Lean_Meta_mkEqRefl(v_x_1809_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
if (lean_obj_tag(v___x_1847_) == 0)
{
lean_object* v_a_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___f_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; lean_object* v___x_1857_; 
v_a_1848_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_a_1848_);
lean_dec_ref(v___x_1847_);
v___x_1849_ = lean_box(v_zeta_1808_);
v___x_1850_ = lean_box(v___y_1813_);
v___x_1851_ = lean_box(v_usedOnly_1810_);
v___x_1852_ = lean_box(v___x_1811_);
v___x_1853_ = lean_box(v___x_1814_);
lean_inc(v_val_1844_);
v___f_1854_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__2___boxed), 18, 9);
lean_closure_set(v___f_1854_, 0, v_val_1844_);
lean_closure_set(v___f_1854_, 1, v_a_1807_);
lean_closure_set(v___f_1854_, 2, v___x_1849_);
lean_closure_set(v___f_1854_, 3, v___x_1850_);
lean_closure_set(v___f_1854_, 4, v_x_1809_);
lean_closure_set(v___f_1854_, 5, v___x_1851_);
lean_closure_set(v___f_1854_, 6, v___x_1852_);
lean_closure_set(v___f_1854_, 7, v___x_1853_);
lean_closure_set(v___f_1854_, 8, v_snd_1812_);
v___x_1855_ = l_Lean_TSyntax_getId(v_val_1844_);
lean_dec(v_val_1844_);
v___x_1856_ = 0;
v___x_1857_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v___x_1855_, v_a_1846_, v_a_1848_, v___f_1854_, v___x_1814_, v___x_1856_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_);
return v___x_1857_;
}
else
{
lean_dec(v_a_1846_);
lean_dec(v_val_1844_);
lean_dec_ref(v_snd_1812_);
lean_dec_ref(v_x_1809_);
lean_dec_ref(v_a_1807_);
return v___x_1847_;
}
}
else
{
lean_dec(v_val_1844_);
lean_dec_ref(v_snd_1812_);
lean_dec_ref(v_x_1809_);
lean_dec_ref(v_a_1807_);
return v___x_1845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed(lean_object** _args){
lean_object* v_eq_x3f_1858_ = _args[0];
lean_object* v_a_1859_ = _args[1];
lean_object* v_zeta_1860_ = _args[2];
lean_object* v_x_1861_ = _args[3];
lean_object* v_usedOnly_1862_ = _args[4];
lean_object* v___x_1863_ = _args[5];
lean_object* v_snd_1864_ = _args[6];
lean_object* v___y_1865_ = _args[7];
lean_object* v___x_1866_ = _args[8];
lean_object* v___y_1867_ = _args[9];
lean_object* v___y_1868_ = _args[10];
lean_object* v___y_1869_ = _args[11];
lean_object* v___y_1870_ = _args[12];
lean_object* v___y_1871_ = _args[13];
lean_object* v___y_1872_ = _args[14];
lean_object* v___y_1873_ = _args[15];
lean_object* v___y_1874_ = _args[16];
_start:
{
uint8_t v_zeta_boxed_1875_; uint8_t v_usedOnly_boxed_1876_; uint8_t v___x_99582__boxed_1877_; uint8_t v___y_99584__boxed_1878_; uint8_t v___x_99585__boxed_1879_; lean_object* v_res_1880_; 
v_zeta_boxed_1875_ = lean_unbox(v_zeta_1860_);
v_usedOnly_boxed_1876_ = lean_unbox(v_usedOnly_1862_);
v___x_99582__boxed_1877_ = lean_unbox(v___x_1863_);
v___y_99584__boxed_1878_ = lean_unbox(v___y_1865_);
v___x_99585__boxed_1879_ = lean_unbox(v___x_1866_);
v_res_1880_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__3(v_eq_x3f_1858_, v_a_1859_, v_zeta_boxed_1875_, v_x_1861_, v_usedOnly_boxed_1876_, v___x_99582__boxed_1877_, v_snd_1864_, v___y_99584__boxed_1878_, v___x_99585__boxed_1879_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_);
lean_dec(v___y_1873_);
lean_dec_ref(v___y_1872_);
lean_dec(v___y_1871_);
lean_dec_ref(v___y_1870_);
lean_dec(v___y_1869_);
lean_dec_ref(v___y_1868_);
lean_dec_ref(v___y_1867_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(lean_object* v_id_1881_, lean_object* v_eq_x3f_1882_, lean_object* v_a_1883_, uint8_t v_zeta_1884_, uint8_t v_usedOnly_1885_, uint8_t v___x_1886_, lean_object* v_snd_1887_, uint8_t v___y_1888_, uint8_t v___x_1889_, lean_object* v_letOrReassign_1890_, lean_object* v_a_1891_, lean_object* v_x_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v___x_1901_; 
lean_inc_ref(v_x_1892_);
v___x_1901_ = l_Lean_Elab_Term_addLocalVarInfo(v_id_1881_, v_x_1892_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___y_1907_; lean_object* v___x_1908_; 
lean_dec_ref(v___x_1901_);
v___x_1902_ = lean_box(v_zeta_1884_);
v___x_1903_ = lean_box(v_usedOnly_1885_);
v___x_1904_ = lean_box(v___x_1886_);
v___x_1905_ = lean_box(v___y_1888_);
v___x_1906_ = lean_box(v___x_1889_);
v___y_1907_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__3___boxed), 17, 9);
lean_closure_set(v___y_1907_, 0, v_eq_x3f_1882_);
lean_closure_set(v___y_1907_, 1, v_a_1883_);
lean_closure_set(v___y_1907_, 2, v___x_1902_);
lean_closure_set(v___y_1907_, 3, v_x_1892_);
lean_closure_set(v___y_1907_, 4, v___x_1903_);
lean_closure_set(v___y_1907_, 5, v___x_1904_);
lean_closure_set(v___y_1907_, 6, v_snd_1887_);
lean_closure_set(v___y_1907_, 7, v___x_1905_);
lean_closure_set(v___y_1907_, 8, v___x_1906_);
v___x_1908_ = l_Lean_Elab_Do_elabWithReassignments(v_letOrReassign_1890_, v_a_1891_, v___y_1907_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
return v___x_1908_;
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec_ref(v_x_1892_);
lean_dec_ref(v_a_1891_);
lean_dec(v_letOrReassign_1890_);
lean_dec_ref(v_snd_1887_);
lean_dec_ref(v_a_1883_);
lean_dec(v_eq_x3f_1882_);
v_a_1909_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1901_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1901_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed(lean_object** _args){
lean_object* v_id_1917_ = _args[0];
lean_object* v_eq_x3f_1918_ = _args[1];
lean_object* v_a_1919_ = _args[2];
lean_object* v_zeta_1920_ = _args[3];
lean_object* v_usedOnly_1921_ = _args[4];
lean_object* v___x_1922_ = _args[5];
lean_object* v_snd_1923_ = _args[6];
lean_object* v___y_1924_ = _args[7];
lean_object* v___x_1925_ = _args[8];
lean_object* v_letOrReassign_1926_ = _args[9];
lean_object* v_a_1927_ = _args[10];
lean_object* v_x_1928_ = _args[11];
lean_object* v___y_1929_ = _args[12];
lean_object* v___y_1930_ = _args[13];
lean_object* v___y_1931_ = _args[14];
lean_object* v___y_1932_ = _args[15];
lean_object* v___y_1933_ = _args[16];
lean_object* v___y_1934_ = _args[17];
lean_object* v___y_1935_ = _args[18];
lean_object* v___y_1936_ = _args[19];
_start:
{
uint8_t v_zeta_boxed_1937_; uint8_t v_usedOnly_boxed_1938_; uint8_t v___x_99695__boxed_1939_; uint8_t v___y_99697__boxed_1940_; uint8_t v___x_99698__boxed_1941_; lean_object* v_res_1942_; 
v_zeta_boxed_1937_ = lean_unbox(v_zeta_1920_);
v_usedOnly_boxed_1938_ = lean_unbox(v_usedOnly_1921_);
v___x_99695__boxed_1939_ = lean_unbox(v___x_1922_);
v___y_99697__boxed_1940_ = lean_unbox(v___y_1924_);
v___x_99698__boxed_1941_ = lean_unbox(v___x_1925_);
v_res_1942_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__4(v_id_1917_, v_eq_x3f_1918_, v_a_1919_, v_zeta_boxed_1937_, v_usedOnly_boxed_1938_, v___x_99695__boxed_1939_, v_snd_1923_, v___y_99697__boxed_1940_, v___x_99698__boxed_1941_, v_letOrReassign_1926_, v_a_1927_, v_x_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_, v___y_1933_, v___y_1934_, v___y_1935_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec(v___y_1933_);
lean_dec_ref(v___y_1932_);
lean_dec(v___y_1931_);
lean_dec_ref(v___y_1930_);
lean_dec_ref(v___y_1929_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(uint8_t v___x_1943_, lean_object* v_____do__lift_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1953_ = l_Lean_SourceInfo_fromRef(v_____do__lift_1944_, v___x_1943_);
v___x_1954_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1953_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed(lean_object* v___x_1955_, lean_object* v_____do__lift_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
uint8_t v___x_99769__boxed_1965_; lean_object* v_res_1966_; 
v___x_99769__boxed_1965_ = lean_unbox(v___x_1955_);
v_res_1966_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__5(v___x_99769__boxed_1965_, v_____do__lift_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec_ref(v___y_1960_);
lean_dec(v___y_1959_);
lean_dec_ref(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v_____do__lift_1956_);
return v_res_1966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(lean_object* v_term_1967_, lean_object* v___x_1968_, uint8_t v___x_1969_, lean_object* v___x_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_){
_start:
{
lean_object* v___x_1979_; 
v___x_1979_ = l_Lean_Elab_Term_elabTermEnsuringType(v_term_1967_, v___x_1968_, v___x_1969_, v___x_1969_, v___x_1970_, v___y_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed(lean_object* v_term_1980_, lean_object* v___x_1981_, lean_object* v___x_1982_, lean_object* v___x_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
uint8_t v___x_99804__boxed_1992_; lean_object* v_res_1993_; 
v___x_99804__boxed_1992_ = lean_unbox(v___x_1982_);
v_res_1993_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__6(v_term_1980_, v___x_1981_, v___x_99804__boxed_1992_, v___x_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v___y_1984_);
return v_res_1993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(lean_object* v_x_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_){
_start:
{
lean_object* v___x_2003_; 
lean_inc_ref(v___y_1995_);
v___x_2003_ = lean_apply_8(v_x_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_, v___y_2001_, lean_box(0));
return v___x_2003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed(lean_object* v_x_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_){
_start:
{
lean_object* v_res_2013_; 
v_res_2013_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0(v_x_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_);
lean_dec_ref(v___y_2005_);
return v_res_2013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___lam__0(lean_object* v_stx_2014_, lean_object* v_output_2015_, lean_object* v_trees_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_){
_start:
{
lean_object* v_lctx_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
v_lctx_2024_ = lean_ctor_get(v___y_2019_, 2);
lean_inc_ref(v_lctx_2024_);
v___x_2025_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2025_, 0, v_lctx_2024_);
lean_ctor_set(v___x_2025_, 1, v_stx_2014_);
lean_ctor_set(v___x_2025_, 2, v_output_2015_);
v___x_2026_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
v___x_2027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2027_, 0, v___x_2026_);
lean_ctor_set(v___x_2027_, 1, v_trees_2016_);
v___x_2028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2028_, 0, v___x_2027_);
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___lam__0___boxed(lean_object* v_stx_2029_, lean_object* v_output_2030_, lean_object* v_trees_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_){
_start:
{
lean_object* v_res_2039_; 
v_res_2039_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___lam__0(v_stx_2029_, v_output_2030_, v_trees_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_);
lean_dec(v___y_2037_);
lean_dec_ref(v___y_2036_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
return v_res_2039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___redArg(lean_object* v___y_2040_){
_start:
{
lean_object* v___x_2042_; lean_object* v_infoState_2043_; lean_object* v_trees_2044_; lean_object* v___x_2045_; lean_object* v_infoState_2046_; lean_object* v_env_2047_; lean_object* v_nextMacroScope_2048_; lean_object* v_ngen_2049_; lean_object* v_auxDeclNGen_2050_; lean_object* v_traceState_2051_; lean_object* v_cache_2052_; lean_object* v_messages_2053_; lean_object* v_snapshotTasks_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2077_; 
v___x_2042_ = lean_st_ref_get(v___y_2040_);
v_infoState_2043_ = lean_ctor_get(v___x_2042_, 7);
lean_inc_ref(v_infoState_2043_);
lean_dec(v___x_2042_);
v_trees_2044_ = lean_ctor_get(v_infoState_2043_, 2);
lean_inc_ref(v_trees_2044_);
lean_dec_ref(v_infoState_2043_);
v___x_2045_ = lean_st_ref_take(v___y_2040_);
v_infoState_2046_ = lean_ctor_get(v___x_2045_, 7);
v_env_2047_ = lean_ctor_get(v___x_2045_, 0);
v_nextMacroScope_2048_ = lean_ctor_get(v___x_2045_, 1);
v_ngen_2049_ = lean_ctor_get(v___x_2045_, 2);
v_auxDeclNGen_2050_ = lean_ctor_get(v___x_2045_, 3);
v_traceState_2051_ = lean_ctor_get(v___x_2045_, 4);
v_cache_2052_ = lean_ctor_get(v___x_2045_, 5);
v_messages_2053_ = lean_ctor_get(v___x_2045_, 6);
v_snapshotTasks_2054_ = lean_ctor_get(v___x_2045_, 8);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2045_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2056_ = v___x_2045_;
v_isShared_2057_ = v_isSharedCheck_2077_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_snapshotTasks_2054_);
lean_inc(v_infoState_2046_);
lean_inc(v_messages_2053_);
lean_inc(v_cache_2052_);
lean_inc(v_traceState_2051_);
lean_inc(v_auxDeclNGen_2050_);
lean_inc(v_ngen_2049_);
lean_inc(v_nextMacroScope_2048_);
lean_inc(v_env_2047_);
lean_dec(v___x_2045_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2077_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
uint8_t v_enabled_2058_; lean_object* v_assignment_2059_; lean_object* v_lazyAssignment_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2075_; 
v_enabled_2058_ = lean_ctor_get_uint8(v_infoState_2046_, sizeof(void*)*3);
v_assignment_2059_ = lean_ctor_get(v_infoState_2046_, 0);
v_lazyAssignment_2060_ = lean_ctor_get(v_infoState_2046_, 1);
v_isSharedCheck_2075_ = !lean_is_exclusive(v_infoState_2046_);
if (v_isSharedCheck_2075_ == 0)
{
lean_object* v_unused_2076_; 
v_unused_2076_ = lean_ctor_get(v_infoState_2046_, 2);
lean_dec(v_unused_2076_);
v___x_2062_ = v_infoState_2046_;
v_isShared_2063_ = v_isSharedCheck_2075_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_lazyAssignment_2060_);
lean_inc(v_assignment_2059_);
lean_dec(v_infoState_2046_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2075_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2064_ = lean_unsigned_to_nat(32u);
v___x_2065_ = lean_mk_empty_array_with_capacity(v___x_2064_);
lean_dec_ref(v___x_2065_);
v___x_2066_ = lean_obj_once(&l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1, &l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1_once, _init_l_Lean_Elab_pushInfoLeaf___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__1___closed__1);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 2, v___x_2066_);
v___x_2068_ = v___x_2062_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_assignment_2059_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v_lazyAssignment_2060_);
lean_ctor_set(v_reuseFailAlloc_2074_, 2, v___x_2066_);
lean_ctor_set_uint8(v_reuseFailAlloc_2074_, sizeof(void*)*3, v_enabled_2058_);
v___x_2068_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2070_; 
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 7, v___x_2068_);
v___x_2070_ = v___x_2056_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_env_2047_);
lean_ctor_set(v_reuseFailAlloc_2073_, 1, v_nextMacroScope_2048_);
lean_ctor_set(v_reuseFailAlloc_2073_, 2, v_ngen_2049_);
lean_ctor_set(v_reuseFailAlloc_2073_, 3, v_auxDeclNGen_2050_);
lean_ctor_set(v_reuseFailAlloc_2073_, 4, v_traceState_2051_);
lean_ctor_set(v_reuseFailAlloc_2073_, 5, v_cache_2052_);
lean_ctor_set(v_reuseFailAlloc_2073_, 6, v_messages_2053_);
lean_ctor_set(v_reuseFailAlloc_2073_, 7, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2073_, 8, v_snapshotTasks_2054_);
v___x_2070_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2071_ = lean_st_ref_set(v___y_2040_, v___x_2070_);
v___x_2072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2072_, 0, v_trees_2044_);
return v___x_2072_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___redArg___boxed(lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___redArg(v___y_2078_);
lean_dec(v___y_2078_);
return v_res_2080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___lam__0(lean_object* v___y_2081_, lean_object* v_mkInfoTree_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v_a_2088_, lean_object* v_a_x3f_2089_){
_start:
{
lean_object* v___x_2091_; lean_object* v_infoState_2092_; lean_object* v_trees_2093_; lean_object* v___x_2094_; 
v___x_2091_ = lean_st_ref_get(v___y_2081_);
v_infoState_2092_ = lean_ctor_get(v___x_2091_, 7);
lean_inc_ref(v_infoState_2092_);
lean_dec(v___x_2091_);
v_trees_2093_ = lean_ctor_get(v_infoState_2092_, 2);
lean_inc_ref(v_trees_2093_);
lean_dec_ref(v_infoState_2092_);
lean_inc(v___y_2081_);
lean_inc_ref(v___y_2087_);
lean_inc(v___y_2086_);
lean_inc_ref(v___y_2085_);
lean_inc(v___y_2084_);
lean_inc_ref(v___y_2083_);
v___x_2094_ = lean_apply_8(v_mkInfoTree_2082_, v_trees_2093_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2081_, lean_box(0));
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2097_; uint8_t v_isShared_2098_; uint8_t v_isSharedCheck_2133_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2097_ = v___x_2094_;
v_isShared_2098_ = v_isSharedCheck_2133_;
goto v_resetjp_2096_;
}
else
{
lean_inc(v_a_2095_);
lean_dec(v___x_2094_);
v___x_2097_ = lean_box(0);
v_isShared_2098_ = v_isSharedCheck_2133_;
goto v_resetjp_2096_;
}
v_resetjp_2096_:
{
lean_object* v___x_2099_; lean_object* v_infoState_2100_; lean_object* v_env_2101_; lean_object* v_nextMacroScope_2102_; lean_object* v_ngen_2103_; lean_object* v_auxDeclNGen_2104_; lean_object* v_traceState_2105_; lean_object* v_cache_2106_; lean_object* v_messages_2107_; lean_object* v_snapshotTasks_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2132_; 
v___x_2099_ = lean_st_ref_take(v___y_2081_);
v_infoState_2100_ = lean_ctor_get(v___x_2099_, 7);
v_env_2101_ = lean_ctor_get(v___x_2099_, 0);
v_nextMacroScope_2102_ = lean_ctor_get(v___x_2099_, 1);
v_ngen_2103_ = lean_ctor_get(v___x_2099_, 2);
v_auxDeclNGen_2104_ = lean_ctor_get(v___x_2099_, 3);
v_traceState_2105_ = lean_ctor_get(v___x_2099_, 4);
v_cache_2106_ = lean_ctor_get(v___x_2099_, 5);
v_messages_2107_ = lean_ctor_get(v___x_2099_, 6);
v_snapshotTasks_2108_ = lean_ctor_get(v___x_2099_, 8);
v_isSharedCheck_2132_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2132_ == 0)
{
v___x_2110_ = v___x_2099_;
v_isShared_2111_ = v_isSharedCheck_2132_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_snapshotTasks_2108_);
lean_inc(v_infoState_2100_);
lean_inc(v_messages_2107_);
lean_inc(v_cache_2106_);
lean_inc(v_traceState_2105_);
lean_inc(v_auxDeclNGen_2104_);
lean_inc(v_ngen_2103_);
lean_inc(v_nextMacroScope_2102_);
lean_inc(v_env_2101_);
lean_dec(v___x_2099_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2132_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
uint8_t v_enabled_2112_; lean_object* v_assignment_2113_; lean_object* v_lazyAssignment_2114_; lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2130_; 
v_enabled_2112_ = lean_ctor_get_uint8(v_infoState_2100_, sizeof(void*)*3);
v_assignment_2113_ = lean_ctor_get(v_infoState_2100_, 0);
v_lazyAssignment_2114_ = lean_ctor_get(v_infoState_2100_, 1);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_infoState_2100_);
if (v_isSharedCheck_2130_ == 0)
{
lean_object* v_unused_2131_; 
v_unused_2131_ = lean_ctor_get(v_infoState_2100_, 2);
lean_dec(v_unused_2131_);
v___x_2116_ = v_infoState_2100_;
v_isShared_2117_ = v_isSharedCheck_2130_;
goto v_resetjp_2115_;
}
else
{
lean_inc(v_lazyAssignment_2114_);
lean_inc(v_assignment_2113_);
lean_dec(v_infoState_2100_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2130_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v___x_2118_; lean_object* v___x_2120_; 
v___x_2118_ = l_Lean_PersistentArray_push___redArg(v_a_2088_, v_a_2095_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 2, v___x_2118_);
v___x_2120_ = v___x_2116_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_assignment_2113_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v_lazyAssignment_2114_);
lean_ctor_set(v_reuseFailAlloc_2129_, 2, v___x_2118_);
lean_ctor_set_uint8(v_reuseFailAlloc_2129_, sizeof(void*)*3, v_enabled_2112_);
v___x_2120_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
lean_object* v___x_2122_; 
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 7, v___x_2120_);
v___x_2122_ = v___x_2110_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_env_2101_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v_nextMacroScope_2102_);
lean_ctor_set(v_reuseFailAlloc_2128_, 2, v_ngen_2103_);
lean_ctor_set(v_reuseFailAlloc_2128_, 3, v_auxDeclNGen_2104_);
lean_ctor_set(v_reuseFailAlloc_2128_, 4, v_traceState_2105_);
lean_ctor_set(v_reuseFailAlloc_2128_, 5, v_cache_2106_);
lean_ctor_set(v_reuseFailAlloc_2128_, 6, v_messages_2107_);
lean_ctor_set(v_reuseFailAlloc_2128_, 7, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2128_, 8, v_snapshotTasks_2108_);
v___x_2122_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2126_; 
v___x_2123_ = lean_st_ref_set(v___y_2081_, v___x_2122_);
v___x_2124_ = lean_box(0);
if (v_isShared_2098_ == 0)
{
lean_ctor_set(v___x_2097_, 0, v___x_2124_);
v___x_2126_ = v___x_2097_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2141_; 
lean_dec_ref(v_a_2088_);
v_a_2134_ = lean_ctor_get(v___x_2094_, 0);
v_isSharedCheck_2141_ = !lean_is_exclusive(v___x_2094_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2136_ = v___x_2094_;
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2094_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2141_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2139_; 
if (v_isShared_2137_ == 0)
{
v___x_2139_ = v___x_2136_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_a_2134_);
v___x_2139_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
return v___x_2139_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___lam__0___boxed(lean_object* v___y_2142_, lean_object* v_mkInfoTree_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v_a_2149_, lean_object* v_a_x3f_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___lam__0(v___y_2142_, v_mkInfoTree_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v_a_2149_, v_a_x3f_2150_);
lean_dec(v_a_x3f_2150_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec(v___y_2142_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg(lean_object* v_x_2153_, lean_object* v_mkInfoTree_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v___x_2162_; lean_object* v_infoState_2163_; uint8_t v_enabled_2164_; 
v___x_2162_ = lean_st_ref_get(v___y_2160_);
v_infoState_2163_ = lean_ctor_get(v___x_2162_, 7);
lean_inc_ref(v_infoState_2163_);
lean_dec(v___x_2162_);
v_enabled_2164_ = lean_ctor_get_uint8(v_infoState_2163_, sizeof(void*)*3);
lean_dec_ref(v_infoState_2163_);
if (v_enabled_2164_ == 0)
{
lean_object* v___x_2165_; 
lean_dec_ref(v_mkInfoTree_2154_);
lean_inc(v___y_2160_);
lean_inc_ref(v___y_2159_);
lean_inc(v___y_2158_);
lean_inc_ref(v___y_2157_);
lean_inc(v___y_2156_);
lean_inc_ref(v___y_2155_);
v___x_2165_ = lean_apply_7(v_x_2153_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, lean_box(0));
return v___x_2165_;
}
else
{
lean_object* v___x_2166_; lean_object* v_a_2167_; lean_object* v_r_2168_; 
v___x_2166_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___redArg(v___y_2160_);
v_a_2167_ = lean_ctor_get(v___x_2166_, 0);
lean_inc(v_a_2167_);
lean_dec_ref(v___x_2166_);
lean_inc(v___y_2160_);
lean_inc_ref(v___y_2159_);
lean_inc(v___y_2158_);
lean_inc_ref(v___y_2157_);
lean_inc(v___y_2156_);
lean_inc_ref(v___y_2155_);
v_r_2168_ = lean_apply_7(v_x_2153_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_, lean_box(0));
if (lean_obj_tag(v_r_2168_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2193_; 
v_a_2169_ = lean_ctor_get(v_r_2168_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v_r_2168_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2171_ = v_r_2168_;
v_isShared_2172_ = v_isSharedCheck_2193_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v_r_2168_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2193_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2174_; 
lean_inc(v_a_2169_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set_tag(v___x_2171_, 1);
v___x_2174_ = v___x_2171_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2169_);
v___x_2174_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
lean_object* v___x_2175_; 
v___x_2175_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___lam__0(v___y_2160_, v_mkInfoTree_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v_a_2167_, v___x_2174_);
lean_dec_ref(v___x_2174_);
if (lean_obj_tag(v___x_2175_) == 0)
{
lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2182_; 
v_isSharedCheck_2182_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2182_ == 0)
{
lean_object* v_unused_2183_; 
v_unused_2183_ = lean_ctor_get(v___x_2175_, 0);
lean_dec(v_unused_2183_);
v___x_2177_ = v___x_2175_;
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
else
{
lean_dec(v___x_2175_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2182_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2180_; 
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v_a_2169_);
v___x_2180_ = v___x_2177_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_a_2169_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
else
{
lean_object* v_a_2184_; lean_object* v___x_2186_; uint8_t v_isShared_2187_; uint8_t v_isSharedCheck_2191_; 
lean_dec(v_a_2169_);
v_a_2184_ = lean_ctor_get(v___x_2175_, 0);
v_isSharedCheck_2191_ = !lean_is_exclusive(v___x_2175_);
if (v_isSharedCheck_2191_ == 0)
{
v___x_2186_ = v___x_2175_;
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
else
{
lean_inc(v_a_2184_);
lean_dec(v___x_2175_);
v___x_2186_ = lean_box(0);
v_isShared_2187_ = v_isSharedCheck_2191_;
goto v_resetjp_2185_;
}
v_resetjp_2185_:
{
lean_object* v___x_2189_; 
if (v_isShared_2187_ == 0)
{
v___x_2189_ = v___x_2186_;
goto v_reusejp_2188_;
}
else
{
lean_object* v_reuseFailAlloc_2190_; 
v_reuseFailAlloc_2190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2190_, 0, v_a_2184_);
v___x_2189_ = v_reuseFailAlloc_2190_;
goto v_reusejp_2188_;
}
v_reusejp_2188_:
{
return v___x_2189_;
}
}
}
}
}
}
else
{
lean_object* v_a_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; 
v_a_2194_ = lean_ctor_get(v_r_2168_, 0);
lean_inc(v_a_2194_);
lean_dec_ref(v_r_2168_);
v___x_2195_ = lean_box(0);
v___x_2196_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___lam__0(v___y_2160_, v_mkInfoTree_2154_, v___y_2155_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_, v_a_2167_, v___x_2195_);
if (lean_obj_tag(v___x_2196_) == 0)
{
lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2203_; 
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2203_ == 0)
{
lean_object* v_unused_2204_; 
v_unused_2204_ = lean_ctor_get(v___x_2196_, 0);
lean_dec(v_unused_2204_);
v___x_2198_ = v___x_2196_;
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
else
{
lean_dec(v___x_2196_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2203_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v___x_2201_; 
if (v_isShared_2199_ == 0)
{
lean_ctor_set_tag(v___x_2198_, 1);
lean_ctor_set(v___x_2198_, 0, v_a_2194_);
v___x_2201_ = v___x_2198_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_a_2194_);
v___x_2201_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
return v___x_2201_;
}
}
}
else
{
lean_object* v_a_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2212_; 
lean_dec(v_a_2194_);
v_a_2205_ = lean_ctor_get(v___x_2196_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2196_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2207_ = v___x_2196_;
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_a_2205_);
lean_dec(v___x_2196_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2212_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2210_; 
if (v_isShared_2208_ == 0)
{
v___x_2210_ = v___x_2207_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_a_2205_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg___boxed(lean_object* v_x_2213_, lean_object* v_mkInfoTree_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg(v_x_2213_, v_mkInfoTree_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg(lean_object* v_stx_2223_, lean_object* v_output_2224_, lean_object* v_x_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
lean_object* v___f_2233_; lean_object* v___x_2234_; 
v___f_2233_ = lean_alloc_closure((void*)(l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2233_, 0, v_stx_2223_);
lean_closure_set(v___f_2233_, 1, v_output_2224_);
v___x_2234_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg(v_x_2225_, v___f_2233_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg___boxed(lean_object* v_stx_2235_, lean_object* v_output_2236_, lean_object* v_x_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg(v_stx_2235_, v_output_2236_, v_x_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(lean_object* v_beforeStx_2246_, lean_object* v_afterStx_2247_, lean_object* v_x_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_){
_start:
{
lean_object* v___f_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; 
lean_inc_ref(v___y_2249_);
v___f_2257_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2257_, 0, v_x_2248_);
lean_closure_set(v___f_2257_, 1, v___y_2249_);
lean_inc(v_afterStx_2247_);
lean_inc(v_beforeStx_2246_);
v___x_2258_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withPushMacroExpansionStack___boxed), 11, 4);
lean_closure_set(v___x_2258_, 0, lean_box(0));
lean_closure_set(v___x_2258_, 1, v_beforeStx_2246_);
lean_closure_set(v___x_2258_, 2, v_afterStx_2247_);
lean_closure_set(v___x_2258_, 3, v___f_2257_);
v___x_2259_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg(v_beforeStx_2246_, v_afterStx_2247_, v___x_2258_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_);
if (lean_obj_tag(v___x_2259_) == 0)
{
return v___x_2259_;
}
else
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
v_a_2260_ = lean_ctor_get(v___x_2259_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v___x_2259_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2259_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_a_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg___boxed(lean_object* v_beforeStx_2268_, lean_object* v_afterStx_2269_, lean_object* v_x_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_beforeStx_2268_, v_afterStx_2269_, v_x_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec(v___y_2273_);
lean_dec_ref(v___y_2272_);
lean_dec_ref(v___y_2271_);
return v_res_2279_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__0(void){
_start:
{
lean_object* v___x_2280_; 
v___x_2280_ = lean_mk_string_unchecked("\?", 1, 1);
return v___x_2280_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1(void){
_start:
{
lean_object* v___x_2281_; 
v___x_2281_ = lean_mk_string_unchecked("m", 1, 1);
return v___x_2281_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__2(void){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; 
v___x_2282_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1);
v___x_2283_ = l_String_toRawSubstring_x27(v___x_2282_);
return v___x_2283_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__3(void){
_start:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__1);
v___x_2285_ = l_Lean_Name_mkStr1(v___x_2284_);
return v___x_2285_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__4(void){
_start:
{
lean_object* v___x_2286_; 
v___x_2286_ = lean_mk_string_unchecked("syntheticHole", 13, 13);
return v___x_2286_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5(void){
_start:
{
lean_object* v___x_2287_; 
v___x_2287_ = lean_mk_string_unchecked("letMVar", 7, 7);
return v___x_2287_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6(void){
_start:
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_mk_string_unchecked("let_mvar%", 9, 9);
return v___x_2288_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7(void){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_mk_string_unchecked(";", 1, 1);
return v___x_2289_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8(void){
_start:
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_mk_string_unchecked("waitIfTypeMVar", 14, 14);
return v___x_2290_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9(void){
_start:
{
lean_object* v___x_2291_; 
v___x_2291_ = lean_mk_string_unchecked("wait_if_type_mvar%", 18, 18);
return v___x_2291_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10(void){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_mk_string_unchecked("match", 5, 5);
return v___x_2292_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11(void){
_start:
{
lean_object* v___x_2293_; 
v___x_2293_ = lean_mk_string_unchecked("matchDiscr", 10, 10);
return v___x_2293_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12(void){
_start:
{
lean_object* v___x_2294_; 
v___x_2294_ = lean_mk_string_unchecked("with", 4, 4);
return v___x_2294_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13(void){
_start:
{
lean_object* v___x_2295_; 
v___x_2295_ = lean_mk_string_unchecked("matchAlts", 9, 9);
return v___x_2295_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14(void){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = lean_mk_string_unchecked("matchAlt", 8, 8);
return v___x_2296_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15(void){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_mk_string_unchecked("|", 1, 1);
return v___x_2297_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16(void){
_start:
{
lean_object* v___x_2298_; 
v___x_2298_ = lean_mk_string_unchecked("=>", 2, 2);
return v___x_2298_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__17(void){
_start:
{
lean_object* v___x_2299_; 
v___x_2299_ = lean_mk_string_unchecked("motive", 6, 6);
return v___x_2299_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__18(void){
_start:
{
lean_object* v___x_2300_; 
v___x_2300_ = lean_mk_string_unchecked("forall", 6, 6);
return v___x_2300_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__19(void){
_start:
{
lean_object* v___x_2301_; 
v___x_2301_ = lean_mk_string_unchecked("∀", 3, 1);
return v___x_2301_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20(void){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = lean_mk_string_unchecked("hole", 4, 4);
return v___x_2302_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21(void){
_start:
{
lean_object* v___x_2303_; 
v___x_2303_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_2303_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__22(void){
_start:
{
lean_object* v___x_2304_; 
v___x_2304_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_2304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7(lean_object* v_rhs_2305_, uint8_t v___x_2306_, lean_object* v_config_2307_, lean_object* v_a_2308_, uint8_t v___x_2309_, lean_object* v___x_2310_, lean_object* v___x_2311_, lean_object* v___x_2312_, lean_object* v___f_2313_, lean_object* v___x_2314_, lean_object* v_body_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_term_2325_; lean_object* v___y_2326_; lean_object* v___y_2327_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; lean_object* v_ref_2332_; lean_object* v___y_2333_; lean_object* v_ref_2339_; lean_object* v_quotContext_2340_; lean_object* v_currMacroScope_2341_; lean_object* v_ref_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v_eq_x3f_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v_ref_2339_ = lean_ctor_get(v___y_2321_, 5);
v_quotContext_2340_ = lean_ctor_get(v___y_2321_, 10);
v_currMacroScope_2341_ = lean_ctor_get(v___y_2321_, 11);
v_ref_2342_ = l_Lean_replaceRef(v_rhs_2305_, v_ref_2339_);
v___x_2343_ = l_Lean_SourceInfo_fromRef(v_ref_2342_, v___x_2306_);
lean_dec(v_ref_2342_);
v___x_2344_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__0, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__0);
lean_inc_n(v___x_2343_, 2);
v___x_2345_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2343_);
lean_ctor_set(v___x_2345_, 1, v___x_2344_);
v___x_2346_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__2, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__2);
v_eq_x3f_2347_ = lean_ctor_get(v_config_2307_, 0);
lean_inc(v_eq_x3f_2347_);
lean_dec_ref(v_config_2307_);
v___x_2348_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__3, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__3);
lean_inc(v_currMacroScope_2341_);
lean_inc(v_quotContext_2340_);
v___x_2349_ = l_Lean_addMacroScope(v_quotContext_2340_, v___x_2348_, v_currMacroScope_2341_);
v___x_2350_ = lean_box(0);
lean_inc(v___x_2349_);
v___x_2351_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2343_);
lean_ctor_set(v___x_2351_, 1, v___x_2346_);
lean_ctor_set(v___x_2351_, 2, v___x_2349_);
lean_ctor_set(v___x_2351_, 3, v___x_2350_);
v___x_2352_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__4, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__4);
lean_inc_ref(v___x_2312_);
lean_inc_ref(v___x_2311_);
lean_inc_ref(v___x_2310_);
v___x_2353_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2352_);
v___x_2354_ = l_Lean_Syntax_node2(v___x_2343_, v___x_2353_, v___x_2345_, v___x_2351_);
if (lean_obj_tag(v_eq_x3f_2347_) == 1)
{
lean_object* v_val_2355_; lean_object* v___x_2356_; 
v_val_2355_ = lean_ctor_get(v_eq_x3f_2347_, 0);
lean_inc(v_val_2355_);
lean_dec_ref(v_eq_x3f_2347_);
lean_inc(v___y_2322_);
lean_inc_ref(v___y_2321_);
lean_inc(v___y_2320_);
lean_inc_ref(v___y_2319_);
lean_inc(v___y_2318_);
lean_inc_ref(v___y_2317_);
lean_inc_ref(v___y_2316_);
lean_inc(v_ref_2339_);
v___x_2356_ = lean_apply_9(v___f_2313_, v_ref_2339_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, lean_box(0));
if (lean_obj_tag(v___x_2356_) == 0)
{
lean_object* v_a_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v_a_2357_ = lean_ctor_get(v___x_2356_, 0);
lean_inc_n(v_a_2357_, 23);
lean_dec_ref(v___x_2356_);
v___x_2358_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5);
lean_inc_ref_n(v___x_2312_, 5);
lean_inc_ref_n(v___x_2311_, 5);
lean_inc_ref_n(v___x_2310_, 5);
v___x_2359_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2358_);
v___x_2360_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6);
v___x_2361_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2361_, 0, v_a_2357_);
lean_ctor_set(v___x_2361_, 1, v___x_2360_);
v___x_2362_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2362_, 0, v_a_2357_);
lean_ctor_set(v___x_2362_, 1, v___x_2344_);
v___x_2363_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2363_, 0, v_a_2357_);
lean_ctor_set(v___x_2363_, 1, v___x_2346_);
lean_ctor_set(v___x_2363_, 2, v___x_2349_);
lean_ctor_set(v___x_2363_, 3, v___x_2350_);
v___x_2364_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_2365_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2365_, 0, v_a_2357_);
lean_ctor_set(v___x_2365_, 1, v___x_2364_);
v___x_2366_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7);
v___x_2367_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2367_, 0, v_a_2357_);
lean_ctor_set(v___x_2367_, 1, v___x_2366_);
v___x_2368_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8);
v___x_2369_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2368_);
v___x_2370_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9);
v___x_2371_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2371_, 0, v_a_2357_);
lean_ctor_set(v___x_2371_, 1, v___x_2370_);
v___x_2372_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10);
v___x_2373_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2372_);
v___x_2374_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2374_, 0, v_a_2357_);
lean_ctor_set(v___x_2374_, 1, v___x_2372_);
v___x_2375_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_2376_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2377_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2377_, 0, v_a_2357_);
lean_ctor_set(v___x_2377_, 1, v___x_2375_);
lean_ctor_set(v___x_2377_, 2, v___x_2376_);
v___x_2378_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11);
v___x_2379_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2378_);
v___x_2380_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36);
v___x_2381_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2381_, 0, v_a_2357_);
lean_ctor_set(v___x_2381_, 1, v___x_2380_);
v___x_2382_ = l_Lean_Syntax_node2(v_a_2357_, v___x_2375_, v_val_2355_, v___x_2381_);
v___x_2383_ = l_Lean_Syntax_node2(v_a_2357_, v___x_2379_, v___x_2382_, v___x_2354_);
v___x_2384_ = l_Lean_Syntax_node1(v_a_2357_, v___x_2375_, v___x_2383_);
v___x_2385_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12);
v___x_2386_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2386_, 0, v_a_2357_);
lean_ctor_set(v___x_2386_, 1, v___x_2385_);
v___x_2387_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13);
v___x_2388_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2387_);
v___x_2389_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14);
v___x_2390_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2389_);
v___x_2391_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15);
v___x_2392_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2392_, 0, v_a_2357_);
lean_ctor_set(v___x_2392_, 1, v___x_2391_);
v___x_2393_ = l_Lean_Syntax_node1(v_a_2357_, v___x_2375_, v___x_2314_);
v___x_2394_ = l_Lean_Syntax_node1(v_a_2357_, v___x_2375_, v___x_2393_);
v___x_2395_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16);
v___x_2396_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2396_, 0, v_a_2357_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
v___x_2397_ = l_Lean_Syntax_node4(v_a_2357_, v___x_2390_, v___x_2392_, v___x_2394_, v___x_2396_, v_body_2315_);
v___x_2398_ = l_Lean_Syntax_node1(v_a_2357_, v___x_2375_, v___x_2397_);
v___x_2399_ = l_Lean_Syntax_node1(v_a_2357_, v___x_2388_, v___x_2398_);
lean_inc_ref(v___x_2377_);
v___x_2400_ = l_Lean_Syntax_node6(v_a_2357_, v___x_2373_, v___x_2374_, v___x_2377_, v___x_2377_, v___x_2384_, v___x_2386_, v___x_2399_);
lean_inc_ref(v___x_2367_);
lean_inc_ref(v___x_2363_);
lean_inc_ref(v___x_2362_);
v___x_2401_ = l_Lean_Syntax_node5(v_a_2357_, v___x_2369_, v___x_2371_, v___x_2362_, v___x_2363_, v___x_2367_, v___x_2400_);
v___x_2402_ = l_Lean_Syntax_node7(v_a_2357_, v___x_2359_, v___x_2361_, v___x_2362_, v___x_2363_, v___x_2365_, v_rhs_2305_, v___x_2367_, v___x_2401_);
lean_inc(v_ref_2339_);
v_term_2325_ = v___x_2402_;
v___y_2326_ = v___y_2316_;
v___y_2327_ = v___y_2317_;
v___y_2328_ = v___y_2318_;
v___y_2329_ = v___y_2319_;
v___y_2330_ = v___y_2320_;
v___y_2331_ = v___y_2321_;
v_ref_2332_ = v_ref_2339_;
v___y_2333_ = v___y_2322_;
goto v___jp_2324_;
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_dec(v_val_2355_);
lean_dec(v___x_2354_);
lean_dec(v___x_2349_);
lean_dec(v_body_2315_);
lean_dec(v___x_2314_);
lean_dec_ref(v___x_2312_);
lean_dec_ref(v___x_2311_);
lean_dec_ref(v___x_2310_);
lean_dec_ref(v_a_2308_);
lean_dec(v_rhs_2305_);
v_a_2403_ = lean_ctor_get(v___x_2356_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2356_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2356_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2356_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
else
{
lean_object* v___x_2411_; 
lean_dec(v_eq_x3f_2347_);
lean_inc_ref(v_a_2308_);
v___x_2411_ = l_Lean_Elab_Term_exprToSyntax(v_a_2308_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___x_2413_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref(v___x_2411_);
lean_inc(v___y_2322_);
lean_inc_ref(v___y_2321_);
lean_inc(v___y_2320_);
lean_inc_ref(v___y_2319_);
lean_inc(v___y_2318_);
lean_inc_ref(v___y_2317_);
lean_inc_ref(v___y_2316_);
lean_inc(v_ref_2339_);
v___x_2413_ = lean_apply_9(v___f_2313_, v_ref_2339_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, lean_box(0));
if (lean_obj_tag(v___x_2413_) == 0)
{
lean_object* v_a_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
lean_inc_n(v_a_2414_, 32);
lean_dec_ref(v___x_2413_);
v___x_2415_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__5);
lean_inc_ref_n(v___x_2312_, 8);
lean_inc_ref_n(v___x_2311_, 8);
lean_inc_ref_n(v___x_2310_, 8);
v___x_2416_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2415_);
v___x_2417_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__6);
v___x_2418_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2418_, 0, v_a_2414_);
lean_ctor_set(v___x_2418_, 1, v___x_2417_);
v___x_2419_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2419_, 0, v_a_2414_);
lean_ctor_set(v___x_2419_, 1, v___x_2344_);
v___x_2420_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_2420_, 0, v_a_2414_);
lean_ctor_set(v___x_2420_, 1, v___x_2346_);
lean_ctor_set(v___x_2420_, 2, v___x_2349_);
lean_ctor_set(v___x_2420_, 3, v___x_2350_);
v___x_2421_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_2422_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2422_, 0, v_a_2414_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7);
v___x_2424_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2424_, 0, v_a_2414_);
lean_ctor_set(v___x_2424_, 1, v___x_2423_);
v___x_2425_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__8);
v___x_2426_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2425_);
v___x_2427_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__9);
v___x_2428_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2428_, 0, v_a_2414_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10);
v___x_2430_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2429_);
v___x_2431_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2431_, 0, v_a_2414_);
lean_ctor_set(v___x_2431_, 1, v___x_2429_);
v___x_2432_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_2433_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_2434_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2434_, 0, v_a_2414_);
lean_ctor_set(v___x_2434_, 1, v___x_2432_);
lean_ctor_set(v___x_2434_, 2, v___x_2433_);
v___x_2435_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__17, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__17_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__17);
v___x_2436_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2435_);
v___x_2437_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19);
v___x_2438_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2438_, 0, v_a_2414_);
lean_ctor_set(v___x_2438_, 1, v___x_2437_);
v___x_2439_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2439_, 0, v_a_2414_);
lean_ctor_set(v___x_2439_, 1, v___x_2435_);
v___x_2440_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__18, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__18_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__18);
v___x_2441_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2440_);
v___x_2442_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__19, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__19_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__19);
v___x_2443_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2443_, 0, v_a_2414_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
v___x_2444_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20);
v___x_2445_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2444_);
v___x_2446_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21);
v___x_2447_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2447_, 0, v_a_2414_);
lean_ctor_set(v___x_2447_, 1, v___x_2446_);
v___x_2448_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2445_, v___x_2447_);
v___x_2449_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2432_, v___x_2448_);
v___x_2450_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__22, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__22_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__22);
v___x_2451_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2451_, 0, v_a_2414_);
lean_ctor_set(v___x_2451_, 1, v___x_2450_);
lean_inc_ref_n(v___x_2434_, 2);
v___x_2452_ = l_Lean_Syntax_node5(v_a_2414_, v___x_2441_, v___x_2443_, v___x_2449_, v___x_2434_, v___x_2451_, v_a_2412_);
v___x_2453_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37);
v___x_2454_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2454_, 0, v_a_2414_);
lean_ctor_set(v___x_2454_, 1, v___x_2453_);
lean_inc_ref(v___x_2422_);
v___x_2455_ = l_Lean_Syntax_node5(v_a_2414_, v___x_2436_, v___x_2438_, v___x_2439_, v___x_2422_, v___x_2452_, v___x_2454_);
v___x_2456_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2432_, v___x_2455_);
v___x_2457_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11);
v___x_2458_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2457_);
v___x_2459_ = l_Lean_Syntax_node2(v_a_2414_, v___x_2458_, v___x_2434_, v___x_2354_);
v___x_2460_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2432_, v___x_2459_);
v___x_2461_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12);
v___x_2462_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2462_, 0, v_a_2414_);
lean_ctor_set(v___x_2462_, 1, v___x_2461_);
v___x_2463_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13);
v___x_2464_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2463_);
v___x_2465_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14);
v___x_2466_ = l_Lean_Name_mkStr4(v___x_2310_, v___x_2311_, v___x_2312_, v___x_2465_);
v___x_2467_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15);
v___x_2468_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2468_, 0, v_a_2414_);
lean_ctor_set(v___x_2468_, 1, v___x_2467_);
v___x_2469_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2432_, v___x_2314_);
v___x_2470_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2432_, v___x_2469_);
v___x_2471_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16);
v___x_2472_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2472_, 0, v_a_2414_);
lean_ctor_set(v___x_2472_, 1, v___x_2471_);
v___x_2473_ = l_Lean_Syntax_node4(v_a_2414_, v___x_2466_, v___x_2468_, v___x_2470_, v___x_2472_, v_body_2315_);
v___x_2474_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2432_, v___x_2473_);
v___x_2475_ = l_Lean_Syntax_node1(v_a_2414_, v___x_2464_, v___x_2474_);
v___x_2476_ = l_Lean_Syntax_node6(v_a_2414_, v___x_2430_, v___x_2431_, v___x_2434_, v___x_2456_, v___x_2460_, v___x_2462_, v___x_2475_);
lean_inc_ref(v___x_2424_);
lean_inc_ref(v___x_2420_);
lean_inc_ref(v___x_2419_);
v___x_2477_ = l_Lean_Syntax_node5(v_a_2414_, v___x_2426_, v___x_2428_, v___x_2419_, v___x_2420_, v___x_2424_, v___x_2476_);
v___x_2478_ = l_Lean_Syntax_node7(v_a_2414_, v___x_2416_, v___x_2418_, v___x_2419_, v___x_2420_, v___x_2422_, v_rhs_2305_, v___x_2424_, v___x_2477_);
lean_inc(v_ref_2339_);
v_term_2325_ = v___x_2478_;
v___y_2326_ = v___y_2316_;
v___y_2327_ = v___y_2317_;
v___y_2328_ = v___y_2318_;
v___y_2329_ = v___y_2319_;
v___y_2330_ = v___y_2320_;
v___y_2331_ = v___y_2321_;
v_ref_2332_ = v_ref_2339_;
v___y_2333_ = v___y_2322_;
goto v___jp_2324_;
}
else
{
lean_object* v_a_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2486_; 
lean_dec(v_a_2412_);
lean_dec(v___x_2354_);
lean_dec(v___x_2349_);
lean_dec(v_body_2315_);
lean_dec(v___x_2314_);
lean_dec_ref(v___x_2312_);
lean_dec_ref(v___x_2311_);
lean_dec_ref(v___x_2310_);
lean_dec_ref(v_a_2308_);
lean_dec(v_rhs_2305_);
v_a_2479_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2486_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2486_ == 0)
{
v___x_2481_ = v___x_2413_;
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_a_2479_);
lean_dec(v___x_2413_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2486_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v___x_2484_; 
if (v_isShared_2482_ == 0)
{
v___x_2484_ = v___x_2481_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2485_; 
v_reuseFailAlloc_2485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2485_, 0, v_a_2479_);
v___x_2484_ = v_reuseFailAlloc_2485_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
return v___x_2484_;
}
}
}
}
else
{
lean_object* v_a_2487_; lean_object* v___x_2489_; uint8_t v_isShared_2490_; uint8_t v_isSharedCheck_2494_; 
lean_dec(v___x_2354_);
lean_dec(v___x_2349_);
lean_dec(v_body_2315_);
lean_dec(v___x_2314_);
lean_dec_ref(v___f_2313_);
lean_dec_ref(v___x_2312_);
lean_dec_ref(v___x_2311_);
lean_dec_ref(v___x_2310_);
lean_dec_ref(v_a_2308_);
lean_dec(v_rhs_2305_);
v_a_2487_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2494_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2494_ == 0)
{
v___x_2489_ = v___x_2411_;
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
else
{
lean_inc(v_a_2487_);
lean_dec(v___x_2411_);
v___x_2489_ = lean_box(0);
v_isShared_2490_ = v_isSharedCheck_2494_;
goto v_resetjp_2488_;
}
v_resetjp_2488_:
{
lean_object* v___x_2492_; 
if (v_isShared_2490_ == 0)
{
v___x_2492_ = v___x_2489_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2493_; 
v_reuseFailAlloc_2493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2493_, 0, v_a_2487_);
v___x_2492_ = v_reuseFailAlloc_2493_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
return v___x_2492_;
}
}
}
}
v___jp_2324_:
{
lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___f_2337_; lean_object* v___x_2338_; 
v___x_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2334_, 0, v_a_2308_);
v___x_2335_ = lean_box(0);
v___x_2336_ = lean_box(v___x_2309_);
lean_inc(v_term_2325_);
v___f_2337_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__6___boxed), 12, 4);
lean_closure_set(v___f_2337_, 0, v_term_2325_);
lean_closure_set(v___f_2337_, 1, v___x_2334_);
lean_closure_set(v___f_2337_, 2, v___x_2336_);
lean_closure_set(v___f_2337_, 3, v___x_2335_);
v___x_2338_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_ref_2332_, v_term_2325_, v___f_2337_, v___y_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2333_);
return v___x_2338_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___boxed(lean_object** _args){
lean_object* v_rhs_2495_ = _args[0];
lean_object* v___x_2496_ = _args[1];
lean_object* v_config_2497_ = _args[2];
lean_object* v_a_2498_ = _args[3];
lean_object* v___x_2499_ = _args[4];
lean_object* v___x_2500_ = _args[5];
lean_object* v___x_2501_ = _args[6];
lean_object* v___x_2502_ = _args[7];
lean_object* v___f_2503_ = _args[8];
lean_object* v___x_2504_ = _args[9];
lean_object* v_body_2505_ = _args[10];
lean_object* v___y_2506_ = _args[11];
lean_object* v___y_2507_ = _args[12];
lean_object* v___y_2508_ = _args[13];
lean_object* v___y_2509_ = _args[14];
lean_object* v___y_2510_ = _args[15];
lean_object* v___y_2511_ = _args[16];
lean_object* v___y_2512_ = _args[17];
lean_object* v___y_2513_ = _args[18];
_start:
{
uint8_t v___x_100321__boxed_2514_; uint8_t v___x_100323__boxed_2515_; lean_object* v_res_2516_; 
v___x_100321__boxed_2514_ = lean_unbox(v___x_2496_);
v___x_100323__boxed_2515_ = lean_unbox(v___x_2499_);
v_res_2516_ = l_Lean_Elab_Do_elabDoLetOrReassign___lam__7(v_rhs_2495_, v___x_100321__boxed_2514_, v_config_2497_, v_a_2498_, v___x_100323__boxed_2515_, v___x_2500_, v___x_2501_, v___x_2502_, v___f_2503_, v___x_2504_, v_body_2505_, v___y_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_);
lean_dec(v___y_2512_);
lean_dec_ref(v___y_2511_);
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
lean_dec_ref(v___y_2506_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___lam__0(lean_object* v___x_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_){
_start:
{
lean_object* v_quotContext_2521_; lean_object* v_currMacroScope_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v_quotContext_2521_ = lean_ctor_get(v___y_2518_, 10);
lean_inc(v_quotContext_2521_);
v_currMacroScope_2522_ = lean_ctor_get(v___y_2518_, 11);
lean_inc(v_currMacroScope_2522_);
lean_dec_ref(v___y_2518_);
v___x_2523_ = l_Lean_addMacroScope(v_quotContext_2521_, v___x_2517_, v_currMacroScope_2522_);
v___x_2524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2523_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___lam__0___boxed(lean_object* v___x_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_){
_start:
{
lean_object* v_res_2529_; 
v_res_2529_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___lam__0(v___x_2525_, v___y_2526_, v___y_2527_);
lean_dec(v___y_2527_);
return v_res_2529_;
}
}
static lean_object* _init_l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_2530_; 
v___x_2530_ = lean_mk_string_unchecked("x", 1, 1);
return v___x_2530_;
}
}
static lean_object* _init_l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__1(void){
_start:
{
lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___x_2531_ = lean_obj_once(&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__0, &l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__0_once, _init_l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__0);
v___x_2532_ = l_Lean_Name_mkStr1(v___x_2531_);
return v___x_2532_;
}
}
static lean_object* _init_l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___f_2534_; 
v___x_2533_ = lean_obj_once(&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__1, &l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__1_once, _init_l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__1);
v___f_2534_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_2534_, 0, v___x_2533_);
return v___f_2534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg(lean_object* v___y_2535_, lean_object* v___y_2536_){
_start:
{
lean_object* v___f_2538_; lean_object* v___x_2539_; 
v___f_2538_ = lean_obj_once(&l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__2, &l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__2_once, _init_l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___closed__2);
v___x_2539_ = l_Lean_Core_withFreshMacroScope___redArg(v___f_2538_, v___y_2535_, v___y_2536_);
return v___x_2539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg___boxed(lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_res_2543_; 
v_res_2543_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg(v___y_2540_, v___y_2541_);
lean_dec(v___y_2541_);
lean_dec_ref(v___y_2540_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(lean_object* v_ref_2544_, uint8_t v_canonical_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_){
_start:
{
lean_object* v___x_2554_; 
v___x_2554_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg(v___y_2551_, v___y_2552_);
if (lean_obj_tag(v___x_2554_) == 0)
{
lean_object* v_a_2555_; lean_object* v___x_2557_; uint8_t v_isShared_2558_; uint8_t v_isSharedCheck_2563_; 
v_a_2555_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2563_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2563_ == 0)
{
v___x_2557_ = v___x_2554_;
v_isShared_2558_ = v_isSharedCheck_2563_;
goto v_resetjp_2556_;
}
else
{
lean_inc(v_a_2555_);
lean_dec(v___x_2554_);
v___x_2557_ = lean_box(0);
v_isShared_2558_ = v_isSharedCheck_2563_;
goto v_resetjp_2556_;
}
v_resetjp_2556_:
{
lean_object* v___x_2559_; lean_object* v___x_2561_; 
v___x_2559_ = l_Lean_mkIdentFrom(v_ref_2544_, v_a_2555_, v_canonical_2545_);
if (v_isShared_2558_ == 0)
{
lean_ctor_set(v___x_2557_, 0, v___x_2559_);
v___x_2561_ = v___x_2557_;
goto v_reusejp_2560_;
}
else
{
lean_object* v_reuseFailAlloc_2562_; 
v_reuseFailAlloc_2562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2562_, 0, v___x_2559_);
v___x_2561_ = v_reuseFailAlloc_2562_;
goto v_reusejp_2560_;
}
v_reusejp_2560_:
{
return v___x_2561_;
}
}
}
else
{
lean_object* v_a_2564_; lean_object* v___x_2566_; uint8_t v_isShared_2567_; uint8_t v_isSharedCheck_2571_; 
v_a_2564_ = lean_ctor_get(v___x_2554_, 0);
v_isSharedCheck_2571_ = !lean_is_exclusive(v___x_2554_);
if (v_isSharedCheck_2571_ == 0)
{
v___x_2566_ = v___x_2554_;
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
else
{
lean_inc(v_a_2564_);
lean_dec(v___x_2554_);
v___x_2566_ = lean_box(0);
v_isShared_2567_ = v_isSharedCheck_2571_;
goto v_resetjp_2565_;
}
v_resetjp_2565_:
{
lean_object* v___x_2569_; 
if (v_isShared_2567_ == 0)
{
v___x_2569_ = v___x_2566_;
goto v_reusejp_2568_;
}
else
{
lean_object* v_reuseFailAlloc_2570_; 
v_reuseFailAlloc_2570_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2570_, 0, v_a_2564_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7___boxed(lean_object* v_ref_2572_, lean_object* v_canonical_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_){
_start:
{
uint8_t v_canonical_boxed_2582_; lean_object* v_res_2583_; 
v_canonical_boxed_2582_ = lean_unbox(v_canonical_2573_);
v_res_2583_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(v_ref_2572_, v_canonical_boxed_2582_, v___y_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
lean_dec(v___y_2578_);
lean_dec_ref(v___y_2577_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
lean_dec_ref(v___y_2574_);
lean_dec(v_ref_2572_);
return v_res_2583_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___redArg(lean_object* v_keys_2584_, lean_object* v_i_2585_, lean_object* v_k_2586_){
_start:
{
lean_object* v___x_2587_; uint8_t v___x_2588_; 
v___x_2587_ = lean_array_get_size(v_keys_2584_);
v___x_2588_ = lean_nat_dec_lt(v_i_2585_, v___x_2587_);
if (v___x_2588_ == 0)
{
lean_dec(v_i_2585_);
return v___x_2588_;
}
else
{
lean_object* v_k_x27_2589_; uint8_t v___x_2590_; 
v_k_x27_2589_ = lean_array_fget_borrowed(v_keys_2584_, v_i_2585_);
v___x_2590_ = l_Lean_instBEqExtraModUse_beq(v_k_2586_, v_k_x27_2589_);
if (v___x_2590_ == 0)
{
lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2591_ = lean_unsigned_to_nat(1u);
v___x_2592_ = lean_nat_add(v_i_2585_, v___x_2591_);
lean_dec(v_i_2585_);
v_i_2585_ = v___x_2592_;
goto _start;
}
else
{
lean_dec(v_i_2585_);
return v___x_2590_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___redArg___boxed(lean_object* v_keys_2594_, lean_object* v_i_2595_, lean_object* v_k_2596_){
_start:
{
uint8_t v_res_2597_; lean_object* v_r_2598_; 
v_res_2597_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___redArg(v_keys_2594_, v_i_2595_, v_k_2596_);
lean_dec_ref(v_k_2596_);
lean_dec_ref(v_keys_2594_);
v_r_2598_ = lean_box(v_res_2597_);
return v_r_2598_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___redArg(lean_object* v_x_2599_, size_t v_x_2600_, lean_object* v_x_2601_){
_start:
{
if (lean_obj_tag(v_x_2599_) == 0)
{
lean_object* v_es_2602_; lean_object* v___x_2603_; size_t v___x_2604_; size_t v___x_2605_; size_t v___x_2606_; lean_object* v_j_2607_; lean_object* v___x_2608_; 
v_es_2602_ = lean_ctor_get(v_x_2599_, 0);
v___x_2603_ = lean_box(2);
v___x_2604_ = ((size_t)5ULL);
v___x_2605_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg___closed__1);
v___x_2606_ = lean_usize_land(v_x_2600_, v___x_2605_);
v_j_2607_ = lean_usize_to_nat(v___x_2606_);
v___x_2608_ = lean_array_get_borrowed(v___x_2603_, v_es_2602_, v_j_2607_);
lean_dec(v_j_2607_);
switch(lean_obj_tag(v___x_2608_))
{
case 0:
{
lean_object* v_key_2609_; uint8_t v___x_2610_; 
v_key_2609_ = lean_ctor_get(v___x_2608_, 0);
v___x_2610_ = l_Lean_instBEqExtraModUse_beq(v_x_2601_, v_key_2609_);
return v___x_2610_;
}
case 1:
{
lean_object* v_node_2611_; size_t v___x_2612_; 
v_node_2611_ = lean_ctor_get(v___x_2608_, 0);
v___x_2612_ = lean_usize_shift_right(v_x_2600_, v___x_2604_);
v_x_2599_ = v_node_2611_;
v_x_2600_ = v___x_2612_;
goto _start;
}
default: 
{
uint8_t v___x_2614_; 
v___x_2614_ = 0;
return v___x_2614_;
}
}
}
else
{
lean_object* v_ks_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; 
v_ks_2615_ = lean_ctor_get(v_x_2599_, 0);
v___x_2616_ = lean_unsigned_to_nat(0u);
v___x_2617_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___redArg(v_ks_2615_, v___x_2616_, v_x_2601_);
return v___x_2617_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___redArg___boxed(lean_object* v_x_2618_, lean_object* v_x_2619_, lean_object* v_x_2620_){
_start:
{
size_t v_x_100845__boxed_2621_; uint8_t v_res_2622_; lean_object* v_r_2623_; 
v_x_100845__boxed_2621_ = lean_unbox_usize(v_x_2619_);
lean_dec(v_x_2619_);
v_res_2622_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___redArg(v_x_2618_, v_x_100845__boxed_2621_, v_x_2620_);
lean_dec_ref(v_x_2620_);
lean_dec_ref(v_x_2618_);
v_r_2623_ = lean_box(v_res_2622_);
return v_r_2623_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___redArg(lean_object* v_x_2624_, lean_object* v_x_2625_){
_start:
{
uint64_t v___x_2626_; size_t v___x_2627_; uint8_t v___x_2628_; 
v___x_2626_ = l_Lean_instHashableExtraModUse_hash(v_x_2625_);
v___x_2627_ = lean_uint64_to_usize(v___x_2626_);
v___x_2628_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___redArg(v_x_2624_, v___x_2627_, v_x_2625_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___redArg___boxed(lean_object* v_x_2629_, lean_object* v_x_2630_){
_start:
{
uint8_t v_res_2631_; lean_object* v_r_2632_; 
v_res_2631_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___redArg(v_x_2629_, v_x_2630_);
lean_dec_ref(v_x_2630_);
lean_dec_ref(v_x_2629_);
v_r_2632_ = lean_box(v_res_2631_);
return v_r_2632_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_2633_; double v___x_2634_; 
v___x_2633_ = lean_unsigned_to_nat(0u);
v___x_2634_ = lean_float_of_nat(v___x_2633_);
return v___x_2634_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2635_ = lean_unsigned_to_nat(0u);
v___x_2636_ = lean_mk_empty_array_with_capacity(v___x_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg(lean_object* v_cls_2637_, lean_object* v_msg_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_ref_2644_; lean_object* v___x_2645_; lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2690_; 
v_ref_2644_ = lean_ctor_get(v___y_2641_, 5);
v___x_2645_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment_spec__0_spec__0(v_msg_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2690_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2690_ == 0)
{
v___x_2648_ = v___x_2645_;
v_isShared_2649_ = v_isSharedCheck_2690_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v___x_2645_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2690_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2650_; lean_object* v_traceState_2651_; lean_object* v_env_2652_; lean_object* v_nextMacroScope_2653_; lean_object* v_ngen_2654_; lean_object* v_auxDeclNGen_2655_; lean_object* v_cache_2656_; lean_object* v_messages_2657_; lean_object* v_infoState_2658_; lean_object* v_snapshotTasks_2659_; lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2689_; 
v___x_2650_ = lean_st_ref_take(v___y_2642_);
v_traceState_2651_ = lean_ctor_get(v___x_2650_, 4);
v_env_2652_ = lean_ctor_get(v___x_2650_, 0);
v_nextMacroScope_2653_ = lean_ctor_get(v___x_2650_, 1);
v_ngen_2654_ = lean_ctor_get(v___x_2650_, 2);
v_auxDeclNGen_2655_ = lean_ctor_get(v___x_2650_, 3);
v_cache_2656_ = lean_ctor_get(v___x_2650_, 5);
v_messages_2657_ = lean_ctor_get(v___x_2650_, 6);
v_infoState_2658_ = lean_ctor_get(v___x_2650_, 7);
v_snapshotTasks_2659_ = lean_ctor_get(v___x_2650_, 8);
v_isSharedCheck_2689_ = !lean_is_exclusive(v___x_2650_);
if (v_isSharedCheck_2689_ == 0)
{
v___x_2661_ = v___x_2650_;
v_isShared_2662_ = v_isSharedCheck_2689_;
goto v_resetjp_2660_;
}
else
{
lean_inc(v_snapshotTasks_2659_);
lean_inc(v_infoState_2658_);
lean_inc(v_messages_2657_);
lean_inc(v_cache_2656_);
lean_inc(v_traceState_2651_);
lean_inc(v_auxDeclNGen_2655_);
lean_inc(v_ngen_2654_);
lean_inc(v_nextMacroScope_2653_);
lean_inc(v_env_2652_);
lean_dec(v___x_2650_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2689_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
uint64_t v_tid_2663_; lean_object* v_traces_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2688_; 
v_tid_2663_ = lean_ctor_get_uint64(v_traceState_2651_, sizeof(void*)*1);
v_traces_2664_ = lean_ctor_get(v_traceState_2651_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v_traceState_2651_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2666_ = v_traceState_2651_;
v_isShared_2667_ = v_isSharedCheck_2688_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_traces_2664_);
lean_dec(v_traceState_2651_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2688_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2668_; double v___x_2669_; uint8_t v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2678_; 
v___x_2668_ = lean_box(0);
v___x_2669_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__0);
v___x_2670_ = 0;
v___x_2671_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22);
v___x_2672_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2672_, 0, v_cls_2637_);
lean_ctor_set(v___x_2672_, 1, v___x_2668_);
lean_ctor_set(v___x_2672_, 2, v___x_2671_);
lean_ctor_set_float(v___x_2672_, sizeof(void*)*3, v___x_2669_);
lean_ctor_set_float(v___x_2672_, sizeof(void*)*3 + 8, v___x_2669_);
lean_ctor_set_uint8(v___x_2672_, sizeof(void*)*3 + 16, v___x_2670_);
v___x_2673_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___closed__1);
v___x_2674_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2674_, 0, v___x_2672_);
lean_ctor_set(v___x_2674_, 1, v_a_2646_);
lean_ctor_set(v___x_2674_, 2, v___x_2673_);
lean_inc(v_ref_2644_);
v___x_2675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2675_, 0, v_ref_2644_);
lean_ctor_set(v___x_2675_, 1, v___x_2674_);
v___x_2676_ = l_Lean_PersistentArray_push___redArg(v_traces_2664_, v___x_2675_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 0, v___x_2676_);
v___x_2678_ = v___x_2666_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v___x_2676_);
lean_ctor_set_uint64(v_reuseFailAlloc_2687_, sizeof(void*)*1, v_tid_2663_);
v___x_2678_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
lean_object* v___x_2680_; 
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 4, v___x_2678_);
v___x_2680_ = v___x_2661_;
goto v_reusejp_2679_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_env_2652_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v_nextMacroScope_2653_);
lean_ctor_set(v_reuseFailAlloc_2686_, 2, v_ngen_2654_);
lean_ctor_set(v_reuseFailAlloc_2686_, 3, v_auxDeclNGen_2655_);
lean_ctor_set(v_reuseFailAlloc_2686_, 4, v___x_2678_);
lean_ctor_set(v_reuseFailAlloc_2686_, 5, v_cache_2656_);
lean_ctor_set(v_reuseFailAlloc_2686_, 6, v_messages_2657_);
lean_ctor_set(v_reuseFailAlloc_2686_, 7, v_infoState_2658_);
lean_ctor_set(v_reuseFailAlloc_2686_, 8, v_snapshotTasks_2659_);
v___x_2680_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2679_;
}
v_reusejp_2679_:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2684_; 
v___x_2681_ = lean_st_ref_set(v___y_2642_, v___x_2680_);
v___x_2682_ = lean_box(0);
if (v_isShared_2649_ == 0)
{
lean_ctor_set(v___x_2648_, 0, v___x_2682_);
v___x_2684_ = v___x_2648_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v___x_2682_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
return v___x_2684_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg___boxed(lean_object* v_cls_2691_, lean_object* v_msg_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
lean_object* v_res_2698_; 
v_res_2698_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg(v_cls_2691_, v_msg_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
return v_res_2698_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__0(void){
_start:
{
lean_object* v___x_2699_; 
v___x_2699_ = lean_alloc_closure((void*)(l_Lean_instBEqExtraModUse_beq___boxed), 2, 0);
return v___x_2699_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__1(void){
_start:
{
lean_object* v___x_2700_; 
v___x_2700_ = lean_alloc_closure((void*)(l_Lean_instHashableExtraModUse_hash___boxed), 1, 0);
return v___x_2700_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__2(void){
_start:
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; 
v___x_2701_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__1);
v___x_2702_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__0);
v___x_2703_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_2702_, v___x_2701_);
return v___x_2703_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__3(void){
_start:
{
lean_object* v___x_2704_; 
v___x_2704_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2704_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4(void){
_start:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2705_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__3);
v___x_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
return v___x_2706_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__5(void){
_start:
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
v___x_2707_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4);
v___x_2708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2707_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
return v___x_2708_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__6(void){
_start:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; 
v___x_2709_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__4);
v___x_2710_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2710_, 0, v___x_2709_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
lean_ctor_set(v___x_2710_, 2, v___x_2709_);
lean_ctor_set(v___x_2710_, 3, v___x_2709_);
lean_ctor_set(v___x_2710_, 4, v___x_2709_);
lean_ctor_set(v___x_2710_, 5, v___x_2709_);
return v___x_2710_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__7(void){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = lean_mk_string_unchecked("extraModUses", 12, 12);
return v___x_2711_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8(void){
_start:
{
lean_object* v___x_2712_; lean_object* v_cls_2713_; 
v___x_2712_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__7);
v_cls_2713_ = l_Lean_Name_mkStr1(v___x_2712_);
return v_cls_2713_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__9(void){
_start:
{
lean_object* v___x_2714_; 
v___x_2714_ = lean_mk_string_unchecked(" extra mod use ", 15, 15);
return v___x_2714_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__10(void){
_start:
{
lean_object* v___x_2715_; lean_object* v___x_2716_; 
v___x_2715_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__9);
v___x_2716_ = l_Lean_stringToMessageData(v___x_2715_);
return v___x_2716_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__11(void){
_start:
{
lean_object* v___x_2717_; 
v___x_2717_ = lean_mk_string_unchecked(" of ", 4, 4);
return v___x_2717_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__12(void){
_start:
{
lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2718_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__11);
v___x_2719_ = l_Lean_stringToMessageData(v___x_2718_);
return v___x_2719_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__13(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__22);
v___x_2721_ = l_Lean_stringToMessageData(v___x_2720_);
return v___x_2721_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__14(void){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_2722_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15(void){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2723_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__14);
v___x_2724_ = l_Lean_Name_mkStr1(v___x_2723_);
return v___x_2724_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__16(void){
_start:
{
lean_object* v_cls_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; 
v_cls_2725_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8);
v___x_2726_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15);
v___x_2727_ = l_Lean_Name_append(v___x_2726_, v_cls_2725_);
return v___x_2727_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__17(void){
_start:
{
lean_object* v___x_2728_; 
v___x_2728_ = lean_mk_string_unchecked("recording ", 10, 10);
return v___x_2728_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__18(void){
_start:
{
lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2729_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__17, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__17_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__17);
v___x_2730_ = l_Lean_stringToMessageData(v___x_2729_);
return v___x_2730_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__19(void){
_start:
{
lean_object* v___x_2731_; 
v___x_2731_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_2731_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__20(void){
_start:
{
lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2732_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__19, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__19_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__19);
v___x_2733_ = l_Lean_stringToMessageData(v___x_2732_);
return v___x_2733_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__21(void){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = lean_mk_string_unchecked("regular", 7, 7);
return v___x_2734_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__22(void){
_start:
{
lean_object* v___x_2735_; 
v___x_2735_ = lean_mk_string_unchecked("meta", 4, 4);
return v___x_2735_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__23(void){
_start:
{
lean_object* v___x_2736_; 
v___x_2736_ = lean_mk_string_unchecked("private", 7, 7);
return v___x_2736_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__24(void){
_start:
{
lean_object* v___x_2737_; 
v___x_2737_ = lean_mk_string_unchecked("public", 6, 6);
return v___x_2737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17(lean_object* v_mod_2738_, uint8_t v_isMeta_2739_, lean_object* v_hint_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v___x_2749_; lean_object* v_env_2750_; uint8_t v_isExporting_2751_; lean_object* v___x_2752_; lean_object* v_env_2753_; lean_object* v___x_2754_; lean_object* v_entry_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___x_2802_; uint8_t v___x_2803_; 
v___x_2749_ = lean_st_ref_get(v___y_2747_);
v_env_2750_ = lean_ctor_get(v___x_2749_, 0);
lean_inc_ref(v_env_2750_);
lean_dec(v___x_2749_);
v_isExporting_2751_ = lean_ctor_get_uint8(v_env_2750_, sizeof(void*)*8);
lean_dec_ref(v_env_2750_);
v___x_2752_ = lean_st_ref_get(v___y_2747_);
v_env_2753_ = lean_ctor_get(v___x_2752_, 0);
lean_inc_ref(v_env_2753_);
lean_dec(v___x_2752_);
v___x_2754_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__2);
lean_inc(v_mod_2738_);
v_entry_2755_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2755_, 0, v_mod_2738_);
lean_ctor_set_uint8(v_entry_2755_, sizeof(void*)*1, v_isExporting_2751_);
lean_ctor_set_uint8(v_entry_2755_, sizeof(void*)*1 + 1, v_isMeta_2739_);
v___x_2756_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2757_ = lean_box(1);
v___x_2758_ = lean_box(0);
v___x_2802_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2754_, v___x_2756_, v_env_2753_, v___x_2757_, v___x_2758_);
v___x_2803_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___redArg(v___x_2802_, v_entry_2755_);
lean_dec(v___x_2802_);
if (v___x_2803_ == 0)
{
lean_object* v_options_2804_; uint8_t v_hasTrace_2805_; 
v_options_2804_ = lean_ctor_get(v___y_2746_, 2);
v_hasTrace_2805_ = lean_ctor_get_uint8(v_options_2804_, sizeof(void*)*1);
if (v_hasTrace_2805_ == 0)
{
lean_dec(v_hint_2740_);
lean_dec(v_mod_2738_);
v___y_2760_ = v___y_2745_;
v___y_2761_ = v___y_2747_;
goto v___jp_2759_;
}
else
{
lean_object* v_inheritedTraceOptions_2806_; lean_object* v_cls_2807_; lean_object* v___y_2809_; lean_object* v___y_2810_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___x_2827_; uint8_t v___x_2828_; 
v_inheritedTraceOptions_2806_ = lean_ctor_get(v___y_2746_, 13);
v_cls_2807_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__8);
v___x_2827_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__16);
v___x_2828_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2806_, v_options_2804_, v___x_2827_);
if (v___x_2828_ == 0)
{
lean_dec(v_hint_2740_);
lean_dec(v_mod_2738_);
v___y_2760_ = v___y_2745_;
v___y_2761_ = v___y_2747_;
goto v___jp_2759_;
}
else
{
lean_object* v___x_2829_; lean_object* v___y_2831_; 
v___x_2829_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__18);
if (v_isExporting_2751_ == 0)
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__23, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__23_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__23);
v___y_2831_ = v___x_2838_;
goto v___jp_2830_;
}
else
{
lean_object* v___x_2839_; 
v___x_2839_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__24, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__24_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__24);
v___y_2831_ = v___x_2839_;
goto v___jp_2830_;
}
v___jp_2830_:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
lean_inc_ref(v___y_2831_);
v___x_2832_ = l_Lean_stringToMessageData(v___y_2831_);
v___x_2833_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2829_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
v___x_2834_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__20, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__20_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__20);
v___x_2835_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2835_, 0, v___x_2833_);
lean_ctor_set(v___x_2835_, 1, v___x_2834_);
if (v_isMeta_2739_ == 0)
{
lean_object* v___x_2836_; 
v___x_2836_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__21, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__21_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__21);
v___y_2814_ = v___x_2835_;
v___y_2815_ = v___x_2836_;
goto v___jp_2813_;
}
else
{
lean_object* v___x_2837_; 
v___x_2837_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__22, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__22_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__22);
v___y_2814_ = v___x_2835_;
v___y_2815_ = v___x_2837_;
goto v___jp_2813_;
}
}
}
v___jp_2808_:
{
lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2811_, 0, v___y_2809_);
lean_ctor_set(v___x_2811_, 1, v___y_2810_);
v___x_2812_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg(v_cls_2807_, v___x_2811_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
if (lean_obj_tag(v___x_2812_) == 0)
{
lean_dec_ref(v___x_2812_);
v___y_2760_ = v___y_2745_;
v___y_2761_ = v___y_2747_;
goto v___jp_2759_;
}
else
{
lean_dec_ref(v_entry_2755_);
return v___x_2812_;
}
}
v___jp_2813_:
{
lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; uint8_t v___x_2822_; 
lean_inc_ref(v___y_2815_);
v___x_2816_ = l_Lean_stringToMessageData(v___y_2815_);
v___x_2817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2817_, 0, v___y_2814_);
lean_ctor_set(v___x_2817_, 1, v___x_2816_);
v___x_2818_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__10);
v___x_2819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2819_, 0, v___x_2817_);
lean_ctor_set(v___x_2819_, 1, v___x_2818_);
v___x_2820_ = l_Lean_MessageData_ofName(v_mod_2738_);
v___x_2821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2819_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
v___x_2822_ = l_Lean_Name_isAnonymous(v_hint_2740_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2823_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__12);
v___x_2824_ = l_Lean_MessageData_ofName(v_hint_2740_);
v___x_2825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2825_, 0, v___x_2823_);
lean_ctor_set(v___x_2825_, 1, v___x_2824_);
v___y_2809_ = v___x_2821_;
v___y_2810_ = v___x_2825_;
goto v___jp_2808_;
}
else
{
lean_object* v___x_2826_; 
lean_dec(v_hint_2740_);
v___x_2826_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__13);
v___y_2809_ = v___x_2821_;
v___y_2810_ = v___x_2826_;
goto v___jp_2808_;
}
}
}
}
else
{
lean_object* v___x_2840_; lean_object* v___x_2841_; 
lean_dec_ref(v_entry_2755_);
lean_dec(v_hint_2740_);
lean_dec(v_mod_2738_);
v___x_2840_ = lean_box(0);
v___x_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2840_);
return v___x_2841_;
}
v___jp_2759_:
{
lean_object* v___x_2762_; lean_object* v_toEnvExtension_2763_; lean_object* v_env_2764_; lean_object* v_nextMacroScope_2765_; lean_object* v_ngen_2766_; lean_object* v_auxDeclNGen_2767_; lean_object* v_traceState_2768_; lean_object* v_messages_2769_; lean_object* v_infoState_2770_; lean_object* v_snapshotTasks_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2800_; 
v___x_2762_ = lean_st_ref_take(v___y_2761_);
v_toEnvExtension_2763_ = lean_ctor_get(v___x_2756_, 0);
v_env_2764_ = lean_ctor_get(v___x_2762_, 0);
v_nextMacroScope_2765_ = lean_ctor_get(v___x_2762_, 1);
v_ngen_2766_ = lean_ctor_get(v___x_2762_, 2);
v_auxDeclNGen_2767_ = lean_ctor_get(v___x_2762_, 3);
v_traceState_2768_ = lean_ctor_get(v___x_2762_, 4);
v_messages_2769_ = lean_ctor_get(v___x_2762_, 6);
v_infoState_2770_ = lean_ctor_get(v___x_2762_, 7);
v_snapshotTasks_2771_ = lean_ctor_get(v___x_2762_, 8);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2762_);
if (v_isSharedCheck_2800_ == 0)
{
lean_object* v_unused_2801_; 
v_unused_2801_ = lean_ctor_get(v___x_2762_, 5);
lean_dec(v_unused_2801_);
v___x_2773_ = v___x_2762_;
v_isShared_2774_ = v_isSharedCheck_2800_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_snapshotTasks_2771_);
lean_inc(v_infoState_2770_);
lean_inc(v_messages_2769_);
lean_inc(v_traceState_2768_);
lean_inc(v_auxDeclNGen_2767_);
lean_inc(v_ngen_2766_);
lean_inc(v_nextMacroScope_2765_);
lean_inc(v_env_2764_);
lean_dec(v___x_2762_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2800_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v_asyncMode_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2779_; 
v_asyncMode_2775_ = lean_ctor_get(v_toEnvExtension_2763_, 2);
v___x_2776_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2756_, v_env_2764_, v_entry_2755_, v_asyncMode_2775_, v___x_2758_);
v___x_2777_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__5);
if (v_isShared_2774_ == 0)
{
lean_ctor_set(v___x_2773_, 5, v___x_2777_);
lean_ctor_set(v___x_2773_, 0, v___x_2776_);
v___x_2779_ = v___x_2773_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2776_);
lean_ctor_set(v_reuseFailAlloc_2799_, 1, v_nextMacroScope_2765_);
lean_ctor_set(v_reuseFailAlloc_2799_, 2, v_ngen_2766_);
lean_ctor_set(v_reuseFailAlloc_2799_, 3, v_auxDeclNGen_2767_);
lean_ctor_set(v_reuseFailAlloc_2799_, 4, v_traceState_2768_);
lean_ctor_set(v_reuseFailAlloc_2799_, 5, v___x_2777_);
lean_ctor_set(v_reuseFailAlloc_2799_, 6, v_messages_2769_);
lean_ctor_set(v_reuseFailAlloc_2799_, 7, v_infoState_2770_);
lean_ctor_set(v_reuseFailAlloc_2799_, 8, v_snapshotTasks_2771_);
v___x_2779_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v_mctx_2783_; lean_object* v_zetaDeltaFVarIds_2784_; lean_object* v_postponed_2785_; lean_object* v_diag_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2797_; 
v___x_2780_ = lean_st_ref_set(v___y_2761_, v___x_2779_);
v___x_2781_ = lean_st_ref_get(v___y_2761_);
lean_dec(v___x_2781_);
v___x_2782_ = lean_st_ref_take(v___y_2760_);
v_mctx_2783_ = lean_ctor_get(v___x_2782_, 0);
v_zetaDeltaFVarIds_2784_ = lean_ctor_get(v___x_2782_, 2);
v_postponed_2785_ = lean_ctor_get(v___x_2782_, 3);
v_diag_2786_ = lean_ctor_get(v___x_2782_, 4);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2797_ == 0)
{
lean_object* v_unused_2798_; 
v_unused_2798_ = lean_ctor_get(v___x_2782_, 1);
lean_dec(v_unused_2798_);
v___x_2788_ = v___x_2782_;
v_isShared_2789_ = v_isSharedCheck_2797_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_diag_2786_);
lean_inc(v_postponed_2785_);
lean_inc(v_zetaDeltaFVarIds_2784_);
lean_inc(v_mctx_2783_);
lean_dec(v___x_2782_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2797_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2790_; lean_object* v___x_2792_; 
v___x_2790_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__6);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 1, v___x_2790_);
v___x_2792_ = v___x_2788_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_mctx_2783_);
lean_ctor_set(v_reuseFailAlloc_2796_, 1, v___x_2790_);
lean_ctor_set(v_reuseFailAlloc_2796_, 2, v_zetaDeltaFVarIds_2784_);
lean_ctor_set(v_reuseFailAlloc_2796_, 3, v_postponed_2785_);
lean_ctor_set(v_reuseFailAlloc_2796_, 4, v_diag_2786_);
v___x_2792_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2793_ = lean_st_ref_set(v___y_2760_, v___x_2792_);
v___x_2794_ = lean_box(0);
v___x_2795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2795_, 0, v___x_2794_);
return v___x_2795_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___boxed(lean_object* v_mod_2842_, lean_object* v_isMeta_2843_, lean_object* v_hint_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
uint8_t v_isMeta_boxed_2853_; lean_object* v_res_2854_; 
v_isMeta_boxed_2853_ = lean_unbox(v_isMeta_2843_);
v_res_2854_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17(v_mod_2842_, v_isMeta_boxed_2853_, v_hint_2844_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec(v___y_2847_);
lean_dec_ref(v___y_2846_);
lean_dec_ref(v___y_2845_);
return v_res_2854_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__18(lean_object* v___x_2855_, lean_object* v_declName_2856_, lean_object* v_as_2857_, size_t v_sz_2858_, size_t v_i_2859_, lean_object* v_b_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
uint8_t v___x_2869_; 
v___x_2869_ = lean_usize_dec_lt(v_i_2859_, v_sz_2858_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; 
lean_dec(v_declName_2856_);
v___x_2870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2870_, 0, v_b_2860_);
return v___x_2870_;
}
else
{
lean_object* v___x_2871_; lean_object* v_modules_2872_; lean_object* v___x_2873_; lean_object* v_a_2874_; lean_object* v___x_2875_; lean_object* v_toImport_2876_; lean_object* v_module_2877_; uint8_t v___x_2878_; lean_object* v___x_2879_; 
v___x_2871_ = l_Lean_Environment_header(v___x_2855_);
v_modules_2872_ = lean_ctor_get(v___x_2871_, 3);
lean_inc_ref(v_modules_2872_);
lean_dec_ref(v___x_2871_);
v___x_2873_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2874_ = lean_array_uget_borrowed(v_as_2857_, v_i_2859_);
v___x_2875_ = lean_array_get(v___x_2873_, v_modules_2872_, v_a_2874_);
lean_dec_ref(v_modules_2872_);
v_toImport_2876_ = lean_ctor_get(v___x_2875_, 0);
lean_inc_ref(v_toImport_2876_);
lean_dec(v___x_2875_);
v_module_2877_ = lean_ctor_get(v_toImport_2876_, 0);
lean_inc(v_module_2877_);
lean_dec_ref(v_toImport_2876_);
v___x_2878_ = 0;
lean_inc(v_declName_2856_);
v___x_2879_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17(v_module_2877_, v___x_2878_, v_declName_2856_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
if (lean_obj_tag(v___x_2879_) == 0)
{
lean_object* v___x_2880_; size_t v___x_2881_; size_t v___x_2882_; 
lean_dec_ref(v___x_2879_);
v___x_2880_ = lean_box(0);
v___x_2881_ = ((size_t)1ULL);
v___x_2882_ = lean_usize_add(v_i_2859_, v___x_2881_);
v_i_2859_ = v___x_2882_;
v_b_2860_ = v___x_2880_;
goto _start;
}
else
{
lean_dec(v_declName_2856_);
return v___x_2879_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__18___boxed(lean_object* v___x_2884_, lean_object* v_declName_2885_, lean_object* v_as_2886_, lean_object* v_sz_2887_, lean_object* v_i_2888_, lean_object* v_b_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_){
_start:
{
size_t v_sz_boxed_2898_; size_t v_i_boxed_2899_; lean_object* v_res_2900_; 
v_sz_boxed_2898_ = lean_unbox_usize(v_sz_2887_);
lean_dec(v_sz_2887_);
v_i_boxed_2899_ = lean_unbox_usize(v_i_2888_);
lean_dec(v_i_2888_);
v_res_2900_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__18(v___x_2884_, v_declName_2885_, v_as_2886_, v_sz_boxed_2898_, v_i_boxed_2899_, v_b_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
lean_dec(v___y_2896_);
lean_dec_ref(v___y_2895_);
lean_dec(v___y_2894_);
lean_dec_ref(v___y_2893_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec_ref(v___y_2890_);
lean_dec_ref(v_as_2886_);
lean_dec_ref(v___x_2884_);
return v_res_2900_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__0(void){
_start:
{
lean_object* v___x_2901_; 
v___x_2901_ = lean_alloc_closure((void*)(l_Lean_Name_beq___boxed), 2, 0);
return v___x_2901_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__1(void){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = lean_alloc_closure((void*)(l_Lean_Name_hash___override___boxed), 1, 0);
return v___x_2902_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__2(void){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2903_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__1, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__1_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__1);
v___x_2904_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__0);
v___x_2905_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_2904_, v___x_2903_);
return v___x_2905_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__3(void){
_start:
{
lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2906_ = lean_unsigned_to_nat(0u);
v___x_2907_ = lean_mk_empty_array_with_capacity(v___x_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13(lean_object* v_declName_2908_, uint8_t v_isMeta_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v___x_2918_; lean_object* v_env_2922_; lean_object* v___y_2924_; lean_object* v___x_2937_; 
v___x_2918_ = lean_st_ref_get(v___y_2916_);
v_env_2922_ = lean_ctor_get(v___x_2918_, 0);
lean_inc_ref(v_env_2922_);
lean_dec(v___x_2918_);
v___x_2937_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2922_, v_declName_2908_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_dec_ref(v_env_2922_);
lean_dec(v_declName_2908_);
goto v___jp_2919_;
}
else
{
lean_object* v_val_2938_; lean_object* v___x_2939_; lean_object* v_modules_2940_; lean_object* v___x_2941_; uint8_t v___x_2942_; 
v_val_2938_ = lean_ctor_get(v___x_2937_, 0);
lean_inc(v_val_2938_);
lean_dec_ref(v___x_2937_);
v___x_2939_ = l_Lean_Environment_header(v_env_2922_);
v_modules_2940_ = lean_ctor_get(v___x_2939_, 3);
lean_inc_ref(v_modules_2940_);
lean_dec_ref(v___x_2939_);
v___x_2941_ = lean_array_get_size(v_modules_2940_);
v___x_2942_ = lean_nat_dec_lt(v_val_2938_, v___x_2941_);
if (v___x_2942_ == 0)
{
lean_dec_ref(v_modules_2940_);
lean_dec(v_val_2938_);
lean_dec_ref(v_env_2922_);
lean_dec(v_declName_2908_);
goto v___jp_2919_;
}
else
{
lean_object* v___x_2943_; lean_object* v_env_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; uint8_t v___y_2948_; 
v___x_2943_ = lean_st_ref_get(v___y_2916_);
v_env_2944_ = lean_ctor_get(v___x_2943_, 0);
lean_inc_ref(v_env_2944_);
lean_dec(v___x_2943_);
v___x_2945_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__2);
v___x_2946_ = lean_array_fget(v_modules_2940_, v_val_2938_);
lean_dec(v_val_2938_);
lean_dec_ref(v_modules_2940_);
if (v_isMeta_2909_ == 0)
{
lean_dec_ref(v_env_2944_);
v___y_2948_ = v_isMeta_2909_;
goto v___jp_2947_;
}
else
{
uint8_t v___x_2959_; 
lean_inc(v_declName_2908_);
v___x_2959_ = l_Lean_isMarkedMeta(v_env_2944_, v_declName_2908_);
if (v___x_2959_ == 0)
{
v___y_2948_ = v_isMeta_2909_;
goto v___jp_2947_;
}
else
{
uint8_t v___x_2960_; 
v___x_2960_ = 0;
v___y_2948_ = v___x_2960_;
goto v___jp_2947_;
}
}
v___jp_2947_:
{
lean_object* v_toImport_2949_; lean_object* v_module_2950_; lean_object* v___x_2951_; 
v_toImport_2949_ = lean_ctor_get(v___x_2946_, 0);
lean_inc_ref(v_toImport_2949_);
lean_dec(v___x_2946_);
v_module_2950_ = lean_ctor_get(v_toImport_2949_, 0);
lean_inc(v_module_2950_);
lean_dec_ref(v_toImport_2949_);
lean_inc(v_declName_2908_);
v___x_2951_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17(v_module_2950_, v___y_2948_, v_declName_2908_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
lean_dec_ref(v___x_2951_);
v___x_2952_ = l_Lean_indirectModUseExt;
v___x_2953_ = lean_box(1);
v___x_2954_ = lean_box(0);
lean_inc_ref(v_env_2922_);
v___x_2955_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2945_, v___x_2952_, v_env_2922_, v___x_2953_, v___x_2954_);
v___x_2956_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Do_LetOrReassign_registerReassignAliasInfo_spec__0___redArg(v___x_2955_, v_declName_2908_);
lean_dec(v___x_2955_);
if (lean_obj_tag(v___x_2956_) == 0)
{
lean_object* v___x_2957_; 
v___x_2957_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__3, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__3_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___closed__3);
v___y_2924_ = v___x_2957_;
goto v___jp_2923_;
}
else
{
lean_object* v_val_2958_; 
v_val_2958_ = lean_ctor_get(v___x_2956_, 0);
lean_inc(v_val_2958_);
lean_dec_ref(v___x_2956_);
v___y_2924_ = v_val_2958_;
goto v___jp_2923_;
}
}
else
{
lean_dec_ref(v_env_2922_);
lean_dec(v_declName_2908_);
return v___x_2951_;
}
}
}
}
v___jp_2919_:
{
lean_object* v___x_2920_; lean_object* v___x_2921_; 
v___x_2920_ = lean_box(0);
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
return v___x_2921_;
}
v___jp_2923_:
{
lean_object* v___x_2925_; size_t v_sz_2926_; size_t v___x_2927_; lean_object* v___x_2928_; 
v___x_2925_ = lean_box(0);
v_sz_2926_ = lean_array_size(v___y_2924_);
v___x_2927_ = ((size_t)0ULL);
v___x_2928_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__18(v_env_2922_, v_declName_2908_, v___y_2924_, v_sz_2926_, v___x_2927_, v___x_2925_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
lean_dec_ref(v___y_2924_);
lean_dec_ref(v_env_2922_);
if (lean_obj_tag(v___x_2928_) == 0)
{
lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2935_ == 0)
{
lean_object* v_unused_2936_; 
v_unused_2936_ = lean_ctor_get(v___x_2928_, 0);
lean_dec(v_unused_2936_);
v___x_2930_ = v___x_2928_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_dec(v___x_2928_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
lean_ctor_set(v___x_2930_, 0, v___x_2925_);
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v___x_2925_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
else
{
return v___x_2928_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13___boxed(lean_object* v_declName_2961_, lean_object* v_isMeta_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_){
_start:
{
uint8_t v_isMeta_boxed_2971_; lean_object* v_res_2972_; 
v_isMeta_boxed_2971_ = lean_unbox(v_isMeta_2962_);
v_res_2972_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13(v_declName_2961_, v_isMeta_boxed_2971_, v___y_2963_, v___y_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
lean_dec(v___y_2969_);
lean_dec_ref(v___y_2968_);
lean_dec(v___y_2967_);
lean_dec_ref(v___y_2966_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
lean_dec_ref(v___y_2963_);
return v_res_2972_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___redArg(lean_object* v_as_x27_2973_, lean_object* v_b_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_){
_start:
{
if (lean_obj_tag(v_as_x27_2973_) == 0)
{
lean_object* v___x_2983_; 
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v_b_2974_);
return v___x_2983_;
}
else
{
lean_object* v_head_2984_; lean_object* v_tail_2985_; uint8_t v___x_2986_; lean_object* v___x_2987_; 
v_head_2984_ = lean_ctor_get(v_as_x27_2973_, 0);
v_tail_2985_ = lean_ctor_get(v_as_x27_2973_, 1);
v___x_2986_ = 1;
lean_inc(v_head_2984_);
v___x_2987_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13(v_head_2984_, v___x_2986_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v___x_2988_; 
lean_dec_ref(v___x_2987_);
v___x_2988_ = lean_box(0);
v_as_x27_2973_ = v_tail_2985_;
v_b_2974_ = v___x_2988_;
goto _start;
}
else
{
return v___x_2987_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___redArg___boxed(lean_object* v_as_x27_2990_, lean_object* v_b_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___redArg(v_as_x27_2990_, v_b_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_, v___y_2998_);
lean_dec(v___y_2998_);
lean_dec_ref(v___y_2997_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec_ref(v___y_2992_);
lean_dec(v_as_x27_2990_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__3(lean_object* v_currNamespace_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_){
_start:
{
lean_object* v___x_3004_; 
v___x_3004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3004_, 0, v_currNamespace_3001_);
lean_ctor_set(v___x_3004_, 1, v___y_3003_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__3___boxed(lean_object* v_currNamespace_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
lean_object* v_res_3008_; 
v_res_3008_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__3(v_currNamespace_3005_, v___y_3006_, v___y_3007_);
lean_dec_ref(v___y_3006_);
return v_res_3008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__2(lean_object* v_env_3009_, lean_object* v_currNamespace_3010_, lean_object* v_openDecls_3011_, lean_object* v_n_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_){
_start:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
v___x_3015_ = l_Lean_ResolveName_resolveNamespace(v_env_3009_, v_currNamespace_3010_, v_openDecls_3011_, v_n_3012_);
v___x_3016_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3016_, 0, v___x_3015_);
lean_ctor_set(v___x_3016_, 1, v___y_3014_);
return v___x_3016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__2___boxed(lean_object* v_env_3017_, lean_object* v_currNamespace_3018_, lean_object* v_openDecls_3019_, lean_object* v_n_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__2(v_env_3017_, v_currNamespace_3018_, v_openDecls_3019_, v_n_3020_, v___y_3021_, v___y_3022_);
lean_dec_ref(v___y_3021_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__15(lean_object* v_as_3024_, lean_object* v___y_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
if (lean_obj_tag(v_as_3024_) == 0)
{
lean_object* v___x_3033_; lean_object* v___x_3034_; 
v___x_3033_ = lean_box(0);
v___x_3034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3033_);
return v___x_3034_;
}
else
{
lean_object* v_options_3035_; uint8_t v_hasTrace_3036_; 
v_options_3035_ = lean_ctor_get(v___y_3030_, 2);
v_hasTrace_3036_ = lean_ctor_get_uint8(v_options_3035_, sizeof(void*)*1);
if (v_hasTrace_3036_ == 0)
{
lean_object* v_tail_3037_; 
v_tail_3037_ = lean_ctor_get(v_as_3024_, 1);
lean_inc(v_tail_3037_);
lean_dec_ref(v_as_3024_);
v_as_3024_ = v_tail_3037_;
goto _start;
}
else
{
lean_object* v_head_3039_; lean_object* v_tail_3040_; lean_object* v_fst_3041_; lean_object* v_snd_3042_; lean_object* v_inheritedTraceOptions_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; uint8_t v___x_3046_; 
v_head_3039_ = lean_ctor_get(v_as_3024_, 0);
lean_inc(v_head_3039_);
v_tail_3040_ = lean_ctor_get(v_as_3024_, 1);
lean_inc(v_tail_3040_);
lean_dec_ref(v_as_3024_);
v_fst_3041_ = lean_ctor_get(v_head_3039_, 0);
lean_inc_n(v_fst_3041_, 2);
v_snd_3042_ = lean_ctor_get(v_head_3039_, 1);
lean_inc(v_snd_3042_);
lean_dec(v_head_3039_);
v_inheritedTraceOptions_3043_ = lean_ctor_get(v___y_3030_, 13);
v___x_3044_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15);
v___x_3045_ = l_Lean_Name_append(v___x_3044_, v_fst_3041_);
v___x_3046_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3043_, v_options_3035_, v___x_3045_);
lean_dec(v___x_3045_);
if (v___x_3046_ == 0)
{
lean_dec(v_snd_3042_);
lean_dec(v_fst_3041_);
v_as_3024_ = v_tail_3040_;
goto _start;
}
else
{
lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3048_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3048_, 0, v_snd_3042_);
v___x_3049_ = l_Lean_MessageData_ofFormat(v___x_3048_);
v___x_3050_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg(v_fst_3041_, v___x_3049_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_);
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_dec_ref(v___x_3050_);
v_as_3024_ = v_tail_3040_;
goto _start;
}
else
{
lean_dec(v_tail_3040_);
return v___x_3050_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__15___boxed(lean_object* v_as_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v_res_3061_; 
v_res_3061_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__15(v_as_3052_, v___y_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
lean_dec_ref(v___y_3053_);
return v_res_3061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__4(lean_object* v_env_3062_, lean_object* v_options_3063_, lean_object* v_currNamespace_3064_, lean_object* v_openDecls_3065_, lean_object* v_n_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_){
_start:
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3069_ = l_Lean_ResolveName_resolveGlobalName(v_env_3062_, v_options_3063_, v_currNamespace_3064_, v_openDecls_3065_, v_n_3066_);
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3069_);
lean_ctor_set(v___x_3070_, 1, v___y_3068_);
return v___x_3070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__4___boxed(lean_object* v_env_3071_, lean_object* v_options_3072_, lean_object* v_currNamespace_3073_, lean_object* v_openDecls_3074_, lean_object* v_n_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_){
_start:
{
lean_object* v_res_3078_; 
v_res_3078_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__4(v_env_3071_, v_options_3072_, v_currNamespace_3073_, v_openDecls_3074_, v_n_3075_, v___y_3076_, v___y_3077_);
lean_dec_ref(v___y_3076_);
lean_dec_ref(v_options_3072_);
return v_res_3078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__1(lean_object* v_env_3079_, lean_object* v_declName_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_){
_start:
{
uint8_t v___x_3083_; lean_object* v_env_3084_; lean_object* v___x_3085_; uint8_t v___x_3086_; uint8_t v___x_3087_; 
v___x_3083_ = 0;
v_env_3084_ = l_Lean_Environment_setExporting(v_env_3079_, v___x_3083_);
lean_inc(v_declName_3080_);
v___x_3085_ = l_Lean_mkPrivateName(v_env_3084_, v_declName_3080_);
v___x_3086_ = 1;
lean_inc_ref(v_env_3084_);
v___x_3087_ = l_Lean_Environment_contains(v_env_3084_, v___x_3085_, v___x_3086_);
if (v___x_3087_ == 0)
{
lean_object* v___x_3088_; uint8_t v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; 
v___x_3088_ = l_Lean_privateToUserName(v_declName_3080_);
v___x_3089_ = l_Lean_Environment_contains(v_env_3084_, v___x_3088_, v___x_3086_);
v___x_3090_ = lean_box(v___x_3089_);
v___x_3091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3090_);
lean_ctor_set(v___x_3091_, 1, v___y_3082_);
return v___x_3091_;
}
else
{
lean_object* v___x_3092_; lean_object* v___x_3093_; 
lean_dec_ref(v_env_3084_);
lean_dec(v_declName_3080_);
v___x_3092_ = lean_box(v___x_3087_);
v___x_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3092_);
lean_ctor_set(v___x_3093_, 1, v___y_3082_);
return v___x_3093_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__1___boxed(lean_object* v_env_3094_, lean_object* v_declName_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_){
_start:
{
lean_object* v_res_3098_; 
v_res_3098_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__1(v_env_3094_, v_declName_3095_, v___y_3096_, v___y_3097_);
lean_dec_ref(v___y_3096_);
return v_res_3098_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg(lean_object* v_ref_3099_, lean_object* v_msg_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_){
_start:
{
lean_object* v_fileName_3106_; lean_object* v_fileMap_3107_; lean_object* v_options_3108_; lean_object* v_currRecDepth_3109_; lean_object* v_maxRecDepth_3110_; lean_object* v_ref_3111_; lean_object* v_currNamespace_3112_; lean_object* v_openDecls_3113_; lean_object* v_initHeartbeats_3114_; lean_object* v_maxHeartbeats_3115_; lean_object* v_quotContext_3116_; lean_object* v_currMacroScope_3117_; uint8_t v_diag_3118_; lean_object* v_cancelTk_x3f_3119_; uint8_t v_suppressElabErrors_3120_; lean_object* v_inheritedTraceOptions_3121_; lean_object* v_ref_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; 
v_fileName_3106_ = lean_ctor_get(v___y_3103_, 0);
v_fileMap_3107_ = lean_ctor_get(v___y_3103_, 1);
v_options_3108_ = lean_ctor_get(v___y_3103_, 2);
v_currRecDepth_3109_ = lean_ctor_get(v___y_3103_, 3);
v_maxRecDepth_3110_ = lean_ctor_get(v___y_3103_, 4);
v_ref_3111_ = lean_ctor_get(v___y_3103_, 5);
v_currNamespace_3112_ = lean_ctor_get(v___y_3103_, 6);
v_openDecls_3113_ = lean_ctor_get(v___y_3103_, 7);
v_initHeartbeats_3114_ = lean_ctor_get(v___y_3103_, 8);
v_maxHeartbeats_3115_ = lean_ctor_get(v___y_3103_, 9);
v_quotContext_3116_ = lean_ctor_get(v___y_3103_, 10);
v_currMacroScope_3117_ = lean_ctor_get(v___y_3103_, 11);
v_diag_3118_ = lean_ctor_get_uint8(v___y_3103_, sizeof(void*)*14);
v_cancelTk_x3f_3119_ = lean_ctor_get(v___y_3103_, 12);
v_suppressElabErrors_3120_ = lean_ctor_get_uint8(v___y_3103_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3121_ = lean_ctor_get(v___y_3103_, 13);
v_ref_3122_ = l_Lean_replaceRef(v_ref_3099_, v_ref_3111_);
lean_inc_ref(v_inheritedTraceOptions_3121_);
lean_inc(v_cancelTk_x3f_3119_);
lean_inc(v_currMacroScope_3117_);
lean_inc(v_quotContext_3116_);
lean_inc(v_maxHeartbeats_3115_);
lean_inc(v_initHeartbeats_3114_);
lean_inc(v_openDecls_3113_);
lean_inc(v_currNamespace_3112_);
lean_inc(v_maxRecDepth_3110_);
lean_inc(v_currRecDepth_3109_);
lean_inc_ref(v_options_3108_);
lean_inc_ref(v_fileMap_3107_);
lean_inc_ref(v_fileName_3106_);
v___x_3123_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3123_, 0, v_fileName_3106_);
lean_ctor_set(v___x_3123_, 1, v_fileMap_3107_);
lean_ctor_set(v___x_3123_, 2, v_options_3108_);
lean_ctor_set(v___x_3123_, 3, v_currRecDepth_3109_);
lean_ctor_set(v___x_3123_, 4, v_maxRecDepth_3110_);
lean_ctor_set(v___x_3123_, 5, v_ref_3122_);
lean_ctor_set(v___x_3123_, 6, v_currNamespace_3112_);
lean_ctor_set(v___x_3123_, 7, v_openDecls_3113_);
lean_ctor_set(v___x_3123_, 8, v_initHeartbeats_3114_);
lean_ctor_set(v___x_3123_, 9, v_maxHeartbeats_3115_);
lean_ctor_set(v___x_3123_, 10, v_quotContext_3116_);
lean_ctor_set(v___x_3123_, 11, v_currMacroScope_3117_);
lean_ctor_set(v___x_3123_, 12, v_cancelTk_x3f_3119_);
lean_ctor_set(v___x_3123_, 13, v_inheritedTraceOptions_3121_);
lean_ctor_set_uint8(v___x_3123_, sizeof(void*)*14, v_diag_3118_);
lean_ctor_set_uint8(v___x_3123_, sizeof(void*)*14 + 1, v_suppressElabErrors_3120_);
v___x_3124_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(v_msg_3100_, v___y_3101_, v___y_3102_, v___x_3123_, v___y_3104_);
lean_dec_ref(v___x_3123_);
return v___x_3124_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg___boxed(lean_object* v_ref_3125_, lean_object* v_msg_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_){
_start:
{
lean_object* v_res_3132_; 
v_res_3132_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg(v_ref_3125_, v_msg_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec(v_ref_3125_);
return v_res_3132_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__0(void){
_start:
{
lean_object* v___x_3133_; 
v___x_3133_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_3133_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__1(void){
_start:
{
lean_object* v___x_3134_; 
v___x_3134_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_3134_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__2(void){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; 
v___x_3135_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__1);
v___x_3136_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__0);
v___x_3137_ = l_Lean_Name_mkStr2(v___x_3136_, v___x_3135_);
return v___x_3137_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__3(void){
_start:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3138_ = l_Lean_maxRecDepthErrorMessage;
v___x_3139_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3139_, 0, v___x_3138_);
return v___x_3139_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__4(void){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__3);
v___x_3141_ = l_Lean_MessageData_ofFormat(v___x_3140_);
return v___x_3141_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__5(void){
_start:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; 
v___x_3142_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__4);
v___x_3143_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__2);
v___x_3144_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3143_);
lean_ctor_set(v___x_3144_, 1, v___x_3142_);
return v___x_3144_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg(lean_object* v_ref_3145_){
_start:
{
lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
v___x_3147_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___closed__5);
v___x_3148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3148_, 0, v_ref_3145_);
lean_ctor_set(v___x_3148_, 1, v___x_3147_);
v___x_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3148_);
return v___x_3149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg___boxed(lean_object* v_ref_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg(v_ref_3150_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg(lean_object* v_x_3153_, lean_object* v___y_3154_){
_start:
{
if (lean_obj_tag(v_x_3153_) == 0)
{
lean_object* v_a_3155_; lean_object* v___x_3156_; 
v_a_3155_ = lean_ctor_get(v_x_3153_, 0);
lean_inc(v_a_3155_);
v___x_3156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3156_, 0, v_a_3155_);
lean_ctor_set(v___x_3156_, 1, v___y_3154_);
return v___x_3156_;
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3158_; 
v_a_3157_ = lean_ctor_get(v_x_3153_, 0);
lean_inc(v_a_3157_);
v___x_3158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3158_, 0, v_a_3157_);
lean_ctor_set(v___x_3158_, 1, v___y_3154_);
return v___x_3158_;
}
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg___boxed(lean_object* v_x_3159_, lean_object* v___y_3160_){
_start:
{
lean_object* v_res_3161_; 
v_res_3161_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg(v_x_3159_, v___y_3160_);
lean_dec_ref(v_x_3159_);
return v_res_3161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__0(lean_object* v_env_3162_, lean_object* v_stx_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_){
_start:
{
lean_object* v___x_3166_; 
v___x_3166_ = l_Lean_Elab_expandMacroImpl_x3f(v_env_3162_, v_stx_3163_, v___y_3164_, v___y_3165_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
if (lean_obj_tag(v_a_3167_) == 0)
{
lean_object* v_a_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3176_; 
v_a_3168_ = lean_ctor_get(v___x_3166_, 1);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3176_ == 0)
{
lean_object* v_unused_3177_; 
v_unused_3177_ = lean_ctor_get(v___x_3166_, 0);
lean_dec(v_unused_3177_);
v___x_3170_ = v___x_3166_;
v_isShared_3171_ = v_isSharedCheck_3176_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_a_3168_);
lean_dec(v___x_3166_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3176_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___x_3172_; lean_object* v___x_3174_; 
v___x_3172_ = lean_box(0);
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 0, v___x_3172_);
v___x_3174_ = v___x_3170_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v___x_3172_);
lean_ctor_set(v_reuseFailAlloc_3175_, 1, v_a_3168_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
else
{
lean_object* v_val_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3206_; 
v_val_3178_ = lean_ctor_get(v_a_3167_, 0);
v_isSharedCheck_3206_ = !lean_is_exclusive(v_a_3167_);
if (v_isSharedCheck_3206_ == 0)
{
v___x_3180_ = v_a_3167_;
v_isShared_3181_ = v_isSharedCheck_3206_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_val_3178_);
lean_dec(v_a_3167_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3206_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v_snd_3182_; 
v_snd_3182_ = lean_ctor_get(v_val_3178_, 1);
lean_inc(v_snd_3182_);
lean_dec(v_val_3178_);
if (lean_obj_tag(v_snd_3182_) == 0)
{
lean_object* v_a_3183_; lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3192_; 
lean_del_object(v___x_3180_);
v_a_3183_ = lean_ctor_get(v___x_3166_, 1);
lean_inc(v_a_3183_);
lean_dec_ref(v___x_3166_);
v_a_3184_ = lean_ctor_get(v_snd_3182_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v_snd_3182_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3186_ = v_snd_3182_;
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v_snd_3182_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___x_3189_; 
if (v_isShared_3187_ == 0)
{
v___x_3189_ = v___x_3186_;
goto v_reusejp_3188_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_a_3184_);
v___x_3189_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3188_;
}
v_reusejp_3188_:
{
lean_object* v___x_3190_; 
v___x_3190_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg(v___x_3189_, v_a_3183_);
lean_dec_ref(v___x_3189_);
return v___x_3190_;
}
}
}
else
{
lean_object* v_a_3193_; lean_object* v_a_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3205_; 
v_a_3193_ = lean_ctor_get(v___x_3166_, 1);
lean_inc(v_a_3193_);
lean_dec_ref(v___x_3166_);
v_a_3194_ = lean_ctor_get(v_snd_3182_, 0);
v_isSharedCheck_3205_ = !lean_is_exclusive(v_snd_3182_);
if (v_isSharedCheck_3205_ == 0)
{
v___x_3196_ = v_snd_3182_;
v_isShared_3197_ = v_isSharedCheck_3205_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_a_3194_);
lean_dec(v_snd_3182_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3205_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v___x_3199_; 
if (v_isShared_3181_ == 0)
{
lean_ctor_set(v___x_3180_, 0, v_a_3194_);
v___x_3199_ = v___x_3180_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3204_; 
v_reuseFailAlloc_3204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3204_, 0, v_a_3194_);
v___x_3199_ = v_reuseFailAlloc_3204_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
lean_object* v___x_3201_; 
if (v_isShared_3197_ == 0)
{
lean_ctor_set(v___x_3196_, 0, v___x_3199_);
v___x_3201_ = v___x_3196_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3203_; 
v_reuseFailAlloc_3203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3203_, 0, v___x_3199_);
v___x_3201_ = v_reuseFailAlloc_3203_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
lean_object* v___x_3202_; 
v___x_3202_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg(v___x_3201_, v_a_3193_);
lean_dec_ref(v___x_3201_);
return v___x_3202_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3207_; lean_object* v_a_3208_; lean_object* v___x_3210_; uint8_t v_isShared_3211_; uint8_t v_isSharedCheck_3215_; 
v_a_3207_ = lean_ctor_get(v___x_3166_, 0);
v_a_3208_ = lean_ctor_get(v___x_3166_, 1);
v_isSharedCheck_3215_ = !lean_is_exclusive(v___x_3166_);
if (v_isSharedCheck_3215_ == 0)
{
v___x_3210_ = v___x_3166_;
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
else
{
lean_inc(v_a_3208_);
lean_inc(v_a_3207_);
lean_dec(v___x_3166_);
v___x_3210_ = lean_box(0);
v_isShared_3211_ = v_isSharedCheck_3215_;
goto v_resetjp_3209_;
}
v_resetjp_3209_:
{
lean_object* v___x_3213_; 
if (v_isShared_3211_ == 0)
{
v___x_3213_ = v___x_3210_;
goto v_reusejp_3212_;
}
else
{
lean_object* v_reuseFailAlloc_3214_; 
v_reuseFailAlloc_3214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3214_, 0, v_a_3207_);
lean_ctor_set(v_reuseFailAlloc_3214_, 1, v_a_3208_);
v___x_3213_ = v_reuseFailAlloc_3214_;
goto v_reusejp_3212_;
}
v_reusejp_3212_:
{
return v___x_3213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__0___boxed(lean_object* v_env_3216_, lean_object* v_stx_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__0(v_env_3216_, v_stx_3217_, v___y_3218_, v___y_3219_);
lean_dec_ref(v___y_3218_);
return v_res_3220_;
}
}
static lean_object* _init_l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_3221_; 
v___x_3221_ = lean_mk_string_unchecked("maximum recursion depth has been reached\nuse `set_option maxRecDepth <num>` to increase limit\nuse `set_option diagnostics true` to get diagnostic information", 157, 157);
return v___x_3221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg(lean_object* v_x_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_){
_start:
{
lean_object* v___x_3231_; lean_object* v_env_3232_; lean_object* v_options_3233_; lean_object* v_currRecDepth_3234_; lean_object* v_maxRecDepth_3235_; lean_object* v_ref_3236_; lean_object* v_currNamespace_3237_; lean_object* v_openDecls_3238_; lean_object* v_quotContext_3239_; lean_object* v_currMacroScope_3240_; lean_object* v___x_3241_; lean_object* v_nextMacroScope_3242_; lean_object* v___f_3243_; lean_object* v___f_3244_; lean_object* v___f_3245_; lean_object* v___f_3246_; lean_object* v___f_3247_; lean_object* v_methods_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3231_ = lean_st_ref_get(v___y_3229_);
v_env_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc_ref_n(v_env_3232_, 4);
lean_dec(v___x_3231_);
v_options_3233_ = lean_ctor_get(v___y_3228_, 2);
v_currRecDepth_3234_ = lean_ctor_get(v___y_3228_, 3);
v_maxRecDepth_3235_ = lean_ctor_get(v___y_3228_, 4);
v_ref_3236_ = lean_ctor_get(v___y_3228_, 5);
v_currNamespace_3237_ = lean_ctor_get(v___y_3228_, 6);
v_openDecls_3238_ = lean_ctor_get(v___y_3228_, 7);
v_quotContext_3239_ = lean_ctor_get(v___y_3228_, 10);
v_currMacroScope_3240_ = lean_ctor_get(v___y_3228_, 11);
v___x_3241_ = lean_st_ref_get(v___y_3229_);
v_nextMacroScope_3242_ = lean_ctor_get(v___x_3241_, 1);
lean_inc(v_nextMacroScope_3242_);
lean_dec(v___x_3241_);
v___f_3243_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_3243_, 0, v_env_3232_);
v___f_3244_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__1___boxed), 4, 1);
lean_closure_set(v___f_3244_, 0, v_env_3232_);
lean_inc_n(v_openDecls_3238_, 2);
lean_inc_n(v_currNamespace_3237_, 3);
v___f_3245_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_3245_, 0, v_env_3232_);
lean_closure_set(v___f_3245_, 1, v_currNamespace_3237_);
lean_closure_set(v___f_3245_, 2, v_openDecls_3238_);
v___f_3246_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__3___boxed), 3, 1);
lean_closure_set(v___f_3246_, 0, v_currNamespace_3237_);
lean_inc_ref(v_options_3233_);
v___f_3247_ = lean_alloc_closure((void*)(l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___lam__4___boxed), 7, 4);
lean_closure_set(v___f_3247_, 0, v_env_3232_);
lean_closure_set(v___f_3247_, 1, v_options_3233_);
lean_closure_set(v___f_3247_, 2, v_currNamespace_3237_);
lean_closure_set(v___f_3247_, 3, v_openDecls_3238_);
v_methods_3248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_methods_3248_, 0, v___f_3243_);
lean_ctor_set(v_methods_3248_, 1, v___f_3246_);
lean_ctor_set(v_methods_3248_, 2, v___f_3244_);
lean_ctor_set(v_methods_3248_, 3, v___f_3245_);
lean_ctor_set(v_methods_3248_, 4, v___f_3247_);
lean_inc(v_ref_3236_);
lean_inc(v_maxRecDepth_3235_);
lean_inc(v_currRecDepth_3234_);
lean_inc(v_currMacroScope_3240_);
lean_inc(v_quotContext_3239_);
v___x_3249_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3249_, 0, v_methods_3248_);
lean_ctor_set(v___x_3249_, 1, v_quotContext_3239_);
lean_ctor_set(v___x_3249_, 2, v_currMacroScope_3240_);
lean_ctor_set(v___x_3249_, 3, v_currRecDepth_3234_);
lean_ctor_set(v___x_3249_, 4, v_maxRecDepth_3235_);
lean_ctor_set(v___x_3249_, 5, v_ref_3236_);
v___x_3250_ = lean_box(0);
v___x_3251_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3251_, 0, v_nextMacroScope_3242_);
lean_ctor_set(v___x_3251_, 1, v___x_3250_);
lean_ctor_set(v___x_3251_, 2, v___x_3250_);
v___x_3252_ = lean_apply_2(v_x_3222_, v___x_3249_, v___x_3251_);
if (lean_obj_tag(v___x_3252_) == 0)
{
lean_object* v_a_3253_; lean_object* v_a_3254_; lean_object* v_macroScope_3255_; lean_object* v_traceMsgs_3256_; lean_object* v_expandedMacroDecls_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v_a_3253_ = lean_ctor_get(v___x_3252_, 1);
lean_inc(v_a_3253_);
v_a_3254_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_a_3254_);
lean_dec_ref(v___x_3252_);
v_macroScope_3255_ = lean_ctor_get(v_a_3253_, 0);
lean_inc(v_macroScope_3255_);
v_traceMsgs_3256_ = lean_ctor_get(v_a_3253_, 1);
lean_inc(v_traceMsgs_3256_);
v_expandedMacroDecls_3257_ = lean_ctor_get(v_a_3253_, 2);
lean_inc(v_expandedMacroDecls_3257_);
lean_dec(v_a_3253_);
v___x_3258_ = lean_box(0);
v___x_3259_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___redArg(v_expandedMacroDecls_3257_, v___x_3258_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec(v_expandedMacroDecls_3257_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_object* v___x_3260_; lean_object* v_env_3261_; lean_object* v_ngen_3262_; lean_object* v_auxDeclNGen_3263_; lean_object* v_traceState_3264_; lean_object* v_cache_3265_; lean_object* v_messages_3266_; lean_object* v_infoState_3267_; lean_object* v_snapshotTasks_3268_; lean_object* v___x_3270_; uint8_t v_isShared_3271_; uint8_t v_isSharedCheck_3294_; 
lean_dec_ref(v___x_3259_);
v___x_3260_ = lean_st_ref_take(v___y_3229_);
v_env_3261_ = lean_ctor_get(v___x_3260_, 0);
v_ngen_3262_ = lean_ctor_get(v___x_3260_, 2);
v_auxDeclNGen_3263_ = lean_ctor_get(v___x_3260_, 3);
v_traceState_3264_ = lean_ctor_get(v___x_3260_, 4);
v_cache_3265_ = lean_ctor_get(v___x_3260_, 5);
v_messages_3266_ = lean_ctor_get(v___x_3260_, 6);
v_infoState_3267_ = lean_ctor_get(v___x_3260_, 7);
v_snapshotTasks_3268_ = lean_ctor_get(v___x_3260_, 8);
v_isSharedCheck_3294_ = !lean_is_exclusive(v___x_3260_);
if (v_isSharedCheck_3294_ == 0)
{
lean_object* v_unused_3295_; 
v_unused_3295_ = lean_ctor_get(v___x_3260_, 1);
lean_dec(v_unused_3295_);
v___x_3270_ = v___x_3260_;
v_isShared_3271_ = v_isSharedCheck_3294_;
goto v_resetjp_3269_;
}
else
{
lean_inc(v_snapshotTasks_3268_);
lean_inc(v_infoState_3267_);
lean_inc(v_messages_3266_);
lean_inc(v_cache_3265_);
lean_inc(v_traceState_3264_);
lean_inc(v_auxDeclNGen_3263_);
lean_inc(v_ngen_3262_);
lean_inc(v_env_3261_);
lean_dec(v___x_3260_);
v___x_3270_ = lean_box(0);
v_isShared_3271_ = v_isSharedCheck_3294_;
goto v_resetjp_3269_;
}
v_resetjp_3269_:
{
lean_object* v___x_3273_; 
if (v_isShared_3271_ == 0)
{
lean_ctor_set(v___x_3270_, 1, v_macroScope_3255_);
v___x_3273_ = v___x_3270_;
goto v_reusejp_3272_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_env_3261_);
lean_ctor_set(v_reuseFailAlloc_3293_, 1, v_macroScope_3255_);
lean_ctor_set(v_reuseFailAlloc_3293_, 2, v_ngen_3262_);
lean_ctor_set(v_reuseFailAlloc_3293_, 3, v_auxDeclNGen_3263_);
lean_ctor_set(v_reuseFailAlloc_3293_, 4, v_traceState_3264_);
lean_ctor_set(v_reuseFailAlloc_3293_, 5, v_cache_3265_);
lean_ctor_set(v_reuseFailAlloc_3293_, 6, v_messages_3266_);
lean_ctor_set(v_reuseFailAlloc_3293_, 7, v_infoState_3267_);
lean_ctor_set(v_reuseFailAlloc_3293_, 8, v_snapshotTasks_3268_);
v___x_3273_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3272_;
}
v_reusejp_3272_:
{
lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3274_ = lean_st_ref_set(v___y_3229_, v___x_3273_);
v___x_3275_ = l_List_reverse___redArg(v_traceMsgs_3256_);
v___x_3276_ = l_List_forM___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__15(v___x_3275_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v___x_3278_; uint8_t v_isShared_3279_; uint8_t v_isSharedCheck_3283_; 
v_isSharedCheck_3283_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3283_ == 0)
{
lean_object* v_unused_3284_; 
v_unused_3284_ = lean_ctor_get(v___x_3276_, 0);
lean_dec(v_unused_3284_);
v___x_3278_ = v___x_3276_;
v_isShared_3279_ = v_isSharedCheck_3283_;
goto v_resetjp_3277_;
}
else
{
lean_dec(v___x_3276_);
v___x_3278_ = lean_box(0);
v_isShared_3279_ = v_isSharedCheck_3283_;
goto v_resetjp_3277_;
}
v_resetjp_3277_:
{
lean_object* v___x_3281_; 
if (v_isShared_3279_ == 0)
{
lean_ctor_set(v___x_3278_, 0, v_a_3254_);
v___x_3281_ = v___x_3278_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3282_; 
v_reuseFailAlloc_3282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3282_, 0, v_a_3254_);
v___x_3281_ = v_reuseFailAlloc_3282_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
return v___x_3281_;
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec(v_a_3254_);
v_a_3285_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3276_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3276_);
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
}
}
else
{
lean_object* v_a_3296_; lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3303_; 
lean_dec(v_traceMsgs_3256_);
lean_dec(v_macroScope_3255_);
lean_dec(v_a_3254_);
v_a_3296_ = lean_ctor_get(v___x_3259_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3259_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3298_ = v___x_3259_;
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
else
{
lean_inc(v_a_3296_);
lean_dec(v___x_3259_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3303_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3301_; 
if (v_isShared_3299_ == 0)
{
v___x_3301_ = v___x_3298_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v_a_3296_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
}
else
{
lean_object* v_a_3304_; 
v_a_3304_ = lean_ctor_get(v___x_3252_, 0);
lean_inc(v_a_3304_);
lean_dec_ref(v___x_3252_);
if (lean_obj_tag(v_a_3304_) == 0)
{
lean_object* v_a_3305_; lean_object* v_a_3306_; lean_object* v___x_3307_; uint8_t v___x_3308_; 
v_a_3305_ = lean_ctor_get(v_a_3304_, 0);
lean_inc(v_a_3305_);
v_a_3306_ = lean_ctor_get(v_a_3304_, 1);
lean_inc_ref(v_a_3306_);
lean_dec_ref(v_a_3304_);
v___x_3307_ = lean_obj_once(&l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___closed__0, &l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___closed__0_once, _init_l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___closed__0);
v___x_3308_ = lean_string_dec_eq(v_a_3306_, v___x_3307_);
if (v___x_3308_ == 0)
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3309_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3309_, 0, v_a_3306_);
v___x_3310_ = l_Lean_MessageData_ofFormat(v___x_3309_);
v___x_3311_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg(v_a_3305_, v___x_3310_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_);
lean_dec(v_a_3305_);
return v___x_3311_;
}
else
{
lean_object* v___x_3312_; 
lean_dec_ref(v_a_3306_);
v___x_3312_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg(v_a_3305_);
return v___x_3312_;
}
}
else
{
lean_object* v___x_3313_; 
v___x_3313_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_3313_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg___boxed(lean_object* v_x_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_){
_start:
{
lean_object* v_res_3323_; 
v_res_3323_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg(v_x_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_, v___y_3321_);
lean_dec(v___y_3321_);
lean_dec_ref(v___y_3320_);
lean_dec(v___y_3319_);
lean_dec_ref(v___y_3318_);
lean_dec(v___y_3317_);
lean_dec_ref(v___y_3316_);
lean_dec_ref(v___y_3315_);
return v_res_3323_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__0(void){
_start:
{
lean_object* v___x_3324_; 
v___x_3324_ = lean_mk_string_unchecked("letEqnsDecl", 11, 11);
return v___x_3324_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1(void){
_start:
{
lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3325_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__0, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__0);
v___x_3326_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_3327_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_3328_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_3329_ = l_Lean_Name_mkStr4(v___x_3328_, v___x_3327_, v___x_3326_, v___x_3325_);
return v___x_3329_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__2(void){
_start:
{
lean_object* v___x_3330_; 
v___x_3330_ = lean_mk_string_unchecked("decl", 4, 4);
return v___x_3330_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__3(void){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3331_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__2, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__2);
v___x_3332_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
v___x_3333_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_3334_ = l_Lean_Name_mkStr3(v___x_3333_, v___x_3332_, v___x_3331_);
return v___x_3334_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4(void){
_start:
{
lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; 
v___x_3335_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__3);
v___x_3336_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17___closed__15);
v___x_3337_ = l_Lean_Name_append(v___x_3336_, v___x_3335_);
return v___x_3337_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__5(void){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_3338_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6(void){
_start:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3339_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__5, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__5);
v___x_3340_ = l_Lean_stringToMessageData(v___x_3339_);
return v___x_3340_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__7(void){
_start:
{
lean_object* v___x_3341_; 
v___x_3341_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_3341_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8(void){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3342_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__7);
v___x_3343_ = l_Lean_stringToMessageData(v___x_3342_);
return v___x_3343_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__9(void){
_start:
{
lean_object* v___x_3344_; 
v___x_3344_ = lean_mk_string_unchecked("let body of ", 12, 12);
return v___x_3344_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__10(void){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3345_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__9, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__9_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__9);
v___x_3346_ = l_Lean_stringToMessageData(v___x_3345_);
return v___x_3346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign___boxed(lean_object* v_config_3347_, lean_object* v_letOrReassign_3348_, lean_object* v_decl_3349_, lean_object* v_tk_3350_, lean_object* v_dec_3351_, lean_object* v_a_3352_, lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_){
_start:
{
lean_object* v_res_3360_; 
v_res_3360_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_config_3347_, v_letOrReassign_3348_, v_decl_3349_, v_tk_3350_, v_dec_3351_, v_a_3352_, v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_);
lean_dec(v_a_3358_);
lean_dec_ref(v_a_3357_);
lean_dec(v_a_3356_);
lean_dec_ref(v_a_3355_);
lean_dec(v_a_3354_);
lean_dec_ref(v_a_3353_);
lean_dec_ref(v_a_3352_);
return v_res_3360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetOrReassign(lean_object* v_config_3361_, lean_object* v_letOrReassign_3362_, lean_object* v_decl_3363_, lean_object* v_tk_3364_, lean_object* v_dec_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_, lean_object* v_a_3368_, lean_object* v_a_3369_, lean_object* v_a_3370_, lean_object* v_a_3371_, lean_object* v_a_3372_){
_start:
{
lean_object* v___x_3374_; 
v___x_3374_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(v_config_3361_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v___x_3375_; 
lean_dec_ref(v___x_3374_);
lean_inc(v_decl_3363_);
v___x_3375_ = l_Lean_Elab_Do_getLetDeclVars(v_decl_3363_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v___x_3377_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3376_);
lean_dec_ref(v___x_3375_);
v___x_3377_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_3362_, v_a_3376_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
if (lean_obj_tag(v___x_3377_) == 0)
{
lean_object* v___x_3378_; 
lean_dec_ref(v___x_3377_);
v___x_3378_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_3365_, v_tk_3364_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
if (lean_obj_tag(v___x_3378_) == 0)
{
lean_object* v_a_3379_; lean_object* v___x_3380_; 
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3379_);
lean_dec_ref(v___x_3378_);
v___x_3380_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment(v_letOrReassign_3362_, v_decl_3363_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
if (lean_obj_tag(v___x_3380_) == 0)
{
lean_object* v_a_3381_; lean_object* v_doBlockResultType_3382_; lean_object* v___x_3383_; 
v_a_3381_ = lean_ctor_get(v___x_3380_, 0);
lean_inc(v_a_3381_);
lean_dec_ref(v___x_3380_);
v_doBlockResultType_3382_ = lean_ctor_get(v_a_3366_, 3);
lean_inc_ref(v_doBlockResultType_3382_);
v___x_3383_ = l_Lean_Elab_Do_mkMonadicType___redArg(v_doBlockResultType_3382_, v_a_3366_);
if (lean_obj_tag(v___x_3383_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3386_; uint8_t v_isShared_3387_; uint8_t v_isSharedCheck_3602_; 
v_a_3384_ = lean_ctor_get(v___x_3383_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3383_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3386_ = v___x_3383_;
v_isShared_3387_ = v_isSharedCheck_3602_;
goto v_resetjp_3385_;
}
else
{
lean_inc(v_a_3384_);
lean_dec(v___x_3383_);
v___x_3386_ = lean_box(0);
v_isShared_3387_ = v_isSharedCheck_3602_;
goto v_resetjp_3385_;
}
v_resetjp_3385_:
{
lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v___x_3388_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_3389_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_3390_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_3391_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
lean_inc(v_a_3381_);
v___x_3392_ = l_Lean_Syntax_isOfKind(v_a_3381_, v___x_3391_);
if (v___x_3392_ == 0)
{
lean_object* v___x_3393_; 
lean_del_object(v___x_3386_);
lean_dec(v_a_3384_);
lean_dec(v_a_3381_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_tk_3364_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v___x_3393_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_3393_;
}
else
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; uint8_t v___x_3397_; 
v___x_3394_ = lean_unsigned_to_nat(0u);
v___x_3395_ = l_Lean_Syntax_getArg(v_a_3381_, v___x_3394_);
lean_dec(v_a_3381_);
v___x_3396_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__1, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__1);
lean_inc(v___x_3395_);
v___x_3397_ = l_Lean_Syntax_isOfKind(v___x_3395_, v___x_3396_);
if (v___x_3397_ == 0)
{
lean_object* v___x_3398_; uint8_t v___x_3399_; 
lean_dec(v_tk_3364_);
v___x_3398_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10);
lean_inc(v___x_3395_);
v___x_3399_ = l_Lean_Syntax_isOfKind(v___x_3395_, v___x_3398_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; uint8_t v___x_3401_; 
lean_del_object(v___x_3386_);
lean_dec(v_a_3384_);
v___x_3400_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8);
lean_inc(v___x_3395_);
v___x_3401_ = l_Lean_Syntax_isOfKind(v___x_3395_, v___x_3400_);
if (v___x_3401_ == 0)
{
lean_object* v___x_3402_; 
lean_dec(v___x_3395_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v___x_3402_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_3402_;
}
else
{
lean_object* v___x_3403_; lean_object* v_id_3404_; lean_object* v_binders_3405_; lean_object* v_type_3406_; lean_object* v_value_3407_; lean_object* v___y_3409_; uint8_t v___y_3410_; lean_object* v___y_3411_; uint8_t v___y_3412_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3415_; lean_object* v___y_3416_; lean_object* v___y_3417_; lean_object* v___y_3418_; lean_object* v___y_3419_; lean_object* v___y_3420_; uint8_t v___y_3421_; lean_object* v_id_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; uint8_t v___x_3498_; 
v___x_3403_ = l_Lean_Elab_Term_mkLetIdDeclView(v___x_3395_);
lean_dec(v___x_3395_);
v_id_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_id_3404_);
v_binders_3405_ = lean_ctor_get(v___x_3403_, 1);
lean_inc_ref(v_binders_3405_);
v_type_3406_ = lean_ctor_get(v___x_3403_, 2);
lean_inc(v_type_3406_);
v_value_3407_ = lean_ctor_get(v___x_3403_, 3);
lean_inc(v_value_3407_);
lean_dec_ref(v___x_3403_);
v___x_3498_ = l_Lean_Syntax_isIdent(v_id_3404_);
if (v___x_3498_ == 0)
{
lean_object* v___x_3499_; 
v___x_3499_ = l_Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7(v_id_3404_, v___x_3392_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
lean_dec(v_id_3404_);
if (lean_obj_tag(v___x_3499_) == 0)
{
lean_object* v_a_3500_; 
v_a_3500_ = lean_ctor_get(v___x_3499_, 0);
lean_inc(v_a_3500_);
lean_dec_ref(v___x_3499_);
v_id_3480_ = v_a_3500_;
v___y_3481_ = v_a_3366_;
v___y_3482_ = v_a_3367_;
v___y_3483_ = v_a_3368_;
v___y_3484_ = v_a_3369_;
v___y_3485_ = v_a_3370_;
v___y_3486_ = v_a_3371_;
v___y_3487_ = v_a_3372_;
goto v___jp_3479_;
}
else
{
lean_object* v_a_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3508_; 
lean_dec(v_value_3407_);
lean_dec(v_type_3406_);
lean_dec_ref(v_binders_3405_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v_a_3501_ = lean_ctor_get(v___x_3499_, 0);
v_isSharedCheck_3508_ = !lean_is_exclusive(v___x_3499_);
if (v_isSharedCheck_3508_ == 0)
{
v___x_3503_ = v___x_3499_;
v_isShared_3504_ = v_isSharedCheck_3508_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_a_3501_);
lean_dec(v___x_3499_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3508_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3506_; 
if (v_isShared_3504_ == 0)
{
v___x_3506_ = v___x_3503_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3507_; 
v_reuseFailAlloc_3507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3507_, 0, v_a_3501_);
v___x_3506_ = v_reuseFailAlloc_3507_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
return v___x_3506_;
}
}
}
}
else
{
v_id_3480_ = v_id_3404_;
v___y_3481_ = v_a_3366_;
v___y_3482_ = v_a_3367_;
v___y_3483_ = v_a_3368_;
v___y_3484_ = v_a_3369_;
v___y_3485_ = v_a_3370_;
v___y_3486_ = v_a_3371_;
v___y_3487_ = v_a_3372_;
goto v___jp_3479_;
}
v___jp_3408_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___f_3425_; lean_object* v___x_3426_; 
v___x_3422_ = lean_box(v___x_3392_);
v___x_3423_ = lean_box(v___x_3397_);
v___x_3424_ = lean_box(v___y_3421_);
v___f_3425_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3425_, 0, v_type_3406_);
lean_closure_set(v___f_3425_, 1, v_value_3407_);
lean_closure_set(v___f_3425_, 2, v___x_3422_);
lean_closure_set(v___f_3425_, 3, v___x_3423_);
lean_closure_set(v___f_3425_, 4, v___x_3394_);
lean_closure_set(v___f_3425_, 5, v___x_3424_);
v___x_3426_ = l_Lean_Elab_Term_elabBindersEx___redArg(v_binders_3405_, v___f_3425_, v___y_3420_, v___y_3416_, v___y_3418_, v___y_3415_, v___y_3414_, v___y_3419_);
if (lean_obj_tag(v___x_3426_) == 0)
{
lean_object* v_a_3427_; lean_object* v_options_3428_; lean_object* v_fst_3429_; lean_object* v_snd_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3470_; 
v_a_3427_ = lean_ctor_get(v___x_3426_, 0);
lean_inc(v_a_3427_);
lean_dec_ref(v___x_3426_);
v_options_3428_ = lean_ctor_get(v___y_3414_, 2);
v_fst_3429_ = lean_ctor_get(v_a_3427_, 0);
v_snd_3430_ = lean_ctor_get(v_a_3427_, 1);
v_isSharedCheck_3470_ = !lean_is_exclusive(v_a_3427_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3432_ = v_a_3427_;
v_isShared_3433_ = v_isSharedCheck_3470_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_snd_3430_);
lean_inc(v_fst_3429_);
lean_dec(v_a_3427_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3470_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
lean_object* v_inheritedTraceOptions_3434_; uint8_t v_hasTrace_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___f_3441_; lean_object* v___x_3442_; uint8_t v___x_3443_; 
v_inheritedTraceOptions_3434_ = lean_ctor_get(v___y_3414_, 13);
v_hasTrace_3435_ = lean_ctor_get_uint8(v_options_3428_, sizeof(void*)*1);
v___x_3436_ = lean_box(v___y_3410_);
v___x_3437_ = lean_box(v___y_3412_);
v___x_3438_ = lean_box(v___x_3397_);
v___x_3439_ = lean_box(v___y_3421_);
v___x_3440_ = lean_box(v___x_3392_);
lean_inc(v_snd_3430_);
v___f_3441_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__4___boxed), 20, 11);
lean_closure_set(v___f_3441_, 0, v___y_3409_);
lean_closure_set(v___f_3441_, 1, v___y_3411_);
lean_closure_set(v___f_3441_, 2, v_a_3379_);
lean_closure_set(v___f_3441_, 3, v___x_3436_);
lean_closure_set(v___f_3441_, 4, v___x_3437_);
lean_closure_set(v___f_3441_, 5, v___x_3438_);
lean_closure_set(v___f_3441_, 6, v_snd_3430_);
lean_closure_set(v___f_3441_, 7, v___x_3439_);
lean_closure_set(v___f_3441_, 8, v___x_3440_);
lean_closure_set(v___f_3441_, 9, v_letOrReassign_3362_);
lean_closure_set(v___f_3441_, 10, v_a_3376_);
v___x_3442_ = l_Lean_Syntax_getId(v___y_3413_);
lean_dec(v___y_3413_);
v___x_3443_ = l_Lean_LocalDeclKind_ofBinderName(v___x_3442_);
if (v_hasTrace_3435_ == 0)
{
lean_object* v___x_3444_; 
lean_del_object(v___x_3432_);
v___x_3444_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v___x_3442_, v_fst_3429_, v_snd_3430_, v___f_3441_, v___y_3421_, v___x_3443_, v___y_3417_, v___y_3420_, v___y_3416_, v___y_3418_, v___y_3415_, v___y_3414_, v___y_3419_);
return v___x_3444_;
}
else
{
lean_object* v___x_3445_; lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3445_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__3, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__3);
v___x_3446_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__4, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__4);
v___x_3447_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3434_, v_options_3428_, v___x_3446_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; 
lean_del_object(v___x_3432_);
v___x_3448_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v___x_3442_, v_fst_3429_, v_snd_3430_, v___f_3441_, v___y_3421_, v___x_3443_, v___y_3417_, v___y_3420_, v___y_3416_, v___y_3418_, v___y_3415_, v___y_3414_, v___y_3419_);
return v___x_3448_;
}
else
{
lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3452_; 
lean_inc(v___x_3442_);
v___x_3449_ = l_Lean_MessageData_ofName(v___x_3442_);
v___x_3450_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__6);
if (v_isShared_3433_ == 0)
{
lean_ctor_set_tag(v___x_3432_, 7);
lean_ctor_set(v___x_3432_, 1, v___x_3450_);
lean_ctor_set(v___x_3432_, 0, v___x_3449_);
v___x_3452_ = v___x_3432_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v___x_3449_);
lean_ctor_set(v_reuseFailAlloc_3469_, 1, v___x_3450_);
v___x_3452_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; 
lean_inc(v_fst_3429_);
v___x_3453_ = l_Lean_MessageData_ofExpr(v_fst_3429_);
v___x_3454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3454_, 0, v___x_3452_);
lean_ctor_set(v___x_3454_, 1, v___x_3453_);
v___x_3455_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__8, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__8_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__8);
v___x_3456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3456_, 0, v___x_3454_);
lean_ctor_set(v___x_3456_, 1, v___x_3455_);
lean_inc(v_snd_3430_);
v___x_3457_ = l_Lean_MessageData_ofExpr(v_snd_3430_);
v___x_3458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3456_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
v___x_3459_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg(v___x_3445_, v___x_3458_, v___y_3418_, v___y_3415_, v___y_3414_, v___y_3419_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v___x_3460_; 
lean_dec_ref(v___x_3459_);
v___x_3460_ = l_Lean_Meta_withLetDecl___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__5___redArg(v___x_3442_, v_fst_3429_, v_snd_3430_, v___f_3441_, v___y_3421_, v___x_3443_, v___y_3417_, v___y_3420_, v___y_3416_, v___y_3418_, v___y_3415_, v___y_3414_, v___y_3419_);
return v___x_3460_;
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3468_; 
lean_dec(v___x_3442_);
lean_dec_ref(v___f_3441_);
lean_dec(v_snd_3430_);
lean_dec(v_fst_3429_);
v_a_3461_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3463_ = v___x_3459_;
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3459_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
if (v_isShared_3464_ == 0)
{
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_a_3461_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
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
lean_object* v_a_3471_; lean_object* v___x_3473_; uint8_t v_isShared_3474_; uint8_t v_isSharedCheck_3478_; 
lean_dec(v___y_3413_);
lean_dec(v___y_3411_);
lean_dec(v___y_3409_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_letOrReassign_3362_);
v_a_3471_ = lean_ctor_get(v___x_3426_, 0);
v_isSharedCheck_3478_ = !lean_is_exclusive(v___x_3426_);
if (v_isSharedCheck_3478_ == 0)
{
v___x_3473_ = v___x_3426_;
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
else
{
lean_inc(v_a_3471_);
lean_dec(v___x_3426_);
v___x_3473_ = lean_box(0);
v_isShared_3474_ = v_isSharedCheck_3478_;
goto v_resetjp_3472_;
}
v_resetjp_3472_:
{
lean_object* v___x_3476_; 
if (v_isShared_3474_ == 0)
{
v___x_3476_ = v___x_3473_;
goto v_reusejp_3475_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v_a_3471_);
v___x_3476_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3475_;
}
v_reusejp_3475_:
{
return v___x_3476_;
}
}
}
}
v___jp_3479_:
{
uint8_t v_nondep_3488_; 
v_nondep_3488_ = lean_ctor_get_uint8(v_config_3361_, sizeof(void*)*1);
if (v_nondep_3488_ == 0)
{
if (lean_obj_tag(v_letOrReassign_3362_) == 1)
{
uint8_t v_usedOnly_3489_; uint8_t v_zeta_3490_; lean_object* v_eq_x3f_3491_; 
v_usedOnly_3489_ = lean_ctor_get_uint8(v_config_3361_, sizeof(void*)*1 + 1);
v_zeta_3490_ = lean_ctor_get_uint8(v_config_3361_, sizeof(void*)*1 + 2);
v_eq_x3f_3491_ = lean_ctor_get(v_config_3361_, 0);
lean_inc(v_eq_x3f_3491_);
lean_dec_ref(v_config_3361_);
lean_inc(v_id_3480_);
v___y_3409_ = v_id_3480_;
v___y_3410_ = v_zeta_3490_;
v___y_3411_ = v_eq_x3f_3491_;
v___y_3412_ = v_usedOnly_3489_;
v___y_3413_ = v_id_3480_;
v___y_3414_ = v___y_3486_;
v___y_3415_ = v___y_3485_;
v___y_3416_ = v___y_3483_;
v___y_3417_ = v___y_3481_;
v___y_3418_ = v___y_3484_;
v___y_3419_ = v___y_3487_;
v___y_3420_ = v___y_3482_;
v___y_3421_ = v___x_3392_;
goto v___jp_3408_;
}
else
{
uint8_t v_usedOnly_3492_; uint8_t v_zeta_3493_; lean_object* v_eq_x3f_3494_; 
v_usedOnly_3492_ = lean_ctor_get_uint8(v_config_3361_, sizeof(void*)*1 + 1);
v_zeta_3493_ = lean_ctor_get_uint8(v_config_3361_, sizeof(void*)*1 + 2);
v_eq_x3f_3494_ = lean_ctor_get(v_config_3361_, 0);
lean_inc(v_eq_x3f_3494_);
lean_dec_ref(v_config_3361_);
lean_inc(v_id_3480_);
v___y_3409_ = v_id_3480_;
v___y_3410_ = v_zeta_3493_;
v___y_3411_ = v_eq_x3f_3494_;
v___y_3412_ = v_usedOnly_3492_;
v___y_3413_ = v_id_3480_;
v___y_3414_ = v___y_3486_;
v___y_3415_ = v___y_3485_;
v___y_3416_ = v___y_3483_;
v___y_3417_ = v___y_3481_;
v___y_3418_ = v___y_3484_;
v___y_3419_ = v___y_3487_;
v___y_3420_ = v___y_3482_;
v___y_3421_ = v_nondep_3488_;
goto v___jp_3408_;
}
}
else
{
uint8_t v_usedOnly_3495_; uint8_t v_zeta_3496_; lean_object* v_eq_x3f_3497_; 
v_usedOnly_3495_ = lean_ctor_get_uint8(v_config_3361_, sizeof(void*)*1 + 1);
v_zeta_3496_ = lean_ctor_get_uint8(v_config_3361_, sizeof(void*)*1 + 2);
v_eq_x3f_3497_ = lean_ctor_get(v_config_3361_, 0);
lean_inc(v_eq_x3f_3497_);
lean_dec_ref(v_config_3361_);
lean_inc(v_id_3480_);
v___y_3409_ = v_id_3480_;
v___y_3410_ = v_zeta_3496_;
v___y_3411_ = v_eq_x3f_3497_;
v___y_3412_ = v_usedOnly_3495_;
v___y_3413_ = v_id_3480_;
v___y_3414_ = v___y_3486_;
v___y_3415_ = v___y_3485_;
v___y_3416_ = v___y_3483_;
v___y_3417_ = v___y_3481_;
v___y_3418_ = v___y_3484_;
v___y_3419_ = v___y_3487_;
v___y_3420_ = v___y_3482_;
v___y_3421_ = v___x_3392_;
goto v___jp_3408_;
}
}
}
}
else
{
lean_object* v___x_3509_; lean_object* v___x_3510_; uint8_t v___x_3511_; 
v___x_3509_ = lean_unsigned_to_nat(1u);
v___x_3510_ = l_Lean_Syntax_getArg(v___x_3395_, v___x_3509_);
v___x_3511_ = l_Lean_Syntax_matchesNull(v___x_3510_, v___x_3394_);
if (v___x_3511_ == 0)
{
lean_object* v___x_3512_; 
lean_dec(v___x_3395_);
lean_del_object(v___x_3386_);
lean_dec(v_a_3384_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v___x_3512_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_3512_;
}
else
{
lean_object* v___x_3513_; lean_object* v___f_3514_; lean_object* v___x_3515_; lean_object* v_rhs_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; lean_object* v___y_3523_; lean_object* v___y_3524_; lean_object* v_xType_x3f_3536_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; lean_object* v___y_3543_; lean_object* v___x_3570_; lean_object* v___x_3571_; uint8_t v___x_3572_; 
v___x_3513_ = lean_box(v___x_3397_);
v___f_3514_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__5___boxed), 10, 1);
lean_closure_set(v___f_3514_, 0, v___x_3513_);
v___x_3515_ = l_Lean_Syntax_getArg(v___x_3395_, v___x_3394_);
v___x_3570_ = lean_unsigned_to_nat(2u);
v___x_3571_ = l_Lean_Syntax_getArg(v___x_3395_, v___x_3570_);
v___x_3572_ = l_Lean_Syntax_isNone(v___x_3571_);
if (v___x_3572_ == 0)
{
uint8_t v___x_3573_; 
lean_inc(v___x_3571_);
v___x_3573_ = l_Lean_Syntax_matchesNull(v___x_3571_, v___x_3509_);
if (v___x_3573_ == 0)
{
lean_object* v___x_3574_; 
lean_dec(v___x_3571_);
lean_dec(v___x_3515_);
lean_dec_ref(v___f_3514_);
lean_dec(v___x_3395_);
lean_del_object(v___x_3386_);
lean_dec(v_a_3384_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v___x_3574_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_3574_;
}
else
{
lean_object* v___x_3575_; lean_object* v___x_3576_; uint8_t v___x_3577_; 
v___x_3575_ = l_Lean_Syntax_getArg(v___x_3571_, v___x_3394_);
lean_dec(v___x_3571_);
v___x_3576_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
lean_inc(v___x_3575_);
v___x_3577_ = l_Lean_Syntax_isOfKind(v___x_3575_, v___x_3576_);
if (v___x_3577_ == 0)
{
lean_object* v___x_3578_; 
lean_dec(v___x_3575_);
lean_dec(v___x_3515_);
lean_dec_ref(v___f_3514_);
lean_dec(v___x_3395_);
lean_del_object(v___x_3386_);
lean_dec(v_a_3384_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v___x_3578_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_3578_;
}
else
{
lean_object* v___x_3579_; lean_object* v___x_3581_; 
v___x_3579_ = l_Lean_Syntax_getArg(v___x_3575_, v___x_3509_);
lean_dec(v___x_3575_);
if (v_isShared_3387_ == 0)
{
lean_ctor_set_tag(v___x_3386_, 1);
lean_ctor_set(v___x_3386_, 0, v___x_3579_);
v___x_3581_ = v___x_3386_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v___x_3579_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
v_xType_x3f_3536_ = v___x_3581_;
v___y_3537_ = v_a_3366_;
v___y_3538_ = v_a_3367_;
v___y_3539_ = v_a_3368_;
v___y_3540_ = v_a_3369_;
v___y_3541_ = v_a_3370_;
v___y_3542_ = v_a_3371_;
v___y_3543_ = v_a_3372_;
goto v___jp_3535_;
}
}
}
}
else
{
lean_object* v___x_3583_; 
lean_dec(v___x_3571_);
lean_del_object(v___x_3386_);
v___x_3583_ = lean_box(0);
v_xType_x3f_3536_ = v___x_3583_;
v___y_3537_ = v_a_3366_;
v___y_3538_ = v_a_3367_;
v___y_3539_ = v_a_3368_;
v___y_3540_ = v_a_3369_;
v___y_3541_ = v_a_3370_;
v___y_3542_ = v_a_3371_;
v___y_3543_ = v_a_3372_;
goto v___jp_3535_;
}
v___jp_3516_:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___f_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3525_ = lean_box(v___x_3397_);
v___x_3526_ = lean_box(v___x_3392_);
lean_inc(v___x_3515_);
v___f_3527_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___boxed), 19, 10);
lean_closure_set(v___f_3527_, 0, v_rhs_3517_);
lean_closure_set(v___f_3527_, 1, v___x_3525_);
lean_closure_set(v___f_3527_, 2, v_config_3361_);
lean_closure_set(v___f_3527_, 3, v_a_3384_);
lean_closure_set(v___f_3527_, 4, v___x_3526_);
lean_closure_set(v___f_3527_, 5, v___x_3388_);
lean_closure_set(v___f_3527_, 6, v___x_3389_);
lean_closure_set(v___f_3527_, 7, v___x_3390_);
lean_closure_set(v___f_3527_, 8, v___f_3514_);
lean_closure_set(v___f_3527_, 9, v___x_3515_);
v___x_3528_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_3528_, 0, v_a_3379_);
v___x_3529_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabWithReassignments___boxed), 11, 3);
lean_closure_set(v___x_3529_, 0, v_letOrReassign_3362_);
lean_closure_set(v___x_3529_, 1, v_a_3376_);
lean_closure_set(v___x_3529_, 2, v___x_3528_);
v___x_3530_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___closed__10, &l_Lean_Elab_Do_elabDoLetOrReassign___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___closed__10);
v___x_3531_ = l_Lean_MessageData_ofSyntax(v___x_3515_);
v___x_3532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3530_);
lean_ctor_set(v___x_3532_, 1, v___x_3531_);
v___x_3533_ = lean_box(0);
v___x_3534_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_3532_, v___x_3529_, v___f_3527_, v___x_3533_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_);
return v___x_3534_;
}
v___jp_3535_:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3544_ = lean_unsigned_to_nat(4u);
v___x_3545_ = l_Lean_Syntax_getArg(v___x_3395_, v___x_3544_);
lean_dec(v___x_3395_);
if (lean_obj_tag(v_xType_x3f_3536_) == 0)
{
v_rhs_3517_ = v___x_3545_;
v___y_3518_ = v___y_3537_;
v___y_3519_ = v___y_3538_;
v___y_3520_ = v___y_3539_;
v___y_3521_ = v___y_3540_;
v___y_3522_ = v___y_3541_;
v___y_3523_ = v___y_3542_;
v___y_3524_ = v___y_3543_;
goto v___jp_3516_;
}
else
{
lean_object* v_val_3546_; lean_object* v_ref_3547_; lean_object* v_quotContext_3548_; lean_object* v_currMacroScope_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; 
v_val_3546_ = lean_ctor_get(v_xType_x3f_3536_, 0);
lean_inc(v_val_3546_);
lean_dec_ref(v_xType_x3f_3536_);
v_ref_3547_ = lean_ctor_get(v___y_3542_, 5);
v_quotContext_3548_ = lean_ctor_get(v___y_3542_, 10);
v_currMacroScope_3549_ = lean_ctor_get(v___y_3542_, 11);
v___x_3550_ = l_Lean_SourceInfo_fromRef(v_ref_3547_, v___x_3397_);
v___x_3551_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__16);
v___x_3552_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__18);
v___x_3553_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__19);
lean_inc_n(v___x_3550_, 7);
v___x_3554_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3554_, 0, v___x_3550_);
lean_ctor_set(v___x_3554_, 1, v___x_3553_);
v___x_3555_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__21);
v___x_3556_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__23);
v___x_3557_ = lean_box(0);
lean_inc(v_currMacroScope_3549_);
lean_inc(v_quotContext_3548_);
v___x_3558_ = l_Lean_addMacroScope(v_quotContext_3548_, v___x_3557_, v_currMacroScope_3549_);
v___x_3559_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__35);
v___x_3560_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3550_);
lean_ctor_set(v___x_3560_, 1, v___x_3556_);
lean_ctor_set(v___x_3560_, 2, v___x_3558_);
lean_ctor_set(v___x_3560_, 3, v___x_3559_);
v___x_3561_ = l_Lean_Syntax_node1(v___x_3550_, v___x_3555_, v___x_3560_);
v___x_3562_ = l_Lean_Syntax_node2(v___x_3550_, v___x_3552_, v___x_3554_, v___x_3561_);
v___x_3563_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36);
v___x_3564_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3550_);
lean_ctor_set(v___x_3564_, 1, v___x_3563_);
v___x_3565_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_3566_ = l_Lean_Syntax_node1(v___x_3550_, v___x_3565_, v_val_3546_);
v___x_3567_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__37);
v___x_3568_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3568_, 0, v___x_3550_);
lean_ctor_set(v___x_3568_, 1, v___x_3567_);
v___x_3569_ = l_Lean_Syntax_node5(v___x_3550_, v___x_3551_, v___x_3562_, v___x_3545_, v___x_3564_, v___x_3566_, v___x_3568_);
v_rhs_3517_ = v___x_3569_;
v___y_3518_ = v___y_3537_;
v___y_3519_ = v___y_3538_;
v___y_3520_ = v___y_3539_;
v___y_3521_ = v___y_3540_;
v___y_3522_ = v___y_3541_;
v___y_3523_ = v___y_3542_;
v___y_3524_ = v___y_3543_;
goto v___jp_3516_;
}
}
}
}
}
else
{
lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; 
lean_del_object(v___x_3386_);
lean_dec(v_a_3384_);
lean_dec(v_a_3376_);
v___x_3584_ = lean_box(v___x_3392_);
lean_inc(v___x_3395_);
v___x_3585_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_expandLetEqnsDecl___boxed), 4, 2);
lean_closure_set(v___x_3585_, 0, v___x_3395_);
lean_closure_set(v___x_3585_, 1, v___x_3584_);
v___x_3586_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg(v___x_3585_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v_ref_3588_; uint8_t v___x_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
lean_inc(v_a_3587_);
lean_dec_ref(v___x_3586_);
v_ref_3588_ = lean_ctor_get(v_a_3371_, 5);
v___x_3589_ = 0;
v___x_3590_ = l_Lean_SourceInfo_fromRef(v_ref_3588_, v___x_3589_);
v___x_3591_ = l_Lean_Syntax_node1(v___x_3590_, v___x_3391_, v_a_3587_);
lean_inc(v___x_3591_);
v___x_3592_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetOrReassign___boxed), 13, 5);
lean_closure_set(v___x_3592_, 0, v_config_3361_);
lean_closure_set(v___x_3592_, 1, v_letOrReassign_3362_);
lean_closure_set(v___x_3592_, 2, v___x_3591_);
lean_closure_set(v___x_3592_, 3, v_tk_3364_);
lean_closure_set(v___x_3592_, 4, v_a_3379_);
v___x_3593_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v___x_3395_, v___x_3591_, v___x_3592_, v_a_3366_, v_a_3367_, v_a_3368_, v_a_3369_, v_a_3370_, v_a_3371_, v_a_3372_);
return v___x_3593_;
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
lean_dec(v___x_3395_);
lean_dec(v_a_3379_);
lean_dec(v_tk_3364_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v_a_3594_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3586_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3586_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_3381_);
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_tk_3364_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
return v___x_3383_;
}
}
else
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3610_; 
lean_dec(v_a_3379_);
lean_dec(v_a_3376_);
lean_dec(v_tk_3364_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v_a_3603_ = lean_ctor_get(v___x_3380_, 0);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3380_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3605_ = v___x_3380_;
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3380_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3608_; 
if (v_isShared_3606_ == 0)
{
v___x_3608_ = v___x_3605_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v_a_3603_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
}
else
{
lean_object* v_a_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3618_; 
lean_dec(v_a_3376_);
lean_dec(v_tk_3364_);
lean_dec(v_decl_3363_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v_a_3611_ = lean_ctor_get(v___x_3378_, 0);
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3378_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3613_ = v___x_3378_;
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_a_3611_);
lean_dec(v___x_3378_);
v___x_3613_ = lean_box(0);
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
v_resetjp_3612_:
{
lean_object* v___x_3616_; 
if (v_isShared_3614_ == 0)
{
v___x_3616_ = v___x_3613_;
goto v_reusejp_3615_;
}
else
{
lean_object* v_reuseFailAlloc_3617_; 
v_reuseFailAlloc_3617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3617_, 0, v_a_3611_);
v___x_3616_ = v_reuseFailAlloc_3617_;
goto v_reusejp_3615_;
}
v_reusejp_3615_:
{
return v___x_3616_;
}
}
}
}
else
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3626_; 
lean_dec(v_a_3376_);
lean_dec_ref(v_dec_3365_);
lean_dec(v_tk_3364_);
lean_dec(v_decl_3363_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v_a_3619_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3621_ = v___x_3377_;
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3377_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3624_; 
if (v_isShared_3622_ == 0)
{
v___x_3624_ = v___x_3621_;
goto v_reusejp_3623_;
}
else
{
lean_object* v_reuseFailAlloc_3625_; 
v_reuseFailAlloc_3625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3625_, 0, v_a_3619_);
v___x_3624_ = v_reuseFailAlloc_3625_;
goto v_reusejp_3623_;
}
v_reusejp_3623_:
{
return v___x_3624_;
}
}
}
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_dec_ref(v_dec_3365_);
lean_dec(v_tk_3364_);
lean_dec(v_decl_3363_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v_a_3627_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3375_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3375_);
v___x_3629_ = lean_box(0);
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
v_resetjp_3628_:
{
lean_object* v___x_3632_; 
if (v_isShared_3630_ == 0)
{
v___x_3632_ = v___x_3629_;
goto v_reusejp_3631_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3627_);
v___x_3632_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3631_;
}
v_reusejp_3631_:
{
return v___x_3632_;
}
}
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
lean_dec_ref(v_dec_3365_);
lean_dec(v_tk_3364_);
lean_dec(v_decl_3363_);
lean_dec(v_letOrReassign_3362_);
lean_dec_ref(v_config_3361_);
v_a_3635_ = lean_ctor_get(v___x_3374_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3374_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3374_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3374_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0(lean_object* v_00_u03b2_3643_, lean_object* v_x_3644_, lean_object* v_x_3645_, lean_object* v_x_3646_){
_start:
{
lean_object* v___x_3647_; 
v___x_3647_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0___redArg(v_x_3644_, v_x_3645_, v_x_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(lean_object* v_cls_3648_, lean_object* v_msg_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_){
_start:
{
lean_object* v___x_3658_; 
v___x_3658_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___redArg(v_cls_3648_, v_msg_3649_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_);
return v___x_3658_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6___boxed(lean_object* v_cls_3659_, lean_object* v_msg_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_){
_start:
{
lean_object* v_res_3669_; 
v_res_3669_ = l_Lean_addTrace___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__6(v_cls_3659_, v_msg_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_);
lean_dec(v___y_3667_);
lean_dec_ref(v___y_3666_);
lean_dec(v___y_3665_);
lean_dec_ref(v___y_3664_);
lean_dec(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec_ref(v___y_3661_);
return v_res_3669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8(lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_){
_start:
{
lean_object* v___x_3678_; 
v___x_3678_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___redArg(v___y_3675_, v___y_3676_);
return v___x_3678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8___boxed(lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Lean_Elab_Term_mkFreshBinderName___at___00Lean_Elab_Term_mkFreshIdent___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__7_spec__8(v___y_3679_, v___y_3680_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
lean_dec_ref(v___y_3679_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(lean_object* v_00_u03b1_3688_, lean_object* v_beforeStx_3689_, lean_object* v_afterStx_3690_, lean_object* v_x_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_, lean_object* v___y_3698_){
_start:
{
lean_object* v___x_3700_; 
v___x_3700_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___redArg(v_beforeStx_3689_, v_afterStx_3690_, v_x_3691_, v___y_3692_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_, v___y_3698_);
return v___x_3700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8___boxed(lean_object* v_00_u03b1_3701_, lean_object* v_beforeStx_3702_, lean_object* v_afterStx_3703_, lean_object* v_x_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8(v_00_u03b1_3701_, v_beforeStx_3702_, v_afterStx_3703_, v_x_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
lean_dec(v___y_3709_);
lean_dec_ref(v___y_3708_);
lean_dec(v___y_3707_);
lean_dec_ref(v___y_3706_);
lean_dec_ref(v___y_3705_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12(lean_object* v_00_u03b1_3714_, lean_object* v_x_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_){
_start:
{
lean_object* v___x_3718_; 
v___x_3718_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___redArg(v_x_3715_, v___y_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12___boxed(lean_object* v_00_u03b1_3719_, lean_object* v_x_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_){
_start:
{
lean_object* v_res_3723_; 
v_res_3723_ = l_liftExcept___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__12(v_00_u03b1_3719_, v_x_3720_, v___y_3721_, v___y_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v_x_3720_);
return v_res_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17(lean_object* v_00_u03b1_3724_, lean_object* v_ref_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_){
_start:
{
lean_object* v___x_3734_; 
v___x_3734_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___redArg(v_ref_3725_);
return v___x_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17___boxed(lean_object* v_00_u03b1_3735_, lean_object* v_ref_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_){
_start:
{
lean_object* v_res_3745_; 
v_res_3745_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__17(v_00_u03b1_3735_, v_ref_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_);
lean_dec(v___y_3743_);
lean_dec_ref(v___y_3742_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
lean_dec(v___y_3739_);
lean_dec_ref(v___y_3738_);
lean_dec_ref(v___y_3737_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9(lean_object* v_00_u03b1_3746_, lean_object* v_x_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_){
_start:
{
lean_object* v___x_3756_; 
v___x_3756_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___redArg(v_x_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_);
return v___x_3756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9___boxed(lean_object* v_00_u03b1_3757_, lean_object* v_x_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
lean_object* v_res_3767_; 
v_res_3767_ = l_Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9(v_00_u03b1_3757_, v_x_3758_, v___y_3759_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_);
lean_dec(v___y_3765_);
lean_dec_ref(v___y_3764_);
lean_dec(v___y_3763_);
lean_dec_ref(v___y_3762_);
lean_dec(v___y_3761_);
lean_dec_ref(v___y_3760_);
lean_dec_ref(v___y_3759_);
return v_res_3767_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(lean_object* v_00_u03b2_3768_, lean_object* v_x_3769_, size_t v_x_3770_, size_t v_x_3771_, lean_object* v_x_3772_, lean_object* v_x_3773_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___redArg(v_x_3769_, v_x_3770_, v_x_3771_, v_x_3772_, v_x_3773_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3775_, lean_object* v_x_3776_, lean_object* v_x_3777_, lean_object* v_x_3778_, lean_object* v_x_3779_, lean_object* v_x_3780_){
_start:
{
size_t v_x_102774__boxed_3781_; size_t v_x_102775__boxed_3782_; lean_object* v_res_3783_; 
v_x_102774__boxed_3781_ = lean_unbox_usize(v_x_3777_);
lean_dec(v_x_3777_);
v_x_102775__boxed_3782_ = lean_unbox_usize(v_x_3778_);
lean_dec(v_x_3778_);
v_res_3783_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0(v_00_u03b2_3775_, v_x_3776_, v_x_102774__boxed_3781_, v_x_102775__boxed_3782_, v_x_3779_, v_x_3780_);
return v_res_3783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10(lean_object* v_00_u03b1_3784_, lean_object* v_stx_3785_, lean_object* v_output_3786_, lean_object* v_x_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v___x_3795_; 
v___x_3795_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___redArg(v_stx_3785_, v_output_3786_, v_x_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_, v___y_3793_);
return v___x_3795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10___boxed(lean_object* v_00_u03b1_3796_, lean_object* v_stx_3797_, lean_object* v_output_3798_, lean_object* v_x_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v_res_3807_; 
v_res_3807_ = l_Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10(v_00_u03b1_3796_, v_stx_3797_, v_output_3798_, v_x_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec(v___y_3801_);
lean_dec_ref(v___y_3800_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14(lean_object* v_as_3808_, lean_object* v_as_x27_3809_, lean_object* v_b_3810_, lean_object* v_a_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___redArg(v_as_x27_3809_, v_b_3810_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14___boxed(lean_object* v_as_3821_, lean_object* v_as_x27_3822_, lean_object* v_b_3823_, lean_object* v_a_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_){
_start:
{
lean_object* v_res_3833_; 
v_res_3833_ = l_List_forIn_x27_loop___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__14(v_as_3821_, v_as_x27_3822_, v_b_3823_, v_a_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
lean_dec(v___y_3829_);
lean_dec_ref(v___y_3828_);
lean_dec(v___y_3827_);
lean_dec_ref(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec(v_as_x27_3822_);
lean_dec(v_as_3821_);
return v_res_3833_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16(lean_object* v_00_u03b1_3834_, lean_object* v_ref_3835_, lean_object* v_msg_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_){
_start:
{
lean_object* v___x_3845_; 
v___x_3845_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg(v_ref_3835_, v_msg_3836_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_);
return v___x_3845_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___boxed(lean_object* v_00_u03b1_3846_, lean_object* v_ref_3847_, lean_object* v_msg_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v_res_3857_; 
v_res_3857_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16(v_00_u03b1_3846_, v_ref_3847_, v_msg_3848_, v___y_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
lean_dec(v___y_3855_);
lean_dec_ref(v___y_3854_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
lean_dec_ref(v___y_3849_);
lean_dec(v_ref_3847_);
return v_res_3857_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_3858_, lean_object* v_n_3859_, lean_object* v_k_3860_, lean_object* v_v_3861_){
_start:
{
lean_object* v___x_3862_; 
v___x_3862_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4___redArg(v_n_3859_, v_k_3860_, v_v_3861_);
return v___x_3862_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5(lean_object* v_00_u03b2_3863_, size_t v_depth_3864_, lean_object* v_keys_3865_, lean_object* v_vals_3866_, lean_object* v_heq_3867_, lean_object* v_i_3868_, lean_object* v_entries_3869_){
_start:
{
lean_object* v___x_3870_; 
v___x_3870_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___redArg(v_depth_3864_, v_keys_3865_, v_vals_3866_, v_i_3868_, v_entries_3869_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b2_3871_, lean_object* v_depth_3872_, lean_object* v_keys_3873_, lean_object* v_vals_3874_, lean_object* v_heq_3875_, lean_object* v_i_3876_, lean_object* v_entries_3877_){
_start:
{
size_t v_depth_boxed_3878_; lean_object* v_res_3879_; 
v_depth_boxed_3878_ = lean_unbox_usize(v_depth_3872_);
lean_dec(v_depth_3872_);
v_res_3879_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__5(v_00_u03b2_3871_, v_depth_boxed_3878_, v_keys_3873_, v_vals_3874_, v_heq_3875_, v_i_3876_, v_entries_3877_);
lean_dec_ref(v_vals_3874_);
lean_dec_ref(v_keys_3873_);
return v_res_3879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18(lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v___x_3887_; 
v___x_3887_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___redArg(v___y_3885_);
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18___boxed(lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_){
_start:
{
lean_object* v_res_3895_; 
v_res_3895_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13_spec__18(v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v___y_3889_);
lean_dec_ref(v___y_3888_);
return v_res_3895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13(lean_object* v_00_u03b1_3896_, lean_object* v_x_3897_, lean_object* v_mkInfoTree_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_){
_start:
{
lean_object* v___x_3906_; 
v___x_3906_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___redArg(v_x_3897_, v_mkInfoTree_3898_, v___y_3899_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_);
return v___x_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13___boxed(lean_object* v_00_u03b1_3907_, lean_object* v_x_3908_, lean_object* v_mkInfoTree_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_){
_start:
{
lean_object* v_res_3917_; 
v_res_3917_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_withMacroExpansionInfo___at___00Lean_Elab_Term_withMacroExpansion___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__8_spec__10_spec__13(v_00_u03b1_3907_, v_x_3908_, v_mkInfoTree_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
return v_res_3917_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4_spec__14(lean_object* v_00_u03b2_3918_, lean_object* v_x_3919_, lean_object* v_x_3920_, lean_object* v_x_3921_, lean_object* v_x_3922_){
_start:
{
lean_object* v___x_3923_; 
v___x_3923_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__0_spec__0_spec__4_spec__14___redArg(v_x_3919_, v_x_3920_, v_x_3921_, v_x_3922_);
return v___x_3923_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21(lean_object* v_00_u03b2_3924_, lean_object* v_x_3925_, lean_object* v_x_3926_){
_start:
{
uint8_t v___x_3927_; 
v___x_3927_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___redArg(v_x_3925_, v_x_3926_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21___boxed(lean_object* v_00_u03b2_3928_, lean_object* v_x_3929_, lean_object* v_x_3930_){
_start:
{
uint8_t v_res_3931_; lean_object* v_r_3932_; 
v_res_3931_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21(v_00_u03b2_3928_, v_x_3929_, v_x_3930_);
lean_dec_ref(v_x_3930_);
lean_dec_ref(v_x_3929_);
v_r_3932_ = lean_box(v_res_3931_);
return v_r_3932_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25(lean_object* v_00_u03b2_3933_, lean_object* v_x_3934_, size_t v_x_3935_, lean_object* v_x_3936_){
_start:
{
uint8_t v___x_3937_; 
v___x_3937_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___redArg(v_x_3934_, v_x_3935_, v_x_3936_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25___boxed(lean_object* v_00_u03b2_3938_, lean_object* v_x_3939_, lean_object* v_x_3940_, lean_object* v_x_3941_){
_start:
{
size_t v_x_102937__boxed_3942_; uint8_t v_res_3943_; lean_object* v_r_3944_; 
v_x_102937__boxed_3942_ = lean_unbox_usize(v_x_3940_);
lean_dec(v_x_3940_);
v_res_3943_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25(v_00_u03b2_3938_, v_x_3939_, v_x_102937__boxed_3942_, v_x_3941_);
lean_dec_ref(v_x_3941_);
lean_dec_ref(v_x_3939_);
v_r_3944_ = lean_box(v_res_3943_);
return v_r_3944_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27(lean_object* v_00_u03b2_3945_, lean_object* v_keys_3946_, lean_object* v_vals_3947_, lean_object* v_heq_3948_, lean_object* v_i_3949_, lean_object* v_k_3950_){
_start:
{
uint8_t v___x_3951_; 
v___x_3951_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___redArg(v_keys_3946_, v_i_3949_, v_k_3950_);
return v___x_3951_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27___boxed(lean_object* v_00_u03b2_3952_, lean_object* v_keys_3953_, lean_object* v_vals_3954_, lean_object* v_heq_3955_, lean_object* v_i_3956_, lean_object* v_k_3957_){
_start:
{
uint8_t v_res_3958_; lean_object* v_r_3959_; 
v_res_3958_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__13_spec__17_spec__21_spec__25_spec__27(v_00_u03b2_3952_, v_keys_3953_, v_vals_3954_, v_heq_3955_, v_i_3956_, v_k_3957_);
lean_dec_ref(v_k_3957_);
lean_dec_ref(v_vals_3954_);
lean_dec_ref(v_keys_3953_);
v_r_3959_ = lean_box(v_res_3958_);
return v_r_3959_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3960_; 
v___x_3960_ = lean_mk_string_unchecked("doReassign", 10, 10);
return v___x_3960_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3961_; 
v___x_3961_ = lean_mk_string_unchecked("reassignment with `|` (i.e., \"else clause\") is not supported", 60, 60);
return v___x_3961_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3962_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__1, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__1_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__1);
v___x_3963_ = l_Lean_stringToMessageData(v___x_3962_);
return v___x_3963_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3964_; 
v___x_3964_ = lean_mk_string_unchecked("doLetElse", 9, 9);
return v___x_3964_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3965_; 
v___x_3965_ = lean_mk_string_unchecked("letConfig", 9, 9);
return v___x_3965_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3966_; 
v___x_3966_ = lean_mk_string_unchecked("mut", 3, 3);
return v___x_3966_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3967_; 
v___x_3967_ = lean_mk_string_unchecked("doLet", 5, 5);
return v___x_3967_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3968_; 
v___x_3968_ = lean_mk_string_unchecked("doHave", 6, 6);
return v___x_3968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0(lean_object* v_letOrReassign_3969_, lean_object* v_otherwise_x3f_3970_, uint8_t v___x_3971_, lean_object* v___x_3972_, lean_object* v___x_3973_, lean_object* v___x_3974_, lean_object* v___x_3975_, lean_object* v___x_3976_, lean_object* v_dec_3977_, uint8_t v___x_3978_, lean_object* v___y_3979_, lean_object* v___x_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v___y_3990_; lean_object* v___y_3991_; lean_object* v___y_3992_; lean_object* v___y_3993_; lean_object* v___y_3994_; lean_object* v___y_3995_; lean_object* v___y_3996_; uint8_t v___y_4012_; 
switch(lean_obj_tag(v_letOrReassign_3969_))
{
case 0:
{
if (lean_obj_tag(v_otherwise_x3f_3970_) == 1)
{
lean_object* v_mutTk_x3f_4023_; lean_object* v_val_4024_; lean_object* v_ref_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___y_4034_; lean_object* v___y_4035_; lean_object* v___y_4036_; lean_object* v___y_4037_; lean_object* v___y_4038_; lean_object* v___y_4055_; 
v_mutTk_x3f_4023_ = lean_ctor_get(v_letOrReassign_3969_, 0);
v_val_4024_ = lean_ctor_get(v_otherwise_x3f_3970_, 0);
lean_inc(v_val_4024_);
lean_dec_ref(v_otherwise_x3f_3970_);
v_ref_4025_ = lean_ctor_get(v___y_3986_, 5);
v___x_4026_ = l_Lean_SourceInfo_fromRef(v_ref_4025_, v___x_3971_);
v___x_4027_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3);
lean_inc_ref(v___x_3974_);
lean_inc_ref(v___x_3973_);
lean_inc_ref(v___x_3972_);
v___x_4028_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4027_);
v___x_4029_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
lean_inc(v___x_4026_);
v___x_4030_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4026_);
lean_ctor_set(v___x_4030_, 1, v___x_4029_);
v___x_4031_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4032_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_4023_) == 1)
{
lean_object* v_val_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; 
v_val_4070_ = lean_ctor_get(v_mutTk_x3f_4023_, 0);
v___x_4071_ = l_Lean_SourceInfo_fromRef(v_val_4070_, v___x_3978_);
v___x_4072_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5);
v___x_4073_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4073_, 0, v___x_4071_);
lean_ctor_set(v___x_4073_, 1, v___x_4072_);
v___x_4074_ = l_Array_mkArray1___redArg(v___x_4073_);
v___y_4055_ = v___x_4074_;
goto v___jp_4054_;
}
else
{
lean_object* v___x_4075_; 
v___x_4075_ = lean_mk_empty_array_with_capacity(v___x_3980_);
v___y_4055_ = v___x_4075_;
goto v___jp_4054_;
}
v___jp_4033_:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; lean_object* v___x_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; 
v___x_4039_ = l_Array_append___redArg(v___x_4032_, v___y_4038_);
lean_dec_ref(v___y_4038_);
lean_inc(v___x_4026_);
v___x_4040_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4040_, 0, v___x_4026_);
lean_ctor_set(v___x_4040_, 1, v___x_4031_);
lean_ctor_set(v___x_4040_, 2, v___x_4039_);
v___x_4041_ = lean_unsigned_to_nat(9u);
v___x_4042_ = lean_mk_empty_array_with_capacity(v___x_4041_);
v___x_4043_ = lean_array_push(v___x_4042_, v___x_4030_);
v___x_4044_ = lean_array_push(v___x_4043_, v___y_4034_);
v___x_4045_ = lean_array_push(v___x_4044_, v___y_4035_);
v___x_4046_ = lean_array_push(v___x_4045_, v___x_3975_);
v___x_4047_ = lean_array_push(v___x_4046_, v___y_4037_);
v___x_4048_ = lean_array_push(v___x_4047_, v___x_3976_);
v___x_4049_ = lean_array_push(v___x_4048_, v___y_4036_);
v___x_4050_ = lean_array_push(v___x_4049_, v_val_4024_);
v___x_4051_ = lean_array_push(v___x_4050_, v___x_4040_);
v___x_4052_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4052_, 0, v___x_4026_);
lean_ctor_set(v___x_4052_, 1, v___x_4028_);
lean_ctor_set(v___x_4052_, 2, v___x_4051_);
v___x_4053_ = l_Lean_Elab_Do_elabDoElem(v___x_4052_, v_dec_3977_, v___x_3978_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
return v___x_4053_;
}
v___jp_4054_:
{
lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; lean_object* v___x_4062_; lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4056_ = l_Array_append___redArg(v___x_4032_, v___y_4055_);
lean_dec_ref(v___y_4055_);
lean_inc_n(v___x_4026_, 5);
v___x_4057_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4057_, 0, v___x_4026_);
lean_ctor_set(v___x_4057_, 1, v___x_4031_);
lean_ctor_set(v___x_4057_, 2, v___x_4056_);
v___x_4058_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4);
v___x_4059_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4058_);
v___x_4060_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4060_, 0, v___x_4026_);
lean_ctor_set(v___x_4060_, 1, v___x_4031_);
lean_ctor_set(v___x_4060_, 2, v___x_4032_);
v___x_4061_ = l_Lean_Syntax_node1(v___x_4026_, v___x_4059_, v___x_4060_);
v___x_4062_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4063_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4063_, 0, v___x_4026_);
lean_ctor_set(v___x_4063_, 1, v___x_4062_);
v___x_4064_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15);
v___x_4065_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4026_);
lean_ctor_set(v___x_4065_, 1, v___x_4064_);
if (lean_obj_tag(v___y_3979_) == 0)
{
lean_object* v___x_4066_; 
v___x_4066_ = lean_mk_empty_array_with_capacity(v___x_3980_);
v___y_4034_ = v___x_4057_;
v___y_4035_ = v___x_4061_;
v___y_4036_ = v___x_4065_;
v___y_4037_ = v___x_4063_;
v___y_4038_ = v___x_4066_;
goto v___jp_4033_;
}
else
{
lean_object* v_val_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; 
v_val_4067_ = lean_ctor_get(v___y_3979_, 0);
lean_inc(v_val_4067_);
lean_dec_ref(v___y_3979_);
v___x_4068_ = lean_mk_empty_array_with_capacity(v___x_3980_);
v___x_4069_ = lean_array_push(v___x_4068_, v_val_4067_);
v___y_4034_ = v___x_4057_;
v___y_4035_ = v___x_4061_;
v___y_4036_ = v___x_4065_;
v___y_4037_ = v___x_4063_;
v___y_4038_ = v___x_4069_;
goto v___jp_4033_;
}
}
}
else
{
lean_object* v_mutTk_x3f_4076_; lean_object* v_ref_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___y_4086_; 
lean_dec(v___y_3979_);
lean_dec(v_otherwise_x3f_3970_);
v_mutTk_x3f_4076_ = lean_ctor_get(v_letOrReassign_3969_, 0);
v_ref_4077_ = lean_ctor_get(v___y_3986_, 5);
v___x_4078_ = l_Lean_SourceInfo_fromRef(v_ref_4077_, v___x_3971_);
v___x_4079_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6);
lean_inc_ref(v___x_3974_);
lean_inc_ref(v___x_3973_);
lean_inc_ref(v___x_3972_);
v___x_4080_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4079_);
v___x_4081_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
lean_inc(v___x_4078_);
v___x_4082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4082_, 0, v___x_4078_);
lean_ctor_set(v___x_4082_, 1, v___x_4081_);
v___x_4083_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4084_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_4076_) == 1)
{
lean_object* v_val_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v_val_4103_ = lean_ctor_get(v_mutTk_x3f_4076_, 0);
v___x_4104_ = l_Lean_SourceInfo_fromRef(v_val_4103_, v___x_3978_);
v___x_4105_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5);
v___x_4106_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4104_);
lean_ctor_set(v___x_4106_, 1, v___x_4105_);
v___x_4107_ = l_Array_mkArray1___redArg(v___x_4106_);
v___y_4086_ = v___x_4107_;
goto v___jp_4085_;
}
else
{
lean_object* v___x_4108_; 
v___x_4108_ = lean_mk_empty_array_with_capacity(v___x_3980_);
v___y_4086_ = v___x_4108_;
goto v___jp_4085_;
}
v___jp_4085_:
{
lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; lean_object* v___x_4102_; 
v___x_4087_ = l_Array_append___redArg(v___x_4084_, v___y_4086_);
lean_dec_ref(v___y_4086_);
lean_inc_n(v___x_4078_, 6);
v___x_4088_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4088_, 0, v___x_4078_);
lean_ctor_set(v___x_4088_, 1, v___x_4083_);
lean_ctor_set(v___x_4088_, 2, v___x_4087_);
v___x_4089_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4);
lean_inc_ref_n(v___x_3974_, 2);
lean_inc_ref_n(v___x_3973_, 2);
lean_inc_ref_n(v___x_3972_, 2);
v___x_4090_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4089_);
v___x_4091_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4091_, 0, v___x_4078_);
lean_ctor_set(v___x_4091_, 1, v___x_4083_);
lean_ctor_set(v___x_4091_, 2, v___x_4084_);
lean_inc_ref_n(v___x_4091_, 2);
v___x_4092_ = l_Lean_Syntax_node1(v___x_4078_, v___x_4090_, v___x_4091_);
v___x_4093_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3);
v___x_4094_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4093_);
v___x_4095_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9);
v___x_4096_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4095_);
v___x_4097_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4098_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4098_, 0, v___x_4078_);
lean_ctor_set(v___x_4098_, 1, v___x_4097_);
v___x_4099_ = l_Lean_Syntax_node5(v___x_4078_, v___x_4096_, v___x_3975_, v___x_4091_, v___x_4091_, v___x_4098_, v___x_3976_);
v___x_4100_ = l_Lean_Syntax_node1(v___x_4078_, v___x_4094_, v___x_4099_);
v___x_4101_ = l_Lean_Syntax_node4(v___x_4078_, v___x_4080_, v___x_4082_, v___x_4088_, v___x_4092_, v___x_4100_);
v___x_4102_ = l_Lean_Elab_Do_elabDoElem(v___x_4101_, v_dec_3977_, v___x_3978_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
return v___x_4102_;
}
}
}
case 1:
{
lean_dec(v___y_3979_);
if (lean_obj_tag(v_otherwise_x3f_3970_) == 1)
{
lean_object* v___x_4109_; 
lean_dec_ref(v_otherwise_x3f_3970_);
lean_dec_ref(v_dec_3977_);
lean_dec(v___x_3976_);
lean_dec(v___x_3975_);
lean_dec_ref(v___x_3974_);
lean_dec_ref(v___x_3973_);
lean_dec_ref(v___x_3972_);
v___x_4109_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4109_;
}
else
{
lean_object* v_ref_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; 
lean_dec(v_otherwise_x3f_3970_);
v_ref_4110_ = lean_ctor_get(v___y_3986_, 5);
v___x_4111_ = l_Lean_SourceInfo_fromRef(v_ref_4110_, v___x_3971_);
v___x_4112_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7);
lean_inc_ref_n(v___x_3974_, 3);
lean_inc_ref_n(v___x_3973_, 3);
lean_inc_ref_n(v___x_3972_, 3);
v___x_4113_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4112_);
v___x_4114_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7);
lean_inc_n(v___x_4111_, 6);
v___x_4115_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4111_);
lean_ctor_set(v___x_4115_, 1, v___x_4114_);
v___x_4116_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4);
v___x_4117_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4116_);
v___x_4118_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4119_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_4120_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4120_, 0, v___x_4111_);
lean_ctor_set(v___x_4120_, 1, v___x_4118_);
lean_ctor_set(v___x_4120_, 2, v___x_4119_);
lean_inc_ref_n(v___x_4120_, 2);
v___x_4121_ = l_Lean_Syntax_node1(v___x_4111_, v___x_4117_, v___x_4120_);
v___x_4122_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3);
v___x_4123_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4122_);
v___x_4124_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9);
v___x_4125_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4124_);
v___x_4126_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4127_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4111_);
lean_ctor_set(v___x_4127_, 1, v___x_4126_);
v___x_4128_ = l_Lean_Syntax_node5(v___x_4111_, v___x_4125_, v___x_3975_, v___x_4120_, v___x_4120_, v___x_4127_, v___x_3976_);
v___x_4129_ = l_Lean_Syntax_node1(v___x_4111_, v___x_4123_, v___x_4128_);
v___x_4130_ = l_Lean_Syntax_node3(v___x_4111_, v___x_4113_, v___x_4115_, v___x_4121_, v___x_4129_);
v___x_4131_ = l_Lean_Elab_Do_elabDoElem(v___x_4130_, v_dec_3977_, v___x_3978_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
return v___x_4131_;
}
}
default: 
{
lean_dec(v_otherwise_x3f_3970_);
if (lean_obj_tag(v___y_3979_) == 0)
{
v___y_4012_ = v___x_3978_;
goto v___jp_4011_;
}
else
{
lean_dec_ref(v___y_3979_);
v___y_4012_ = v___x_3971_;
goto v___jp_4011_;
}
}
}
v___jp_3989_:
{
lean_object* v_ref_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; 
v_ref_3997_ = lean_ctor_get(v___y_3995_, 5);
v___x_3998_ = l_Lean_SourceInfo_fromRef(v_ref_3997_, v___x_3971_);
v___x_3999_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0);
lean_inc_ref(v___x_3974_);
lean_inc_ref(v___x_3973_);
lean_inc_ref(v___x_3972_);
v___x_4000_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_3999_);
v___x_4001_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9);
v___x_4002_ = l_Lean_Name_mkStr4(v___x_3972_, v___x_3973_, v___x_3974_, v___x_4001_);
v___x_4003_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4004_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_3998_, 3);
v___x_4005_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4005_, 0, v___x_3998_);
lean_ctor_set(v___x_4005_, 1, v___x_4003_);
lean_ctor_set(v___x_4005_, 2, v___x_4004_);
v___x_4006_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4007_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4007_, 0, v___x_3998_);
lean_ctor_set(v___x_4007_, 1, v___x_4006_);
lean_inc_ref(v___x_4005_);
v___x_4008_ = l_Lean_Syntax_node5(v___x_3998_, v___x_4002_, v___x_3975_, v___x_4005_, v___x_4005_, v___x_4007_, v___x_3976_);
v___x_4009_ = l_Lean_Syntax_node1(v___x_3998_, v___x_4000_, v___x_4008_);
v___x_4010_ = l_Lean_Elab_Do_elabDoElem(v___x_4009_, v_dec_3977_, v___x_3978_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
return v___x_4010_;
}
v___jp_4011_:
{
if (v___y_4012_ == 0)
{
lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v_a_4015_; lean_object* v___x_4017_; uint8_t v_isShared_4018_; uint8_t v_isSharedCheck_4022_; 
lean_dec_ref(v_dec_3977_);
lean_dec(v___x_3976_);
lean_dec(v___x_3975_);
lean_dec_ref(v___x_3974_);
lean_dec_ref(v___x_3973_);
lean_dec_ref(v___x_3972_);
v___x_4013_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2);
v___x_4014_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(v___x_4013_, v___y_3984_, v___y_3985_, v___y_3986_, v___y_3987_);
v_a_4015_ = lean_ctor_get(v___x_4014_, 0);
v_isSharedCheck_4022_ = !lean_is_exclusive(v___x_4014_);
if (v_isSharedCheck_4022_ == 0)
{
v___x_4017_ = v___x_4014_;
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
else
{
lean_inc(v_a_4015_);
lean_dec(v___x_4014_);
v___x_4017_ = lean_box(0);
v_isShared_4018_ = v_isSharedCheck_4022_;
goto v_resetjp_4016_;
}
v_resetjp_4016_:
{
lean_object* v___x_4020_; 
if (v_isShared_4018_ == 0)
{
v___x_4020_ = v___x_4017_;
goto v_reusejp_4019_;
}
else
{
lean_object* v_reuseFailAlloc_4021_; 
v_reuseFailAlloc_4021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4021_, 0, v_a_4015_);
v___x_4020_ = v_reuseFailAlloc_4021_;
goto v_reusejp_4019_;
}
v_reusejp_4019_:
{
return v___x_4020_;
}
}
}
else
{
v___y_3990_ = v___y_3981_;
v___y_3991_ = v___y_3982_;
v___y_3992_ = v___y_3983_;
v___y_3993_ = v___y_3984_;
v___y_3994_ = v___y_3985_;
v___y_3995_ = v___y_3986_;
v___y_3996_ = v___y_3987_;
goto v___jp_3989_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__0___boxed(lean_object** _args){
lean_object* v_letOrReassign_4132_ = _args[0];
lean_object* v_otherwise_x3f_4133_ = _args[1];
lean_object* v___x_4134_ = _args[2];
lean_object* v___x_4135_ = _args[3];
lean_object* v___x_4136_ = _args[4];
lean_object* v___x_4137_ = _args[5];
lean_object* v___x_4138_ = _args[6];
lean_object* v___x_4139_ = _args[7];
lean_object* v_dec_4140_ = _args[8];
lean_object* v___x_4141_ = _args[9];
lean_object* v___y_4142_ = _args[10];
lean_object* v___x_4143_ = _args[11];
lean_object* v___y_4144_ = _args[12];
lean_object* v___y_4145_ = _args[13];
lean_object* v___y_4146_ = _args[14];
lean_object* v___y_4147_ = _args[15];
lean_object* v___y_4148_ = _args[16];
lean_object* v___y_4149_ = _args[17];
lean_object* v___y_4150_ = _args[18];
lean_object* v___y_4151_ = _args[19];
_start:
{
uint8_t v___x_39001__boxed_4152_; uint8_t v___x_39007__boxed_4153_; lean_object* v_res_4154_; 
v___x_39001__boxed_4152_ = lean_unbox(v___x_4134_);
v___x_39007__boxed_4153_ = lean_unbox(v___x_4141_);
v_res_4154_ = l_Lean_Elab_Do_elabDoArrow___lam__0(v_letOrReassign_4132_, v_otherwise_x3f_4133_, v___x_39001__boxed_4152_, v___x_4135_, v___x_4136_, v___x_4137_, v___x_4138_, v___x_4139_, v_dec_4140_, v___x_39007__boxed_4153_, v___y_4142_, v___x_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_);
lean_dec(v___y_4150_);
lean_dec_ref(v___y_4149_);
lean_dec(v___y_4148_);
lean_dec_ref(v___y_4147_);
lean_dec(v___y_4146_);
lean_dec_ref(v___y_4145_);
lean_dec_ref(v___y_4144_);
lean_dec(v___x_4143_);
lean_dec(v_letOrReassign_4132_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__1(lean_object* v_letOrReassign_4155_, lean_object* v_otherwise_x3f_4156_, uint8_t v___x_4157_, lean_object* v___x_4158_, lean_object* v___x_4159_, lean_object* v___x_4160_, lean_object* v___x_4161_, lean_object* v___x_4162_, lean_object* v_dec_4163_, uint8_t v___x_4164_, lean_object* v___y_4165_, lean_object* v___x_4166_, uint8_t v___x_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_){
_start:
{
lean_object* v___y_4177_; lean_object* v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; uint8_t v___y_4199_; 
switch(lean_obj_tag(v_letOrReassign_4155_))
{
case 0:
{
if (lean_obj_tag(v_otherwise_x3f_4156_) == 1)
{
lean_object* v_mutTk_x3f_4210_; lean_object* v_val_4211_; lean_object* v_ref_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4223_; lean_object* v___y_4224_; lean_object* v___y_4225_; lean_object* v___y_4242_; 
v_mutTk_x3f_4210_ = lean_ctor_get(v_letOrReassign_4155_, 0);
v_val_4211_ = lean_ctor_get(v_otherwise_x3f_4156_, 0);
lean_inc(v_val_4211_);
lean_dec_ref(v_otherwise_x3f_4156_);
v_ref_4212_ = lean_ctor_get(v___y_4173_, 5);
v___x_4213_ = l_Lean_SourceInfo_fromRef(v_ref_4212_, v___x_4157_);
v___x_4214_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3);
lean_inc_ref(v___x_4160_);
lean_inc_ref(v___x_4159_);
lean_inc_ref(v___x_4158_);
v___x_4215_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4214_);
v___x_4216_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
lean_inc(v___x_4213_);
v___x_4217_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4217_, 0, v___x_4213_);
lean_ctor_set(v___x_4217_, 1, v___x_4216_);
v___x_4218_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4219_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_4210_) == 1)
{
lean_object* v_val_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___x_4260_; lean_object* v___x_4261_; 
v_val_4257_ = lean_ctor_get(v_mutTk_x3f_4210_, 0);
v___x_4258_ = l_Lean_SourceInfo_fromRef(v_val_4257_, v___x_4164_);
v___x_4259_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5);
v___x_4260_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4258_);
lean_ctor_set(v___x_4260_, 1, v___x_4259_);
v___x_4261_ = l_Array_mkArray1___redArg(v___x_4260_);
v___y_4242_ = v___x_4261_;
goto v___jp_4241_;
}
else
{
lean_object* v___x_4262_; 
v___x_4262_ = lean_mk_empty_array_with_capacity(v___x_4166_);
v___y_4242_ = v___x_4262_;
goto v___jp_4241_;
}
v___jp_4220_:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; 
v___x_4226_ = l_Array_append___redArg(v___x_4219_, v___y_4225_);
lean_dec_ref(v___y_4225_);
lean_inc(v___x_4213_);
v___x_4227_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4213_);
lean_ctor_set(v___x_4227_, 1, v___x_4218_);
lean_ctor_set(v___x_4227_, 2, v___x_4226_);
v___x_4228_ = lean_unsigned_to_nat(9u);
v___x_4229_ = lean_mk_empty_array_with_capacity(v___x_4228_);
v___x_4230_ = lean_array_push(v___x_4229_, v___x_4217_);
v___x_4231_ = lean_array_push(v___x_4230_, v___y_4224_);
v___x_4232_ = lean_array_push(v___x_4231_, v___y_4222_);
v___x_4233_ = lean_array_push(v___x_4232_, v___x_4161_);
v___x_4234_ = lean_array_push(v___x_4233_, v___y_4221_);
v___x_4235_ = lean_array_push(v___x_4234_, v___x_4162_);
v___x_4236_ = lean_array_push(v___x_4235_, v___y_4223_);
v___x_4237_ = lean_array_push(v___x_4236_, v_val_4211_);
v___x_4238_ = lean_array_push(v___x_4237_, v___x_4227_);
v___x_4239_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4239_, 0, v___x_4213_);
lean_ctor_set(v___x_4239_, 1, v___x_4215_);
lean_ctor_set(v___x_4239_, 2, v___x_4238_);
v___x_4240_ = l_Lean_Elab_Do_elabDoElem(v___x_4239_, v_dec_4163_, v___x_4164_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_);
return v___x_4240_;
}
v___jp_4241_:
{
lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4243_ = l_Array_append___redArg(v___x_4219_, v___y_4242_);
lean_dec_ref(v___y_4242_);
lean_inc_n(v___x_4213_, 5);
v___x_4244_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4244_, 0, v___x_4213_);
lean_ctor_set(v___x_4244_, 1, v___x_4218_);
lean_ctor_set(v___x_4244_, 2, v___x_4243_);
v___x_4245_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4);
v___x_4246_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4245_);
v___x_4247_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4247_, 0, v___x_4213_);
lean_ctor_set(v___x_4247_, 1, v___x_4218_);
lean_ctor_set(v___x_4247_, 2, v___x_4219_);
v___x_4248_ = l_Lean_Syntax_node1(v___x_4213_, v___x_4246_, v___x_4247_);
v___x_4249_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4250_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4250_, 0, v___x_4213_);
lean_ctor_set(v___x_4250_, 1, v___x_4249_);
v___x_4251_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15);
v___x_4252_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4213_);
lean_ctor_set(v___x_4252_, 1, v___x_4251_);
if (lean_obj_tag(v___y_4165_) == 0)
{
lean_object* v___x_4253_; 
v___x_4253_ = lean_mk_empty_array_with_capacity(v___x_4166_);
v___y_4221_ = v___x_4250_;
v___y_4222_ = v___x_4248_;
v___y_4223_ = v___x_4252_;
v___y_4224_ = v___x_4244_;
v___y_4225_ = v___x_4253_;
goto v___jp_4220_;
}
else
{
lean_object* v_val_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v_val_4254_ = lean_ctor_get(v___y_4165_, 0);
lean_inc(v_val_4254_);
lean_dec_ref(v___y_4165_);
v___x_4255_ = lean_mk_empty_array_with_capacity(v___x_4166_);
v___x_4256_ = lean_array_push(v___x_4255_, v_val_4254_);
v___y_4221_ = v___x_4250_;
v___y_4222_ = v___x_4248_;
v___y_4223_ = v___x_4252_;
v___y_4224_ = v___x_4244_;
v___y_4225_ = v___x_4256_;
goto v___jp_4220_;
}
}
}
else
{
lean_object* v_mutTk_x3f_4263_; lean_object* v_ref_4264_; lean_object* v___x_4265_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; lean_object* v___x_4270_; lean_object* v___x_4271_; lean_object* v___y_4273_; 
lean_dec(v___y_4165_);
lean_dec(v_otherwise_x3f_4156_);
v_mutTk_x3f_4263_ = lean_ctor_get(v_letOrReassign_4155_, 0);
v_ref_4264_ = lean_ctor_get(v___y_4173_, 5);
v___x_4265_ = l_Lean_SourceInfo_fromRef(v_ref_4264_, v___x_4157_);
v___x_4266_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6);
lean_inc_ref(v___x_4160_);
lean_inc_ref(v___x_4159_);
lean_inc_ref(v___x_4158_);
v___x_4267_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4266_);
v___x_4268_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
lean_inc(v___x_4265_);
v___x_4269_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4265_);
lean_ctor_set(v___x_4269_, 1, v___x_4268_);
v___x_4270_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4271_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
if (lean_obj_tag(v_mutTk_x3f_4263_) == 1)
{
lean_object* v_val_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; lean_object* v___x_4293_; lean_object* v___x_4294_; 
v_val_4290_ = lean_ctor_get(v_mutTk_x3f_4263_, 0);
v___x_4291_ = l_Lean_SourceInfo_fromRef(v_val_4290_, v___x_4164_);
v___x_4292_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5);
v___x_4293_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4293_, 0, v___x_4291_);
lean_ctor_set(v___x_4293_, 1, v___x_4292_);
v___x_4294_ = l_Array_mkArray1___redArg(v___x_4293_);
v___y_4273_ = v___x_4294_;
goto v___jp_4272_;
}
else
{
lean_object* v___x_4295_; 
v___x_4295_ = lean_mk_empty_array_with_capacity(v___x_4166_);
v___y_4273_ = v___x_4295_;
goto v___jp_4272_;
}
v___jp_4272_:
{
lean_object* v___x_4274_; lean_object* v___x_4275_; lean_object* v___x_4276_; lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; lean_object* v___x_4287_; lean_object* v___x_4288_; lean_object* v___x_4289_; 
v___x_4274_ = l_Array_append___redArg(v___x_4271_, v___y_4273_);
lean_dec_ref(v___y_4273_);
lean_inc_n(v___x_4265_, 6);
v___x_4275_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4275_, 0, v___x_4265_);
lean_ctor_set(v___x_4275_, 1, v___x_4270_);
lean_ctor_set(v___x_4275_, 2, v___x_4274_);
v___x_4276_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4);
lean_inc_ref_n(v___x_4160_, 2);
lean_inc_ref_n(v___x_4159_, 2);
lean_inc_ref_n(v___x_4158_, 2);
v___x_4277_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4276_);
v___x_4278_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4278_, 0, v___x_4265_);
lean_ctor_set(v___x_4278_, 1, v___x_4270_);
lean_ctor_set(v___x_4278_, 2, v___x_4271_);
lean_inc_ref_n(v___x_4278_, 2);
v___x_4279_ = l_Lean_Syntax_node1(v___x_4265_, v___x_4277_, v___x_4278_);
v___x_4280_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3);
v___x_4281_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4280_);
v___x_4282_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9);
v___x_4283_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4282_);
v___x_4284_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4285_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4285_, 0, v___x_4265_);
lean_ctor_set(v___x_4285_, 1, v___x_4284_);
v___x_4286_ = l_Lean_Syntax_node5(v___x_4265_, v___x_4283_, v___x_4161_, v___x_4278_, v___x_4278_, v___x_4285_, v___x_4162_);
v___x_4287_ = l_Lean_Syntax_node1(v___x_4265_, v___x_4281_, v___x_4286_);
v___x_4288_ = l_Lean_Syntax_node4(v___x_4265_, v___x_4267_, v___x_4269_, v___x_4275_, v___x_4279_, v___x_4287_);
v___x_4289_ = l_Lean_Elab_Do_elabDoElem(v___x_4288_, v_dec_4163_, v___x_4164_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_);
return v___x_4289_;
}
}
}
case 1:
{
lean_dec(v___y_4165_);
if (lean_obj_tag(v_otherwise_x3f_4156_) == 1)
{
lean_object* v___x_4296_; 
lean_dec_ref(v_otherwise_x3f_4156_);
lean_dec_ref(v_dec_4163_);
lean_dec(v___x_4162_);
lean_dec(v___x_4161_);
lean_dec_ref(v___x_4160_);
lean_dec_ref(v___x_4159_);
lean_dec_ref(v___x_4158_);
v___x_4296_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4296_;
}
else
{
lean_object* v_ref_4297_; lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; lean_object* v___x_4301_; lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; 
lean_dec(v_otherwise_x3f_4156_);
v_ref_4297_ = lean_ctor_get(v___y_4173_, 5);
v___x_4298_ = l_Lean_SourceInfo_fromRef(v_ref_4297_, v___x_4157_);
v___x_4299_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7);
lean_inc_ref_n(v___x_4160_, 3);
lean_inc_ref_n(v___x_4159_, 3);
lean_inc_ref_n(v___x_4158_, 3);
v___x_4300_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4299_);
v___x_4301_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__7);
lean_inc_n(v___x_4298_, 6);
v___x_4302_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4302_, 0, v___x_4298_);
lean_ctor_set(v___x_4302_, 1, v___x_4301_);
v___x_4303_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4);
v___x_4304_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4303_);
v___x_4305_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4306_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_4307_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4307_, 0, v___x_4298_);
lean_ctor_set(v___x_4307_, 1, v___x_4305_);
lean_ctor_set(v___x_4307_, 2, v___x_4306_);
lean_inc_ref_n(v___x_4307_, 2);
v___x_4308_ = l_Lean_Syntax_node1(v___x_4298_, v___x_4304_, v___x_4307_);
v___x_4309_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__3);
v___x_4310_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4309_);
v___x_4311_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9);
v___x_4312_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4311_);
v___x_4313_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4314_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4314_, 0, v___x_4298_);
lean_ctor_set(v___x_4314_, 1, v___x_4313_);
v___x_4315_ = l_Lean_Syntax_node5(v___x_4298_, v___x_4312_, v___x_4161_, v___x_4307_, v___x_4307_, v___x_4314_, v___x_4162_);
v___x_4316_ = l_Lean_Syntax_node1(v___x_4298_, v___x_4310_, v___x_4315_);
v___x_4317_ = l_Lean_Syntax_node3(v___x_4298_, v___x_4300_, v___x_4302_, v___x_4308_, v___x_4316_);
v___x_4318_ = l_Lean_Elab_Do_elabDoElem(v___x_4317_, v_dec_4163_, v___x_4164_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_);
return v___x_4318_;
}
}
default: 
{
lean_dec(v_otherwise_x3f_4156_);
if (lean_obj_tag(v___y_4165_) == 0)
{
v___y_4199_ = v___x_4167_;
goto v___jp_4198_;
}
else
{
lean_dec_ref(v___y_4165_);
v___y_4199_ = v___x_4157_;
goto v___jp_4198_;
}
}
}
v___jp_4176_:
{
lean_object* v_ref_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; 
v_ref_4184_ = lean_ctor_get(v___y_4182_, 5);
v___x_4185_ = l_Lean_SourceInfo_fromRef(v_ref_4184_, v___x_4157_);
v___x_4186_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0);
lean_inc_ref(v___x_4160_);
lean_inc_ref(v___x_4159_);
lean_inc_ref(v___x_4158_);
v___x_4187_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4186_);
v___x_4188_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__9);
v___x_4189_ = l_Lean_Name_mkStr4(v___x_4158_, v___x_4159_, v___x_4160_, v___x_4188_);
v___x_4190_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_4191_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
lean_inc_n(v___x_4185_, 3);
v___x_4192_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_4192_, 0, v___x_4185_);
lean_ctor_set(v___x_4192_, 1, v___x_4190_);
lean_ctor_set(v___x_4192_, 2, v___x_4191_);
v___x_4193_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_4194_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4185_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
lean_inc_ref(v___x_4192_);
v___x_4195_ = l_Lean_Syntax_node5(v___x_4185_, v___x_4189_, v___x_4161_, v___x_4192_, v___x_4192_, v___x_4194_, v___x_4162_);
v___x_4196_ = l_Lean_Syntax_node1(v___x_4185_, v___x_4187_, v___x_4195_);
v___x_4197_ = l_Lean_Elab_Do_elabDoElem(v___x_4196_, v_dec_4163_, v___x_4164_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_);
return v___x_4197_;
}
v___jp_4198_:
{
if (v___y_4199_ == 0)
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v_a_4202_; lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4209_; 
lean_dec_ref(v_dec_4163_);
lean_dec(v___x_4162_);
lean_dec(v___x_4161_);
lean_dec_ref(v___x_4160_);
lean_dec_ref(v___x_4159_);
lean_dec_ref(v___x_4158_);
v___x_4200_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__2);
v___x_4201_ = l_Lean_throwError___at___00__private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo_spec__0___redArg(v___x_4200_, v___y_4171_, v___y_4172_, v___y_4173_, v___y_4174_);
v_a_4202_ = lean_ctor_get(v___x_4201_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4201_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4204_ = v___x_4201_;
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
else
{
lean_inc(v_a_4202_);
lean_dec(v___x_4201_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4209_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_a_4202_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
}
else
{
v___y_4177_ = v___y_4168_;
v___y_4178_ = v___y_4169_;
v___y_4179_ = v___y_4170_;
v___y_4180_ = v___y_4171_;
v___y_4181_ = v___y_4172_;
v___y_4182_ = v___y_4173_;
v___y_4183_ = v___y_4174_;
goto v___jp_4176_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___lam__1___boxed(lean_object** _args){
lean_object* v_letOrReassign_4319_ = _args[0];
lean_object* v_otherwise_x3f_4320_ = _args[1];
lean_object* v___x_4321_ = _args[2];
lean_object* v___x_4322_ = _args[3];
lean_object* v___x_4323_ = _args[4];
lean_object* v___x_4324_ = _args[5];
lean_object* v___x_4325_ = _args[6];
lean_object* v___x_4326_ = _args[7];
lean_object* v_dec_4327_ = _args[8];
lean_object* v___x_4328_ = _args[9];
lean_object* v___y_4329_ = _args[10];
lean_object* v___x_4330_ = _args[11];
lean_object* v___x_4331_ = _args[12];
lean_object* v___y_4332_ = _args[13];
lean_object* v___y_4333_ = _args[14];
lean_object* v___y_4334_ = _args[15];
lean_object* v___y_4335_ = _args[16];
lean_object* v___y_4336_ = _args[17];
lean_object* v___y_4337_ = _args[18];
lean_object* v___y_4338_ = _args[19];
lean_object* v___y_4339_ = _args[20];
_start:
{
uint8_t v___x_39383__boxed_4340_; uint8_t v___x_39389__boxed_4341_; uint8_t v___x_39392__boxed_4342_; lean_object* v_res_4343_; 
v___x_39383__boxed_4340_ = lean_unbox(v___x_4321_);
v___x_39389__boxed_4341_ = lean_unbox(v___x_4328_);
v___x_39392__boxed_4342_ = lean_unbox(v___x_4331_);
v_res_4343_ = l_Lean_Elab_Do_elabDoArrow___lam__1(v_letOrReassign_4319_, v_otherwise_x3f_4320_, v___x_39383__boxed_4340_, v___x_4322_, v___x_4323_, v___x_4324_, v___x_4325_, v___x_4326_, v_dec_4327_, v___x_39389__boxed_4341_, v___y_4329_, v___x_4330_, v___x_39392__boxed_4342_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_);
lean_dec(v___y_4338_);
lean_dec_ref(v___y_4337_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec_ref(v___y_4332_);
lean_dec(v___x_4330_);
lean_dec(v_letOrReassign_4319_);
return v_res_4343_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___closed__0(void){
_start:
{
lean_object* v___x_4344_; 
v___x_4344_ = lean_mk_string_unchecked("doIdDecl", 8, 8);
return v___x_4344_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___closed__1(void){
_start:
{
lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
v___x_4345_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__0, &l_Lean_Elab_Do_elabDoArrow___closed__0_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__0);
v___x_4346_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4347_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4348_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4349_ = l_Lean_Name_mkStr4(v___x_4348_, v___x_4347_, v___x_4346_, v___x_4345_);
return v___x_4349_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___closed__2(void){
_start:
{
lean_object* v___x_4350_; 
v___x_4350_ = lean_mk_string_unchecked("doPatDecl", 9, 9);
return v___x_4350_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___closed__3(void){
_start:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; 
v___x_4351_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__2, &l_Lean_Elab_Do_elabDoArrow___closed__2_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__2);
v___x_4352_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4353_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4354_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4355_ = l_Lean_Name_mkStr4(v___x_4354_, v___x_4353_, v___x_4352_, v___x_4351_);
return v___x_4355_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___closed__4(void){
_start:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; lean_object* v___x_4360_; 
v___x_4356_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__20);
v___x_4357_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4358_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4359_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4360_ = l_Lean_Name_mkStr4(v___x_4359_, v___x_4358_, v___x_4357_, v___x_4356_);
return v___x_4360_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___closed__5(void){
_start:
{
lean_object* v___x_4361_; 
v___x_4361_ = lean_mk_string_unchecked("__x", 3, 3);
return v___x_4361_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoArrow___closed__6(void){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; 
v___x_4362_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__5, &l_Lean_Elab_Do_elabDoArrow___closed__5_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__5);
v___x_4363_ = l_Lean_Name_mkStr1(v___x_4362_);
return v___x_4363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow(lean_object* v_letOrReassign_4364_, lean_object* v_stx_4365_, lean_object* v_tk_4366_, lean_object* v_dec_4367_, lean_object* v_a_4368_, lean_object* v_a_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_){
_start:
{
lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; uint8_t v___x_4380_; 
v___x_4376_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4377_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4378_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4379_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__1, &l_Lean_Elab_Do_elabDoArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__1);
lean_inc(v_stx_4365_);
v___x_4380_ = l_Lean_Syntax_isOfKind(v_stx_4365_, v___x_4379_);
if (v___x_4380_ == 0)
{
lean_object* v___x_4381_; uint8_t v___x_4382_; 
v___x_4381_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__3, &l_Lean_Elab_Do_elabDoArrow___closed__3_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__3);
lean_inc(v_stx_4365_);
v___x_4382_ = l_Lean_Syntax_isOfKind(v_stx_4365_, v___x_4381_);
if (v___x_4382_ == 0)
{
lean_object* v___x_4383_; 
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4383_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4383_;
}
else
{
lean_object* v___x_4384_; lean_object* v___x_4385_; lean_object* v___x_4386_; uint8_t v___x_4387_; lean_object* v___y_4389_; lean_object* v___y_4390_; lean_object* v___y_4391_; lean_object* v___y_4392_; lean_object* v___y_4393_; lean_object* v___y_4394_; lean_object* v___y_4395_; lean_object* v___y_4396_; lean_object* v___y_4397_; lean_object* v___y_4398_; lean_object* v___y_4399_; lean_object* v___y_4418_; lean_object* v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v___y_4422_; lean_object* v___y_4423_; lean_object* v___y_4424_; lean_object* v___y_4425_; lean_object* v___y_4426_; lean_object* v___y_4427_; lean_object* v___y_4428_; lean_object* v___y_4431_; lean_object* v___y_4432_; lean_object* v___y_4433_; lean_object* v___y_4434_; lean_object* v___y_4435_; lean_object* v___y_4436_; lean_object* v___y_4437_; lean_object* v___y_4438_; lean_object* v___y_4439_; lean_object* v___y_4440_; lean_object* v___y_4441_; lean_object* v___y_4461_; lean_object* v___y_4462_; lean_object* v___y_4463_; lean_object* v___y_4464_; lean_object* v___y_4465_; lean_object* v___y_4466_; lean_object* v___y_4467_; lean_object* v___y_4468_; lean_object* v___y_4469_; lean_object* v___y_4470_; lean_object* v___y_4471_; 
v___x_4384_ = lean_unsigned_to_nat(0u);
v___x_4385_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4384_);
v___x_4386_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__4, &l_Lean_Elab_Do_elabDoArrow___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__4);
lean_inc(v___x_4385_);
v___x_4387_ = l_Lean_Syntax_isOfKind(v___x_4385_, v___x_4386_);
if (v___x_4387_ == 0)
{
lean_object* v___x_4473_; lean_object* v_patType_x3f_4475_; lean_object* v___y_4476_; lean_object* v___y_4477_; lean_object* v___y_4478_; lean_object* v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___x_4504_; uint8_t v___x_4505_; 
v___x_4473_ = lean_unsigned_to_nat(1u);
v___x_4504_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4473_);
v___x_4505_ = l_Lean_Syntax_isNone(v___x_4504_);
if (v___x_4505_ == 0)
{
uint8_t v___x_4506_; 
lean_inc(v___x_4504_);
v___x_4506_ = l_Lean_Syntax_matchesNull(v___x_4504_, v___x_4473_);
if (v___x_4506_ == 0)
{
lean_object* v___x_4507_; 
lean_dec(v___x_4504_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4507_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4507_;
}
else
{
lean_object* v___x_4508_; lean_object* v___x_4509_; uint8_t v___x_4510_; 
v___x_4508_ = l_Lean_Syntax_getArg(v___x_4504_, v___x_4384_);
lean_dec(v___x_4504_);
v___x_4509_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
lean_inc(v___x_4508_);
v___x_4510_ = l_Lean_Syntax_isOfKind(v___x_4508_, v___x_4509_);
if (v___x_4510_ == 0)
{
lean_object* v___x_4511_; 
lean_dec(v___x_4508_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4511_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4511_;
}
else
{
lean_object* v_patType_x3f_4512_; lean_object* v___x_4513_; 
v_patType_x3f_4512_ = l_Lean_Syntax_getArg(v___x_4508_, v___x_4473_);
lean_dec(v___x_4508_);
v___x_4513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4513_, 0, v_patType_x3f_4512_);
v_patType_x3f_4475_ = v___x_4513_;
v___y_4476_ = v_a_4368_;
v___y_4477_ = v_a_4369_;
v___y_4478_ = v_a_4370_;
v___y_4479_ = v_a_4371_;
v___y_4480_ = v_a_4372_;
v___y_4481_ = v_a_4373_;
v___y_4482_ = v_a_4374_;
goto v___jp_4474_;
}
}
}
else
{
lean_object* v___x_4514_; 
lean_dec(v___x_4504_);
v___x_4514_ = lean_box(0);
v_patType_x3f_4475_ = v___x_4514_;
v___y_4476_ = v_a_4368_;
v___y_4477_ = v_a_4369_;
v___y_4478_ = v_a_4370_;
v___y_4479_ = v_a_4371_;
v___y_4480_ = v_a_4372_;
v___y_4481_ = v_a_4373_;
v___y_4482_ = v_a_4374_;
goto v___jp_4474_;
}
v___jp_4474_:
{
lean_object* v___x_4483_; lean_object* v_rhs_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; uint8_t v___x_4487_; 
v___x_4483_ = lean_unsigned_to_nat(3u);
v_rhs_4484_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4483_);
v___x_4485_ = lean_unsigned_to_nat(4u);
v___x_4486_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4485_);
lean_dec(v_stx_4365_);
v___x_4487_ = l_Lean_Syntax_isNone(v___x_4486_);
if (v___x_4487_ == 0)
{
uint8_t v___x_4488_; 
lean_inc(v___x_4486_);
v___x_4488_ = l_Lean_Syntax_matchesNull(v___x_4486_, v___x_4483_);
if (v___x_4488_ == 0)
{
lean_object* v___x_4489_; 
lean_dec(v___x_4486_);
lean_dec(v_rhs_4484_);
lean_dec(v_patType_x3f_4475_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_letOrReassign_4364_);
v___x_4489_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4489_;
}
else
{
lean_object* v___x_4490_; lean_object* v_otherwise_x3f_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4490_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_4491_ = l_Lean_Syntax_getArg(v___x_4486_, v___x_4473_);
v___x_4492_ = l_Lean_Syntax_getArg(v___x_4486_, v___x_4490_);
lean_dec(v___x_4486_);
v___x_4493_ = l_Lean_Syntax_getOptional_x3f(v___x_4492_);
lean_dec(v___x_4492_);
if (lean_obj_tag(v___x_4493_) == 0)
{
lean_object* v___x_4494_; 
v___x_4494_ = lean_box(0);
v___y_4418_ = v___y_4482_;
v___y_4419_ = v___y_4480_;
v___y_4420_ = v___y_4478_;
v___y_4421_ = v___y_4476_;
v___y_4422_ = v___y_4481_;
v___y_4423_ = v_patType_x3f_4475_;
v___y_4424_ = v___y_4477_;
v___y_4425_ = v___y_4479_;
v___y_4426_ = v_otherwise_x3f_4491_;
v___y_4427_ = v_rhs_4484_;
v___y_4428_ = v___x_4494_;
goto v___jp_4417_;
}
else
{
lean_object* v_val_4495_; lean_object* v___x_4497_; uint8_t v_isShared_4498_; uint8_t v_isSharedCheck_4502_; 
v_val_4495_ = lean_ctor_get(v___x_4493_, 0);
v_isSharedCheck_4502_ = !lean_is_exclusive(v___x_4493_);
if (v_isSharedCheck_4502_ == 0)
{
v___x_4497_ = v___x_4493_;
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
else
{
lean_inc(v_val_4495_);
lean_dec(v___x_4493_);
v___x_4497_ = lean_box(0);
v_isShared_4498_ = v_isSharedCheck_4502_;
goto v_resetjp_4496_;
}
v_resetjp_4496_:
{
lean_object* v___x_4500_; 
if (v_isShared_4498_ == 0)
{
v___x_4500_ = v___x_4497_;
goto v_reusejp_4499_;
}
else
{
lean_object* v_reuseFailAlloc_4501_; 
v_reuseFailAlloc_4501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4501_, 0, v_val_4495_);
v___x_4500_ = v_reuseFailAlloc_4501_;
goto v_reusejp_4499_;
}
v_reusejp_4499_:
{
v___y_4418_ = v___y_4482_;
v___y_4419_ = v___y_4480_;
v___y_4420_ = v___y_4478_;
v___y_4421_ = v___y_4476_;
v___y_4422_ = v___y_4481_;
v___y_4423_ = v_patType_x3f_4475_;
v___y_4424_ = v___y_4477_;
v___y_4425_ = v___y_4479_;
v___y_4426_ = v_otherwise_x3f_4491_;
v___y_4427_ = v_rhs_4484_;
v___y_4428_ = v___x_4500_;
goto v___jp_4417_;
}
}
}
}
}
else
{
lean_object* v___x_4503_; 
lean_dec(v___x_4486_);
v___x_4503_ = lean_box(0);
v___y_4389_ = v___y_4479_;
v___y_4390_ = v___y_4482_;
v___y_4391_ = v_rhs_4484_;
v___y_4392_ = v_patType_x3f_4475_;
v___y_4393_ = v___y_4477_;
v___y_4394_ = v___y_4478_;
v___y_4395_ = v___y_4480_;
v___y_4396_ = v___y_4481_;
v___y_4397_ = v___x_4503_;
v___y_4398_ = v___y_4476_;
v___y_4399_ = v___x_4503_;
goto v___jp_4388_;
}
}
}
else
{
lean_object* v_pattern_4515_; lean_object* v___x_4516_; lean_object* v_patType_x3f_4518_; lean_object* v___y_4519_; lean_object* v___y_4520_; lean_object* v___y_4521_; lean_object* v___y_4522_; lean_object* v___y_4523_; lean_object* v___y_4524_; lean_object* v___y_4525_; lean_object* v___x_4573_; uint8_t v___x_4574_; 
v_pattern_4515_ = l_Lean_Syntax_getArg(v___x_4385_, v___x_4384_);
v___x_4516_ = lean_unsigned_to_nat(1u);
v___x_4573_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4516_);
v___x_4574_ = l_Lean_Syntax_isNone(v___x_4573_);
if (v___x_4574_ == 0)
{
uint8_t v___x_4575_; 
lean_inc(v___x_4573_);
v___x_4575_ = l_Lean_Syntax_matchesNull(v___x_4573_, v___x_4516_);
if (v___x_4575_ == 0)
{
lean_object* v___x_4576_; 
lean_dec(v___x_4573_);
lean_dec(v_pattern_4515_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4576_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4576_;
}
else
{
lean_object* v___x_4577_; lean_object* v___x_4578_; uint8_t v___x_4579_; 
v___x_4577_ = l_Lean_Syntax_getArg(v___x_4573_, v___x_4384_);
lean_dec(v___x_4573_);
v___x_4578_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
lean_inc(v___x_4577_);
v___x_4579_ = l_Lean_Syntax_isOfKind(v___x_4577_, v___x_4578_);
if (v___x_4579_ == 0)
{
lean_object* v___x_4580_; 
lean_dec(v___x_4577_);
lean_dec(v_pattern_4515_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4580_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4580_;
}
else
{
lean_object* v_patType_x3f_4581_; lean_object* v___x_4582_; 
v_patType_x3f_4581_ = l_Lean_Syntax_getArg(v___x_4577_, v___x_4516_);
lean_dec(v___x_4577_);
v___x_4582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4582_, 0, v_patType_x3f_4581_);
v_patType_x3f_4518_ = v___x_4582_;
v___y_4519_ = v_a_4368_;
v___y_4520_ = v_a_4369_;
v___y_4521_ = v_a_4370_;
v___y_4522_ = v_a_4371_;
v___y_4523_ = v_a_4372_;
v___y_4524_ = v_a_4373_;
v___y_4525_ = v_a_4374_;
goto v___jp_4517_;
}
}
}
else
{
lean_object* v___x_4583_; 
lean_dec(v___x_4573_);
v___x_4583_ = lean_box(0);
v_patType_x3f_4518_ = v___x_4583_;
v___y_4519_ = v_a_4368_;
v___y_4520_ = v_a_4369_;
v___y_4521_ = v_a_4370_;
v___y_4522_ = v_a_4371_;
v___y_4523_ = v_a_4372_;
v___y_4524_ = v_a_4373_;
v___y_4525_ = v_a_4374_;
goto v___jp_4517_;
}
v___jp_4517_:
{
lean_object* v___x_4526_; lean_object* v_rhs_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; uint8_t v___x_4530_; 
v___x_4526_ = lean_unsigned_to_nat(3u);
v_rhs_4527_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4526_);
v___x_4528_ = lean_unsigned_to_nat(4u);
v___x_4529_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4528_);
lean_dec(v_stx_4365_);
lean_inc(v___x_4529_);
v___x_4530_ = l_Lean_Syntax_matchesNull(v___x_4529_, v___x_4384_);
if (v___x_4530_ == 0)
{
uint8_t v___x_4531_; 
lean_dec(v_pattern_4515_);
v___x_4531_ = l_Lean_Syntax_isNone(v___x_4529_);
if (v___x_4531_ == 0)
{
uint8_t v___x_4532_; 
lean_inc(v___x_4529_);
v___x_4532_ = l_Lean_Syntax_matchesNull(v___x_4529_, v___x_4526_);
if (v___x_4532_ == 0)
{
lean_object* v___x_4533_; 
lean_dec(v___x_4529_);
lean_dec(v_rhs_4527_);
lean_dec(v_patType_x3f_4518_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_letOrReassign_4364_);
v___x_4533_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4533_;
}
else
{
lean_object* v___x_4534_; lean_object* v_otherwise_x3f_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4534_ = lean_unsigned_to_nat(2u);
v_otherwise_x3f_4535_ = l_Lean_Syntax_getArg(v___x_4529_, v___x_4516_);
v___x_4536_ = l_Lean_Syntax_getArg(v___x_4529_, v___x_4534_);
lean_dec(v___x_4529_);
v___x_4537_ = l_Lean_Syntax_getOptional_x3f(v___x_4536_);
lean_dec(v___x_4536_);
if (lean_obj_tag(v___x_4537_) == 0)
{
lean_object* v___x_4538_; 
v___x_4538_ = lean_box(0);
v___y_4461_ = v___y_4524_;
v___y_4462_ = v___y_4522_;
v___y_4463_ = v___y_4519_;
v___y_4464_ = v_otherwise_x3f_4535_;
v___y_4465_ = v___y_4525_;
v___y_4466_ = v___y_4520_;
v___y_4467_ = v___y_4523_;
v___y_4468_ = v_rhs_4527_;
v___y_4469_ = v___y_4521_;
v___y_4470_ = v_patType_x3f_4518_;
v___y_4471_ = v___x_4538_;
goto v___jp_4460_;
}
else
{
lean_object* v_val_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4546_; 
v_val_4539_ = lean_ctor_get(v___x_4537_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4537_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4541_ = v___x_4537_;
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_val_4539_);
lean_dec(v___x_4537_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_val_4539_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
v___y_4461_ = v___y_4524_;
v___y_4462_ = v___y_4522_;
v___y_4463_ = v___y_4519_;
v___y_4464_ = v_otherwise_x3f_4535_;
v___y_4465_ = v___y_4525_;
v___y_4466_ = v___y_4520_;
v___y_4467_ = v___y_4523_;
v___y_4468_ = v_rhs_4527_;
v___y_4469_ = v___y_4521_;
v___y_4470_ = v_patType_x3f_4518_;
v___y_4471_ = v___x_4544_;
goto v___jp_4460_;
}
}
}
}
}
else
{
lean_object* v___x_4547_; 
lean_dec(v___x_4529_);
v___x_4547_ = lean_box(0);
v___y_4431_ = v___y_4522_;
v___y_4432_ = v___y_4524_;
v___y_4433_ = v___x_4547_;
v___y_4434_ = v___y_4520_;
v___y_4435_ = v___y_4525_;
v___y_4436_ = v___y_4519_;
v___y_4437_ = v_patType_x3f_4518_;
v___y_4438_ = v___y_4521_;
v___y_4439_ = v___y_4523_;
v___y_4440_ = v_rhs_4527_;
v___y_4441_ = v___x_4547_;
goto v___jp_4430_;
}
}
else
{
lean_object* v___x_4548_; lean_object* v___x_4549_; 
lean_dec(v___x_4529_);
lean_dec(v___x_4385_);
lean_dec(v_letOrReassign_4364_);
v___x_4548_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__6, &l_Lean_Elab_Do_elabDoArrow___closed__6_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__6);
v___x_4549_ = l_Lean_Core_mkFreshUserName(v___x_4548_, v___y_4524_, v___y_4525_);
if (lean_obj_tag(v___x_4549_) == 0)
{
lean_object* v_a_4550_; lean_object* v___x_4551_; 
v_a_4550_ = lean_ctor_get(v___x_4549_, 0);
lean_inc(v_a_4550_);
lean_dec_ref(v___x_4549_);
v___x_4551_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_4367_, v_tk_4366_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_);
if (lean_obj_tag(v___x_4551_) == 0)
{
lean_object* v_a_4552_; uint8_t v_kind_4553_; lean_object* v___x_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; 
v_a_4552_ = lean_ctor_get(v___x_4551_, 0);
lean_inc(v_a_4552_);
lean_dec_ref(v___x_4551_);
v_kind_4553_ = lean_ctor_get_uint8(v_a_4552_, sizeof(void*)*3);
v___x_4554_ = l_Lean_mkIdentFrom(v_pattern_4515_, v_a_4550_, v___x_4380_);
lean_dec(v_pattern_4515_);
v___x_4555_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_4555_, 0, v_a_4552_);
v___x_4556_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_4554_, v_patType_x3f_4518_, v_rhs_4527_, v___x_4555_, v_kind_4553_, v___y_4519_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_);
return v___x_4556_;
}
else
{
lean_object* v_a_4557_; lean_object* v___x_4559_; uint8_t v_isShared_4560_; uint8_t v_isSharedCheck_4564_; 
lean_dec(v_a_4550_);
lean_dec(v_rhs_4527_);
lean_dec(v_patType_x3f_4518_);
lean_dec(v_pattern_4515_);
v_a_4557_ = lean_ctor_get(v___x_4551_, 0);
v_isSharedCheck_4564_ = !lean_is_exclusive(v___x_4551_);
if (v_isSharedCheck_4564_ == 0)
{
v___x_4559_ = v___x_4551_;
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
else
{
lean_inc(v_a_4557_);
lean_dec(v___x_4551_);
v___x_4559_ = lean_box(0);
v_isShared_4560_ = v_isSharedCheck_4564_;
goto v_resetjp_4558_;
}
v_resetjp_4558_:
{
lean_object* v___x_4562_; 
if (v_isShared_4560_ == 0)
{
v___x_4562_ = v___x_4559_;
goto v_reusejp_4561_;
}
else
{
lean_object* v_reuseFailAlloc_4563_; 
v_reuseFailAlloc_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4563_, 0, v_a_4557_);
v___x_4562_ = v_reuseFailAlloc_4563_;
goto v_reusejp_4561_;
}
v_reusejp_4561_:
{
return v___x_4562_;
}
}
}
}
else
{
lean_object* v_a_4565_; lean_object* v___x_4567_; uint8_t v_isShared_4568_; uint8_t v_isSharedCheck_4572_; 
lean_dec(v_rhs_4527_);
lean_dec(v_patType_x3f_4518_);
lean_dec(v_pattern_4515_);
lean_dec_ref(v_dec_4367_);
v_a_4565_ = lean_ctor_get(v___x_4549_, 0);
v_isSharedCheck_4572_ = !lean_is_exclusive(v___x_4549_);
if (v_isSharedCheck_4572_ == 0)
{
v___x_4567_ = v___x_4549_;
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
else
{
lean_inc(v_a_4565_);
lean_dec(v___x_4549_);
v___x_4567_ = lean_box(0);
v_isShared_4568_ = v_isSharedCheck_4572_;
goto v_resetjp_4566_;
}
v_resetjp_4566_:
{
lean_object* v___x_4570_; 
if (v_isShared_4568_ == 0)
{
v___x_4570_ = v___x_4567_;
goto v_reusejp_4569_;
}
else
{
lean_object* v_reuseFailAlloc_4571_; 
v_reuseFailAlloc_4571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4571_, 0, v_a_4565_);
v___x_4570_ = v_reuseFailAlloc_4571_;
goto v_reusejp_4569_;
}
v_reusejp_4569_:
{
return v___x_4570_;
}
}
}
}
}
}
v___jp_4388_:
{
lean_object* v___x_4400_; lean_object* v___x_4401_; 
v___x_4400_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__6, &l_Lean_Elab_Do_elabDoArrow___closed__6_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__6);
v___x_4401_ = l_Lean_Core_mkFreshUserName(v___x_4400_, v___y_4396_, v___y_4390_);
if (lean_obj_tag(v___x_4401_) == 0)
{
lean_object* v_a_4402_; lean_object* v___x_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; lean_object* v___y_4406_; uint8_t v___x_4407_; lean_object* v___x_4408_; 
v_a_4402_ = lean_ctor_get(v___x_4401_, 0);
lean_inc(v_a_4402_);
lean_dec_ref(v___x_4401_);
v___x_4403_ = l_Lean_mkIdentFrom(v___x_4385_, v_a_4402_, v___x_4387_);
v___x_4404_ = lean_box(v___x_4387_);
v___x_4405_ = lean_box(v___x_4382_);
lean_inc(v___x_4403_);
v___y_4406_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoArrow___lam__0___boxed), 20, 12);
lean_closure_set(v___y_4406_, 0, v_letOrReassign_4364_);
lean_closure_set(v___y_4406_, 1, v___y_4397_);
lean_closure_set(v___y_4406_, 2, v___x_4404_);
lean_closure_set(v___y_4406_, 3, v___x_4376_);
lean_closure_set(v___y_4406_, 4, v___x_4377_);
lean_closure_set(v___y_4406_, 5, v___x_4378_);
lean_closure_set(v___y_4406_, 6, v___x_4385_);
lean_closure_set(v___y_4406_, 7, v___x_4403_);
lean_closure_set(v___y_4406_, 8, v_dec_4367_);
lean_closure_set(v___y_4406_, 9, v___x_4405_);
lean_closure_set(v___y_4406_, 10, v___y_4399_);
lean_closure_set(v___y_4406_, 11, v___x_4384_);
v___x_4407_ = 0;
v___x_4408_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_4403_, v___y_4392_, v___y_4391_, v___y_4406_, v___x_4407_, v___y_4398_, v___y_4393_, v___y_4394_, v___y_4389_, v___y_4395_, v___y_4396_, v___y_4390_);
return v___x_4408_;
}
else
{
lean_object* v_a_4409_; lean_object* v___x_4411_; uint8_t v_isShared_4412_; uint8_t v_isSharedCheck_4416_; 
lean_dec(v___y_4399_);
lean_dec(v___y_4397_);
lean_dec(v___y_4392_);
lean_dec(v___y_4391_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_letOrReassign_4364_);
v_a_4409_ = lean_ctor_get(v___x_4401_, 0);
v_isSharedCheck_4416_ = !lean_is_exclusive(v___x_4401_);
if (v_isSharedCheck_4416_ == 0)
{
v___x_4411_ = v___x_4401_;
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
else
{
lean_inc(v_a_4409_);
lean_dec(v___x_4401_);
v___x_4411_ = lean_box(0);
v_isShared_4412_ = v_isSharedCheck_4416_;
goto v_resetjp_4410_;
}
v_resetjp_4410_:
{
lean_object* v___x_4414_; 
if (v_isShared_4412_ == 0)
{
v___x_4414_ = v___x_4411_;
goto v_reusejp_4413_;
}
else
{
lean_object* v_reuseFailAlloc_4415_; 
v_reuseFailAlloc_4415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4415_, 0, v_a_4409_);
v___x_4414_ = v_reuseFailAlloc_4415_;
goto v_reusejp_4413_;
}
v_reusejp_4413_:
{
return v___x_4414_;
}
}
}
}
v___jp_4417_:
{
lean_object* v___x_4429_; 
v___x_4429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4429_, 0, v___y_4426_);
v___y_4389_ = v___y_4425_;
v___y_4390_ = v___y_4418_;
v___y_4391_ = v___y_4427_;
v___y_4392_ = v___y_4423_;
v___y_4393_ = v___y_4424_;
v___y_4394_ = v___y_4420_;
v___y_4395_ = v___y_4419_;
v___y_4396_ = v___y_4422_;
v___y_4397_ = v___x_4429_;
v___y_4398_ = v___y_4421_;
v___y_4399_ = v___y_4428_;
goto v___jp_4388_;
}
v___jp_4430_:
{
lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4442_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__6, &l_Lean_Elab_Do_elabDoArrow___closed__6_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__6);
v___x_4443_ = l_Lean_Core_mkFreshUserName(v___x_4442_, v___y_4432_, v___y_4435_);
if (lean_obj_tag(v___x_4443_) == 0)
{
lean_object* v_a_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___y_4449_; uint8_t v___x_4450_; lean_object* v___x_4451_; 
v_a_4444_ = lean_ctor_get(v___x_4443_, 0);
lean_inc(v_a_4444_);
lean_dec_ref(v___x_4443_);
v___x_4445_ = l_Lean_mkIdentFrom(v___x_4385_, v_a_4444_, v___x_4380_);
v___x_4446_ = lean_box(v___x_4380_);
v___x_4447_ = lean_box(v___x_4382_);
v___x_4448_ = lean_box(v___x_4387_);
lean_inc(v___x_4445_);
v___y_4449_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoArrow___lam__1___boxed), 21, 13);
lean_closure_set(v___y_4449_, 0, v_letOrReassign_4364_);
lean_closure_set(v___y_4449_, 1, v___y_4433_);
lean_closure_set(v___y_4449_, 2, v___x_4446_);
lean_closure_set(v___y_4449_, 3, v___x_4376_);
lean_closure_set(v___y_4449_, 4, v___x_4377_);
lean_closure_set(v___y_4449_, 5, v___x_4378_);
lean_closure_set(v___y_4449_, 6, v___x_4385_);
lean_closure_set(v___y_4449_, 7, v___x_4445_);
lean_closure_set(v___y_4449_, 8, v_dec_4367_);
lean_closure_set(v___y_4449_, 9, v___x_4447_);
lean_closure_set(v___y_4449_, 10, v___y_4441_);
lean_closure_set(v___y_4449_, 11, v___x_4384_);
lean_closure_set(v___y_4449_, 12, v___x_4448_);
v___x_4450_ = 0;
v___x_4451_ = l_Lean_Elab_Do_elabDoIdDecl(v___x_4445_, v___y_4437_, v___y_4440_, v___y_4449_, v___x_4450_, v___y_4436_, v___y_4434_, v___y_4438_, v___y_4431_, v___y_4439_, v___y_4432_, v___y_4435_);
return v___x_4451_;
}
else
{
lean_object* v_a_4452_; lean_object* v___x_4454_; uint8_t v_isShared_4455_; uint8_t v_isSharedCheck_4459_; 
lean_dec(v___y_4441_);
lean_dec(v___y_4440_);
lean_dec(v___y_4437_);
lean_dec(v___y_4433_);
lean_dec(v___x_4385_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_letOrReassign_4364_);
v_a_4452_ = lean_ctor_get(v___x_4443_, 0);
v_isSharedCheck_4459_ = !lean_is_exclusive(v___x_4443_);
if (v_isSharedCheck_4459_ == 0)
{
v___x_4454_ = v___x_4443_;
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
else
{
lean_inc(v_a_4452_);
lean_dec(v___x_4443_);
v___x_4454_ = lean_box(0);
v_isShared_4455_ = v_isSharedCheck_4459_;
goto v_resetjp_4453_;
}
v_resetjp_4453_:
{
lean_object* v___x_4457_; 
if (v_isShared_4455_ == 0)
{
v___x_4457_ = v___x_4454_;
goto v_reusejp_4456_;
}
else
{
lean_object* v_reuseFailAlloc_4458_; 
v_reuseFailAlloc_4458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4458_, 0, v_a_4452_);
v___x_4457_ = v_reuseFailAlloc_4458_;
goto v_reusejp_4456_;
}
v_reusejp_4456_:
{
return v___x_4457_;
}
}
}
}
v___jp_4460_:
{
lean_object* v___x_4472_; 
v___x_4472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4472_, 0, v___y_4464_);
v___y_4431_ = v___y_4462_;
v___y_4432_ = v___y_4461_;
v___y_4433_ = v___x_4472_;
v___y_4434_ = v___y_4466_;
v___y_4435_ = v___y_4465_;
v___y_4436_ = v___y_4463_;
v___y_4437_ = v___y_4470_;
v___y_4438_ = v___y_4469_;
v___y_4439_ = v___y_4467_;
v___y_4440_ = v___y_4468_;
v___y_4441_ = v___y_4471_;
goto v___jp_4430_;
}
}
}
else
{
lean_object* v___x_4584_; lean_object* v_x_4585_; lean_object* v___y_4587_; lean_object* v___y_4588_; lean_object* v_xType_x3f_4589_; lean_object* v___y_4590_; lean_object* v___y_4591_; lean_object* v___y_4592_; lean_object* v___y_4593_; lean_object* v___y_4594_; lean_object* v___y_4595_; lean_object* v___y_4596_; lean_object* v_xType_x3f_4603_; lean_object* v___y_4604_; lean_object* v___y_4605_; lean_object* v___y_4606_; lean_object* v___y_4607_; lean_object* v___y_4608_; lean_object* v___y_4609_; lean_object* v___y_4610_; lean_object* v___x_4658_; uint8_t v___x_4659_; 
v___x_4584_ = lean_unsigned_to_nat(0u);
v_x_4585_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4584_);
v___x_4658_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43);
lean_inc(v_x_4585_);
v___x_4659_ = l_Lean_Syntax_isOfKind(v_x_4585_, v___x_4658_);
if (v___x_4659_ == 0)
{
lean_object* v___x_4660_; 
lean_dec(v_x_4585_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4660_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4660_;
}
else
{
lean_object* v___x_4661_; lean_object* v___x_4662_; uint8_t v___x_4663_; 
v___x_4661_ = lean_unsigned_to_nat(1u);
v___x_4662_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4661_);
v___x_4663_ = l_Lean_Syntax_isNone(v___x_4662_);
if (v___x_4663_ == 0)
{
uint8_t v___x_4664_; 
lean_inc(v___x_4662_);
v___x_4664_ = l_Lean_Syntax_matchesNull(v___x_4662_, v___x_4661_);
if (v___x_4664_ == 0)
{
lean_object* v___x_4665_; 
lean_dec(v___x_4662_);
lean_dec(v_x_4585_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4665_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4665_;
}
else
{
lean_object* v___x_4666_; lean_object* v___x_4667_; uint8_t v___x_4668_; 
v___x_4666_ = l_Lean_Syntax_getArg(v___x_4662_, v___x_4584_);
lean_dec(v___x_4662_);
v___x_4667_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
lean_inc(v___x_4666_);
v___x_4668_ = l_Lean_Syntax_isOfKind(v___x_4666_, v___x_4667_);
if (v___x_4668_ == 0)
{
lean_object* v___x_4669_; 
lean_dec(v___x_4666_);
lean_dec(v_x_4585_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v___x_4669_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4669_;
}
else
{
lean_object* v_xType_x3f_4670_; lean_object* v___x_4671_; 
v_xType_x3f_4670_ = l_Lean_Syntax_getArg(v___x_4666_, v___x_4661_);
lean_dec(v___x_4666_);
v___x_4671_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4671_, 0, v_xType_x3f_4670_);
v_xType_x3f_4603_ = v___x_4671_;
v___y_4604_ = v_a_4368_;
v___y_4605_ = v_a_4369_;
v___y_4606_ = v_a_4370_;
v___y_4607_ = v_a_4371_;
v___y_4608_ = v_a_4372_;
v___y_4609_ = v_a_4373_;
v___y_4610_ = v_a_4374_;
goto v___jp_4602_;
}
}
}
else
{
lean_object* v___x_4672_; 
lean_dec(v___x_4662_);
v___x_4672_ = lean_box(0);
v_xType_x3f_4603_ = v___x_4672_;
v___y_4604_ = v_a_4368_;
v___y_4605_ = v_a_4369_;
v___y_4606_ = v_a_4370_;
v___y_4607_ = v_a_4371_;
v___y_4608_ = v_a_4372_;
v___y_4609_ = v_a_4373_;
v___y_4610_ = v_a_4374_;
goto v___jp_4602_;
}
}
v___jp_4586_:
{
uint8_t v_kind_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; 
v_kind_4597_ = lean_ctor_get_uint8(v___y_4587_, sizeof(void*)*3);
v___x_4598_ = l_Lean_Elab_Do_LetOrReassign_getLetMutTk_x3f(v_letOrReassign_4364_);
lean_dec(v_letOrReassign_4364_);
v___x_4599_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_4599_, 0, v___y_4587_);
lean_inc(v_x_4585_);
v___x_4600_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_declareMutVar_x3f___boxed), 12, 4);
lean_closure_set(v___x_4600_, 0, lean_box(0));
lean_closure_set(v___x_4600_, 1, v___x_4598_);
lean_closure_set(v___x_4600_, 2, v_x_4585_);
lean_closure_set(v___x_4600_, 3, v___x_4599_);
v___x_4601_ = l_Lean_Elab_Do_elabDoIdDecl(v_x_4585_, v_xType_x3f_4589_, v___y_4588_, v___x_4600_, v_kind_4597_, v___y_4590_, v___y_4591_, v___y_4592_, v___y_4593_, v___y_4594_, v___y_4595_, v___y_4596_);
return v___x_4601_;
}
v___jp_4602_:
{
lean_object* v___x_4611_; lean_object* v___x_4612_; lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___x_4611_ = lean_unsigned_to_nat(1u);
v___x_4612_ = lean_mk_empty_array_with_capacity(v___x_4611_);
lean_inc(v_x_4585_);
v___x_4613_ = lean_array_push(v___x_4612_, v_x_4585_);
v___x_4614_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v_letOrReassign_4364_, v___x_4613_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
lean_dec_ref(v___x_4613_);
if (lean_obj_tag(v___x_4614_) == 0)
{
lean_object* v___x_4615_; 
lean_dec_ref(v___x_4614_);
v___x_4615_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_4367_, v_tk_4366_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; lean_object* v___x_4617_; lean_object* v_rhs_4618_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
lean_inc(v_a_4616_);
lean_dec_ref(v___x_4615_);
v___x_4617_ = lean_unsigned_to_nat(3u);
v_rhs_4618_ = l_Lean_Syntax_getArg(v_stx_4365_, v___x_4617_);
lean_dec(v_stx_4365_);
if (lean_obj_tag(v_letOrReassign_4364_) == 2)
{
if (lean_obj_tag(v_xType_x3f_4603_) == 0)
{
lean_object* v___x_4619_; lean_object* v___x_4620_; 
v___x_4619_ = l_Lean_TSyntax_getId(v_x_4585_);
v___x_4620_ = l_Lean_Meta_getLocalDeclFromUserName(v___x_4619_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
if (lean_obj_tag(v___x_4620_) == 0)
{
lean_object* v_a_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v_a_4621_ = lean_ctor_get(v___x_4620_, 0);
lean_inc(v_a_4621_);
lean_dec_ref(v___x_4620_);
v___x_4622_ = l_Lean_LocalDecl_type(v_a_4621_);
lean_dec(v_a_4621_);
v___x_4623_ = l_Lean_Elab_Term_exprToSyntax(v___x_4622_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
if (lean_obj_tag(v___x_4623_) == 0)
{
lean_object* v_a_4624_; lean_object* v___x_4625_; 
v_a_4624_ = lean_ctor_get(v___x_4623_, 0);
lean_inc(v_a_4624_);
lean_dec_ref(v___x_4623_);
v___x_4625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4625_, 0, v_a_4624_);
v___y_4587_ = v_a_4616_;
v___y_4588_ = v_rhs_4618_;
v_xType_x3f_4589_ = v___x_4625_;
v___y_4590_ = v___y_4604_;
v___y_4591_ = v___y_4605_;
v___y_4592_ = v___y_4606_;
v___y_4593_ = v___y_4607_;
v___y_4594_ = v___y_4608_;
v___y_4595_ = v___y_4609_;
v___y_4596_ = v___y_4610_;
goto v___jp_4586_;
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
lean_dec(v_rhs_4618_);
lean_dec(v_a_4616_);
lean_dec(v_x_4585_);
v_a_4626_ = lean_ctor_get(v___x_4623_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4623_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4623_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4623_);
v___x_4628_ = lean_box(0);
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
v_resetjp_4627_:
{
lean_object* v___x_4631_; 
if (v_isShared_4629_ == 0)
{
v___x_4631_ = v___x_4628_;
goto v_reusejp_4630_;
}
else
{
lean_object* v_reuseFailAlloc_4632_; 
v_reuseFailAlloc_4632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4632_, 0, v_a_4626_);
v___x_4631_ = v_reuseFailAlloc_4632_;
goto v_reusejp_4630_;
}
v_reusejp_4630_:
{
return v___x_4631_;
}
}
}
}
else
{
lean_object* v_a_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4641_; 
lean_dec(v_rhs_4618_);
lean_dec(v_a_4616_);
lean_dec(v_x_4585_);
v_a_4634_ = lean_ctor_get(v___x_4620_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___x_4620_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4636_ = v___x_4620_;
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_a_4634_);
lean_dec(v___x_4620_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4639_; 
if (v_isShared_4637_ == 0)
{
v___x_4639_ = v___x_4636_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v_a_4634_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
}
else
{
v___y_4587_ = v_a_4616_;
v___y_4588_ = v_rhs_4618_;
v_xType_x3f_4589_ = v_xType_x3f_4603_;
v___y_4590_ = v___y_4604_;
v___y_4591_ = v___y_4605_;
v___y_4592_ = v___y_4606_;
v___y_4593_ = v___y_4607_;
v___y_4594_ = v___y_4608_;
v___y_4595_ = v___y_4609_;
v___y_4596_ = v___y_4610_;
goto v___jp_4586_;
}
}
else
{
v___y_4587_ = v_a_4616_;
v___y_4588_ = v_rhs_4618_;
v_xType_x3f_4589_ = v_xType_x3f_4603_;
v___y_4590_ = v___y_4604_;
v___y_4591_ = v___y_4605_;
v___y_4592_ = v___y_4606_;
v___y_4593_ = v___y_4607_;
v___y_4594_ = v___y_4608_;
v___y_4595_ = v___y_4609_;
v___y_4596_ = v___y_4610_;
goto v___jp_4586_;
}
}
else
{
lean_object* v_a_4642_; lean_object* v___x_4644_; uint8_t v_isShared_4645_; uint8_t v_isSharedCheck_4649_; 
lean_dec(v_xType_x3f_4603_);
lean_dec(v_x_4585_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v_a_4642_ = lean_ctor_get(v___x_4615_, 0);
v_isSharedCheck_4649_ = !lean_is_exclusive(v___x_4615_);
if (v_isSharedCheck_4649_ == 0)
{
v___x_4644_ = v___x_4615_;
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
else
{
lean_inc(v_a_4642_);
lean_dec(v___x_4615_);
v___x_4644_ = lean_box(0);
v_isShared_4645_ = v_isSharedCheck_4649_;
goto v_resetjp_4643_;
}
v_resetjp_4643_:
{
lean_object* v___x_4647_; 
if (v_isShared_4645_ == 0)
{
v___x_4647_ = v___x_4644_;
goto v_reusejp_4646_;
}
else
{
lean_object* v_reuseFailAlloc_4648_; 
v_reuseFailAlloc_4648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4648_, 0, v_a_4642_);
v___x_4647_ = v_reuseFailAlloc_4648_;
goto v_reusejp_4646_;
}
v_reusejp_4646_:
{
return v___x_4647_;
}
}
}
}
else
{
lean_object* v_a_4650_; lean_object* v___x_4652_; uint8_t v_isShared_4653_; uint8_t v_isSharedCheck_4657_; 
lean_dec(v_xType_x3f_4603_);
lean_dec(v_x_4585_);
lean_dec_ref(v_dec_4367_);
lean_dec(v_stx_4365_);
lean_dec(v_letOrReassign_4364_);
v_a_4650_ = lean_ctor_get(v___x_4614_, 0);
v_isSharedCheck_4657_ = !lean_is_exclusive(v___x_4614_);
if (v_isSharedCheck_4657_ == 0)
{
v___x_4652_ = v___x_4614_;
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
else
{
lean_inc(v_a_4650_);
lean_dec(v___x_4614_);
v___x_4652_ = lean_box(0);
v_isShared_4653_ = v_isSharedCheck_4657_;
goto v_resetjp_4651_;
}
v_resetjp_4651_:
{
lean_object* v___x_4655_; 
if (v_isShared_4653_ == 0)
{
v___x_4655_ = v___x_4652_;
goto v_reusejp_4654_;
}
else
{
lean_object* v_reuseFailAlloc_4656_; 
v_reuseFailAlloc_4656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4656_, 0, v_a_4650_);
v___x_4655_ = v_reuseFailAlloc_4656_;
goto v_reusejp_4654_;
}
v_reusejp_4654_:
{
return v___x_4655_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoArrow___boxed(lean_object* v_letOrReassign_4673_, lean_object* v_stx_4674_, lean_object* v_tk_4675_, lean_object* v_dec_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_, lean_object* v_a_4681_, lean_object* v_a_4682_, lean_object* v_a_4683_, lean_object* v_a_4684_){
_start:
{
lean_object* v_res_4685_; 
v_res_4685_ = l_Lean_Elab_Do_elabDoArrow(v_letOrReassign_4673_, v_stx_4674_, v_tk_4675_, v_dec_4676_, v_a_4677_, v_a_4678_, v_a_4679_, v_a_4680_, v_a_4681_, v_a_4682_, v_a_4683_);
lean_dec(v_a_4683_);
lean_dec_ref(v_a_4682_);
lean_dec(v_a_4681_);
lean_dec_ref(v_a_4680_);
lean_dec(v_a_4679_);
lean_dec_ref(v_a_4678_);
lean_dec_ref(v_a_4677_);
lean_dec(v_tk_4675_);
return v_res_4685_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__0(void){
_start:
{
lean_object* v___x_4686_; 
v___x_4686_ = lean_mk_string_unchecked("configuration options are not allowed with `let mut`", 52, 52);
return v___x_4686_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__1(void){
_start:
{
lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4687_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__0);
v___x_4688_ = l_Lean_stringToMessageData(v___x_4687_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg(lean_object* v_letConfigStx_4689_, lean_object* v_mutTk_x3f_4690_, lean_object* v_initConfig_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_a_4696_, lean_object* v_a_4697_){
_start:
{
if (lean_obj_tag(v_mutTk_x3f_4690_) == 0)
{
lean_object* v___x_4699_; 
v___x_4699_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4689_, v_initConfig_4691_, v_a_4692_, v_a_4693_, v_a_4694_, v_a_4695_, v_a_4696_, v_a_4697_);
return v___x_4699_;
}
else
{
lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; uint8_t v___x_4704_; 
v___x_4700_ = lean_unsigned_to_nat(0u);
v___x_4701_ = l_Lean_Syntax_getArg(v_letConfigStx_4689_, v___x_4700_);
v___x_4702_ = l_Lean_Syntax_getArgs(v___x_4701_);
lean_dec(v___x_4701_);
v___x_4703_ = lean_array_get_size(v___x_4702_);
lean_dec_ref(v___x_4702_);
v___x_4704_ = lean_nat_dec_eq(v___x_4703_, v___x_4700_);
if (v___x_4704_ == 0)
{
lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v_a_4707_; lean_object* v___x_4709_; uint8_t v_isShared_4710_; uint8_t v_isSharedCheck_4714_; 
lean_dec_ref(v_initConfig_4691_);
v___x_4705_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___closed__1);
v___x_4706_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg(v_letConfigStx_4689_, v___x_4705_, v_a_4694_, v_a_4695_, v_a_4696_, v_a_4697_);
lean_dec(v_letConfigStx_4689_);
v_a_4707_ = lean_ctor_get(v___x_4706_, 0);
v_isSharedCheck_4714_ = !lean_is_exclusive(v___x_4706_);
if (v_isSharedCheck_4714_ == 0)
{
v___x_4709_ = v___x_4706_;
v_isShared_4710_ = v_isSharedCheck_4714_;
goto v_resetjp_4708_;
}
else
{
lean_inc(v_a_4707_);
lean_dec(v___x_4706_);
v___x_4709_ = lean_box(0);
v_isShared_4710_ = v_isSharedCheck_4714_;
goto v_resetjp_4708_;
}
v_resetjp_4708_:
{
lean_object* v___x_4712_; 
if (v_isShared_4710_ == 0)
{
v___x_4712_ = v___x_4709_;
goto v_reusejp_4711_;
}
else
{
lean_object* v_reuseFailAlloc_4713_; 
v_reuseFailAlloc_4713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4713_, 0, v_a_4707_);
v___x_4712_ = v_reuseFailAlloc_4713_;
goto v_reusejp_4711_;
}
v_reusejp_4711_:
{
return v___x_4712_;
}
}
}
else
{
lean_object* v___x_4715_; 
v___x_4715_ = l_Lean_Elab_Term_mkLetConfig(v_letConfigStx_4689_, v_initConfig_4691_, v_a_4692_, v_a_4693_, v_a_4694_, v_a_4695_, v_a_4696_, v_a_4697_);
return v___x_4715_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg___boxed(lean_object* v_letConfigStx_4716_, lean_object* v_mutTk_x3f_4717_, lean_object* v_initConfig_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_, lean_object* v_a_4723_, lean_object* v_a_4724_, lean_object* v_a_4725_){
_start:
{
lean_object* v_res_4726_; 
v_res_4726_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg(v_letConfigStx_4716_, v_mutTk_x3f_4717_, v_initConfig_4718_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_, v_a_4723_, v_a_4724_);
lean_dec(v_a_4724_);
lean_dec_ref(v_a_4723_);
lean_dec(v_a_4722_);
lean_dec_ref(v_a_4721_);
lean_dec(v_a_4720_);
lean_dec_ref(v_a_4719_);
lean_dec(v_mutTk_x3f_4717_);
return v_res_4726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(lean_object* v_letConfigStx_4727_, lean_object* v_mutTk_x3f_4728_, lean_object* v_initConfig_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_a_4732_, lean_object* v_a_4733_, lean_object* v_a_4734_, lean_object* v_a_4735_, lean_object* v_a_4736_){
_start:
{
lean_object* v___x_4738_; 
v___x_4738_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg(v_letConfigStx_4727_, v_mutTk_x3f_4728_, v_initConfig_4729_, v_a_4731_, v_a_4732_, v_a_4733_, v_a_4734_, v_a_4735_, v_a_4736_);
return v___x_4738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___boxed(lean_object* v_letConfigStx_4739_, lean_object* v_mutTk_x3f_4740_, lean_object* v_initConfig_4741_, lean_object* v_a_4742_, lean_object* v_a_4743_, lean_object* v_a_4744_, lean_object* v_a_4745_, lean_object* v_a_4746_, lean_object* v_a_4747_, lean_object* v_a_4748_, lean_object* v_a_4749_){
_start:
{
lean_object* v_res_4750_; 
v_res_4750_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut(v_letConfigStx_4739_, v_mutTk_x3f_4740_, v_initConfig_4741_, v_a_4742_, v_a_4743_, v_a_4744_, v_a_4745_, v_a_4746_, v_a_4747_, v_a_4748_);
lean_dec(v_a_4748_);
lean_dec_ref(v_a_4747_);
lean_dec(v_a_4746_);
lean_dec_ref(v_a_4745_);
lean_dec(v_a_4744_);
lean_dec_ref(v_a_4743_);
lean_dec_ref(v_a_4742_);
lean_dec(v_mutTk_x3f_4740_);
return v_res_4750_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLet___closed__0(void){
_start:
{
lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4751_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__6);
v___x_4752_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4753_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4754_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4755_ = l_Lean_Name_mkStr4(v___x_4754_, v___x_4753_, v___x_4752_, v___x_4751_);
return v___x_4755_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLet___closed__1(void){
_start:
{
lean_object* v___x_4756_; lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
v___x_4756_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__4);
v___x_4757_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4758_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4759_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4760_ = l_Lean_Name_mkStr4(v___x_4759_, v___x_4758_, v___x_4757_, v___x_4756_);
return v___x_4760_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLet___closed__2(void){
_start:
{
lean_object* v___x_4761_; uint8_t v___x_4762_; lean_object* v___x_4763_; 
v___x_4761_ = lean_box(0);
v___x_4762_ = 0;
v___x_4763_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4763_, 0, v___x_4761_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*1, v___x_4762_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*1 + 1, v___x_4762_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*1 + 2, v___x_4762_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*1 + 3, v___x_4762_);
lean_ctor_set_uint8(v___x_4763_, sizeof(void*)*1 + 4, v___x_4762_);
return v___x_4763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet(lean_object* v_stx_4764_, lean_object* v_dec_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_, lean_object* v_a_4770_, lean_object* v_a_4771_, lean_object* v_a_4772_){
_start:
{
lean_object* v___x_4774_; uint8_t v___x_4775_; 
v___x_4774_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__0, &l_Lean_Elab_Do_elabDoLet___closed__0_once, _init_l_Lean_Elab_Do_elabDoLet___closed__0);
lean_inc(v_stx_4764_);
v___x_4775_ = l_Lean_Syntax_isOfKind(v_stx_4764_, v___x_4774_);
if (v___x_4775_ == 0)
{
lean_object* v___x_4776_; 
lean_dec_ref(v_dec_4765_);
lean_dec(v_stx_4764_);
v___x_4776_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4776_;
}
else
{
lean_object* v___x_4777_; lean_object* v_tk_4778_; lean_object* v_mutTk_x3f_4780_; lean_object* v___y_4781_; lean_object* v___y_4782_; lean_object* v___y_4783_; lean_object* v___y_4784_; lean_object* v___y_4785_; lean_object* v___y_4786_; lean_object* v___y_4787_; lean_object* v___x_4811_; lean_object* v___x_4812_; uint8_t v___x_4813_; 
v___x_4777_ = lean_unsigned_to_nat(0u);
v_tk_4778_ = l_Lean_Syntax_getArg(v_stx_4764_, v___x_4777_);
v___x_4811_ = lean_unsigned_to_nat(1u);
v___x_4812_ = l_Lean_Syntax_getArg(v_stx_4764_, v___x_4811_);
v___x_4813_ = l_Lean_Syntax_isNone(v___x_4812_);
if (v___x_4813_ == 0)
{
uint8_t v___x_4814_; 
lean_inc(v___x_4812_);
v___x_4814_ = l_Lean_Syntax_matchesNull(v___x_4812_, v___x_4811_);
if (v___x_4814_ == 0)
{
lean_object* v___x_4815_; 
lean_dec(v___x_4812_);
lean_dec(v_tk_4778_);
lean_dec_ref(v_dec_4765_);
lean_dec(v_stx_4764_);
v___x_4815_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4815_;
}
else
{
lean_object* v_mutTk_x3f_4816_; lean_object* v___x_4817_; 
v_mutTk_x3f_4816_ = l_Lean_Syntax_getArg(v___x_4812_, v___x_4777_);
lean_dec(v___x_4812_);
v___x_4817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4817_, 0, v_mutTk_x3f_4816_);
v_mutTk_x3f_4780_ = v___x_4817_;
v___y_4781_ = v_a_4766_;
v___y_4782_ = v_a_4767_;
v___y_4783_ = v_a_4768_;
v___y_4784_ = v_a_4769_;
v___y_4785_ = v_a_4770_;
v___y_4786_ = v_a_4771_;
v___y_4787_ = v_a_4772_;
goto v___jp_4779_;
}
}
else
{
lean_object* v___x_4818_; 
lean_dec(v___x_4812_);
v___x_4818_ = lean_box(0);
v_mutTk_x3f_4780_ = v___x_4818_;
v___y_4781_ = v_a_4766_;
v___y_4782_ = v_a_4767_;
v___y_4783_ = v_a_4768_;
v___y_4784_ = v_a_4769_;
v___y_4785_ = v_a_4770_;
v___y_4786_ = v_a_4771_;
v___y_4787_ = v_a_4772_;
goto v___jp_4779_;
}
v___jp_4779_:
{
lean_object* v___x_4788_; lean_object* v_config_4789_; lean_object* v___x_4790_; uint8_t v___x_4791_; 
v___x_4788_ = lean_unsigned_to_nat(2u);
v_config_4789_ = l_Lean_Syntax_getArg(v_stx_4764_, v___x_4788_);
v___x_4790_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__1, &l_Lean_Elab_Do_elabDoLet___closed__1_once, _init_l_Lean_Elab_Do_elabDoLet___closed__1);
lean_inc(v_config_4789_);
v___x_4791_ = l_Lean_Syntax_isOfKind(v_config_4789_, v___x_4790_);
if (v___x_4791_ == 0)
{
lean_object* v___x_4792_; 
lean_dec(v_config_4789_);
lean_dec(v_mutTk_x3f_4780_);
lean_dec(v_tk_4778_);
lean_dec_ref(v_dec_4765_);
lean_dec(v_stx_4764_);
v___x_4792_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4792_;
}
else
{
lean_object* v___x_4793_; lean_object* v_decl_4794_; lean_object* v___x_4795_; uint8_t v___x_4796_; 
v___x_4793_ = lean_unsigned_to_nat(3u);
v_decl_4794_ = l_Lean_Syntax_getArg(v_stx_4764_, v___x_4793_);
lean_dec(v_stx_4764_);
v___x_4795_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
lean_inc(v_decl_4794_);
v___x_4796_ = l_Lean_Syntax_isOfKind(v_decl_4794_, v___x_4795_);
if (v___x_4796_ == 0)
{
lean_object* v___x_4797_; 
lean_dec(v_decl_4794_);
lean_dec(v_config_4789_);
lean_dec(v_mutTk_x3f_4780_);
lean_dec(v_tk_4778_);
lean_dec_ref(v_dec_4765_);
v___x_4797_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4797_;
}
else
{
lean_object* v___x_4798_; lean_object* v___x_4799_; 
v___x_4798_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__2, &l_Lean_Elab_Do_elabDoLet___closed__2_once, _init_l_Lean_Elab_Do_elabDoLet___closed__2);
v___x_4799_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg(v_config_4789_, v_mutTk_x3f_4780_, v___x_4798_, v___y_4782_, v___y_4783_, v___y_4784_, v___y_4785_, v___y_4786_, v___y_4787_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_object* v_a_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; 
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
lean_inc(v_a_4800_);
lean_dec_ref(v___x_4799_);
v___x_4801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4801_, 0, v_mutTk_x3f_4780_);
v___x_4802_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4800_, v___x_4801_, v_decl_4794_, v_tk_4778_, v_dec_4765_, v___y_4781_, v___y_4782_, v___y_4783_, v___y_4784_, v___y_4785_, v___y_4786_, v___y_4787_);
return v___x_4802_;
}
else
{
lean_object* v_a_4803_; lean_object* v___x_4805_; uint8_t v_isShared_4806_; uint8_t v_isSharedCheck_4810_; 
lean_dec(v_decl_4794_);
lean_dec(v_mutTk_x3f_4780_);
lean_dec(v_tk_4778_);
lean_dec_ref(v_dec_4765_);
v_a_4803_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4810_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4810_ == 0)
{
v___x_4805_ = v___x_4799_;
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
else
{
lean_inc(v_a_4803_);
lean_dec(v___x_4799_);
v___x_4805_ = lean_box(0);
v_isShared_4806_ = v_isSharedCheck_4810_;
goto v_resetjp_4804_;
}
v_resetjp_4804_:
{
lean_object* v___x_4808_; 
if (v_isShared_4806_ == 0)
{
v___x_4808_ = v___x_4805_;
goto v_reusejp_4807_;
}
else
{
lean_object* v_reuseFailAlloc_4809_; 
v_reuseFailAlloc_4809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4809_, 0, v_a_4803_);
v___x_4808_ = v_reuseFailAlloc_4809_;
goto v_reusejp_4807_;
}
v_reusejp_4807_:
{
return v___x_4808_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLet___boxed(lean_object* v_stx_4819_, lean_object* v_dec_4820_, lean_object* v_a_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_, lean_object* v_a_4826_, lean_object* v_a_4827_, lean_object* v_a_4828_){
_start:
{
lean_object* v_res_4829_; 
v_res_4829_ = l_Lean_Elab_Do_elabDoLet(v_stx_4819_, v_dec_4820_, v_a_4821_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_, v_a_4826_, v_a_4827_);
lean_dec(v_a_4827_);
lean_dec_ref(v_a_4826_);
lean_dec(v_a_4825_);
lean_dec_ref(v_a_4824_);
lean_dec(v_a_4823_);
lean_dec_ref(v_a_4822_);
lean_dec_ref(v_a_4821_);
return v_res_4829_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0(void){
_start:
{
lean_object* v___x_4830_; 
v___x_4830_ = lean_mk_string_unchecked("elabDoLet", 9, 9);
return v___x_4830_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1(void){
_start:
{
lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v___x_4831_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__0);
v___x_4832_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_4833_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_4834_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4835_ = l_Lean_Name_mkStr4(v___x_4834_, v___x_4833_, v___x_4832_, v___x_4831_);
return v___x_4835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1(){
_start:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; 
v___x_4837_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4838_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__0, &l_Lean_Elab_Do_elabDoLet___closed__0_once, _init_l_Lean_Elab_Do_elabDoLet___closed__0);
v___x_4839_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___closed__1);
v___x_4840_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLet___boxed), 10, 0);
v___x_4841_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4837_, v___x_4838_, v___x_4839_, v___x_4840_);
return v___x_4841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1___boxed(lean_object* v_a_4842_){
_start:
{
lean_object* v_res_4843_; 
v_res_4843_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
return v_res_4843_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoHave___closed__0(void){
_start:
{
lean_object* v___x_4844_; lean_object* v___x_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; 
v___x_4844_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__7);
v___x_4845_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4846_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4847_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4848_ = l_Lean_Name_mkStr4(v___x_4847_, v___x_4846_, v___x_4845_, v___x_4844_);
return v___x_4848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave(lean_object* v_stx_4849_, lean_object* v_dec_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_, lean_object* v_a_4853_, lean_object* v_a_4854_, lean_object* v_a_4855_, lean_object* v_a_4856_, lean_object* v_a_4857_){
_start:
{
lean_object* v___x_4859_; uint8_t v___x_4860_; 
v___x_4859_ = lean_obj_once(&l_Lean_Elab_Do_elabDoHave___closed__0, &l_Lean_Elab_Do_elabDoHave___closed__0_once, _init_l_Lean_Elab_Do_elabDoHave___closed__0);
lean_inc(v_stx_4849_);
v___x_4860_ = l_Lean_Syntax_isOfKind(v_stx_4849_, v___x_4859_);
if (v___x_4860_ == 0)
{
lean_object* v___x_4861_; 
lean_dec_ref(v_dec_4850_);
lean_dec(v_stx_4849_);
v___x_4861_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4861_;
}
else
{
lean_object* v___x_4862_; lean_object* v___x_4863_; lean_object* v___x_4864_; uint8_t v___x_4865_; 
v___x_4862_ = lean_unsigned_to_nat(1u);
v___x_4863_ = l_Lean_Syntax_getArg(v_stx_4849_, v___x_4862_);
v___x_4864_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__1, &l_Lean_Elab_Do_elabDoLet___closed__1_once, _init_l_Lean_Elab_Do_elabDoLet___closed__1);
lean_inc(v___x_4863_);
v___x_4865_ = l_Lean_Syntax_isOfKind(v___x_4863_, v___x_4864_);
if (v___x_4865_ == 0)
{
lean_object* v___x_4866_; 
lean_dec(v___x_4863_);
lean_dec_ref(v_dec_4850_);
lean_dec(v_stx_4849_);
v___x_4866_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4866_;
}
else
{
lean_object* v___x_4867_; lean_object* v_decl_4868_; lean_object* v___x_4869_; uint8_t v___x_4870_; 
v___x_4867_ = lean_unsigned_to_nat(2u);
v_decl_4868_ = l_Lean_Syntax_getArg(v_stx_4849_, v___x_4867_);
v___x_4869_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
lean_inc(v_decl_4868_);
v___x_4870_ = l_Lean_Syntax_isOfKind(v_decl_4868_, v___x_4869_);
if (v___x_4870_ == 0)
{
lean_object* v___x_4871_; 
lean_dec(v_decl_4868_);
lean_dec(v___x_4863_);
lean_dec_ref(v_dec_4850_);
lean_dec(v_stx_4849_);
v___x_4871_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_4871_;
}
else
{
uint8_t v___x_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; 
v___x_4872_ = 0;
v___x_4873_ = lean_box(0);
v___x_4874_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_4874_, 0, v___x_4873_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*1, v___x_4870_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*1 + 1, v___x_4872_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*1 + 2, v___x_4872_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*1 + 3, v___x_4872_);
lean_ctor_set_uint8(v___x_4874_, sizeof(void*)*1 + 4, v___x_4872_);
v___x_4875_ = l_Lean_Elab_Term_mkLetConfig(v___x_4863_, v___x_4874_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
if (lean_obj_tag(v___x_4875_) == 0)
{
lean_object* v_a_4876_; lean_object* v___x_4877_; lean_object* v_tk_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; 
v_a_4876_ = lean_ctor_get(v___x_4875_, 0);
lean_inc(v_a_4876_);
lean_dec_ref(v___x_4875_);
v___x_4877_ = lean_unsigned_to_nat(0u);
v_tk_4878_ = l_Lean_Syntax_getArg(v_stx_4849_, v___x_4877_);
lean_dec(v_stx_4849_);
v___x_4879_ = lean_box(1);
v___x_4880_ = l_Lean_Elab_Do_elabDoLetOrReassign(v_a_4876_, v___x_4879_, v_decl_4868_, v_tk_4878_, v_dec_4850_, v_a_4851_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
return v___x_4880_;
}
else
{
lean_object* v_a_4881_; lean_object* v___x_4883_; uint8_t v_isShared_4884_; uint8_t v_isSharedCheck_4888_; 
lean_dec(v_decl_4868_);
lean_dec_ref(v_dec_4850_);
lean_dec(v_stx_4849_);
v_a_4881_ = lean_ctor_get(v___x_4875_, 0);
v_isSharedCheck_4888_ = !lean_is_exclusive(v___x_4875_);
if (v_isSharedCheck_4888_ == 0)
{
v___x_4883_ = v___x_4875_;
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
else
{
lean_inc(v_a_4881_);
lean_dec(v___x_4875_);
v___x_4883_ = lean_box(0);
v_isShared_4884_ = v_isSharedCheck_4888_;
goto v_resetjp_4882_;
}
v_resetjp_4882_:
{
lean_object* v___x_4886_; 
if (v_isShared_4884_ == 0)
{
v___x_4886_ = v___x_4883_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4887_; 
v_reuseFailAlloc_4887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4887_, 0, v_a_4881_);
v___x_4886_ = v_reuseFailAlloc_4887_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
return v___x_4886_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoHave___boxed(lean_object* v_stx_4889_, lean_object* v_dec_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_, lean_object* v_a_4893_, lean_object* v_a_4894_, lean_object* v_a_4895_, lean_object* v_a_4896_, lean_object* v_a_4897_, lean_object* v_a_4898_){
_start:
{
lean_object* v_res_4899_; 
v_res_4899_ = l_Lean_Elab_Do_elabDoHave(v_stx_4889_, v_dec_4890_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_, v_a_4895_, v_a_4896_, v_a_4897_);
lean_dec(v_a_4897_);
lean_dec_ref(v_a_4896_);
lean_dec(v_a_4895_);
lean_dec_ref(v_a_4894_);
lean_dec(v_a_4893_);
lean_dec_ref(v_a_4892_);
lean_dec_ref(v_a_4891_);
return v_res_4899_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0(void){
_start:
{
lean_object* v___x_4900_; 
v___x_4900_ = lean_mk_string_unchecked("elabDoHave", 10, 10);
return v___x_4900_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1(void){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4903_; lean_object* v___x_4904_; lean_object* v___x_4905_; 
v___x_4901_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__0);
v___x_4902_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_4903_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_4904_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4905_ = l_Lean_Name_mkStr4(v___x_4904_, v___x_4903_, v___x_4902_, v___x_4901_);
return v___x_4905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1(){
_start:
{
lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4909_; lean_object* v___x_4910_; lean_object* v___x_4911_; 
v___x_4907_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_4908_ = lean_obj_once(&l_Lean_Elab_Do_elabDoHave___closed__0, &l_Lean_Elab_Do_elabDoHave___closed__0_once, _init_l_Lean_Elab_Do_elabDoHave___closed__0);
v___x_4909_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___closed__1);
v___x_4910_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoHave___boxed), 10, 0);
v___x_4911_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4907_, v___x_4908_, v___x_4909_, v___x_4910_);
return v___x_4911_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1___boxed(lean_object* v_a_4912_){
_start:
{
lean_object* v_res_4913_; 
v_res_4913_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
return v_res_4913_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4914_; 
v___x_4914_ = lean_mk_string_unchecked("letrec", 6, 6);
return v___x_4914_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4915_; 
v___x_4915_ = lean_mk_string_unchecked("rec", 3, 3);
return v___x_4915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0(lean_object* v___x_4916_, lean_object* v___x_4917_, lean_object* v___x_4918_, lean_object* v___x_4919_, lean_object* v_decls_4920_, lean_object* v_a_4921_, uint8_t v___x_4922_, lean_object* v_body_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_){
_start:
{
lean_object* v_ref_4932_; uint8_t v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; 
v_ref_4932_ = lean_ctor_get(v___y_4929_, 5);
v___x_4933_ = 0;
v___x_4934_ = l_Lean_SourceInfo_fromRef(v_ref_4932_, v___x_4933_);
v___x_4935_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0, &l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__0);
v___x_4936_ = l_Lean_Name_mkStr4(v___x_4916_, v___x_4917_, v___x_4918_, v___x_4935_);
v___x_4937_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
lean_inc_n(v___x_4934_, 4);
v___x_4938_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4938_, 0, v___x_4934_);
lean_ctor_set(v___x_4938_, 1, v___x_4937_);
v___x_4939_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1, &l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetRec___lam__0___closed__1);
v___x_4940_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4940_, 0, v___x_4934_);
lean_ctor_set(v___x_4940_, 1, v___x_4939_);
v___x_4941_ = l_Lean_Syntax_node2(v___x_4934_, v___x_4919_, v___x_4938_, v___x_4940_);
v___x_4942_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7);
v___x_4943_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4943_, 0, v___x_4934_);
lean_ctor_set(v___x_4943_, 1, v___x_4942_);
v___x_4944_ = l_Lean_Syntax_node4(v___x_4934_, v___x_4936_, v___x_4941_, v_decls_4920_, v___x_4943_, v_body_4923_);
v___x_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4945_, 0, v_a_4921_);
v___x_4946_ = l_Lean_Elab_Term_elabTerm(v___x_4944_, v___x_4945_, v___x_4922_, v___x_4922_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_, v___y_4929_, v___y_4930_);
return v___x_4946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed(lean_object* v___x_4947_, lean_object* v___x_4948_, lean_object* v___x_4949_, lean_object* v___x_4950_, lean_object* v_decls_4951_, lean_object* v_a_4952_, lean_object* v___x_4953_, lean_object* v_body_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_, lean_object* v___y_4962_){
_start:
{
uint8_t v___x_5027__boxed_4963_; lean_object* v_res_4964_; 
v___x_5027__boxed_4963_ = lean_unbox(v___x_4953_);
v_res_4964_ = l_Lean_Elab_Do_elabDoLetRec___lam__0(v___x_4947_, v___x_4948_, v___x_4949_, v___x_4950_, v_decls_4951_, v_a_4952_, v___x_5027__boxed_4963_, v_body_4954_, v___y_4955_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_, v___y_4960_, v___y_4961_);
lean_dec(v___y_4961_);
lean_dec_ref(v___y_4960_);
lean_dec(v___y_4959_);
lean_dec_ref(v___y_4958_);
lean_dec(v___y_4957_);
lean_dec_ref(v___y_4956_);
lean_dec_ref(v___y_4955_);
return v_res_4964_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(lean_object* v_a_4965_, lean_object* v_a_4966_){
_start:
{
if (lean_obj_tag(v_a_4965_) == 0)
{
lean_object* v___x_4967_; 
v___x_4967_ = l_List_reverse___redArg(v_a_4966_);
return v___x_4967_;
}
else
{
lean_object* v_head_4968_; lean_object* v_tail_4969_; lean_object* v___x_4971_; uint8_t v_isShared_4972_; uint8_t v_isSharedCheck_4978_; 
v_head_4968_ = lean_ctor_get(v_a_4965_, 0);
v_tail_4969_ = lean_ctor_get(v_a_4965_, 1);
v_isSharedCheck_4978_ = !lean_is_exclusive(v_a_4965_);
if (v_isSharedCheck_4978_ == 0)
{
v___x_4971_ = v_a_4965_;
v_isShared_4972_ = v_isSharedCheck_4978_;
goto v_resetjp_4970_;
}
else
{
lean_inc(v_tail_4969_);
lean_inc(v_head_4968_);
lean_dec(v_a_4965_);
v___x_4971_ = lean_box(0);
v_isShared_4972_ = v_isSharedCheck_4978_;
goto v_resetjp_4970_;
}
v_resetjp_4970_:
{
lean_object* v___x_4973_; lean_object* v___x_4975_; 
v___x_4973_ = l_Lean_MessageData_ofSyntax(v_head_4968_);
if (v_isShared_4972_ == 0)
{
lean_ctor_set(v___x_4971_, 1, v_a_4966_);
lean_ctor_set(v___x_4971_, 0, v___x_4973_);
v___x_4975_ = v___x_4971_;
goto v_reusejp_4974_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v___x_4973_);
lean_ctor_set(v_reuseFailAlloc_4977_, 1, v_a_4966_);
v___x_4975_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4974_;
}
v_reusejp_4974_:
{
v_a_4965_ = v_tail_4969_;
v_a_4966_ = v___x_4975_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__0(void){
_start:
{
lean_object* v___x_4979_; 
v___x_4979_ = lean_mk_string_unchecked("doLetRec", 8, 8);
return v___x_4979_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__1(void){
_start:
{
lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; 
v___x_4980_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__0, &l_Lean_Elab_Do_elabDoLetRec___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__0);
v___x_4981_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4982_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4983_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4984_ = l_Lean_Name_mkStr4(v___x_4983_, v___x_4982_, v___x_4981_, v___x_4980_);
return v___x_4984_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__2(void){
_start:
{
lean_object* v___x_4985_; 
v___x_4985_ = lean_mk_string_unchecked("group", 5, 5);
return v___x_4985_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__3(void){
_start:
{
lean_object* v___x_4986_; lean_object* v___x_4987_; 
v___x_4986_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__2, &l_Lean_Elab_Do_elabDoLetRec___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__2);
v___x_4987_ = l_Lean_Name_mkStr1(v___x_4986_);
return v___x_4987_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__4(void){
_start:
{
lean_object* v___x_4988_; 
v___x_4988_ = lean_mk_string_unchecked("letRecDecls", 11, 11);
return v___x_4988_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__5(void){
_start:
{
lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; 
v___x_4989_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__4, &l_Lean_Elab_Do_elabDoLetRec___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__4);
v___x_4990_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_4991_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_4992_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_4993_ = l_Lean_Name_mkStr4(v___x_4992_, v___x_4991_, v___x_4990_, v___x_4989_);
return v___x_4993_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__6(void){
_start:
{
lean_object* v___x_4994_; 
v___x_4994_ = lean_mk_string_unchecked("let rec body of group ", 22, 22);
return v___x_4994_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetRec___closed__7(void){
_start:
{
lean_object* v___x_4995_; lean_object* v___x_4996_; 
v___x_4995_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__6, &l_Lean_Elab_Do_elabDoLetRec___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__6);
v___x_4996_ = l_Lean_stringToMessageData(v___x_4995_);
return v___x_4996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec(lean_object* v_stx_4997_, lean_object* v_dec_4998_, lean_object* v_a_4999_, lean_object* v_a_5000_, lean_object* v_a_5001_, lean_object* v_a_5002_, lean_object* v_a_5003_, lean_object* v_a_5004_, lean_object* v_a_5005_){
_start:
{
lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; uint8_t v___x_5011_; 
v___x_5007_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5008_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5009_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5010_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__1, &l_Lean_Elab_Do_elabDoLetRec___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__1);
lean_inc(v_stx_4997_);
v___x_5011_ = l_Lean_Syntax_isOfKind(v_stx_4997_, v___x_5010_);
if (v___x_5011_ == 0)
{
lean_object* v___x_5012_; 
lean_dec_ref(v_dec_4998_);
lean_dec(v_stx_4997_);
v___x_5012_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5012_;
}
else
{
lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; uint8_t v___x_5016_; 
v___x_5013_ = lean_unsigned_to_nat(0u);
v___x_5014_ = l_Lean_Syntax_getArg(v_stx_4997_, v___x_5013_);
v___x_5015_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__3, &l_Lean_Elab_Do_elabDoLetRec___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__3);
lean_inc(v___x_5014_);
v___x_5016_ = l_Lean_Syntax_isOfKind(v___x_5014_, v___x_5015_);
if (v___x_5016_ == 0)
{
lean_object* v___x_5017_; 
lean_dec(v___x_5014_);
lean_dec_ref(v_dec_4998_);
lean_dec(v_stx_4997_);
v___x_5017_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5017_;
}
else
{
lean_object* v___x_5018_; lean_object* v_decls_5019_; lean_object* v___x_5020_; uint8_t v___x_5021_; 
v___x_5018_ = lean_unsigned_to_nat(1u);
v_decls_5019_ = l_Lean_Syntax_getArg(v_stx_4997_, v___x_5018_);
lean_dec(v_stx_4997_);
v___x_5020_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__5, &l_Lean_Elab_Do_elabDoLetRec___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__5);
lean_inc(v_decls_5019_);
v___x_5021_ = l_Lean_Syntax_isOfKind(v_decls_5019_, v___x_5020_);
if (v___x_5021_ == 0)
{
lean_object* v___x_5022_; 
lean_dec(v_decls_5019_);
lean_dec(v___x_5014_);
lean_dec_ref(v_dec_4998_);
v___x_5022_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5022_;
}
else
{
lean_object* v_tk_5023_; lean_object* v___x_5024_; 
v_tk_5023_ = l_Lean_Syntax_getArg(v___x_5014_, v___x_5013_);
lean_dec(v___x_5014_);
v___x_5024_ = l_Lean_Elab_Do_DoElemCont_ensureUnitAt(v_dec_4998_, v_tk_5023_, v_a_4999_, v_a_5000_, v_a_5001_, v_a_5002_, v_a_5003_, v_a_5004_, v_a_5005_);
lean_dec(v_tk_5023_);
if (lean_obj_tag(v___x_5024_) == 0)
{
lean_object* v_a_5025_; lean_object* v___x_5026_; 
v_a_5025_ = lean_ctor_get(v___x_5024_, 0);
lean_inc(v_a_5025_);
lean_dec_ref(v___x_5024_);
lean_inc(v_decls_5019_);
v___x_5026_ = l_Lean_Elab_Do_getLetRecDeclsVars(v_decls_5019_, v_a_5000_, v_a_5001_, v_a_5002_, v_a_5003_, v_a_5004_, v_a_5005_);
if (lean_obj_tag(v___x_5026_) == 0)
{
lean_object* v_a_5027_; lean_object* v_doBlockResultType_5028_; lean_object* v___x_5029_; 
v_a_5027_ = lean_ctor_get(v___x_5026_, 0);
lean_inc(v_a_5027_);
lean_dec_ref(v___x_5026_);
v_doBlockResultType_5028_ = lean_ctor_get(v_a_4999_, 3);
lean_inc_ref(v_doBlockResultType_5028_);
v___x_5029_ = l_Lean_Elab_Do_mkMonadicType___redArg(v_doBlockResultType_5028_, v_a_4999_);
if (lean_obj_tag(v___x_5029_) == 0)
{
lean_object* v_a_5030_; lean_object* v___x_5031_; lean_object* v___f_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; 
v_a_5030_ = lean_ctor_get(v___x_5029_, 0);
lean_inc(v_a_5030_);
lean_dec_ref(v___x_5029_);
v___x_5031_ = lean_box(v___x_5021_);
v___f_5032_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___lam__0___boxed), 16, 7);
lean_closure_set(v___f_5032_, 0, v___x_5007_);
lean_closure_set(v___f_5032_, 1, v___x_5008_);
lean_closure_set(v___f_5032_, 2, v___x_5009_);
lean_closure_set(v___f_5032_, 3, v___x_5015_);
lean_closure_set(v___f_5032_, 4, v_decls_5019_);
lean_closure_set(v___f_5032_, 5, v_a_5030_);
lean_closure_set(v___f_5032_, 6, v___x_5031_);
v___x_5033_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__7, &l_Lean_Elab_Do_elabDoLetRec___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__7);
v___x_5034_ = lean_array_to_list(v_a_5027_);
v___x_5035_ = lean_box(0);
v___x_5036_ = l_List_mapTR_loop___at___00Lean_Elab_Do_elabDoLetRec_spec__0(v___x_5034_, v___x_5035_);
v___x_5037_ = l_Lean_MessageData_ofList(v___x_5036_);
v___x_5038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5038_, 0, v___x_5033_);
lean_ctor_set(v___x_5038_, 1, v___x_5037_);
v___x_5039_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_DoElemCont_continueWithUnit___boxed), 9, 1);
lean_closure_set(v___x_5039_, 0, v_a_5025_);
v___x_5040_ = lean_box(0);
v___x_5041_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_5038_, v___x_5039_, v___f_5032_, v___x_5040_, v_a_4999_, v_a_5000_, v_a_5001_, v_a_5002_, v_a_5003_, v_a_5004_, v_a_5005_);
return v___x_5041_;
}
else
{
lean_dec(v_a_5027_);
lean_dec(v_a_5025_);
lean_dec(v_decls_5019_);
return v___x_5029_;
}
}
else
{
lean_object* v_a_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5049_; 
lean_dec(v_a_5025_);
lean_dec(v_decls_5019_);
v_a_5042_ = lean_ctor_get(v___x_5026_, 0);
v_isSharedCheck_5049_ = !lean_is_exclusive(v___x_5026_);
if (v_isSharedCheck_5049_ == 0)
{
v___x_5044_ = v___x_5026_;
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_a_5042_);
lean_dec(v___x_5026_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v___x_5047_; 
if (v_isShared_5045_ == 0)
{
v___x_5047_ = v___x_5044_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v_a_5042_);
v___x_5047_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
return v___x_5047_;
}
}
}
}
else
{
lean_object* v_a_5050_; lean_object* v___x_5052_; uint8_t v_isShared_5053_; uint8_t v_isSharedCheck_5057_; 
lean_dec(v_decls_5019_);
v_a_5050_ = lean_ctor_get(v___x_5024_, 0);
v_isSharedCheck_5057_ = !lean_is_exclusive(v___x_5024_);
if (v_isSharedCheck_5057_ == 0)
{
v___x_5052_ = v___x_5024_;
v_isShared_5053_ = v_isSharedCheck_5057_;
goto v_resetjp_5051_;
}
else
{
lean_inc(v_a_5050_);
lean_dec(v___x_5024_);
v___x_5052_ = lean_box(0);
v_isShared_5053_ = v_isSharedCheck_5057_;
goto v_resetjp_5051_;
}
v_resetjp_5051_:
{
lean_object* v___x_5055_; 
if (v_isShared_5053_ == 0)
{
v___x_5055_ = v___x_5052_;
goto v_reusejp_5054_;
}
else
{
lean_object* v_reuseFailAlloc_5056_; 
v_reuseFailAlloc_5056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5056_, 0, v_a_5050_);
v___x_5055_ = v_reuseFailAlloc_5056_;
goto v_reusejp_5054_;
}
v_reusejp_5054_:
{
return v___x_5055_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetRec___boxed(lean_object* v_stx_5058_, lean_object* v_dec_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_, lean_object* v_a_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_){
_start:
{
lean_object* v_res_5068_; 
v_res_5068_ = l_Lean_Elab_Do_elabDoLetRec(v_stx_5058_, v_dec_5059_, v_a_5060_, v_a_5061_, v_a_5062_, v_a_5063_, v_a_5064_, v_a_5065_, v_a_5066_);
lean_dec(v_a_5066_);
lean_dec_ref(v_a_5065_);
lean_dec(v_a_5064_);
lean_dec_ref(v_a_5063_);
lean_dec(v_a_5062_);
lean_dec_ref(v_a_5061_);
lean_dec_ref(v_a_5060_);
return v_res_5068_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0(void){
_start:
{
lean_object* v___x_5069_; 
v___x_5069_ = lean_mk_string_unchecked("elabDoLetRec", 12, 12);
return v___x_5069_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1(void){
_start:
{
lean_object* v___x_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; 
v___x_5070_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__0);
v___x_5071_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_5072_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_5073_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5074_ = l_Lean_Name_mkStr4(v___x_5073_, v___x_5072_, v___x_5071_, v___x_5070_);
return v___x_5074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1(){
_start:
{
lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; 
v___x_5076_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5077_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetRec___closed__1, &l_Lean_Elab_Do_elabDoLetRec___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetRec___closed__1);
v___x_5078_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___closed__1);
v___x_5079_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetRec___boxed), 10, 0);
v___x_5080_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5076_, v___x_5077_, v___x_5078_, v___x_5079_);
return v___x_5080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1___boxed(lean_object* v_a_5081_){
_start:
{
lean_object* v_res_5082_; 
v_res_5082_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
return v_res_5082_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassign___closed__0(void){
_start:
{
lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; 
v___x_5083_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__0);
v___x_5084_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5085_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5086_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5087_ = l_Lean_Name_mkStr4(v___x_5086_, v___x_5085_, v___x_5084_, v___x_5083_);
return v___x_5087_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassign___closed__1(void){
_start:
{
lean_object* v___x_5088_; 
v___x_5088_ = lean_mk_string_unchecked("letIdDeclNoBinders", 18, 18);
return v___x_5088_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassign___closed__2(void){
_start:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; lean_object* v___x_5091_; lean_object* v___x_5092_; lean_object* v___x_5093_; 
v___x_5089_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassign___closed__1, &l_Lean_Elab_Do_elabDoReassign___closed__1_once, _init_l_Lean_Elab_Do_elabDoReassign___closed__1);
v___x_5090_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5091_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5092_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5093_ = l_Lean_Name_mkStr4(v___x_5092_, v___x_5091_, v___x_5090_, v___x_5089_);
return v___x_5093_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassign___closed__3(void){
_start:
{
lean_object* v___x_5094_; lean_object* v___x_5095_; 
v___x_5094_ = lean_unsigned_to_nat(0u);
v___x_5095_ = lean_mk_empty_array_with_capacity(v___x_5094_);
return v___x_5095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign(lean_object* v_stx_5096_, lean_object* v_dec_5097_, lean_object* v_a_5098_, lean_object* v_a_5099_, lean_object* v_a_5100_, lean_object* v_a_5101_, lean_object* v_a_5102_, lean_object* v_a_5103_, lean_object* v_a_5104_){
_start:
{
lean_object* v___y_5107_; uint8_t v___y_5108_; lean_object* v___y_5109_; lean_object* v___y_5110_; lean_object* v___y_5111_; lean_object* v___y_5112_; lean_object* v___y_5113_; lean_object* v___y_5114_; lean_object* v___y_5115_; lean_object* v___y_5116_; lean_object* v___y_5117_; lean_object* v___y_5118_; lean_object* v___y_5119_; lean_object* v___y_5120_; lean_object* v___y_5121_; lean_object* v___y_5122_; lean_object* v___y_5123_; lean_object* v___x_5139_; uint8_t v___x_5140_; 
v___x_5139_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassign___closed__0, &l_Lean_Elab_Do_elabDoReassign___closed__0_once, _init_l_Lean_Elab_Do_elabDoReassign___closed__0);
lean_inc(v_stx_5096_);
v___x_5140_ = l_Lean_Syntax_isOfKind(v_stx_5096_, v___x_5139_);
if (v___x_5140_ == 0)
{
lean_object* v___x_5141_; 
lean_dec_ref(v_dec_5097_);
lean_dec(v_stx_5096_);
v___x_5141_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5141_;
}
else
{
lean_object* v___x_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; uint8_t v___x_5145_; 
v___x_5142_ = lean_unsigned_to_nat(0u);
v___x_5143_ = l_Lean_Syntax_getArg(v_stx_5096_, v___x_5142_);
lean_dec(v_stx_5096_);
v___x_5144_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassign___closed__2, &l_Lean_Elab_Do_elabDoReassign___closed__2_once, _init_l_Lean_Elab_Do_elabDoReassign___closed__2);
lean_inc(v___x_5143_);
v___x_5145_ = l_Lean_Syntax_isOfKind(v___x_5143_, v___x_5144_);
if (v___x_5145_ == 0)
{
lean_object* v___x_5146_; uint8_t v___x_5147_; 
v___x_5146_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__10);
lean_inc(v___x_5143_);
v___x_5147_ = l_Lean_Syntax_isOfKind(v___x_5143_, v___x_5146_);
if (v___x_5147_ == 0)
{
lean_object* v___x_5148_; 
lean_dec(v___x_5143_);
lean_dec_ref(v_dec_5097_);
v___x_5148_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5148_;
}
else
{
lean_object* v___x_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v_decl_5154_; lean_object* v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; 
v___x_5149_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
v___x_5150_ = lean_unsigned_to_nat(1u);
v___x_5151_ = lean_mk_empty_array_with_capacity(v___x_5150_);
v___x_5152_ = lean_array_push(v___x_5151_, v___x_5143_);
v___x_5153_ = lean_box(2);
v_decl_5154_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_decl_5154_, 0, v___x_5153_);
lean_ctor_set(v_decl_5154_, 1, v___x_5149_);
lean_ctor_set(v_decl_5154_, 2, v___x_5152_);
v___x_5155_ = lean_box(0);
v___x_5156_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5156_, 0, v___x_5155_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*1, v___x_5145_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*1 + 1, v___x_5145_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*1 + 2, v___x_5145_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*1 + 3, v___x_5145_);
lean_ctor_set_uint8(v___x_5156_, sizeof(void*)*1 + 4, v___x_5145_);
v___x_5157_ = lean_box(2);
lean_inc_ref(v_decl_5154_);
v___x_5158_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5156_, v___x_5157_, v_decl_5154_, v_decl_5154_, v_dec_5097_, v_a_5098_, v_a_5099_, v_a_5100_, v_a_5101_, v_a_5102_, v_a_5103_, v_a_5104_);
return v___x_5158_;
}
}
else
{
lean_object* v___x_5159_; lean_object* v___x_5160_; uint8_t v___x_5161_; 
v___x_5159_ = l_Lean_Syntax_getArg(v___x_5143_, v___x_5142_);
v___x_5160_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41);
lean_inc(v___x_5159_);
v___x_5161_ = l_Lean_Syntax_isOfKind(v___x_5159_, v___x_5160_);
if (v___x_5161_ == 0)
{
lean_object* v___x_5162_; 
lean_dec(v___x_5159_);
lean_dec(v___x_5143_);
lean_dec_ref(v_dec_5097_);
v___x_5162_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5162_;
}
else
{
lean_object* v___x_5163_; lean_object* v_xType_x3f_5165_; lean_object* v___y_5166_; lean_object* v___y_5167_; lean_object* v___y_5168_; lean_object* v___y_5169_; lean_object* v___y_5170_; lean_object* v___y_5171_; lean_object* v___y_5172_; lean_object* v___x_5192_; uint8_t v___x_5193_; 
v___x_5163_ = l_Lean_Syntax_getArg(v___x_5159_, v___x_5142_);
lean_dec(v___x_5159_);
v___x_5192_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__43);
lean_inc(v___x_5163_);
v___x_5193_ = l_Lean_Syntax_isOfKind(v___x_5163_, v___x_5192_);
if (v___x_5193_ == 0)
{
lean_object* v___x_5194_; 
lean_dec(v___x_5163_);
lean_dec(v___x_5143_);
lean_dec_ref(v_dec_5097_);
v___x_5194_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5194_;
}
else
{
lean_object* v___x_5195_; lean_object* v___x_5196_; uint8_t v___x_5197_; 
v___x_5195_ = lean_unsigned_to_nat(1u);
v___x_5196_ = l_Lean_Syntax_getArg(v___x_5143_, v___x_5195_);
v___x_5197_ = l_Lean_Syntax_matchesNull(v___x_5196_, v___x_5142_);
if (v___x_5197_ == 0)
{
lean_object* v___x_5198_; 
lean_dec(v___x_5163_);
lean_dec(v___x_5143_);
lean_dec_ref(v_dec_5097_);
v___x_5198_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5198_;
}
else
{
lean_object* v___x_5199_; lean_object* v___x_5200_; uint8_t v___x_5201_; 
v___x_5199_ = lean_unsigned_to_nat(2u);
v___x_5200_ = l_Lean_Syntax_getArg(v___x_5143_, v___x_5199_);
v___x_5201_ = l_Lean_Syntax_isNone(v___x_5200_);
if (v___x_5201_ == 0)
{
uint8_t v___x_5202_; 
lean_inc(v___x_5200_);
v___x_5202_ = l_Lean_Syntax_matchesNull(v___x_5200_, v___x_5195_);
if (v___x_5202_ == 0)
{
lean_object* v___x_5203_; 
lean_dec(v___x_5200_);
lean_dec(v___x_5163_);
lean_dec(v___x_5143_);
lean_dec_ref(v_dec_5097_);
v___x_5203_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5203_;
}
else
{
lean_object* v___x_5204_; lean_object* v___x_5205_; uint8_t v___x_5206_; 
v___x_5204_ = l_Lean_Syntax_getArg(v___x_5200_, v___x_5142_);
lean_dec(v___x_5200_);
v___x_5205_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
lean_inc(v___x_5204_);
v___x_5206_ = l_Lean_Syntax_isOfKind(v___x_5204_, v___x_5205_);
if (v___x_5206_ == 0)
{
lean_object* v___x_5207_; 
lean_dec(v___x_5204_);
lean_dec(v___x_5163_);
lean_dec(v___x_5143_);
lean_dec_ref(v_dec_5097_);
v___x_5207_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5207_;
}
else
{
lean_object* v_xType_x3f_5208_; lean_object* v___x_5209_; 
v_xType_x3f_5208_ = l_Lean_Syntax_getArg(v___x_5204_, v___x_5195_);
lean_dec(v___x_5204_);
v___x_5209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5209_, 0, v_xType_x3f_5208_);
v_xType_x3f_5165_ = v___x_5209_;
v___y_5166_ = v_a_5098_;
v___y_5167_ = v_a_5099_;
v___y_5168_ = v_a_5100_;
v___y_5169_ = v_a_5101_;
v___y_5170_ = v_a_5102_;
v___y_5171_ = v_a_5103_;
v___y_5172_ = v_a_5104_;
goto v___jp_5164_;
}
}
}
else
{
lean_object* v___x_5210_; 
lean_dec(v___x_5200_);
v___x_5210_ = lean_box(0);
v_xType_x3f_5165_ = v___x_5210_;
v___y_5166_ = v_a_5098_;
v___y_5167_ = v_a_5099_;
v___y_5168_ = v_a_5100_;
v___y_5169_ = v_a_5101_;
v___y_5170_ = v_a_5102_;
v___y_5171_ = v_a_5103_;
v___y_5172_ = v_a_5104_;
goto v___jp_5164_;
}
}
}
v___jp_5164_:
{
lean_object* v_ref_5173_; lean_object* v___x_5174_; lean_object* v_tk_5175_; lean_object* v___x_5176_; lean_object* v___x_5177_; uint8_t v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5180_; lean_object* v___x_5181_; lean_object* v___x_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; 
v_ref_5173_ = lean_ctor_get(v___y_5171_, 5);
v___x_5174_ = lean_unsigned_to_nat(3u);
v_tk_5175_ = l_Lean_Syntax_getArg(v___x_5143_, v___x_5174_);
v___x_5176_ = lean_unsigned_to_nat(4u);
v___x_5177_ = l_Lean_Syntax_getArg(v___x_5143_, v___x_5176_);
lean_dec(v___x_5143_);
v___x_5178_ = 0;
v___x_5179_ = l_Lean_SourceInfo_fromRef(v_ref_5173_, v___x_5178_);
v___x_5180_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8);
lean_inc_n(v___x_5179_, 2);
v___x_5181_ = l_Lean_Syntax_node1(v___x_5179_, v___x_5160_, v___x_5163_);
v___x_5182_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_5183_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5184_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5184_, 0, v___x_5179_);
lean_ctor_set(v___x_5184_, 1, v___x_5182_);
lean_ctor_set(v___x_5184_, 2, v___x_5183_);
if (lean_obj_tag(v_xType_x3f_5165_) == 1)
{
lean_object* v_val_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; 
v_val_5185_ = lean_ctor_get(v_xType_x3f_5165_, 0);
lean_inc(v_val_5185_);
lean_dec_ref(v_xType_x3f_5165_);
v___x_5186_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__39);
v___x_5187_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36);
lean_inc_n(v___x_5179_, 2);
v___x_5188_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5188_, 0, v___x_5179_);
lean_ctor_set(v___x_5188_, 1, v___x_5187_);
v___x_5189_ = l_Lean_Syntax_node2(v___x_5179_, v___x_5186_, v___x_5188_, v_val_5185_);
v___x_5190_ = l_Array_mkArray1___redArg(v___x_5189_);
v___y_5107_ = v___x_5182_;
v___y_5108_ = v___x_5178_;
v___y_5109_ = v___y_5169_;
v___y_5110_ = v___y_5167_;
v___y_5111_ = v___y_5171_;
v___y_5112_ = v_tk_5175_;
v___y_5113_ = v___x_5184_;
v___y_5114_ = v___y_5168_;
v___y_5115_ = v___x_5183_;
v___y_5116_ = v___y_5166_;
v___y_5117_ = v___x_5181_;
v___y_5118_ = v___y_5172_;
v___y_5119_ = v___x_5179_;
v___y_5120_ = v___y_5170_;
v___y_5121_ = v___x_5177_;
v___y_5122_ = v___x_5180_;
v___y_5123_ = v___x_5190_;
goto v___jp_5106_;
}
else
{
lean_object* v___x_5191_; 
lean_dec(v_xType_x3f_5165_);
v___x_5191_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassign___closed__3, &l_Lean_Elab_Do_elabDoReassign___closed__3_once, _init_l_Lean_Elab_Do_elabDoReassign___closed__3);
v___y_5107_ = v___x_5182_;
v___y_5108_ = v___x_5178_;
v___y_5109_ = v___y_5169_;
v___y_5110_ = v___y_5167_;
v___y_5111_ = v___y_5171_;
v___y_5112_ = v_tk_5175_;
v___y_5113_ = v___x_5184_;
v___y_5114_ = v___y_5168_;
v___y_5115_ = v___x_5183_;
v___y_5116_ = v___y_5166_;
v___y_5117_ = v___x_5181_;
v___y_5118_ = v___y_5172_;
v___y_5119_ = v___x_5179_;
v___y_5120_ = v___y_5170_;
v___y_5121_ = v___x_5177_;
v___y_5122_ = v___x_5180_;
v___y_5123_ = v___x_5191_;
goto v___jp_5106_;
}
}
}
}
}
v___jp_5106_:
{
lean_object* v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; lean_object* v___x_5128_; lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; lean_object* v___x_5136_; lean_object* v___x_5137_; lean_object* v___x_5138_; 
lean_inc_ref(v___y_5115_);
v___x_5124_ = l_Array_append___redArg(v___y_5115_, v___y_5123_);
lean_dec_ref(v___y_5123_);
lean_inc(v___y_5107_);
lean_inc_n(v___y_5119_, 2);
v___x_5125_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5125_, 0, v___y_5119_);
lean_ctor_set(v___x_5125_, 1, v___y_5107_);
lean_ctor_set(v___x_5125_, 2, v___x_5124_);
v___x_5126_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_5127_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5127_, 0, v___y_5119_);
lean_ctor_set(v___x_5127_, 1, v___x_5126_);
lean_inc(v___y_5122_);
v___x_5128_ = l_Lean_Syntax_node5(v___y_5119_, v___y_5122_, v___y_5117_, v___y_5113_, v___x_5125_, v___x_5127_, v___y_5121_);
v___x_5129_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
v___x_5130_ = lean_unsigned_to_nat(1u);
v___x_5131_ = lean_mk_empty_array_with_capacity(v___x_5130_);
v___x_5132_ = lean_array_push(v___x_5131_, v___x_5128_);
v___x_5133_ = lean_box(2);
v___x_5134_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5134_, 0, v___x_5133_);
lean_ctor_set(v___x_5134_, 1, v___x_5129_);
lean_ctor_set(v___x_5134_, 2, v___x_5132_);
v___x_5135_ = lean_box(0);
v___x_5136_ = lean_alloc_ctor(0, 1, 5);
lean_ctor_set(v___x_5136_, 0, v___x_5135_);
lean_ctor_set_uint8(v___x_5136_, sizeof(void*)*1, v___y_5108_);
lean_ctor_set_uint8(v___x_5136_, sizeof(void*)*1 + 1, v___y_5108_);
lean_ctor_set_uint8(v___x_5136_, sizeof(void*)*1 + 2, v___y_5108_);
lean_ctor_set_uint8(v___x_5136_, sizeof(void*)*1 + 3, v___y_5108_);
lean_ctor_set_uint8(v___x_5136_, sizeof(void*)*1 + 4, v___y_5108_);
v___x_5137_ = lean_box(2);
v___x_5138_ = l_Lean_Elab_Do_elabDoLetOrReassign(v___x_5136_, v___x_5137_, v___x_5134_, v___y_5112_, v_dec_5097_, v___y_5116_, v___y_5110_, v___y_5114_, v___y_5109_, v___y_5120_, v___y_5111_, v___y_5118_);
return v___x_5138_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassign___boxed(lean_object* v_stx_5211_, lean_object* v_dec_5212_, lean_object* v_a_5213_, lean_object* v_a_5214_, lean_object* v_a_5215_, lean_object* v_a_5216_, lean_object* v_a_5217_, lean_object* v_a_5218_, lean_object* v_a_5219_, lean_object* v_a_5220_){
_start:
{
lean_object* v_res_5221_; 
v_res_5221_ = l_Lean_Elab_Do_elabDoReassign(v_stx_5211_, v_dec_5212_, v_a_5213_, v_a_5214_, v_a_5215_, v_a_5216_, v_a_5217_, v_a_5218_, v_a_5219_);
lean_dec(v_a_5219_);
lean_dec_ref(v_a_5218_);
lean_dec(v_a_5217_);
lean_dec_ref(v_a_5216_);
lean_dec(v_a_5215_);
lean_dec_ref(v_a_5214_);
lean_dec_ref(v_a_5213_);
return v_res_5221_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0(void){
_start:
{
lean_object* v___x_5222_; 
v___x_5222_ = lean_mk_string_unchecked("elabDoReassign", 14, 14);
return v___x_5222_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1(void){
_start:
{
lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; 
v___x_5223_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__0);
v___x_5224_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_5225_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_5226_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5227_ = l_Lean_Name_mkStr4(v___x_5226_, v___x_5225_, v___x_5224_, v___x_5223_);
return v___x_5227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1(){
_start:
{
lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; 
v___x_5229_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5230_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassign___closed__0, &l_Lean_Elab_Do_elabDoReassign___closed__0_once, _init_l_Lean_Elab_Do_elabDoReassign___closed__0);
v___x_5231_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___closed__1);
v___x_5232_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassign___boxed), 10, 0);
v___x_5233_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5229_, v___x_5230_, v___x_5231_, v___x_5232_);
return v___x_5233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1___boxed(lean_object* v_a_5234_){
_start:
{
lean_object* v_res_5235_; 
v_res_5235_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
return v_res_5235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0(lean_object* v_____do__lift_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_){
_start:
{
uint8_t v___x_5245_; lean_object* v___x_5246_; lean_object* v___x_5247_; 
v___x_5245_ = 0;
v___x_5246_ = l_Lean_SourceInfo_fromRef(v_____do__lift_5236_, v___x_5245_);
v___x_5247_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5247_, 0, v___x_5246_);
return v___x_5247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___lam__0___boxed(lean_object* v_____do__lift_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_, lean_object* v___y_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_){
_start:
{
lean_object* v_res_5257_; 
v_res_5257_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_____do__lift_5248_, v___y_5249_, v___y_5250_, v___y_5251_, v___y_5252_, v___y_5253_, v___y_5254_, v___y_5255_);
lean_dec(v___y_5255_);
lean_dec_ref(v___y_5254_);
lean_dec(v___y_5253_);
lean_dec_ref(v___y_5252_);
lean_dec(v___y_5251_);
lean_dec_ref(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec(v_____do__lift_5248_);
return v_res_5257_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_5258_; 
v___x_5258_ = lean_mk_string_unchecked("doSeqIndent", 11, 11);
return v___x_5258_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; lean_object* v___x_5262_; lean_object* v___x_5263_; 
v___x_5259_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__0);
v___x_5260_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5261_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5262_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5263_ = l_Lean_Name_mkStr4(v___x_5262_, v___x_5261_, v___x_5260_, v___x_5259_);
return v___x_5263_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_5264_; 
v___x_5264_ = lean_mk_string_unchecked("doSeqItem", 9, 9);
return v___x_5264_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_5265_; lean_object* v___x_5266_; lean_object* v___x_5267_; lean_object* v___x_5268_; lean_object* v___x_5269_; 
v___x_5265_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__2);
v___x_5266_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5267_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5268_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5269_ = l_Lean_Name_mkStr4(v___x_5268_, v___x_5267_, v___x_5266_, v___x_5265_);
return v___x_5269_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_5270_; 
v___x_5270_ = lean_mk_string_unchecked("doNested", 8, 8);
return v___x_5270_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_5271_; lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; 
v___x_5271_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__4);
v___x_5272_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5273_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5274_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5275_ = l_Lean_Name_mkStr4(v___x_5274_, v___x_5273_, v___x_5272_, v___x_5271_);
return v___x_5275_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_5276_; 
v___x_5276_ = lean_mk_string_unchecked("do", 2, 2);
return v___x_5276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(lean_object* v_as_5277_, size_t v_sz_5278_, size_t v_i_5279_, lean_object* v_b_5280_, lean_object* v___y_5281_){
_start:
{
uint8_t v___x_5283_; 
v___x_5283_ = lean_usize_dec_lt(v_i_5279_, v_sz_5278_);
if (v___x_5283_ == 0)
{
lean_object* v___x_5284_; 
v___x_5284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5284_, 0, v_b_5280_);
return v___x_5284_;
}
else
{
lean_object* v_ref_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v_a_5288_; uint8_t v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___x_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; lean_object* v___x_5310_; lean_object* v___x_5311_; lean_object* v___x_5312_; lean_object* v___x_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; lean_object* v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; size_t v___x_5322_; size_t v___x_5323_; 
v_ref_5285_ = lean_ctor_get(v___y_5281_, 5);
v___x_5286_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__1, &l_Lean_Elab_Do_elabDoLet___closed__1_once, _init_l_Lean_Elab_Do_elabDoLet___closed__1);
v___x_5287_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1);
v_a_5288_ = lean_array_uget_borrowed(v_as_5277_, v_i_5279_);
v___x_5289_ = 0;
v___x_5290_ = l_Lean_SourceInfo_fromRef(v_ref_5285_, v___x_5289_);
v___x_5291_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_5292_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3);
v___x_5293_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__0, &l_Lean_Elab_Do_elabDoLet___closed__0_once, _init_l_Lean_Elab_Do_elabDoLet___closed__0);
v___x_5294_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
lean_inc_n(v___x_5290_, 17);
v___x_5295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5295_, 0, v___x_5290_);
lean_ctor_set(v___x_5295_, 1, v___x_5294_);
v___x_5296_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5);
v___x_5297_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5297_, 0, v___x_5290_);
lean_ctor_set(v___x_5297_, 1, v___x_5296_);
v___x_5298_ = l_Lean_Syntax_node1(v___x_5290_, v___x_5291_, v___x_5297_);
v___x_5299_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5300_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5300_, 0, v___x_5290_);
lean_ctor_set(v___x_5300_, 1, v___x_5291_);
lean_ctor_set(v___x_5300_, 2, v___x_5299_);
lean_inc_ref_n(v___x_5300_, 3);
v___x_5301_ = l_Lean_Syntax_node1(v___x_5290_, v___x_5286_, v___x_5300_);
v___x_5302_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
v___x_5303_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8);
v___x_5304_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41);
lean_inc_n(v_a_5288_, 2);
v___x_5305_ = l_Lean_Syntax_node1(v___x_5290_, v___x_5304_, v_a_5288_);
v___x_5306_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_5307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5290_);
lean_ctor_set(v___x_5307_, 1, v___x_5306_);
v___x_5308_ = l_Lean_Syntax_node5(v___x_5290_, v___x_5303_, v___x_5305_, v___x_5300_, v___x_5300_, v___x_5307_, v_a_5288_);
v___x_5309_ = l_Lean_Syntax_node1(v___x_5290_, v___x_5302_, v___x_5308_);
v___x_5310_ = l_Lean_Syntax_node4(v___x_5290_, v___x_5293_, v___x_5295_, v___x_5298_, v___x_5301_, v___x_5309_);
v___x_5311_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7);
v___x_5312_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5312_, 0, v___x_5290_);
lean_ctor_set(v___x_5312_, 1, v___x_5311_);
v___x_5313_ = l_Lean_Syntax_node1(v___x_5290_, v___x_5291_, v___x_5312_);
v___x_5314_ = l_Lean_Syntax_node2(v___x_5290_, v___x_5292_, v___x_5310_, v___x_5313_);
v___x_5315_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5);
v___x_5316_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6);
v___x_5317_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5317_, 0, v___x_5290_);
lean_ctor_set(v___x_5317_, 1, v___x_5316_);
v___x_5318_ = l_Lean_Syntax_node2(v___x_5290_, v___x_5315_, v___x_5317_, v_b_5280_);
v___x_5319_ = l_Lean_Syntax_node2(v___x_5290_, v___x_5292_, v___x_5318_, v___x_5300_);
v___x_5320_ = l_Lean_Syntax_node2(v___x_5290_, v___x_5291_, v___x_5314_, v___x_5319_);
v___x_5321_ = l_Lean_Syntax_node1(v___x_5290_, v___x_5287_, v___x_5320_);
v___x_5322_ = ((size_t)1ULL);
v___x_5323_ = lean_usize_add(v_i_5279_, v___x_5322_);
v_i_5279_ = v___x_5323_;
v_b_5280_ = v___x_5321_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___boxed(lean_object* v_as_5325_, lean_object* v_sz_5326_, lean_object* v_i_5327_, lean_object* v_b_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_){
_start:
{
size_t v_sz_boxed_5331_; size_t v_i_boxed_5332_; lean_object* v_res_5333_; 
v_sz_boxed_5331_ = lean_unbox_usize(v_sz_5326_);
lean_dec(v_sz_5326_);
v_i_boxed_5332_ = lean_unbox_usize(v_i_5327_);
lean_dec(v_i_5327_);
v_res_5333_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5325_, v_sz_boxed_5331_, v_i_boxed_5332_, v_b_5328_, v___y_5329_);
lean_dec_ref(v___y_5329_);
lean_dec_ref(v_as_5325_);
return v_res_5333_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(lean_object* v_as_5334_, size_t v_sz_5335_, size_t v_i_5336_, lean_object* v_b_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_, lean_object* v___y_5340_, lean_object* v___y_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_){
_start:
{
uint8_t v___x_5346_; 
v___x_5346_ = lean_usize_dec_lt(v_i_5336_, v_sz_5335_);
if (v___x_5346_ == 0)
{
lean_object* v___x_5347_; 
v___x_5347_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5347_, 0, v_b_5337_);
return v___x_5347_;
}
else
{
lean_object* v_ref_5348_; lean_object* v___x_5349_; lean_object* v___x_5350_; lean_object* v_a_5351_; uint8_t v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; lean_object* v___x_5384_; size_t v___x_5385_; size_t v___x_5386_; lean_object* v___x_5387_; 
v_ref_5348_ = lean_ctor_get(v___y_5343_, 5);
v___x_5349_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__1, &l_Lean_Elab_Do_elabDoLet___closed__1_once, _init_l_Lean_Elab_Do_elabDoLet___closed__1);
v___x_5350_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1);
v_a_5351_ = lean_array_uget_borrowed(v_as_5334_, v_i_5336_);
v___x_5352_ = 0;
v___x_5353_ = l_Lean_SourceInfo_fromRef(v_ref_5348_, v___x_5352_);
v___x_5354_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_5355_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3);
v___x_5356_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__0, &l_Lean_Elab_Do_elabDoLet___closed__0_once, _init_l_Lean_Elab_Do_elabDoLet___closed__0);
v___x_5357_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__1___closed__6);
lean_inc_n(v___x_5353_, 17);
v___x_5358_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5358_, 0, v___x_5353_);
lean_ctor_set(v___x_5358_, 1, v___x_5357_);
v___x_5359_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__5);
v___x_5360_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5360_, 0, v___x_5353_);
lean_ctor_set(v___x_5360_, 1, v___x_5359_);
v___x_5361_ = l_Lean_Syntax_node1(v___x_5353_, v___x_5354_, v___x_5360_);
v___x_5362_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5363_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5363_, 0, v___x_5353_);
lean_ctor_set(v___x_5363_, 1, v___x_5354_);
lean_ctor_set(v___x_5363_, 2, v___x_5362_);
lean_inc_ref_n(v___x_5363_, 3);
v___x_5364_ = l_Lean_Syntax_node1(v___x_5353_, v___x_5349_, v___x_5363_);
v___x_5365_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__4);
v___x_5366_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__8);
v___x_5367_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__41);
lean_inc_n(v_a_5351_, 2);
v___x_5368_ = l_Lean_Syntax_node1(v___x_5353_, v___x_5367_, v_a_5351_);
v___x_5369_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__14);
v___x_5370_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5370_, 0, v___x_5353_);
lean_ctor_set(v___x_5370_, 1, v___x_5369_);
v___x_5371_ = l_Lean_Syntax_node5(v___x_5353_, v___x_5366_, v___x_5368_, v___x_5363_, v___x_5363_, v___x_5370_, v_a_5351_);
v___x_5372_ = l_Lean_Syntax_node1(v___x_5353_, v___x_5365_, v___x_5371_);
v___x_5373_ = l_Lean_Syntax_node4(v___x_5353_, v___x_5356_, v___x_5358_, v___x_5361_, v___x_5364_, v___x_5372_);
v___x_5374_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__7);
v___x_5375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5375_, 0, v___x_5353_);
lean_ctor_set(v___x_5375_, 1, v___x_5374_);
v___x_5376_ = l_Lean_Syntax_node1(v___x_5353_, v___x_5354_, v___x_5375_);
v___x_5377_ = l_Lean_Syntax_node2(v___x_5353_, v___x_5355_, v___x_5373_, v___x_5376_);
v___x_5378_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__5);
v___x_5379_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__6);
v___x_5380_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5380_, 0, v___x_5353_);
lean_ctor_set(v___x_5380_, 1, v___x_5379_);
v___x_5381_ = l_Lean_Syntax_node2(v___x_5353_, v___x_5378_, v___x_5380_, v_b_5337_);
v___x_5382_ = l_Lean_Syntax_node2(v___x_5353_, v___x_5355_, v___x_5381_, v___x_5363_);
v___x_5383_ = l_Lean_Syntax_node2(v___x_5353_, v___x_5354_, v___x_5377_, v___x_5382_);
v___x_5384_ = l_Lean_Syntax_node1(v___x_5353_, v___x_5350_, v___x_5383_);
v___x_5385_ = ((size_t)1ULL);
v___x_5386_ = lean_usize_add(v_i_5336_, v___x_5385_);
v___x_5387_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5334_, v_sz_5335_, v___x_5386_, v___x_5384_, v___y_5343_);
return v___x_5387_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0___boxed(lean_object* v_as_5388_, lean_object* v_sz_5389_, lean_object* v_i_5390_, lean_object* v_b_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_){
_start:
{
size_t v_sz_boxed_5400_; size_t v_i_boxed_5401_; lean_object* v_res_5402_; 
v_sz_boxed_5400_ = lean_unbox_usize(v_sz_5389_);
lean_dec(v_sz_5389_);
v_i_boxed_5401_ = lean_unbox_usize(v_i_5390_);
lean_dec(v_i_5390_);
v_res_5402_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v_as_5388_, v_sz_boxed_5400_, v_i_boxed_5401_, v_b_5391_, v___y_5392_, v___y_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_);
lean_dec(v___y_5398_);
lean_dec_ref(v___y_5397_);
lean_dec(v___y_5396_);
lean_dec_ref(v___y_5395_);
lean_dec(v___y_5394_);
lean_dec_ref(v___y_5393_);
lean_dec_ref(v___y_5392_);
lean_dec_ref(v_as_5388_);
return v_res_5402_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__0(void){
_start:
{
lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; 
v___x_5403_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3, &l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3_once, _init_l_Lean_Elab_Do_elabDoArrow___lam__0___closed__3);
v___x_5404_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5405_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5406_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5407_ = l_Lean_Name_mkStr4(v___x_5406_, v___x_5405_, v___x_5404_, v___x_5403_);
return v___x_5407_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__1(void){
_start:
{
lean_object* v___x_5408_; 
v___x_5408_ = lean_mk_string_unchecked("doMatch", 7, 7);
return v___x_5408_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__2(void){
_start:
{
lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; 
v___x_5409_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__1, &l_Lean_Elab_Do_elabDoLetElse___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__1);
v___x_5410_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5411_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5412_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5413_ = l_Lean_Name_mkStr4(v___x_5412_, v___x_5411_, v___x_5410_, v___x_5409_);
return v___x_5413_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__3(void){
_start:
{
lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; 
v___x_5414_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__11);
v___x_5415_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5416_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5417_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5418_ = l_Lean_Name_mkStr4(v___x_5417_, v___x_5416_, v___x_5415_, v___x_5414_);
return v___x_5418_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__4(void){
_start:
{
lean_object* v___x_5419_; lean_object* v___x_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; lean_object* v___x_5423_; 
v___x_5419_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__13);
v___x_5420_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5421_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5422_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5423_ = l_Lean_Name_mkStr4(v___x_5422_, v___x_5421_, v___x_5420_, v___x_5419_);
return v___x_5423_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__5(void){
_start:
{
lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; lean_object* v___x_5427_; lean_object* v___x_5428_; 
v___x_5424_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__14);
v___x_5425_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5426_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5427_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5428_ = l_Lean_Name_mkStr4(v___x_5427_, v___x_5426_, v___x_5425_, v___x_5424_);
return v___x_5428_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__6(void){
_start:
{
lean_object* v___x_5429_; 
v___x_5429_ = lean_mk_string_unchecked("doExpr", 6, 6);
return v___x_5429_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__7(void){
_start:
{
lean_object* v___x_5430_; lean_object* v___x_5431_; lean_object* v___x_5432_; lean_object* v___x_5433_; lean_object* v___x_5434_; 
v___x_5430_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__6, &l_Lean_Elab_Do_elabDoLetElse___closed__6_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__6);
v___x_5431_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5432_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5433_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5434_ = l_Lean_Name_mkStr4(v___x_5433_, v___x_5432_, v___x_5431_, v___x_5430_);
return v___x_5434_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__8(void){
_start:
{
lean_object* v___x_5435_; 
v___x_5435_ = lean_mk_string_unchecked("app", 3, 3);
return v___x_5435_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__9(void){
_start:
{
lean_object* v___x_5436_; lean_object* v___x_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; 
v___x_5436_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__8, &l_Lean_Elab_Do_elabDoLetElse___closed__8_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__8);
v___x_5437_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5438_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5439_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5440_ = l_Lean_Name_mkStr4(v___x_5439_, v___x_5438_, v___x_5437_, v___x_5436_);
return v___x_5440_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__10(void){
_start:
{
lean_object* v___x_5441_; 
v___x_5441_ = lean_mk_string_unchecked("pure", 4, 4);
return v___x_5441_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__11(void){
_start:
{
lean_object* v___x_5442_; lean_object* v___x_5443_; 
v___x_5442_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__10, &l_Lean_Elab_Do_elabDoLetElse___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__10);
v___x_5443_ = l_String_toRawSubstring_x27(v___x_5442_);
return v___x_5443_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__12(void){
_start:
{
lean_object* v___x_5444_; lean_object* v___x_5445_; 
v___x_5444_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__10, &l_Lean_Elab_Do_elabDoLetElse___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__10);
v___x_5445_ = l_Lean_Name_mkStr1(v___x_5444_);
return v___x_5445_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__13(void){
_start:
{
lean_object* v___x_5446_; 
v___x_5446_ = lean_mk_string_unchecked("Pure", 4, 4);
return v___x_5446_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__14(void){
_start:
{
lean_object* v___x_5447_; lean_object* v___x_5448_; lean_object* v___x_5449_; 
v___x_5447_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__10, &l_Lean_Elab_Do_elabDoLetElse___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__10);
v___x_5448_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__13, &l_Lean_Elab_Do_elabDoLetElse___closed__13_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__13);
v___x_5449_ = l_Lean_Name_mkStr2(v___x_5448_, v___x_5447_);
return v___x_5449_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__15(void){
_start:
{
lean_object* v___x_5450_; lean_object* v___x_5451_; lean_object* v___x_5452_; 
v___x_5450_ = lean_box(0);
v___x_5451_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__14, &l_Lean_Elab_Do_elabDoLetElse___closed__14_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__14);
v___x_5452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5452_, 0, v___x_5451_);
lean_ctor_set(v___x_5452_, 1, v___x_5450_);
return v___x_5452_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__16(void){
_start:
{
lean_object* v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; 
v___x_5453_ = lean_box(0);
v___x_5454_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__15, &l_Lean_Elab_Do_elabDoLetElse___closed__15_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__15);
v___x_5455_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5455_, 0, v___x_5454_);
lean_ctor_set(v___x_5455_, 1, v___x_5453_);
return v___x_5455_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__17(void){
_start:
{
lean_object* v___x_5456_; 
v___x_5456_ = lean_mk_string_unchecked("PUnit.unit", 10, 10);
return v___x_5456_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__18(void){
_start:
{
lean_object* v___x_5457_; lean_object* v___x_5458_; 
v___x_5457_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__17, &l_Lean_Elab_Do_elabDoLetElse___closed__17_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__17);
v___x_5458_ = l_String_toRawSubstring_x27(v___x_5457_);
return v___x_5458_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__19(void){
_start:
{
lean_object* v___x_5459_; 
v___x_5459_ = lean_mk_string_unchecked("PUnit", 5, 5);
return v___x_5459_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__20(void){
_start:
{
lean_object* v___x_5460_; 
v___x_5460_ = lean_mk_string_unchecked("unit", 4, 4);
return v___x_5460_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__21(void){
_start:
{
lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; 
v___x_5461_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__20, &l_Lean_Elab_Do_elabDoLetElse___closed__20_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__20);
v___x_5462_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__19, &l_Lean_Elab_Do_elabDoLetElse___closed__19_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__19);
v___x_5463_ = l_Lean_Name_mkStr2(v___x_5462_, v___x_5461_);
return v___x_5463_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__22(void){
_start:
{
lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; 
v___x_5464_ = lean_box(0);
v___x_5465_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__21, &l_Lean_Elab_Do_elabDoLetElse___closed__21_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__21);
v___x_5466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5466_, 0, v___x_5465_);
lean_ctor_set(v___x_5466_, 1, v___x_5464_);
return v___x_5466_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__23(void){
_start:
{
lean_object* v___x_5467_; lean_object* v___x_5468_; 
v___x_5467_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__21, &l_Lean_Elab_Do_elabDoLetElse___closed__21_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__21);
v___x_5468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5468_, 0, v___x_5467_);
return v___x_5468_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__24(void){
_start:
{
lean_object* v___x_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5469_ = lean_box(0);
v___x_5470_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__23, &l_Lean_Elab_Do_elabDoLetElse___closed__23_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__23);
v___x_5471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5471_, 0, v___x_5470_);
lean_ctor_set(v___x_5471_, 1, v___x_5469_);
return v___x_5471_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetElse___closed__25(void){
_start:
{
lean_object* v___x_5472_; lean_object* v___x_5473_; lean_object* v___x_5474_; 
v___x_5472_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__24, &l_Lean_Elab_Do_elabDoLetElse___closed__24_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__24);
v___x_5473_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__22, &l_Lean_Elab_Do_elabDoLetElse___closed__22_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__22);
v___x_5474_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5474_, 0, v___x_5473_);
lean_ctor_set(v___x_5474_, 1, v___x_5472_);
return v___x_5474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse(lean_object* v_stx_5475_, lean_object* v_dec_5476_, lean_object* v_a_5477_, lean_object* v_a_5478_, lean_object* v_a_5479_, lean_object* v_a_5480_, lean_object* v_a_5481_, lean_object* v_a_5482_, lean_object* v_a_5483_){
_start:
{
lean_object* v___x_5485_; uint8_t v___x_5486_; 
v___x_5485_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__0, &l_Lean_Elab_Do_elabDoLetElse___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__0);
lean_inc(v_stx_5475_);
v___x_5486_ = l_Lean_Syntax_isOfKind(v_stx_5475_, v___x_5485_);
if (v___x_5486_ == 0)
{
lean_object* v___x_5487_; 
lean_dec_ref(v_dec_5476_);
lean_dec(v_stx_5475_);
v___x_5487_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5487_;
}
else
{
lean_object* v___y_5489_; lean_object* v___y_5490_; uint8_t v___y_5491_; lean_object* v___y_5492_; lean_object* v___y_5493_; lean_object* v_body_5494_; lean_object* v___y_5495_; lean_object* v___y_5496_; lean_object* v___y_5497_; lean_object* v___y_5498_; lean_object* v___y_5499_; lean_object* v___y_5500_; lean_object* v___y_5501_; uint8_t v___y_5575_; lean_object* v___y_5576_; lean_object* v___y_5577_; lean_object* v___y_5578_; lean_object* v___y_5579_; lean_object* v___y_5580_; lean_object* v___y_5581_; lean_object* v___y_5582_; lean_object* v___y_5583_; lean_object* v___y_5584_; uint8_t v___y_5585_; lean_object* v___y_5586_; lean_object* v___y_5587_; lean_object* v___y_5588_; lean_object* v___y_5589_; lean_object* v_a_5590_; uint8_t v___y_5604_; lean_object* v___y_5605_; lean_object* v___y_5606_; lean_object* v___y_5607_; lean_object* v___y_5608_; lean_object* v___y_5609_; lean_object* v___y_5610_; lean_object* v___y_5611_; lean_object* v___y_5612_; lean_object* v___y_5613_; lean_object* v___y_5614_; lean_object* v___y_5615_; lean_object* v___y_5616_; lean_object* v___y_5617_; lean_object* v_mutTk_x3f_5689_; lean_object* v___y_5690_; lean_object* v___y_5691_; lean_object* v___y_5692_; lean_object* v___y_5693_; lean_object* v___y_5694_; lean_object* v___y_5695_; lean_object* v___y_5696_; lean_object* v___x_5720_; lean_object* v___x_5721_; uint8_t v___x_5722_; 
v___x_5720_ = lean_unsigned_to_nat(1u);
v___x_5721_ = l_Lean_Syntax_getArg(v_stx_5475_, v___x_5720_);
v___x_5722_ = l_Lean_Syntax_isNone(v___x_5721_);
if (v___x_5722_ == 0)
{
uint8_t v___x_5723_; 
lean_inc(v___x_5721_);
v___x_5723_ = l_Lean_Syntax_matchesNull(v___x_5721_, v___x_5720_);
if (v___x_5723_ == 0)
{
lean_object* v___x_5724_; 
lean_dec(v___x_5721_);
lean_dec_ref(v_dec_5476_);
lean_dec(v_stx_5475_);
v___x_5724_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5724_;
}
else
{
lean_object* v___x_5725_; lean_object* v_mutTk_x3f_5726_; lean_object* v___x_5727_; 
v___x_5725_ = lean_unsigned_to_nat(0u);
v_mutTk_x3f_5726_ = l_Lean_Syntax_getArg(v___x_5721_, v___x_5725_);
lean_dec(v___x_5721_);
v___x_5727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5727_, 0, v_mutTk_x3f_5726_);
v_mutTk_x3f_5689_ = v___x_5727_;
v___y_5690_ = v_a_5477_;
v___y_5691_ = v_a_5478_;
v___y_5692_ = v_a_5479_;
v___y_5693_ = v_a_5480_;
v___y_5694_ = v_a_5481_;
v___y_5695_ = v_a_5482_;
v___y_5696_ = v_a_5483_;
goto v___jp_5688_;
}
}
else
{
lean_object* v___x_5728_; 
lean_dec(v___x_5721_);
v___x_5728_ = lean_box(0);
v_mutTk_x3f_5689_ = v___x_5728_;
v___y_5690_ = v_a_5477_;
v___y_5691_ = v_a_5478_;
v___y_5692_ = v_a_5479_;
v___y_5693_ = v_a_5480_;
v___y_5694_ = v_a_5481_;
v___y_5695_ = v_a_5482_;
v___y_5696_ = v_a_5483_;
goto v___jp_5688_;
}
v___jp_5488_:
{
lean_object* v_eq_x3f_5502_; 
v_eq_x3f_5502_ = lean_ctor_get(v___y_5493_, 0);
lean_inc(v_eq_x3f_5502_);
lean_dec_ref(v___y_5493_);
if (lean_obj_tag(v_eq_x3f_5502_) == 1)
{
lean_object* v_val_5503_; lean_object* v_ref_5504_; lean_object* v___x_5505_; lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; lean_object* v___x_5510_; lean_object* v___x_5511_; lean_object* v___x_5512_; lean_object* v___x_5513_; lean_object* v___x_5514_; lean_object* v___x_5515_; lean_object* v___x_5516_; lean_object* v___x_5517_; lean_object* v___x_5518_; lean_object* v___x_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; lean_object* v___x_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5532_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; lean_object* v___x_5536_; lean_object* v___x_5537_; lean_object* v___x_5538_; lean_object* v___x_5539_; 
v_val_5503_ = lean_ctor_get(v_eq_x3f_5502_, 0);
lean_inc(v_val_5503_);
lean_dec_ref(v_eq_x3f_5502_);
v_ref_5504_ = lean_ctor_get(v___y_5500_, 5);
v___x_5505_ = l_Lean_SourceInfo_fromRef(v_ref_5504_, v___y_5491_);
v___x_5506_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__2, &l_Lean_Elab_Do_elabDoLetElse___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__2);
v___x_5507_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10);
lean_inc_n(v___x_5505_, 19);
v___x_5508_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5505_);
lean_ctor_set(v___x_5508_, 1, v___x_5507_);
v___x_5509_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_5510_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5511_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5511_, 0, v___x_5505_);
lean_ctor_set(v___x_5511_, 1, v___x_5509_);
lean_ctor_set(v___x_5511_, 2, v___x_5510_);
v___x_5512_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__3, &l_Lean_Elab_Do_elabDoLetElse___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__3);
v___x_5513_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__36);
v___x_5514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5514_, 0, v___x_5505_);
lean_ctor_set(v___x_5514_, 1, v___x_5513_);
v___x_5515_ = l_Lean_Syntax_node2(v___x_5505_, v___x_5509_, v_val_5503_, v___x_5514_);
v___x_5516_ = l_Lean_Syntax_node2(v___x_5505_, v___x_5512_, v___x_5515_, v___y_5489_);
v___x_5517_ = l_Lean_Syntax_node1(v___x_5505_, v___x_5509_, v___x_5516_);
v___x_5518_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12);
v___x_5519_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5519_, 0, v___x_5505_);
lean_ctor_set(v___x_5519_, 1, v___x_5518_);
v___x_5520_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__4, &l_Lean_Elab_Do_elabDoLetElse___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__4);
v___x_5521_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__5, &l_Lean_Elab_Do_elabDoLetElse___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__5);
v___x_5522_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15);
v___x_5523_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5523_, 0, v___x_5505_);
lean_ctor_set(v___x_5523_, 1, v___x_5522_);
v___x_5524_ = l_Lean_Syntax_node1(v___x_5505_, v___x_5509_, v___y_5492_);
v___x_5525_ = l_Lean_Syntax_node1(v___x_5505_, v___x_5509_, v___x_5524_);
v___x_5526_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16);
v___x_5527_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5527_, 0, v___x_5505_);
lean_ctor_set(v___x_5527_, 1, v___x_5526_);
lean_inc_ref(v___x_5527_);
lean_inc_ref(v___x_5523_);
v___x_5528_ = l_Lean_Syntax_node4(v___x_5505_, v___x_5521_, v___x_5523_, v___x_5525_, v___x_5527_, v_body_5494_);
v___x_5529_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__4, &l_Lean_Elab_Do_elabDoArrow___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__4);
v___x_5530_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21);
v___x_5531_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5531_, 0, v___x_5505_);
lean_ctor_set(v___x_5531_, 1, v___x_5530_);
v___x_5532_ = l_Lean_Syntax_node1(v___x_5505_, v___x_5529_, v___x_5531_);
v___x_5533_ = l_Lean_Syntax_node1(v___x_5505_, v___x_5509_, v___x_5532_);
v___x_5534_ = l_Lean_Syntax_node1(v___x_5505_, v___x_5509_, v___x_5533_);
v___x_5535_ = l_Lean_Syntax_node4(v___x_5505_, v___x_5521_, v___x_5523_, v___x_5534_, v___x_5527_, v___y_5490_);
v___x_5536_ = l_Lean_Syntax_node2(v___x_5505_, v___x_5509_, v___x_5528_, v___x_5535_);
v___x_5537_ = l_Lean_Syntax_node1(v___x_5505_, v___x_5520_, v___x_5536_);
lean_inc_ref_n(v___x_5511_, 2);
v___x_5538_ = l_Lean_Syntax_node7(v___x_5505_, v___x_5506_, v___x_5508_, v___x_5511_, v___x_5511_, v___x_5511_, v___x_5517_, v___x_5519_, v___x_5537_);
v___x_5539_ = l_Lean_Elab_Do_elabDoElem(v___x_5538_, v_dec_5476_, v___x_5486_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_);
return v___x_5539_;
}
else
{
lean_object* v_ref_5540_; lean_object* v___x_5541_; lean_object* v_a_5542_; lean_object* v___x_5543_; lean_object* v___x_5544_; lean_object* v___x_5545_; lean_object* v___x_5546_; lean_object* v___x_5547_; lean_object* v___x_5548_; lean_object* v___x_5549_; lean_object* v___x_5550_; lean_object* v___x_5551_; lean_object* v___x_5552_; lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; lean_object* v___x_5568_; lean_object* v___x_5569_; lean_object* v___x_5570_; lean_object* v___x_5571_; lean_object* v___x_5572_; lean_object* v___x_5573_; 
lean_dec(v_eq_x3f_5502_);
v_ref_5540_ = lean_ctor_get(v___y_5500_, 5);
v___x_5541_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5540_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_);
v_a_5542_ = lean_ctor_get(v___x_5541_, 0);
lean_inc_n(v_a_5542_, 18);
lean_dec_ref(v___x_5541_);
v___x_5543_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__2, &l_Lean_Elab_Do_elabDoLetElse___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__2);
v___x_5544_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__10);
v___x_5545_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5545_, 0, v_a_5542_);
lean_ctor_set(v___x_5545_, 1, v___x_5544_);
v___x_5546_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_5547_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5548_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5548_, 0, v_a_5542_);
lean_ctor_set(v___x_5548_, 1, v___x_5546_);
lean_ctor_set(v___x_5548_, 2, v___x_5547_);
v___x_5549_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__3, &l_Lean_Elab_Do_elabDoLetElse___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__3);
lean_inc_ref_n(v___x_5548_, 3);
v___x_5550_ = l_Lean_Syntax_node2(v_a_5542_, v___x_5549_, v___x_5548_, v___y_5489_);
v___x_5551_ = l_Lean_Syntax_node1(v_a_5542_, v___x_5546_, v___x_5550_);
v___x_5552_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__12);
v___x_5553_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5553_, 0, v_a_5542_);
lean_ctor_set(v___x_5553_, 1, v___x_5552_);
v___x_5554_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__4, &l_Lean_Elab_Do_elabDoLetElse___closed__4_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__4);
v___x_5555_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__5, &l_Lean_Elab_Do_elabDoLetElse___closed__5_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__5);
v___x_5556_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__15);
v___x_5557_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5557_, 0, v_a_5542_);
lean_ctor_set(v___x_5557_, 1, v___x_5556_);
v___x_5558_ = l_Lean_Syntax_node1(v_a_5542_, v___x_5546_, v___y_5492_);
v___x_5559_ = l_Lean_Syntax_node1(v_a_5542_, v___x_5546_, v___x_5558_);
v___x_5560_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__16);
v___x_5561_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5561_, 0, v_a_5542_);
lean_ctor_set(v___x_5561_, 1, v___x_5560_);
lean_inc_ref(v___x_5561_);
lean_inc_ref(v___x_5557_);
v___x_5562_ = l_Lean_Syntax_node4(v_a_5542_, v___x_5555_, v___x_5557_, v___x_5559_, v___x_5561_, v_body_5494_);
v___x_5563_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__4, &l_Lean_Elab_Do_elabDoArrow___closed__4_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__4);
v___x_5564_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21, &l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21_once, _init_l_Lean_Elab_Do_elabDoLetOrReassign___lam__7___closed__21);
v___x_5565_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5565_, 0, v_a_5542_);
lean_ctor_set(v___x_5565_, 1, v___x_5564_);
v___x_5566_ = l_Lean_Syntax_node1(v_a_5542_, v___x_5563_, v___x_5565_);
v___x_5567_ = l_Lean_Syntax_node1(v_a_5542_, v___x_5546_, v___x_5566_);
v___x_5568_ = l_Lean_Syntax_node1(v_a_5542_, v___x_5546_, v___x_5567_);
v___x_5569_ = l_Lean_Syntax_node4(v_a_5542_, v___x_5555_, v___x_5557_, v___x_5568_, v___x_5561_, v___y_5490_);
v___x_5570_ = l_Lean_Syntax_node2(v_a_5542_, v___x_5546_, v___x_5562_, v___x_5569_);
v___x_5571_ = l_Lean_Syntax_node1(v_a_5542_, v___x_5554_, v___x_5570_);
v___x_5572_ = l_Lean_Syntax_node7(v_a_5542_, v___x_5543_, v___x_5545_, v___x_5548_, v___x_5548_, v___x_5548_, v___x_5551_, v___x_5553_, v___x_5571_);
v___x_5573_ = l_Lean_Elab_Do_elabDoElem(v___x_5572_, v_dec_5476_, v___x_5486_, v___y_5495_, v___y_5496_, v___y_5497_, v___y_5498_, v___y_5499_, v___y_5500_, v___y_5501_);
return v___x_5573_;
}
}
v___jp_5574_:
{
if (lean_obj_tag(v___y_5578_) == 0)
{
lean_dec_ref(v___y_5580_);
v___y_5489_ = v___y_5583_;
v___y_5490_ = v___y_5579_;
v___y_5491_ = v___y_5585_;
v___y_5492_ = v___y_5587_;
v___y_5493_ = v___y_5588_;
v_body_5494_ = v_a_5590_;
v___y_5495_ = v___y_5589_;
v___y_5496_ = v___y_5577_;
v___y_5497_ = v___y_5576_;
v___y_5498_ = v___y_5582_;
v___y_5499_ = v___y_5584_;
v___y_5500_ = v___y_5586_;
v___y_5501_ = v___y_5581_;
goto v___jp_5488_;
}
else
{
lean_dec_ref(v___y_5578_);
if (v___y_5575_ == 0)
{
lean_dec_ref(v___y_5580_);
v___y_5489_ = v___y_5583_;
v___y_5490_ = v___y_5579_;
v___y_5491_ = v___y_5585_;
v___y_5492_ = v___y_5587_;
v___y_5493_ = v___y_5588_;
v_body_5494_ = v_a_5590_;
v___y_5495_ = v___y_5589_;
v___y_5496_ = v___y_5577_;
v___y_5497_ = v___y_5576_;
v___y_5498_ = v___y_5582_;
v___y_5499_ = v___y_5584_;
v___y_5500_ = v___y_5586_;
v___y_5501_ = v___y_5581_;
goto v___jp_5488_;
}
else
{
size_t v_sz_5591_; size_t v___x_5592_; lean_object* v___x_5593_; 
v_sz_5591_ = lean_array_size(v___y_5580_);
v___x_5592_ = ((size_t)0ULL);
v___x_5593_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0(v___y_5580_, v_sz_5591_, v___x_5592_, v_a_5590_, v___y_5589_, v___y_5577_, v___y_5576_, v___y_5582_, v___y_5584_, v___y_5586_, v___y_5581_);
lean_dec_ref(v___y_5580_);
if (lean_obj_tag(v___x_5593_) == 0)
{
lean_object* v_a_5594_; 
v_a_5594_ = lean_ctor_get(v___x_5593_, 0);
lean_inc(v_a_5594_);
lean_dec_ref(v___x_5593_);
v___y_5489_ = v___y_5583_;
v___y_5490_ = v___y_5579_;
v___y_5491_ = v___y_5585_;
v___y_5492_ = v___y_5587_;
v___y_5493_ = v___y_5588_;
v_body_5494_ = v_a_5594_;
v___y_5495_ = v___y_5589_;
v___y_5496_ = v___y_5577_;
v___y_5497_ = v___y_5576_;
v___y_5498_ = v___y_5582_;
v___y_5499_ = v___y_5584_;
v___y_5500_ = v___y_5586_;
v___y_5501_ = v___y_5581_;
goto v___jp_5488_;
}
else
{
lean_object* v_a_5595_; lean_object* v___x_5597_; uint8_t v_isShared_5598_; uint8_t v_isSharedCheck_5602_; 
lean_dec_ref(v___y_5588_);
lean_dec(v___y_5587_);
lean_dec(v___y_5583_);
lean_dec(v___y_5579_);
lean_dec_ref(v_dec_5476_);
v_a_5595_ = lean_ctor_get(v___x_5593_, 0);
v_isSharedCheck_5602_ = !lean_is_exclusive(v___x_5593_);
if (v_isSharedCheck_5602_ == 0)
{
v___x_5597_ = v___x_5593_;
v_isShared_5598_ = v_isSharedCheck_5602_;
goto v_resetjp_5596_;
}
else
{
lean_inc(v_a_5595_);
lean_dec(v___x_5593_);
v___x_5597_ = lean_box(0);
v_isShared_5598_ = v_isSharedCheck_5602_;
goto v_resetjp_5596_;
}
v_resetjp_5596_:
{
lean_object* v___x_5600_; 
if (v_isShared_5598_ == 0)
{
v___x_5600_ = v___x_5597_;
goto v_reusejp_5599_;
}
else
{
lean_object* v_reuseFailAlloc_5601_; 
v_reuseFailAlloc_5601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5601_, 0, v_a_5595_);
v___x_5600_ = v_reuseFailAlloc_5601_;
goto v_reusejp_5599_;
}
v_reusejp_5599_:
{
return v___x_5600_;
}
}
}
}
}
}
v___jp_5603_:
{
uint8_t v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; 
v___x_5618_ = 0;
v___x_5619_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__2, &l_Lean_Elab_Do_elabDoLet___closed__2_once, _init_l_Lean_Elab_Do_elabDoLet___closed__2);
v___x_5620_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg(v___y_5609_, v___y_5607_, v___x_5619_, v___y_5606_, v___y_5605_, v___y_5611_, v___y_5613_, v___y_5614_, v___y_5610_);
if (lean_obj_tag(v___x_5620_) == 0)
{
lean_object* v_a_5621_; lean_object* v___x_5622_; 
v_a_5621_ = lean_ctor_get(v___x_5620_, 0);
lean_inc(v_a_5621_);
lean_dec_ref(v___x_5620_);
v___x_5622_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(v_a_5621_, v___y_5616_, v___y_5606_, v___y_5605_, v___y_5611_, v___y_5613_, v___y_5614_, v___y_5610_);
if (lean_obj_tag(v___x_5622_) == 0)
{
lean_object* v___x_5623_; 
lean_dec_ref(v___x_5622_);
lean_inc(v___y_5615_);
v___x_5623_ = l_Lean_Elab_Do_getPatternVarsEx(v___y_5615_, v___y_5606_, v___y_5605_, v___y_5611_, v___y_5613_, v___y_5614_, v___y_5610_);
if (lean_obj_tag(v___x_5623_) == 0)
{
lean_object* v_a_5624_; lean_object* v___x_5625_; lean_object* v___x_5626_; 
v_a_5624_ = lean_ctor_get(v___x_5623_, 0);
lean_inc(v_a_5624_);
lean_dec_ref(v___x_5623_);
lean_inc(v___y_5607_);
v___x_5625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5625_, 0, v___y_5607_);
v___x_5626_ = l_Lean_Elab_Do_LetOrReassign_checkMutVars(v___x_5625_, v_a_5624_, v___y_5616_, v___y_5606_, v___y_5605_, v___y_5611_, v___y_5613_, v___y_5614_, v___y_5610_);
lean_dec_ref(v___x_5625_);
if (lean_obj_tag(v___x_5626_) == 0)
{
lean_dec_ref(v___x_5626_);
if (lean_obj_tag(v___y_5617_) == 0)
{
lean_object* v_ref_5627_; lean_object* v_quotContext_5628_; lean_object* v_currMacroScope_5629_; lean_object* v___x_5630_; lean_object* v_a_5631_; lean_object* v___x_5632_; lean_object* v___x_5633_; lean_object* v___x_5634_; lean_object* v___x_5635_; lean_object* v___x_5636_; lean_object* v___x_5637_; lean_object* v___x_5638_; lean_object* v___x_5639_; lean_object* v___x_5640_; lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; lean_object* v___x_5644_; lean_object* v___x_5645_; lean_object* v___x_5646_; lean_object* v___x_5647_; lean_object* v___x_5648_; lean_object* v___x_5649_; lean_object* v___x_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; lean_object* v___x_5653_; lean_object* v___x_5654_; 
v_ref_5627_ = lean_ctor_get(v___y_5614_, 5);
v_quotContext_5628_ = lean_ctor_get(v___y_5614_, 10);
v_currMacroScope_5629_ = lean_ctor_get(v___y_5614_, 11);
v___x_5630_ = l_Lean_Elab_Do_elabDoLetElse___lam__0(v_ref_5627_, v___y_5616_, v___y_5606_, v___y_5605_, v___y_5611_, v___y_5613_, v___y_5614_, v___y_5610_);
v_a_5631_ = lean_ctor_get(v___x_5630_, 0);
lean_inc_n(v_a_5631_, 9);
lean_dec_ref(v___x_5630_);
v___x_5632_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__1);
v___x_5633_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__12);
v___x_5634_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg___closed__3);
v___x_5635_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__7, &l_Lean_Elab_Do_elabDoLetElse___closed__7_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__7);
v___x_5636_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__9, &l_Lean_Elab_Do_elabDoLetElse___closed__9_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__9);
v___x_5637_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__11, &l_Lean_Elab_Do_elabDoLetElse___closed__11_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__11);
v___x_5638_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__12, &l_Lean_Elab_Do_elabDoLetElse___closed__12_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__12);
lean_inc_n(v_currMacroScope_5629_, 2);
lean_inc_n(v_quotContext_5628_, 2);
v___x_5639_ = l_Lean_addMacroScope(v_quotContext_5628_, v___x_5638_, v_currMacroScope_5629_);
v___x_5640_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__16, &l_Lean_Elab_Do_elabDoLetElse___closed__16_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__16);
v___x_5641_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5641_, 0, v_a_5631_);
lean_ctor_set(v___x_5641_, 1, v___x_5637_);
lean_ctor_set(v___x_5641_, 2, v___x_5639_);
lean_ctor_set(v___x_5641_, 3, v___x_5640_);
v___x_5642_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__18, &l_Lean_Elab_Do_elabDoLetElse___closed__18_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__18);
v___x_5643_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__21, &l_Lean_Elab_Do_elabDoLetElse___closed__21_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__21);
v___x_5644_ = l_Lean_addMacroScope(v_quotContext_5628_, v___x_5643_, v_currMacroScope_5629_);
v___x_5645_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__25, &l_Lean_Elab_Do_elabDoLetElse___closed__25_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__25);
v___x_5646_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5646_, 0, v_a_5631_);
lean_ctor_set(v___x_5646_, 1, v___x_5642_);
lean_ctor_set(v___x_5646_, 2, v___x_5644_);
lean_ctor_set(v___x_5646_, 3, v___x_5645_);
v___x_5647_ = l_Lean_Syntax_node1(v_a_5631_, v___x_5633_, v___x_5646_);
v___x_5648_ = l_Lean_Syntax_node2(v_a_5631_, v___x_5636_, v___x_5641_, v___x_5647_);
v___x_5649_ = l_Lean_Syntax_node1(v_a_5631_, v___x_5635_, v___x_5648_);
v___x_5650_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__13);
v___x_5651_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5651_, 0, v_a_5631_);
lean_ctor_set(v___x_5651_, 1, v___x_5633_);
lean_ctor_set(v___x_5651_, 2, v___x_5650_);
v___x_5652_ = l_Lean_Syntax_node2(v_a_5631_, v___x_5634_, v___x_5649_, v___x_5651_);
v___x_5653_ = l_Lean_Syntax_node1(v_a_5631_, v___x_5633_, v___x_5652_);
v___x_5654_ = l_Lean_Syntax_node1(v_a_5631_, v___x_5632_, v___x_5653_);
v___y_5575_ = v___y_5604_;
v___y_5576_ = v___y_5605_;
v___y_5577_ = v___y_5606_;
v___y_5578_ = v___y_5607_;
v___y_5579_ = v___y_5608_;
v___y_5580_ = v_a_5624_;
v___y_5581_ = v___y_5610_;
v___y_5582_ = v___y_5611_;
v___y_5583_ = v___y_5612_;
v___y_5584_ = v___y_5613_;
v___y_5585_ = v___x_5618_;
v___y_5586_ = v___y_5614_;
v___y_5587_ = v___y_5615_;
v___y_5588_ = v_a_5621_;
v___y_5589_ = v___y_5616_;
v_a_5590_ = v___x_5654_;
goto v___jp_5574_;
}
else
{
lean_object* v_val_5655_; 
v_val_5655_ = lean_ctor_get(v___y_5617_, 0);
lean_inc(v_val_5655_);
lean_dec_ref(v___y_5617_);
v___y_5575_ = v___y_5604_;
v___y_5576_ = v___y_5605_;
v___y_5577_ = v___y_5606_;
v___y_5578_ = v___y_5607_;
v___y_5579_ = v___y_5608_;
v___y_5580_ = v_a_5624_;
v___y_5581_ = v___y_5610_;
v___y_5582_ = v___y_5611_;
v___y_5583_ = v___y_5612_;
v___y_5584_ = v___y_5613_;
v___y_5585_ = v___x_5618_;
v___y_5586_ = v___y_5614_;
v___y_5587_ = v___y_5615_;
v___y_5588_ = v_a_5621_;
v___y_5589_ = v___y_5616_;
v_a_5590_ = v_val_5655_;
goto v___jp_5574_;
}
}
else
{
lean_object* v_a_5656_; lean_object* v___x_5658_; uint8_t v_isShared_5659_; uint8_t v_isSharedCheck_5663_; 
lean_dec(v_a_5624_);
lean_dec(v_a_5621_);
lean_dec(v___y_5617_);
lean_dec(v___y_5615_);
lean_dec(v___y_5612_);
lean_dec(v___y_5608_);
lean_dec(v___y_5607_);
lean_dec_ref(v_dec_5476_);
v_a_5656_ = lean_ctor_get(v___x_5626_, 0);
v_isSharedCheck_5663_ = !lean_is_exclusive(v___x_5626_);
if (v_isSharedCheck_5663_ == 0)
{
v___x_5658_ = v___x_5626_;
v_isShared_5659_ = v_isSharedCheck_5663_;
goto v_resetjp_5657_;
}
else
{
lean_inc(v_a_5656_);
lean_dec(v___x_5626_);
v___x_5658_ = lean_box(0);
v_isShared_5659_ = v_isSharedCheck_5663_;
goto v_resetjp_5657_;
}
v_resetjp_5657_:
{
lean_object* v___x_5661_; 
if (v_isShared_5659_ == 0)
{
v___x_5661_ = v___x_5658_;
goto v_reusejp_5660_;
}
else
{
lean_object* v_reuseFailAlloc_5662_; 
v_reuseFailAlloc_5662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5662_, 0, v_a_5656_);
v___x_5661_ = v_reuseFailAlloc_5662_;
goto v_reusejp_5660_;
}
v_reusejp_5660_:
{
return v___x_5661_;
}
}
}
}
else
{
lean_object* v_a_5664_; lean_object* v___x_5666_; uint8_t v_isShared_5667_; uint8_t v_isSharedCheck_5671_; 
lean_dec(v_a_5621_);
lean_dec(v___y_5617_);
lean_dec(v___y_5615_);
lean_dec(v___y_5612_);
lean_dec(v___y_5608_);
lean_dec(v___y_5607_);
lean_dec_ref(v_dec_5476_);
v_a_5664_ = lean_ctor_get(v___x_5623_, 0);
v_isSharedCheck_5671_ = !lean_is_exclusive(v___x_5623_);
if (v_isSharedCheck_5671_ == 0)
{
v___x_5666_ = v___x_5623_;
v_isShared_5667_ = v_isSharedCheck_5671_;
goto v_resetjp_5665_;
}
else
{
lean_inc(v_a_5664_);
lean_dec(v___x_5623_);
v___x_5666_ = lean_box(0);
v_isShared_5667_ = v_isSharedCheck_5671_;
goto v_resetjp_5665_;
}
v_resetjp_5665_:
{
lean_object* v___x_5669_; 
if (v_isShared_5667_ == 0)
{
v___x_5669_ = v___x_5666_;
goto v_reusejp_5668_;
}
else
{
lean_object* v_reuseFailAlloc_5670_; 
v_reuseFailAlloc_5670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5670_, 0, v_a_5664_);
v___x_5669_ = v_reuseFailAlloc_5670_;
goto v_reusejp_5668_;
}
v_reusejp_5668_:
{
return v___x_5669_;
}
}
}
}
else
{
lean_object* v_a_5672_; lean_object* v___x_5674_; uint8_t v_isShared_5675_; uint8_t v_isSharedCheck_5679_; 
lean_dec(v_a_5621_);
lean_dec(v___y_5617_);
lean_dec(v___y_5615_);
lean_dec(v___y_5612_);
lean_dec(v___y_5608_);
lean_dec(v___y_5607_);
lean_dec_ref(v_dec_5476_);
v_a_5672_ = lean_ctor_get(v___x_5622_, 0);
v_isSharedCheck_5679_ = !lean_is_exclusive(v___x_5622_);
if (v_isSharedCheck_5679_ == 0)
{
v___x_5674_ = v___x_5622_;
v_isShared_5675_ = v_isSharedCheck_5679_;
goto v_resetjp_5673_;
}
else
{
lean_inc(v_a_5672_);
lean_dec(v___x_5622_);
v___x_5674_ = lean_box(0);
v_isShared_5675_ = v_isSharedCheck_5679_;
goto v_resetjp_5673_;
}
v_resetjp_5673_:
{
lean_object* v___x_5677_; 
if (v_isShared_5675_ == 0)
{
v___x_5677_ = v___x_5674_;
goto v_reusejp_5676_;
}
else
{
lean_object* v_reuseFailAlloc_5678_; 
v_reuseFailAlloc_5678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5678_, 0, v_a_5672_);
v___x_5677_ = v_reuseFailAlloc_5678_;
goto v_reusejp_5676_;
}
v_reusejp_5676_:
{
return v___x_5677_;
}
}
}
}
else
{
lean_object* v_a_5680_; lean_object* v___x_5682_; uint8_t v_isShared_5683_; uint8_t v_isSharedCheck_5687_; 
lean_dec(v___y_5617_);
lean_dec(v___y_5615_);
lean_dec(v___y_5612_);
lean_dec(v___y_5608_);
lean_dec(v___y_5607_);
lean_dec_ref(v_dec_5476_);
v_a_5680_ = lean_ctor_get(v___x_5620_, 0);
v_isSharedCheck_5687_ = !lean_is_exclusive(v___x_5620_);
if (v_isSharedCheck_5687_ == 0)
{
v___x_5682_ = v___x_5620_;
v_isShared_5683_ = v_isSharedCheck_5687_;
goto v_resetjp_5681_;
}
else
{
lean_inc(v_a_5680_);
lean_dec(v___x_5620_);
v___x_5682_ = lean_box(0);
v_isShared_5683_ = v_isSharedCheck_5687_;
goto v_resetjp_5681_;
}
v_resetjp_5681_:
{
lean_object* v___x_5685_; 
if (v_isShared_5683_ == 0)
{
v___x_5685_ = v___x_5682_;
goto v_reusejp_5684_;
}
else
{
lean_object* v_reuseFailAlloc_5686_; 
v_reuseFailAlloc_5686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5686_, 0, v_a_5680_);
v___x_5685_ = v_reuseFailAlloc_5686_;
goto v_reusejp_5684_;
}
v_reusejp_5684_:
{
return v___x_5685_;
}
}
}
}
v___jp_5688_:
{
lean_object* v___x_5697_; lean_object* v_cfg_5698_; lean_object* v___x_5699_; uint8_t v___x_5700_; 
v___x_5697_ = lean_unsigned_to_nat(2u);
v_cfg_5698_ = l_Lean_Syntax_getArg(v_stx_5475_, v___x_5697_);
v___x_5699_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__1, &l_Lean_Elab_Do_elabDoLet___closed__1_once, _init_l_Lean_Elab_Do_elabDoLet___closed__1);
lean_inc(v_cfg_5698_);
v___x_5700_ = l_Lean_Syntax_isOfKind(v_cfg_5698_, v___x_5699_);
if (v___x_5700_ == 0)
{
lean_object* v___x_5701_; 
lean_dec(v_cfg_5698_);
lean_dec(v_mutTk_x3f_5689_);
lean_dec_ref(v_dec_5476_);
lean_dec(v_stx_5475_);
v___x_5701_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5701_;
}
else
{
lean_object* v___x_5702_; lean_object* v_pattern_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; lean_object* v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; 
v___x_5702_ = lean_unsigned_to_nat(3u);
v_pattern_5703_ = l_Lean_Syntax_getArg(v_stx_5475_, v___x_5702_);
v___x_5704_ = lean_unsigned_to_nat(5u);
v___x_5705_ = l_Lean_Syntax_getArg(v_stx_5475_, v___x_5704_);
v___x_5706_ = lean_unsigned_to_nat(7u);
v___x_5707_ = l_Lean_Syntax_getArg(v_stx_5475_, v___x_5706_);
v___x_5708_ = lean_unsigned_to_nat(8u);
v___x_5709_ = l_Lean_Syntax_getArg(v_stx_5475_, v___x_5708_);
lean_dec(v_stx_5475_);
v___x_5710_ = l_Lean_Syntax_getOptional_x3f(v___x_5709_);
lean_dec(v___x_5709_);
if (lean_obj_tag(v___x_5710_) == 0)
{
lean_object* v___x_5711_; 
v___x_5711_ = lean_box(0);
v___y_5604_ = v___x_5700_;
v___y_5605_ = v___y_5692_;
v___y_5606_ = v___y_5691_;
v___y_5607_ = v_mutTk_x3f_5689_;
v___y_5608_ = v___x_5707_;
v___y_5609_ = v_cfg_5698_;
v___y_5610_ = v___y_5696_;
v___y_5611_ = v___y_5693_;
v___y_5612_ = v___x_5705_;
v___y_5613_ = v___y_5694_;
v___y_5614_ = v___y_5695_;
v___y_5615_ = v_pattern_5703_;
v___y_5616_ = v___y_5690_;
v___y_5617_ = v___x_5711_;
goto v___jp_5603_;
}
else
{
lean_object* v_val_5712_; lean_object* v___x_5714_; uint8_t v_isShared_5715_; uint8_t v_isSharedCheck_5719_; 
v_val_5712_ = lean_ctor_get(v___x_5710_, 0);
v_isSharedCheck_5719_ = !lean_is_exclusive(v___x_5710_);
if (v_isSharedCheck_5719_ == 0)
{
v___x_5714_ = v___x_5710_;
v_isShared_5715_ = v_isSharedCheck_5719_;
goto v_resetjp_5713_;
}
else
{
lean_inc(v_val_5712_);
lean_dec(v___x_5710_);
v___x_5714_ = lean_box(0);
v_isShared_5715_ = v_isSharedCheck_5719_;
goto v_resetjp_5713_;
}
v_resetjp_5713_:
{
lean_object* v___x_5717_; 
if (v_isShared_5715_ == 0)
{
v___x_5717_ = v___x_5714_;
goto v_reusejp_5716_;
}
else
{
lean_object* v_reuseFailAlloc_5718_; 
v_reuseFailAlloc_5718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5718_, 0, v_val_5712_);
v___x_5717_ = v_reuseFailAlloc_5718_;
goto v_reusejp_5716_;
}
v_reusejp_5716_:
{
v___y_5604_ = v___x_5700_;
v___y_5605_ = v___y_5692_;
v___y_5606_ = v___y_5691_;
v___y_5607_ = v_mutTk_x3f_5689_;
v___y_5608_ = v___x_5707_;
v___y_5609_ = v_cfg_5698_;
v___y_5610_ = v___y_5696_;
v___y_5611_ = v___y_5693_;
v___y_5612_ = v___x_5705_;
v___y_5613_ = v___y_5694_;
v___y_5614_ = v___y_5695_;
v___y_5615_ = v_pattern_5703_;
v___y_5616_ = v___y_5690_;
v___y_5617_ = v___x_5717_;
goto v___jp_5603_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetElse___boxed(lean_object* v_stx_5729_, lean_object* v_dec_5730_, lean_object* v_a_5731_, lean_object* v_a_5732_, lean_object* v_a_5733_, lean_object* v_a_5734_, lean_object* v_a_5735_, lean_object* v_a_5736_, lean_object* v_a_5737_, lean_object* v_a_5738_){
_start:
{
lean_object* v_res_5739_; 
v_res_5739_ = l_Lean_Elab_Do_elabDoLetElse(v_stx_5729_, v_dec_5730_, v_a_5731_, v_a_5732_, v_a_5733_, v_a_5734_, v_a_5735_, v_a_5736_, v_a_5737_);
lean_dec(v_a_5737_);
lean_dec_ref(v_a_5736_);
lean_dec(v_a_5735_);
lean_dec_ref(v_a_5734_);
lean_dec(v_a_5733_);
lean_dec_ref(v_a_5732_);
lean_dec_ref(v_a_5731_);
return v_res_5739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(lean_object* v_as_5740_, size_t v_sz_5741_, size_t v_i_5742_, lean_object* v_b_5743_, lean_object* v___y_5744_, lean_object* v___y_5745_, lean_object* v___y_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_){
_start:
{
lean_object* v___x_5752_; 
v___x_5752_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___redArg(v_as_5740_, v_sz_5741_, v_i_5742_, v_b_5743_, v___y_5749_);
return v___x_5752_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0___boxed(lean_object* v_as_5753_, lean_object* v_sz_5754_, lean_object* v_i_5755_, lean_object* v_b_5756_, lean_object* v___y_5757_, lean_object* v___y_5758_, lean_object* v___y_5759_, lean_object* v___y_5760_, lean_object* v___y_5761_, lean_object* v___y_5762_, lean_object* v___y_5763_, lean_object* v___y_5764_){
_start:
{
size_t v_sz_boxed_5765_; size_t v_i_boxed_5766_; lean_object* v_res_5767_; 
v_sz_boxed_5765_ = lean_unbox_usize(v_sz_5754_);
lean_dec(v_sz_5754_);
v_i_boxed_5766_ = lean_unbox_usize(v_i_5755_);
lean_dec(v_i_5755_);
v_res_5767_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_elabDoLetElse_spec__0_spec__0(v_as_5753_, v_sz_boxed_5765_, v_i_boxed_5766_, v_b_5756_, v___y_5757_, v___y_5758_, v___y_5759_, v___y_5760_, v___y_5761_, v___y_5762_, v___y_5763_);
lean_dec(v___y_5763_);
lean_dec_ref(v___y_5762_);
lean_dec(v___y_5761_);
lean_dec_ref(v___y_5760_);
lean_dec(v___y_5759_);
lean_dec_ref(v___y_5758_);
lean_dec_ref(v___y_5757_);
lean_dec_ref(v_as_5753_);
return v_res_5767_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0(void){
_start:
{
lean_object* v___x_5768_; 
v___x_5768_ = lean_mk_string_unchecked("elabDoLetElse", 13, 13);
return v___x_5768_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1(void){
_start:
{
lean_object* v___x_5769_; lean_object* v___x_5770_; lean_object* v___x_5771_; lean_object* v___x_5772_; lean_object* v___x_5773_; 
v___x_5769_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__0);
v___x_5770_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_5771_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_5772_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5773_ = l_Lean_Name_mkStr4(v___x_5772_, v___x_5771_, v___x_5770_, v___x_5769_);
return v___x_5773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1(){
_start:
{
lean_object* v___x_5775_; lean_object* v___x_5776_; lean_object* v___x_5777_; lean_object* v___x_5778_; lean_object* v___x_5779_; 
v___x_5775_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5776_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetElse___closed__0, &l_Lean_Elab_Do_elabDoLetElse___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetElse___closed__0);
v___x_5777_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___closed__1);
v___x_5778_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetElse___boxed), 10, 0);
v___x_5779_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5775_, v___x_5776_, v___x_5777_, v___x_5778_);
return v___x_5779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1___boxed(lean_object* v_a_5780_){
_start:
{
lean_object* v_res_5781_; 
v_res_5781_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
return v_res_5781_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetArrow___closed__0(void){
_start:
{
lean_object* v___x_5782_; 
v___x_5782_ = lean_mk_string_unchecked("doLetArrow", 10, 10);
return v___x_5782_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1(void){
_start:
{
lean_object* v___x_5783_; lean_object* v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; lean_object* v___x_5787_; 
v___x_5783_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__0, &l_Lean_Elab_Do_elabDoLetArrow___closed__0_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__0);
v___x_5784_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5785_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5786_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5787_ = l_Lean_Name_mkStr4(v___x_5786_, v___x_5785_, v___x_5784_, v___x_5783_);
return v___x_5787_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetArrow___closed__2(void){
_start:
{
lean_object* v___x_5788_; 
v___x_5788_ = lean_mk_string_unchecked("configuration options are not supported with `←`", 50, 48);
return v___x_5788_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoLetArrow___closed__3(void){
_start:
{
lean_object* v___x_5789_; lean_object* v___x_5790_; 
v___x_5789_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__2, &l_Lean_Elab_Do_elabDoLetArrow___closed__2_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__2);
v___x_5790_ = l_Lean_stringToMessageData(v___x_5789_);
return v___x_5790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow(lean_object* v_stx_5791_, lean_object* v_dec_5792_, lean_object* v_a_5793_, lean_object* v_a_5794_, lean_object* v_a_5795_, lean_object* v_a_5796_, lean_object* v_a_5797_, lean_object* v_a_5798_, lean_object* v_a_5799_){
_start:
{
lean_object* v___x_5801_; uint8_t v___x_5802_; 
v___x_5801_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__1, &l_Lean_Elab_Do_elabDoLetArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1);
lean_inc(v_stx_5791_);
v___x_5802_ = l_Lean_Syntax_isOfKind(v_stx_5791_, v___x_5801_);
if (v___x_5802_ == 0)
{
lean_object* v___x_5803_; 
lean_dec_ref(v_dec_5792_);
lean_dec(v_stx_5791_);
v___x_5803_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5803_;
}
else
{
lean_object* v___x_5804_; lean_object* v_tk_5805_; lean_object* v___y_5807_; lean_object* v___y_5808_; lean_object* v___y_5809_; lean_object* v___y_5810_; lean_object* v___y_5811_; lean_object* v___y_5812_; lean_object* v___y_5813_; lean_object* v___y_5814_; lean_object* v___y_5815_; lean_object* v___y_5819_; lean_object* v___y_5820_; lean_object* v___y_5821_; lean_object* v___y_5822_; lean_object* v___y_5823_; lean_object* v___y_5824_; lean_object* v___y_5825_; lean_object* v___y_5826_; lean_object* v___y_5827_; lean_object* v___y_5828_; lean_object* v___y_5840_; lean_object* v___y_5841_; lean_object* v___y_5842_; lean_object* v___y_5843_; lean_object* v___y_5844_; lean_object* v___y_5845_; lean_object* v___y_5846_; lean_object* v___y_5847_; lean_object* v___y_5848_; lean_object* v___y_5849_; lean_object* v___y_5850_; uint8_t v___y_5851_; uint8_t v___y_5852_; lean_object* v___y_5855_; lean_object* v___y_5856_; lean_object* v___y_5857_; lean_object* v___y_5858_; lean_object* v___y_5859_; lean_object* v___y_5860_; lean_object* v___y_5861_; lean_object* v___y_5862_; lean_object* v___y_5863_; lean_object* v___y_5864_; lean_object* v___y_5865_; uint8_t v___y_5866_; uint8_t v___y_5867_; lean_object* v_mutTk_x3f_5870_; lean_object* v___y_5871_; lean_object* v___y_5872_; lean_object* v___y_5873_; lean_object* v___y_5874_; lean_object* v___y_5875_; lean_object* v___y_5876_; lean_object* v___y_5877_; lean_object* v___x_5907_; lean_object* v___x_5908_; uint8_t v___x_5909_; 
v___x_5804_ = lean_unsigned_to_nat(0u);
v_tk_5805_ = l_Lean_Syntax_getArg(v_stx_5791_, v___x_5804_);
v___x_5907_ = lean_unsigned_to_nat(1u);
v___x_5908_ = l_Lean_Syntax_getArg(v_stx_5791_, v___x_5907_);
v___x_5909_ = l_Lean_Syntax_isNone(v___x_5908_);
if (v___x_5909_ == 0)
{
uint8_t v___x_5910_; 
lean_inc(v___x_5908_);
v___x_5910_ = l_Lean_Syntax_matchesNull(v___x_5908_, v___x_5907_);
if (v___x_5910_ == 0)
{
lean_object* v___x_5911_; 
lean_dec(v___x_5908_);
lean_dec(v_tk_5805_);
lean_dec_ref(v_dec_5792_);
lean_dec(v_stx_5791_);
v___x_5911_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5911_;
}
else
{
lean_object* v_mutTk_x3f_5912_; lean_object* v___x_5913_; 
v_mutTk_x3f_5912_ = l_Lean_Syntax_getArg(v___x_5908_, v___x_5804_);
lean_dec(v___x_5908_);
v___x_5913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5913_, 0, v_mutTk_x3f_5912_);
v_mutTk_x3f_5870_ = v___x_5913_;
v___y_5871_ = v_a_5793_;
v___y_5872_ = v_a_5794_;
v___y_5873_ = v_a_5795_;
v___y_5874_ = v_a_5796_;
v___y_5875_ = v_a_5797_;
v___y_5876_ = v_a_5798_;
v___y_5877_ = v_a_5799_;
goto v___jp_5869_;
}
}
else
{
lean_object* v___x_5914_; 
lean_dec(v___x_5908_);
v___x_5914_ = lean_box(0);
v_mutTk_x3f_5870_ = v___x_5914_;
v___y_5871_ = v_a_5793_;
v___y_5872_ = v_a_5794_;
v___y_5873_ = v_a_5795_;
v___y_5874_ = v_a_5796_;
v___y_5875_ = v_a_5797_;
v___y_5876_ = v_a_5798_;
v___y_5877_ = v_a_5799_;
goto v___jp_5869_;
}
v___jp_5806_:
{
lean_object* v___x_5816_; lean_object* v___x_5817_; 
v___x_5816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5816_, 0, v___y_5807_);
v___x_5817_ = l_Lean_Elab_Do_elabDoArrow(v___x_5816_, v___y_5808_, v_tk_5805_, v_dec_5792_, v___y_5809_, v___y_5810_, v___y_5811_, v___y_5812_, v___y_5813_, v___y_5814_, v___y_5815_);
lean_dec(v_tk_5805_);
return v___x_5817_;
}
v___jp_5818_:
{
lean_object* v___x_5829_; lean_object* v___x_5830_; lean_object* v_a_5831_; lean_object* v___x_5833_; uint8_t v_isShared_5834_; uint8_t v_isSharedCheck_5838_; 
lean_dec(v___y_5822_);
lean_dec(v___y_5821_);
v___x_5829_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__3, &l_Lean_Elab_Do_elabDoLetArrow___closed__3_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__3);
v___x_5830_ = l_Lean_throwErrorAt___at___00Lean_Elab_liftMacroM___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__9_spec__16___redArg(v___y_5825_, v___x_5829_, v___y_5828_, v___y_5824_, v___y_5827_, v___y_5820_);
lean_dec(v___y_5825_);
v_a_5831_ = lean_ctor_get(v___x_5830_, 0);
v_isSharedCheck_5838_ = !lean_is_exclusive(v___x_5830_);
if (v_isSharedCheck_5838_ == 0)
{
v___x_5833_ = v___x_5830_;
v_isShared_5834_ = v_isSharedCheck_5838_;
goto v_resetjp_5832_;
}
else
{
lean_inc(v_a_5831_);
lean_dec(v___x_5830_);
v___x_5833_ = lean_box(0);
v_isShared_5834_ = v_isSharedCheck_5838_;
goto v_resetjp_5832_;
}
v_resetjp_5832_:
{
lean_object* v___x_5836_; 
if (v_isShared_5834_ == 0)
{
v___x_5836_ = v___x_5833_;
goto v_reusejp_5835_;
}
else
{
lean_object* v_reuseFailAlloc_5837_; 
v_reuseFailAlloc_5837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5837_, 0, v_a_5831_);
v___x_5836_ = v_reuseFailAlloc_5837_;
goto v_reusejp_5835_;
}
v_reusejp_5835_:
{
return v___x_5836_;
}
}
}
v___jp_5839_:
{
if (v___y_5852_ == 0)
{
lean_object* v_eq_x3f_5853_; 
v_eq_x3f_5853_ = lean_ctor_get(v___y_5847_, 0);
lean_inc(v_eq_x3f_5853_);
lean_dec_ref(v___y_5847_);
if (lean_obj_tag(v_eq_x3f_5853_) == 0)
{
lean_dec(v___y_5850_);
v___y_5807_ = v___y_5840_;
v___y_5808_ = v___y_5841_;
v___y_5809_ = v___y_5842_;
v___y_5810_ = v___y_5845_;
v___y_5811_ = v___y_5848_;
v___y_5812_ = v___y_5843_;
v___y_5813_ = v___y_5849_;
v___y_5814_ = v___y_5844_;
v___y_5815_ = v___y_5846_;
goto v___jp_5806_;
}
else
{
lean_dec_ref(v_eq_x3f_5853_);
if (v___y_5851_ == 0)
{
lean_dec(v___y_5850_);
v___y_5807_ = v___y_5840_;
v___y_5808_ = v___y_5841_;
v___y_5809_ = v___y_5842_;
v___y_5810_ = v___y_5845_;
v___y_5811_ = v___y_5848_;
v___y_5812_ = v___y_5843_;
v___y_5813_ = v___y_5849_;
v___y_5814_ = v___y_5844_;
v___y_5815_ = v___y_5846_;
goto v___jp_5806_;
}
else
{
lean_dec(v_tk_5805_);
lean_dec_ref(v_dec_5792_);
v___y_5819_ = v___y_5845_;
v___y_5820_ = v___y_5846_;
v___y_5821_ = v___y_5840_;
v___y_5822_ = v___y_5841_;
v___y_5823_ = v___y_5848_;
v___y_5824_ = v___y_5849_;
v___y_5825_ = v___y_5850_;
v___y_5826_ = v___y_5842_;
v___y_5827_ = v___y_5844_;
v___y_5828_ = v___y_5843_;
goto v___jp_5818_;
}
}
}
else
{
lean_dec_ref(v___y_5847_);
lean_dec(v_tk_5805_);
lean_dec_ref(v_dec_5792_);
v___y_5819_ = v___y_5845_;
v___y_5820_ = v___y_5846_;
v___y_5821_ = v___y_5840_;
v___y_5822_ = v___y_5841_;
v___y_5823_ = v___y_5848_;
v___y_5824_ = v___y_5849_;
v___y_5825_ = v___y_5850_;
v___y_5826_ = v___y_5842_;
v___y_5827_ = v___y_5844_;
v___y_5828_ = v___y_5843_;
goto v___jp_5818_;
}
}
v___jp_5854_:
{
if (v___y_5867_ == 0)
{
uint8_t v_zeta_5868_; 
v_zeta_5868_ = lean_ctor_get_uint8(v___y_5862_, sizeof(void*)*1 + 2);
v___y_5840_ = v___y_5855_;
v___y_5841_ = v___y_5856_;
v___y_5842_ = v___y_5857_;
v___y_5843_ = v___y_5858_;
v___y_5844_ = v___y_5859_;
v___y_5845_ = v___y_5860_;
v___y_5846_ = v___y_5861_;
v___y_5847_ = v___y_5862_;
v___y_5848_ = v___y_5863_;
v___y_5849_ = v___y_5864_;
v___y_5850_ = v___y_5865_;
v___y_5851_ = v___y_5866_;
v___y_5852_ = v_zeta_5868_;
goto v___jp_5839_;
}
else
{
v___y_5840_ = v___y_5855_;
v___y_5841_ = v___y_5856_;
v___y_5842_ = v___y_5857_;
v___y_5843_ = v___y_5858_;
v___y_5844_ = v___y_5859_;
v___y_5845_ = v___y_5860_;
v___y_5846_ = v___y_5861_;
v___y_5847_ = v___y_5862_;
v___y_5848_ = v___y_5863_;
v___y_5849_ = v___y_5864_;
v___y_5850_ = v___y_5865_;
v___y_5851_ = v___y_5866_;
v___y_5852_ = v___x_5802_;
goto v___jp_5839_;
}
}
v___jp_5869_:
{
lean_object* v___x_5878_; lean_object* v_cfg_5879_; lean_object* v___x_5880_; uint8_t v___x_5881_; 
v___x_5878_ = lean_unsigned_to_nat(2u);
v_cfg_5879_ = l_Lean_Syntax_getArg(v_stx_5791_, v___x_5878_);
v___x_5880_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__1, &l_Lean_Elab_Do_elabDoLet___closed__1_once, _init_l_Lean_Elab_Do_elabDoLet___closed__1);
lean_inc(v_cfg_5879_);
v___x_5881_ = l_Lean_Syntax_isOfKind(v_cfg_5879_, v___x_5880_);
if (v___x_5881_ == 0)
{
lean_object* v___x_5882_; 
lean_dec(v_cfg_5879_);
lean_dec(v_mutTk_x3f_5870_);
lean_dec(v_tk_5805_);
lean_dec_ref(v_dec_5792_);
lean_dec(v_stx_5791_);
v___x_5882_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5882_;
}
else
{
lean_object* v___x_5883_; lean_object* v___x_5884_; 
v___x_5883_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLet___closed__2, &l_Lean_Elab_Do_elabDoLet___closed__2_once, _init_l_Lean_Elab_Do_elabDoLet___closed__2);
lean_inc(v_cfg_5879_);
v___x_5884_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_getLetConfigAndCheckMut___redArg(v_cfg_5879_, v_mutTk_x3f_5870_, v___x_5883_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, v___y_5877_);
if (lean_obj_tag(v___x_5884_) == 0)
{
lean_object* v_a_5885_; lean_object* v___x_5886_; 
v_a_5885_ = lean_ctor_get(v___x_5884_, 0);
lean_inc(v_a_5885_);
lean_dec_ref(v___x_5884_);
v___x_5886_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_checkLetConfigInDo(v_a_5885_, v___y_5871_, v___y_5872_, v___y_5873_, v___y_5874_, v___y_5875_, v___y_5876_, v___y_5877_);
if (lean_obj_tag(v___x_5886_) == 0)
{
uint8_t v_nondep_5887_; uint8_t v_usedOnly_5888_; lean_object* v___x_5889_; lean_object* v_decl_5890_; 
lean_dec_ref(v___x_5886_);
v_nondep_5887_ = lean_ctor_get_uint8(v_a_5885_, sizeof(void*)*1);
v_usedOnly_5888_ = lean_ctor_get_uint8(v_a_5885_, sizeof(void*)*1 + 1);
v___x_5889_ = lean_unsigned_to_nat(3u);
v_decl_5890_ = l_Lean_Syntax_getArg(v_stx_5791_, v___x_5889_);
lean_dec(v_stx_5791_);
if (v_nondep_5887_ == 0)
{
v___y_5855_ = v_mutTk_x3f_5870_;
v___y_5856_ = v_decl_5890_;
v___y_5857_ = v___y_5871_;
v___y_5858_ = v___y_5874_;
v___y_5859_ = v___y_5876_;
v___y_5860_ = v___y_5872_;
v___y_5861_ = v___y_5877_;
v___y_5862_ = v_a_5885_;
v___y_5863_ = v___y_5873_;
v___y_5864_ = v___y_5875_;
v___y_5865_ = v_cfg_5879_;
v___y_5866_ = v___x_5881_;
v___y_5867_ = v_usedOnly_5888_;
goto v___jp_5854_;
}
else
{
v___y_5855_ = v_mutTk_x3f_5870_;
v___y_5856_ = v_decl_5890_;
v___y_5857_ = v___y_5871_;
v___y_5858_ = v___y_5874_;
v___y_5859_ = v___y_5876_;
v___y_5860_ = v___y_5872_;
v___y_5861_ = v___y_5877_;
v___y_5862_ = v_a_5885_;
v___y_5863_ = v___y_5873_;
v___y_5864_ = v___y_5875_;
v___y_5865_ = v_cfg_5879_;
v___y_5866_ = v___x_5881_;
v___y_5867_ = v___x_5802_;
goto v___jp_5854_;
}
}
else
{
lean_object* v_a_5891_; lean_object* v___x_5893_; uint8_t v_isShared_5894_; uint8_t v_isSharedCheck_5898_; 
lean_dec(v_a_5885_);
lean_dec(v_cfg_5879_);
lean_dec(v_mutTk_x3f_5870_);
lean_dec(v_tk_5805_);
lean_dec_ref(v_dec_5792_);
lean_dec(v_stx_5791_);
v_a_5891_ = lean_ctor_get(v___x_5886_, 0);
v_isSharedCheck_5898_ = !lean_is_exclusive(v___x_5886_);
if (v_isSharedCheck_5898_ == 0)
{
v___x_5893_ = v___x_5886_;
v_isShared_5894_ = v_isSharedCheck_5898_;
goto v_resetjp_5892_;
}
else
{
lean_inc(v_a_5891_);
lean_dec(v___x_5886_);
v___x_5893_ = lean_box(0);
v_isShared_5894_ = v_isSharedCheck_5898_;
goto v_resetjp_5892_;
}
v_resetjp_5892_:
{
lean_object* v___x_5896_; 
if (v_isShared_5894_ == 0)
{
v___x_5896_ = v___x_5893_;
goto v_reusejp_5895_;
}
else
{
lean_object* v_reuseFailAlloc_5897_; 
v_reuseFailAlloc_5897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5897_, 0, v_a_5891_);
v___x_5896_ = v_reuseFailAlloc_5897_;
goto v_reusejp_5895_;
}
v_reusejp_5895_:
{
return v___x_5896_;
}
}
}
}
else
{
lean_object* v_a_5899_; lean_object* v___x_5901_; uint8_t v_isShared_5902_; uint8_t v_isSharedCheck_5906_; 
lean_dec(v_cfg_5879_);
lean_dec(v_mutTk_x3f_5870_);
lean_dec(v_tk_5805_);
lean_dec_ref(v_dec_5792_);
lean_dec(v_stx_5791_);
v_a_5899_ = lean_ctor_get(v___x_5884_, 0);
v_isSharedCheck_5906_ = !lean_is_exclusive(v___x_5884_);
if (v_isSharedCheck_5906_ == 0)
{
v___x_5901_ = v___x_5884_;
v_isShared_5902_ = v_isSharedCheck_5906_;
goto v_resetjp_5900_;
}
else
{
lean_inc(v_a_5899_);
lean_dec(v___x_5884_);
v___x_5901_ = lean_box(0);
v_isShared_5902_ = v_isSharedCheck_5906_;
goto v_resetjp_5900_;
}
v_resetjp_5900_:
{
lean_object* v___x_5904_; 
if (v_isShared_5902_ == 0)
{
v___x_5904_ = v___x_5901_;
goto v_reusejp_5903_;
}
else
{
lean_object* v_reuseFailAlloc_5905_; 
v_reuseFailAlloc_5905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5905_, 0, v_a_5899_);
v___x_5904_ = v_reuseFailAlloc_5905_;
goto v_reusejp_5903_;
}
v_reusejp_5903_:
{
return v___x_5904_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoLetArrow___boxed(lean_object* v_stx_5915_, lean_object* v_dec_5916_, lean_object* v_a_5917_, lean_object* v_a_5918_, lean_object* v_a_5919_, lean_object* v_a_5920_, lean_object* v_a_5921_, lean_object* v_a_5922_, lean_object* v_a_5923_, lean_object* v_a_5924_){
_start:
{
lean_object* v_res_5925_; 
v_res_5925_ = l_Lean_Elab_Do_elabDoLetArrow(v_stx_5915_, v_dec_5916_, v_a_5917_, v_a_5918_, v_a_5919_, v_a_5920_, v_a_5921_, v_a_5922_, v_a_5923_);
lean_dec(v_a_5923_);
lean_dec_ref(v_a_5922_);
lean_dec(v_a_5921_);
lean_dec_ref(v_a_5920_);
lean_dec(v_a_5919_);
lean_dec_ref(v_a_5918_);
lean_dec_ref(v_a_5917_);
return v_res_5925_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0(void){
_start:
{
lean_object* v___x_5926_; 
v___x_5926_ = lean_mk_string_unchecked("elabDoLetArrow", 14, 14);
return v___x_5926_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1(void){
_start:
{
lean_object* v___x_5927_; lean_object* v___x_5928_; lean_object* v___x_5929_; lean_object* v___x_5930_; lean_object* v___x_5931_; 
v___x_5927_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__0);
v___x_5928_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_5929_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_5930_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5931_ = l_Lean_Name_mkStr4(v___x_5930_, v___x_5929_, v___x_5928_, v___x_5927_);
return v___x_5931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1(){
_start:
{
lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5936_; lean_object* v___x_5937_; 
v___x_5933_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5934_ = lean_obj_once(&l_Lean_Elab_Do_elabDoLetArrow___closed__1, &l_Lean_Elab_Do_elabDoLetArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoLetArrow___closed__1);
v___x_5935_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___closed__1);
v___x_5936_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoLetArrow___boxed), 10, 0);
v___x_5937_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5933_, v___x_5934_, v___x_5935_, v___x_5936_);
return v___x_5937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1___boxed(lean_object* v_a_5938_){
_start:
{
lean_object* v_res_5939_; 
v_res_5939_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
return v_res_5939_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__0(void){
_start:
{
lean_object* v___x_5940_; 
v___x_5940_ = lean_mk_string_unchecked("doReassignArrow", 15, 15);
return v___x_5940_;
}
}
static lean_object* _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__1(void){
_start:
{
lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; lean_object* v___x_5944_; lean_object* v___x_5945_; 
v___x_5941_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassignArrow___closed__0, &l_Lean_Elab_Do_elabDoReassignArrow___closed__0_once, _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__0);
v___x_5942_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__2);
v___x_5943_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__1);
v___x_5944_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5945_ = l_Lean_Name_mkStr4(v___x_5944_, v___x_5943_, v___x_5942_, v___x_5941_);
return v___x_5945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow(lean_object* v_stx_5946_, lean_object* v_dec_5947_, lean_object* v_a_5948_, lean_object* v_a_5949_, lean_object* v_a_5950_, lean_object* v_a_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_, lean_object* v_a_5954_){
_start:
{
lean_object* v___x_5956_; uint8_t v___x_5957_; 
v___x_5956_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassignArrow___closed__1, &l_Lean_Elab_Do_elabDoReassignArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__1);
lean_inc(v_stx_5946_);
v___x_5957_ = l_Lean_Syntax_isOfKind(v_stx_5946_, v___x_5956_);
if (v___x_5957_ == 0)
{
lean_object* v___x_5958_; 
lean_dec_ref(v_dec_5947_);
lean_dec(v_stx_5946_);
v___x_5958_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5958_;
}
else
{
lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; uint8_t v___x_5962_; 
v___x_5959_ = lean_unsigned_to_nat(0u);
v___x_5960_ = l_Lean_Syntax_getArg(v_stx_5946_, v___x_5959_);
lean_dec(v_stx_5946_);
v___x_5961_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__1, &l_Lean_Elab_Do_elabDoArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__1);
lean_inc(v___x_5960_);
v___x_5962_ = l_Lean_Syntax_isOfKind(v___x_5960_, v___x_5961_);
if (v___x_5962_ == 0)
{
lean_object* v___x_5963_; uint8_t v___x_5964_; 
v___x_5963_ = lean_obj_once(&l_Lean_Elab_Do_elabDoArrow___closed__3, &l_Lean_Elab_Do_elabDoArrow___closed__3_once, _init_l_Lean_Elab_Do_elabDoArrow___closed__3);
lean_inc(v___x_5960_);
v___x_5964_ = l_Lean_Syntax_isOfKind(v___x_5960_, v___x_5963_);
if (v___x_5964_ == 0)
{
lean_object* v___x_5965_; 
lean_dec(v___x_5960_);
lean_dec_ref(v_dec_5947_);
v___x_5965_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Do_elabDoLetOrReassign_spec__1___redArg();
return v___x_5965_;
}
else
{
lean_object* v___x_5966_; lean_object* v___x_5967_; 
v___x_5966_ = lean_box(2);
lean_inc(v___x_5960_);
v___x_5967_ = l_Lean_Elab_Do_elabDoArrow(v___x_5966_, v___x_5960_, v___x_5960_, v_dec_5947_, v_a_5948_, v_a_5949_, v_a_5950_, v_a_5951_, v_a_5952_, v_a_5953_, v_a_5954_);
lean_dec(v___x_5960_);
return v___x_5967_;
}
}
else
{
lean_object* v___x_5968_; lean_object* v___x_5969_; 
v___x_5968_ = lean_box(2);
lean_inc(v___x_5960_);
v___x_5969_ = l_Lean_Elab_Do_elabDoArrow(v___x_5968_, v___x_5960_, v___x_5960_, v_dec_5947_, v_a_5948_, v_a_5949_, v_a_5950_, v_a_5951_, v_a_5952_, v_a_5953_, v_a_5954_);
lean_dec(v___x_5960_);
return v___x_5969_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoReassignArrow___boxed(lean_object* v_stx_5970_, lean_object* v_dec_5971_, lean_object* v_a_5972_, lean_object* v_a_5973_, lean_object* v_a_5974_, lean_object* v_a_5975_, lean_object* v_a_5976_, lean_object* v_a_5977_, lean_object* v_a_5978_, lean_object* v_a_5979_){
_start:
{
lean_object* v_res_5980_; 
v_res_5980_ = l_Lean_Elab_Do_elabDoReassignArrow(v_stx_5970_, v_dec_5971_, v_a_5972_, v_a_5973_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
lean_dec(v_a_5978_);
lean_dec_ref(v_a_5977_);
lean_dec(v_a_5976_);
lean_dec_ref(v_a_5975_);
lean_dec(v_a_5974_);
lean_dec_ref(v_a_5973_);
lean_dec_ref(v_a_5972_);
return v_res_5980_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0(void){
_start:
{
lean_object* v___x_5981_; 
v___x_5981_ = lean_mk_string_unchecked("elabDoReassignArrow", 19, 19);
return v___x_5981_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1(void){
_start:
{
lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; 
v___x_5982_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__0);
v___x_5983_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__25);
v___x_5984_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__24);
v___x_5985_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_pushTypeIntoReassignment___closed__0);
v___x_5986_ = l_Lean_Name_mkStr4(v___x_5985_, v___x_5984_, v___x_5983_, v___x_5982_);
return v___x_5986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1(){
_start:
{
lean_object* v___x_5988_; lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; 
v___x_5988_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_5989_ = lean_obj_once(&l_Lean_Elab_Do_elabDoReassignArrow___closed__1, &l_Lean_Elab_Do_elabDoReassignArrow___closed__1_once, _init_l_Lean_Elab_Do_elabDoReassignArrow___closed__1);
v___x_5990_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1, &l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1_once, _init_l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___closed__1);
v___x_5991_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoReassignArrow___boxed), 10, 0);
v___x_5992_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5988_, v___x_5989_, v___x_5990_, v___x_5991_);
return v___x_5992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1___boxed(lean_object* v_a_5993_){
_start:
{
lean_object* v_res_5994_; 
v_res_5994_ = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
return v_res_5994_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLet___regBuiltin_Lean_Elab_Do_elabDoLet__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoHave___regBuiltin_Lean_Elab_Do_elabDoHave__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetRec___regBuiltin_Lean_Elab_Do_elabDoLetRec__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassign___regBuiltin_Lean_Elab_Do_elabDoReassign__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetElse___regBuiltin_Lean_Elab_Do_elabDoLetElse__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoLetArrow___regBuiltin_Lean_Elab_Do_elabDoLetArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_Let_0__Lean_Elab_Do_elabDoReassignArrow___regBuiltin_Lean_Elab_Do_elabDoReassignArrow__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_Do_PatternVar(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_Let(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Do_PatternVar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_Let(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_Let(builtin);
}
#ifdef __cplusplus
}
#endif
