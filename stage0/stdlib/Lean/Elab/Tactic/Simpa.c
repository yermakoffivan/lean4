// Lean compiler output
// Module: Lean.Elab.Tactic.Simpa
// Imports: public import Lean.Meta.Tactic.TryThis public import Lean.Elab.Tactic.Simp public import Lean.Elab.App
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Tactic_TryThis_addSuggestion(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instInhabitedTacticM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_unsetTrailing(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpOnly(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setFailIfUnchanged(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpGoal(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_syntax_ident(lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_closeMainGoal___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_note(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Linter_linterSetsExt;
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
uint8_t l_Lean_Linter_getLinterValue(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getRoundtrippingUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_assumption(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tactic_simp_trace;
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Context_setAutoUnfold(lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withSimpDiagnostics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_focus___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_linter_unnecessarySimpa;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__10___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__4;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__5;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__6;
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__7;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__0;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__1;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__2;
static lean_once_cell_t l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__3;
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0;
static lean_once_cell_t l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__0;
static lean_once_cell_t l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22_spec__25___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__13;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
_start:
{
lean_object* v_defValue_5_; lean_object* v_descr_6_; lean_object* v_deprecation_x3f_7_; lean_object* v___x_8_; uint8_t v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; 
v_defValue_5_ = lean_ctor_get(v_decl_2_, 0);
v_descr_6_ = lean_ctor_get(v_decl_2_, 1);
v_deprecation_x3f_7_ = lean_ctor_get(v_decl_2_, 2);
v___x_8_ = lean_alloc_ctor(1, 0, 1);
v___x_9_ = lean_unbox(v_defValue_5_);
lean_ctor_set_uint8(v___x_8_, 0, v___x_9_);
lean_inc(v_deprecation_x3f_7_);
lean_inc_ref(v_descr_6_);
lean_inc_n(v_name_1_, 2);
v___x_10_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_10_, 0, v_name_1_);
lean_ctor_set(v___x_10_, 1, v_ref_3_);
lean_ctor_set(v___x_10_, 2, v___x_8_);
lean_ctor_set(v___x_10_, 3, v_descr_6_);
lean_ctor_set(v___x_10_, 4, v_deprecation_x3f_7_);
v___x_11_ = lean_register_option(v_name_1_, v___x_10_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; 
v_unused_20_ = lean_ctor_get(v___x_11_, 0);
lean_dec(v_unused_20_);
v___x_13_ = v___x_11_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_dec(v___x_11_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
lean_inc(v_defValue_5_);
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v_name_1_);
lean_ctor_set(v___x_15_, 1, v_defValue_5_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 0, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_name_1_);
v_a_21_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_11_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_11_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked("linter", 6, 6);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_mk_string_unchecked("unnecessarySimpa", 16, 16);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_36_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__1_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_);
v___x_37_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__0_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_);
v___x_38_ = l_Lean_Name_mkStr2(v___x_37_, v___x_36_);
return v___x_38_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = lean_mk_string_unchecked("enable the 'unnecessary simpa' linter", 37, 37);
return v___x_39_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_40_; lean_object* v___x_41_; uint8_t v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_40_ = lean_box(0);
v___x_41_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__3_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_);
v___x_42_ = 1;
v___x_43_ = lean_box(v___x_42_);
v___x_44_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_41_);
lean_ctor_set(v___x_44_, 2, v___x_40_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_46_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__2_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_);
v___x_47_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_, &l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_Tactic_Simpa_0__initFn___closed__4_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_);
v___x_48_ = l_Lean_Option_register___at___00__private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4__spec__0(v___x_46_, v___x_47_, v___x_46_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4____boxed(lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_();
return v_res_50_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(lean_object* v_o_51_){
_start:
{
lean_object* v___x_52_; uint8_t v___x_53_; 
v___x_52_ = l_linter_unnecessarySimpa;
v___x_53_ = l_Lean_Linter_getLinterValue(v___x_52_, v_o_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa___boxed(lean_object* v_o_54_){
_start:
{
uint8_t v_res_55_; lean_object* v_r_56_; 
v_res_55_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_o_54_);
lean_dec_ref(v_o_54_);
v_r_56_ = lean_box(v_res_55_);
return v_r_56_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_57_ = lean_box(0);
v___x_58_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_59_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___x_57_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg(){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___closed__0);
v___x_62_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg___boxed(lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0(lean_object* v_00_u03b1_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___boxed(lean_object* v_00_u03b1_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
lean_object* v_res_86_; 
v_res_86_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0(v_00_u03b1_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec(v___y_80_);
lean_dec_ref(v___y_79_);
lean_dec(v___y_78_);
lean_dec_ref(v___y_77_);
return v_res_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___lam__0(lean_object* v_x_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_){
_start:
{
lean_object* v___x_97_; 
lean_inc(v___y_91_);
lean_inc_ref(v___y_90_);
lean_inc(v___y_89_);
lean_inc_ref(v___y_88_);
v___x_97_ = lean_apply_9(v_x_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, lean_box(0));
return v___x_97_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___lam__0___boxed(lean_object* v_x_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___lam__0(v_x_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg(lean_object* v_mvarId_109_, lean_object* v_x_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v___f_120_; lean_object* v___x_121_; 
lean_inc(v___y_114_);
lean_inc_ref(v___y_113_);
lean_inc(v___y_112_);
lean_inc_ref(v___y_111_);
v___f_120_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_120_, 0, v_x_110_);
lean_closure_set(v___f_120_, 1, v___y_111_);
lean_closure_set(v___f_120_, 2, v___y_112_);
lean_closure_set(v___f_120_, 3, v___y_113_);
lean_closure_set(v___f_120_, 4, v___y_114_);
v___x_121_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_109_, v___f_120_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
if (lean_obj_tag(v___x_121_) == 0)
{
return v___x_121_;
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg___boxed(lean_object* v_mvarId_130_, lean_object* v_x_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg(v_mvarId_130_, v_x_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_);
lean_dec(v___y_139_);
lean_dec_ref(v___y_138_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
lean_dec(v___y_135_);
lean_dec_ref(v___y_134_);
lean_dec(v___y_133_);
lean_dec_ref(v___y_132_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5(lean_object* v_00_u03b1_142_, lean_object* v_mvarId_143_, lean_object* v_x_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg(v_mvarId_143_, v_x_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___boxed(lean_object* v_00_u03b1_155_, lean_object* v_mvarId_156_, lean_object* v_x_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5(v_00_u03b1_155_, v_mvarId_156_, v_x_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
return v_res_167_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_168_ = lean_unsigned_to_nat(32u);
v___x_169_ = lean_mk_empty_array_with_capacity(v___x_168_);
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__1(void){
_start:
{
size_t v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
v___x_171_ = ((size_t)5ULL);
v___x_172_ = lean_unsigned_to_nat(0u);
v___x_173_ = lean_unsigned_to_nat(32u);
v___x_174_ = lean_mk_empty_array_with_capacity(v___x_173_);
v___x_175_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__0);
v___x_176_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_176_, 0, v___x_175_);
lean_ctor_set(v___x_176_, 1, v___x_174_);
lean_ctor_set(v___x_176_, 2, v___x_172_);
lean_ctor_set(v___x_176_, 3, v___x_172_);
lean_ctor_set_usize(v___x_176_, 4, v___x_171_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg(lean_object* v___y_177_){
_start:
{
lean_object* v___x_179_; lean_object* v_infoState_180_; lean_object* v_trees_181_; lean_object* v___x_182_; lean_object* v_infoState_183_; lean_object* v_env_184_; lean_object* v_nextMacroScope_185_; lean_object* v_ngen_186_; lean_object* v_auxDeclNGen_187_; lean_object* v_traceState_188_; lean_object* v_cache_189_; lean_object* v_messages_190_; lean_object* v_snapshotTasks_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_212_; 
v___x_179_ = lean_st_ref_get(v___y_177_);
v_infoState_180_ = lean_ctor_get(v___x_179_, 7);
lean_inc_ref(v_infoState_180_);
lean_dec(v___x_179_);
v_trees_181_ = lean_ctor_get(v_infoState_180_, 2);
lean_inc_ref(v_trees_181_);
lean_dec_ref(v_infoState_180_);
v___x_182_ = lean_st_ref_take(v___y_177_);
v_infoState_183_ = lean_ctor_get(v___x_182_, 7);
v_env_184_ = lean_ctor_get(v___x_182_, 0);
v_nextMacroScope_185_ = lean_ctor_get(v___x_182_, 1);
v_ngen_186_ = lean_ctor_get(v___x_182_, 2);
v_auxDeclNGen_187_ = lean_ctor_get(v___x_182_, 3);
v_traceState_188_ = lean_ctor_get(v___x_182_, 4);
v_cache_189_ = lean_ctor_get(v___x_182_, 5);
v_messages_190_ = lean_ctor_get(v___x_182_, 6);
v_snapshotTasks_191_ = lean_ctor_get(v___x_182_, 8);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_212_ == 0)
{
v___x_193_ = v___x_182_;
v_isShared_194_ = v_isSharedCheck_212_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_snapshotTasks_191_);
lean_inc(v_infoState_183_);
lean_inc(v_messages_190_);
lean_inc(v_cache_189_);
lean_inc(v_traceState_188_);
lean_inc(v_auxDeclNGen_187_);
lean_inc(v_ngen_186_);
lean_inc(v_nextMacroScope_185_);
lean_inc(v_env_184_);
lean_dec(v___x_182_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_212_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
uint8_t v_enabled_195_; lean_object* v_assignment_196_; lean_object* v_lazyAssignment_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_210_; 
v_enabled_195_ = lean_ctor_get_uint8(v_infoState_183_, sizeof(void*)*3);
v_assignment_196_ = lean_ctor_get(v_infoState_183_, 0);
v_lazyAssignment_197_ = lean_ctor_get(v_infoState_183_, 1);
v_isSharedCheck_210_ = !lean_is_exclusive(v_infoState_183_);
if (v_isSharedCheck_210_ == 0)
{
lean_object* v_unused_211_; 
v_unused_211_ = lean_ctor_get(v_infoState_183_, 2);
lean_dec(v_unused_211_);
v___x_199_ = v_infoState_183_;
v_isShared_200_ = v_isSharedCheck_210_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_lazyAssignment_197_);
lean_inc(v_assignment_196_);
lean_dec(v_infoState_183_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_210_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
lean_object* v___x_201_; lean_object* v___x_203_; 
v___x_201_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___closed__1);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 2, v___x_201_);
v___x_203_ = v___x_199_;
goto v_reusejp_202_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_assignment_196_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v_lazyAssignment_197_);
lean_ctor_set(v_reuseFailAlloc_209_, 2, v___x_201_);
lean_ctor_set_uint8(v_reuseFailAlloc_209_, sizeof(void*)*3, v_enabled_195_);
v___x_203_ = v_reuseFailAlloc_209_;
goto v_reusejp_202_;
}
v_reusejp_202_:
{
lean_object* v___x_205_; 
if (v_isShared_194_ == 0)
{
lean_ctor_set(v___x_193_, 7, v___x_203_);
v___x_205_ = v___x_193_;
goto v_reusejp_204_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_env_184_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_nextMacroScope_185_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v_ngen_186_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v_auxDeclNGen_187_);
lean_ctor_set(v_reuseFailAlloc_208_, 4, v_traceState_188_);
lean_ctor_set(v_reuseFailAlloc_208_, 5, v_cache_189_);
lean_ctor_set(v_reuseFailAlloc_208_, 6, v_messages_190_);
lean_ctor_set(v_reuseFailAlloc_208_, 7, v___x_203_);
lean_ctor_set(v_reuseFailAlloc_208_, 8, v_snapshotTasks_191_);
v___x_205_ = v_reuseFailAlloc_208_;
goto v_reusejp_204_;
}
v_reusejp_204_:
{
lean_object* v___x_206_; lean_object* v___x_207_; 
v___x_206_ = lean_st_ref_set(v___y_177_, v___x_205_);
v___x_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_207_, 0, v_trees_181_);
return v___x_207_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg___boxed(lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg(v___y_213_);
lean_dec(v___y_213_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7(lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg(v___y_223_);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___boxed(lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7(v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_235_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___closed__0(void){
_start:
{
lean_object* v___f_236_; 
v___f_236_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instInhabitedTacticM___lam__0___boxed), 9, 0);
return v___f_236_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(lean_object* v_msg_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_){
_start:
{
lean_object* v___f_247_; lean_object* v___x_66518__overap_248_; lean_object* v___x_249_; 
v___f_247_ = lean_obj_once(&l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___closed__0, &l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___closed__0_once, _init_l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___closed__0);
v___x_66518__overap_248_ = lean_panic_fn_borrowed(v___f_247_, v_msg_237_);
lean_inc(v___y_245_);
lean_inc_ref(v___y_244_);
lean_inc(v___y_243_);
lean_inc_ref(v___y_242_);
lean_inc(v___y_241_);
lean_inc_ref(v___y_240_);
lean_inc(v___y_239_);
lean_inc_ref(v___y_238_);
v___x_249_ = lean_apply_9(v___x_66518__overap_248_, v___y_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_, v___y_243_, v___y_244_, v___y_245_, lean_box(0));
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9___boxed(lean_object* v_msg_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(v_msg_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
return v_res_260_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__10(lean_object* v_opts_261_, lean_object* v_opt_262_){
_start:
{
lean_object* v_name_263_; lean_object* v_defValue_264_; lean_object* v_map_265_; lean_object* v___x_266_; 
v_name_263_ = lean_ctor_get(v_opt_262_, 0);
v_defValue_264_ = lean_ctor_get(v_opt_262_, 1);
v_map_265_ = lean_ctor_get(v_opts_261_, 0);
v___x_266_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_265_, v_name_263_);
if (lean_obj_tag(v___x_266_) == 0)
{
uint8_t v___x_267_; 
v___x_267_ = lean_unbox(v_defValue_264_);
return v___x_267_;
}
else
{
lean_object* v_val_268_; 
v_val_268_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_val_268_);
lean_dec_ref(v___x_266_);
if (lean_obj_tag(v_val_268_) == 1)
{
uint8_t v_v_269_; 
v_v_269_ = lean_ctor_get_uint8(v_val_268_, 0);
lean_dec_ref(v_val_268_);
return v_v_269_;
}
else
{
uint8_t v___x_270_; 
lean_dec(v_val_268_);
v___x_270_ = lean_unbox(v_defValue_264_);
return v___x_270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__10___boxed(lean_object* v_opts_271_, lean_object* v_opt_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__10(v_opts_271_, v_opt_272_);
lean_dec_ref(v_opt_272_);
lean_dec_ref(v_opts_271_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__0(lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_){
_start:
{
lean_object* v_ref_284_; uint8_t v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v_ref_284_ = lean_ctor_get(v___y_281_, 5);
v___x_285_ = 0;
v___x_286_ = l_Lean_SourceInfo_fromRef(v_ref_284_, v___x_285_);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__0___boxed(lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__0(v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_, v___y_295_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__1(lean_object* v_a_298_, lean_object* v_trees_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___x_309_; 
lean_inc(v___y_307_);
lean_inc_ref(v___y_306_);
lean_inc(v___y_305_);
lean_inc_ref(v___y_304_);
lean_inc(v___y_303_);
lean_inc_ref(v___y_302_);
lean_inc(v___y_301_);
lean_inc_ref(v___y_300_);
v___x_309_ = lean_apply_9(v_a_298_, v___y_300_, v___y_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, lean_box(0));
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; lean_object* v___x_312_; uint8_t v_isShared_313_; uint8_t v_isSharedCheck_318_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_318_ == 0)
{
v___x_312_ = v___x_309_;
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
else
{
lean_inc(v_a_310_);
lean_dec(v___x_309_);
v___x_312_ = lean_box(0);
v_isShared_313_ = v_isSharedCheck_318_;
goto v_resetjp_311_;
}
v_resetjp_311_:
{
lean_object* v___x_314_; lean_object* v___x_316_; 
v___x_314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_314_, 0, v_a_310_);
lean_ctor_set(v___x_314_, 1, v_trees_299_);
if (v_isShared_313_ == 0)
{
lean_ctor_set(v___x_312_, 0, v___x_314_);
v___x_316_ = v___x_312_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v___x_314_);
v___x_316_ = v_reuseFailAlloc_317_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
return v___x_316_;
}
}
}
else
{
lean_object* v_a_319_; lean_object* v___x_321_; uint8_t v_isShared_322_; uint8_t v_isSharedCheck_326_; 
lean_dec_ref(v_trees_299_);
v_a_319_ = lean_ctor_get(v___x_309_, 0);
v_isSharedCheck_326_ = !lean_is_exclusive(v___x_309_);
if (v_isSharedCheck_326_ == 0)
{
v___x_321_ = v___x_309_;
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
else
{
lean_inc(v_a_319_);
lean_dec(v___x_309_);
v___x_321_ = lean_box(0);
v_isShared_322_ = v_isSharedCheck_326_;
goto v_resetjp_320_;
}
v_resetjp_320_:
{
lean_object* v___x_324_; 
if (v_isShared_322_ == 0)
{
v___x_324_ = v___x_321_;
goto v_reusejp_323_;
}
else
{
lean_object* v_reuseFailAlloc_325_; 
v_reuseFailAlloc_325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_325_, 0, v_a_319_);
v___x_324_ = v_reuseFailAlloc_325_;
goto v_reusejp_323_;
}
v_reusejp_323_:
{
return v___x_324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__1___boxed(lean_object* v_a_327_, lean_object* v_trees_328_, lean_object* v___y_329_, lean_object* v___y_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__1(v_a_327_, v_trees_328_, v___y_329_, v___y_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v___y_334_);
lean_dec_ref(v___y_333_);
lean_dec(v___y_332_);
lean_dec_ref(v___y_331_);
lean_dec(v___y_330_);
lean_dec_ref(v___y_329_);
return v_res_338_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__0(void){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = lean_mk_string_unchecked("Type mismatch: After simplification, term", 41, 41);
return v___x_339_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__1(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__0);
v___x_341_ = l_Lean_stringToMessageData(v___x_340_);
return v___x_341_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__2(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_342_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__3(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__2, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__2_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__2);
v___x_344_ = l_Lean_stringToMessageData(v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2(lean_object* v_a_345_, lean_object* v_a_346_, uint8_t v___x_347_, uint8_t v___x_348_, uint8_t v___x_349_, lean_object* v_a_350_, lean_object* v_mvarCounter_351_, lean_object* v___x_352_, lean_object* v___x_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
lean_object* v___x_363_; 
lean_inc(v_a_345_);
v___x_363_ = l_Lean_MVarId_getType(v_a_345_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc_n(v_a_364_, 2);
lean_dec_ref(v___x_363_);
v___x_365_ = lean_mk_syntax_ident(v_a_346_);
v___x_366_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_366_, 0, v_a_364_);
v___x_367_ = l_Lean_Elab_Term_elabTerm(v___x_365_, v___x_366_, v___x_347_, v___x_347_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
if (lean_obj_tag(v___x_367_) == 0)
{
lean_object* v_a_368_; lean_object* v___y_370_; lean_object* v___y_371_; lean_object* v___y_372_; lean_object* v___y_373_; lean_object* v___y_374_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___y_377_; lean_object* v___x_402_; 
v_a_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc(v_a_368_);
lean_dec_ref(v___x_367_);
v___x_402_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_348_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
if (lean_obj_tag(v___x_402_) == 0)
{
lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_479_; 
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_479_ == 0)
{
lean_object* v_unused_480_; 
v_unused_480_ = lean_ctor_get(v___x_402_, 0);
lean_dec(v_unused_480_);
v___x_404_ = v___x_402_;
v_isShared_405_ = v_isSharedCheck_479_;
goto v_resetjp_403_;
}
else
{
lean_dec(v___x_402_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_479_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; 
lean_inc(v___y_361_);
lean_inc_ref(v___y_360_);
lean_inc(v___y_359_);
lean_inc_ref(v___y_358_);
lean_inc(v_a_368_);
v___x_406_ = lean_infer_type(v_a_368_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
if (lean_obj_tag(v___x_406_) == 0)
{
lean_object* v_a_407_; uint8_t v_a_409_; lean_object* v___x_419_; uint8_t v_foApprox_420_; uint8_t v_ctxApprox_421_; uint8_t v_quasiPatternApprox_422_; uint8_t v_constApprox_423_; uint8_t v_isDefEqStuckEx_424_; uint8_t v_unificationHints_425_; uint8_t v_proofIrrelevance_426_; uint8_t v_offsetCnstrs_427_; uint8_t v_transparency_428_; uint8_t v_etaStruct_429_; uint8_t v_univApprox_430_; uint8_t v_iota_431_; uint8_t v_beta_432_; uint8_t v_proj_433_; uint8_t v_zeta_434_; uint8_t v_zetaDelta_435_; uint8_t v_zetaUnused_436_; uint8_t v_zetaHave_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_470_; 
v_a_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc(v_a_407_);
lean_dec_ref(v___x_406_);
v___x_419_ = l_Lean_Meta_Context_config(v___y_358_);
v_foApprox_420_ = lean_ctor_get_uint8(v___x_419_, 0);
v_ctxApprox_421_ = lean_ctor_get_uint8(v___x_419_, 1);
v_quasiPatternApprox_422_ = lean_ctor_get_uint8(v___x_419_, 2);
v_constApprox_423_ = lean_ctor_get_uint8(v___x_419_, 3);
v_isDefEqStuckEx_424_ = lean_ctor_get_uint8(v___x_419_, 4);
v_unificationHints_425_ = lean_ctor_get_uint8(v___x_419_, 5);
v_proofIrrelevance_426_ = lean_ctor_get_uint8(v___x_419_, 6);
v_offsetCnstrs_427_ = lean_ctor_get_uint8(v___x_419_, 8);
v_transparency_428_ = lean_ctor_get_uint8(v___x_419_, 9);
v_etaStruct_429_ = lean_ctor_get_uint8(v___x_419_, 10);
v_univApprox_430_ = lean_ctor_get_uint8(v___x_419_, 11);
v_iota_431_ = lean_ctor_get_uint8(v___x_419_, 12);
v_beta_432_ = lean_ctor_get_uint8(v___x_419_, 13);
v_proj_433_ = lean_ctor_get_uint8(v___x_419_, 14);
v_zeta_434_ = lean_ctor_get_uint8(v___x_419_, 15);
v_zetaDelta_435_ = lean_ctor_get_uint8(v___x_419_, 16);
v_zetaUnused_436_ = lean_ctor_get_uint8(v___x_419_, 17);
v_zetaHave_437_ = lean_ctor_get_uint8(v___x_419_, 18);
v_isSharedCheck_470_ = !lean_is_exclusive(v___x_419_);
if (v_isSharedCheck_470_ == 0)
{
v___x_439_ = v___x_419_;
v_isShared_440_ = v_isSharedCheck_470_;
goto v_resetjp_438_;
}
else
{
lean_dec(v___x_419_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_470_;
goto v_resetjp_438_;
}
v___jp_408_:
{
if (v_a_409_ == 0)
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_416_; 
v___x_410_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__1);
lean_inc_ref(v_a_350_);
v___x_411_ = l_Lean_indentExpr(v_a_350_);
v___x_412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_410_);
lean_ctor_set(v___x_412_, 1, v___x_411_);
v___x_413_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__3, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__3_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___closed__3);
v___x_414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
if (v_isShared_405_ == 0)
{
lean_ctor_set_tag(v___x_404_, 1);
lean_ctor_set(v___x_404_, 0, v___x_414_);
v___x_416_ = v___x_404_;
goto v_reusejp_415_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_414_);
v___x_416_ = v_reuseFailAlloc_418_;
goto v_reusejp_415_;
}
v_reusejp_415_:
{
lean_object* v___x_417_; 
lean_inc(v_a_368_);
v___x_417_ = l_Lean_Elab_Term_throwTypeMismatchError___redArg(v___x_416_, v_a_364_, v_a_407_, v_a_368_, v___x_353_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
lean_dec_ref(v___x_416_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_dec_ref(v___x_417_);
v___y_370_ = v___y_354_;
v___y_371_ = v___y_355_;
v___y_372_ = v___y_356_;
v___y_373_ = v___y_357_;
v___y_374_ = v___y_358_;
v___y_375_ = v___y_359_;
v___y_376_ = v___y_360_;
v___y_377_ = v___y_361_;
goto v___jp_369_;
}
else
{
lean_dec(v_a_368_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_345_);
return v___x_417_;
}
}
}
else
{
lean_dec(v_a_407_);
lean_del_object(v___x_404_);
lean_dec(v_a_364_);
lean_dec(v___x_353_);
v___y_370_ = v___y_354_;
v___y_371_ = v___y_355_;
v___y_372_ = v___y_356_;
v___y_373_ = v___y_357_;
v___y_374_ = v___y_358_;
v___y_375_ = v___y_359_;
v___y_376_ = v___y_360_;
v___y_377_ = v___y_361_;
goto v___jp_369_;
}
}
v_resetjp_438_:
{
uint8_t v_trackZetaDelta_441_; lean_object* v_zetaDeltaSet_442_; lean_object* v_lctx_443_; lean_object* v_localInstances_444_; lean_object* v_defEqCtx_x3f_445_; lean_object* v_synthPendingDepth_446_; lean_object* v_canUnfold_x3f_447_; uint8_t v_univApprox_448_; uint8_t v_inTypeClassResolution_449_; uint8_t v_cacheInferType_450_; lean_object* v___x_452_; 
v_trackZetaDelta_441_ = lean_ctor_get_uint8(v___y_358_, sizeof(void*)*7);
v_zetaDeltaSet_442_ = lean_ctor_get(v___y_358_, 1);
v_lctx_443_ = lean_ctor_get(v___y_358_, 2);
v_localInstances_444_ = lean_ctor_get(v___y_358_, 3);
v_defEqCtx_x3f_445_ = lean_ctor_get(v___y_358_, 4);
v_synthPendingDepth_446_ = lean_ctor_get(v___y_358_, 5);
v_canUnfold_x3f_447_ = lean_ctor_get(v___y_358_, 6);
v_univApprox_448_ = lean_ctor_get_uint8(v___y_358_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_449_ = lean_ctor_get_uint8(v___y_358_, sizeof(void*)*7 + 2);
v_cacheInferType_450_ = lean_ctor_get_uint8(v___y_358_, sizeof(void*)*7 + 3);
if (v_isShared_440_ == 0)
{
v___x_452_ = v___x_439_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 0, v_foApprox_420_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 1, v_ctxApprox_421_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 2, v_quasiPatternApprox_422_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 3, v_constApprox_423_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 4, v_isDefEqStuckEx_424_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 5, v_unificationHints_425_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 6, v_proofIrrelevance_426_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 8, v_offsetCnstrs_427_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 9, v_transparency_428_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 10, v_etaStruct_429_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 11, v_univApprox_430_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 12, v_iota_431_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 13, v_beta_432_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 14, v_proj_433_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 15, v_zeta_434_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 16, v_zetaDelta_435_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 17, v_zetaUnused_436_);
lean_ctor_set_uint8(v_reuseFailAlloc_469_, 18, v_zetaHave_437_);
v___x_452_ = v_reuseFailAlloc_469_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
uint64_t v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; 
lean_ctor_set_uint8(v___x_452_, 7, v___x_349_);
v___x_453_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_452_);
v___x_454_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_454_, 0, v___x_452_);
lean_ctor_set_uint64(v___x_454_, sizeof(void*)*1, v___x_453_);
lean_inc(v_canUnfold_x3f_447_);
lean_inc(v_synthPendingDepth_446_);
lean_inc(v_defEqCtx_x3f_445_);
lean_inc_ref(v_localInstances_444_);
lean_inc_ref(v_lctx_443_);
lean_inc(v_zetaDeltaSet_442_);
v___x_455_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v_zetaDeltaSet_442_);
lean_ctor_set(v___x_455_, 2, v_lctx_443_);
lean_ctor_set(v___x_455_, 3, v_localInstances_444_);
lean_ctor_set(v___x_455_, 4, v_defEqCtx_x3f_445_);
lean_ctor_set(v___x_455_, 5, v_synthPendingDepth_446_);
lean_ctor_set(v___x_455_, 6, v_canUnfold_x3f_447_);
lean_ctor_set_uint8(v___x_455_, sizeof(void*)*7, v_trackZetaDelta_441_);
lean_ctor_set_uint8(v___x_455_, sizeof(void*)*7 + 1, v_univApprox_448_);
lean_ctor_set_uint8(v___x_455_, sizeof(void*)*7 + 2, v_inTypeClassResolution_449_);
lean_ctor_set_uint8(v___x_455_, sizeof(void*)*7 + 3, v_cacheInferType_450_);
lean_inc(v_a_407_);
lean_inc(v_a_364_);
v___x_456_ = l_Lean_Meta_isExprDefEq(v_a_364_, v_a_407_, v___x_455_, v___y_359_, v___y_360_, v___y_361_);
lean_dec_ref(v___x_455_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; uint8_t v___x_458_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref(v___x_456_);
v___x_458_ = lean_unbox(v_a_457_);
lean_dec(v_a_457_);
v_a_409_ = v___x_458_;
goto v___jp_408_;
}
else
{
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_459_; uint8_t v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_459_);
lean_dec_ref(v___x_456_);
v___x_460_ = lean_unbox(v_a_459_);
lean_dec(v_a_459_);
v_a_409_ = v___x_460_;
goto v___jp_408_;
}
else
{
lean_object* v_a_461_; lean_object* v___x_463_; uint8_t v_isShared_464_; uint8_t v_isSharedCheck_468_; 
lean_dec(v_a_407_);
lean_del_object(v___x_404_);
lean_dec(v_a_368_);
lean_dec(v_a_364_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_345_);
v_a_461_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_468_ == 0)
{
v___x_463_ = v___x_456_;
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
else
{
lean_inc(v_a_461_);
lean_dec(v___x_456_);
v___x_463_ = lean_box(0);
v_isShared_464_ = v_isSharedCheck_468_;
goto v_resetjp_462_;
}
v_resetjp_462_:
{
lean_object* v___x_466_; 
if (v_isShared_464_ == 0)
{
v___x_466_ = v___x_463_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_a_461_);
v___x_466_ = v_reuseFailAlloc_467_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
return v___x_466_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_471_; lean_object* v___x_473_; uint8_t v_isShared_474_; uint8_t v_isSharedCheck_478_; 
lean_del_object(v___x_404_);
lean_dec(v_a_368_);
lean_dec(v_a_364_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_345_);
v_a_471_ = lean_ctor_get(v___x_406_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_478_ == 0)
{
v___x_473_ = v___x_406_;
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
else
{
lean_inc(v_a_471_);
lean_dec(v___x_406_);
v___x_473_ = lean_box(0);
v_isShared_474_ = v_isSharedCheck_478_;
goto v_resetjp_472_;
}
v_resetjp_472_:
{
lean_object* v___x_476_; 
if (v_isShared_474_ == 0)
{
v___x_476_ = v___x_473_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_a_471_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
}
else
{
lean_dec(v_a_368_);
lean_dec(v_a_364_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_345_);
return v___x_402_;
}
v___jp_369_:
{
lean_object* v___x_378_; 
v___x_378_ = l_Lean_Meta_getMVars(v_a_350_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_380_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
lean_dec_ref(v___x_378_);
v___x_380_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_379_, v_mvarCounter_351_, v___y_375_, v___y_377_);
lean_dec(v_a_379_);
if (lean_obj_tag(v___x_380_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_382_; 
v_a_381_ = lean_ctor_get(v___x_380_, 0);
lean_inc(v_a_381_);
lean_dec_ref(v___x_380_);
v___x_382_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_381_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v_a_381_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v___x_383_; 
lean_dec_ref(v___x_382_);
v___x_383_ = l_Lean_Elab_Tactic_pushGoal___redArg(v_a_345_, v___y_371_, v___y_377_);
if (lean_obj_tag(v___x_383_) == 0)
{
lean_object* v___x_384_; lean_object* v___x_385_; 
lean_dec_ref(v___x_383_);
v___x_384_ = l_Lean_Name_mkStr1(v___x_352_);
v___x_385_ = l_Lean_Elab_Tactic_closeMainGoal___redArg(v___x_384_, v_a_368_, v___x_348_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
return v___x_385_;
}
else
{
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v_a_368_);
lean_dec_ref(v___x_352_);
return v___x_383_;
}
}
else
{
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v_a_368_);
lean_dec_ref(v___x_352_);
lean_dec(v_a_345_);
return v___x_382_;
}
}
else
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v_a_368_);
lean_dec_ref(v___x_352_);
lean_dec(v_a_345_);
v_a_386_ = lean_ctor_get(v___x_380_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_380_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_380_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_380_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v_a_368_);
lean_dec_ref(v___x_352_);
lean_dec(v_a_345_);
v_a_394_ = lean_ctor_get(v___x_378_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_378_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_378_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_378_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
lean_dec(v_a_364_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_345_);
v_a_481_ = lean_ctor_get(v___x_367_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_367_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_367_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
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
else
{
lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___x_353_);
lean_dec_ref(v___x_352_);
lean_dec_ref(v_a_350_);
lean_dec(v_a_346_);
lean_dec(v_a_345_);
v_a_489_ = lean_ctor_get(v___x_363_, 0);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_363_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_363_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_363_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___boxed(lean_object** _args){
lean_object* v_a_497_ = _args[0];
lean_object* v_a_498_ = _args[1];
lean_object* v___x_499_ = _args[2];
lean_object* v___x_500_ = _args[3];
lean_object* v___x_501_ = _args[4];
lean_object* v_a_502_ = _args[5];
lean_object* v_mvarCounter_503_ = _args[6];
lean_object* v___x_504_ = _args[7];
lean_object* v___x_505_ = _args[8];
lean_object* v___y_506_ = _args[9];
lean_object* v___y_507_ = _args[10];
lean_object* v___y_508_ = _args[11];
lean_object* v___y_509_ = _args[12];
lean_object* v___y_510_ = _args[13];
lean_object* v___y_511_ = _args[14];
lean_object* v___y_512_ = _args[15];
lean_object* v___y_513_ = _args[16];
lean_object* v___y_514_ = _args[17];
_start:
{
uint8_t v___x_78862__boxed_515_; uint8_t v___x_78863__boxed_516_; uint8_t v___x_78864__boxed_517_; lean_object* v_res_518_; 
v___x_78862__boxed_515_ = lean_unbox(v___x_499_);
v___x_78863__boxed_516_ = lean_unbox(v___x_500_);
v___x_78864__boxed_517_ = lean_unbox(v___x_501_);
v_res_518_ = l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2(v_a_497_, v_a_498_, v___x_78862__boxed_515_, v___x_78863__boxed_516_, v___x_78864__boxed_517_, v_a_502_, v_mvarCounter_503_, v___x_504_, v___x_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v_mvarCounter_503_);
return v_res_518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__3(lean_object* v_a_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v___x_529_; lean_object* v_infoState_530_; lean_object* v_env_531_; lean_object* v_nextMacroScope_532_; lean_object* v_ngen_533_; lean_object* v_auxDeclNGen_534_; lean_object* v_traceState_535_; lean_object* v_cache_536_; lean_object* v_messages_537_; lean_object* v_snapshotTasks_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_559_; 
v___x_529_ = lean_st_ref_take(v___y_527_);
v_infoState_530_ = lean_ctor_get(v___x_529_, 7);
v_env_531_ = lean_ctor_get(v___x_529_, 0);
v_nextMacroScope_532_ = lean_ctor_get(v___x_529_, 1);
v_ngen_533_ = lean_ctor_get(v___x_529_, 2);
v_auxDeclNGen_534_ = lean_ctor_get(v___x_529_, 3);
v_traceState_535_ = lean_ctor_get(v___x_529_, 4);
v_cache_536_ = lean_ctor_get(v___x_529_, 5);
v_messages_537_ = lean_ctor_get(v___x_529_, 6);
v_snapshotTasks_538_ = lean_ctor_get(v___x_529_, 8);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_529_);
if (v_isSharedCheck_559_ == 0)
{
v___x_540_ = v___x_529_;
v_isShared_541_ = v_isSharedCheck_559_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_snapshotTasks_538_);
lean_inc(v_infoState_530_);
lean_inc(v_messages_537_);
lean_inc(v_cache_536_);
lean_inc(v_traceState_535_);
lean_inc(v_auxDeclNGen_534_);
lean_inc(v_ngen_533_);
lean_inc(v_nextMacroScope_532_);
lean_inc(v_env_531_);
lean_dec(v___x_529_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_559_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
uint8_t v_enabled_542_; lean_object* v_assignment_543_; lean_object* v_lazyAssignment_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_557_; 
v_enabled_542_ = lean_ctor_get_uint8(v_infoState_530_, sizeof(void*)*3);
v_assignment_543_ = lean_ctor_get(v_infoState_530_, 0);
v_lazyAssignment_544_ = lean_ctor_get(v_infoState_530_, 1);
v_isSharedCheck_557_ = !lean_is_exclusive(v_infoState_530_);
if (v_isSharedCheck_557_ == 0)
{
lean_object* v_unused_558_; 
v_unused_558_ = lean_ctor_get(v_infoState_530_, 2);
lean_dec(v_unused_558_);
v___x_546_ = v_infoState_530_;
v_isShared_547_ = v_isSharedCheck_557_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_lazyAssignment_544_);
lean_inc(v_assignment_543_);
lean_dec(v_infoState_530_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_557_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_549_; 
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 2, v_a_519_);
v___x_549_ = v___x_546_;
goto v_reusejp_548_;
}
else
{
lean_object* v_reuseFailAlloc_556_; 
v_reuseFailAlloc_556_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_556_, 0, v_assignment_543_);
lean_ctor_set(v_reuseFailAlloc_556_, 1, v_lazyAssignment_544_);
lean_ctor_set(v_reuseFailAlloc_556_, 2, v_a_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_556_, sizeof(void*)*3, v_enabled_542_);
v___x_549_ = v_reuseFailAlloc_556_;
goto v_reusejp_548_;
}
v_reusejp_548_:
{
lean_object* v___x_551_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 7, v___x_549_);
v___x_551_ = v___x_540_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_env_531_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_nextMacroScope_532_);
lean_ctor_set(v_reuseFailAlloc_555_, 2, v_ngen_533_);
lean_ctor_set(v_reuseFailAlloc_555_, 3, v_auxDeclNGen_534_);
lean_ctor_set(v_reuseFailAlloc_555_, 4, v_traceState_535_);
lean_ctor_set(v_reuseFailAlloc_555_, 5, v_cache_536_);
lean_ctor_set(v_reuseFailAlloc_555_, 6, v_messages_537_);
lean_ctor_set(v_reuseFailAlloc_555_, 7, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_555_, 8, v_snapshotTasks_538_);
v___x_551_ = v_reuseFailAlloc_555_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_552_ = lean_st_ref_set(v___y_527_, v___x_551_);
v___x_553_ = lean_box(0);
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v___x_553_);
return v___x_554_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__3___boxed(lean_object* v_a_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__3(v_a_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec(v___y_562_);
lean_dec_ref(v___y_561_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___lam__0(lean_object* v___y_571_, lean_object* v_mkInfoTree_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v_a_580_, lean_object* v_a_x3f_581_){
_start:
{
lean_object* v___x_583_; lean_object* v_infoState_584_; lean_object* v_trees_585_; lean_object* v___x_586_; 
v___x_583_ = lean_st_ref_get(v___y_571_);
v_infoState_584_ = lean_ctor_get(v___x_583_, 7);
lean_inc_ref(v_infoState_584_);
lean_dec(v___x_583_);
v_trees_585_ = lean_ctor_get(v_infoState_584_, 2);
lean_inc_ref(v_trees_585_);
lean_dec_ref(v_infoState_584_);
lean_inc(v___y_571_);
lean_inc_ref(v___y_579_);
lean_inc(v___y_578_);
lean_inc_ref(v___y_577_);
lean_inc(v___y_576_);
lean_inc_ref(v___y_575_);
lean_inc(v___y_574_);
lean_inc_ref(v___y_573_);
v___x_586_ = lean_apply_10(v_mkInfoTree_572_, v_trees_585_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_, v___y_571_, lean_box(0));
if (lean_obj_tag(v___x_586_) == 0)
{
lean_object* v_a_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_625_; 
v_a_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_625_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_625_ == 0)
{
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_625_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_a_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_625_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v___x_591_; lean_object* v_infoState_592_; lean_object* v_env_593_; lean_object* v_nextMacroScope_594_; lean_object* v_ngen_595_; lean_object* v_auxDeclNGen_596_; lean_object* v_traceState_597_; lean_object* v_cache_598_; lean_object* v_messages_599_; lean_object* v_snapshotTasks_600_; lean_object* v___x_602_; uint8_t v_isShared_603_; uint8_t v_isSharedCheck_624_; 
v___x_591_ = lean_st_ref_take(v___y_571_);
v_infoState_592_ = lean_ctor_get(v___x_591_, 7);
v_env_593_ = lean_ctor_get(v___x_591_, 0);
v_nextMacroScope_594_ = lean_ctor_get(v___x_591_, 1);
v_ngen_595_ = lean_ctor_get(v___x_591_, 2);
v_auxDeclNGen_596_ = lean_ctor_get(v___x_591_, 3);
v_traceState_597_ = lean_ctor_get(v___x_591_, 4);
v_cache_598_ = lean_ctor_get(v___x_591_, 5);
v_messages_599_ = lean_ctor_get(v___x_591_, 6);
v_snapshotTasks_600_ = lean_ctor_get(v___x_591_, 8);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_624_ == 0)
{
v___x_602_ = v___x_591_;
v_isShared_603_ = v_isSharedCheck_624_;
goto v_resetjp_601_;
}
else
{
lean_inc(v_snapshotTasks_600_);
lean_inc(v_infoState_592_);
lean_inc(v_messages_599_);
lean_inc(v_cache_598_);
lean_inc(v_traceState_597_);
lean_inc(v_auxDeclNGen_596_);
lean_inc(v_ngen_595_);
lean_inc(v_nextMacroScope_594_);
lean_inc(v_env_593_);
lean_dec(v___x_591_);
v___x_602_ = lean_box(0);
v_isShared_603_ = v_isSharedCheck_624_;
goto v_resetjp_601_;
}
v_resetjp_601_:
{
uint8_t v_enabled_604_; lean_object* v_assignment_605_; lean_object* v_lazyAssignment_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_622_; 
v_enabled_604_ = lean_ctor_get_uint8(v_infoState_592_, sizeof(void*)*3);
v_assignment_605_ = lean_ctor_get(v_infoState_592_, 0);
v_lazyAssignment_606_ = lean_ctor_get(v_infoState_592_, 1);
v_isSharedCheck_622_ = !lean_is_exclusive(v_infoState_592_);
if (v_isSharedCheck_622_ == 0)
{
lean_object* v_unused_623_; 
v_unused_623_ = lean_ctor_get(v_infoState_592_, 2);
lean_dec(v_unused_623_);
v___x_608_ = v_infoState_592_;
v_isShared_609_ = v_isSharedCheck_622_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_lazyAssignment_606_);
lean_inc(v_assignment_605_);
lean_dec(v_infoState_592_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_622_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; lean_object* v___x_612_; 
v___x_610_ = l_Lean_PersistentArray_push___redArg(v_a_580_, v_a_587_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 2, v___x_610_);
v___x_612_ = v___x_608_;
goto v_reusejp_611_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_assignment_605_);
lean_ctor_set(v_reuseFailAlloc_621_, 1, v_lazyAssignment_606_);
lean_ctor_set(v_reuseFailAlloc_621_, 2, v___x_610_);
lean_ctor_set_uint8(v_reuseFailAlloc_621_, sizeof(void*)*3, v_enabled_604_);
v___x_612_ = v_reuseFailAlloc_621_;
goto v_reusejp_611_;
}
v_reusejp_611_:
{
lean_object* v___x_614_; 
if (v_isShared_603_ == 0)
{
lean_ctor_set(v___x_602_, 7, v___x_612_);
v___x_614_ = v___x_602_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_env_593_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_nextMacroScope_594_);
lean_ctor_set(v_reuseFailAlloc_620_, 2, v_ngen_595_);
lean_ctor_set(v_reuseFailAlloc_620_, 3, v_auxDeclNGen_596_);
lean_ctor_set(v_reuseFailAlloc_620_, 4, v_traceState_597_);
lean_ctor_set(v_reuseFailAlloc_620_, 5, v_cache_598_);
lean_ctor_set(v_reuseFailAlloc_620_, 6, v_messages_599_);
lean_ctor_set(v_reuseFailAlloc_620_, 7, v___x_612_);
lean_ctor_set(v_reuseFailAlloc_620_, 8, v_snapshotTasks_600_);
v___x_614_ = v_reuseFailAlloc_620_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_618_; 
v___x_615_ = lean_st_ref_set(v___y_571_, v___x_614_);
v___x_616_ = lean_box(0);
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 0, v___x_616_);
v___x_618_ = v___x_589_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_616_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec_ref(v_a_580_);
v_a_626_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_586_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_586_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___lam__0___boxed(lean_object* v___y_634_, lean_object* v_mkInfoTree_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v_a_643_, lean_object* v_a_x3f_644_, lean_object* v___y_645_){
_start:
{
lean_object* v_res_646_; 
v_res_646_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___lam__0(v___y_634_, v_mkInfoTree_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_, v_a_643_, v_a_x3f_644_);
lean_dec(v_a_x3f_644_);
lean_dec_ref(v___y_642_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec_ref(v___y_636_);
lean_dec(v___y_634_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg(lean_object* v_x_647_, lean_object* v_mkInfoTree_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v___x_658_; lean_object* v_infoState_659_; uint8_t v_enabled_660_; 
v___x_658_ = lean_st_ref_get(v___y_656_);
v_infoState_659_ = lean_ctor_get(v___x_658_, 7);
lean_inc_ref(v_infoState_659_);
lean_dec(v___x_658_);
v_enabled_660_ = lean_ctor_get_uint8(v_infoState_659_, sizeof(void*)*3);
lean_dec_ref(v_infoState_659_);
if (v_enabled_660_ == 0)
{
lean_object* v___x_661_; 
lean_dec_ref(v_mkInfoTree_648_);
lean_inc(v___y_656_);
lean_inc_ref(v___y_655_);
lean_inc(v___y_654_);
lean_inc_ref(v___y_653_);
lean_inc(v___y_652_);
lean_inc_ref(v___y_651_);
lean_inc(v___y_650_);
lean_inc_ref(v___y_649_);
v___x_661_ = lean_apply_9(v_x_647_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, lean_box(0));
return v___x_661_;
}
else
{
lean_object* v___x_662_; lean_object* v_a_663_; lean_object* v_r_664_; 
v___x_662_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg(v___y_656_);
v_a_663_ = lean_ctor_get(v___x_662_, 0);
lean_inc(v_a_663_);
lean_dec_ref(v___x_662_);
lean_inc(v___y_656_);
lean_inc_ref(v___y_655_);
lean_inc(v___y_654_);
lean_inc_ref(v___y_653_);
lean_inc(v___y_652_);
lean_inc_ref(v___y_651_);
lean_inc(v___y_650_);
lean_inc_ref(v___y_649_);
v_r_664_ = lean_apply_9(v_x_647_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, lean_box(0));
if (lean_obj_tag(v_r_664_) == 0)
{
lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_689_; 
v_a_665_ = lean_ctor_get(v_r_664_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v_r_664_);
if (v_isSharedCheck_689_ == 0)
{
v___x_667_ = v_r_664_;
v_isShared_668_ = v_isSharedCheck_689_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_dec(v_r_664_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_689_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_670_; 
lean_inc(v_a_665_);
if (v_isShared_668_ == 0)
{
lean_ctor_set_tag(v___x_667_, 1);
v___x_670_ = v___x_667_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v_a_665_);
v___x_670_ = v_reuseFailAlloc_688_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
lean_object* v___x_671_; 
v___x_671_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___lam__0(v___y_656_, v_mkInfoTree_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v_a_663_, v___x_670_);
lean_dec_ref(v___x_670_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_678_ == 0)
{
lean_object* v_unused_679_; 
v_unused_679_ = lean_ctor_get(v___x_671_, 0);
lean_dec(v_unused_679_);
v___x_673_ = v___x_671_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_dec(v___x_671_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 0, v_a_665_);
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_665_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec(v_a_665_);
v_a_680_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_671_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_671_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v_a_690_ = lean_ctor_get(v_r_664_, 0);
lean_inc(v_a_690_);
lean_dec_ref(v_r_664_);
v___x_691_ = lean_box(0);
v___x_692_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___lam__0(v___y_656_, v_mkInfoTree_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v_a_663_, v___x_691_);
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v___x_694_; uint8_t v_isShared_695_; uint8_t v_isSharedCheck_699_; 
v_isSharedCheck_699_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_699_ == 0)
{
lean_object* v_unused_700_; 
v_unused_700_ = lean_ctor_get(v___x_692_, 0);
lean_dec(v_unused_700_);
v___x_694_ = v___x_692_;
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
else
{
lean_dec(v___x_692_);
v___x_694_ = lean_box(0);
v_isShared_695_ = v_isSharedCheck_699_;
goto v_resetjp_693_;
}
v_resetjp_693_:
{
lean_object* v___x_697_; 
if (v_isShared_695_ == 0)
{
lean_ctor_set_tag(v___x_694_, 1);
lean_ctor_set(v___x_694_, 0, v_a_690_);
v___x_697_ = v___x_694_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v_a_690_);
v___x_697_ = v_reuseFailAlloc_698_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
return v___x_697_;
}
}
}
else
{
lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec(v_a_690_);
v_a_701_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_692_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_692_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg___boxed(lean_object* v_x_709_, lean_object* v_mkInfoTree_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v_res_720_; 
v_res_720_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg(v_x_709_, v_mkInfoTree_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_);
lean_dec(v___y_718_);
lean_dec_ref(v___y_717_);
lean_dec(v___y_716_);
lean_dec_ref(v___y_715_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v___y_712_);
lean_dec_ref(v___y_711_);
return v_res_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6_spec__10(lean_object* v_msgData_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; lean_object* v_env_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v_mctx_731_; lean_object* v_lctx_732_; lean_object* v_options_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_727_ = lean_st_ref_get(v___y_725_);
v_env_728_ = lean_ctor_get(v___x_727_, 0);
lean_inc_ref(v_env_728_);
lean_dec(v___x_727_);
v___x_729_ = lean_st_ref_get(v___y_725_);
lean_dec(v___x_729_);
v___x_730_ = lean_st_ref_get(v___y_723_);
v_mctx_731_ = lean_ctor_get(v___x_730_, 0);
lean_inc_ref(v_mctx_731_);
lean_dec(v___x_730_);
v_lctx_732_ = lean_ctor_get(v___y_722_, 2);
v_options_733_ = lean_ctor_get(v___y_724_, 2);
lean_inc_ref(v_options_733_);
lean_inc_ref(v_lctx_732_);
v___x_734_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_734_, 0, v_env_728_);
lean_ctor_set(v___x_734_, 1, v_mctx_731_);
lean_ctor_set(v___x_734_, 2, v_lctx_732_);
lean_ctor_set(v___x_734_, 3, v_options_733_);
v___x_735_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
lean_ctor_set(v___x_735_, 1, v_msgData_721_);
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6_spec__10___boxed(lean_object* v_msgData_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6_spec__10(v_msgData_737_, v___y_738_, v___y_739_, v___y_740_, v___y_741_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
return v_res_743_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_744_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_745_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = lean_mk_string_unchecked("unsolvedGoals", 13, 13);
return v___x_746_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = lean_mk_string_unchecked("synthPlaceholder", 16, 16);
return v___x_747_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_748_; 
v___x_748_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_748_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = lean_mk_string_unchecked("inductionWithNoAlts", 19, 19);
return v___x_749_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lean_mk_string_unchecked("_namedError", 11, 11);
return v___x_750_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_751_; 
v___x_751_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_751_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0(uint8_t v___y_752_, uint8_t v_suppressElabErrors_753_, lean_object* v_x_754_){
_start:
{
if (lean_obj_tag(v_x_754_) == 1)
{
lean_object* v_pre_755_; 
v_pre_755_ = lean_ctor_get(v_x_754_, 0);
switch(lean_obj_tag(v_pre_755_))
{
case 1:
{
lean_object* v_pre_756_; 
v_pre_756_ = lean_ctor_get(v_pre_755_, 0);
switch(lean_obj_tag(v_pre_756_))
{
case 0:
{
lean_object* v_str_757_; lean_object* v_str_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_str_757_ = lean_ctor_get(v_x_754_, 1);
v_str_758_ = lean_ctor_get(v_pre_755_, 1);
v___x_759_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0);
v___x_760_ = lean_string_dec_eq(v_str_758_, v___x_759_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; uint8_t v___x_762_; 
v___x_761_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1);
v___x_762_ = lean_string_dec_eq(v_str_758_, v___x_761_);
if (v___x_762_ == 0)
{
return v___y_752_;
}
else
{
lean_object* v___x_763_; uint8_t v___x_764_; 
v___x_763_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__2, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__2_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__2);
v___x_764_ = lean_string_dec_eq(v_str_757_, v___x_763_);
if (v___x_764_ == 0)
{
return v___y_752_;
}
else
{
return v_suppressElabErrors_753_;
}
}
}
else
{
lean_object* v___x_765_; uint8_t v___x_766_; 
v___x_765_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__3, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__3_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__3);
v___x_766_ = lean_string_dec_eq(v_str_757_, v___x_765_);
if (v___x_766_ == 0)
{
return v___y_752_;
}
else
{
return v_suppressElabErrors_753_;
}
}
}
case 1:
{
lean_object* v_pre_767_; 
v_pre_767_ = lean_ctor_get(v_pre_756_, 0);
if (lean_obj_tag(v_pre_767_) == 0)
{
lean_object* v_str_768_; lean_object* v_str_769_; lean_object* v_str_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v_str_768_ = lean_ctor_get(v_x_754_, 1);
v_str_769_ = lean_ctor_get(v_pre_755_, 1);
v_str_770_ = lean_ctor_get(v_pre_756_, 1);
v___x_771_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__4, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__4_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__4);
v___x_772_ = lean_string_dec_eq(v_str_770_, v___x_771_);
if (v___x_772_ == 0)
{
return v___y_752_;
}
else
{
lean_object* v___x_773_; uint8_t v___x_774_; 
v___x_773_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__5, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__5_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__5);
v___x_774_ = lean_string_dec_eq(v_str_769_, v___x_773_);
if (v___x_774_ == 0)
{
return v___y_752_;
}
else
{
lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_775_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__6, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__6_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__6);
v___x_776_ = lean_string_dec_eq(v_str_768_, v___x_775_);
if (v___x_776_ == 0)
{
return v___y_752_;
}
else
{
return v_suppressElabErrors_753_;
}
}
}
}
else
{
return v___y_752_;
}
}
default: 
{
return v___y_752_;
}
}
}
case 0:
{
lean_object* v_str_777_; lean_object* v___x_778_; uint8_t v___x_779_; 
v_str_777_ = lean_ctor_get(v_x_754_, 1);
v___x_778_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__7, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__7_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__7);
v___x_779_ = lean_string_dec_eq(v_str_777_, v___x_778_);
if (v___x_779_ == 0)
{
return v___y_752_;
}
else
{
return v_suppressElabErrors_753_;
}
}
default: 
{
return v___y_752_;
}
}
}
else
{
return v___y_752_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___boxed(lean_object* v___y_780_, lean_object* v_suppressElabErrors_781_, lean_object* v_x_782_){
_start:
{
uint8_t v___y_79478__boxed_783_; uint8_t v_suppressElabErrors_boxed_784_; uint8_t v_res_785_; lean_object* v_r_786_; 
v___y_79478__boxed_783_ = lean_unbox(v___y_780_);
v_suppressElabErrors_boxed_784_ = lean_unbox(v_suppressElabErrors_781_);
v_res_785_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0(v___y_79478__boxed_783_, v_suppressElabErrors_boxed_784_, v_x_782_);
lean_dec(v_x_782_);
v_r_786_ = lean_box(v_res_785_);
return v_r_786_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_787_; 
v___x_787_ = lean_mk_string_unchecked("", 0, 0);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg(lean_object* v_ref_788_, lean_object* v_msgData_789_, uint8_t v_severity_790_, uint8_t v_isSilent_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v___y_798_; uint8_t v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; uint8_t v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_834_; uint8_t v___y_835_; lean_object* v___y_836_; uint8_t v___y_837_; lean_object* v___y_838_; uint8_t v___y_839_; lean_object* v___y_840_; lean_object* v___y_841_; lean_object* v___y_859_; lean_object* v___y_860_; uint8_t v___y_861_; lean_object* v___y_862_; uint8_t v___y_863_; uint8_t v___y_864_; lean_object* v___y_865_; lean_object* v___y_866_; lean_object* v___y_870_; uint8_t v___y_871_; lean_object* v___y_872_; uint8_t v___y_873_; lean_object* v___y_874_; lean_object* v___y_875_; uint8_t v___y_876_; uint8_t v___x_881_; lean_object* v___y_883_; uint8_t v___y_884_; lean_object* v___y_885_; lean_object* v___y_886_; lean_object* v___y_887_; uint8_t v___y_888_; uint8_t v___y_889_; uint8_t v___y_891_; uint8_t v___x_906_; 
v___x_881_ = 2;
v___x_906_ = l_Lean_instBEqMessageSeverity_beq(v_severity_790_, v___x_881_);
if (v___x_906_ == 0)
{
v___y_891_ = v___x_906_;
goto v___jp_890_;
}
else
{
uint8_t v___x_907_; 
lean_inc_ref(v_msgData_789_);
v___x_907_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_789_);
v___y_891_ = v___x_907_;
goto v___jp_890_;
}
v___jp_797_:
{
lean_object* v___x_807_; lean_object* v_currNamespace_808_; lean_object* v_openDecls_809_; lean_object* v_env_810_; lean_object* v_nextMacroScope_811_; lean_object* v_ngen_812_; lean_object* v_auxDeclNGen_813_; lean_object* v_traceState_814_; lean_object* v_cache_815_; lean_object* v_messages_816_; lean_object* v_infoState_817_; lean_object* v_snapshotTasks_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_832_; 
v___x_807_ = lean_st_ref_take(v___y_806_);
v_currNamespace_808_ = lean_ctor_get(v___y_805_, 6);
v_openDecls_809_ = lean_ctor_get(v___y_805_, 7);
v_env_810_ = lean_ctor_get(v___x_807_, 0);
v_nextMacroScope_811_ = lean_ctor_get(v___x_807_, 1);
v_ngen_812_ = lean_ctor_get(v___x_807_, 2);
v_auxDeclNGen_813_ = lean_ctor_get(v___x_807_, 3);
v_traceState_814_ = lean_ctor_get(v___x_807_, 4);
v_cache_815_ = lean_ctor_get(v___x_807_, 5);
v_messages_816_ = lean_ctor_get(v___x_807_, 6);
v_infoState_817_ = lean_ctor_get(v___x_807_, 7);
v_snapshotTasks_818_ = lean_ctor_get(v___x_807_, 8);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_807_);
if (v_isSharedCheck_832_ == 0)
{
v___x_820_ = v___x_807_;
v_isShared_821_ = v_isSharedCheck_832_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_snapshotTasks_818_);
lean_inc(v_infoState_817_);
lean_inc(v_messages_816_);
lean_inc(v_cache_815_);
lean_inc(v_traceState_814_);
lean_inc(v_auxDeclNGen_813_);
lean_inc(v_ngen_812_);
lean_inc(v_nextMacroScope_811_);
lean_inc(v_env_810_);
lean_dec(v___x_807_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_832_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
lean_inc(v_openDecls_809_);
lean_inc(v_currNamespace_808_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v_currNamespace_808_);
lean_ctor_set(v___x_822_, 1, v_openDecls_809_);
v___x_823_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
lean_ctor_set(v___x_823_, 1, v___y_802_);
lean_inc_ref(v___y_800_);
lean_inc_ref(v___y_804_);
v___x_824_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_824_, 0, v___y_804_);
lean_ctor_set(v___x_824_, 1, v___y_798_);
lean_ctor_set(v___x_824_, 2, v___y_801_);
lean_ctor_set(v___x_824_, 3, v___y_800_);
lean_ctor_set(v___x_824_, 4, v___x_823_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*5, v___y_803_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*5 + 1, v___y_799_);
lean_ctor_set_uint8(v___x_824_, sizeof(void*)*5 + 2, v_isSilent_791_);
v___x_825_ = l_Lean_MessageLog_add(v___x_824_, v_messages_816_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 6, v___x_825_);
v___x_827_ = v___x_820_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_env_810_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_nextMacroScope_811_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v_ngen_812_);
lean_ctor_set(v_reuseFailAlloc_831_, 3, v_auxDeclNGen_813_);
lean_ctor_set(v_reuseFailAlloc_831_, 4, v_traceState_814_);
lean_ctor_set(v_reuseFailAlloc_831_, 5, v_cache_815_);
lean_ctor_set(v_reuseFailAlloc_831_, 6, v___x_825_);
lean_ctor_set(v_reuseFailAlloc_831_, 7, v_infoState_817_);
lean_ctor_set(v_reuseFailAlloc_831_, 8, v_snapshotTasks_818_);
v___x_827_ = v_reuseFailAlloc_831_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v___x_828_ = lean_st_ref_set(v___y_806_, v___x_827_);
v___x_829_ = lean_box(0);
v___x_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
}
}
v___jp_833_:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_857_; 
v___x_842_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_789_);
v___x_843_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6_spec__10(v___x_842_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
v_a_844_ = lean_ctor_get(v___x_843_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_857_ == 0)
{
v___x_846_ = v___x_843_;
v_isShared_847_ = v_isSharedCheck_857_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_843_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_857_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
lean_inc_ref_n(v___y_836_, 2);
v___x_848_ = l_Lean_FileMap_toPosition(v___y_836_, v___y_838_);
lean_dec(v___y_838_);
v___x_849_ = l_Lean_FileMap_toPosition(v___y_836_, v___y_841_);
lean_dec(v___y_841_);
v___x_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_850_, 0, v___x_849_);
v___x_851_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___closed__0);
if (v___y_835_ == 0)
{
lean_del_object(v___x_846_);
lean_dec_ref(v___y_834_);
v___y_798_ = v___x_848_;
v___y_799_ = v___y_837_;
v___y_800_ = v___x_851_;
v___y_801_ = v___x_850_;
v___y_802_ = v_a_844_;
v___y_803_ = v___y_839_;
v___y_804_ = v___y_840_;
v___y_805_ = v___y_794_;
v___y_806_ = v___y_795_;
goto v___jp_797_;
}
else
{
uint8_t v___x_852_; 
lean_inc(v_a_844_);
v___x_852_ = l_Lean_MessageData_hasTag(v___y_834_, v_a_844_);
if (v___x_852_ == 0)
{
lean_object* v___x_853_; lean_object* v___x_855_; 
lean_dec_ref(v___x_850_);
lean_dec_ref(v___x_848_);
lean_dec(v_a_844_);
v___x_853_ = lean_box(0);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 0, v___x_853_);
v___x_855_ = v___x_846_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v___x_853_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
else
{
lean_del_object(v___x_846_);
v___y_798_ = v___x_848_;
v___y_799_ = v___y_837_;
v___y_800_ = v___x_851_;
v___y_801_ = v___x_850_;
v___y_802_ = v_a_844_;
v___y_803_ = v___y_839_;
v___y_804_ = v___y_840_;
v___y_805_ = v___y_794_;
v___y_806_ = v___y_795_;
goto v___jp_797_;
}
}
}
}
v___jp_858_:
{
lean_object* v___x_867_; 
v___x_867_ = l_Lean_Syntax_getTailPos_x3f(v___y_862_, v___y_864_);
lean_dec(v___y_862_);
if (lean_obj_tag(v___x_867_) == 0)
{
lean_inc(v___y_866_);
v___y_834_ = v___y_859_;
v___y_835_ = v___y_861_;
v___y_836_ = v___y_860_;
v___y_837_ = v___y_863_;
v___y_838_ = v___y_866_;
v___y_839_ = v___y_864_;
v___y_840_ = v___y_865_;
v___y_841_ = v___y_866_;
goto v___jp_833_;
}
else
{
lean_object* v_val_868_; 
v_val_868_ = lean_ctor_get(v___x_867_, 0);
lean_inc(v_val_868_);
lean_dec_ref(v___x_867_);
v___y_834_ = v___y_859_;
v___y_835_ = v___y_861_;
v___y_836_ = v___y_860_;
v___y_837_ = v___y_863_;
v___y_838_ = v___y_866_;
v___y_839_ = v___y_864_;
v___y_840_ = v___y_865_;
v___y_841_ = v_val_868_;
goto v___jp_833_;
}
}
v___jp_869_:
{
lean_object* v_ref_877_; lean_object* v___x_878_; 
v_ref_877_ = l_Lean_replaceRef(v_ref_788_, v___y_875_);
v___x_878_ = l_Lean_Syntax_getPos_x3f(v_ref_877_, v___y_873_);
if (lean_obj_tag(v___x_878_) == 0)
{
lean_object* v___x_879_; 
v___x_879_ = lean_unsigned_to_nat(0u);
v___y_859_ = v___y_870_;
v___y_860_ = v___y_872_;
v___y_861_ = v___y_871_;
v___y_862_ = v_ref_877_;
v___y_863_ = v___y_876_;
v___y_864_ = v___y_873_;
v___y_865_ = v___y_874_;
v___y_866_ = v___x_879_;
goto v___jp_858_;
}
else
{
lean_object* v_val_880_; 
v_val_880_ = lean_ctor_get(v___x_878_, 0);
lean_inc(v_val_880_);
lean_dec_ref(v___x_878_);
v___y_859_ = v___y_870_;
v___y_860_ = v___y_872_;
v___y_861_ = v___y_871_;
v___y_862_ = v_ref_877_;
v___y_863_ = v___y_876_;
v___y_864_ = v___y_873_;
v___y_865_ = v___y_874_;
v___y_866_ = v_val_880_;
goto v___jp_858_;
}
}
v___jp_882_:
{
if (v___y_889_ == 0)
{
v___y_870_ = v___y_885_;
v___y_871_ = v___y_884_;
v___y_872_ = v___y_883_;
v___y_873_ = v___y_888_;
v___y_874_ = v___y_886_;
v___y_875_ = v___y_887_;
v___y_876_ = v_severity_790_;
goto v___jp_869_;
}
else
{
v___y_870_ = v___y_885_;
v___y_871_ = v___y_884_;
v___y_872_ = v___y_883_;
v___y_873_ = v___y_888_;
v___y_874_ = v___y_886_;
v___y_875_ = v___y_887_;
v___y_876_ = v___x_881_;
goto v___jp_869_;
}
}
v___jp_890_:
{
if (v___y_891_ == 0)
{
lean_object* v_fileName_892_; lean_object* v_fileMap_893_; lean_object* v_options_894_; lean_object* v_ref_895_; uint8_t v_suppressElabErrors_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___f_899_; uint8_t v___x_900_; uint8_t v___x_901_; 
v_fileName_892_ = lean_ctor_get(v___y_794_, 0);
v_fileMap_893_ = lean_ctor_get(v___y_794_, 1);
v_options_894_ = lean_ctor_get(v___y_794_, 2);
v_ref_895_ = lean_ctor_get(v___y_794_, 5);
v_suppressElabErrors_896_ = lean_ctor_get_uint8(v___y_794_, sizeof(void*)*14 + 1);
v___x_897_ = lean_box(v___y_891_);
v___x_898_ = lean_box(v_suppressElabErrors_896_);
v___f_899_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_899_, 0, v___x_897_);
lean_closure_set(v___f_899_, 1, v___x_898_);
v___x_900_ = 1;
v___x_901_ = l_Lean_instBEqMessageSeverity_beq(v_severity_790_, v___x_900_);
if (v___x_901_ == 0)
{
v___y_883_ = v_fileMap_893_;
v___y_884_ = v_suppressElabErrors_896_;
v___y_885_ = v___f_899_;
v___y_886_ = v_fileName_892_;
v___y_887_ = v_ref_895_;
v___y_888_ = v___y_891_;
v___y_889_ = v___x_901_;
goto v___jp_882_;
}
else
{
lean_object* v___x_902_; uint8_t v___x_903_; 
v___x_902_ = l_Lean_warningAsError;
v___x_903_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__10(v_options_894_, v___x_902_);
v___y_883_ = v_fileMap_893_;
v___y_884_ = v_suppressElabErrors_896_;
v___y_885_ = v___f_899_;
v___y_886_ = v_fileName_892_;
v___y_887_ = v_ref_895_;
v___y_888_ = v___y_891_;
v___y_889_ = v___x_903_;
goto v___jp_882_;
}
}
else
{
lean_object* v___x_904_; lean_object* v___x_905_; 
lean_dec_ref(v_msgData_789_);
v___x_904_ = lean_box(0);
v___x_905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_905_, 0, v___x_904_);
return v___x_905_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___boxed(lean_object* v_ref_908_, lean_object* v_msgData_909_, lean_object* v_severity_910_, lean_object* v_isSilent_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_){
_start:
{
uint8_t v_severity_boxed_917_; uint8_t v_isSilent_boxed_918_; lean_object* v_res_919_; 
v_severity_boxed_917_ = lean_unbox(v_severity_910_);
v_isSilent_boxed_918_ = lean_unbox(v_isSilent_911_);
v_res_919_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg(v_ref_908_, v_msgData_909_, v_severity_boxed_917_, v_isSilent_boxed_918_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v_ref_908_);
return v_res_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7(lean_object* v_ref_920_, lean_object* v_msgData_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
uint8_t v___x_931_; uint8_t v___x_932_; lean_object* v___x_933_; 
v___x_931_ = 1;
v___x_932_ = 0;
v___x_933_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg(v_ref_920_, v_msgData_921_, v___x_931_, v___x_932_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7___boxed(lean_object* v_ref_934_, lean_object* v_msgData_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7(v_ref_934_, v_msgData_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_);
lean_dec(v___y_943_);
lean_dec_ref(v___y_942_);
lean_dec(v___y_941_);
lean_dec_ref(v___y_940_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
lean_dec(v_ref_934_);
return v_res_945_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__0(void){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = lean_mk_string_unchecked("This linter can be disabled with `set_option ", 45, 45);
return v___x_946_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__1(void){
_start:
{
lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_947_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__0, &l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__0_once, _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__0);
v___x_948_ = l_Lean_stringToMessageData(v___x_947_);
return v___x_948_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__2(void){
_start:
{
lean_object* v___x_949_; 
v___x_949_ = lean_mk_string_unchecked(" false`", 7, 7);
return v___x_949_;
}
}
static lean_object* _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__3(void){
_start:
{
lean_object* v___x_950_; lean_object* v___x_951_; 
v___x_950_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__2, &l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__2_once, _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__2);
v___x_951_ = l_Lean_stringToMessageData(v___x_950_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4(lean_object* v_linterOption_952_, lean_object* v_stx_953_, lean_object* v_msg_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_name_964_; lean_object* v___x_966_; uint8_t v_isShared_967_; uint8_t v_isSharedCheck_979_; 
v_name_964_ = lean_ctor_get(v_linterOption_952_, 0);
v_isSharedCheck_979_ = !lean_is_exclusive(v_linterOption_952_);
if (v_isSharedCheck_979_ == 0)
{
lean_object* v_unused_980_; 
v_unused_980_ = lean_ctor_get(v_linterOption_952_, 1);
lean_dec(v_unused_980_);
v___x_966_ = v_linterOption_952_;
v_isShared_967_ = v_isSharedCheck_979_;
goto v_resetjp_965_;
}
else
{
lean_inc(v_name_964_);
lean_dec(v_linterOption_952_);
v___x_966_ = lean_box(0);
v_isShared_967_ = v_isSharedCheck_979_;
goto v_resetjp_965_;
}
v_resetjp_965_:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_971_; 
v___x_968_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__1, &l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__1_once, _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__1);
lean_inc(v_name_964_);
v___x_969_ = l_Lean_MessageData_ofName(v_name_964_);
if (v_isShared_967_ == 0)
{
lean_ctor_set_tag(v___x_966_, 7);
lean_ctor_set(v___x_966_, 1, v___x_969_);
lean_ctor_set(v___x_966_, 0, v___x_968_);
v___x_971_ = v___x_966_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v___x_969_);
v___x_971_ = v_reuseFailAlloc_978_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v_disable_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_972_ = lean_obj_once(&l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__3, &l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__3_once, _init_l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___closed__3);
v___x_973_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_971_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
v_disable_974_ = l_Lean_MessageData_note(v___x_973_);
v___x_975_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_975_, 0, v_msg_954_);
lean_ctor_set(v___x_975_, 1, v_disable_974_);
v___x_976_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_976_, 0, v_name_964_);
lean_ctor_set(v___x_976_, 1, v___x_975_);
v___x_977_ = l_Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7(v_stx_953_, v___x_976_, v___y_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
return v___x_977_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4___boxed(lean_object* v_linterOption_981_, lean_object* v_stx_982_, lean_object* v_msg_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4(v_linterOption_981_, v_stx_982_, v_msg_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
lean_dec(v_stx_982_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___redArg(lean_object* v_o_994_, lean_object* v___y_995_){
_start:
{
lean_object* v___x_997_; lean_object* v_env_998_; lean_object* v___x_999_; lean_object* v_toEnvExtension_1000_; lean_object* v_asyncMode_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v_linterSets_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_997_ = lean_st_ref_get(v___y_995_);
v_env_998_ = lean_ctor_get(v___x_997_, 0);
lean_inc_ref(v_env_998_);
lean_dec(v___x_997_);
v___x_999_ = l_Lean_Linter_linterSetsExt;
v_toEnvExtension_1000_ = lean_ctor_get(v___x_999_, 0);
v_asyncMode_1001_ = lean_ctor_get(v_toEnvExtension_1000_, 2);
v___x_1002_ = lean_box(1);
v___x_1003_ = lean_box(0);
v_linterSets_1004_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1002_, v___x_999_, v_env_998_, v_asyncMode_1001_, v___x_1003_);
v___x_1005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1005_, 0, v_o_994_);
lean_ctor_set(v___x_1005_, 1, v_linterSets_1004_);
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v___x_1005_);
return v___x_1006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___redArg___boxed(lean_object* v_o_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v_res_1010_; 
v_res_1010_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___redArg(v_o_1007_, v___y_1008_);
lean_dec(v___y_1008_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3(lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v_options_1020_; lean_object* v___x_1021_; 
v_options_1020_ = lean_ctor_get(v___y_1017_, 2);
lean_inc_ref(v_options_1020_);
v___x_1021_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___redArg(v_options_1020_, v___y_1018_);
return v___x_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3___boxed(lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v_res_1031_; 
v_res_1031_ = l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3(v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
return v_res_1031_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg(lean_object* v_a_1032_, lean_object* v_x_1033_){
_start:
{
if (lean_obj_tag(v_x_1033_) == 0)
{
uint8_t v___x_1034_; 
v___x_1034_ = 0;
return v___x_1034_;
}
else
{
lean_object* v_key_1035_; lean_object* v_tail_1036_; uint8_t v___x_1037_; 
v_key_1035_ = lean_ctor_get(v_x_1033_, 0);
v_tail_1036_ = lean_ctor_get(v_x_1033_, 2);
v___x_1037_ = lean_expr_eqv(v_key_1035_, v_a_1032_);
if (v___x_1037_ == 0)
{
v_x_1033_ = v_tail_1036_;
goto _start;
}
else
{
return v___x_1037_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg___boxed(lean_object* v_a_1039_, lean_object* v_x_1040_){
_start:
{
uint8_t v_res_1041_; lean_object* v_r_1042_; 
v_res_1041_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg(v_a_1039_, v_x_1040_);
lean_dec(v_x_1040_);
lean_dec_ref(v_a_1039_);
v_r_1042_ = lean_box(v_res_1041_);
return v_r_1042_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19_spec__25___redArg(lean_object* v_x_1043_, lean_object* v_x_1044_){
_start:
{
if (lean_obj_tag(v_x_1044_) == 0)
{
return v_x_1043_;
}
else
{
lean_object* v_key_1045_; lean_object* v_value_1046_; lean_object* v_tail_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1070_; 
v_key_1045_ = lean_ctor_get(v_x_1044_, 0);
v_value_1046_ = lean_ctor_get(v_x_1044_, 1);
v_tail_1047_ = lean_ctor_get(v_x_1044_, 2);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_x_1044_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1049_ = v_x_1044_;
v_isShared_1050_ = v_isSharedCheck_1070_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_tail_1047_);
lean_inc(v_value_1046_);
lean_inc(v_key_1045_);
lean_dec(v_x_1044_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1070_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1051_; uint64_t v___x_1052_; uint64_t v___x_1053_; uint64_t v___x_1054_; uint64_t v_fold_1055_; uint64_t v___x_1056_; uint64_t v___x_1057_; uint64_t v___x_1058_; size_t v___x_1059_; size_t v___x_1060_; size_t v___x_1061_; size_t v___x_1062_; size_t v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1066_; 
v___x_1051_ = lean_array_get_size(v_x_1043_);
v___x_1052_ = l_Lean_Expr_hash(v_key_1045_);
v___x_1053_ = 32ULL;
v___x_1054_ = lean_uint64_shift_right(v___x_1052_, v___x_1053_);
v_fold_1055_ = lean_uint64_xor(v___x_1052_, v___x_1054_);
v___x_1056_ = 16ULL;
v___x_1057_ = lean_uint64_shift_right(v_fold_1055_, v___x_1056_);
v___x_1058_ = lean_uint64_xor(v_fold_1055_, v___x_1057_);
v___x_1059_ = lean_uint64_to_usize(v___x_1058_);
v___x_1060_ = lean_usize_of_nat(v___x_1051_);
v___x_1061_ = ((size_t)1ULL);
v___x_1062_ = lean_usize_sub(v___x_1060_, v___x_1061_);
v___x_1063_ = lean_usize_land(v___x_1059_, v___x_1062_);
v___x_1064_ = lean_array_uget_borrowed(v_x_1043_, v___x_1063_);
lean_inc(v___x_1064_);
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 2, v___x_1064_);
v___x_1066_ = v___x_1049_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_key_1045_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_value_1046_);
lean_ctor_set(v_reuseFailAlloc_1069_, 2, v___x_1064_);
v___x_1066_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
lean_object* v___x_1067_; 
v___x_1067_ = lean_array_uset(v_x_1043_, v___x_1063_, v___x_1066_);
v_x_1043_ = v___x_1067_;
v_x_1044_ = v_tail_1047_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19___redArg(lean_object* v_i_1071_, lean_object* v_source_1072_, lean_object* v_target_1073_){
_start:
{
lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1074_ = lean_array_get_size(v_source_1072_);
v___x_1075_ = lean_nat_dec_lt(v_i_1071_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_dec_ref(v_source_1072_);
lean_dec(v_i_1071_);
return v_target_1073_;
}
else
{
lean_object* v_es_1076_; lean_object* v___x_1077_; lean_object* v_source_1078_; lean_object* v_target_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_es_1076_ = lean_array_fget(v_source_1072_, v_i_1071_);
v___x_1077_ = lean_box(0);
v_source_1078_ = lean_array_fset(v_source_1072_, v_i_1071_, v___x_1077_);
v_target_1079_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19_spec__25___redArg(v_target_1073_, v_es_1076_);
v___x_1080_ = lean_unsigned_to_nat(1u);
v___x_1081_ = lean_nat_add(v_i_1071_, v___x_1080_);
lean_dec(v_i_1071_);
v_i_1071_ = v___x_1081_;
v_source_1072_ = v_source_1078_;
v_target_1073_ = v_target_1079_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16___redArg(lean_object* v_data_1083_){
_start:
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v_nbuckets_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1084_ = lean_array_get_size(v_data_1083_);
v___x_1085_ = lean_unsigned_to_nat(2u);
v_nbuckets_1086_ = lean_nat_mul(v___x_1084_, v___x_1085_);
v___x_1087_ = lean_unsigned_to_nat(0u);
v___x_1088_ = lean_box(0);
v___x_1089_ = lean_mk_array(v_nbuckets_1086_, v___x_1088_);
v___x_1090_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19___redArg(v___x_1087_, v_data_1083_, v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7___redArg(lean_object* v_m_1091_, lean_object* v_a_1092_, lean_object* v_b_1093_){
_start:
{
lean_object* v_size_1094_; lean_object* v_buckets_1095_; lean_object* v___x_1096_; uint64_t v___x_1097_; uint64_t v___x_1098_; uint64_t v___x_1099_; uint64_t v_fold_1100_; uint64_t v___x_1101_; uint64_t v___x_1102_; uint64_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; size_t v___x_1106_; size_t v___x_1107_; size_t v___x_1108_; lean_object* v_bkt_1109_; uint8_t v___x_1110_; 
v_size_1094_ = lean_ctor_get(v_m_1091_, 0);
v_buckets_1095_ = lean_ctor_get(v_m_1091_, 1);
v___x_1096_ = lean_array_get_size(v_buckets_1095_);
v___x_1097_ = l_Lean_Expr_hash(v_a_1092_);
v___x_1098_ = 32ULL;
v___x_1099_ = lean_uint64_shift_right(v___x_1097_, v___x_1098_);
v_fold_1100_ = lean_uint64_xor(v___x_1097_, v___x_1099_);
v___x_1101_ = 16ULL;
v___x_1102_ = lean_uint64_shift_right(v_fold_1100_, v___x_1101_);
v___x_1103_ = lean_uint64_xor(v_fold_1100_, v___x_1102_);
v___x_1104_ = lean_uint64_to_usize(v___x_1103_);
v___x_1105_ = lean_usize_of_nat(v___x_1096_);
v___x_1106_ = ((size_t)1ULL);
v___x_1107_ = lean_usize_sub(v___x_1105_, v___x_1106_);
v___x_1108_ = lean_usize_land(v___x_1104_, v___x_1107_);
v_bkt_1109_ = lean_array_uget_borrowed(v_buckets_1095_, v___x_1108_);
v___x_1110_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg(v_a_1092_, v_bkt_1109_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1131_; 
lean_inc_ref(v_buckets_1095_);
lean_inc(v_size_1094_);
v_isSharedCheck_1131_ = !lean_is_exclusive(v_m_1091_);
if (v_isSharedCheck_1131_ == 0)
{
lean_object* v_unused_1132_; lean_object* v_unused_1133_; 
v_unused_1132_ = lean_ctor_get(v_m_1091_, 1);
lean_dec(v_unused_1132_);
v_unused_1133_ = lean_ctor_get(v_m_1091_, 0);
lean_dec(v_unused_1133_);
v___x_1112_ = v_m_1091_;
v_isShared_1113_ = v_isSharedCheck_1131_;
goto v_resetjp_1111_;
}
else
{
lean_dec(v_m_1091_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1131_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1114_; lean_object* v_size_x27_1115_; lean_object* v___x_1116_; lean_object* v_buckets_x27_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; uint8_t v___x_1123_; 
v___x_1114_ = lean_unsigned_to_nat(1u);
v_size_x27_1115_ = lean_nat_add(v_size_1094_, v___x_1114_);
lean_dec(v_size_1094_);
lean_inc(v_bkt_1109_);
v___x_1116_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1116_, 0, v_a_1092_);
lean_ctor_set(v___x_1116_, 1, v_b_1093_);
lean_ctor_set(v___x_1116_, 2, v_bkt_1109_);
v_buckets_x27_1117_ = lean_array_uset(v_buckets_1095_, v___x_1108_, v___x_1116_);
v___x_1118_ = lean_unsigned_to_nat(4u);
v___x_1119_ = lean_nat_mul(v_size_x27_1115_, v___x_1118_);
v___x_1120_ = lean_unsigned_to_nat(3u);
v___x_1121_ = lean_nat_div(v___x_1119_, v___x_1120_);
lean_dec(v___x_1119_);
v___x_1122_ = lean_array_get_size(v_buckets_x27_1117_);
v___x_1123_ = lean_nat_dec_le(v___x_1121_, v___x_1122_);
lean_dec(v___x_1121_);
if (v___x_1123_ == 0)
{
lean_object* v_val_1124_; lean_object* v___x_1126_; 
v_val_1124_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16___redArg(v_buckets_x27_1117_);
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 1, v_val_1124_);
lean_ctor_set(v___x_1112_, 0, v_size_x27_1115_);
v___x_1126_ = v___x_1112_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_size_x27_1115_);
lean_ctor_set(v_reuseFailAlloc_1127_, 1, v_val_1124_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
else
{
lean_object* v___x_1129_; 
if (v_isShared_1113_ == 0)
{
lean_ctor_set(v___x_1112_, 1, v_buckets_x27_1117_);
lean_ctor_set(v___x_1112_, 0, v_size_x27_1115_);
v___x_1129_ = v___x_1112_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_size_x27_1115_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v_buckets_x27_1117_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
else
{
lean_dec(v_b_1093_);
lean_dec_ref(v_a_1092_);
return v_m_1091_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___redArg(lean_object* v_m_1134_, lean_object* v_a_1135_){
_start:
{
lean_object* v_buckets_1136_; lean_object* v___x_1137_; uint64_t v___x_1138_; uint64_t v___x_1139_; uint64_t v___x_1140_; uint64_t v_fold_1141_; uint64_t v___x_1142_; uint64_t v___x_1143_; uint64_t v___x_1144_; size_t v___x_1145_; size_t v___x_1146_; size_t v___x_1147_; size_t v___x_1148_; size_t v___x_1149_; lean_object* v___x_1150_; uint8_t v___x_1151_; 
v_buckets_1136_ = lean_ctor_get(v_m_1134_, 1);
v___x_1137_ = lean_array_get_size(v_buckets_1136_);
v___x_1138_ = l_Lean_Expr_hash(v_a_1135_);
v___x_1139_ = 32ULL;
v___x_1140_ = lean_uint64_shift_right(v___x_1138_, v___x_1139_);
v_fold_1141_ = lean_uint64_xor(v___x_1138_, v___x_1140_);
v___x_1142_ = 16ULL;
v___x_1143_ = lean_uint64_shift_right(v_fold_1141_, v___x_1142_);
v___x_1144_ = lean_uint64_xor(v_fold_1141_, v___x_1143_);
v___x_1145_ = lean_uint64_to_usize(v___x_1144_);
v___x_1146_ = lean_usize_of_nat(v___x_1137_);
v___x_1147_ = ((size_t)1ULL);
v___x_1148_ = lean_usize_sub(v___x_1146_, v___x_1147_);
v___x_1149_ = lean_usize_land(v___x_1145_, v___x_1148_);
v___x_1150_ = lean_array_uget_borrowed(v_buckets_1136_, v___x_1149_);
v___x_1151_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg(v_a_1135_, v___x_1150_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___redArg___boxed(lean_object* v_m_1152_, lean_object* v_a_1153_){
_start:
{
uint8_t v_res_1154_; lean_object* v_r_1155_; 
v_res_1154_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___redArg(v_m_1152_, v_a_1153_);
lean_dec_ref(v_a_1153_);
lean_dec_ref(v_m_1152_);
v_r_1155_ = lean_box(v_res_1154_);
return v_r_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___redArg(lean_object* v_mvarId_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v_mctx_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; 
v___x_1161_ = lean_st_ref_get(v___y_1159_);
lean_dec(v___x_1161_);
v___x_1162_ = lean_st_ref_get(v___y_1158_);
v_mctx_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc_ref(v_mctx_1163_);
lean_dec(v___x_1162_);
v___x_1164_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_1163_, v_mvarId_1156_);
lean_dec_ref(v_mctx_1163_);
v___x_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1165_, 0, v___x_1164_);
v___x_1166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1166_, 0, v___x_1165_);
lean_ctor_set(v___x_1166_, 1, v___y_1157_);
v___x_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1167_, 0, v___x_1166_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___redArg___boxed(lean_object* v_mvarId_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v_res_1173_; 
v_res_1173_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___redArg(v_mvarId_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec(v_mvarId_1168_);
return v_res_1173_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___redArg(lean_object* v_mvarId_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v_mctx_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; 
v___x_1179_ = lean_st_ref_get(v___y_1177_);
lean_dec(v___x_1179_);
v___x_1180_ = lean_st_ref_get(v___y_1176_);
v_mctx_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc_ref(v_mctx_1181_);
lean_dec(v___x_1180_);
v___x_1182_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_1181_, v_mvarId_1174_);
lean_dec_ref(v_mctx_1181_);
v___x_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1182_);
v___x_1184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v___y_1175_);
v___x_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
return v___x_1185_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___redArg___boxed(lean_object* v_mvarId_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
lean_object* v_res_1191_; 
v_res_1191_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___redArg(v_mvarId_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec(v_mvarId_1186_);
return v_res_1191_;
}
}
static lean_object* _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_box(0);
v___x_1193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1192_);
return v___x_1193_;
}
}
static lean_object* _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__1(void){
_start:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = lean_box(0);
v___x_1195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1195_, 0, v___x_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(lean_object* v_mvarId_1196_, lean_object* v_e_1197_, lean_object* v_a_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_d_1209_; lean_object* v_b_1210_; lean_object* v___y_1211_; uint8_t v___x_1217_; 
v___x_1217_ = l_Lean_Expr_hasExprMVar(v_e_1197_);
if (v___x_1217_ == 0)
{
lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
lean_dec_ref(v_e_1197_);
v___x_1218_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0);
v___x_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
lean_ctor_set(v___x_1219_, 1, v_a_1198_);
v___x_1220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
return v___x_1220_;
}
else
{
uint8_t v___x_1221_; 
v___x_1221_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___redArg(v_a_1198_, v_e_1197_);
if (v___x_1221_ == 0)
{
lean_object* v___x_1222_; lean_object* v___x_1223_; 
v___x_1222_ = lean_box(0);
lean_inc_ref(v_e_1197_);
v___x_1223_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7___redArg(v_a_1198_, v_e_1197_, v___x_1222_);
switch(lean_obj_tag(v_e_1197_))
{
case 11:
{
lean_object* v_struct_1224_; 
v_struct_1224_ = lean_ctor_get(v_e_1197_, 2);
lean_inc_ref(v_struct_1224_);
lean_dec_ref(v_e_1197_);
v_e_1197_ = v_struct_1224_;
v_a_1198_ = v___x_1223_;
goto _start;
}
case 7:
{
lean_object* v_binderType_1226_; lean_object* v_body_1227_; 
v_binderType_1226_ = lean_ctor_get(v_e_1197_, 1);
lean_inc_ref(v_binderType_1226_);
v_body_1227_ = lean_ctor_get(v_e_1197_, 2);
lean_inc_ref(v_body_1227_);
lean_dec_ref(v_e_1197_);
v_d_1209_ = v_binderType_1226_;
v_b_1210_ = v_body_1227_;
v___y_1211_ = v___x_1223_;
goto v___jp_1208_;
}
case 6:
{
lean_object* v_binderType_1228_; lean_object* v_body_1229_; 
v_binderType_1228_ = lean_ctor_get(v_e_1197_, 1);
lean_inc_ref(v_binderType_1228_);
v_body_1229_ = lean_ctor_get(v_e_1197_, 2);
lean_inc_ref(v_body_1229_);
lean_dec_ref(v_e_1197_);
v_d_1209_ = v_binderType_1228_;
v_b_1210_ = v_body_1229_;
v___y_1211_ = v___x_1223_;
goto v___jp_1208_;
}
case 8:
{
lean_object* v_type_1230_; lean_object* v_value_1231_; lean_object* v_body_1232_; lean_object* v___x_1233_; 
v_type_1230_ = lean_ctor_get(v_e_1197_, 1);
lean_inc_ref(v_type_1230_);
v_value_1231_ = lean_ctor_get(v_e_1197_, 2);
lean_inc_ref(v_value_1231_);
v_body_1232_ = lean_ctor_get(v_e_1197_, 3);
lean_inc_ref(v_body_1232_);
lean_dec_ref(v_e_1197_);
v___x_1233_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(v_mvarId_1196_, v_type_1230_, v___x_1223_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1233_) == 0)
{
lean_object* v_a_1234_; lean_object* v_fst_1235_; 
v_a_1234_ = lean_ctor_get(v___x_1233_, 0);
lean_inc(v_a_1234_);
v_fst_1235_ = lean_ctor_get(v_a_1234_, 0);
if (lean_obj_tag(v_fst_1235_) == 0)
{
lean_dec(v_a_1234_);
lean_dec_ref(v_body_1232_);
lean_dec_ref(v_value_1231_);
return v___x_1233_;
}
else
{
lean_object* v_snd_1236_; lean_object* v___x_1237_; 
lean_dec_ref(v___x_1233_);
v_snd_1236_ = lean_ctor_get(v_a_1234_, 1);
lean_inc(v_snd_1236_);
lean_dec(v_a_1234_);
v___x_1237_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(v_mvarId_1196_, v_value_1231_, v_snd_1236_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1237_) == 0)
{
lean_object* v_a_1238_; lean_object* v_fst_1239_; 
v_a_1238_ = lean_ctor_get(v___x_1237_, 0);
lean_inc(v_a_1238_);
v_fst_1239_ = lean_ctor_get(v_a_1238_, 0);
if (lean_obj_tag(v_fst_1239_) == 0)
{
lean_dec(v_a_1238_);
lean_dec_ref(v_body_1232_);
return v___x_1237_;
}
else
{
lean_object* v_snd_1240_; 
lean_dec_ref(v___x_1237_);
v_snd_1240_ = lean_ctor_get(v_a_1238_, 1);
lean_inc(v_snd_1240_);
lean_dec(v_a_1238_);
v_e_1197_ = v_body_1232_;
v_a_1198_ = v_snd_1240_;
goto _start;
}
}
else
{
lean_dec_ref(v_body_1232_);
return v___x_1237_;
}
}
}
else
{
lean_dec_ref(v_body_1232_);
lean_dec_ref(v_value_1231_);
return v___x_1233_;
}
}
case 10:
{
lean_object* v_expr_1242_; 
v_expr_1242_ = lean_ctor_get(v_e_1197_, 1);
lean_inc_ref(v_expr_1242_);
lean_dec_ref(v_e_1197_);
v_e_1197_ = v_expr_1242_;
v_a_1198_ = v___x_1223_;
goto _start;
}
case 5:
{
lean_object* v_fn_1244_; lean_object* v_arg_1245_; lean_object* v___x_1246_; 
v_fn_1244_ = lean_ctor_get(v_e_1197_, 0);
lean_inc_ref(v_fn_1244_);
v_arg_1245_ = lean_ctor_get(v_e_1197_, 1);
lean_inc_ref(v_arg_1245_);
lean_dec_ref(v_e_1197_);
v___x_1246_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(v_mvarId_1196_, v_fn_1244_, v___x_1223_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1246_) == 0)
{
lean_object* v_a_1247_; lean_object* v_fst_1248_; 
v_a_1247_ = lean_ctor_get(v___x_1246_, 0);
lean_inc(v_a_1247_);
v_fst_1248_ = lean_ctor_get(v_a_1247_, 0);
if (lean_obj_tag(v_fst_1248_) == 0)
{
lean_dec(v_a_1247_);
lean_dec_ref(v_arg_1245_);
return v___x_1246_;
}
else
{
lean_object* v_snd_1249_; 
lean_dec_ref(v___x_1246_);
v_snd_1249_ = lean_ctor_get(v_a_1247_, 1);
lean_inc(v_snd_1249_);
lean_dec(v_a_1247_);
v_e_1197_ = v_arg_1245_;
v_a_1198_ = v_snd_1249_;
goto _start;
}
}
else
{
lean_dec_ref(v_arg_1245_);
return v___x_1246_;
}
}
case 2:
{
lean_object* v_mvarId_1251_; lean_object* v___x_1252_; 
v_mvarId_1251_ = lean_ctor_get(v_e_1197_, 0);
lean_inc(v_mvarId_1251_);
lean_dec_ref(v_e_1197_);
v___x_1252_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8(v_mvarId_1196_, v_mvarId_1251_, v___x_1223_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
return v___x_1252_;
}
default: 
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
lean_dec_ref(v_e_1197_);
v___x_1253_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0);
v___x_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
lean_ctor_set(v___x_1254_, 1, v___x_1223_);
v___x_1255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
return v___x_1255_;
}
}
}
else
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
lean_dec_ref(v_e_1197_);
v___x_1256_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0);
v___x_1257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1256_);
lean_ctor_set(v___x_1257_, 1, v_a_1198_);
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1257_);
return v___x_1258_;
}
}
v___jp_1208_:
{
lean_object* v___x_1212_; 
v___x_1212_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(v_mvarId_1196_, v_d_1209_, v___y_1211_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v_fst_1214_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc(v_a_1213_);
v_fst_1214_ = lean_ctor_get(v_a_1213_, 0);
if (lean_obj_tag(v_fst_1214_) == 0)
{
lean_dec(v_a_1213_);
lean_dec_ref(v_b_1210_);
return v___x_1212_;
}
else
{
lean_object* v_snd_1215_; 
lean_dec_ref(v___x_1212_);
v_snd_1215_ = lean_ctor_get(v_a_1213_, 1);
lean_inc(v_snd_1215_);
lean_dec(v_a_1213_);
v_e_1197_ = v_b_1210_;
v_a_1198_ = v_snd_1215_;
goto _start;
}
}
else
{
lean_dec_ref(v_b_1210_);
return v___x_1212_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8(lean_object* v_mvarId_1259_, lean_object* v_mvarId_x27_1260_, lean_object* v_a_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_){
_start:
{
uint8_t v___x_1271_; 
v___x_1271_ = l_Lean_instBEqMVarId_beq(v_mvarId_1259_, v_mvarId_x27_1260_);
if (v___x_1271_ == 0)
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___redArg(v_mvarId_x27_1260_, v_a_1261_, v___y_1267_, v___y_1269_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1356_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1356_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1356_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v_fst_1277_; 
v_fst_1277_ = lean_ctor_get(v_a_1273_, 0);
lean_inc(v_fst_1277_);
if (lean_obj_tag(v_fst_1277_) == 0)
{
lean_object* v_snd_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1296_; 
lean_dec(v_mvarId_x27_1260_);
v_snd_1278_ = lean_ctor_get(v_a_1273_, 1);
v_isSharedCheck_1296_ = !lean_is_exclusive(v_a_1273_);
if (v_isSharedCheck_1296_ == 0)
{
lean_object* v_unused_1297_; 
v_unused_1297_ = lean_ctor_get(v_a_1273_, 0);
lean_dec(v_unused_1297_);
v___x_1280_ = v_a_1273_;
v_isShared_1281_ = v_isSharedCheck_1296_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_snd_1278_);
lean_dec(v_a_1273_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1296_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1295_; 
v_a_1282_ = lean_ctor_get(v_fst_1277_, 0);
v_isSharedCheck_1295_ = !lean_is_exclusive(v_fst_1277_);
if (v_isSharedCheck_1295_ == 0)
{
v___x_1284_ = v_fst_1277_;
v_isShared_1285_ = v_isSharedCheck_1295_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v_fst_1277_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1295_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
lean_object* v___x_1289_; 
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 0, v___x_1287_);
v___x_1289_ = v___x_1280_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1287_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v_snd_1278_);
v___x_1289_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
lean_object* v___x_1291_; 
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1289_);
v___x_1291_ = v___x_1275_;
goto v_reusejp_1290_;
}
else
{
lean_object* v_reuseFailAlloc_1292_; 
v_reuseFailAlloc_1292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1292_, 0, v___x_1289_);
v___x_1291_ = v_reuseFailAlloc_1292_;
goto v_reusejp_1290_;
}
v_reusejp_1290_:
{
return v___x_1291_;
}
}
}
}
}
}
else
{
lean_object* v_a_1298_; 
lean_del_object(v___x_1275_);
v_a_1298_ = lean_ctor_get(v_fst_1277_, 0);
lean_inc(v_a_1298_);
lean_dec_ref(v_fst_1277_);
if (lean_obj_tag(v_a_1298_) == 0)
{
lean_object* v_snd_1299_; lean_object* v___x_1300_; 
v_snd_1299_ = lean_ctor_get(v_a_1273_, 1);
lean_inc(v_snd_1299_);
lean_dec(v_a_1273_);
v___x_1300_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___redArg(v_mvarId_x27_1260_, v_snd_1299_, v___y_1267_, v___y_1269_);
lean_dec(v_mvarId_x27_1260_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1303_; uint8_t v_isShared_1304_; uint8_t v_isSharedCheck_1344_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1303_ = v___x_1300_;
v_isShared_1304_ = v_isSharedCheck_1344_;
goto v_resetjp_1302_;
}
else
{
lean_inc(v_a_1301_);
lean_dec(v___x_1300_);
v___x_1303_ = lean_box(0);
v_isShared_1304_ = v_isSharedCheck_1344_;
goto v_resetjp_1302_;
}
v_resetjp_1302_:
{
lean_object* v_fst_1305_; 
v_fst_1305_ = lean_ctor_get(v_a_1301_, 0);
lean_inc(v_fst_1305_);
if (lean_obj_tag(v_fst_1305_) == 0)
{
lean_object* v_snd_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1324_; 
v_snd_1306_ = lean_ctor_get(v_a_1301_, 1);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_a_1301_);
if (v_isSharedCheck_1324_ == 0)
{
lean_object* v_unused_1325_; 
v_unused_1325_ = lean_ctor_get(v_a_1301_, 0);
lean_dec(v_unused_1325_);
v___x_1308_ = v_a_1301_;
v_isShared_1309_ = v_isSharedCheck_1324_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_snd_1306_);
lean_dec(v_a_1301_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1324_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_a_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1323_; 
v_a_1310_ = lean_ctor_get(v_fst_1305_, 0);
v_isSharedCheck_1323_ = !lean_is_exclusive(v_fst_1305_);
if (v_isSharedCheck_1323_ == 0)
{
v___x_1312_ = v_fst_1305_;
v_isShared_1313_ = v_isSharedCheck_1323_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_a_1310_);
lean_dec(v_fst_1305_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1323_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v_a_1310_);
v___x_1315_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
lean_object* v___x_1317_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 0, v___x_1315_);
v___x_1317_ = v___x_1308_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1315_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v_snd_1306_);
v___x_1317_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1319_; 
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1317_);
v___x_1319_ = v___x_1303_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
}
else
{
lean_object* v_a_1326_; 
v_a_1326_ = lean_ctor_get(v_fst_1305_, 0);
lean_inc(v_a_1326_);
lean_dec_ref(v_fst_1305_);
if (lean_obj_tag(v_a_1326_) == 0)
{
lean_object* v_snd_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1338_; 
v_snd_1327_ = lean_ctor_get(v_a_1301_, 1);
v_isSharedCheck_1338_ = !lean_is_exclusive(v_a_1301_);
if (v_isSharedCheck_1338_ == 0)
{
lean_object* v_unused_1339_; 
v_unused_1339_ = lean_ctor_get(v_a_1301_, 0);
lean_dec(v_unused_1339_);
v___x_1329_ = v_a_1301_;
v_isShared_1330_ = v_isSharedCheck_1338_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_snd_1327_);
lean_dec(v_a_1301_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1338_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1331_; lean_object* v___x_1333_; 
v___x_1331_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__0);
if (v_isShared_1330_ == 0)
{
lean_ctor_set(v___x_1329_, 0, v___x_1331_);
v___x_1333_ = v___x_1329_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v___x_1331_);
lean_ctor_set(v_reuseFailAlloc_1337_, 1, v_snd_1327_);
v___x_1333_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
lean_object* v___x_1335_; 
if (v_isShared_1304_ == 0)
{
lean_ctor_set(v___x_1303_, 0, v___x_1333_);
v___x_1335_ = v___x_1303_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
return v___x_1335_;
}
}
}
}
else
{
lean_object* v_val_1340_; lean_object* v_snd_1341_; lean_object* v_mvarIdPending_1342_; 
lean_del_object(v___x_1303_);
v_val_1340_ = lean_ctor_get(v_a_1326_, 0);
lean_inc(v_val_1340_);
lean_dec_ref(v_a_1326_);
v_snd_1341_ = lean_ctor_get(v_a_1301_, 1);
lean_inc(v_snd_1341_);
lean_dec(v_a_1301_);
v_mvarIdPending_1342_ = lean_ctor_get(v_val_1340_, 1);
lean_inc(v_mvarIdPending_1342_);
lean_dec(v_val_1340_);
v_mvarId_x27_1260_ = v_mvarIdPending_1342_;
v_a_1261_ = v_snd_1341_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
v_a_1345_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1300_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1300_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
else
{
lean_object* v_snd_1353_; lean_object* v_val_1354_; lean_object* v___x_1355_; 
lean_dec(v_mvarId_x27_1260_);
v_snd_1353_ = lean_ctor_get(v_a_1273_, 1);
lean_inc(v_snd_1353_);
lean_dec(v_a_1273_);
v_val_1354_ = lean_ctor_get(v_a_1298_, 0);
lean_inc(v_val_1354_);
lean_dec_ref(v_a_1298_);
v___x_1355_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(v_mvarId_1259_, v_val_1354_, v_snd_1353_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
return v___x_1355_;
}
}
}
}
else
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1364_; 
lean_dec(v_mvarId_x27_1260_);
v_a_1357_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1359_ = v___x_1272_;
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1272_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1364_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1362_; 
if (v_isShared_1360_ == 0)
{
v___x_1362_ = v___x_1359_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_a_1357_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
else
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
lean_dec(v_mvarId_x27_1260_);
v___x_1365_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__1, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__1_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___closed__1);
v___x_1366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
lean_ctor_set(v___x_1366_, 1, v_a_1261_);
v___x_1367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1367_, 0, v___x_1366_);
return v___x_1367_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8___boxed(lean_object* v_mvarId_1368_, lean_object* v_mvarId_x27_1369_, lean_object* v_a_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
lean_object* v_res_1380_; 
v_res_1380_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8(v_mvarId_1368_, v_mvarId_x27_1369_, v_a_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v_mvarId_1368_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1___boxed(lean_object* v_mvarId_1381_, lean_object* v_e_1382_, lean_object* v_a_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v_res_1393_; 
v_res_1393_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(v_mvarId_1381_, v_e_1382_, v_a_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_);
lean_dec(v___y_1391_);
lean_dec_ref(v___y_1390_);
lean_dec(v___y_1389_);
lean_dec_ref(v___y_1388_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
lean_dec(v_mvarId_1381_);
return v_res_1393_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; 
v___x_1394_ = lean_box(0);
v___x_1395_ = lean_unsigned_to_nat(16u);
v___x_1396_ = lean_mk_array(v___x_1395_, v___x_1394_);
return v___x_1396_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1397_ = lean_obj_once(&l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__0, &l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__0_once, _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__0);
v___x_1398_ = lean_unsigned_to_nat(0u);
v___x_1399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
lean_ctor_set(v___x_1399_, 1, v___x_1397_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1(lean_object* v_mvarId_1400_, lean_object* v_e_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_){
_start:
{
uint8_t v___x_1411_; 
v___x_1411_ = l_Lean_Expr_hasExprMVar(v_e_1401_);
if (v___x_1411_ == 0)
{
uint8_t v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; 
lean_dec_ref(v_e_1401_);
v___x_1412_ = 1;
v___x_1413_ = lean_box(v___x_1412_);
v___x_1414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1414_, 0, v___x_1413_);
return v___x_1414_;
}
else
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = lean_obj_once(&l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__1, &l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__1_once, _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___closed__1);
v___x_1416_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1(v_mvarId_1400_, v_e_1401_, v___x_1415_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1431_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1419_ = v___x_1416_;
v_isShared_1420_ = v_isSharedCheck_1431_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1416_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1431_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v_fst_1421_; 
v_fst_1421_ = lean_ctor_get(v_a_1417_, 0);
lean_inc(v_fst_1421_);
lean_dec(v_a_1417_);
if (lean_obj_tag(v_fst_1421_) == 0)
{
uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1425_; 
lean_dec_ref(v_fst_1421_);
v___x_1422_ = 0;
v___x_1423_ = lean_box(v___x_1422_);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1423_);
v___x_1425_ = v___x_1419_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1429_; 
lean_dec_ref(v_fst_1421_);
v___x_1427_ = lean_box(v___x_1411_);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1427_);
v___x_1429_ = v___x_1419_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v___x_1427_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
else
{
lean_object* v_a_1432_; lean_object* v___x_1434_; uint8_t v_isShared_1435_; uint8_t v_isSharedCheck_1439_; 
v_a_1432_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1434_ = v___x_1416_;
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
else
{
lean_inc(v_a_1432_);
lean_dec(v___x_1416_);
v___x_1434_ = lean_box(0);
v_isShared_1435_ = v_isSharedCheck_1439_;
goto v_resetjp_1433_;
}
v_resetjp_1433_:
{
lean_object* v___x_1437_; 
if (v_isShared_1435_ == 0)
{
v___x_1437_ = v___x_1434_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v_a_1432_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1___boxed(lean_object* v_mvarId_1440_, lean_object* v_e_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v_res_1451_; 
v_res_1451_ = l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1(v_mvarId_1440_, v_e_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec(v___y_1445_);
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1443_);
lean_dec_ref(v___y_1442_);
lean_dec(v_mvarId_1440_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___redArg(lean_object* v_msg_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_ref_1458_; lean_object* v___x_1459_; lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1468_; 
v_ref_1458_ = lean_ctor_get(v___y_1455_, 5);
v___x_1459_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6_spec__10(v_msg_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1462_ = v___x_1459_;
v_isShared_1463_ = v_isSharedCheck_1468_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1459_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1468_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1464_; lean_object* v___x_1466_; 
lean_inc(v_ref_1458_);
v___x_1464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1464_, 0, v_ref_1458_);
lean_ctor_set(v___x_1464_, 1, v_a_1460_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set_tag(v___x_1462_, 1);
lean_ctor_set(v___x_1462_, 0, v___x_1464_);
v___x_1466_ = v___x_1462_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v___x_1464_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___redArg___boxed(lean_object* v_msg_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
lean_object* v_res_1475_; 
v_res_1475_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___redArg(v_msg_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
return v_res_1475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22_spec__25___redArg(lean_object* v_x_1476_, lean_object* v_x_1477_, lean_object* v_x_1478_, lean_object* v_x_1479_){
_start:
{
lean_object* v_ks_1480_; lean_object* v_vs_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1505_; 
v_ks_1480_ = lean_ctor_get(v_x_1476_, 0);
v_vs_1481_ = lean_ctor_get(v_x_1476_, 1);
v_isSharedCheck_1505_ = !lean_is_exclusive(v_x_1476_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1483_ = v_x_1476_;
v_isShared_1484_ = v_isSharedCheck_1505_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_vs_1481_);
lean_inc(v_ks_1480_);
lean_dec(v_x_1476_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1505_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; uint8_t v___x_1486_; 
v___x_1485_ = lean_array_get_size(v_ks_1480_);
v___x_1486_ = lean_nat_dec_lt(v_x_1477_, v___x_1485_);
if (v___x_1486_ == 0)
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1490_; 
lean_dec(v_x_1477_);
v___x_1487_ = lean_array_push(v_ks_1480_, v_x_1478_);
v___x_1488_ = lean_array_push(v_vs_1481_, v_x_1479_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 1, v___x_1488_);
lean_ctor_set(v___x_1483_, 0, v___x_1487_);
v___x_1490_ = v___x_1483_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v___x_1487_);
lean_ctor_set(v_reuseFailAlloc_1491_, 1, v___x_1488_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
else
{
lean_object* v_k_x27_1492_; uint8_t v___x_1493_; 
v_k_x27_1492_ = lean_array_fget_borrowed(v_ks_1480_, v_x_1477_);
v___x_1493_ = l_Lean_instBEqMVarId_beq(v_x_1478_, v_k_x27_1492_);
if (v___x_1493_ == 0)
{
lean_object* v___x_1495_; 
if (v_isShared_1484_ == 0)
{
v___x_1495_ = v___x_1483_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v_ks_1480_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v_vs_1481_);
v___x_1495_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1496_ = lean_unsigned_to_nat(1u);
v___x_1497_ = lean_nat_add(v_x_1477_, v___x_1496_);
lean_dec(v_x_1477_);
v_x_1476_ = v___x_1495_;
v_x_1477_ = v___x_1497_;
goto _start;
}
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1503_; 
v___x_1500_ = lean_array_fset(v_ks_1480_, v_x_1477_, v_x_1478_);
v___x_1501_ = lean_array_fset(v_vs_1481_, v_x_1477_, v_x_1479_);
lean_dec(v_x_1477_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 1, v___x_1501_);
lean_ctor_set(v___x_1483_, 0, v___x_1500_);
v___x_1503_ = v___x_1483_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v___x_1500_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v___x_1501_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22___redArg(lean_object* v_n_1506_, lean_object* v_k_1507_, lean_object* v_v_1508_){
_start:
{
lean_object* v___x_1509_; lean_object* v___x_1510_; 
v___x_1509_ = lean_unsigned_to_nat(0u);
v___x_1510_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22_spec__25___redArg(v_n_1506_, v___x_1509_, v_k_1507_, v_v_1508_);
return v___x_1510_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__0(void){
_start:
{
size_t v___x_1511_; size_t v___x_1512_; size_t v___x_1513_; 
v___x_1511_ = ((size_t)5ULL);
v___x_1512_ = ((size_t)1ULL);
v___x_1513_ = lean_usize_shift_left(v___x_1512_, v___x_1511_);
return v___x_1513_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__1(void){
_start:
{
size_t v___x_1514_; size_t v___x_1515_; size_t v___x_1516_; 
v___x_1514_ = ((size_t)1ULL);
v___x_1515_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__0);
v___x_1516_ = lean_usize_sub(v___x_1515_, v___x_1514_);
return v___x_1516_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_1517_; 
v___x_1517_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg(lean_object* v_x_1518_, size_t v_x_1519_, size_t v_x_1520_, lean_object* v_x_1521_, lean_object* v_x_1522_){
_start:
{
if (lean_obj_tag(v_x_1518_) == 0)
{
lean_object* v_es_1523_; size_t v___x_1524_; size_t v___x_1525_; size_t v___x_1526_; size_t v___x_1527_; lean_object* v_j_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
v_es_1523_ = lean_ctor_get(v_x_1518_, 0);
v___x_1524_ = ((size_t)5ULL);
v___x_1525_ = ((size_t)1ULL);
v___x_1526_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__1);
v___x_1527_ = lean_usize_land(v_x_1519_, v___x_1526_);
v_j_1528_ = lean_usize_to_nat(v___x_1527_);
v___x_1529_ = lean_array_get_size(v_es_1523_);
v___x_1530_ = lean_nat_dec_lt(v_j_1528_, v___x_1529_);
if (v___x_1530_ == 0)
{
lean_dec(v_j_1528_);
lean_dec(v_x_1522_);
lean_dec(v_x_1521_);
return v_x_1518_;
}
else
{
lean_object* v___x_1532_; uint8_t v_isShared_1533_; uint8_t v_isSharedCheck_1567_; 
lean_inc_ref(v_es_1523_);
v_isSharedCheck_1567_ = !lean_is_exclusive(v_x_1518_);
if (v_isSharedCheck_1567_ == 0)
{
lean_object* v_unused_1568_; 
v_unused_1568_ = lean_ctor_get(v_x_1518_, 0);
lean_dec(v_unused_1568_);
v___x_1532_ = v_x_1518_;
v_isShared_1533_ = v_isSharedCheck_1567_;
goto v_resetjp_1531_;
}
else
{
lean_dec(v_x_1518_);
v___x_1532_ = lean_box(0);
v_isShared_1533_ = v_isSharedCheck_1567_;
goto v_resetjp_1531_;
}
v_resetjp_1531_:
{
lean_object* v_v_1534_; lean_object* v___x_1535_; lean_object* v_xs_x27_1536_; lean_object* v___y_1538_; 
v_v_1534_ = lean_array_fget(v_es_1523_, v_j_1528_);
v___x_1535_ = lean_box(0);
v_xs_x27_1536_ = lean_array_fset(v_es_1523_, v_j_1528_, v___x_1535_);
switch(lean_obj_tag(v_v_1534_))
{
case 0:
{
lean_object* v_key_1543_; lean_object* v_val_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1554_; 
v_key_1543_ = lean_ctor_get(v_v_1534_, 0);
v_val_1544_ = lean_ctor_get(v_v_1534_, 1);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_v_1534_);
if (v_isSharedCheck_1554_ == 0)
{
v___x_1546_ = v_v_1534_;
v_isShared_1547_ = v_isSharedCheck_1554_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_val_1544_);
lean_inc(v_key_1543_);
lean_dec(v_v_1534_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1554_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
uint8_t v___x_1548_; 
v___x_1548_ = l_Lean_instBEqMVarId_beq(v_x_1521_, v_key_1543_);
if (v___x_1548_ == 0)
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
lean_del_object(v___x_1546_);
v___x_1549_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1543_, v_val_1544_, v_x_1521_, v_x_1522_);
v___x_1550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
v___y_1538_ = v___x_1550_;
goto v___jp_1537_;
}
else
{
lean_object* v___x_1552_; 
lean_dec(v_val_1544_);
lean_dec(v_key_1543_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set(v___x_1546_, 1, v_x_1522_);
lean_ctor_set(v___x_1546_, 0, v_x_1521_);
v___x_1552_ = v___x_1546_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_x_1521_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v_x_1522_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
v___y_1538_ = v___x_1552_;
goto v___jp_1537_;
}
}
}
}
case 1:
{
lean_object* v_node_1555_; lean_object* v___x_1557_; uint8_t v_isShared_1558_; uint8_t v_isSharedCheck_1565_; 
v_node_1555_ = lean_ctor_get(v_v_1534_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v_v_1534_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1557_ = v_v_1534_;
v_isShared_1558_ = v_isSharedCheck_1565_;
goto v_resetjp_1556_;
}
else
{
lean_inc(v_node_1555_);
lean_dec(v_v_1534_);
v___x_1557_ = lean_box(0);
v_isShared_1558_ = v_isSharedCheck_1565_;
goto v_resetjp_1556_;
}
v_resetjp_1556_:
{
size_t v___x_1559_; size_t v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1563_; 
v___x_1559_ = lean_usize_shift_right(v_x_1519_, v___x_1524_);
v___x_1560_ = lean_usize_add(v_x_1520_, v___x_1525_);
v___x_1561_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg(v_node_1555_, v___x_1559_, v___x_1560_, v_x_1521_, v_x_1522_);
if (v_isShared_1558_ == 0)
{
lean_ctor_set(v___x_1557_, 0, v___x_1561_);
v___x_1563_ = v___x_1557_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v___x_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
v___y_1538_ = v___x_1563_;
goto v___jp_1537_;
}
}
}
default: 
{
lean_object* v___x_1566_; 
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v_x_1521_);
lean_ctor_set(v___x_1566_, 1, v_x_1522_);
v___y_1538_ = v___x_1566_;
goto v___jp_1537_;
}
}
v___jp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1539_ = lean_array_fset(v_xs_x27_1536_, v_j_1528_, v___y_1538_);
lean_dec(v_j_1528_);
if (v_isShared_1533_ == 0)
{
lean_ctor_set(v___x_1532_, 0, v___x_1539_);
v___x_1541_ = v___x_1532_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
}
else
{
lean_object* v_ks_1569_; lean_object* v_vs_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1590_; 
v_ks_1569_ = lean_ctor_get(v_x_1518_, 0);
v_vs_1570_ = lean_ctor_get(v_x_1518_, 1);
v_isSharedCheck_1590_ = !lean_is_exclusive(v_x_1518_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1572_ = v_x_1518_;
v_isShared_1573_ = v_isSharedCheck_1590_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_vs_1570_);
lean_inc(v_ks_1569_);
lean_dec(v_x_1518_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1590_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_ks_1569_);
lean_ctor_set(v_reuseFailAlloc_1589_, 1, v_vs_1570_);
v___x_1575_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
lean_object* v_newNode_1576_; uint8_t v___y_1578_; size_t v___x_1584_; uint8_t v___x_1585_; 
v_newNode_1576_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22___redArg(v___x_1575_, v_x_1521_, v_x_1522_);
v___x_1584_ = ((size_t)7ULL);
v___x_1585_ = lean_usize_dec_le(v___x_1584_, v_x_1520_);
if (v___x_1585_ == 0)
{
lean_object* v___x_1586_; lean_object* v___x_1587_; uint8_t v___x_1588_; 
v___x_1586_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1576_);
v___x_1587_ = lean_unsigned_to_nat(4u);
v___x_1588_ = lean_nat_dec_lt(v___x_1586_, v___x_1587_);
lean_dec(v___x_1586_);
v___y_1578_ = v___x_1588_;
goto v___jp_1577_;
}
else
{
v___y_1578_ = v___x_1585_;
goto v___jp_1577_;
}
v___jp_1577_:
{
if (v___y_1578_ == 0)
{
lean_object* v_ks_1579_; lean_object* v_vs_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; 
v_ks_1579_ = lean_ctor_get(v_newNode_1576_, 0);
lean_inc_ref(v_ks_1579_);
v_vs_1580_ = lean_ctor_get(v_newNode_1576_, 1);
lean_inc_ref(v_vs_1580_);
lean_dec_ref(v_newNode_1576_);
v___x_1581_ = lean_unsigned_to_nat(0u);
v___x_1582_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___closed__2);
v___x_1583_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___redArg(v_x_1520_, v_ks_1579_, v_vs_1580_, v___x_1581_, v___x_1582_);
lean_dec_ref(v_vs_1580_);
lean_dec_ref(v_ks_1579_);
return v___x_1583_;
}
else
{
return v_newNode_1576_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___redArg(size_t v_depth_1591_, lean_object* v_keys_1592_, lean_object* v_vals_1593_, lean_object* v_i_1594_, lean_object* v_entries_1595_){
_start:
{
lean_object* v___x_1596_; uint8_t v___x_1597_; 
v___x_1596_ = lean_array_get_size(v_keys_1592_);
v___x_1597_ = lean_nat_dec_lt(v_i_1594_, v___x_1596_);
if (v___x_1597_ == 0)
{
lean_dec(v_i_1594_);
return v_entries_1595_;
}
else
{
lean_object* v_k_1598_; lean_object* v_v_1599_; uint64_t v___x_1600_; size_t v_h_1601_; size_t v___x_1602_; lean_object* v___x_1603_; size_t v___x_1604_; size_t v___x_1605_; size_t v___x_1606_; size_t v_h_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v_k_1598_ = lean_array_fget_borrowed(v_keys_1592_, v_i_1594_);
v_v_1599_ = lean_array_fget_borrowed(v_vals_1593_, v_i_1594_);
v___x_1600_ = l_Lean_instHashableMVarId_hash(v_k_1598_);
v_h_1601_ = lean_uint64_to_usize(v___x_1600_);
v___x_1602_ = ((size_t)5ULL);
v___x_1603_ = lean_unsigned_to_nat(1u);
v___x_1604_ = ((size_t)1ULL);
v___x_1605_ = lean_usize_sub(v_depth_1591_, v___x_1604_);
v___x_1606_ = lean_usize_mul(v___x_1602_, v___x_1605_);
v_h_1607_ = lean_usize_shift_right(v_h_1601_, v___x_1606_);
v___x_1608_ = lean_nat_add(v_i_1594_, v___x_1603_);
lean_dec(v_i_1594_);
lean_inc(v_v_1599_);
lean_inc(v_k_1598_);
v___x_1609_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg(v_entries_1595_, v_h_1607_, v_depth_1591_, v_k_1598_, v_v_1599_);
v_i_1594_ = v___x_1608_;
v_entries_1595_ = v___x_1609_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___redArg___boxed(lean_object* v_depth_1611_, lean_object* v_keys_1612_, lean_object* v_vals_1613_, lean_object* v_i_1614_, lean_object* v_entries_1615_){
_start:
{
size_t v_depth_boxed_1616_; lean_object* v_res_1617_; 
v_depth_boxed_1616_ = lean_unbox_usize(v_depth_1611_);
lean_dec(v_depth_1611_);
v_res_1617_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___redArg(v_depth_boxed_1616_, v_keys_1612_, v_vals_1613_, v_i_1614_, v_entries_1615_);
lean_dec_ref(v_vals_1613_);
lean_dec_ref(v_keys_1612_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg___boxed(lean_object* v_x_1618_, lean_object* v_x_1619_, lean_object* v_x_1620_, lean_object* v_x_1621_, lean_object* v_x_1622_){
_start:
{
size_t v_x_80776__boxed_1623_; size_t v_x_80777__boxed_1624_; lean_object* v_res_1625_; 
v_x_80776__boxed_1623_ = lean_unbox_usize(v_x_1619_);
lean_dec(v_x_1619_);
v_x_80777__boxed_1624_ = lean_unbox_usize(v_x_1620_);
lean_dec(v_x_1620_);
v_res_1625_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg(v_x_1618_, v_x_80776__boxed_1623_, v_x_80777__boxed_1624_, v_x_1621_, v_x_1622_);
return v_res_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3___redArg(lean_object* v_x_1626_, lean_object* v_x_1627_, lean_object* v_x_1628_){
_start:
{
uint64_t v___x_1629_; size_t v___x_1630_; size_t v___x_1631_; lean_object* v___x_1632_; 
v___x_1629_ = l_Lean_instHashableMVarId_hash(v_x_1627_);
v___x_1630_ = lean_uint64_to_usize(v___x_1629_);
v___x_1631_ = ((size_t)1ULL);
v___x_1632_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg(v_x_1626_, v___x_1630_, v___x_1631_, v_x_1627_, v_x_1628_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___redArg(lean_object* v_mvarId_1633_, lean_object* v_val_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v_mctx_1640_; lean_object* v_cache_1641_; lean_object* v_zetaDeltaFVarIds_1642_; lean_object* v_postponed_1643_; lean_object* v_diag_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1672_; 
v___x_1638_ = lean_st_ref_get(v___y_1636_);
lean_dec(v___x_1638_);
v___x_1639_ = lean_st_ref_take(v___y_1635_);
v_mctx_1640_ = lean_ctor_get(v___x_1639_, 0);
v_cache_1641_ = lean_ctor_get(v___x_1639_, 1);
v_zetaDeltaFVarIds_1642_ = lean_ctor_get(v___x_1639_, 2);
v_postponed_1643_ = lean_ctor_get(v___x_1639_, 3);
v_diag_1644_ = lean_ctor_get(v___x_1639_, 4);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1639_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1646_ = v___x_1639_;
v_isShared_1647_ = v_isSharedCheck_1672_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_diag_1644_);
lean_inc(v_postponed_1643_);
lean_inc(v_zetaDeltaFVarIds_1642_);
lean_inc(v_cache_1641_);
lean_inc(v_mctx_1640_);
lean_dec(v___x_1639_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1672_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v_depth_1648_; lean_object* v_levelAssignDepth_1649_; lean_object* v_lmvarCounter_1650_; lean_object* v_mvarCounter_1651_; lean_object* v_lDecls_1652_; lean_object* v_decls_1653_; lean_object* v_userNames_1654_; lean_object* v_lAssignment_1655_; lean_object* v_eAssignment_1656_; lean_object* v_dAssignment_1657_; lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1671_; 
v_depth_1648_ = lean_ctor_get(v_mctx_1640_, 0);
v_levelAssignDepth_1649_ = lean_ctor_get(v_mctx_1640_, 1);
v_lmvarCounter_1650_ = lean_ctor_get(v_mctx_1640_, 2);
v_mvarCounter_1651_ = lean_ctor_get(v_mctx_1640_, 3);
v_lDecls_1652_ = lean_ctor_get(v_mctx_1640_, 4);
v_decls_1653_ = lean_ctor_get(v_mctx_1640_, 5);
v_userNames_1654_ = lean_ctor_get(v_mctx_1640_, 6);
v_lAssignment_1655_ = lean_ctor_get(v_mctx_1640_, 7);
v_eAssignment_1656_ = lean_ctor_get(v_mctx_1640_, 8);
v_dAssignment_1657_ = lean_ctor_get(v_mctx_1640_, 9);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_mctx_1640_);
if (v_isSharedCheck_1671_ == 0)
{
v___x_1659_ = v_mctx_1640_;
v_isShared_1660_ = v_isSharedCheck_1671_;
goto v_resetjp_1658_;
}
else
{
lean_inc(v_dAssignment_1657_);
lean_inc(v_eAssignment_1656_);
lean_inc(v_lAssignment_1655_);
lean_inc(v_userNames_1654_);
lean_inc(v_decls_1653_);
lean_inc(v_lDecls_1652_);
lean_inc(v_mvarCounter_1651_);
lean_inc(v_lmvarCounter_1650_);
lean_inc(v_levelAssignDepth_1649_);
lean_inc(v_depth_1648_);
lean_dec(v_mctx_1640_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1671_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; lean_object* v___x_1663_; 
v___x_1661_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3___redArg(v_eAssignment_1656_, v_mvarId_1633_, v_val_1634_);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 8, v___x_1661_);
v___x_1663_ = v___x_1659_;
goto v_reusejp_1662_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v_depth_1648_);
lean_ctor_set(v_reuseFailAlloc_1670_, 1, v_levelAssignDepth_1649_);
lean_ctor_set(v_reuseFailAlloc_1670_, 2, v_lmvarCounter_1650_);
lean_ctor_set(v_reuseFailAlloc_1670_, 3, v_mvarCounter_1651_);
lean_ctor_set(v_reuseFailAlloc_1670_, 4, v_lDecls_1652_);
lean_ctor_set(v_reuseFailAlloc_1670_, 5, v_decls_1653_);
lean_ctor_set(v_reuseFailAlloc_1670_, 6, v_userNames_1654_);
lean_ctor_set(v_reuseFailAlloc_1670_, 7, v_lAssignment_1655_);
lean_ctor_set(v_reuseFailAlloc_1670_, 8, v___x_1661_);
lean_ctor_set(v_reuseFailAlloc_1670_, 9, v_dAssignment_1657_);
v___x_1663_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1662_;
}
v_reusejp_1662_:
{
lean_object* v___x_1665_; 
if (v_isShared_1647_ == 0)
{
lean_ctor_set(v___x_1646_, 0, v___x_1663_);
v___x_1665_ = v___x_1646_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v___x_1663_);
lean_ctor_set(v_reuseFailAlloc_1669_, 1, v_cache_1641_);
lean_ctor_set(v_reuseFailAlloc_1669_, 2, v_zetaDeltaFVarIds_1642_);
lean_ctor_set(v_reuseFailAlloc_1669_, 3, v_postponed_1643_);
lean_ctor_set(v_reuseFailAlloc_1669_, 4, v_diag_1644_);
v___x_1665_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1666_ = lean_st_ref_set(v___y_1635_, v___x_1665_);
v___x_1667_ = lean_box(0);
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
return v___x_1668_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___redArg___boxed(lean_object* v_mvarId_1673_, lean_object* v_val_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___redArg(v_mvarId_1673_, v_val_1674_, v___y_1675_, v___y_1676_);
lean_dec(v___y_1676_);
lean_dec(v___y_1675_);
return v_res_1678_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__0(void){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_1679_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__1(void){
_start:
{
lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1680_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__0);
v___x_1681_ = l_Lean_Name_mkStr1(v___x_1680_);
return v___x_1681_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__2(void){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = lean_mk_string_unchecked("Try `simp at ", 13, 13);
return v___x_1682_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__3(void){
_start:
{
lean_object* v___x_1683_; lean_object* v___x_1684_; 
v___x_1683_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__2, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__2_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__2);
v___x_1684_ = l_Lean_stringToMessageData(v___x_1683_);
return v___x_1684_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__4(void){
_start:
{
lean_object* v___x_1685_; 
v___x_1685_ = lean_mk_string_unchecked("` instead of `simpa using ", 26, 26);
return v___x_1685_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__5(void){
_start:
{
lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1686_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__4, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__4_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__4);
v___x_1687_ = l_Lean_stringToMessageData(v___x_1686_);
return v___x_1687_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__6(void){
_start:
{
lean_object* v___x_1688_; 
v___x_1688_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_1688_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__7(void){
_start:
{
lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1689_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__6, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__6_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__6);
v___x_1690_ = l_Lean_stringToMessageData(v___x_1689_);
return v___x_1690_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__8(void){
_start:
{
lean_object* v___x_1691_; 
v___x_1691_ = lean_mk_string_unchecked("Occurs check failed: Expression", 31, 31);
return v___x_1691_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__9(void){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1692_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__8, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__8_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__8);
v___x_1693_ = l_Lean_stringToMessageData(v___x_1692_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__10(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_mk_string_unchecked("\ncontains the goal ", 19, 19);
return v___x_1694_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__11(void){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1695_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__10, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__10_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__10);
v___x_1696_ = l_Lean_stringToMessageData(v___x_1695_);
return v___x_1696_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__12(void){
_start:
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_mk_string_unchecked("this", 4, 4);
return v___x_1697_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__13(void){
_start:
{
lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1698_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__12, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__12_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__12);
v___x_1699_ = l_Lean_Name_mkStr1(v___x_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4(lean_object* v_usingArg_1700_, lean_object* v_snd_1701_, uint8_t v___x_1702_, uint8_t v___x_1703_, uint8_t v___x_1704_, lean_object* v___x_1705_, lean_object* v___x_1706_, lean_object* v___x_1707_, lean_object* v_simprocs_1708_, lean_object* v_discharge_x3f_1709_, lean_object* v_snd_1710_, lean_object* v___x_1711_, lean_object* v___f_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
lean_object* v___y_1723_; lean_object* v___y_1724_; lean_object* v___y_1725_; lean_object* v___y_1726_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v___y_1739_; lean_object* v___y_1740_; lean_object* v___y_1741_; lean_object* v___y_1742_; lean_object* v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___y_1789_; lean_object* v___y_1790_; lean_object* v___y_1791_; lean_object* v___y_1792_; lean_object* v___y_1793_; lean_object* v___y_1794_; lean_object* v___y_1795_; lean_object* v___y_1796_; lean_object* v___y_1797_; lean_object* v___y_1798_; lean_object* v___y_1799_; 
if (lean_obj_tag(v_usingArg_1700_) == 1)
{
lean_object* v_val_1903_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___x_1956_; lean_object* v_infoState_1957_; uint8_t v_enabled_1958_; 
v_val_1903_ = lean_ctor_get(v_usingArg_1700_, 0);
lean_inc(v_val_1903_);
lean_dec_ref(v_usingArg_1700_);
v___x_1956_ = lean_st_ref_get(v___y_1720_);
v_infoState_1957_ = lean_ctor_get(v___x_1956_, 7);
lean_inc_ref(v_infoState_1957_);
lean_dec(v___x_1956_);
v_enabled_1958_ = lean_ctor_get_uint8(v_infoState_1957_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1957_);
if (v_enabled_1958_ == 0)
{
lean_dec_ref(v___f_1712_);
v___y_1905_ = v___y_1713_;
v___y_1906_ = v___y_1714_;
v___y_1907_ = v___y_1715_;
v___y_1908_ = v___y_1716_;
v___y_1909_ = v___y_1717_;
v___y_1910_ = v___y_1718_;
v___y_1911_ = v___y_1719_;
v___y_1912_ = v___y_1720_;
goto v___jp_1904_;
}
else
{
lean_object* v___x_1959_; lean_object* v_a_1960_; lean_object* v___f_1961_; lean_object* v___x_1962_; 
v___x_1959_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__7___redArg(v___y_1720_);
v_a_1960_ = lean_ctor_get(v___x_1959_, 0);
lean_inc(v_a_1960_);
lean_dec_ref(v___x_1959_);
v___f_1961_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__3___boxed), 10, 1);
lean_closure_set(v___f_1961_, 0, v_a_1960_);
v___x_1962_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg(v___f_1961_, v___f_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_1962_) == 0)
{
lean_dec_ref(v___x_1962_);
v___y_1905_ = v___y_1713_;
v___y_1906_ = v___y_1714_;
v___y_1907_ = v___y_1715_;
v___y_1908_ = v___y_1716_;
v___y_1909_ = v___y_1717_;
v___y_1910_ = v___y_1718_;
v___y_1911_ = v___y_1719_;
v___y_1912_ = v___y_1720_;
goto v___jp_1904_;
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_dec(v_val_1903_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1963_ = lean_ctor_get(v___x_1962_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1962_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1962_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1962_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
v___jp_1904_:
{
lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1913_ = lean_st_ref_get(v___y_1912_);
lean_dec(v___x_1913_);
v___x_1914_ = lean_st_ref_get(v___y_1910_);
v___x_1915_ = lean_box(0);
v___x_1916_ = l_Lean_Elab_Tactic_elabTerm(v_val_1903_, v___x_1915_, v___x_1702_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
if (lean_obj_tag(v___x_1916_) == 0)
{
lean_object* v_a_1917_; lean_object* v___x_1918_; 
v_a_1917_ = lean_ctor_get(v___x_1916_, 0);
lean_inc_n(v_a_1917_, 2);
lean_dec_ref(v___x_1916_);
v___x_1918_ = l_Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1(v_snd_1701_, v_a_1917_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
if (lean_obj_tag(v___x_1918_) == 0)
{
lean_object* v_mctx_1919_; lean_object* v_a_1920_; uint8_t v___x_1921_; 
v_mctx_1919_ = lean_ctor_get(v___x_1914_, 0);
lean_inc_ref(v_mctx_1919_);
lean_dec(v___x_1914_);
v_a_1920_ = lean_ctor_get(v___x_1918_, 0);
lean_inc(v_a_1920_);
lean_dec_ref(v___x_1918_);
v___x_1921_ = lean_unbox(v_a_1920_);
lean_dec(v_a_1920_);
if (v___x_1921_ == 0)
{
lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_dec_ref(v_mctx_1919_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
v___x_1922_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__9, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__9_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__9);
v___x_1923_ = l_Lean_indentExpr(v_a_1917_);
v___x_1924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___x_1922_);
lean_ctor_set(v___x_1924_, 1, v___x_1923_);
v___x_1925_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__11, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__11_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__11);
v___x_1926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1924_);
lean_ctor_set(v___x_1926_, 1, v___x_1925_);
v___x_1927_ = l_Lean_Expr_mvar___override(v_snd_1701_);
v___x_1928_ = l_Lean_MessageData_ofExpr(v___x_1927_);
v___x_1929_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1926_);
lean_ctor_set(v___x_1929_, 1, v___x_1928_);
v___x_1930_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___redArg(v___x_1929_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1930_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1930_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
else
{
lean_object* v_mvarCounter_1939_; 
v_mvarCounter_1939_ = lean_ctor_get(v_mctx_1919_, 3);
lean_inc(v_mvarCounter_1939_);
lean_dec_ref(v_mctx_1919_);
lean_inc(v_a_1917_);
v___y_1787_ = v_mvarCounter_1939_;
v___y_1788_ = v___x_1915_;
v___y_1789_ = v_a_1917_;
v___y_1790_ = v___x_1915_;
v___y_1791_ = v_a_1917_;
v___y_1792_ = v___y_1905_;
v___y_1793_ = v___y_1906_;
v___y_1794_ = v___y_1907_;
v___y_1795_ = v___y_1908_;
v___y_1796_ = v___y_1909_;
v___y_1797_ = v___y_1910_;
v___y_1798_ = v___y_1911_;
v___y_1799_ = v___y_1912_;
goto v___jp_1786_;
}
}
else
{
lean_object* v_a_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1947_; 
lean_dec(v_a_1917_);
lean_dec(v___x_1914_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1940_ = lean_ctor_get(v___x_1918_, 0);
v_isSharedCheck_1947_ = !lean_is_exclusive(v___x_1918_);
if (v_isSharedCheck_1947_ == 0)
{
v___x_1942_ = v___x_1918_;
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_a_1940_);
lean_dec(v___x_1918_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1947_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1945_; 
if (v_isShared_1943_ == 0)
{
v___x_1945_ = v___x_1942_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v_a_1940_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
return v___x_1945_;
}
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec(v___x_1914_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1948_ = lean_ctor_get(v___x_1916_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___x_1916_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___x_1916_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1916_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1953_; 
if (v_isShared_1951_ == 0)
{
v___x_1953_ = v___x_1950_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_a_1948_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
}
}
}
else
{
lean_object* v_lctx_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
lean_dec_ref(v___f_1712_);
lean_dec_ref(v___x_1705_);
lean_dec(v_usingArg_1700_);
v_lctx_1971_ = lean_ctor_get(v___y_1717_, 2);
v___x_1972_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__13, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__13_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__13);
v___x_1973_ = l_Lean_LocalContext_findFromUserName_x3f(v_lctx_1971_, v___x_1972_);
if (lean_obj_tag(v___x_1973_) == 1)
{
lean_object* v_val_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v_val_1974_ = lean_ctor_get(v___x_1973_, 0);
lean_inc(v_val_1974_);
lean_dec_ref(v___x_1973_);
v___x_1975_ = l_Lean_LocalDecl_fvarId(v_val_1974_);
lean_dec(v_val_1974_);
v___x_1976_ = lean_mk_empty_array_with_capacity(v___x_1706_);
v___x_1977_ = lean_array_push(v___x_1976_, v___x_1975_);
lean_inc_ref(v_snd_1710_);
v___x_1978_ = l_Lean_Meta_simpGoal(v_snd_1701_, v___x_1707_, v_simprocs_1708_, v_discharge_x3f_1709_, v___x_1703_, v___x_1977_, v_snd_1710_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_2007_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_2007_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_2007_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v_fst_1983_; 
v_fst_1983_ = lean_ctor_get(v_a_1979_, 0);
if (lean_obj_tag(v_fst_1983_) == 1)
{
lean_object* v_val_1984_; lean_object* v_snd_1985_; lean_object* v_snd_1986_; lean_object* v___x_1987_; 
lean_del_object(v___x_1981_);
lean_dec_ref(v_snd_1710_);
v_val_1984_ = lean_ctor_get(v_fst_1983_, 0);
lean_inc(v_val_1984_);
v_snd_1985_ = lean_ctor_get(v_a_1979_, 1);
lean_inc(v_snd_1985_);
lean_dec(v_a_1979_);
v_snd_1986_ = lean_ctor_get(v_val_1984_, 1);
lean_inc(v_snd_1986_);
lean_dec(v_val_1984_);
v___x_1987_ = l_Lean_MVarId_assumption(v_snd_1986_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_1987_) == 0)
{
lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1994_; 
v_isSharedCheck_1994_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_1994_ == 0)
{
lean_object* v_unused_1995_; 
v_unused_1995_ = lean_ctor_get(v___x_1987_, 0);
lean_dec(v_unused_1995_);
v___x_1989_ = v___x_1987_;
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
else
{
lean_dec(v___x_1987_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1994_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1992_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 0, v_snd_1985_);
v___x_1992_ = v___x_1989_;
goto v_reusejp_1991_;
}
else
{
lean_object* v_reuseFailAlloc_1993_; 
v_reuseFailAlloc_1993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1993_, 0, v_snd_1985_);
v___x_1992_ = v_reuseFailAlloc_1993_;
goto v_reusejp_1991_;
}
v_reusejp_1991_:
{
return v___x_1992_;
}
}
}
else
{
lean_object* v_a_1996_; lean_object* v___x_1998_; uint8_t v_isShared_1999_; uint8_t v_isSharedCheck_2003_; 
lean_dec(v_snd_1985_);
v_a_1996_ = lean_ctor_get(v___x_1987_, 0);
v_isSharedCheck_2003_ = !lean_is_exclusive(v___x_1987_);
if (v_isSharedCheck_2003_ == 0)
{
v___x_1998_ = v___x_1987_;
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
else
{
lean_inc(v_a_1996_);
lean_dec(v___x_1987_);
v___x_1998_ = lean_box(0);
v_isShared_1999_ = v_isSharedCheck_2003_;
goto v_resetjp_1997_;
}
v_resetjp_1997_:
{
lean_object* v___x_2001_; 
if (v_isShared_1999_ == 0)
{
v___x_2001_ = v___x_1998_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v_a_1996_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
else
{
lean_object* v___x_2005_; 
lean_dec(v_a_1979_);
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 0, v_snd_1710_);
v___x_2005_ = v___x_1981_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_snd_1710_);
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
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec_ref(v_snd_1710_);
v_a_2008_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1978_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1978_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
else
{
lean_object* v___x_2016_; 
lean_dec(v___x_1973_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
v___x_2016_ = l_Lean_MVarId_assumption(v_snd_1701_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
if (lean_obj_tag(v___x_2016_) == 0)
{
lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2023_ == 0)
{
lean_object* v_unused_2024_; 
v_unused_2024_ = lean_ctor_get(v___x_2016_, 0);
lean_dec(v_unused_2024_);
v___x_2018_ = v___x_2016_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_dec(v___x_2016_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
lean_ctor_set(v___x_2018_, 0, v_snd_1710_);
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_snd_1710_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
else
{
lean_object* v_a_2025_; lean_object* v___x_2027_; uint8_t v_isShared_2028_; uint8_t v_isSharedCheck_2032_; 
lean_dec_ref(v_snd_1710_);
v_a_2025_ = lean_ctor_get(v___x_2016_, 0);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_2016_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2027_ = v___x_2016_;
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
else
{
lean_inc(v_a_2025_);
lean_dec(v___x_2016_);
v___x_2027_ = lean_box(0);
v_isShared_2028_ = v_isSharedCheck_2032_;
goto v_resetjp_2026_;
}
v_resetjp_2026_:
{
lean_object* v___x_2030_; 
if (v_isShared_2028_ == 0)
{
v___x_2030_ = v___x_2027_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v_a_2025_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
return v___x_2030_;
}
}
}
}
}
v___jp_1722_:
{
lean_object* v___x_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1734_; 
v___x_1727_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___redArg(v_snd_1701_, v___y_1724_, v___y_1725_, v___y_1726_);
v_isSharedCheck_1734_ = !lean_is_exclusive(v___x_1727_);
if (v_isSharedCheck_1734_ == 0)
{
lean_object* v_unused_1735_; 
v_unused_1735_ = lean_ctor_get(v___x_1727_, 0);
lean_dec(v_unused_1735_);
v___x_1729_ = v___x_1727_;
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
else
{
lean_dec(v___x_1727_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1734_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1732_; 
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v___y_1723_);
v___x_1732_ = v___x_1729_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1733_; 
v_reuseFailAlloc_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1733_, 0, v___y_1723_);
v___x_1732_ = v_reuseFailAlloc_1733_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
return v___x_1732_;
}
}
}
v___jp_1736_:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_Core_mkFreshUserName(v___y_1742_, v___y_1743_, v___y_1750_);
if (lean_obj_tag(v___x_1753_) == 0)
{
lean_object* v_a_1754_; lean_object* v___x_1755_; 
v_a_1754_ = lean_ctor_get(v___x_1753_, 0);
lean_inc_n(v_a_1754_, 2);
lean_dec_ref(v___x_1753_);
v___x_1755_ = l_Lean_MVarId_rename(v___y_1747_, v___y_1752_, v_a_1754_, v___y_1746_, v___y_1740_, v___y_1743_, v___y_1750_);
if (lean_obj_tag(v___x_1755_) == 0)
{
lean_object* v_a_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___f_1760_; lean_object* v___x_1761_; 
v_a_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc_n(v_a_1756_, 2);
lean_dec_ref(v___x_1755_);
v___x_1757_ = lean_box(v___x_1702_);
v___x_1758_ = lean_box(v___x_1703_);
v___x_1759_ = lean_box(v___x_1704_);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__2___boxed), 18, 9);
lean_closure_set(v___f_1760_, 0, v_a_1756_);
lean_closure_set(v___f_1760_, 1, v_a_1754_);
lean_closure_set(v___f_1760_, 2, v___x_1757_);
lean_closure_set(v___f_1760_, 3, v___x_1758_);
lean_closure_set(v___f_1760_, 4, v___x_1759_);
lean_closure_set(v___f_1760_, 5, v___y_1739_);
lean_closure_set(v___f_1760_, 6, v___y_1738_);
lean_closure_set(v___f_1760_, 7, v___x_1705_);
lean_closure_set(v___f_1760_, 8, v___y_1737_);
v___x_1761_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg(v_a_1756_, v___f_1760_, v___y_1748_, v___y_1741_, v___y_1745_, v___y_1751_, v___y_1746_, v___y_1740_, v___y_1743_, v___y_1750_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_dec_ref(v___x_1761_);
v___y_1723_ = v___y_1749_;
v___y_1724_ = v___y_1744_;
v___y_1725_ = v___y_1740_;
v___y_1726_ = v___y_1750_;
goto v___jp_1722_;
}
else
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1769_; 
lean_dec_ref(v___y_1749_);
lean_dec_ref(v___y_1744_);
lean_dec(v_snd_1701_);
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1769_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1764_ = v___x_1761_;
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1761_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1769_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1767_; 
if (v_isShared_1765_ == 0)
{
v___x_1767_ = v___x_1764_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1762_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
else
{
lean_object* v_a_1770_; lean_object* v___x_1772_; uint8_t v_isShared_1773_; uint8_t v_isSharedCheck_1777_; 
lean_dec(v_a_1754_);
lean_dec_ref(v___y_1749_);
lean_dec_ref(v___y_1744_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1770_ = lean_ctor_get(v___x_1755_, 0);
v_isSharedCheck_1777_ = !lean_is_exclusive(v___x_1755_);
if (v_isSharedCheck_1777_ == 0)
{
v___x_1772_ = v___x_1755_;
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
else
{
lean_inc(v_a_1770_);
lean_dec(v___x_1755_);
v___x_1772_ = lean_box(0);
v_isShared_1773_ = v_isSharedCheck_1777_;
goto v_resetjp_1771_;
}
v_resetjp_1771_:
{
lean_object* v___x_1775_; 
if (v_isShared_1773_ == 0)
{
v___x_1775_ = v___x_1772_;
goto v_reusejp_1774_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_a_1770_);
v___x_1775_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1774_;
}
v_reusejp_1774_:
{
return v___x_1775_;
}
}
}
}
else
{
lean_object* v_a_1778_; lean_object* v___x_1780_; uint8_t v_isShared_1781_; uint8_t v_isSharedCheck_1785_; 
lean_dec(v___y_1752_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1744_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1778_ = lean_ctor_get(v___x_1753_, 0);
v_isSharedCheck_1785_ = !lean_is_exclusive(v___x_1753_);
if (v_isSharedCheck_1785_ == 0)
{
v___x_1780_ = v___x_1753_;
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
else
{
lean_inc(v_a_1778_);
lean_dec(v___x_1753_);
v___x_1780_ = lean_box(0);
v_isShared_1781_ = v_isSharedCheck_1785_;
goto v_resetjp_1779_;
}
v_resetjp_1779_:
{
lean_object* v___x_1783_; 
if (v_isShared_1781_ == 0)
{
v___x_1783_ = v___x_1780_;
goto v_reusejp_1782_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v_a_1778_);
v___x_1783_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1782_;
}
v_reusejp_1782_:
{
return v___x_1783_;
}
}
}
}
v___jp_1786_:
{
lean_object* v___x_1800_; 
lean_inc(v_snd_1701_);
v___x_1800_ = l_Lean_MVarId_getType(v_snd_1701_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
if (lean_obj_tag(v___x_1800_) == 0)
{
lean_object* v_a_1801_; lean_object* v___x_1802_; 
v_a_1801_ = lean_ctor_get(v___x_1800_, 0);
lean_inc(v_a_1801_);
lean_dec_ref(v___x_1800_);
lean_inc(v_snd_1701_);
v___x_1802_ = l_Lean_MVarId_getTag(v_snd_1701_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_object* v_a_1803_; lean_object* v___x_1804_; 
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_a_1803_);
lean_dec_ref(v___x_1802_);
v___x_1804_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1801_, v_a_1803_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_a_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; 
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_a_1805_);
lean_dec_ref(v___x_1804_);
v___x_1806_ = l_Lean_Expr_mvarId_x21(v_a_1805_);
v___x_1807_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__1);
lean_inc_ref(v___y_1791_);
v___x_1808_ = l_Lean_MVarId_note(v___x_1806_, v___x_1807_, v___y_1791_, v___y_1790_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
if (lean_obj_tag(v___x_1808_) == 0)
{
lean_object* v_a_1809_; lean_object* v_fst_1810_; lean_object* v_snd_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1870_; 
v_a_1809_ = lean_ctor_get(v___x_1808_, 0);
lean_inc(v_a_1809_);
lean_dec_ref(v___x_1808_);
v_fst_1810_ = lean_ctor_get(v_a_1809_, 0);
v_snd_1811_ = lean_ctor_get(v_a_1809_, 1);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_a_1809_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1813_ = v_a_1809_;
v_isShared_1814_ = v_isSharedCheck_1870_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_snd_1811_);
lean_inc(v_fst_1810_);
lean_dec(v_a_1809_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1870_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___x_1815_ = lean_mk_empty_array_with_capacity(v___x_1706_);
lean_inc(v_fst_1810_);
v___x_1816_ = lean_array_push(v___x_1815_, v_fst_1810_);
v___x_1817_ = l_Lean_Meta_simpGoal(v_snd_1811_, v___x_1707_, v_simprocs_1708_, v_discharge_x3f_1709_, v___x_1703_, v___x_1816_, v_snd_1710_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v_fst_1819_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
lean_inc(v_a_1818_);
lean_dec_ref(v___x_1817_);
v_fst_1819_ = lean_ctor_get(v_a_1818_, 0);
if (lean_obj_tag(v_fst_1819_) == 0)
{
lean_object* v_snd_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1853_; 
lean_dec(v_fst_1810_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v___x_1705_);
v_snd_1820_ = lean_ctor_get(v_a_1818_, 1);
v_isSharedCheck_1853_ = !lean_is_exclusive(v_a_1818_);
if (v_isSharedCheck_1853_ == 0)
{
lean_object* v_unused_1854_; 
v_unused_1854_ = lean_ctor_get(v_a_1818_, 0);
lean_dec(v_unused_1854_);
v___x_1822_ = v_a_1818_;
v_isShared_1823_ = v_isSharedCheck_1853_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_snd_1820_);
lean_dec(v_a_1818_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1853_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1824_; lean_object* v_a_1825_; uint8_t v___x_1826_; 
v___x_1824_ = l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3(v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref(v___x_1824_);
v___x_1826_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_a_1825_);
lean_dec(v_a_1825_);
if (v___x_1826_ == 0)
{
lean_del_object(v___x_1822_);
lean_del_object(v___x_1813_);
lean_dec_ref(v___y_1791_);
v___y_1723_ = v_snd_1820_;
v___y_1724_ = v_a_1805_;
v___y_1725_ = v___y_1797_;
v___y_1726_ = v___y_1799_;
goto v___jp_1722_;
}
else
{
if (lean_obj_tag(v___y_1791_) == 1)
{
lean_object* v_fvarId_1827_; lean_object* v_lctx_1828_; lean_object* v___x_1829_; 
v_fvarId_1827_ = lean_ctor_get(v___y_1791_, 0);
v_lctx_1828_ = lean_ctor_get(v___y_1796_, 2);
lean_inc(v_fvarId_1827_);
lean_inc_ref(v_lctx_1828_);
v___x_1829_ = l_Lean_LocalContext_getRoundtrippingUserName_x3f(v_lctx_1828_, v_fvarId_1827_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_dec_ref(v___y_1791_);
lean_del_object(v___x_1822_);
lean_del_object(v___x_1813_);
v___y_1723_ = v_snd_1820_;
v___y_1724_ = v_a_1805_;
v___y_1725_ = v___y_1797_;
v___y_1726_ = v___y_1799_;
goto v___jp_1722_;
}
else
{
lean_dec_ref(v___x_1829_);
if (v___x_1704_ == 0)
{
lean_dec_ref(v___y_1791_);
lean_del_object(v___x_1822_);
lean_del_object(v___x_1813_);
v___y_1723_ = v_snd_1820_;
v___y_1724_ = v_a_1805_;
v___y_1725_ = v___y_1797_;
v___y_1726_ = v___y_1799_;
goto v___jp_1722_;
}
else
{
lean_object* v_ref_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v_ref_1830_ = lean_ctor_get(v___y_1798_, 5);
v___x_1831_ = l_linter_unnecessarySimpa;
v___x_1832_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__3, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__3_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__3);
v___x_1833_ = l_Lean_MessageData_ofExpr(v___y_1791_);
lean_inc_ref(v___x_1833_);
if (v_isShared_1823_ == 0)
{
lean_ctor_set_tag(v___x_1822_, 7);
lean_ctor_set(v___x_1822_, 1, v___x_1833_);
lean_ctor_set(v___x_1822_, 0, v___x_1832_);
v___x_1835_ = v___x_1822_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1852_, 1, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1836_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__5, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__5_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__5);
if (v_isShared_1814_ == 0)
{
lean_ctor_set_tag(v___x_1813_, 7);
lean_ctor_set(v___x_1813_, 1, v___x_1836_);
lean_ctor_set(v___x_1813_, 0, v___x_1835_);
v___x_1838_ = v___x_1813_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1835_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1839_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
lean_ctor_set(v___x_1839_, 1, v___x_1833_);
v___x_1840_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__7, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__7_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___closed__7);
v___x_1841_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1839_);
lean_ctor_set(v___x_1841_, 1, v___x_1840_);
v___x_1842_ = l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4(v___x_1831_, v_ref_1830_, v___x_1841_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_dec_ref(v___x_1842_);
v___y_1723_ = v_snd_1820_;
v___y_1724_ = v_a_1805_;
v___y_1725_ = v___y_1797_;
v___y_1726_ = v___y_1799_;
goto v___jp_1722_;
}
else
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1850_; 
lean_dec(v_snd_1820_);
lean_dec(v_a_1805_);
lean_dec(v_snd_1701_);
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1850_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1850_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1850_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1848_; 
if (v_isShared_1846_ == 0)
{
v___x_1848_ = v___x_1845_;
goto v_reusejp_1847_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_a_1843_);
v___x_1848_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1847_;
}
v_reusejp_1847_:
{
return v___x_1848_;
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
lean_del_object(v___x_1822_);
lean_del_object(v___x_1813_);
lean_dec_ref(v___y_1791_);
v___y_1723_ = v_snd_1820_;
v___y_1724_ = v_a_1805_;
v___y_1725_ = v___y_1797_;
v___y_1726_ = v___y_1799_;
goto v___jp_1722_;
}
}
}
}
else
{
lean_object* v_val_1855_; lean_object* v_snd_1856_; lean_object* v_fst_1857_; lean_object* v_snd_1858_; lean_object* v___x_1859_; uint8_t v___x_1860_; 
lean_del_object(v___x_1813_);
lean_dec_ref(v___y_1791_);
v_val_1855_ = lean_ctor_get(v_fst_1819_, 0);
lean_inc(v_val_1855_);
v_snd_1856_ = lean_ctor_get(v_a_1818_, 1);
lean_inc(v_snd_1856_);
lean_dec(v_a_1818_);
v_fst_1857_ = lean_ctor_get(v_val_1855_, 0);
lean_inc(v_fst_1857_);
v_snd_1858_ = lean_ctor_get(v_val_1855_, 1);
lean_inc(v_snd_1858_);
lean_dec(v_val_1855_);
v___x_1859_ = lean_array_get_size(v_fst_1857_);
v___x_1860_ = lean_nat_dec_lt(v___x_1711_, v___x_1859_);
if (v___x_1860_ == 0)
{
lean_dec(v_fst_1857_);
v___y_1737_ = v___y_1788_;
v___y_1738_ = v___y_1787_;
v___y_1739_ = v___y_1789_;
v___y_1740_ = v___y_1797_;
v___y_1741_ = v___y_1793_;
v___y_1742_ = v___x_1807_;
v___y_1743_ = v___y_1798_;
v___y_1744_ = v_a_1805_;
v___y_1745_ = v___y_1794_;
v___y_1746_ = v___y_1796_;
v___y_1747_ = v_snd_1858_;
v___y_1748_ = v___y_1792_;
v___y_1749_ = v_snd_1856_;
v___y_1750_ = v___y_1799_;
v___y_1751_ = v___y_1795_;
v___y_1752_ = v_fst_1810_;
goto v___jp_1736_;
}
else
{
lean_object* v___x_1861_; 
lean_dec(v_fst_1810_);
v___x_1861_ = lean_array_fget(v_fst_1857_, v___x_1711_);
lean_dec(v_fst_1857_);
v___y_1737_ = v___y_1788_;
v___y_1738_ = v___y_1787_;
v___y_1739_ = v___y_1789_;
v___y_1740_ = v___y_1797_;
v___y_1741_ = v___y_1793_;
v___y_1742_ = v___x_1807_;
v___y_1743_ = v___y_1798_;
v___y_1744_ = v_a_1805_;
v___y_1745_ = v___y_1794_;
v___y_1746_ = v___y_1796_;
v___y_1747_ = v_snd_1858_;
v___y_1748_ = v___y_1792_;
v___y_1749_ = v_snd_1856_;
v___y_1750_ = v___y_1799_;
v___y_1751_ = v___y_1795_;
v___y_1752_ = v___x_1861_;
goto v___jp_1736_;
}
}
}
else
{
lean_object* v_a_1862_; lean_object* v___x_1864_; uint8_t v_isShared_1865_; uint8_t v_isSharedCheck_1869_; 
lean_del_object(v___x_1813_);
lean_dec(v_fst_1810_);
lean_dec(v_a_1805_);
lean_dec_ref(v___y_1791_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1862_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1869_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1869_ == 0)
{
v___x_1864_ = v___x_1817_;
v_isShared_1865_ = v_isSharedCheck_1869_;
goto v_resetjp_1863_;
}
else
{
lean_inc(v_a_1862_);
lean_dec(v___x_1817_);
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
else
{
lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1878_; 
lean_dec(v_a_1805_);
lean_dec_ref(v___y_1791_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1871_ = lean_ctor_get(v___x_1808_, 0);
v_isSharedCheck_1878_ = !lean_is_exclusive(v___x_1808_);
if (v_isSharedCheck_1878_ == 0)
{
v___x_1873_ = v___x_1808_;
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1808_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1878_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1876_; 
if (v_isShared_1874_ == 0)
{
v___x_1876_ = v___x_1873_;
goto v_reusejp_1875_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_a_1871_);
v___x_1876_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1875_;
}
v_reusejp_1875_:
{
return v___x_1876_;
}
}
}
}
else
{
lean_object* v_a_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1886_; 
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1879_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1886_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1881_ = v___x_1804_;
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_a_1879_);
lean_dec(v___x_1804_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1886_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1884_; 
if (v_isShared_1882_ == 0)
{
v___x_1884_ = v___x_1881_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_a_1879_);
v___x_1884_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
return v___x_1884_;
}
}
}
}
else
{
lean_object* v_a_1887_; lean_object* v___x_1889_; uint8_t v_isShared_1890_; uint8_t v_isSharedCheck_1894_; 
lean_dec(v_a_1801_);
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1887_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1889_ = v___x_1802_;
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
else
{
lean_inc(v_a_1887_);
lean_dec(v___x_1802_);
v___x_1889_ = lean_box(0);
v_isShared_1890_ = v_isSharedCheck_1894_;
goto v_resetjp_1888_;
}
v_resetjp_1888_:
{
lean_object* v___x_1892_; 
if (v_isShared_1890_ == 0)
{
v___x_1892_ = v___x_1889_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_a_1887_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec_ref(v___y_1791_);
lean_dec(v___y_1790_);
lean_dec_ref(v___y_1789_);
lean_dec(v___y_1788_);
lean_dec(v___y_1787_);
lean_dec_ref(v_snd_1710_);
lean_dec(v_discharge_x3f_1709_);
lean_dec_ref(v_simprocs_1708_);
lean_dec_ref(v___x_1707_);
lean_dec_ref(v___x_1705_);
lean_dec(v_snd_1701_);
v_a_1895_ = lean_ctor_get(v___x_1800_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1800_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1800_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1800_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___boxed(lean_object** _args){
lean_object* v_usingArg_2033_ = _args[0];
lean_object* v_snd_2034_ = _args[1];
lean_object* v___x_2035_ = _args[2];
lean_object* v___x_2036_ = _args[3];
lean_object* v___x_2037_ = _args[4];
lean_object* v___x_2038_ = _args[5];
lean_object* v___x_2039_ = _args[6];
lean_object* v___x_2040_ = _args[7];
lean_object* v_simprocs_2041_ = _args[8];
lean_object* v_discharge_x3f_2042_ = _args[9];
lean_object* v_snd_2043_ = _args[10];
lean_object* v___x_2044_ = _args[11];
lean_object* v___f_2045_ = _args[12];
lean_object* v___y_2046_ = _args[13];
lean_object* v___y_2047_ = _args[14];
lean_object* v___y_2048_ = _args[15];
lean_object* v___y_2049_ = _args[16];
lean_object* v___y_2050_ = _args[17];
lean_object* v___y_2051_ = _args[18];
lean_object* v___y_2052_ = _args[19];
lean_object* v___y_2053_ = _args[20];
lean_object* v___y_2054_ = _args[21];
_start:
{
uint8_t v___x_81049__boxed_2055_; uint8_t v___x_81050__boxed_2056_; uint8_t v___x_81051__boxed_2057_; lean_object* v_res_2058_; 
v___x_81049__boxed_2055_ = lean_unbox(v___x_2035_);
v___x_81050__boxed_2056_ = lean_unbox(v___x_2036_);
v___x_81051__boxed_2057_ = lean_unbox(v___x_2037_);
v_res_2058_ = l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4(v_usingArg_2033_, v_snd_2034_, v___x_81049__boxed_2055_, v___x_81050__boxed_2056_, v___x_81051__boxed_2057_, v___x_2038_, v___x_2039_, v___x_2040_, v_simprocs_2041_, v_discharge_x3f_2042_, v_snd_2043_, v___x_2044_, v___f_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
lean_dec(v___y_2053_);
lean_dec_ref(v___y_2052_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec(v___y_2047_);
lean_dec_ref(v___y_2046_);
lean_dec(v___x_2044_);
lean_dec(v___x_2039_);
return v_res_2058_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__0(void){
_start:
{
lean_object* v___x_2059_; 
v___x_2059_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2059_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__1(void){
_start:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2060_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__0);
v___x_2061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2061_, 0, v___x_2060_);
return v___x_2061_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__2(void){
_start:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; 
v___x_2062_ = lean_unsigned_to_nat(32u);
v___x_2063_ = lean_mk_empty_array_with_capacity(v___x_2062_);
v___x_2064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2063_);
return v___x_2064_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__3(void){
_start:
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_mk_string_unchecked("try 'simp' instead of 'simpa'", 29, 29);
return v___x_2065_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__4(void){
_start:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2066_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__3, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__3_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__3);
v___x_2067_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2066_);
return v___x_2067_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__5(void){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__4, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__4_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__4);
v___x_2069_ = l_Lean_MessageData_ofFormat(v___x_2068_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5(lean_object* v___x_2070_, lean_object* v_tk_2071_, lean_object* v___x_2072_, lean_object* v___x_2073_, lean_object* v___x_2074_, lean_object* v_simprocs_2075_, uint8_t v___x_2076_, lean_object* v_usingArg_2077_, uint8_t v___x_2078_, uint8_t v___x_2079_, lean_object* v___x_2080_, lean_object* v___x_2081_, lean_object* v_usingTk_x3f_2082_, lean_object* v_discharge_x3f_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
lean_object* v___y_2094_; 
if (lean_obj_tag(v_usingTk_x3f_2082_) == 0)
{
lean_object* v___x_2198_; 
v___x_2198_ = lean_box(0);
v___y_2094_ = v___x_2198_;
goto v___jp_2093_;
}
else
{
lean_object* v_val_2199_; 
v_val_2199_ = lean_ctor_get(v_usingTk_x3f_2082_, 0);
lean_inc(v_val_2199_);
lean_dec_ref(v_usingTk_x3f_2082_);
v___y_2094_ = v_val_2199_;
goto v___jp_2093_;
}
v___jp_2093_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2095_ = lean_mk_empty_array_with_capacity(v___x_2070_);
v___x_2096_ = lean_array_push(v___x_2095_, v_tk_2071_);
v___x_2097_ = lean_array_push(v___x_2096_, v___y_2094_);
v___x_2098_ = lean_box(2);
v___x_2099_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
lean_ctor_set(v___x_2099_, 1, v___x_2072_);
lean_ctor_set(v___x_2099_, 2, v___x_2097_);
v___x_2100_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v___x_2099_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v___x_2102_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref(v___x_2100_);
v___x_2102_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2085_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
if (lean_obj_tag(v___x_2102_) == 0)
{
lean_object* v_a_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; size_t v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; 
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
lean_inc(v_a_2103_);
lean_dec_ref(v___x_2102_);
v___x_2104_ = lean_mk_empty_array_with_capacity(v___x_2073_);
v___x_2105_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__1);
lean_inc_n(v___x_2073_, 3);
v___x_2106_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2105_);
lean_ctor_set(v___x_2106_, 1, v___x_2073_);
v___x_2107_ = lean_unsigned_to_nat(32u);
v___x_2108_ = lean_mk_empty_array_with_capacity(v___x_2107_);
v___x_2109_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__2, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__2_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__2);
v___x_2110_ = ((size_t)5ULL);
v___x_2111_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2111_, 0, v___x_2109_);
lean_ctor_set(v___x_2111_, 1, v___x_2108_);
lean_ctor_set(v___x_2111_, 2, v___x_2073_);
lean_ctor_set(v___x_2111_, 3, v___x_2073_);
lean_ctor_set_usize(v___x_2111_, 4, v___x_2110_);
v___x_2112_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2112_, 0, v___x_2105_);
lean_ctor_set(v___x_2112_, 1, v___x_2105_);
lean_ctor_set(v___x_2112_, 2, v___x_2105_);
lean_ctor_set(v___x_2112_, 3, v___x_2111_);
v___x_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2113_, 0, v___x_2106_);
lean_ctor_set(v___x_2113_, 1, v___x_2112_);
lean_inc_ref(v___x_2113_);
lean_inc(v_discharge_x3f_2083_);
lean_inc_ref(v_simprocs_2075_);
lean_inc_ref(v___x_2074_);
v___x_2114_ = l_Lean_Meta_simpGoal(v_a_2103_, v___x_2074_, v_simprocs_2075_, v_discharge_x3f_2083_, v___x_2076_, v___x_2104_, v___x_2113_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
if (lean_obj_tag(v___x_2114_) == 0)
{
lean_object* v_a_2115_; lean_object* v_fst_2116_; 
v_a_2115_ = lean_ctor_get(v___x_2114_, 0);
lean_inc(v_a_2115_);
lean_dec_ref(v___x_2114_);
v_fst_2116_ = lean_ctor_get(v_a_2115_, 0);
if (lean_obj_tag(v_fst_2116_) == 1)
{
lean_object* v_val_2117_; lean_object* v_snd_2118_; lean_object* v_snd_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2142_; 
lean_dec_ref(v___x_2113_);
v_val_2117_ = lean_ctor_get(v_fst_2116_, 0);
lean_inc(v_val_2117_);
v_snd_2118_ = lean_ctor_get(v_a_2115_, 1);
lean_inc(v_snd_2118_);
lean_dec(v_a_2115_);
v_snd_2119_ = lean_ctor_get(v_val_2117_, 1);
v_isSharedCheck_2142_ = !lean_is_exclusive(v_val_2117_);
if (v_isSharedCheck_2142_ == 0)
{
lean_object* v_unused_2143_; 
v_unused_2143_ = lean_ctor_get(v_val_2117_, 0);
lean_dec(v_unused_2143_);
v___x_2121_ = v_val_2117_;
v_isShared_2122_ = v_isSharedCheck_2142_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_snd_2119_);
lean_dec(v_val_2117_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2142_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2123_ = lean_box(0);
lean_inc(v_snd_2119_);
if (v_isShared_2122_ == 0)
{
lean_ctor_set_tag(v___x_2121_, 1);
lean_ctor_set(v___x_2121_, 1, v___x_2123_);
lean_ctor_set(v___x_2121_, 0, v_snd_2119_);
v___x_2125_ = v___x_2121_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v_snd_2119_);
lean_ctor_set(v_reuseFailAlloc_2141_, 1, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
lean_object* v___x_2126_; 
v___x_2126_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2125_, v___y_2085_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v___f_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___y_2131_; lean_object* v___x_2132_; 
lean_dec_ref(v___x_2126_);
v___f_2127_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__1___boxed), 11, 1);
lean_closure_set(v___f_2127_, 0, v_a_2101_);
v___x_2128_ = lean_box(v___x_2076_);
v___x_2129_ = lean_box(v___x_2078_);
v___x_2130_ = lean_box(v___x_2079_);
lean_inc(v_snd_2119_);
v___y_2131_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__4___boxed), 22, 13);
lean_closure_set(v___y_2131_, 0, v_usingArg_2077_);
lean_closure_set(v___y_2131_, 1, v_snd_2119_);
lean_closure_set(v___y_2131_, 2, v___x_2128_);
lean_closure_set(v___y_2131_, 3, v___x_2129_);
lean_closure_set(v___y_2131_, 4, v___x_2130_);
lean_closure_set(v___y_2131_, 5, v___x_2080_);
lean_closure_set(v___y_2131_, 6, v___x_2081_);
lean_closure_set(v___y_2131_, 7, v___x_2074_);
lean_closure_set(v___y_2131_, 8, v_simprocs_2075_);
lean_closure_set(v___y_2131_, 9, v_discharge_x3f_2083_);
lean_closure_set(v___y_2131_, 10, v_snd_2118_);
lean_closure_set(v___y_2131_, 11, v___x_2073_);
lean_closure_set(v___y_2131_, 12, v___f_2127_);
v___x_2132_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__5___redArg(v_snd_2119_, v___y_2131_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
return v___x_2132_;
}
else
{
lean_object* v_a_2133_; lean_object* v___x_2135_; uint8_t v_isShared_2136_; uint8_t v_isSharedCheck_2140_; 
lean_dec(v_snd_2119_);
lean_dec(v_snd_2118_);
lean_dec(v_a_2101_);
lean_dec(v_discharge_x3f_2083_);
lean_dec(v___x_2081_);
lean_dec_ref(v___x_2080_);
lean_dec(v_usingArg_2077_);
lean_dec_ref(v_simprocs_2075_);
lean_dec_ref(v___x_2074_);
lean_dec(v___x_2073_);
v_a_2133_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2140_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2140_ == 0)
{
v___x_2135_ = v___x_2126_;
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
else
{
lean_inc(v_a_2133_);
lean_dec(v___x_2126_);
v___x_2135_ = lean_box(0);
v_isShared_2136_ = v_isSharedCheck_2140_;
goto v_resetjp_2134_;
}
v_resetjp_2134_:
{
lean_object* v___x_2138_; 
if (v_isShared_2136_ == 0)
{
v___x_2138_ = v___x_2135_;
goto v_reusejp_2137_;
}
else
{
lean_object* v_reuseFailAlloc_2139_; 
v_reuseFailAlloc_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2139_, 0, v_a_2133_);
v___x_2138_ = v_reuseFailAlloc_2139_;
goto v_reusejp_2137_;
}
v_reusejp_2137_:
{
return v___x_2138_;
}
}
}
}
}
}
else
{
lean_object* v___x_2144_; lean_object* v_a_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2173_; 
lean_dec(v_a_2115_);
lean_dec(v_a_2101_);
lean_dec(v_discharge_x3f_2083_);
lean_dec(v___x_2081_);
lean_dec_ref(v___x_2080_);
lean_dec(v_usingArg_2077_);
lean_dec_ref(v_simprocs_2075_);
lean_dec_ref(v___x_2074_);
lean_dec(v___x_2073_);
v___x_2144_ = l_Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3(v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2173_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2173_ == 0)
{
v___x_2147_ = v___x_2144_;
v_isShared_2148_ = v_isSharedCheck_2173_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_a_2145_);
lean_dec(v___x_2144_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2173_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
uint8_t v___x_2149_; 
v___x_2149_ = l_Lean_Elab_Tactic_Simpa_getLinterUnnecessarySimpa(v_a_2145_);
lean_dec(v_a_2145_);
if (v___x_2149_ == 0)
{
lean_object* v___x_2151_; 
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 0, v___x_2113_);
v___x_2151_ = v___x_2147_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2113_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
else
{
lean_object* v_ref_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
lean_del_object(v___x_2147_);
v_ref_2153_ = lean_ctor_get(v___y_2090_, 5);
v___x_2154_ = l_linter_unnecessarySimpa;
v___x_2155_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__5, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__5_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___closed__5);
v___x_2156_ = l_Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4(v___x_2154_, v_ref_2153_, v___x_2155_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_, v___y_2091_);
if (lean_obj_tag(v___x_2156_) == 0)
{
lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2163_ == 0)
{
lean_object* v_unused_2164_; 
v_unused_2164_ = lean_ctor_get(v___x_2156_, 0);
lean_dec(v_unused_2164_);
v___x_2158_ = v___x_2156_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_dec(v___x_2156_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
lean_ctor_set(v___x_2158_, 0, v___x_2113_);
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2113_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
else
{
lean_object* v_a_2165_; lean_object* v___x_2167_; uint8_t v_isShared_2168_; uint8_t v_isSharedCheck_2172_; 
lean_dec_ref(v___x_2113_);
v_a_2165_ = lean_ctor_get(v___x_2156_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2156_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2167_ = v___x_2156_;
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
else
{
lean_inc(v_a_2165_);
lean_dec(v___x_2156_);
v___x_2167_ = lean_box(0);
v_isShared_2168_ = v_isSharedCheck_2172_;
goto v_resetjp_2166_;
}
v_resetjp_2166_:
{
lean_object* v___x_2170_; 
if (v_isShared_2168_ == 0)
{
v___x_2170_ = v___x_2167_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v_a_2165_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2174_; lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2181_; 
lean_dec_ref(v___x_2113_);
lean_dec(v_a_2101_);
lean_dec(v_discharge_x3f_2083_);
lean_dec(v___x_2081_);
lean_dec_ref(v___x_2080_);
lean_dec(v_usingArg_2077_);
lean_dec_ref(v_simprocs_2075_);
lean_dec_ref(v___x_2074_);
lean_dec(v___x_2073_);
v_a_2174_ = lean_ctor_get(v___x_2114_, 0);
v_isSharedCheck_2181_ = !lean_is_exclusive(v___x_2114_);
if (v_isSharedCheck_2181_ == 0)
{
v___x_2176_ = v___x_2114_;
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
else
{
lean_inc(v_a_2174_);
lean_dec(v___x_2114_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2181_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2179_; 
if (v_isShared_2177_ == 0)
{
v___x_2179_ = v___x_2176_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2180_; 
v_reuseFailAlloc_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2180_, 0, v_a_2174_);
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
lean_dec(v_a_2101_);
lean_dec(v_discharge_x3f_2083_);
lean_dec(v___x_2081_);
lean_dec_ref(v___x_2080_);
lean_dec(v_usingArg_2077_);
lean_dec_ref(v_simprocs_2075_);
lean_dec_ref(v___x_2074_);
lean_dec(v___x_2073_);
v_a_2182_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2184_ = v___x_2102_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_inc(v_a_2182_);
lean_dec(v___x_2102_);
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
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v_discharge_x3f_2083_);
lean_dec(v___x_2081_);
lean_dec_ref(v___x_2080_);
lean_dec(v_usingArg_2077_);
lean_dec_ref(v_simprocs_2075_);
lean_dec_ref(v___x_2074_);
lean_dec(v___x_2073_);
v_a_2190_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2100_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2100_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2195_; 
if (v_isShared_2193_ == 0)
{
v___x_2195_ = v___x_2192_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_a_2190_);
v___x_2195_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
return v___x_2195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___boxed(lean_object** _args){
lean_object* v___x_2200_ = _args[0];
lean_object* v_tk_2201_ = _args[1];
lean_object* v___x_2202_ = _args[2];
lean_object* v___x_2203_ = _args[3];
lean_object* v___x_2204_ = _args[4];
lean_object* v_simprocs_2205_ = _args[5];
lean_object* v___x_2206_ = _args[6];
lean_object* v_usingArg_2207_ = _args[7];
lean_object* v___x_2208_ = _args[8];
lean_object* v___x_2209_ = _args[9];
lean_object* v___x_2210_ = _args[10];
lean_object* v___x_2211_ = _args[11];
lean_object* v_usingTk_x3f_2212_ = _args[12];
lean_object* v_discharge_x3f_2213_ = _args[13];
lean_object* v___y_2214_ = _args[14];
lean_object* v___y_2215_ = _args[15];
lean_object* v___y_2216_ = _args[16];
lean_object* v___y_2217_ = _args[17];
lean_object* v___y_2218_ = _args[18];
lean_object* v___y_2219_ = _args[19];
lean_object* v___y_2220_ = _args[20];
lean_object* v___y_2221_ = _args[21];
lean_object* v___y_2222_ = _args[22];
_start:
{
uint8_t v___x_81775__boxed_2223_; uint8_t v___x_81776__boxed_2224_; uint8_t v___x_81777__boxed_2225_; lean_object* v_res_2226_; 
v___x_81775__boxed_2223_ = lean_unbox(v___x_2206_);
v___x_81776__boxed_2224_ = lean_unbox(v___x_2208_);
v___x_81777__boxed_2225_ = lean_unbox(v___x_2209_);
v_res_2226_ = l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5(v___x_2200_, v_tk_2201_, v___x_2202_, v___x_2203_, v___x_2204_, v_simprocs_2205_, v___x_81775__boxed_2223_, v_usingArg_2207_, v___x_81776__boxed_2224_, v___x_81777__boxed_2225_, v___x_2210_, v___x_2211_, v_usingTk_x3f_2212_, v_discharge_x3f_2213_, v___y_2214_, v___y_2215_, v___y_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
lean_dec(v___y_2219_);
lean_dec_ref(v___y_2218_);
lean_dec(v___y_2217_);
lean_dec_ref(v___y_2216_);
lean_dec(v___y_2215_);
lean_dec_ref(v___y_2214_);
lean_dec(v___x_2200_);
return v_res_2226_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__0(void){
_start:
{
lean_object* v___x_2227_; 
v___x_2227_ = lean_mk_string_unchecked("tactic", 6, 6);
return v___x_2227_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__1(void){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2228_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__0);
v___x_2229_ = l_Lean_Name_mkStr1(v___x_2228_);
return v___x_2229_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__2(void){
_start:
{
lean_object* v___x_2230_; 
v___x_2230_ = lean_mk_string_unchecked("Try this:", 9, 9);
return v___x_2230_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__3(void){
_start:
{
lean_object* v___x_2231_; 
v___x_2231_ = lean_mk_string_unchecked("simp", 4, 4);
return v___x_2231_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__4(void){
_start:
{
lean_object* v___x_2232_; 
v___x_2232_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_2232_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__5(void){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2233_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__4, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__4_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__4);
v___x_2234_ = l_Lean_Name_mkStr1(v___x_2233_);
return v___x_2234_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__6(void){
_start:
{
lean_object* v___x_2235_; 
v___x_2235_ = l_Array_mkArray0(lean_box(0));
return v___x_2235_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7(void){
_start:
{
lean_object* v___x_2236_; 
v___x_2236_ = lean_mk_string_unchecked("using", 5, 5);
return v___x_2236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8(void){
_start:
{
lean_object* v___x_2237_; 
v___x_2237_ = lean_mk_string_unchecked("simpArgs", 8, 8);
return v___x_2237_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9(void){
_start:
{
lean_object* v___x_2238_; 
v___x_2238_ = lean_mk_string_unchecked("[", 1, 1);
return v___x_2238_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10(void){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_2239_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11(void){
_start:
{
lean_object* v___x_2240_; 
v___x_2240_ = lean_mk_string_unchecked("only", 4, 4);
return v___x_2240_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__12(void){
_start:
{
lean_object* v___x_2241_; 
v___x_2241_ = lean_mk_string_unchecked("tacticSimpa!_", 13, 13);
return v___x_2241_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__13(void){
_start:
{
lean_object* v___x_2242_; 
v___x_2242_ = lean_mk_string_unchecked("simpa!", 6, 6);
return v___x_2242_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__14(void){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = lean_mk_string_unchecked("Lean.Elab.Tactic.Simpa", 22, 22);
return v___x_2243_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__15(void){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = lean_mk_string_unchecked("Lean.Elab.Tactic.Simpa.evalSimpa", 32, 32);
return v___x_2244_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__16(void){
_start:
{
lean_object* v___x_2245_; 
v___x_2245_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_2245_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17(void){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2246_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__16, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__16_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__16);
v___x_2247_ = lean_unsigned_to_nat(15u);
v___x_2248_ = lean_unsigned_to_nat(116u);
v___x_2249_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__15, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__15_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__15);
v___x_2250_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__14, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__14_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__14);
v___x_2251_ = l_mkPanicMessageWithDecl(v___x_2250_, v___x_2249_, v___x_2248_, v___x_2247_, v___x_2246_);
return v___x_2251_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__18(void){
_start:
{
lean_object* v___x_2252_; 
v___x_2252_ = lean_alloc_closure((void*)(l_Lean_Meta_getSimpTheorems___boxed), 3, 0);
return v___x_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6(lean_object* v_tk_2253_, lean_object* v___x_2254_, lean_object* v___x_2255_, lean_object* v___x_2256_, lean_object* v___x_2257_, lean_object* v___x_2258_, uint8_t v___x_2259_, lean_object* v___x_2260_, lean_object* v___f_2261_, lean_object* v___x_2262_, lean_object* v___x_2263_, lean_object* v___x_2264_, lean_object* v___x_2265_, lean_object* v___x_2266_, lean_object* v___x_2267_, lean_object* v_usingArg_2268_, lean_object* v___x_2269_, uint8_t v___x_2270_, lean_object* v_usingTk_x3f_2271_, lean_object* v_squeeze_2272_, lean_object* v_unfold_2273_, lean_object* v_args_2274_, lean_object* v_only_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v___y_2287_; lean_object* v___y_2291_; lean_object* v_stx_2292_; lean_object* v___y_2293_; lean_object* v_ref_2294_; lean_object* v___y_2295_; lean_object* v___y_2313_; lean_object* v_stx_2314_; lean_object* v___y_2315_; lean_object* v___y_2316_; lean_object* v_options_2318_; lean_object* v_ref_2319_; uint8_t v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___y_2328_; lean_object* v___y_2329_; lean_object* v___y_2330_; lean_object* v___y_2331_; lean_object* v___y_2332_; lean_object* v___y_2333_; lean_object* v___y_2334_; lean_object* v___y_2335_; lean_object* v___y_2336_; lean_object* v___y_2337_; lean_object* v___y_2338_; lean_object* v___y_2344_; lean_object* v___y_2345_; lean_object* v___y_2346_; lean_object* v___y_2347_; lean_object* v___y_2348_; lean_object* v___y_2349_; lean_object* v___y_2350_; lean_object* v___y_2351_; lean_object* v___y_2352_; lean_object* v___y_2353_; lean_object* v___y_2354_; lean_object* v___y_2363_; lean_object* v___y_2364_; lean_object* v___y_2365_; lean_object* v___y_2366_; lean_object* v___y_2367_; lean_object* v___y_2368_; lean_object* v___y_2369_; lean_object* v___y_2370_; lean_object* v___y_2371_; lean_object* v___y_2372_; lean_object* v___y_2373_; lean_object* v___y_2389_; lean_object* v___y_2390_; lean_object* v___y_2391_; lean_object* v___y_2392_; lean_object* v___y_2393_; lean_object* v___y_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2399_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___y_2418_; lean_object* v___y_2419_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___y_2432_; lean_object* v___y_2433_; lean_object* v___y_2434_; lean_object* v___y_2435_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; lean_object* v___y_2449_; lean_object* v___y_2450_; lean_object* v___y_2451_; lean_object* v___y_2452_; lean_object* v___y_2453_; lean_object* v___y_2454_; lean_object* v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___y_2478_; lean_object* v___y_2479_; lean_object* v___y_2480_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___y_2495_; lean_object* v___y_2496_; lean_object* v___y_2497_; lean_object* v___y_2498_; lean_object* v___y_2499_; lean_object* v___y_2500_; lean_object* v___y_2501_; lean_object* v___y_2502_; uint8_t v___y_2503_; lean_object* v___y_2504_; lean_object* v___y_2540_; lean_object* v___y_2541_; lean_object* v___y_2542_; lean_object* v___y_2543_; lean_object* v___y_2544_; lean_object* v___y_2545_; uint8_t v___y_2546_; lean_object* v_args_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2581_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; uint8_t v___y_2586_; lean_object* v_only_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2615_; lean_object* v___y_2616_; uint8_t v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2675_; lean_object* v___y_2676_; uint8_t v___y_2677_; lean_object* v___y_2688_; lean_object* v___y_2689_; uint8_t v___y_2690_; uint8_t v___y_2691_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; uint8_t v___y_2696_; lean_object* v___y_2697_; lean_object* v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2721_; lean_object* v___y_2722_; lean_object* v___y_2723_; lean_object* v___y_2755_; lean_object* v___y_2756_; lean_object* v___y_2769_; 
v_options_2318_ = lean_ctor_get(v___y_2283_, 2);
v_ref_2319_ = lean_ctor_get(v___y_2283_, 5);
v___x_2320_ = 0;
v___x_2321_ = l_Lean_SourceInfo_fromRef(v_ref_2319_, v___x_2320_);
v___x_2322_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__3, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__3_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__3);
lean_inc_ref(v___x_2256_);
lean_inc_ref(v___x_2255_);
lean_inc_ref(v___x_2254_);
v___x_2323_ = l_Lean_Name_mkStr4(v___x_2254_, v___x_2255_, v___x_2256_, v___x_2322_);
lean_inc(v___x_2321_);
v___x_2324_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2321_);
lean_ctor_set(v___x_2324_, 1, v___x_2322_);
v___x_2325_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__5, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__5_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__5);
v___x_2326_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__6, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__6_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__6);
if (lean_obj_tag(v___y_2276_) == 0)
{
lean_object* v___x_2778_; 
v___x_2778_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2769_ = v___x_2778_;
goto v___jp_2768_;
}
else
{
lean_object* v_val_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v_val_2779_ = lean_ctor_get(v___y_2276_, 0);
lean_inc(v_val_2779_);
lean_dec_ref(v___y_2276_);
v___x_2780_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___x_2781_ = lean_array_push(v___x_2780_, v_val_2779_);
v___y_2769_ = v___x_2781_;
goto v___jp_2768_;
}
v___jp_2286_:
{
lean_object* v_diag_2288_; lean_object* v___x_2289_; 
v_diag_2288_ = lean_ctor_get(v___y_2287_, 1);
lean_inc_ref(v_diag_2288_);
lean_dec_ref(v___y_2287_);
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v_diag_2288_);
return v___x_2289_;
}
v___jp_2290_:
{
lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; uint8_t v___x_2302_; lean_object* v___x_2303_; 
v___x_2296_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__1);
v___x_2297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2297_, 0, v___x_2296_);
lean_ctor_set(v___x_2297_, 1, v_stx_2292_);
v___x_2298_ = lean_box(0);
v___x_2299_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2299_, 0, v___x_2297_);
lean_ctor_set(v___x_2299_, 1, v___x_2298_);
lean_ctor_set(v___x_2299_, 2, v___x_2298_);
lean_ctor_set(v___x_2299_, 3, v___x_2298_);
lean_ctor_set(v___x_2299_, 4, v___x_2298_);
lean_ctor_set(v___x_2299_, 5, v___x_2298_);
v___x_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2300_, 0, v_ref_2294_);
v___x_2301_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__2, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__2_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__2);
v___x_2302_ = 4;
v___x_2303_ = l_Lean_Meta_Tactic_TryThis_addSuggestion(v_tk_2253_, v___x_2299_, v___x_2300_, v___x_2301_, v___x_2298_, v___x_2302_, v___y_2293_, v___y_2295_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2293_);
if (lean_obj_tag(v___x_2303_) == 0)
{
lean_dec_ref(v___x_2303_);
v___y_2287_ = v___y_2291_;
goto v___jp_2286_;
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
lean_dec_ref(v___y_2291_);
v_a_2304_ = lean_ctor_get(v___x_2303_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2303_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2303_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2303_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2304_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
v___jp_2312_:
{
lean_object* v_ref_2317_; 
v_ref_2317_ = lean_ctor_get(v___y_2315_, 5);
lean_inc(v_ref_2317_);
v___y_2291_ = v___y_2313_;
v_stx_2292_ = v_stx_2314_;
v___y_2293_ = v___y_2315_;
v_ref_2294_ = v_ref_2317_;
v___y_2295_ = v___y_2316_;
goto v___jp_2290_;
}
v___jp_2327_:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; 
v___x_2339_ = l_Array_append___redArg(v___x_2326_, v___y_2338_);
lean_dec_ref(v___y_2338_);
lean_inc_n(v___y_2334_, 2);
v___x_2340_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2340_, 0, v___y_2334_);
lean_ctor_set(v___x_2340_, 1, v___x_2325_);
lean_ctor_set(v___x_2340_, 2, v___x_2339_);
v___x_2341_ = l_Lean_Syntax_node5(v___y_2334_, v___x_2257_, v___y_2333_, v___y_2330_, v___y_2336_, v___y_2332_, v___x_2340_);
lean_inc(v___y_2329_);
v___x_2342_ = l_Lean_Syntax_node4(v___y_2334_, v___x_2260_, v___y_2337_, v___y_2329_, v___y_2329_, v___x_2341_);
v___y_2313_ = v___y_2335_;
v_stx_2314_ = v___x_2342_;
v___y_2315_ = v___y_2328_;
v___y_2316_ = v___y_2331_;
goto v___jp_2312_;
}
v___jp_2343_:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; 
v___x_2355_ = l_Array_append___redArg(v___x_2326_, v___y_2354_);
lean_dec_ref(v___y_2354_);
lean_inc(v___y_2350_);
v___x_2356_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2356_, 0, v___y_2350_);
lean_ctor_set(v___x_2356_, 1, v___x_2325_);
lean_ctor_set(v___x_2356_, 2, v___x_2355_);
if (lean_obj_tag(v___y_2349_) == 1)
{
lean_object* v_val_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
lean_dec(v___x_2258_);
v_val_2357_ = lean_ctor_get(v___y_2349_, 0);
lean_inc(v_val_2357_);
lean_dec_ref(v___y_2349_);
v___x_2358_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7);
lean_inc(v___y_2350_);
v___x_2359_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2359_, 0, v___y_2350_);
lean_ctor_set(v___x_2359_, 1, v___x_2358_);
v___x_2360_ = l_Array_mkArray2___redArg(v___x_2359_, v_val_2357_);
v___y_2328_ = v___y_2346_;
v___y_2329_ = v___y_2345_;
v___y_2330_ = v___y_2344_;
v___y_2331_ = v___y_2347_;
v___y_2332_ = v___x_2356_;
v___y_2333_ = v___y_2348_;
v___y_2334_ = v___y_2350_;
v___y_2335_ = v___y_2352_;
v___y_2336_ = v___y_2351_;
v___y_2337_ = v___y_2353_;
v___y_2338_ = v___x_2360_;
goto v___jp_2327_;
}
else
{
lean_object* v___x_2361_; 
lean_dec(v___y_2349_);
v___x_2361_ = lean_mk_empty_array_with_capacity(v___x_2258_);
lean_dec(v___x_2258_);
v___y_2328_ = v___y_2346_;
v___y_2329_ = v___y_2345_;
v___y_2330_ = v___y_2344_;
v___y_2331_ = v___y_2347_;
v___y_2332_ = v___x_2356_;
v___y_2333_ = v___y_2348_;
v___y_2334_ = v___y_2350_;
v___y_2335_ = v___y_2352_;
v___y_2336_ = v___y_2351_;
v___y_2337_ = v___y_2353_;
v___y_2338_ = v___x_2361_;
goto v___jp_2327_;
}
}
v___jp_2362_:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2374_ = l_Array_append___redArg(v___x_2326_, v___y_2373_);
lean_dec_ref(v___y_2373_);
lean_inc(v___y_2370_);
v___x_2375_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2375_, 0, v___y_2370_);
lean_ctor_set(v___x_2375_, 1, v___x_2325_);
lean_ctor_set(v___x_2375_, 2, v___x_2374_);
if (lean_obj_tag(v___y_2367_) == 1)
{
lean_object* v_val_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v_val_2376_ = lean_ctor_get(v___y_2367_, 0);
lean_inc(v_val_2376_);
lean_dec_ref(v___y_2367_);
v___x_2377_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8);
v___x_2378_ = l_Lean_Name_mkStr4(v___x_2254_, v___x_2255_, v___x_2256_, v___x_2377_);
v___x_2379_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9);
lean_inc_n(v___y_2370_, 4);
v___x_2380_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2380_, 0, v___y_2370_);
lean_ctor_set(v___x_2380_, 1, v___x_2379_);
v___x_2381_ = l_Array_append___redArg(v___x_2326_, v_val_2376_);
lean_dec(v_val_2376_);
v___x_2382_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2382_, 0, v___y_2370_);
lean_ctor_set(v___x_2382_, 1, v___x_2325_);
lean_ctor_set(v___x_2382_, 2, v___x_2381_);
v___x_2383_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10);
v___x_2384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2384_, 0, v___y_2370_);
lean_ctor_set(v___x_2384_, 1, v___x_2383_);
v___x_2385_ = l_Lean_Syntax_node3(v___y_2370_, v___x_2378_, v___x_2380_, v___x_2382_, v___x_2384_);
v___x_2386_ = l_Array_mkArray1___redArg(v___x_2385_);
v___y_2344_ = v___y_2365_;
v___y_2345_ = v___y_2364_;
v___y_2346_ = v___y_2363_;
v___y_2347_ = v___y_2366_;
v___y_2348_ = v___y_2368_;
v___y_2349_ = v___y_2369_;
v___y_2350_ = v___y_2370_;
v___y_2351_ = v___x_2375_;
v___y_2352_ = v___y_2371_;
v___y_2353_ = v___y_2372_;
v___y_2354_ = v___x_2386_;
goto v___jp_2343_;
}
else
{
lean_object* v___x_2387_; 
lean_dec(v___y_2367_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
v___x_2387_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2344_ = v___y_2365_;
v___y_2345_ = v___y_2364_;
v___y_2346_ = v___y_2363_;
v___y_2347_ = v___y_2366_;
v___y_2348_ = v___y_2368_;
v___y_2349_ = v___y_2369_;
v___y_2350_ = v___y_2370_;
v___y_2351_ = v___x_2375_;
v___y_2352_ = v___y_2371_;
v___y_2353_ = v___y_2372_;
v___y_2354_ = v___x_2387_;
goto v___jp_2343_;
}
}
v___jp_2388_:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2400_ = l_Array_append___redArg(v___x_2326_, v___y_2399_);
lean_dec_ref(v___y_2399_);
lean_inc(v___y_2396_);
v___x_2401_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2401_, 0, v___y_2396_);
lean_ctor_set(v___x_2401_, 1, v___x_2325_);
lean_ctor_set(v___x_2401_, 2, v___x_2400_);
if (lean_obj_tag(v___y_2392_) == 1)
{
lean_object* v_val_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; 
v_val_2402_ = lean_ctor_get(v___y_2392_, 0);
lean_inc(v_val_2402_);
lean_dec_ref(v___y_2392_);
v___x_2403_ = l_Lean_SourceInfo_fromRef(v_val_2402_, v___x_2259_);
lean_dec(v_val_2402_);
v___x_2404_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11);
v___x_2405_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2403_);
lean_ctor_set(v___x_2405_, 1, v___x_2404_);
v___x_2406_ = l_Array_mkArray1___redArg(v___x_2405_);
v___y_2363_ = v___y_2390_;
v___y_2364_ = v___y_2389_;
v___y_2365_ = v___x_2401_;
v___y_2366_ = v___y_2391_;
v___y_2367_ = v___y_2393_;
v___y_2368_ = v___y_2394_;
v___y_2369_ = v___y_2395_;
v___y_2370_ = v___y_2396_;
v___y_2371_ = v___y_2397_;
v___y_2372_ = v___y_2398_;
v___y_2373_ = v___x_2406_;
goto v___jp_2362_;
}
else
{
lean_object* v___x_2407_; 
lean_dec(v___y_2392_);
v___x_2407_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2363_ = v___y_2390_;
v___y_2364_ = v___y_2389_;
v___y_2365_ = v___x_2401_;
v___y_2366_ = v___y_2391_;
v___y_2367_ = v___y_2393_;
v___y_2368_ = v___y_2394_;
v___y_2369_ = v___y_2395_;
v___y_2370_ = v___y_2396_;
v___y_2371_ = v___y_2397_;
v___y_2372_ = v___y_2398_;
v___y_2373_ = v___x_2407_;
goto v___jp_2362_;
}
}
v___jp_2408_:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; 
v___x_2420_ = l_Array_append___redArg(v___x_2326_, v___y_2419_);
lean_dec_ref(v___y_2419_);
lean_inc_n(v___y_2417_, 2);
v___x_2421_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2421_, 0, v___y_2417_);
lean_ctor_set(v___x_2421_, 1, v___x_2325_);
lean_ctor_set(v___x_2421_, 2, v___x_2420_);
v___x_2422_ = l_Lean_Syntax_node5(v___y_2417_, v___x_2257_, v___y_2415_, v___y_2410_, v___y_2414_, v___y_2412_, v___x_2421_);
v___x_2423_ = l_Lean_Syntax_node2(v___y_2417_, v___y_2413_, v___y_2418_, v___x_2422_);
v___y_2313_ = v___y_2416_;
v_stx_2314_ = v___x_2423_;
v___y_2315_ = v___y_2409_;
v___y_2316_ = v___y_2411_;
goto v___jp_2312_;
}
v___jp_2424_:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; 
v___x_2436_ = l_Array_append___redArg(v___x_2326_, v___y_2435_);
lean_dec_ref(v___y_2435_);
lean_inc(v___y_2433_);
v___x_2437_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2437_, 0, v___y_2433_);
lean_ctor_set(v___x_2437_, 1, v___x_2325_);
lean_ctor_set(v___x_2437_, 2, v___x_2436_);
if (lean_obj_tag(v___y_2431_) == 1)
{
lean_object* v_val_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
lean_dec(v___x_2258_);
v_val_2438_ = lean_ctor_get(v___y_2431_, 0);
lean_inc(v_val_2438_);
lean_dec_ref(v___y_2431_);
v___x_2439_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__7);
lean_inc(v___y_2433_);
v___x_2440_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2440_, 0, v___y_2433_);
lean_ctor_set(v___x_2440_, 1, v___x_2439_);
v___x_2441_ = l_Array_mkArray2___redArg(v___x_2440_, v_val_2438_);
v___y_2409_ = v___y_2426_;
v___y_2410_ = v___y_2425_;
v___y_2411_ = v___y_2427_;
v___y_2412_ = v___x_2437_;
v___y_2413_ = v___y_2428_;
v___y_2414_ = v___y_2429_;
v___y_2415_ = v___y_2430_;
v___y_2416_ = v___y_2432_;
v___y_2417_ = v___y_2433_;
v___y_2418_ = v___y_2434_;
v___y_2419_ = v___x_2441_;
goto v___jp_2408_;
}
else
{
lean_object* v___x_2442_; 
lean_dec(v___y_2431_);
v___x_2442_ = lean_mk_empty_array_with_capacity(v___x_2258_);
lean_dec(v___x_2258_);
v___y_2409_ = v___y_2426_;
v___y_2410_ = v___y_2425_;
v___y_2411_ = v___y_2427_;
v___y_2412_ = v___x_2437_;
v___y_2413_ = v___y_2428_;
v___y_2414_ = v___y_2429_;
v___y_2415_ = v___y_2430_;
v___y_2416_ = v___y_2432_;
v___y_2417_ = v___y_2433_;
v___y_2418_ = v___y_2434_;
v___y_2419_ = v___x_2442_;
goto v___jp_2408_;
}
}
v___jp_2443_:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2455_ = l_Array_append___redArg(v___x_2326_, v___y_2454_);
lean_dec_ref(v___y_2454_);
lean_inc(v___y_2452_);
v___x_2456_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2456_, 0, v___y_2452_);
lean_ctor_set(v___x_2456_, 1, v___x_2325_);
lean_ctor_set(v___x_2456_, 2, v___x_2455_);
if (lean_obj_tag(v___y_2448_) == 1)
{
lean_object* v_val_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v_val_2457_ = lean_ctor_get(v___y_2448_, 0);
lean_inc(v_val_2457_);
lean_dec_ref(v___y_2448_);
v___x_2458_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8);
v___x_2459_ = l_Lean_Name_mkStr4(v___x_2254_, v___x_2255_, v___x_2256_, v___x_2458_);
v___x_2460_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9);
lean_inc_n(v___y_2452_, 4);
v___x_2461_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2461_, 0, v___y_2452_);
lean_ctor_set(v___x_2461_, 1, v___x_2460_);
v___x_2462_ = l_Array_append___redArg(v___x_2326_, v_val_2457_);
lean_dec(v_val_2457_);
v___x_2463_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2463_, 0, v___y_2452_);
lean_ctor_set(v___x_2463_, 1, v___x_2325_);
lean_ctor_set(v___x_2463_, 2, v___x_2462_);
v___x_2464_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10);
v___x_2465_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___y_2452_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = l_Lean_Syntax_node3(v___y_2452_, v___x_2459_, v___x_2461_, v___x_2463_, v___x_2465_);
v___x_2467_ = l_Array_mkArray1___redArg(v___x_2466_);
v___y_2425_ = v___y_2445_;
v___y_2426_ = v___y_2444_;
v___y_2427_ = v___y_2446_;
v___y_2428_ = v___y_2447_;
v___y_2429_ = v___x_2456_;
v___y_2430_ = v___y_2449_;
v___y_2431_ = v___y_2450_;
v___y_2432_ = v___y_2451_;
v___y_2433_ = v___y_2452_;
v___y_2434_ = v___y_2453_;
v___y_2435_ = v___x_2467_;
goto v___jp_2424_;
}
else
{
lean_object* v___x_2468_; 
lean_dec(v___y_2448_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
v___x_2468_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2425_ = v___y_2445_;
v___y_2426_ = v___y_2444_;
v___y_2427_ = v___y_2446_;
v___y_2428_ = v___y_2447_;
v___y_2429_ = v___x_2456_;
v___y_2430_ = v___y_2449_;
v___y_2431_ = v___y_2450_;
v___y_2432_ = v___y_2451_;
v___y_2433_ = v___y_2452_;
v___y_2434_ = v___y_2453_;
v___y_2435_ = v___x_2468_;
goto v___jp_2424_;
}
}
v___jp_2469_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
v___x_2481_ = l_Array_append___redArg(v___x_2326_, v___y_2480_);
lean_dec_ref(v___y_2480_);
lean_inc(v___y_2478_);
v___x_2482_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2482_, 0, v___y_2478_);
lean_ctor_set(v___x_2482_, 1, v___x_2325_);
lean_ctor_set(v___x_2482_, 2, v___x_2481_);
if (lean_obj_tag(v___y_2472_) == 1)
{
lean_object* v_val_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
v_val_2483_ = lean_ctor_get(v___y_2472_, 0);
lean_inc(v_val_2483_);
lean_dec_ref(v___y_2472_);
v___x_2484_ = l_Lean_SourceInfo_fromRef(v_val_2483_, v___x_2259_);
lean_dec(v_val_2483_);
v___x_2485_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11);
v___x_2486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2486_, 0, v___x_2484_);
lean_ctor_set(v___x_2486_, 1, v___x_2485_);
v___x_2487_ = l_Array_mkArray1___redArg(v___x_2486_);
v___y_2444_ = v___y_2470_;
v___y_2445_ = v___x_2482_;
v___y_2446_ = v___y_2471_;
v___y_2447_ = v___y_2473_;
v___y_2448_ = v___y_2474_;
v___y_2449_ = v___y_2475_;
v___y_2450_ = v___y_2476_;
v___y_2451_ = v___y_2477_;
v___y_2452_ = v___y_2478_;
v___y_2453_ = v___y_2479_;
v___y_2454_ = v___x_2487_;
goto v___jp_2443_;
}
else
{
lean_object* v___x_2488_; 
lean_dec(v___y_2472_);
v___x_2488_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2444_ = v___y_2470_;
v___y_2445_ = v___x_2482_;
v___y_2446_ = v___y_2471_;
v___y_2447_ = v___y_2473_;
v___y_2448_ = v___y_2474_;
v___y_2449_ = v___y_2475_;
v___y_2450_ = v___y_2476_;
v___y_2451_ = v___y_2477_;
v___y_2452_ = v___y_2478_;
v___y_2453_ = v___y_2479_;
v___y_2454_ = v___x_2488_;
goto v___jp_2443_;
}
}
v___jp_2489_:
{
if (v___y_2503_ == 0)
{
lean_object* v___x_2505_; 
lean_inc(v___y_2490_);
lean_inc_ref(v___y_2499_);
v___x_2505_ = lean_apply_9(v___f_2261_, v___y_2497_, v___y_2494_, v___y_2496_, v___y_2492_, v___y_2498_, v___y_2501_, v___y_2499_, v___y_2490_, lean_box(0));
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
lean_inc_n(v_a_2506_, 3);
lean_dec_ref(v___x_2505_);
v___x_2507_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2507_, 0, v_a_2506_);
lean_ctor_set(v___x_2507_, 1, v___x_2262_);
v___x_2508_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2508_, 0, v_a_2506_);
lean_ctor_set(v___x_2508_, 1, v___x_2325_);
lean_ctor_set(v___x_2508_, 2, v___x_2326_);
if (lean_obj_tag(v___y_2504_) == 0)
{
lean_object* v___x_2509_; 
v___x_2509_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2389_ = v___x_2508_;
v___y_2390_ = v___y_2499_;
v___y_2391_ = v___y_2490_;
v___y_2392_ = v___y_2500_;
v___y_2393_ = v___y_2491_;
v___y_2394_ = v___y_2502_;
v___y_2395_ = v___y_2493_;
v___y_2396_ = v_a_2506_;
v___y_2397_ = v___y_2495_;
v___y_2398_ = v___x_2507_;
v___y_2399_ = v___x_2509_;
goto v___jp_2388_;
}
else
{
lean_object* v_val_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; 
v_val_2510_ = lean_ctor_get(v___y_2504_, 0);
lean_inc(v_val_2510_);
lean_dec_ref(v___y_2504_);
v___x_2511_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___x_2512_ = lean_array_push(v___x_2511_, v_val_2510_);
v___y_2389_ = v___x_2508_;
v___y_2390_ = v___y_2499_;
v___y_2391_ = v___y_2490_;
v___y_2392_ = v___y_2500_;
v___y_2393_ = v___y_2491_;
v___y_2394_ = v___y_2502_;
v___y_2395_ = v___y_2493_;
v___y_2396_ = v_a_2506_;
v___y_2397_ = v___y_2495_;
v___y_2398_ = v___x_2507_;
v___y_2399_ = v___x_2512_;
goto v___jp_2388_;
}
}
else
{
lean_object* v_a_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2520_; 
lean_dec(v___y_2504_);
lean_dec(v___y_2502_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2493_);
lean_dec(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec_ref(v___x_2262_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
lean_dec(v_tk_2253_);
v_a_2513_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2520_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2520_ == 0)
{
v___x_2515_ = v___x_2505_;
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_a_2513_);
lean_dec(v___x_2505_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2520_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v___x_2518_; 
if (v_isShared_2516_ == 0)
{
v___x_2518_ = v___x_2515_;
goto v_reusejp_2517_;
}
else
{
lean_object* v_reuseFailAlloc_2519_; 
v_reuseFailAlloc_2519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2519_, 0, v_a_2513_);
v___x_2518_ = v_reuseFailAlloc_2519_;
goto v_reusejp_2517_;
}
v_reusejp_2517_:
{
return v___x_2518_;
}
}
}
}
else
{
lean_object* v___x_2521_; 
lean_dec_ref(v___x_2262_);
lean_dec(v___x_2260_);
lean_inc(v___y_2490_);
lean_inc_ref(v___y_2499_);
v___x_2521_ = lean_apply_9(v___f_2261_, v___y_2497_, v___y_2494_, v___y_2496_, v___y_2492_, v___y_2498_, v___y_2501_, v___y_2499_, v___y_2490_, lean_box(0));
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc_n(v_a_2522_, 2);
lean_dec_ref(v___x_2521_);
v___x_2523_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__12, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__12_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__12);
lean_inc_ref(v___x_2256_);
lean_inc_ref(v___x_2255_);
lean_inc_ref(v___x_2254_);
v___x_2524_ = l_Lean_Name_mkStr4(v___x_2254_, v___x_2255_, v___x_2256_, v___x_2523_);
v___x_2525_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__13, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__13_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__13);
v___x_2526_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2526_, 0, v_a_2522_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
if (lean_obj_tag(v___y_2504_) == 0)
{
lean_object* v___x_2527_; 
v___x_2527_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2470_ = v___y_2499_;
v___y_2471_ = v___y_2490_;
v___y_2472_ = v___y_2500_;
v___y_2473_ = v___x_2524_;
v___y_2474_ = v___y_2491_;
v___y_2475_ = v___y_2502_;
v___y_2476_ = v___y_2493_;
v___y_2477_ = v___y_2495_;
v___y_2478_ = v_a_2522_;
v___y_2479_ = v___x_2526_;
v___y_2480_ = v___x_2527_;
goto v___jp_2469_;
}
else
{
lean_object* v_val_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v_val_2528_ = lean_ctor_get(v___y_2504_, 0);
lean_inc(v_val_2528_);
lean_dec_ref(v___y_2504_);
v___x_2529_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___x_2530_ = lean_array_push(v___x_2529_, v_val_2528_);
v___y_2470_ = v___y_2499_;
v___y_2471_ = v___y_2490_;
v___y_2472_ = v___y_2500_;
v___y_2473_ = v___x_2524_;
v___y_2474_ = v___y_2491_;
v___y_2475_ = v___y_2502_;
v___y_2476_ = v___y_2493_;
v___y_2477_ = v___y_2495_;
v___y_2478_ = v_a_2522_;
v___y_2479_ = v___x_2526_;
v___y_2480_ = v___x_2530_;
goto v___jp_2469_;
}
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
lean_dec(v___y_2504_);
lean_dec(v___y_2502_);
lean_dec(v___y_2500_);
lean_dec_ref(v___y_2499_);
lean_dec_ref(v___y_2495_);
lean_dec(v___y_2493_);
lean_dec(v___y_2491_);
lean_dec(v___y_2490_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
lean_dec(v_tk_2253_);
v_a_2531_ = lean_ctor_get(v___x_2521_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2533_ = v___x_2521_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2521_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2531_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
}
}
v___jp_2539_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; uint8_t v___x_2558_; 
v___x_2556_ = lean_unsigned_to_nat(5u);
v___x_2557_ = l_Lean_Syntax_getArg(v___y_2540_, v___x_2556_);
lean_dec(v___y_2540_);
v___x_2558_ = l_Lean_Syntax_matchesNull(v___x_2557_, v___x_2258_);
if (v___x_2558_ == 0)
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
lean_dec(v_args_2547_);
lean_dec(v___y_2544_);
lean_dec(v___y_2543_);
lean_dec(v___y_2542_);
lean_dec(v___y_2541_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
v___x_2559_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17);
v___x_2560_ = l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(v___x_2559_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_object* v_a_2561_; 
v_a_2561_ = lean_ctor_get(v___x_2560_, 0);
lean_inc(v_a_2561_);
lean_dec_ref(v___x_2560_);
v___y_2313_ = v___y_2545_;
v_stx_2314_ = v_a_2561_;
v___y_2315_ = v___y_2554_;
v___y_2316_ = v___y_2555_;
goto v___jp_2312_;
}
else
{
lean_object* v_a_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2569_; 
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec_ref(v___y_2545_);
lean_dec(v_tk_2253_);
v_a_2562_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2569_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2569_ == 0)
{
v___x_2564_ = v___x_2560_;
v_isShared_2565_ = v_isSharedCheck_2569_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_a_2562_);
lean_dec(v___x_2560_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2569_;
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
lean_object* v_reuseFailAlloc_2568_; 
v_reuseFailAlloc_2568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2568_, 0, v_a_2562_);
v___x_2567_ = v_reuseFailAlloc_2568_;
goto v_reusejp_2566_;
}
v_reusejp_2566_:
{
return v___x_2567_;
}
}
}
}
else
{
lean_object* v___x_2570_; 
v___x_2570_ = l_Lean_Syntax_getOptional_x3f(v___y_2541_);
lean_dec(v___y_2541_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_box(0);
v___y_2490_ = v___y_2555_;
v___y_2491_ = v_args_2547_;
v___y_2492_ = v___y_2551_;
v___y_2493_ = v___y_2544_;
v___y_2494_ = v___y_2549_;
v___y_2495_ = v___y_2545_;
v___y_2496_ = v___y_2550_;
v___y_2497_ = v___y_2548_;
v___y_2498_ = v___y_2552_;
v___y_2499_ = v___y_2554_;
v___y_2500_ = v___y_2542_;
v___y_2501_ = v___y_2553_;
v___y_2502_ = v___y_2543_;
v___y_2503_ = v___y_2546_;
v___y_2504_ = v___x_2571_;
goto v___jp_2489_;
}
else
{
lean_object* v_val_2572_; lean_object* v___x_2574_; uint8_t v_isShared_2575_; uint8_t v_isSharedCheck_2579_; 
v_val_2572_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2574_ = v___x_2570_;
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
else
{
lean_inc(v_val_2572_);
lean_dec(v___x_2570_);
v___x_2574_ = lean_box(0);
v_isShared_2575_ = v_isSharedCheck_2579_;
goto v_resetjp_2573_;
}
v_resetjp_2573_:
{
lean_object* v___x_2577_; 
if (v_isShared_2575_ == 0)
{
v___x_2577_ = v___x_2574_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_val_2572_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
v___y_2490_ = v___y_2555_;
v___y_2491_ = v_args_2547_;
v___y_2492_ = v___y_2551_;
v___y_2493_ = v___y_2544_;
v___y_2494_ = v___y_2549_;
v___y_2495_ = v___y_2545_;
v___y_2496_ = v___y_2550_;
v___y_2497_ = v___y_2548_;
v___y_2498_ = v___y_2552_;
v___y_2499_ = v___y_2554_;
v___y_2500_ = v___y_2542_;
v___y_2501_ = v___y_2553_;
v___y_2502_ = v___y_2543_;
v___y_2503_ = v___y_2546_;
v___y_2504_ = v___x_2577_;
goto v___jp_2489_;
}
}
}
}
}
v___jp_2580_:
{
lean_object* v___x_2596_; uint8_t v___x_2597_; 
v___x_2596_ = l_Lean_Syntax_getArg(v___y_2581_, v___x_2263_);
v___x_2597_ = l_Lean_Syntax_isNone(v___x_2596_);
if (v___x_2597_ == 0)
{
uint8_t v___x_2598_; 
lean_inc(v___x_2596_);
v___x_2598_ = l_Lean_Syntax_matchesNull(v___x_2596_, v___x_2264_);
if (v___x_2598_ == 0)
{
lean_object* v___x_2599_; lean_object* v___x_2600_; 
lean_dec(v___x_2596_);
lean_dec(v_only_2587_);
lean_dec(v___y_2584_);
lean_dec(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
v___x_2599_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17);
v___x_2600_ = l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(v___x_2599_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_, v___y_2595_);
lean_dec(v___y_2593_);
lean_dec_ref(v___y_2592_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref(v___x_2600_);
v___y_2313_ = v___y_2585_;
v_stx_2314_ = v_a_2601_;
v___y_2315_ = v___y_2594_;
v___y_2316_ = v___y_2595_;
goto v___jp_2312_;
}
else
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2609_; 
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
lean_dec_ref(v___y_2585_);
lean_dec(v_tk_2253_);
v_a_2602_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2604_ = v___x_2600_;
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2600_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2607_; 
if (v_isShared_2605_ == 0)
{
v___x_2607_ = v___x_2604_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2602_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
}
else
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = l_Lean_Syntax_getArg(v___x_2596_, v___x_2265_);
lean_dec(v___x_2265_);
lean_dec(v___x_2596_);
v___x_2611_ = l_Lean_Syntax_getArgs(v___x_2610_);
lean_dec(v___x_2610_);
v___x_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
v___y_2540_ = v___y_2581_;
v___y_2541_ = v___y_2582_;
v___y_2542_ = v_only_2587_;
v___y_2543_ = v___y_2583_;
v___y_2544_ = v___y_2584_;
v___y_2545_ = v___y_2585_;
v___y_2546_ = v___y_2586_;
v_args_2547_ = v___x_2612_;
v___y_2548_ = v___y_2588_;
v___y_2549_ = v___y_2589_;
v___y_2550_ = v___y_2590_;
v___y_2551_ = v___y_2591_;
v___y_2552_ = v___y_2592_;
v___y_2553_ = v___y_2593_;
v___y_2554_ = v___y_2594_;
v___y_2555_ = v___y_2595_;
goto v___jp_2539_;
}
}
else
{
lean_object* v___x_2613_; 
lean_dec(v___x_2596_);
lean_dec(v___x_2265_);
v___x_2613_ = lean_box(0);
v___y_2540_ = v___y_2581_;
v___y_2541_ = v___y_2582_;
v___y_2542_ = v_only_2587_;
v___y_2543_ = v___y_2583_;
v___y_2544_ = v___y_2584_;
v___y_2545_ = v___y_2585_;
v___y_2546_ = v___y_2586_;
v_args_2547_ = v___x_2613_;
v___y_2548_ = v___y_2588_;
v___y_2549_ = v___y_2589_;
v___y_2550_ = v___y_2590_;
v___y_2551_ = v___y_2591_;
v___y_2552_ = v___y_2592_;
v___y_2553_ = v___y_2593_;
v___y_2554_ = v___y_2594_;
v___y_2555_ = v___y_2595_;
goto v___jp_2539_;
}
}
v___jp_2614_:
{
lean_object* v_usedTheorems_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v_usedTheorems_2619_ = lean_ctor_get(v___y_2616_, 0);
v___x_2620_ = l_Lean_Syntax_unsetTrailing(v___y_2615_);
v___x_2621_ = l_Lean_Elab_Tactic_mkSimpOnly(v___x_2620_, v_usedTheorems_2619_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_object* v_a_2622_; uint8_t v___x_2623_; 
v_a_2622_ = lean_ctor_get(v___x_2621_, 0);
lean_inc_n(v_a_2622_, 2);
lean_dec_ref(v___x_2621_);
v___x_2623_ = l_Lean_Syntax_isOfKind(v_a_2622_, v___x_2323_);
lean_dec(v___x_2323_);
if (v___x_2623_ == 0)
{
lean_object* v___x_2624_; lean_object* v___x_2625_; 
lean_inc(v_ref_2319_);
lean_dec(v_a_2622_);
lean_dec(v___y_2618_);
lean_dec(v___x_2267_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
v___x_2624_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17);
v___x_2625_ = l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(v___x_2624_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
if (lean_obj_tag(v___x_2625_) == 0)
{
lean_object* v_a_2626_; 
v_a_2626_ = lean_ctor_get(v___x_2625_, 0);
lean_inc(v_a_2626_);
lean_dec_ref(v___x_2625_);
v___y_2291_ = v___y_2616_;
v_stx_2292_ = v_a_2626_;
v___y_2293_ = v___y_2283_;
v_ref_2294_ = v_ref_2319_;
v___y_2295_ = v___y_2284_;
goto v___jp_2290_;
}
else
{
lean_object* v_a_2627_; lean_object* v___x_2629_; uint8_t v_isShared_2630_; uint8_t v_isSharedCheck_2634_; 
lean_dec_ref(v___y_2616_);
lean_dec(v_ref_2319_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v_tk_2253_);
v_a_2627_ = lean_ctor_get(v___x_2625_, 0);
v_isSharedCheck_2634_ = !lean_is_exclusive(v___x_2625_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2629_ = v___x_2625_;
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
else
{
lean_inc(v_a_2627_);
lean_dec(v___x_2625_);
v___x_2629_ = lean_box(0);
v_isShared_2630_ = v_isSharedCheck_2634_;
goto v_resetjp_2628_;
}
v_resetjp_2628_:
{
lean_object* v___x_2632_; 
if (v_isShared_2630_ == 0)
{
v___x_2632_ = v___x_2629_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2627_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
else
{
lean_object* v___x_2635_; uint8_t v___x_2636_; 
v___x_2635_ = l_Lean_Syntax_getArg(v_a_2622_, v___x_2265_);
lean_inc(v___x_2635_);
v___x_2636_ = l_Lean_Syntax_isOfKind(v___x_2635_, v___x_2266_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
lean_inc(v_ref_2319_);
lean_dec(v___x_2635_);
lean_dec(v_a_2622_);
lean_dec(v___y_2618_);
lean_dec(v___x_2267_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
v___x_2637_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17);
v___x_2638_ = l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(v___x_2637_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
if (lean_obj_tag(v___x_2638_) == 0)
{
lean_object* v_a_2639_; 
v_a_2639_ = lean_ctor_get(v___x_2638_, 0);
lean_inc(v_a_2639_);
lean_dec_ref(v___x_2638_);
v___y_2291_ = v___y_2616_;
v_stx_2292_ = v_a_2639_;
v___y_2293_ = v___y_2283_;
v_ref_2294_ = v_ref_2319_;
v___y_2295_ = v___y_2284_;
goto v___jp_2290_;
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
lean_dec_ref(v___y_2616_);
lean_dec(v_ref_2319_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v_tk_2253_);
v_a_2640_ = lean_ctor_get(v___x_2638_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2638_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2638_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2638_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2640_);
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
else
{
lean_object* v___x_2648_; lean_object* v___x_2649_; uint8_t v___x_2650_; 
v___x_2648_ = l_Lean_Syntax_getArg(v_a_2622_, v___x_2267_);
lean_dec(v___x_2267_);
v___x_2649_ = l_Lean_Syntax_getArg(v_a_2622_, v___x_2264_);
v___x_2650_ = l_Lean_Syntax_isNone(v___x_2649_);
if (v___x_2650_ == 0)
{
uint8_t v___x_2651_; 
lean_inc(v___x_2649_);
v___x_2651_ = l_Lean_Syntax_matchesNull(v___x_2649_, v___x_2265_);
if (v___x_2651_ == 0)
{
lean_object* v___x_2652_; lean_object* v___x_2653_; 
lean_inc(v_ref_2319_);
lean_dec(v___x_2649_);
lean_dec(v___x_2648_);
lean_dec(v___x_2635_);
lean_dec(v_a_2622_);
lean_dec(v___y_2618_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
v___x_2652_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__17);
v___x_2653_ = l_panic___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__9(v___x_2652_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v_a_2654_; 
v_a_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_a_2654_);
lean_dec_ref(v___x_2653_);
v___y_2291_ = v___y_2616_;
v_stx_2292_ = v_a_2654_;
v___y_2293_ = v___y_2283_;
v_ref_2294_ = v_ref_2319_;
v___y_2295_ = v___y_2284_;
goto v___jp_2290_;
}
else
{
lean_object* v_a_2655_; lean_object* v___x_2657_; uint8_t v_isShared_2658_; uint8_t v_isSharedCheck_2662_; 
lean_dec_ref(v___y_2616_);
lean_dec(v_ref_2319_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v_tk_2253_);
v_a_2655_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2657_ = v___x_2653_;
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
else
{
lean_inc(v_a_2655_);
lean_dec(v___x_2653_);
v___x_2657_ = lean_box(0);
v_isShared_2658_ = v_isSharedCheck_2662_;
goto v_resetjp_2656_;
}
v_resetjp_2656_:
{
lean_object* v___x_2660_; 
if (v_isShared_2658_ == 0)
{
v___x_2660_ = v___x_2657_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_a_2655_);
v___x_2660_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2659_;
}
v_reusejp_2659_:
{
return v___x_2660_;
}
}
}
}
else
{
lean_object* v___x_2663_; lean_object* v___x_2664_; 
v___x_2663_ = l_Lean_Syntax_getArg(v___x_2649_, v___x_2258_);
lean_dec(v___x_2649_);
v___x_2664_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2663_);
v___y_2581_ = v_a_2622_;
v___y_2582_ = v___x_2648_;
v___y_2583_ = v___x_2635_;
v___y_2584_ = v___y_2618_;
v___y_2585_ = v___y_2616_;
v___y_2586_ = v___y_2617_;
v_only_2587_ = v___x_2664_;
v___y_2588_ = v___y_2277_;
v___y_2589_ = v___y_2278_;
v___y_2590_ = v___y_2279_;
v___y_2591_ = v___y_2280_;
v___y_2592_ = v___y_2281_;
v___y_2593_ = v___y_2282_;
v___y_2594_ = v___y_2283_;
v___y_2595_ = v___y_2284_;
goto v___jp_2580_;
}
}
else
{
lean_object* v___x_2665_; 
lean_dec(v___x_2649_);
v___x_2665_ = lean_box(0);
v___y_2581_ = v_a_2622_;
v___y_2582_ = v___x_2648_;
v___y_2583_ = v___x_2635_;
v___y_2584_ = v___y_2618_;
v___y_2585_ = v___y_2616_;
v___y_2586_ = v___y_2617_;
v_only_2587_ = v___x_2665_;
v___y_2588_ = v___y_2277_;
v___y_2589_ = v___y_2278_;
v___y_2590_ = v___y_2279_;
v___y_2591_ = v___y_2280_;
v___y_2592_ = v___y_2281_;
v___y_2593_ = v___y_2282_;
v___y_2594_ = v___y_2283_;
v___y_2595_ = v___y_2284_;
goto v___jp_2580_;
}
}
}
}
else
{
lean_object* v_a_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2673_; 
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2616_);
lean_dec(v___x_2323_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___x_2267_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
lean_dec(v_tk_2253_);
v_a_2666_ = lean_ctor_get(v___x_2621_, 0);
v_isSharedCheck_2673_ = !lean_is_exclusive(v___x_2621_);
if (v_isSharedCheck_2673_ == 0)
{
v___x_2668_ = v___x_2621_;
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_a_2666_);
lean_dec(v___x_2621_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2673_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2671_; 
if (v_isShared_2669_ == 0)
{
v___x_2671_ = v___x_2668_;
goto v_reusejp_2670_;
}
else
{
lean_object* v_reuseFailAlloc_2672_; 
v_reuseFailAlloc_2672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2672_, 0, v_a_2666_);
v___x_2671_ = v_reuseFailAlloc_2672_;
goto v_reusejp_2670_;
}
v_reusejp_2670_:
{
return v___x_2671_;
}
}
}
}
v___jp_2674_:
{
if (lean_obj_tag(v_usingArg_2268_) == 0)
{
v___y_2615_ = v___y_2675_;
v___y_2616_ = v___y_2676_;
v___y_2617_ = v___y_2677_;
v___y_2618_ = v_usingArg_2268_;
goto v___jp_2614_;
}
else
{
lean_object* v_val_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2686_; 
v_val_2678_ = lean_ctor_get(v_usingArg_2268_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v_usingArg_2268_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2680_ = v_usingArg_2268_;
v_isShared_2681_ = v_isSharedCheck_2686_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_val_2678_);
lean_dec(v_usingArg_2268_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2686_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2682_; lean_object* v___x_2684_; 
v___x_2682_ = l_Lean_Syntax_unsetTrailing(v_val_2678_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set(v___x_2680_, 0, v___x_2682_);
v___x_2684_ = v___x_2680_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v___x_2682_);
v___x_2684_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
v___y_2615_ = v___y_2675_;
v___y_2616_ = v___y_2676_;
v___y_2617_ = v___y_2677_;
v___y_2618_ = v___x_2684_;
goto v___jp_2614_;
}
}
}
}
v___jp_2687_:
{
if (v___y_2691_ == 0)
{
lean_dec(v___y_2688_);
lean_dec(v___x_2323_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v_usingArg_2268_);
lean_dec(v___x_2267_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
lean_dec(v_tk_2253_);
v___y_2287_ = v___y_2689_;
goto v___jp_2286_;
}
else
{
v___y_2675_ = v___y_2688_;
v___y_2676_ = v___y_2689_;
v___y_2677_ = v___y_2690_;
goto v___jp_2674_;
}
}
v___jp_2692_:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___f_2702_; lean_object* v___x_2703_; 
v___x_2698_ = l_Lean_Meta_Simp_Context_setFailIfUnchanged(v___y_2697_, v___x_2320_);
v___x_2699_ = lean_box(v___x_2259_);
v___x_2700_ = lean_box(v___x_2320_);
v___x_2701_ = lean_box(v___x_2270_);
lean_inc(v___x_2265_);
lean_inc_ref(v___x_2262_);
lean_inc(v_usingArg_2268_);
lean_inc(v___x_2258_);
lean_inc(v_tk_2253_);
lean_inc(v___x_2267_);
v___f_2702_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__5___boxed), 23, 13);
lean_closure_set(v___f_2702_, 0, v___x_2267_);
lean_closure_set(v___f_2702_, 1, v_tk_2253_);
lean_closure_set(v___f_2702_, 2, v___x_2325_);
lean_closure_set(v___f_2702_, 3, v___x_2258_);
lean_closure_set(v___f_2702_, 4, v___x_2698_);
lean_closure_set(v___f_2702_, 5, v___y_2693_);
lean_closure_set(v___f_2702_, 6, v___x_2699_);
lean_closure_set(v___f_2702_, 7, v_usingArg_2268_);
lean_closure_set(v___f_2702_, 8, v___x_2700_);
lean_closure_set(v___f_2702_, 9, v___x_2701_);
lean_closure_set(v___f_2702_, 10, v___x_2262_);
lean_closure_set(v___f_2702_, 11, v___x_2265_);
lean_closure_set(v___f_2702_, 12, v_usingTk_x3f_2271_);
v___x_2703_ = l_Lean_Elab_Tactic_Simp_DischargeWrapper_with___redArg(v___y_2695_, v___f_2702_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
lean_dec(v___y_2695_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2705_; uint8_t v___x_2706_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
lean_inc(v_a_2704_);
lean_dec_ref(v___x_2703_);
v___x_2705_ = l_Lean_Elab_Tactic_tactic_simp_trace;
v___x_2706_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__10(v_options_2318_, v___x_2705_);
if (v___x_2706_ == 0)
{
if (lean_obj_tag(v_squeeze_2272_) == 0)
{
v___y_2688_ = v___y_2694_;
v___y_2689_ = v_a_2704_;
v___y_2690_ = v___y_2696_;
v___y_2691_ = v___x_2706_;
goto v___jp_2687_;
}
else
{
v___y_2688_ = v___y_2694_;
v___y_2689_ = v_a_2704_;
v___y_2690_ = v___y_2696_;
v___y_2691_ = v___x_2270_;
goto v___jp_2687_;
}
}
else
{
v___y_2675_ = v___y_2694_;
v___y_2676_ = v_a_2704_;
v___y_2677_ = v___y_2696_;
goto v___jp_2674_;
}
}
else
{
lean_object* v_a_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2714_; 
lean_dec(v___y_2694_);
lean_dec(v___x_2323_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v_usingArg_2268_);
lean_dec(v___x_2267_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
lean_dec(v_tk_2253_);
v_a_2707_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2714_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2709_ = v___x_2703_;
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_a_2707_);
lean_dec(v___x_2703_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2714_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2712_; 
if (v_isShared_2710_ == 0)
{
v___x_2712_ = v___x_2709_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v_a_2707_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
}
}
v___jp_2715_:
{
v___y_2693_ = v___y_2717_;
v___y_2694_ = v___y_2719_;
v___y_2695_ = v___y_2716_;
v___y_2696_ = v___x_2320_;
v___y_2697_ = v___y_2718_;
goto v___jp_2692_;
}
v___jp_2720_:
{
lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; uint8_t v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2724_ = l_Array_append___redArg(v___x_2326_, v___y_2723_);
lean_dec_ref(v___y_2723_);
lean_inc_n(v___x_2321_, 2);
v___x_2725_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2321_);
lean_ctor_set(v___x_2725_, 1, v___x_2325_);
lean_ctor_set(v___x_2725_, 2, v___x_2724_);
v___x_2726_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2726_, 0, v___x_2321_);
lean_ctor_set(v___x_2726_, 1, v___x_2325_);
lean_ctor_set(v___x_2726_, 2, v___x_2326_);
lean_inc(v___x_2323_);
v___x_2727_ = l_Lean_Syntax_node6(v___x_2321_, v___x_2323_, v___x_2324_, v___x_2269_, v___y_2722_, v___y_2721_, v___x_2725_, v___x_2726_);
v___x_2728_ = 0;
v___x_2729_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__18, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__18_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__18);
v___x_2730_ = lean_box(v___x_2320_);
v___x_2731_ = lean_box(v___x_2728_);
v___x_2732_ = lean_box(v___x_2320_);
lean_inc(v___x_2727_);
v___x_2733_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkSimpContext___boxed), 14, 5);
lean_closure_set(v___x_2733_, 0, v___x_2727_);
lean_closure_set(v___x_2733_, 1, v___x_2730_);
lean_closure_set(v___x_2733_, 2, v___x_2731_);
lean_closure_set(v___x_2733_, 3, v___x_2732_);
lean_closure_set(v___x_2733_, 4, v___x_2729_);
v___x_2734_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_2733_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_, v___y_2284_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref(v___x_2734_);
if (lean_obj_tag(v_unfold_2273_) == 0)
{
lean_object* v_ctx_2736_; lean_object* v_simprocs_2737_; lean_object* v_dischargeWrapper_2738_; 
v_ctx_2736_ = lean_ctor_get(v_a_2735_, 0);
lean_inc_ref(v_ctx_2736_);
v_simprocs_2737_ = lean_ctor_get(v_a_2735_, 1);
lean_inc_ref(v_simprocs_2737_);
v_dischargeWrapper_2738_ = lean_ctor_get(v_a_2735_, 2);
lean_inc(v_dischargeWrapper_2738_);
lean_dec(v_a_2735_);
v___y_2716_ = v_dischargeWrapper_2738_;
v___y_2717_ = v_simprocs_2737_;
v___y_2718_ = v_ctx_2736_;
v___y_2719_ = v___x_2727_;
goto v___jp_2715_;
}
else
{
if (v___x_2270_ == 0)
{
lean_object* v_ctx_2739_; lean_object* v_simprocs_2740_; lean_object* v_dischargeWrapper_2741_; 
v_ctx_2739_ = lean_ctor_get(v_a_2735_, 0);
lean_inc_ref(v_ctx_2739_);
v_simprocs_2740_ = lean_ctor_get(v_a_2735_, 1);
lean_inc_ref(v_simprocs_2740_);
v_dischargeWrapper_2741_ = lean_ctor_get(v_a_2735_, 2);
lean_inc(v_dischargeWrapper_2741_);
lean_dec(v_a_2735_);
v___y_2716_ = v_dischargeWrapper_2741_;
v___y_2717_ = v_simprocs_2740_;
v___y_2718_ = v_ctx_2739_;
v___y_2719_ = v___x_2727_;
goto v___jp_2715_;
}
else
{
lean_object* v_ctx_2742_; lean_object* v_simprocs_2743_; lean_object* v_dischargeWrapper_2744_; lean_object* v___x_2745_; 
v_ctx_2742_ = lean_ctor_get(v_a_2735_, 0);
lean_inc_ref(v_ctx_2742_);
v_simprocs_2743_ = lean_ctor_get(v_a_2735_, 1);
lean_inc_ref(v_simprocs_2743_);
v_dischargeWrapper_2744_ = lean_ctor_get(v_a_2735_, 2);
lean_inc(v_dischargeWrapper_2744_);
lean_dec(v_a_2735_);
v___x_2745_ = l_Lean_Meta_Simp_Context_setAutoUnfold(v_ctx_2742_);
v___y_2693_ = v_simprocs_2743_;
v___y_2694_ = v___x_2727_;
v___y_2695_ = v_dischargeWrapper_2744_;
v___y_2696_ = v___x_2270_;
v___y_2697_ = v___x_2745_;
goto v___jp_2692_;
}
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_dec(v___x_2727_);
lean_dec(v___x_2323_);
lean_dec(v___y_2284_);
lean_dec_ref(v___y_2283_);
lean_dec(v___y_2282_);
lean_dec_ref(v___y_2281_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v_usingTk_x3f_2271_);
lean_dec(v_usingArg_2268_);
lean_dec(v___x_2267_);
lean_dec(v___x_2265_);
lean_dec_ref(v___x_2262_);
lean_dec_ref(v___f_2261_);
lean_dec(v___x_2260_);
lean_dec(v___x_2258_);
lean_dec(v___x_2257_);
lean_dec_ref(v___x_2256_);
lean_dec_ref(v___x_2255_);
lean_dec_ref(v___x_2254_);
lean_dec(v_tk_2253_);
v_a_2746_ = lean_ctor_get(v___x_2734_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2734_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2734_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2734_);
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
v___jp_2754_:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2757_ = l_Array_append___redArg(v___x_2326_, v___y_2756_);
lean_dec_ref(v___y_2756_);
lean_inc(v___x_2321_);
v___x_2758_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2758_, 0, v___x_2321_);
lean_ctor_set(v___x_2758_, 1, v___x_2325_);
lean_ctor_set(v___x_2758_, 2, v___x_2757_);
if (lean_obj_tag(v_args_2274_) == 1)
{
lean_object* v_val_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; 
v_val_2759_ = lean_ctor_get(v_args_2274_, 0);
v___x_2760_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__9);
lean_inc_n(v___x_2321_, 3);
v___x_2761_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2321_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
v___x_2762_ = l_Array_append___redArg(v___x_2326_, v_val_2759_);
v___x_2763_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2763_, 0, v___x_2321_);
lean_ctor_set(v___x_2763_, 1, v___x_2325_);
lean_ctor_set(v___x_2763_, 2, v___x_2762_);
v___x_2764_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__10);
v___x_2765_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2321_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = l_Array_mkArray3___redArg(v___x_2761_, v___x_2763_, v___x_2765_);
v___y_2721_ = v___x_2758_;
v___y_2722_ = v___y_2755_;
v___y_2723_ = v___x_2766_;
goto v___jp_2720_;
}
else
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2721_ = v___x_2758_;
v___y_2722_ = v___y_2755_;
v___y_2723_ = v___x_2767_;
goto v___jp_2720_;
}
}
v___jp_2768_:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; 
v___x_2770_ = l_Array_append___redArg(v___x_2326_, v___y_2769_);
lean_dec_ref(v___y_2769_);
lean_inc(v___x_2321_);
v___x_2771_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2771_, 0, v___x_2321_);
lean_ctor_set(v___x_2771_, 1, v___x_2325_);
lean_ctor_set(v___x_2771_, 2, v___x_2770_);
if (lean_obj_tag(v_only_2275_) == 1)
{
lean_object* v_val_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v_val_2772_ = lean_ctor_get(v_only_2275_, 0);
v___x_2773_ = l_Lean_SourceInfo_fromRef(v_val_2772_, v___x_2259_);
v___x_2774_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__11);
v___x_2775_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
v___x_2776_ = l_Array_mkArray1___redArg(v___x_2775_);
v___y_2755_ = v___x_2771_;
v___y_2756_ = v___x_2776_;
goto v___jp_2754_;
}
else
{
lean_object* v___x_2777_; 
v___x_2777_ = lean_mk_empty_array_with_capacity(v___x_2258_);
v___y_2755_ = v___x_2771_;
v___y_2756_ = v___x_2777_;
goto v___jp_2754_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___boxed(lean_object** _args){
lean_object* v_tk_2782_ = _args[0];
lean_object* v___x_2783_ = _args[1];
lean_object* v___x_2784_ = _args[2];
lean_object* v___x_2785_ = _args[3];
lean_object* v___x_2786_ = _args[4];
lean_object* v___x_2787_ = _args[5];
lean_object* v___x_2788_ = _args[6];
lean_object* v___x_2789_ = _args[7];
lean_object* v___f_2790_ = _args[8];
lean_object* v___x_2791_ = _args[9];
lean_object* v___x_2792_ = _args[10];
lean_object* v___x_2793_ = _args[11];
lean_object* v___x_2794_ = _args[12];
lean_object* v___x_2795_ = _args[13];
lean_object* v___x_2796_ = _args[14];
lean_object* v_usingArg_2797_ = _args[15];
lean_object* v___x_2798_ = _args[16];
lean_object* v___x_2799_ = _args[17];
lean_object* v_usingTk_x3f_2800_ = _args[18];
lean_object* v_squeeze_2801_ = _args[19];
lean_object* v_unfold_2802_ = _args[20];
lean_object* v_args_2803_ = _args[21];
lean_object* v_only_2804_ = _args[22];
lean_object* v___y_2805_ = _args[23];
lean_object* v___y_2806_ = _args[24];
lean_object* v___y_2807_ = _args[25];
lean_object* v___y_2808_ = _args[26];
lean_object* v___y_2809_ = _args[27];
lean_object* v___y_2810_ = _args[28];
lean_object* v___y_2811_ = _args[29];
lean_object* v___y_2812_ = _args[30];
lean_object* v___y_2813_ = _args[31];
lean_object* v___y_2814_ = _args[32];
_start:
{
uint8_t v___x_82159__boxed_2815_; uint8_t v___x_82169__boxed_2816_; lean_object* v_res_2817_; 
v___x_82159__boxed_2815_ = lean_unbox(v___x_2788_);
v___x_82169__boxed_2816_ = lean_unbox(v___x_2799_);
v_res_2817_ = l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6(v_tk_2782_, v___x_2783_, v___x_2784_, v___x_2785_, v___x_2786_, v___x_2787_, v___x_82159__boxed_2815_, v___x_2789_, v___f_2790_, v___x_2791_, v___x_2792_, v___x_2793_, v___x_2794_, v___x_2795_, v___x_2796_, v_usingArg_2797_, v___x_2798_, v___x_82169__boxed_2816_, v_usingTk_x3f_2800_, v_squeeze_2801_, v_unfold_2802_, v_args_2803_, v_only_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_, v___y_2813_);
lean_dec(v_only_2804_);
lean_dec(v_args_2803_);
lean_dec(v_unfold_2802_);
lean_dec(v_squeeze_2801_);
lean_dec(v___x_2795_);
lean_dec(v___x_2793_);
lean_dec(v___x_2792_);
return v_res_2817_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0(void){
_start:
{
lean_object* v___x_2818_; 
v___x_2818_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_2818_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1(void){
_start:
{
lean_object* v___x_2819_; 
v___x_2819_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2819_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2(void){
_start:
{
lean_object* v___x_2820_; 
v___x_2820_ = lean_mk_string_unchecked("simpa", 5, 5);
return v___x_2820_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3(void){
_start:
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
v___x_2821_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2);
v___x_2822_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1);
v___x_2823_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1);
v___x_2824_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0);
v___x_2825_ = l_Lean_Name_mkStr4(v___x_2824_, v___x_2823_, v___x_2822_, v___x_2821_);
return v___x_2825_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__4(void){
_start:
{
lean_object* v___f_2826_; 
v___f_2826_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__0___boxed), 9, 0);
return v___f_2826_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__5(void){
_start:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2827_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8, &l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___closed__8);
v___x_2828_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1);
v___x_2829_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1);
v___x_2830_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0);
v___x_2831_ = l_Lean_Name_mkStr4(v___x_2830_, v___x_2829_, v___x_2828_, v___x_2827_);
return v___x_2831_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__6(void){
_start:
{
lean_object* v___x_2832_; 
v___x_2832_ = lean_mk_string_unchecked("simpaArgsRest", 13, 13);
return v___x_2832_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__7(void){
_start:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; 
v___x_2833_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__6, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__6_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__6);
v___x_2834_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1);
v___x_2835_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1);
v___x_2836_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0);
v___x_2837_ = l_Lean_Name_mkStr4(v___x_2836_, v___x_2835_, v___x_2834_, v___x_2833_);
return v___x_2837_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__8(void){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_mk_string_unchecked("optConfig", 9, 9);
return v___x_2838_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__9(void){
_start:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2839_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__8, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__8_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__8);
v___x_2840_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1);
v___x_2841_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1);
v___x_2842_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0);
v___x_2843_ = l_Lean_Name_mkStr4(v___x_2842_, v___x_2841_, v___x_2840_, v___x_2839_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa(lean_object* v_stx_2844_, lean_object* v_a_2845_, lean_object* v_a_2846_, lean_object* v_a_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_, lean_object* v_a_2850_, lean_object* v_a_2851_, lean_object* v_a_2852_){
_start:
{
lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; uint8_t v___x_2859_; 
v___x_2854_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0);
v___x_2855_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__1);
v___x_2856_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1);
v___x_2857_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__2);
v___x_2858_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3);
lean_inc(v_stx_2844_);
v___x_2859_ = l_Lean_Syntax_isOfKind(v_stx_2844_, v___x_2858_);
if (v___x_2859_ == 0)
{
lean_object* v___x_2860_; 
lean_dec(v_stx_2844_);
v___x_2860_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_2860_;
}
else
{
lean_object* v___f_2861_; lean_object* v___x_2862_; lean_object* v_tk_2863_; lean_object* v___x_2864_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v___y_2874_; uint8_t v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2887_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; lean_object* v___y_2900_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; uint8_t v___y_2904_; lean_object* v___y_2905_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2908_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v_usingTk_x3f_2914_; lean_object* v_usingArg_2915_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2935_; uint8_t v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; lean_object* v___y_2940_; lean_object* v___y_2941_; lean_object* v___y_2942_; lean_object* v___y_2943_; lean_object* v___y_2944_; lean_object* v___y_2945_; lean_object* v___y_2946_; lean_object* v_args_2947_; uint8_t v___y_2959_; lean_object* v___y_2960_; lean_object* v___y_2961_; lean_object* v___y_2962_; lean_object* v___y_2963_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v_only_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___y_2979_; lean_object* v___y_2993_; lean_object* v___y_2994_; lean_object* v___y_2995_; lean_object* v___y_2996_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v_unfold_3003_; lean_object* v_squeeze_3022_; lean_object* v___y_3023_; lean_object* v___y_3024_; lean_object* v___y_3025_; lean_object* v___y_3026_; lean_object* v___y_3027_; lean_object* v___y_3028_; lean_object* v___y_3029_; lean_object* v___y_3030_; lean_object* v___x_3039_; uint8_t v___x_3040_; 
v___f_2861_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__4, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__4_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__4);
v___x_2862_ = lean_unsigned_to_nat(0u);
v_tk_2863_ = l_Lean_Syntax_getArg(v_stx_2844_, v___x_2862_);
v___x_2864_ = lean_unsigned_to_nat(1u);
v___x_3039_ = l_Lean_Syntax_getArg(v_stx_2844_, v___x_2864_);
v___x_3040_ = l_Lean_Syntax_isNone(v___x_3039_);
if (v___x_3040_ == 0)
{
uint8_t v___x_3041_; 
lean_inc(v___x_3039_);
v___x_3041_ = l_Lean_Syntax_matchesNull(v___x_3039_, v___x_2864_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; 
lean_dec(v___x_3039_);
lean_dec(v_tk_2863_);
lean_dec(v_stx_2844_);
v___x_3042_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_3042_;
}
else
{
lean_object* v_squeeze_3043_; lean_object* v___x_3044_; 
v_squeeze_3043_ = l_Lean_Syntax_getArg(v___x_3039_, v___x_2862_);
lean_dec(v___x_3039_);
v___x_3044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3044_, 0, v_squeeze_3043_);
v_squeeze_3022_ = v___x_3044_;
v___y_3023_ = v_a_2845_;
v___y_3024_ = v_a_2846_;
v___y_3025_ = v_a_2847_;
v___y_3026_ = v_a_2848_;
v___y_3027_ = v_a_2849_;
v___y_3028_ = v_a_2850_;
v___y_3029_ = v_a_2851_;
v___y_3030_ = v_a_2852_;
goto v___jp_3021_;
}
}
else
{
lean_object* v___x_3045_; 
lean_dec(v___x_3039_);
v___x_3045_ = lean_box(0);
v_squeeze_3022_ = v___x_3045_;
v___y_3023_ = v_a_2845_;
v___y_3024_ = v_a_2846_;
v___y_3025_ = v_a_2847_;
v___y_3026_ = v_a_2848_;
v___y_3027_ = v_a_2849_;
v___y_3028_ = v_a_2850_;
v___y_3029_ = v_a_2851_;
v___y_3030_ = v_a_2852_;
goto v___jp_3021_;
}
v___jp_2865_:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___f_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2888_ = lean_box(v___x_2859_);
v___x_2889_ = lean_box(v___y_2875_);
lean_inc(v___y_2870_);
lean_inc(v___y_2879_);
v___f_2890_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___lam__6___boxed), 33, 24);
lean_closure_set(v___f_2890_, 0, v_tk_2863_);
lean_closure_set(v___f_2890_, 1, v___x_2854_);
lean_closure_set(v___f_2890_, 2, v___x_2855_);
lean_closure_set(v___f_2890_, 3, v___x_2856_);
lean_closure_set(v___f_2890_, 4, v___y_2879_);
lean_closure_set(v___f_2890_, 5, v___x_2862_);
lean_closure_set(v___f_2890_, 6, v___x_2888_);
lean_closure_set(v___f_2890_, 7, v___x_2858_);
lean_closure_set(v___f_2890_, 8, v___f_2861_);
lean_closure_set(v___f_2890_, 9, v___x_2857_);
lean_closure_set(v___f_2890_, 10, v___y_2877_);
lean_closure_set(v___f_2890_, 11, v___y_2880_);
lean_closure_set(v___f_2890_, 12, v___x_2864_);
lean_closure_set(v___f_2890_, 13, v___y_2870_);
lean_closure_set(v___f_2890_, 14, v___y_2884_);
lean_closure_set(v___f_2890_, 15, v___y_2881_);
lean_closure_set(v___f_2890_, 16, v___y_2882_);
lean_closure_set(v___f_2890_, 17, v___x_2889_);
lean_closure_set(v___f_2890_, 18, v___y_2885_);
lean_closure_set(v___f_2890_, 19, v___y_2886_);
lean_closure_set(v___f_2890_, 20, v___y_2872_);
lean_closure_set(v___f_2890_, 21, v___y_2866_);
lean_closure_set(v___f_2890_, 22, v___y_2867_);
lean_closure_set(v___f_2890_, 23, v___y_2887_);
v___x_2891_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withSimpDiagnostics___boxed), 10, 1);
lean_closure_set(v___x_2891_, 0, v___f_2890_);
v___x_2892_ = l_Lean_Elab_Tactic_focus___redArg(v___x_2891_, v___y_2878_, v___y_2874_, v___y_2873_, v___y_2869_, v___y_2871_, v___y_2868_, v___y_2883_, v___y_2876_);
return v___x_2892_;
}
v___jp_2893_:
{
lean_object* v___x_2916_; 
v___x_2916_ = l_Lean_Syntax_getOptional_x3f(v___y_2903_);
lean_dec(v___y_2903_);
if (lean_obj_tag(v___x_2916_) == 0)
{
lean_object* v___x_2917_; 
v___x_2917_ = lean_box(0);
v___y_2866_ = v___y_2894_;
v___y_2867_ = v___y_2895_;
v___y_2868_ = v___y_2896_;
v___y_2869_ = v___y_2897_;
v___y_2870_ = v___y_2898_;
v___y_2871_ = v___y_2899_;
v___y_2872_ = v___y_2900_;
v___y_2873_ = v___y_2901_;
v___y_2874_ = v___y_2902_;
v___y_2875_ = v___y_2904_;
v___y_2876_ = v___y_2905_;
v___y_2877_ = v___y_2906_;
v___y_2878_ = v___y_2909_;
v___y_2879_ = v___y_2908_;
v___y_2880_ = v___y_2907_;
v___y_2881_ = v_usingArg_2915_;
v___y_2882_ = v___y_2910_;
v___y_2883_ = v___y_2911_;
v___y_2884_ = v___y_2912_;
v___y_2885_ = v_usingTk_x3f_2914_;
v___y_2886_ = v___y_2913_;
v___y_2887_ = v___x_2917_;
goto v___jp_2865_;
}
else
{
lean_object* v_val_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
v_val_2918_ = lean_ctor_get(v___x_2916_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2916_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2916_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_val_2918_);
lean_dec(v___x_2916_);
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
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_val_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
v___y_2866_ = v___y_2894_;
v___y_2867_ = v___y_2895_;
v___y_2868_ = v___y_2896_;
v___y_2869_ = v___y_2897_;
v___y_2870_ = v___y_2898_;
v___y_2871_ = v___y_2899_;
v___y_2872_ = v___y_2900_;
v___y_2873_ = v___y_2901_;
v___y_2874_ = v___y_2902_;
v___y_2875_ = v___y_2904_;
v___y_2876_ = v___y_2905_;
v___y_2877_ = v___y_2906_;
v___y_2878_ = v___y_2909_;
v___y_2879_ = v___y_2908_;
v___y_2880_ = v___y_2907_;
v___y_2881_ = v_usingArg_2915_;
v___y_2882_ = v___y_2910_;
v___y_2883_ = v___y_2911_;
v___y_2884_ = v___y_2912_;
v___y_2885_ = v_usingTk_x3f_2914_;
v___y_2886_ = v___y_2913_;
v___y_2887_ = v___x_2923_;
goto v___jp_2865_;
}
}
}
}
v___jp_2926_:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; uint8_t v___x_2950_; 
v___x_2948_ = lean_unsigned_to_nat(4u);
v___x_2949_ = l_Lean_Syntax_getArg(v___y_2942_, v___x_2948_);
lean_dec(v___y_2942_);
v___x_2950_ = l_Lean_Syntax_isNone(v___x_2949_);
if (v___x_2950_ == 0)
{
uint8_t v___x_2951_; 
lean_inc(v___x_2949_);
v___x_2951_ = l_Lean_Syntax_matchesNull(v___x_2949_, v___y_2945_);
lean_dec(v___y_2945_);
if (v___x_2951_ == 0)
{
lean_object* v___x_2952_; 
lean_dec(v___x_2949_);
lean_dec(v_args_2947_);
lean_dec(v___y_2946_);
lean_dec(v___y_2944_);
lean_dec(v___y_2941_);
lean_dec(v___y_2940_);
lean_dec(v___y_2935_);
lean_dec(v___y_2932_);
lean_dec(v___y_2927_);
lean_dec(v_tk_2863_);
v___x_2952_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_2952_;
}
else
{
lean_object* v_usingTk_x3f_2953_; lean_object* v_usingArg_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v_usingTk_x3f_2953_ = l_Lean_Syntax_getArg(v___x_2949_, v___x_2862_);
v_usingArg_2954_ = l_Lean_Syntax_getArg(v___x_2949_, v___x_2864_);
lean_dec(v___x_2949_);
v___x_2955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2955_, 0, v_usingTk_x3f_2953_);
v___x_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2956_, 0, v_usingArg_2954_);
v___y_2894_ = v_args_2947_;
v___y_2895_ = v___y_2927_;
v___y_2896_ = v___y_2928_;
v___y_2897_ = v___y_2929_;
v___y_2898_ = v___y_2930_;
v___y_2899_ = v___y_2931_;
v___y_2900_ = v___y_2932_;
v___y_2901_ = v___y_2933_;
v___y_2902_ = v___y_2934_;
v___y_2903_ = v___y_2935_;
v___y_2904_ = v___y_2936_;
v___y_2905_ = v___y_2937_;
v___y_2906_ = v___x_2948_;
v___y_2907_ = v___y_2940_;
v___y_2908_ = v___y_2939_;
v___y_2909_ = v___y_2938_;
v___y_2910_ = v___y_2941_;
v___y_2911_ = v___y_2943_;
v___y_2912_ = v___y_2944_;
v___y_2913_ = v___y_2946_;
v_usingTk_x3f_2914_ = v___x_2955_;
v_usingArg_2915_ = v___x_2956_;
goto v___jp_2893_;
}
}
else
{
lean_object* v___x_2957_; 
lean_dec(v___x_2949_);
lean_dec(v___y_2945_);
v___x_2957_ = lean_box(0);
v___y_2894_ = v_args_2947_;
v___y_2895_ = v___y_2927_;
v___y_2896_ = v___y_2928_;
v___y_2897_ = v___y_2929_;
v___y_2898_ = v___y_2930_;
v___y_2899_ = v___y_2931_;
v___y_2900_ = v___y_2932_;
v___y_2901_ = v___y_2933_;
v___y_2902_ = v___y_2934_;
v___y_2903_ = v___y_2935_;
v___y_2904_ = v___y_2936_;
v___y_2905_ = v___y_2937_;
v___y_2906_ = v___x_2948_;
v___y_2907_ = v___y_2940_;
v___y_2908_ = v___y_2939_;
v___y_2909_ = v___y_2938_;
v___y_2910_ = v___y_2941_;
v___y_2911_ = v___y_2943_;
v___y_2912_ = v___y_2944_;
v___y_2913_ = v___y_2946_;
v_usingTk_x3f_2914_ = v___x_2957_;
v_usingArg_2915_ = v___x_2957_;
goto v___jp_2893_;
}
}
v___jp_2958_:
{
lean_object* v___x_2980_; uint8_t v___x_2981_; 
v___x_2980_ = l_Lean_Syntax_getArg(v___y_2970_, v___y_2968_);
lean_dec(v___y_2968_);
v___x_2981_ = l_Lean_Syntax_isNone(v___x_2980_);
if (v___x_2981_ == 0)
{
uint8_t v___x_2982_; 
lean_inc(v___x_2980_);
v___x_2982_ = l_Lean_Syntax_matchesNull(v___x_2980_, v___x_2864_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; 
lean_dec(v___x_2980_);
lean_dec(v_only_2971_);
lean_dec(v___y_2970_);
lean_dec(v___y_2969_);
lean_dec(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec(v___y_2963_);
lean_dec(v___y_2961_);
lean_dec(v_tk_2863_);
v___x_2983_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_2983_;
}
else
{
lean_object* v___x_2984_; lean_object* v___x_2985_; uint8_t v___x_2986_; 
v___x_2984_ = l_Lean_Syntax_getArg(v___x_2980_, v___x_2862_);
lean_dec(v___x_2980_);
v___x_2985_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__5, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__5_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__5);
lean_inc(v___x_2984_);
v___x_2986_ = l_Lean_Syntax_isOfKind(v___x_2984_, v___x_2985_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; 
lean_dec(v___x_2984_);
lean_dec(v_only_2971_);
lean_dec(v___y_2970_);
lean_dec(v___y_2969_);
lean_dec(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec(v___y_2965_);
lean_dec(v___y_2964_);
lean_dec(v___y_2963_);
lean_dec(v___y_2961_);
lean_dec(v_tk_2863_);
v___x_2987_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_2987_;
}
else
{
lean_object* v___x_2988_; lean_object* v_args_2989_; lean_object* v___x_2990_; 
v___x_2988_ = l_Lean_Syntax_getArg(v___x_2984_, v___x_2864_);
lean_dec(v___x_2984_);
v_args_2989_ = l_Lean_Syntax_getArgs(v___x_2988_);
lean_dec(v___x_2988_);
v___x_2990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2990_, 0, v_args_2989_);
v___y_2927_ = v_only_2971_;
v___y_2928_ = v___y_2977_;
v___y_2929_ = v___y_2975_;
v___y_2930_ = v___y_2960_;
v___y_2931_ = v___y_2976_;
v___y_2932_ = v___y_2964_;
v___y_2933_ = v___y_2974_;
v___y_2934_ = v___y_2973_;
v___y_2935_ = v___y_2967_;
v___y_2936_ = v___y_2959_;
v___y_2937_ = v___y_2979_;
v___y_2938_ = v___y_2972_;
v___y_2939_ = v___y_2962_;
v___y_2940_ = v___y_2961_;
v___y_2941_ = v___y_2963_;
v___y_2942_ = v___y_2970_;
v___y_2943_ = v___y_2978_;
v___y_2944_ = v___y_2965_;
v___y_2945_ = v___y_2969_;
v___y_2946_ = v___y_2966_;
v_args_2947_ = v___x_2990_;
goto v___jp_2926_;
}
}
}
else
{
lean_object* v___x_2991_; 
lean_dec(v___x_2980_);
v___x_2991_ = lean_box(0);
v___y_2927_ = v_only_2971_;
v___y_2928_ = v___y_2977_;
v___y_2929_ = v___y_2975_;
v___y_2930_ = v___y_2960_;
v___y_2931_ = v___y_2976_;
v___y_2932_ = v___y_2964_;
v___y_2933_ = v___y_2974_;
v___y_2934_ = v___y_2973_;
v___y_2935_ = v___y_2967_;
v___y_2936_ = v___y_2959_;
v___y_2937_ = v___y_2979_;
v___y_2938_ = v___y_2972_;
v___y_2939_ = v___y_2962_;
v___y_2940_ = v___y_2961_;
v___y_2941_ = v___y_2963_;
v___y_2942_ = v___y_2970_;
v___y_2943_ = v___y_2978_;
v___y_2944_ = v___y_2965_;
v___y_2945_ = v___y_2969_;
v___y_2946_ = v___y_2966_;
v_args_2947_ = v___x_2991_;
goto v___jp_2926_;
}
}
v___jp_2992_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; uint8_t v___x_3007_; 
v___x_3004_ = lean_unsigned_to_nat(3u);
v___x_3005_ = l_Lean_Syntax_getArg(v_stx_2844_, v___x_3004_);
lean_dec(v_stx_2844_);
v___x_3006_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__7, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__7_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__7);
lean_inc(v___x_3005_);
v___x_3007_ = l_Lean_Syntax_isOfKind(v___x_3005_, v___x_3006_);
if (v___x_3007_ == 0)
{
lean_object* v___x_3008_; 
lean_dec(v___x_3005_);
lean_dec(v_unfold_3003_);
lean_dec(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec(v_tk_2863_);
v___x_3008_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_3008_;
}
else
{
lean_object* v___x_3009_; lean_object* v___x_3010_; uint8_t v___x_3011_; 
v___x_3009_ = l_Lean_Syntax_getArg(v___x_3005_, v___x_2862_);
v___x_3010_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__9, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__9_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__9);
lean_inc(v___x_3009_);
v___x_3011_ = l_Lean_Syntax_isOfKind(v___x_3009_, v___x_3010_);
if (v___x_3011_ == 0)
{
lean_object* v___x_3012_; 
lean_dec(v___x_3009_);
lean_dec(v___x_3005_);
lean_dec(v_unfold_3003_);
lean_dec(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec(v_tk_2863_);
v___x_3012_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_3012_;
}
else
{
lean_object* v___x_3013_; lean_object* v___x_3014_; uint8_t v___x_3015_; 
v___x_3013_ = l_Lean_Syntax_getArg(v___x_3005_, v___x_2864_);
v___x_3014_ = l_Lean_Syntax_getArg(v___x_3005_, v___y_3001_);
v___x_3015_ = l_Lean_Syntax_isNone(v___x_3014_);
if (v___x_3015_ == 0)
{
uint8_t v___x_3016_; 
lean_inc(v___x_3014_);
v___x_3016_ = l_Lean_Syntax_matchesNull(v___x_3014_, v___x_2864_);
if (v___x_3016_ == 0)
{
lean_object* v___x_3017_; 
lean_dec(v___x_3014_);
lean_dec(v___x_3013_);
lean_dec(v___x_3009_);
lean_dec(v___x_3005_);
lean_dec(v_unfold_3003_);
lean_dec(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec(v_tk_2863_);
v___x_3017_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_3017_;
}
else
{
lean_object* v_only_3018_; lean_object* v___x_3019_; 
v_only_3018_ = l_Lean_Syntax_getArg(v___x_3014_, v___x_2862_);
lean_dec(v___x_3014_);
v___x_3019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3019_, 0, v_only_3018_);
lean_inc(v___y_3001_);
v___y_2959_ = v___x_3011_;
v___y_2960_ = v___x_3010_;
v___y_2961_ = v___x_3004_;
v___y_2962_ = v___x_3006_;
v___y_2963_ = v___x_3009_;
v___y_2964_ = v_unfold_3003_;
v___y_2965_ = v___y_3001_;
v___y_2966_ = v___y_3002_;
v___y_2967_ = v___x_3013_;
v___y_2968_ = v___x_3004_;
v___y_2969_ = v___y_3001_;
v___y_2970_ = v___x_3005_;
v_only_2971_ = v___x_3019_;
v___y_2972_ = v___y_2995_;
v___y_2973_ = v___y_2993_;
v___y_2974_ = v___y_2996_;
v___y_2975_ = v___y_3000_;
v___y_2976_ = v___y_2999_;
v___y_2977_ = v___y_2994_;
v___y_2978_ = v___y_2997_;
v___y_2979_ = v___y_2998_;
goto v___jp_2958_;
}
}
else
{
lean_object* v___x_3020_; 
lean_dec(v___x_3014_);
v___x_3020_ = lean_box(0);
lean_inc(v___y_3001_);
v___y_2959_ = v___x_3011_;
v___y_2960_ = v___x_3010_;
v___y_2961_ = v___x_3004_;
v___y_2962_ = v___x_3006_;
v___y_2963_ = v___x_3009_;
v___y_2964_ = v_unfold_3003_;
v___y_2965_ = v___y_3001_;
v___y_2966_ = v___y_3002_;
v___y_2967_ = v___x_3013_;
v___y_2968_ = v___x_3004_;
v___y_2969_ = v___y_3001_;
v___y_2970_ = v___x_3005_;
v_only_2971_ = v___x_3020_;
v___y_2972_ = v___y_2995_;
v___y_2973_ = v___y_2993_;
v___y_2974_ = v___y_2996_;
v___y_2975_ = v___y_3000_;
v___y_2976_ = v___y_2999_;
v___y_2977_ = v___y_2994_;
v___y_2978_ = v___y_2997_;
v___y_2979_ = v___y_2998_;
goto v___jp_2958_;
}
}
}
}
v___jp_3021_:
{
lean_object* v___x_3031_; lean_object* v___x_3032_; uint8_t v___x_3033_; 
v___x_3031_ = lean_unsigned_to_nat(2u);
v___x_3032_ = l_Lean_Syntax_getArg(v_stx_2844_, v___x_3031_);
v___x_3033_ = l_Lean_Syntax_isNone(v___x_3032_);
if (v___x_3033_ == 0)
{
uint8_t v___x_3034_; 
lean_inc(v___x_3032_);
v___x_3034_ = l_Lean_Syntax_matchesNull(v___x_3032_, v___x_2864_);
if (v___x_3034_ == 0)
{
lean_object* v___x_3035_; 
lean_dec(v___x_3032_);
lean_dec(v_squeeze_3022_);
lean_dec(v_tk_2863_);
lean_dec(v_stx_2844_);
v___x_3035_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__0___redArg();
return v___x_3035_;
}
else
{
lean_object* v_unfold_3036_; lean_object* v___x_3037_; 
v_unfold_3036_ = l_Lean_Syntax_getArg(v___x_3032_, v___x_2862_);
lean_dec(v___x_3032_);
v___x_3037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3037_, 0, v_unfold_3036_);
v___y_2993_ = v___y_3024_;
v___y_2994_ = v___y_3028_;
v___y_2995_ = v___y_3023_;
v___y_2996_ = v___y_3025_;
v___y_2997_ = v___y_3029_;
v___y_2998_ = v___y_3030_;
v___y_2999_ = v___y_3027_;
v___y_3000_ = v___y_3026_;
v___y_3001_ = v___x_3031_;
v___y_3002_ = v_squeeze_3022_;
v_unfold_3003_ = v___x_3037_;
goto v___jp_2992_;
}
}
else
{
lean_object* v___x_3038_; 
lean_dec(v___x_3032_);
v___x_3038_ = lean_box(0);
v___y_2993_ = v___y_3024_;
v___y_2994_ = v___y_3028_;
v___y_2995_ = v___y_3023_;
v___y_2996_ = v___y_3025_;
v___y_2997_ = v___y_3029_;
v___y_2998_ = v___y_3030_;
v___y_2999_ = v___y_3027_;
v___y_3000_ = v___y_3026_;
v___y_3001_ = v___x_3031_;
v___y_3002_ = v_squeeze_3022_;
v_unfold_3003_ = v___x_3038_;
goto v___jp_2992_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed(lean_object* v_stx_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_, lean_object* v_a_3055_){
_start:
{
lean_object* v_res_3056_; 
v_res_3056_ = l_Lean_Elab_Tactic_Simpa_evalSimpa(v_stx_3046_, v_a_3047_, v_a_3048_, v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_, v_a_3054_);
lean_dec(v_a_3054_);
lean_dec_ref(v_a_3053_);
lean_dec(v_a_3052_);
lean_dec_ref(v_a_3051_);
lean_dec(v_a_3050_);
lean_dec_ref(v_a_3049_);
lean_dec(v_a_3048_);
lean_dec_ref(v_a_3047_);
return v_res_3056_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2(lean_object* v_mvarId_3057_, lean_object* v_val_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_){
_start:
{
lean_object* v___x_3068_; 
v___x_3068_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___redArg(v_mvarId_3057_, v_val_3058_, v___y_3064_, v___y_3066_);
return v___x_3068_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2___boxed(lean_object* v_mvarId_3069_, lean_object* v_val_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2(v_mvarId_3069_, v_val_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
lean_dec(v___y_3074_);
lean_dec_ref(v___y_3073_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5(lean_object* v_o_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_){
_start:
{
lean_object* v___x_3091_; 
v___x_3091_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___redArg(v_o_3081_, v___y_3089_);
return v___x_3091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5___boxed(lean_object* v_o_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Lean_Options_toLinterOptions___at___00Lean_Linter_getLinterOptions___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__3_spec__5(v_o_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
return v_res_3102_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6(lean_object* v_00_u03b1_3103_, lean_object* v_msg_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v___x_3114_; 
v___x_3114_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___redArg(v_msg_3104_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_);
return v___x_3114_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6___boxed(lean_object* v_00_u03b1_3115_, lean_object* v_msg_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__6(v_00_u03b1_3115_, v_msg_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_);
lean_dec(v___y_3124_);
lean_dec_ref(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
lean_dec(v___y_3118_);
lean_dec_ref(v___y_3117_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8(lean_object* v_00_u03b1_3127_, lean_object* v_x_3128_, lean_object* v_mkInfoTree_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_, lean_object* v___y_3137_){
_start:
{
lean_object* v___x_3139_; 
v___x_3139_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___redArg(v_x_3128_, v_mkInfoTree_3129_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_, v___y_3136_, v___y_3137_);
return v___x_3139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8___boxed(lean_object* v_00_u03b1_3140_, lean_object* v_x_3141_, lean_object* v_mkInfoTree_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__8(v_00_u03b1_3140_, v_x_3141_, v_mkInfoTree_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
lean_dec(v___y_3146_);
lean_dec_ref(v___y_3145_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3(lean_object* v_00_u03b2_3153_, lean_object* v_x_3154_, lean_object* v_x_3155_, lean_object* v_x_3156_){
_start:
{
lean_object* v___x_3157_; 
v___x_3157_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3___redArg(v_x_3154_, v_x_3155_, v_x_3156_);
return v___x_3157_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6(lean_object* v_00_u03b2_3158_, lean_object* v_m_3159_, lean_object* v_a_3160_){
_start:
{
uint8_t v___x_3161_; 
v___x_3161_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___redArg(v_m_3159_, v_a_3160_);
return v___x_3161_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6___boxed(lean_object* v_00_u03b2_3162_, lean_object* v_m_3163_, lean_object* v_a_3164_){
_start:
{
uint8_t v_res_3165_; lean_object* v_r_3166_; 
v_res_3165_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6(v_00_u03b2_3162_, v_m_3163_, v_a_3164_);
lean_dec_ref(v_a_3164_);
lean_dec_ref(v_m_3163_);
v_r_3166_ = lean_box(v_res_3165_);
return v_r_3166_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7(lean_object* v_00_u03b2_3167_, lean_object* v_m_3168_, lean_object* v_a_3169_, lean_object* v_b_3170_){
_start:
{
lean_object* v___x_3171_; 
v___x_3171_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7___redArg(v_m_3168_, v_a_3169_, v_b_3170_);
return v___x_3171_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18(lean_object* v_mvarId_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v___x_3183_; 
v___x_3183_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___redArg(v_mvarId_3172_, v___y_3173_, v___y_3179_, v___y_3181_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18___boxed(lean_object* v_mvarId_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__18(v_mvarId_3184_, v___y_3185_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v_mvarId_3184_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19(lean_object* v_mvarId_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_){
_start:
{
lean_object* v___x_3207_; 
v___x_3207_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___redArg(v_mvarId_3196_, v___y_3197_, v___y_3203_, v___y_3205_);
return v___x_3207_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19___boxed(lean_object* v_mvarId_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_res_3219_; 
v_res_3219_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__8_spec__19(v_mvarId_3208_, v___y_3209_, v___y_3210_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec_ref(v___y_3212_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
lean_dec(v_mvarId_3208_);
return v_res_3219_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11(lean_object* v_00_u03b2_3220_, lean_object* v_x_3221_, size_t v_x_3222_, size_t v_x_3223_, lean_object* v_x_3224_, lean_object* v_x_3225_){
_start:
{
lean_object* v___x_3226_; 
v___x_3226_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___redArg(v_x_3221_, v_x_3222_, v_x_3223_, v_x_3224_, v_x_3225_);
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11___boxed(lean_object* v_00_u03b2_3227_, lean_object* v_x_3228_, lean_object* v_x_3229_, lean_object* v_x_3230_, lean_object* v_x_3231_, lean_object* v_x_3232_){
_start:
{
size_t v_x_83949__boxed_3233_; size_t v_x_83950__boxed_3234_; lean_object* v_res_3235_; 
v_x_83949__boxed_3233_ = lean_unbox_usize(v_x_3229_);
lean_dec(v_x_3229_);
v_x_83950__boxed_3234_ = lean_unbox_usize(v_x_3230_);
lean_dec(v_x_3230_);
v_res_3235_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11(v_00_u03b2_3227_, v_x_3228_, v_x_83949__boxed_3233_, v_x_83950__boxed_3234_, v_x_3231_, v_x_3232_);
return v_res_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16(lean_object* v_ref_3236_, lean_object* v_msgData_3237_, uint8_t v_severity_3238_, uint8_t v_isSilent_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_){
_start:
{
lean_object* v___x_3249_; 
v___x_3249_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg(v_ref_3236_, v_msgData_3237_, v_severity_3238_, v_isSilent_3239_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_);
return v___x_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___boxed(lean_object* v_ref_3250_, lean_object* v_msgData_3251_, lean_object* v_severity_3252_, lean_object* v_isSilent_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_){
_start:
{
uint8_t v_severity_boxed_3263_; uint8_t v_isSilent_boxed_3264_; lean_object* v_res_3265_; 
v_severity_boxed_3263_ = lean_unbox(v_severity_3252_);
v_isSilent_boxed_3264_ = lean_unbox(v_isSilent_3253_);
v_res_3265_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16(v_ref_3250_, v_msgData_3251_, v_severity_boxed_3263_, v_isSilent_boxed_3264_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec(v___y_3259_);
lean_dec_ref(v___y_3258_);
lean_dec(v___y_3257_);
lean_dec_ref(v___y_3256_);
lean_dec(v___y_3255_);
lean_dec_ref(v___y_3254_);
lean_dec(v_ref_3250_);
return v_res_3265_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14(lean_object* v_00_u03b2_3266_, lean_object* v_a_3267_, lean_object* v_x_3268_){
_start:
{
uint8_t v___x_3269_; 
v___x_3269_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___redArg(v_a_3267_, v_x_3268_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14___boxed(lean_object* v_00_u03b2_3270_, lean_object* v_a_3271_, lean_object* v_x_3272_){
_start:
{
uint8_t v_res_3273_; lean_object* v_r_3274_; 
v_res_3273_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__6_spec__14(v_00_u03b2_3270_, v_a_3271_, v_x_3272_);
lean_dec(v_x_3272_);
lean_dec_ref(v_a_3271_);
v_r_3274_ = lean_box(v_res_3273_);
return v_r_3274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16(lean_object* v_00_u03b2_3275_, lean_object* v_data_3276_){
_start:
{
lean_object* v___x_3277_; 
v___x_3277_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16___redArg(v_data_3276_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22(lean_object* v_00_u03b2_3278_, lean_object* v_n_3279_, lean_object* v_k_3280_, lean_object* v_v_3281_){
_start:
{
lean_object* v___x_3282_; 
v___x_3282_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22___redArg(v_n_3279_, v_k_3280_, v_v_3281_);
return v___x_3282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23(lean_object* v_00_u03b2_3283_, size_t v_depth_3284_, lean_object* v_keys_3285_, lean_object* v_vals_3286_, lean_object* v_heq_3287_, lean_object* v_i_3288_, lean_object* v_entries_3289_){
_start:
{
lean_object* v___x_3290_; 
v___x_3290_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___redArg(v_depth_3284_, v_keys_3285_, v_vals_3286_, v_i_3288_, v_entries_3289_);
return v___x_3290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23___boxed(lean_object* v_00_u03b2_3291_, lean_object* v_depth_3292_, lean_object* v_keys_3293_, lean_object* v_vals_3294_, lean_object* v_heq_3295_, lean_object* v_i_3296_, lean_object* v_entries_3297_){
_start:
{
size_t v_depth_boxed_3298_; lean_object* v_res_3299_; 
v_depth_boxed_3298_ = lean_unbox_usize(v_depth_3292_);
lean_dec(v_depth_3292_);
v_res_3299_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__23(v_00_u03b2_3291_, v_depth_boxed_3298_, v_keys_3293_, v_vals_3294_, v_heq_3295_, v_i_3296_, v_entries_3297_);
lean_dec_ref(v_vals_3294_);
lean_dec_ref(v_keys_3293_);
return v_res_3299_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19(lean_object* v_00_u03b2_3300_, lean_object* v_i_3301_, lean_object* v_source_3302_, lean_object* v_target_3303_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19___redArg(v_i_3301_, v_source_3302_, v_target_3303_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22_spec__25(lean_object* v_00_u03b2_3305_, lean_object* v_x_3306_, lean_object* v_x_3307_, lean_object* v_x_3308_, lean_object* v_x_3309_){
_start:
{
lean_object* v___x_3310_; 
v___x_3310_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__2_spec__3_spec__11_spec__22_spec__25___redArg(v_x_3306_, v_x_3307_, v_x_3308_, v_x_3309_);
return v___x_3310_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19_spec__25(lean_object* v_00_u03b2_3311_, lean_object* v_x_3312_, lean_object* v_x_3313_){
_start:
{
lean_object* v___x_3314_; 
v___x_3314_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__1_spec__1_spec__7_spec__16_spec__19_spec__25___redArg(v_x_3312_, v_x_3313_);
return v___x_3314_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0(void){
_start:
{
lean_object* v___x_3315_; 
v___x_3315_ = lean_mk_string_unchecked("Simpa", 5, 5);
return v___x_3315_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1(void){
_start:
{
lean_object* v___x_3316_; 
v___x_3316_ = lean_mk_string_unchecked("evalSimpa", 9, 9);
return v___x_3316_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2(void){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; 
v___x_3317_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__1);
v___x_3318_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__0);
v___x_3319_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__1);
v___x_3320_ = lean_obj_once(&l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0, &l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_logWarningAt___at___00Lean_Linter_logLint___at___00Lean_Elab_Tactic_Simpa_evalSimpa_spec__4_spec__7_spec__16___redArg___lam__0___closed__0);
v___x_3321_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__0);
v___x_3322_ = l_Lean_Name_mkStr5(v___x_3321_, v___x_3320_, v___x_3319_, v___x_3318_, v___x_3317_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1(){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3324_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3325_ = lean_obj_once(&l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3, &l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3_once, _init_l_Lean_Elab_Tactic_Simpa_evalSimpa___closed__3);
v___x_3326_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2);
v___x_3327_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Simpa_evalSimpa___boxed), 10, 0);
v___x_3328_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3324_, v___x_3325_, v___x_3326_, v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___boxed(lean_object* v_a_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
return v_res_3330_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; 
v___x_3331_ = lean_unsigned_to_nat(43u);
v___x_3332_ = lean_unsigned_to_nat(31u);
v___x_3333_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3333_, 0, v___x_3332_);
lean_ctor_set(v___x_3333_, 1, v___x_3331_);
return v___x_3333_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3334_ = lean_unsigned_to_nat(33u);
v___x_3335_ = lean_unsigned_to_nat(90u);
v___x_3336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
lean_ctor_set(v___x_3336_, 1, v___x_3334_);
return v___x_3336_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; 
v___x_3337_ = lean_unsigned_to_nat(33u);
v___x_3338_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__1);
v___x_3339_ = lean_unsigned_to_nat(43u);
v___x_3340_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__0);
v___x_3341_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3340_);
lean_ctor_set(v___x_3341_, 1, v___x_3339_);
lean_ctor_set(v___x_3341_, 2, v___x_3338_);
lean_ctor_set(v___x_3341_, 3, v___x_3337_);
return v___x_3341_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3342_ = lean_unsigned_to_nat(47u);
v___x_3343_ = lean_unsigned_to_nat(31u);
v___x_3344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3343_);
lean_ctor_set(v___x_3344_, 1, v___x_3342_);
return v___x_3344_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; 
v___x_3345_ = lean_unsigned_to_nat(56u);
v___x_3346_ = lean_unsigned_to_nat(31u);
v___x_3347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
lean_ctor_set(v___x_3347_, 1, v___x_3345_);
return v___x_3347_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3348_ = lean_unsigned_to_nat(56u);
v___x_3349_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__4);
v___x_3350_ = lean_unsigned_to_nat(47u);
v___x_3351_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__3);
v___x_3352_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3352_, 0, v___x_3351_);
lean_ctor_set(v___x_3352_, 1, v___x_3350_);
lean_ctor_set(v___x_3352_, 2, v___x_3349_);
lean_ctor_set(v___x_3352_, 3, v___x_3348_);
return v___x_3352_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___x_3353_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__5);
v___x_3354_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__2);
v___x_3355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3355_, 0, v___x_3354_);
lean_ctor_set(v___x_3355_, 1, v___x_3353_);
return v___x_3355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3(){
_start:
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3357_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1___closed__2);
v___x_3358_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___closed__6);
v___x_3359_ = l_Lean_addBuiltinDeclarationRanges(v___x_3357_, v___x_3358_);
return v___x_3359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3___boxed(lean_object* v_a_3360_){
_start:
{
lean_object* v_res_3361_; 
v_res_3361_ = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
return v_res_3361_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__initFn_00___x40_Lean_Elab_Tactic_Simpa_2388930017____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_linter_unnecessarySimpa = lean_io_result_get_value(res);
lean_mark_persistent(l_linter_unnecessarySimpa);
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Simpa_0__Lean_Elab_Tactic_Simpa_evalSimpa___regBuiltin_Lean_Elab_Tactic_Simpa_evalSimpa_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_TryThis(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Simp(uint8_t builtin);
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Simpa(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_TryThis(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Simpa(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Simpa(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Simpa(builtin);
}
#ifdef __cplusplus
}
#endif
