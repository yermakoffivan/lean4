// Lean compiler output
// Module: Lean.Elab.Tactic.ElabTerm
// Imports: public import Lean.Meta.Tactic.Constructor public import Lean.Meta.Tactic.Assert public import Lean.Meta.Tactic.Cleanup public import Lean.Meta.Tactic.Rename public import Lean.Elab.Tactic.Config
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Elab_Term_PostponeBehavior_ofBool(uint8_t);
lean_object* l_Lean_Elab_Term_synthesizeSyntheticMVars(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isIdent(lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_checked_assign(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortTacticExceptionId;
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_throwTypeMismatchError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_tagUntaggedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_MetavarKind_isNatural(uint8_t);
lean_object* l_Lean_Elab_Term_isLetRecAuxMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_mkMVar(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_popMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pushGoal___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_constructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Elab_Tactic_withoutRecover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_saveState___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_SavedState_restore___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_MVarId_rename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadMCtxMetaM;
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalExact___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExact___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalExact___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExact___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalExact___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExact___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalExact___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExact___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_evalExact___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExact___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_evalExact___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalExact___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_refineCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalRefine___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRefine___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRefine___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRefine___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRefine___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRefine___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalRefine_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRefine_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRefine_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRefine_x27___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalSpecialize___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSpecialize___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalSpecialize___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalSpecialize___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabTermForApply___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabTermForApply___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalApply___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalApply___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalApply___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalApply___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithReducible___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithReducible___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_evalRename___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_evalRename___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(lean_object* v_k_1_, uint8_t v_mayPostpone_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_){
_start:
{
lean_object* v___x_10_; 
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
v___x_10_ = lean_apply_7(v_k_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, lean_box(0));
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v_a_11_; uint8_t v___x_12_; uint8_t v___x_13_; lean_object* v___x_14_; 
v_a_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_a_11_);
lean_dec_ref(v___x_10_);
v___x_12_ = l_Lean_Elab_Term_PostponeBehavior_ofBool(v_mayPostpone_2_);
v___x_13_ = 0;
v___x_14_ = l_Lean_Elab_Term_synthesizeSyntheticMVars(v___x_12_, v___x_13_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_);
if (lean_obj_tag(v___x_14_) == 0)
{
lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_21_; 
v_isSharedCheck_21_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_21_ == 0)
{
lean_object* v_unused_22_; 
v_unused_22_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_22_);
v___x_16_ = v___x_14_;
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
else
{
lean_dec(v___x_14_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_21_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_19_; 
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_a_11_);
v___x_19_ = v___x_16_;
goto v_reusejp_18_;
}
else
{
lean_object* v_reuseFailAlloc_20_; 
v_reuseFailAlloc_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_20_, 0, v_a_11_);
v___x_19_ = v_reuseFailAlloc_20_;
goto v_reusejp_18_;
}
v_reusejp_18_:
{
return v___x_19_;
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
lean_dec(v_a_11_);
v_a_23_ = lean_ctor_get(v___x_14_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_14_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_14_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
else
{
return v___x_10_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg___boxed(lean_object* v_k_31_, lean_object* v_mayPostpone_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
uint8_t v_mayPostpone_boxed_40_; lean_object* v_res_41_; 
v_mayPostpone_boxed_40_ = lean_unbox(v_mayPostpone_32_);
v_res_41_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_31_, v_mayPostpone_boxed_40_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
lean_dec(v_a_36_);
lean_dec_ref(v_a_35_);
lean_dec(v_a_34_);
lean_dec_ref(v_a_33_);
return v_res_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(lean_object* v_00_u03b1_42_, lean_object* v_k_43_, uint8_t v_mayPostpone_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_43_, v_mayPostpone_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___boxed(lean_object* v_00_u03b1_53_, lean_object* v_k_54_, lean_object* v_mayPostpone_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_mayPostpone_boxed_63_; lean_object* v_res_64_; 
v_mayPostpone_boxed_63_ = lean_unbox(v_mayPostpone_55_);
v_res_64_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go(v_00_u03b1_53_, v_k_54_, v_mayPostpone_boxed_63_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(lean_object* v_a_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
lean_inc(v___y_67_);
lean_inc_ref(v___y_66_);
v___x_75_ = lean_apply_2(v_a_65_, v___y_66_, v___y_67_);
v___x_76_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___x_75_, v___y_68_, v___y_69_, v___y_70_, v___y_71_, v___y_72_, v___y_73_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg___boxed(lean_object* v_a_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v_a_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(lean_object* v_00_u03b1_88_, lean_object* v_a_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v_a_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___boxed(lean_object* v_00_u03b1_100_, lean_object* v_a_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v_res_111_; 
v_res_111_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0(v_00_u03b1_100_, v_a_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
lean_dec(v___y_107_);
lean_dec_ref(v___y_106_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_111_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(uint8_t v_cond_112_, lean_object* v_____r_113_){
_start:
{
if (v_cond_112_ == 0)
{
uint8_t v___x_114_; 
v___x_114_ = 1;
return v___x_114_;
}
else
{
uint8_t v___x_115_; 
v___x_115_ = 0;
return v___x_115_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed(lean_object* v_cond_116_, lean_object* v_____r_117_){
_start:
{
uint8_t v_cond_boxed_118_; uint8_t v_res_119_; lean_object* v_r_120_; 
v_cond_boxed_118_ = lean_unbox(v_cond_116_);
v_res_119_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_boxed_118_, v_____r_117_);
v_r_120_ = lean_box(v_res_119_);
return v_r_120_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(lean_object* v___f_121_, lean_object* v_x_122_){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_apply_1(v___f_121_, v___x_123_);
v___x_125_ = lean_unbox(v___x_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed(lean_object* v___f_126_, lean_object* v_x_127_){
_start:
{
uint8_t v_res_128_; lean_object* v_r_129_; 
v_res_128_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1(v___f_126_, v_x_127_);
v_r_129_ = lean_box(v_res_128_);
return v_r_129_;
}
}
static lean_object* _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_130_; 
v___x_130_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_132_; 
v___x_132_ = lean_mk_string_unchecked("reuse", 5, 5);
return v___x_132_;
}
}
static lean_object* _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_133_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__2);
v___x_134_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_135_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__0);
v___x_136_ = l_Lean_Name_mkStr3(v___x_135_, v___x_134_, v___x_133_);
return v___x_136_;
}
}
static lean_object* _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = lean_mk_string_unchecked("reuse stopped: guard failed at ", 31, 31);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(uint8_t v_cond_138_, lean_object* v_act_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_options_149_; lean_object* v_declName_x3f_150_; lean_object* v_macroStack_151_; uint8_t v_mayPostpone_152_; uint8_t v_errToSorry_153_; lean_object* v_autoBoundImplicitContext_154_; lean_object* v_autoBoundImplicitForbidden_155_; lean_object* v_sectionVars_156_; lean_object* v_sectionFVars_157_; uint8_t v_implicitLambda_158_; uint8_t v_heedElabAsElim_159_; uint8_t v_isNoncomputableSection_160_; uint8_t v_isMetaSection_161_; uint8_t v_ignoreTCFailures_162_; uint8_t v_inPattern_163_; lean_object* v_tacSnap_x3f_164_; uint8_t v_saveRecAppSyntax_165_; uint8_t v_holesAsSyntheticOpaque_166_; uint8_t v_checkDeprecated_167_; lean_object* v_fixedTermElabs_168_; lean_object* v___y_170_; uint8_t v___y_174_; 
v_options_149_ = lean_ctor_get(v___y_146_, 2);
v_declName_x3f_150_ = lean_ctor_get(v___y_142_, 0);
v_macroStack_151_ = lean_ctor_get(v___y_142_, 1);
v_mayPostpone_152_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8);
v_errToSorry_153_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_154_ = lean_ctor_get(v___y_142_, 2);
v_autoBoundImplicitForbidden_155_ = lean_ctor_get(v___y_142_, 3);
v_sectionVars_156_ = lean_ctor_get(v___y_142_, 4);
v_sectionFVars_157_ = lean_ctor_get(v___y_142_, 5);
v_implicitLambda_158_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 2);
v_heedElabAsElim_159_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_160_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 4);
v_isMetaSection_161_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_162_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 6);
v_inPattern_163_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_164_ = lean_ctor_get(v___y_142_, 6);
v_saveRecAppSyntax_165_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_166_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 9);
v_checkDeprecated_167_ = lean_ctor_get_uint8(v___y_142_, sizeof(void*)*8 + 10);
v_fixedTermElabs_168_ = lean_ctor_get(v___y_142_, 7);
if (lean_obj_tag(v_tacSnap_x3f_164_) == 0)
{
v___y_170_ = v_tacSnap_x3f_164_;
goto v___jp_169_;
}
else
{
lean_object* v_val_176_; lean_object* v_old_x3f_177_; lean_object* v___x_178_; lean_object* v___f_179_; 
v_val_176_ = lean_ctor_get(v_tacSnap_x3f_164_, 0);
v_old_x3f_177_ = lean_ctor_get(v_val_176_, 0);
v___x_178_ = lean_box(v_cond_138_);
v___f_179_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_179_, 0, v___x_178_);
if (lean_obj_tag(v_old_x3f_177_) == 1)
{
if (v_cond_138_ == 0)
{
lean_dec_ref(v___f_179_);
goto v___jp_180_;
}
else
{
lean_object* v_val_183_; lean_object* v_map_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v_val_183_ = lean_ctor_get(v_old_x3f_177_, 0);
v_map_184_ = lean_ctor_get(v_options_149_, 0);
v___x_185_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__3);
v___x_186_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_184_, v___x_185_);
if (lean_obj_tag(v___x_186_) == 0)
{
lean_dec_ref(v___f_179_);
goto v___jp_180_;
}
else
{
lean_object* v_val_187_; 
v_val_187_ = lean_ctor_get(v___x_186_, 0);
lean_inc(v_val_187_);
lean_dec_ref(v___x_186_);
if (lean_obj_tag(v_val_187_) == 1)
{
uint8_t v_v_188_; 
v_v_188_ = lean_ctor_get_uint8(v_val_187_, 0);
lean_dec_ref(v_val_187_);
if (v_v_188_ == 0)
{
lean_dec_ref(v___f_179_);
goto v___jp_180_;
}
else
{
lean_object* v_stx_189_; lean_object* v___f_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; uint8_t v___x_200_; 
v_stx_189_ = lean_ctor_get(v_val_183_, 0);
v___f_190_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_190_, 0, v___f_179_);
v___x_191_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__4);
v___x_192_ = lean_box(0);
v___x_193_ = 0;
lean_inc(v_stx_189_);
v___x_194_ = l_Lean_Syntax_formatStx(v_stx_189_, v___x_192_, v___x_193_);
v___x_195_ = l_Std_Format_defWidth;
v___x_196_ = lean_unsigned_to_nat(0u);
v___x_197_ = l_Std_Format_pretty(v___x_194_, v___x_195_, v___x_196_, v___x_196_);
v___x_198_ = lean_string_append(v___x_191_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = lean_dbg_trace(v___x_198_, v___f_190_);
v___x_200_ = lean_unbox(v___x_199_);
lean_dec(v___x_199_);
v___y_174_ = v___x_200_;
goto v___jp_173_;
}
}
else
{
lean_dec(v_val_187_);
lean_dec_ref(v___f_179_);
goto v___jp_180_;
}
}
}
}
else
{
lean_object* v___x_201_; uint8_t v___x_202_; 
lean_dec_ref(v___f_179_);
v___x_201_ = lean_box(0);
v___x_202_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_138_, v___x_201_);
v___y_174_ = v___x_202_;
goto v___jp_173_;
}
v___jp_180_:
{
lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_181_ = lean_box(0);
v___x_182_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___lam__0(v_cond_138_, v___x_181_);
v___y_174_ = v___x_182_;
goto v___jp_173_;
}
}
v___jp_169_:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
lean_inc_ref(v_fixedTermElabs_168_);
lean_inc(v_sectionFVars_157_);
lean_inc(v_sectionVars_156_);
lean_inc_ref(v_autoBoundImplicitForbidden_155_);
lean_inc(v_autoBoundImplicitContext_154_);
lean_inc(v_macroStack_151_);
lean_inc(v_declName_x3f_150_);
v___x_171_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_171_, 0, v_declName_x3f_150_);
lean_ctor_set(v___x_171_, 1, v_macroStack_151_);
lean_ctor_set(v___x_171_, 2, v_autoBoundImplicitContext_154_);
lean_ctor_set(v___x_171_, 3, v_autoBoundImplicitForbidden_155_);
lean_ctor_set(v___x_171_, 4, v_sectionVars_156_);
lean_ctor_set(v___x_171_, 5, v_sectionFVars_157_);
lean_ctor_set(v___x_171_, 6, v___y_170_);
lean_ctor_set(v___x_171_, 7, v_fixedTermElabs_168_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8, v_mayPostpone_152_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 1, v_errToSorry_153_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 2, v_implicitLambda_158_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 3, v_heedElabAsElim_159_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 4, v_isNoncomputableSection_160_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 5, v_isMetaSection_161_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 6, v_ignoreTCFailures_162_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 7, v_inPattern_163_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_165_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_166_);
lean_ctor_set_uint8(v___x_171_, sizeof(void*)*8 + 10, v_checkDeprecated_167_);
lean_inc(v___y_147_);
lean_inc_ref(v___y_146_);
lean_inc(v___y_145_);
lean_inc_ref(v___y_144_);
lean_inc(v___y_143_);
lean_inc(v___y_141_);
lean_inc_ref(v___y_140_);
v___x_172_ = lean_apply_9(v_act_139_, v___y_140_, v___y_141_, v___x_171_, v___y_143_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, lean_box(0));
return v___x_172_;
}
v___jp_173_:
{
if (v___y_174_ == 0)
{
lean_object* v___x_175_; 
v___x_175_ = lean_box(0);
v___y_170_ = v___x_175_;
goto v___jp_169_;
}
else
{
lean_inc(v_tacSnap_x3f_164_);
v___y_170_ = v_tacSnap_x3f_164_;
goto v___jp_169_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___boxed(lean_object* v_cond_203_, lean_object* v_act_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
uint8_t v_cond_boxed_214_; lean_object* v_res_215_; 
v_cond_boxed_214_ = lean_unbox(v_cond_203_);
v_res_215_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v_cond_boxed_214_, v_act_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(lean_object* v_00_u03b1_216_, uint8_t v_cond_217_, lean_object* v_act_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v_cond_217_, v_act_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___boxed(lean_object* v_00_u03b1_229_, lean_object* v_cond_230_, lean_object* v_act_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
uint8_t v_cond_boxed_241_; lean_object* v_res_242_; 
v_cond_boxed_241_ = lean_unbox(v_cond_230_);
v_res_242_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1(v_00_u03b1_229_, v_cond_boxed_241_, v_act_231_, v___y_232_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
lean_dec(v___y_239_);
lean_dec_ref(v___y_238_);
lean_dec(v___y_237_);
lean_dec_ref(v___y_236_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(lean_object* v_k_243_, uint8_t v_mayPostpone_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_243_, v_mayPostpone_244_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed(lean_object* v_k_255_, lean_object* v_mayPostpone_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
uint8_t v_mayPostpone_boxed_266_; lean_object* v_res_267_; 
v_mayPostpone_boxed_266_ = lean_unbox(v_mayPostpone_256_);
v_res_267_ = l_Lean_Elab_Tactic_runTermElab___redArg___lam__0(v_k_255_, v_mayPostpone_boxed_266_, v___y_257_, v___y_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(lean_object* v___f_268_, lean_object* v_k_269_, uint8_t v_mayPostpone_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
uint8_t v_recover_280_; 
v_recover_280_ = lean_ctor_get_uint8(v___y_271_, sizeof(void*)*1);
if (v_recover_280_ == 0)
{
lean_object* v___x_281_; 
lean_dec_ref(v_k_269_);
v___x_281_ = l_Lean_Elab_Term_withoutErrToSorry___at___00Lean_Elab_Tactic_runTermElab_spec__0___redArg(v___f_268_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
return v___x_281_;
}
else
{
lean_object* v___x_282_; 
lean_dec_ref(v___f_268_);
v___x_282_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_runTermElab_go___redArg(v_k_269_, v_mayPostpone_270_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_);
return v___x_282_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed(lean_object* v___f_283_, lean_object* v_k_284_, lean_object* v_mayPostpone_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_){
_start:
{
uint8_t v_mayPostpone_boxed_295_; lean_object* v_res_296_; 
v_mayPostpone_boxed_295_ = lean_unbox(v_mayPostpone_285_);
v_res_296_ = l_Lean_Elab_Tactic_runTermElab___redArg___lam__1(v___f_283_, v_k_284_, v_mayPostpone_boxed_295_, v___y_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
lean_dec(v___y_293_);
lean_dec_ref(v___y_292_);
lean_dec(v___y_291_);
lean_dec_ref(v___y_290_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg(lean_object* v_k_297_, uint8_t v_mayPostpone_298_, lean_object* v_a_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v___x_308_; lean_object* v___f_309_; lean_object* v___x_310_; lean_object* v___f_311_; uint8_t v___x_312_; lean_object* v___x_313_; 
v___x_308_ = lean_box(v_mayPostpone_298_);
lean_inc_ref(v_k_297_);
v___f_309_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_309_, 0, v_k_297_);
lean_closure_set(v___f_309_, 1, v___x_308_);
v___x_310_ = lean_box(v_mayPostpone_298_);
v___f_311_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_runTermElab___redArg___lam__1___boxed), 12, 3);
lean_closure_set(v___f_311_, 0, v___f_309_);
lean_closure_set(v___f_311_, 1, v_k_297_);
lean_closure_set(v___f_311_, 2, v___x_310_);
v___x_312_ = 1;
v___x_313_ = l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg(v___x_312_, v___f_311_, v_a_299_, v_a_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___redArg___boxed(lean_object* v_k_314_, lean_object* v_mayPostpone_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
uint8_t v_mayPostpone_boxed_325_; lean_object* v_res_326_; 
v_mayPostpone_boxed_325_ = lean_unbox(v_mayPostpone_315_);
v_res_326_ = l_Lean_Elab_Tactic_runTermElab___redArg(v_k_314_, v_mayPostpone_boxed_325_, v_a_316_, v_a_317_, v_a_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_);
lean_dec(v_a_323_);
lean_dec_ref(v_a_322_);
lean_dec(v_a_321_);
lean_dec_ref(v_a_320_);
lean_dec(v_a_319_);
lean_dec_ref(v_a_318_);
lean_dec(v_a_317_);
lean_dec_ref(v_a_316_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab(lean_object* v_00_u03b1_327_, lean_object* v_k_328_, uint8_t v_mayPostpone_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_Elab_Tactic_runTermElab___redArg(v_k_328_, v_mayPostpone_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_runTermElab___boxed(lean_object* v_00_u03b1_340_, lean_object* v_k_341_, lean_object* v_mayPostpone_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
uint8_t v_mayPostpone_boxed_352_; lean_object* v_res_353_; 
v_mayPostpone_boxed_352_ = lean_unbox(v_mayPostpone_342_);
v_res_353_ = l_Lean_Elab_Tactic_runTermElab(v_00_u03b1_340_, v_k_341_, v_mayPostpone_boxed_352_, v_a_343_, v_a_344_, v_a_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_, v_a_350_);
lean_dec(v_a_350_);
lean_dec_ref(v_a_349_);
lean_dec(v_a_348_);
lean_dec_ref(v_a_347_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_345_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
return v_res_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(lean_object* v_e_354_, lean_object* v___y_355_, lean_object* v___y_356_){
_start:
{
uint8_t v___x_358_; 
v___x_358_ = l_Lean_Expr_hasMVar(v_e_354_);
if (v___x_358_ == 0)
{
lean_object* v___x_359_; 
v___x_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_359_, 0, v_e_354_);
return v___x_359_;
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_mctx_362_; lean_object* v___x_363_; lean_object* v_fst_364_; lean_object* v_snd_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v_cache_368_; lean_object* v_zetaDeltaFVarIds_369_; lean_object* v_postponed_370_; lean_object* v_diag_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_380_; 
v___x_360_ = lean_st_ref_get(v___y_356_);
lean_dec(v___x_360_);
v___x_361_ = lean_st_ref_get(v___y_355_);
v_mctx_362_ = lean_ctor_get(v___x_361_, 0);
lean_inc_ref(v_mctx_362_);
lean_dec(v___x_361_);
v___x_363_ = l_Lean_instantiateMVarsCore(v_mctx_362_, v_e_354_);
v_fst_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_fst_364_);
v_snd_365_ = lean_ctor_get(v___x_363_, 1);
lean_inc(v_snd_365_);
lean_dec_ref(v___x_363_);
v___x_366_ = lean_st_ref_get(v___y_356_);
lean_dec(v___x_366_);
v___x_367_ = lean_st_ref_take(v___y_355_);
v_cache_368_ = lean_ctor_get(v___x_367_, 1);
v_zetaDeltaFVarIds_369_ = lean_ctor_get(v___x_367_, 2);
v_postponed_370_ = lean_ctor_get(v___x_367_, 3);
v_diag_371_ = lean_ctor_get(v___x_367_, 4);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_380_ == 0)
{
lean_object* v_unused_381_; 
v_unused_381_ = lean_ctor_get(v___x_367_, 0);
lean_dec(v_unused_381_);
v___x_373_ = v___x_367_;
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_diag_371_);
lean_inc(v_postponed_370_);
lean_inc(v_zetaDeltaFVarIds_369_);
lean_inc(v_cache_368_);
lean_dec(v___x_367_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_380_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 0, v_snd_365_);
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_snd_365_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_cache_368_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v_zetaDeltaFVarIds_369_);
lean_ctor_set(v_reuseFailAlloc_379_, 3, v_postponed_370_);
lean_ctor_set(v_reuseFailAlloc_379_, 4, v_diag_371_);
v___x_376_ = v_reuseFailAlloc_379_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_st_ref_set(v___y_355_, v___x_376_);
v___x_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_378_, 0, v_fst_364_);
return v___x_378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg___boxed(lean_object* v_e_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_){
_start:
{
lean_object* v_res_386_; 
v_res_386_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_e_382_, v___y_383_, v___y_384_);
lean_dec(v___y_384_);
lean_dec(v___y_383_);
return v_res_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(lean_object* v_e_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_e_387_, v___y_393_, v___y_395_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___boxed(lean_object* v_e_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0(v_e_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
lean_dec(v___y_402_);
lean_dec_ref(v___y_401_);
lean_dec(v___y_400_);
lean_dec_ref(v___y_399_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm(lean_object* v_stx_409_, lean_object* v_expectedType_x3f_410_, uint8_t v_mayPostpone_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
uint8_t v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v_fileName_425_; lean_object* v_fileMap_426_; lean_object* v_options_427_; lean_object* v_currRecDepth_428_; lean_object* v_maxRecDepth_429_; lean_object* v_ref_430_; lean_object* v_currNamespace_431_; lean_object* v_openDecls_432_; lean_object* v_initHeartbeats_433_; lean_object* v_maxHeartbeats_434_; lean_object* v_quotContext_435_; lean_object* v_currMacroScope_436_; uint8_t v_diag_437_; lean_object* v_cancelTk_x3f_438_; uint8_t v_suppressElabErrors_439_; lean_object* v_inheritedTraceOptions_440_; lean_object* v_ref_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_421_ = 1;
v___x_422_ = lean_box(v___x_421_);
v___x_423_ = lean_box(v___x_421_);
lean_inc(v_stx_409_);
v___x_424_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTerm___boxed), 11, 4);
lean_closure_set(v___x_424_, 0, v_stx_409_);
lean_closure_set(v___x_424_, 1, v_expectedType_x3f_410_);
lean_closure_set(v___x_424_, 2, v___x_422_);
lean_closure_set(v___x_424_, 3, v___x_423_);
v_fileName_425_ = lean_ctor_get(v_a_418_, 0);
v_fileMap_426_ = lean_ctor_get(v_a_418_, 1);
v_options_427_ = lean_ctor_get(v_a_418_, 2);
v_currRecDepth_428_ = lean_ctor_get(v_a_418_, 3);
v_maxRecDepth_429_ = lean_ctor_get(v_a_418_, 4);
v_ref_430_ = lean_ctor_get(v_a_418_, 5);
v_currNamespace_431_ = lean_ctor_get(v_a_418_, 6);
v_openDecls_432_ = lean_ctor_get(v_a_418_, 7);
v_initHeartbeats_433_ = lean_ctor_get(v_a_418_, 8);
v_maxHeartbeats_434_ = lean_ctor_get(v_a_418_, 9);
v_quotContext_435_ = lean_ctor_get(v_a_418_, 10);
v_currMacroScope_436_ = lean_ctor_get(v_a_418_, 11);
v_diag_437_ = lean_ctor_get_uint8(v_a_418_, sizeof(void*)*14);
v_cancelTk_x3f_438_ = lean_ctor_get(v_a_418_, 12);
v_suppressElabErrors_439_ = lean_ctor_get_uint8(v_a_418_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_440_ = lean_ctor_get(v_a_418_, 13);
v_ref_441_ = l_Lean_replaceRef(v_stx_409_, v_ref_430_);
lean_dec(v_stx_409_);
lean_inc_ref(v_inheritedTraceOptions_440_);
lean_inc(v_cancelTk_x3f_438_);
lean_inc(v_currMacroScope_436_);
lean_inc(v_quotContext_435_);
lean_inc(v_maxHeartbeats_434_);
lean_inc(v_initHeartbeats_433_);
lean_inc(v_openDecls_432_);
lean_inc(v_currNamespace_431_);
lean_inc(v_maxRecDepth_429_);
lean_inc(v_currRecDepth_428_);
lean_inc_ref(v_options_427_);
lean_inc_ref(v_fileMap_426_);
lean_inc_ref(v_fileName_425_);
v___x_442_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_442_, 0, v_fileName_425_);
lean_ctor_set(v___x_442_, 1, v_fileMap_426_);
lean_ctor_set(v___x_442_, 2, v_options_427_);
lean_ctor_set(v___x_442_, 3, v_currRecDepth_428_);
lean_ctor_set(v___x_442_, 4, v_maxRecDepth_429_);
lean_ctor_set(v___x_442_, 5, v_ref_441_);
lean_ctor_set(v___x_442_, 6, v_currNamespace_431_);
lean_ctor_set(v___x_442_, 7, v_openDecls_432_);
lean_ctor_set(v___x_442_, 8, v_initHeartbeats_433_);
lean_ctor_set(v___x_442_, 9, v_maxHeartbeats_434_);
lean_ctor_set(v___x_442_, 10, v_quotContext_435_);
lean_ctor_set(v___x_442_, 11, v_currMacroScope_436_);
lean_ctor_set(v___x_442_, 12, v_cancelTk_x3f_438_);
lean_ctor_set(v___x_442_, 13, v_inheritedTraceOptions_440_);
lean_ctor_set_uint8(v___x_442_, sizeof(void*)*14, v_diag_437_);
lean_ctor_set_uint8(v___x_442_, sizeof(void*)*14 + 1, v_suppressElabErrors_439_);
v___x_443_ = l_Lean_Elab_Tactic_runTermElab___redArg(v___x_424_, v_mayPostpone_411_, v_a_412_, v_a_413_, v_a_414_, v_a_415_, v_a_416_, v_a_417_, v___x_442_, v_a_419_);
lean_dec_ref(v___x_442_);
if (lean_obj_tag(v___x_443_) == 0)
{
lean_object* v_a_444_; lean_object* v___x_445_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref(v___x_443_);
v___x_445_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_444_, v_a_417_, v_a_419_);
return v___x_445_;
}
else
{
return v___x_443_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTerm___boxed(lean_object* v_stx_446_, lean_object* v_expectedType_x3f_447_, lean_object* v_mayPostpone_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
uint8_t v_mayPostpone_boxed_458_; lean_object* v_res_459_; 
v_mayPostpone_boxed_458_ = lean_unbox(v_mayPostpone_448_);
v_res_459_ = l_Lean_Elab_Tactic_elabTerm(v_stx_446_, v_expectedType_x3f_447_, v_mayPostpone_boxed_458_, v_a_449_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
lean_dec(v_a_454_);
lean_dec_ref(v_a_453_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
return v_res_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType(lean_object* v_stx_460_, lean_object* v_expectedType_x3f_461_, uint8_t v_mayPostpone_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v___x_472_; 
lean_inc(v_expectedType_x3f_461_);
v___x_472_ = l_Lean_Elab_Tactic_elabTerm(v_stx_460_, v_expectedType_x3f_461_, v_mayPostpone_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
if (lean_obj_tag(v___x_472_) == 0)
{
if (lean_obj_tag(v_expectedType_x3f_461_) == 0)
{
return v___x_472_;
}
else
{
lean_object* v_a_473_; lean_object* v_val_474_; lean_object* v___x_475_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc_n(v_a_473_, 2);
lean_dec_ref(v___x_472_);
v_val_474_ = lean_ctor_get(v_expectedType_x3f_461_, 0);
lean_inc(v_val_474_);
lean_dec_ref(v_expectedType_x3f_461_);
lean_inc(v_a_470_);
lean_inc_ref(v_a_469_);
lean_inc(v_a_468_);
lean_inc_ref(v_a_467_);
v___x_475_ = lean_infer_type(v_a_473_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
if (lean_obj_tag(v___x_475_) == 0)
{
lean_object* v_a_476_; lean_object* v___x_478_; uint8_t v_isShared_479_; uint8_t v_isSharedCheck_556_; 
v_a_476_ = lean_ctor_get(v___x_475_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_556_ == 0)
{
v___x_478_ = v___x_475_;
v_isShared_479_ = v_isSharedCheck_556_;
goto v_resetjp_477_;
}
else
{
lean_inc(v_a_476_);
lean_dec(v___x_475_);
v___x_478_ = lean_box(0);
v_isShared_479_ = v_isSharedCheck_556_;
goto v_resetjp_477_;
}
v_resetjp_477_:
{
uint8_t v_a_481_; lean_object* v___x_503_; uint8_t v_foApprox_504_; uint8_t v_ctxApprox_505_; uint8_t v_quasiPatternApprox_506_; uint8_t v_constApprox_507_; uint8_t v_isDefEqStuckEx_508_; uint8_t v_unificationHints_509_; uint8_t v_proofIrrelevance_510_; uint8_t v_offsetCnstrs_511_; uint8_t v_transparency_512_; uint8_t v_etaStruct_513_; uint8_t v_univApprox_514_; uint8_t v_iota_515_; uint8_t v_beta_516_; uint8_t v_proj_517_; uint8_t v_zeta_518_; uint8_t v_zetaDelta_519_; uint8_t v_zetaUnused_520_; uint8_t v_zetaHave_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_555_; 
v___x_503_ = l_Lean_Meta_Context_config(v_a_467_);
v_foApprox_504_ = lean_ctor_get_uint8(v___x_503_, 0);
v_ctxApprox_505_ = lean_ctor_get_uint8(v___x_503_, 1);
v_quasiPatternApprox_506_ = lean_ctor_get_uint8(v___x_503_, 2);
v_constApprox_507_ = lean_ctor_get_uint8(v___x_503_, 3);
v_isDefEqStuckEx_508_ = lean_ctor_get_uint8(v___x_503_, 4);
v_unificationHints_509_ = lean_ctor_get_uint8(v___x_503_, 5);
v_proofIrrelevance_510_ = lean_ctor_get_uint8(v___x_503_, 6);
v_offsetCnstrs_511_ = lean_ctor_get_uint8(v___x_503_, 8);
v_transparency_512_ = lean_ctor_get_uint8(v___x_503_, 9);
v_etaStruct_513_ = lean_ctor_get_uint8(v___x_503_, 10);
v_univApprox_514_ = lean_ctor_get_uint8(v___x_503_, 11);
v_iota_515_ = lean_ctor_get_uint8(v___x_503_, 12);
v_beta_516_ = lean_ctor_get_uint8(v___x_503_, 13);
v_proj_517_ = lean_ctor_get_uint8(v___x_503_, 14);
v_zeta_518_ = lean_ctor_get_uint8(v___x_503_, 15);
v_zetaDelta_519_ = lean_ctor_get_uint8(v___x_503_, 16);
v_zetaUnused_520_ = lean_ctor_get_uint8(v___x_503_, 17);
v_zetaHave_521_ = lean_ctor_get_uint8(v___x_503_, 18);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_555_ == 0)
{
v___x_523_ = v___x_503_;
v_isShared_524_ = v_isSharedCheck_555_;
goto v_resetjp_522_;
}
else
{
lean_dec(v___x_503_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_555_;
goto v_resetjp_522_;
}
v___jp_480_:
{
if (v_a_481_ == 0)
{
lean_object* v___x_482_; lean_object* v___x_483_; 
lean_del_object(v___x_478_);
v___x_482_ = lean_box(0);
lean_inc(v_a_473_);
v___x_483_ = l_Lean_Elab_Term_throwTypeMismatchError___redArg(v___x_482_, v_val_474_, v_a_476_, v_a_473_, v___x_482_, v_a_467_, v_a_468_, v_a_469_, v_a_470_);
if (lean_obj_tag(v___x_483_) == 0)
{
lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_490_; 
v_isSharedCheck_490_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_490_ == 0)
{
lean_object* v_unused_491_; 
v_unused_491_ = lean_ctor_get(v___x_483_, 0);
lean_dec(v_unused_491_);
v___x_485_ = v___x_483_;
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
else
{
lean_dec(v___x_483_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_490_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_488_; 
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v_a_473_);
v___x_488_ = v___x_485_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_a_473_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
else
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_499_; 
lean_dec(v_a_473_);
v_a_492_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_499_ == 0)
{
v___x_494_ = v___x_483_;
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_483_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_499_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v___x_497_; 
if (v_isShared_495_ == 0)
{
v___x_497_ = v___x_494_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v_a_492_);
v___x_497_ = v_reuseFailAlloc_498_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
return v___x_497_;
}
}
}
}
else
{
lean_object* v___x_501_; 
lean_dec(v_a_476_);
lean_dec(v_val_474_);
if (v_isShared_479_ == 0)
{
lean_ctor_set(v___x_478_, 0, v_a_473_);
v___x_501_ = v___x_478_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v_a_473_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
v_resetjp_522_:
{
uint8_t v_trackZetaDelta_525_; lean_object* v_zetaDeltaSet_526_; lean_object* v_lctx_527_; lean_object* v_localInstances_528_; lean_object* v_defEqCtx_x3f_529_; lean_object* v_synthPendingDepth_530_; lean_object* v_canUnfold_x3f_531_; uint8_t v_univApprox_532_; uint8_t v_inTypeClassResolution_533_; uint8_t v_cacheInferType_534_; uint8_t v___x_535_; lean_object* v___x_537_; 
v_trackZetaDelta_525_ = lean_ctor_get_uint8(v_a_467_, sizeof(void*)*7);
v_zetaDeltaSet_526_ = lean_ctor_get(v_a_467_, 1);
v_lctx_527_ = lean_ctor_get(v_a_467_, 2);
v_localInstances_528_ = lean_ctor_get(v_a_467_, 3);
v_defEqCtx_x3f_529_ = lean_ctor_get(v_a_467_, 4);
v_synthPendingDepth_530_ = lean_ctor_get(v_a_467_, 5);
v_canUnfold_x3f_531_ = lean_ctor_get(v_a_467_, 6);
v_univApprox_532_ = lean_ctor_get_uint8(v_a_467_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_533_ = lean_ctor_get_uint8(v_a_467_, sizeof(void*)*7 + 2);
v_cacheInferType_534_ = lean_ctor_get_uint8(v_a_467_, sizeof(void*)*7 + 3);
v___x_535_ = 1;
if (v_isShared_524_ == 0)
{
v___x_537_ = v___x_523_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 0, v_foApprox_504_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 1, v_ctxApprox_505_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 2, v_quasiPatternApprox_506_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 3, v_constApprox_507_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 4, v_isDefEqStuckEx_508_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 5, v_unificationHints_509_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 6, v_proofIrrelevance_510_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 8, v_offsetCnstrs_511_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 9, v_transparency_512_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 10, v_etaStruct_513_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 11, v_univApprox_514_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 12, v_iota_515_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 13, v_beta_516_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 14, v_proj_517_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 15, v_zeta_518_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 16, v_zetaDelta_519_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 17, v_zetaUnused_520_);
lean_ctor_set_uint8(v_reuseFailAlloc_554_, 18, v_zetaHave_521_);
v___x_537_ = v_reuseFailAlloc_554_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
uint64_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
lean_ctor_set_uint8(v___x_537_, 7, v___x_535_);
v___x_538_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_537_);
v___x_539_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_539_, 0, v___x_537_);
lean_ctor_set_uint64(v___x_539_, sizeof(void*)*1, v___x_538_);
lean_inc(v_canUnfold_x3f_531_);
lean_inc(v_synthPendingDepth_530_);
lean_inc(v_defEqCtx_x3f_529_);
lean_inc_ref(v_localInstances_528_);
lean_inc_ref(v_lctx_527_);
lean_inc(v_zetaDeltaSet_526_);
v___x_540_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_540_, 0, v___x_539_);
lean_ctor_set(v___x_540_, 1, v_zetaDeltaSet_526_);
lean_ctor_set(v___x_540_, 2, v_lctx_527_);
lean_ctor_set(v___x_540_, 3, v_localInstances_528_);
lean_ctor_set(v___x_540_, 4, v_defEqCtx_x3f_529_);
lean_ctor_set(v___x_540_, 5, v_synthPendingDepth_530_);
lean_ctor_set(v___x_540_, 6, v_canUnfold_x3f_531_);
lean_ctor_set_uint8(v___x_540_, sizeof(void*)*7, v_trackZetaDelta_525_);
lean_ctor_set_uint8(v___x_540_, sizeof(void*)*7 + 1, v_univApprox_532_);
lean_ctor_set_uint8(v___x_540_, sizeof(void*)*7 + 2, v_inTypeClassResolution_533_);
lean_ctor_set_uint8(v___x_540_, sizeof(void*)*7 + 3, v_cacheInferType_534_);
lean_inc(v_val_474_);
lean_inc(v_a_476_);
v___x_541_ = l_Lean_Meta_isExprDefEq(v_a_476_, v_val_474_, v___x_540_, v_a_468_, v_a_469_, v_a_470_);
lean_dec_ref(v___x_540_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; uint8_t v___x_543_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref(v___x_541_);
v___x_543_ = lean_unbox(v_a_542_);
lean_dec(v_a_542_);
v_a_481_ = v___x_543_;
goto v___jp_480_;
}
else
{
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_544_; uint8_t v___x_545_; 
v_a_544_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_544_);
lean_dec_ref(v___x_541_);
v___x_545_ = lean_unbox(v_a_544_);
lean_dec(v_a_544_);
v_a_481_ = v___x_545_;
goto v___jp_480_;
}
else
{
lean_object* v_a_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_553_; 
lean_del_object(v___x_478_);
lean_dec(v_a_476_);
lean_dec(v_val_474_);
lean_dec(v_a_473_);
v_a_546_ = lean_ctor_get(v___x_541_, 0);
v_isSharedCheck_553_ = !lean_is_exclusive(v___x_541_);
if (v_isSharedCheck_553_ == 0)
{
v___x_548_ = v___x_541_;
v_isShared_549_ = v_isSharedCheck_553_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_a_546_);
lean_dec(v___x_541_);
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
}
}
}
}
else
{
lean_dec(v_val_474_);
lean_dec(v_a_473_);
return v___x_475_;
}
}
}
else
{
lean_dec(v_expectedType_x3f_461_);
return v___x_472_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermEnsuringType___boxed(lean_object* v_stx_557_, lean_object* v_expectedType_x3f_558_, lean_object* v_mayPostpone_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
uint8_t v_mayPostpone_boxed_569_; lean_object* v_res_570_; 
v_mayPostpone_boxed_569_ = lean_unbox(v_mayPostpone_559_);
v_res_570_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v_stx_557_, v_expectedType_x3f_558_, v_mayPostpone_boxed_569_, v_a_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
lean_dec(v_a_565_);
lean_dec_ref(v_a_564_);
lean_dec(v_a_563_);
lean_dec_ref(v_a_562_);
lean_dec(v_a_561_);
lean_dec_ref(v_a_560_);
return v_res_570_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_571_ = lean_box(0);
v___x_572_ = l_Lean_Elab_abortTacticExceptionId;
v___x_573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_571_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg(){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_obj_once(&l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0, &l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___closed__0);
v___x_576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg___boxed(lean_object* v___y_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(lean_object* v_00_u03b1_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___boxed(lean_object* v_00_u03b1_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0(v_00_u03b1_590_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_);
lean_dec(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v___y_591_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort(lean_object* v_mvarIds_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = lean_box(0);
v___x_612_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_mvarIds_601_, v___x_611_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_);
if (lean_obj_tag(v___x_612_) == 0)
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_623_; 
v_a_613_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_623_ == 0)
{
v___x_615_ = v___x_612_;
v_isShared_616_ = v_isSharedCheck_623_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_623_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint8_t v___x_617_; 
v___x_617_ = lean_unbox(v_a_613_);
lean_dec(v_a_613_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; lean_object* v___x_620_; 
v___x_618_ = lean_box(0);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v___x_618_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v___x_618_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
else
{
lean_object* v___x_622_; 
lean_del_object(v___x_615_);
v___x_622_ = l_Lean_Elab_throwAbortTactic___at___00Lean_Elab_Tactic_logUnassignedAndAbort_spec__0___redArg();
return v___x_622_;
}
}
}
else
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_631_; 
v_a_624_ = lean_ctor_get(v___x_612_, 0);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_612_);
if (v_isSharedCheck_631_ == 0)
{
v___x_626_ = v___x_612_;
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_612_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_631_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_629_; 
if (v_isShared_627_ == 0)
{
v___x_629_ = v___x_626_;
goto v_reusejp_628_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_a_624_);
v___x_629_ = v_reuseFailAlloc_630_;
goto v_reusejp_628_;
}
v_reusejp_628_:
{
return v___x_629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_logUnassignedAndAbort___boxed(lean_object* v_mvarIds_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_){
_start:
{
lean_object* v_res_642_; 
v_res_642_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_mvarIds_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_, v_a_637_, v_a_638_, v_a_639_, v_a_640_);
lean_dec(v_a_640_);
lean_dec_ref(v_a_639_);
lean_dec(v_a_638_);
lean_dec_ref(v_a_637_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
lean_dec_ref(v_mvarIds_632_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(lean_object* v___x_643_, lean_object* v_mvarCounterSaved_644_, lean_object* v_as_645_, size_t v_i_646_, size_t v_stop_647_, lean_object* v_b_648_){
_start:
{
lean_object* v___y_650_; uint8_t v___x_654_; 
v___x_654_ = lean_usize_dec_eq(v_i_646_, v_stop_647_);
if (v___x_654_ == 0)
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v_index_657_; uint8_t v___x_658_; 
v___x_655_ = lean_array_uget_borrowed(v_as_645_, v_i_646_);
lean_inc(v___x_655_);
v___x_656_ = l_Lean_MetavarContext_getDecl(v___x_643_, v___x_655_);
v_index_657_ = lean_ctor_get(v___x_656_, 6);
lean_inc(v_index_657_);
lean_dec_ref(v___x_656_);
v___x_658_ = lean_nat_dec_le(v_mvarCounterSaved_644_, v_index_657_);
lean_dec(v_index_657_);
if (v___x_658_ == 0)
{
v___y_650_ = v_b_648_;
goto v___jp_649_;
}
else
{
lean_object* v___x_659_; 
lean_inc(v___x_655_);
v___x_659_ = lean_array_push(v_b_648_, v___x_655_);
v___y_650_ = v___x_659_;
goto v___jp_649_;
}
}
else
{
return v_b_648_;
}
v___jp_649_:
{
size_t v___x_651_; size_t v___x_652_; 
v___x_651_ = ((size_t)1ULL);
v___x_652_ = lean_usize_add(v_i_646_, v___x_651_);
v_i_646_ = v___x_652_;
v_b_648_ = v___y_650_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0___boxed(lean_object* v___x_660_, lean_object* v_mvarCounterSaved_661_, lean_object* v_as_662_, lean_object* v_i_663_, lean_object* v_stop_664_, lean_object* v_b_665_){
_start:
{
size_t v_i_boxed_666_; size_t v_stop_boxed_667_; lean_object* v_res_668_; 
v_i_boxed_666_ = lean_unbox_usize(v_i_663_);
lean_dec(v_i_663_);
v_stop_boxed_667_ = lean_unbox_usize(v_stop_664_);
lean_dec(v_stop_664_);
v_res_668_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v___x_660_, v_mvarCounterSaved_661_, v_as_662_, v_i_boxed_666_, v_stop_boxed_667_, v_b_665_);
lean_dec_ref(v_as_662_);
lean_dec(v_mvarCounterSaved_661_);
lean_dec_ref(v___x_660_);
return v_res_668_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = lean_unsigned_to_nat(0u);
v___x_670_ = lean_mk_empty_array_with_capacity(v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg(lean_object* v_mvarIds_671_, lean_object* v_mvarCounterSaved_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_676_ = lean_st_ref_get(v_a_674_);
lean_dec(v___x_676_);
v___x_677_ = lean_st_ref_get(v_a_673_);
v___x_678_ = lean_unsigned_to_nat(0u);
v___x_679_ = lean_array_get_size(v_mvarIds_671_);
v___x_680_ = lean_obj_once(&l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0, &l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0);
v___x_681_ = lean_nat_dec_lt(v___x_678_, v___x_679_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; 
lean_dec(v___x_677_);
v___x_682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_682_, 0, v___x_680_);
return v___x_682_;
}
else
{
lean_object* v_mctx_683_; uint8_t v___x_684_; 
v_mctx_683_ = lean_ctor_get(v___x_677_, 0);
lean_inc_ref(v_mctx_683_);
lean_dec(v___x_677_);
v___x_684_ = lean_nat_dec_le(v___x_679_, v___x_679_);
if (v___x_684_ == 0)
{
if (v___x_681_ == 0)
{
lean_object* v___x_685_; 
lean_dec_ref(v_mctx_683_);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_680_);
return v___x_685_;
}
else
{
size_t v___x_686_; size_t v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_686_ = ((size_t)0ULL);
v___x_687_ = lean_usize_of_nat(v___x_679_);
v___x_688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v_mctx_683_, v_mvarCounterSaved_672_, v_mvarIds_671_, v___x_686_, v___x_687_, v___x_680_);
lean_dec_ref(v_mctx_683_);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
}
else
{
size_t v___x_690_; size_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_690_ = ((size_t)0ULL);
v___x_691_ = lean_usize_of_nat(v___x_679_);
v___x_692_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_filterOldMVars_spec__0(v_mctx_683_, v_mvarCounterSaved_672_, v_mvarIds_671_, v___x_690_, v___x_691_, v___x_680_);
lean_dec_ref(v_mctx_683_);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v___x_692_);
return v___x_693_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___redArg___boxed(lean_object* v_mvarIds_694_, lean_object* v_mvarCounterSaved_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_){
_start:
{
lean_object* v_res_699_; 
v_res_699_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_mvarIds_694_, v_mvarCounterSaved_695_, v_a_696_, v_a_697_);
lean_dec(v_a_697_);
lean_dec(v_a_696_);
lean_dec(v_mvarCounterSaved_695_);
lean_dec_ref(v_mvarIds_694_);
return v_res_699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars(lean_object* v_mvarIds_700_, lean_object* v_mvarCounterSaved_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_mvarIds_700_, v_mvarCounterSaved_701_, v_a_703_, v_a_705_);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_filterOldMVars___boxed(lean_object* v_mvarIds_708_, lean_object* v_mvarCounterSaved_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l_Lean_Elab_Tactic_filterOldMVars(v_mvarIds_708_, v_mvarCounterSaved_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_mvarCounterSaved_709_);
lean_dec_ref(v_mvarIds_708_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(lean_object* v_x_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v___x_726_; 
lean_inc(v___y_720_);
lean_inc_ref(v___y_719_);
lean_inc(v___y_718_);
lean_inc_ref(v___y_717_);
v___x_726_ = lean_apply_9(v_x_716_, v___y_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_, lean_box(0));
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed(lean_object* v_x_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0(v_x_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(lean_object* v_mvarId_738_, lean_object* v_x_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v___f_749_; lean_object* v___x_750_; 
lean_inc(v___y_743_);
lean_inc_ref(v___y_742_);
lean_inc(v___y_741_);
lean_inc_ref(v___y_740_);
v___f_749_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_749_, 0, v_x_739_);
lean_closure_set(v___f_749_, 1, v___y_740_);
lean_closure_set(v___f_749_, 2, v___y_741_);
lean_closure_set(v___f_749_, 3, v___y_742_);
lean_closure_set(v___f_749_, 4, v___y_743_);
v___x_750_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_738_, v___f_749_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
if (lean_obj_tag(v___x_750_) == 0)
{
return v___x_750_;
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_756_; 
if (v_isShared_754_ == 0)
{
v___x_756_ = v___x_753_;
goto v_reusejp_755_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_a_751_);
v___x_756_ = v_reuseFailAlloc_757_;
goto v_reusejp_755_;
}
v_reusejp_755_:
{
return v___x_756_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg___boxed(lean_object* v_mvarId_759_, lean_object* v_x_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_mvarId_759_, v_x_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec(v___y_762_);
lean_dec_ref(v___y_761_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(lean_object* v_00_u03b1_771_, lean_object* v_mvarId_772_, lean_object* v_x_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
lean_object* v___x_783_; 
v___x_783_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_mvarId_772_, v_x_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___boxed(lean_object* v_00_u03b1_784_, lean_object* v_mvarId_785_, lean_object* v_x_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0(v_00_u03b1_784_, v_mvarId_785_, v_x_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
lean_dec(v___y_792_);
lean_dec_ref(v___y_791_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
return v_res_796_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0(void){
_start:
{
lean_object* v___x_797_; 
v___x_797_ = lean_mk_string_unchecked("attempting to close the goal using", 34, 34);
return v___x_797_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1(void){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; 
v___x_798_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__0);
v___x_799_ = l_Lean_stringToMessageData(v___x_798_);
return v___x_799_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2(void){
_start:
{
lean_object* v___x_800_; 
v___x_800_ = lean_mk_string_unchecked("\nthis is often due occurs-check failure", 39, 39);
return v___x_800_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3(void){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__2);
v___x_802_ = l_Lean_stringToMessageData(v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(lean_object* v_a_803_, lean_object* v_x_804_, lean_object* v_tacName_805_, uint8_t v_checkNewUnassigned_806_, lean_object* v_mvarCounter_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v___x_817_; 
lean_inc(v_a_803_);
v___x_817_ = l_Lean_MVarId_getType(v_a_803_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v___x_819_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref(v___x_817_);
lean_inc(v_a_803_);
v___x_819_ = l_Lean_MVarId_getTag(v_a_803_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_819_) == 0)
{
lean_object* v_a_820_; lean_object* v___x_821_; 
v_a_820_ = lean_ctor_get(v___x_819_, 0);
lean_inc(v_a_820_);
lean_dec_ref(v___x_819_);
lean_inc(v___y_815_);
lean_inc_ref(v___y_814_);
lean_inc(v___y_813_);
lean_inc_ref(v___y_812_);
lean_inc(v___y_811_);
lean_inc_ref(v___y_810_);
lean_inc(v___y_809_);
lean_inc_ref(v___y_808_);
v___x_821_ = lean_apply_11(v_x_804_, v_a_818_, v_a_820_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_, lean_box(0));
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v___y_824_; lean_object* v___y_825_; lean_object* v___y_826_; lean_object* v___y_827_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref(v___x_821_);
if (v_checkNewUnassigned_806_ == 0)
{
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
v___y_824_ = v___y_812_;
v___y_825_ = v___y_813_;
v___y_826_ = v___y_814_;
v___y_827_ = v___y_815_;
goto v___jp_823_;
}
else
{
lean_object* v___x_854_; 
lean_inc(v_a_822_);
v___x_854_ = l_Lean_Meta_getMVars(v_a_822_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_854_) == 0)
{
lean_object* v_a_855_; lean_object* v___x_856_; lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_855_ = lean_ctor_get(v___x_854_, 0);
lean_inc(v_a_855_);
lean_dec_ref(v___x_854_);
v___x_856_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_855_, v_mvarCounter_807_, v___y_813_, v___y_815_);
lean_dec(v_a_855_);
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref(v___x_856_);
v___x_858_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_857_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_, v___y_815_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v_a_857_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_dec_ref(v___x_858_);
v___y_824_ = v___y_812_;
v___y_825_ = v___y_813_;
v___y_826_ = v___y_814_;
v___y_827_ = v___y_815_;
goto v___jp_823_;
}
else
{
lean_dec(v_a_822_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v_tacName_805_);
lean_dec(v_a_803_);
return v___x_858_;
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec(v_a_822_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v_tacName_805_);
lean_dec(v_a_803_);
v_a_859_ = lean_ctor_get(v___x_854_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_854_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_854_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_854_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
v___jp_823_:
{
lean_object* v___x_828_; 
lean_inc(v___y_827_);
lean_inc_ref(v___y_826_);
lean_inc(v___y_825_);
lean_inc_ref(v___y_824_);
lean_inc(v_a_822_);
lean_inc(v_a_803_);
v___x_828_ = lean_checked_assign(v_a_803_, v_a_822_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_845_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_845_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_845_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_845_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
uint8_t v___x_833_; 
v___x_833_ = lean_unbox(v_a_829_);
lean_dec(v_a_829_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
lean_del_object(v___x_831_);
v___x_834_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__1);
v___x_835_ = l_Lean_indentExpr(v_a_822_);
v___x_836_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_836_, 0, v___x_834_);
lean_ctor_set(v___x_836_, 1, v___x_835_);
v___x_837_ = lean_obj_once(&l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3, &l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___closed__3);
v___x_838_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_838_, 0, v___x_836_);
lean_ctor_set(v___x_838_, 1, v___x_837_);
v___x_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
v___x_840_ = l_Lean_Meta_throwTacticEx___redArg(v_tacName_805_, v_a_803_, v___x_839_, v___y_824_, v___y_825_, v___y_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
return v___x_840_;
}
else
{
lean_object* v___x_841_; lean_object* v___x_843_; 
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v_a_822_);
lean_dec(v_tacName_805_);
lean_dec(v_a_803_);
v___x_841_ = lean_box(0);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 0, v___x_841_);
v___x_843_ = v___x_831_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_841_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v___y_827_);
lean_dec_ref(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
lean_dec(v_a_822_);
lean_dec(v_tacName_805_);
lean_dec(v_a_803_);
v_a_846_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_828_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_828_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_851_; 
if (v_isShared_849_ == 0)
{
v___x_851_ = v___x_848_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_a_846_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v_tacName_805_);
lean_dec(v_a_803_);
v_a_867_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_821_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_821_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
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
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
lean_dec(v_a_818_);
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v_tacName_805_);
lean_dec_ref(v_x_804_);
lean_dec(v_a_803_);
v_a_875_ = lean_ctor_get(v___x_819_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_819_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___x_819_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_819_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_dec(v___y_815_);
lean_dec_ref(v___y_814_);
lean_dec(v___y_813_);
lean_dec_ref(v___y_812_);
lean_dec(v___y_811_);
lean_dec_ref(v___y_810_);
lean_dec(v___y_809_);
lean_dec_ref(v___y_808_);
lean_dec(v_tacName_805_);
lean_dec_ref(v_x_804_);
lean_dec(v_a_803_);
v_a_883_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_817_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_817_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_888_; 
if (v_isShared_886_ == 0)
{
v___x_888_ = v___x_885_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_a_883_);
v___x_888_ = v_reuseFailAlloc_889_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
return v___x_888_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed(lean_object* v_a_891_, lean_object* v_x_892_, lean_object* v_tacName_893_, lean_object* v_checkNewUnassigned_894_, lean_object* v_mvarCounter_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
uint8_t v_checkNewUnassigned_boxed_905_; lean_object* v_res_906_; 
v_checkNewUnassigned_boxed_905_ = lean_unbox(v_checkNewUnassigned_894_);
v_res_906_ = l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0(v_a_891_, v_x_892_, v_tacName_893_, v_checkNewUnassigned_boxed_905_, v_mvarCounter_895_, v___y_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
lean_dec(v_mvarCounter_895_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing(lean_object* v_tacName_907_, lean_object* v_x_908_, uint8_t v_checkNewUnassigned_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_919_ = lean_st_ref_get(v_a_917_);
lean_dec(v___x_919_);
v___x_920_ = lean_st_ref_get(v_a_915_);
v___x_921_ = l_Lean_Elab_Tactic_popMainGoal___redArg(v_a_911_, v_a_914_, v_a_915_, v_a_916_, v_a_917_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_mctx_922_; lean_object* v_a_923_; lean_object* v_mvarCounter_924_; lean_object* v___x_925_; lean_object* v___f_926_; lean_object* v___x_927_; 
v_mctx_922_ = lean_ctor_get(v___x_920_, 0);
lean_inc_ref(v_mctx_922_);
lean_dec(v___x_920_);
v_a_923_ = lean_ctor_get(v___x_921_, 0);
lean_inc_n(v_a_923_, 3);
lean_dec_ref(v___x_921_);
v_mvarCounter_924_ = lean_ctor_get(v_mctx_922_, 3);
lean_inc(v_mvarCounter_924_);
lean_dec_ref(v_mctx_922_);
v___x_925_ = lean_box(v_checkNewUnassigned_909_);
v___f_926_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_closeMainGoalUsing___lam__0___boxed), 14, 5);
lean_closure_set(v___f_926_, 0, v_a_923_);
lean_closure_set(v___f_926_, 1, v_x_908_);
lean_closure_set(v___f_926_, 2, v_tacName_907_);
lean_closure_set(v___f_926_, 3, v___x_925_);
lean_closure_set(v___f_926_, 4, v_mvarCounter_924_);
v___x_927_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_closeMainGoalUsing_spec__0___redArg(v_a_923_, v___f_926_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_dec(v_a_923_);
return v___x_927_;
}
else
{
lean_object* v_a_928_; uint8_t v___y_930_; uint8_t v___x_940_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
v___x_940_ = l_Lean_Exception_isInterrupt(v_a_928_);
if (v___x_940_ == 0)
{
uint8_t v___x_941_; 
lean_inc(v_a_928_);
v___x_941_ = l_Lean_Exception_isRuntime(v_a_928_);
v___y_930_ = v___x_941_;
goto v___jp_929_;
}
else
{
v___y_930_ = v___x_940_;
goto v___jp_929_;
}
v___jp_929_:
{
if (v___y_930_ == 0)
{
lean_object* v___x_931_; 
lean_dec_ref(v___x_927_);
v___x_931_ = l_Lean_Elab_Tactic_pushGoal___redArg(v_a_923_, v_a_911_, v_a_917_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_938_; 
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_938_ == 0)
{
lean_object* v_unused_939_; 
v_unused_939_ = lean_ctor_get(v___x_931_, 0);
lean_dec(v_unused_939_);
v___x_933_ = v___x_931_;
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
else
{
lean_dec(v___x_931_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_938_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_936_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set_tag(v___x_933_, 1);
lean_ctor_set(v___x_933_, 0, v_a_928_);
v___x_936_ = v___x_933_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v_a_928_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
else
{
lean_dec(v_a_928_);
return v___x_931_;
}
}
else
{
lean_dec(v_a_928_);
lean_dec(v_a_923_);
return v___x_927_;
}
}
}
}
else
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_949_; 
lean_dec(v___x_920_);
lean_dec_ref(v_x_908_);
lean_dec(v_tacName_907_);
v_a_942_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_949_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_949_ == 0)
{
v___x_944_ = v___x_921_;
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_921_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_949_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v___x_947_; 
if (v_isShared_945_ == 0)
{
v___x_947_ = v___x_944_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_a_942_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_closeMainGoalUsing___boxed(lean_object* v_tacName_950_, lean_object* v_x_951_, lean_object* v_checkNewUnassigned_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
uint8_t v_checkNewUnassigned_boxed_962_; lean_object* v_res_963_; 
v_checkNewUnassigned_boxed_962_ = lean_unbox(v_checkNewUnassigned_952_);
v_res_963_ = l_Lean_Elab_Tactic_closeMainGoalUsing(v_tacName_950_, v_x_951_, v_checkNewUnassigned_boxed_962_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_, v_a_960_);
lean_dec(v_a_960_);
lean_dec_ref(v_a_959_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
return v_res_963_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
v___x_964_ = lean_box(0);
v___x_965_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_965_);
lean_ctor_set(v___x_966_, 1, v___x_964_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg(){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; 
v___x_968_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___closed__0);
v___x_969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_969_, 0, v___x_968_);
return v___x_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg___boxed(lean_object* v___y_970_){
_start:
{
lean_object* v_res_971_; 
v_res_971_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v_res_971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(lean_object* v_00_u03b1_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___boxed(lean_object* v_00_u03b1_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0(v_00_u03b1_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec_ref(v___y_984_);
return v_res_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0(lean_object* v___x_994_, lean_object* v_type_995_, lean_object* v_x_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___x_1006_; uint8_t v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1006_, 0, v_type_995_);
v___x_1007_ = 0;
v___x_1008_ = l_Lean_Elab_Tactic_elabTermEnsuringType(v___x_994_, v___x_1006_, v___x_1007_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
return v___x_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___lam__0___boxed(lean_object* v___x_1009_, lean_object* v_type_1010_, lean_object* v_x_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_Lean_Elab_Tactic_evalExact___lam__0(v___x_1009_, v_type_1010_, v_x_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v_x_1011_);
return v_res_1021_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExact___closed__0(void){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExact___closed__1(void){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExact___closed__2(void){
_start:
{
lean_object* v___x_1024_; 
v___x_1024_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_1024_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExact___closed__3(void){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = lean_mk_string_unchecked("exact", 5, 5);
return v___x_1025_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExact___closed__4(void){
_start:
{
lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1026_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__3, &l_Lean_Elab_Tactic_evalExact___closed__3_once, _init_l_Lean_Elab_Tactic_evalExact___closed__3);
v___x_1027_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_1028_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_1029_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_1030_ = l_Lean_Name_mkStr4(v___x_1029_, v___x_1028_, v___x_1027_, v___x_1026_);
return v___x_1030_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalExact___closed__5(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__3, &l_Lean_Elab_Tactic_evalExact___closed__3_once, _init_l_Lean_Elab_Tactic_evalExact___closed__3);
v___x_1032_ = l_Lean_Name_mkStr1(v___x_1031_);
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact(lean_object* v_stx_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_){
_start:
{
lean_object* v___x_1043_; uint8_t v___x_1044_; 
v___x_1043_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__4, &l_Lean_Elab_Tactic_evalExact___closed__4_once, _init_l_Lean_Elab_Tactic_evalExact___closed__4);
lean_inc(v_stx_1033_);
v___x_1044_ = l_Lean_Syntax_isOfKind(v_stx_1033_, v___x_1043_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; 
lean_dec(v_stx_1033_);
v___x_1045_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_1045_;
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1046_ = lean_unsigned_to_nat(1u);
v___x_1047_ = l_Lean_Syntax_getArg(v_stx_1033_, v___x_1046_);
lean_dec(v_stx_1033_);
v___f_1048_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExact___lam__0___boxed), 12, 1);
lean_closure_set(v___f_1048_, 0, v___x_1047_);
v___x_1049_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__5, &l_Lean_Elab_Tactic_evalExact___closed__5_once, _init_l_Lean_Elab_Tactic_evalExact___closed__5);
v___x_1050_ = l_Lean_Elab_Tactic_closeMainGoalUsing(v___x_1049_, v___f_1048_, v___x_1044_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalExact___boxed(lean_object* v_stx_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_){
_start:
{
lean_object* v_res_1061_; 
v_res_1061_ = l_Lean_Elab_Tactic_evalExact(v_stx_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_, v_a_1059_);
lean_dec(v_a_1059_);
lean_dec_ref(v_a_1058_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec(v_a_1053_);
lean_dec_ref(v_a_1052_);
return v_res_1061_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0(void){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_mk_string_unchecked("evalExact", 9, 9);
return v___x_1062_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1063_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__0);
v___x_1064_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_1065_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_1066_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_1067_ = l_Lean_Name_mkStr4(v___x_1066_, v___x_1065_, v___x_1064_, v___x_1063_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1(){
_start:
{
lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; 
v___x_1069_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_1070_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__4, &l_Lean_Elab_Tactic_evalExact___closed__4_once, _init_l_Lean_Elab_Tactic_evalExact___closed__4);
v___x_1071_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1);
v___x_1072_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalExact___boxed), 10, 0);
v___x_1073_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1069_, v___x_1070_, v___x_1071_, v___x_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___boxed(lean_object* v_a_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
return v_res_1075_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1076_ = lean_unsigned_to_nat(26u);
v___x_1077_ = lean_unsigned_to_nat(71u);
v___x_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
lean_ctor_set(v___x_1078_, 1, v___x_1076_);
return v___x_1078_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1079_ = lean_unsigned_to_nat(31u);
v___x_1080_ = lean_unsigned_to_nat(78u);
v___x_1081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1080_);
lean_ctor_set(v___x_1081_, 1, v___x_1079_);
return v___x_1081_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1082_ = lean_unsigned_to_nat(31u);
v___x_1083_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__1);
v___x_1084_ = lean_unsigned_to_nat(26u);
v___x_1085_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__0);
v___x_1086_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1085_);
lean_ctor_set(v___x_1086_, 1, v___x_1084_);
lean_ctor_set(v___x_1086_, 2, v___x_1083_);
lean_ctor_set(v___x_1086_, 3, v___x_1082_);
return v___x_1086_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1087_ = lean_unsigned_to_nat(30u);
v___x_1088_ = lean_unsigned_to_nat(71u);
v___x_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
lean_ctor_set(v___x_1089_, 1, v___x_1087_);
return v___x_1089_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1090_ = lean_unsigned_to_nat(39u);
v___x_1091_ = lean_unsigned_to_nat(71u);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v___x_1090_);
return v___x_1092_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; 
v___x_1093_ = lean_unsigned_to_nat(39u);
v___x_1094_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__4);
v___x_1095_ = lean_unsigned_to_nat(30u);
v___x_1096_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__3);
v___x_1097_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1097_, 0, v___x_1096_);
lean_ctor_set(v___x_1097_, 1, v___x_1095_);
lean_ctor_set(v___x_1097_, 2, v___x_1094_);
lean_ctor_set(v___x_1097_, 3, v___x_1093_);
return v___x_1097_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1098_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__5);
v___x_1099_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__2);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1099_);
lean_ctor_set(v___x_1100_, 1, v___x_1098_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3(){
_start:
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1102_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1___closed__1);
v___x_1103_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___closed__6);
v___x_1104_ = l_Lean_addBuiltinDeclarationRanges(v___x_1102_, v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3___boxed(lean_object* v_a_1105_){
_start:
{
lean_object* v_res_1106_; 
v_res_1106_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
return v_res_1106_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(lean_object* v_mctx_1107_, lean_object* v_mvarId_u2081_1108_, lean_object* v_mvarId_u2082_1109_){
_start:
{
lean_object* v_decl_u2081_1110_; lean_object* v_index_1111_; lean_object* v_decl_u2082_1112_; lean_object* v_index_1113_; uint8_t v___x_1114_; 
lean_inc(v_mvarId_u2081_1108_);
v_decl_u2081_1110_ = l_Lean_MetavarContext_getDecl(v_mctx_1107_, v_mvarId_u2081_1108_);
v_index_1111_ = lean_ctor_get(v_decl_u2081_1110_, 6);
lean_inc(v_index_1111_);
lean_dec_ref(v_decl_u2081_1110_);
lean_inc(v_mvarId_u2082_1109_);
v_decl_u2082_1112_ = l_Lean_MetavarContext_getDecl(v_mctx_1107_, v_mvarId_u2082_1109_);
v_index_1113_ = lean_ctor_get(v_decl_u2082_1112_, 6);
lean_inc(v_index_1113_);
lean_dec_ref(v_decl_u2082_1112_);
v___x_1114_ = lean_nat_dec_eq(v_index_1111_, v_index_1113_);
if (v___x_1114_ == 0)
{
uint8_t v___x_1115_; 
lean_dec(v_mvarId_u2082_1109_);
lean_dec(v_mvarId_u2081_1108_);
v___x_1115_ = lean_nat_dec_lt(v_index_1111_, v_index_1113_);
lean_dec(v_index_1113_);
lean_dec(v_index_1111_);
return v___x_1115_;
}
else
{
uint8_t v___x_1116_; 
lean_dec(v_index_1113_);
lean_dec(v_index_1111_);
v___x_1116_ = l_Lean_Name_quickLt(v_mvarId_u2081_1108_, v_mvarId_u2082_1109_);
lean_dec(v_mvarId_u2082_1109_);
lean_dec(v_mvarId_u2081_1108_);
return v___x_1116_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed(lean_object* v_mctx_1117_, lean_object* v_mvarId_u2081_1118_, lean_object* v_mvarId_u2082_1119_){
_start:
{
uint8_t v_res_1120_; lean_object* v_r_1121_; 
v_res_1120_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0(v_mctx_1117_, v_mvarId_u2081_1118_, v_mvarId_u2082_1119_);
lean_dec_ref(v_mctx_1117_);
v_r_1121_ = lean_box(v_res_1120_);
return v_r_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1(lean_object* v_mvarIds_1122_, lean_object* v_toPure_1123_, lean_object* v_mctx_1124_){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; 
v___x_1125_ = lean_array_get_size(v_mvarIds_1122_);
v___x_1126_ = lean_unsigned_to_nat(0u);
v___x_1127_ = lean_nat_dec_eq(v___x_1125_, v___x_1126_);
if (v___x_1127_ == 0)
{
lean_object* v___f_1128_; lean_object* v___y_1130_; lean_object* v___y_1131_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___y_1137_; uint8_t v___x_1139_; 
v___f_1128_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1128_, 0, v_mctx_1124_);
v___x_1134_ = lean_unsigned_to_nat(1u);
v___x_1135_ = lean_nat_sub(v___x_1125_, v___x_1134_);
v___x_1139_ = lean_nat_dec_le(v___x_1126_, v___x_1135_);
if (v___x_1139_ == 0)
{
lean_inc(v___x_1135_);
v___y_1137_ = v___x_1135_;
goto v___jp_1136_;
}
else
{
v___y_1137_ = v___x_1126_;
goto v___jp_1136_;
}
v___jp_1129_:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_1128_, v___x_1125_, v_mvarIds_1122_, v___y_1130_, v___y_1131_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_1131_);
v___x_1133_ = lean_apply_2(v_toPure_1123_, lean_box(0), v___x_1132_);
return v___x_1133_;
}
v___jp_1136_:
{
uint8_t v___x_1138_; 
v___x_1138_ = lean_nat_dec_le(v___y_1137_, v___x_1135_);
if (v___x_1138_ == 0)
{
lean_dec(v___x_1135_);
lean_inc(v___y_1137_);
v___y_1130_ = v___y_1137_;
v___y_1131_ = v___y_1137_;
goto v___jp_1129_;
}
else
{
v___y_1130_ = v___y_1137_;
v___y_1131_ = v___x_1135_;
goto v___jp_1129_;
}
}
}
else
{
lean_object* v___x_1140_; 
lean_dec_ref(v_mctx_1124_);
v___x_1140_ = lean_apply_2(v_toPure_1123_, lean_box(0), v_mvarIds_1122_);
return v___x_1140_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(lean_object* v_inst_1141_, lean_object* v_inst_1142_, lean_object* v_mvarIds_1143_){
_start:
{
lean_object* v_toApplicative_1144_; lean_object* v_toBind_1145_; lean_object* v_getMCtx_1146_; lean_object* v_toPure_1147_; lean_object* v___f_1148_; lean_object* v___x_1149_; 
v_toApplicative_1144_ = lean_ctor_get(v_inst_1142_, 0);
lean_inc_ref(v_toApplicative_1144_);
v_toBind_1145_ = lean_ctor_get(v_inst_1142_, 1);
lean_inc(v_toBind_1145_);
lean_dec_ref(v_inst_1142_);
v_getMCtx_1146_ = lean_ctor_get(v_inst_1141_, 0);
lean_inc(v_getMCtx_1146_);
lean_dec_ref(v_inst_1141_);
v_toPure_1147_ = lean_ctor_get(v_toApplicative_1144_, 1);
lean_inc(v_toPure_1147_);
lean_dec_ref(v_toApplicative_1144_);
v___f_1148_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1148_, 0, v_mvarIds_1143_);
lean_closure_set(v___f_1148_, 1, v_toPure_1147_);
v___x_1149_ = lean_apply_4(v_toBind_1145_, lean_box(0), lean_box(0), v_getMCtx_1146_, v___f_1148_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex(lean_object* v_m_1150_, lean_object* v_inst_1151_, lean_object* v_inst_1152_, lean_object* v_mvarIds_1153_){
_start:
{
lean_object* v___x_1154_; 
v___x_1154_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1151_, v_inst_1152_, v_mvarIds_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex___redArg(lean_object* v_inst_1155_, lean_object* v_inst_1156_, lean_object* v_mvarIds_1157_){
_start:
{
lean_object* v___x_1158_; 
v___x_1158_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1155_, v_inst_1156_, v_mvarIds_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdsByIndex(lean_object* v_m_1159_, lean_object* v_inst_1160_, lean_object* v_inst_1161_, lean_object* v_mvarIds_1162_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v_inst_1160_, v_inst_1161_, v_mvarIds_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_){
_start:
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v_mctx_1171_; lean_object* v___x_1172_; 
v___x_1169_ = lean_st_ref_get(v___y_1167_);
lean_dec(v___x_1169_);
v___x_1170_ = lean_st_ref_get(v___y_1165_);
v_mctx_1171_ = lean_ctor_get(v___x_1170_, 0);
lean_inc_ref(v_mctx_1171_);
lean_dec(v___x_1170_);
v___x_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1172_, 0, v_mctx_1171_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed(lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0(v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1(lean_object* v_val_1179_, lean_object* v_toPure_1180_, lean_object* v_newMVarIds_1181_){
_start:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; 
v___x_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1182_, 0, v_val_1179_);
lean_ctor_set(v___x_1182_, 1, v_newMVarIds_1181_);
v___x_1183_ = lean_apply_2(v_toPure_1180_, lean_box(0), v___x_1182_);
return v___x_1183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2(lean_object* v___x_1184_, lean_object* v___x_1185_, lean_object* v_inst_1186_, lean_object* v_toBind_1187_, lean_object* v___f_1188_, lean_object* v_newMVarIds_1189_){
_start:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v___x_1190_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___redArg(v___x_1184_, v___x_1185_, v_newMVarIds_1189_);
v___x_1191_ = lean_apply_2(v_inst_1186_, lean_box(0), v___x_1190_);
v___x_1192_ = lean_apply_4(v_toBind_1187_, lean_box(0), lean_box(0), v___x_1191_, v___f_1188_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3(lean_object* v_mvarCounter_1193_, lean_object* v_inst_1194_, lean_object* v_toBind_1195_, lean_object* v___f_1196_, lean_object* v_newMVarIds_1197_){
_start:
{
lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v___x_1198_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_filterOldMVars___boxed), 7, 2);
lean_closure_set(v___x_1198_, 0, v_newMVarIds_1197_);
lean_closure_set(v___x_1198_, 1, v_mvarCounter_1193_);
v___x_1199_ = lean_apply_2(v_inst_1194_, lean_box(0), v___x_1198_);
v___x_1200_ = lean_apply_4(v_toBind_1195_, lean_box(0), lean_box(0), v___x_1199_, v___f_1196_);
return v___x_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4(lean_object* v_toPure_1201_, lean_object* v___x_1202_, lean_object* v___x_1203_, lean_object* v_inst_1204_, lean_object* v_toBind_1205_, lean_object* v_mvarCounter_1206_, lean_object* v_val_1207_){
_start:
{
lean_object* v___f_1208_; lean_object* v___f_1209_; lean_object* v___f_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
lean_inc_ref(v_val_1207_);
v___f_1208_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1208_, 0, v_val_1207_);
lean_closure_set(v___f_1208_, 1, v_toPure_1201_);
lean_inc_n(v_toBind_1205_, 2);
lean_inc_n(v_inst_1204_, 2);
v___f_1209_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__2), 6, 5);
lean_closure_set(v___f_1209_, 0, v___x_1202_);
lean_closure_set(v___f_1209_, 1, v___x_1203_);
lean_closure_set(v___f_1209_, 2, v_inst_1204_);
lean_closure_set(v___f_1209_, 3, v_toBind_1205_);
lean_closure_set(v___f_1209_, 4, v___f_1208_);
v___f_1210_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1210_, 0, v_mvarCounter_1206_);
lean_closure_set(v___f_1210_, 1, v_inst_1204_);
lean_closure_set(v___f_1210_, 2, v_toBind_1205_);
lean_closure_set(v___f_1210_, 3, v___f_1209_);
v___x_1211_ = lean_alloc_closure((void*)(l_Lean_Meta_getMVarsNoDelayed___boxed), 6, 1);
lean_closure_set(v___x_1211_, 0, v_val_1207_);
v___x_1212_ = lean_apply_2(v_inst_1204_, lean_box(0), v___x_1211_);
v___x_1213_ = lean_apply_4(v_toBind_1205_, lean_box(0), lean_box(0), v___x_1212_, v___f_1210_);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5(lean_object* v_toPure_1214_, lean_object* v___x_1215_, lean_object* v___x_1216_, lean_object* v_inst_1217_, lean_object* v_toBind_1218_, lean_object* v_k_1219_, lean_object* v_____do__lift_1220_){
_start:
{
lean_object* v_mvarCounter_1221_; lean_object* v___f_1222_; lean_object* v___x_1223_; 
v_mvarCounter_1221_ = lean_ctor_get(v_____do__lift_1220_, 3);
lean_inc(v_mvarCounter_1221_);
lean_dec_ref(v_____do__lift_1220_);
lean_inc(v_toBind_1218_);
v___f_1222_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__4), 7, 6);
lean_closure_set(v___f_1222_, 0, v_toPure_1214_);
lean_closure_set(v___f_1222_, 1, v___x_1215_);
lean_closure_set(v___f_1222_, 2, v___x_1216_);
lean_closure_set(v___f_1222_, 3, v_inst_1217_);
lean_closure_set(v___f_1222_, 4, v_toBind_1218_);
lean_closure_set(v___f_1222_, 5, v_mvarCounter_1221_);
v___x_1223_ = lean_apply_4(v_toBind_1218_, lean_box(0), lean_box(0), v_k_1219_, v___f_1222_);
return v___x_1223_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0(void){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = l_instMonadEIO(lean_box(0));
return v___x_1224_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1(void){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__0);
v___x_1226_ = l_StateRefT_x27_instMonad___redArg(v___x_1225_);
return v___x_1226_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2(void){
_start:
{
lean_object* v___f_1227_; 
v___f_1227_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1227_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3(void){
_start:
{
lean_object* v___f_1228_; 
v___f_1228_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1228_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4(void){
_start:
{
lean_object* v___f_1229_; 
v___f_1229_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_1229_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5(void){
_start:
{
lean_object* v___f_1230_; 
v___f_1230_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_1230_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6(void){
_start:
{
lean_object* v___f_1231_; 
v___f_1231_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__0___boxed), 5, 0);
return v___f_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___redArg(lean_object* v_inst_1232_, lean_object* v_inst_1233_, lean_object* v_k_1234_){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v_toApplicative_1237_; lean_object* v_toFunctor_1238_; lean_object* v_toSeq_1239_; lean_object* v_toSeqLeft_1240_; lean_object* v_toSeqRight_1241_; lean_object* v___f_1242_; lean_object* v___f_1243_; lean_object* v___f_1244_; lean_object* v___f_1245_; lean_object* v___x_1246_; lean_object* v___f_1247_; lean_object* v___f_1248_; lean_object* v___f_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v_toApplicative_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1287_; 
v___x_1235_ = l_Lean_Meta_instMonadMCtxMetaM;
v___x_1236_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__1);
v_toApplicative_1237_ = lean_ctor_get(v___x_1236_, 0);
v_toFunctor_1238_ = lean_ctor_get(v_toApplicative_1237_, 0);
v_toSeq_1239_ = lean_ctor_get(v_toApplicative_1237_, 2);
v_toSeqLeft_1240_ = lean_ctor_get(v_toApplicative_1237_, 3);
v_toSeqRight_1241_ = lean_ctor_get(v_toApplicative_1237_, 4);
v___f_1242_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__2);
v___f_1243_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_1238_, 2);
v___f_1244_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1244_, 0, v_toFunctor_1238_);
v___f_1245_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1245_, 0, v_toFunctor_1238_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___f_1244_);
lean_ctor_set(v___x_1246_, 1, v___f_1245_);
lean_inc(v_toSeqRight_1241_);
v___f_1247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1247_, 0, v_toSeqRight_1241_);
lean_inc(v_toSeqLeft_1240_);
v___f_1248_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1248_, 0, v_toSeqLeft_1240_);
lean_inc(v_toSeq_1239_);
v___f_1249_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1249_, 0, v_toSeq_1239_);
v___x_1250_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1250_, 0, v___x_1246_);
lean_ctor_set(v___x_1250_, 1, v___f_1242_);
lean_ctor_set(v___x_1250_, 2, v___f_1249_);
lean_ctor_set(v___x_1250_, 3, v___f_1248_);
lean_ctor_set(v___x_1250_, 4, v___f_1247_);
v___x_1251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___f_1243_);
v___x_1252_ = l_StateRefT_x27_instMonad___redArg(v___x_1251_);
v_toApplicative_1253_ = lean_ctor_get(v___x_1252_, 0);
v_isSharedCheck_1287_ = !lean_is_exclusive(v___x_1252_);
if (v_isSharedCheck_1287_ == 0)
{
lean_object* v_unused_1288_; 
v_unused_1288_ = lean_ctor_get(v___x_1252_, 1);
lean_dec(v_unused_1288_);
v___x_1255_ = v___x_1252_;
v_isShared_1256_ = v_isSharedCheck_1287_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_toApplicative_1253_);
lean_dec(v___x_1252_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1287_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v_toFunctor_1257_; lean_object* v_toSeq_1258_; lean_object* v_toSeqLeft_1259_; lean_object* v_toSeqRight_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1285_; 
v_toFunctor_1257_ = lean_ctor_get(v_toApplicative_1253_, 0);
v_toSeq_1258_ = lean_ctor_get(v_toApplicative_1253_, 2);
v_toSeqLeft_1259_ = lean_ctor_get(v_toApplicative_1253_, 3);
v_toSeqRight_1260_ = lean_ctor_get(v_toApplicative_1253_, 4);
v_isSharedCheck_1285_ = !lean_is_exclusive(v_toApplicative_1253_);
if (v_isSharedCheck_1285_ == 0)
{
lean_object* v_unused_1286_; 
v_unused_1286_ = lean_ctor_get(v_toApplicative_1253_, 1);
lean_dec(v_unused_1286_);
v___x_1262_ = v_toApplicative_1253_;
v_isShared_1263_ = v_isSharedCheck_1285_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_toSeqRight_1260_);
lean_inc(v_toSeqLeft_1259_);
lean_inc(v_toSeq_1258_);
lean_inc(v_toFunctor_1257_);
lean_dec(v_toApplicative_1253_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1285_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___f_1264_; lean_object* v___f_1265_; lean_object* v___f_1266_; lean_object* v___f_1267_; lean_object* v___x_1268_; lean_object* v___f_1269_; lean_object* v___f_1270_; lean_object* v___f_1271_; lean_object* v___x_1273_; 
v___f_1264_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__4);
v___f_1265_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__5);
lean_inc_ref(v_toFunctor_1257_);
v___f_1266_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1266_, 0, v_toFunctor_1257_);
v___f_1267_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1267_, 0, v_toFunctor_1257_);
v___x_1268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1268_, 0, v___f_1266_);
lean_ctor_set(v___x_1268_, 1, v___f_1267_);
v___f_1269_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1269_, 0, v_toSeqRight_1260_);
v___f_1270_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1270_, 0, v_toSeqLeft_1259_);
v___f_1271_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1271_, 0, v_toSeq_1258_);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v___f_1269_);
lean_ctor_set(v___x_1262_, 3, v___f_1270_);
lean_ctor_set(v___x_1262_, 2, v___f_1271_);
lean_ctor_set(v___x_1262_, 1, v___f_1264_);
lean_ctor_set(v___x_1262_, 0, v___x_1268_);
v___x_1273_ = v___x_1262_;
goto v_reusejp_1272_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v___x_1268_);
lean_ctor_set(v_reuseFailAlloc_1284_, 1, v___f_1264_);
lean_ctor_set(v_reuseFailAlloc_1284_, 2, v___f_1271_);
lean_ctor_set(v_reuseFailAlloc_1284_, 3, v___f_1270_);
lean_ctor_set(v_reuseFailAlloc_1284_, 4, v___f_1269_);
v___x_1273_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1272_;
}
v_reusejp_1272_:
{
lean_object* v___x_1275_; 
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 1, v___f_1265_);
lean_ctor_set(v___x_1255_, 0, v___x_1273_);
v___x_1275_ = v___x_1255_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v___f_1265_);
v___x_1275_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
lean_object* v_toApplicative_1276_; lean_object* v_toBind_1277_; lean_object* v_toPure_1278_; lean_object* v___f_1279_; lean_object* v___x_1280_; lean_object* v___f_1281_; lean_object* v___x_1282_; 
v_toApplicative_1276_ = lean_ctor_get(v_inst_1232_, 0);
lean_inc_ref(v_toApplicative_1276_);
v_toBind_1277_ = lean_ctor_get(v_inst_1232_, 1);
lean_inc_n(v_toBind_1277_, 2);
lean_dec_ref(v_inst_1232_);
v_toPure_1278_ = lean_ctor_get(v_toApplicative_1276_, 1);
lean_inc(v_toPure_1278_);
lean_dec_ref(v_toApplicative_1276_);
v___f_1279_ = lean_obj_once(&l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6, &l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_collectFreshMVars___redArg___closed__6);
lean_inc(v_inst_1233_);
v___x_1280_ = lean_apply_2(v_inst_1233_, lean_box(0), v___f_1279_);
v___f_1281_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_collectFreshMVars___redArg___lam__5), 7, 6);
lean_closure_set(v___f_1281_, 0, v_toPure_1278_);
lean_closure_set(v___f_1281_, 1, v___x_1235_);
lean_closure_set(v___f_1281_, 2, v___x_1275_);
lean_closure_set(v___f_1281_, 3, v_inst_1233_);
lean_closure_set(v___f_1281_, 4, v_toBind_1277_);
lean_closure_set(v___f_1281_, 5, v_k_1234_);
v___x_1282_ = lean_apply_4(v_toBind_1277_, lean_box(0), lean_box(0), v___x_1280_, v___f_1281_);
return v___x_1282_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars(lean_object* v_m_1289_, lean_object* v_inst_1290_, lean_object* v_inst_1291_, lean_object* v_k_1292_){
_start:
{
lean_object* v___x_1293_; 
v___x_1293_ = l_Lean_Elab_Tactic_collectFreshMVars___redArg(v_inst_1290_, v_inst_1291_, v_k_1292_);
return v___x_1293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(lean_object* v_as_1294_, size_t v_i_1295_, size_t v_stop_1296_, lean_object* v_b_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v_a_1306_; uint8_t v___x_1310_; 
v___x_1310_ = lean_usize_dec_eq(v_i_1295_, v_stop_1296_);
if (v___x_1310_ == 0)
{
lean_object* v___x_1311_; lean_object* v___x_1314_; 
v___x_1311_ = lean_array_uget_borrowed(v_as_1294_, v_i_1295_);
lean_inc(v___x_1311_);
v___x_1314_ = l_Lean_Elab_Term_isLetRecAuxMVar(v___x_1311_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1315_; uint8_t v___x_1316_; 
v_a_1315_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_a_1315_);
lean_dec_ref(v___x_1314_);
v___x_1316_ = lean_unbox(v_a_1315_);
lean_dec(v_a_1315_);
if (v___x_1316_ == 0)
{
goto v___jp_1312_;
}
else
{
v_a_1306_ = v_b_1297_;
goto v___jp_1305_;
}
}
else
{
if (lean_obj_tag(v___x_1314_) == 0)
{
lean_object* v_a_1317_; uint8_t v___x_1318_; 
v_a_1317_ = lean_ctor_get(v___x_1314_, 0);
lean_inc(v_a_1317_);
lean_dec_ref(v___x_1314_);
v___x_1318_ = lean_unbox(v_a_1317_);
lean_dec(v_a_1317_);
if (v___x_1318_ == 0)
{
v_a_1306_ = v_b_1297_;
goto v___jp_1305_;
}
else
{
goto v___jp_1312_;
}
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec_ref(v_b_1297_);
v_a_1319_ = lean_ctor_get(v___x_1314_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1314_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1314_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1314_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
lean_object* v___x_1324_; 
if (v_isShared_1322_ == 0)
{
v___x_1324_ = v___x_1321_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1325_; 
v_reuseFailAlloc_1325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1325_, 0, v_a_1319_);
v___x_1324_ = v_reuseFailAlloc_1325_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
return v___x_1324_;
}
}
}
}
v___jp_1312_:
{
lean_object* v___x_1313_; 
lean_inc(v___x_1311_);
v___x_1313_ = lean_array_push(v_b_1297_, v___x_1311_);
v_a_1306_ = v___x_1313_;
goto v___jp_1305_;
}
}
else
{
lean_object* v___x_1327_; 
v___x_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1327_, 0, v_b_1297_);
return v___x_1327_;
}
v___jp_1305_:
{
size_t v___x_1307_; size_t v___x_1308_; 
v___x_1307_ = ((size_t)1ULL);
v___x_1308_ = lean_usize_add(v_i_1295_, v___x_1307_);
v_i_1295_ = v___x_1308_;
v_b_1297_ = v_a_1306_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg___boxed(lean_object* v_as_1328_, lean_object* v_i_1329_, lean_object* v_stop_1330_, lean_object* v_b_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_){
_start:
{
size_t v_i_boxed_1339_; size_t v_stop_boxed_1340_; lean_object* v_res_1341_; 
v_i_boxed_1339_ = lean_unbox_usize(v_i_1329_);
lean_dec(v_i_1329_);
v_stop_boxed_1340_ = lean_unbox_usize(v_stop_1330_);
lean_dec(v_stop_1330_);
v_res_1341_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_as_1328_, v_i_boxed_1339_, v_stop_boxed_1340_, v_b_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec_ref(v_as_1328_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v___x_1342_, lean_object* v_hi_1343_, lean_object* v_pivot_1344_, lean_object* v_as_1345_, lean_object* v_i_1346_, lean_object* v_k_1347_){
_start:
{
uint8_t v___y_1349_; uint8_t v___x_1358_; 
v___x_1358_ = lean_nat_dec_lt(v_k_1347_, v_hi_1343_);
if (v___x_1358_ == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec(v_k_1347_);
lean_dec(v_pivot_1344_);
v___x_1359_ = lean_array_fswap(v_as_1345_, v_i_1346_, v_hi_1343_);
v___x_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1360_, 0, v_i_1346_);
lean_ctor_set(v___x_1360_, 1, v___x_1359_);
return v___x_1360_;
}
else
{
lean_object* v___x_1361_; lean_object* v_decl_u2081_1362_; lean_object* v_index_1363_; lean_object* v_decl_u2082_1364_; lean_object* v_index_1365_; uint8_t v___x_1366_; 
v___x_1361_ = lean_array_fget_borrowed(v_as_1345_, v_k_1347_);
lean_inc(v___x_1361_);
v_decl_u2081_1362_ = l_Lean_MetavarContext_getDecl(v___x_1342_, v___x_1361_);
v_index_1363_ = lean_ctor_get(v_decl_u2081_1362_, 6);
lean_inc(v_index_1363_);
lean_dec_ref(v_decl_u2081_1362_);
lean_inc(v_pivot_1344_);
v_decl_u2082_1364_ = l_Lean_MetavarContext_getDecl(v___x_1342_, v_pivot_1344_);
v_index_1365_ = lean_ctor_get(v_decl_u2082_1364_, 6);
lean_inc(v_index_1365_);
lean_dec_ref(v_decl_u2082_1364_);
v___x_1366_ = lean_nat_dec_eq(v_index_1363_, v_index_1365_);
if (v___x_1366_ == 0)
{
uint8_t v___x_1367_; 
v___x_1367_ = lean_nat_dec_lt(v_index_1363_, v_index_1365_);
lean_dec(v_index_1365_);
lean_dec(v_index_1363_);
v___y_1349_ = v___x_1367_;
goto v___jp_1348_;
}
else
{
uint8_t v___x_1368_; 
lean_dec(v_index_1365_);
lean_dec(v_index_1363_);
v___x_1368_ = l_Lean_Name_quickLt(v___x_1361_, v_pivot_1344_);
v___y_1349_ = v___x_1368_;
goto v___jp_1348_;
}
}
v___jp_1348_:
{
if (v___y_1349_ == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
v___x_1350_ = lean_unsigned_to_nat(1u);
v___x_1351_ = lean_nat_add(v_k_1347_, v___x_1350_);
lean_dec(v_k_1347_);
v_k_1347_ = v___x_1351_;
goto _start;
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v___x_1353_ = lean_array_fswap(v_as_1345_, v_i_1346_, v_k_1347_);
v___x_1354_ = lean_unsigned_to_nat(1u);
v___x_1355_ = lean_nat_add(v_i_1346_, v___x_1354_);
lean_dec(v_i_1346_);
v___x_1356_ = lean_nat_add(v_k_1347_, v___x_1354_);
lean_dec(v_k_1347_);
v_as_1345_ = v___x_1353_;
v_i_1346_ = v___x_1355_;
v_k_1347_ = v___x_1356_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v___x_1369_, lean_object* v_hi_1370_, lean_object* v_pivot_1371_, lean_object* v_as_1372_, lean_object* v_i_1373_, lean_object* v_k_1374_){
_start:
{
lean_object* v_res_1375_; 
v_res_1375_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1369_, v_hi_1370_, v_pivot_1371_, v_as_1372_, v_i_1373_, v_k_1374_);
lean_dec(v_hi_1370_);
lean_dec_ref(v___x_1369_);
return v_res_1375_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v___x_1376_, lean_object* v_mvarId_u2081_1377_, lean_object* v_mvarId_u2082_1378_){
_start:
{
lean_object* v_decl_u2081_1379_; lean_object* v_index_1380_; lean_object* v_decl_u2082_1381_; lean_object* v_index_1382_; uint8_t v___x_1383_; 
lean_inc(v_mvarId_u2081_1377_);
v_decl_u2081_1379_ = l_Lean_MetavarContext_getDecl(v___x_1376_, v_mvarId_u2081_1377_);
v_index_1380_ = lean_ctor_get(v_decl_u2081_1379_, 6);
lean_inc(v_index_1380_);
lean_dec_ref(v_decl_u2081_1379_);
lean_inc(v_mvarId_u2082_1378_);
v_decl_u2082_1381_ = l_Lean_MetavarContext_getDecl(v___x_1376_, v_mvarId_u2082_1378_);
v_index_1382_ = lean_ctor_get(v_decl_u2082_1381_, 6);
lean_inc(v_index_1382_);
lean_dec_ref(v_decl_u2082_1381_);
v___x_1383_ = lean_nat_dec_eq(v_index_1380_, v_index_1382_);
if (v___x_1383_ == 0)
{
uint8_t v___x_1384_; 
lean_dec(v_mvarId_u2082_1378_);
lean_dec(v_mvarId_u2081_1377_);
v___x_1384_ = lean_nat_dec_lt(v_index_1380_, v_index_1382_);
lean_dec(v_index_1382_);
lean_dec(v_index_1380_);
return v___x_1384_;
}
else
{
uint8_t v___x_1385_; 
lean_dec(v_index_1382_);
lean_dec(v_index_1380_);
v___x_1385_ = l_Lean_Name_quickLt(v_mvarId_u2081_1377_, v_mvarId_u2082_1378_);
lean_dec(v_mvarId_u2082_1378_);
lean_dec(v_mvarId_u2081_1377_);
return v___x_1385_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v___x_1386_, lean_object* v_mvarId_u2081_1387_, lean_object* v_mvarId_u2082_1388_){
_start:
{
uint8_t v_res_1389_; lean_object* v_r_1390_; 
v_res_1389_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1386_, v_mvarId_u2081_1387_, v_mvarId_u2082_1388_);
lean_dec_ref(v___x_1386_);
v_r_1390_ = lean_box(v_res_1389_);
return v_r_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(lean_object* v___x_1391_, lean_object* v_n_1392_, lean_object* v_as_1393_, lean_object* v_lo_1394_, lean_object* v_hi_1395_){
_start:
{
lean_object* v___y_1397_; uint8_t v___x_1407_; 
v___x_1407_ = lean_nat_dec_lt(v_lo_1394_, v_hi_1395_);
if (v___x_1407_ == 0)
{
lean_dec(v_lo_1394_);
return v_as_1393_;
}
else
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v_mid_1410_; lean_object* v___y_1412_; lean_object* v___y_1418_; lean_object* v___x_1423_; lean_object* v___x_1424_; uint8_t v___x_1425_; 
v___x_1408_ = lean_nat_add(v_lo_1394_, v_hi_1395_);
v___x_1409_ = lean_unsigned_to_nat(1u);
v_mid_1410_ = lean_nat_shiftr(v___x_1408_, v___x_1409_);
lean_dec(v___x_1408_);
v___x_1423_ = lean_array_fget_borrowed(v_as_1393_, v_mid_1410_);
v___x_1424_ = lean_array_fget_borrowed(v_as_1393_, v_lo_1394_);
lean_inc(v___x_1424_);
lean_inc(v___x_1423_);
v___x_1425_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1391_, v___x_1423_, v___x_1424_);
if (v___x_1425_ == 0)
{
v___y_1418_ = v_as_1393_;
goto v___jp_1417_;
}
else
{
lean_object* v___x_1426_; 
v___x_1426_ = lean_array_fswap(v_as_1393_, v_lo_1394_, v_mid_1410_);
v___y_1418_ = v___x_1426_;
goto v___jp_1417_;
}
v___jp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; 
v___x_1413_ = lean_array_fget_borrowed(v___y_1412_, v_mid_1410_);
v___x_1414_ = lean_array_fget_borrowed(v___y_1412_, v_hi_1395_);
lean_inc(v___x_1414_);
lean_inc(v___x_1413_);
v___x_1415_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1391_, v___x_1413_, v___x_1414_);
if (v___x_1415_ == 0)
{
lean_dec(v_mid_1410_);
v___y_1397_ = v___y_1412_;
goto v___jp_1396_;
}
else
{
lean_object* v___x_1416_; 
v___x_1416_ = lean_array_fswap(v___y_1412_, v_mid_1410_, v_hi_1395_);
lean_dec(v_mid_1410_);
v___y_1397_ = v___x_1416_;
goto v___jp_1396_;
}
}
v___jp_1417_:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; uint8_t v___x_1421_; 
v___x_1419_ = lean_array_fget_borrowed(v___y_1418_, v_hi_1395_);
v___x_1420_ = lean_array_fget_borrowed(v___y_1418_, v_lo_1394_);
lean_inc(v___x_1420_);
lean_inc(v___x_1419_);
v___x_1421_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___lam__0(v___x_1391_, v___x_1419_, v___x_1420_);
if (v___x_1421_ == 0)
{
v___y_1412_ = v___y_1418_;
goto v___jp_1411_;
}
else
{
lean_object* v___x_1422_; 
v___x_1422_ = lean_array_fswap(v___y_1418_, v_lo_1394_, v_hi_1395_);
v___y_1412_ = v___x_1422_;
goto v___jp_1411_;
}
}
}
v___jp_1396_:
{
lean_object* v_pivot_1398_; lean_object* v___x_1399_; lean_object* v_fst_1400_; lean_object* v_snd_1401_; uint8_t v___x_1402_; 
v_pivot_1398_ = lean_array_fget(v___y_1397_, v_hi_1395_);
lean_inc_n(v_lo_1394_, 2);
v___x_1399_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1391_, v_hi_1395_, v_pivot_1398_, v___y_1397_, v_lo_1394_, v_lo_1394_);
v_fst_1400_ = lean_ctor_get(v___x_1399_, 0);
lean_inc(v_fst_1400_);
v_snd_1401_ = lean_ctor_get(v___x_1399_, 1);
lean_inc(v_snd_1401_);
lean_dec_ref(v___x_1399_);
v___x_1402_ = lean_nat_dec_le(v_hi_1395_, v_fst_1400_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1403_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1391_, v_n_1392_, v_snd_1401_, v_lo_1394_, v_fst_1400_);
v___x_1404_ = lean_unsigned_to_nat(1u);
v___x_1405_ = lean_nat_add(v_fst_1400_, v___x_1404_);
lean_dec(v_fst_1400_);
v_as_1393_ = v___x_1403_;
v_lo_1394_ = v___x_1405_;
goto _start;
}
else
{
lean_dec(v_fst_1400_);
lean_dec(v_lo_1394_);
return v_snd_1401_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_1427_, lean_object* v_n_1428_, lean_object* v_as_1429_, lean_object* v_lo_1430_, lean_object* v_hi_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1427_, v_n_1428_, v_as_1429_, v_lo_1430_, v_hi_1431_);
lean_dec(v_hi_1431_);
lean_dec(v_n_1428_);
lean_dec_ref(v___x_1427_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(lean_object* v_mvarIds_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v_mctx_1439_; lean_object* v___x_1440_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___x_1446_; uint8_t v___x_1447_; 
v___x_1437_ = lean_st_ref_get(v___y_1435_);
lean_dec(v___x_1437_);
v___x_1438_ = lean_st_ref_get(v___y_1434_);
v_mctx_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc_ref(v_mctx_1439_);
lean_dec(v___x_1438_);
v___x_1440_ = lean_array_get_size(v_mvarIds_1433_);
v___x_1446_ = lean_unsigned_to_nat(0u);
v___x_1447_ = lean_nat_dec_eq(v___x_1440_, v___x_1446_);
if (v___x_1447_ == 0)
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___y_1451_; uint8_t v___x_1453_; 
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = lean_nat_sub(v___x_1440_, v___x_1448_);
v___x_1453_ = lean_nat_dec_le(v___x_1446_, v___x_1449_);
if (v___x_1453_ == 0)
{
lean_inc(v___x_1449_);
v___y_1451_ = v___x_1449_;
goto v___jp_1450_;
}
else
{
v___y_1451_ = v___x_1446_;
goto v___jp_1450_;
}
v___jp_1450_:
{
uint8_t v___x_1452_; 
v___x_1452_ = lean_nat_dec_le(v___y_1451_, v___x_1449_);
if (v___x_1452_ == 0)
{
lean_dec(v___x_1449_);
lean_inc(v___y_1451_);
v___y_1442_ = v___y_1451_;
v___y_1443_ = v___y_1451_;
goto v___jp_1441_;
}
else
{
v___y_1442_ = v___y_1451_;
v___y_1443_ = v___x_1449_;
goto v___jp_1441_;
}
}
}
else
{
lean_object* v___x_1454_; 
lean_dec_ref(v_mctx_1439_);
v___x_1454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1454_, 0, v_mvarIds_1433_);
return v___x_1454_;
}
v___jp_1441_:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1444_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v_mctx_1439_, v___x_1440_, v_mvarIds_1433_, v___y_1442_, v___y_1443_);
lean_dec(v___y_1443_);
lean_dec_ref(v_mctx_1439_);
v___x_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1445_, 0, v___x_1444_);
return v___x_1445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg___boxed(lean_object* v_mvarIds_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_mvarIds_1455_, v___y_1456_, v___y_1457_);
lean_dec(v___y_1457_);
lean_dec(v___y_1456_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(lean_object* v_k_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v_mctx_1472_; lean_object* v_mvarCounter_1473_; lean_object* v___x_1474_; 
v___x_1470_ = lean_st_ref_get(v___y_1468_);
lean_dec(v___x_1470_);
v___x_1471_ = lean_st_ref_get(v___y_1466_);
v_mctx_1472_ = lean_ctor_get(v___x_1471_, 0);
lean_inc_ref(v_mctx_1472_);
lean_dec(v___x_1471_);
v_mvarCounter_1473_ = lean_ctor_get(v_mctx_1472_, 3);
lean_inc(v_mvarCounter_1473_);
lean_dec_ref(v_mctx_1472_);
lean_inc(v___y_1468_);
lean_inc_ref(v___y_1467_);
lean_inc(v___y_1466_);
lean_inc_ref(v___y_1465_);
lean_inc(v___y_1464_);
lean_inc_ref(v___y_1463_);
lean_inc(v___y_1462_);
lean_inc_ref(v___y_1461_);
v___x_1474_ = lean_apply_9(v_k_1460_, v___y_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, lean_box(0));
if (lean_obj_tag(v___x_1474_) == 0)
{
lean_object* v_a_1475_; lean_object* v___x_1476_; 
v_a_1475_ = lean_ctor_get(v___x_1474_, 0);
lean_inc_n(v_a_1475_, 2);
lean_dec_ref(v___x_1474_);
v___x_1476_ = l_Lean_Meta_getMVarsNoDelayed(v_a_1475_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
if (lean_obj_tag(v___x_1476_) == 0)
{
lean_object* v_a_1477_; lean_object* v___x_1478_; lean_object* v_a_1479_; lean_object* v___x_1480_; lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1489_; 
v_a_1477_ = lean_ctor_get(v___x_1476_, 0);
lean_inc(v_a_1477_);
lean_dec_ref(v___x_1476_);
v___x_1478_ = l_Lean_Elab_Tactic_filterOldMVars___redArg(v_a_1477_, v_mvarCounter_1473_, v___y_1466_, v___y_1468_);
lean_dec(v_mvarCounter_1473_);
lean_dec(v_a_1477_);
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
lean_inc(v_a_1479_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_a_1479_, v___y_1466_, v___y_1468_);
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1489_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1489_ == 0)
{
v___x_1483_ = v___x_1480_;
v_isShared_1484_ = v_isSharedCheck_1489_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1480_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1489_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___x_1487_; 
v___x_1485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1485_, 0, v_a_1475_);
lean_ctor_set(v___x_1485_, 1, v_a_1481_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 0, v___x_1485_);
v___x_1487_ = v___x_1483_;
goto v_reusejp_1486_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1485_);
v___x_1487_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1486_;
}
v_reusejp_1486_:
{
return v___x_1487_;
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
lean_dec(v_a_1475_);
lean_dec(v_mvarCounter_1473_);
v_a_1490_ = lean_ctor_get(v___x_1476_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1476_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1476_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1476_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
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
lean_object* v_a_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1505_; 
lean_dec(v_mvarCounter_1473_);
v_a_1498_ = lean_ctor_get(v___x_1474_, 0);
v_isSharedCheck_1505_ = !lean_is_exclusive(v___x_1474_);
if (v_isSharedCheck_1505_ == 0)
{
v___x_1500_ = v___x_1474_;
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
else
{
lean_inc(v_a_1498_);
lean_dec(v___x_1474_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1505_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1503_; 
if (v_isShared_1501_ == 0)
{
v___x_1503_ = v___x_1500_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1498_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0___boxed(lean_object* v_k_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(v_k_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_, v___y_1513_, v___y_1514_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec(v___y_1512_);
lean_dec_ref(v___y_1511_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(lean_object* v_as_1517_, size_t v_i_1518_, size_t v_stop_1519_, lean_object* v_b_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
uint8_t v___x_1526_; 
v___x_1526_ = lean_usize_dec_eq(v_i_1518_, v_stop_1519_);
if (v___x_1526_ == 0)
{
lean_object* v___x_1527_; lean_object* v___x_1528_; 
v___x_1527_ = lean_array_uget_borrowed(v_as_1517_, v_i_1518_);
lean_inc(v___x_1527_);
v___x_1528_ = l_Lean_MVarId_getKind(v___x_1527_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; lean_object* v_a_1531_; uint8_t v___x_1535_; uint8_t v___x_1536_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
lean_inc(v_a_1529_);
lean_dec_ref(v___x_1528_);
v___x_1535_ = lean_unbox(v_a_1529_);
lean_dec(v_a_1529_);
v___x_1536_ = l_Lean_MetavarKind_isNatural(v___x_1535_);
if (v___x_1536_ == 0)
{
v_a_1531_ = v_b_1520_;
goto v___jp_1530_;
}
else
{
lean_object* v___x_1537_; 
lean_inc(v___x_1527_);
v___x_1537_ = lean_array_push(v_b_1520_, v___x_1527_);
v_a_1531_ = v___x_1537_;
goto v___jp_1530_;
}
v___jp_1530_:
{
size_t v___x_1532_; size_t v___x_1533_; 
v___x_1532_ = ((size_t)1ULL);
v___x_1533_ = lean_usize_add(v_i_1518_, v___x_1532_);
v_i_1518_ = v___x_1533_;
v_b_1520_ = v_a_1531_;
goto _start;
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v_b_1520_);
v_a_1538_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1528_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1528_);
v___x_1540_ = lean_box(0);
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
v_resetjp_1539_:
{
lean_object* v___x_1543_; 
if (v_isShared_1541_ == 0)
{
v___x_1543_ = v___x_1540_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1544_; 
v_reuseFailAlloc_1544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1544_, 0, v_a_1538_);
v___x_1543_ = v_reuseFailAlloc_1544_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
return v___x_1543_;
}
}
}
}
else
{
lean_object* v___x_1546_; 
v___x_1546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1546_, 0, v_b_1520_);
return v___x_1546_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg___boxed(lean_object* v_as_1547_, lean_object* v_i_1548_, lean_object* v_stop_1549_, lean_object* v_b_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
size_t v_i_boxed_1556_; size_t v_stop_boxed_1557_; lean_object* v_res_1558_; 
v_i_boxed_1556_ = lean_unbox_usize(v_i_1548_);
lean_dec(v_i_1548_);
v_stop_boxed_1557_ = lean_unbox_usize(v_stop_1549_);
lean_dec(v_stop_1549_);
v_res_1558_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_as_1547_, v_i_boxed_1556_, v_stop_boxed_1557_, v_b_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec_ref(v___y_1551_);
lean_dec_ref(v_as_1547_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(lean_object* v_k_1559_, lean_object* v_parentTag_1560_, lean_object* v_tagSuffix_1561_, uint8_t v_allowNaturalHoles_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_){
_start:
{
lean_object* v___x_1572_; 
v___x_1572_ = l_Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0(v_k_1559_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
if (lean_obj_tag(v___x_1572_) == 0)
{
lean_object* v_a_1573_; lean_object* v_fst_1574_; lean_object* v_snd_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1668_; 
v_a_1573_ = lean_ctor_get(v___x_1572_, 0);
lean_inc(v_a_1573_);
lean_dec_ref(v___x_1572_);
v_fst_1574_ = lean_ctor_get(v_a_1573_, 0);
v_snd_1575_ = lean_ctor_get(v_a_1573_, 1);
v_isSharedCheck_1668_ = !lean_is_exclusive(v_a_1573_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1577_ = v_a_1573_;
v_isShared_1578_ = v_isSharedCheck_1668_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_snd_1575_);
lean_inc(v_fst_1574_);
lean_dec(v_a_1573_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1668_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; lean_object* v___y_1585_; lean_object* v___y_1586_; lean_object* v___y_1587_; lean_object* v___y_1588_; lean_object* v___y_1611_; lean_object* v_a_1612_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___x_1634_; lean_object* v_a_1636_; lean_object* v___y_1648_; lean_object* v___x_1658_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1634_ = lean_unsigned_to_nat(0u);
v___x_1658_ = lean_array_get_size(v_snd_1575_);
v___x_1659_ = lean_obj_once(&l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0, &l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0);
v___x_1660_ = lean_nat_dec_lt(v___x_1634_, v___x_1658_);
if (v___x_1660_ == 0)
{
lean_dec(v_snd_1575_);
v_a_1636_ = v___x_1659_;
goto v___jp_1635_;
}
else
{
uint8_t v___x_1661_; 
v___x_1661_ = lean_nat_dec_le(v___x_1658_, v___x_1658_);
if (v___x_1661_ == 0)
{
if (v___x_1660_ == 0)
{
lean_dec(v_snd_1575_);
v_a_1636_ = v___x_1659_;
goto v___jp_1635_;
}
else
{
size_t v___x_1662_; size_t v___x_1663_; lean_object* v___x_1664_; 
v___x_1662_ = ((size_t)0ULL);
v___x_1663_ = lean_usize_of_nat(v___x_1658_);
v___x_1664_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_snd_1575_, v___x_1662_, v___x_1663_, v___x_1659_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
lean_dec(v_snd_1575_);
v___y_1648_ = v___x_1664_;
goto v___jp_1647_;
}
}
else
{
size_t v___x_1665_; size_t v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = ((size_t)0ULL);
v___x_1666_ = lean_usize_of_nat(v___x_1658_);
v___x_1667_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_snd_1575_, v___x_1665_, v___x_1666_, v___x_1659_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
lean_dec(v_snd_1575_);
v___y_1648_ = v___x_1667_;
goto v___jp_1647_;
}
}
v___jp_1579_:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = lean_array_to_list(v___y_1580_);
v___x_1590_ = l_Lean_Elab_Tactic_tagUntaggedGoals(v_parentTag_1560_, v_tagSuffix_1561_, v___x_1589_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
if (lean_obj_tag(v___x_1590_) == 0)
{
lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1600_; 
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1600_ == 0)
{
lean_object* v_unused_1601_; 
v_unused_1601_ = lean_ctor_get(v___x_1590_, 0);
lean_dec(v_unused_1601_);
v___x_1592_ = v___x_1590_;
v_isShared_1593_ = v_isSharedCheck_1600_;
goto v_resetjp_1591_;
}
else
{
lean_dec(v___x_1590_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1600_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1595_; 
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 1, v___x_1589_);
v___x_1595_ = v___x_1577_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_fst_1574_);
lean_ctor_set(v_reuseFailAlloc_1599_, 1, v___x_1589_);
v___x_1595_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1597_; 
if (v_isShared_1593_ == 0)
{
lean_ctor_set(v___x_1592_, 0, v___x_1595_);
v___x_1597_ = v___x_1592_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1595_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
else
{
lean_object* v_a_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1609_; 
lean_dec(v___x_1589_);
lean_del_object(v___x_1577_);
lean_dec(v_fst_1574_);
v_a_1602_ = lean_ctor_get(v___x_1590_, 0);
v_isSharedCheck_1609_ = !lean_is_exclusive(v___x_1590_);
if (v_isSharedCheck_1609_ == 0)
{
v___x_1604_ = v___x_1590_;
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_a_1602_);
lean_dec(v___x_1590_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1609_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v___x_1607_; 
if (v_isShared_1605_ == 0)
{
v___x_1607_ = v___x_1604_;
goto v_reusejp_1606_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v_a_1602_);
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
v___jp_1610_:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lean_Elab_Tactic_logUnassignedAndAbort(v_a_1612_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
lean_dec_ref(v_a_1612_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_dec_ref(v___x_1613_);
v___y_1580_ = v___y_1611_;
v___y_1581_ = v_a_1563_;
v___y_1582_ = v_a_1564_;
v___y_1583_ = v_a_1565_;
v___y_1584_ = v_a_1566_;
v___y_1585_ = v_a_1567_;
v___y_1586_ = v_a_1568_;
v___y_1587_ = v_a_1569_;
v___y_1588_ = v_a_1570_;
goto v___jp_1579_;
}
else
{
lean_object* v_a_1614_; lean_object* v___x_1616_; uint8_t v_isShared_1617_; uint8_t v_isSharedCheck_1621_; 
lean_dec_ref(v___y_1611_);
lean_del_object(v___x_1577_);
lean_dec(v_fst_1574_);
lean_dec(v_tagSuffix_1561_);
lean_dec(v_parentTag_1560_);
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1621_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1621_ == 0)
{
v___x_1616_ = v___x_1613_;
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
else
{
lean_inc(v_a_1614_);
lean_dec(v___x_1613_);
v___x_1616_ = lean_box(0);
v_isShared_1617_ = v_isSharedCheck_1621_;
goto v_resetjp_1615_;
}
v_resetjp_1615_:
{
lean_object* v___x_1619_; 
if (v_isShared_1617_ == 0)
{
v___x_1619_ = v___x_1616_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v_a_1614_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
}
}
v___jp_1622_:
{
if (lean_obj_tag(v___y_1624_) == 0)
{
lean_object* v_a_1625_; 
v_a_1625_ = lean_ctor_get(v___y_1624_, 0);
lean_inc(v_a_1625_);
lean_dec_ref(v___y_1624_);
v___y_1611_ = v___y_1623_;
v_a_1612_ = v_a_1625_;
goto v___jp_1610_;
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
lean_dec_ref(v___y_1623_);
lean_del_object(v___x_1577_);
lean_dec(v_fst_1574_);
lean_dec(v_tagSuffix_1561_);
lean_dec(v_parentTag_1560_);
v_a_1626_ = lean_ctor_get(v___y_1624_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___y_1624_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___y_1624_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___y_1624_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
v___jp_1635_:
{
if (v_allowNaturalHoles_1562_ == 0)
{
lean_object* v___x_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; 
v___x_1637_ = lean_array_get_size(v_a_1636_);
v___x_1638_ = lean_obj_once(&l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0, &l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_filterOldMVars___redArg___closed__0);
v___x_1639_ = lean_nat_dec_lt(v___x_1634_, v___x_1637_);
if (v___x_1639_ == 0)
{
v___y_1611_ = v_a_1636_;
v_a_1612_ = v___x_1638_;
goto v___jp_1610_;
}
else
{
uint8_t v___x_1640_; 
v___x_1640_ = lean_nat_dec_le(v___x_1637_, v___x_1637_);
if (v___x_1640_ == 0)
{
if (v___x_1639_ == 0)
{
v___y_1611_ = v_a_1636_;
v_a_1612_ = v___x_1638_;
goto v___jp_1610_;
}
else
{
size_t v___x_1641_; size_t v___x_1642_; lean_object* v___x_1643_; 
v___x_1641_ = ((size_t)0ULL);
v___x_1642_ = lean_usize_of_nat(v___x_1637_);
v___x_1643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_a_1636_, v___x_1641_, v___x_1642_, v___x_1638_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
v___y_1623_ = v_a_1636_;
v___y_1624_ = v___x_1643_;
goto v___jp_1622_;
}
}
else
{
size_t v___x_1644_; size_t v___x_1645_; lean_object* v___x_1646_; 
v___x_1644_ = ((size_t)0ULL);
v___x_1645_ = lean_usize_of_nat(v___x_1637_);
v___x_1646_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_a_1636_, v___x_1644_, v___x_1645_, v___x_1638_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_);
v___y_1623_ = v_a_1636_;
v___y_1624_ = v___x_1646_;
goto v___jp_1622_;
}
}
}
else
{
v___y_1580_ = v_a_1636_;
v___y_1581_ = v_a_1563_;
v___y_1582_ = v_a_1564_;
v___y_1583_ = v_a_1565_;
v___y_1584_ = v_a_1566_;
v___y_1585_ = v_a_1567_;
v___y_1586_ = v_a_1568_;
v___y_1587_ = v_a_1569_;
v___y_1588_ = v_a_1570_;
goto v___jp_1579_;
}
}
v___jp_1647_:
{
if (lean_obj_tag(v___y_1648_) == 0)
{
lean_object* v_a_1649_; 
v_a_1649_ = lean_ctor_get(v___y_1648_, 0);
lean_inc(v_a_1649_);
lean_dec_ref(v___y_1648_);
v_a_1636_ = v_a_1649_;
goto v___jp_1635_;
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1652_; uint8_t v_isShared_1653_; uint8_t v_isSharedCheck_1657_; 
lean_del_object(v___x_1577_);
lean_dec(v_fst_1574_);
lean_dec(v_tagSuffix_1561_);
lean_dec(v_parentTag_1560_);
v_a_1650_ = lean_ctor_get(v___y_1648_, 0);
v_isSharedCheck_1657_ = !lean_is_exclusive(v___y_1648_);
if (v_isSharedCheck_1657_ == 0)
{
v___x_1652_ = v___y_1648_;
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
else
{
lean_inc(v_a_1650_);
lean_dec(v___y_1648_);
v___x_1652_ = lean_box(0);
v_isShared_1653_ = v_isSharedCheck_1657_;
goto v_resetjp_1651_;
}
v_resetjp_1651_:
{
lean_object* v___x_1655_; 
if (v_isShared_1653_ == 0)
{
v___x_1655_ = v___x_1652_;
goto v_reusejp_1654_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v_a_1650_);
v___x_1655_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1654_;
}
v_reusejp_1654_:
{
return v___x_1655_;
}
}
}
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
lean_dec(v_tagSuffix_1561_);
lean_dec(v_parentTag_1560_);
v_a_1669_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___x_1572_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___x_1572_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go___boxed(lean_object* v_k_1677_, lean_object* v_parentTag_1678_, lean_object* v_tagSuffix_1679_, lean_object* v_allowNaturalHoles_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v_a_1687_, lean_object* v_a_1688_, lean_object* v_a_1689_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1690_; lean_object* v_res_1691_; 
v_allowNaturalHoles_boxed_1690_ = lean_unbox(v_allowNaturalHoles_1680_);
v_res_1691_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1677_, v_parentTag_1678_, v_tagSuffix_1679_, v_allowNaturalHoles_boxed_1690_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_, v_a_1687_, v_a_1688_);
lean_dec(v_a_1688_);
lean_dec_ref(v_a_1687_);
lean_dec(v_a_1686_);
lean_dec_ref(v_a_1685_);
lean_dec(v_a_1684_);
lean_dec_ref(v_a_1683_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
return v_res_1691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(lean_object* v_as_1692_, size_t v_i_1693_, size_t v_stop_1694_, lean_object* v_b_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v___x_1705_; 
v___x_1705_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___redArg(v_as_1692_, v_i_1693_, v_stop_1694_, v_b_1695_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
return v___x_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1___boxed(lean_object* v_as_1706_, lean_object* v_i_1707_, lean_object* v_stop_1708_, lean_object* v_b_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_){
_start:
{
size_t v_i_boxed_1719_; size_t v_stop_boxed_1720_; lean_object* v_res_1721_; 
v_i_boxed_1719_ = lean_unbox_usize(v_i_1707_);
lean_dec(v_i_1707_);
v_stop_boxed_1720_ = lean_unbox_usize(v_stop_1708_);
lean_dec(v_stop_1708_);
v_res_1721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__1(v_as_1706_, v_i_boxed_1719_, v_stop_boxed_1720_, v_b_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
lean_dec(v___y_1711_);
lean_dec_ref(v___y_1710_);
lean_dec_ref(v_as_1706_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(lean_object* v_as_1722_, size_t v_i_1723_, size_t v_stop_1724_, lean_object* v_b_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___redArg(v_as_1722_, v_i_1723_, v_stop_1724_, v_b_1725_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2___boxed(lean_object* v_as_1736_, lean_object* v_i_1737_, lean_object* v_stop_1738_, lean_object* v_b_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
size_t v_i_boxed_1749_; size_t v_stop_boxed_1750_; lean_object* v_res_1751_; 
v_i_boxed_1749_ = lean_unbox_usize(v_i_1737_);
lean_dec(v_i_1737_);
v_stop_boxed_1750_ = lean_unbox_usize(v_stop_1738_);
lean_dec(v_stop_1738_);
v_res_1751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__2(v_as_1736_, v_i_boxed_1749_, v_stop_boxed_1750_, v_b_1739_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
lean_dec_ref(v_as_1736_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(lean_object* v_mvarIds_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___redArg(v_mvarIds_1752_, v___y_1754_, v___y_1756_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0___boxed(lean_object* v_mvarIds_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0(v_mvarIds_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(lean_object* v___x_1766_, lean_object* v_n_1767_, lean_object* v_as_1768_, lean_object* v_lo_1769_, lean_object* v_hi_1770_, lean_object* v_w_1771_, lean_object* v_hlo_1772_, lean_object* v_hhi_1773_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___redArg(v___x_1766_, v_n_1767_, v_as_1768_, v_lo_1769_, v_hi_1770_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1___boxed(lean_object* v___x_1775_, lean_object* v_n_1776_, lean_object* v_as_1777_, lean_object* v_lo_1778_, lean_object* v_hi_1779_, lean_object* v_w_1780_, lean_object* v_hlo_1781_, lean_object* v_hhi_1782_){
_start:
{
lean_object* v_res_1783_; 
v_res_1783_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1(v___x_1775_, v_n_1776_, v_as_1777_, v_lo_1778_, v_hi_1779_, v_w_1780_, v_hlo_1781_, v_hhi_1782_);
lean_dec(v_hi_1779_);
lean_dec(v_n_1776_);
lean_dec_ref(v___x_1775_);
return v_res_1783_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4(lean_object* v___x_1784_, lean_object* v_n_1785_, lean_object* v_lo_1786_, lean_object* v_hi_1787_, lean_object* v_hhi_1788_, lean_object* v_pivot_1789_, lean_object* v_as_1790_, lean_object* v_i_1791_, lean_object* v_k_1792_, lean_object* v_ilo_1793_, lean_object* v_ik_1794_, lean_object* v_w_1795_){
_start:
{
lean_object* v___x_1796_; 
v___x_1796_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___redArg(v___x_1784_, v_hi_1787_, v_pivot_1789_, v_as_1790_, v_i_1791_, v_k_1792_);
return v___x_1796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v___x_1797_, lean_object* v_n_1798_, lean_object* v_lo_1799_, lean_object* v_hi_1800_, lean_object* v_hhi_1801_, lean_object* v_pivot_1802_, lean_object* v_as_1803_, lean_object* v_i_1804_, lean_object* v_k_1805_, lean_object* v_ilo_1806_, lean_object* v_ik_1807_, lean_object* v_w_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_sortMVarIdArrayByIndex___at___00Lean_Elab_Tactic_collectFreshMVars___at___00__private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go_spec__0_spec__0_spec__1_spec__4(v___x_1797_, v_n_1798_, v_lo_1799_, v_hi_1800_, v_hhi_1801_, v_pivot_1802_, v_as_1803_, v_i_1804_, v_k_1805_, v_ilo_1806_, v_ik_1807_, v_w_1808_);
lean_dec(v_hi_1800_);
lean_dec(v_lo_1799_);
lean_dec(v_n_1798_);
lean_dec_ref(v___x_1797_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(lean_object* v_k_1810_, lean_object* v_parentTag_1811_, lean_object* v_tagSuffix_1812_, uint8_t v_allowNaturalHoles_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_){
_start:
{
if (v_allowNaturalHoles_1813_ == 0)
{
lean_object* v___x_1823_; 
v___x_1823_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1810_, v_parentTag_1811_, v_tagSuffix_1812_, v_allowNaturalHoles_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_);
return v___x_1823_;
}
else
{
lean_object* v_declName_x3f_1824_; lean_object* v_macroStack_1825_; uint8_t v_mayPostpone_1826_; uint8_t v_errToSorry_1827_; lean_object* v_autoBoundImplicitContext_1828_; lean_object* v_autoBoundImplicitForbidden_1829_; lean_object* v_sectionVars_1830_; lean_object* v_sectionFVars_1831_; uint8_t v_implicitLambda_1832_; uint8_t v_heedElabAsElim_1833_; uint8_t v_isNoncomputableSection_1834_; uint8_t v_isMetaSection_1835_; uint8_t v_ignoreTCFailures_1836_; uint8_t v_inPattern_1837_; lean_object* v_tacSnap_x3f_1838_; uint8_t v_saveRecAppSyntax_1839_; uint8_t v_holesAsSyntheticOpaque_1840_; uint8_t v_checkDeprecated_1841_; lean_object* v_fixedTermElabs_1842_; uint8_t v___y_1844_; 
v_declName_x3f_1824_ = lean_ctor_get(v_a_1816_, 0);
v_macroStack_1825_ = lean_ctor_get(v_a_1816_, 1);
v_mayPostpone_1826_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8);
v_errToSorry_1827_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_1828_ = lean_ctor_get(v_a_1816_, 2);
v_autoBoundImplicitForbidden_1829_ = lean_ctor_get(v_a_1816_, 3);
v_sectionVars_1830_ = lean_ctor_get(v_a_1816_, 4);
v_sectionFVars_1831_ = lean_ctor_get(v_a_1816_, 5);
v_implicitLambda_1832_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 2);
v_heedElabAsElim_1833_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_1834_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 4);
v_isMetaSection_1835_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 5);
v_ignoreTCFailures_1836_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 6);
v_inPattern_1837_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_1838_ = lean_ctor_get(v_a_1816_, 6);
v_saveRecAppSyntax_1839_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_1840_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 9);
v_checkDeprecated_1841_ = lean_ctor_get_uint8(v_a_1816_, sizeof(void*)*8 + 10);
v_fixedTermElabs_1842_ = lean_ctor_get(v_a_1816_, 7);
if (v_holesAsSyntheticOpaque_1840_ == 0)
{
v___y_1844_ = v_allowNaturalHoles_1813_;
goto v___jp_1843_;
}
else
{
v___y_1844_ = v_holesAsSyntheticOpaque_1840_;
goto v___jp_1843_;
}
v___jp_1843_:
{
lean_object* v___x_1845_; uint8_t v_foApprox_1846_; uint8_t v_ctxApprox_1847_; uint8_t v_quasiPatternApprox_1848_; uint8_t v_constApprox_1849_; uint8_t v_isDefEqStuckEx_1850_; uint8_t v_unificationHints_1851_; uint8_t v_proofIrrelevance_1852_; uint8_t v_offsetCnstrs_1853_; uint8_t v_transparency_1854_; uint8_t v_etaStruct_1855_; uint8_t v_univApprox_1856_; uint8_t v_iota_1857_; uint8_t v_beta_1858_; uint8_t v_proj_1859_; uint8_t v_zeta_1860_; uint8_t v_zetaDelta_1861_; uint8_t v_zetaUnused_1862_; uint8_t v_zetaHave_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1893_; 
v___x_1845_ = l_Lean_Meta_Context_config(v_a_1818_);
v_foApprox_1846_ = lean_ctor_get_uint8(v___x_1845_, 0);
v_ctxApprox_1847_ = lean_ctor_get_uint8(v___x_1845_, 1);
v_quasiPatternApprox_1848_ = lean_ctor_get_uint8(v___x_1845_, 2);
v_constApprox_1849_ = lean_ctor_get_uint8(v___x_1845_, 3);
v_isDefEqStuckEx_1850_ = lean_ctor_get_uint8(v___x_1845_, 4);
v_unificationHints_1851_ = lean_ctor_get_uint8(v___x_1845_, 5);
v_proofIrrelevance_1852_ = lean_ctor_get_uint8(v___x_1845_, 6);
v_offsetCnstrs_1853_ = lean_ctor_get_uint8(v___x_1845_, 8);
v_transparency_1854_ = lean_ctor_get_uint8(v___x_1845_, 9);
v_etaStruct_1855_ = lean_ctor_get_uint8(v___x_1845_, 10);
v_univApprox_1856_ = lean_ctor_get_uint8(v___x_1845_, 11);
v_iota_1857_ = lean_ctor_get_uint8(v___x_1845_, 12);
v_beta_1858_ = lean_ctor_get_uint8(v___x_1845_, 13);
v_proj_1859_ = lean_ctor_get_uint8(v___x_1845_, 14);
v_zeta_1860_ = lean_ctor_get_uint8(v___x_1845_, 15);
v_zetaDelta_1861_ = lean_ctor_get_uint8(v___x_1845_, 16);
v_zetaUnused_1862_ = lean_ctor_get_uint8(v___x_1845_, 17);
v_zetaHave_1863_ = lean_ctor_get_uint8(v___x_1845_, 18);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1893_ == 0)
{
v___x_1865_ = v___x_1845_;
v_isShared_1866_ = v_isSharedCheck_1893_;
goto v_resetjp_1864_;
}
else
{
lean_dec(v___x_1845_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1893_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
uint8_t v_trackZetaDelta_1867_; lean_object* v_zetaDeltaSet_1868_; lean_object* v_lctx_1869_; lean_object* v_localInstances_1870_; lean_object* v_defEqCtx_x3f_1871_; lean_object* v_synthPendingDepth_1872_; lean_object* v_canUnfold_x3f_1873_; uint8_t v_univApprox_1874_; uint8_t v_inTypeClassResolution_1875_; uint8_t v_cacheInferType_1876_; lean_object* v___x_1878_; 
v_trackZetaDelta_1867_ = lean_ctor_get_uint8(v_a_1818_, sizeof(void*)*7);
v_zetaDeltaSet_1868_ = lean_ctor_get(v_a_1818_, 1);
v_lctx_1869_ = lean_ctor_get(v_a_1818_, 2);
v_localInstances_1870_ = lean_ctor_get(v_a_1818_, 3);
v_defEqCtx_x3f_1871_ = lean_ctor_get(v_a_1818_, 4);
v_synthPendingDepth_1872_ = lean_ctor_get(v_a_1818_, 5);
v_canUnfold_x3f_1873_ = lean_ctor_get(v_a_1818_, 6);
v_univApprox_1874_ = lean_ctor_get_uint8(v_a_1818_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1875_ = lean_ctor_get_uint8(v_a_1818_, sizeof(void*)*7 + 2);
v_cacheInferType_1876_ = lean_ctor_get_uint8(v_a_1818_, sizeof(void*)*7 + 3);
if (v_isShared_1866_ == 0)
{
v___x_1878_ = v___x_1865_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1892_; 
v_reuseFailAlloc_1892_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 0, v_foApprox_1846_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 1, v_ctxApprox_1847_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 2, v_quasiPatternApprox_1848_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 3, v_constApprox_1849_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 4, v_isDefEqStuckEx_1850_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 5, v_unificationHints_1851_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 6, v_proofIrrelevance_1852_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 8, v_offsetCnstrs_1853_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 9, v_transparency_1854_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 10, v_etaStruct_1855_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 11, v_univApprox_1856_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 12, v_iota_1857_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 13, v_beta_1858_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 14, v_proj_1859_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 15, v_zeta_1860_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 16, v_zetaDelta_1861_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 17, v_zetaUnused_1862_);
lean_ctor_set_uint8(v_reuseFailAlloc_1892_, 18, v_zetaHave_1863_);
v___x_1878_ = v_reuseFailAlloc_1892_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
uint64_t v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
lean_ctor_set_uint8(v___x_1878_, 7, v_allowNaturalHoles_1813_);
v___x_1879_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1878_);
lean_inc_ref(v_fixedTermElabs_1842_);
lean_inc(v_tacSnap_x3f_1838_);
lean_inc(v_sectionFVars_1831_);
lean_inc(v_sectionVars_1830_);
lean_inc_ref(v_autoBoundImplicitForbidden_1829_);
lean_inc(v_autoBoundImplicitContext_1828_);
lean_inc(v_macroStack_1825_);
lean_inc(v_declName_x3f_1824_);
v___x_1880_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_1880_, 0, v_declName_x3f_1824_);
lean_ctor_set(v___x_1880_, 1, v_macroStack_1825_);
lean_ctor_set(v___x_1880_, 2, v_autoBoundImplicitContext_1828_);
lean_ctor_set(v___x_1880_, 3, v_autoBoundImplicitForbidden_1829_);
lean_ctor_set(v___x_1880_, 4, v_sectionVars_1830_);
lean_ctor_set(v___x_1880_, 5, v_sectionFVars_1831_);
lean_ctor_set(v___x_1880_, 6, v_tacSnap_x3f_1838_);
lean_ctor_set(v___x_1880_, 7, v_fixedTermElabs_1842_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8, v_mayPostpone_1826_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 1, v_errToSorry_1827_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 2, v_implicitLambda_1832_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 3, v_heedElabAsElim_1833_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 4, v_isNoncomputableSection_1834_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 5, v_isMetaSection_1835_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 6, v_ignoreTCFailures_1836_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 7, v_inPattern_1837_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_1839_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 9, v___y_1844_);
lean_ctor_set_uint8(v___x_1880_, sizeof(void*)*8 + 10, v_checkDeprecated_1841_);
v___x_1881_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1881_, 0, v___x_1878_);
lean_ctor_set_uint64(v___x_1881_, sizeof(void*)*1, v___x_1879_);
lean_inc(v_canUnfold_x3f_1873_);
lean_inc(v_synthPendingDepth_1872_);
lean_inc(v_defEqCtx_x3f_1871_);
lean_inc_ref(v_localInstances_1870_);
lean_inc_ref(v_lctx_1869_);
lean_inc(v_zetaDeltaSet_1868_);
v___x_1882_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1882_, 0, v___x_1881_);
lean_ctor_set(v___x_1882_, 1, v_zetaDeltaSet_1868_);
lean_ctor_set(v___x_1882_, 2, v_lctx_1869_);
lean_ctor_set(v___x_1882_, 3, v_localInstances_1870_);
lean_ctor_set(v___x_1882_, 4, v_defEqCtx_x3f_1871_);
lean_ctor_set(v___x_1882_, 5, v_synthPendingDepth_1872_);
lean_ctor_set(v___x_1882_, 6, v_canUnfold_x3f_1873_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*7, v_trackZetaDelta_1867_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*7 + 1, v_univApprox_1874_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1875_);
lean_ctor_set_uint8(v___x_1882_, sizeof(void*)*7 + 3, v_cacheInferType_1876_);
v___x_1883_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_withCollectingNewGoalsFrom_go(v_k_1810_, v_parentTag_1811_, v_tagSuffix_1812_, v_allowNaturalHoles_1813_, v_a_1814_, v_a_1815_, v___x_1880_, v_a_1817_, v___x_1882_, v_a_1819_, v_a_1820_, v_a_1821_);
lean_dec_ref(v___x_1882_);
lean_dec_ref(v___x_1880_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1883_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1883_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
else
{
return v___x_1883_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_withCollectingNewGoalsFrom___boxed(lean_object* v_k_1894_, lean_object* v_parentTag_1895_, lean_object* v_tagSuffix_1896_, lean_object* v_allowNaturalHoles_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1907_; lean_object* v_res_1908_; 
v_allowNaturalHoles_boxed_1907_ = lean_unbox(v_allowNaturalHoles_1897_);
v_res_1908_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v_k_1894_, v_parentTag_1895_, v_tagSuffix_1896_, v_allowNaturalHoles_boxed_1907_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
lean_dec(v_a_1905_);
lean_dec_ref(v_a_1904_);
lean_dec(v_a_1903_);
lean_dec_ref(v_a_1902_);
lean_dec(v_a_1901_);
lean_dec_ref(v_a_1900_);
lean_dec(v_a_1899_);
lean_dec_ref(v_a_1898_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles(lean_object* v_stx_1909_, lean_object* v_expectedType_x3f_1910_, lean_object* v_tagSuffix_1911_, uint8_t v_allowNaturalHoles_1912_, lean_object* v_parentTag_x3f_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_){
_start:
{
lean_object* v_a_1924_; 
if (lean_obj_tag(v_parentTag_x3f_1913_) == 0)
{
lean_object* v___x_1929_; 
v___x_1929_ = l_Lean_Elab_Tactic_getMainTag___redArg(v_a_1915_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref(v___x_1929_);
v_a_1924_ = v_a_1930_;
goto v___jp_1923_;
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_dec(v_tagSuffix_1911_);
lean_dec(v_expectedType_x3f_1910_);
lean_dec(v_stx_1909_);
v_a_1931_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1929_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1929_);
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
}
else
{
lean_object* v_val_1939_; 
v_val_1939_ = lean_ctor_get(v_parentTag_x3f_1913_, 0);
lean_inc(v_val_1939_);
lean_dec_ref(v_parentTag_x3f_1913_);
v_a_1924_ = v_val_1939_;
goto v___jp_1923_;
}
v___jp_1923_:
{
uint8_t v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v___x_1925_ = 0;
v___x_1926_ = lean_box(v___x_1925_);
v___x_1927_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTermEnsuringType___boxed), 12, 3);
lean_closure_set(v___x_1927_, 0, v_stx_1909_);
lean_closure_set(v___x_1927_, 1, v_expectedType_x3f_1910_);
lean_closure_set(v___x_1927_, 2, v___x_1926_);
v___x_1928_ = l_Lean_Elab_Tactic_withCollectingNewGoalsFrom(v___x_1927_, v_a_1924_, v_tagSuffix_1911_, v_allowNaturalHoles_1912_, v_a_1914_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
return v___x_1928_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermWithHoles___boxed(lean_object* v_stx_1940_, lean_object* v_expectedType_x3f_1941_, lean_object* v_tagSuffix_1942_, lean_object* v_allowNaturalHoles_1943_, lean_object* v_parentTag_x3f_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_1954_; lean_object* v_res_1955_; 
v_allowNaturalHoles_boxed_1954_ = lean_unbox(v_allowNaturalHoles_1943_);
v_res_1955_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_stx_1940_, v_expectedType_x3f_1941_, v_tagSuffix_1942_, v_allowNaturalHoles_boxed_1954_, v_parentTag_x3f_1944_, v_a_1945_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_);
lean_dec(v_a_1952_);
lean_dec_ref(v_a_1951_);
lean_dec(v_a_1950_);
lean_dec_ref(v_a_1949_);
lean_dec(v_a_1948_);
lean_dec_ref(v_a_1947_);
lean_dec(v_a_1946_);
lean_dec_ref(v_a_1945_);
return v_res_1955_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_refineCore___lam__0(lean_object* v_a_1956_, lean_object* v_x_1957_){
_start:
{
uint8_t v___x_1958_; 
v___x_1958_ = l_Lean_instBEqMVarId_beq(v_x_1957_, v_a_1956_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__0___boxed(lean_object* v_a_1959_, lean_object* v_x_1960_){
_start:
{
uint8_t v_res_1961_; lean_object* v_r_1962_; 
v_res_1961_ = l_Lean_Elab_Tactic_refineCore___lam__0(v_a_1959_, v_x_1960_);
lean_dec(v_x_1960_);
lean_dec(v_a_1959_);
v_r_1962_ = lean_box(v_res_1961_);
return v_r_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(lean_object* v_msgData_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_){
_start:
{
lean_object* v___x_1969_; lean_object* v_env_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v_mctx_1973_; lean_object* v_lctx_1974_; lean_object* v_options_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1969_ = lean_st_ref_get(v___y_1967_);
v_env_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc_ref(v_env_1970_);
lean_dec(v___x_1969_);
v___x_1971_ = lean_st_ref_get(v___y_1967_);
lean_dec(v___x_1971_);
v___x_1972_ = lean_st_ref_get(v___y_1965_);
v_mctx_1973_ = lean_ctor_get(v___x_1972_, 0);
lean_inc_ref(v_mctx_1973_);
lean_dec(v___x_1972_);
v_lctx_1974_ = lean_ctor_get(v___y_1964_, 2);
v_options_1975_ = lean_ctor_get(v___y_1966_, 2);
lean_inc_ref(v_options_1975_);
lean_inc_ref(v_lctx_1974_);
v___x_1976_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1976_, 0, v_env_1970_);
lean_ctor_set(v___x_1976_, 1, v_mctx_1973_);
lean_ctor_set(v___x_1976_, 2, v_lctx_1974_);
lean_ctor_set(v___x_1976_, 3, v_options_1975_);
v___x_1977_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1977_, 0, v___x_1976_);
lean_ctor_set(v___x_1977_, 1, v_msgData_1963_);
v___x_1978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1978_, 0, v___x_1977_);
return v___x_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2___boxed(lean_object* v_msgData_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msgData_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(lean_object* v_msg_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v_ref_1992_; lean_object* v___x_1993_; lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2002_; 
v_ref_1992_ = lean_ctor_get(v___y_1989_, 5);
v___x_1993_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1_spec__2(v_msg_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_);
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2002_ == 0)
{
v___x_1996_ = v___x_1993_;
v_isShared_1997_ = v_isSharedCheck_2002_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1993_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2002_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1998_; lean_object* v___x_2000_; 
lean_inc(v_ref_1992_);
v___x_1998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1998_, 0, v_ref_1992_);
lean_ctor_set(v___x_1998_, 1, v_a_1994_);
if (v_isShared_1997_ == 0)
{
lean_ctor_set_tag(v___x_1996_, 1);
lean_ctor_set(v___x_1996_, 0, v___x_1998_);
v___x_2000_ = v___x_1996_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v___x_1998_);
v___x_2000_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
return v___x_2000_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg___boxed(lean_object* v_msg_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v_msg_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(lean_object* v_x_2010_, lean_object* v_x_2011_, lean_object* v_x_2012_, lean_object* v_x_2013_){
_start:
{
lean_object* v_ks_2014_; lean_object* v_vs_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2039_; 
v_ks_2014_ = lean_ctor_get(v_x_2010_, 0);
v_vs_2015_ = lean_ctor_get(v_x_2010_, 1);
v_isSharedCheck_2039_ = !lean_is_exclusive(v_x_2010_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2017_ = v_x_2010_;
v_isShared_2018_ = v_isSharedCheck_2039_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_vs_2015_);
lean_inc(v_ks_2014_);
lean_dec(v_x_2010_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2039_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2019_; uint8_t v___x_2020_; 
v___x_2019_ = lean_array_get_size(v_ks_2014_);
v___x_2020_ = lean_nat_dec_lt(v_x_2011_, v___x_2019_);
if (v___x_2020_ == 0)
{
lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2024_; 
lean_dec(v_x_2011_);
v___x_2021_ = lean_array_push(v_ks_2014_, v_x_2012_);
v___x_2022_ = lean_array_push(v_vs_2015_, v_x_2013_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 1, v___x_2022_);
lean_ctor_set(v___x_2017_, 0, v___x_2021_);
v___x_2024_ = v___x_2017_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v___x_2022_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
else
{
lean_object* v_k_x27_2026_; uint8_t v___x_2027_; 
v_k_x27_2026_ = lean_array_fget_borrowed(v_ks_2014_, v_x_2011_);
v___x_2027_ = l_Lean_instBEqMVarId_beq(v_x_2012_, v_k_x27_2026_);
if (v___x_2027_ == 0)
{
lean_object* v___x_2029_; 
if (v_isShared_2018_ == 0)
{
v___x_2029_ = v___x_2017_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_ks_2014_);
lean_ctor_set(v_reuseFailAlloc_2033_, 1, v_vs_2015_);
v___x_2029_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2030_ = lean_unsigned_to_nat(1u);
v___x_2031_ = lean_nat_add(v_x_2011_, v___x_2030_);
lean_dec(v_x_2011_);
v_x_2010_ = v___x_2029_;
v_x_2011_ = v___x_2031_;
goto _start;
}
}
else
{
lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2037_; 
v___x_2034_ = lean_array_fset(v_ks_2014_, v_x_2011_, v_x_2012_);
v___x_2035_ = lean_array_fset(v_vs_2015_, v_x_2011_, v_x_2013_);
lean_dec(v_x_2011_);
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 1, v___x_2035_);
lean_ctor_set(v___x_2017_, 0, v___x_2034_);
v___x_2037_ = v___x_2017_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v___x_2034_);
lean_ctor_set(v_reuseFailAlloc_2038_, 1, v___x_2035_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_n_2040_, lean_object* v_k_2041_, lean_object* v_v_2042_){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = lean_unsigned_to_nat(0u);
v___x_2044_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_n_2040_, v___x_2043_, v_k_2041_, v_v_2042_);
return v___x_2044_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_2045_; size_t v___x_2046_; size_t v___x_2047_; 
v___x_2045_ = ((size_t)5ULL);
v___x_2046_ = ((size_t)1ULL);
v___x_2047_ = lean_usize_shift_left(v___x_2046_, v___x_2045_);
return v___x_2047_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_2048_; size_t v___x_2049_; size_t v___x_2050_; 
v___x_2048_ = ((size_t)1ULL);
v___x_2049_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_2050_ = lean_usize_sub(v___x_2049_, v___x_2048_);
return v___x_2050_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2051_; 
v___x_2051_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_2051_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(lean_object* v_x_2052_, size_t v_x_2053_, size_t v_x_2054_, lean_object* v_x_2055_, lean_object* v_x_2056_){
_start:
{
if (lean_obj_tag(v_x_2052_) == 0)
{
lean_object* v_es_2057_; size_t v___x_2058_; size_t v___x_2059_; size_t v___x_2060_; size_t v___x_2061_; lean_object* v_j_2062_; lean_object* v___x_2063_; uint8_t v___x_2064_; 
v_es_2057_ = lean_ctor_get(v_x_2052_, 0);
v___x_2058_ = ((size_t)5ULL);
v___x_2059_ = ((size_t)1ULL);
v___x_2060_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_2061_ = lean_usize_land(v_x_2053_, v___x_2060_);
v_j_2062_ = lean_usize_to_nat(v___x_2061_);
v___x_2063_ = lean_array_get_size(v_es_2057_);
v___x_2064_ = lean_nat_dec_lt(v_j_2062_, v___x_2063_);
if (v___x_2064_ == 0)
{
lean_dec(v_j_2062_);
lean_dec(v_x_2056_);
lean_dec(v_x_2055_);
return v_x_2052_;
}
else
{
lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2101_; 
lean_inc_ref(v_es_2057_);
v_isSharedCheck_2101_ = !lean_is_exclusive(v_x_2052_);
if (v_isSharedCheck_2101_ == 0)
{
lean_object* v_unused_2102_; 
v_unused_2102_ = lean_ctor_get(v_x_2052_, 0);
lean_dec(v_unused_2102_);
v___x_2066_ = v_x_2052_;
v_isShared_2067_ = v_isSharedCheck_2101_;
goto v_resetjp_2065_;
}
else
{
lean_dec(v_x_2052_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2101_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v_v_2068_; lean_object* v___x_2069_; lean_object* v_xs_x27_2070_; lean_object* v___y_2072_; 
v_v_2068_ = lean_array_fget(v_es_2057_, v_j_2062_);
v___x_2069_ = lean_box(0);
v_xs_x27_2070_ = lean_array_fset(v_es_2057_, v_j_2062_, v___x_2069_);
switch(lean_obj_tag(v_v_2068_))
{
case 0:
{
lean_object* v_key_2077_; lean_object* v_val_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2088_; 
v_key_2077_ = lean_ctor_get(v_v_2068_, 0);
v_val_2078_ = lean_ctor_get(v_v_2068_, 1);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_v_2068_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2080_ = v_v_2068_;
v_isShared_2081_ = v_isSharedCheck_2088_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_val_2078_);
lean_inc(v_key_2077_);
lean_dec(v_v_2068_);
v___x_2080_ = lean_box(0);
v_isShared_2081_ = v_isSharedCheck_2088_;
goto v_resetjp_2079_;
}
v_resetjp_2079_:
{
uint8_t v___x_2082_; 
v___x_2082_ = l_Lean_instBEqMVarId_beq(v_x_2055_, v_key_2077_);
if (v___x_2082_ == 0)
{
lean_object* v___x_2083_; lean_object* v___x_2084_; 
lean_del_object(v___x_2080_);
v___x_2083_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2077_, v_val_2078_, v_x_2055_, v_x_2056_);
v___x_2084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2084_, 0, v___x_2083_);
v___y_2072_ = v___x_2084_;
goto v___jp_2071_;
}
else
{
lean_object* v___x_2086_; 
lean_dec(v_val_2078_);
lean_dec(v_key_2077_);
if (v_isShared_2081_ == 0)
{
lean_ctor_set(v___x_2080_, 1, v_x_2056_);
lean_ctor_set(v___x_2080_, 0, v_x_2055_);
v___x_2086_ = v___x_2080_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_x_2055_);
lean_ctor_set(v_reuseFailAlloc_2087_, 1, v_x_2056_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
v___y_2072_ = v___x_2086_;
goto v___jp_2071_;
}
}
}
}
case 1:
{
lean_object* v_node_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2099_; 
v_node_2089_ = lean_ctor_get(v_v_2068_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v_v_2068_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2091_ = v_v_2068_;
v_isShared_2092_ = v_isSharedCheck_2099_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_node_2089_);
lean_dec(v_v_2068_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2099_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
size_t v___x_2093_; size_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2097_; 
v___x_2093_ = lean_usize_shift_right(v_x_2053_, v___x_2058_);
v___x_2094_ = lean_usize_add(v_x_2054_, v___x_2059_);
v___x_2095_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_node_2089_, v___x_2093_, v___x_2094_, v_x_2055_, v_x_2056_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 0, v___x_2095_);
v___x_2097_ = v___x_2091_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v___x_2095_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
v___y_2072_ = v___x_2097_;
goto v___jp_2071_;
}
}
}
default: 
{
lean_object* v___x_2100_; 
v___x_2100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2100_, 0, v_x_2055_);
lean_ctor_set(v___x_2100_, 1, v_x_2056_);
v___y_2072_ = v___x_2100_;
goto v___jp_2071_;
}
}
v___jp_2071_:
{
lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2073_ = lean_array_fset(v_xs_x27_2070_, v_j_2062_, v___y_2072_);
lean_dec(v_j_2062_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 0, v___x_2073_);
v___x_2075_ = v___x_2066_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
}
else
{
lean_object* v_ks_2103_; lean_object* v_vs_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2124_; 
v_ks_2103_ = lean_ctor_get(v_x_2052_, 0);
v_vs_2104_ = lean_ctor_get(v_x_2052_, 1);
v_isSharedCheck_2124_ = !lean_is_exclusive(v_x_2052_);
if (v_isSharedCheck_2124_ == 0)
{
v___x_2106_ = v_x_2052_;
v_isShared_2107_ = v_isSharedCheck_2124_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_vs_2104_);
lean_inc(v_ks_2103_);
lean_dec(v_x_2052_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2124_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2123_; 
v_reuseFailAlloc_2123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2123_, 0, v_ks_2103_);
lean_ctor_set(v_reuseFailAlloc_2123_, 1, v_vs_2104_);
v___x_2109_ = v_reuseFailAlloc_2123_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
lean_object* v_newNode_2110_; uint8_t v___y_2112_; size_t v___x_2118_; uint8_t v___x_2119_; 
v_newNode_2110_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(v___x_2109_, v_x_2055_, v_x_2056_);
v___x_2118_ = ((size_t)7ULL);
v___x_2119_ = lean_usize_dec_le(v___x_2118_, v_x_2054_);
if (v___x_2119_ == 0)
{
lean_object* v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2120_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2110_);
v___x_2121_ = lean_unsigned_to_nat(4u);
v___x_2122_ = lean_nat_dec_lt(v___x_2120_, v___x_2121_);
lean_dec(v___x_2120_);
v___y_2112_ = v___x_2122_;
goto v___jp_2111_;
}
else
{
v___y_2112_ = v___x_2119_;
goto v___jp_2111_;
}
v___jp_2111_:
{
if (v___y_2112_ == 0)
{
lean_object* v_ks_2113_; lean_object* v_vs_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v_ks_2113_ = lean_ctor_get(v_newNode_2110_, 0);
lean_inc_ref(v_ks_2113_);
v_vs_2114_ = lean_ctor_get(v_newNode_2110_, 1);
lean_inc_ref(v_vs_2114_);
lean_dec_ref(v_newNode_2110_);
v___x_2115_ = lean_unsigned_to_nat(0u);
v___x_2116_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_2117_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_x_2054_, v_ks_2113_, v_vs_2114_, v___x_2115_, v___x_2116_);
lean_dec_ref(v_vs_2114_);
lean_dec_ref(v_ks_2113_);
return v___x_2117_;
}
else
{
return v_newNode_2110_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(size_t v_depth_2125_, lean_object* v_keys_2126_, lean_object* v_vals_2127_, lean_object* v_i_2128_, lean_object* v_entries_2129_){
_start:
{
lean_object* v___x_2130_; uint8_t v___x_2131_; 
v___x_2130_ = lean_array_get_size(v_keys_2126_);
v___x_2131_ = lean_nat_dec_lt(v_i_2128_, v___x_2130_);
if (v___x_2131_ == 0)
{
lean_dec(v_i_2128_);
return v_entries_2129_;
}
else
{
lean_object* v_k_2132_; lean_object* v_v_2133_; uint64_t v___x_2134_; size_t v_h_2135_; size_t v___x_2136_; lean_object* v___x_2137_; size_t v___x_2138_; size_t v___x_2139_; size_t v___x_2140_; size_t v_h_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v_k_2132_ = lean_array_fget_borrowed(v_keys_2126_, v_i_2128_);
v_v_2133_ = lean_array_fget_borrowed(v_vals_2127_, v_i_2128_);
v___x_2134_ = l_Lean_instHashableMVarId_hash(v_k_2132_);
v_h_2135_ = lean_uint64_to_usize(v___x_2134_);
v___x_2136_ = ((size_t)5ULL);
v___x_2137_ = lean_unsigned_to_nat(1u);
v___x_2138_ = ((size_t)1ULL);
v___x_2139_ = lean_usize_sub(v_depth_2125_, v___x_2138_);
v___x_2140_ = lean_usize_mul(v___x_2136_, v___x_2139_);
v_h_2141_ = lean_usize_shift_right(v_h_2135_, v___x_2140_);
v___x_2142_ = lean_nat_add(v_i_2128_, v___x_2137_);
lean_dec(v_i_2128_);
lean_inc(v_v_2133_);
lean_inc(v_k_2132_);
v___x_2143_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_entries_2129_, v_h_2141_, v_depth_2125_, v_k_2132_, v_v_2133_);
v_i_2128_ = v___x_2142_;
v_entries_2129_ = v___x_2143_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_depth_2145_, lean_object* v_keys_2146_, lean_object* v_vals_2147_, lean_object* v_i_2148_, lean_object* v_entries_2149_){
_start:
{
size_t v_depth_boxed_2150_; lean_object* v_res_2151_; 
v_depth_boxed_2150_ = lean_unbox_usize(v_depth_2145_);
lean_dec(v_depth_2145_);
v_res_2151_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_boxed_2150_, v_keys_2146_, v_vals_2147_, v_i_2148_, v_entries_2149_);
lean_dec_ref(v_vals_2147_);
lean_dec_ref(v_keys_2146_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_2152_, lean_object* v_x_2153_, lean_object* v_x_2154_, lean_object* v_x_2155_, lean_object* v_x_2156_){
_start:
{
size_t v_x_3953__boxed_2157_; size_t v_x_3954__boxed_2158_; lean_object* v_res_2159_; 
v_x_3953__boxed_2157_ = lean_unbox_usize(v_x_2153_);
lean_dec(v_x_2153_);
v_x_3954__boxed_2158_ = lean_unbox_usize(v_x_2154_);
lean_dec(v_x_2154_);
v_res_2159_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2152_, v_x_3953__boxed_2157_, v_x_3954__boxed_2158_, v_x_2155_, v_x_2156_);
return v_res_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(lean_object* v_x_2160_, lean_object* v_x_2161_, lean_object* v_x_2162_){
_start:
{
uint64_t v___x_2163_; size_t v___x_2164_; size_t v___x_2165_; lean_object* v___x_2166_; 
v___x_2163_ = l_Lean_instHashableMVarId_hash(v_x_2161_);
v___x_2164_ = lean_uint64_to_usize(v___x_2163_);
v___x_2165_ = ((size_t)1ULL);
v___x_2166_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2160_, v___x_2164_, v___x_2165_, v_x_2161_, v_x_2162_);
return v___x_2166_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(lean_object* v_mvarId_2167_, lean_object* v_val_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v_mctx_2174_; lean_object* v_cache_2175_; lean_object* v_zetaDeltaFVarIds_2176_; lean_object* v_postponed_2177_; lean_object* v_diag_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2206_; 
v___x_2172_ = lean_st_ref_get(v___y_2170_);
lean_dec(v___x_2172_);
v___x_2173_ = lean_st_ref_take(v___y_2169_);
v_mctx_2174_ = lean_ctor_get(v___x_2173_, 0);
v_cache_2175_ = lean_ctor_get(v___x_2173_, 1);
v_zetaDeltaFVarIds_2176_ = lean_ctor_get(v___x_2173_, 2);
v_postponed_2177_ = lean_ctor_get(v___x_2173_, 3);
v_diag_2178_ = lean_ctor_get(v___x_2173_, 4);
v_isSharedCheck_2206_ = !lean_is_exclusive(v___x_2173_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2180_ = v___x_2173_;
v_isShared_2181_ = v_isSharedCheck_2206_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_diag_2178_);
lean_inc(v_postponed_2177_);
lean_inc(v_zetaDeltaFVarIds_2176_);
lean_inc(v_cache_2175_);
lean_inc(v_mctx_2174_);
lean_dec(v___x_2173_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2206_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v_depth_2182_; lean_object* v_levelAssignDepth_2183_; lean_object* v_lmvarCounter_2184_; lean_object* v_mvarCounter_2185_; lean_object* v_lDecls_2186_; lean_object* v_decls_2187_; lean_object* v_userNames_2188_; lean_object* v_lAssignment_2189_; lean_object* v_eAssignment_2190_; lean_object* v_dAssignment_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2205_; 
v_depth_2182_ = lean_ctor_get(v_mctx_2174_, 0);
v_levelAssignDepth_2183_ = lean_ctor_get(v_mctx_2174_, 1);
v_lmvarCounter_2184_ = lean_ctor_get(v_mctx_2174_, 2);
v_mvarCounter_2185_ = lean_ctor_get(v_mctx_2174_, 3);
v_lDecls_2186_ = lean_ctor_get(v_mctx_2174_, 4);
v_decls_2187_ = lean_ctor_get(v_mctx_2174_, 5);
v_userNames_2188_ = lean_ctor_get(v_mctx_2174_, 6);
v_lAssignment_2189_ = lean_ctor_get(v_mctx_2174_, 7);
v_eAssignment_2190_ = lean_ctor_get(v_mctx_2174_, 8);
v_dAssignment_2191_ = lean_ctor_get(v_mctx_2174_, 9);
v_isSharedCheck_2205_ = !lean_is_exclusive(v_mctx_2174_);
if (v_isSharedCheck_2205_ == 0)
{
v___x_2193_ = v_mctx_2174_;
v_isShared_2194_ = v_isSharedCheck_2205_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_dAssignment_2191_);
lean_inc(v_eAssignment_2190_);
lean_inc(v_lAssignment_2189_);
lean_inc(v_userNames_2188_);
lean_inc(v_decls_2187_);
lean_inc(v_lDecls_2186_);
lean_inc(v_mvarCounter_2185_);
lean_inc(v_lmvarCounter_2184_);
lean_inc(v_levelAssignDepth_2183_);
lean_inc(v_depth_2182_);
lean_dec(v_mctx_2174_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2205_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
lean_object* v___x_2195_; lean_object* v___x_2197_; 
v___x_2195_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(v_eAssignment_2190_, v_mvarId_2167_, v_val_2168_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 8, v___x_2195_);
v___x_2197_ = v___x_2193_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_depth_2182_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v_levelAssignDepth_2183_);
lean_ctor_set(v_reuseFailAlloc_2204_, 2, v_lmvarCounter_2184_);
lean_ctor_set(v_reuseFailAlloc_2204_, 3, v_mvarCounter_2185_);
lean_ctor_set(v_reuseFailAlloc_2204_, 4, v_lDecls_2186_);
lean_ctor_set(v_reuseFailAlloc_2204_, 5, v_decls_2187_);
lean_ctor_set(v_reuseFailAlloc_2204_, 6, v_userNames_2188_);
lean_ctor_set(v_reuseFailAlloc_2204_, 7, v_lAssignment_2189_);
lean_ctor_set(v_reuseFailAlloc_2204_, 8, v___x_2195_);
lean_ctor_set(v_reuseFailAlloc_2204_, 9, v_dAssignment_2191_);
v___x_2197_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
lean_object* v___x_2199_; 
if (v_isShared_2181_ == 0)
{
lean_ctor_set(v___x_2180_, 0, v___x_2197_);
v___x_2199_ = v___x_2180_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2203_; 
v_reuseFailAlloc_2203_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2203_, 0, v___x_2197_);
lean_ctor_set(v_reuseFailAlloc_2203_, 1, v_cache_2175_);
lean_ctor_set(v_reuseFailAlloc_2203_, 2, v_zetaDeltaFVarIds_2176_);
lean_ctor_set(v_reuseFailAlloc_2203_, 3, v_postponed_2177_);
lean_ctor_set(v_reuseFailAlloc_2203_, 4, v_diag_2178_);
v___x_2199_ = v_reuseFailAlloc_2203_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = lean_st_ref_set(v___y_2169_, v___x_2199_);
v___x_2201_ = lean_box(0);
v___x_2202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
return v___x_2202_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg___boxed(lean_object* v_mvarId_2207_, lean_object* v_val_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_mvarId_2207_, v_val_2208_, v___y_2209_, v___y_2210_);
lean_dec(v___y_2210_);
lean_dec(v___y_2209_);
return v_res_2212_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2213_; 
v___x_2213_ = lean_mk_string_unchecked("`refine` tactic failed, value", 29, 29);
return v___x_2213_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; 
v___x_2214_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__0, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__0);
v___x_2215_ = l_Lean_stringToMessageData(v___x_2214_);
return v___x_2215_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = lean_mk_string_unchecked("\ndepends on the main goal metavariable `", 40, 40);
return v___x_2216_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; 
v___x_2217_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__2, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__2);
v___x_2218_ = l_Lean_stringToMessageData(v___x_2217_);
return v___x_2218_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2219_; 
v___x_2219_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_2219_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2220_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__4, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__4);
v___x_2221_ = l_Lean_stringToMessageData(v___x_2220_);
return v___x_2221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1(lean_object* v_stx_2222_, lean_object* v_tagSuffix_2223_, uint8_t v_allowNaturalHoles_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v___x_2234_; 
v___x_2234_ = l_Lean_Elab_Tactic_getMainTarget(v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
if (lean_obj_tag(v___x_2234_) == 0)
{
lean_object* v_a_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v_a_2235_ = lean_ctor_get(v___x_2234_, 0);
lean_inc(v_a_2235_);
lean_dec_ref(v___x_2234_);
v___x_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2236_, 0, v_a_2235_);
v___x_2237_ = lean_box(0);
v___x_2238_ = l_Lean_Elab_Tactic_elabTermWithHoles(v_stx_2222_, v___x_2236_, v_tagSuffix_2223_, v_allowNaturalHoles_2224_, v___x_2237_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
if (lean_obj_tag(v___x_2238_) == 0)
{
lean_object* v_a_2239_; lean_object* v_fst_2240_; lean_object* v_snd_2241_; lean_object* v___x_2243_; uint8_t v_isShared_2244_; uint8_t v_isSharedCheck_2287_; 
v_a_2239_ = lean_ctor_get(v___x_2238_, 0);
lean_inc(v_a_2239_);
lean_dec_ref(v___x_2238_);
v_fst_2240_ = lean_ctor_get(v_a_2239_, 0);
v_snd_2241_ = lean_ctor_get(v_a_2239_, 1);
v_isSharedCheck_2287_ = !lean_is_exclusive(v_a_2239_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2243_ = v_a_2239_;
v_isShared_2244_ = v_isSharedCheck_2287_;
goto v_resetjp_2242_;
}
else
{
lean_inc(v_snd_2241_);
lean_inc(v_fst_2240_);
lean_dec(v_a_2239_);
v___x_2243_ = lean_box(0);
v_isShared_2244_ = v_isSharedCheck_2287_;
goto v_resetjp_2242_;
}
v_resetjp_2242_:
{
lean_object* v___x_2245_; 
v___x_2245_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2226_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; lean_object* v___x_2247_; lean_object* v_a_2248_; lean_object* v___y_2250_; lean_object* v___y_2251_; lean_object* v___y_2252_; lean_object* v___y_2253_; lean_object* v___y_2254_; lean_object* v___y_2255_; lean_object* v___y_2256_; lean_object* v___y_2257_; lean_object* v___x_2260_; uint8_t v___x_2274_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
lean_inc_n(v_a_2246_, 2);
lean_dec_ref(v___x_2245_);
v___x_2247_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_fst_2240_, v___y_2230_, v___y_2232_);
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
lean_inc(v_a_2248_);
lean_dec_ref(v___x_2247_);
v___x_2260_ = l_Lean_mkMVar(v_a_2246_);
v___x_2274_ = lean_expr_eqv(v_a_2248_, v___x_2260_);
if (v___x_2274_ == 0)
{
lean_object* v___f_2275_; lean_object* v___x_2276_; 
lean_inc(v_a_2246_);
v___f_2275_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_refineCore___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2275_, 0, v_a_2246_);
lean_inc(v_a_2248_);
v___x_2276_ = l_Lean_FindMVar_main(v___f_2275_, v_a_2248_, v___x_2237_);
if (lean_obj_tag(v___x_2276_) == 1)
{
lean_dec_ref(v___x_2276_);
lean_dec(v_a_2246_);
lean_dec(v_snd_2241_);
goto v___jp_2261_;
}
else
{
lean_dec(v___x_2276_);
if (v___x_2274_ == 0)
{
lean_dec_ref(v___x_2260_);
lean_del_object(v___x_2243_);
v___y_2250_ = v___y_2225_;
v___y_2251_ = v___y_2226_;
v___y_2252_ = v___y_2227_;
v___y_2253_ = v___y_2228_;
v___y_2254_ = v___y_2229_;
v___y_2255_ = v___y_2230_;
v___y_2256_ = v___y_2231_;
v___y_2257_ = v___y_2232_;
goto v___jp_2249_;
}
else
{
lean_dec(v_a_2246_);
lean_dec(v_snd_2241_);
goto v___jp_2261_;
}
}
}
else
{
lean_object* v___x_2277_; lean_object* v___x_2278_; 
lean_dec_ref(v___x_2260_);
lean_dec(v_a_2248_);
lean_del_object(v___x_2243_);
v___x_2277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2277_, 0, v_a_2246_);
lean_ctor_set(v___x_2277_, 1, v_snd_2241_);
v___x_2278_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2277_, v___y_2226_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
return v___x_2278_;
}
v___jp_2249_:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_a_2246_, v_a_2248_, v___y_2255_, v___y_2257_);
lean_dec_ref(v___x_2258_);
v___x_2259_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_snd_2241_, v___y_2251_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_);
return v___x_2259_;
}
v___jp_2261_:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2262_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__1, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__1);
v___x_2263_ = l_Lean_indentExpr(v_a_2248_);
if (v_isShared_2244_ == 0)
{
lean_ctor_set_tag(v___x_2243_, 7);
lean_ctor_set(v___x_2243_, 1, v___x_2263_);
lean_ctor_set(v___x_2243_, 0, v___x_2262_);
v___x_2265_ = v___x_2243_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2273_; 
v_reuseFailAlloc_2273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2273_, 0, v___x_2262_);
lean_ctor_set(v_reuseFailAlloc_2273_, 1, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2273_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2266_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__3, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__3);
v___x_2267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2267_, 0, v___x_2265_);
lean_ctor_set(v___x_2267_, 1, v___x_2266_);
v___x_2268_ = l_Lean_MessageData_ofExpr(v___x_2260_);
v___x_2269_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2269_, 0, v___x_2267_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
v___x_2271_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2271_, 0, v___x_2269_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
v___x_2272_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2271_, v___y_2229_, v___y_2230_, v___y_2231_, v___y_2232_);
return v___x_2272_;
}
}
}
else
{
lean_object* v_a_2279_; lean_object* v___x_2281_; uint8_t v_isShared_2282_; uint8_t v_isSharedCheck_2286_; 
lean_del_object(v___x_2243_);
lean_dec(v_snd_2241_);
lean_dec(v_fst_2240_);
v_a_2279_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2286_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2286_ == 0)
{
v___x_2281_ = v___x_2245_;
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
else
{
lean_inc(v_a_2279_);
lean_dec(v___x_2245_);
v___x_2281_ = lean_box(0);
v_isShared_2282_ = v_isSharedCheck_2286_;
goto v_resetjp_2280_;
}
v_resetjp_2280_:
{
lean_object* v___x_2284_; 
if (v_isShared_2282_ == 0)
{
v___x_2284_ = v___x_2281_;
goto v_reusejp_2283_;
}
else
{
lean_object* v_reuseFailAlloc_2285_; 
v_reuseFailAlloc_2285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2285_, 0, v_a_2279_);
v___x_2284_ = v_reuseFailAlloc_2285_;
goto v_reusejp_2283_;
}
v_reusejp_2283_:
{
return v___x_2284_;
}
}
}
}
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
v_a_2288_ = lean_ctor_get(v___x_2238_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2238_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2238_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2238_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
lean_dec(v_tagSuffix_2223_);
lean_dec(v_stx_2222_);
v_a_2296_ = lean_ctor_get(v___x_2234_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2234_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2234_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2234_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___lam__1___boxed(lean_object* v_stx_2304_, lean_object* v_tagSuffix_2305_, lean_object* v_allowNaturalHoles_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_2316_; lean_object* v_res_2317_; 
v_allowNaturalHoles_boxed_2316_ = lean_unbox(v_allowNaturalHoles_2306_);
v_res_2317_ = l_Lean_Elab_Tactic_refineCore___lam__1(v_stx_2304_, v_tagSuffix_2305_, v_allowNaturalHoles_boxed_2316_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
lean_dec(v___y_2308_);
lean_dec_ref(v___y_2307_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore(lean_object* v_stx_2318_, lean_object* v_tagSuffix_2319_, uint8_t v_allowNaturalHoles_2320_, lean_object* v_a_2321_, lean_object* v_a_2322_, lean_object* v_a_2323_, lean_object* v_a_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_){
_start:
{
lean_object* v___x_2330_; lean_object* v___f_2331_; lean_object* v___x_2332_; 
v___x_2330_ = lean_box(v_allowNaturalHoles_2320_);
v___f_2331_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_refineCore___lam__1___boxed), 12, 3);
lean_closure_set(v___f_2331_, 0, v_stx_2318_);
lean_closure_set(v___f_2331_, 1, v_tagSuffix_2319_);
lean_closure_set(v___f_2331_, 2, v___x_2330_);
v___x_2332_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2331_, v_a_2321_, v_a_2322_, v_a_2323_, v_a_2324_, v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_);
return v___x_2332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_refineCore___boxed(lean_object* v_stx_2333_, lean_object* v_tagSuffix_2334_, lean_object* v_allowNaturalHoles_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_, lean_object* v_a_2343_, lean_object* v_a_2344_){
_start:
{
uint8_t v_allowNaturalHoles_boxed_2345_; lean_object* v_res_2346_; 
v_allowNaturalHoles_boxed_2345_ = lean_unbox(v_allowNaturalHoles_2335_);
v_res_2346_ = l_Lean_Elab_Tactic_refineCore(v_stx_2333_, v_tagSuffix_2334_, v_allowNaturalHoles_boxed_2345_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
lean_dec(v_a_2343_);
lean_dec_ref(v_a_2342_);
lean_dec(v_a_2341_);
lean_dec_ref(v_a_2340_);
lean_dec(v_a_2339_);
lean_dec_ref(v_a_2338_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
return v_res_2346_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(lean_object* v_mvarId_2347_, lean_object* v_val_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_){
_start:
{
lean_object* v___x_2358_; 
v___x_2358_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___redArg(v_mvarId_2347_, v_val_2348_, v___y_2354_, v___y_2356_);
return v___x_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0___boxed(lean_object* v_mvarId_2359_, lean_object* v_val_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
lean_object* v_res_2370_; 
v_res_2370_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0(v_mvarId_2359_, v_val_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_);
lean_dec(v___y_2368_);
lean_dec_ref(v___y_2367_);
lean_dec(v___y_2366_);
lean_dec_ref(v___y_2365_);
lean_dec(v___y_2364_);
lean_dec_ref(v___y_2363_);
lean_dec(v___y_2362_);
lean_dec_ref(v___y_2361_);
return v_res_2370_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(lean_object* v_00_u03b1_2371_, lean_object* v_msg_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v___x_2382_; 
v___x_2382_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v_msg_2372_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___boxed(lean_object* v_00_u03b1_2383_, lean_object* v_msg_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
lean_object* v_res_2394_; 
v_res_2394_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1(v_00_u03b1_2383_, v_msg_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
return v_res_2394_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0(lean_object* v_00_u03b2_2395_, lean_object* v_x_2396_, lean_object* v_x_2397_, lean_object* v_x_2398_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0___redArg(v_x_2396_, v_x_2397_, v_x_2398_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2400_, lean_object* v_x_2401_, size_t v_x_2402_, size_t v_x_2403_, lean_object* v_x_2404_, lean_object* v_x_2405_){
_start:
{
lean_object* v___x_2406_; 
v___x_2406_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___redArg(v_x_2401_, v_x_2402_, v_x_2403_, v_x_2404_, v_x_2405_);
return v___x_2406_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_2407_, lean_object* v_x_2408_, lean_object* v_x_2409_, lean_object* v_x_2410_, lean_object* v_x_2411_, lean_object* v_x_2412_){
_start:
{
size_t v_x_4453__boxed_2413_; size_t v_x_4454__boxed_2414_; lean_object* v_res_2415_; 
v_x_4453__boxed_2413_ = lean_unbox_usize(v_x_2409_);
lean_dec(v_x_2409_);
v_x_4454__boxed_2414_ = lean_unbox_usize(v_x_2410_);
lean_dec(v_x_2410_);
v_res_2415_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1(v_00_u03b2_2407_, v_x_2408_, v_x_4453__boxed_2413_, v_x_4454__boxed_2414_, v_x_2411_, v_x_2412_);
return v_res_2415_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_2416_, lean_object* v_n_2417_, lean_object* v_k_2418_, lean_object* v_v_2419_){
_start:
{
lean_object* v___x_2420_; 
v___x_2420_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4___redArg(v_n_2417_, v_k_2418_, v_v_2419_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_2421_, size_t v_depth_2422_, lean_object* v_keys_2423_, lean_object* v_vals_2424_, lean_object* v_heq_2425_, lean_object* v_i_2426_, lean_object* v_entries_2427_){
_start:
{
lean_object* v___x_2428_; 
v___x_2428_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___redArg(v_depth_2422_, v_keys_2423_, v_vals_2424_, v_i_2426_, v_entries_2427_);
return v___x_2428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_2429_, lean_object* v_depth_2430_, lean_object* v_keys_2431_, lean_object* v_vals_2432_, lean_object* v_heq_2433_, lean_object* v_i_2434_, lean_object* v_entries_2435_){
_start:
{
size_t v_depth_boxed_2436_; lean_object* v_res_2437_; 
v_depth_boxed_2436_ = lean_unbox_usize(v_depth_2430_);
lean_dec(v_depth_2430_);
v_res_2437_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_2429_, v_depth_boxed_2436_, v_keys_2431_, v_vals_2432_, v_heq_2433_, v_i_2434_, v_entries_2435_);
lean_dec_ref(v_vals_2432_);
lean_dec_ref(v_keys_2431_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_2438_, lean_object* v_x_2439_, lean_object* v_x_2440_, lean_object* v_x_2441_, lean_object* v_x_2442_){
_start:
{
lean_object* v___x_2443_; 
v___x_2443_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_refineCore_spec__0_spec__0_spec__1_spec__4_spec__5___redArg(v_x_2439_, v_x_2440_, v_x_2441_, v_x_2442_);
return v___x_2443_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRefine___closed__0(void){
_start:
{
lean_object* v___x_2444_; 
v___x_2444_ = lean_mk_string_unchecked("refine", 6, 6);
return v___x_2444_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRefine___closed__1(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; 
v___x_2445_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine___closed__0, &l_Lean_Elab_Tactic_evalRefine___closed__0_once, _init_l_Lean_Elab_Tactic_evalRefine___closed__0);
v___x_2446_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_2447_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_2448_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_2449_ = l_Lean_Name_mkStr4(v___x_2448_, v___x_2447_, v___x_2446_, v___x_2445_);
return v___x_2449_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRefine___closed__2(void){
_start:
{
lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2450_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine___closed__0, &l_Lean_Elab_Tactic_evalRefine___closed__0_once, _init_l_Lean_Elab_Tactic_evalRefine___closed__0);
v___x_2451_ = l_Lean_Name_mkStr1(v___x_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine(lean_object* v_stx_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v___x_2462_; uint8_t v___x_2463_; 
v___x_2462_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine___closed__1, &l_Lean_Elab_Tactic_evalRefine___closed__1_once, _init_l_Lean_Elab_Tactic_evalRefine___closed__1);
lean_inc(v_stx_2452_);
v___x_2463_ = l_Lean_Syntax_isOfKind(v_stx_2452_, v___x_2462_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; 
lean_dec(v_stx_2452_);
v___x_2464_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2464_;
}
else
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; lean_object* v___x_2469_; 
v___x_2465_ = lean_unsigned_to_nat(1u);
v___x_2466_ = l_Lean_Syntax_getArg(v_stx_2452_, v___x_2465_);
lean_dec(v_stx_2452_);
v___x_2467_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine___closed__2, &l_Lean_Elab_Tactic_evalRefine___closed__2_once, _init_l_Lean_Elab_Tactic_evalRefine___closed__2);
v___x_2468_ = 0;
v___x_2469_ = l_Lean_Elab_Tactic_refineCore(v___x_2466_, v___x_2467_, v___x_2468_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_);
return v___x_2469_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine___boxed(lean_object* v_stx_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_){
_start:
{
lean_object* v_res_2480_; 
v_res_2480_ = l_Lean_Elab_Tactic_evalRefine(v_stx_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_);
lean_dec(v_a_2478_);
lean_dec_ref(v_a_2477_);
lean_dec(v_a_2476_);
lean_dec_ref(v_a_2475_);
lean_dec(v_a_2474_);
lean_dec_ref(v_a_2473_);
lean_dec(v_a_2472_);
lean_dec_ref(v_a_2471_);
return v_res_2480_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0(void){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = lean_mk_string_unchecked("evalRefine", 10, 10);
return v___x_2481_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1(void){
_start:
{
lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; 
v___x_2482_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__0);
v___x_2483_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_2484_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_2485_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_2486_ = l_Lean_Name_mkStr4(v___x_2485_, v___x_2484_, v___x_2483_, v___x_2482_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1(){
_start:
{
lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v___x_2488_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2489_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine___closed__1, &l_Lean_Elab_Tactic_evalRefine___closed__1_once, _init_l_Lean_Elab_Tactic_evalRefine___closed__1);
v___x_2490_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1);
v___x_2491_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRefine___boxed), 10, 0);
v___x_2492_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2488_, v___x_2489_, v___x_2490_, v___x_2491_);
return v___x_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___boxed(lean_object* v_a_2493_){
_start:
{
lean_object* v_res_2494_; 
v_res_2494_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
return v_res_2494_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2495_ = lean_unsigned_to_nat(27u);
v___x_2496_ = lean_unsigned_to_nat(189u);
v___x_2497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
lean_ctor_set(v___x_2497_, 1, v___x_2495_);
return v___x_2497_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2498_ = lean_unsigned_to_nat(50u);
v___x_2499_ = lean_unsigned_to_nat(192u);
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2499_);
lean_ctor_set(v___x_2500_, 1, v___x_2498_);
return v___x_2500_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2501_ = lean_unsigned_to_nat(50u);
v___x_2502_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__1);
v___x_2503_ = lean_unsigned_to_nat(27u);
v___x_2504_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__0);
v___x_2505_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2505_, 0, v___x_2504_);
lean_ctor_set(v___x_2505_, 1, v___x_2503_);
lean_ctor_set(v___x_2505_, 2, v___x_2502_);
lean_ctor_set(v___x_2505_, 3, v___x_2501_);
return v___x_2505_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2506_ = lean_unsigned_to_nat(31u);
v___x_2507_ = lean_unsigned_to_nat(189u);
v___x_2508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
lean_ctor_set(v___x_2508_, 1, v___x_2506_);
return v___x_2508_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = lean_unsigned_to_nat(41u);
v___x_2510_ = lean_unsigned_to_nat(189u);
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2510_);
lean_ctor_set(v___x_2511_, 1, v___x_2509_);
return v___x_2511_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2512_ = lean_unsigned_to_nat(41u);
v___x_2513_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__4);
v___x_2514_ = lean_unsigned_to_nat(31u);
v___x_2515_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__3);
v___x_2516_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
lean_ctor_set(v___x_2516_, 1, v___x_2514_);
lean_ctor_set(v___x_2516_, 2, v___x_2513_);
lean_ctor_set(v___x_2516_, 3, v___x_2512_);
return v___x_2516_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__5);
v___x_2518_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__2);
v___x_2519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2519_, 0, v___x_2518_);
lean_ctor_set(v___x_2519_, 1, v___x_2517_);
return v___x_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3(){
_start:
{
lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2521_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1___closed__1);
v___x_2522_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___closed__6);
v___x_2523_ = l_Lean_addBuiltinDeclarationRanges(v___x_2521_, v___x_2522_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3___boxed(lean_object* v_a_2524_){
_start:
{
lean_object* v_res_2525_; 
v_res_2525_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
return v_res_2525_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__0(void){
_start:
{
lean_object* v___x_2526_; 
v___x_2526_ = lean_mk_string_unchecked("refine'", 7, 7);
return v___x_2526_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__1(void){
_start:
{
lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2527_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine_x27___closed__0, &l_Lean_Elab_Tactic_evalRefine_x27___closed__0_once, _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__0);
v___x_2528_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_2529_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_2530_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_2531_ = l_Lean_Name_mkStr4(v___x_2530_, v___x_2529_, v___x_2528_, v___x_2527_);
return v___x_2531_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__2(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine_x27___closed__0, &l_Lean_Elab_Tactic_evalRefine_x27___closed__0_once, _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__0);
v___x_2533_ = l_Lean_Name_mkStr1(v___x_2532_);
return v___x_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27(lean_object* v_stx_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_, lean_object* v_a_2538_, lean_object* v_a_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_){
_start:
{
lean_object* v___x_2544_; uint8_t v___x_2545_; 
v___x_2544_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine_x27___closed__1, &l_Lean_Elab_Tactic_evalRefine_x27___closed__1_once, _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__1);
lean_inc(v_stx_2534_);
v___x_2545_ = l_Lean_Syntax_isOfKind(v_stx_2534_, v___x_2544_);
if (v___x_2545_ == 0)
{
lean_object* v___x_2546_; 
lean_dec(v_stx_2534_);
v___x_2546_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2546_;
}
else
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2547_ = lean_unsigned_to_nat(1u);
v___x_2548_ = l_Lean_Syntax_getArg(v_stx_2534_, v___x_2547_);
lean_dec(v_stx_2534_);
v___x_2549_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine_x27___closed__2, &l_Lean_Elab_Tactic_evalRefine_x27___closed__2_once, _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__2);
v___x_2550_ = l_Lean_Elab_Tactic_refineCore(v___x_2548_, v___x_2549_, v___x_2545_, v_a_2535_, v_a_2536_, v_a_2537_, v_a_2538_, v_a_2539_, v_a_2540_, v_a_2541_, v_a_2542_);
return v___x_2550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRefine_x27___boxed(lean_object* v_stx_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l_Lean_Elab_Tactic_evalRefine_x27(v_stx_2551_, v_a_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_);
lean_dec(v_a_2559_);
lean_dec_ref(v_a_2558_);
lean_dec(v_a_2557_);
lean_dec_ref(v_a_2556_);
lean_dec(v_a_2555_);
lean_dec_ref(v_a_2554_);
lean_dec(v_a_2553_);
lean_dec_ref(v_a_2552_);
return v_res_2561_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0(void){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = lean_mk_string_unchecked("evalRefine'", 11, 11);
return v___x_2562_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1(void){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v___x_2563_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__0);
v___x_2564_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_2565_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_2566_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_2567_ = l_Lean_Name_mkStr4(v___x_2566_, v___x_2565_, v___x_2564_, v___x_2563_);
return v___x_2567_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1(){
_start:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2569_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2570_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRefine_x27___closed__1, &l_Lean_Elab_Tactic_evalRefine_x27___closed__1_once, _init_l_Lean_Elab_Tactic_evalRefine_x27___closed__1);
v___x_2571_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1);
v___x_2572_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRefine_x27___boxed), 10, 0);
v___x_2573_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2569_, v___x_2570_, v___x_2571_, v___x_2572_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___boxed(lean_object* v_a_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
return v_res_2575_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; 
v___x_2576_ = lean_unsigned_to_nat(28u);
v___x_2577_ = lean_unsigned_to_nat(194u);
v___x_2578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2577_);
lean_ctor_set(v___x_2578_, 1, v___x_2576_);
return v___x_2578_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; 
v___x_2579_ = lean_unsigned_to_nat(51u);
v___x_2580_ = lean_unsigned_to_nat(197u);
v___x_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2581_, 0, v___x_2580_);
lean_ctor_set(v___x_2581_, 1, v___x_2579_);
return v___x_2581_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2582_ = lean_unsigned_to_nat(51u);
v___x_2583_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__1);
v___x_2584_ = lean_unsigned_to_nat(28u);
v___x_2585_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__0);
v___x_2586_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2585_);
lean_ctor_set(v___x_2586_, 1, v___x_2584_);
lean_ctor_set(v___x_2586_, 2, v___x_2583_);
lean_ctor_set(v___x_2586_, 3, v___x_2582_);
return v___x_2586_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2587_ = lean_unsigned_to_nat(32u);
v___x_2588_ = lean_unsigned_to_nat(194u);
v___x_2589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
lean_ctor_set(v___x_2589_, 1, v___x_2587_);
return v___x_2589_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2590_ = lean_unsigned_to_nat(43u);
v___x_2591_ = lean_unsigned_to_nat(194u);
v___x_2592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
lean_ctor_set(v___x_2592_, 1, v___x_2590_);
return v___x_2592_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2593_ = lean_unsigned_to_nat(43u);
v___x_2594_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__4);
v___x_2595_ = lean_unsigned_to_nat(32u);
v___x_2596_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__3);
v___x_2597_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2596_);
lean_ctor_set(v___x_2597_, 1, v___x_2595_);
lean_ctor_set(v___x_2597_, 2, v___x_2594_);
lean_ctor_set(v___x_2597_, 3, v___x_2593_);
return v___x_2597_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2598_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__5);
v___x_2599_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__2);
v___x_2600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
lean_ctor_set(v___x_2600_, 1, v___x_2598_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3(){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2602_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1___closed__1);
v___x_2603_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___closed__6);
v___x_2604_ = l_Lean_addBuiltinDeclarationRanges(v___x_2602_, v___x_2603_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3___boxed(lean_object* v_a_2605_){
_start:
{
lean_object* v_res_2606_; 
v_res_2606_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
return v_res_2606_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2607_; 
v___x_2607_ = lean_mk_string_unchecked("'specialize' requires a term of the form `h x_1 .. x_n` where `h` appears in the local context", 94, 94);
return v___x_2607_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2608_; lean_object* v___x_2609_; 
v___x_2608_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0, &l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__0);
v___x_2609_ = l_Lean_stringToMessageData(v___x_2608_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0(uint8_t v___x_2610_, lean_object* v_stx_2611_, lean_object* v___x_2612_, uint8_t v___x_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
if (v___x_2610_ == 0)
{
lean_object* v___x_2623_; 
lean_dec_ref(v___x_2612_);
v___x_2623_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_2623_;
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; 
v___x_2624_ = lean_unsigned_to_nat(1u);
v___x_2625_ = l_Lean_Syntax_getArg(v_stx_2611_, v___x_2624_);
v___x_2626_ = lean_box(0);
v___x_2627_ = l_Lean_Name_mkStr1(v___x_2612_);
v___x_2628_ = l_Lean_Elab_Tactic_elabTermWithHoles(v___x_2625_, v___x_2626_, v___x_2627_, v___x_2613_, v___x_2626_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2628_) == 0)
{
lean_object* v_a_2629_; lean_object* v_fst_2630_; lean_object* v_snd_2631_; lean_object* v___x_2632_; uint8_t v___x_2633_; 
v_a_2629_ = lean_ctor_get(v___x_2628_, 0);
lean_inc(v_a_2629_);
lean_dec_ref(v___x_2628_);
v_fst_2630_ = lean_ctor_get(v_a_2629_, 0);
lean_inc(v_fst_2630_);
v_snd_2631_ = lean_ctor_get(v_a_2629_, 1);
lean_inc(v_snd_2631_);
lean_dec(v_a_2629_);
v___x_2632_ = l_Lean_Expr_getAppFn(v_fst_2630_);
v___x_2633_ = l_Lean_Expr_isFVar(v___x_2632_);
if (v___x_2633_ == 0)
{
lean_object* v___x_2634_; lean_object* v___x_2635_; 
lean_dec_ref(v___x_2632_);
lean_dec(v_snd_2631_);
lean_dec(v_fst_2630_);
v___x_2634_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1, &l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalSpecialize___lam__0___closed__1);
v___x_2635_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2634_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
return v___x_2635_;
}
else
{
lean_object* v___x_2636_; lean_object* v___x_2637_; 
v___x_2636_ = l_Lean_Expr_fvarId_x21(v___x_2632_);
lean_dec_ref(v___x_2632_);
lean_inc(v___x_2636_);
v___x_2637_ = l_Lean_FVarId_getDecl___redArg(v___x_2636_, v___y_2618_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v_a_2638_; lean_object* v___x_2639_; 
v_a_2638_ = lean_ctor_get(v___x_2637_, 0);
lean_inc(v_a_2638_);
lean_dec_ref(v___x_2637_);
v___x_2639_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_2615_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2639_) == 0)
{
lean_object* v_a_2640_; lean_object* v___x_2641_; 
v_a_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_a_2640_);
lean_dec_ref(v___x_2639_);
lean_inc(v___y_2621_);
lean_inc_ref(v___y_2620_);
lean_inc(v___y_2619_);
lean_inc_ref(v___y_2618_);
lean_inc(v_fst_2630_);
v___x_2641_ = lean_infer_type(v_fst_2630_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2641_) == 0)
{
lean_object* v_a_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v_a_2642_ = lean_ctor_get(v___x_2641_, 0);
lean_inc(v_a_2642_);
lean_dec_ref(v___x_2641_);
v___x_2643_ = l_Lean_LocalDecl_userName(v_a_2638_);
lean_dec(v_a_2638_);
v___x_2644_ = l_Lean_Expr_headBeta(v_a_2642_);
v___x_2645_ = l_Lean_MVarId_assert(v_a_2640_, v___x_2643_, v___x_2644_, v_fst_2630_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v___x_2647_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
lean_inc(v_a_2646_);
lean_dec_ref(v___x_2645_);
v___x_2647_ = l_Lean_Meta_intro1Core(v_a_2646_, v___x_2633_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2647_) == 0)
{
lean_object* v_a_2648_; lean_object* v_snd_2649_; lean_object* v___x_2651_; uint8_t v_isShared_2652_; uint8_t v_isSharedCheck_2669_; 
v_a_2648_ = lean_ctor_get(v___x_2647_, 0);
lean_inc(v_a_2648_);
lean_dec_ref(v___x_2647_);
v_snd_2649_ = lean_ctor_get(v_a_2648_, 1);
v_isSharedCheck_2669_ = !lean_is_exclusive(v_a_2648_);
if (v_isSharedCheck_2669_ == 0)
{
lean_object* v_unused_2670_; 
v_unused_2670_ = lean_ctor_get(v_a_2648_, 0);
lean_dec(v_unused_2670_);
v___x_2651_ = v_a_2648_;
v_isShared_2652_ = v_isSharedCheck_2669_;
goto v_resetjp_2650_;
}
else
{
lean_inc(v_snd_2649_);
lean_dec(v_a_2648_);
v___x_2651_ = lean_box(0);
v_isShared_2652_ = v_isSharedCheck_2669_;
goto v_resetjp_2650_;
}
v_resetjp_2650_:
{
lean_object* v___x_2653_; 
v___x_2653_ = l_Lean_MVarId_tryClear(v_snd_2649_, v___x_2636_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
if (lean_obj_tag(v___x_2653_) == 0)
{
lean_object* v_a_2654_; lean_object* v___x_2655_; lean_object* v___x_2657_; 
v_a_2654_ = lean_ctor_get(v___x_2653_, 0);
lean_inc(v_a_2654_);
lean_dec_ref(v___x_2653_);
v___x_2655_ = lean_box(0);
if (v_isShared_2652_ == 0)
{
lean_ctor_set_tag(v___x_2651_, 1);
lean_ctor_set(v___x_2651_, 1, v___x_2655_);
lean_ctor_set(v___x_2651_, 0, v_a_2654_);
v___x_2657_ = v___x_2651_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v_a_2654_);
lean_ctor_set(v_reuseFailAlloc_2660_, 1, v___x_2655_);
v___x_2657_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2658_ = l_List_appendTR___redArg(v_snd_2631_, v___x_2657_);
v___x_2659_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2658_, v___y_2615_, v___y_2618_, v___y_2619_, v___y_2620_, v___y_2621_);
return v___x_2659_;
}
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2663_; uint8_t v_isShared_2664_; uint8_t v_isSharedCheck_2668_; 
lean_del_object(v___x_2651_);
lean_dec(v_snd_2631_);
v_a_2661_ = lean_ctor_get(v___x_2653_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2653_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2663_ = v___x_2653_;
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
else
{
lean_inc(v_a_2661_);
lean_dec(v___x_2653_);
v___x_2663_ = lean_box(0);
v_isShared_2664_ = v_isSharedCheck_2668_;
goto v_resetjp_2662_;
}
v_resetjp_2662_:
{
lean_object* v___x_2666_; 
if (v_isShared_2664_ == 0)
{
v___x_2666_ = v___x_2663_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v_a_2661_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
}
else
{
lean_object* v_a_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2678_; 
lean_dec(v___x_2636_);
lean_dec(v_snd_2631_);
v_a_2671_ = lean_ctor_get(v___x_2647_, 0);
v_isSharedCheck_2678_ = !lean_is_exclusive(v___x_2647_);
if (v_isSharedCheck_2678_ == 0)
{
v___x_2673_ = v___x_2647_;
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_a_2671_);
lean_dec(v___x_2647_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2678_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___x_2676_; 
if (v_isShared_2674_ == 0)
{
v___x_2676_ = v___x_2673_;
goto v_reusejp_2675_;
}
else
{
lean_object* v_reuseFailAlloc_2677_; 
v_reuseFailAlloc_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2677_, 0, v_a_2671_);
v___x_2676_ = v_reuseFailAlloc_2677_;
goto v_reusejp_2675_;
}
v_reusejp_2675_:
{
return v___x_2676_;
}
}
}
}
else
{
lean_object* v_a_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2686_; 
lean_dec(v___x_2636_);
lean_dec(v_snd_2631_);
v_a_2679_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2686_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2681_ = v___x_2645_;
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_a_2679_);
lean_dec(v___x_2645_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2686_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2684_; 
if (v_isShared_2682_ == 0)
{
v___x_2684_ = v___x_2681_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v_a_2679_);
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
else
{
lean_object* v_a_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2694_; 
lean_dec(v_a_2640_);
lean_dec(v_a_2638_);
lean_dec(v___x_2636_);
lean_dec(v_snd_2631_);
lean_dec(v_fst_2630_);
v_a_2687_ = lean_ctor_get(v___x_2641_, 0);
v_isSharedCheck_2694_ = !lean_is_exclusive(v___x_2641_);
if (v_isSharedCheck_2694_ == 0)
{
v___x_2689_ = v___x_2641_;
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_a_2687_);
lean_dec(v___x_2641_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2694_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2692_; 
if (v_isShared_2690_ == 0)
{
v___x_2692_ = v___x_2689_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v_a_2687_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
}
}
else
{
lean_object* v_a_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2702_; 
lean_dec(v_a_2638_);
lean_dec(v___x_2636_);
lean_dec(v_snd_2631_);
lean_dec(v_fst_2630_);
v_a_2695_ = lean_ctor_get(v___x_2639_, 0);
v_isSharedCheck_2702_ = !lean_is_exclusive(v___x_2639_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2697_ = v___x_2639_;
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_a_2695_);
lean_dec(v___x_2639_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2702_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___x_2700_; 
if (v_isShared_2698_ == 0)
{
v___x_2700_ = v___x_2697_;
goto v_reusejp_2699_;
}
else
{
lean_object* v_reuseFailAlloc_2701_; 
v_reuseFailAlloc_2701_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2701_, 0, v_a_2695_);
v___x_2700_ = v_reuseFailAlloc_2701_;
goto v_reusejp_2699_;
}
v_reusejp_2699_:
{
return v___x_2700_;
}
}
}
}
else
{
lean_object* v_a_2703_; lean_object* v___x_2705_; uint8_t v_isShared_2706_; uint8_t v_isSharedCheck_2710_; 
lean_dec(v___x_2636_);
lean_dec(v_snd_2631_);
lean_dec(v_fst_2630_);
v_a_2703_ = lean_ctor_get(v___x_2637_, 0);
v_isSharedCheck_2710_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2710_ == 0)
{
v___x_2705_ = v___x_2637_;
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
else
{
lean_inc(v_a_2703_);
lean_dec(v___x_2637_);
v___x_2705_ = lean_box(0);
v_isShared_2706_ = v_isSharedCheck_2710_;
goto v_resetjp_2704_;
}
v_resetjp_2704_:
{
lean_object* v___x_2708_; 
if (v_isShared_2706_ == 0)
{
v___x_2708_ = v___x_2705_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2709_; 
v_reuseFailAlloc_2709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2709_, 0, v_a_2703_);
v___x_2708_ = v_reuseFailAlloc_2709_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
return v___x_2708_;
}
}
}
}
}
else
{
lean_object* v_a_2711_; lean_object* v___x_2713_; uint8_t v_isShared_2714_; uint8_t v_isSharedCheck_2718_; 
v_a_2711_ = lean_ctor_get(v___x_2628_, 0);
v_isSharedCheck_2718_ = !lean_is_exclusive(v___x_2628_);
if (v_isSharedCheck_2718_ == 0)
{
v___x_2713_ = v___x_2628_;
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
else
{
lean_inc(v_a_2711_);
lean_dec(v___x_2628_);
v___x_2713_ = lean_box(0);
v_isShared_2714_ = v_isSharedCheck_2718_;
goto v_resetjp_2712_;
}
v_resetjp_2712_:
{
lean_object* v___x_2716_; 
if (v_isShared_2714_ == 0)
{
v___x_2716_ = v___x_2713_;
goto v_reusejp_2715_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v_a_2711_);
v___x_2716_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2715_;
}
v_reusejp_2715_:
{
return v___x_2716_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed(lean_object* v___x_2719_, lean_object* v_stx_2720_, lean_object* v___x_2721_, lean_object* v___x_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_){
_start:
{
uint8_t v___x_2038__boxed_2732_; uint8_t v___x_2040__boxed_2733_; lean_object* v_res_2734_; 
v___x_2038__boxed_2732_ = lean_unbox(v___x_2719_);
v___x_2040__boxed_2733_ = lean_unbox(v___x_2722_);
v_res_2734_ = l_Lean_Elab_Tactic_evalSpecialize___lam__0(v___x_2038__boxed_2732_, v_stx_2720_, v___x_2721_, v___x_2040__boxed_2733_, v___y_2723_, v___y_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_, v___y_2730_);
lean_dec(v___y_2730_);
lean_dec_ref(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec_ref(v___y_2727_);
lean_dec(v___y_2726_);
lean_dec_ref(v___y_2725_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v_stx_2720_);
return v_res_2734_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSpecialize___closed__0(void){
_start:
{
lean_object* v___x_2735_; 
v___x_2735_ = lean_mk_string_unchecked("specialize", 10, 10);
return v___x_2735_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalSpecialize___closed__1(void){
_start:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; 
v___x_2736_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___closed__0, &l_Lean_Elab_Tactic_evalSpecialize___closed__0_once, _init_l_Lean_Elab_Tactic_evalSpecialize___closed__0);
v___x_2737_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_2738_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_2739_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_2740_ = l_Lean_Name_mkStr4(v___x_2739_, v___x_2738_, v___x_2737_, v___x_2736_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize(lean_object* v_stx_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_, lean_object* v_a_2744_, lean_object* v_a_2745_, lean_object* v_a_2746_, lean_object* v_a_2747_, lean_object* v_a_2748_, lean_object* v_a_2749_){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; uint8_t v___x_2753_; uint8_t v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___y_2757_; lean_object* v___x_2758_; 
v___x_2751_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___closed__0, &l_Lean_Elab_Tactic_evalSpecialize___closed__0_once, _init_l_Lean_Elab_Tactic_evalSpecialize___closed__0);
v___x_2752_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___closed__1, &l_Lean_Elab_Tactic_evalSpecialize___closed__1_once, _init_l_Lean_Elab_Tactic_evalSpecialize___closed__1);
lean_inc(v_stx_2741_);
v___x_2753_ = l_Lean_Syntax_isOfKind(v_stx_2741_, v___x_2752_);
v___x_2754_ = 1;
v___x_2755_ = lean_box(v___x_2753_);
v___x_2756_ = lean_box(v___x_2754_);
v___y_2757_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSpecialize___lam__0___boxed), 13, 4);
lean_closure_set(v___y_2757_, 0, v___x_2755_);
lean_closure_set(v___y_2757_, 1, v_stx_2741_);
lean_closure_set(v___y_2757_, 2, v___x_2751_);
lean_closure_set(v___y_2757_, 3, v___x_2756_);
v___x_2758_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_2757_, v_a_2742_, v_a_2743_, v_a_2744_, v_a_2745_, v_a_2746_, v_a_2747_, v_a_2748_, v_a_2749_);
return v___x_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalSpecialize___boxed(lean_object* v_stx_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_Lean_Elab_Tactic_evalSpecialize(v_stx_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_);
lean_dec(v_a_2767_);
lean_dec_ref(v_a_2766_);
lean_dec(v_a_2765_);
lean_dec_ref(v_a_2764_);
lean_dec(v_a_2763_);
lean_dec_ref(v_a_2762_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
return v_res_2769_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0(void){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_mk_string_unchecked("evalSpecialize", 14, 14);
return v___x_2770_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1(void){
_start:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2771_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__0);
v___x_2772_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_2773_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_2774_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_2775_ = l_Lean_Name_mkStr4(v___x_2774_, v___x_2773_, v___x_2772_, v___x_2771_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1(){
_start:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2777_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2778_ = lean_obj_once(&l_Lean_Elab_Tactic_evalSpecialize___closed__1, &l_Lean_Elab_Tactic_evalSpecialize___closed__1_once, _init_l_Lean_Elab_Tactic_evalSpecialize___closed__1);
v___x_2779_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1);
v___x_2780_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalSpecialize___boxed), 10, 0);
v___x_2781_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2777_, v___x_2778_, v___x_2779_, v___x_2780_);
return v___x_2781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___boxed(lean_object* v_a_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
return v_res_2783_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; 
v___x_2784_ = lean_unsigned_to_nat(31u);
v___x_2785_ = lean_unsigned_to_nat(199u);
v___x_2786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2786_, 0, v___x_2785_);
lean_ctor_set(v___x_2786_, 1, v___x_2784_);
return v___x_2786_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2787_ = lean_unsigned_to_nat(31u);
v___x_2788_ = lean_unsigned_to_nat(212u);
v___x_2789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2788_);
lean_ctor_set(v___x_2789_, 1, v___x_2787_);
return v___x_2789_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v___x_2790_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__1);
v___x_2791_ = lean_unsigned_to_nat(31u);
v___x_2792_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__0);
v___x_2793_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2792_);
lean_ctor_set(v___x_2793_, 1, v___x_2791_);
lean_ctor_set(v___x_2793_, 2, v___x_2790_);
lean_ctor_set(v___x_2793_, 3, v___x_2791_);
return v___x_2793_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; 
v___x_2794_ = lean_unsigned_to_nat(35u);
v___x_2795_ = lean_unsigned_to_nat(199u);
v___x_2796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2796_, 0, v___x_2795_);
lean_ctor_set(v___x_2796_, 1, v___x_2794_);
return v___x_2796_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2797_ = lean_unsigned_to_nat(49u);
v___x_2798_ = lean_unsigned_to_nat(199u);
v___x_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2799_, 0, v___x_2798_);
lean_ctor_set(v___x_2799_, 1, v___x_2797_);
return v___x_2799_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; 
v___x_2800_ = lean_unsigned_to_nat(49u);
v___x_2801_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__4);
v___x_2802_ = lean_unsigned_to_nat(35u);
v___x_2803_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__3);
v___x_2804_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2804_, 0, v___x_2803_);
lean_ctor_set(v___x_2804_, 1, v___x_2802_);
lean_ctor_set(v___x_2804_, 2, v___x_2801_);
lean_ctor_set(v___x_2804_, 3, v___x_2800_);
return v___x_2804_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2805_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__5);
v___x_2806_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__2);
v___x_2807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2807_, 0, v___x_2806_);
lean_ctor_set(v___x_2807_, 1, v___x_2805_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3(){
_start:
{
lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v___x_2809_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1___closed__1);
v___x_2810_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___closed__6);
v___x_2811_ = l_Lean_addBuiltinDeclarationRanges(v___x_2809_, v___x_2810_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3___boxed(lean_object* v_a_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
return v_res_2813_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabTermForApply___closed__0(void){
_start:
{
lean_object* v___x_2814_; 
v___x_2814_ = lean_mk_string_unchecked("term", 4, 4);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply(lean_object* v_stx_2815_, uint8_t v_mayPostpone_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v_a_2824_){
_start:
{
lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; uint8_t v___x_2837_; 
v___x_2837_ = l_Lean_Syntax_isIdent(v_stx_2815_);
if (v___x_2837_ == 0)
{
v___y_2827_ = v_a_2817_;
v___y_2828_ = v_a_2818_;
v___y_2829_ = v_a_2819_;
v___y_2830_ = v_a_2820_;
v___y_2831_ = v_a_2821_;
v___y_2832_ = v_a_2822_;
v___y_2833_ = v_a_2823_;
v___y_2834_ = v_a_2824_;
goto v___jp_2826_;
}
else
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
v___x_2838_ = lean_obj_once(&l_Lean_Elab_Tactic_elabTermForApply___closed__0, &l_Lean_Elab_Tactic_elabTermForApply___closed__0_once, _init_l_Lean_Elab_Tactic_elabTermForApply___closed__0);
lean_inc(v_stx_2815_);
v___x_2839_ = l_Lean_Elab_Term_resolveId_x3f(v_stx_2815_, v___x_2838_, v___x_2837_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_, v_a_2823_, v_a_2824_);
if (lean_obj_tag(v___x_2839_) == 0)
{
lean_object* v_a_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2848_; 
v_a_2840_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2848_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2848_ == 0)
{
v___x_2842_ = v___x_2839_;
v_isShared_2843_ = v_isSharedCheck_2848_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_a_2840_);
lean_dec(v___x_2839_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2848_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
if (lean_obj_tag(v_a_2840_) == 1)
{
lean_object* v_val_2844_; lean_object* v___x_2846_; 
lean_dec(v_stx_2815_);
v_val_2844_ = lean_ctor_get(v_a_2840_, 0);
lean_inc(v_val_2844_);
lean_dec_ref(v_a_2840_);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v_val_2844_);
v___x_2846_ = v___x_2842_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v_val_2844_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
else
{
lean_del_object(v___x_2842_);
lean_dec(v_a_2840_);
v___y_2827_ = v_a_2817_;
v___y_2828_ = v_a_2818_;
v___y_2829_ = v_a_2819_;
v___y_2830_ = v_a_2820_;
v___y_2831_ = v_a_2821_;
v___y_2832_ = v_a_2822_;
v___y_2833_ = v_a_2823_;
v___y_2834_ = v_a_2824_;
goto v___jp_2826_;
}
}
}
else
{
lean_object* v_a_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2856_; 
lean_dec(v_stx_2815_);
v_a_2849_ = lean_ctor_get(v___x_2839_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v___x_2839_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2851_ = v___x_2839_;
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_a_2849_);
lean_dec(v___x_2839_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2856_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2854_; 
if (v_isShared_2852_ == 0)
{
v___x_2854_ = v___x_2851_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v_a_2849_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
return v___x_2854_;
}
}
}
}
v___jp_2826_:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = lean_box(0);
v___x_2836_ = l_Lean_Elab_Tactic_elabTerm(v_stx_2815_, v___x_2835_, v_mayPostpone_2816_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
return v___x_2836_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabTermForApply___boxed(lean_object* v_stx_2857_, lean_object* v_mayPostpone_2858_, lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_, lean_object* v_a_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_){
_start:
{
uint8_t v_mayPostpone_boxed_2868_; lean_object* v_res_2869_; 
v_mayPostpone_boxed_2868_ = lean_unbox(v_mayPostpone_2858_);
v_res_2869_ = l_Lean_Elab_Tactic_elabTermForApply(v_stx_2857_, v_mayPostpone_boxed_2868_, v_a_2859_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, v_a_2864_, v_a_2865_, v_a_2866_);
lean_dec(v_a_2866_);
lean_dec_ref(v_a_2865_);
lean_dec(v_a_2864_);
lean_dec_ref(v_a_2863_);
lean_dec(v_a_2862_);
lean_dec_ref(v_a_2861_);
lean_dec(v_a_2860_);
lean_dec_ref(v_a_2859_);
return v_res_2869_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2870_; 
v___x_2870_ = lean_mk_string_unchecked("Unexpected term `", 17, 17);
return v___x_2870_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2871_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__0);
v___x_2872_ = l_Lean_stringToMessageData(v___x_2871_);
return v___x_2872_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2873_; 
v___x_2873_ = lean_mk_string_unchecked("`; expected single reference to variable", 40, 40);
return v___x_2873_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2874_; lean_object* v___x_2875_; 
v___x_2874_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__2);
v___x_2875_ = l_Lean_stringToMessageData(v___x_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0(lean_object* v___x_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_){
_start:
{
lean_object* v___x_2886_; 
v___x_2886_ = l_Lean_Elab_Tactic_withoutRecover___redArg(v___x_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
if (lean_obj_tag(v___x_2886_) == 0)
{
lean_object* v_a_2887_; lean_object* v___x_2889_; uint8_t v_isShared_2890_; uint8_t v_isSharedCheck_2901_; 
v_a_2887_ = lean_ctor_get(v___x_2886_, 0);
v_isSharedCheck_2901_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2901_ == 0)
{
v___x_2889_ = v___x_2886_;
v_isShared_2890_ = v_isSharedCheck_2901_;
goto v_resetjp_2888_;
}
else
{
lean_inc(v_a_2887_);
lean_dec(v___x_2886_);
v___x_2889_ = lean_box(0);
v_isShared_2890_ = v_isSharedCheck_2901_;
goto v_resetjp_2888_;
}
v_resetjp_2888_:
{
if (lean_obj_tag(v_a_2887_) == 1)
{
lean_object* v_fvarId_2891_; lean_object* v___x_2893_; 
v_fvarId_2891_ = lean_ctor_get(v_a_2887_, 0);
lean_inc(v_fvarId_2891_);
lean_dec_ref(v_a_2887_);
if (v_isShared_2890_ == 0)
{
lean_ctor_set(v___x_2889_, 0, v_fvarId_2891_);
v___x_2893_ = v___x_2889_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2894_; 
v_reuseFailAlloc_2894_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2894_, 0, v_fvarId_2891_);
v___x_2893_ = v_reuseFailAlloc_2894_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
return v___x_2893_;
}
}
else
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
lean_del_object(v___x_2889_);
v___x_2895_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__1);
v___x_2896_ = l_Lean_MessageData_ofExpr(v_a_2887_);
v___x_2897_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2895_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = lean_obj_once(&l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3, &l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3_once, _init_l_Lean_Elab_Tactic_getFVarId___lam__0___closed__3);
v___x_2899_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2899_, 0, v___x_2897_);
lean_ctor_set(v___x_2899_, 1, v___x_2898_);
v___x_2900_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_2899_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
return v___x_2900_;
}
}
}
else
{
lean_object* v_a_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2909_; 
v_a_2902_ = lean_ctor_get(v___x_2886_, 0);
v_isSharedCheck_2909_ = !lean_is_exclusive(v___x_2886_);
if (v_isSharedCheck_2909_ == 0)
{
v___x_2904_ = v___x_2886_;
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_a_2902_);
lean_dec(v___x_2886_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2909_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___x_2907_; 
if (v_isShared_2905_ == 0)
{
v___x_2907_ = v___x_2904_;
goto v_reusejp_2906_;
}
else
{
lean_object* v_reuseFailAlloc_2908_; 
v_reuseFailAlloc_2908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2908_, 0, v_a_2902_);
v___x_2907_ = v_reuseFailAlloc_2908_;
goto v_reusejp_2906_;
}
v_reusejp_2906_:
{
return v___x_2907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___lam__0___boxed(lean_object* v___x_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_){
_start:
{
lean_object* v_res_2920_; 
v_res_2920_ = l_Lean_Elab_Tactic_getFVarId___lam__0(v___x_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
lean_dec(v___y_2918_);
lean_dec_ref(v___y_2917_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
lean_dec_ref(v___y_2911_);
return v_res_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId(lean_object* v_id_2921_, lean_object* v_a_2922_, lean_object* v_a_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_){
_start:
{
lean_object* v_fileName_2931_; lean_object* v_fileMap_2932_; lean_object* v_options_2933_; lean_object* v_currRecDepth_2934_; lean_object* v_maxRecDepth_2935_; lean_object* v_ref_2936_; lean_object* v_currNamespace_2937_; lean_object* v_openDecls_2938_; lean_object* v_initHeartbeats_2939_; lean_object* v_maxHeartbeats_2940_; lean_object* v_quotContext_2941_; lean_object* v_currMacroScope_2942_; uint8_t v_diag_2943_; lean_object* v_cancelTk_x3f_2944_; uint8_t v_suppressElabErrors_2945_; lean_object* v_inheritedTraceOptions_2946_; uint8_t v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___f_2950_; lean_object* v_ref_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; 
v_fileName_2931_ = lean_ctor_get(v_a_2928_, 0);
v_fileMap_2932_ = lean_ctor_get(v_a_2928_, 1);
v_options_2933_ = lean_ctor_get(v_a_2928_, 2);
v_currRecDepth_2934_ = lean_ctor_get(v_a_2928_, 3);
v_maxRecDepth_2935_ = lean_ctor_get(v_a_2928_, 4);
v_ref_2936_ = lean_ctor_get(v_a_2928_, 5);
v_currNamespace_2937_ = lean_ctor_get(v_a_2928_, 6);
v_openDecls_2938_ = lean_ctor_get(v_a_2928_, 7);
v_initHeartbeats_2939_ = lean_ctor_get(v_a_2928_, 8);
v_maxHeartbeats_2940_ = lean_ctor_get(v_a_2928_, 9);
v_quotContext_2941_ = lean_ctor_get(v_a_2928_, 10);
v_currMacroScope_2942_ = lean_ctor_get(v_a_2928_, 11);
v_diag_2943_ = lean_ctor_get_uint8(v_a_2928_, sizeof(void*)*14);
v_cancelTk_x3f_2944_ = lean_ctor_get(v_a_2928_, 12);
v_suppressElabErrors_2945_ = lean_ctor_get_uint8(v_a_2928_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2946_ = lean_ctor_get(v_a_2928_, 13);
v___x_2947_ = 0;
v___x_2948_ = lean_box(v___x_2947_);
lean_inc(v_id_2921_);
v___x_2949_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabTermForApply___boxed), 11, 2);
lean_closure_set(v___x_2949_, 0, v_id_2921_);
lean_closure_set(v___x_2949_, 1, v___x_2948_);
v___f_2950_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_getFVarId___lam__0___boxed), 10, 1);
lean_closure_set(v___f_2950_, 0, v___x_2949_);
v_ref_2951_ = l_Lean_replaceRef(v_id_2921_, v_ref_2936_);
lean_dec(v_id_2921_);
lean_inc_ref(v_inheritedTraceOptions_2946_);
lean_inc(v_cancelTk_x3f_2944_);
lean_inc(v_currMacroScope_2942_);
lean_inc(v_quotContext_2941_);
lean_inc(v_maxHeartbeats_2940_);
lean_inc(v_initHeartbeats_2939_);
lean_inc(v_openDecls_2938_);
lean_inc(v_currNamespace_2937_);
lean_inc(v_maxRecDepth_2935_);
lean_inc(v_currRecDepth_2934_);
lean_inc_ref(v_options_2933_);
lean_inc_ref(v_fileMap_2932_);
lean_inc_ref(v_fileName_2931_);
v___x_2952_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2952_, 0, v_fileName_2931_);
lean_ctor_set(v___x_2952_, 1, v_fileMap_2932_);
lean_ctor_set(v___x_2952_, 2, v_options_2933_);
lean_ctor_set(v___x_2952_, 3, v_currRecDepth_2934_);
lean_ctor_set(v___x_2952_, 4, v_maxRecDepth_2935_);
lean_ctor_set(v___x_2952_, 5, v_ref_2951_);
lean_ctor_set(v___x_2952_, 6, v_currNamespace_2937_);
lean_ctor_set(v___x_2952_, 7, v_openDecls_2938_);
lean_ctor_set(v___x_2952_, 8, v_initHeartbeats_2939_);
lean_ctor_set(v___x_2952_, 9, v_maxHeartbeats_2940_);
lean_ctor_set(v___x_2952_, 10, v_quotContext_2941_);
lean_ctor_set(v___x_2952_, 11, v_currMacroScope_2942_);
lean_ctor_set(v___x_2952_, 12, v_cancelTk_x3f_2944_);
lean_ctor_set(v___x_2952_, 13, v_inheritedTraceOptions_2946_);
lean_ctor_set_uint8(v___x_2952_, sizeof(void*)*14, v_diag_2943_);
lean_ctor_set_uint8(v___x_2952_, sizeof(void*)*14 + 1, v_suppressElabErrors_2945_);
v___x_2953_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_2950_, v_a_2922_, v_a_2923_, v_a_2924_, v_a_2925_, v_a_2926_, v_a_2927_, v___x_2952_, v_a_2929_);
lean_dec_ref(v___x_2952_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarId___boxed(lean_object* v_id_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_){
_start:
{
lean_object* v_res_2964_; 
v_res_2964_ = l_Lean_Elab_Tactic_getFVarId(v_id_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_);
lean_dec(v_a_2962_);
lean_dec_ref(v_a_2961_);
lean_dec(v_a_2960_);
lean_dec_ref(v_a_2959_);
lean_dec(v_a_2958_);
lean_dec_ref(v_a_2957_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(size_t v_sz_2965_, size_t v_i_2966_, lean_object* v_bs_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_){
_start:
{
uint8_t v___x_2977_; 
v___x_2977_ = lean_usize_dec_lt(v_i_2966_, v_sz_2965_);
if (v___x_2977_ == 0)
{
lean_object* v___x_2978_; 
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v_bs_2967_);
return v___x_2978_;
}
else
{
lean_object* v_v_2979_; lean_object* v___x_2980_; 
v_v_2979_ = lean_array_uget_borrowed(v_bs_2967_, v_i_2966_);
lean_inc(v_v_2979_);
v___x_2980_ = l_Lean_Elab_Tactic_getFVarId(v_v_2979_, v___y_2968_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2982_; lean_object* v_bs_x27_2983_; size_t v___x_2984_; size_t v___x_2985_; lean_object* v___x_2986_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2981_);
lean_dec_ref(v___x_2980_);
v___x_2982_ = lean_unsigned_to_nat(0u);
v_bs_x27_2983_ = lean_array_uset(v_bs_2967_, v_i_2966_, v___x_2982_);
v___x_2984_ = ((size_t)1ULL);
v___x_2985_ = lean_usize_add(v_i_2966_, v___x_2984_);
v___x_2986_ = lean_array_uset(v_bs_x27_2983_, v_i_2966_, v_a_2981_);
v_i_2966_ = v___x_2985_;
v_bs_2967_ = v___x_2986_;
goto _start;
}
else
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec_ref(v_bs_2967_);
v_a_2988_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2980_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2980_);
v___x_2990_ = lean_box(0);
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
v_resetjp_2989_:
{
lean_object* v___x_2993_; 
if (v_isShared_2991_ == 0)
{
v___x_2993_ = v___x_2990_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v_a_2988_);
v___x_2993_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2992_;
}
v_reusejp_2992_:
{
return v___x_2993_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed(lean_object* v_sz_2996_, lean_object* v_i_2997_, lean_object* v_bs_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
size_t v_sz_boxed_3008_; size_t v_i_boxed_3009_; lean_object* v_res_3010_; 
v_sz_boxed_3008_ = lean_unbox_usize(v_sz_2996_);
lean_dec(v_sz_2996_);
v_i_boxed_3009_ = lean_unbox_usize(v_i_2997_);
lean_dec(v_i_2997_);
v_res_3010_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0(v_sz_boxed_3008_, v_i_boxed_3009_, v_bs_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_);
lean_dec(v___y_3006_);
lean_dec_ref(v___y_3005_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec_ref(v___y_2999_);
return v_res_3010_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_getFVarIds___boxed__const__1(void){
_start:
{
size_t v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = ((size_t)0ULL);
v___x_3012_ = lean_box_usize(v___x_3011_);
return v___x_3012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds(lean_object* v_ids_3013_, lean_object* v_a_3014_, lean_object* v_a_3015_, lean_object* v_a_3016_, lean_object* v_a_3017_, lean_object* v_a_3018_, lean_object* v_a_3019_, lean_object* v_a_3020_, lean_object* v_a_3021_){
_start:
{
size_t v_sz_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v_sz_3023_ = lean_array_size(v_ids_3013_);
v___x_3024_ = lean_box_usize(v_sz_3023_);
v___x_3025_ = l_Lean_Elab_Tactic_getFVarIds___boxed__const__1;
v___x_3026_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_getFVarIds_spec__0___boxed), 12, 3);
lean_closure_set(v___x_3026_, 0, v___x_3024_);
lean_closure_set(v___x_3026_, 1, v___x_3025_);
lean_closure_set(v___x_3026_, 2, v_ids_3013_);
v___x_3027_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___x_3026_, v_a_3014_, v_a_3015_, v_a_3016_, v_a_3017_, v_a_3018_, v_a_3019_, v_a_3020_, v_a_3021_);
return v___x_3027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_getFVarIds___boxed(lean_object* v_ids_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l_Lean_Elab_Tactic_getFVarIds(v_ids_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_);
lean_dec(v_a_3036_);
lean_dec_ref(v_a_3035_);
lean_dec(v_a_3034_);
lean_dec_ref(v_a_3033_);
lean_dec(v_a_3032_);
lean_dec_ref(v_a_3031_);
lean_dec(v_a_3030_);
lean_dec_ref(v_a_3029_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(lean_object* v_e_3039_, uint8_t v___x_3040_, lean_object* v_tac_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_val_3052_; lean_object* v___y_3053_; lean_object* v___y_3054_; lean_object* v___y_3055_; lean_object* v___y_3056_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___x_3083_; 
v___x_3083_ = l_Lean_Elab_Tactic_elabTermForApply(v_e_3039_, v___x_3040_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3083_) == 0)
{
lean_object* v_a_3084_; lean_object* v___x_3085_; lean_object* v_a_3086_; uint8_t v___x_3087_; 
v_a_3084_ = lean_ctor_get(v___x_3083_, 0);
lean_inc(v_a_3084_);
lean_dec_ref(v___x_3083_);
v___x_3085_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_3084_, v___y_3047_, v___y_3049_);
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
lean_inc(v_a_3086_);
lean_dec_ref(v___x_3085_);
v___x_3087_ = l_Lean_Expr_isMVar(v_a_3086_);
if (v___x_3087_ == 0)
{
v_val_3052_ = v_a_3086_;
v___y_3053_ = v___y_3043_;
v___y_3054_ = v___y_3044_;
v___y_3055_ = v___y_3045_;
v___y_3056_ = v___y_3046_;
v___y_3057_ = v___y_3047_;
v___y_3058_ = v___y_3048_;
v___y_3059_ = v___y_3049_;
goto v___jp_3051_;
}
else
{
uint8_t v___x_3088_; lean_object* v___x_3089_; 
v___x_3088_ = 0;
v___x_3089_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3088_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3089_) == 0)
{
lean_object* v___x_3090_; lean_object* v_a_3091_; 
lean_dec_ref(v___x_3089_);
v___x_3090_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_elabTerm_spec__0___redArg(v_a_3086_, v___y_3047_, v___y_3049_);
v_a_3091_ = lean_ctor_get(v___x_3090_, 0);
lean_inc(v_a_3091_);
lean_dec_ref(v___x_3090_);
v_val_3052_ = v_a_3091_;
v___y_3053_ = v___y_3043_;
v___y_3054_ = v___y_3044_;
v___y_3055_ = v___y_3045_;
v___y_3056_ = v___y_3046_;
v___y_3057_ = v___y_3047_;
v___y_3058_ = v___y_3048_;
v___y_3059_ = v___y_3049_;
goto v___jp_3051_;
}
else
{
lean_dec(v_a_3086_);
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
lean_dec(v___y_3047_);
lean_dec_ref(v___y_3046_);
lean_dec_ref(v_tac_3041_);
return v___x_3089_;
}
}
}
else
{
lean_object* v_a_3092_; lean_object* v___x_3094_; uint8_t v_isShared_3095_; uint8_t v_isSharedCheck_3099_; 
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
lean_dec(v___y_3047_);
lean_dec_ref(v___y_3046_);
lean_dec_ref(v_tac_3041_);
v_a_3092_ = lean_ctor_get(v___x_3083_, 0);
v_isSharedCheck_3099_ = !lean_is_exclusive(v___x_3083_);
if (v_isSharedCheck_3099_ == 0)
{
v___x_3094_ = v___x_3083_;
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
else
{
lean_inc(v_a_3092_);
lean_dec(v___x_3083_);
v___x_3094_ = lean_box(0);
v_isShared_3095_ = v_isSharedCheck_3099_;
goto v_resetjp_3093_;
}
v_resetjp_3093_:
{
lean_object* v___x_3097_; 
if (v_isShared_3095_ == 0)
{
v___x_3097_ = v___x_3094_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v_a_3092_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
v___jp_3051_:
{
lean_object* v___x_3060_; 
v___x_3060_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3053_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v_a_3061_; lean_object* v___x_3062_; 
v_a_3061_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_a_3061_);
lean_dec_ref(v___x_3060_);
lean_inc(v___y_3059_);
lean_inc_ref(v___y_3058_);
lean_inc(v___y_3057_);
lean_inc_ref(v___y_3056_);
v___x_3062_ = lean_apply_7(v_tac_3041_, v_a_3061_, v_val_3052_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, lean_box(0));
if (lean_obj_tag(v___x_3062_) == 0)
{
lean_object* v_a_3063_; uint8_t v___x_3064_; lean_object* v___x_3065_; 
v_a_3063_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_a_3063_);
lean_dec_ref(v___x_3062_);
v___x_3064_ = 0;
v___x_3065_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3064_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
if (lean_obj_tag(v___x_3065_) == 0)
{
lean_object* v___x_3066_; 
lean_dec_ref(v___x_3065_);
v___x_3066_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_3063_, v___y_3053_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
return v___x_3066_;
}
else
{
lean_dec(v_a_3063_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
return v___x_3065_;
}
}
else
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3074_; 
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
v_a_3067_ = lean_ctor_get(v___x_3062_, 0);
v_isSharedCheck_3074_ = !lean_is_exclusive(v___x_3062_);
if (v_isSharedCheck_3074_ == 0)
{
v___x_3069_ = v___x_3062_;
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3062_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3074_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
lean_object* v___x_3072_; 
if (v_isShared_3070_ == 0)
{
v___x_3072_ = v___x_3069_;
goto v_reusejp_3071_;
}
else
{
lean_object* v_reuseFailAlloc_3073_; 
v_reuseFailAlloc_3073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3073_, 0, v_a_3067_);
v___x_3072_ = v_reuseFailAlloc_3073_;
goto v_reusejp_3071_;
}
v_reusejp_3071_:
{
return v___x_3072_;
}
}
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3077_; uint8_t v_isShared_3078_; uint8_t v_isSharedCheck_3082_; 
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec_ref(v_val_3052_);
lean_dec_ref(v_tac_3041_);
v_a_3075_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3082_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3082_ == 0)
{
v___x_3077_ = v___x_3060_;
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
else
{
lean_inc(v_a_3075_);
lean_dec(v___x_3060_);
v___x_3077_ = lean_box(0);
v_isShared_3078_ = v_isSharedCheck_3082_;
goto v_resetjp_3076_;
}
v_resetjp_3076_:
{
lean_object* v___x_3080_; 
if (v_isShared_3078_ == 0)
{
v___x_3080_ = v___x_3077_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3081_; 
v_reuseFailAlloc_3081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3081_, 0, v_a_3075_);
v___x_3080_ = v_reuseFailAlloc_3081_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
return v___x_3080_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed(lean_object* v_e_3100_, lean_object* v___x_3101_, lean_object* v_tac_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_){
_start:
{
uint8_t v___x_977__boxed_3112_; lean_object* v_res_3113_; 
v___x_977__boxed_3112_ = lean_unbox(v___x_3101_);
v_res_3113_ = l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0(v_e_3100_, v___x_977__boxed_3112_, v_tac_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_);
lean_dec(v___y_3106_);
lean_dec_ref(v___y_3105_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
return v_res_3113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic(lean_object* v_tac_3114_, lean_object* v_e_3115_, lean_object* v_a_3116_, lean_object* v_a_3117_, lean_object* v_a_3118_, lean_object* v_a_3119_, lean_object* v_a_3120_, lean_object* v_a_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_){
_start:
{
uint8_t v___x_3125_; lean_object* v___x_3126_; lean_object* v___f_3127_; lean_object* v___x_3128_; 
v___x_3125_ = 1;
v___x_3126_ = lean_box(v___x_3125_);
v___f_3127_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApplyLikeTactic___lam__0___boxed), 12, 3);
lean_closure_set(v___f_3127_, 0, v_e_3115_);
lean_closure_set(v___f_3127_, 1, v___x_3126_);
lean_closure_set(v___f_3127_, 2, v_tac_3114_);
v___x_3128_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3127_, v_a_3116_, v_a_3117_, v_a_3118_, v_a_3119_, v_a_3120_, v_a_3121_, v_a_3122_, v_a_3123_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApplyLikeTactic___boxed(lean_object* v_tac_3129_, lean_object* v_e_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Lean_Elab_Tactic_evalApplyLikeTactic(v_tac_3129_, v_e_3130_, v_a_3131_, v_a_3132_, v_a_3133_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_, v_a_3138_);
lean_dec(v_a_3138_);
lean_dec_ref(v_a_3137_);
lean_dec(v_a_3136_);
lean_dec_ref(v_a_3135_);
lean_dec(v_a_3134_);
lean_dec_ref(v_a_3133_);
lean_dec(v_a_3132_);
lean_dec_ref(v_a_3131_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0(uint8_t v___x_3141_, lean_object* v_g_3142_, lean_object* v_e_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
uint8_t v___x_3149_; uint8_t v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3149_ = 0;
v___x_3150_ = 0;
v___x_3151_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3151_, 0, v___x_3149_);
lean_ctor_set_uint8(v___x_3151_, 1, v___x_3141_);
lean_ctor_set_uint8(v___x_3151_, 2, v___x_3150_);
lean_ctor_set_uint8(v___x_3151_, 3, v___x_3141_);
v___x_3152_ = lean_obj_once(&l_Lean_Elab_Tactic_refineCore___lam__1___closed__5, &l_Lean_Elab_Tactic_refineCore___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_refineCore___lam__1___closed__5);
lean_inc_ref(v_e_3143_);
v___x_3153_ = l_Lean_MessageData_ofExpr(v_e_3143_);
v___x_3154_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3152_);
lean_ctor_set(v___x_3154_, 1, v___x_3153_);
v___x_3155_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
lean_ctor_set(v___x_3155_, 1, v___x_3152_);
v___x_3156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3156_, 0, v___x_3155_);
v___x_3157_ = l_Lean_MVarId_apply(v_g_3142_, v_e_3143_, v___x_3151_, v___x_3156_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_);
return v___x_3157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___lam__0___boxed(lean_object* v___x_3158_, lean_object* v_g_3159_, lean_object* v_e_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_){
_start:
{
uint8_t v___x_233__boxed_3166_; lean_object* v_res_3167_; 
v___x_233__boxed_3166_ = lean_unbox(v___x_3158_);
v_res_3167_ = l_Lean_Elab_Tactic_evalApply___lam__0(v___x_233__boxed_3166_, v_g_3159_, v_e_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec_ref(v___y_3161_);
return v_res_3167_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalApply___closed__0(void){
_start:
{
lean_object* v___x_3168_; 
v___x_3168_ = lean_mk_string_unchecked("apply", 5, 5);
return v___x_3168_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalApply___closed__1(void){
_start:
{
lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3169_ = lean_obj_once(&l_Lean_Elab_Tactic_evalApply___closed__0, &l_Lean_Elab_Tactic_evalApply___closed__0_once, _init_l_Lean_Elab_Tactic_evalApply___closed__0);
v___x_3170_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3171_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_3172_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3173_ = l_Lean_Name_mkStr4(v___x_3172_, v___x_3171_, v___x_3170_, v___x_3169_);
return v___x_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply(lean_object* v_stx_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_){
_start:
{
lean_object* v___x_3184_; uint8_t v___x_3185_; 
v___x_3184_ = lean_obj_once(&l_Lean_Elab_Tactic_evalApply___closed__1, &l_Lean_Elab_Tactic_evalApply___closed__1_once, _init_l_Lean_Elab_Tactic_evalApply___closed__1);
lean_inc(v_stx_3174_);
v___x_3185_ = l_Lean_Syntax_isOfKind(v_stx_3174_, v___x_3184_);
if (v___x_3185_ == 0)
{
lean_object* v___x_3186_; 
lean_dec(v_stx_3174_);
v___x_3186_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_3186_;
}
else
{
lean_object* v___x_3187_; lean_object* v___f_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; 
v___x_3187_ = lean_box(v___x_3185_);
v___f_3188_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApply___lam__0___boxed), 8, 1);
lean_closure_set(v___f_3188_, 0, v___x_3187_);
v___x_3189_ = lean_unsigned_to_nat(1u);
v___x_3190_ = l_Lean_Syntax_getArg(v_stx_3174_, v___x_3189_);
lean_dec(v_stx_3174_);
v___x_3191_ = l_Lean_Elab_Tactic_evalApplyLikeTactic(v___f_3188_, v___x_3190_, v_a_3175_, v_a_3176_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_, v_a_3182_);
return v___x_3191_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalApply___boxed(lean_object* v_stx_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_, lean_object* v_a_3196_, lean_object* v_a_3197_, lean_object* v_a_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_Lean_Elab_Tactic_evalApply(v_stx_3192_, v_a_3193_, v_a_3194_, v_a_3195_, v_a_3196_, v_a_3197_, v_a_3198_, v_a_3199_, v_a_3200_);
lean_dec(v_a_3200_);
lean_dec_ref(v_a_3199_);
lean_dec(v_a_3198_);
lean_dec_ref(v_a_3197_);
lean_dec(v_a_3196_);
lean_dec_ref(v_a_3195_);
lean_dec(v_a_3194_);
lean_dec_ref(v_a_3193_);
return v_res_3202_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0(void){
_start:
{
lean_object* v___x_3203_; 
v___x_3203_ = lean_mk_string_unchecked("evalApply", 9, 9);
return v___x_3203_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1(void){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3204_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__0);
v___x_3205_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3206_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_3207_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3208_ = l_Lean_Name_mkStr4(v___x_3207_, v___x_3206_, v___x_3205_, v___x_3204_);
return v___x_3208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1(){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3210_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3211_ = lean_obj_once(&l_Lean_Elab_Tactic_evalApply___closed__1, &l_Lean_Elab_Tactic_evalApply___closed__1_once, _init_l_Lean_Elab_Tactic_evalApply___closed__1);
v___x_3212_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1);
v___x_3213_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalApply___boxed), 10, 0);
v___x_3214_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3210_, v___x_3211_, v___x_3212_, v___x_3213_);
return v___x_3214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___boxed(lean_object* v_a_3215_){
_start:
{
lean_object* v_res_3216_; 
v_res_3216_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
return v_res_3216_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3217_ = lean_unsigned_to_nat(43u);
v___x_3218_ = lean_unsigned_to_nat(303u);
v___x_3219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3219_, 0, v___x_3218_);
lean_ctor_set(v___x_3219_, 1, v___x_3217_);
return v___x_3219_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_unsigned_to_nat(31u);
v___x_3221_ = lean_unsigned_to_nat(306u);
v___x_3222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3222_, 0, v___x_3221_);
lean_ctor_set(v___x_3222_, 1, v___x_3220_);
return v___x_3222_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; 
v___x_3223_ = lean_unsigned_to_nat(31u);
v___x_3224_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__1);
v___x_3225_ = lean_unsigned_to_nat(43u);
v___x_3226_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__0);
v___x_3227_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3226_);
lean_ctor_set(v___x_3227_, 1, v___x_3225_);
lean_ctor_set(v___x_3227_, 2, v___x_3224_);
lean_ctor_set(v___x_3227_, 3, v___x_3223_);
return v___x_3227_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3228_ = lean_unsigned_to_nat(47u);
v___x_3229_ = lean_unsigned_to_nat(303u);
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
lean_ctor_set(v___x_3230_, 1, v___x_3228_);
return v___x_3230_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
v___x_3231_ = lean_unsigned_to_nat(56u);
v___x_3232_ = lean_unsigned_to_nat(303u);
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3232_);
lean_ctor_set(v___x_3233_, 1, v___x_3231_);
return v___x_3233_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
v___x_3234_ = lean_unsigned_to_nat(56u);
v___x_3235_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__4);
v___x_3236_ = lean_unsigned_to_nat(47u);
v___x_3237_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__3);
v___x_3238_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3238_, 0, v___x_3237_);
lean_ctor_set(v___x_3238_, 1, v___x_3236_);
lean_ctor_set(v___x_3238_, 2, v___x_3235_);
lean_ctor_set(v___x_3238_, 3, v___x_3234_);
return v___x_3238_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3239_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__5);
v___x_3240_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__2);
v___x_3241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3240_);
lean_ctor_set(v___x_3241_, 1, v___x_3239_);
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3(){
_start:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; 
v___x_3243_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1___closed__1);
v___x_3244_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___closed__6);
v___x_3245_ = l_Lean_addBuiltinDeclarationRanges(v___x_3243_, v___x_3244_);
return v___x_3245_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3___boxed(lean_object* v_a_3246_){
_start:
{
lean_object* v_res_3247_; 
v_res_3247_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
return v_res_3247_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0(void){
_start:
{
uint8_t v___x_3248_; uint8_t v___x_3249_; uint8_t v___x_3250_; lean_object* v___x_3251_; 
v___x_3248_ = 0;
v___x_3249_ = 1;
v___x_3250_ = 0;
v___x_3251_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3251_, 0, v___x_3250_);
lean_ctor_set_uint8(v___x_3251_, 1, v___x_3249_);
lean_ctor_set_uint8(v___x_3251_, 2, v___x_3248_);
lean_ctor_set_uint8(v___x_3251_, 3, v___x_3249_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0(lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
lean_object* v___x_3261_; 
v___x_3261_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3253_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
if (lean_obj_tag(v___x_3261_) == 0)
{
lean_object* v_a_3262_; uint8_t v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; 
v_a_3262_ = lean_ctor_get(v___x_3261_, 0);
lean_inc(v_a_3262_);
lean_dec_ref(v___x_3261_);
v___x_3263_ = 0;
v___x_3264_ = lean_obj_once(&l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___closed__0);
v___x_3265_ = l_Lean_MVarId_constructor(v_a_3262_, v___x_3264_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
if (lean_obj_tag(v___x_3265_) == 0)
{
lean_object* v_a_3266_; lean_object* v___x_3267_; 
v_a_3266_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_a_3266_);
lean_dec_ref(v___x_3265_);
v___x_3267_ = l_Lean_Elab_Term_synthesizeSyntheticMVarsNoPostponing(v___x_3263_, v___y_3254_, v___y_3255_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
if (lean_obj_tag(v___x_3267_) == 0)
{
lean_object* v___x_3268_; 
lean_dec_ref(v___x_3267_);
v___x_3268_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v_a_3266_, v___y_3253_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
return v___x_3268_;
}
else
{
lean_dec(v_a_3266_);
return v___x_3267_;
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
v_a_3269_ = lean_ctor_get(v___x_3265_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3265_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3265_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3265_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
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
v_a_3277_ = lean_ctor_get(v___x_3261_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3261_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3261_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3261_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___boxed(lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_){
_start:
{
lean_object* v_res_3294_; 
v_res_3294_ = l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0(v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_, v___y_3290_, v___y_3291_, v___y_3292_);
lean_dec(v___y_3292_);
lean_dec_ref(v___y_3291_);
lean_dec(v___y_3290_);
lean_dec_ref(v___y_3289_);
lean_dec(v___y_3288_);
lean_dec_ref(v___y_3287_);
lean_dec(v___y_3286_);
lean_dec_ref(v___y_3285_);
return v_res_3294_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0(void){
_start:
{
lean_object* v___f_3295_; 
v___f_3295_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalConstructor___redArg___lam__0___boxed), 9, 0);
return v___f_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg(lean_object* v_a_3296_, lean_object* v_a_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_){
_start:
{
lean_object* v___f_3305_; lean_object* v___x_3306_; 
v___f_3305_ = lean_obj_once(&l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0, &l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_evalConstructor___redArg___closed__0);
v___x_3306_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_3305_, v_a_3296_, v_a_3297_, v_a_3298_, v_a_3299_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___redArg___boxed(lean_object* v_a_3307_, lean_object* v_a_3308_, lean_object* v_a_3309_, lean_object* v_a_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_, lean_object* v_a_3314_, lean_object* v_a_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l_Lean_Elab_Tactic_evalConstructor___redArg(v_a_3307_, v_a_3308_, v_a_3309_, v_a_3310_, v_a_3311_, v_a_3312_, v_a_3313_, v_a_3314_);
lean_dec(v_a_3314_);
lean_dec_ref(v_a_3313_);
lean_dec(v_a_3312_);
lean_dec_ref(v_a_3311_);
lean_dec(v_a_3310_);
lean_dec_ref(v_a_3309_);
lean_dec(v_a_3308_);
lean_dec_ref(v_a_3307_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor(lean_object* v_x_3317_, lean_object* v_a_3318_, lean_object* v_a_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_){
_start:
{
lean_object* v___x_3327_; 
v___x_3327_ = l_Lean_Elab_Tactic_evalConstructor___redArg(v_a_3318_, v_a_3319_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_);
return v___x_3327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalConstructor___boxed(lean_object* v_x_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_){
_start:
{
lean_object* v_res_3338_; 
v_res_3338_ = l_Lean_Elab_Tactic_evalConstructor(v_x_3328_, v_a_3329_, v_a_3330_, v_a_3331_, v_a_3332_, v_a_3333_, v_a_3334_, v_a_3335_, v_a_3336_);
lean_dec(v_a_3336_);
lean_dec_ref(v_a_3335_);
lean_dec(v_a_3334_);
lean_dec_ref(v_a_3333_);
lean_dec(v_a_3332_);
lean_dec_ref(v_a_3331_);
lean_dec(v_a_3330_);
lean_dec_ref(v_a_3329_);
lean_dec(v_x_3328_);
return v_res_3338_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0(void){
_start:
{
lean_object* v___x_3339_; 
v___x_3339_ = lean_mk_string_unchecked("constructor", 11, 11);
return v___x_3339_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1(void){
_start:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3340_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__0);
v___x_3341_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3342_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_3343_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3344_ = l_Lean_Name_mkStr4(v___x_3343_, v___x_3342_, v___x_3341_, v___x_3340_);
return v___x_3344_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2(void){
_start:
{
lean_object* v___x_3345_; 
v___x_3345_ = lean_mk_string_unchecked("evalConstructor", 15, 15);
return v___x_3345_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3(void){
_start:
{
lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; 
v___x_3346_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__2);
v___x_3347_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3348_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_3349_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3350_ = l_Lean_Name_mkStr4(v___x_3349_, v___x_3348_, v___x_3347_, v___x_3346_);
return v___x_3350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1(){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3352_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3353_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__1);
v___x_3354_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3);
v___x_3355_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalConstructor___boxed), 10, 0);
v___x_3356_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3352_, v___x_3353_, v___x_3354_, v___x_3355_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___boxed(lean_object* v_a_3357_){
_start:
{
lean_object* v_res_3358_; 
v_res_3358_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
return v_res_3358_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v___x_3359_ = lean_unsigned_to_nat(49u);
v___x_3360_ = lean_unsigned_to_nat(308u);
v___x_3361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3360_);
lean_ctor_set(v___x_3361_, 1, v___x_3359_);
return v___x_3361_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3362_ = lean_unsigned_to_nat(28u);
v___x_3363_ = lean_unsigned_to_nat(312u);
v___x_3364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
lean_ctor_set(v___x_3364_, 1, v___x_3362_);
return v___x_3364_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3365_ = lean_unsigned_to_nat(28u);
v___x_3366_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__1);
v___x_3367_ = lean_unsigned_to_nat(49u);
v___x_3368_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__0);
v___x_3369_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3369_, 0, v___x_3368_);
lean_ctor_set(v___x_3369_, 1, v___x_3367_);
lean_ctor_set(v___x_3369_, 2, v___x_3366_);
lean_ctor_set(v___x_3369_, 3, v___x_3365_);
return v___x_3369_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3370_ = lean_unsigned_to_nat(53u);
v___x_3371_ = lean_unsigned_to_nat(308u);
v___x_3372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3371_);
lean_ctor_set(v___x_3372_, 1, v___x_3370_);
return v___x_3372_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3373_ = lean_unsigned_to_nat(68u);
v___x_3374_ = lean_unsigned_to_nat(308u);
v___x_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3374_);
lean_ctor_set(v___x_3375_, 1, v___x_3373_);
return v___x_3375_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; 
v___x_3376_ = lean_unsigned_to_nat(68u);
v___x_3377_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__4);
v___x_3378_ = lean_unsigned_to_nat(53u);
v___x_3379_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__3);
v___x_3380_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3380_, 0, v___x_3379_);
lean_ctor_set(v___x_3380_, 1, v___x_3378_);
lean_ctor_set(v___x_3380_, 2, v___x_3377_);
lean_ctor_set(v___x_3380_, 3, v___x_3376_);
return v___x_3380_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; 
v___x_3381_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__5);
v___x_3382_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__2);
v___x_3383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3383_, 0, v___x_3382_);
lean_ctor_set(v___x_3383_, 1, v___x_3381_);
return v___x_3383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3(){
_start:
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3385_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1___closed__3);
v___x_3386_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___closed__6);
v___x_3387_ = l_Lean_addBuiltinDeclarationRanges(v___x_3385_, v___x_3386_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3___boxed(lean_object* v_a_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
return v_res_3389_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithReducible___closed__0(void){
_start:
{
uint8_t v___x_3390_; uint64_t v___x_3391_; 
v___x_3390_ = 2;
v___x_3391_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3390_);
return v___x_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible(lean_object* v_stx_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_, lean_object* v_a_3395_, lean_object* v_a_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_, lean_object* v_a_3399_, lean_object* v_a_3400_){
_start:
{
lean_object* v___x_3402_; uint8_t v_foApprox_3403_; uint8_t v_ctxApprox_3404_; uint8_t v_quasiPatternApprox_3405_; uint8_t v_constApprox_3406_; uint8_t v_isDefEqStuckEx_3407_; uint8_t v_unificationHints_3408_; uint8_t v_proofIrrelevance_3409_; uint8_t v_assignSyntheticOpaque_3410_; uint8_t v_offsetCnstrs_3411_; uint8_t v_etaStruct_3412_; uint8_t v_univApprox_3413_; uint8_t v_iota_3414_; uint8_t v_beta_3415_; uint8_t v_proj_3416_; uint8_t v_zeta_3417_; uint8_t v_zetaDelta_3418_; uint8_t v_zetaUnused_3419_; uint8_t v_zetaHave_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3457_; 
v___x_3402_ = l_Lean_Meta_Context_config(v_a_3397_);
v_foApprox_3403_ = lean_ctor_get_uint8(v___x_3402_, 0);
v_ctxApprox_3404_ = lean_ctor_get_uint8(v___x_3402_, 1);
v_quasiPatternApprox_3405_ = lean_ctor_get_uint8(v___x_3402_, 2);
v_constApprox_3406_ = lean_ctor_get_uint8(v___x_3402_, 3);
v_isDefEqStuckEx_3407_ = lean_ctor_get_uint8(v___x_3402_, 4);
v_unificationHints_3408_ = lean_ctor_get_uint8(v___x_3402_, 5);
v_proofIrrelevance_3409_ = lean_ctor_get_uint8(v___x_3402_, 6);
v_assignSyntheticOpaque_3410_ = lean_ctor_get_uint8(v___x_3402_, 7);
v_offsetCnstrs_3411_ = lean_ctor_get_uint8(v___x_3402_, 8);
v_etaStruct_3412_ = lean_ctor_get_uint8(v___x_3402_, 10);
v_univApprox_3413_ = lean_ctor_get_uint8(v___x_3402_, 11);
v_iota_3414_ = lean_ctor_get_uint8(v___x_3402_, 12);
v_beta_3415_ = lean_ctor_get_uint8(v___x_3402_, 13);
v_proj_3416_ = lean_ctor_get_uint8(v___x_3402_, 14);
v_zeta_3417_ = lean_ctor_get_uint8(v___x_3402_, 15);
v_zetaDelta_3418_ = lean_ctor_get_uint8(v___x_3402_, 16);
v_zetaUnused_3419_ = lean_ctor_get_uint8(v___x_3402_, 17);
v_zetaHave_3420_ = lean_ctor_get_uint8(v___x_3402_, 18);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3402_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3422_ = v___x_3402_;
v_isShared_3423_ = v_isSharedCheck_3457_;
goto v_resetjp_3421_;
}
else
{
lean_dec(v___x_3402_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3457_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
uint8_t v_trackZetaDelta_3424_; lean_object* v_zetaDeltaSet_3425_; lean_object* v_lctx_3426_; lean_object* v_localInstances_3427_; lean_object* v_defEqCtx_x3f_3428_; lean_object* v_synthPendingDepth_3429_; lean_object* v_canUnfold_x3f_3430_; uint8_t v_univApprox_3431_; uint8_t v_inTypeClassResolution_3432_; uint8_t v_cacheInferType_3433_; uint8_t v___x_3434_; lean_object* v_config_3436_; 
v_trackZetaDelta_3424_ = lean_ctor_get_uint8(v_a_3397_, sizeof(void*)*7);
v_zetaDeltaSet_3425_ = lean_ctor_get(v_a_3397_, 1);
v_lctx_3426_ = lean_ctor_get(v_a_3397_, 2);
v_localInstances_3427_ = lean_ctor_get(v_a_3397_, 3);
v_defEqCtx_x3f_3428_ = lean_ctor_get(v_a_3397_, 4);
v_synthPendingDepth_3429_ = lean_ctor_get(v_a_3397_, 5);
v_canUnfold_x3f_3430_ = lean_ctor_get(v_a_3397_, 6);
v_univApprox_3431_ = lean_ctor_get_uint8(v_a_3397_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3432_ = lean_ctor_get_uint8(v_a_3397_, sizeof(void*)*7 + 2);
v_cacheInferType_3433_ = lean_ctor_get_uint8(v_a_3397_, sizeof(void*)*7 + 3);
v___x_3434_ = 2;
if (v_isShared_3423_ == 0)
{
v_config_3436_ = v___x_3422_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 0, v_foApprox_3403_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 1, v_ctxApprox_3404_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 2, v_quasiPatternApprox_3405_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 3, v_constApprox_3406_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 4, v_isDefEqStuckEx_3407_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 5, v_unificationHints_3408_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 6, v_proofIrrelevance_3409_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 7, v_assignSyntheticOpaque_3410_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 8, v_offsetCnstrs_3411_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 10, v_etaStruct_3412_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 11, v_univApprox_3413_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 12, v_iota_3414_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 13, v_beta_3415_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 14, v_proj_3416_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 15, v_zeta_3417_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 16, v_zetaDelta_3418_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 17, v_zetaUnused_3419_);
lean_ctor_set_uint8(v_reuseFailAlloc_3456_, 18, v_zetaHave_3420_);
v_config_3436_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
uint64_t v___x_3437_; uint64_t v___x_3438_; uint64_t v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; uint64_t v___x_3442_; uint64_t v___x_3443_; uint64_t v_key_3444_; lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; 
lean_ctor_set_uint8(v_config_3436_, 9, v___x_3434_);
v___x_3437_ = l_Lean_Meta_Context_configKey(v_a_3397_);
v___x_3438_ = 2ULL;
v___x_3439_ = lean_uint64_shift_right(v___x_3437_, v___x_3438_);
v___x_3440_ = lean_unsigned_to_nat(1u);
v___x_3441_ = l_Lean_Syntax_getArg(v_stx_3392_, v___x_3440_);
v___x_3442_ = lean_uint64_shift_left(v___x_3439_, v___x_3438_);
v___x_3443_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithReducible___closed__0, &l_Lean_Elab_Tactic_evalWithReducible___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithReducible___closed__0);
v_key_3444_ = lean_uint64_lor(v___x_3442_, v___x_3443_);
v___x_3445_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3445_, 0, v_config_3436_);
lean_ctor_set_uint64(v___x_3445_, sizeof(void*)*1, v_key_3444_);
lean_inc(v_canUnfold_x3f_3430_);
lean_inc(v_synthPendingDepth_3429_);
lean_inc(v_defEqCtx_x3f_3428_);
lean_inc_ref(v_localInstances_3427_);
lean_inc_ref(v_lctx_3426_);
lean_inc(v_zetaDeltaSet_3425_);
v___x_3446_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
lean_ctor_set(v___x_3446_, 1, v_zetaDeltaSet_3425_);
lean_ctor_set(v___x_3446_, 2, v_lctx_3426_);
lean_ctor_set(v___x_3446_, 3, v_localInstances_3427_);
lean_ctor_set(v___x_3446_, 4, v_defEqCtx_x3f_3428_);
lean_ctor_set(v___x_3446_, 5, v_synthPendingDepth_3429_);
lean_ctor_set(v___x_3446_, 6, v_canUnfold_x3f_3430_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*7, v_trackZetaDelta_3424_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*7 + 1, v_univApprox_3431_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3432_);
lean_ctor_set_uint8(v___x_3446_, sizeof(void*)*7 + 3, v_cacheInferType_3433_);
v___x_3447_ = l_Lean_Elab_Tactic_evalTactic(v___x_3441_, v_a_3393_, v_a_3394_, v_a_3395_, v_a_3396_, v___x_3446_, v_a_3398_, v_a_3399_, v_a_3400_);
lean_dec_ref(v___x_3446_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_a_3448_; lean_object* v___x_3450_; uint8_t v_isShared_3451_; uint8_t v_isSharedCheck_3455_; 
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3447_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3450_ = v___x_3447_;
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
else
{
lean_inc(v_a_3448_);
lean_dec(v___x_3447_);
v___x_3450_ = lean_box(0);
v_isShared_3451_ = v_isSharedCheck_3455_;
goto v_resetjp_3449_;
}
v_resetjp_3449_:
{
lean_object* v___x_3453_; 
if (v_isShared_3451_ == 0)
{
v___x_3453_ = v___x_3450_;
goto v_reusejp_3452_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v_a_3448_);
v___x_3453_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3452_;
}
v_reusejp_3452_:
{
return v___x_3453_;
}
}
}
else
{
return v___x_3447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducible___boxed(lean_object* v_stx_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_){
_start:
{
lean_object* v_res_3468_; 
v_res_3468_ = l_Lean_Elab_Tactic_evalWithReducible(v_stx_3458_, v_a_3459_, v_a_3460_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_);
lean_dec(v_a_3466_);
lean_dec_ref(v_a_3465_);
lean_dec(v_a_3464_);
lean_dec_ref(v_a_3463_);
lean_dec(v_a_3462_);
lean_dec_ref(v_a_3461_);
lean_dec(v_a_3460_);
lean_dec_ref(v_a_3459_);
lean_dec(v_stx_3458_);
return v_res_3468_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0(void){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = lean_mk_string_unchecked("withReducible", 13, 13);
return v___x_3469_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1(void){
_start:
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3470_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__0);
v___x_3471_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3472_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_3473_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3474_ = l_Lean_Name_mkStr4(v___x_3473_, v___x_3472_, v___x_3471_, v___x_3470_);
return v___x_3474_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2(void){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = lean_mk_string_unchecked("evalWithReducible", 17, 17);
return v___x_3475_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3(void){
_start:
{
lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3476_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__2);
v___x_3477_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3478_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_3479_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3480_ = l_Lean_Name_mkStr4(v___x_3479_, v___x_3478_, v___x_3477_, v___x_3476_);
return v___x_3480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1(){
_start:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; 
v___x_3482_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3483_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__1);
v___x_3484_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3);
v___x_3485_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithReducible___boxed), 10, 0);
v___x_3486_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3482_, v___x_3483_, v___x_3484_, v___x_3485_);
return v___x_3486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___boxed(lean_object* v_a_3487_){
_start:
{
lean_object* v_res_3488_; 
v_res_3488_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
return v_res_3488_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v___x_3489_ = lean_unsigned_to_nat(51u);
v___x_3490_ = lean_unsigned_to_nat(314u);
v___x_3491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3490_);
lean_ctor_set(v___x_3491_, 1, v___x_3489_);
return v___x_3491_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; 
v___x_3492_ = lean_unsigned_to_nat(36u);
v___x_3493_ = lean_unsigned_to_nat(315u);
v___x_3494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3493_);
lean_ctor_set(v___x_3494_, 1, v___x_3492_);
return v___x_3494_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; 
v___x_3495_ = lean_unsigned_to_nat(36u);
v___x_3496_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__1);
v___x_3497_ = lean_unsigned_to_nat(51u);
v___x_3498_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__0);
v___x_3499_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3499_, 0, v___x_3498_);
lean_ctor_set(v___x_3499_, 1, v___x_3497_);
lean_ctor_set(v___x_3499_, 2, v___x_3496_);
lean_ctor_set(v___x_3499_, 3, v___x_3495_);
return v___x_3499_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; 
v___x_3500_ = lean_unsigned_to_nat(55u);
v___x_3501_ = lean_unsigned_to_nat(314u);
v___x_3502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3501_);
lean_ctor_set(v___x_3502_, 1, v___x_3500_);
return v___x_3502_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
v___x_3503_ = lean_unsigned_to_nat(72u);
v___x_3504_ = lean_unsigned_to_nat(314u);
v___x_3505_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
lean_ctor_set(v___x_3505_, 1, v___x_3503_);
return v___x_3505_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3506_ = lean_unsigned_to_nat(72u);
v___x_3507_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__4);
v___x_3508_ = lean_unsigned_to_nat(55u);
v___x_3509_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__3);
v___x_3510_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3509_);
lean_ctor_set(v___x_3510_, 1, v___x_3508_);
lean_ctor_set(v___x_3510_, 2, v___x_3507_);
lean_ctor_set(v___x_3510_, 3, v___x_3506_);
return v___x_3510_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3511_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__5);
v___x_3512_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__2);
v___x_3513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3513_, 0, v___x_3512_);
lean_ctor_set(v___x_3513_, 1, v___x_3511_);
return v___x_3513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3(){
_start:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3515_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1___closed__3);
v___x_3516_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___closed__6);
v___x_3517_ = l_Lean_addBuiltinDeclarationRanges(v___x_3515_, v___x_3516_);
return v___x_3517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3___boxed(lean_object* v_a_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
return v_res_3519_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0(void){
_start:
{
uint8_t v___x_3520_; uint64_t v___x_3521_; 
v___x_3520_ = 3;
v___x_3521_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3520_);
return v___x_3521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances(lean_object* v_stx_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_, lean_object* v_a_3525_, lean_object* v_a_3526_, lean_object* v_a_3527_, lean_object* v_a_3528_, lean_object* v_a_3529_, lean_object* v_a_3530_){
_start:
{
lean_object* v___x_3532_; uint8_t v_foApprox_3533_; uint8_t v_ctxApprox_3534_; uint8_t v_quasiPatternApprox_3535_; uint8_t v_constApprox_3536_; uint8_t v_isDefEqStuckEx_3537_; uint8_t v_unificationHints_3538_; uint8_t v_proofIrrelevance_3539_; uint8_t v_assignSyntheticOpaque_3540_; uint8_t v_offsetCnstrs_3541_; uint8_t v_etaStruct_3542_; uint8_t v_univApprox_3543_; uint8_t v_iota_3544_; uint8_t v_beta_3545_; uint8_t v_proj_3546_; uint8_t v_zeta_3547_; uint8_t v_zetaDelta_3548_; uint8_t v_zetaUnused_3549_; uint8_t v_zetaHave_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3587_; 
v___x_3532_ = l_Lean_Meta_Context_config(v_a_3527_);
v_foApprox_3533_ = lean_ctor_get_uint8(v___x_3532_, 0);
v_ctxApprox_3534_ = lean_ctor_get_uint8(v___x_3532_, 1);
v_quasiPatternApprox_3535_ = lean_ctor_get_uint8(v___x_3532_, 2);
v_constApprox_3536_ = lean_ctor_get_uint8(v___x_3532_, 3);
v_isDefEqStuckEx_3537_ = lean_ctor_get_uint8(v___x_3532_, 4);
v_unificationHints_3538_ = lean_ctor_get_uint8(v___x_3532_, 5);
v_proofIrrelevance_3539_ = lean_ctor_get_uint8(v___x_3532_, 6);
v_assignSyntheticOpaque_3540_ = lean_ctor_get_uint8(v___x_3532_, 7);
v_offsetCnstrs_3541_ = lean_ctor_get_uint8(v___x_3532_, 8);
v_etaStruct_3542_ = lean_ctor_get_uint8(v___x_3532_, 10);
v_univApprox_3543_ = lean_ctor_get_uint8(v___x_3532_, 11);
v_iota_3544_ = lean_ctor_get_uint8(v___x_3532_, 12);
v_beta_3545_ = lean_ctor_get_uint8(v___x_3532_, 13);
v_proj_3546_ = lean_ctor_get_uint8(v___x_3532_, 14);
v_zeta_3547_ = lean_ctor_get_uint8(v___x_3532_, 15);
v_zetaDelta_3548_ = lean_ctor_get_uint8(v___x_3532_, 16);
v_zetaUnused_3549_ = lean_ctor_get_uint8(v___x_3532_, 17);
v_zetaHave_3550_ = lean_ctor_get_uint8(v___x_3532_, 18);
v_isSharedCheck_3587_ = !lean_is_exclusive(v___x_3532_);
if (v_isSharedCheck_3587_ == 0)
{
v___x_3552_ = v___x_3532_;
v_isShared_3553_ = v_isSharedCheck_3587_;
goto v_resetjp_3551_;
}
else
{
lean_dec(v___x_3532_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3587_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
uint8_t v_trackZetaDelta_3554_; lean_object* v_zetaDeltaSet_3555_; lean_object* v_lctx_3556_; lean_object* v_localInstances_3557_; lean_object* v_defEqCtx_x3f_3558_; lean_object* v_synthPendingDepth_3559_; lean_object* v_canUnfold_x3f_3560_; uint8_t v_univApprox_3561_; uint8_t v_inTypeClassResolution_3562_; uint8_t v_cacheInferType_3563_; uint8_t v___x_3564_; lean_object* v_config_3566_; 
v_trackZetaDelta_3554_ = lean_ctor_get_uint8(v_a_3527_, sizeof(void*)*7);
v_zetaDeltaSet_3555_ = lean_ctor_get(v_a_3527_, 1);
v_lctx_3556_ = lean_ctor_get(v_a_3527_, 2);
v_localInstances_3557_ = lean_ctor_get(v_a_3527_, 3);
v_defEqCtx_x3f_3558_ = lean_ctor_get(v_a_3527_, 4);
v_synthPendingDepth_3559_ = lean_ctor_get(v_a_3527_, 5);
v_canUnfold_x3f_3560_ = lean_ctor_get(v_a_3527_, 6);
v_univApprox_3561_ = lean_ctor_get_uint8(v_a_3527_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3562_ = lean_ctor_get_uint8(v_a_3527_, sizeof(void*)*7 + 2);
v_cacheInferType_3563_ = lean_ctor_get_uint8(v_a_3527_, sizeof(void*)*7 + 3);
v___x_3564_ = 3;
if (v_isShared_3553_ == 0)
{
v_config_3566_ = v___x_3552_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3586_; 
v_reuseFailAlloc_3586_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 0, v_foApprox_3533_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 1, v_ctxApprox_3534_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 2, v_quasiPatternApprox_3535_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 3, v_constApprox_3536_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 4, v_isDefEqStuckEx_3537_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 5, v_unificationHints_3538_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 6, v_proofIrrelevance_3539_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 7, v_assignSyntheticOpaque_3540_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 8, v_offsetCnstrs_3541_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 10, v_etaStruct_3542_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 11, v_univApprox_3543_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 12, v_iota_3544_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 13, v_beta_3545_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 14, v_proj_3546_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 15, v_zeta_3547_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 16, v_zetaDelta_3548_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 17, v_zetaUnused_3549_);
lean_ctor_set_uint8(v_reuseFailAlloc_3586_, 18, v_zetaHave_3550_);
v_config_3566_ = v_reuseFailAlloc_3586_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
uint64_t v___x_3567_; uint64_t v___x_3568_; uint64_t v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; uint64_t v___x_3572_; uint64_t v___x_3573_; uint64_t v_key_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
lean_ctor_set_uint8(v_config_3566_, 9, v___x_3564_);
v___x_3567_ = l_Lean_Meta_Context_configKey(v_a_3527_);
v___x_3568_ = 2ULL;
v___x_3569_ = lean_uint64_shift_right(v___x_3567_, v___x_3568_);
v___x_3570_ = lean_unsigned_to_nat(1u);
v___x_3571_ = l_Lean_Syntax_getArg(v_stx_3522_, v___x_3570_);
v___x_3572_ = lean_uint64_shift_left(v___x_3569_, v___x_3568_);
v___x_3573_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0, &l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithReducibleAndInstances___closed__0);
v_key_3574_ = lean_uint64_lor(v___x_3572_, v___x_3573_);
v___x_3575_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3575_, 0, v_config_3566_);
lean_ctor_set_uint64(v___x_3575_, sizeof(void*)*1, v_key_3574_);
lean_inc(v_canUnfold_x3f_3560_);
lean_inc(v_synthPendingDepth_3559_);
lean_inc(v_defEqCtx_x3f_3558_);
lean_inc_ref(v_localInstances_3557_);
lean_inc_ref(v_lctx_3556_);
lean_inc(v_zetaDeltaSet_3555_);
v___x_3576_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3576_, 0, v___x_3575_);
lean_ctor_set(v___x_3576_, 1, v_zetaDeltaSet_3555_);
lean_ctor_set(v___x_3576_, 2, v_lctx_3556_);
lean_ctor_set(v___x_3576_, 3, v_localInstances_3557_);
lean_ctor_set(v___x_3576_, 4, v_defEqCtx_x3f_3558_);
lean_ctor_set(v___x_3576_, 5, v_synthPendingDepth_3559_);
lean_ctor_set(v___x_3576_, 6, v_canUnfold_x3f_3560_);
lean_ctor_set_uint8(v___x_3576_, sizeof(void*)*7, v_trackZetaDelta_3554_);
lean_ctor_set_uint8(v___x_3576_, sizeof(void*)*7 + 1, v_univApprox_3561_);
lean_ctor_set_uint8(v___x_3576_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3562_);
lean_ctor_set_uint8(v___x_3576_, sizeof(void*)*7 + 3, v_cacheInferType_3563_);
v___x_3577_ = l_Lean_Elab_Tactic_evalTactic(v___x_3571_, v_a_3523_, v_a_3524_, v_a_3525_, v_a_3526_, v___x_3576_, v_a_3528_, v_a_3529_, v_a_3530_);
lean_dec_ref(v___x_3576_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_object* v_a_3578_; lean_object* v___x_3580_; uint8_t v_isShared_3581_; uint8_t v_isSharedCheck_3585_; 
v_a_3578_ = lean_ctor_get(v___x_3577_, 0);
v_isSharedCheck_3585_ = !lean_is_exclusive(v___x_3577_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3580_ = v___x_3577_;
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
else
{
lean_inc(v_a_3578_);
lean_dec(v___x_3577_);
v___x_3580_ = lean_box(0);
v_isShared_3581_ = v_isSharedCheck_3585_;
goto v_resetjp_3579_;
}
v_resetjp_3579_:
{
lean_object* v___x_3583_; 
if (v_isShared_3581_ == 0)
{
v___x_3583_ = v___x_3580_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v_a_3578_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
else
{
return v___x_3577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed(lean_object* v_stx_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_, lean_object* v_a_3592_, lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v_a_3595_, lean_object* v_a_3596_, lean_object* v_a_3597_){
_start:
{
lean_object* v_res_3598_; 
v_res_3598_ = l_Lean_Elab_Tactic_evalWithReducibleAndInstances(v_stx_3588_, v_a_3589_, v_a_3590_, v_a_3591_, v_a_3592_, v_a_3593_, v_a_3594_, v_a_3595_, v_a_3596_);
lean_dec(v_a_3596_);
lean_dec_ref(v_a_3595_);
lean_dec(v_a_3594_);
lean_dec_ref(v_a_3593_);
lean_dec(v_a_3592_);
lean_dec_ref(v_a_3591_);
lean_dec(v_a_3590_);
lean_dec_ref(v_a_3589_);
lean_dec(v_stx_3588_);
return v_res_3598_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0(void){
_start:
{
lean_object* v___x_3599_; 
v___x_3599_ = lean_mk_string_unchecked("withReducibleAndInstances", 25, 25);
return v___x_3599_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1(void){
_start:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3600_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__0);
v___x_3601_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3602_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_3603_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3604_ = l_Lean_Name_mkStr4(v___x_3603_, v___x_3602_, v___x_3601_, v___x_3600_);
return v___x_3604_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2(void){
_start:
{
lean_object* v___x_3605_; 
v___x_3605_ = lean_mk_string_unchecked("evalWithReducibleAndInstances", 29, 29);
return v___x_3605_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3(void){
_start:
{
lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3606_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__2);
v___x_3607_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3608_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_3609_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3610_ = l_Lean_Name_mkStr4(v___x_3609_, v___x_3608_, v___x_3607_, v___x_3606_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1(){
_start:
{
lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3612_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3613_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__1);
v___x_3614_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3);
v___x_3615_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithReducibleAndInstances___boxed), 10, 0);
v___x_3616_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3612_, v___x_3613_, v___x_3614_, v___x_3615_);
return v___x_3616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___boxed(lean_object* v_a_3617_){
_start:
{
lean_object* v_res_3618_; 
v_res_3618_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
return v_res_3618_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; 
v___x_3619_ = lean_unsigned_to_nat(63u);
v___x_3620_ = lean_unsigned_to_nat(317u);
v___x_3621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3620_);
lean_ctor_set(v___x_3621_, 1, v___x_3619_);
return v___x_3621_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; 
v___x_3622_ = lean_unsigned_to_nat(48u);
v___x_3623_ = lean_unsigned_to_nat(318u);
v___x_3624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3623_);
lean_ctor_set(v___x_3624_, 1, v___x_3622_);
return v___x_3624_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; 
v___x_3625_ = lean_unsigned_to_nat(48u);
v___x_3626_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__1);
v___x_3627_ = lean_unsigned_to_nat(63u);
v___x_3628_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__0);
v___x_3629_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
lean_ctor_set(v___x_3629_, 1, v___x_3627_);
lean_ctor_set(v___x_3629_, 2, v___x_3626_);
lean_ctor_set(v___x_3629_, 3, v___x_3625_);
return v___x_3629_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3630_ = lean_unsigned_to_nat(67u);
v___x_3631_ = lean_unsigned_to_nat(317u);
v___x_3632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3631_);
lean_ctor_set(v___x_3632_, 1, v___x_3630_);
return v___x_3632_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v___x_3633_ = lean_unsigned_to_nat(96u);
v___x_3634_ = lean_unsigned_to_nat(317u);
v___x_3635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3635_, 0, v___x_3634_);
lean_ctor_set(v___x_3635_, 1, v___x_3633_);
return v___x_3635_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___x_3639_; lean_object* v___x_3640_; 
v___x_3636_ = lean_unsigned_to_nat(96u);
v___x_3637_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__4);
v___x_3638_ = lean_unsigned_to_nat(67u);
v___x_3639_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__3);
v___x_3640_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3640_, 0, v___x_3639_);
lean_ctor_set(v___x_3640_, 1, v___x_3638_);
lean_ctor_set(v___x_3640_, 2, v___x_3637_);
lean_ctor_set(v___x_3640_, 3, v___x_3636_);
return v___x_3640_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; 
v___x_3641_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__5);
v___x_3642_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__2);
v___x_3643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3642_);
lean_ctor_set(v___x_3643_, 1, v___x_3641_);
return v___x_3643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3(){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3645_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1___closed__3);
v___x_3646_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___closed__6);
v___x_3647_ = l_Lean_addBuiltinDeclarationRanges(v___x_3645_, v___x_3646_);
return v___x_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3___boxed(lean_object* v_a_3648_){
_start:
{
lean_object* v_res_3649_; 
v_res_3649_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
return v_res_3649_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0(void){
_start:
{
uint8_t v___x_3650_; uint64_t v___x_3651_; 
v___x_3650_ = 0;
v___x_3651_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3650_);
return v___x_3651_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll(lean_object* v_stx_3652_, lean_object* v_a_3653_, lean_object* v_a_3654_, lean_object* v_a_3655_, lean_object* v_a_3656_, lean_object* v_a_3657_, lean_object* v_a_3658_, lean_object* v_a_3659_, lean_object* v_a_3660_){
_start:
{
lean_object* v___x_3662_; uint8_t v_foApprox_3663_; uint8_t v_ctxApprox_3664_; uint8_t v_quasiPatternApprox_3665_; uint8_t v_constApprox_3666_; uint8_t v_isDefEqStuckEx_3667_; uint8_t v_unificationHints_3668_; uint8_t v_proofIrrelevance_3669_; uint8_t v_assignSyntheticOpaque_3670_; uint8_t v_offsetCnstrs_3671_; uint8_t v_etaStruct_3672_; uint8_t v_univApprox_3673_; uint8_t v_iota_3674_; uint8_t v_beta_3675_; uint8_t v_proj_3676_; uint8_t v_zeta_3677_; uint8_t v_zetaDelta_3678_; uint8_t v_zetaUnused_3679_; uint8_t v_zetaHave_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3717_; 
v___x_3662_ = l_Lean_Meta_Context_config(v_a_3657_);
v_foApprox_3663_ = lean_ctor_get_uint8(v___x_3662_, 0);
v_ctxApprox_3664_ = lean_ctor_get_uint8(v___x_3662_, 1);
v_quasiPatternApprox_3665_ = lean_ctor_get_uint8(v___x_3662_, 2);
v_constApprox_3666_ = lean_ctor_get_uint8(v___x_3662_, 3);
v_isDefEqStuckEx_3667_ = lean_ctor_get_uint8(v___x_3662_, 4);
v_unificationHints_3668_ = lean_ctor_get_uint8(v___x_3662_, 5);
v_proofIrrelevance_3669_ = lean_ctor_get_uint8(v___x_3662_, 6);
v_assignSyntheticOpaque_3670_ = lean_ctor_get_uint8(v___x_3662_, 7);
v_offsetCnstrs_3671_ = lean_ctor_get_uint8(v___x_3662_, 8);
v_etaStruct_3672_ = lean_ctor_get_uint8(v___x_3662_, 10);
v_univApprox_3673_ = lean_ctor_get_uint8(v___x_3662_, 11);
v_iota_3674_ = lean_ctor_get_uint8(v___x_3662_, 12);
v_beta_3675_ = lean_ctor_get_uint8(v___x_3662_, 13);
v_proj_3676_ = lean_ctor_get_uint8(v___x_3662_, 14);
v_zeta_3677_ = lean_ctor_get_uint8(v___x_3662_, 15);
v_zetaDelta_3678_ = lean_ctor_get_uint8(v___x_3662_, 16);
v_zetaUnused_3679_ = lean_ctor_get_uint8(v___x_3662_, 17);
v_zetaHave_3680_ = lean_ctor_get_uint8(v___x_3662_, 18);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3662_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3682_ = v___x_3662_;
v_isShared_3683_ = v_isSharedCheck_3717_;
goto v_resetjp_3681_;
}
else
{
lean_dec(v___x_3662_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3717_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
uint8_t v_trackZetaDelta_3684_; lean_object* v_zetaDeltaSet_3685_; lean_object* v_lctx_3686_; lean_object* v_localInstances_3687_; lean_object* v_defEqCtx_x3f_3688_; lean_object* v_synthPendingDepth_3689_; lean_object* v_canUnfold_x3f_3690_; uint8_t v_univApprox_3691_; uint8_t v_inTypeClassResolution_3692_; uint8_t v_cacheInferType_3693_; uint8_t v___x_3694_; lean_object* v_config_3696_; 
v_trackZetaDelta_3684_ = lean_ctor_get_uint8(v_a_3657_, sizeof(void*)*7);
v_zetaDeltaSet_3685_ = lean_ctor_get(v_a_3657_, 1);
v_lctx_3686_ = lean_ctor_get(v_a_3657_, 2);
v_localInstances_3687_ = lean_ctor_get(v_a_3657_, 3);
v_defEqCtx_x3f_3688_ = lean_ctor_get(v_a_3657_, 4);
v_synthPendingDepth_3689_ = lean_ctor_get(v_a_3657_, 5);
v_canUnfold_x3f_3690_ = lean_ctor_get(v_a_3657_, 6);
v_univApprox_3691_ = lean_ctor_get_uint8(v_a_3657_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3692_ = lean_ctor_get_uint8(v_a_3657_, sizeof(void*)*7 + 2);
v_cacheInferType_3693_ = lean_ctor_get_uint8(v_a_3657_, sizeof(void*)*7 + 3);
v___x_3694_ = 0;
if (v_isShared_3683_ == 0)
{
v_config_3696_ = v___x_3682_;
goto v_reusejp_3695_;
}
else
{
lean_object* v_reuseFailAlloc_3716_; 
v_reuseFailAlloc_3716_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 0, v_foApprox_3663_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 1, v_ctxApprox_3664_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 2, v_quasiPatternApprox_3665_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 3, v_constApprox_3666_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 4, v_isDefEqStuckEx_3667_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 5, v_unificationHints_3668_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 6, v_proofIrrelevance_3669_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 7, v_assignSyntheticOpaque_3670_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 8, v_offsetCnstrs_3671_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 10, v_etaStruct_3672_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 11, v_univApprox_3673_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 12, v_iota_3674_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 13, v_beta_3675_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 14, v_proj_3676_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 15, v_zeta_3677_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 16, v_zetaDelta_3678_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 17, v_zetaUnused_3679_);
lean_ctor_set_uint8(v_reuseFailAlloc_3716_, 18, v_zetaHave_3680_);
v_config_3696_ = v_reuseFailAlloc_3716_;
goto v_reusejp_3695_;
}
v_reusejp_3695_:
{
uint64_t v___x_3697_; uint64_t v___x_3698_; uint64_t v___x_3699_; lean_object* v___x_3700_; lean_object* v___x_3701_; uint64_t v___x_3702_; uint64_t v___x_3703_; uint64_t v_key_3704_; lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; 
lean_ctor_set_uint8(v_config_3696_, 9, v___x_3694_);
v___x_3697_ = l_Lean_Meta_Context_configKey(v_a_3657_);
v___x_3698_ = 2ULL;
v___x_3699_ = lean_uint64_shift_right(v___x_3697_, v___x_3698_);
v___x_3700_ = lean_unsigned_to_nat(1u);
v___x_3701_ = l_Lean_Syntax_getArg(v_stx_3652_, v___x_3700_);
v___x_3702_ = lean_uint64_shift_left(v___x_3699_, v___x_3698_);
v___x_3703_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0, &l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithUnfoldingAll___closed__0);
v_key_3704_ = lean_uint64_lor(v___x_3702_, v___x_3703_);
v___x_3705_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3705_, 0, v_config_3696_);
lean_ctor_set_uint64(v___x_3705_, sizeof(void*)*1, v_key_3704_);
lean_inc(v_canUnfold_x3f_3690_);
lean_inc(v_synthPendingDepth_3689_);
lean_inc(v_defEqCtx_x3f_3688_);
lean_inc_ref(v_localInstances_3687_);
lean_inc_ref(v_lctx_3686_);
lean_inc(v_zetaDeltaSet_3685_);
v___x_3706_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3706_, 0, v___x_3705_);
lean_ctor_set(v___x_3706_, 1, v_zetaDeltaSet_3685_);
lean_ctor_set(v___x_3706_, 2, v_lctx_3686_);
lean_ctor_set(v___x_3706_, 3, v_localInstances_3687_);
lean_ctor_set(v___x_3706_, 4, v_defEqCtx_x3f_3688_);
lean_ctor_set(v___x_3706_, 5, v_synthPendingDepth_3689_);
lean_ctor_set(v___x_3706_, 6, v_canUnfold_x3f_3690_);
lean_ctor_set_uint8(v___x_3706_, sizeof(void*)*7, v_trackZetaDelta_3684_);
lean_ctor_set_uint8(v___x_3706_, sizeof(void*)*7 + 1, v_univApprox_3691_);
lean_ctor_set_uint8(v___x_3706_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3692_);
lean_ctor_set_uint8(v___x_3706_, sizeof(void*)*7 + 3, v_cacheInferType_3693_);
v___x_3707_ = l_Lean_Elab_Tactic_evalTactic(v___x_3701_, v_a_3653_, v_a_3654_, v_a_3655_, v_a_3656_, v___x_3706_, v_a_3658_, v_a_3659_, v_a_3660_);
lean_dec_ref(v___x_3706_);
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3715_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3715_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3715_ == 0)
{
v___x_3710_ = v___x_3707_;
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3707_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3715_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___x_3713_; 
if (v_isShared_3711_ == 0)
{
v___x_3713_ = v___x_3710_;
goto v_reusejp_3712_;
}
else
{
lean_object* v_reuseFailAlloc_3714_; 
v_reuseFailAlloc_3714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3714_, 0, v_a_3708_);
v___x_3713_ = v_reuseFailAlloc_3714_;
goto v_reusejp_3712_;
}
v_reusejp_3712_:
{
return v___x_3713_;
}
}
}
else
{
return v___x_3707_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed(lean_object* v_stx_3718_, lean_object* v_a_3719_, lean_object* v_a_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_, lean_object* v_a_3725_, lean_object* v_a_3726_, lean_object* v_a_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Lean_Elab_Tactic_evalWithUnfoldingAll(v_stx_3718_, v_a_3719_, v_a_3720_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_, v_a_3725_, v_a_3726_);
lean_dec(v_a_3726_);
lean_dec_ref(v_a_3725_);
lean_dec(v_a_3724_);
lean_dec_ref(v_a_3723_);
lean_dec(v_a_3722_);
lean_dec_ref(v_a_3721_);
lean_dec(v_a_3720_);
lean_dec_ref(v_a_3719_);
lean_dec(v_stx_3718_);
return v_res_3728_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0(void){
_start:
{
lean_object* v___x_3729_; 
v___x_3729_ = lean_mk_string_unchecked("withUnfoldingAll", 16, 16);
return v___x_3729_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1(void){
_start:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3730_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__0);
v___x_3731_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3732_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_3733_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3734_ = l_Lean_Name_mkStr4(v___x_3733_, v___x_3732_, v___x_3731_, v___x_3730_);
return v___x_3734_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2(void){
_start:
{
lean_object* v___x_3735_; 
v___x_3735_ = lean_mk_string_unchecked("evalWithUnfoldingAll", 20, 20);
return v___x_3735_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3(void){
_start:
{
lean_object* v___x_3736_; lean_object* v___x_3737_; lean_object* v___x_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; 
v___x_3736_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__2);
v___x_3737_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3738_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_3739_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3740_ = l_Lean_Name_mkStr4(v___x_3739_, v___x_3738_, v___x_3737_, v___x_3736_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1(){
_start:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; lean_object* v___x_3746_; 
v___x_3742_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3743_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__1);
v___x_3744_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3);
v___x_3745_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithUnfoldingAll___boxed), 10, 0);
v___x_3746_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3742_, v___x_3743_, v___x_3744_, v___x_3745_);
return v___x_3746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___boxed(lean_object* v_a_3747_){
_start:
{
lean_object* v_res_3748_; 
v_res_3748_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
return v_res_3748_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; 
v___x_3749_ = lean_unsigned_to_nat(54u);
v___x_3750_ = lean_unsigned_to_nat(320u);
v___x_3751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3751_, 0, v___x_3750_);
lean_ctor_set(v___x_3751_, 1, v___x_3749_);
return v___x_3751_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; 
v___x_3752_ = lean_unsigned_to_nat(60u);
v___x_3753_ = lean_unsigned_to_nat(321u);
v___x_3754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3754_, 0, v___x_3753_);
lean_ctor_set(v___x_3754_, 1, v___x_3752_);
return v___x_3754_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
v___x_3755_ = lean_unsigned_to_nat(60u);
v___x_3756_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__1);
v___x_3757_ = lean_unsigned_to_nat(54u);
v___x_3758_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__0);
v___x_3759_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3758_);
lean_ctor_set(v___x_3759_, 1, v___x_3757_);
lean_ctor_set(v___x_3759_, 2, v___x_3756_);
lean_ctor_set(v___x_3759_, 3, v___x_3755_);
return v___x_3759_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3760_ = lean_unsigned_to_nat(58u);
v___x_3761_ = lean_unsigned_to_nat(320u);
v___x_3762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
lean_ctor_set(v___x_3762_, 1, v___x_3760_);
return v___x_3762_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3763_ = lean_unsigned_to_nat(78u);
v___x_3764_ = lean_unsigned_to_nat(320u);
v___x_3765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3765_, 0, v___x_3764_);
lean_ctor_set(v___x_3765_, 1, v___x_3763_);
return v___x_3765_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3766_ = lean_unsigned_to_nat(78u);
v___x_3767_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__4);
v___x_3768_ = lean_unsigned_to_nat(58u);
v___x_3769_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__3);
v___x_3770_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3769_);
lean_ctor_set(v___x_3770_, 1, v___x_3768_);
lean_ctor_set(v___x_3770_, 2, v___x_3767_);
lean_ctor_set(v___x_3770_, 3, v___x_3766_);
return v___x_3770_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3771_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__5);
v___x_3772_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__2);
v___x_3773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3773_, 0, v___x_3772_);
lean_ctor_set(v___x_3773_, 1, v___x_3771_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3(){
_start:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3775_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1___closed__3);
v___x_3776_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___closed__6);
v___x_3777_ = l_Lean_addBuiltinDeclarationRanges(v___x_3775_, v___x_3776_);
return v___x_3777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3___boxed(lean_object* v_a_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
return v_res_3779_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0(void){
_start:
{
uint8_t v___x_3780_; uint64_t v___x_3781_; 
v___x_3780_ = 4;
v___x_3781_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3780_);
return v___x_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone(lean_object* v_stx_3782_, lean_object* v_a_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_, lean_object* v_a_3790_){
_start:
{
lean_object* v___x_3792_; uint8_t v_foApprox_3793_; uint8_t v_ctxApprox_3794_; uint8_t v_quasiPatternApprox_3795_; uint8_t v_constApprox_3796_; uint8_t v_isDefEqStuckEx_3797_; uint8_t v_unificationHints_3798_; uint8_t v_proofIrrelevance_3799_; uint8_t v_assignSyntheticOpaque_3800_; uint8_t v_offsetCnstrs_3801_; uint8_t v_etaStruct_3802_; uint8_t v_univApprox_3803_; uint8_t v_iota_3804_; uint8_t v_beta_3805_; uint8_t v_proj_3806_; uint8_t v_zeta_3807_; uint8_t v_zetaDelta_3808_; uint8_t v_zetaUnused_3809_; uint8_t v_zetaHave_3810_; lean_object* v___x_3812_; uint8_t v_isShared_3813_; uint8_t v_isSharedCheck_3847_; 
v___x_3792_ = l_Lean_Meta_Context_config(v_a_3787_);
v_foApprox_3793_ = lean_ctor_get_uint8(v___x_3792_, 0);
v_ctxApprox_3794_ = lean_ctor_get_uint8(v___x_3792_, 1);
v_quasiPatternApprox_3795_ = lean_ctor_get_uint8(v___x_3792_, 2);
v_constApprox_3796_ = lean_ctor_get_uint8(v___x_3792_, 3);
v_isDefEqStuckEx_3797_ = lean_ctor_get_uint8(v___x_3792_, 4);
v_unificationHints_3798_ = lean_ctor_get_uint8(v___x_3792_, 5);
v_proofIrrelevance_3799_ = lean_ctor_get_uint8(v___x_3792_, 6);
v_assignSyntheticOpaque_3800_ = lean_ctor_get_uint8(v___x_3792_, 7);
v_offsetCnstrs_3801_ = lean_ctor_get_uint8(v___x_3792_, 8);
v_etaStruct_3802_ = lean_ctor_get_uint8(v___x_3792_, 10);
v_univApprox_3803_ = lean_ctor_get_uint8(v___x_3792_, 11);
v_iota_3804_ = lean_ctor_get_uint8(v___x_3792_, 12);
v_beta_3805_ = lean_ctor_get_uint8(v___x_3792_, 13);
v_proj_3806_ = lean_ctor_get_uint8(v___x_3792_, 14);
v_zeta_3807_ = lean_ctor_get_uint8(v___x_3792_, 15);
v_zetaDelta_3808_ = lean_ctor_get_uint8(v___x_3792_, 16);
v_zetaUnused_3809_ = lean_ctor_get_uint8(v___x_3792_, 17);
v_zetaHave_3810_ = lean_ctor_get_uint8(v___x_3792_, 18);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3792_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3812_ = v___x_3792_;
v_isShared_3813_ = v_isSharedCheck_3847_;
goto v_resetjp_3811_;
}
else
{
lean_dec(v___x_3792_);
v___x_3812_ = lean_box(0);
v_isShared_3813_ = v_isSharedCheck_3847_;
goto v_resetjp_3811_;
}
v_resetjp_3811_:
{
uint8_t v_trackZetaDelta_3814_; lean_object* v_zetaDeltaSet_3815_; lean_object* v_lctx_3816_; lean_object* v_localInstances_3817_; lean_object* v_defEqCtx_x3f_3818_; lean_object* v_synthPendingDepth_3819_; lean_object* v_canUnfold_x3f_3820_; uint8_t v_univApprox_3821_; uint8_t v_inTypeClassResolution_3822_; uint8_t v_cacheInferType_3823_; uint8_t v___x_3824_; lean_object* v_config_3826_; 
v_trackZetaDelta_3814_ = lean_ctor_get_uint8(v_a_3787_, sizeof(void*)*7);
v_zetaDeltaSet_3815_ = lean_ctor_get(v_a_3787_, 1);
v_lctx_3816_ = lean_ctor_get(v_a_3787_, 2);
v_localInstances_3817_ = lean_ctor_get(v_a_3787_, 3);
v_defEqCtx_x3f_3818_ = lean_ctor_get(v_a_3787_, 4);
v_synthPendingDepth_3819_ = lean_ctor_get(v_a_3787_, 5);
v_canUnfold_x3f_3820_ = lean_ctor_get(v_a_3787_, 6);
v_univApprox_3821_ = lean_ctor_get_uint8(v_a_3787_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3822_ = lean_ctor_get_uint8(v_a_3787_, sizeof(void*)*7 + 2);
v_cacheInferType_3823_ = lean_ctor_get_uint8(v_a_3787_, sizeof(void*)*7 + 3);
v___x_3824_ = 4;
if (v_isShared_3813_ == 0)
{
v_config_3826_ = v___x_3812_;
goto v_reusejp_3825_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 0, v_foApprox_3793_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 1, v_ctxApprox_3794_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 2, v_quasiPatternApprox_3795_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 3, v_constApprox_3796_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 4, v_isDefEqStuckEx_3797_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 5, v_unificationHints_3798_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 6, v_proofIrrelevance_3799_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 7, v_assignSyntheticOpaque_3800_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 8, v_offsetCnstrs_3801_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 10, v_etaStruct_3802_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 11, v_univApprox_3803_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 12, v_iota_3804_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 13, v_beta_3805_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 14, v_proj_3806_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 15, v_zeta_3807_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 16, v_zetaDelta_3808_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 17, v_zetaUnused_3809_);
lean_ctor_set_uint8(v_reuseFailAlloc_3846_, 18, v_zetaHave_3810_);
v_config_3826_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3825_;
}
v_reusejp_3825_:
{
uint64_t v___x_3827_; uint64_t v___x_3828_; uint64_t v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; uint64_t v___x_3832_; uint64_t v___x_3833_; uint64_t v_key_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; 
lean_ctor_set_uint8(v_config_3826_, 9, v___x_3824_);
v___x_3827_ = l_Lean_Meta_Context_configKey(v_a_3787_);
v___x_3828_ = 2ULL;
v___x_3829_ = lean_uint64_shift_right(v___x_3827_, v___x_3828_);
v___x_3830_ = lean_unsigned_to_nat(1u);
v___x_3831_ = l_Lean_Syntax_getArg(v_stx_3782_, v___x_3830_);
v___x_3832_ = lean_uint64_shift_left(v___x_3829_, v___x_3828_);
v___x_3833_ = lean_uint64_once(&l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0, &l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0_once, _init_l_Lean_Elab_Tactic_evalWithUnfoldingNone___closed__0);
v_key_3834_ = lean_uint64_lor(v___x_3832_, v___x_3833_);
v___x_3835_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3835_, 0, v_config_3826_);
lean_ctor_set_uint64(v___x_3835_, sizeof(void*)*1, v_key_3834_);
lean_inc(v_canUnfold_x3f_3820_);
lean_inc(v_synthPendingDepth_3819_);
lean_inc(v_defEqCtx_x3f_3818_);
lean_inc_ref(v_localInstances_3817_);
lean_inc_ref(v_lctx_3816_);
lean_inc(v_zetaDeltaSet_3815_);
v___x_3836_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3836_, 0, v___x_3835_);
lean_ctor_set(v___x_3836_, 1, v_zetaDeltaSet_3815_);
lean_ctor_set(v___x_3836_, 2, v_lctx_3816_);
lean_ctor_set(v___x_3836_, 3, v_localInstances_3817_);
lean_ctor_set(v___x_3836_, 4, v_defEqCtx_x3f_3818_);
lean_ctor_set(v___x_3836_, 5, v_synthPendingDepth_3819_);
lean_ctor_set(v___x_3836_, 6, v_canUnfold_x3f_3820_);
lean_ctor_set_uint8(v___x_3836_, sizeof(void*)*7, v_trackZetaDelta_3814_);
lean_ctor_set_uint8(v___x_3836_, sizeof(void*)*7 + 1, v_univApprox_3821_);
lean_ctor_set_uint8(v___x_3836_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3822_);
lean_ctor_set_uint8(v___x_3836_, sizeof(void*)*7 + 3, v_cacheInferType_3823_);
v___x_3837_ = l_Lean_Elab_Tactic_evalTactic(v___x_3831_, v_a_3783_, v_a_3784_, v_a_3785_, v_a_3786_, v___x_3836_, v_a_3788_, v_a_3789_, v_a_3790_);
lean_dec_ref(v___x_3836_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
v_a_3838_ = lean_ctor_get(v___x_3837_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3837_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3840_ = v___x_3837_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3837_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3838_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
else
{
return v___x_3837_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed(lean_object* v_stx_3848_, lean_object* v_a_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_, lean_object* v_a_3855_, lean_object* v_a_3856_, lean_object* v_a_3857_){
_start:
{
lean_object* v_res_3858_; 
v_res_3858_ = l_Lean_Elab_Tactic_evalWithUnfoldingNone(v_stx_3848_, v_a_3849_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_, v_a_3854_, v_a_3855_, v_a_3856_);
lean_dec(v_a_3856_);
lean_dec_ref(v_a_3855_);
lean_dec(v_a_3854_);
lean_dec_ref(v_a_3853_);
lean_dec(v_a_3852_);
lean_dec_ref(v_a_3851_);
lean_dec(v_a_3850_);
lean_dec_ref(v_a_3849_);
lean_dec(v_stx_3848_);
return v_res_3858_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0(void){
_start:
{
lean_object* v___x_3859_; 
v___x_3859_ = lean_mk_string_unchecked("withUnfoldingNone", 17, 17);
return v___x_3859_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1(void){
_start:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; lean_object* v___x_3863_; lean_object* v___x_3864_; 
v___x_3860_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__0);
v___x_3861_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3862_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_3863_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3864_ = l_Lean_Name_mkStr4(v___x_3863_, v___x_3862_, v___x_3861_, v___x_3860_);
return v___x_3864_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2(void){
_start:
{
lean_object* v___x_3865_; 
v___x_3865_ = lean_mk_string_unchecked("evalWithUnfoldingNone", 21, 21);
return v___x_3865_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3(void){
_start:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3869_; lean_object* v___x_3870_; 
v___x_3866_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__2);
v___x_3867_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_3868_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_3869_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_3870_ = l_Lean_Name_mkStr4(v___x_3869_, v___x_3868_, v___x_3867_, v___x_3866_);
return v___x_3870_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1(){
_start:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3872_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_3873_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__1);
v___x_3874_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___closed__3);
v___x_3875_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalWithUnfoldingNone___boxed), 10, 0);
v___x_3876_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_3872_, v___x_3873_, v___x_3874_, v___x_3875_);
return v___x_3876_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1___boxed(lean_object* v_a_3877_){
_start:
{
lean_object* v_res_3878_; 
v_res_3878_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
return v_res_3878_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3879_; 
v___x_3879_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_3879_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3880_; lean_object* v___x_3881_; 
v___x_3880_ = lean_obj_once(&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0, &l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__0);
v___x_3881_ = l_Lean_Name_mkStr1(v___x_3880_);
return v___x_3881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0(lean_object* v_stx_3882_, lean_object* v___x_3883_, uint8_t v___x_3884_, lean_object* v_userName_x3f_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_){
_start:
{
lean_object* v___x_3895_; 
v___x_3895_ = l_Lean_Elab_Tactic_elabTerm(v_stx_3882_, v___x_3883_, v___x_3884_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_);
if (lean_obj_tag(v___x_3895_) == 0)
{
lean_object* v_a_3896_; lean_object* v___x_3898_; uint8_t v_isShared_3899_; uint8_t v_isSharedCheck_3982_; 
v_a_3896_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3982_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3982_ == 0)
{
v___x_3898_ = v___x_3895_;
v_isShared_3899_ = v_isSharedCheck_3982_;
goto v_resetjp_3897_;
}
else
{
lean_inc(v_a_3896_);
lean_dec(v___x_3895_);
v___x_3898_ = lean_box(0);
v_isShared_3899_ = v_isSharedCheck_3982_;
goto v_resetjp_3897_;
}
v_resetjp_3897_:
{
if (lean_obj_tag(v_a_3896_) == 1)
{
lean_object* v_fvarId_3900_; lean_object* v___x_3902_; 
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v_userName_x3f_3885_);
v_fvarId_3900_ = lean_ctor_get(v_a_3896_, 0);
lean_inc(v_fvarId_3900_);
lean_dec_ref(v_a_3896_);
if (v_isShared_3899_ == 0)
{
lean_ctor_set(v___x_3898_, 0, v_fvarId_3900_);
v___x_3902_ = v___x_3898_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v_fvarId_3900_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
else
{
lean_object* v___x_3904_; 
lean_del_object(v___x_3898_);
lean_inc(v___y_3893_);
lean_inc_ref(v___y_3892_);
lean_inc(v___y_3891_);
lean_inc_ref(v___y_3890_);
lean_inc(v_a_3896_);
v___x_3904_ = lean_infer_type(v_a_3896_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_);
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3905_; lean_object* v_userName_3907_; uint8_t v_preserveBinderNames_3908_; lean_object* v___y_3909_; lean_object* v___y_3910_; lean_object* v___y_3911_; lean_object* v___y_3912_; lean_object* v___y_3913_; 
v_a_3905_ = lean_ctor_get(v___x_3904_, 0);
lean_inc(v_a_3905_);
lean_dec_ref(v___x_3904_);
if (lean_obj_tag(v_userName_x3f_3885_) == 0)
{
lean_object* v___x_3971_; 
v___x_3971_ = lean_obj_once(&l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1, &l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_elabAsFVar___lam__0___closed__1);
v_userName_3907_ = v___x_3971_;
v_preserveBinderNames_3908_ = v___x_3884_;
v___y_3909_ = v___y_3887_;
v___y_3910_ = v___y_3890_;
v___y_3911_ = v___y_3891_;
v___y_3912_ = v___y_3892_;
v___y_3913_ = v___y_3893_;
goto v___jp_3906_;
}
else
{
lean_object* v_val_3972_; uint8_t v___x_3973_; 
v_val_3972_ = lean_ctor_get(v_userName_x3f_3885_, 0);
lean_inc(v_val_3972_);
lean_dec_ref(v_userName_x3f_3885_);
v___x_3973_ = 1;
v_userName_3907_ = v_val_3972_;
v_preserveBinderNames_3908_ = v___x_3973_;
v___y_3909_ = v___y_3887_;
v___y_3910_ = v___y_3890_;
v___y_3911_ = v___y_3891_;
v___y_3912_ = v___y_3892_;
v___y_3913_ = v___y_3893_;
goto v___jp_3906_;
}
v___jp_3906_:
{
lean_object* v___x_3914_; 
v___x_3914_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_);
if (lean_obj_tag(v___x_3914_) == 0)
{
lean_object* v_a_3915_; lean_object* v___x_3916_; 
v_a_3915_ = lean_ctor_get(v___x_3914_, 0);
lean_inc(v_a_3915_);
lean_dec_ref(v___x_3914_);
v___x_3916_ = l_Lean_MVarId_assert(v_a_3915_, v_userName_3907_, v_a_3905_, v_a_3896_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; lean_object* v___x_3918_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_a_3917_);
lean_dec_ref(v___x_3916_);
v___x_3918_ = l_Lean_Meta_intro1Core(v_a_3917_, v_preserveBinderNames_3908_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v_a_3919_; lean_object* v_fst_3920_; lean_object* v_snd_3921_; lean_object* v___x_3923_; uint8_t v_isShared_3924_; uint8_t v_isSharedCheck_3946_; 
v_a_3919_ = lean_ctor_get(v___x_3918_, 0);
lean_inc(v_a_3919_);
lean_dec_ref(v___x_3918_);
v_fst_3920_ = lean_ctor_get(v_a_3919_, 0);
v_snd_3921_ = lean_ctor_get(v_a_3919_, 1);
v_isSharedCheck_3946_ = !lean_is_exclusive(v_a_3919_);
if (v_isSharedCheck_3946_ == 0)
{
v___x_3923_ = v_a_3919_;
v_isShared_3924_ = v_isSharedCheck_3946_;
goto v_resetjp_3922_;
}
else
{
lean_inc(v_snd_3921_);
lean_inc(v_fst_3920_);
lean_dec(v_a_3919_);
v___x_3923_ = lean_box(0);
v_isShared_3924_ = v_isSharedCheck_3946_;
goto v_resetjp_3922_;
}
v_resetjp_3922_:
{
lean_object* v___x_3925_; lean_object* v___x_3927_; 
v___x_3925_ = lean_box(0);
if (v_isShared_3924_ == 0)
{
lean_ctor_set_tag(v___x_3923_, 1);
lean_ctor_set(v___x_3923_, 1, v___x_3925_);
lean_ctor_set(v___x_3923_, 0, v_snd_3921_);
v___x_3927_ = v___x_3923_;
goto v_reusejp_3926_;
}
else
{
lean_object* v_reuseFailAlloc_3945_; 
v_reuseFailAlloc_3945_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3945_, 0, v_snd_3921_);
lean_ctor_set(v_reuseFailAlloc_3945_, 1, v___x_3925_);
v___x_3927_ = v_reuseFailAlloc_3945_;
goto v_reusejp_3926_;
}
v_reusejp_3926_:
{
lean_object* v___x_3928_; 
v___x_3928_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_3927_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_, v___y_3913_);
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_3935_; 
v_isSharedCheck_3935_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3935_ == 0)
{
lean_object* v_unused_3936_; 
v_unused_3936_ = lean_ctor_get(v___x_3928_, 0);
lean_dec(v_unused_3936_);
v___x_3930_ = v___x_3928_;
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
else
{
lean_dec(v___x_3928_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_3935_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
lean_object* v___x_3933_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v_fst_3920_);
v___x_3933_ = v___x_3930_;
goto v_reusejp_3932_;
}
else
{
lean_object* v_reuseFailAlloc_3934_; 
v_reuseFailAlloc_3934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3934_, 0, v_fst_3920_);
v___x_3933_ = v_reuseFailAlloc_3934_;
goto v_reusejp_3932_;
}
v_reusejp_3932_:
{
return v___x_3933_;
}
}
}
else
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3944_; 
lean_dec(v_fst_3920_);
v_a_3937_ = lean_ctor_get(v___x_3928_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v___x_3928_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3939_ = v___x_3928_;
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3928_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3942_; 
if (v_isShared_3940_ == 0)
{
v___x_3942_ = v___x_3939_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3937_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
}
}
}
else
{
lean_object* v_a_3947_; lean_object* v___x_3949_; uint8_t v_isShared_3950_; uint8_t v_isSharedCheck_3954_; 
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
v_a_3947_ = lean_ctor_get(v___x_3918_, 0);
v_isSharedCheck_3954_ = !lean_is_exclusive(v___x_3918_);
if (v_isSharedCheck_3954_ == 0)
{
v___x_3949_ = v___x_3918_;
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
else
{
lean_inc(v_a_3947_);
lean_dec(v___x_3918_);
v___x_3949_ = lean_box(0);
v_isShared_3950_ = v_isSharedCheck_3954_;
goto v_resetjp_3948_;
}
v_resetjp_3948_:
{
lean_object* v___x_3952_; 
if (v_isShared_3950_ == 0)
{
v___x_3952_ = v___x_3949_;
goto v_reusejp_3951_;
}
else
{
lean_object* v_reuseFailAlloc_3953_; 
v_reuseFailAlloc_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3953_, 0, v_a_3947_);
v___x_3952_ = v_reuseFailAlloc_3953_;
goto v_reusejp_3951_;
}
v_reusejp_3951_:
{
return v___x_3952_;
}
}
}
}
else
{
lean_object* v_a_3955_; lean_object* v___x_3957_; uint8_t v_isShared_3958_; uint8_t v_isSharedCheck_3962_; 
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
v_a_3955_ = lean_ctor_get(v___x_3916_, 0);
v_isSharedCheck_3962_ = !lean_is_exclusive(v___x_3916_);
if (v_isSharedCheck_3962_ == 0)
{
v___x_3957_ = v___x_3916_;
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
else
{
lean_inc(v_a_3955_);
lean_dec(v___x_3916_);
v___x_3957_ = lean_box(0);
v_isShared_3958_ = v_isSharedCheck_3962_;
goto v_resetjp_3956_;
}
v_resetjp_3956_:
{
lean_object* v___x_3960_; 
if (v_isShared_3958_ == 0)
{
v___x_3960_ = v___x_3957_;
goto v_reusejp_3959_;
}
else
{
lean_object* v_reuseFailAlloc_3961_; 
v_reuseFailAlloc_3961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3961_, 0, v_a_3955_);
v___x_3960_ = v_reuseFailAlloc_3961_;
goto v_reusejp_3959_;
}
v_reusejp_3959_:
{
return v___x_3960_;
}
}
}
}
else
{
lean_object* v_a_3963_; lean_object* v___x_3965_; uint8_t v_isShared_3966_; uint8_t v_isSharedCheck_3970_; 
lean_dec(v___y_3913_);
lean_dec_ref(v___y_3912_);
lean_dec(v___y_3911_);
lean_dec_ref(v___y_3910_);
lean_dec(v_userName_3907_);
lean_dec(v_a_3905_);
lean_dec(v_a_3896_);
v_a_3963_ = lean_ctor_get(v___x_3914_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3914_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3965_ = v___x_3914_;
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
else
{
lean_inc(v_a_3963_);
lean_dec(v___x_3914_);
v___x_3965_ = lean_box(0);
v_isShared_3966_ = v_isSharedCheck_3970_;
goto v_resetjp_3964_;
}
v_resetjp_3964_:
{
lean_object* v___x_3968_; 
if (v_isShared_3966_ == 0)
{
v___x_3968_ = v___x_3965_;
goto v_reusejp_3967_;
}
else
{
lean_object* v_reuseFailAlloc_3969_; 
v_reuseFailAlloc_3969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3969_, 0, v_a_3963_);
v___x_3968_ = v_reuseFailAlloc_3969_;
goto v_reusejp_3967_;
}
v_reusejp_3967_:
{
return v___x_3968_;
}
}
}
}
}
else
{
lean_object* v_a_3974_; lean_object* v___x_3976_; uint8_t v_isShared_3977_; uint8_t v_isSharedCheck_3981_; 
lean_dec(v_a_3896_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v_userName_x3f_3885_);
v_a_3974_ = lean_ctor_get(v___x_3904_, 0);
v_isSharedCheck_3981_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3981_ == 0)
{
v___x_3976_ = v___x_3904_;
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
else
{
lean_inc(v_a_3974_);
lean_dec(v___x_3904_);
v___x_3976_ = lean_box(0);
v_isShared_3977_ = v_isSharedCheck_3981_;
goto v_resetjp_3975_;
}
v_resetjp_3975_:
{
lean_object* v___x_3979_; 
if (v_isShared_3977_ == 0)
{
v___x_3979_ = v___x_3976_;
goto v_reusejp_3978_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v_a_3974_);
v___x_3979_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3978_;
}
v_reusejp_3978_:
{
return v___x_3979_;
}
}
}
}
}
}
else
{
lean_object* v_a_3983_; lean_object* v___x_3985_; uint8_t v_isShared_3986_; uint8_t v_isSharedCheck_3990_; 
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3891_);
lean_dec_ref(v___y_3890_);
lean_dec(v_userName_x3f_3885_);
v_a_3983_ = lean_ctor_get(v___x_3895_, 0);
v_isSharedCheck_3990_ = !lean_is_exclusive(v___x_3895_);
if (v_isSharedCheck_3990_ == 0)
{
v___x_3985_ = v___x_3895_;
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
else
{
lean_inc(v_a_3983_);
lean_dec(v___x_3895_);
v___x_3985_ = lean_box(0);
v_isShared_3986_ = v_isSharedCheck_3990_;
goto v_resetjp_3984_;
}
v_resetjp_3984_:
{
lean_object* v___x_3988_; 
if (v_isShared_3986_ == 0)
{
v___x_3988_ = v___x_3985_;
goto v_reusejp_3987_;
}
else
{
lean_object* v_reuseFailAlloc_3989_; 
v_reuseFailAlloc_3989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3989_, 0, v_a_3983_);
v___x_3988_ = v_reuseFailAlloc_3989_;
goto v_reusejp_3987_;
}
v_reusejp_3987_:
{
return v___x_3988_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed(lean_object* v_stx_3991_, lean_object* v___x_3992_, lean_object* v___x_3993_, lean_object* v_userName_x3f_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
uint8_t v___x_1473__boxed_4004_; lean_object* v_res_4005_; 
v___x_1473__boxed_4004_ = lean_unbox(v___x_3993_);
v_res_4005_ = l_Lean_Elab_Tactic_elabAsFVar___lam__0(v_stx_3991_, v___x_3992_, v___x_1473__boxed_4004_, v_userName_x3f_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_);
lean_dec(v___y_3998_);
lean_dec_ref(v___y_3997_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
return v_res_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar(lean_object* v_stx_4006_, lean_object* v_userName_x3f_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_, lean_object* v_a_4012_, lean_object* v_a_4013_, lean_object* v_a_4014_, lean_object* v_a_4015_){
_start:
{
lean_object* v___x_4017_; uint8_t v___x_4018_; lean_object* v___x_4019_; lean_object* v___f_4020_; lean_object* v___x_4021_; 
v___x_4017_ = lean_box(0);
v___x_4018_ = 0;
v___x_4019_ = lean_box(v___x_4018_);
v___f_4020_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_elabAsFVar___lam__0___boxed), 13, 4);
lean_closure_set(v___f_4020_, 0, v_stx_4006_);
lean_closure_set(v___f_4020_, 1, v___x_4017_);
lean_closure_set(v___f_4020_, 2, v___x_4019_);
lean_closure_set(v___f_4020_, 3, v_userName_x3f_4007_);
v___x_4021_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_4020_, v_a_4008_, v_a_4009_, v_a_4010_, v_a_4011_, v_a_4012_, v_a_4013_, v_a_4014_, v_a_4015_);
return v___x_4021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_elabAsFVar___boxed(lean_object* v_stx_4022_, lean_object* v_userName_x3f_4023_, lean_object* v_a_4024_, lean_object* v_a_4025_, lean_object* v_a_4026_, lean_object* v_a_4027_, lean_object* v_a_4028_, lean_object* v_a_4029_, lean_object* v_a_4030_, lean_object* v_a_4031_, lean_object* v_a_4032_){
_start:
{
lean_object* v_res_4033_; 
v_res_4033_ = l_Lean_Elab_Tactic_elabAsFVar(v_stx_4022_, v_userName_x3f_4023_, v_a_4024_, v_a_4025_, v_a_4026_, v_a_4027_, v_a_4028_, v_a_4029_, v_a_4030_, v_a_4031_);
lean_dec(v_a_4031_);
lean_dec_ref(v_a_4030_);
lean_dec(v_a_4029_);
lean_dec_ref(v_a_4028_);
lean_dec(v_a_4027_);
lean_dec_ref(v_a_4026_);
lean_dec(v_a_4025_);
lean_dec_ref(v_a_4024_);
return v_res_4033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(lean_object* v_k_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
lean_object* v___x_4044_; 
lean_inc(v___y_4038_);
lean_inc_ref(v___y_4037_);
lean_inc(v___y_4036_);
lean_inc_ref(v___y_4035_);
v___x_4044_ = lean_apply_9(v_k_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, lean_box(0));
return v___x_4044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed(lean_object* v_k_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_){
_start:
{
lean_object* v_res_4055_; 
v_res_4055_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0(v_k_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(lean_object* v_k_4056_, uint8_t v_allowLevelAssignments_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_){
_start:
{
lean_object* v___f_4067_; lean_object* v___x_4068_; 
lean_inc(v___y_4061_);
lean_inc_ref(v___y_4060_);
lean_inc(v___y_4059_);
lean_inc_ref(v___y_4058_);
v___f_4067_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_4067_, 0, v_k_4056_);
lean_closure_set(v___f_4067_, 1, v___y_4058_);
lean_closure_set(v___f_4067_, 2, v___y_4059_);
lean_closure_set(v___f_4067_, 3, v___y_4060_);
lean_closure_set(v___f_4067_, 4, v___y_4061_);
v___x_4068_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_4057_, v___f_4067_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_);
if (lean_obj_tag(v___x_4068_) == 0)
{
return v___x_4068_;
}
else
{
lean_object* v_a_4069_; lean_object* v___x_4071_; uint8_t v_isShared_4072_; uint8_t v_isSharedCheck_4076_; 
v_a_4069_ = lean_ctor_get(v___x_4068_, 0);
v_isSharedCheck_4076_ = !lean_is_exclusive(v___x_4068_);
if (v_isSharedCheck_4076_ == 0)
{
v___x_4071_ = v___x_4068_;
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
else
{
lean_inc(v_a_4069_);
lean_dec(v___x_4068_);
v___x_4071_ = lean_box(0);
v_isShared_4072_ = v_isSharedCheck_4076_;
goto v_resetjp_4070_;
}
v_resetjp_4070_:
{
lean_object* v___x_4074_; 
if (v_isShared_4072_ == 0)
{
v___x_4074_ = v___x_4071_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v_a_4069_);
v___x_4074_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
return v___x_4074_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg___boxed(lean_object* v_k_4077_, lean_object* v_allowLevelAssignments_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_4088_; lean_object* v_res_4089_; 
v_allowLevelAssignments_boxed_4088_ = lean_unbox(v_allowLevelAssignments_4078_);
v_res_4089_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(v_k_4077_, v_allowLevelAssignments_boxed_4088_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_);
lean_dec(v___y_4086_);
lean_dec_ref(v___y_4085_);
lean_dec(v___y_4084_);
lean_dec_ref(v___y_4083_);
lean_dec(v___y_4082_);
lean_dec_ref(v___y_4081_);
lean_dec(v___y_4080_);
lean_dec_ref(v___y_4079_);
return v_res_4089_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(lean_object* v_00_u03b1_4090_, lean_object* v_k_4091_, uint8_t v_allowLevelAssignments_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v___x_4102_; 
v___x_4102_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___redArg(v_k_4091_, v_allowLevelAssignments_4092_, v___y_4093_, v___y_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_);
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed(lean_object* v_00_u03b1_4103_, lean_object* v_k_4104_, lean_object* v_allowLevelAssignments_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_4115_; lean_object* v_res_4116_; 
v_allowLevelAssignments_boxed_4115_ = lean_unbox(v_allowLevelAssignments_4105_);
v_res_4116_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1(v_00_u03b1_4103_, v_k_4104_, v_allowLevelAssignments_boxed_4115_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
lean_dec(v___y_4113_);
lean_dec_ref(v___y_4112_);
lean_dec(v___y_4111_);
lean_dec_ref(v___y_4110_);
lean_dec(v___y_4109_);
lean_dec_ref(v___y_4108_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
return v_res_4116_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(lean_object* v_a_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_, lean_object* v___y_4124_, lean_object* v_a_x3f_4125_){
_start:
{
uint8_t v___x_4127_; lean_object* v___x_4128_; 
v___x_4127_ = 0;
v___x_4128_ = l_Lean_Elab_Tactic_SavedState_restore___redArg(v_a_4117_, v___x_4127_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_);
return v___x_4128_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0___boxed(lean_object* v_a_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v_a_x3f_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v_res_4139_; 
v_res_4139_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_, v_a_x3f_4137_);
lean_dec(v_a_x3f_4137_);
lean_dec(v___y_4136_);
lean_dec_ref(v___y_4135_);
lean_dec(v___y_4134_);
lean_dec_ref(v___y_4133_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec(v___y_4130_);
return v_res_4139_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(lean_object* v_x_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_){
_start:
{
lean_object* v___x_4150_; 
v___x_4150_ = l_Lean_Elab_Tactic_saveState___redArg(v___y_4142_, v___y_4144_, v___y_4146_, v___y_4148_);
if (lean_obj_tag(v___x_4150_) == 0)
{
lean_object* v_a_4151_; lean_object* v_r_4152_; 
v_a_4151_ = lean_ctor_get(v___x_4150_, 0);
lean_inc(v_a_4151_);
lean_dec_ref(v___x_4150_);
lean_inc(v___y_4148_);
lean_inc_ref(v___y_4147_);
lean_inc(v___y_4146_);
lean_inc_ref(v___y_4145_);
lean_inc(v___y_4144_);
lean_inc_ref(v___y_4143_);
lean_inc(v___y_4142_);
lean_inc_ref(v___y_4141_);
v_r_4152_ = lean_apply_9(v_x_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, lean_box(0));
if (lean_obj_tag(v_r_4152_) == 0)
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4177_; 
v_a_4153_ = lean_ctor_get(v_r_4152_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v_r_4152_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4155_ = v_r_4152_;
v_isShared_4156_ = v_isSharedCheck_4177_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v_r_4152_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4177_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
lean_inc(v_a_4153_);
if (v_isShared_4156_ == 0)
{
lean_ctor_set_tag(v___x_4155_, 1);
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v_a_4153_);
v___x_4158_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
lean_object* v___x_4159_; 
v___x_4159_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_4151_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___x_4158_);
lean_dec_ref(v___x_4158_);
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4166_; 
v_isSharedCheck_4166_ = !lean_is_exclusive(v___x_4159_);
if (v_isSharedCheck_4166_ == 0)
{
lean_object* v_unused_4167_; 
v_unused_4167_ = lean_ctor_get(v___x_4159_, 0);
lean_dec(v_unused_4167_);
v___x_4161_ = v___x_4159_;
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
else
{
lean_dec(v___x_4159_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
lean_object* v___x_4164_; 
if (v_isShared_4162_ == 0)
{
lean_ctor_set(v___x_4161_, 0, v_a_4153_);
v___x_4164_ = v___x_4161_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_a_4153_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
return v___x_4164_;
}
}
}
else
{
lean_object* v_a_4168_; lean_object* v___x_4170_; uint8_t v_isShared_4171_; uint8_t v_isSharedCheck_4175_; 
lean_dec(v_a_4153_);
v_a_4168_ = lean_ctor_get(v___x_4159_, 0);
v_isSharedCheck_4175_ = !lean_is_exclusive(v___x_4159_);
if (v_isSharedCheck_4175_ == 0)
{
v___x_4170_ = v___x_4159_;
v_isShared_4171_ = v_isSharedCheck_4175_;
goto v_resetjp_4169_;
}
else
{
lean_inc(v_a_4168_);
lean_dec(v___x_4159_);
v___x_4170_ = lean_box(0);
v_isShared_4171_ = v_isSharedCheck_4175_;
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
lean_object* v_reuseFailAlloc_4174_; 
v_reuseFailAlloc_4174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4174_, 0, v_a_4168_);
v___x_4173_ = v_reuseFailAlloc_4174_;
goto v_reusejp_4172_;
}
v_reusejp_4172_:
{
return v___x_4173_;
}
}
}
}
}
}
else
{
lean_object* v_a_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; 
v_a_4178_ = lean_ctor_get(v_r_4152_, 0);
lean_inc(v_a_4178_);
lean_dec_ref(v_r_4152_);
v___x_4179_ = lean_box(0);
v___x_4180_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___lam__0(v_a_4151_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___x_4179_);
if (lean_obj_tag(v___x_4180_) == 0)
{
lean_object* v___x_4182_; uint8_t v_isShared_4183_; uint8_t v_isSharedCheck_4187_; 
v_isSharedCheck_4187_ = !lean_is_exclusive(v___x_4180_);
if (v_isSharedCheck_4187_ == 0)
{
lean_object* v_unused_4188_; 
v_unused_4188_ = lean_ctor_get(v___x_4180_, 0);
lean_dec(v_unused_4188_);
v___x_4182_ = v___x_4180_;
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
else
{
lean_dec(v___x_4180_);
v___x_4182_ = lean_box(0);
v_isShared_4183_ = v_isSharedCheck_4187_;
goto v_resetjp_4181_;
}
v_resetjp_4181_:
{
lean_object* v___x_4185_; 
if (v_isShared_4183_ == 0)
{
lean_ctor_set_tag(v___x_4182_, 1);
lean_ctor_set(v___x_4182_, 0, v_a_4178_);
v___x_4185_ = v___x_4182_;
goto v_reusejp_4184_;
}
else
{
lean_object* v_reuseFailAlloc_4186_; 
v_reuseFailAlloc_4186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4186_, 0, v_a_4178_);
v___x_4185_ = v_reuseFailAlloc_4186_;
goto v_reusejp_4184_;
}
v_reusejp_4184_:
{
return v___x_4185_;
}
}
}
else
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4196_; 
lean_dec(v_a_4178_);
v_a_4189_ = lean_ctor_get(v___x_4180_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4180_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4191_ = v___x_4180_;
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v___x_4180_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4196_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
lean_object* v___x_4194_; 
if (v_isShared_4192_ == 0)
{
v___x_4194_ = v___x_4191_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v_a_4189_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
}
else
{
lean_object* v_a_4197_; lean_object* v___x_4199_; uint8_t v_isShared_4200_; uint8_t v_isSharedCheck_4204_; 
lean_dec_ref(v_x_4140_);
v_a_4197_ = lean_ctor_get(v___x_4150_, 0);
v_isSharedCheck_4204_ = !lean_is_exclusive(v___x_4150_);
if (v_isSharedCheck_4204_ == 0)
{
v___x_4199_ = v___x_4150_;
v_isShared_4200_ = v_isSharedCheck_4204_;
goto v_resetjp_4198_;
}
else
{
lean_inc(v_a_4197_);
lean_dec(v___x_4150_);
v___x_4199_ = lean_box(0);
v_isShared_4200_ = v_isSharedCheck_4204_;
goto v_resetjp_4198_;
}
v_resetjp_4198_:
{
lean_object* v___x_4202_; 
if (v_isShared_4200_ == 0)
{
v___x_4202_ = v___x_4199_;
goto v_reusejp_4201_;
}
else
{
lean_object* v_reuseFailAlloc_4203_; 
v_reuseFailAlloc_4203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4203_, 0, v_a_4197_);
v___x_4202_ = v_reuseFailAlloc_4203_;
goto v_reusejp_4201_;
}
v_reusejp_4201_:
{
return v___x_4202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg___boxed(lean_object* v_x_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
lean_object* v_res_4215_; 
v_res_4215_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v_x_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, v___y_4213_);
lean_dec(v___y_4213_);
lean_dec_ref(v___y_4212_);
lean_dec(v___y_4211_);
lean_dec_ref(v___y_4210_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
return v_res_4215_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(lean_object* v_00_u03b1_4216_, lean_object* v_x_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_){
_start:
{
lean_object* v___x_4227_; 
v___x_4227_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v_x_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
return v___x_4227_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___boxed(lean_object* v_00_u03b1_4228_, lean_object* v_x_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_){
_start:
{
lean_object* v_res_4239_; 
v_res_4239_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2(v_00_u03b1_4228_, v_x_4229_, v___y_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_);
lean_dec(v___y_4237_);
lean_dec_ref(v___y_4236_);
lean_dec(v___y_4235_);
lean_dec_ref(v___y_4234_);
lean_dec(v___y_4233_);
lean_dec_ref(v___y_4232_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4230_);
return v_res_4239_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(lean_object* v_a_4240_, uint8_t v___x_4241_, lean_object* v_as_4242_, lean_object* v_i_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
lean_object* v_zero_4249_; uint8_t v_isZero_4250_; 
v_zero_4249_ = lean_unsigned_to_nat(0u);
v_isZero_4250_ = lean_nat_dec_eq(v_i_4243_, v_zero_4249_);
if (v_isZero_4250_ == 1)
{
lean_object* v___x_4251_; lean_object* v___x_4252_; 
lean_dec(v_i_4243_);
lean_dec_ref(v_a_4240_);
v___x_4251_ = lean_box(0);
v___x_4252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4252_, 0, v___x_4251_);
return v___x_4252_;
}
else
{
lean_object* v_one_4253_; lean_object* v_n_4254_; lean_object* v___x_4255_; 
v_one_4253_ = lean_unsigned_to_nat(1u);
v_n_4254_ = lean_nat_sub(v_i_4243_, v_one_4253_);
lean_dec(v_i_4243_);
v___x_4255_ = lean_array_fget(v_as_4242_, v_n_4254_);
if (lean_obj_tag(v___x_4255_) == 0)
{
v_i_4243_ = v_n_4254_;
goto _start;
}
else
{
lean_object* v_val_4257_; lean_object* v___x_4259_; uint8_t v_isShared_4260_; uint8_t v_isSharedCheck_4288_; 
v_val_4257_ = lean_ctor_get(v___x_4255_, 0);
v_isSharedCheck_4288_ = !lean_is_exclusive(v___x_4255_);
if (v_isSharedCheck_4288_ == 0)
{
v___x_4259_ = v___x_4255_;
v_isShared_4260_ = v_isSharedCheck_4288_;
goto v_resetjp_4258_;
}
else
{
lean_inc(v_val_4257_);
lean_dec(v___x_4255_);
v___x_4259_ = lean_box(0);
v_isShared_4260_ = v_isSharedCheck_4288_;
goto v_resetjp_4258_;
}
v_resetjp_4258_:
{
lean_object* v___x_4261_; lean_object* v___x_4262_; 
v___x_4261_ = l_Lean_LocalDecl_type(v_val_4257_);
lean_inc_ref(v_a_4240_);
v___x_4262_ = l_Lean_Meta_isExprDefEq(v_a_4240_, v___x_4261_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_);
if (lean_obj_tag(v___x_4262_) == 0)
{
lean_object* v_a_4263_; lean_object* v___x_4265_; uint8_t v_isShared_4266_; uint8_t v_isSharedCheck_4279_; 
v_a_4263_ = lean_ctor_get(v___x_4262_, 0);
v_isSharedCheck_4279_ = !lean_is_exclusive(v___x_4262_);
if (v_isSharedCheck_4279_ == 0)
{
v___x_4265_ = v___x_4262_;
v_isShared_4266_ = v_isSharedCheck_4279_;
goto v_resetjp_4264_;
}
else
{
lean_inc(v_a_4263_);
lean_dec(v___x_4262_);
v___x_4265_ = lean_box(0);
v_isShared_4266_ = v_isSharedCheck_4279_;
goto v_resetjp_4264_;
}
v_resetjp_4264_:
{
uint8_t v___x_4267_; 
v___x_4267_ = l_Lean_LocalDecl_isImplementationDetail(v_val_4257_);
if (v___x_4267_ == 0)
{
if (v___x_4241_ == 0)
{
lean_del_object(v___x_4265_);
lean_dec(v_a_4263_);
lean_del_object(v___x_4259_);
lean_dec(v_val_4257_);
v_i_4243_ = v_n_4254_;
goto _start;
}
else
{
uint8_t v___x_4269_; 
v___x_4269_ = lean_unbox(v_a_4263_);
lean_dec(v_a_4263_);
if (v___x_4269_ == 0)
{
lean_del_object(v___x_4265_);
lean_del_object(v___x_4259_);
lean_dec(v_val_4257_);
v_i_4243_ = v_n_4254_;
goto _start;
}
else
{
lean_object* v___x_4271_; lean_object* v___x_4273_; 
lean_dec(v_n_4254_);
lean_dec_ref(v_a_4240_);
v___x_4271_ = l_Lean_LocalDecl_fvarId(v_val_4257_);
lean_dec(v_val_4257_);
if (v_isShared_4260_ == 0)
{
lean_ctor_set(v___x_4259_, 0, v___x_4271_);
v___x_4273_ = v___x_4259_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4277_; 
v_reuseFailAlloc_4277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4277_, 0, v___x_4271_);
v___x_4273_ = v_reuseFailAlloc_4277_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
lean_object* v___x_4275_; 
if (v_isShared_4266_ == 0)
{
lean_ctor_set(v___x_4265_, 0, v___x_4273_);
v___x_4275_ = v___x_4265_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v___x_4273_);
v___x_4275_ = v_reuseFailAlloc_4276_;
goto v_reusejp_4274_;
}
v_reusejp_4274_:
{
return v___x_4275_;
}
}
}
}
}
else
{
lean_del_object(v___x_4265_);
lean_dec(v_a_4263_);
lean_del_object(v___x_4259_);
lean_dec(v_val_4257_);
v_i_4243_ = v_n_4254_;
goto _start;
}
}
}
else
{
lean_object* v_a_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4287_; 
lean_del_object(v___x_4259_);
lean_dec(v_val_4257_);
lean_dec(v_n_4254_);
lean_dec_ref(v_a_4240_);
v_a_4280_ = lean_ctor_get(v___x_4262_, 0);
v_isSharedCheck_4287_ = !lean_is_exclusive(v___x_4262_);
if (v_isSharedCheck_4287_ == 0)
{
v___x_4282_ = v___x_4262_;
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_a_4280_);
lean_dec(v___x_4262_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4287_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v___x_4285_; 
if (v_isShared_4283_ == 0)
{
v___x_4285_ = v___x_4282_;
goto v_reusejp_4284_;
}
else
{
lean_object* v_reuseFailAlloc_4286_; 
v_reuseFailAlloc_4286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4286_, 0, v_a_4280_);
v___x_4285_ = v_reuseFailAlloc_4286_;
goto v_reusejp_4284_;
}
v_reusejp_4284_:
{
return v___x_4285_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_a_4289_, lean_object* v___x_4290_, lean_object* v_as_4291_, lean_object* v_i_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_){
_start:
{
uint8_t v___x_7239__boxed_4298_; lean_object* v_res_4299_; 
v___x_7239__boxed_4298_ = lean_unbox(v___x_4290_);
v_res_4299_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4289_, v___x_7239__boxed_4298_, v_as_4291_, v_i_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_);
lean_dec(v___y_4296_);
lean_dec_ref(v___y_4295_);
lean_dec(v___y_4294_);
lean_dec_ref(v___y_4293_);
lean_dec_ref(v_as_4291_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(lean_object* v_a_4300_, uint8_t v___x_4301_, lean_object* v_as_4302_, lean_object* v_i_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_){
_start:
{
lean_object* v_zero_4313_; uint8_t v_isZero_4314_; 
v_zero_4313_ = lean_unsigned_to_nat(0u);
v_isZero_4314_ = lean_nat_dec_eq(v_i_4303_, v_zero_4313_);
if (v_isZero_4314_ == 1)
{
lean_object* v___x_4315_; lean_object* v___x_4316_; 
lean_dec(v_i_4303_);
lean_dec_ref(v_a_4300_);
v___x_4315_ = lean_box(0);
v___x_4316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4316_, 0, v___x_4315_);
return v___x_4316_;
}
else
{
lean_object* v_one_4317_; lean_object* v_n_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; 
v_one_4317_ = lean_unsigned_to_nat(1u);
v_n_4318_ = lean_nat_sub(v_i_4303_, v_one_4317_);
lean_dec(v_i_4303_);
v___x_4319_ = lean_array_fget_borrowed(v_as_4302_, v_n_4318_);
lean_inc_ref(v_a_4300_);
v___x_4320_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_4300_, v___x_4301_, v___x_4319_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
if (lean_obj_tag(v___x_4320_) == 0)
{
lean_object* v_a_4321_; 
v_a_4321_ = lean_ctor_get(v___x_4320_, 0);
lean_inc(v_a_4321_);
if (lean_obj_tag(v_a_4321_) == 0)
{
lean_dec_ref(v___x_4320_);
v_i_4303_ = v_n_4318_;
goto _start;
}
else
{
lean_dec_ref(v_a_4321_);
lean_dec(v_n_4318_);
lean_dec_ref(v_a_4300_);
return v___x_4320_;
}
}
else
{
lean_dec(v_n_4318_);
lean_dec_ref(v_a_4300_);
return v___x_4320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(lean_object* v_a_4323_, uint8_t v___x_4324_, lean_object* v_x_4325_, lean_object* v___y_4326_, lean_object* v___y_4327_, lean_object* v___y_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_){
_start:
{
if (lean_obj_tag(v_x_4325_) == 0)
{
lean_object* v_cs_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; 
v_cs_4335_ = lean_ctor_get(v_x_4325_, 0);
v___x_4336_ = lean_array_get_size(v_cs_4335_);
v___x_4337_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_4323_, v___x_4324_, v_cs_4335_, v___x_4336_, v___y_4326_, v___y_4327_, v___y_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
return v___x_4337_;
}
else
{
lean_object* v_vs_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; 
v_vs_4338_ = lean_ctor_get(v_x_4325_, 0);
v___x_4339_ = lean_array_get_size(v_vs_4338_);
v___x_4340_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4323_, v___x_4324_, v_vs_4338_, v___x_4339_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
return v___x_4340_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4___boxed(lean_object* v_a_4341_, lean_object* v___x_4342_, lean_object* v_x_4343_, lean_object* v___y_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_){
_start:
{
uint8_t v___x_7334__boxed_4353_; lean_object* v_res_4354_; 
v___x_7334__boxed_4353_ = lean_unbox(v___x_4342_);
v_res_4354_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_4341_, v___x_7334__boxed_4353_, v_x_4343_, v___y_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_);
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
lean_dec(v___y_4349_);
lean_dec_ref(v___y_4348_);
lean_dec(v___y_4347_);
lean_dec_ref(v___y_4346_);
lean_dec(v___y_4345_);
lean_dec_ref(v___y_4344_);
lean_dec_ref(v_x_4343_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg___boxed(lean_object* v_a_4355_, lean_object* v___x_4356_, lean_object* v_as_4357_, lean_object* v_i_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_){
_start:
{
uint8_t v___x_7352__boxed_4368_; lean_object* v_res_4369_; 
v___x_7352__boxed_4368_ = lean_unbox(v___x_4356_);
v_res_4369_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_4355_, v___x_7352__boxed_4368_, v_as_4357_, v_i_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_);
lean_dec(v___y_4366_);
lean_dec_ref(v___y_4365_);
lean_dec(v___y_4364_);
lean_dec_ref(v___y_4363_);
lean_dec(v___y_4362_);
lean_dec_ref(v___y_4361_);
lean_dec(v___y_4360_);
lean_dec_ref(v___y_4359_);
lean_dec_ref(v_as_4357_);
return v_res_4369_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(lean_object* v_a_4370_, uint8_t v___x_4371_, lean_object* v_t_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_){
_start:
{
lean_object* v_root_4382_; lean_object* v_tail_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v_root_4382_ = lean_ctor_get(v_t_4372_, 0);
v_tail_4383_ = lean_ctor_get(v_t_4372_, 1);
v___x_4384_ = lean_array_get_size(v_tail_4383_);
lean_inc_ref(v_a_4370_);
v___x_4385_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4370_, v___x_4371_, v_tail_4383_, v___x_4384_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v_a_4386_; 
v_a_4386_ = lean_ctor_get(v___x_4385_, 0);
lean_inc(v_a_4386_);
if (lean_obj_tag(v_a_4386_) == 0)
{
lean_object* v___x_4387_; 
lean_dec_ref(v___x_4385_);
v___x_4387_ = l_Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4(v_a_4370_, v___x_4371_, v_root_4382_, v___y_4373_, v___y_4374_, v___y_4375_, v___y_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_);
return v___x_4387_;
}
else
{
lean_dec_ref(v_a_4386_);
lean_dec_ref(v_a_4370_);
return v___x_4385_;
}
}
else
{
lean_dec_ref(v_a_4370_);
return v___x_4385_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0___boxed(lean_object* v_a_4388_, lean_object* v___x_4389_, lean_object* v_t_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_){
_start:
{
uint8_t v___x_7431__boxed_4400_; lean_object* v_res_4401_; 
v___x_7431__boxed_4400_ = lean_unbox(v___x_4389_);
v_res_4401_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(v_a_4388_, v___x_7431__boxed_4400_, v_t_4390_, v___y_4391_, v___y_4392_, v___y_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_);
lean_dec(v___y_4398_);
lean_dec_ref(v___y_4397_);
lean_dec(v___y_4396_);
lean_dec_ref(v___y_4395_);
lean_dec(v___y_4394_);
lean_dec_ref(v___y_4393_);
lean_dec(v___y_4392_);
lean_dec_ref(v___y_4391_);
lean_dec_ref(v_t_4390_);
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(lean_object* v_a_4402_, uint8_t v___x_4403_, lean_object* v_lctx_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_){
_start:
{
lean_object* v_decls_4414_; lean_object* v___x_4415_; 
v_decls_4414_ = lean_ctor_get(v_lctx_4404_, 1);
v___x_4415_ = l_Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0(v_a_4402_, v___x_4403_, v_decls_4414_, v___y_4405_, v___y_4406_, v___y_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_);
return v___x_4415_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0___boxed(lean_object* v_a_4416_, lean_object* v___x_4417_, lean_object* v_lctx_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_){
_start:
{
uint8_t v___x_7474__boxed_4428_; lean_object* v_res_4429_; 
v___x_7474__boxed_4428_ = lean_unbox(v___x_4417_);
v_res_4429_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(v_a_4416_, v___x_7474__boxed_4428_, v_lctx_4418_, v___y_4419_, v___y_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_);
lean_dec(v___y_4426_);
lean_dec_ref(v___y_4425_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
lean_dec(v___y_4422_);
lean_dec_ref(v___y_4421_);
lean_dec(v___y_4420_);
lean_dec_ref(v___y_4419_);
lean_dec_ref(v_lctx_4418_);
return v_res_4429_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4430_; 
v___x_4430_ = lean_mk_string_unchecked("Failed to find a hypothesis with type", 37, 37);
return v___x_4430_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4431_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___lam__0___closed__0, &l_Lean_Elab_Tactic_evalRename___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__0);
v___x_4432_ = l_Lean_stringToMessageData(v___x_4431_);
return v___x_4432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0(lean_object* v___x_4433_, lean_object* v___x_4434_, uint8_t v___x_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_){
_start:
{
lean_object* v___x_4445_; 
v___x_4445_ = l_Lean_Elab_Tactic_elabTerm(v___x_4433_, v___x_4434_, v___x_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
if (lean_obj_tag(v___x_4445_) == 0)
{
lean_object* v_a_4446_; lean_object* v_lctx_4447_; lean_object* v___x_4448_; 
v_a_4446_ = lean_ctor_get(v___x_4445_, 0);
lean_inc_n(v_a_4446_, 2);
lean_dec_ref(v___x_4445_);
v_lctx_4447_ = lean_ctor_get(v___y_4440_, 2);
v___x_4448_ = l_Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0(v_a_4446_, v___x_4435_, v_lctx_4447_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
if (lean_obj_tag(v___x_4448_) == 0)
{
lean_object* v_a_4449_; lean_object* v___x_4451_; uint8_t v_isShared_4452_; uint8_t v_isSharedCheck_4461_; 
v_a_4449_ = lean_ctor_get(v___x_4448_, 0);
v_isSharedCheck_4461_ = !lean_is_exclusive(v___x_4448_);
if (v_isSharedCheck_4461_ == 0)
{
v___x_4451_ = v___x_4448_;
v_isShared_4452_ = v_isSharedCheck_4461_;
goto v_resetjp_4450_;
}
else
{
lean_inc(v_a_4449_);
lean_dec(v___x_4448_);
v___x_4451_ = lean_box(0);
v_isShared_4452_ = v_isSharedCheck_4461_;
goto v_resetjp_4450_;
}
v_resetjp_4450_:
{
if (lean_obj_tag(v_a_4449_) == 0)
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; 
lean_del_object(v___x_4451_);
v___x_4453_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___lam__0___closed__1, &l_Lean_Elab_Tactic_evalRename___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_evalRename___lam__0___closed__1);
v___x_4454_ = l_Lean_indentExpr(v_a_4446_);
v___x_4455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4455_, 0, v___x_4453_);
lean_ctor_set(v___x_4455_, 1, v___x_4454_);
v___x_4456_ = l_Lean_throwError___at___00Lean_Elab_Tactic_refineCore_spec__1___redArg(v___x_4455_, v___y_4440_, v___y_4441_, v___y_4442_, v___y_4443_);
return v___x_4456_;
}
else
{
lean_object* v_val_4457_; lean_object* v___x_4459_; 
lean_dec(v_a_4446_);
v_val_4457_ = lean_ctor_get(v_a_4449_, 0);
lean_inc(v_val_4457_);
lean_dec_ref(v_a_4449_);
if (v_isShared_4452_ == 0)
{
lean_ctor_set(v___x_4451_, 0, v_val_4457_);
v___x_4459_ = v___x_4451_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4460_; 
v_reuseFailAlloc_4460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4460_, 0, v_val_4457_);
v___x_4459_ = v_reuseFailAlloc_4460_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
return v___x_4459_;
}
}
}
}
else
{
lean_object* v_a_4462_; lean_object* v___x_4464_; uint8_t v_isShared_4465_; uint8_t v_isSharedCheck_4469_; 
lean_dec(v_a_4446_);
v_a_4462_ = lean_ctor_get(v___x_4448_, 0);
v_isSharedCheck_4469_ = !lean_is_exclusive(v___x_4448_);
if (v_isSharedCheck_4469_ == 0)
{
v___x_4464_ = v___x_4448_;
v_isShared_4465_ = v_isSharedCheck_4469_;
goto v_resetjp_4463_;
}
else
{
lean_inc(v_a_4462_);
lean_dec(v___x_4448_);
v___x_4464_ = lean_box(0);
v_isShared_4465_ = v_isSharedCheck_4469_;
goto v_resetjp_4463_;
}
v_resetjp_4463_:
{
lean_object* v___x_4467_; 
if (v_isShared_4465_ == 0)
{
v___x_4467_ = v___x_4464_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4468_; 
v_reuseFailAlloc_4468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4468_, 0, v_a_4462_);
v___x_4467_ = v_reuseFailAlloc_4468_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
return v___x_4467_;
}
}
}
}
else
{
lean_object* v_a_4470_; lean_object* v___x_4472_; uint8_t v_isShared_4473_; uint8_t v_isSharedCheck_4477_; 
v_a_4470_ = lean_ctor_get(v___x_4445_, 0);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4445_);
if (v_isSharedCheck_4477_ == 0)
{
v___x_4472_ = v___x_4445_;
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
else
{
lean_inc(v_a_4470_);
lean_dec(v___x_4445_);
v___x_4472_ = lean_box(0);
v_isShared_4473_ = v_isSharedCheck_4477_;
goto v_resetjp_4471_;
}
v_resetjp_4471_:
{
lean_object* v___x_4475_; 
if (v_isShared_4473_ == 0)
{
v___x_4475_ = v___x_4472_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v_a_4470_);
v___x_4475_ = v_reuseFailAlloc_4476_;
goto v_reusejp_4474_;
}
v_reusejp_4474_:
{
return v___x_4475_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__0___boxed(lean_object* v___x_4478_, lean_object* v___x_4479_, lean_object* v___x_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_){
_start:
{
uint8_t v___x_7516__boxed_4490_; lean_object* v_res_4491_; 
v___x_7516__boxed_4490_ = lean_unbox(v___x_4480_);
v_res_4491_ = l_Lean_Elab_Tactic_evalRename___lam__0(v___x_4478_, v___x_4479_, v___x_7516__boxed_4490_, v___y_4481_, v___y_4482_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_);
lean_dec(v___y_4488_);
lean_dec_ref(v___y_4487_);
lean_dec(v___y_4486_);
lean_dec_ref(v___y_4485_);
lean_dec(v___y_4484_);
lean_dec_ref(v___y_4483_);
lean_dec(v___y_4482_);
lean_dec_ref(v___y_4481_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1(lean_object* v___x_4492_, lean_object* v_h_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_){
_start:
{
lean_object* v___x_4503_; 
v___x_4503_ = l_Lean_withoutModifyingState___at___00Lean_Elab_Tactic_evalRename_spec__2___redArg(v___x_4492_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
if (lean_obj_tag(v___x_4503_) == 0)
{
lean_object* v_a_4504_; lean_object* v___x_4505_; 
v_a_4504_ = lean_ctor_get(v___x_4503_, 0);
lean_inc(v_a_4504_);
lean_dec_ref(v___x_4503_);
v___x_4505_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_4495_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
if (lean_obj_tag(v___x_4505_) == 0)
{
lean_object* v_a_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; 
v_a_4506_ = lean_ctor_get(v___x_4505_, 0);
lean_inc(v_a_4506_);
lean_dec_ref(v___x_4505_);
v___x_4507_ = l_Lean_TSyntax_getId(v_h_4493_);
v___x_4508_ = l_Lean_MVarId_rename(v_a_4506_, v_a_4504_, v___x_4507_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
if (lean_obj_tag(v___x_4508_) == 0)
{
lean_object* v_a_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; 
v_a_4509_ = lean_ctor_get(v___x_4508_, 0);
lean_inc(v_a_4509_);
lean_dec_ref(v___x_4508_);
v___x_4510_ = lean_box(0);
v___x_4511_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4511_, 0, v_a_4509_);
lean_ctor_set(v___x_4511_, 1, v___x_4510_);
v___x_4512_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_4511_, v___y_4495_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
return v___x_4512_;
}
else
{
lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4520_; 
v_a_4513_ = lean_ctor_get(v___x_4508_, 0);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4508_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4515_ = v___x_4508_;
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4508_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4520_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4518_; 
if (v_isShared_4516_ == 0)
{
v___x_4518_ = v___x_4515_;
goto v_reusejp_4517_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_a_4513_);
v___x_4518_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4517_;
}
v_reusejp_4517_:
{
return v___x_4518_;
}
}
}
}
else
{
lean_object* v_a_4521_; lean_object* v___x_4523_; uint8_t v_isShared_4524_; uint8_t v_isSharedCheck_4528_; 
lean_dec(v_a_4504_);
v_a_4521_ = lean_ctor_get(v___x_4505_, 0);
v_isSharedCheck_4528_ = !lean_is_exclusive(v___x_4505_);
if (v_isSharedCheck_4528_ == 0)
{
v___x_4523_ = v___x_4505_;
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
else
{
lean_inc(v_a_4521_);
lean_dec(v___x_4505_);
v___x_4523_ = lean_box(0);
v_isShared_4524_ = v_isSharedCheck_4528_;
goto v_resetjp_4522_;
}
v_resetjp_4522_:
{
lean_object* v___x_4526_; 
if (v_isShared_4524_ == 0)
{
v___x_4526_ = v___x_4523_;
goto v_reusejp_4525_;
}
else
{
lean_object* v_reuseFailAlloc_4527_; 
v_reuseFailAlloc_4527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4527_, 0, v_a_4521_);
v___x_4526_ = v_reuseFailAlloc_4527_;
goto v_reusejp_4525_;
}
v_reusejp_4525_:
{
return v___x_4526_;
}
}
}
}
else
{
lean_object* v_a_4529_; lean_object* v___x_4531_; uint8_t v_isShared_4532_; uint8_t v_isSharedCheck_4536_; 
v_a_4529_ = lean_ctor_get(v___x_4503_, 0);
v_isSharedCheck_4536_ = !lean_is_exclusive(v___x_4503_);
if (v_isSharedCheck_4536_ == 0)
{
v___x_4531_ = v___x_4503_;
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
else
{
lean_inc(v_a_4529_);
lean_dec(v___x_4503_);
v___x_4531_ = lean_box(0);
v_isShared_4532_ = v_isSharedCheck_4536_;
goto v_resetjp_4530_;
}
v_resetjp_4530_:
{
lean_object* v___x_4534_; 
if (v_isShared_4532_ == 0)
{
v___x_4534_ = v___x_4531_;
goto v_reusejp_4533_;
}
else
{
lean_object* v_reuseFailAlloc_4535_; 
v_reuseFailAlloc_4535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4535_, 0, v_a_4529_);
v___x_4534_ = v_reuseFailAlloc_4535_;
goto v_reusejp_4533_;
}
v_reusejp_4533_:
{
return v___x_4534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___lam__1___boxed(lean_object* v___x_4537_, lean_object* v_h_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_){
_start:
{
lean_object* v_res_4548_; 
v_res_4548_ = l_Lean_Elab_Tactic_evalRename___lam__1(v___x_4537_, v_h_4538_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
lean_dec(v___y_4546_);
lean_dec_ref(v___y_4545_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
lean_dec(v___y_4542_);
lean_dec_ref(v___y_4541_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
lean_dec(v_h_4538_);
return v_res_4548_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___closed__0(void){
_start:
{
lean_object* v___x_4549_; 
v___x_4549_ = lean_mk_string_unchecked("rename", 6, 6);
return v___x_4549_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___closed__1(void){
_start:
{
lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; lean_object* v___x_4554_; 
v___x_4550_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___closed__0, &l_Lean_Elab_Tactic_evalRename___closed__0_once, _init_l_Lean_Elab_Tactic_evalRename___closed__0);
v___x_4551_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_4552_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__1, &l_Lean_Elab_Tactic_evalExact___closed__1_once, _init_l_Lean_Elab_Tactic_evalExact___closed__1);
v___x_4553_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_4554_ = l_Lean_Name_mkStr4(v___x_4553_, v___x_4552_, v___x_4551_, v___x_4550_);
return v___x_4554_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___closed__2(void){
_start:
{
lean_object* v___x_4555_; 
v___x_4555_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_4555_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_evalRename___closed__3(void){
_start:
{
lean_object* v___x_4556_; lean_object* v___x_4557_; 
v___x_4556_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___closed__2, &l_Lean_Elab_Tactic_evalRename___closed__2_once, _init_l_Lean_Elab_Tactic_evalRename___closed__2);
v___x_4557_ = l_Lean_Name_mkStr1(v___x_4556_);
return v___x_4557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename(lean_object* v_stx_4558_, lean_object* v_a_4559_, lean_object* v_a_4560_, lean_object* v_a_4561_, lean_object* v_a_4562_, lean_object* v_a_4563_, lean_object* v_a_4564_, lean_object* v_a_4565_, lean_object* v_a_4566_){
_start:
{
lean_object* v___x_4568_; uint8_t v___x_4569_; 
v___x_4568_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___closed__1, &l_Lean_Elab_Tactic_evalRename___closed__1_once, _init_l_Lean_Elab_Tactic_evalRename___closed__1);
lean_inc(v_stx_4558_);
v___x_4569_ = l_Lean_Syntax_isOfKind(v_stx_4558_, v___x_4568_);
if (v___x_4569_ == 0)
{
lean_object* v___x_4570_; 
lean_dec(v_stx_4558_);
v___x_4570_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_4570_;
}
else
{
lean_object* v___x_4571_; lean_object* v_h_4572_; lean_object* v___x_4573_; uint8_t v___x_4574_; 
v___x_4571_ = lean_unsigned_to_nat(3u);
v_h_4572_ = l_Lean_Syntax_getArg(v_stx_4558_, v___x_4571_);
v___x_4573_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___closed__3, &l_Lean_Elab_Tactic_evalRename___closed__3_once, _init_l_Lean_Elab_Tactic_evalRename___closed__3);
lean_inc(v_h_4572_);
v___x_4574_ = l_Lean_Syntax_isOfKind(v_h_4572_, v___x_4573_);
if (v___x_4574_ == 0)
{
lean_object* v___x_4575_; 
lean_dec(v_h_4572_);
lean_dec(v_stx_4558_);
v___x_4575_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_evalExact_spec__0___redArg();
return v___x_4575_;
}
else
{
lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; lean_object* v___f_4580_; lean_object* v___x_4581_; uint8_t v___x_4582_; lean_object* v___x_4583_; lean_object* v___x_4584_; lean_object* v___f_4585_; lean_object* v___x_4586_; 
v___x_4576_ = lean_unsigned_to_nat(1u);
v___x_4577_ = l_Lean_Syntax_getArg(v_stx_4558_, v___x_4576_);
lean_dec(v_stx_4558_);
v___x_4578_ = lean_box(0);
v___x_4579_ = lean_box(v___x_4574_);
v___f_4580_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___lam__0___boxed), 12, 3);
lean_closure_set(v___f_4580_, 0, v___x_4577_);
lean_closure_set(v___f_4580_, 1, v___x_4578_);
lean_closure_set(v___f_4580_, 2, v___x_4579_);
v___x_4581_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_withoutRecover___boxed), 11, 2);
lean_closure_set(v___x_4581_, 0, lean_box(0));
lean_closure_set(v___x_4581_, 1, v___f_4580_);
v___x_4582_ = 0;
v___x_4583_ = lean_box(v___x_4582_);
v___x_4584_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_evalRename_spec__1___boxed), 12, 3);
lean_closure_set(v___x_4584_, 0, lean_box(0));
lean_closure_set(v___x_4584_, 1, v___x_4581_);
lean_closure_set(v___x_4584_, 2, v___x_4583_);
v___f_4585_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___lam__1___boxed), 11, 2);
lean_closure_set(v___f_4585_, 0, v___x_4584_);
lean_closure_set(v___f_4585_, 1, v_h_4572_);
v___x_4586_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___f_4585_, v_a_4559_, v_a_4560_, v_a_4561_, v_a_4562_, v_a_4563_, v_a_4564_, v_a_4565_, v_a_4566_);
return v___x_4586_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_evalRename___boxed(lean_object* v_stx_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_, lean_object* v_a_4591_, lean_object* v_a_4592_, lean_object* v_a_4593_, lean_object* v_a_4594_, lean_object* v_a_4595_, lean_object* v_a_4596_){
_start:
{
lean_object* v_res_4597_; 
v_res_4597_ = l_Lean_Elab_Tactic_evalRename(v_stx_4587_, v_a_4588_, v_a_4589_, v_a_4590_, v_a_4591_, v_a_4592_, v_a_4593_, v_a_4594_, v_a_4595_);
lean_dec(v_a_4595_);
lean_dec_ref(v_a_4594_);
lean_dec(v_a_4593_);
lean_dec_ref(v_a_4592_);
lean_dec(v_a_4591_);
lean_dec_ref(v_a_4590_);
lean_dec(v_a_4589_);
lean_dec_ref(v_a_4588_);
return v_res_4597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(lean_object* v_a_4598_, uint8_t v___x_4599_, lean_object* v_as_4600_, lean_object* v_i_4601_, lean_object* v_a_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v___x_4612_; 
v___x_4612_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___redArg(v_a_4598_, v___x_4599_, v_as_4600_, v_i_4601_, v___y_4607_, v___y_4608_, v___y_4609_, v___y_4610_);
return v___x_4612_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3___boxed(lean_object* v_a_4613_, lean_object* v___x_4614_, lean_object* v_as_4615_, lean_object* v_i_4616_, lean_object* v_a_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_, lean_object* v___y_4621_, lean_object* v___y_4622_, lean_object* v___y_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_){
_start:
{
uint8_t v___x_7785__boxed_4627_; lean_object* v_res_4628_; 
v___x_7785__boxed_4627_ = lean_unbox(v___x_4614_);
v_res_4628_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__3(v_a_4613_, v___x_7785__boxed_4627_, v_as_4615_, v_i_4616_, v_a_4617_, v___y_4618_, v___y_4619_, v___y_4620_, v___y_4621_, v___y_4622_, v___y_4623_, v___y_4624_, v___y_4625_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
lean_dec(v___y_4623_);
lean_dec_ref(v___y_4622_);
lean_dec(v___y_4621_);
lean_dec_ref(v___y_4620_);
lean_dec(v___y_4619_);
lean_dec_ref(v___y_4618_);
lean_dec_ref(v_as_4615_);
return v_res_4628_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(lean_object* v_a_4629_, uint8_t v___x_4630_, lean_object* v_as_4631_, lean_object* v_i_4632_, lean_object* v_a_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_){
_start:
{
lean_object* v___x_4643_; 
v___x_4643_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___redArg(v_a_4629_, v___x_4630_, v_as_4631_, v_i_4632_, v___y_4634_, v___y_4635_, v___y_4636_, v___y_4637_, v___y_4638_, v___y_4639_, v___y_4640_, v___y_4641_);
return v___x_4643_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5___boxed(lean_object* v_a_4644_, lean_object* v___x_4645_, lean_object* v_as_4646_, lean_object* v_i_4647_, lean_object* v_a_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_, lean_object* v___y_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_, lean_object* v___y_4657_){
_start:
{
uint8_t v___x_7823__boxed_4658_; lean_object* v_res_4659_; 
v___x_7823__boxed_4658_ = lean_unbox(v___x_4645_);
v_res_4659_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find___at___00Lean_PersistentArray_findSomeRevMAux___at___00Lean_PersistentArray_findSomeRevM_x3f___at___00Lean_LocalContext_findDeclRevM_x3f___at___00Lean_Elab_Tactic_evalRename_spec__0_spec__0_spec__4_spec__5(v_a_4644_, v___x_7823__boxed_4658_, v_as_4646_, v_i_4647_, v_a_4648_, v___y_4649_, v___y_4650_, v___y_4651_, v___y_4652_, v___y_4653_, v___y_4654_, v___y_4655_, v___y_4656_);
lean_dec(v___y_4656_);
lean_dec_ref(v___y_4655_);
lean_dec(v___y_4654_);
lean_dec_ref(v___y_4653_);
lean_dec(v___y_4652_);
lean_dec_ref(v___y_4651_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec_ref(v_as_4646_);
return v_res_4659_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0(void){
_start:
{
lean_object* v___x_4660_; 
v___x_4660_ = lean_mk_string_unchecked("evalRename", 10, 10);
return v___x_4660_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1(void){
_start:
{
lean_object* v___x_4661_; lean_object* v___x_4662_; lean_object* v___x_4663_; lean_object* v___x_4664_; lean_object* v___x_4665_; 
v___x_4661_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__0);
v___x_4662_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__2, &l_Lean_Elab_Tactic_evalExact___closed__2_once, _init_l_Lean_Elab_Tactic_evalExact___closed__2);
v___x_4663_ = lean_obj_once(&l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1, &l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_Term_withoutTacticIncrementality___at___00Lean_Elab_Tactic_runTermElab_spec__1___redArg___closed__1);
v___x_4664_ = lean_obj_once(&l_Lean_Elab_Tactic_evalExact___closed__0, &l_Lean_Elab_Tactic_evalExact___closed__0_once, _init_l_Lean_Elab_Tactic_evalExact___closed__0);
v___x_4665_ = l_Lean_Name_mkStr4(v___x_4664_, v___x_4663_, v___x_4662_, v___x_4661_);
return v___x_4665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1(){
_start:
{
lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v___x_4667_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4668_ = lean_obj_once(&l_Lean_Elab_Tactic_evalRename___closed__1, &l_Lean_Elab_Tactic_evalRename___closed__1_once, _init_l_Lean_Elab_Tactic_evalRename___closed__1);
v___x_4669_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1);
v___x_4670_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalRename___boxed), 10, 0);
v___x_4671_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4667_, v___x_4668_, v___x_4669_, v___x_4670_);
return v___x_4671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___boxed(lean_object* v_a_4672_){
_start:
{
lean_object* v_res_4673_; 
v_res_4673_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
return v_res_4673_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0(void){
_start:
{
lean_object* v___x_4674_; lean_object* v___x_4675_; lean_object* v___x_4676_; 
v___x_4674_ = lean_unsigned_to_nat(44u);
v___x_4675_ = lean_unsigned_to_nat(344u);
v___x_4676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4676_, 0, v___x_4675_);
lean_ctor_set(v___x_4676_, 1, v___x_4674_);
return v___x_4676_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1(void){
_start:
{
lean_object* v___x_4677_; lean_object* v___x_4678_; lean_object* v___x_4679_; 
v___x_4677_ = lean_unsigned_to_nat(31u);
v___x_4678_ = lean_unsigned_to_nat(359u);
v___x_4679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4679_, 0, v___x_4678_);
lean_ctor_set(v___x_4679_, 1, v___x_4677_);
return v___x_4679_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2(void){
_start:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; 
v___x_4680_ = lean_unsigned_to_nat(31u);
v___x_4681_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__1);
v___x_4682_ = lean_unsigned_to_nat(44u);
v___x_4683_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__0);
v___x_4684_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4684_, 0, v___x_4683_);
lean_ctor_set(v___x_4684_, 1, v___x_4682_);
lean_ctor_set(v___x_4684_, 2, v___x_4681_);
lean_ctor_set(v___x_4684_, 3, v___x_4680_);
return v___x_4684_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3(void){
_start:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; 
v___x_4685_ = lean_unsigned_to_nat(48u);
v___x_4686_ = lean_unsigned_to_nat(344u);
v___x_4687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4687_, 0, v___x_4686_);
lean_ctor_set(v___x_4687_, 1, v___x_4685_);
return v___x_4687_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4(void){
_start:
{
lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; 
v___x_4688_ = lean_unsigned_to_nat(58u);
v___x_4689_ = lean_unsigned_to_nat(344u);
v___x_4690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4689_);
lean_ctor_set(v___x_4690_, 1, v___x_4688_);
return v___x_4690_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5(void){
_start:
{
lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; 
v___x_4691_ = lean_unsigned_to_nat(58u);
v___x_4692_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__4);
v___x_4693_ = lean_unsigned_to_nat(48u);
v___x_4694_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__3);
v___x_4695_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4695_, 0, v___x_4694_);
lean_ctor_set(v___x_4695_, 1, v___x_4693_);
lean_ctor_set(v___x_4695_, 2, v___x_4692_);
lean_ctor_set(v___x_4695_, 3, v___x_4691_);
return v___x_4695_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6(void){
_start:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; 
v___x_4696_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__5);
v___x_4697_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__2);
v___x_4698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4698_, 0, v___x_4697_);
lean_ctor_set(v___x_4698_, 1, v___x_4696_);
return v___x_4698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3(){
_start:
{
lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4700_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1___closed__1);
v___x_4701_ = lean_obj_once(&l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6, &l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6_once, _init_l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___closed__6);
v___x_4702_ = l_Lean_addBuiltinDeclarationRanges(v___x_4700_, v___x_4701_);
return v___x_4702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3___boxed(lean_object* v_a_4703_){
_start:
{
lean_object* v_res_4704_; 
v_res_4704_ = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
return v_res_4704_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Rename(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Rename(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalExact___regBuiltin_Lean_Elab_Tactic_evalExact_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine___regBuiltin_Lean_Elab_Tactic_evalRefine_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRefine_x27___regBuiltin_Lean_Elab_Tactic_evalRefine_x27_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalSpecialize___regBuiltin_Lean_Elab_Tactic_evalSpecialize_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_getFVarIds___boxed__const__1 = _init_l_Lean_Elab_Tactic_getFVarIds___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_Tactic_getFVarIds___boxed__const__1);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalApply___regBuiltin_Lean_Elab_Tactic_evalApply_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalConstructor___regBuiltin_Lean_Elab_Tactic_evalConstructor_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducible___regBuiltin_Lean_Elab_Tactic_evalWithReducible_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithReducibleAndInstances___regBuiltin_Lean_Elab_Tactic_evalWithReducibleAndInstances_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingAll___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingAll_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalWithUnfoldingNone___regBuiltin_Lean_Elab_Tactic_evalWithUnfoldingNone__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_ElabTerm_0__Lean_Elab_Tactic_evalRename___regBuiltin_Lean_Elab_Tactic_evalRename_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Constructor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Rename(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Config(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_ElabTerm(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Constructor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Rename(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_ElabTerm(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_ElabTerm(builtin);
}
#ifdef __cplusplus
}
#endif
