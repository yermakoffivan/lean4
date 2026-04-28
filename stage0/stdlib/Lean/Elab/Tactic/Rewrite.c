// Lean compiler output
// Module: Lean.Elab.Tactic.Rewrite
// Imports: public import Lean.Meta.Tactic.Rewrite public import Lean.Meta.Tactic.Replace public import Lean.Elab.Tactic.Location import Lean.Meta.Eqns
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
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqExtraModUse_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_evalExpr_x27___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t l_Lean_instBEqExtraModUse_beq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_addTermInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_mkCIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Tactic_withoutRecover___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_unfoldThmSuffix;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_hint_x27(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_rewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
extern lean_object* l_Lean_Elab_abortTacticExceptionId;
lean_object* l_Lean_Elab_Tactic_withMainContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Replace_0__Lean_Meta_replaceLocalDeclCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Parser_Tactic_getConfigItems(lean_object*);
lean_object* l_Lean_Elab_Tactic_mkConfigItemViews(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Environment_header(lean_object*);
extern lean_object* l_Lean_instInhabitedEffectiveImport_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instHashableExtraModUse_hash___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_ExtraModUses_0__Lean_extraModUses;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableExtraModUse_hash(lean_object*);
double lean_float_of_nat(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_hash___override___boxed(lean_object*);
lean_object* l_Lean_Name_beq___boxed(lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_indirectModUseExt;
uint8_t lean_name_eq(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_elabConfig(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_expandOptLocation(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withLocation(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0;
static lean_once_cell_t l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__0;
static lean_once_cell_t l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Tactic_elabRewrite_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Tactic_elabRewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewrite___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewrite___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewrite___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewrite___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewrite___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewrite___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewrite___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewrite___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewrite(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_finishElabRewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_finishElabRewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__3;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__4;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_withRWRulesSeq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__0_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__0_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_;
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__1_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__1_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_;
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__2_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__2_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_;
static lean_once_cell_t l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__8___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__1;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__2;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__3;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__5;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__6;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__7;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__9;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__10;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__11;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__12;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__13;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__14;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__15;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__16;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__17;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__18;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__19;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__20;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__21;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__22;
static lean_once_cell_t l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__23;
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__0;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__1;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__2;
static lean_once_cell_t l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__10;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalRewriteSeq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = l_Lean_Elab_abortTacticExceptionId;
v___x_3_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg(){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = lean_obj_once(&l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___closed__0, &l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___closed__0);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg___boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3(lean_object* v_00_u03b1_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg();
return v___x_19_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___boxed(lean_object* v_00_u03b1_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3(v_00_u03b1_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
lean_dec(v___y_26_);
lean_dec_ref(v___y_25_);
lean_dec(v___y_24_);
lean_dec_ref(v___y_23_);
lean_dec(v___y_22_);
lean_dec_ref(v___y_21_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___redArg(lean_object* v_mvarId_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v_mctx_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_36_ = lean_st_ref_get(v___y_34_);
lean_dec(v___x_36_);
v___x_37_ = lean_st_ref_get(v___y_33_);
v_mctx_38_ = lean_ctor_get(v___x_37_, 0);
lean_inc_ref(v_mctx_38_);
lean_dec(v___x_37_);
v___x_39_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_38_, v_mvarId_31_);
lean_dec_ref(v_mctx_38_);
v___x_40_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
v___x_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_41_, 0, v___x_40_);
lean_ctor_set(v___x_41_, 1, v___y_32_);
v___x_42_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_42_, 0, v___x_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___redArg___boxed(lean_object* v_mvarId_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_){
_start:
{
lean_object* v_res_48_; 
v_res_48_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___redArg(v_mvarId_43_, v___y_44_, v___y_45_, v___y_46_);
lean_dec(v___y_46_);
lean_dec(v___y_45_);
lean_dec(v_mvarId_43_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___redArg(lean_object* v_mvarId_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v_mctx_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
v___x_54_ = lean_st_ref_get(v___y_52_);
lean_dec(v___x_54_);
v___x_55_ = lean_st_ref_get(v___y_51_);
v_mctx_56_ = lean_ctor_get(v___x_55_, 0);
lean_inc_ref(v_mctx_56_);
lean_dec(v___x_55_);
v___x_57_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_56_, v_mvarId_49_);
lean_dec_ref(v_mctx_56_);
v___x_58_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_58_, 0, v___x_57_);
v___x_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
lean_ctor_set(v___x_59_, 1, v___y_50_);
v___x_60_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_60_, 0, v___x_59_);
return v___x_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___redArg___boxed(lean_object* v_mvarId_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___redArg(v_mvarId_61_, v___y_62_, v___y_63_, v___y_64_);
lean_dec(v___y_64_);
lean_dec(v___y_63_);
lean_dec(v_mvarId_61_);
return v_res_66_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg(lean_object* v_a_67_, lean_object* v_x_68_){
_start:
{
if (lean_obj_tag(v_x_68_) == 0)
{
uint8_t v___x_69_; 
v___x_69_ = 0;
return v___x_69_;
}
else
{
lean_object* v_key_70_; lean_object* v_tail_71_; uint8_t v___x_72_; 
v_key_70_ = lean_ctor_get(v_x_68_, 0);
v_tail_71_ = lean_ctor_get(v_x_68_, 2);
v___x_72_ = lean_expr_eqv(v_key_70_, v_a_67_);
if (v___x_72_ == 0)
{
v_x_68_ = v_tail_71_;
goto _start;
}
else
{
return v___x_72_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_a_74_, lean_object* v_x_75_){
_start:
{
uint8_t v_res_76_; lean_object* v_r_77_; 
v_res_76_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg(v_a_74_, v_x_75_);
lean_dec(v_x_75_);
lean_dec_ref(v_a_74_);
v_r_77_ = lean_box(v_res_76_);
return v_r_77_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10_spec__14___redArg(lean_object* v_x_78_, lean_object* v_x_79_){
_start:
{
if (lean_obj_tag(v_x_79_) == 0)
{
return v_x_78_;
}
else
{
lean_object* v_key_80_; lean_object* v_value_81_; lean_object* v_tail_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_105_; 
v_key_80_ = lean_ctor_get(v_x_79_, 0);
v_value_81_ = lean_ctor_get(v_x_79_, 1);
v_tail_82_ = lean_ctor_get(v_x_79_, 2);
v_isSharedCheck_105_ = !lean_is_exclusive(v_x_79_);
if (v_isSharedCheck_105_ == 0)
{
v___x_84_ = v_x_79_;
v_isShared_85_ = v_isSharedCheck_105_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_tail_82_);
lean_inc(v_value_81_);
lean_inc(v_key_80_);
lean_dec(v_x_79_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_105_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v___x_86_; uint64_t v___x_87_; uint64_t v___x_88_; uint64_t v___x_89_; uint64_t v_fold_90_; uint64_t v___x_91_; uint64_t v___x_92_; uint64_t v___x_93_; size_t v___x_94_; size_t v___x_95_; size_t v___x_96_; size_t v___x_97_; size_t v___x_98_; lean_object* v___x_99_; lean_object* v___x_101_; 
v___x_86_ = lean_array_get_size(v_x_78_);
v___x_87_ = l_Lean_Expr_hash(v_key_80_);
v___x_88_ = 32ULL;
v___x_89_ = lean_uint64_shift_right(v___x_87_, v___x_88_);
v_fold_90_ = lean_uint64_xor(v___x_87_, v___x_89_);
v___x_91_ = 16ULL;
v___x_92_ = lean_uint64_shift_right(v_fold_90_, v___x_91_);
v___x_93_ = lean_uint64_xor(v_fold_90_, v___x_92_);
v___x_94_ = lean_uint64_to_usize(v___x_93_);
v___x_95_ = lean_usize_of_nat(v___x_86_);
v___x_96_ = ((size_t)1ULL);
v___x_97_ = lean_usize_sub(v___x_95_, v___x_96_);
v___x_98_ = lean_usize_land(v___x_94_, v___x_97_);
v___x_99_ = lean_array_uget_borrowed(v_x_78_, v___x_98_);
lean_inc(v___x_99_);
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 2, v___x_99_);
v___x_101_ = v___x_84_;
goto v_reusejp_100_;
}
else
{
lean_object* v_reuseFailAlloc_104_; 
v_reuseFailAlloc_104_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_104_, 0, v_key_80_);
lean_ctor_set(v_reuseFailAlloc_104_, 1, v_value_81_);
lean_ctor_set(v_reuseFailAlloc_104_, 2, v___x_99_);
v___x_101_ = v_reuseFailAlloc_104_;
goto v_reusejp_100_;
}
v_reusejp_100_:
{
lean_object* v___x_102_; 
v___x_102_ = lean_array_uset(v_x_78_, v___x_98_, v___x_101_);
v_x_78_ = v___x_102_;
v_x_79_ = v_tail_82_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10___redArg(lean_object* v_i_106_, lean_object* v_source_107_, lean_object* v_target_108_){
_start:
{
lean_object* v___x_109_; uint8_t v___x_110_; 
v___x_109_ = lean_array_get_size(v_source_107_);
v___x_110_ = lean_nat_dec_lt(v_i_106_, v___x_109_);
if (v___x_110_ == 0)
{
lean_dec_ref(v_source_107_);
lean_dec(v_i_106_);
return v_target_108_;
}
else
{
lean_object* v_es_111_; lean_object* v___x_112_; lean_object* v_source_113_; lean_object* v_target_114_; lean_object* v___x_115_; lean_object* v___x_116_; 
v_es_111_ = lean_array_fget(v_source_107_, v_i_106_);
v___x_112_ = lean_box(0);
v_source_113_ = lean_array_fset(v_source_107_, v_i_106_, v___x_112_);
v_target_114_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10_spec__14___redArg(v_target_108_, v_es_111_);
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_add(v_i_106_, v___x_115_);
lean_dec(v_i_106_);
v_i_106_ = v___x_116_;
v_source_107_ = v_source_113_;
v_target_108_ = v_target_114_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7___redArg(lean_object* v_data_118_){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_nbuckets_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_119_ = lean_array_get_size(v_data_118_);
v___x_120_ = lean_unsigned_to_nat(2u);
v_nbuckets_121_ = lean_nat_mul(v___x_119_, v___x_120_);
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_box(0);
v___x_124_ = lean_mk_array(v_nbuckets_121_, v___x_123_);
v___x_125_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10___redArg(v___x_122_, v_data_118_, v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4___redArg(lean_object* v_m_126_, lean_object* v_a_127_, lean_object* v_b_128_){
_start:
{
lean_object* v_size_129_; lean_object* v_buckets_130_; lean_object* v___x_131_; uint64_t v___x_132_; uint64_t v___x_133_; uint64_t v___x_134_; uint64_t v_fold_135_; uint64_t v___x_136_; uint64_t v___x_137_; uint64_t v___x_138_; size_t v___x_139_; size_t v___x_140_; size_t v___x_141_; size_t v___x_142_; size_t v___x_143_; lean_object* v_bkt_144_; uint8_t v___x_145_; 
v_size_129_ = lean_ctor_get(v_m_126_, 0);
v_buckets_130_ = lean_ctor_get(v_m_126_, 1);
v___x_131_ = lean_array_get_size(v_buckets_130_);
v___x_132_ = l_Lean_Expr_hash(v_a_127_);
v___x_133_ = 32ULL;
v___x_134_ = lean_uint64_shift_right(v___x_132_, v___x_133_);
v_fold_135_ = lean_uint64_xor(v___x_132_, v___x_134_);
v___x_136_ = 16ULL;
v___x_137_ = lean_uint64_shift_right(v_fold_135_, v___x_136_);
v___x_138_ = lean_uint64_xor(v_fold_135_, v___x_137_);
v___x_139_ = lean_uint64_to_usize(v___x_138_);
v___x_140_ = lean_usize_of_nat(v___x_131_);
v___x_141_ = ((size_t)1ULL);
v___x_142_ = lean_usize_sub(v___x_140_, v___x_141_);
v___x_143_ = lean_usize_land(v___x_139_, v___x_142_);
v_bkt_144_ = lean_array_uget_borrowed(v_buckets_130_, v___x_143_);
v___x_145_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg(v_a_127_, v_bkt_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_166_; 
lean_inc_ref(v_buckets_130_);
lean_inc(v_size_129_);
v_isSharedCheck_166_ = !lean_is_exclusive(v_m_126_);
if (v_isSharedCheck_166_ == 0)
{
lean_object* v_unused_167_; lean_object* v_unused_168_; 
v_unused_167_ = lean_ctor_get(v_m_126_, 1);
lean_dec(v_unused_167_);
v_unused_168_ = lean_ctor_get(v_m_126_, 0);
lean_dec(v_unused_168_);
v___x_147_ = v_m_126_;
v_isShared_148_ = v_isSharedCheck_166_;
goto v_resetjp_146_;
}
else
{
lean_dec(v_m_126_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_166_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_149_; lean_object* v_size_x27_150_; lean_object* v___x_151_; lean_object* v_buckets_x27_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_149_ = lean_unsigned_to_nat(1u);
v_size_x27_150_ = lean_nat_add(v_size_129_, v___x_149_);
lean_dec(v_size_129_);
lean_inc(v_bkt_144_);
v___x_151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_151_, 0, v_a_127_);
lean_ctor_set(v___x_151_, 1, v_b_128_);
lean_ctor_set(v___x_151_, 2, v_bkt_144_);
v_buckets_x27_152_ = lean_array_uset(v_buckets_130_, v___x_143_, v___x_151_);
v___x_153_ = lean_unsigned_to_nat(4u);
v___x_154_ = lean_nat_mul(v_size_x27_150_, v___x_153_);
v___x_155_ = lean_unsigned_to_nat(3u);
v___x_156_ = lean_nat_div(v___x_154_, v___x_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_array_get_size(v_buckets_x27_152_);
v___x_158_ = lean_nat_dec_le(v___x_156_, v___x_157_);
lean_dec(v___x_156_);
if (v___x_158_ == 0)
{
lean_object* v_val_159_; lean_object* v___x_161_; 
v_val_159_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7___redArg(v_buckets_x27_152_);
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 1, v_val_159_);
lean_ctor_set(v___x_147_, 0, v_size_x27_150_);
v___x_161_ = v___x_147_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_size_x27_150_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_val_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
else
{
lean_object* v___x_164_; 
if (v_isShared_148_ == 0)
{
lean_ctor_set(v___x_147_, 1, v_buckets_x27_152_);
lean_ctor_set(v___x_147_, 0, v_size_x27_150_);
v___x_164_ = v___x_147_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_size_x27_150_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_buckets_x27_152_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
else
{
lean_dec(v_b_128_);
lean_dec_ref(v_a_127_);
return v_m_126_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___redArg(lean_object* v_m_169_, lean_object* v_a_170_){
_start:
{
lean_object* v_buckets_171_; lean_object* v___x_172_; uint64_t v___x_173_; uint64_t v___x_174_; uint64_t v___x_175_; uint64_t v_fold_176_; uint64_t v___x_177_; uint64_t v___x_178_; uint64_t v___x_179_; size_t v___x_180_; size_t v___x_181_; size_t v___x_182_; size_t v___x_183_; size_t v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v_buckets_171_ = lean_ctor_get(v_m_169_, 1);
v___x_172_ = lean_array_get_size(v_buckets_171_);
v___x_173_ = l_Lean_Expr_hash(v_a_170_);
v___x_174_ = 32ULL;
v___x_175_ = lean_uint64_shift_right(v___x_173_, v___x_174_);
v_fold_176_ = lean_uint64_xor(v___x_173_, v___x_175_);
v___x_177_ = 16ULL;
v___x_178_ = lean_uint64_shift_right(v_fold_176_, v___x_177_);
v___x_179_ = lean_uint64_xor(v_fold_176_, v___x_178_);
v___x_180_ = lean_uint64_to_usize(v___x_179_);
v___x_181_ = lean_usize_of_nat(v___x_172_);
v___x_182_ = ((size_t)1ULL);
v___x_183_ = lean_usize_sub(v___x_181_, v___x_182_);
v___x_184_ = lean_usize_land(v___x_180_, v___x_183_);
v___x_185_ = lean_array_uget_borrowed(v_buckets_171_, v___x_184_);
v___x_186_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg(v_a_170_, v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_m_187_, lean_object* v_a_188_){
_start:
{
uint8_t v_res_189_; lean_object* v_r_190_; 
v_res_189_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___redArg(v_m_187_, v_a_188_);
lean_dec_ref(v_a_188_);
lean_dec_ref(v_m_187_);
v_r_190_ = lean_box(v_res_189_);
return v_r_190_;
}
}
static lean_object* _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = lean_box(0);
v___x_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__1(void){
_start:
{
lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_193_ = lean_box(0);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(lean_object* v_mvarId_195_, lean_object* v_e_196_, lean_object* v_a_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_d_208_; lean_object* v_b_209_; lean_object* v___y_210_; uint8_t v___x_216_; 
v___x_216_ = l_Lean_Expr_hasExprMVar(v_e_196_);
if (v___x_216_ == 0)
{
lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; 
lean_dec_ref(v_e_196_);
v___x_217_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v_a_197_);
v___x_219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_219_, 0, v___x_218_);
return v___x_219_;
}
else
{
uint8_t v___x_220_; 
v___x_220_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___redArg(v_a_197_, v_e_196_);
if (v___x_220_ == 0)
{
lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_221_ = lean_box(0);
lean_inc_ref(v_e_196_);
v___x_222_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4___redArg(v_a_197_, v_e_196_, v___x_221_);
switch(lean_obj_tag(v_e_196_))
{
case 11:
{
lean_object* v_struct_223_; 
v_struct_223_ = lean_ctor_get(v_e_196_, 2);
lean_inc_ref(v_struct_223_);
lean_dec_ref(v_e_196_);
v_e_196_ = v_struct_223_;
v_a_197_ = v___x_222_;
goto _start;
}
case 7:
{
lean_object* v_binderType_225_; lean_object* v_body_226_; 
v_binderType_225_ = lean_ctor_get(v_e_196_, 1);
lean_inc_ref(v_binderType_225_);
v_body_226_ = lean_ctor_get(v_e_196_, 2);
lean_inc_ref(v_body_226_);
lean_dec_ref(v_e_196_);
v_d_208_ = v_binderType_225_;
v_b_209_ = v_body_226_;
v___y_210_ = v___x_222_;
goto v___jp_207_;
}
case 6:
{
lean_object* v_binderType_227_; lean_object* v_body_228_; 
v_binderType_227_ = lean_ctor_get(v_e_196_, 1);
lean_inc_ref(v_binderType_227_);
v_body_228_ = lean_ctor_get(v_e_196_, 2);
lean_inc_ref(v_body_228_);
lean_dec_ref(v_e_196_);
v_d_208_ = v_binderType_227_;
v_b_209_ = v_body_228_;
v___y_210_ = v___x_222_;
goto v___jp_207_;
}
case 8:
{
lean_object* v_type_229_; lean_object* v_value_230_; lean_object* v_body_231_; lean_object* v___x_232_; 
v_type_229_ = lean_ctor_get(v_e_196_, 1);
lean_inc_ref(v_type_229_);
v_value_230_ = lean_ctor_get(v_e_196_, 2);
lean_inc_ref(v_value_230_);
v_body_231_ = lean_ctor_get(v_e_196_, 3);
lean_inc_ref(v_body_231_);
lean_dec_ref(v_e_196_);
v___x_232_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(v_mvarId_195_, v_type_229_, v___x_222_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v_fst_234_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
v_fst_234_ = lean_ctor_get(v_a_233_, 0);
if (lean_obj_tag(v_fst_234_) == 0)
{
lean_dec(v_a_233_);
lean_dec_ref(v_body_231_);
lean_dec_ref(v_value_230_);
return v___x_232_;
}
else
{
lean_object* v_snd_235_; lean_object* v___x_236_; 
lean_dec_ref(v___x_232_);
v_snd_235_ = lean_ctor_get(v_a_233_, 1);
lean_inc(v_snd_235_);
lean_dec(v_a_233_);
v___x_236_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(v_mvarId_195_, v_value_230_, v_snd_235_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; lean_object* v_fst_238_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_a_237_);
v_fst_238_ = lean_ctor_get(v_a_237_, 0);
if (lean_obj_tag(v_fst_238_) == 0)
{
lean_dec(v_a_237_);
lean_dec_ref(v_body_231_);
return v___x_236_;
}
else
{
lean_object* v_snd_239_; 
lean_dec_ref(v___x_236_);
v_snd_239_ = lean_ctor_get(v_a_237_, 1);
lean_inc(v_snd_239_);
lean_dec(v_a_237_);
v_e_196_ = v_body_231_;
v_a_197_ = v_snd_239_;
goto _start;
}
}
else
{
lean_dec_ref(v_body_231_);
return v___x_236_;
}
}
}
else
{
lean_dec_ref(v_body_231_);
lean_dec_ref(v_value_230_);
return v___x_232_;
}
}
case 10:
{
lean_object* v_expr_241_; 
v_expr_241_ = lean_ctor_get(v_e_196_, 1);
lean_inc_ref(v_expr_241_);
lean_dec_ref(v_e_196_);
v_e_196_ = v_expr_241_;
v_a_197_ = v___x_222_;
goto _start;
}
case 5:
{
lean_object* v_fn_243_; lean_object* v_arg_244_; lean_object* v___x_245_; 
v_fn_243_ = lean_ctor_get(v_e_196_, 0);
lean_inc_ref(v_fn_243_);
v_arg_244_ = lean_ctor_get(v_e_196_, 1);
lean_inc_ref(v_arg_244_);
lean_dec_ref(v_e_196_);
v___x_245_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(v_mvarId_195_, v_fn_243_, v___x_222_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v_fst_247_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
v_fst_247_ = lean_ctor_get(v_a_246_, 0);
if (lean_obj_tag(v_fst_247_) == 0)
{
lean_dec(v_a_246_);
lean_dec_ref(v_arg_244_);
return v___x_245_;
}
else
{
lean_object* v_snd_248_; 
lean_dec_ref(v___x_245_);
v_snd_248_ = lean_ctor_get(v_a_246_, 1);
lean_inc(v_snd_248_);
lean_dec(v_a_246_);
v_e_196_ = v_arg_244_;
v_a_197_ = v_snd_248_;
goto _start;
}
}
else
{
lean_dec_ref(v_arg_244_);
return v___x_245_;
}
}
case 2:
{
lean_object* v_mvarId_250_; lean_object* v___x_251_; 
v_mvarId_250_ = lean_ctor_get(v_e_196_, 0);
lean_inc(v_mvarId_250_);
lean_dec_ref(v_e_196_);
v___x_251_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5(v_mvarId_195_, v_mvarId_250_, v___x_222_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
return v___x_251_;
}
default: 
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
lean_dec_ref(v_e_196_);
v___x_252_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v___x_222_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
}
else
{
lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; 
lean_dec_ref(v_e_196_);
v___x_255_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v_a_197_);
v___x_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_257_, 0, v___x_256_);
return v___x_257_;
}
}
v___jp_207_:
{
lean_object* v___x_211_; 
v___x_211_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(v_mvarId_195_, v_d_208_, v___y_210_, v___y_198_, v___y_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v_fst_213_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
v_fst_213_ = lean_ctor_get(v_a_212_, 0);
if (lean_obj_tag(v_fst_213_) == 0)
{
lean_dec(v_a_212_);
lean_dec_ref(v_b_209_);
return v___x_211_;
}
else
{
lean_object* v_snd_214_; 
lean_dec_ref(v___x_211_);
v_snd_214_ = lean_ctor_get(v_a_212_, 1);
lean_inc(v_snd_214_);
lean_dec(v_a_212_);
v_e_196_ = v_b_209_;
v_a_197_ = v_snd_214_;
goto _start;
}
}
else
{
lean_dec_ref(v_b_209_);
return v___x_211_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5(lean_object* v_mvarId_258_, lean_object* v_mvarId_x27_259_, lean_object* v_a_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
uint8_t v___x_270_; 
v___x_270_ = l_Lean_instBEqMVarId_beq(v_mvarId_258_, v_mvarId_x27_259_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___redArg(v_mvarId_x27_259_, v_a_260_, v___y_266_, v___y_268_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_355_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_355_ == 0)
{
v___x_274_ = v___x_271_;
v_isShared_275_ = v_isSharedCheck_355_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_a_272_);
lean_dec(v___x_271_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_355_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v_fst_276_; 
v_fst_276_ = lean_ctor_get(v_a_272_, 0);
lean_inc(v_fst_276_);
if (lean_obj_tag(v_fst_276_) == 0)
{
lean_object* v_snd_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_295_; 
lean_dec(v_mvarId_x27_259_);
v_snd_277_ = lean_ctor_get(v_a_272_, 1);
v_isSharedCheck_295_ = !lean_is_exclusive(v_a_272_);
if (v_isSharedCheck_295_ == 0)
{
lean_object* v_unused_296_; 
v_unused_296_ = lean_ctor_get(v_a_272_, 0);
lean_dec(v_unused_296_);
v___x_279_ = v_a_272_;
v_isShared_280_ = v_isSharedCheck_295_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_snd_277_);
lean_dec(v_a_272_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_295_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_294_; 
v_a_281_ = lean_ctor_get(v_fst_276_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v_fst_276_);
if (v_isSharedCheck_294_ == 0)
{
v___x_283_ = v_fst_276_;
v_isShared_284_ = v_isSharedCheck_294_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v_fst_276_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_294_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_293_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
lean_object* v___x_288_; 
if (v_isShared_280_ == 0)
{
lean_ctor_set(v___x_279_, 0, v___x_286_);
v___x_288_ = v___x_279_;
goto v_reusejp_287_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v___x_286_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_snd_277_);
v___x_288_ = v_reuseFailAlloc_292_;
goto v_reusejp_287_;
}
v_reusejp_287_:
{
lean_object* v___x_290_; 
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 0, v___x_288_);
v___x_290_ = v___x_274_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_288_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
}
}
}
else
{
lean_object* v_a_297_; 
lean_del_object(v___x_274_);
v_a_297_ = lean_ctor_get(v_fst_276_, 0);
lean_inc(v_a_297_);
lean_dec_ref(v_fst_276_);
if (lean_obj_tag(v_a_297_) == 0)
{
lean_object* v_snd_298_; lean_object* v___x_299_; 
v_snd_298_ = lean_ctor_get(v_a_272_, 1);
lean_inc(v_snd_298_);
lean_dec(v_a_272_);
v___x_299_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___redArg(v_mvarId_x27_259_, v_snd_298_, v___y_266_, v___y_268_);
lean_dec(v_mvarId_x27_259_);
if (lean_obj_tag(v___x_299_) == 0)
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_343_; 
v_a_300_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_343_ == 0)
{
v___x_302_ = v___x_299_;
v_isShared_303_ = v_isSharedCheck_343_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_299_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_343_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v_fst_304_; 
v_fst_304_ = lean_ctor_get(v_a_300_, 0);
lean_inc(v_fst_304_);
if (lean_obj_tag(v_fst_304_) == 0)
{
lean_object* v_snd_305_; lean_object* v___x_307_; uint8_t v_isShared_308_; uint8_t v_isSharedCheck_323_; 
v_snd_305_ = lean_ctor_get(v_a_300_, 1);
v_isSharedCheck_323_ = !lean_is_exclusive(v_a_300_);
if (v_isSharedCheck_323_ == 0)
{
lean_object* v_unused_324_; 
v_unused_324_ = lean_ctor_get(v_a_300_, 0);
lean_dec(v_unused_324_);
v___x_307_ = v_a_300_;
v_isShared_308_ = v_isSharedCheck_323_;
goto v_resetjp_306_;
}
else
{
lean_inc(v_snd_305_);
lean_dec(v_a_300_);
v___x_307_ = lean_box(0);
v_isShared_308_ = v_isSharedCheck_323_;
goto v_resetjp_306_;
}
v_resetjp_306_:
{
lean_object* v_a_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_322_; 
v_a_309_ = lean_ctor_get(v_fst_304_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v_fst_304_);
if (v_isSharedCheck_322_ == 0)
{
v___x_311_ = v_fst_304_;
v_isShared_312_ = v_isSharedCheck_322_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_a_309_);
lean_dec(v_fst_304_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_322_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v___x_314_; 
if (v_isShared_312_ == 0)
{
v___x_314_ = v___x_311_;
goto v_reusejp_313_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_309_);
v___x_314_ = v_reuseFailAlloc_321_;
goto v_reusejp_313_;
}
v_reusejp_313_:
{
lean_object* v___x_316_; 
if (v_isShared_308_ == 0)
{
lean_ctor_set(v___x_307_, 0, v___x_314_);
v___x_316_ = v___x_307_;
goto v_reusejp_315_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_314_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_snd_305_);
v___x_316_ = v_reuseFailAlloc_320_;
goto v_reusejp_315_;
}
v_reusejp_315_:
{
lean_object* v___x_318_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_316_);
v___x_318_ = v___x_302_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_319_; 
v_reuseFailAlloc_319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_319_, 0, v___x_316_);
v___x_318_ = v_reuseFailAlloc_319_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
return v___x_318_;
}
}
}
}
}
}
else
{
lean_object* v_a_325_; 
v_a_325_ = lean_ctor_get(v_fst_304_, 0);
lean_inc(v_a_325_);
lean_dec_ref(v_fst_304_);
if (lean_obj_tag(v_a_325_) == 0)
{
lean_object* v_snd_326_; lean_object* v___x_328_; uint8_t v_isShared_329_; uint8_t v_isSharedCheck_337_; 
v_snd_326_ = lean_ctor_get(v_a_300_, 1);
v_isSharedCheck_337_ = !lean_is_exclusive(v_a_300_);
if (v_isSharedCheck_337_ == 0)
{
lean_object* v_unused_338_; 
v_unused_338_ = lean_ctor_get(v_a_300_, 0);
lean_dec(v_unused_338_);
v___x_328_ = v_a_300_;
v_isShared_329_ = v_isSharedCheck_337_;
goto v_resetjp_327_;
}
else
{
lean_inc(v_snd_326_);
lean_dec(v_a_300_);
v___x_328_ = lean_box(0);
v_isShared_329_ = v_isSharedCheck_337_;
goto v_resetjp_327_;
}
v_resetjp_327_:
{
lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_330_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__0);
if (v_isShared_329_ == 0)
{
lean_ctor_set(v___x_328_, 0, v___x_330_);
v___x_332_ = v___x_328_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v___x_330_);
lean_ctor_set(v_reuseFailAlloc_336_, 1, v_snd_326_);
v___x_332_ = v_reuseFailAlloc_336_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
lean_object* v___x_334_; 
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_332_);
v___x_334_ = v___x_302_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_332_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
else
{
lean_object* v_val_339_; lean_object* v_snd_340_; lean_object* v_mvarIdPending_341_; 
lean_del_object(v___x_302_);
v_val_339_ = lean_ctor_get(v_a_325_, 0);
lean_inc(v_val_339_);
lean_dec_ref(v_a_325_);
v_snd_340_ = lean_ctor_get(v_a_300_, 1);
lean_inc(v_snd_340_);
lean_dec(v_a_300_);
v_mvarIdPending_341_ = lean_ctor_get(v_val_339_, 1);
lean_inc(v_mvarIdPending_341_);
lean_dec(v_val_339_);
v_mvarId_x27_259_ = v_mvarIdPending_341_;
v_a_260_ = v_snd_340_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
v_a_344_ = lean_ctor_get(v___x_299_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_299_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_299_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_299_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
else
{
lean_object* v_snd_352_; lean_object* v_val_353_; lean_object* v___x_354_; 
lean_dec(v_mvarId_x27_259_);
v_snd_352_ = lean_ctor_get(v_a_272_, 1);
lean_inc(v_snd_352_);
lean_dec(v_a_272_);
v_val_353_ = lean_ctor_get(v_a_297_, 0);
lean_inc(v_val_353_);
lean_dec_ref(v_a_297_);
v___x_354_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(v_mvarId_258_, v_val_353_, v_snd_352_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
return v___x_354_;
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v_mvarId_x27_259_);
v_a_356_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_271_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_271_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec(v_mvarId_x27_259_);
v___x_364_ = lean_obj_once(&l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__1, &l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__1_once, _init_l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___closed__1);
v___x_365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_364_);
lean_ctor_set(v___x_365_, 1, v_a_260_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5___boxed(lean_object* v_mvarId_367_, lean_object* v_mvarId_x27_368_, lean_object* v_a_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5(v_mvarId_367_, v_mvarId_x27_368_, v_a_369_, v___y_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, v___y_377_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
lean_dec(v___y_375_);
lean_dec_ref(v___y_374_);
lean_dec(v___y_373_);
lean_dec_ref(v___y_372_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v_mvarId_367_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1___boxed(lean_object* v_mvarId_380_, lean_object* v_e_381_, lean_object* v_a_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_){
_start:
{
lean_object* v_res_392_; 
v_res_392_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(v_mvarId_380_, v_e_381_, v_a_382_, v___y_383_, v___y_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
lean_dec(v___y_388_);
lean_dec_ref(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
lean_dec(v___y_384_);
lean_dec_ref(v___y_383_);
lean_dec(v_mvarId_380_);
return v_res_392_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__0(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = lean_box(0);
v___x_394_ = lean_unsigned_to_nat(16u);
v___x_395_ = lean_mk_array(v___x_394_, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__1(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = lean_obj_once(&l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__0, &l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__0_once, _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__0);
v___x_397_ = lean_unsigned_to_nat(0u);
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
lean_ctor_set(v___x_398_, 1, v___x_396_);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1(lean_object* v_mvarId_399_, lean_object* v_e_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
uint8_t v___x_410_; 
v___x_410_ = l_Lean_Expr_hasExprMVar(v_e_400_);
if (v___x_410_ == 0)
{
uint8_t v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
lean_dec_ref(v_e_400_);
v___x_411_ = 1;
v___x_412_ = lean_box(v___x_411_);
v___x_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
return v___x_413_;
}
else
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_obj_once(&l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__1, &l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__1_once, _init_l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___closed__1);
v___x_415_ = l___private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1(v_mvarId_399_, v_e_400_, v___x_414_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_, v___y_408_);
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v_a_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_430_; 
v_a_416_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_430_ == 0)
{
v___x_418_ = v___x_415_;
v_isShared_419_ = v_isSharedCheck_430_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_a_416_);
lean_dec(v___x_415_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_430_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_fst_420_; 
v_fst_420_ = lean_ctor_get(v_a_416_, 0);
lean_inc(v_fst_420_);
lean_dec(v_a_416_);
if (lean_obj_tag(v_fst_420_) == 0)
{
uint8_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_424_; 
lean_dec_ref(v_fst_420_);
v___x_421_ = 0;
v___x_422_ = lean_box(v___x_421_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_422_);
v___x_424_ = v___x_418_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v___x_422_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
else
{
lean_object* v___x_426_; lean_object* v___x_428_; 
lean_dec_ref(v_fst_420_);
v___x_426_ = lean_box(v___x_410_);
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 0, v___x_426_);
v___x_428_ = v___x_418_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v___x_426_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
}
}
else
{
lean_object* v_a_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_438_; 
v_a_431_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_438_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_438_ == 0)
{
v___x_433_ = v___x_415_;
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_a_431_);
lean_dec(v___x_415_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_438_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_436_; 
if (v_isShared_434_ == 0)
{
v___x_436_ = v___x_433_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_a_431_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1___boxed(lean_object* v_mvarId_439_, lean_object* v_e_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1(v_mvarId_439_, v_e_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_);
lean_dec(v___y_448_);
lean_dec_ref(v___y_447_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v_mvarId_439_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Tactic_elabRewrite_spec__0(lean_object* v___x_451_, lean_object* v___x_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
if (lean_obj_tag(v_a_453_) == 0)
{
lean_object* v___x_455_; 
v___x_455_ = l_List_reverse___redArg(v_a_454_);
return v___x_455_;
}
else
{
lean_object* v_head_456_; lean_object* v_tail_457_; lean_object* v___x_459_; uint8_t v_isShared_460_; uint8_t v_isSharedCheck_469_; 
v_head_456_ = lean_ctor_get(v_a_453_, 0);
v_tail_457_ = lean_ctor_get(v_a_453_, 1);
v_isSharedCheck_469_ = !lean_is_exclusive(v_a_453_);
if (v_isSharedCheck_469_ == 0)
{
v___x_459_ = v_a_453_;
v_isShared_460_ = v_isSharedCheck_469_;
goto v_resetjp_458_;
}
else
{
lean_inc(v_tail_457_);
lean_inc(v_head_456_);
lean_dec(v_a_453_);
v___x_459_ = lean_box(0);
v_isShared_460_ = v_isSharedCheck_469_;
goto v_resetjp_458_;
}
v_resetjp_458_:
{
lean_object* v___x_461_; lean_object* v_index_462_; uint8_t v___x_463_; 
lean_inc(v_head_456_);
v___x_461_ = l_Lean_MetavarContext_getDecl(v___x_451_, v_head_456_);
v_index_462_ = lean_ctor_get(v___x_461_, 6);
lean_inc(v_index_462_);
lean_dec_ref(v___x_461_);
v___x_463_ = lean_nat_dec_le(v___x_452_, v_index_462_);
lean_dec(v_index_462_);
if (v___x_463_ == 0)
{
lean_del_object(v___x_459_);
lean_dec(v_head_456_);
v_a_453_ = v_tail_457_;
goto _start;
}
else
{
lean_object* v___x_466_; 
if (v_isShared_460_ == 0)
{
lean_ctor_set(v___x_459_, 1, v_a_454_);
v___x_466_ = v___x_459_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_468_; 
v_reuseFailAlloc_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_468_, 0, v_head_456_);
lean_ctor_set(v_reuseFailAlloc_468_, 1, v_a_454_);
v___x_466_ = v_reuseFailAlloc_468_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
v_a_453_ = v_tail_457_;
v_a_454_ = v___x_466_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_Elab_Tactic_elabRewrite_spec__0___boxed(lean_object* v___x_470_, lean_object* v___x_471_, lean_object* v_a_472_, lean_object* v_a_473_){
_start:
{
lean_object* v_res_474_; 
v_res_474_ = l_List_filterTR_loop___at___00Lean_Elab_Tactic_elabRewrite_spec__0(v___x_470_, v___x_471_, v_a_472_, v_a_473_);
lean_dec(v___x_471_);
lean_dec_ref(v___x_470_);
return v_res_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8(lean_object* v_msgData_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v___x_481_; lean_object* v_env_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v_mctx_485_; lean_object* v_lctx_486_; lean_object* v_options_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_481_ = lean_st_ref_get(v___y_479_);
v_env_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc_ref(v_env_482_);
lean_dec(v___x_481_);
v___x_483_ = lean_st_ref_get(v___y_479_);
lean_dec(v___x_483_);
v___x_484_ = lean_st_ref_get(v___y_477_);
v_mctx_485_ = lean_ctor_get(v___x_484_, 0);
lean_inc_ref(v_mctx_485_);
lean_dec(v___x_484_);
v_lctx_486_ = lean_ctor_get(v___y_476_, 2);
v_options_487_ = lean_ctor_get(v___y_478_, 2);
lean_inc_ref(v_options_487_);
lean_inc_ref(v_lctx_486_);
v___x_488_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_488_, 0, v_env_482_);
lean_ctor_set(v___x_488_, 1, v_mctx_485_);
lean_ctor_set(v___x_488_, 2, v_lctx_486_);
lean_ctor_set(v___x_488_, 3, v_options_487_);
v___x_489_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
lean_ctor_set(v___x_489_, 1, v_msgData_475_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8___boxed(lean_object* v_msgData_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8(v_msgData_491_, v___y_492_, v___y_493_, v___y_494_, v___y_495_);
lean_dec(v___y_495_);
lean_dec_ref(v___y_494_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg(lean_object* v_msg_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_ref_504_; lean_object* v___x_505_; lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_514_; 
v_ref_504_ = lean_ctor_get(v___y_501_, 5);
v___x_505_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8(v_msg_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
v_a_506_ = lean_ctor_get(v___x_505_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_505_);
if (v_isSharedCheck_514_ == 0)
{
v___x_508_ = v___x_505_;
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_505_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v___x_512_; 
lean_inc(v_ref_504_);
v___x_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_510_, 0, v_ref_504_);
lean_ctor_set(v___x_510_, 1, v_a_506_);
if (v_isShared_509_ == 0)
{
lean_ctor_set_tag(v___x_508_, 1);
lean_ctor_set(v___x_508_, 0, v___x_510_);
v___x_512_ = v___x_508_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg___boxed(lean_object* v_msg_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_){
_start:
{
lean_object* v_res_521_; 
v_res_521_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg(v_msg_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
return v_res_521_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___redArg(lean_object* v_ref_522_, lean_object* v_msg_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_fileName_533_; lean_object* v_fileMap_534_; lean_object* v_options_535_; lean_object* v_currRecDepth_536_; lean_object* v_maxRecDepth_537_; lean_object* v_ref_538_; lean_object* v_currNamespace_539_; lean_object* v_openDecls_540_; lean_object* v_initHeartbeats_541_; lean_object* v_maxHeartbeats_542_; lean_object* v_quotContext_543_; lean_object* v_currMacroScope_544_; uint8_t v_diag_545_; lean_object* v_cancelTk_x3f_546_; uint8_t v_suppressElabErrors_547_; lean_object* v_inheritedTraceOptions_548_; lean_object* v_ref_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v_fileName_533_ = lean_ctor_get(v___y_530_, 0);
v_fileMap_534_ = lean_ctor_get(v___y_530_, 1);
v_options_535_ = lean_ctor_get(v___y_530_, 2);
v_currRecDepth_536_ = lean_ctor_get(v___y_530_, 3);
v_maxRecDepth_537_ = lean_ctor_get(v___y_530_, 4);
v_ref_538_ = lean_ctor_get(v___y_530_, 5);
v_currNamespace_539_ = lean_ctor_get(v___y_530_, 6);
v_openDecls_540_ = lean_ctor_get(v___y_530_, 7);
v_initHeartbeats_541_ = lean_ctor_get(v___y_530_, 8);
v_maxHeartbeats_542_ = lean_ctor_get(v___y_530_, 9);
v_quotContext_543_ = lean_ctor_get(v___y_530_, 10);
v_currMacroScope_544_ = lean_ctor_get(v___y_530_, 11);
v_diag_545_ = lean_ctor_get_uint8(v___y_530_, sizeof(void*)*14);
v_cancelTk_x3f_546_ = lean_ctor_get(v___y_530_, 12);
v_suppressElabErrors_547_ = lean_ctor_get_uint8(v___y_530_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_548_ = lean_ctor_get(v___y_530_, 13);
v_ref_549_ = l_Lean_replaceRef(v_ref_522_, v_ref_538_);
lean_inc_ref(v_inheritedTraceOptions_548_);
lean_inc(v_cancelTk_x3f_546_);
lean_inc(v_currMacroScope_544_);
lean_inc(v_quotContext_543_);
lean_inc(v_maxHeartbeats_542_);
lean_inc(v_initHeartbeats_541_);
lean_inc(v_openDecls_540_);
lean_inc(v_currNamespace_539_);
lean_inc(v_maxRecDepth_537_);
lean_inc(v_currRecDepth_536_);
lean_inc_ref(v_options_535_);
lean_inc_ref(v_fileMap_534_);
lean_inc_ref(v_fileName_533_);
v___x_550_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_550_, 0, v_fileName_533_);
lean_ctor_set(v___x_550_, 1, v_fileMap_534_);
lean_ctor_set(v___x_550_, 2, v_options_535_);
lean_ctor_set(v___x_550_, 3, v_currRecDepth_536_);
lean_ctor_set(v___x_550_, 4, v_maxRecDepth_537_);
lean_ctor_set(v___x_550_, 5, v_ref_549_);
lean_ctor_set(v___x_550_, 6, v_currNamespace_539_);
lean_ctor_set(v___x_550_, 7, v_openDecls_540_);
lean_ctor_set(v___x_550_, 8, v_initHeartbeats_541_);
lean_ctor_set(v___x_550_, 9, v_maxHeartbeats_542_);
lean_ctor_set(v___x_550_, 10, v_quotContext_543_);
lean_ctor_set(v___x_550_, 11, v_currMacroScope_544_);
lean_ctor_set(v___x_550_, 12, v_cancelTk_x3f_546_);
lean_ctor_set(v___x_550_, 13, v_inheritedTraceOptions_548_);
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*14, v_diag_545_);
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*14 + 1, v_suppressElabErrors_547_);
v___x_551_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg(v_msg_523_, v___y_528_, v___y_529_, v___x_550_, v___y_531_);
lean_dec_ref(v___x_550_);
return v___x_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___redArg___boxed(lean_object* v_ref_552_, lean_object* v_msg_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___redArg(v_ref_552_, v_msg_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
lean_dec(v___y_561_);
lean_dec_ref(v___y_560_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v_ref_552_);
return v_res_563_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewrite___closed__0(void){
_start:
{
lean_object* v___x_564_; 
v___x_564_ = lean_mk_string_unchecked("Occurs check failed: Expression", 31, 31);
return v___x_564_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewrite___closed__1(void){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; 
v___x_565_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewrite___closed__0, &l_Lean_Elab_Tactic_elabRewrite___closed__0_once, _init_l_Lean_Elab_Tactic_elabRewrite___closed__0);
v___x_566_ = l_Lean_stringToMessageData(v___x_565_);
return v___x_566_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewrite___closed__2(void){
_start:
{
lean_object* v___x_567_; 
v___x_567_ = lean_mk_string_unchecked("\ncontains the goal ", 19, 19);
return v___x_567_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewrite___closed__3(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewrite___closed__2, &l_Lean_Elab_Tactic_elabRewrite___closed__2_once, _init_l_Lean_Elab_Tactic_elabRewrite___closed__2);
v___x_569_ = l_Lean_stringToMessageData(v___x_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewrite(lean_object* v_mvarId_570_, lean_object* v_e_571_, lean_object* v_stx_572_, uint8_t v_symm_573_, lean_object* v_config_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; lean_object* v___x_588_; 
v___x_584_ = lean_st_ref_get(v_a_582_);
lean_dec(v___x_584_);
v___x_585_ = lean_st_ref_get(v_a_580_);
v___x_586_ = lean_box(0);
v___x_587_ = 1;
lean_inc(v_stx_572_);
v___x_588_ = l_Lean_Elab_Tactic_elabTerm(v_stx_572_, v___x_586_, v___x_587_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
if (lean_obj_tag(v___x_588_) == 0)
{
lean_object* v_mctx_589_; lean_object* v_a_590_; lean_object* v_mvarCounter_591_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_622_; lean_object* v___y_623_; lean_object* v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; lean_object* v___y_628_; lean_object* v___y_629_; uint8_t v___x_658_; 
v_mctx_589_ = lean_ctor_get(v___x_585_, 0);
lean_inc_ref(v_mctx_589_);
lean_dec(v___x_585_);
v_a_590_ = lean_ctor_get(v___x_588_, 0);
lean_inc(v_a_590_);
lean_dec_ref(v___x_588_);
v_mvarCounter_591_ = lean_ctor_get(v_mctx_589_, 3);
lean_inc(v_mvarCounter_591_);
lean_dec_ref(v_mctx_589_);
v___x_658_ = l_Lean_Expr_hasSyntheticSorry(v_a_590_);
if (v___x_658_ == 0)
{
v___y_622_ = v_a_575_;
v___y_623_ = v_a_576_;
v___y_624_ = v_a_577_;
v___y_625_ = v_a_578_;
v___y_626_ = v_a_579_;
v___y_627_ = v_a_580_;
v___y_628_ = v_a_581_;
v___y_629_ = v_a_582_;
goto v___jp_621_;
}
else
{
lean_object* v___x_659_; lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec(v_mvarCounter_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_config_574_);
lean_dec(v_stx_572_);
lean_dec_ref(v_e_571_);
lean_dec(v_mvarId_570_);
v___x_659_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_elabRewrite_spec__3___redArg();
v_a_660_ = lean_ctor_get(v___x_659_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_659_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_659_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_659_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
v___jp_592_:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_MVarId_rewrite(v_mvarId_570_, v_e_571_, v_a_590_, v_symm_573_, v_config_574_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_620_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_620_ == 0)
{
v___x_600_ = v___x_597_;
v_isShared_601_ = v_isSharedCheck_620_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_a_598_);
lean_dec(v___x_597_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_620_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_mctx_604_; lean_object* v_eNew_605_; lean_object* v_eqProof_606_; lean_object* v_mvarIds_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_619_; 
v___x_602_ = lean_st_ref_get(v___y_596_);
lean_dec(v___x_602_);
v___x_603_ = lean_st_ref_get(v___y_594_);
v_mctx_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc_ref(v_mctx_604_);
lean_dec(v___x_603_);
v_eNew_605_ = lean_ctor_get(v_a_598_, 0);
v_eqProof_606_ = lean_ctor_get(v_a_598_, 1);
v_mvarIds_607_ = lean_ctor_get(v_a_598_, 2);
v_isSharedCheck_619_ = !lean_is_exclusive(v_a_598_);
if (v_isSharedCheck_619_ == 0)
{
v___x_609_ = v_a_598_;
v_isShared_610_ = v_isSharedCheck_619_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_mvarIds_607_);
lean_inc(v_eqProof_606_);
lean_inc(v_eNew_605_);
lean_dec(v_a_598_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_619_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_611_ = lean_box(0);
v___x_612_ = l_List_filterTR_loop___at___00Lean_Elab_Tactic_elabRewrite_spec__0(v_mctx_604_, v_mvarCounter_591_, v_mvarIds_607_, v___x_611_);
lean_dec(v_mvarCounter_591_);
lean_dec_ref(v_mctx_604_);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 2, v___x_612_);
v___x_614_ = v___x_609_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_eNew_605_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_eqProof_606_);
lean_ctor_set(v_reuseFailAlloc_618_, 2, v___x_612_);
v___x_614_ = v_reuseFailAlloc_618_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
lean_object* v___x_616_; 
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 0, v___x_614_);
v___x_616_ = v___x_600_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_614_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
}
else
{
lean_dec(v_mvarCounter_591_);
return v___x_597_;
}
}
v___jp_621_:
{
lean_object* v___x_630_; 
lean_inc(v_a_590_);
v___x_630_ = l_Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1(v_mvarId_570_, v_a_590_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
if (lean_obj_tag(v___x_630_) == 0)
{
lean_object* v_a_631_; uint8_t v___x_632_; 
v_a_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_a_631_);
lean_dec_ref(v___x_630_);
v___x_632_ = lean_unbox(v_a_631_);
lean_dec(v_a_631_);
if (v___x_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_649_; 
lean_dec(v_mvarCounter_591_);
lean_dec_ref(v_config_574_);
lean_dec_ref(v_e_571_);
v___x_633_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewrite___closed__1, &l_Lean_Elab_Tactic_elabRewrite___closed__1_once, _init_l_Lean_Elab_Tactic_elabRewrite___closed__1);
v___x_634_ = l_Lean_indentExpr(v_a_590_);
v___x_635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewrite___closed__3, &l_Lean_Elab_Tactic_elabRewrite___closed__3_once, _init_l_Lean_Elab_Tactic_elabRewrite___closed__3);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = l_Lean_Expr_mvar___override(v_mvarId_570_);
v___x_639_ = l_Lean_MessageData_ofExpr(v___x_638_);
v___x_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_637_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___redArg(v_stx_572_, v___x_640_, v___y_622_, v___y_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_, v___y_628_, v___y_629_);
lean_dec(v_stx_572_);
v_a_642_ = lean_ctor_get(v___x_641_, 0);
v_isSharedCheck_649_ = !lean_is_exclusive(v___x_641_);
if (v_isSharedCheck_649_ == 0)
{
v___x_644_ = v___x_641_;
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v___x_641_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_649_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_dec(v_stx_572_);
v___y_593_ = v___y_626_;
v___y_594_ = v___y_627_;
v___y_595_ = v___y_628_;
v___y_596_ = v___y_629_;
goto v___jp_592_;
}
}
else
{
lean_object* v_a_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_657_; 
lean_dec(v_mvarCounter_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_config_574_);
lean_dec(v_stx_572_);
lean_dec_ref(v_e_571_);
lean_dec(v_mvarId_570_);
v_a_650_ = lean_ctor_get(v___x_630_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_630_);
if (v_isSharedCheck_657_ == 0)
{
v___x_652_ = v___x_630_;
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_a_650_);
lean_dec(v___x_630_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_657_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v___x_655_; 
if (v_isShared_653_ == 0)
{
v___x_655_ = v___x_652_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v_a_650_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
else
{
lean_object* v_a_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_675_; 
lean_dec(v___x_585_);
lean_dec_ref(v_config_574_);
lean_dec(v_stx_572_);
lean_dec_ref(v_e_571_);
lean_dec(v_mvarId_570_);
v_a_668_ = lean_ctor_get(v___x_588_, 0);
v_isSharedCheck_675_ = !lean_is_exclusive(v___x_588_);
if (v_isSharedCheck_675_ == 0)
{
v___x_670_ = v___x_588_;
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_a_668_);
lean_dec(v___x_588_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_675_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_673_; 
if (v_isShared_671_ == 0)
{
v___x_673_ = v___x_670_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_674_; 
v_reuseFailAlloc_674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_674_, 0, v_a_668_);
v___x_673_ = v_reuseFailAlloc_674_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
return v___x_673_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewrite___boxed(lean_object* v_mvarId_676_, lean_object* v_e_677_, lean_object* v_stx_678_, lean_object* v_symm_679_, lean_object* v_config_680_, lean_object* v_a_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_){
_start:
{
uint8_t v_symm_boxed_690_; lean_object* v_res_691_; 
v_symm_boxed_690_ = lean_unbox(v_symm_679_);
v_res_691_ = l_Lean_Elab_Tactic_elabRewrite(v_mvarId_676_, v_e_677_, v_stx_678_, v_symm_boxed_690_, v_config_680_, v_a_681_, v_a_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_, v_a_688_);
lean_dec(v_a_688_);
lean_dec_ref(v_a_687_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
lean_dec(v_a_682_);
lean_dec_ref(v_a_681_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2(lean_object* v_00_u03b1_692_, lean_object* v_ref_693_, lean_object* v_msg_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___redArg(v_ref_693_, v_msg_694_, v___y_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_, v___y_700_, v___y_701_, v___y_702_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2___boxed(lean_object* v_00_u03b1_705_, lean_object* v_ref_706_, lean_object* v_msg_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2(v_00_u03b1_705_, v_ref_706_, v_msg_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v_ref_706_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3(lean_object* v_00_u03b1_718_, lean_object* v_msg_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg(v_msg_719_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___boxed(lean_object* v_00_u03b1_730_, lean_object* v_msg_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3(v_00_u03b1_730_, v_msg_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_, v___y_739_);
lean_dec(v___y_739_);
lean_dec_ref(v___y_738_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
return v_res_741_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_742_, lean_object* v_m_743_, lean_object* v_a_744_){
_start:
{
uint8_t v___x_745_; 
v___x_745_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___redArg(v_m_743_, v_a_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_746_, lean_object* v_m_747_, lean_object* v_a_748_){
_start:
{
uint8_t v_res_749_; lean_object* v_r_750_; 
v_res_749_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3(v_00_u03b2_746_, v_m_747_, v_a_748_);
lean_dec_ref(v_a_748_);
lean_dec_ref(v_m_747_);
v_r_750_ = lean_box(v_res_749_);
return v_r_750_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_751_, lean_object* v_m_752_, lean_object* v_a_753_, lean_object* v_b_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4___redArg(v_m_752_, v_a_753_, v_b_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9(lean_object* v_mvarId_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___redArg(v_mvarId_756_, v___y_757_, v___y_763_, v___y_765_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9___boxed(lean_object* v_mvarId_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_getExprMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__9(v_mvarId_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v_mvarId_768_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10(lean_object* v_mvarId_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___redArg(v_mvarId_780_, v___y_781_, v___y_787_, v___y_789_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10___boxed(lean_object* v_mvarId_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_){
_start:
{
lean_object* v_res_803_; 
v_res_803_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visitMVar___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__5_spec__10(v_mvarId_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v_mvarId_792_);
return v_res_803_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_804_, lean_object* v_a_805_, lean_object* v_x_806_){
_start:
{
uint8_t v___x_807_; 
v___x_807_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___redArg(v_a_805_, v_x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_808_, lean_object* v_a_809_, lean_object* v_x_810_){
_start:
{
uint8_t v_res_811_; lean_object* v_r_812_; 
v_res_811_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_808_, v_a_809_, v_x_810_);
lean_dec(v_x_810_);
lean_dec_ref(v_a_809_);
v_r_812_ = lean_box(v_res_811_);
return v_r_812_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7(lean_object* v_00_u03b2_813_, lean_object* v_data_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7___redArg(v_data_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10(lean_object* v_00_u03b2_816_, lean_object* v_i_817_, lean_object* v_source_818_, lean_object* v_target_819_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10___redArg(v_i_817_, v_source_818_, v_target_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10_spec__14(lean_object* v_00_u03b2_821_, lean_object* v_x_822_, lean_object* v_x_823_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Util_OccursCheck_0__Lean_occursCheck_visit___at___00Lean_occursCheck___at___00Lean_Elab_Tactic_elabRewrite_spec__1_spec__1_spec__4_spec__7_spec__10_spec__14___redArg(v_x_822_, v_x_823_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___redArg(lean_object* v_mvarId_825_, lean_object* v_x_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_825_, v_x_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
else
{
lean_object* v_a_841_; lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
v_a_841_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_848_ == 0)
{
v___x_843_ = v___x_832_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_inc(v_a_841_);
lean_dec(v___x_832_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_841_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___redArg___boxed(lean_object* v_mvarId_849_, lean_object* v_x_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___redArg(v_mvarId_849_, v_x_850_, v___y_851_, v___y_852_, v___y_853_, v___y_854_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1(lean_object* v_00_u03b1_857_, lean_object* v_mvarId_858_, lean_object* v_x_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___redArg(v_mvarId_858_, v_x_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___boxed(lean_object* v_00_u03b1_866_, lean_object* v_mvarId_867_, lean_object* v_x_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1(v_00_u03b1_866_, v_mvarId_867_, v_x_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___lam__0(lean_object* v_head_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
lean_object* v___x_881_; 
lean_inc(v_head_875_);
v___x_881_ = l_Lean_MVarId_getType(v_head_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v_a_882_; lean_object* v___x_883_; 
v_a_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_a_882_);
lean_dec_ref(v___x_881_);
v___x_883_ = l_Lean_Meta_isProp(v_a_882_, v___y_876_, v___y_877_, v___y_878_, v___y_879_);
if (lean_obj_tag(v___x_883_) == 0)
{
lean_object* v_a_884_; lean_object* v___x_886_; uint8_t v_isShared_887_; uint8_t v_isSharedCheck_895_; 
v_a_884_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_895_ == 0)
{
v___x_886_ = v___x_883_;
v_isShared_887_ = v_isSharedCheck_895_;
goto v_resetjp_885_;
}
else
{
lean_inc(v_a_884_);
lean_dec(v___x_883_);
v___x_886_ = lean_box(0);
v_isShared_887_ = v_isSharedCheck_895_;
goto v_resetjp_885_;
}
v_resetjp_885_:
{
uint8_t v___x_888_; 
v___x_888_ = lean_unbox(v_a_884_);
lean_dec(v_a_884_);
if (v___x_888_ == 0)
{
lean_object* v___x_889_; lean_object* v___x_891_; 
lean_dec(v_head_875_);
v___x_889_ = lean_box(0);
if (v_isShared_887_ == 0)
{
lean_ctor_set(v___x_886_, 0, v___x_889_);
v___x_891_ = v___x_886_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
else
{
uint8_t v___x_893_; lean_object* v___x_894_; 
lean_del_object(v___x_886_);
v___x_893_ = 2;
v___x_894_ = l_Lean_MVarId_setKind___redArg(v_head_875_, v___x_893_, v___y_877_, v___y_879_);
return v___x_894_;
}
}
}
else
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_903_; 
lean_dec(v_head_875_);
v_a_896_ = lean_ctor_get(v___x_883_, 0);
v_isSharedCheck_903_ = !lean_is_exclusive(v___x_883_);
if (v_isSharedCheck_903_ == 0)
{
v___x_898_ = v___x_883_;
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_883_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_903_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_899_ == 0)
{
v___x_901_ = v___x_898_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_902_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
return v___x_901_;
}
}
}
}
else
{
lean_object* v_a_904_; lean_object* v___x_906_; uint8_t v_isShared_907_; uint8_t v_isSharedCheck_911_; 
lean_dec(v_head_875_);
v_a_904_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_911_ == 0)
{
v___x_906_ = v___x_881_;
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
else
{
lean_inc(v_a_904_);
lean_dec(v___x_881_);
v___x_906_ = lean_box(0);
v_isShared_907_ = v_isSharedCheck_911_;
goto v_resetjp_905_;
}
v_resetjp_905_:
{
lean_object* v___x_909_; 
if (v_isShared_907_ == 0)
{
v___x_909_ = v___x_906_;
goto v_reusejp_908_;
}
else
{
lean_object* v_reuseFailAlloc_910_; 
v_reuseFailAlloc_910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_910_, 0, v_a_904_);
v___x_909_ = v_reuseFailAlloc_910_;
goto v_reusejp_908_;
}
v_reusejp_908_:
{
return v___x_909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___lam__0___boxed(lean_object* v_head_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___lam__0(v_head_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2(lean_object* v_as_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
if (lean_obj_tag(v_as_919_) == 0)
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = lean_box(0);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v___x_925_);
return v___x_926_;
}
else
{
lean_object* v_head_927_; lean_object* v_tail_928_; lean_object* v___f_929_; lean_object* v___x_930_; 
v_head_927_ = lean_ctor_get(v_as_919_, 0);
lean_inc_n(v_head_927_, 2);
v_tail_928_ = lean_ctor_get(v_as_919_, 1);
lean_inc(v_tail_928_);
lean_dec_ref(v_as_919_);
v___f_929_ = lean_alloc_closure((void*)(l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___lam__0___boxed), 6, 1);
lean_closure_set(v___f_929_, 0, v_head_927_);
v___x_930_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_finishElabRewrite_spec__1___redArg(v_head_927_, v___f_929_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
if (lean_obj_tag(v___x_930_) == 0)
{
lean_dec_ref(v___x_930_);
v_as_919_ = v_tail_928_;
goto _start;
}
else
{
lean_dec(v_tail_928_);
return v___x_930_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2___boxed(lean_object* v_as_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2(v_as_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
return v_res_938_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___redArg(lean_object* v_keys_939_, lean_object* v_i_940_, lean_object* v_k_941_){
_start:
{
lean_object* v___x_942_; uint8_t v___x_943_; 
v___x_942_ = lean_array_get_size(v_keys_939_);
v___x_943_ = lean_nat_dec_lt(v_i_940_, v___x_942_);
if (v___x_943_ == 0)
{
lean_dec(v_i_940_);
return v___x_943_;
}
else
{
lean_object* v_k_x27_944_; uint8_t v___x_945_; 
v_k_x27_944_ = lean_array_fget_borrowed(v_keys_939_, v_i_940_);
v___x_945_ = l_Lean_instBEqMVarId_beq(v_k_941_, v_k_x27_944_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_unsigned_to_nat(1u);
v___x_947_ = lean_nat_add(v_i_940_, v___x_946_);
lean_dec(v_i_940_);
v_i_940_ = v___x_947_;
goto _start;
}
else
{
lean_dec(v_i_940_);
return v___x_945_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_keys_949_, lean_object* v_i_950_, lean_object* v_k_951_){
_start:
{
uint8_t v_res_952_; lean_object* v_r_953_; 
v_res_952_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___redArg(v_keys_949_, v_i_950_, v_k_951_);
lean_dec(v_k_951_);
lean_dec_ref(v_keys_949_);
v_r_953_ = lean_box(v_res_952_);
return v_r_953_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_954_; size_t v___x_955_; size_t v___x_956_; 
v___x_954_ = ((size_t)5ULL);
v___x_955_ = ((size_t)1ULL);
v___x_956_ = lean_usize_shift_left(v___x_955_, v___x_954_);
return v___x_956_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_957_; size_t v___x_958_; size_t v___x_959_; 
v___x_957_ = ((size_t)1ULL);
v___x_958_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_959_ = lean_usize_sub(v___x_958_, v___x_957_);
return v___x_959_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg(lean_object* v_x_960_, size_t v_x_961_, lean_object* v_x_962_){
_start:
{
if (lean_obj_tag(v_x_960_) == 0)
{
lean_object* v_es_963_; lean_object* v___x_964_; size_t v___x_965_; size_t v___x_966_; size_t v___x_967_; lean_object* v_j_968_; lean_object* v___x_969_; 
v_es_963_ = lean_ctor_get(v_x_960_, 0);
v___x_964_ = lean_box(2);
v___x_965_ = ((size_t)5ULL);
v___x_966_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_967_ = lean_usize_land(v_x_961_, v___x_966_);
v_j_968_ = lean_usize_to_nat(v___x_967_);
v___x_969_ = lean_array_get_borrowed(v___x_964_, v_es_963_, v_j_968_);
lean_dec(v_j_968_);
switch(lean_obj_tag(v___x_969_))
{
case 0:
{
lean_object* v_key_970_; uint8_t v___x_971_; 
v_key_970_ = lean_ctor_get(v___x_969_, 0);
v___x_971_ = l_Lean_instBEqMVarId_beq(v_x_962_, v_key_970_);
return v___x_971_;
}
case 1:
{
lean_object* v_node_972_; size_t v___x_973_; 
v_node_972_ = lean_ctor_get(v___x_969_, 0);
v___x_973_ = lean_usize_shift_right(v_x_961_, v___x_965_);
v_x_960_ = v_node_972_;
v_x_961_ = v___x_973_;
goto _start;
}
default: 
{
uint8_t v___x_975_; 
v___x_975_ = 0;
return v___x_975_;
}
}
}
else
{
lean_object* v_ks_976_; lean_object* v___x_977_; uint8_t v___x_978_; 
v_ks_976_ = lean_ctor_get(v_x_960_, 0);
v___x_977_ = lean_unsigned_to_nat(0u);
v___x_978_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___redArg(v_ks_976_, v___x_977_, v_x_962_);
return v___x_978_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_979_, lean_object* v_x_980_, lean_object* v_x_981_){
_start:
{
size_t v_x_2095__boxed_982_; uint8_t v_res_983_; lean_object* v_r_984_; 
v_x_2095__boxed_982_ = lean_unbox_usize(v_x_980_);
lean_dec(v_x_980_);
v_res_983_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg(v_x_979_, v_x_2095__boxed_982_, v_x_981_);
lean_dec(v_x_981_);
lean_dec_ref(v_x_979_);
v_r_984_ = lean_box(v_res_983_);
return v_r_984_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___redArg(lean_object* v_x_985_, lean_object* v_x_986_){
_start:
{
uint64_t v___x_987_; size_t v___x_988_; uint8_t v___x_989_; 
v___x_987_ = l_Lean_instHashableMVarId_hash(v_x_986_);
v___x_988_ = lean_uint64_to_usize(v___x_987_);
v___x_989_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg(v_x_985_, v___x_988_, v_x_986_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___redArg___boxed(lean_object* v_x_990_, lean_object* v_x_991_){
_start:
{
uint8_t v_res_992_; lean_object* v_r_993_; 
v_res_992_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___redArg(v_x_990_, v_x_991_);
lean_dec(v_x_991_);
lean_dec_ref(v_x_990_);
v_r_993_ = lean_box(v_res_992_);
return v_r_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___redArg(lean_object* v_mvarId_994_, lean_object* v___y_995_, lean_object* v___y_996_){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v_mctx_1000_; lean_object* v_eAssignment_1001_; uint8_t v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_998_ = lean_st_ref_get(v___y_996_);
lean_dec(v___x_998_);
v___x_999_ = lean_st_ref_get(v___y_995_);
v_mctx_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc_ref(v_mctx_1000_);
lean_dec(v___x_999_);
v_eAssignment_1001_ = lean_ctor_get(v_mctx_1000_, 8);
lean_inc_ref(v_eAssignment_1001_);
lean_dec_ref(v_mctx_1000_);
v___x_1002_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___redArg(v_eAssignment_1001_, v_mvarId_994_);
lean_dec_ref(v_eAssignment_1001_);
v___x_1003_ = lean_box(v___x_1002_);
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___redArg___boxed(lean_object* v_mvarId_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___redArg(v_mvarId_1005_, v___y_1006_, v___y_1007_);
lean_dec(v___y_1007_);
lean_dec(v___y_1006_);
lean_dec(v_mvarId_1005_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__3(lean_object* v_x_1010_, lean_object* v_x_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
if (lean_obj_tag(v_x_1010_) == 0)
{
lean_object* v___x_1017_; 
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_x_1011_);
return v___x_1017_;
}
else
{
lean_object* v_head_1018_; lean_object* v_tail_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1032_; 
v_head_1018_ = lean_ctor_get(v_x_1010_, 0);
v_tail_1019_ = lean_ctor_get(v_x_1010_, 1);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_x_1010_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1021_ = v_x_1010_;
v_isShared_1022_ = v_isSharedCheck_1032_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_tail_1019_);
lean_inc(v_head_1018_);
lean_dec(v_x_1010_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1032_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v___x_1028_; lean_object* v_a_1029_; uint8_t v___x_1030_; 
v___x_1028_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___redArg(v_head_1018_, v___y_1013_, v___y_1015_);
v_a_1029_ = lean_ctor_get(v___x_1028_, 0);
lean_inc(v_a_1029_);
lean_dec_ref(v___x_1028_);
v___x_1030_ = lean_unbox(v_a_1029_);
lean_dec(v_a_1029_);
if (v___x_1030_ == 0)
{
goto v___jp_1023_;
}
else
{
lean_del_object(v___x_1021_);
lean_dec(v_head_1018_);
v_x_1010_ = v_tail_1019_;
goto _start;
}
v___jp_1023_:
{
lean_object* v___x_1025_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 1, v_x_1011_);
v___x_1025_ = v___x_1021_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1027_; 
v_reuseFailAlloc_1027_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1027_, 0, v_head_1018_);
lean_ctor_set(v_reuseFailAlloc_1027_, 1, v_x_1011_);
v___x_1025_ = v_reuseFailAlloc_1027_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
v_x_1010_ = v_tail_1019_;
v_x_1011_ = v___x_1025_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterAuxM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__3___boxed(lean_object* v_x_1033_, lean_object* v_x_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v_res_1040_; 
v_res_1040_ = l_List_filterAuxM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__3(v_x_1033_, v_x_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
lean_dec(v___y_1038_);
lean_dec_ref(v___y_1037_);
lean_dec(v___y_1036_);
lean_dec_ref(v___y_1035_);
return v_res_1040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_finishElabRewrite(lean_object* v_r_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v_eNew_1047_; lean_object* v_eqProof_1048_; lean_object* v_mvarIds_1049_; lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1088_; 
v_eNew_1047_ = lean_ctor_get(v_r_1041_, 0);
v_eqProof_1048_ = lean_ctor_get(v_r_1041_, 1);
v_mvarIds_1049_ = lean_ctor_get(v_r_1041_, 2);
v_isSharedCheck_1088_ = !lean_is_exclusive(v_r_1041_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1051_ = v_r_1041_;
v_isShared_1052_ = v_isSharedCheck_1088_;
goto v_resetjp_1050_;
}
else
{
lean_inc(v_mvarIds_1049_);
lean_inc(v_eqProof_1048_);
lean_inc(v_eNew_1047_);
lean_dec(v_r_1041_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1088_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v_a_1054_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = lean_box(0);
v___x_1076_ = l_List_filterAuxM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__3(v_mvarIds_1049_, v___x_1075_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1078_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref(v___x_1076_);
v___x_1078_ = l_List_reverse___redArg(v_a_1077_);
v_a_1054_ = v___x_1078_;
goto v___jp_1053_;
}
else
{
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1079_; 
v_a_1079_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1079_);
lean_dec_ref(v___x_1076_);
v_a_1054_ = v_a_1079_;
goto v___jp_1053_;
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_del_object(v___x_1051_);
lean_dec_ref(v_eqProof_1048_);
lean_dec_ref(v_eNew_1047_);
v_a_1080_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1076_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1076_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
v___jp_1053_:
{
lean_object* v___x_1055_; 
lean_inc(v_a_1054_);
v___x_1055_ = l_List_forM___at___00Lean_Elab_Tactic_finishElabRewrite_spec__2(v_a_1054_, v_a_1042_, v_a_1043_, v_a_1044_, v_a_1045_);
if (lean_obj_tag(v___x_1055_) == 0)
{
lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1065_; 
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1065_ == 0)
{
lean_object* v_unused_1066_; 
v_unused_1066_ = lean_ctor_get(v___x_1055_, 0);
lean_dec(v_unused_1066_);
v___x_1057_ = v___x_1055_;
v_isShared_1058_ = v_isSharedCheck_1065_;
goto v_resetjp_1056_;
}
else
{
lean_dec(v___x_1055_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1065_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 2, v_a_1054_);
v___x_1060_ = v___x_1051_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_eNew_1047_);
lean_ctor_set(v_reuseFailAlloc_1064_, 1, v_eqProof_1048_);
lean_ctor_set(v_reuseFailAlloc_1064_, 2, v_a_1054_);
v___x_1060_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1062_; 
if (v_isShared_1058_ == 0)
{
lean_ctor_set(v___x_1057_, 0, v___x_1060_);
v___x_1062_ = v___x_1057_;
goto v_reusejp_1061_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1060_);
v___x_1062_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1061_;
}
v_reusejp_1061_:
{
return v___x_1062_;
}
}
}
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
lean_dec(v_a_1054_);
lean_del_object(v___x_1051_);
lean_dec_ref(v_eqProof_1048_);
lean_dec_ref(v_eNew_1047_);
v_a_1067_ = lean_ctor_get(v___x_1055_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1055_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1055_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1055_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_finishElabRewrite___boxed(lean_object* v_r_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_){
_start:
{
lean_object* v_res_1095_; 
v_res_1095_ = l_Lean_Elab_Tactic_finishElabRewrite(v_r_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
lean_dec(v_a_1093_);
lean_dec_ref(v_a_1092_);
lean_dec(v_a_1091_);
lean_dec_ref(v_a_1090_);
return v_res_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0(lean_object* v_mvarId_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___redArg(v_mvarId_1096_, v___y_1098_, v___y_1100_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0___boxed(lean_object* v_mvarId_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0(v_mvarId_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v_mvarId_1103_);
return v_res_1109_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0(lean_object* v_00_u03b2_1110_, lean_object* v_x_1111_, lean_object* v_x_1112_){
_start:
{
uint8_t v___x_1113_; 
v___x_1113_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___redArg(v_x_1111_, v_x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1114_, lean_object* v_x_1115_, lean_object* v_x_1116_){
_start:
{
uint8_t v_res_1117_; lean_object* v_r_1118_; 
v_res_1117_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0(v_00_u03b2_1114_, v_x_1115_, v_x_1116_);
lean_dec(v_x_1116_);
lean_dec_ref(v_x_1115_);
v_r_1118_ = lean_box(v_res_1117_);
return v_r_1118_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1119_, lean_object* v_x_1120_, size_t v_x_1121_, lean_object* v_x_1122_){
_start:
{
uint8_t v___x_1123_; 
v___x_1123_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg(v_x_1120_, v_x_1121_, v_x_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1124_, lean_object* v_x_1125_, lean_object* v_x_1126_, lean_object* v_x_1127_){
_start:
{
size_t v_x_2334__boxed_1128_; uint8_t v_res_1129_; lean_object* v_r_1130_; 
v_x_2334__boxed_1128_ = lean_unbox_usize(v_x_1126_);
lean_dec(v_x_1126_);
v_res_1129_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2(v_00_u03b2_1124_, v_x_1125_, v_x_2334__boxed_1128_, v_x_1127_);
lean_dec(v_x_1127_);
lean_dec_ref(v_x_1125_);
v_r_1130_ = lean_box(v_res_1129_);
return v_r_1130_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_1131_, lean_object* v_keys_1132_, lean_object* v_vals_1133_, lean_object* v_heq_1134_, lean_object* v_i_1135_, lean_object* v_k_1136_){
_start:
{
uint8_t v___x_1137_; 
v___x_1137_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___redArg(v_keys_1132_, v_i_1135_, v_k_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_1138_, lean_object* v_keys_1139_, lean_object* v_vals_1140_, lean_object* v_heq_1141_, lean_object* v_i_1142_, lean_object* v_k_1143_){
_start:
{
uint8_t v_res_1144_; lean_object* v_r_1145_; 
v_res_1144_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_1138_, v_keys_1139_, v_vals_1140_, v_heq_1141_, v_i_1142_, v_k_1143_);
lean_dec(v_k_1143_);
lean_dec_ref(v_vals_1140_);
lean_dec_ref(v_keys_1139_);
v_r_1145_ = lean_box(v_res_1144_);
return v_r_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget___lam__0(lean_object* v_stx_1146_, uint8_t v_symm_1147_, lean_object* v_config_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1150_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; lean_object* v___x_1160_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref(v___x_1158_);
v___x_1160_ = l_Lean_Elab_Tactic_getMainTarget(v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; lean_object* v___x_1162_; 
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
lean_inc(v_a_1161_);
lean_dec_ref(v___x_1160_);
v___x_1162_ = l_Lean_Elab_Tactic_elabRewrite(v_a_1159_, v_a_1161_, v_stx_1146_, v_symm_1147_, v_config_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
return v___x_1162_;
}
else
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
lean_dec(v_a_1159_);
lean_dec_ref(v_config_1148_);
lean_dec(v_stx_1146_);
v_a_1163_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v___x_1160_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1160_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1168_; 
if (v_isShared_1166_ == 0)
{
v___x_1168_ = v___x_1165_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_a_1163_);
v___x_1168_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
return v___x_1168_;
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
lean_dec_ref(v_config_1148_);
lean_dec(v_stx_1146_);
v_a_1171_ = lean_ctor_get(v___x_1158_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1158_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1158_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1158_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget___lam__0___boxed(lean_object* v_stx_1179_, lean_object* v_symm_1180_, lean_object* v_config_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
uint8_t v_symm_boxed_1191_; lean_object* v_res_1192_; 
v_symm_boxed_1191_ = lean_unbox(v_symm_1180_);
v_res_1192_ = l_Lean_Elab_Tactic_rewriteTarget___lam__0(v_stx_1179_, v_symm_boxed_1191_, v_config_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget(lean_object* v_stx_1193_, uint8_t v_symm_1194_, lean_object* v_config_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_){
_start:
{
lean_object* v___x_1205_; lean_object* v___f_1206_; uint8_t v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v___x_1205_ = lean_box(v_symm_1194_);
v___f_1206_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget___lam__0___boxed), 12, 3);
lean_closure_set(v___f_1206_, 0, v_stx_1193_);
lean_closure_set(v___f_1206_, 1, v___x_1205_);
lean_closure_set(v___f_1206_, 2, v_config_1195_);
v___x_1207_ = 1;
lean_inc(v_a_1197_);
lean_inc_ref(v_a_1196_);
v___x_1208_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMainContext___boxed), 11, 4);
lean_closure_set(v___x_1208_, 0, lean_box(0));
lean_closure_set(v___x_1208_, 1, v___f_1206_);
lean_closure_set(v___x_1208_, 2, v_a_1196_);
lean_closure_set(v___x_1208_, 3, v_a_1197_);
v___x_1209_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1208_, v___x_1207_, v_a_1198_, v_a_1199_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_object* v_a_1210_; lean_object* v___x_1211_; 
v_a_1210_ = lean_ctor_get(v___x_1209_, 0);
lean_inc(v_a_1210_);
lean_dec_ref(v___x_1209_);
v___x_1211_ = l_Lean_Elab_Tactic_finishElabRewrite(v_a_1210_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; lean_object* v___x_1213_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref(v___x_1211_);
v___x_1213_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_1197_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_object* v_a_1214_; lean_object* v_eNew_1215_; lean_object* v_eqProof_1216_; lean_object* v_mvarIds_1217_; lean_object* v___x_1218_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_a_1214_);
lean_dec_ref(v___x_1213_);
v_eNew_1215_ = lean_ctor_get(v_a_1212_, 0);
lean_inc_ref(v_eNew_1215_);
v_eqProof_1216_ = lean_ctor_get(v_a_1212_, 1);
lean_inc_ref(v_eqProof_1216_);
v_mvarIds_1217_ = lean_ctor_get(v_a_1212_, 2);
lean_inc(v_mvarIds_1217_);
lean_dec(v_a_1212_);
v___x_1218_ = l_Lean_MVarId_replaceTargetEq(v_a_1214_, v_eNew_1215_, v_eqProof_1216_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v_a_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; 
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_a_1219_);
lean_dec_ref(v___x_1218_);
v___x_1220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1220_, 0, v_a_1219_);
lean_ctor_set(v___x_1220_, 1, v_mvarIds_1217_);
v___x_1221_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1220_, v_a_1197_, v_a_1200_, v_a_1201_, v_a_1202_, v_a_1203_);
return v___x_1221_;
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
lean_dec(v_mvarIds_1217_);
v_a_1222_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1218_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1218_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
v_resetjp_1223_:
{
lean_object* v___x_1227_; 
if (v_isShared_1225_ == 0)
{
v___x_1227_ = v___x_1224_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_a_1222_);
v___x_1227_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
return v___x_1227_;
}
}
}
}
else
{
lean_object* v_a_1230_; lean_object* v___x_1232_; uint8_t v_isShared_1233_; uint8_t v_isSharedCheck_1237_; 
lean_dec(v_a_1212_);
v_a_1230_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1232_ = v___x_1213_;
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
else
{
lean_inc(v_a_1230_);
lean_dec(v___x_1213_);
v___x_1232_ = lean_box(0);
v_isShared_1233_ = v_isSharedCheck_1237_;
goto v_resetjp_1231_;
}
v_resetjp_1231_:
{
lean_object* v___x_1235_; 
if (v_isShared_1233_ == 0)
{
v___x_1235_ = v___x_1232_;
goto v_reusejp_1234_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v_a_1230_);
v___x_1235_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1234_;
}
v_reusejp_1234_:
{
return v___x_1235_;
}
}
}
}
else
{
lean_object* v_a_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1245_; 
v_a_1238_ = lean_ctor_get(v___x_1211_, 0);
v_isSharedCheck_1245_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1245_ == 0)
{
v___x_1240_ = v___x_1211_;
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_a_1238_);
lean_dec(v___x_1211_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1245_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1244_; 
v_reuseFailAlloc_1244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1244_, 0, v_a_1238_);
v___x_1243_ = v_reuseFailAlloc_1244_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
return v___x_1243_;
}
}
}
}
else
{
lean_object* v_a_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1253_; 
v_a_1246_ = lean_ctor_get(v___x_1209_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1209_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1248_ = v___x_1209_;
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_a_1246_);
lean_dec(v___x_1209_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1253_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1251_; 
if (v_isShared_1249_ == 0)
{
v___x_1251_ = v___x_1248_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v_a_1246_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteTarget___boxed(lean_object* v_stx_1254_, lean_object* v_symm_1255_, lean_object* v_config_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_){
_start:
{
uint8_t v_symm_boxed_1266_; lean_object* v_res_1267_; 
v_symm_boxed_1266_ = lean_unbox(v_symm_1255_);
v_res_1267_ = l_Lean_Elab_Tactic_rewriteTarget(v_stx_1254_, v_symm_boxed_1266_, v_config_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_);
lean_dec(v_a_1264_);
lean_dec_ref(v_a_1263_);
lean_dec(v_a_1262_);
lean_dec_ref(v_a_1261_);
lean_dec(v_a_1260_);
lean_dec_ref(v_a_1259_);
lean_dec(v_a_1258_);
lean_dec_ref(v_a_1257_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__0(lean_object* v_fvarId_1268_, lean_object* v_stx_1269_, uint8_t v_symm_1270_, lean_object* v_config_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1268_, v___y_1276_, v___y_1278_, v___y_1279_);
if (lean_obj_tag(v___x_1281_) == 0)
{
lean_object* v_a_1282_; lean_object* v___x_1283_; 
v_a_1282_ = lean_ctor_get(v___x_1281_, 0);
lean_inc(v_a_1282_);
lean_dec_ref(v___x_1281_);
v___x_1283_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1273_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
if (lean_obj_tag(v___x_1283_) == 0)
{
lean_object* v_a_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v_a_1284_ = lean_ctor_get(v___x_1283_, 0);
lean_inc(v_a_1284_);
lean_dec_ref(v___x_1283_);
v___x_1285_ = l_Lean_LocalDecl_type(v_a_1282_);
lean_dec(v_a_1282_);
v___x_1286_ = l_Lean_Elab_Tactic_elabRewrite(v_a_1284_, v___x_1285_, v_stx_1269_, v_symm_1270_, v_config_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
return v___x_1286_;
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec(v_a_1282_);
lean_dec_ref(v_config_1271_);
lean_dec(v_stx_1269_);
v_a_1287_ = lean_ctor_get(v___x_1283_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1283_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1283_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1283_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
else
{
lean_object* v_a_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1302_; 
lean_dec_ref(v_config_1271_);
lean_dec(v_stx_1269_);
v_a_1295_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1281_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1281_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v___x_1300_; 
if (v_isShared_1298_ == 0)
{
v___x_1300_ = v___x_1297_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v_a_1295_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__0___boxed(lean_object* v_fvarId_1303_, lean_object* v_stx_1304_, lean_object* v_symm_1305_, lean_object* v_config_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_){
_start:
{
uint8_t v_symm_boxed_1316_; lean_object* v_res_1317_; 
v_symm_boxed_1316_ = lean_unbox(v_symm_1305_);
v_res_1317_ = l_Lean_Elab_Tactic_rewriteLocalDecl___lam__0(v_fvarId_1303_, v_stx_1304_, v_symm_boxed_1316_, v_config_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
lean_dec(v___y_1312_);
lean_dec_ref(v___y_1311_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__1(lean_object* v___f_1318_, uint8_t v___x_1319_, lean_object* v_fvarId_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v___x_1330_; lean_object* v___x_1331_; 
lean_inc(v___y_1322_);
v___x_1330_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withMainContext___boxed), 11, 4);
lean_closure_set(v___x_1330_, 0, lean_box(0));
lean_closure_set(v___x_1330_, 1, v___f_1318_);
lean_closure_set(v___x_1330_, 2, v___y_1321_);
lean_closure_set(v___x_1330_, 3, v___y_1322_);
v___x_1331_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1330_, v___x_1319_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; lean_object* v___x_1333_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref(v___x_1331_);
v___x_1333_ = l_Lean_Elab_Tactic_finishElabRewrite(v_a_1332_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
if (lean_obj_tag(v___x_1333_) == 0)
{
lean_object* v_a_1334_; lean_object* v___x_1335_; 
v_a_1334_ = lean_ctor_get(v___x_1333_, 0);
lean_inc(v_a_1334_);
lean_dec_ref(v___x_1333_);
v___x_1335_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_1322_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; lean_object* v_eNew_1337_; lean_object* v_eqProof_1338_; lean_object* v_mvarIds_1339_; lean_object* v___x_1340_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref(v___x_1335_);
v_eNew_1337_ = lean_ctor_get(v_a_1334_, 0);
lean_inc_ref(v_eNew_1337_);
v_eqProof_1338_ = lean_ctor_get(v_a_1334_, 1);
lean_inc_ref(v_eqProof_1338_);
v_mvarIds_1339_ = lean_ctor_get(v_a_1334_, 2);
lean_inc(v_mvarIds_1339_);
lean_dec(v_a_1334_);
v___x_1340_ = l___private_Lean_Meta_Tactic_Replace_0__Lean_Meta_replaceLocalDeclCore(v_a_1336_, v_fvarId_1320_, v_eNew_1337_, v_eqProof_1338_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v_mvarId_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc(v_a_1341_);
lean_dec_ref(v___x_1340_);
v_mvarId_1342_ = lean_ctor_get(v_a_1341_, 1);
lean_inc(v_mvarId_1342_);
lean_dec(v_a_1341_);
v___x_1343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1343_, 0, v_mvarId_1342_);
lean_ctor_set(v___x_1343_, 1, v_mvarIds_1339_);
v___x_1344_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_1343_, v___y_1322_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_);
lean_dec(v___y_1322_);
return v___x_1344_;
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
lean_dec(v_mvarIds_1339_);
lean_dec(v___y_1322_);
v_a_1345_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1340_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1340_);
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
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
lean_dec(v_a_1334_);
lean_dec(v___y_1322_);
lean_dec(v_fvarId_1320_);
v_a_1353_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1335_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1335_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
lean_dec(v___y_1322_);
lean_dec(v_fvarId_1320_);
v_a_1361_ = lean_ctor_get(v___x_1333_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1333_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1333_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1333_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1366_; 
if (v_isShared_1364_ == 0)
{
v___x_1366_ = v___x_1363_;
goto v_reusejp_1365_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v_a_1361_);
v___x_1366_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1365_;
}
v_reusejp_1365_:
{
return v___x_1366_;
}
}
}
}
else
{
lean_object* v_a_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1376_; 
lean_dec(v___y_1322_);
lean_dec(v_fvarId_1320_);
v_a_1369_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1376_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1376_ == 0)
{
v___x_1371_ = v___x_1331_;
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_a_1369_);
lean_dec(v___x_1331_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1376_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v___x_1374_; 
if (v_isShared_1372_ == 0)
{
v___x_1374_ = v___x_1371_;
goto v_reusejp_1373_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v_a_1369_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___lam__1___boxed(lean_object* v___f_1377_, lean_object* v___x_1378_, lean_object* v_fvarId_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
uint8_t v___x_1049__boxed_1389_; lean_object* v_res_1390_; 
v___x_1049__boxed_1389_ = lean_unbox(v___x_1378_);
v_res_1390_ = l_Lean_Elab_Tactic_rewriteLocalDecl___lam__1(v___f_1377_, v___x_1049__boxed_1389_, v_fvarId_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
lean_dec(v___y_1387_);
lean_dec_ref(v___y_1386_);
lean_dec(v___y_1385_);
lean_dec_ref(v___y_1384_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl(lean_object* v_stx_1391_, uint8_t v_symm_1392_, lean_object* v_fvarId_1393_, lean_object* v_config_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_, lean_object* v_a_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_, lean_object* v_a_1402_){
_start:
{
lean_object* v___x_1404_; lean_object* v___f_1405_; uint8_t v___x_1406_; lean_object* v___x_1407_; lean_object* v___f_1408_; lean_object* v___x_1409_; 
v___x_1404_ = lean_box(v_symm_1392_);
lean_inc(v_fvarId_1393_);
v___f_1405_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDecl___lam__0___boxed), 13, 4);
lean_closure_set(v___f_1405_, 0, v_fvarId_1393_);
lean_closure_set(v___f_1405_, 1, v_stx_1391_);
lean_closure_set(v___f_1405_, 2, v___x_1404_);
lean_closure_set(v___f_1405_, 3, v_config_1394_);
v___x_1406_ = 1;
v___x_1407_ = lean_box(v___x_1406_);
v___f_1408_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteLocalDecl___lam__1___boxed), 12, 3);
lean_closure_set(v___f_1408_, 0, v___f_1405_);
lean_closure_set(v___f_1408_, 1, v___x_1407_);
lean_closure_set(v___f_1408_, 2, v_fvarId_1393_);
v___x_1409_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_1408_, v_a_1395_, v_a_1396_, v_a_1397_, v_a_1398_, v_a_1399_, v_a_1400_, v_a_1401_, v_a_1402_);
return v___x_1409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_rewriteLocalDecl___boxed(lean_object* v_stx_1410_, lean_object* v_symm_1411_, lean_object* v_fvarId_1412_, lean_object* v_config_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_){
_start:
{
uint8_t v_symm_boxed_1423_; lean_object* v_res_1424_; 
v_symm_boxed_1423_ = lean_unbox(v_symm_1411_);
v_res_1424_ = l_Lean_Elab_Tactic_rewriteLocalDecl(v_stx_1410_, v_symm_boxed_1423_, v_fvarId_1412_, v_config_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_);
lean_dec(v_a_1421_);
lean_dec_ref(v_a_1420_);
lean_dec(v_a_1419_);
lean_dec_ref(v_a_1418_);
lean_dec(v_a_1417_);
lean_dec_ref(v_a_1416_);
lean_dec(v_a_1415_);
lean_dec_ref(v_a_1414_);
return v_res_1424_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__0(void){
_start:
{
lean_object* v___x_1425_; 
v___x_1425_ = lean_mk_string_unchecked("Failed to rewrite using equation theorems for `", 47, 47);
return v___x_1425_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__1(void){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1426_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__0, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__0);
v___x_1427_ = l_Lean_stringToMessageData(v___x_1426_);
return v___x_1427_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__2(void){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_1428_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__2, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__2_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__2);
v___x_1430_ = l_Lean_stringToMessageData(v___x_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go(lean_object* v_x_1431_, uint8_t v_symm_1432_, lean_object* v_id_1433_, lean_object* v_declName_1434_, lean_object* v_hint_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_, lean_object* v_a_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_){
_start:
{
if (lean_obj_tag(v_a_1436_) == 0)
{
lean_object* v___x_1446_; uint8_t v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; 
lean_dec_ref(v_x_1431_);
v___x_1446_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__1, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__1_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__1);
v___x_1447_ = 0;
v___x_1448_ = l_Lean_MessageData_ofConstName(v_declName_1434_, v___x_1447_);
v___x_1449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1446_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
v___x_1450_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3);
v___x_1451_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1451_, 0, v___x_1449_);
lean_ctor_set(v___x_1451_, 1, v___x_1450_);
v___x_1452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1451_);
lean_ctor_set(v___x_1452_, 1, v_hint_1435_);
v___x_1453_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3___redArg(v___x_1452_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
return v___x_1453_;
}
else
{
lean_object* v_head_1454_; lean_object* v_tail_1455_; lean_object* v___x_1456_; 
v_head_1454_ = lean_ctor_get(v_a_1436_, 0);
lean_inc(v_head_1454_);
v_tail_1455_ = lean_ctor_get(v_a_1436_, 1);
lean_inc(v_tail_1455_);
lean_dec_ref(v_a_1436_);
v___x_1456_ = l_Lean_Elab_Tactic_saveState___redArg(v_a_1438_, v_a_1440_, v_a_1442_, v_a_1444_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_object* v_a_1457_; uint8_t v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v_a_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_a_1457_);
lean_dec_ref(v___x_1456_);
v___x_1458_ = 0;
v___x_1459_ = l_Lean_mkCIdentFrom(v_id_1433_, v_head_1454_, v___x_1458_);
v___x_1460_ = lean_box(v_symm_1432_);
lean_inc_ref(v_x_1431_);
v___x_1461_ = lean_apply_2(v_x_1431_, v___x_1460_, v___x_1459_);
v___x_1462_ = l_Lean_Elab_Tactic_withoutRecover___redArg(v___x_1461_, v_a_1437_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_dec(v_a_1457_);
lean_dec(v_tail_1455_);
lean_dec_ref(v_hint_1435_);
lean_dec(v_declName_1434_);
lean_dec_ref(v_x_1431_);
return v___x_1462_;
}
else
{
lean_object* v_a_1463_; uint8_t v___y_1465_; uint8_t v___x_1468_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_a_1463_);
v___x_1468_ = l_Lean_Exception_isInterrupt(v_a_1463_);
if (v___x_1468_ == 0)
{
uint8_t v___x_1469_; 
v___x_1469_ = l_Lean_Exception_isRuntime(v_a_1463_);
v___y_1465_ = v___x_1469_;
goto v___jp_1464_;
}
else
{
lean_dec(v_a_1463_);
v___y_1465_ = v___x_1468_;
goto v___jp_1464_;
}
v___jp_1464_:
{
if (v___y_1465_ == 0)
{
lean_object* v___x_1466_; 
lean_dec_ref(v___x_1462_);
v___x_1466_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_1457_, v___y_1465_, v_a_1438_, v_a_1439_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_dec_ref(v___x_1466_);
v_a_1436_ = v_tail_1455_;
goto _start;
}
else
{
lean_dec(v_tail_1455_);
lean_dec_ref(v_hint_1435_);
lean_dec(v_declName_1434_);
lean_dec_ref(v_x_1431_);
return v___x_1466_;
}
}
else
{
lean_dec(v_a_1457_);
lean_dec(v_tail_1455_);
lean_dec_ref(v_hint_1435_);
lean_dec(v_declName_1434_);
lean_dec_ref(v_x_1431_);
return v___x_1462_;
}
}
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec(v_tail_1455_);
lean_dec(v_head_1454_);
lean_dec_ref(v_hint_1435_);
lean_dec(v_declName_1434_);
lean_dec_ref(v_x_1431_);
v_a_1470_ = lean_ctor_get(v___x_1456_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1456_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1456_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___boxed(lean_object* v_x_1478_, lean_object* v_symm_1479_, lean_object* v_id_1480_, lean_object* v_declName_1481_, lean_object* v_hint_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
uint8_t v_symm_boxed_1493_; lean_object* v_res_1494_; 
v_symm_boxed_1493_ = lean_unbox(v_symm_1479_);
v_res_1494_ = l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go(v_x_1478_, v_symm_boxed_1493_, v_id_1480_, v_declName_1481_, v_hint_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_);
lean_dec(v_a_1491_);
lean_dec_ref(v_a_1490_);
lean_dec(v_a_1489_);
lean_dec_ref(v_a_1488_);
lean_dec(v_a_1487_);
lean_dec_ref(v_a_1486_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
lean_dec(v_id_1480_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__0(lean_object* v_a_1495_, lean_object* v_trees_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_){
_start:
{
lean_object* v___x_1506_; 
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
lean_inc(v___y_1498_);
lean_inc_ref(v___y_1497_);
v___x_1506_ = lean_apply_9(v_a_1495_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, lean_box(0));
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1509_; uint8_t v_isShared_1510_; uint8_t v_isSharedCheck_1515_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1515_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1515_ == 0)
{
v___x_1509_ = v___x_1506_;
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
else
{
lean_inc(v_a_1507_);
lean_dec(v___x_1506_);
v___x_1509_ = lean_box(0);
v_isShared_1510_ = v_isSharedCheck_1515_;
goto v_resetjp_1508_;
}
v_resetjp_1508_:
{
lean_object* v___x_1511_; lean_object* v___x_1513_; 
v___x_1511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1511_, 0, v_a_1507_);
lean_ctor_set(v___x_1511_, 1, v_trees_1496_);
if (v_isShared_1510_ == 0)
{
lean_ctor_set(v___x_1509_, 0, v___x_1511_);
v___x_1513_ = v___x_1509_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v___x_1511_);
v___x_1513_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
return v___x_1513_;
}
}
}
else
{
lean_object* v_a_1516_; lean_object* v___x_1518_; uint8_t v_isShared_1519_; uint8_t v_isSharedCheck_1523_; 
lean_dec_ref(v_trees_1496_);
v_a_1516_ = lean_ctor_get(v___x_1506_, 0);
v_isSharedCheck_1523_ = !lean_is_exclusive(v___x_1506_);
if (v_isSharedCheck_1523_ == 0)
{
v___x_1518_ = v___x_1506_;
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
else
{
lean_inc(v_a_1516_);
lean_dec(v___x_1506_);
v___x_1518_ = lean_box(0);
v_isShared_1519_ = v_isSharedCheck_1523_;
goto v_resetjp_1517_;
}
v_resetjp_1517_:
{
lean_object* v___x_1521_; 
if (v_isShared_1519_ == 0)
{
v___x_1521_ = v___x_1518_;
goto v_reusejp_1520_;
}
else
{
lean_object* v_reuseFailAlloc_1522_; 
v_reuseFailAlloc_1522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1522_, 0, v_a_1516_);
v___x_1521_ = v_reuseFailAlloc_1522_;
goto v_reusejp_1520_;
}
v_reusejp_1520_:
{
return v___x_1521_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__0___boxed(lean_object* v_a_1524_, lean_object* v_trees_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v_res_1535_; 
v_res_1535_ = l_Lean_Elab_Tactic_withRWRulesSeq___lam__0(v_a_1524_, v_trees_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
lean_dec(v___y_1531_);
lean_dec_ref(v___y_1530_);
lean_dec(v___y_1529_);
lean_dec_ref(v___y_1528_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
return v_res_1535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__1(lean_object* v___x_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1536_);
return v___x_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___lam__1___boxed(lean_object* v___x_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l_Lean_Elab_Tactic_withRWRulesSeq___lam__1(v___x_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__0(lean_object* v_a_1558_, lean_object* v_trees_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; 
lean_inc(v___y_1567_);
lean_inc_ref(v___y_1566_);
lean_inc(v___y_1565_);
lean_inc_ref(v___y_1564_);
lean_inc(v___y_1563_);
lean_inc_ref(v___y_1562_);
lean_inc(v___y_1561_);
lean_inc_ref(v___y_1560_);
v___x_1569_ = lean_apply_9(v_a_1558_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, lean_box(0));
if (lean_obj_tag(v___x_1569_) == 0)
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1578_; 
v_a_1570_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1578_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1578_ == 0)
{
v___x_1572_ = v___x_1569_;
v_isShared_1573_ = v_isSharedCheck_1578_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1569_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1578_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1574_; lean_object* v___x_1576_; 
v___x_1574_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1574_, 0, v_a_1570_);
lean_ctor_set(v___x_1574_, 1, v_trees_1559_);
if (v_isShared_1573_ == 0)
{
lean_ctor_set(v___x_1572_, 0, v___x_1574_);
v___x_1576_ = v___x_1572_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1577_; 
v_reuseFailAlloc_1577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1577_, 0, v___x_1574_);
v___x_1576_ = v_reuseFailAlloc_1577_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
return v___x_1576_;
}
}
}
else
{
lean_object* v_a_1579_; lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1586_; 
lean_dec_ref(v_trees_1559_);
v_a_1579_ = lean_ctor_get(v___x_1569_, 0);
v_isSharedCheck_1586_ = !lean_is_exclusive(v___x_1569_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1581_ = v___x_1569_;
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
else
{
lean_inc(v_a_1579_);
lean_dec(v___x_1569_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1586_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1584_; 
if (v_isShared_1582_ == 0)
{
v___x_1584_ = v___x_1581_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_a_1579_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__0___boxed(lean_object* v_a_1587_, lean_object* v_trees_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__0(v_a_1587_, v_trees_1588_, v___y_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
lean_dec(v___y_1590_);
lean_dec_ref(v___y_1589_);
return v_res_1598_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1599_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_1600_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_1601_; 
v___x_1601_ = lean_mk_string_unchecked("Term", 4, 4);
return v___x_1601_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1602_; 
v___x_1602_ = lean_mk_string_unchecked("explicit", 8, 8);
return v___x_1602_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; 
v___x_1603_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__3);
v___x_1604_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__2);
v___x_1605_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1);
v___x_1606_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0);
v___x_1607_ = l_Lean_Name_mkStr4(v___x_1606_, v___x_1605_, v___x_1604_, v___x_1603_);
return v___x_1607_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3(lean_object* v___x_1608_, uint8_t v___x_1609_, lean_object* v___x_1610_, lean_object* v_x_1611_, uint8_t v___y_1612_, lean_object* v___x_1613_, lean_object* v___x_1614_, lean_object* v___f_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_){
_start:
{
lean_object* v_fileName_1625_; lean_object* v_fileMap_1626_; lean_object* v_options_1627_; lean_object* v_currRecDepth_1628_; lean_object* v_maxRecDepth_1629_; lean_object* v_ref_1630_; lean_object* v_currNamespace_1631_; lean_object* v_openDecls_1632_; lean_object* v_initHeartbeats_1633_; lean_object* v_maxHeartbeats_1634_; lean_object* v_quotContext_1635_; lean_object* v_currMacroScope_1636_; uint8_t v_diag_1637_; lean_object* v_cancelTk_x3f_1638_; uint8_t v_suppressElabErrors_1639_; lean_object* v_inheritedTraceOptions_1640_; lean_object* v___x_1642_; uint8_t v_isShared_1643_; uint8_t v_isSharedCheck_1658_; 
v_fileName_1625_ = lean_ctor_get(v___y_1622_, 0);
v_fileMap_1626_ = lean_ctor_get(v___y_1622_, 1);
v_options_1627_ = lean_ctor_get(v___y_1622_, 2);
v_currRecDepth_1628_ = lean_ctor_get(v___y_1622_, 3);
v_maxRecDepth_1629_ = lean_ctor_get(v___y_1622_, 4);
v_ref_1630_ = lean_ctor_get(v___y_1622_, 5);
v_currNamespace_1631_ = lean_ctor_get(v___y_1622_, 6);
v_openDecls_1632_ = lean_ctor_get(v___y_1622_, 7);
v_initHeartbeats_1633_ = lean_ctor_get(v___y_1622_, 8);
v_maxHeartbeats_1634_ = lean_ctor_get(v___y_1622_, 9);
v_quotContext_1635_ = lean_ctor_get(v___y_1622_, 10);
v_currMacroScope_1636_ = lean_ctor_get(v___y_1622_, 11);
v_diag_1637_ = lean_ctor_get_uint8(v___y_1622_, sizeof(void*)*14);
v_cancelTk_x3f_1638_ = lean_ctor_get(v___y_1622_, 12);
v_suppressElabErrors_1639_ = lean_ctor_get_uint8(v___y_1622_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1640_ = lean_ctor_get(v___y_1622_, 13);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___y_1622_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1642_ = v___y_1622_;
v_isShared_1643_ = v_isSharedCheck_1658_;
goto v_resetjp_1641_;
}
else
{
lean_inc(v_inheritedTraceOptions_1640_);
lean_inc(v_cancelTk_x3f_1638_);
lean_inc(v_currMacroScope_1636_);
lean_inc(v_quotContext_1635_);
lean_inc(v_maxHeartbeats_1634_);
lean_inc(v_initHeartbeats_1633_);
lean_inc(v_openDecls_1632_);
lean_inc(v_currNamespace_1631_);
lean_inc(v_ref_1630_);
lean_inc(v_maxRecDepth_1629_);
lean_inc(v_currRecDepth_1628_);
lean_inc(v_options_1627_);
lean_inc(v_fileMap_1626_);
lean_inc(v_fileName_1625_);
lean_dec(v___y_1622_);
v___x_1642_ = lean_box(0);
v_isShared_1643_ = v_isSharedCheck_1658_;
goto v_resetjp_1641_;
}
v_resetjp_1641_:
{
lean_object* v_ref_1644_; lean_object* v___x_1646_; 
v_ref_1644_ = l_Lean_replaceRef(v___x_1608_, v_ref_1630_);
lean_dec(v_ref_1630_);
if (v_isShared_1643_ == 0)
{
lean_ctor_set(v___x_1642_, 5, v_ref_1644_);
v___x_1646_ = v___x_1642_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_fileName_1625_);
lean_ctor_set(v_reuseFailAlloc_1657_, 1, v_fileMap_1626_);
lean_ctor_set(v_reuseFailAlloc_1657_, 2, v_options_1627_);
lean_ctor_set(v_reuseFailAlloc_1657_, 3, v_currRecDepth_1628_);
lean_ctor_set(v_reuseFailAlloc_1657_, 4, v_maxRecDepth_1629_);
lean_ctor_set(v_reuseFailAlloc_1657_, 5, v_ref_1644_);
lean_ctor_set(v_reuseFailAlloc_1657_, 6, v_currNamespace_1631_);
lean_ctor_set(v_reuseFailAlloc_1657_, 7, v_openDecls_1632_);
lean_ctor_set(v_reuseFailAlloc_1657_, 8, v_initHeartbeats_1633_);
lean_ctor_set(v_reuseFailAlloc_1657_, 9, v_maxHeartbeats_1634_);
lean_ctor_set(v_reuseFailAlloc_1657_, 10, v_quotContext_1635_);
lean_ctor_set(v_reuseFailAlloc_1657_, 11, v_currMacroScope_1636_);
lean_ctor_set(v_reuseFailAlloc_1657_, 12, v_cancelTk_x3f_1638_);
lean_ctor_set(v_reuseFailAlloc_1657_, 13, v_inheritedTraceOptions_1640_);
lean_ctor_set_uint8(v_reuseFailAlloc_1657_, sizeof(void*)*14, v_diag_1637_);
lean_ctor_set_uint8(v_reuseFailAlloc_1657_, sizeof(void*)*14 + 1, v_suppressElabErrors_1639_);
v___x_1646_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
if (v___x_1609_ == 0)
{
lean_object* v___x_1647_; uint8_t v___x_1648_; 
v___x_1647_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__4, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__4);
lean_inc(v___x_1610_);
v___x_1648_ = l_Lean_Syntax_isOfKind(v___x_1610_, v___x_1647_);
if (v___x_1648_ == 0)
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
lean_dec_ref(v___f_1615_);
v___x_1649_ = lean_box(v___y_1612_);
v___x_1650_ = lean_apply_11(v_x_1611_, v___x_1649_, v___x_1610_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___x_1646_, v___y_1623_, lean_box(0));
return v___x_1650_;
}
else
{
lean_object* v___x_1651_; uint8_t v___x_1652_; 
v___x_1651_ = l_Lean_Syntax_getArg(v___x_1610_, v___x_1613_);
lean_inc(v___x_1651_);
v___x_1652_ = l_Lean_Syntax_isOfKind(v___x_1651_, v___x_1614_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; lean_object* v___x_1654_; 
lean_dec(v___x_1651_);
lean_dec_ref(v___f_1615_);
v___x_1653_ = lean_box(v___y_1612_);
v___x_1654_ = lean_apply_11(v_x_1611_, v___x_1653_, v___x_1610_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___x_1646_, v___y_1623_, lean_box(0));
return v___x_1654_;
}
else
{
lean_object* v___x_1655_; 
lean_dec_ref(v_x_1611_);
lean_dec(v___x_1610_);
v___x_1655_ = lean_apply_10(v___f_1615_, v___x_1651_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___x_1646_, v___y_1623_, lean_box(0));
return v___x_1655_;
}
}
}
else
{
lean_object* v___x_1656_; 
lean_dec_ref(v_x_1611_);
v___x_1656_ = lean_apply_10(v___f_1615_, v___x_1610_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___x_1646_, v___y_1623_, lean_box(0));
return v___x_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_1659_ = _args[0];
lean_object* v___x_1660_ = _args[1];
lean_object* v___x_1661_ = _args[2];
lean_object* v_x_1662_ = _args[3];
lean_object* v___y_1663_ = _args[4];
lean_object* v___x_1664_ = _args[5];
lean_object* v___x_1665_ = _args[6];
lean_object* v___f_1666_ = _args[7];
lean_object* v___y_1667_ = _args[8];
lean_object* v___y_1668_ = _args[9];
lean_object* v___y_1669_ = _args[10];
lean_object* v___y_1670_ = _args[11];
lean_object* v___y_1671_ = _args[12];
lean_object* v___y_1672_ = _args[13];
lean_object* v___y_1673_ = _args[14];
lean_object* v___y_1674_ = _args[15];
lean_object* v___y_1675_ = _args[16];
_start:
{
uint8_t v___x_16446__boxed_1676_; uint8_t v___y_16448__boxed_1677_; lean_object* v_res_1678_; 
v___x_16446__boxed_1676_ = lean_unbox(v___x_1660_);
v___y_16448__boxed_1677_ = lean_unbox(v___y_1663_);
v_res_1678_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3(v___x_1659_, v___x_16446__boxed_1676_, v___x_1661_, v_x_1662_, v___y_16448__boxed_1677_, v___x_1664_, v___x_1665_, v___f_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_);
lean_dec(v___x_1665_);
lean_dec(v___x_1664_);
lean_dec(v___x_1659_);
return v_res_1678_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1679_ = lean_unsigned_to_nat(32u);
v___x_1680_ = lean_mk_empty_array_with_capacity(v___x_1679_);
v___x_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1681_, 0, v___x_1680_);
return v___x_1681_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1682_ = ((size_t)5ULL);
v___x_1683_ = lean_unsigned_to_nat(0u);
v___x_1684_ = lean_unsigned_to_nat(32u);
v___x_1685_ = lean_mk_empty_array_with_capacity(v___x_1684_);
v___x_1686_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__0);
v___x_1687_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1687_, 0, v___x_1686_);
lean_ctor_set(v___x_1687_, 1, v___x_1685_);
lean_ctor_set(v___x_1687_, 2, v___x_1683_);
lean_ctor_set(v___x_1687_, 3, v___x_1683_);
lean_ctor_set_usize(v___x_1687_, 4, v___x_1682_);
return v___x_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg(lean_object* v___y_1688_){
_start:
{
lean_object* v___x_1690_; lean_object* v_infoState_1691_; lean_object* v_trees_1692_; lean_object* v___x_1693_; lean_object* v_infoState_1694_; lean_object* v_env_1695_; lean_object* v_nextMacroScope_1696_; lean_object* v_ngen_1697_; lean_object* v_auxDeclNGen_1698_; lean_object* v_traceState_1699_; lean_object* v_cache_1700_; lean_object* v_messages_1701_; lean_object* v_snapshotTasks_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1723_; 
v___x_1690_ = lean_st_ref_get(v___y_1688_);
v_infoState_1691_ = lean_ctor_get(v___x_1690_, 7);
lean_inc_ref(v_infoState_1691_);
lean_dec(v___x_1690_);
v_trees_1692_ = lean_ctor_get(v_infoState_1691_, 2);
lean_inc_ref(v_trees_1692_);
lean_dec_ref(v_infoState_1691_);
v___x_1693_ = lean_st_ref_take(v___y_1688_);
v_infoState_1694_ = lean_ctor_get(v___x_1693_, 7);
v_env_1695_ = lean_ctor_get(v___x_1693_, 0);
v_nextMacroScope_1696_ = lean_ctor_get(v___x_1693_, 1);
v_ngen_1697_ = lean_ctor_get(v___x_1693_, 2);
v_auxDeclNGen_1698_ = lean_ctor_get(v___x_1693_, 3);
v_traceState_1699_ = lean_ctor_get(v___x_1693_, 4);
v_cache_1700_ = lean_ctor_get(v___x_1693_, 5);
v_messages_1701_ = lean_ctor_get(v___x_1693_, 6);
v_snapshotTasks_1702_ = lean_ctor_get(v___x_1693_, 8);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1693_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1704_ = v___x_1693_;
v_isShared_1705_ = v_isSharedCheck_1723_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_snapshotTasks_1702_);
lean_inc(v_infoState_1694_);
lean_inc(v_messages_1701_);
lean_inc(v_cache_1700_);
lean_inc(v_traceState_1699_);
lean_inc(v_auxDeclNGen_1698_);
lean_inc(v_ngen_1697_);
lean_inc(v_nextMacroScope_1696_);
lean_inc(v_env_1695_);
lean_dec(v___x_1693_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1723_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
uint8_t v_enabled_1706_; lean_object* v_assignment_1707_; lean_object* v_lazyAssignment_1708_; lean_object* v___x_1710_; uint8_t v_isShared_1711_; uint8_t v_isSharedCheck_1721_; 
v_enabled_1706_ = lean_ctor_get_uint8(v_infoState_1694_, sizeof(void*)*3);
v_assignment_1707_ = lean_ctor_get(v_infoState_1694_, 0);
v_lazyAssignment_1708_ = lean_ctor_get(v_infoState_1694_, 1);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_infoState_1694_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; 
v_unused_1722_ = lean_ctor_get(v_infoState_1694_, 2);
lean_dec(v_unused_1722_);
v___x_1710_ = v_infoState_1694_;
v_isShared_1711_ = v_isSharedCheck_1721_;
goto v_resetjp_1709_;
}
else
{
lean_inc(v_lazyAssignment_1708_);
lean_inc(v_assignment_1707_);
lean_dec(v_infoState_1694_);
v___x_1710_ = lean_box(0);
v_isShared_1711_ = v_isSharedCheck_1721_;
goto v_resetjp_1709_;
}
v_resetjp_1709_:
{
lean_object* v___x_1712_; lean_object* v___x_1714_; 
v___x_1712_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___closed__1);
if (v_isShared_1711_ == 0)
{
lean_ctor_set(v___x_1710_, 2, v___x_1712_);
v___x_1714_ = v___x_1710_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_assignment_1707_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_lazyAssignment_1708_);
lean_ctor_set(v_reuseFailAlloc_1720_, 2, v___x_1712_);
lean_ctor_set_uint8(v_reuseFailAlloc_1720_, sizeof(void*)*3, v_enabled_1706_);
v___x_1714_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1716_; 
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 7, v___x_1714_);
v___x_1716_ = v___x_1704_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v_env_1695_);
lean_ctor_set(v_reuseFailAlloc_1719_, 1, v_nextMacroScope_1696_);
lean_ctor_set(v_reuseFailAlloc_1719_, 2, v_ngen_1697_);
lean_ctor_set(v_reuseFailAlloc_1719_, 3, v_auxDeclNGen_1698_);
lean_ctor_set(v_reuseFailAlloc_1719_, 4, v_traceState_1699_);
lean_ctor_set(v_reuseFailAlloc_1719_, 5, v_cache_1700_);
lean_ctor_set(v_reuseFailAlloc_1719_, 6, v_messages_1701_);
lean_ctor_set(v_reuseFailAlloc_1719_, 7, v___x_1714_);
lean_ctor_set(v_reuseFailAlloc_1719_, 8, v_snapshotTasks_1702_);
v___x_1716_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1717_ = lean_st_ref_set(v___y_1688_, v___x_1716_);
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_trees_1692_);
return v___x_1718_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg___boxed(lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg(v___y_1724_);
lean_dec(v___y_1724_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___lam__0(lean_object* v___y_1727_, lean_object* v_mkInfoTree_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v_a_1736_, lean_object* v_a_x3f_1737_){
_start:
{
lean_object* v___x_1739_; lean_object* v_infoState_1740_; lean_object* v_trees_1741_; lean_object* v___x_1742_; 
v___x_1739_ = lean_st_ref_get(v___y_1727_);
v_infoState_1740_ = lean_ctor_get(v___x_1739_, 7);
lean_inc_ref(v_infoState_1740_);
lean_dec(v___x_1739_);
v_trees_1741_ = lean_ctor_get(v_infoState_1740_, 2);
lean_inc_ref(v_trees_1741_);
lean_dec_ref(v_infoState_1740_);
lean_inc(v___y_1727_);
lean_inc_ref(v___y_1735_);
lean_inc(v___y_1734_);
lean_inc_ref(v___y_1733_);
lean_inc(v___y_1732_);
lean_inc_ref(v___y_1731_);
lean_inc(v___y_1730_);
lean_inc_ref(v___y_1729_);
v___x_1742_ = lean_apply_10(v_mkInfoTree_1728_, v_trees_1741_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_, v___y_1727_, lean_box(0));
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1781_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1745_ = v___x_1742_;
v_isShared_1746_ = v_isSharedCheck_1781_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_a_1743_);
lean_dec(v___x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1781_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1747_; lean_object* v_infoState_1748_; lean_object* v_env_1749_; lean_object* v_nextMacroScope_1750_; lean_object* v_ngen_1751_; lean_object* v_auxDeclNGen_1752_; lean_object* v_traceState_1753_; lean_object* v_cache_1754_; lean_object* v_messages_1755_; lean_object* v_snapshotTasks_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1780_; 
v___x_1747_ = lean_st_ref_take(v___y_1727_);
v_infoState_1748_ = lean_ctor_get(v___x_1747_, 7);
v_env_1749_ = lean_ctor_get(v___x_1747_, 0);
v_nextMacroScope_1750_ = lean_ctor_get(v___x_1747_, 1);
v_ngen_1751_ = lean_ctor_get(v___x_1747_, 2);
v_auxDeclNGen_1752_ = lean_ctor_get(v___x_1747_, 3);
v_traceState_1753_ = lean_ctor_get(v___x_1747_, 4);
v_cache_1754_ = lean_ctor_get(v___x_1747_, 5);
v_messages_1755_ = lean_ctor_get(v___x_1747_, 6);
v_snapshotTasks_1756_ = lean_ctor_get(v___x_1747_, 8);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1758_ = v___x_1747_;
v_isShared_1759_ = v_isSharedCheck_1780_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_snapshotTasks_1756_);
lean_inc(v_infoState_1748_);
lean_inc(v_messages_1755_);
lean_inc(v_cache_1754_);
lean_inc(v_traceState_1753_);
lean_inc(v_auxDeclNGen_1752_);
lean_inc(v_ngen_1751_);
lean_inc(v_nextMacroScope_1750_);
lean_inc(v_env_1749_);
lean_dec(v___x_1747_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1780_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
uint8_t v_enabled_1760_; lean_object* v_assignment_1761_; lean_object* v_lazyAssignment_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1778_; 
v_enabled_1760_ = lean_ctor_get_uint8(v_infoState_1748_, sizeof(void*)*3);
v_assignment_1761_ = lean_ctor_get(v_infoState_1748_, 0);
v_lazyAssignment_1762_ = lean_ctor_get(v_infoState_1748_, 1);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_infoState_1748_);
if (v_isSharedCheck_1778_ == 0)
{
lean_object* v_unused_1779_; 
v_unused_1779_ = lean_ctor_get(v_infoState_1748_, 2);
lean_dec(v_unused_1779_);
v___x_1764_ = v_infoState_1748_;
v_isShared_1765_ = v_isSharedCheck_1778_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_lazyAssignment_1762_);
lean_inc(v_assignment_1761_);
lean_dec(v_infoState_1748_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1778_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v___x_1766_; lean_object* v___x_1768_; 
v___x_1766_ = l_Lean_PersistentArray_push___redArg(v_a_1736_, v_a_1743_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 2, v___x_1766_);
v___x_1768_ = v___x_1764_;
goto v_reusejp_1767_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_assignment_1761_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v_lazyAssignment_1762_);
lean_ctor_set(v_reuseFailAlloc_1777_, 2, v___x_1766_);
lean_ctor_set_uint8(v_reuseFailAlloc_1777_, sizeof(void*)*3, v_enabled_1760_);
v___x_1768_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1767_;
}
v_reusejp_1767_:
{
lean_object* v___x_1770_; 
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 7, v___x_1768_);
v___x_1770_ = v___x_1758_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1776_; 
v_reuseFailAlloc_1776_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1776_, 0, v_env_1749_);
lean_ctor_set(v_reuseFailAlloc_1776_, 1, v_nextMacroScope_1750_);
lean_ctor_set(v_reuseFailAlloc_1776_, 2, v_ngen_1751_);
lean_ctor_set(v_reuseFailAlloc_1776_, 3, v_auxDeclNGen_1752_);
lean_ctor_set(v_reuseFailAlloc_1776_, 4, v_traceState_1753_);
lean_ctor_set(v_reuseFailAlloc_1776_, 5, v_cache_1754_);
lean_ctor_set(v_reuseFailAlloc_1776_, 6, v_messages_1755_);
lean_ctor_set(v_reuseFailAlloc_1776_, 7, v___x_1768_);
lean_ctor_set(v_reuseFailAlloc_1776_, 8, v_snapshotTasks_1756_);
v___x_1770_ = v_reuseFailAlloc_1776_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1774_; 
v___x_1771_ = lean_st_ref_set(v___y_1727_, v___x_1770_);
v___x_1772_ = lean_box(0);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1772_);
v___x_1774_ = v___x_1745_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1775_; 
v_reuseFailAlloc_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1775_, 0, v___x_1772_);
v___x_1774_ = v_reuseFailAlloc_1775_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
return v___x_1774_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1789_; 
lean_dec_ref(v_a_1736_);
v_a_1782_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1789_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1789_ == 0)
{
v___x_1784_ = v___x_1742_;
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_a_1782_);
lean_dec(v___x_1742_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1789_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v___x_1787_; 
if (v_isShared_1785_ == 0)
{
v___x_1787_ = v___x_1784_;
goto v_reusejp_1786_;
}
else
{
lean_object* v_reuseFailAlloc_1788_; 
v_reuseFailAlloc_1788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1788_, 0, v_a_1782_);
v___x_1787_ = v_reuseFailAlloc_1788_;
goto v_reusejp_1786_;
}
v_reusejp_1786_:
{
return v___x_1787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___lam__0___boxed(lean_object* v___y_1790_, lean_object* v_mkInfoTree_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v_a_1799_, lean_object* v_a_x3f_1800_, lean_object* v___y_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___lam__0(v___y_1790_, v_mkInfoTree_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v_a_1799_, v_a_x3f_1800_);
lean_dec(v_a_x3f_1800_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1790_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg(lean_object* v_x_1803_, lean_object* v_mkInfoTree_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v___x_1814_; lean_object* v_infoState_1815_; uint8_t v_enabled_1816_; 
v___x_1814_ = lean_st_ref_get(v___y_1812_);
v_infoState_1815_ = lean_ctor_get(v___x_1814_, 7);
lean_inc_ref(v_infoState_1815_);
lean_dec(v___x_1814_);
v_enabled_1816_ = lean_ctor_get_uint8(v_infoState_1815_, sizeof(void*)*3);
lean_dec_ref(v_infoState_1815_);
if (v_enabled_1816_ == 0)
{
lean_object* v___x_1817_; 
lean_dec_ref(v_mkInfoTree_1804_);
lean_inc(v___y_1812_);
lean_inc_ref(v___y_1811_);
lean_inc(v___y_1810_);
lean_inc_ref(v___y_1809_);
lean_inc(v___y_1808_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1806_);
lean_inc_ref(v___y_1805_);
v___x_1817_ = lean_apply_9(v_x_1803_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, lean_box(0));
return v___x_1817_;
}
else
{
lean_object* v___x_1818_; lean_object* v_a_1819_; lean_object* v_r_1820_; 
v___x_1818_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg(v___y_1812_);
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref(v___x_1818_);
lean_inc(v___y_1812_);
lean_inc_ref(v___y_1811_);
lean_inc(v___y_1810_);
lean_inc_ref(v___y_1809_);
lean_inc(v___y_1808_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1806_);
lean_inc_ref(v___y_1805_);
v_r_1820_ = lean_apply_9(v_x_1803_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, lean_box(0));
if (lean_obj_tag(v_r_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1845_; 
v_a_1821_ = lean_ctor_get(v_r_1820_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v_r_1820_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1823_ = v_r_1820_;
v_isShared_1824_ = v_isSharedCheck_1845_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_a_1821_);
lean_dec(v_r_1820_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1845_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1826_; 
lean_inc(v_a_1821_);
if (v_isShared_1824_ == 0)
{
lean_ctor_set_tag(v___x_1823_, 1);
v___x_1826_ = v___x_1823_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1821_);
v___x_1826_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1827_; 
v___x_1827_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___lam__0(v___y_1812_, v_mkInfoTree_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v_a_1819_, v___x_1826_);
lean_dec_ref(v___x_1826_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1834_ == 0)
{
lean_object* v_unused_1835_; 
v_unused_1835_ = lean_ctor_get(v___x_1827_, 0);
lean_dec(v_unused_1835_);
v___x_1829_ = v___x_1827_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_dec(v___x_1827_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
lean_ctor_set(v___x_1829_, 0, v_a_1821_);
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1821_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
else
{
lean_object* v_a_1836_; lean_object* v___x_1838_; uint8_t v_isShared_1839_; uint8_t v_isSharedCheck_1843_; 
lean_dec(v_a_1821_);
v_a_1836_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1838_ = v___x_1827_;
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
else
{
lean_inc(v_a_1836_);
lean_dec(v___x_1827_);
v___x_1838_ = lean_box(0);
v_isShared_1839_ = v_isSharedCheck_1843_;
goto v_resetjp_1837_;
}
v_resetjp_1837_:
{
lean_object* v___x_1841_; 
if (v_isShared_1839_ == 0)
{
v___x_1841_ = v___x_1838_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v_a_1836_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
}
}
}
else
{
lean_object* v_a_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v_a_1846_ = lean_ctor_get(v_r_1820_, 0);
lean_inc(v_a_1846_);
lean_dec_ref(v_r_1820_);
v___x_1847_ = lean_box(0);
v___x_1848_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___lam__0(v___y_1812_, v_mkInfoTree_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v_a_1819_, v___x_1847_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v___x_1850_; uint8_t v_isShared_1851_; uint8_t v_isSharedCheck_1855_; 
v_isSharedCheck_1855_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1855_ == 0)
{
lean_object* v_unused_1856_; 
v_unused_1856_ = lean_ctor_get(v___x_1848_, 0);
lean_dec(v_unused_1856_);
v___x_1850_ = v___x_1848_;
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
else
{
lean_dec(v___x_1848_);
v___x_1850_ = lean_box(0);
v_isShared_1851_ = v_isSharedCheck_1855_;
goto v_resetjp_1849_;
}
v_resetjp_1849_:
{
lean_object* v___x_1853_; 
if (v_isShared_1851_ == 0)
{
lean_ctor_set_tag(v___x_1850_, 1);
lean_ctor_set(v___x_1850_, 0, v_a_1846_);
v___x_1853_ = v___x_1850_;
goto v_reusejp_1852_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_a_1846_);
v___x_1853_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1852_;
}
v_reusejp_1852_:
{
return v___x_1853_;
}
}
}
else
{
lean_object* v_a_1857_; lean_object* v___x_1859_; uint8_t v_isShared_1860_; uint8_t v_isSharedCheck_1864_; 
lean_dec(v_a_1846_);
v_a_1857_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1864_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1859_ = v___x_1848_;
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
else
{
lean_inc(v_a_1857_);
lean_dec(v___x_1848_);
v___x_1859_ = lean_box(0);
v_isShared_1860_ = v_isSharedCheck_1864_;
goto v_resetjp_1858_;
}
v_resetjp_1858_:
{
lean_object* v___x_1862_; 
if (v_isShared_1860_ == 0)
{
v___x_1862_ = v___x_1859_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_a_1857_);
v___x_1862_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
return v___x_1862_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg___boxed(lean_object* v_x_1865_, lean_object* v_mkInfoTree_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg(v_x_1865_, v_mkInfoTree_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_);
lean_dec(v___y_1874_);
lean_dec_ref(v___y_1873_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__1(lean_object* v_id_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lean_Elab_Term_isLocalIdent_x3f(v_id_1877_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__1___boxed(lean_object* v_id_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__1(v_id_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v___y_1890_);
lean_dec_ref(v___y_1889_);
return v_res_1898_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_1899_; 
v___x_1899_ = lean_mk_string_unchecked("Try rewriting with `", 20, 20);
return v___x_1899_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__0);
v___x_1901_ = l_Lean_stringToMessageData(v___x_1900_);
return v___x_1901_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1902_; 
v___x_1902_ = lean_mk_string_unchecked("", 0, 0);
return v___x_1902_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; 
v___x_1903_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2);
v___x_1904_ = l_Lean_stringToMessageData(v___x_1903_);
return v___x_1904_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2(lean_object* v_x_1905_, uint8_t v___y_1906_, lean_object* v___x_1907_, lean_object* v___x_1908_, lean_object* v_id_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_){
_start:
{
lean_object* v___f_1919_; lean_object* v___x_1920_; 
lean_inc(v_id_1909_);
v___f_1919_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__1___boxed), 10, 1);
lean_closure_set(v___f_1919_, 0, v_id_1909_);
v___x_1920_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_1919_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref(v___x_1920_);
if (lean_obj_tag(v_a_1921_) == 0)
{
lean_object* v___x_1922_; 
v___x_1922_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_1911_, v___y_1913_, v___y_1915_, v___y_1917_);
if (lean_obj_tag(v___x_1922_) == 0)
{
lean_object* v_a_1923_; lean_object* v___x_1924_; 
v_a_1923_ = lean_ctor_get(v___x_1922_, 0);
lean_inc(v_a_1923_);
lean_dec_ref(v___x_1922_);
lean_inc(v_id_1909_);
v___x_1924_ = l_Lean_realizeGlobalConstNoOverload(v_id_1909_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1926_; 
lean_dec(v_a_1923_);
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
lean_inc_n(v_a_1925_, 2);
lean_dec_ref(v___x_1924_);
v___x_1926_ = l_Lean_Meta_getEqnsFor_x3f(v_a_1925_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref(v___x_1926_);
if (lean_obj_tag(v_a_1927_) == 1)
{
lean_object* v_val_1928_; lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1972_; 
lean_dec(v___x_1908_);
v_val_1928_ = lean_ctor_get(v_a_1927_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v_a_1927_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1930_ = v_a_1927_;
v_isShared_1931_ = v_isSharedCheck_1972_;
goto v_resetjp_1929_;
}
else
{
lean_inc(v_val_1928_);
lean_dec(v_a_1927_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1972_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
uint8_t v___x_1932_; lean_object* v___y_1934_; lean_object* v___x_1961_; uint8_t v___x_1962_; 
v___x_1932_ = 0;
v___x_1961_ = lean_array_get_size(v_val_1928_);
v___x_1962_ = lean_nat_dec_eq(v___x_1961_, v___x_1907_);
if (v___x_1962_ == 0)
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1963_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__1);
v___x_1964_ = l_Lean_Meta_unfoldThmSuffix;
lean_inc(v_a_1925_);
v___x_1965_ = l_Lean_Name_str___override(v_a_1925_, v___x_1964_);
v___x_1966_ = l_Lean_MessageData_ofName(v___x_1965_);
v___x_1967_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1963_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go___closed__3);
v___x_1969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1967_);
lean_ctor_set(v___x_1969_, 1, v___x_1968_);
v___x_1970_ = l_Lean_MessageData_hint_x27(v___x_1969_);
v___y_1934_ = v___x_1970_;
goto v___jp_1933_;
}
else
{
lean_object* v___x_1971_; 
v___x_1971_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3);
v___y_1934_ = v___x_1971_;
goto v___jp_1933_;
}
v___jp_1933_:
{
lean_object* v___x_1935_; 
lean_inc(v_a_1925_);
v___x_1935_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_a_1925_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v_lctx_1937_; lean_object* v___x_1939_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
lean_inc(v_a_1936_);
lean_dec_ref(v___x_1935_);
v_lctx_1937_ = lean_ctor_get(v___y_1914_, 2);
lean_inc_ref(v_lctx_1937_);
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 0, v_lctx_1937_);
v___x_1939_ = v___x_1930_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_lctx_1937_);
v___x_1939_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_box(0);
lean_inc(v_id_1909_);
v___x_1941_ = l_Lean_Elab_Term_addTermInfo(v_id_1909_, v_a_1936_, v_a_1921_, v___x_1939_, v___x_1940_, v___x_1932_, v___x_1932_, v___x_1932_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v___x_1942_; lean_object* v___x_1943_; 
lean_dec_ref(v___x_1941_);
v___x_1942_ = lean_array_to_list(v_val_1928_);
v___x_1943_ = l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_withRWRulesSeq_go(v_x_1905_, v___y_1906_, v_id_1909_, v_a_1925_, v___y_1934_, v___x_1942_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
lean_dec(v_id_1909_);
return v___x_1943_;
}
else
{
lean_object* v_a_1944_; lean_object* v___x_1946_; uint8_t v_isShared_1947_; uint8_t v_isSharedCheck_1951_; 
lean_dec_ref(v___y_1934_);
lean_dec(v_val_1928_);
lean_dec(v_a_1925_);
lean_dec(v_id_1909_);
lean_dec_ref(v_x_1905_);
v_a_1944_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1951_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1951_ == 0)
{
v___x_1946_ = v___x_1941_;
v_isShared_1947_ = v_isSharedCheck_1951_;
goto v_resetjp_1945_;
}
else
{
lean_inc(v_a_1944_);
lean_dec(v___x_1941_);
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
}
else
{
lean_object* v_a_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1960_; 
lean_dec_ref(v___y_1934_);
lean_del_object(v___x_1930_);
lean_dec(v_val_1928_);
lean_dec(v_a_1925_);
lean_dec(v_id_1909_);
lean_dec_ref(v_x_1905_);
v_a_1953_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1960_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1960_ == 0)
{
v___x_1955_ = v___x_1935_;
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_a_1953_);
lean_dec(v___x_1935_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1960_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1958_; 
if (v_isShared_1956_ == 0)
{
v___x_1958_ = v___x_1955_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1959_; 
v_reuseFailAlloc_1959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1959_, 0, v_a_1953_);
v___x_1958_ = v_reuseFailAlloc_1959_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
return v___x_1958_;
}
}
}
}
}
}
else
{
lean_object* v___x_1973_; lean_object* v___x_1974_; 
lean_dec(v_a_1927_);
lean_dec(v_a_1925_);
lean_dec(v_id_1909_);
v___x_1973_ = lean_box(v___y_1906_);
lean_inc(v___y_1917_);
lean_inc_ref(v___y_1916_);
lean_inc(v___y_1915_);
lean_inc_ref(v___y_1914_);
lean_inc(v___y_1913_);
lean_inc_ref(v___y_1912_);
lean_inc(v___y_1911_);
lean_inc_ref(v___y_1910_);
v___x_1974_ = lean_apply_11(v_x_1905_, v___x_1973_, v___x_1908_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, lean_box(0));
return v___x_1974_;
}
}
else
{
lean_object* v_a_1975_; lean_object* v___x_1977_; uint8_t v_isShared_1978_; uint8_t v_isSharedCheck_1982_; 
lean_dec(v_a_1925_);
lean_dec(v_id_1909_);
lean_dec(v___x_1908_);
lean_dec_ref(v_x_1905_);
v_a_1975_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1982_ == 0)
{
v___x_1977_ = v___x_1926_;
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
else
{
lean_inc(v_a_1975_);
lean_dec(v___x_1926_);
v___x_1977_ = lean_box(0);
v_isShared_1978_ = v_isSharedCheck_1982_;
goto v_resetjp_1976_;
}
v_resetjp_1976_:
{
lean_object* v___x_1980_; 
if (v_isShared_1978_ == 0)
{
v___x_1980_ = v___x_1977_;
goto v_reusejp_1979_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_a_1975_);
v___x_1980_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1979_;
}
v_reusejp_1979_:
{
return v___x_1980_;
}
}
}
}
else
{
lean_object* v_a_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1997_; 
lean_dec(v_id_1909_);
v_a_1983_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1985_ = v___x_1924_;
v_isShared_1986_ = v_isSharedCheck_1997_;
goto v_resetjp_1984_;
}
else
{
lean_inc(v_a_1983_);
lean_dec(v___x_1924_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1997_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
uint8_t v___y_1988_; uint8_t v___x_1995_; 
v___x_1995_ = l_Lean_Exception_isInterrupt(v_a_1983_);
if (v___x_1995_ == 0)
{
uint8_t v___x_1996_; 
lean_inc(v_a_1983_);
v___x_1996_ = l_Lean_Exception_isRuntime(v_a_1983_);
v___y_1988_ = v___x_1996_;
goto v___jp_1987_;
}
else
{
v___y_1988_ = v___x_1995_;
goto v___jp_1987_;
}
v___jp_1987_:
{
if (v___y_1988_ == 0)
{
lean_object* v___x_1989_; 
lean_del_object(v___x_1985_);
lean_dec(v_a_1983_);
v___x_1989_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_1923_, v___y_1988_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v___x_1990_; lean_object* v___x_1991_; 
lean_dec_ref(v___x_1989_);
v___x_1990_ = lean_box(v___y_1906_);
lean_inc(v___y_1917_);
lean_inc_ref(v___y_1916_);
lean_inc(v___y_1915_);
lean_inc_ref(v___y_1914_);
lean_inc(v___y_1913_);
lean_inc_ref(v___y_1912_);
lean_inc(v___y_1911_);
lean_inc_ref(v___y_1910_);
v___x_1991_ = lean_apply_11(v_x_1905_, v___x_1990_, v___x_1908_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, lean_box(0));
return v___x_1991_;
}
else
{
lean_dec(v___x_1908_);
lean_dec_ref(v_x_1905_);
return v___x_1989_;
}
}
else
{
lean_object* v___x_1993_; 
lean_dec(v_a_1923_);
lean_dec(v___x_1908_);
lean_dec_ref(v_x_1905_);
if (v_isShared_1986_ == 0)
{
v___x_1993_ = v___x_1985_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1994_; 
v_reuseFailAlloc_1994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1994_, 0, v_a_1983_);
v___x_1993_ = v_reuseFailAlloc_1994_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
return v___x_1993_;
}
}
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec(v_id_1909_);
lean_dec(v___x_1908_);
lean_dec_ref(v_x_1905_);
v_a_1998_ = lean_ctor_get(v___x_1922_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1922_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1922_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1922_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2003_; 
if (v_isShared_2001_ == 0)
{
v___x_2003_ = v___x_2000_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2004_; 
v_reuseFailAlloc_2004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2004_, 0, v_a_1998_);
v___x_2003_ = v_reuseFailAlloc_2004_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
return v___x_2003_;
}
}
}
}
else
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
lean_dec_ref(v_a_1921_);
lean_dec(v_id_1909_);
v___x_2006_ = lean_box(v___y_1906_);
lean_inc(v___y_1917_);
lean_inc_ref(v___y_1916_);
lean_inc(v___y_1915_);
lean_inc_ref(v___y_1914_);
lean_inc(v___y_1913_);
lean_inc_ref(v___y_1912_);
lean_inc(v___y_1911_);
lean_inc_ref(v___y_1910_);
v___x_2007_ = lean_apply_11(v_x_1905_, v___x_2006_, v___x_1908_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_, v___y_1917_, lean_box(0));
return v___x_2007_;
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec(v_id_1909_);
lean_dec(v___x_1908_);
lean_dec_ref(v_x_1905_);
v_a_2008_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1920_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1920_);
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
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___boxed(lean_object* v_x_2016_, lean_object* v___y_2017_, lean_object* v___x_2018_, lean_object* v___x_2019_, lean_object* v_id_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_){
_start:
{
uint8_t v___y_16885__boxed_2030_; lean_object* v_res_2031_; 
v___y_16885__boxed_2030_ = lean_unbox(v___y_2017_);
v_res_2031_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2(v_x_2016_, v___y_16885__boxed_2030_, v___x_2018_, v___x_2019_, v_id_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec_ref(v___y_2021_);
lean_dec(v___x_2018_);
return v_res_2031_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2032_; 
v___x_2032_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_2032_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__0);
v___x_2034_ = l_Lean_Name_mkStr1(v___x_2033_);
return v___x_2034_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2035_; 
v___x_2035_ = lean_mk_string_unchecked("null", 4, 4);
return v___x_2035_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2036_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__2);
v___x_2037_ = l_Lean_Name_mkStr1(v___x_2036_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg(lean_object* v_upperBound_2038_, lean_object* v_rules_2039_, lean_object* v_x_2040_, lean_object* v_a_2041_, lean_object* v_b_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
uint8_t v___x_2052_; 
v___x_2052_ = lean_nat_dec_lt(v_a_2041_, v_upperBound_2038_);
if (v___x_2052_ == 0)
{
lean_object* v___x_2053_; 
lean_dec(v_a_2041_);
lean_dec_ref(v_x_2040_);
v___x_2053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2053_, 0, v_b_2042_);
return v___x_2053_;
}
else
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___y_2062_; uint8_t v___y_2063_; lean_object* v___y_2087_; lean_object* v___x_2097_; lean_object* v___x_2098_; uint8_t v___x_2099_; 
v___x_2054_ = lean_unsigned_to_nat(2u);
v___x_2055_ = lean_box(0);
v___x_2056_ = lean_unsigned_to_nat(1u);
v___x_2057_ = lean_box(0);
v___x_2058_ = lean_unsigned_to_nat(0u);
v___x_2059_ = lean_nat_mul(v_a_2041_, v___x_2054_);
v___x_2060_ = lean_array_get_borrowed(v___x_2055_, v_rules_2039_, v___x_2059_);
v___x_2097_ = lean_nat_add(v___x_2059_, v___x_2056_);
lean_dec(v___x_2059_);
v___x_2098_ = lean_array_get_size(v_rules_2039_);
v___x_2099_ = lean_nat_dec_lt(v___x_2097_, v___x_2098_);
if (v___x_2099_ == 0)
{
lean_dec(v___x_2097_);
v___y_2087_ = v___x_2055_;
goto v___jp_2086_;
}
else
{
lean_object* v___x_2100_; 
v___x_2100_ = lean_array_fget_borrowed(v_rules_2039_, v___x_2097_);
lean_dec(v___x_2097_);
lean_inc(v___x_2100_);
v___y_2087_ = v___x_2100_;
goto v___jp_2086_;
}
v___jp_2061_:
{
lean_object* v___x_2064_; 
v___x_2064_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v___y_2062_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v_a_2065_; lean_object* v___f_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___f_2069_; lean_object* v___x_2070_; uint8_t v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___f_2074_; lean_object* v___x_2075_; 
v_a_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2065_);
lean_dec_ref(v___x_2064_);
v___f_2066_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2066_, 0, v_a_2065_);
v___x_2067_ = l_Lean_Syntax_getArg(v___x_2060_, v___x_2056_);
v___x_2068_ = lean_box(v___y_2063_);
lean_inc_n(v___x_2067_, 2);
lean_inc_ref_n(v_x_2040_, 2);
v___f_2069_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___boxed), 14, 4);
lean_closure_set(v___f_2069_, 0, v_x_2040_);
lean_closure_set(v___f_2069_, 1, v___x_2068_);
lean_closure_set(v___f_2069_, 2, v___x_2056_);
lean_closure_set(v___f_2069_, 3, v___x_2067_);
v___x_2070_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__1);
v___x_2071_ = l_Lean_Syntax_isOfKind(v___x_2067_, v___x_2070_);
v___x_2072_ = lean_box(v___x_2071_);
v___x_2073_ = lean_box(v___y_2063_);
lean_inc(v___x_2060_);
v___f_2074_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___boxed), 17, 8);
lean_closure_set(v___f_2074_, 0, v___x_2060_);
lean_closure_set(v___f_2074_, 1, v___x_2072_);
lean_closure_set(v___f_2074_, 2, v___x_2067_);
lean_closure_set(v___f_2074_, 3, v_x_2040_);
lean_closure_set(v___f_2074_, 4, v___x_2073_);
lean_closure_set(v___f_2074_, 5, v___x_2056_);
lean_closure_set(v___f_2074_, 6, v___x_2070_);
lean_closure_set(v___f_2074_, 7, v___f_2069_);
v___x_2075_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg(v___f_2074_, v___f_2066_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v___x_2076_; 
lean_dec_ref(v___x_2075_);
v___x_2076_ = lean_nat_add(v_a_2041_, v___x_2056_);
lean_dec(v_a_2041_);
v_a_2041_ = v___x_2076_;
v_b_2042_ = v___x_2057_;
goto _start;
}
else
{
lean_dec(v_a_2041_);
lean_dec_ref(v_x_2040_);
return v___x_2075_;
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_dec(v_a_2041_);
lean_dec_ref(v_x_2040_);
v_a_2078_ = lean_ctor_get(v___x_2064_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2064_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_2064_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2064_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
lean_object* v___x_2083_; 
if (v_isShared_2081_ == 0)
{
v___x_2083_ = v___x_2080_;
goto v_reusejp_2082_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v_a_2078_);
v___x_2083_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2082_;
}
v_reusejp_2082_:
{
return v___x_2083_;
}
}
}
}
v___jp_2086_:
{
lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; uint8_t v___x_2095_; 
v___x_2088_ = lean_mk_empty_array_with_capacity(v___x_2054_);
lean_inc(v___x_2060_);
v___x_2089_ = lean_array_push(v___x_2088_, v___x_2060_);
v___x_2090_ = lean_array_push(v___x_2089_, v___y_2087_);
v___x_2091_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3);
v___x_2092_ = lean_box(2);
v___x_2093_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2093_, 0, v___x_2092_);
lean_ctor_set(v___x_2093_, 1, v___x_2091_);
lean_ctor_set(v___x_2093_, 2, v___x_2090_);
v___x_2094_ = l_Lean_Syntax_getArg(v___x_2060_, v___x_2058_);
v___x_2095_ = l_Lean_Syntax_isNone(v___x_2094_);
lean_dec(v___x_2094_);
if (v___x_2095_ == 0)
{
v___y_2062_ = v___x_2093_;
v___y_2063_ = v___x_2052_;
goto v___jp_2061_;
}
else
{
uint8_t v___x_2096_; 
v___x_2096_ = 0;
v___y_2062_ = v___x_2093_;
v___y_2063_ = v___x_2096_;
goto v___jp_2061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___boxed(lean_object* v_upperBound_2101_, lean_object* v_rules_2102_, lean_object* v_x_2103_, lean_object* v_a_2104_, lean_object* v_b_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v_res_2115_; 
v_res_2115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg(v_upperBound_2101_, v_rules_2102_, v_x_2103_, v_a_2104_, v_b_2105_, v___y_2106_, v___y_2107_, v___y_2108_, v___y_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec_ref(v___y_2110_);
lean_dec(v___y_2109_);
lean_dec_ref(v___y_2108_);
lean_dec(v___y_2107_);
lean_dec_ref(v___y_2106_);
lean_dec_ref(v_rules_2102_);
lean_dec(v_upperBound_2101_);
return v_res_2115_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_withRWRulesSeq___closed__0(void){
_start:
{
lean_object* v___x_2116_; lean_object* v___f_2117_; 
v___x_2116_ = lean_box(0);
v___f_2117_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withRWRulesSeq___lam__1___boxed), 10, 1);
lean_closure_set(v___f_2117_, 0, v___x_2116_);
return v___f_2117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq(lean_object* v_token_2118_, lean_object* v_rwRulesSeqStx_2119_, lean_object* v_x_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_, lean_object* v_a_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v___x_2130_; lean_object* v_lbrak_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2130_ = lean_unsigned_to_nat(0u);
v_lbrak_2131_ = l_Lean_Syntax_getArg(v_rwRulesSeqStx_2119_, v___x_2130_);
v___x_2132_ = lean_unsigned_to_nat(2u);
v___x_2133_ = lean_mk_empty_array_with_capacity(v___x_2132_);
v___x_2134_ = lean_array_push(v___x_2133_, v_token_2118_);
v___x_2135_ = lean_array_push(v___x_2134_, v_lbrak_2131_);
v___x_2136_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___closed__3);
v___x_2137_ = lean_box(2);
v___x_2138_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
lean_ctor_set(v___x_2138_, 1, v___x_2136_);
lean_ctor_set(v___x_2138_, 2, v___x_2135_);
v___x_2139_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v___x_2138_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v_a_2140_; lean_object* v___f_2141_; lean_object* v___x_2142_; lean_object* v___f_2143_; lean_object* v___x_2144_; 
v_a_2140_ = lean_ctor_get(v___x_2139_, 0);
lean_inc(v_a_2140_);
lean_dec_ref(v___x_2139_);
v___f_2141_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withRWRulesSeq___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2141_, 0, v_a_2140_);
v___x_2142_ = lean_box(0);
v___f_2143_ = lean_obj_once(&l_Lean_Elab_Tactic_withRWRulesSeq___closed__0, &l_Lean_Elab_Tactic_withRWRulesSeq___closed__0_once, _init_l_Lean_Elab_Tactic_withRWRulesSeq___closed__0);
v___x_2144_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg(v___f_2143_, v___f_2141_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v_rules_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
lean_dec_ref(v___x_2144_);
v___x_2145_ = lean_unsigned_to_nat(1u);
v___x_2146_ = l_Lean_Syntax_getArg(v_rwRulesSeqStx_2119_, v___x_2145_);
v_rules_2147_ = l_Lean_Syntax_getArgs(v___x_2146_);
lean_dec(v___x_2146_);
v___x_2148_ = lean_array_get_size(v_rules_2147_);
v___x_2149_ = lean_nat_add(v___x_2148_, v___x_2145_);
v___x_2150_ = lean_nat_shiftr(v___x_2149_, v___x_2145_);
lean_dec(v___x_2149_);
v___x_2151_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg(v___x_2150_, v_rules_2147_, v_x_2120_, v___x_2130_, v___x_2142_, v_a_2121_, v_a_2122_, v_a_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_, v_a_2128_);
lean_dec_ref(v_rules_2147_);
lean_dec(v___x_2150_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v___x_2153_; uint8_t v_isShared_2154_; uint8_t v_isSharedCheck_2158_; 
v_isSharedCheck_2158_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2158_ == 0)
{
lean_object* v_unused_2159_; 
v_unused_2159_ = lean_ctor_get(v___x_2151_, 0);
lean_dec(v_unused_2159_);
v___x_2153_ = v___x_2151_;
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
else
{
lean_dec(v___x_2151_);
v___x_2153_ = lean_box(0);
v_isShared_2154_ = v_isSharedCheck_2158_;
goto v_resetjp_2152_;
}
v_resetjp_2152_:
{
lean_object* v___x_2156_; 
if (v_isShared_2154_ == 0)
{
lean_ctor_set(v___x_2153_, 0, v___x_2142_);
v___x_2156_ = v___x_2153_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v___x_2142_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
else
{
return v___x_2151_;
}
}
else
{
lean_dec_ref(v_x_2120_);
return v___x_2144_;
}
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2167_; 
lean_dec_ref(v_x_2120_);
v_a_2160_ = lean_ctor_get(v___x_2139_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2162_ = v___x_2139_;
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___x_2139_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2165_; 
if (v_isShared_2163_ == 0)
{
v___x_2165_ = v___x_2162_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v_a_2160_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withRWRulesSeq___boxed(lean_object* v_token_2168_, lean_object* v_rwRulesSeqStx_2169_, lean_object* v_x_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lean_Elab_Tactic_withRWRulesSeq(v_token_2168_, v_rwRulesSeqStx_2169_, v_x_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_, v_a_2176_, v_a_2177_, v_a_2178_);
lean_dec(v_a_2178_);
lean_dec_ref(v_a_2177_);
lean_dec(v_a_2176_);
lean_dec_ref(v_a_2175_);
lean_dec(v_a_2174_);
lean_dec_ref(v_a_2173_);
lean_dec(v_a_2172_);
lean_dec_ref(v_a_2171_);
lean_dec(v_rwRulesSeqStx_2169_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0(lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v___x_2190_; 
v___x_2190_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___redArg(v___y_2188_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0___boxed(lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
lean_object* v_res_2200_; 
v_res_2200_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0_spec__0(v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_, v___y_2198_);
lean_dec(v___y_2198_);
lean_dec_ref(v___y_2197_);
lean_dec(v___y_2196_);
lean_dec_ref(v___y_2195_);
lean_dec(v___y_2194_);
lean_dec_ref(v___y_2193_);
lean_dec(v___y_2192_);
lean_dec_ref(v___y_2191_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0(lean_object* v_00_u03b1_2201_, lean_object* v_x_2202_, lean_object* v_mkInfoTree_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___redArg(v_x_2202_, v_mkInfoTree_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0___boxed(lean_object* v_00_u03b1_2214_, lean_object* v_x_2215_, lean_object* v_mkInfoTree_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_){
_start:
{
lean_object* v_res_2226_; 
v_res_2226_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__0(v_00_u03b1_2214_, v_x_2215_, v_mkInfoTree_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
lean_dec(v___y_2222_);
lean_dec_ref(v___y_2221_);
lean_dec(v___y_2220_);
lean_dec_ref(v___y_2219_);
lean_dec(v___y_2218_);
lean_dec_ref(v___y_2217_);
return v_res_2226_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1(lean_object* v_upperBound_2227_, lean_object* v_rules_2228_, lean_object* v_x_2229_, lean_object* v_inst_2230_, lean_object* v_R_2231_, lean_object* v_a_2232_, lean_object* v_b_2233_, lean_object* v_c_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg(v_upperBound_2227_, v_rules_2228_, v_x_2229_, v_a_2232_, v_b_2233_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2245_ = _args[0];
lean_object* v_rules_2246_ = _args[1];
lean_object* v_x_2247_ = _args[2];
lean_object* v_inst_2248_ = _args[3];
lean_object* v_R_2249_ = _args[4];
lean_object* v_a_2250_ = _args[5];
lean_object* v_b_2251_ = _args[6];
lean_object* v_c_2252_ = _args[7];
lean_object* v___y_2253_ = _args[8];
lean_object* v___y_2254_ = _args[9];
lean_object* v___y_2255_ = _args[10];
lean_object* v___y_2256_ = _args[11];
lean_object* v___y_2257_ = _args[12];
lean_object* v___y_2258_ = _args[13];
lean_object* v___y_2259_ = _args[14];
lean_object* v___y_2260_ = _args[15];
lean_object* v___y_2261_ = _args[16];
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1(v_upperBound_2245_, v_rules_2246_, v_x_2247_, v_inst_2248_, v_R_2249_, v_a_2250_, v_b_2251_, v_c_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec(v___y_2256_);
lean_dec_ref(v___y_2255_);
lean_dec(v___y_2254_);
lean_dec_ref(v___y_2253_);
lean_dec_ref(v_rules_2246_);
lean_dec(v_upperBound_2245_);
return v_res_2262_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__0_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_2263_; 
v___x_2263_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_2263_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__1_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_2264_; 
v___x_2264_ = lean_mk_string_unchecked("Rewrite", 7, 7);
return v___x_2264_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__2_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_2265_; 
v___x_2265_ = lean_mk_string_unchecked("Config", 6, 6);
return v___x_2265_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(void){
_start:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2266_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__2_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_, &l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__2_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once, _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__2_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_);
v___x_2267_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__1_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_, &l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__1_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once, _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__1_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_);
v___x_2268_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__0_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_, &l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__0_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once, _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__0_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_);
v___x_2269_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0);
v___x_2270_ = l_Lean_Name_mkStr4(v___x_2269_, v___x_2268_, v___x_2267_, v___x_2266_);
return v___x_2270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(lean_object* v_e_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v___x_2277_; uint8_t v___x_2278_; uint8_t v___x_2279_; lean_object* v___x_2280_; 
v___x_2277_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_, &l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once, _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_);
v___x_2278_ = 0;
v___x_2279_ = 1;
v___x_2280_ = l_Lean_Meta_evalExpr_x27___redArg(v___x_2277_, v_e_2271_, v___x_2278_, v___x_2279_, v_a_2272_, v_a_2273_, v_a_2274_, v_a_2275_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe___redArg_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3____boxed(lean_object* v_e_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Lean_Elab_Tactic_evalUnsafe___redArg_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(v_e_2281_, v_a_2282_, v_a_2283_, v_a_2284_, v_a_2285_);
lean_dec(v_a_2285_);
lean_dec_ref(v_a_2284_);
lean_dec(v_a_2283_);
lean_dec_ref(v_a_2282_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(lean_object* v_e_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_){
_start:
{
lean_object* v___x_2296_; 
v___x_2296_ = l_Lean_Elab_Tactic_evalUnsafe___redArg_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(v_e_2288_, v_a_2291_, v_a_2292_, v_a_2293_, v_a_2294_);
return v___x_2296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalUnsafe_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3____boxed(lean_object* v_e_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_Elab_Tactic_evalUnsafe_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(v_e_2297_, v_a_2298_, v_a_2299_, v_a_2300_, v_a_2301_, v_a_2302_, v_a_2303_);
lean_dec(v_a_2303_);
lean_dec_ref(v_a_2302_);
lean_dec(v_a_2301_);
lean_dec_ref(v_a_2300_);
lean_dec(v_a_2299_);
lean_dec_ref(v_a_2298_);
return v_res_2305_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__8(lean_object* v_opts_2306_, lean_object* v_opt_2307_){
_start:
{
lean_object* v_name_2308_; lean_object* v_defValue_2309_; lean_object* v_map_2310_; lean_object* v___x_2311_; 
v_name_2308_ = lean_ctor_get(v_opt_2307_, 0);
v_defValue_2309_ = lean_ctor_get(v_opt_2307_, 1);
v_map_2310_ = lean_ctor_get(v_opts_2306_, 0);
v___x_2311_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_2310_, v_name_2308_);
if (lean_obj_tag(v___x_2311_) == 0)
{
uint8_t v___x_2312_; 
v___x_2312_ = lean_unbox(v_defValue_2309_);
return v___x_2312_;
}
else
{
lean_object* v_val_2313_; 
v_val_2313_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_val_2313_);
lean_dec_ref(v___x_2311_);
if (lean_obj_tag(v_val_2313_) == 1)
{
uint8_t v_v_2314_; 
v_v_2314_ = lean_ctor_get_uint8(v_val_2313_, 0);
lean_dec_ref(v_val_2313_);
return v_v_2314_;
}
else
{
uint8_t v___x_2315_; 
lean_dec(v_val_2313_);
v___x_2315_ = lean_unbox(v_defValue_2309_);
return v___x_2315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__8___boxed(lean_object* v_opts_2316_, lean_object* v_opt_2317_){
_start:
{
uint8_t v_res_2318_; lean_object* v_r_2319_; 
v_res_2318_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__8(v_opts_2316_, v_opt_2317_);
lean_dec_ref(v_opt_2317_);
lean_dec_ref(v_opts_2316_);
v_r_2319_ = lean_box(v_res_2318_);
return v_r_2319_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2320_ = lean_box(1);
v___x_2321_ = l_Lean_MessageData_ofFormat(v___x_2320_);
return v___x_2321_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__1(void){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_2322_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__2(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__1);
v___x_2324_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2324_, 0, v___x_2323_);
return v___x_2324_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__3(void){
_start:
{
lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2325_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__2);
v___x_2326_ = l_Lean_MessageData_ofFormat(v___x_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9(lean_object* v_x_2327_, lean_object* v_x_2328_){
_start:
{
if (lean_obj_tag(v_x_2328_) == 0)
{
return v_x_2327_;
}
else
{
lean_object* v_head_2329_; lean_object* v_tail_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2352_; 
v_head_2329_ = lean_ctor_get(v_x_2328_, 0);
v_tail_2330_ = lean_ctor_get(v_x_2328_, 1);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_x_2328_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2332_ = v_x_2328_;
v_isShared_2333_ = v_isSharedCheck_2352_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_tail_2330_);
lean_inc(v_head_2329_);
lean_dec(v_x_2328_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2352_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v_before_2334_; lean_object* v___x_2336_; uint8_t v_isShared_2337_; uint8_t v_isSharedCheck_2350_; 
v_before_2334_ = lean_ctor_get(v_head_2329_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v_head_2329_);
if (v_isSharedCheck_2350_ == 0)
{
lean_object* v_unused_2351_; 
v_unused_2351_ = lean_ctor_get(v_head_2329_, 1);
lean_dec(v_unused_2351_);
v___x_2336_ = v_head_2329_;
v_isShared_2337_ = v_isSharedCheck_2350_;
goto v_resetjp_2335_;
}
else
{
lean_inc(v_before_2334_);
lean_dec(v_head_2329_);
v___x_2336_ = lean_box(0);
v_isShared_2337_ = v_isSharedCheck_2350_;
goto v_resetjp_2335_;
}
v_resetjp_2335_:
{
lean_object* v___x_2338_; lean_object* v___x_2340_; 
v___x_2338_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0);
if (v_isShared_2337_ == 0)
{
lean_ctor_set_tag(v___x_2336_, 7);
lean_ctor_set(v___x_2336_, 1, v___x_2338_);
lean_ctor_set(v___x_2336_, 0, v_x_2327_);
v___x_2340_ = v___x_2336_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_x_2327_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
lean_object* v___x_2341_; lean_object* v___x_2343_; 
v___x_2341_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__3);
if (v_isShared_2333_ == 0)
{
lean_ctor_set_tag(v___x_2332_, 7);
lean_ctor_set(v___x_2332_, 1, v___x_2341_);
lean_ctor_set(v___x_2332_, 0, v___x_2340_);
v___x_2343_ = v___x_2332_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2348_; 
v_reuseFailAlloc_2348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2348_, 0, v___x_2340_);
lean_ctor_set(v_reuseFailAlloc_2348_, 1, v___x_2341_);
v___x_2343_ = v_reuseFailAlloc_2348_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; 
v___x_2344_ = l_Lean_MessageData_ofSyntax(v_before_2334_);
v___x_2345_ = l_Lean_indentD(v___x_2344_);
v___x_2346_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2346_, 0, v___x_2343_);
lean_ctor_set(v___x_2346_, 1, v___x_2345_);
v_x_2327_ = v___x_2346_;
v_x_2328_ = v_tail_2330_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2353_; 
v___x_2353_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_2353_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_2354_; lean_object* v___x_2355_; 
v___x_2354_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__0);
v___x_2355_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2354_);
return v___x_2355_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2356_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__1);
v___x_2357_ = l_Lean_MessageData_ofFormat(v___x_2356_);
return v___x_2357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg(lean_object* v_msgData_2358_, lean_object* v_macroStack_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v_options_2362_; lean_object* v___x_2363_; uint8_t v___x_2364_; 
v_options_2362_ = lean_ctor_get(v___y_2360_, 2);
v___x_2363_ = l_Lean_Elab_pp_macroStack;
v___x_2364_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__8(v_options_2362_, v___x_2363_);
if (v___x_2364_ == 0)
{
lean_object* v___x_2365_; 
lean_dec(v_macroStack_2359_);
v___x_2365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2365_, 0, v_msgData_2358_);
return v___x_2365_;
}
else
{
if (lean_obj_tag(v_macroStack_2359_) == 0)
{
lean_object* v___x_2366_; 
v___x_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2366_, 0, v_msgData_2358_);
return v___x_2366_;
}
else
{
lean_object* v_head_2367_; lean_object* v_after_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2383_; 
v_head_2367_ = lean_ctor_get(v_macroStack_2359_, 0);
lean_inc(v_head_2367_);
v_after_2368_ = lean_ctor_get(v_head_2367_, 1);
v_isSharedCheck_2383_ = !lean_is_exclusive(v_head_2367_);
if (v_isSharedCheck_2383_ == 0)
{
lean_object* v_unused_2384_; 
v_unused_2384_ = lean_ctor_get(v_head_2367_, 0);
lean_dec(v_unused_2384_);
v___x_2370_ = v_head_2367_;
v_isShared_2371_ = v_isSharedCheck_2383_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_after_2368_);
lean_dec(v_head_2367_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2383_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2372_; lean_object* v___x_2374_; 
v___x_2372_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9___closed__0);
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 7);
lean_ctor_set(v___x_2370_, 1, v___x_2372_);
lean_ctor_set(v___x_2370_, 0, v_msgData_2358_);
v___x_2374_ = v___x_2370_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v_msgData_2358_);
lean_ctor_set(v_reuseFailAlloc_2382_, 1, v___x_2372_);
v___x_2374_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v_msgData_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2375_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___closed__2);
v___x_2376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2374_);
lean_ctor_set(v___x_2376_, 1, v___x_2375_);
v___x_2377_ = l_Lean_MessageData_ofSyntax(v_after_2368_);
v___x_2378_ = l_Lean_indentD(v___x_2377_);
v_msgData_2379_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_2379_, 0, v___x_2376_);
lean_ctor_set(v_msgData_2379_, 1, v___x_2378_);
v___x_2380_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4_spec__9(v_msgData_2379_, v_macroStack_2359_);
v___x_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2380_);
return v___x_2381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg___boxed(lean_object* v_msgData_2385_, lean_object* v_macroStack_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v_res_2389_; 
v_res_2389_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg(v_msgData_2385_, v_macroStack_2386_, v___y_2387_);
lean_dec_ref(v___y_2387_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg(lean_object* v_msg_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_){
_start:
{
lean_object* v_ref_2398_; lean_object* v___x_2399_; lean_object* v_a_2400_; lean_object* v_macroStack_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v_a_2404_; lean_object* v___x_2406_; uint8_t v_isShared_2407_; uint8_t v_isSharedCheck_2412_; 
v_ref_2398_ = lean_ctor_get(v___y_2395_, 5);
v___x_2399_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8(v_msg_2390_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_);
v_a_2400_ = lean_ctor_get(v___x_2399_, 0);
lean_inc(v_a_2400_);
lean_dec_ref(v___x_2399_);
v_macroStack_2401_ = lean_ctor_get(v___y_2391_, 1);
v___x_2402_ = l_Lean_Elab_getBetterRef(v_ref_2398_, v_macroStack_2401_);
lean_inc(v_macroStack_2401_);
v___x_2403_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg(v_a_2400_, v_macroStack_2401_, v___y_2395_);
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2406_ = v___x_2403_;
v_isShared_2407_ = v_isSharedCheck_2412_;
goto v_resetjp_2405_;
}
else
{
lean_inc(v_a_2404_);
lean_dec(v___x_2403_);
v___x_2406_ = lean_box(0);
v_isShared_2407_ = v_isSharedCheck_2412_;
goto v_resetjp_2405_;
}
v_resetjp_2405_:
{
lean_object* v___x_2408_; lean_object* v___x_2410_; 
v___x_2408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2408_, 0, v___x_2402_);
lean_ctor_set(v___x_2408_, 1, v_a_2404_);
if (v_isShared_2407_ == 0)
{
lean_ctor_set_tag(v___x_2406_, 1);
lean_ctor_set(v___x_2406_, 0, v___x_2408_);
v___x_2410_ = v___x_2406_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2408_);
v___x_2410_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
return v___x_2410_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg___boxed(lean_object* v_msg_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg(v_msg_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
return v_res_2421_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2422_; double v___x_2423_; 
v___x_2422_ = lean_unsigned_to_nat(0u);
v___x_2423_ = lean_float_of_nat(v___x_2422_);
return v___x_2423_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; 
v___x_2424_ = lean_unsigned_to_nat(0u);
v___x_2425_ = lean_mk_empty_array_with_capacity(v___x_2424_);
return v___x_2425_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg(lean_object* v_cls_2426_, lean_object* v_msg_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v_ref_2433_; lean_object* v___x_2434_; lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2479_; 
v_ref_2433_ = lean_ctor_get(v___y_2430_, 5);
v___x_2434_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_Elab_Tactic_elabRewrite_spec__2_spec__3_spec__8(v_msg_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2437_ = v___x_2434_;
v_isShared_2438_ = v_isSharedCheck_2479_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2434_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2479_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v_traceState_2440_; lean_object* v_env_2441_; lean_object* v_nextMacroScope_2442_; lean_object* v_ngen_2443_; lean_object* v_auxDeclNGen_2444_; lean_object* v_cache_2445_; lean_object* v_messages_2446_; lean_object* v_infoState_2447_; lean_object* v_snapshotTasks_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2478_; 
v___x_2439_ = lean_st_ref_take(v___y_2431_);
v_traceState_2440_ = lean_ctor_get(v___x_2439_, 4);
v_env_2441_ = lean_ctor_get(v___x_2439_, 0);
v_nextMacroScope_2442_ = lean_ctor_get(v___x_2439_, 1);
v_ngen_2443_ = lean_ctor_get(v___x_2439_, 2);
v_auxDeclNGen_2444_ = lean_ctor_get(v___x_2439_, 3);
v_cache_2445_ = lean_ctor_get(v___x_2439_, 5);
v_messages_2446_ = lean_ctor_get(v___x_2439_, 6);
v_infoState_2447_ = lean_ctor_get(v___x_2439_, 7);
v_snapshotTasks_2448_ = lean_ctor_get(v___x_2439_, 8);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2439_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2450_ = v___x_2439_;
v_isShared_2451_ = v_isSharedCheck_2478_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_snapshotTasks_2448_);
lean_inc(v_infoState_2447_);
lean_inc(v_messages_2446_);
lean_inc(v_cache_2445_);
lean_inc(v_traceState_2440_);
lean_inc(v_auxDeclNGen_2444_);
lean_inc(v_ngen_2443_);
lean_inc(v_nextMacroScope_2442_);
lean_inc(v_env_2441_);
lean_dec(v___x_2439_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2478_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
uint64_t v_tid_2452_; lean_object* v_traces_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2477_; 
v_tid_2452_ = lean_ctor_get_uint64(v_traceState_2440_, sizeof(void*)*1);
v_traces_2453_ = lean_ctor_get(v_traceState_2440_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v_traceState_2440_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2455_ = v_traceState_2440_;
v_isShared_2456_ = v_isSharedCheck_2477_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_traces_2453_);
lean_dec(v_traceState_2440_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2477_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2457_; double v___x_2458_; uint8_t v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2467_; 
v___x_2457_ = lean_box(0);
v___x_2458_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_2459_ = 0;
v___x_2460_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__2);
v___x_2461_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2461_, 0, v_cls_2426_);
lean_ctor_set(v___x_2461_, 1, v___x_2457_);
lean_ctor_set(v___x_2461_, 2, v___x_2460_);
lean_ctor_set_float(v___x_2461_, sizeof(void*)*3, v___x_2458_);
lean_ctor_set_float(v___x_2461_, sizeof(void*)*3 + 8, v___x_2458_);
lean_ctor_set_uint8(v___x_2461_, sizeof(void*)*3 + 16, v___x_2459_);
v___x_2462_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_2463_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2463_, 0, v___x_2461_);
lean_ctor_set(v___x_2463_, 1, v_a_2435_);
lean_ctor_set(v___x_2463_, 2, v___x_2462_);
lean_inc(v_ref_2433_);
v___x_2464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2464_, 0, v_ref_2433_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = l_Lean_PersistentArray_push___redArg(v_traces_2453_, v___x_2464_);
if (v_isShared_2456_ == 0)
{
lean_ctor_set(v___x_2455_, 0, v___x_2465_);
v___x_2467_ = v___x_2455_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v___x_2465_);
lean_ctor_set_uint64(v_reuseFailAlloc_2476_, sizeof(void*)*1, v_tid_2452_);
v___x_2467_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
lean_object* v___x_2469_; 
if (v_isShared_2451_ == 0)
{
lean_ctor_set(v___x_2450_, 4, v___x_2467_);
v___x_2469_ = v___x_2450_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_env_2441_);
lean_ctor_set(v_reuseFailAlloc_2475_, 1, v_nextMacroScope_2442_);
lean_ctor_set(v_reuseFailAlloc_2475_, 2, v_ngen_2443_);
lean_ctor_set(v_reuseFailAlloc_2475_, 3, v_auxDeclNGen_2444_);
lean_ctor_set(v_reuseFailAlloc_2475_, 4, v___x_2467_);
lean_ctor_set(v_reuseFailAlloc_2475_, 5, v_cache_2445_);
lean_ctor_set(v_reuseFailAlloc_2475_, 6, v_messages_2446_);
lean_ctor_set(v_reuseFailAlloc_2475_, 7, v_infoState_2447_);
lean_ctor_set(v_reuseFailAlloc_2475_, 8, v_snapshotTasks_2448_);
v___x_2469_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2473_; 
v___x_2470_ = lean_st_ref_set(v___y_2431_, v___x_2469_);
v___x_2471_ = lean_box(0);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 0, v___x_2471_);
v___x_2473_ = v___x_2437_;
goto v_reusejp_2472_;
}
else
{
lean_object* v_reuseFailAlloc_2474_; 
v_reuseFailAlloc_2474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2474_, 0, v___x_2471_);
v___x_2473_ = v_reuseFailAlloc_2474_;
goto v_reusejp_2472_;
}
v_reusejp_2472_:
{
return v___x_2473_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_cls_2480_, lean_object* v_msg_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg(v_cls_2480_, v_msg_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
return v_res_2487_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(lean_object* v_keys_2488_, lean_object* v_i_2489_, lean_object* v_k_2490_){
_start:
{
lean_object* v___x_2491_; uint8_t v___x_2492_; 
v___x_2491_ = lean_array_get_size(v_keys_2488_);
v___x_2492_ = lean_nat_dec_lt(v_i_2489_, v___x_2491_);
if (v___x_2492_ == 0)
{
lean_dec(v_i_2489_);
return v___x_2492_;
}
else
{
lean_object* v_k_x27_2493_; uint8_t v___x_2494_; 
v_k_x27_2493_ = lean_array_fget_borrowed(v_keys_2488_, v_i_2489_);
v___x_2494_ = l_Lean_instBEqExtraModUse_beq(v_k_2490_, v_k_x27_2493_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = lean_unsigned_to_nat(1u);
v___x_2496_ = lean_nat_add(v_i_2489_, v___x_2495_);
lean_dec(v_i_2489_);
v_i_2489_ = v___x_2496_;
goto _start;
}
else
{
lean_dec(v_i_2489_);
return v___x_2494_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___redArg___boxed(lean_object* v_keys_2498_, lean_object* v_i_2499_, lean_object* v_k_2500_){
_start:
{
uint8_t v_res_2501_; lean_object* v_r_2502_; 
v_res_2501_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(v_keys_2498_, v_i_2499_, v_k_2500_);
lean_dec_ref(v_k_2500_);
lean_dec_ref(v_keys_2498_);
v_r_2502_ = lean_box(v_res_2501_);
return v_r_2502_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_x_2503_, size_t v_x_2504_, lean_object* v_x_2505_){
_start:
{
if (lean_obj_tag(v_x_2503_) == 0)
{
lean_object* v_es_2506_; lean_object* v___x_2507_; size_t v___x_2508_; size_t v___x_2509_; size_t v___x_2510_; lean_object* v_j_2511_; lean_object* v___x_2512_; 
v_es_2506_ = lean_ctor_get(v_x_2503_, 0);
v___x_2507_ = lean_box(2);
v___x_2508_ = ((size_t)5ULL);
v___x_2509_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_finishElabRewrite_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_2510_ = lean_usize_land(v_x_2504_, v___x_2509_);
v_j_2511_ = lean_usize_to_nat(v___x_2510_);
v___x_2512_ = lean_array_get_borrowed(v___x_2507_, v_es_2506_, v_j_2511_);
lean_dec(v_j_2511_);
switch(lean_obj_tag(v___x_2512_))
{
case 0:
{
lean_object* v_key_2513_; uint8_t v___x_2514_; 
v_key_2513_ = lean_ctor_get(v___x_2512_, 0);
v___x_2514_ = l_Lean_instBEqExtraModUse_beq(v_x_2505_, v_key_2513_);
return v___x_2514_;
}
case 1:
{
lean_object* v_node_2515_; size_t v___x_2516_; 
v_node_2515_ = lean_ctor_get(v___x_2512_, 0);
v___x_2516_ = lean_usize_shift_right(v_x_2504_, v___x_2508_);
v_x_2503_ = v_node_2515_;
v_x_2504_ = v___x_2516_;
goto _start;
}
default: 
{
uint8_t v___x_2518_; 
v___x_2518_ = 0;
return v___x_2518_;
}
}
}
else
{
lean_object* v_ks_2519_; lean_object* v___x_2520_; uint8_t v___x_2521_; 
v_ks_2519_ = lean_ctor_get(v_x_2503_, 0);
v___x_2520_ = lean_unsigned_to_nat(0u);
v___x_2521_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(v_ks_2519_, v___x_2520_, v_x_2505_);
return v___x_2521_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_x_2522_, lean_object* v_x_2523_, lean_object* v_x_2524_){
_start:
{
size_t v_x_12100__boxed_2525_; uint8_t v_res_2526_; lean_object* v_r_2527_; 
v_x_12100__boxed_2525_ = lean_unbox_usize(v_x_2523_);
lean_dec(v_x_2523_);
v_res_2526_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___redArg(v_x_2522_, v_x_12100__boxed_2525_, v_x_2524_);
lean_dec_ref(v_x_2524_);
lean_dec_ref(v_x_2522_);
v_r_2527_ = lean_box(v_res_2526_);
return v_r_2527_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___redArg(lean_object* v_x_2528_, lean_object* v_x_2529_){
_start:
{
uint64_t v___x_2530_; size_t v___x_2531_; uint8_t v___x_2532_; 
v___x_2530_ = l_Lean_instHashableExtraModUse_hash(v_x_2529_);
v___x_2531_ = lean_uint64_to_usize(v___x_2530_);
v___x_2532_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___redArg(v_x_2528_, v___x_2531_, v_x_2529_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2533_, lean_object* v_x_2534_){
_start:
{
uint8_t v_res_2535_; lean_object* v_r_2536_; 
v_res_2535_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___redArg(v_x_2533_, v_x_2534_);
lean_dec_ref(v_x_2534_);
lean_dec_ref(v_x_2533_);
v_r_2536_ = lean_box(v_res_2535_);
return v_r_2536_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2537_; 
v___x_2537_ = lean_alloc_closure((void*)(l_Lean_instBEqExtraModUse_beq___boxed), 2, 0);
return v___x_2537_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_alloc_closure((void*)(l_Lean_instHashableExtraModUse_hash___boxed), 1, 0);
return v___x_2538_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2539_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__1, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__1_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__1);
v___x_2540_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__0, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__0_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__0);
v___x_2541_ = l_Lean_PersistentHashMap_empty(lean_box(0), lean_box(0), v___x_2540_, v___x_2539_);
return v___x_2541_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2542_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__3, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__3_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__3);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___x_2545_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4);
v___x_2546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2546_, 0, v___x_2545_);
lean_ctor_set(v___x_2546_, 1, v___x_2545_);
return v___x_2546_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__6(void){
_start:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2547_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__4);
v___x_2548_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2548_, 0, v___x_2547_);
lean_ctor_set(v___x_2548_, 1, v___x_2547_);
lean_ctor_set(v___x_2548_, 2, v___x_2547_);
lean_ctor_set(v___x_2548_, 3, v___x_2547_);
lean_ctor_set(v___x_2548_, 4, v___x_2547_);
lean_ctor_set(v___x_2548_, 5, v___x_2547_);
return v___x_2548_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__7(void){
_start:
{
lean_object* v___x_2549_; 
v___x_2549_ = lean_mk_string_unchecked("extraModUses", 12, 12);
return v___x_2549_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8(void){
_start:
{
lean_object* v___x_2550_; lean_object* v_cls_2551_; 
v___x_2550_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__7, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__7_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__7);
v_cls_2551_ = l_Lean_Name_mkStr1(v___x_2550_);
return v_cls_2551_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__9(void){
_start:
{
lean_object* v___x_2552_; 
v___x_2552_ = lean_mk_string_unchecked(" extra mod use ", 15, 15);
return v___x_2552_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__10(void){
_start:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__9, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__9_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__9);
v___x_2554_ = l_Lean_stringToMessageData(v___x_2553_);
return v___x_2554_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__11(void){
_start:
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_mk_string_unchecked(" of ", 4, 4);
return v___x_2555_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__12(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__11, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__11_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__11);
v___x_2557_ = l_Lean_stringToMessageData(v___x_2556_);
return v___x_2557_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__13(void){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_2558_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__14(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__13, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__13_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__13);
v___x_2560_ = l_Lean_Name_mkStr1(v___x_2559_);
return v___x_2560_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__15(void){
_start:
{
lean_object* v_cls_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
v_cls_2561_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8);
v___x_2562_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__14, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__14_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__14);
v___x_2563_ = l_Lean_Name_append(v___x_2562_, v_cls_2561_);
return v___x_2563_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__16(void){
_start:
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_mk_string_unchecked("recording ", 10, 10);
return v___x_2564_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__17(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__16, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__16_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__16);
v___x_2566_ = l_Lean_stringToMessageData(v___x_2565_);
return v___x_2566_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__18(void){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_2567_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__19(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__18, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__18_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__18);
v___x_2569_ = l_Lean_stringToMessageData(v___x_2568_);
return v___x_2569_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__20(void){
_start:
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_mk_string_unchecked("regular", 7, 7);
return v___x_2570_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__21(void){
_start:
{
lean_object* v___x_2571_; 
v___x_2571_ = lean_mk_string_unchecked("meta", 4, 4);
return v___x_2571_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__22(void){
_start:
{
lean_object* v___x_2572_; 
v___x_2572_ = lean_mk_string_unchecked("private", 7, 7);
return v___x_2572_;
}
}
static lean_object* _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__23(void){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = lean_mk_string_unchecked("public", 6, 6);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0(lean_object* v_mod_2574_, uint8_t v_isMeta_2575_, lean_object* v_hint_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v___x_2584_; lean_object* v_env_2585_; uint8_t v_isExporting_2586_; lean_object* v___x_2587_; lean_object* v_env_2588_; lean_object* v___x_2589_; lean_object* v_entry_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___y_2595_; lean_object* v___y_2596_; lean_object* v___x_2637_; uint8_t v___x_2638_; 
v___x_2584_ = lean_st_ref_get(v___y_2582_);
v_env_2585_ = lean_ctor_get(v___x_2584_, 0);
lean_inc_ref(v_env_2585_);
lean_dec(v___x_2584_);
v_isExporting_2586_ = lean_ctor_get_uint8(v_env_2585_, sizeof(void*)*8);
lean_dec_ref(v_env_2585_);
v___x_2587_ = lean_st_ref_get(v___y_2582_);
v_env_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc_ref(v_env_2588_);
lean_dec(v___x_2587_);
v___x_2589_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__2, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__2_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__2);
lean_inc(v_mod_2574_);
v_entry_2590_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v_entry_2590_, 0, v_mod_2574_);
lean_ctor_set_uint8(v_entry_2590_, sizeof(void*)*1, v_isExporting_2586_);
lean_ctor_set_uint8(v_entry_2590_, sizeof(void*)*1 + 1, v_isMeta_2575_);
v___x_2591_ = l___private_Lean_ExtraModUses_0__Lean_extraModUses;
v___x_2592_ = lean_box(1);
v___x_2593_ = lean_box(0);
v___x_2637_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2589_, v___x_2591_, v_env_2588_, v___x_2592_, v___x_2593_);
v___x_2638_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___redArg(v___x_2637_, v_entry_2590_);
lean_dec(v___x_2637_);
if (v___x_2638_ == 0)
{
lean_object* v_options_2639_; uint8_t v_hasTrace_2640_; 
v_options_2639_ = lean_ctor_get(v___y_2581_, 2);
v_hasTrace_2640_ = lean_ctor_get_uint8(v_options_2639_, sizeof(void*)*1);
if (v_hasTrace_2640_ == 0)
{
lean_dec(v_hint_2576_);
lean_dec(v_mod_2574_);
v___y_2595_ = v___y_2580_;
v___y_2596_ = v___y_2582_;
goto v___jp_2594_;
}
else
{
lean_object* v_inheritedTraceOptions_2641_; lean_object* v_cls_2642_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___x_2662_; uint8_t v___x_2663_; 
v_inheritedTraceOptions_2641_ = lean_ctor_get(v___y_2581_, 13);
v_cls_2642_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__8);
v___x_2662_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__15, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__15_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__15);
v___x_2663_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2641_, v_options_2639_, v___x_2662_);
if (v___x_2663_ == 0)
{
lean_dec(v_hint_2576_);
lean_dec(v_mod_2574_);
v___y_2595_ = v___y_2580_;
v___y_2596_ = v___y_2582_;
goto v___jp_2594_;
}
else
{
lean_object* v___x_2664_; lean_object* v___y_2666_; 
v___x_2664_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__17, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__17_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__17);
if (v_isExporting_2586_ == 0)
{
lean_object* v___x_2673_; 
v___x_2673_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__22, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__22_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__22);
v___y_2666_ = v___x_2673_;
goto v___jp_2665_;
}
else
{
lean_object* v___x_2674_; 
v___x_2674_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__23, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__23_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__23);
v___y_2666_ = v___x_2674_;
goto v___jp_2665_;
}
v___jp_2665_:
{
lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; 
lean_inc_ref(v___y_2666_);
v___x_2667_ = l_Lean_stringToMessageData(v___y_2666_);
v___x_2668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2664_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__19, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__19_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__19);
v___x_2670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2668_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
if (v_isMeta_2575_ == 0)
{
lean_object* v___x_2671_; 
v___x_2671_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__20, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__20_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__20);
v___y_2649_ = v___x_2670_;
v___y_2650_ = v___x_2671_;
goto v___jp_2648_;
}
else
{
lean_object* v___x_2672_; 
v___x_2672_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__21, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__21_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__21);
v___y_2649_ = v___x_2670_;
v___y_2650_ = v___x_2672_;
goto v___jp_2648_;
}
}
}
v___jp_2643_:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; 
v___x_2646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___y_2644_);
lean_ctor_set(v___x_2646_, 1, v___y_2645_);
v___x_2647_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg(v_cls_2642_, v___x_2646_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_dec_ref(v___x_2647_);
v___y_2595_ = v___y_2580_;
v___y_2596_ = v___y_2582_;
goto v___jp_2594_;
}
else
{
lean_dec_ref(v_entry_2590_);
return v___x_2647_;
}
}
v___jp_2648_:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; 
lean_inc_ref(v___y_2650_);
v___x_2651_ = l_Lean_stringToMessageData(v___y_2650_);
v___x_2652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___y_2649_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__10, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__10_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__10);
v___x_2654_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2652_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = l_Lean_MessageData_ofName(v_mod_2574_);
v___x_2656_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2654_);
lean_ctor_set(v___x_2656_, 1, v___x_2655_);
v___x_2657_ = l_Lean_Name_isAnonymous(v_hint_2576_);
if (v___x_2657_ == 0)
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2658_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__12, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__12_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__12);
v___x_2659_ = l_Lean_MessageData_ofName(v_hint_2576_);
v___x_2660_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2658_);
lean_ctor_set(v___x_2660_, 1, v___x_2659_);
v___y_2644_ = v___x_2656_;
v___y_2645_ = v___x_2660_;
goto v___jp_2643_;
}
else
{
lean_object* v___x_2661_; 
lean_dec(v_hint_2576_);
v___x_2661_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__2___closed__3);
v___y_2644_ = v___x_2656_;
v___y_2645_ = v___x_2661_;
goto v___jp_2643_;
}
}
}
}
else
{
lean_object* v___x_2675_; lean_object* v___x_2676_; 
lean_dec_ref(v_entry_2590_);
lean_dec(v_hint_2576_);
lean_dec(v_mod_2574_);
v___x_2675_ = lean_box(0);
v___x_2676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2676_, 0, v___x_2675_);
return v___x_2676_;
}
v___jp_2594_:
{
lean_object* v___x_2597_; lean_object* v_toEnvExtension_2598_; lean_object* v_env_2599_; lean_object* v_nextMacroScope_2600_; lean_object* v_ngen_2601_; lean_object* v_auxDeclNGen_2602_; lean_object* v_traceState_2603_; lean_object* v_messages_2604_; lean_object* v_infoState_2605_; lean_object* v_snapshotTasks_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2635_; 
v___x_2597_ = lean_st_ref_take(v___y_2596_);
v_toEnvExtension_2598_ = lean_ctor_get(v___x_2591_, 0);
v_env_2599_ = lean_ctor_get(v___x_2597_, 0);
v_nextMacroScope_2600_ = lean_ctor_get(v___x_2597_, 1);
v_ngen_2601_ = lean_ctor_get(v___x_2597_, 2);
v_auxDeclNGen_2602_ = lean_ctor_get(v___x_2597_, 3);
v_traceState_2603_ = lean_ctor_get(v___x_2597_, 4);
v_messages_2604_ = lean_ctor_get(v___x_2597_, 6);
v_infoState_2605_ = lean_ctor_get(v___x_2597_, 7);
v_snapshotTasks_2606_ = lean_ctor_get(v___x_2597_, 8);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2597_);
if (v_isSharedCheck_2635_ == 0)
{
lean_object* v_unused_2636_; 
v_unused_2636_ = lean_ctor_get(v___x_2597_, 5);
lean_dec(v_unused_2636_);
v___x_2608_ = v___x_2597_;
v_isShared_2609_ = v_isSharedCheck_2635_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_snapshotTasks_2606_);
lean_inc(v_infoState_2605_);
lean_inc(v_messages_2604_);
lean_inc(v_traceState_2603_);
lean_inc(v_auxDeclNGen_2602_);
lean_inc(v_ngen_2601_);
lean_inc(v_nextMacroScope_2600_);
lean_inc(v_env_2599_);
lean_dec(v___x_2597_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2635_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v_asyncMode_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2614_; 
v_asyncMode_2610_ = lean_ctor_get(v_toEnvExtension_2598_, 2);
v___x_2611_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_2591_, v_env_2599_, v_entry_2590_, v_asyncMode_2610_, v___x_2593_);
v___x_2612_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__5, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__5_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__5);
if (v_isShared_2609_ == 0)
{
lean_ctor_set(v___x_2608_, 5, v___x_2612_);
lean_ctor_set(v___x_2608_, 0, v___x_2611_);
v___x_2614_ = v___x_2608_;
goto v_reusejp_2613_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v___x_2611_);
lean_ctor_set(v_reuseFailAlloc_2634_, 1, v_nextMacroScope_2600_);
lean_ctor_set(v_reuseFailAlloc_2634_, 2, v_ngen_2601_);
lean_ctor_set(v_reuseFailAlloc_2634_, 3, v_auxDeclNGen_2602_);
lean_ctor_set(v_reuseFailAlloc_2634_, 4, v_traceState_2603_);
lean_ctor_set(v_reuseFailAlloc_2634_, 5, v___x_2612_);
lean_ctor_set(v_reuseFailAlloc_2634_, 6, v_messages_2604_);
lean_ctor_set(v_reuseFailAlloc_2634_, 7, v_infoState_2605_);
lean_ctor_set(v_reuseFailAlloc_2634_, 8, v_snapshotTasks_2606_);
v___x_2614_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2613_;
}
v_reusejp_2613_:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v_mctx_2618_; lean_object* v_zetaDeltaFVarIds_2619_; lean_object* v_postponed_2620_; lean_object* v_diag_2621_; lean_object* v___x_2623_; uint8_t v_isShared_2624_; uint8_t v_isSharedCheck_2632_; 
v___x_2615_ = lean_st_ref_set(v___y_2596_, v___x_2614_);
v___x_2616_ = lean_st_ref_get(v___y_2596_);
lean_dec(v___x_2616_);
v___x_2617_ = lean_st_ref_take(v___y_2595_);
v_mctx_2618_ = lean_ctor_get(v___x_2617_, 0);
v_zetaDeltaFVarIds_2619_ = lean_ctor_get(v___x_2617_, 2);
v_postponed_2620_ = lean_ctor_get(v___x_2617_, 3);
v_diag_2621_ = lean_ctor_get(v___x_2617_, 4);
v_isSharedCheck_2632_ = !lean_is_exclusive(v___x_2617_);
if (v_isSharedCheck_2632_ == 0)
{
lean_object* v_unused_2633_; 
v_unused_2633_ = lean_ctor_get(v___x_2617_, 1);
lean_dec(v_unused_2633_);
v___x_2623_ = v___x_2617_;
v_isShared_2624_ = v_isSharedCheck_2632_;
goto v_resetjp_2622_;
}
else
{
lean_inc(v_diag_2621_);
lean_inc(v_postponed_2620_);
lean_inc(v_zetaDeltaFVarIds_2619_);
lean_inc(v_mctx_2618_);
lean_dec(v___x_2617_);
v___x_2623_ = lean_box(0);
v_isShared_2624_ = v_isSharedCheck_2632_;
goto v_resetjp_2622_;
}
v_resetjp_2622_:
{
lean_object* v___x_2625_; lean_object* v___x_2627_; 
v___x_2625_ = lean_obj_once(&l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__6, &l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__6_once, _init_l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___closed__6);
if (v_isShared_2624_ == 0)
{
lean_ctor_set(v___x_2623_, 1, v___x_2625_);
v___x_2627_ = v___x_2623_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_mctx_2618_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v___x_2625_);
lean_ctor_set(v_reuseFailAlloc_2631_, 2, v_zetaDeltaFVarIds_2619_);
lean_ctor_set(v_reuseFailAlloc_2631_, 3, v_postponed_2620_);
lean_ctor_set(v_reuseFailAlloc_2631_, 4, v_diag_2621_);
v___x_2627_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2628_ = lean_st_ref_set(v___y_2595_, v___x_2627_);
v___x_2629_ = lean_box(0);
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
return v___x_2630_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0___boxed(lean_object* v_mod_2677_, lean_object* v_isMeta_2678_, lean_object* v_hint_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
uint8_t v_isMeta_boxed_2687_; lean_object* v_res_2688_; 
v_isMeta_boxed_2687_ = lean_unbox(v_isMeta_2678_);
v_res_2688_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0(v_mod_2677_, v_isMeta_boxed_2687_, v_hint_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
return v_res_2688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__1(lean_object* v___x_2689_, lean_object* v_declName_2690_, lean_object* v_as_2691_, size_t v_sz_2692_, size_t v_i_2693_, lean_object* v_b_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_){
_start:
{
uint8_t v___x_2702_; 
v___x_2702_ = lean_usize_dec_lt(v_i_2693_, v_sz_2692_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; 
lean_dec(v_declName_2690_);
v___x_2703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2703_, 0, v_b_2694_);
return v___x_2703_;
}
else
{
lean_object* v___x_2704_; lean_object* v_modules_2705_; lean_object* v___x_2706_; lean_object* v_a_2707_; lean_object* v___x_2708_; lean_object* v_toImport_2709_; lean_object* v_module_2710_; uint8_t v___x_2711_; lean_object* v___x_2712_; 
v___x_2704_ = l_Lean_Environment_header(v___x_2689_);
v_modules_2705_ = lean_ctor_get(v___x_2704_, 3);
lean_inc_ref(v_modules_2705_);
lean_dec_ref(v___x_2704_);
v___x_2706_ = l_Lean_instInhabitedEffectiveImport_default;
v_a_2707_ = lean_array_uget_borrowed(v_as_2691_, v_i_2693_);
v___x_2708_ = lean_array_get(v___x_2706_, v_modules_2705_, v_a_2707_);
lean_dec_ref(v_modules_2705_);
v_toImport_2709_ = lean_ctor_get(v___x_2708_, 0);
lean_inc_ref(v_toImport_2709_);
lean_dec(v___x_2708_);
v_module_2710_ = lean_ctor_get(v_toImport_2709_, 0);
lean_inc(v_module_2710_);
lean_dec_ref(v_toImport_2709_);
v___x_2711_ = 0;
lean_inc(v_declName_2690_);
v___x_2712_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0(v_module_2710_, v___x_2711_, v_declName_2690_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_);
if (lean_obj_tag(v___x_2712_) == 0)
{
lean_object* v___x_2713_; size_t v___x_2714_; size_t v___x_2715_; 
lean_dec_ref(v___x_2712_);
v___x_2713_ = lean_box(0);
v___x_2714_ = ((size_t)1ULL);
v___x_2715_ = lean_usize_add(v_i_2693_, v___x_2714_);
v_i_2693_ = v___x_2715_;
v_b_2694_ = v___x_2713_;
goto _start;
}
else
{
lean_dec(v_declName_2690_);
return v___x_2712_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__1___boxed(lean_object* v___x_2717_, lean_object* v_declName_2718_, lean_object* v_as_2719_, lean_object* v_sz_2720_, lean_object* v_i_2721_, lean_object* v_b_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
size_t v_sz_boxed_2730_; size_t v_i_boxed_2731_; lean_object* v_res_2732_; 
v_sz_boxed_2730_ = lean_unbox_usize(v_sz_2720_);
lean_dec(v_sz_2720_);
v_i_boxed_2731_ = lean_unbox_usize(v_i_2721_);
lean_dec(v_i_2721_);
v_res_2732_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__1(v___x_2717_, v_declName_2718_, v_as_2719_, v_sz_boxed_2730_, v_i_boxed_2731_, v_b_2722_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec_ref(v_as_2719_);
lean_dec_ref(v___x_2717_);
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___redArg(lean_object* v_a_2733_, lean_object* v_x_2734_){
_start:
{
if (lean_obj_tag(v_x_2734_) == 0)
{
lean_object* v___x_2735_; 
v___x_2735_ = lean_box(0);
return v___x_2735_;
}
else
{
lean_object* v_key_2736_; lean_object* v_value_2737_; lean_object* v_tail_2738_; uint8_t v___x_2739_; 
v_key_2736_ = lean_ctor_get(v_x_2734_, 0);
v_value_2737_ = lean_ctor_get(v_x_2734_, 1);
v_tail_2738_ = lean_ctor_get(v_x_2734_, 2);
v___x_2739_ = lean_name_eq(v_key_2736_, v_a_2733_);
if (v___x_2739_ == 0)
{
v_x_2734_ = v_tail_2738_;
goto _start;
}
else
{
lean_object* v___x_2741_; 
lean_inc(v_value_2737_);
v___x_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2741_, 0, v_value_2737_);
return v___x_2741_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_a_2742_, lean_object* v_x_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___redArg(v_a_2742_, v_x_2743_);
lean_dec(v_x_2743_);
lean_dec(v_a_2742_);
return v_res_2744_;
}
}
static uint64_t _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2745_; uint64_t v___x_2746_; 
v___x_2745_ = lean_unsigned_to_nat(1723u);
v___x_2746_ = lean_uint64_of_nat(v___x_2745_);
return v___x_2746_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg(lean_object* v_m_2747_, lean_object* v_a_2748_){
_start:
{
lean_object* v_buckets_2749_; lean_object* v___x_2750_; uint64_t v___y_2752_; 
v_buckets_2749_ = lean_ctor_get(v_m_2747_, 1);
v___x_2750_ = lean_array_get_size(v_buckets_2749_);
if (lean_obj_tag(v_a_2748_) == 0)
{
uint64_t v___x_2766_; 
v___x_2766_ = lean_uint64_once(&l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___closed__0);
v___y_2752_ = v___x_2766_;
goto v___jp_2751_;
}
else
{
uint64_t v_hash_2767_; 
v_hash_2767_ = lean_ctor_get_uint64(v_a_2748_, sizeof(void*)*2);
v___y_2752_ = v_hash_2767_;
goto v___jp_2751_;
}
v___jp_2751_:
{
uint64_t v___x_2753_; uint64_t v___x_2754_; uint64_t v_fold_2755_; uint64_t v___x_2756_; uint64_t v___x_2757_; uint64_t v___x_2758_; size_t v___x_2759_; size_t v___x_2760_; size_t v___x_2761_; size_t v___x_2762_; size_t v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2753_ = 32ULL;
v___x_2754_ = lean_uint64_shift_right(v___y_2752_, v___x_2753_);
v_fold_2755_ = lean_uint64_xor(v___y_2752_, v___x_2754_);
v___x_2756_ = 16ULL;
v___x_2757_ = lean_uint64_shift_right(v_fold_2755_, v___x_2756_);
v___x_2758_ = lean_uint64_xor(v_fold_2755_, v___x_2757_);
v___x_2759_ = lean_uint64_to_usize(v___x_2758_);
v___x_2760_ = lean_usize_of_nat(v___x_2750_);
v___x_2761_ = ((size_t)1ULL);
v___x_2762_ = lean_usize_sub(v___x_2760_, v___x_2761_);
v___x_2763_ = lean_usize_land(v___x_2759_, v___x_2762_);
v___x_2764_ = lean_array_uget_borrowed(v_buckets_2749_, v___x_2763_);
v___x_2765_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___redArg(v_a_2748_, v___x_2764_);
return v___x_2765_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg___boxed(lean_object* v_m_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v_res_2770_; 
v_res_2770_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg(v_m_2768_, v_a_2769_);
lean_dec(v_a_2769_);
lean_dec_ref(v_m_2768_);
return v_res_2770_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_alloc_closure((void*)(l_Lean_Name_beq___boxed), 2, 0);
return v___x_2771_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = lean_alloc_closure((void*)(l_Lean_Name_hash___override___boxed), 1, 0);
return v___x_2772_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2773_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__1, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__1_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__1);
v___x_2774_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__0, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__0_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__0);
v___x_2775_ = l_Std_HashMap_instInhabited(lean_box(0), lean_box(0), v___x_2774_, v___x_2773_);
return v___x_2775_;
}
}
static lean_object* _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2776_ = lean_unsigned_to_nat(0u);
v___x_2777_ = lean_mk_empty_array_with_capacity(v___x_2776_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0(lean_object* v_declName_2778_, uint8_t v_isMeta_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
lean_object* v___x_2787_; lean_object* v_env_2791_; lean_object* v___y_2793_; lean_object* v___x_2806_; 
v___x_2787_ = lean_st_ref_get(v___y_2785_);
v_env_2791_ = lean_ctor_get(v___x_2787_, 0);
lean_inc_ref(v_env_2791_);
lean_dec(v___x_2787_);
v___x_2806_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2791_, v_declName_2778_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_dec_ref(v_env_2791_);
lean_dec(v_declName_2778_);
goto v___jp_2788_;
}
else
{
lean_object* v_val_2807_; lean_object* v___x_2808_; lean_object* v_modules_2809_; lean_object* v___x_2810_; uint8_t v___x_2811_; 
v_val_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_val_2807_);
lean_dec_ref(v___x_2806_);
v___x_2808_ = l_Lean_Environment_header(v_env_2791_);
v_modules_2809_ = lean_ctor_get(v___x_2808_, 3);
lean_inc_ref(v_modules_2809_);
lean_dec_ref(v___x_2808_);
v___x_2810_ = lean_array_get_size(v_modules_2809_);
v___x_2811_ = lean_nat_dec_lt(v_val_2807_, v___x_2810_);
if (v___x_2811_ == 0)
{
lean_dec_ref(v_modules_2809_);
lean_dec(v_val_2807_);
lean_dec_ref(v_env_2791_);
lean_dec(v_declName_2778_);
goto v___jp_2788_;
}
else
{
lean_object* v___x_2812_; lean_object* v_env_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; uint8_t v___y_2817_; 
v___x_2812_ = lean_st_ref_get(v___y_2785_);
v_env_2813_ = lean_ctor_get(v___x_2812_, 0);
lean_inc_ref(v_env_2813_);
lean_dec(v___x_2812_);
v___x_2814_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__2, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__2_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__2);
v___x_2815_ = lean_array_fget(v_modules_2809_, v_val_2807_);
lean_dec(v_val_2807_);
lean_dec_ref(v_modules_2809_);
if (v_isMeta_2779_ == 0)
{
lean_dec_ref(v_env_2813_);
v___y_2817_ = v_isMeta_2779_;
goto v___jp_2816_;
}
else
{
uint8_t v___x_2828_; 
lean_inc(v_declName_2778_);
v___x_2828_ = l_Lean_isMarkedMeta(v_env_2813_, v_declName_2778_);
if (v___x_2828_ == 0)
{
v___y_2817_ = v_isMeta_2779_;
goto v___jp_2816_;
}
else
{
uint8_t v___x_2829_; 
v___x_2829_ = 0;
v___y_2817_ = v___x_2829_;
goto v___jp_2816_;
}
}
v___jp_2816_:
{
lean_object* v_toImport_2818_; lean_object* v_module_2819_; lean_object* v___x_2820_; 
v_toImport_2818_ = lean_ctor_get(v___x_2815_, 0);
lean_inc_ref(v_toImport_2818_);
lean_dec(v___x_2815_);
v_module_2819_ = lean_ctor_get(v_toImport_2818_, 0);
lean_inc(v_module_2819_);
lean_dec_ref(v_toImport_2818_);
lean_inc(v_declName_2778_);
v___x_2820_ = l___private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0(v_module_2819_, v___y_2817_, v_declName_2778_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_);
if (lean_obj_tag(v___x_2820_) == 0)
{
lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; 
lean_dec_ref(v___x_2820_);
v___x_2821_ = l_Lean_indirectModUseExt;
v___x_2822_ = lean_box(1);
v___x_2823_ = lean_box(0);
lean_inc_ref(v_env_2791_);
v___x_2824_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_2814_, v___x_2821_, v_env_2791_, v___x_2822_, v___x_2823_);
v___x_2825_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg(v___x_2824_, v_declName_2778_);
lean_dec(v___x_2824_);
if (lean_obj_tag(v___x_2825_) == 0)
{
lean_object* v___x_2826_; 
v___x_2826_ = lean_obj_once(&l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__3, &l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__3_once, _init_l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___closed__3);
v___y_2793_ = v___x_2826_;
goto v___jp_2792_;
}
else
{
lean_object* v_val_2827_; 
v_val_2827_ = lean_ctor_get(v___x_2825_, 0);
lean_inc(v_val_2827_);
lean_dec_ref(v___x_2825_);
v___y_2793_ = v_val_2827_;
goto v___jp_2792_;
}
}
else
{
lean_dec_ref(v_env_2791_);
lean_dec(v_declName_2778_);
return v___x_2820_;
}
}
}
}
v___jp_2788_:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; 
v___x_2789_ = lean_box(0);
v___x_2790_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2790_, 0, v___x_2789_);
return v___x_2790_;
}
v___jp_2792_:
{
lean_object* v___x_2794_; size_t v_sz_2795_; size_t v___x_2796_; lean_object* v___x_2797_; 
v___x_2794_ = lean_box(0);
v_sz_2795_ = lean_array_size(v___y_2793_);
v___x_2796_ = ((size_t)0ULL);
v___x_2797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__1(v_env_2791_, v_declName_2778_, v___y_2793_, v_sz_2795_, v___x_2796_, v___x_2794_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_);
lean_dec_ref(v___y_2793_);
lean_dec_ref(v_env_2791_);
if (lean_obj_tag(v___x_2797_) == 0)
{
lean_object* v___x_2799_; uint8_t v_isShared_2800_; uint8_t v_isSharedCheck_2804_; 
v_isSharedCheck_2804_ = !lean_is_exclusive(v___x_2797_);
if (v_isSharedCheck_2804_ == 0)
{
lean_object* v_unused_2805_; 
v_unused_2805_ = lean_ctor_get(v___x_2797_, 0);
lean_dec(v_unused_2805_);
v___x_2799_ = v___x_2797_;
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
else
{
lean_dec(v___x_2797_);
v___x_2799_ = lean_box(0);
v_isShared_2800_ = v_isSharedCheck_2804_;
goto v_resetjp_2798_;
}
v_resetjp_2798_:
{
lean_object* v___x_2802_; 
if (v_isShared_2800_ == 0)
{
lean_ctor_set(v___x_2799_, 0, v___x_2794_);
v___x_2802_ = v___x_2799_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2803_; 
v_reuseFailAlloc_2803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2803_, 0, v___x_2794_);
v___x_2802_ = v_reuseFailAlloc_2803_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
return v___x_2802_;
}
}
}
else
{
return v___x_2797_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0___boxed(lean_object* v_declName_2830_, lean_object* v_isMeta_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
uint8_t v_isMeta_boxed_2839_; lean_object* v_res_2840_; 
v_isMeta_boxed_2839_ = lean_unbox(v_isMeta_2831_);
v_res_2840_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0(v_declName_2830_, v_isMeta_boxed_2839_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec_ref(v___y_2832_);
return v_res_2840_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__0(void){
_start:
{
lean_object* v___x_2841_; 
v___x_2841_ = lean_mk_string_unchecked("Error evaluating configuration\n", 31, 31);
return v___x_2841_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__1(void){
_start:
{
lean_object* v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__0, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__0);
v___x_2843_ = l_Lean_stringToMessageData(v___x_2842_);
return v___x_2843_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__2(void){
_start:
{
lean_object* v___x_2844_; 
v___x_2844_ = lean_mk_string_unchecked("\n\nException: ", 13, 13);
return v___x_2844_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__3(void){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2845_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__2, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__2);
v___x_2846_ = l_Lean_stringToMessageData(v___x_2845_);
return v___x_2846_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__4(void){
_start:
{
lean_object* v___x_2847_; 
v___x_2847_ = lean_mk_string_unchecked("Configuration contains `sorry`", 30, 30);
return v___x_2847_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__5(void){
_start:
{
lean_object* v___x_2848_; lean_object* v___x_2849_; 
v___x_2848_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__4, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__4_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__4);
v___x_2849_ = l_Lean_stringToMessageData(v___x_2848_);
return v___x_2849_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6(void){
_start:
{
uint8_t v___x_2850_; lean_object* v___x_2851_; uint8_t v___x_2852_; uint8_t v___x_2853_; lean_object* v___x_2854_; 
v___x_2850_ = 0;
v___x_2851_ = lean_box(0);
v___x_2852_ = 1;
v___x_2853_ = 2;
v___x_2854_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_2854_, 0, v___x_2851_);
lean_ctor_set_uint8(v___x_2854_, sizeof(void*)*1, v___x_2853_);
lean_ctor_set_uint8(v___x_2854_, sizeof(void*)*1 + 1, v___x_2852_);
lean_ctor_set_uint8(v___x_2854_, sizeof(void*)*1 + 2, v___x_2850_);
return v___x_2854_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__7(void){
_start:
{
lean_object* v___x_2855_; 
v___x_2855_ = lean_mk_string_unchecked("Error evaluating configuration: Environment does not yet contain type ", 70, 70);
return v___x_2855_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__8(void){
_start:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2856_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__7, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__7);
v___x_2857_ = l_Lean_stringToMessageData(v___x_2856_);
return v___x_2857_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__9(void){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_, &l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once, _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_);
v___x_2859_ = l_Lean_MessageData_ofName(v___x_2858_);
return v___x_2859_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__10(void){
_start:
{
lean_object* v___x_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; 
v___x_2860_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__9, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__9);
v___x_2861_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__8, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__8);
v___x_2862_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2862_, 0, v___x_2861_);
lean_ctor_set(v___x_2862_, 1, v___x_2860_);
return v___x_2862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg(lean_object* v_optConfig_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_){
_start:
{
lean_object* v___y_2873_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2881_; uint8_t v___y_2882_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2898_; lean_object* v___y_2899_; uint8_t v_recover_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; uint8_t v___x_2909_; uint8_t v___x_2910_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2916_; lean_object* v___y_2917_; 
v_recover_2904_ = lean_ctor_get_uint8(v_a_2864_, sizeof(void*)*1);
lean_inc(v_optConfig_2863_);
v___x_2905_ = l_Lean_Parser_Tactic_getConfigItems(v_optConfig_2863_);
v___x_2906_ = l_Lean_Elab_Tactic_mkConfigItemViews(v___x_2905_);
v___x_2907_ = lean_array_get_size(v___x_2906_);
v___x_2908_ = lean_unsigned_to_nat(0u);
v___x_2909_ = lean_nat_dec_eq(v___x_2907_, v___x_2908_);
v___x_2910_ = 1;
if (v___x_2909_ == 0)
{
lean_object* v___x_2958_; lean_object* v_fileName_2959_; lean_object* v_fileMap_2960_; lean_object* v_options_2961_; lean_object* v_currRecDepth_2962_; lean_object* v_maxRecDepth_2963_; lean_object* v_ref_2964_; lean_object* v_currNamespace_2965_; lean_object* v_openDecls_2966_; lean_object* v_initHeartbeats_2967_; lean_object* v_maxHeartbeats_2968_; lean_object* v_quotContext_2969_; lean_object* v_currMacroScope_2970_; uint8_t v_diag_2971_; lean_object* v_cancelTk_x3f_2972_; uint8_t v_suppressElabErrors_2973_; lean_object* v_inheritedTraceOptions_2974_; lean_object* v_env_2975_; lean_object* v_ref_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; uint8_t v___x_2979_; 
v___x_2958_ = lean_st_ref_get(v_a_2870_);
v_fileName_2959_ = lean_ctor_get(v_a_2869_, 0);
v_fileMap_2960_ = lean_ctor_get(v_a_2869_, 1);
v_options_2961_ = lean_ctor_get(v_a_2869_, 2);
v_currRecDepth_2962_ = lean_ctor_get(v_a_2869_, 3);
v_maxRecDepth_2963_ = lean_ctor_get(v_a_2869_, 4);
v_ref_2964_ = lean_ctor_get(v_a_2869_, 5);
v_currNamespace_2965_ = lean_ctor_get(v_a_2869_, 6);
v_openDecls_2966_ = lean_ctor_get(v_a_2869_, 7);
v_initHeartbeats_2967_ = lean_ctor_get(v_a_2869_, 8);
v_maxHeartbeats_2968_ = lean_ctor_get(v_a_2869_, 9);
v_quotContext_2969_ = lean_ctor_get(v_a_2869_, 10);
v_currMacroScope_2970_ = lean_ctor_get(v_a_2869_, 11);
v_diag_2971_ = lean_ctor_get_uint8(v_a_2869_, sizeof(void*)*14);
v_cancelTk_x3f_2972_ = lean_ctor_get(v_a_2869_, 12);
v_suppressElabErrors_2973_ = lean_ctor_get_uint8(v_a_2869_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2974_ = lean_ctor_get(v_a_2869_, 13);
v_env_2975_ = lean_ctor_get(v___x_2958_, 0);
lean_inc_ref(v_env_2975_);
lean_dec(v___x_2958_);
v_ref_2976_ = l_Lean_replaceRef(v_optConfig_2863_, v_ref_2964_);
lean_dec(v_optConfig_2863_);
lean_inc_ref(v_inheritedTraceOptions_2974_);
lean_inc(v_cancelTk_x3f_2972_);
lean_inc(v_currMacroScope_2970_);
lean_inc(v_quotContext_2969_);
lean_inc(v_maxHeartbeats_2968_);
lean_inc(v_initHeartbeats_2967_);
lean_inc(v_openDecls_2966_);
lean_inc(v_currNamespace_2965_);
lean_inc(v_maxRecDepth_2963_);
lean_inc(v_currRecDepth_2962_);
lean_inc_ref(v_options_2961_);
lean_inc_ref(v_fileMap_2960_);
lean_inc_ref(v_fileName_2959_);
v___x_2977_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2977_, 0, v_fileName_2959_);
lean_ctor_set(v___x_2977_, 1, v_fileMap_2960_);
lean_ctor_set(v___x_2977_, 2, v_options_2961_);
lean_ctor_set(v___x_2977_, 3, v_currRecDepth_2962_);
lean_ctor_set(v___x_2977_, 4, v_maxRecDepth_2963_);
lean_ctor_set(v___x_2977_, 5, v_ref_2976_);
lean_ctor_set(v___x_2977_, 6, v_currNamespace_2965_);
lean_ctor_set(v___x_2977_, 7, v_openDecls_2966_);
lean_ctor_set(v___x_2977_, 8, v_initHeartbeats_2967_);
lean_ctor_set(v___x_2977_, 9, v_maxHeartbeats_2968_);
lean_ctor_set(v___x_2977_, 10, v_quotContext_2969_);
lean_ctor_set(v___x_2977_, 11, v_currMacroScope_2970_);
lean_ctor_set(v___x_2977_, 12, v_cancelTk_x3f_2972_);
lean_ctor_set(v___x_2977_, 13, v_inheritedTraceOptions_2974_);
lean_ctor_set_uint8(v___x_2977_, sizeof(void*)*14, v_diag_2971_);
lean_ctor_set_uint8(v___x_2977_, sizeof(void*)*14 + 1, v_suppressElabErrors_2973_);
v___x_2978_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_, &l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once, _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_);
v___x_2979_ = l_Lean_Environment_contains(v_env_2975_, v___x_2978_, v___x_2910_);
if (v___x_2979_ == 0)
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v_a_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2989_; 
lean_dec_ref(v___x_2906_);
v___x_2980_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__10, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__10_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__10);
v___x_2981_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg(v___x_2980_, v_a_2865_, v_a_2866_, v_a_2867_, v_a_2868_, v___x_2977_, v_a_2870_);
lean_dec_ref(v___x_2977_);
v_a_2982_ = lean_ctor_get(v___x_2981_, 0);
v_isSharedCheck_2989_ = !lean_is_exclusive(v___x_2981_);
if (v_isSharedCheck_2989_ == 0)
{
v___x_2984_ = v___x_2981_;
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_a_2982_);
lean_dec(v___x_2981_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2989_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2987_; 
if (v_isShared_2985_ == 0)
{
v___x_2987_ = v___x_2984_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2988_; 
v_reuseFailAlloc_2988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2988_, 0, v_a_2982_);
v___x_2987_ = v_reuseFailAlloc_2988_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
return v___x_2987_;
}
}
}
else
{
v___y_2912_ = v_a_2865_;
v___y_2913_ = v_a_2866_;
v___y_2914_ = v_a_2867_;
v___y_2915_ = v_a_2868_;
v___y_2916_ = v___x_2977_;
v___y_2917_ = v_a_2870_;
goto v___jp_2911_;
}
}
else
{
lean_object* v___x_2990_; lean_object* v___x_2991_; 
lean_dec_ref(v___x_2906_);
lean_dec(v_optConfig_2863_);
v___x_2990_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6);
v___x_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2990_);
return v___x_2991_;
}
v___jp_2872_:
{
if (v___y_2882_ == 0)
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
lean_dec_ref(v___y_2877_);
v___x_2883_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__1, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__1);
v___x_2884_ = l_Lean_MessageData_ofExpr(v___y_2881_);
v___x_2885_ = l_Lean_indentD(v___x_2884_);
v___x_2886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2883_);
lean_ctor_set(v___x_2886_, 1, v___x_2885_);
v___x_2887_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__3, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__3);
v___x_2888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2888_, 0, v___x_2886_);
lean_ctor_set(v___x_2888_, 1, v___x_2887_);
v___x_2889_ = l_Lean_Exception_toMessageData(v___y_2879_);
v___x_2890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2890_, 0, v___x_2888_);
lean_ctor_set(v___x_2890_, 1, v___x_2889_);
v___x_2891_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg(v___x_2890_, v___y_2874_, v___y_2878_, v___y_2875_, v___y_2876_, v___y_2880_, v___y_2873_);
lean_dec_ref(v___y_2880_);
return v___x_2891_;
}
else
{
lean_dec_ref(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec_ref(v___y_2879_);
return v___y_2877_;
}
}
v___jp_2892_:
{
lean_object* v___x_2900_; 
lean_inc_ref(v___y_2893_);
v___x_2900_ = l_Lean_Elab_Tactic_evalUnsafe___redArg_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_(v___y_2893_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
if (lean_obj_tag(v___x_2900_) == 0)
{
lean_dec_ref(v___y_2898_);
lean_dec_ref(v___y_2893_);
return v___x_2900_;
}
else
{
lean_object* v_a_2901_; uint8_t v___x_2902_; 
v_a_2901_ = lean_ctor_get(v___x_2900_, 0);
lean_inc(v_a_2901_);
v___x_2902_ = l_Lean_Exception_isInterrupt(v_a_2901_);
if (v___x_2902_ == 0)
{
uint8_t v___x_2903_; 
lean_inc(v_a_2901_);
v___x_2903_ = l_Lean_Exception_isRuntime(v_a_2901_);
v___y_2873_ = v___y_2899_;
v___y_2874_ = v___y_2894_;
v___y_2875_ = v___y_2896_;
v___y_2876_ = v___y_2897_;
v___y_2877_ = v___x_2900_;
v___y_2878_ = v___y_2895_;
v___y_2879_ = v_a_2901_;
v___y_2880_ = v___y_2898_;
v___y_2881_ = v___y_2893_;
v___y_2882_ = v___x_2903_;
goto v___jp_2872_;
}
else
{
v___y_2873_ = v___y_2899_;
v___y_2874_ = v___y_2894_;
v___y_2875_ = v___y_2896_;
v___y_2876_ = v___y_2897_;
v___y_2877_ = v___x_2900_;
v___y_2878_ = v___y_2895_;
v___y_2879_ = v_a_2901_;
v___y_2880_ = v___y_2898_;
v___y_2881_ = v___y_2893_;
v___y_2882_ = v___x_2902_;
goto v___jp_2872_;
}
}
}
v___jp_2911_:
{
lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2918_ = lean_obj_once(&l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_, &l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3__once, _init_l_Lean_Elab_Tactic_evalUnsafe___redArg___closed__3_00___x40_Lean_Elab_Tactic_Rewrite_3461124123____hygCtx___hyg_3_);
v___x_2919_ = l_Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0(v___x_2918_, v___x_2910_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_);
if (lean_obj_tag(v___x_2919_) == 0)
{
lean_object* v___x_2920_; 
lean_dec_ref(v___x_2919_);
v___x_2920_ = l_Lean_Elab_Tactic_elabConfig(v_recover_2904_, v___x_2918_, v___x_2906_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_);
if (lean_obj_tag(v___x_2920_) == 0)
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2941_; 
v_a_2921_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2923_ = v___x_2920_;
v_isShared_2924_ = v_isSharedCheck_2941_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2920_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2941_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
uint8_t v___x_2925_; 
v___x_2925_ = l_Lean_Expr_hasSyntheticSorry(v_a_2921_);
if (v___x_2925_ == 0)
{
uint8_t v___x_2926_; 
lean_del_object(v___x_2923_);
v___x_2926_ = l_Lean_Expr_hasSorry(v_a_2921_);
if (v___x_2926_ == 0)
{
v___y_2893_ = v_a_2921_;
v___y_2894_ = v___y_2912_;
v___y_2895_ = v___y_2913_;
v___y_2896_ = v___y_2914_;
v___y_2897_ = v___y_2915_;
v___y_2898_ = v___y_2916_;
v___y_2899_ = v___y_2917_;
goto v___jp_2892_;
}
else
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
lean_dec(v_a_2921_);
v___x_2927_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__5, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__5);
v___x_2928_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg(v___x_2927_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_);
lean_dec_ref(v___y_2916_);
v_a_2929_ = lean_ctor_get(v___x_2928_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2928_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v___x_2928_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2928_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
else
{
lean_object* v___x_2937_; lean_object* v___x_2939_; 
lean_dec(v_a_2921_);
lean_dec_ref(v___y_2916_);
v___x_2937_ = lean_obj_once(&l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6, &l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_elabRewriteConfig___redArg___closed__6);
if (v_isShared_2924_ == 0)
{
lean_ctor_set(v___x_2923_, 0, v___x_2937_);
v___x_2939_ = v___x_2923_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v___x_2937_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
else
{
lean_object* v_a_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2949_; 
lean_dec_ref(v___y_2916_);
v_a_2942_ = lean_ctor_get(v___x_2920_, 0);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2920_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2944_ = v___x_2920_;
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_a_2942_);
lean_dec(v___x_2920_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2949_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2947_; 
if (v_isShared_2945_ == 0)
{
v___x_2947_ = v___x_2944_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_a_2942_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
else
{
lean_object* v_a_2950_; lean_object* v___x_2952_; uint8_t v_isShared_2953_; uint8_t v_isSharedCheck_2957_; 
lean_dec_ref(v___y_2916_);
lean_dec_ref(v___x_2906_);
v_a_2950_ = lean_ctor_get(v___x_2919_, 0);
v_isSharedCheck_2957_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2957_ == 0)
{
v___x_2952_ = v___x_2919_;
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
else
{
lean_inc(v_a_2950_);
lean_dec(v___x_2919_);
v___x_2952_ = lean_box(0);
v_isShared_2953_ = v_isSharedCheck_2957_;
goto v_resetjp_2951_;
}
v_resetjp_2951_:
{
lean_object* v___x_2955_; 
if (v_isShared_2953_ == 0)
{
v___x_2955_ = v___x_2952_;
goto v_reusejp_2954_;
}
else
{
lean_object* v_reuseFailAlloc_2956_; 
v_reuseFailAlloc_2956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2956_, 0, v_a_2950_);
v___x_2955_ = v_reuseFailAlloc_2956_;
goto v_reusejp_2954_;
}
v_reusejp_2954_:
{
return v___x_2955_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___redArg___boxed(lean_object* v_optConfig_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v_a_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l_Lean_Elab_Tactic_elabRewriteConfig___redArg(v_optConfig_2992_, v_a_2993_, v_a_2994_, v_a_2995_, v_a_2996_, v_a_2997_, v_a_2998_, v_a_2999_);
lean_dec(v_a_2999_);
lean_dec_ref(v_a_2998_);
lean_dec(v_a_2997_);
lean_dec_ref(v_a_2996_);
lean_dec(v_a_2995_);
lean_dec_ref(v_a_2994_);
lean_dec_ref(v_a_2993_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig(lean_object* v_optConfig_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_){
_start:
{
lean_object* v___x_3012_; 
v___x_3012_ = l_Lean_Elab_Tactic_elabRewriteConfig___redArg(v_optConfig_3002_, v_a_3003_, v_a_3005_, v_a_3006_, v_a_3007_, v_a_3008_, v_a_3009_, v_a_3010_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabRewriteConfig___boxed(lean_object* v_optConfig_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_, lean_object* v_a_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = l_Lean_Elab_Tactic_elabRewriteConfig(v_optConfig_3013_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_, v_a_3019_, v_a_3020_, v_a_3021_);
lean_dec(v_a_3021_);
lean_dec_ref(v_a_3020_);
lean_dec(v_a_3019_);
lean_dec_ref(v_a_3018_);
lean_dec(v_a_3017_);
lean_dec_ref(v_a_3016_);
lean_dec(v_a_3015_);
lean_dec_ref(v_a_3014_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1(lean_object* v_00_u03b1_3024_, lean_object* v_msg_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_){
_start:
{
lean_object* v___x_3033_; 
v___x_3033_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___redArg(v_msg_3025_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_);
return v___x_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1___boxed(lean_object* v_00_u03b1_3034_, lean_object* v_msg_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v_res_3043_; 
v_res_3043_ = l_Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1(v_00_u03b1_3034_, v_msg_3035_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_, v___y_3041_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v___y_3039_);
lean_dec_ref(v___y_3038_);
lean_dec(v___y_3037_);
lean_dec_ref(v___y_3036_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2(lean_object* v_00_u03b2_3044_, lean_object* v_m_3045_, lean_object* v_a_3046_){
_start:
{
lean_object* v___x_3047_; 
v___x_3047_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___redArg(v_m_3045_, v_a_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2___boxed(lean_object* v_00_u03b2_3048_, lean_object* v_m_3049_, lean_object* v_a_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2(v_00_u03b2_3048_, v_m_3049_, v_a_3050_);
lean_dec(v_a_3050_);
lean_dec_ref(v_m_3049_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4(lean_object* v_msgData_3052_, lean_object* v_macroStack_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_){
_start:
{
lean_object* v___x_3061_; 
v___x_3061_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___redArg(v_msgData_3052_, v_macroStack_3053_, v___y_3058_);
return v___x_3061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4___boxed(lean_object* v_msgData_3062_, lean_object* v_macroStack_3063_, lean_object* v___y_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__1_spec__4(v_msgData_3062_, v_macroStack_3063_, v___y_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec_ref(v___y_3066_);
lean_dec(v___y_3065_);
lean_dec_ref(v___y_3064_);
return v_res_3071_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3072_, lean_object* v_x_3073_, lean_object* v_x_3074_){
_start:
{
uint8_t v___x_3075_; 
v___x_3075_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___redArg(v_x_3073_, v_x_3074_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3076_, lean_object* v_x_3077_, lean_object* v_x_3078_){
_start:
{
uint8_t v_res_3079_; lean_object* v_r_3080_; 
v_res_3079_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1(v_00_u03b2_3076_, v_x_3077_, v_x_3078_);
lean_dec_ref(v_x_3078_);
lean_dec_ref(v_x_3077_);
v_r_3080_ = lean_box(v_res_3079_);
return v_r_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2(lean_object* v_cls_3081_, lean_object* v_msg_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v___x_3090_; 
v___x_3090_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___redArg(v_cls_3081_, v_msg_3082_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
return v___x_3090_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2___boxed(lean_object* v_cls_3091_, lean_object* v_msg_3092_, lean_object* v___y_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_){
_start:
{
lean_object* v_res_3100_; 
v_res_3100_ = l_Lean_addTrace___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__2(v_cls_3091_, v_msg_3092_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
lean_dec(v___y_3094_);
lean_dec_ref(v___y_3093_);
return v_res_3100_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_3101_, lean_object* v_a_3102_, lean_object* v_x_3103_){
_start:
{
lean_object* v___x_3104_; 
v___x_3104_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___redArg(v_a_3102_, v_x_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_3105_, lean_object* v_a_3106_, lean_object* v_x_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__2_spec__5(v_00_u03b2_3105_, v_a_3106_, v_x_3107_);
lean_dec(v_x_3107_);
lean_dec(v_a_3106_);
return v_res_3108_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3109_, lean_object* v_x_3110_, size_t v_x_3111_, lean_object* v_x_3112_){
_start:
{
uint8_t v___x_3113_; 
v___x_3113_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___redArg(v_x_3110_, v_x_3111_, v_x_3112_);
return v___x_3113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_3114_, lean_object* v_x_3115_, lean_object* v_x_3116_, lean_object* v_x_3117_){
_start:
{
size_t v_x_13067__boxed_3118_; uint8_t v_res_3119_; lean_object* v_r_3120_; 
v_x_13067__boxed_3118_ = lean_unbox_usize(v_x_3116_);
lean_dec(v_x_3116_);
v_res_3119_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_3114_, v_x_3115_, v_x_13067__boxed_3118_, v_x_3117_);
lean_dec_ref(v_x_3117_);
lean_dec_ref(v_x_3115_);
v_r_3120_ = lean_box(v_res_3119_);
return v_r_3120_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_3121_, lean_object* v_keys_3122_, lean_object* v_vals_3123_, lean_object* v_heq_3124_, lean_object* v_i_3125_, lean_object* v_k_3126_){
_start:
{
uint8_t v___x_3127_; 
v___x_3127_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___redArg(v_keys_3122_, v_i_3125_, v_k_3126_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8___boxed(lean_object* v_00_u03b2_3128_, lean_object* v_keys_3129_, lean_object* v_vals_3130_, lean_object* v_heq_3131_, lean_object* v_i_3132_, lean_object* v_k_3133_){
_start:
{
uint8_t v_res_3134_; lean_object* v_r_3135_; 
v_res_3134_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_ExtraModUses_0__Lean_recordExtraModUseCore___at___00Lean_recordExtraModUseFromDecl___at___00Lean_Elab_Tactic_elabRewriteConfig_spec__0_spec__0_spec__1_spec__3_spec__8(v_00_u03b2_3128_, v_keys_3129_, v_vals_3130_, v_heq_3131_, v_i_3132_, v_k_3133_);
lean_dec_ref(v_k_3133_);
lean_dec_ref(v_vals_3130_);
lean_dec_ref(v_keys_3129_);
v_r_3135_ = lean_box(v_res_3134_);
return v_r_3135_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3136_; 
v___x_3136_ = lean_mk_string_unchecked("rewrite", 7, 7);
return v___x_3136_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3137_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__0, &l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__0);
v___x_3138_ = l_Lean_Name_mkStr1(v___x_3137_);
return v___x_3138_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3139_; 
v___x_3139_ = lean_mk_string_unchecked("Did not find an occurrence of the pattern in the current goal", 61, 61);
return v___x_3139_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__2, &l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__2);
v___x_3141_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3140_);
return v___x_3141_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3142_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__3, &l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__3);
v___x_3143_ = l_Lean_MessageData_ofFormat(v___x_3142_);
return v___x_3143_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3144_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__4, &l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__4_once, _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__4);
v___x_3145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
return v___x_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0(lean_object* v_x_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_){
_start:
{
lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; 
v___x_3156_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__1, &l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__1);
v___x_3157_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__5, &l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__5_once, _init_l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___closed__5);
v___x_3158_ = l_Lean_Meta_throwTacticEx___redArg(v___x_3156_, v_x_3146_, v___x_3157_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___boxed(lean_object* v_x_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_){
_start:
{
lean_object* v_res_3169_; 
v_res_3169_ = l_Lean_Elab_Tactic_evalRewriteSeq___lam__0(v_x_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec(v___y_3165_);
lean_dec_ref(v___y_3164_);
lean_dec(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
return v_res_3169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__1(lean_object* v_term_3170_, uint8_t v_symm_3171_, lean_object* v_a_3172_, lean_object* v_x_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_, lean_object* v___y_3181_){
_start:
{
lean_object* v___x_3183_; 
v___x_3183_ = l_Lean_Elab_Tactic_rewriteLocalDecl(v_term_3170_, v_symm_3171_, v_x_3173_, v_a_3172_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, v___y_3181_);
return v___x_3183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__1___boxed(lean_object* v_term_3184_, lean_object* v_symm_3185_, lean_object* v_a_3186_, lean_object* v_x_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_){
_start:
{
uint8_t v_symm_boxed_3197_; lean_object* v_res_3198_; 
v_symm_boxed_3197_ = lean_unbox(v_symm_3185_);
v_res_3198_ = l_Lean_Elab_Tactic_evalRewriteSeq___lam__1(v_term_3184_, v_symm_boxed_3197_, v_a_3186_, v_x_3187_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_, v___y_3194_, v___y_3195_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3189_);
lean_dec_ref(v___y_3188_);
return v_res_3198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__2(lean_object* v_a_3199_, lean_object* v___x_3200_, lean_object* v___f_3201_, uint8_t v_symm_3202_, lean_object* v_term_3203_, lean_object* v___y_3204_, lean_object* v___y_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
lean_object* v___x_3213_; lean_object* v___f_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3213_ = lean_box(v_symm_3202_);
lean_inc_ref(v_a_3199_);
lean_inc(v_term_3203_);
v___f_3214_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewriteSeq___lam__1___boxed), 13, 3);
lean_closure_set(v___f_3214_, 0, v_term_3203_);
lean_closure_set(v___f_3214_, 1, v___x_3213_);
lean_closure_set(v___f_3214_, 2, v_a_3199_);
v___x_3215_ = lean_box(v_symm_3202_);
v___x_3216_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_rewriteTarget___boxed), 12, 3);
lean_closure_set(v___x_3216_, 0, v_term_3203_);
lean_closure_set(v___x_3216_, 1, v___x_3215_);
lean_closure_set(v___x_3216_, 2, v_a_3199_);
v___x_3217_ = l_Lean_Elab_Tactic_withLocation(v___x_3200_, v___f_3214_, v___x_3216_, v___f_3201_, v___y_3204_, v___y_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___lam__2___boxed(lean_object* v_a_3218_, lean_object* v___x_3219_, lean_object* v___f_3220_, lean_object* v_symm_3221_, lean_object* v_term_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_){
_start:
{
uint8_t v_symm_boxed_3232_; lean_object* v_res_3233_; 
v_symm_boxed_3232_ = lean_unbox(v_symm_3221_);
v_res_3233_ = l_Lean_Elab_Tactic_evalRewriteSeq___lam__2(v_a_3218_, v___x_3219_, v___f_3220_, v_symm_boxed_3232_, v_term_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v___y_3224_);
lean_dec_ref(v___y_3223_);
lean_dec(v___x_3219_);
return v_res_3233_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRewriteSeq___closed__0(void){
_start:
{
lean_object* v___f_3234_; 
v___f_3234_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewriteSeq___lam__0___boxed), 10, 0);
return v___f_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq(lean_object* v_stx_3235_, lean_object* v_a_3236_, lean_object* v_a_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v___x_3245_ = lean_unsigned_to_nat(1u);
v___x_3246_ = l_Lean_Syntax_getArg(v_stx_3235_, v___x_3245_);
v___x_3247_ = l_Lean_Elab_Tactic_elabRewriteConfig___redArg(v___x_3246_, v_a_3236_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_);
if (lean_obj_tag(v___x_3247_) == 0)
{
lean_object* v_a_3248_; lean_object* v___f_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___f_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v_a_3248_ = lean_ctor_get(v___x_3247_, 0);
lean_inc(v_a_3248_);
lean_dec_ref(v___x_3247_);
v___f_3249_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRewriteSeq___closed__0, &l_Lean_Elab_Tactic_evalRewriteSeq___closed__0_once, _init_l_Lean_Elab_Tactic_evalRewriteSeq___closed__0);
v___x_3250_ = lean_unsigned_to_nat(3u);
v___x_3251_ = l_Lean_Syntax_getArg(v_stx_3235_, v___x_3250_);
v___x_3252_ = l_Lean_Elab_Tactic_expandOptLocation(v___x_3251_);
lean_dec(v___x_3251_);
v___f_3253_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewriteSeq___lam__2___boxed), 14, 3);
lean_closure_set(v___f_3253_, 0, v_a_3248_);
lean_closure_set(v___f_3253_, 1, v___x_3252_);
lean_closure_set(v___f_3253_, 2, v___f_3249_);
v___x_3254_ = lean_unsigned_to_nat(0u);
v___x_3255_ = l_Lean_Syntax_getArg(v_stx_3235_, v___x_3254_);
v___x_3256_ = lean_unsigned_to_nat(2u);
v___x_3257_ = l_Lean_Syntax_getArg(v_stx_3235_, v___x_3256_);
v___x_3258_ = l_Lean_Elab_Tactic_withRWRulesSeq(v___x_3255_, v___x_3257_, v___f_3253_, v_a_3236_, v_a_3237_, v_a_3238_, v_a_3239_, v_a_3240_, v_a_3241_, v_a_3242_, v_a_3243_);
lean_dec(v___x_3257_);
return v___x_3258_;
}
else
{
lean_object* v_a_3259_; lean_object* v___x_3261_; uint8_t v_isShared_3262_; uint8_t v_isSharedCheck_3266_; 
v_a_3259_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3266_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3266_ == 0)
{
v___x_3261_ = v___x_3247_;
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
else
{
lean_inc(v_a_3259_);
lean_dec(v___x_3247_);
v___x_3261_ = lean_box(0);
v_isShared_3262_ = v_isSharedCheck_3266_;
goto v_resetjp_3260_;
}
v_resetjp_3260_:
{
lean_object* v___x_3264_; 
if (v_isShared_3262_ == 0)
{
v___x_3264_ = v___x_3261_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3265_; 
v_reuseFailAlloc_3265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3265_, 0, v_a_3259_);
v___x_3264_ = v_reuseFailAlloc_3265_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
return v___x_3264_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRewriteSeq___boxed(lean_object* v_stx_3267_, lean_object* v_a_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_, lean_object* v_a_3271_, lean_object* v_a_3272_, lean_object* v_a_3273_, lean_object* v_a_3274_, lean_object* v_a_3275_, lean_object* v_a_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Lean_Elab_Tactic_evalRewriteSeq(v_stx_3267_, v_a_3268_, v_a_3269_, v_a_3270_, v_a_3271_, v_a_3272_, v_a_3273_, v_a_3274_, v_a_3275_);
lean_dec(v_a_3275_);
lean_dec_ref(v_a_3274_);
lean_dec(v_a_3273_);
lean_dec_ref(v_a_3272_);
lean_dec(v_a_3271_);
lean_dec_ref(v_a_3270_);
lean_dec(v_a_3269_);
lean_dec_ref(v_a_3268_);
lean_dec(v_stx_3267_);
return v_res_3277_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0(void){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_3278_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__1(void){
_start:
{
lean_object* v___x_3279_; 
v___x_3279_ = lean_mk_string_unchecked("rewriteSeq", 10, 10);
return v___x_3279_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__2(void){
_start:
{
lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3280_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__1, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__1);
v___x_3281_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0);
v___x_3282_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__1);
v___x_3283_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0);
v___x_3284_ = l_Lean_Name_mkStr4(v___x_3283_, v___x_3282_, v___x_3281_, v___x_3280_);
return v___x_3284_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__3(void){
_start:
{
lean_object* v___x_3285_; 
v___x_3285_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_3285_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__4(void){
_start:
{
lean_object* v___x_3286_; 
v___x_3286_ = lean_mk_string_unchecked("evalRewriteSeq", 14, 14);
return v___x_3286_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5(void){
_start:
{
lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v___x_3287_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__4, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__4_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__4);
v___x_3288_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__0);
v___x_3289_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__3, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__3);
v___x_3290_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_Tactic_withRWRulesSeq_spec__1___redArg___lam__3___closed__0);
v___x_3291_ = l_Lean_Name_mkStr4(v___x_3290_, v___x_3289_, v___x_3288_, v___x_3287_);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1(){
_start:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; 
v___x_3293_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3294_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__2, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__2);
v___x_3295_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5);
v___x_3296_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRewriteSeq___boxed), 10, 0);
v___x_3297_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3293_, v___x_3294_, v___x_3295_, v___x_3296_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___boxed(lean_object* v_a_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1();
return v_res_3299_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v___x_3300_ = lean_unsigned_to_nat(48u);
v___x_3301_ = lean_unsigned_to_nat(71u);
v___x_3302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3302_, 0, v___x_3301_);
lean_ctor_set(v___x_3302_, 1, v___x_3300_);
return v___x_3302_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; 
v___x_3303_ = lean_unsigned_to_nat(91u);
v___x_3304_ = lean_unsigned_to_nat(78u);
v___x_3305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3305_, 0, v___x_3304_);
lean_ctor_set(v___x_3305_, 1, v___x_3303_);
return v___x_3305_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; 
v___x_3306_ = lean_unsigned_to_nat(91u);
v___x_3307_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__1);
v___x_3308_ = lean_unsigned_to_nat(48u);
v___x_3309_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__0);
v___x_3310_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3310_, 0, v___x_3309_);
lean_ctor_set(v___x_3310_, 1, v___x_3308_);
lean_ctor_set(v___x_3310_, 2, v___x_3307_);
lean_ctor_set(v___x_3310_, 3, v___x_3306_);
return v___x_3310_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; 
v___x_3311_ = lean_unsigned_to_nat(52u);
v___x_3312_ = lean_unsigned_to_nat(71u);
v___x_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3312_);
lean_ctor_set(v___x_3313_, 1, v___x_3311_);
return v___x_3313_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
v___x_3314_ = lean_unsigned_to_nat(66u);
v___x_3315_ = lean_unsigned_to_nat(71u);
v___x_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3316_, 0, v___x_3315_);
lean_ctor_set(v___x_3316_, 1, v___x_3314_);
return v___x_3316_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v___x_3317_ = lean_unsigned_to_nat(66u);
v___x_3318_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__4);
v___x_3319_ = lean_unsigned_to_nat(52u);
v___x_3320_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__3);
v___x_3321_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3321_, 0, v___x_3320_);
lean_ctor_set(v___x_3321_, 1, v___x_3319_);
lean_ctor_set(v___x_3321_, 2, v___x_3318_);
lean_ctor_set(v___x_3321_, 3, v___x_3317_);
return v___x_3321_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v___x_3322_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__5);
v___x_3323_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__2);
v___x_3324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
lean_ctor_set(v___x_3324_, 1, v___x_3322_);
return v___x_3324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3(){
_start:
{
lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; 
v___x_3326_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1___closed__5);
v___x_3327_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___closed__6);
v___x_3328_ = l_Lean_addBuiltinDeclarationRanges(v___x_3326_, v___x_3327_);
return v___x_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3___boxed(lean_object* v_a_3329_){
_start:
{
lean_object* v_res_3330_; 
v_res_3330_ = l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3();
return v_res_3330_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Eqns(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Rewrite_0__Lean_Elab_Tactic_evalRewriteSeq___regBuiltin_Lean_Elab_Tactic_evalRewriteSeq_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Location(uint8_t builtin);
lean_object* initialize_Lean_Meta_Eqns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Location(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
