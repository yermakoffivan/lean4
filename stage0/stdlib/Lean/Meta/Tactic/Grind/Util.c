// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Util
// Imports: public import Lean.Meta.Tactic.Simp.Simproc import Init.Simproc import Lean.Meta.Tactic.Clear import Lean.Meta.Sym.Util public import Init.Grind.Config import Init.Grind.Util import Lean.Structure
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalContext_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_getStructureInfo_x3f(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_mkProjection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFalse(lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_isProj___boxed(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_isMData___boxed(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isAuxDecl(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_Simprocs_add(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Simp_registerBuiltinDSimproc(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_ensureNoMVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_ensureNoMVar___closed__0;
static lean_once_cell_t l_Lean_MVarId_ensureNoMVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_ensureNoMVar___closed__1;
static lean_once_cell_t l_Lean_MVarId_ensureNoMVar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_ensureNoMVar___closed__2;
static lean_once_cell_t l_Lean_MVarId_ensureNoMVar___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_ensureNoMVar___closed__3;
static lean_once_cell_t l_Lean_MVarId_ensureNoMVar___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_ensureNoMVar___closed__4;
static lean_once_cell_t l_Lean_MVarId_ensureNoMVar___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_ensureNoMVar___closed__5;
LEAN_EXPORT lean_object* l_Lean_MVarId_ensureNoMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_ensureNoMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__0;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__1;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__2;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__3;
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__0;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__1;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__2;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__3;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_instantiateGoalMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_instantiateGoalMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_unfoldReducible___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_unfoldReducible___closed__0;
LEAN_EXPORT lean_object* l_Lean_MVarId_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_unfoldReducible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_betaReduce___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_betaReduce___closed__0;
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___lam__0___closed__3;
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___lam__0___closed__4;
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___lam__0___closed__5;
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___closed__0;
static lean_once_cell_t l_Lean_MVarId_byContra_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byContra_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__0;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__1;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__2;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__3;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__4;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__5;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_clearImplDetails___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clearImplDetails___closed__0;
static lean_once_cell_t l_Lean_MVarId_clearImplDetails___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_clearImplDetails___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_eraseIrrelevantMData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_eraseIrrelevantMData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_eraseIrrelevantMData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__9;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__10;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__11;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__12;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__13;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___closed__14;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__9(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_foldProjs___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_foldProjs___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_normalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_markAsMatchCond___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsMatchCond___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_markAsMatchCond___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsMatchCond___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_markAsMatchCond___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsMatchCond___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_markAsMatchCond___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsMatchCond___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_markAsMatchCond___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsMatchCond___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_markAsMatchCond(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isMatchCond(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isMatchCond___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_markAsPreMatchCond___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsPreMatchCond___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_markAsPreMatchCond___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsPreMatchCond___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_markAsPreMatchCond___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_markAsPreMatchCond___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_markAsPreMatchCond(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isPreMatchCond(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isPreMatchCond___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__0_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__0_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__1_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__1_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__3_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__3_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__4_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__4_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addPreMatchCondSimproc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addPreMatchCondSimproc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_replacePreMatchCond___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_replacePreMatchCond___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_replacePreMatchCond___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_replacePreMatchCond___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_replacePreMatchCond___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_replacePreMatchCond___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_isIte___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isIte___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_isIte___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isIte___closed__1;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isIte(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isIte___boxed(lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_isDIte___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isDIte___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_isDIte___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_isDIte___closed__1;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isDIte(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDIte___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getBinOp(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getBinOp___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = l_Lean_Expr_hasMVar(v_e_1_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
v___x_6_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6_, 0, v_e_1_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v_mctx_9_; lean_object* v___x_10_; lean_object* v_fst_11_; lean_object* v_snd_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v_cache_15_; lean_object* v_zetaDeltaFVarIds_16_; lean_object* v_postponed_17_; lean_object* v_diag_18_; lean_object* v___x_20_; uint8_t v_isShared_21_; uint8_t v_isSharedCheck_27_; 
v___x_7_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_7_);
v___x_8_ = lean_st_ref_get(v___y_2_);
v_mctx_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc_ref(v_mctx_9_);
lean_dec(v___x_8_);
v___x_10_ = l_Lean_instantiateMVarsCore(v_mctx_9_, v_e_1_);
v_fst_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_fst_11_);
v_snd_12_ = lean_ctor_get(v___x_10_, 1);
lean_inc(v_snd_12_);
lean_dec_ref(v___x_10_);
v___x_13_ = lean_st_ref_get(v___y_3_);
lean_dec(v___x_13_);
v___x_14_ = lean_st_ref_take(v___y_2_);
v_cache_15_ = lean_ctor_get(v___x_14_, 1);
v_zetaDeltaFVarIds_16_ = lean_ctor_get(v___x_14_, 2);
v_postponed_17_ = lean_ctor_get(v___x_14_, 3);
v_diag_18_ = lean_ctor_get(v___x_14_, 4);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_14_);
if (v_isSharedCheck_27_ == 0)
{
lean_object* v_unused_28_; 
v_unused_28_ = lean_ctor_get(v___x_14_, 0);
lean_dec(v_unused_28_);
v___x_20_ = v___x_14_;
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
else
{
lean_inc(v_diag_18_);
lean_inc(v_postponed_17_);
lean_inc(v_zetaDeltaFVarIds_16_);
lean_inc(v_cache_15_);
lean_dec(v___x_14_);
v___x_20_ = lean_box(0);
v_isShared_21_ = v_isSharedCheck_27_;
goto v_resetjp_19_;
}
v_resetjp_19_:
{
lean_object* v___x_23_; 
if (v_isShared_21_ == 0)
{
lean_ctor_set(v___x_20_, 0, v_snd_12_);
v___x_23_ = v___x_20_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_snd_12_);
lean_ctor_set(v_reuseFailAlloc_26_, 1, v_cache_15_);
lean_ctor_set(v_reuseFailAlloc_26_, 2, v_zetaDeltaFVarIds_16_);
lean_ctor_set(v_reuseFailAlloc_26_, 3, v_postponed_17_);
lean_ctor_set(v_reuseFailAlloc_26_, 4, v_diag_18_);
v___x_23_ = v_reuseFailAlloc_26_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = lean_st_ref_set(v___y_2_, v___x_23_);
v___x_25_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_25_, 0, v_fst_11_);
return v___x_25_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_e_34_, v___y_36_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l_Lean_MVarId_ensureNoMVar___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("grind", 5, 5);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_MVarId_ensureNoMVar___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__0, &l_Lean_MVarId_ensureNoMVar___closed__0_once, _init_l_Lean_MVarId_ensureNoMVar___closed__0);
v___x_50_ = l_Lean_Name_mkStr1(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_MVarId_ensureNoMVar___closed__2(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_mk_string_unchecked("goal contains metavariables", 27, 27);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_MVarId_ensureNoMVar___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__2, &l_Lean_MVarId_ensureNoMVar___closed__2_once, _init_l_Lean_MVarId_ensureNoMVar___closed__2);
v___x_53_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_MVarId_ensureNoMVar___closed__4(void){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__3, &l_Lean_MVarId_ensureNoMVar___closed__3_once, _init_l_Lean_MVarId_ensureNoMVar___closed__3);
v___x_55_ = l_Lean_MessageData_ofFormat(v___x_54_);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_MVarId_ensureNoMVar___closed__5(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__4, &l_Lean_MVarId_ensureNoMVar___closed__4_once, _init_l_Lean_MVarId_ensureNoMVar___closed__4);
v___x_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_ensureNoMVar(lean_object* v_mvarId_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v___x_64_; 
lean_inc(v_mvarId_58_);
v___x_64_ = l_Lean_MVarId_getType(v_mvarId_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_66_; lean_object* v_a_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_79_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc(v_a_65_);
lean_dec_ref(v___x_64_);
v___x_66_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_a_65_, v_a_60_, v_a_62_);
v_a_67_ = lean_ctor_get(v___x_66_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v___x_66_);
if (v_isSharedCheck_79_ == 0)
{
v___x_69_ = v___x_66_;
v_isShared_70_ = v_isSharedCheck_79_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_a_67_);
lean_dec(v___x_66_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_79_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
uint8_t v___x_71_; 
v___x_71_ = l_Lean_Expr_hasExprMVar(v_a_67_);
lean_dec(v_a_67_);
if (v___x_71_ == 0)
{
lean_object* v___x_72_; lean_object* v___x_74_; 
lean_dec(v_mvarId_58_);
v___x_72_ = lean_box(0);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 0, v___x_72_);
v___x_74_ = v___x_69_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_72_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
else
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
lean_del_object(v___x_69_);
v___x_76_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__1, &l_Lean_MVarId_ensureNoMVar___closed__1_once, _init_l_Lean_MVarId_ensureNoMVar___closed__1);
v___x_77_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__5, &l_Lean_MVarId_ensureNoMVar___closed__5_once, _init_l_Lean_MVarId_ensureNoMVar___closed__5);
v___x_78_ = l_Lean_Meta_throwTacticEx___redArg(v___x_76_, v_mvarId_58_, v___x_77_, v_a_59_, v_a_60_, v_a_61_, v_a_62_);
return v___x_78_;
}
}
}
else
{
lean_object* v_a_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_87_; 
lean_dec(v_mvarId_58_);
v_a_80_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_87_ == 0)
{
v___x_82_ = v___x_64_;
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_a_80_);
lean_dec(v___x_64_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_87_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v_a_80_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_ensureNoMVar___boxed(lean_object* v_mvarId_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_MVarId_ensureNoMVar(v_mvarId_88_, v_a_89_, v_a_90_, v_a_91_, v_a_92_);
lean_dec(v_a_92_);
lean_dec_ref(v_a_91_);
lean_dec(v_a_90_);
lean_dec_ref(v_a_89_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10_spec__12___redArg(lean_object* v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_, lean_object* v_x_98_){
_start:
{
lean_object* v_ks_99_; lean_object* v_vs_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_124_; 
v_ks_99_ = lean_ctor_get(v_x_95_, 0);
v_vs_100_ = lean_ctor_get(v_x_95_, 1);
v_isSharedCheck_124_ = !lean_is_exclusive(v_x_95_);
if (v_isSharedCheck_124_ == 0)
{
v___x_102_ = v_x_95_;
v_isShared_103_ = v_isSharedCheck_124_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_vs_100_);
lean_inc(v_ks_99_);
lean_dec(v_x_95_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_124_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_104_; uint8_t v___x_105_; 
v___x_104_ = lean_array_get_size(v_ks_99_);
v___x_105_ = lean_nat_dec_lt(v_x_96_, v___x_104_);
if (v___x_105_ == 0)
{
lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_109_; 
lean_dec(v_x_96_);
v___x_106_ = lean_array_push(v_ks_99_, v_x_97_);
v___x_107_ = lean_array_push(v_vs_100_, v_x_98_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_107_);
lean_ctor_set(v___x_102_, 0, v___x_106_);
v___x_109_ = v___x_102_;
goto v_reusejp_108_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_106_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___x_107_);
v___x_109_ = v_reuseFailAlloc_110_;
goto v_reusejp_108_;
}
v_reusejp_108_:
{
return v___x_109_;
}
}
else
{
lean_object* v_k_x27_111_; uint8_t v___x_112_; 
v_k_x27_111_ = lean_array_fget_borrowed(v_ks_99_, v_x_96_);
v___x_112_ = l_Lean_instBEqMVarId_beq(v_x_97_, v_k_x27_111_);
if (v___x_112_ == 0)
{
lean_object* v___x_114_; 
if (v_isShared_103_ == 0)
{
v___x_114_ = v___x_102_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_ks_99_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v_vs_100_);
v___x_114_ = v_reuseFailAlloc_118_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; 
v___x_115_ = lean_unsigned_to_nat(1u);
v___x_116_ = lean_nat_add(v_x_96_, v___x_115_);
lean_dec(v_x_96_);
v_x_95_ = v___x_114_;
v_x_96_ = v___x_116_;
goto _start;
}
}
else
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_119_ = lean_array_fset(v_ks_99_, v_x_96_, v_x_97_);
v___x_120_ = lean_array_fset(v_vs_100_, v_x_96_, v_x_98_);
lean_dec(v_x_96_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 1, v___x_120_);
lean_ctor_set(v___x_102_, 0, v___x_119_);
v___x_122_ = v___x_102_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_123_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
return v___x_122_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10___redArg(lean_object* v_n_125_, lean_object* v_k_126_, lean_object* v_v_127_){
_start:
{
lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_128_ = lean_unsigned_to_nat(0u);
v___x_129_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10_spec__12___redArg(v_n_125_, v___x_128_, v_k_126_, v_v_127_);
return v___x_129_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_130_; size_t v___x_131_; size_t v___x_132_; 
v___x_130_ = ((size_t)5ULL);
v___x_131_ = ((size_t)1ULL);
v___x_132_ = lean_usize_shift_left(v___x_131_, v___x_130_);
return v___x_132_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_133_; size_t v___x_134_; size_t v___x_135_; 
v___x_133_ = ((size_t)1ULL);
v___x_134_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__0);
v___x_135_ = lean_usize_sub(v___x_134_, v___x_133_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg(lean_object* v_x_137_, size_t v_x_138_, size_t v_x_139_, lean_object* v_x_140_, lean_object* v_x_141_){
_start:
{
if (lean_obj_tag(v_x_137_) == 0)
{
lean_object* v_es_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; size_t v___x_146_; lean_object* v_j_147_; lean_object* v___x_148_; uint8_t v___x_149_; 
v_es_142_ = lean_ctor_get(v_x_137_, 0);
v___x_143_ = ((size_t)5ULL);
v___x_144_ = ((size_t)1ULL);
v___x_145_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__1);
v___x_146_ = lean_usize_land(v_x_138_, v___x_145_);
v_j_147_ = lean_usize_to_nat(v___x_146_);
v___x_148_ = lean_array_get_size(v_es_142_);
v___x_149_ = lean_nat_dec_lt(v_j_147_, v___x_148_);
if (v___x_149_ == 0)
{
lean_dec(v_j_147_);
lean_dec(v_x_141_);
lean_dec(v_x_140_);
return v_x_137_;
}
else
{
lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_186_; 
lean_inc_ref(v_es_142_);
v_isSharedCheck_186_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; 
v_unused_187_ = lean_ctor_get(v_x_137_, 0);
lean_dec(v_unused_187_);
v___x_151_ = v_x_137_;
v_isShared_152_ = v_isSharedCheck_186_;
goto v_resetjp_150_;
}
else
{
lean_dec(v_x_137_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_186_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v_v_153_; lean_object* v___x_154_; lean_object* v_xs_x27_155_; lean_object* v___y_157_; 
v_v_153_ = lean_array_fget(v_es_142_, v_j_147_);
v___x_154_ = lean_box(0);
v_xs_x27_155_ = lean_array_fset(v_es_142_, v_j_147_, v___x_154_);
switch(lean_obj_tag(v_v_153_))
{
case 0:
{
lean_object* v_key_162_; lean_object* v_val_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_173_; 
v_key_162_ = lean_ctor_get(v_v_153_, 0);
v_val_163_ = lean_ctor_get(v_v_153_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_v_153_);
if (v_isSharedCheck_173_ == 0)
{
v___x_165_ = v_v_153_;
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_val_163_);
lean_inc(v_key_162_);
lean_dec(v_v_153_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_173_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
uint8_t v___x_167_; 
v___x_167_ = l_Lean_instBEqMVarId_beq(v_x_140_, v_key_162_);
if (v___x_167_ == 0)
{
lean_object* v___x_168_; lean_object* v___x_169_; 
lean_del_object(v___x_165_);
v___x_168_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_162_, v_val_163_, v_x_140_, v_x_141_);
v___x_169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
v___y_157_ = v___x_169_;
goto v___jp_156_;
}
else
{
lean_object* v___x_171_; 
lean_dec(v_val_163_);
lean_dec(v_key_162_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 1, v_x_141_);
lean_ctor_set(v___x_165_, 0, v_x_140_);
v___x_171_ = v___x_165_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_x_140_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v_x_141_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
v___y_157_ = v___x_171_;
goto v___jp_156_;
}
}
}
}
case 1:
{
lean_object* v_node_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_184_; 
v_node_174_ = lean_ctor_get(v_v_153_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v_v_153_);
if (v_isSharedCheck_184_ == 0)
{
v___x_176_ = v_v_153_;
v_isShared_177_ = v_isSharedCheck_184_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_node_174_);
lean_dec(v_v_153_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_184_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
size_t v___x_178_; size_t v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_178_ = lean_usize_shift_right(v_x_138_, v___x_143_);
v___x_179_ = lean_usize_add(v_x_139_, v___x_144_);
v___x_180_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg(v_node_174_, v___x_178_, v___x_179_, v_x_140_, v_x_141_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v___x_180_);
v___x_182_ = v___x_176_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v___x_180_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
v___y_157_ = v___x_182_;
goto v___jp_156_;
}
}
}
default: 
{
lean_object* v___x_185_; 
v___x_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_185_, 0, v_x_140_);
lean_ctor_set(v___x_185_, 1, v_x_141_);
v___y_157_ = v___x_185_;
goto v___jp_156_;
}
}
v___jp_156_:
{
lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_158_ = lean_array_fset(v_xs_x27_155_, v_j_147_, v___y_157_);
lean_dec(v_j_147_);
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 0, v___x_158_);
v___x_160_ = v___x_151_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
}
else
{
lean_object* v_ks_188_; lean_object* v_vs_189_; lean_object* v___x_191_; uint8_t v_isShared_192_; uint8_t v_isSharedCheck_209_; 
v_ks_188_ = lean_ctor_get(v_x_137_, 0);
v_vs_189_ = lean_ctor_get(v_x_137_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_x_137_);
if (v_isSharedCheck_209_ == 0)
{
v___x_191_ = v_x_137_;
v_isShared_192_ = v_isSharedCheck_209_;
goto v_resetjp_190_;
}
else
{
lean_inc(v_vs_189_);
lean_inc(v_ks_188_);
lean_dec(v_x_137_);
v___x_191_ = lean_box(0);
v_isShared_192_ = v_isSharedCheck_209_;
goto v_resetjp_190_;
}
v_resetjp_190_:
{
lean_object* v___x_194_; 
if (v_isShared_192_ == 0)
{
v___x_194_ = v___x_191_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_ks_188_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_vs_189_);
v___x_194_ = v_reuseFailAlloc_208_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
lean_object* v_newNode_195_; uint8_t v___y_197_; size_t v___x_203_; uint8_t v___x_204_; 
v_newNode_195_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10___redArg(v___x_194_, v_x_140_, v_x_141_);
v___x_203_ = ((size_t)7ULL);
v___x_204_ = lean_usize_dec_le(v___x_203_, v_x_139_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; uint8_t v___x_207_; 
v___x_205_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_195_);
v___x_206_ = lean_unsigned_to_nat(4u);
v___x_207_ = lean_nat_dec_lt(v___x_205_, v___x_206_);
lean_dec(v___x_205_);
v___y_197_ = v___x_207_;
goto v___jp_196_;
}
else
{
v___y_197_ = v___x_204_;
goto v___jp_196_;
}
v___jp_196_:
{
if (v___y_197_ == 0)
{
lean_object* v_ks_198_; lean_object* v_vs_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v_ks_198_ = lean_ctor_get(v_newNode_195_, 0);
lean_inc_ref(v_ks_198_);
v_vs_199_ = lean_ctor_get(v_newNode_195_, 1);
lean_inc_ref(v_vs_199_);
lean_dec_ref(v_newNode_195_);
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___closed__2);
v___x_202_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___redArg(v_x_139_, v_ks_198_, v_vs_199_, v___x_200_, v___x_201_);
lean_dec_ref(v_vs_199_);
lean_dec_ref(v_ks_198_);
return v___x_202_;
}
else
{
return v_newNode_195_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___redArg(size_t v_depth_210_, lean_object* v_keys_211_, lean_object* v_vals_212_, lean_object* v_i_213_, lean_object* v_entries_214_){
_start:
{
lean_object* v___x_215_; uint8_t v___x_216_; 
v___x_215_ = lean_array_get_size(v_keys_211_);
v___x_216_ = lean_nat_dec_lt(v_i_213_, v___x_215_);
if (v___x_216_ == 0)
{
lean_dec(v_i_213_);
return v_entries_214_;
}
else
{
lean_object* v_k_217_; lean_object* v_v_218_; uint64_t v___x_219_; size_t v_h_220_; size_t v___x_221_; lean_object* v___x_222_; size_t v___x_223_; size_t v___x_224_; size_t v___x_225_; size_t v_h_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v_k_217_ = lean_array_fget_borrowed(v_keys_211_, v_i_213_);
v_v_218_ = lean_array_fget_borrowed(v_vals_212_, v_i_213_);
v___x_219_ = l_Lean_instHashableMVarId_hash(v_k_217_);
v_h_220_ = lean_uint64_to_usize(v___x_219_);
v___x_221_ = ((size_t)5ULL);
v___x_222_ = lean_unsigned_to_nat(1u);
v___x_223_ = ((size_t)1ULL);
v___x_224_ = lean_usize_sub(v_depth_210_, v___x_223_);
v___x_225_ = lean_usize_mul(v___x_221_, v___x_224_);
v_h_226_ = lean_usize_shift_right(v_h_220_, v___x_225_);
v___x_227_ = lean_nat_add(v_i_213_, v___x_222_);
lean_dec(v_i_213_);
lean_inc(v_v_218_);
lean_inc(v_k_217_);
v___x_228_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg(v_entries_214_, v_h_226_, v_depth_210_, v_k_217_, v_v_218_);
v_i_213_ = v___x_227_;
v_entries_214_ = v___x_228_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___redArg___boxed(lean_object* v_depth_230_, lean_object* v_keys_231_, lean_object* v_vals_232_, lean_object* v_i_233_, lean_object* v_entries_234_){
_start:
{
size_t v_depth_boxed_235_; lean_object* v_res_236_; 
v_depth_boxed_235_ = lean_unbox_usize(v_depth_230_);
lean_dec(v_depth_230_);
v_res_236_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___redArg(v_depth_boxed_235_, v_keys_231_, v_vals_232_, v_i_233_, v_entries_234_);
lean_dec_ref(v_vals_232_);
lean_dec_ref(v_keys_231_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_x_237_, lean_object* v_x_238_, lean_object* v_x_239_, lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
size_t v_x_4123__boxed_242_; size_t v_x_4124__boxed_243_; lean_object* v_res_244_; 
v_x_4123__boxed_242_ = lean_unbox_usize(v_x_238_);
lean_dec(v_x_238_);
v_x_4124__boxed_243_ = lean_unbox_usize(v_x_239_);
lean_dec(v_x_239_);
v_res_244_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg(v_x_237_, v_x_4123__boxed_242_, v_x_4124__boxed_243_, v_x_240_, v_x_241_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4___redArg(lean_object* v_x_245_, lean_object* v_x_246_, lean_object* v_x_247_){
_start:
{
uint64_t v___x_248_; size_t v___x_249_; size_t v___x_250_; lean_object* v___x_251_; 
v___x_248_ = l_Lean_instHashableMVarId_hash(v_x_246_);
v___x_249_ = lean_uint64_to_usize(v___x_248_);
v___x_250_ = ((size_t)1ULL);
v___x_251_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg(v_x_245_, v___x_249_, v___x_250_, v_x_246_, v_x_247_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(lean_object* v_mvarId_252_, lean_object* v_val_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v_mctx_259_; lean_object* v_cache_260_; lean_object* v_zetaDeltaFVarIds_261_; lean_object* v_postponed_262_; lean_object* v_diag_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_291_; 
v___x_257_ = lean_st_ref_get(v___y_255_);
lean_dec(v___x_257_);
v___x_258_ = lean_st_ref_take(v___y_254_);
v_mctx_259_ = lean_ctor_get(v___x_258_, 0);
v_cache_260_ = lean_ctor_get(v___x_258_, 1);
v_zetaDeltaFVarIds_261_ = lean_ctor_get(v___x_258_, 2);
v_postponed_262_ = lean_ctor_get(v___x_258_, 3);
v_diag_263_ = lean_ctor_get(v___x_258_, 4);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_291_ == 0)
{
v___x_265_ = v___x_258_;
v_isShared_266_ = v_isSharedCheck_291_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_diag_263_);
lean_inc(v_postponed_262_);
lean_inc(v_zetaDeltaFVarIds_261_);
lean_inc(v_cache_260_);
lean_inc(v_mctx_259_);
lean_dec(v___x_258_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_291_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v_depth_267_; lean_object* v_levelAssignDepth_268_; lean_object* v_lmvarCounter_269_; lean_object* v_mvarCounter_270_; lean_object* v_lDecls_271_; lean_object* v_decls_272_; lean_object* v_userNames_273_; lean_object* v_lAssignment_274_; lean_object* v_eAssignment_275_; lean_object* v_dAssignment_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_290_; 
v_depth_267_ = lean_ctor_get(v_mctx_259_, 0);
v_levelAssignDepth_268_ = lean_ctor_get(v_mctx_259_, 1);
v_lmvarCounter_269_ = lean_ctor_get(v_mctx_259_, 2);
v_mvarCounter_270_ = lean_ctor_get(v_mctx_259_, 3);
v_lDecls_271_ = lean_ctor_get(v_mctx_259_, 4);
v_decls_272_ = lean_ctor_get(v_mctx_259_, 5);
v_userNames_273_ = lean_ctor_get(v_mctx_259_, 6);
v_lAssignment_274_ = lean_ctor_get(v_mctx_259_, 7);
v_eAssignment_275_ = lean_ctor_get(v_mctx_259_, 8);
v_dAssignment_276_ = lean_ctor_get(v_mctx_259_, 9);
v_isSharedCheck_290_ = !lean_is_exclusive(v_mctx_259_);
if (v_isSharedCheck_290_ == 0)
{
v___x_278_ = v_mctx_259_;
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_dAssignment_276_);
lean_inc(v_eAssignment_275_);
lean_inc(v_lAssignment_274_);
lean_inc(v_userNames_273_);
lean_inc(v_decls_272_);
lean_inc(v_lDecls_271_);
lean_inc(v_mvarCounter_270_);
lean_inc(v_lmvarCounter_269_);
lean_inc(v_levelAssignDepth_268_);
lean_inc(v_depth_267_);
lean_dec(v_mctx_259_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4___redArg(v_eAssignment_275_, v_mvarId_252_, v_val_253_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 8, v___x_280_);
v___x_282_ = v___x_278_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_depth_267_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_levelAssignDepth_268_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_lmvarCounter_269_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_mvarCounter_270_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v_lDecls_271_);
lean_ctor_set(v_reuseFailAlloc_289_, 5, v_decls_272_);
lean_ctor_set(v_reuseFailAlloc_289_, 6, v_userNames_273_);
lean_ctor_set(v_reuseFailAlloc_289_, 7, v_lAssignment_274_);
lean_ctor_set(v_reuseFailAlloc_289_, 8, v___x_280_);
lean_ctor_set(v_reuseFailAlloc_289_, 9, v_dAssignment_276_);
v___x_282_ = v_reuseFailAlloc_289_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_284_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_282_);
v___x_284_ = v___x_265_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_cache_260_);
lean_ctor_set(v_reuseFailAlloc_288_, 2, v_zetaDeltaFVarIds_261_);
lean_ctor_set(v_reuseFailAlloc_288_, 3, v_postponed_262_);
lean_ctor_set(v_reuseFailAlloc_288_, 4, v_diag_263_);
v___x_284_ = v_reuseFailAlloc_288_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = lean_st_ref_set(v___y_254_, v___x_284_);
v___x_286_ = lean_box(0);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg___boxed(lean_object* v_mvarId_292_, lean_object* v_val_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(v_mvarId_292_, v_val_293_, v___y_294_, v___y_295_);
lean_dec(v___y_295_);
lean_dec(v___y_294_);
return v_res_297_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_instMonadEIO(lean_box(0));
return v___x_298_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___f_299_; 
v___f_299_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_299_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___f_300_; 
v___f_300_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_300_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___f_301_; 
v___f_301_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_301_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__4(void){
_start:
{
lean_object* v___f_302_; 
v___f_302_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_302_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1(lean_object* v_msg_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v_toApplicative_311_; lean_object* v___x_313_; uint8_t v_isShared_314_; uint8_t v_isSharedCheck_372_; 
v___x_309_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__0, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__0);
v___x_310_ = l_StateRefT_x27_instMonad___redArg(v___x_309_);
v_toApplicative_311_ = lean_ctor_get(v___x_310_, 0);
v_isSharedCheck_372_ = !lean_is_exclusive(v___x_310_);
if (v_isSharedCheck_372_ == 0)
{
lean_object* v_unused_373_; 
v_unused_373_ = lean_ctor_get(v___x_310_, 1);
lean_dec(v_unused_373_);
v___x_313_ = v___x_310_;
v_isShared_314_ = v_isSharedCheck_372_;
goto v_resetjp_312_;
}
else
{
lean_inc(v_toApplicative_311_);
lean_dec(v___x_310_);
v___x_313_ = lean_box(0);
v_isShared_314_ = v_isSharedCheck_372_;
goto v_resetjp_312_;
}
v_resetjp_312_:
{
lean_object* v_toFunctor_315_; lean_object* v_toSeq_316_; lean_object* v_toSeqLeft_317_; lean_object* v_toSeqRight_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_370_; 
v_toFunctor_315_ = lean_ctor_get(v_toApplicative_311_, 0);
v_toSeq_316_ = lean_ctor_get(v_toApplicative_311_, 2);
v_toSeqLeft_317_ = lean_ctor_get(v_toApplicative_311_, 3);
v_toSeqRight_318_ = lean_ctor_get(v_toApplicative_311_, 4);
v_isSharedCheck_370_ = !lean_is_exclusive(v_toApplicative_311_);
if (v_isSharedCheck_370_ == 0)
{
lean_object* v_unused_371_; 
v_unused_371_ = lean_ctor_get(v_toApplicative_311_, 1);
lean_dec(v_unused_371_);
v___x_320_ = v_toApplicative_311_;
v_isShared_321_ = v_isSharedCheck_370_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_toSeqRight_318_);
lean_inc(v_toSeqLeft_317_);
lean_inc(v_toSeq_316_);
lean_inc(v_toFunctor_315_);
lean_dec(v_toApplicative_311_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_370_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___f_322_; lean_object* v___f_323_; lean_object* v___f_324_; lean_object* v___f_325_; lean_object* v___x_326_; lean_object* v___f_327_; lean_object* v___f_328_; lean_object* v___f_329_; lean_object* v___x_331_; 
v___f_322_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__1, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__1_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__1);
v___f_323_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__2, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__2_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__2);
lean_inc_ref(v_toFunctor_315_);
v___f_324_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_324_, 0, v_toFunctor_315_);
v___f_325_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_325_, 0, v_toFunctor_315_);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v___f_324_);
lean_ctor_set(v___x_326_, 1, v___f_325_);
v___f_327_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_327_, 0, v_toSeqRight_318_);
v___f_328_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_328_, 0, v_toSeqLeft_317_);
v___f_329_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_329_, 0, v_toSeq_316_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 4, v___f_327_);
lean_ctor_set(v___x_320_, 3, v___f_328_);
lean_ctor_set(v___x_320_, 2, v___f_329_);
lean_ctor_set(v___x_320_, 1, v___f_322_);
lean_ctor_set(v___x_320_, 0, v___x_326_);
v___x_331_ = v___x_320_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v___x_326_);
lean_ctor_set(v_reuseFailAlloc_369_, 1, v___f_322_);
lean_ctor_set(v_reuseFailAlloc_369_, 2, v___f_329_);
lean_ctor_set(v_reuseFailAlloc_369_, 3, v___f_328_);
lean_ctor_set(v_reuseFailAlloc_369_, 4, v___f_327_);
v___x_331_ = v_reuseFailAlloc_369_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
lean_object* v___x_333_; 
if (v_isShared_314_ == 0)
{
lean_ctor_set(v___x_313_, 1, v___f_323_);
lean_ctor_set(v___x_313_, 0, v___x_331_);
v___x_333_ = v___x_313_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_368_; 
v_reuseFailAlloc_368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_368_, 0, v___x_331_);
lean_ctor_set(v_reuseFailAlloc_368_, 1, v___f_323_);
v___x_333_ = v_reuseFailAlloc_368_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
lean_object* v___x_334_; lean_object* v_toApplicative_335_; lean_object* v___x_337_; uint8_t v_isShared_338_; uint8_t v_isSharedCheck_366_; 
v___x_334_ = l_StateRefT_x27_instMonad___redArg(v___x_333_);
v_toApplicative_335_ = lean_ctor_get(v___x_334_, 0);
v_isSharedCheck_366_ = !lean_is_exclusive(v___x_334_);
if (v_isSharedCheck_366_ == 0)
{
lean_object* v_unused_367_; 
v_unused_367_ = lean_ctor_get(v___x_334_, 1);
lean_dec(v_unused_367_);
v___x_337_ = v___x_334_;
v_isShared_338_ = v_isSharedCheck_366_;
goto v_resetjp_336_;
}
else
{
lean_inc(v_toApplicative_335_);
lean_dec(v___x_334_);
v___x_337_ = lean_box(0);
v_isShared_338_ = v_isSharedCheck_366_;
goto v_resetjp_336_;
}
v_resetjp_336_:
{
lean_object* v_toFunctor_339_; lean_object* v_toSeq_340_; lean_object* v_toSeqLeft_341_; lean_object* v_toSeqRight_342_; lean_object* v___x_344_; uint8_t v_isShared_345_; uint8_t v_isSharedCheck_364_; 
v_toFunctor_339_ = lean_ctor_get(v_toApplicative_335_, 0);
v_toSeq_340_ = lean_ctor_get(v_toApplicative_335_, 2);
v_toSeqLeft_341_ = lean_ctor_get(v_toApplicative_335_, 3);
v_toSeqRight_342_ = lean_ctor_get(v_toApplicative_335_, 4);
v_isSharedCheck_364_ = !lean_is_exclusive(v_toApplicative_335_);
if (v_isSharedCheck_364_ == 0)
{
lean_object* v_unused_365_; 
v_unused_365_ = lean_ctor_get(v_toApplicative_335_, 1);
lean_dec(v_unused_365_);
v___x_344_ = v_toApplicative_335_;
v_isShared_345_ = v_isSharedCheck_364_;
goto v_resetjp_343_;
}
else
{
lean_inc(v_toSeqRight_342_);
lean_inc(v_toSeqLeft_341_);
lean_inc(v_toSeq_340_);
lean_inc(v_toFunctor_339_);
lean_dec(v_toApplicative_335_);
v___x_344_ = lean_box(0);
v_isShared_345_ = v_isSharedCheck_364_;
goto v_resetjp_343_;
}
v_resetjp_343_:
{
lean_object* v___f_346_; lean_object* v___f_347_; lean_object* v___f_348_; lean_object* v___f_349_; lean_object* v___x_350_; lean_object* v___f_351_; lean_object* v___f_352_; lean_object* v___f_353_; lean_object* v___x_355_; 
v___f_346_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__3, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__3_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__3);
v___f_347_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__4, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__4_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___closed__4);
lean_inc_ref(v_toFunctor_339_);
v___f_348_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_348_, 0, v_toFunctor_339_);
v___f_349_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_349_, 0, v_toFunctor_339_);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v___f_348_);
lean_ctor_set(v___x_350_, 1, v___f_349_);
v___f_351_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_351_, 0, v_toSeqRight_342_);
v___f_352_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_352_, 0, v_toSeqLeft_341_);
v___f_353_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_353_, 0, v_toSeq_340_);
if (v_isShared_345_ == 0)
{
lean_ctor_set(v___x_344_, 4, v___f_351_);
lean_ctor_set(v___x_344_, 3, v___f_352_);
lean_ctor_set(v___x_344_, 2, v___f_353_);
lean_ctor_set(v___x_344_, 1, v___f_346_);
lean_ctor_set(v___x_344_, 0, v___x_350_);
v___x_355_ = v___x_344_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_350_);
lean_ctor_set(v_reuseFailAlloc_363_, 1, v___f_346_);
lean_ctor_set(v_reuseFailAlloc_363_, 2, v___f_353_);
lean_ctor_set(v_reuseFailAlloc_363_, 3, v___f_352_);
lean_ctor_set(v_reuseFailAlloc_363_, 4, v___f_351_);
v___x_355_ = v_reuseFailAlloc_363_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_357_; 
if (v_isShared_338_ == 0)
{
lean_ctor_set(v___x_337_, 1, v___f_347_);
lean_ctor_set(v___x_337_, 0, v___x_355_);
v___x_357_ = v___x_337_;
goto v_reusejp_356_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v___x_355_);
lean_ctor_set(v_reuseFailAlloc_362_, 1, v___f_347_);
v___x_357_ = v_reuseFailAlloc_362_;
goto v_reusejp_356_;
}
v_reusejp_356_:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_1373__overap_360_; lean_object* v___x_361_; 
v___x_358_ = l_Lean_instInhabitedLocalContext_default;
v___x_359_ = l_instInhabitedOfMonad___redArg(v___x_357_, v___x_358_);
v___x_1373__overap_360_ = lean_panic_fn_borrowed(v___x_359_, v_msg_303_);
lean_dec(v___x_359_);
lean_inc(v___y_307_);
lean_inc_ref(v___y_306_);
lean_inc(v___y_305_);
lean_inc_ref(v___y_304_);
v___x_361_ = lean_apply_5(v___x_1373__overap_360_, v___y_304_, v___y_305_, v___y_306_, v___y_307_, lean_box(0));
return v___x_361_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1___boxed(lean_object* v_msg_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1(v_msg_374_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
lean_dec(v___y_378_);
lean_dec_ref(v___y_377_);
lean_dec(v___y_376_);
lean_dec_ref(v___y_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___redArg(lean_object* v_t_381_, lean_object* v_k_382_){
_start:
{
if (lean_obj_tag(v_t_381_) == 0)
{
lean_object* v_k_383_; lean_object* v_v_384_; lean_object* v_l_385_; lean_object* v_r_386_; uint8_t v___x_387_; 
v_k_383_ = lean_ctor_get(v_t_381_, 1);
v_v_384_ = lean_ctor_get(v_t_381_, 2);
v_l_385_ = lean_ctor_get(v_t_381_, 3);
v_r_386_ = lean_ctor_get(v_t_381_, 4);
v___x_387_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_382_, v_k_383_);
switch(v___x_387_)
{
case 0:
{
v_t_381_ = v_l_385_;
goto _start;
}
case 1:
{
lean_object* v___x_389_; 
lean_inc(v_v_384_);
v___x_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_389_, 0, v_v_384_);
return v___x_389_;
}
default: 
{
v_t_381_ = v_r_386_;
goto _start;
}
}
}
else
{
lean_object* v___x_391_; 
v___x_391_ = lean_box(0);
return v___x_391_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___redArg___boxed(lean_object* v_t_392_, lean_object* v_k_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___redArg(v_t_392_, v_k_393_);
lean_dec(v_k_393_);
lean_dec(v_t_392_);
return v_res_394_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__0(void){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = lean_mk_string_unchecked("Lean.MetavarContext", 19, 19);
return v___x_395_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__1(void){
_start:
{
lean_object* v___x_396_; 
v___x_396_ = lean_mk_string_unchecked("Lean.instantiateLCtxMVars", 25, 25);
return v___x_396_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__2(void){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = lean_mk_string_unchecked("Invalid auxiliary declaration found in local context: ", 54, 54);
return v___x_397_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__3(void){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = lean_mk_string_unchecked(" does not have an associated full name.", 39, 39);
return v___x_398_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(lean_object* v_auxDeclToFullName_399_, lean_object* v_as_400_, size_t v_i_401_, size_t v_stop_402_, lean_object* v_b_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_a_410_; uint8_t v___x_414_; 
v___x_414_ = lean_usize_dec_eq(v_i_401_, v_stop_402_);
if (v___x_414_ == 0)
{
lean_object* v___x_415_; 
v___x_415_ = lean_array_uget_borrowed(v_as_400_, v_i_401_);
if (lean_obj_tag(v___x_415_) == 0)
{
v_a_410_ = v_b_403_;
goto v___jp_409_;
}
else
{
lean_object* v_val_416_; 
v_val_416_ = lean_ctor_get(v___x_415_, 0);
if (lean_obj_tag(v_val_416_) == 0)
{
uint8_t v_kind_417_; 
v_kind_417_ = lean_ctor_get_uint8(v_val_416_, sizeof(void*)*4 + 1);
if (v_kind_417_ == 2)
{
lean_object* v_fvarId_418_; lean_object* v_userName_419_; lean_object* v_type_420_; lean_object* v___x_421_; 
v_fvarId_418_ = lean_ctor_get(v_val_416_, 1);
v_userName_419_ = lean_ctor_get(v_val_416_, 2);
v_type_420_ = lean_ctor_get(v_val_416_, 3);
lean_inc_ref(v_type_420_);
v___x_421_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_type_420_, v___y_405_, v___y_407_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_423_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref(v___x_421_);
v___x_423_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___redArg(v_auxDeclToFullName_399_, v_fvarId_418_);
if (lean_obj_tag(v___x_423_) == 1)
{
lean_object* v_val_424_; lean_object* v___x_425_; 
v_val_424_ = lean_ctor_get(v___x_423_, 0);
lean_inc(v_val_424_);
lean_dec_ref(v___x_423_);
lean_inc(v_userName_419_);
lean_inc(v_fvarId_418_);
v___x_425_ = l_Lean_LocalContext_mkAuxDecl(v_b_403_, v_fvarId_418_, v_userName_419_, v_a_422_, v_val_424_);
v_a_410_ = v___x_425_;
goto v___jp_409_;
}
else
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; uint8_t v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
lean_dec(v___x_423_);
lean_dec(v_a_422_);
lean_dec_ref(v_b_403_);
v___x_426_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__0);
v___x_427_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__1);
v___x_428_ = lean_unsigned_to_nat(635u);
v___x_429_ = lean_unsigned_to_nat(12u);
v___x_430_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__2);
v___x_431_ = 1;
lean_inc(v_userName_419_);
v___x_432_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_userName_419_, v___x_431_);
v___x_433_ = lean_string_append(v___x_430_, v___x_432_);
lean_dec_ref(v___x_432_);
v___x_434_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__3, &l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___closed__3);
v___x_435_ = lean_string_append(v___x_433_, v___x_434_);
v___x_436_ = l_mkPanicMessageWithDecl(v___x_426_, v___x_427_, v___x_428_, v___x_429_, v___x_435_);
lean_dec_ref(v___x_435_);
v___x_437_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__1(v___x_436_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
lean_inc(v_a_438_);
lean_dec_ref(v___x_437_);
v_a_410_ = v_a_438_;
goto v___jp_409_;
}
else
{
return v___x_437_;
}
}
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
lean_dec_ref(v_b_403_);
v_a_439_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_421_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_421_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_444_; 
if (v_isShared_442_ == 0)
{
v___x_444_ = v___x_441_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v_a_439_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
else
{
lean_object* v_fvarId_447_; lean_object* v_userName_448_; lean_object* v_type_449_; uint8_t v_bi_450_; lean_object* v___x_451_; 
v_fvarId_447_ = lean_ctor_get(v_val_416_, 1);
v_userName_448_ = lean_ctor_get(v_val_416_, 2);
v_type_449_ = lean_ctor_get(v_val_416_, 3);
v_bi_450_ = lean_ctor_get_uint8(v_val_416_, sizeof(void*)*4);
lean_inc_ref(v_type_449_);
v___x_451_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_type_449_, v___y_405_, v___y_407_);
if (lean_obj_tag(v___x_451_) == 0)
{
lean_object* v_a_452_; lean_object* v___x_453_; 
v_a_452_ = lean_ctor_get(v___x_451_, 0);
lean_inc(v_a_452_);
lean_dec_ref(v___x_451_);
lean_inc(v_userName_448_);
lean_inc(v_fvarId_447_);
v___x_453_ = l_Lean_LocalContext_mkLocalDecl(v_b_403_, v_fvarId_447_, v_userName_448_, v_a_452_, v_bi_450_, v_kind_417_);
v_a_410_ = v___x_453_;
goto v___jp_409_;
}
else
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_461_; 
lean_dec_ref(v_b_403_);
v_a_454_ = lean_ctor_get(v___x_451_, 0);
v_isSharedCheck_461_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_461_ == 0)
{
v___x_456_ = v___x_451_;
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_451_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_461_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v___x_459_; 
if (v_isShared_457_ == 0)
{
v___x_459_ = v___x_456_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v_a_454_);
v___x_459_ = v_reuseFailAlloc_460_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
return v___x_459_;
}
}
}
}
}
else
{
lean_object* v_fvarId_462_; lean_object* v_userName_463_; lean_object* v_type_464_; lean_object* v_value_465_; uint8_t v_nondep_466_; uint8_t v_kind_467_; lean_object* v___x_468_; 
v_fvarId_462_ = lean_ctor_get(v_val_416_, 1);
v_userName_463_ = lean_ctor_get(v_val_416_, 2);
v_type_464_ = lean_ctor_get(v_val_416_, 3);
v_value_465_ = lean_ctor_get(v_val_416_, 4);
v_nondep_466_ = lean_ctor_get_uint8(v_val_416_, sizeof(void*)*5);
v_kind_467_ = lean_ctor_get_uint8(v_val_416_, sizeof(void*)*5 + 1);
lean_inc_ref(v_type_464_);
v___x_468_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_type_464_, v___y_405_, v___y_407_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v_a_469_; lean_object* v___x_470_; 
v_a_469_ = lean_ctor_get(v___x_468_, 0);
lean_inc(v_a_469_);
lean_dec_ref(v___x_468_);
lean_inc_ref(v_value_465_);
v___x_470_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_value_465_, v___y_405_, v___y_407_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; lean_object* v___x_472_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref(v___x_470_);
lean_inc(v_userName_463_);
lean_inc(v_fvarId_462_);
v___x_472_ = l_Lean_LocalContext_mkLetDecl(v_b_403_, v_fvarId_462_, v_userName_463_, v_a_469_, v_a_471_, v_nondep_466_, v_kind_467_);
v_a_410_ = v___x_472_;
goto v___jp_409_;
}
else
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_480_; 
lean_dec(v_a_469_);
lean_dec_ref(v_b_403_);
v_a_473_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_480_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_480_ == 0)
{
v___x_475_ = v___x_470_;
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_470_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_480_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_478_; 
if (v_isShared_476_ == 0)
{
v___x_478_ = v___x_475_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_a_473_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
return v___x_478_;
}
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
lean_dec_ref(v_b_403_);
v_a_481_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_468_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_468_);
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
}
}
else
{
lean_object* v___x_489_; 
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v_b_403_);
return v___x_489_;
}
v___jp_409_:
{
size_t v___x_411_; size_t v___x_412_; 
v___x_411_ = ((size_t)1ULL);
v___x_412_ = lean_usize_add(v_i_401_, v___x_411_);
v_i_401_ = v___x_412_;
v_b_403_ = v_a_410_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6___boxed(lean_object* v_auxDeclToFullName_490_, lean_object* v_as_491_, lean_object* v_i_492_, lean_object* v_stop_493_, lean_object* v_b_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_){
_start:
{
size_t v_i_boxed_500_; size_t v_stop_boxed_501_; lean_object* v_res_502_; 
v_i_boxed_500_ = lean_unbox_usize(v_i_492_);
lean_dec(v_i_492_);
v_stop_boxed_501_ = lean_unbox_usize(v_stop_493_);
lean_dec(v_stop_493_);
v_res_502_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_490_, v_as_491_, v_i_boxed_500_, v_stop_boxed_501_, v_b_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec_ref(v_as_491_);
lean_dec(v_auxDeclToFullName_490_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__7(lean_object* v_auxDeclToFullName_503_, lean_object* v_x_504_, lean_object* v_x_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
if (lean_obj_tag(v_x_504_) == 0)
{
lean_object* v_cs_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_531_; 
v_cs_511_ = lean_ctor_get(v_x_504_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_531_ == 0)
{
v___x_513_ = v_x_504_;
v_isShared_514_ = v_isSharedCheck_531_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_cs_511_);
lean_dec(v_x_504_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_531_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_unsigned_to_nat(0u);
v___x_516_ = lean_array_get_size(v_cs_511_);
v___x_517_ = lean_nat_dec_lt(v___x_515_, v___x_516_);
if (v___x_517_ == 0)
{
lean_object* v___x_519_; 
lean_dec_ref(v_cs_511_);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v_x_505_);
v___x_519_ = v___x_513_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_x_505_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
else
{
uint8_t v___x_521_; 
v___x_521_ = lean_nat_dec_le(v___x_516_, v___x_516_);
if (v___x_521_ == 0)
{
if (v___x_517_ == 0)
{
lean_object* v___x_523_; 
lean_dec_ref(v_cs_511_);
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v_x_505_);
v___x_523_ = v___x_513_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_x_505_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
else
{
size_t v___x_525_; size_t v___x_526_; lean_object* v___x_527_; 
lean_del_object(v___x_513_);
v___x_525_ = ((size_t)0ULL);
v___x_526_ = lean_usize_of_nat(v___x_516_);
v___x_527_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7(v_auxDeclToFullName_503_, v_cs_511_, v___x_525_, v___x_526_, v_x_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
lean_dec_ref(v_cs_511_);
return v___x_527_;
}
}
else
{
size_t v___x_528_; size_t v___x_529_; lean_object* v___x_530_; 
lean_del_object(v___x_513_);
v___x_528_ = ((size_t)0ULL);
v___x_529_ = lean_usize_of_nat(v___x_516_);
v___x_530_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7(v_auxDeclToFullName_503_, v_cs_511_, v___x_528_, v___x_529_, v_x_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
lean_dec_ref(v_cs_511_);
return v___x_530_;
}
}
}
}
else
{
lean_object* v_vs_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_552_; 
v_vs_532_ = lean_ctor_get(v_x_504_, 0);
v_isSharedCheck_552_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_552_ == 0)
{
v___x_534_ = v_x_504_;
v_isShared_535_ = v_isSharedCheck_552_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_vs_532_);
lean_dec(v_x_504_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_552_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = lean_array_get_size(v_vs_532_);
v___x_538_ = lean_nat_dec_lt(v___x_536_, v___x_537_);
if (v___x_538_ == 0)
{
lean_object* v___x_540_; 
lean_dec_ref(v_vs_532_);
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 0);
lean_ctor_set(v___x_534_, 0, v_x_505_);
v___x_540_ = v___x_534_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_x_505_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
else
{
uint8_t v___x_542_; 
v___x_542_ = lean_nat_dec_le(v___x_537_, v___x_537_);
if (v___x_542_ == 0)
{
if (v___x_538_ == 0)
{
lean_object* v___x_544_; 
lean_dec_ref(v_vs_532_);
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 0);
lean_ctor_set(v___x_534_, 0, v_x_505_);
v___x_544_ = v___x_534_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_545_; 
v_reuseFailAlloc_545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_545_, 0, v_x_505_);
v___x_544_ = v_reuseFailAlloc_545_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
return v___x_544_;
}
}
else
{
size_t v___x_546_; size_t v___x_547_; lean_object* v___x_548_; 
lean_del_object(v___x_534_);
v___x_546_ = ((size_t)0ULL);
v___x_547_ = lean_usize_of_nat(v___x_537_);
v___x_548_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_503_, v_vs_532_, v___x_546_, v___x_547_, v_x_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
lean_dec_ref(v_vs_532_);
return v___x_548_;
}
}
else
{
size_t v___x_549_; size_t v___x_550_; lean_object* v___x_551_; 
lean_del_object(v___x_534_);
v___x_549_ = ((size_t)0ULL);
v___x_550_ = lean_usize_of_nat(v___x_537_);
v___x_551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_503_, v_vs_532_, v___x_549_, v___x_550_, v_x_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
lean_dec_ref(v_vs_532_);
return v___x_551_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7(lean_object* v_auxDeclToFullName_553_, lean_object* v_as_554_, size_t v_i_555_, size_t v_stop_556_, lean_object* v_b_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_){
_start:
{
uint8_t v___x_563_; 
v___x_563_ = lean_usize_dec_eq(v_i_555_, v_stop_556_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_564_ = lean_array_uget_borrowed(v_as_554_, v_i_555_);
lean_inc(v___x_564_);
v___x_565_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__7(v_auxDeclToFullName_553_, v___x_564_, v_b_557_, v___y_558_, v___y_559_, v___y_560_, v___y_561_);
if (lean_obj_tag(v___x_565_) == 0)
{
lean_object* v_a_566_; size_t v___x_567_; size_t v___x_568_; 
v_a_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_a_566_);
lean_dec_ref(v___x_565_);
v___x_567_ = ((size_t)1ULL);
v___x_568_ = lean_usize_add(v_i_555_, v___x_567_);
v_i_555_ = v___x_568_;
v_b_557_ = v_a_566_;
goto _start;
}
else
{
return v___x_565_;
}
}
else
{
lean_object* v___x_570_; 
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v_b_557_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_auxDeclToFullName_571_, lean_object* v_as_572_, lean_object* v_i_573_, lean_object* v_stop_574_, lean_object* v_b_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
size_t v_i_boxed_581_; size_t v_stop_boxed_582_; lean_object* v_res_583_; 
v_i_boxed_581_ = lean_unbox_usize(v_i_573_);
lean_dec(v_i_573_);
v_stop_boxed_582_ = lean_unbox_usize(v_stop_574_);
lean_dec(v_stop_574_);
v_res_583_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7(v_auxDeclToFullName_571_, v_as_572_, v_i_boxed_581_, v_stop_boxed_582_, v_b_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec_ref(v_as_572_);
lean_dec(v_auxDeclToFullName_571_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__7___boxed(lean_object* v_auxDeclToFullName_584_, lean_object* v_x_585_, lean_object* v_x_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__7(v_auxDeclToFullName_584_, v_x_585_, v_x_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec(v___y_590_);
lean_dec_ref(v___y_589_);
lean_dec(v___y_588_);
lean_dec_ref(v___y_587_);
lean_dec(v_auxDeclToFullName_584_);
return v_res_592_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___closed__0(void){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = l_Lean_instInhabitedPersistentArrayNode_default(lean_box(0));
return v___x_593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5(lean_object* v_auxDeclToFullName_594_, lean_object* v_x_595_, size_t v_x_596_, size_t v_x_597_, lean_object* v_x_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
if (lean_obj_tag(v_x_595_) == 0)
{
lean_object* v_cs_604_; lean_object* v___x_605_; size_t v___x_606_; lean_object* v_j_607_; lean_object* v___x_608_; size_t v___x_609_; size_t v___x_610_; size_t v___x_611_; size_t v___x_612_; size_t v___x_613_; size_t v___x_614_; lean_object* v___x_615_; 
v_cs_604_ = lean_ctor_get(v_x_595_, 0);
lean_inc_ref(v_cs_604_);
lean_dec_ref(v_x_595_);
v___x_605_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___closed__0);
v___x_606_ = lean_usize_shift_right(v_x_596_, v_x_597_);
v_j_607_ = lean_usize_to_nat(v___x_606_);
v___x_608_ = lean_array_get_borrowed(v___x_605_, v_cs_604_, v_j_607_);
v___x_609_ = ((size_t)1ULL);
v___x_610_ = lean_usize_shift_left(v___x_609_, v_x_597_);
v___x_611_ = lean_usize_sub(v___x_610_, v___x_609_);
v___x_612_ = lean_usize_land(v_x_596_, v___x_611_);
v___x_613_ = ((size_t)5ULL);
v___x_614_ = lean_usize_sub(v_x_597_, v___x_613_);
lean_inc(v___x_608_);
v___x_615_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5(v_auxDeclToFullName_594_, v___x_608_, v___x_612_, v___x_614_, v_x_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
v___x_617_ = lean_unsigned_to_nat(1u);
v___x_618_ = lean_nat_add(v_j_607_, v___x_617_);
lean_dec(v_j_607_);
v___x_619_ = lean_array_get_size(v_cs_604_);
v___x_620_ = lean_nat_dec_lt(v___x_618_, v___x_619_);
if (v___x_620_ == 0)
{
lean_dec(v___x_618_);
lean_dec(v_a_616_);
lean_dec_ref(v_cs_604_);
return v___x_615_;
}
else
{
uint8_t v___x_621_; 
v___x_621_ = lean_nat_dec_le(v___x_619_, v___x_619_);
if (v___x_621_ == 0)
{
if (v___x_620_ == 0)
{
lean_dec(v___x_618_);
lean_dec(v_a_616_);
lean_dec_ref(v_cs_604_);
return v___x_615_;
}
else
{
size_t v___x_622_; size_t v___x_623_; lean_object* v___x_624_; 
lean_dec_ref(v___x_615_);
v___x_622_ = lean_usize_of_nat(v___x_618_);
lean_dec(v___x_618_);
v___x_623_ = lean_usize_of_nat(v___x_619_);
v___x_624_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7(v_auxDeclToFullName_594_, v_cs_604_, v___x_622_, v___x_623_, v_a_616_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
lean_dec_ref(v_cs_604_);
return v___x_624_;
}
}
else
{
size_t v___x_625_; size_t v___x_626_; lean_object* v___x_627_; 
lean_dec_ref(v___x_615_);
v___x_625_ = lean_usize_of_nat(v___x_618_);
lean_dec(v___x_618_);
v___x_626_ = lean_usize_of_nat(v___x_619_);
v___x_627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5_spec__7(v_auxDeclToFullName_594_, v_cs_604_, v___x_625_, v___x_626_, v_a_616_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
lean_dec_ref(v_cs_604_);
return v___x_627_;
}
}
}
else
{
lean_dec(v_j_607_);
lean_dec_ref(v_cs_604_);
return v___x_615_;
}
}
else
{
lean_object* v_vs_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_648_; 
v_vs_628_ = lean_ctor_get(v_x_595_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v_x_595_);
if (v_isSharedCheck_648_ == 0)
{
v___x_630_ = v_x_595_;
v_isShared_631_ = v_isSharedCheck_648_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_vs_628_);
lean_dec(v_x_595_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_648_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_632_ = lean_usize_to_nat(v_x_596_);
v___x_633_ = lean_array_get_size(v_vs_628_);
v___x_634_ = lean_nat_dec_lt(v___x_632_, v___x_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_636_; 
lean_dec(v___x_632_);
lean_dec_ref(v_vs_628_);
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 0);
lean_ctor_set(v___x_630_, 0, v_x_598_);
v___x_636_ = v___x_630_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_x_598_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
else
{
uint8_t v___x_638_; 
v___x_638_ = lean_nat_dec_le(v___x_633_, v___x_633_);
if (v___x_638_ == 0)
{
if (v___x_634_ == 0)
{
lean_object* v___x_640_; 
lean_dec(v___x_632_);
lean_dec_ref(v_vs_628_);
if (v_isShared_631_ == 0)
{
lean_ctor_set_tag(v___x_630_, 0);
lean_ctor_set(v___x_630_, 0, v_x_598_);
v___x_640_ = v___x_630_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_x_598_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
else
{
size_t v___x_642_; size_t v___x_643_; lean_object* v___x_644_; 
lean_del_object(v___x_630_);
v___x_642_ = lean_usize_of_nat(v___x_632_);
lean_dec(v___x_632_);
v___x_643_ = lean_usize_of_nat(v___x_633_);
v___x_644_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_594_, v_vs_628_, v___x_642_, v___x_643_, v_x_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
lean_dec_ref(v_vs_628_);
return v___x_644_;
}
}
else
{
size_t v___x_645_; size_t v___x_646_; lean_object* v___x_647_; 
lean_del_object(v___x_630_);
v___x_645_ = lean_usize_of_nat(v___x_632_);
lean_dec(v___x_632_);
v___x_646_ = lean_usize_of_nat(v___x_633_);
v___x_647_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_594_, v_vs_628_, v___x_645_, v___x_646_, v_x_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
lean_dec_ref(v_vs_628_);
return v___x_647_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5___boxed(lean_object* v_auxDeclToFullName_649_, lean_object* v_x_650_, lean_object* v_x_651_, lean_object* v_x_652_, lean_object* v_x_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_){
_start:
{
size_t v_x_4835__boxed_659_; size_t v_x_4836__boxed_660_; lean_object* v_res_661_; 
v_x_4835__boxed_659_ = lean_unbox_usize(v_x_651_);
lean_dec(v_x_651_);
v_x_4836__boxed_660_ = lean_unbox_usize(v_x_652_);
lean_dec(v_x_652_);
v_res_661_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5(v_auxDeclToFullName_649_, v_x_650_, v_x_4835__boxed_659_, v_x_4836__boxed_660_, v_x_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v_auxDeclToFullName_649_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3(lean_object* v_auxDeclToFullName_662_, lean_object* v_t_663_, lean_object* v_init_664_, lean_object* v_start_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v___x_671_; uint8_t v___x_672_; 
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = lean_nat_dec_eq(v_start_665_, v___x_671_);
if (v___x_672_ == 0)
{
lean_object* v_root_673_; lean_object* v_tail_674_; size_t v_shift_675_; lean_object* v_tailOff_676_; uint8_t v___x_677_; 
v_root_673_ = lean_ctor_get(v_t_663_, 0);
lean_inc_ref(v_root_673_);
v_tail_674_ = lean_ctor_get(v_t_663_, 1);
lean_inc_ref(v_tail_674_);
v_shift_675_ = lean_ctor_get_usize(v_t_663_, 4);
v_tailOff_676_ = lean_ctor_get(v_t_663_, 3);
lean_inc(v_tailOff_676_);
lean_dec_ref(v_t_663_);
v___x_677_ = lean_nat_dec_le(v_tailOff_676_, v_start_665_);
if (v___x_677_ == 0)
{
size_t v___x_678_; lean_object* v___x_679_; 
lean_dec(v_tailOff_676_);
v___x_678_ = lean_usize_of_nat(v_start_665_);
v___x_679_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__5(v_auxDeclToFullName_662_, v_root_673_, v___x_678_, v_shift_675_, v_init_664_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_681_; uint8_t v___x_682_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_a_680_);
v___x_681_ = lean_array_get_size(v_tail_674_);
v___x_682_ = lean_nat_dec_lt(v___x_671_, v___x_681_);
if (v___x_682_ == 0)
{
lean_dec(v_a_680_);
lean_dec_ref(v_tail_674_);
return v___x_679_;
}
else
{
uint8_t v___x_683_; 
v___x_683_ = lean_nat_dec_le(v___x_681_, v___x_681_);
if (v___x_683_ == 0)
{
if (v___x_682_ == 0)
{
lean_dec(v_a_680_);
lean_dec_ref(v_tail_674_);
return v___x_679_;
}
else
{
size_t v___x_684_; size_t v___x_685_; lean_object* v___x_686_; 
lean_dec_ref(v___x_679_);
v___x_684_ = ((size_t)0ULL);
v___x_685_ = lean_usize_of_nat(v___x_681_);
v___x_686_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_662_, v_tail_674_, v___x_684_, v___x_685_, v_a_680_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec_ref(v_tail_674_);
return v___x_686_;
}
}
else
{
size_t v___x_687_; size_t v___x_688_; lean_object* v___x_689_; 
lean_dec_ref(v___x_679_);
v___x_687_ = ((size_t)0ULL);
v___x_688_ = lean_usize_of_nat(v___x_681_);
v___x_689_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_662_, v_tail_674_, v___x_687_, v___x_688_, v_a_680_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec_ref(v_tail_674_);
return v___x_689_;
}
}
}
else
{
lean_dec_ref(v_tail_674_);
return v___x_679_;
}
}
else
{
lean_object* v___x_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
lean_dec_ref(v_root_673_);
v___x_690_ = lean_nat_sub(v_start_665_, v_tailOff_676_);
lean_dec(v_tailOff_676_);
v___x_691_ = lean_array_get_size(v_tail_674_);
v___x_692_ = lean_nat_dec_lt(v___x_690_, v___x_691_);
if (v___x_692_ == 0)
{
lean_object* v___x_693_; 
lean_dec(v___x_690_);
lean_dec_ref(v_tail_674_);
v___x_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_693_, 0, v_init_664_);
return v___x_693_;
}
else
{
uint8_t v___x_694_; 
v___x_694_ = lean_nat_dec_le(v___x_691_, v___x_691_);
if (v___x_694_ == 0)
{
if (v___x_692_ == 0)
{
lean_object* v___x_695_; 
lean_dec(v___x_690_);
lean_dec_ref(v_tail_674_);
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v_init_664_);
return v___x_695_;
}
else
{
size_t v___x_696_; size_t v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_usize_of_nat(v___x_690_);
lean_dec(v___x_690_);
v___x_697_ = lean_usize_of_nat(v___x_691_);
v___x_698_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_662_, v_tail_674_, v___x_696_, v___x_697_, v_init_664_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec_ref(v_tail_674_);
return v___x_698_;
}
}
else
{
size_t v___x_699_; size_t v___x_700_; lean_object* v___x_701_; 
v___x_699_ = lean_usize_of_nat(v___x_690_);
lean_dec(v___x_690_);
v___x_700_ = lean_usize_of_nat(v___x_691_);
v___x_701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_662_, v_tail_674_, v___x_699_, v___x_700_, v_init_664_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec_ref(v_tail_674_);
return v___x_701_;
}
}
}
}
else
{
lean_object* v_root_702_; lean_object* v_tail_703_; lean_object* v___x_704_; 
v_root_702_ = lean_ctor_get(v_t_663_, 0);
lean_inc_ref(v_root_702_);
v_tail_703_ = lean_ctor_get(v_t_663_, 1);
lean_inc_ref(v_tail_703_);
lean_dec_ref(v_t_663_);
v___x_704_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__7(v_auxDeclToFullName_662_, v_root_702_, v_init_664_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v_a_705_; lean_object* v___x_706_; uint8_t v___x_707_; 
v_a_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_a_705_);
v___x_706_ = lean_array_get_size(v_tail_703_);
v___x_707_ = lean_nat_dec_lt(v___x_671_, v___x_706_);
if (v___x_707_ == 0)
{
lean_dec(v_a_705_);
lean_dec_ref(v_tail_703_);
return v___x_704_;
}
else
{
uint8_t v___x_708_; 
v___x_708_ = lean_nat_dec_le(v___x_706_, v___x_706_);
if (v___x_708_ == 0)
{
if (v___x_707_ == 0)
{
lean_dec(v_a_705_);
lean_dec_ref(v_tail_703_);
return v___x_704_;
}
else
{
size_t v___x_709_; size_t v___x_710_; lean_object* v___x_711_; 
lean_dec_ref(v___x_704_);
v___x_709_ = ((size_t)0ULL);
v___x_710_ = lean_usize_of_nat(v___x_706_);
v___x_711_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_662_, v_tail_703_, v___x_709_, v___x_710_, v_a_705_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec_ref(v_tail_703_);
return v___x_711_;
}
}
else
{
size_t v___x_712_; size_t v___x_713_; lean_object* v___x_714_; 
lean_dec_ref(v___x_704_);
v___x_712_ = ((size_t)0ULL);
v___x_713_ = lean_usize_of_nat(v___x_706_);
v___x_714_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3_spec__6(v_auxDeclToFullName_662_, v_tail_703_, v___x_712_, v___x_713_, v_a_705_, v___y_666_, v___y_667_, v___y_668_, v___y_669_);
lean_dec_ref(v_tail_703_);
return v___x_714_;
}
}
}
else
{
lean_dec_ref(v_tail_703_);
return v___x_704_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3___boxed(lean_object* v_auxDeclToFullName_715_, lean_object* v_t_716_, lean_object* v_init_717_, lean_object* v_start_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3(v_auxDeclToFullName_715_, v_t_716_, v_init_717_, v_start_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_);
lean_dec(v___y_722_);
lean_dec_ref(v___y_721_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v_start_718_);
lean_dec(v_auxDeclToFullName_715_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2(lean_object* v_auxDeclToFullName_725_, lean_object* v_lctx_726_, lean_object* v_init_727_, lean_object* v_start_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_decls_734_; lean_object* v___x_735_; 
v_decls_734_ = lean_ctor_get(v_lctx_726_, 1);
lean_inc_ref(v_decls_734_);
lean_dec_ref(v_lctx_726_);
v___x_735_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2_spec__3(v_auxDeclToFullName_725_, v_decls_734_, v_init_727_, v_start_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_);
return v___x_735_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2___boxed(lean_object* v_auxDeclToFullName_736_, lean_object* v_lctx_737_, lean_object* v_init_738_, lean_object* v_start_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2(v_auxDeclToFullName_736_, v_lctx_737_, v_init_738_, v_start_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec(v_start_739_);
lean_dec(v_auxDeclToFullName_736_);
return v_res_745_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__0(void){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_746_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__1(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__0, &l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__0_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__0);
v___x_748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_748_, 0, v___x_747_);
return v___x_748_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__2(void){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_749_ = lean_unsigned_to_nat(32u);
v___x_750_ = lean_mk_empty_array_with_capacity(v___x_749_);
v___x_751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
return v___x_751_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__3(void){
_start:
{
size_t v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_752_ = ((size_t)5ULL);
v___x_753_ = lean_unsigned_to_nat(0u);
v___x_754_ = lean_unsigned_to_nat(32u);
v___x_755_ = lean_mk_empty_array_with_capacity(v___x_754_);
v___x_756_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__2, &l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__2_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__2);
v___x_757_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_757_, 0, v___x_756_);
lean_ctor_set(v___x_757_, 1, v___x_755_);
lean_ctor_set(v___x_757_, 2, v___x_753_);
lean_ctor_set(v___x_757_, 3, v___x_753_);
lean_ctor_set_usize(v___x_757_, 4, v___x_752_);
return v___x_757_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__4(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
v___x_758_ = lean_box(1);
v___x_759_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__3, &l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__3_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__3);
v___x_760_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__1, &l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__1_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__1);
v___x_761_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_761_, 0, v___x_760_);
lean_ctor_set(v___x_761_, 1, v___x_759_);
lean_ctor_set(v___x_761_, 2, v___x_758_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0(lean_object* v_lctx_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_auxDeclToFullName_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v_auxDeclToFullName_768_ = lean_ctor_get(v_lctx_762_, 2);
lean_inc(v_auxDeclToFullName_768_);
v___x_769_ = lean_unsigned_to_nat(0u);
v___x_770_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__4, &l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__4_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___closed__4);
v___x_771_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__2(v_auxDeclToFullName_768_, v_lctx_762_, v___x_770_, v___x_769_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
lean_dec(v_auxDeclToFullName_768_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0___boxed(lean_object* v_lctx_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0(v_lctx_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_instantiateGoalMVars(lean_object* v_mvarId_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_){
_start:
{
lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_785_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__1, &l_Lean_MVarId_ensureNoMVar___closed__1_once, _init_l_Lean_MVarId_ensureNoMVar___closed__1);
lean_inc(v_mvarId_779_);
v___x_786_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_779_, v___x_785_, v_a_780_, v_a_781_, v_a_782_, v_a_783_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v___x_787_; 
lean_dec_ref(v___x_786_);
lean_inc(v_mvarId_779_);
v___x_787_ = l_Lean_MVarId_getDecl(v_mvarId_779_, v_a_780_, v_a_781_, v_a_782_, v_a_783_);
if (lean_obj_tag(v___x_787_) == 0)
{
lean_object* v_a_788_; lean_object* v_userName_789_; lean_object* v_lctx_790_; lean_object* v_type_791_; lean_object* v_localInstances_792_; lean_object* v___x_793_; 
v_a_788_ = lean_ctor_get(v___x_787_, 0);
lean_inc(v_a_788_);
lean_dec_ref(v___x_787_);
v_userName_789_ = lean_ctor_get(v_a_788_, 0);
lean_inc(v_userName_789_);
v_lctx_790_ = lean_ctor_get(v_a_788_, 1);
lean_inc_ref(v_lctx_790_);
v_type_791_ = lean_ctor_get(v_a_788_, 2);
lean_inc_ref(v_type_791_);
v_localInstances_792_ = lean_ctor_get(v_a_788_, 4);
lean_inc_ref(v_localInstances_792_);
lean_dec(v_a_788_);
v___x_793_ = l_Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0(v_lctx_790_, v_a_780_, v_a_781_, v_a_782_, v_a_783_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v_a_794_; lean_object* v___x_795_; lean_object* v_a_796_; uint8_t v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_a_794_ = lean_ctor_get(v___x_793_, 0);
lean_inc(v_a_794_);
lean_dec_ref(v___x_793_);
v___x_795_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_type_791_, v_a_781_, v_a_783_);
v_a_796_ = lean_ctor_get(v___x_795_, 0);
lean_inc(v_a_796_);
lean_dec_ref(v___x_795_);
v___x_797_ = 2;
v___x_798_ = lean_unsigned_to_nat(0u);
v___x_799_ = l_Lean_Meta_mkFreshExprMVarAt(v_a_794_, v_localInstances_792_, v_a_796_, v___x_797_, v_userName_789_, v___x_798_, v_a_780_, v_a_781_, v_a_782_, v_a_783_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_809_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc_n(v_a_800_, 2);
lean_dec_ref(v___x_799_);
v___x_801_ = l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(v_mvarId_779_, v_a_800_, v_a_781_, v_a_783_);
v_isSharedCheck_809_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_809_ == 0)
{
lean_object* v_unused_810_; 
v_unused_810_ = lean_ctor_get(v___x_801_, 0);
lean_dec(v_unused_810_);
v___x_803_ = v___x_801_;
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
else
{
lean_dec(v___x_801_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_809_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_805_; lean_object* v___x_807_; 
v___x_805_ = l_Lean_Expr_mvarId_x21(v_a_800_);
lean_dec(v_a_800_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 0, v___x_805_);
v___x_807_ = v___x_803_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_808_; 
v_reuseFailAlloc_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_808_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_808_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
return v___x_807_;
}
}
}
else
{
lean_object* v_a_811_; lean_object* v___x_813_; uint8_t v_isShared_814_; uint8_t v_isSharedCheck_818_; 
lean_dec(v_mvarId_779_);
v_a_811_ = lean_ctor_get(v___x_799_, 0);
v_isSharedCheck_818_ = !lean_is_exclusive(v___x_799_);
if (v_isSharedCheck_818_ == 0)
{
v___x_813_ = v___x_799_;
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
else
{
lean_inc(v_a_811_);
lean_dec(v___x_799_);
v___x_813_ = lean_box(0);
v_isShared_814_ = v_isSharedCheck_818_;
goto v_resetjp_812_;
}
v_resetjp_812_:
{
lean_object* v___x_816_; 
if (v_isShared_814_ == 0)
{
v___x_816_ = v___x_813_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v_a_811_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
else
{
lean_object* v_a_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_826_; 
lean_dec_ref(v_localInstances_792_);
lean_dec_ref(v_type_791_);
lean_dec(v_userName_789_);
lean_dec(v_mvarId_779_);
v_a_819_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_826_ == 0)
{
v___x_821_ = v___x_793_;
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_a_819_);
lean_dec(v___x_793_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_826_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v___x_824_; 
if (v_isShared_822_ == 0)
{
v___x_824_ = v___x_821_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_a_819_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
else
{
lean_object* v_a_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_834_; 
lean_dec(v_mvarId_779_);
v_a_827_ = lean_ctor_get(v___x_787_, 0);
v_isSharedCheck_834_ = !lean_is_exclusive(v___x_787_);
if (v_isSharedCheck_834_ == 0)
{
v___x_829_ = v___x_787_;
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_a_827_);
lean_dec(v___x_787_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_834_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v___x_832_; 
if (v_isShared_830_ == 0)
{
v___x_832_ = v___x_829_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_a_827_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
else
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_mvarId_779_);
v_a_835_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_786_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_786_);
v___x_837_ = lean_box(0);
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
v_resetjp_836_:
{
lean_object* v___x_840_; 
if (v_isShared_838_ == 0)
{
v___x_840_ = v___x_837_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_a_835_);
v___x_840_ = v_reuseFailAlloc_841_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
return v___x_840_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_instantiateGoalMVars___boxed(lean_object* v_mvarId_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lean_MVarId_instantiateGoalMVars(v_mvarId_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1(lean_object* v_mvarId_850_, lean_object* v_val_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(v_mvarId_850_, v_val_851_, v___y_853_, v___y_855_);
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___boxed(lean_object* v_mvarId_858_, lean_object* v_val_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1(v_mvarId_858_, v_val_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0(lean_object* v_00_u03b4_866_, lean_object* v_t_867_, lean_object* v_k_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___redArg(v_t_867_, v_k_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0___boxed(lean_object* v_00_u03b4_870_, lean_object* v_t_871_, lean_object* v_k_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_instantiateLCtxMVars___at___00Lean_MVarId_instantiateGoalMVars_spec__0_spec__0(v_00_u03b4_870_, v_t_871_, v_k_872_);
lean_dec(v_k_872_);
lean_dec(v_t_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4(lean_object* v_00_u03b2_874_, lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_){
_start:
{
lean_object* v___x_878_; 
v___x_878_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4___redArg(v_x_875_, v_x_876_, v_x_877_);
return v___x_878_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_879_, lean_object* v_x_880_, size_t v_x_881_, size_t v_x_882_, lean_object* v_x_883_, lean_object* v_x_884_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___redArg(v_x_880_, v_x_881_, v_x_882_, v_x_883_, v_x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b2_886_, lean_object* v_x_887_, lean_object* v_x_888_, lean_object* v_x_889_, lean_object* v_x_890_, lean_object* v_x_891_){
_start:
{
size_t v_x_5279__boxed_892_; size_t v_x_5280__boxed_893_; lean_object* v_res_894_; 
v_x_5279__boxed_892_ = lean_unbox_usize(v_x_888_);
lean_dec(v_x_888_);
v_x_5280__boxed_893_ = lean_unbox_usize(v_x_889_);
lean_dec(v_x_889_);
v_res_894_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6(v_00_u03b2_886_, v_x_887_, v_x_5279__boxed_892_, v_x_5280__boxed_893_, v_x_890_, v_x_891_);
return v_res_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10(lean_object* v_00_u03b2_895_, lean_object* v_n_896_, lean_object* v_k_897_, lean_object* v_v_898_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10___redArg(v_n_896_, v_k_897_, v_v_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_900_, size_t v_depth_901_, lean_object* v_keys_902_, lean_object* v_vals_903_, lean_object* v_heq_904_, lean_object* v_i_905_, lean_object* v_entries_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___redArg(v_depth_901_, v_keys_902_, v_vals_903_, v_i_905_, v_entries_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11___boxed(lean_object* v_00_u03b2_908_, lean_object* v_depth_909_, lean_object* v_keys_910_, lean_object* v_vals_911_, lean_object* v_heq_912_, lean_object* v_i_913_, lean_object* v_entries_914_){
_start:
{
size_t v_depth_boxed_915_; lean_object* v_res_916_; 
v_depth_boxed_915_ = lean_unbox_usize(v_depth_909_);
lean_dec(v_depth_909_);
v_res_916_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__11(v_00_u03b2_908_, v_depth_boxed_915_, v_keys_910_, v_vals_911_, v_heq_912_, v_i_913_, v_entries_914_);
lean_dec_ref(v_vals_911_);
lean_dec_ref(v_keys_910_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10_spec__12(lean_object* v_00_u03b2_917_, lean_object* v_x_918_, lean_object* v_x_919_, lean_object* v_x_920_, lean_object* v_x_921_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1_spec__4_spec__6_spec__10_spec__12___redArg(v_x_918_, v_x_919_, v_x_920_, v_x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___lam__0(lean_object* v_k_923_, lean_object* v_b_924_, lean_object* v_c_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v___x_931_; 
lean_inc(v___y_929_);
lean_inc_ref(v___y_928_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
v___x_931_ = lean_apply_7(v_k_923_, v_b_924_, v_c_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, lean_box(0));
return v___x_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___lam__0___boxed(lean_object* v_k_932_, lean_object* v_b_933_, lean_object* v_c_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v_res_940_; 
v_res_940_ = l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___lam__0(v_k_932_, v_b_933_, v_c_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
return v_res_940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg(lean_object* v_e_941_, lean_object* v_k_942_, uint8_t v_cleanupAnnotations_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___f_949_; uint8_t v___x_950_; uint8_t v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v___f_949_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_949_, 0, v_k_942_);
v___x_950_ = 1;
v___x_951_ = 0;
v___x_952_ = lean_box(0);
v___x_953_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_941_, v___x_950_, v___x_951_, v___x_950_, v___x_951_, v___x_952_, v___f_949_, v_cleanupAnnotations_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
if (lean_obj_tag(v___x_953_) == 0)
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
v_a_954_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_953_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_953_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
v_a_962_ = lean_ctor_get(v___x_953_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_953_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_953_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_953_);
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
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_a_962_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg___boxed(lean_object* v_e_970_, lean_object* v_k_971_, lean_object* v_cleanupAnnotations_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_978_; lean_object* v_res_979_; 
v_cleanupAnnotations_boxed_978_ = lean_unbox(v_cleanupAnnotations_972_);
v_res_979_ = l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg(v_e_970_, v_k_971_, v_cleanupAnnotations_boxed_978_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0(lean_object* v_00_u03b1_980_, lean_object* v_e_981_, lean_object* v_k_982_, uint8_t v_cleanupAnnotations_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v___x_989_; 
v___x_989_ = l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg(v_e_981_, v_k_982_, v_cleanupAnnotations_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___boxed(lean_object* v_00_u03b1_990_, lean_object* v_e_991_, lean_object* v_k_992_, lean_object* v_cleanupAnnotations_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_999_; lean_object* v_res_1000_; 
v_cleanupAnnotations_boxed_999_ = lean_unbox(v_cleanupAnnotations_993_);
v_res_1000_ = l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0(v_00_u03b1_990_, v_e_991_, v_k_992_, v_cleanupAnnotations_boxed_999_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec(v___y_995_);
lean_dec_ref(v___y_994_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(lean_object* v_mvarId_1001_, lean_object* v_x_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1001_, v_x_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1016_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1016_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_1011_ = v___x_1008_;
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_a_1009_);
lean_dec(v___x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1016_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v___x_1014_; 
if (v_isShared_1012_ == 0)
{
v___x_1014_ = v___x_1011_;
goto v_reusejp_1013_;
}
else
{
lean_object* v_reuseFailAlloc_1015_; 
v_reuseFailAlloc_1015_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1015_, 0, v_a_1009_);
v___x_1014_ = v_reuseFailAlloc_1015_;
goto v_reusejp_1013_;
}
v_reusejp_1013_:
{
return v___x_1014_;
}
}
}
else
{
lean_object* v_a_1017_; lean_object* v___x_1019_; uint8_t v_isShared_1020_; uint8_t v_isSharedCheck_1024_; 
v_a_1017_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1019_ = v___x_1008_;
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
else
{
lean_inc(v_a_1017_);
lean_dec(v___x_1008_);
v___x_1019_ = lean_box(0);
v_isShared_1020_ = v_isSharedCheck_1024_;
goto v_resetjp_1018_;
}
v_resetjp_1018_:
{
lean_object* v___x_1022_; 
if (v_isShared_1020_ == 0)
{
v___x_1022_ = v___x_1019_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_a_1017_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg___boxed(lean_object* v_mvarId_1025_, lean_object* v_x_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(v_mvarId_1025_, v_x_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1(lean_object* v_00_u03b1_1033_, lean_object* v_mvarId_1034_, lean_object* v_x_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_){
_start:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(v_mvarId_1034_, v_x_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___boxed(lean_object* v_00_u03b1_1042_, lean_object* v_mvarId_1043_, lean_object* v_x_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1(v_00_u03b1_1042_, v_mvarId_1043_, v_x_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__0(uint8_t v___x_1051_, uint8_t v___x_1052_, lean_object* v_xs_1053_, lean_object* v_body_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_){
_start:
{
uint8_t v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = 1;
v___x_1061_ = l_Lean_Meta_mkForallFVars(v_xs_1053_, v_body_1054_, v___x_1051_, v___x_1052_, v___x_1052_, v___x_1060_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__0___boxed(lean_object* v___x_1062_, lean_object* v___x_1063_, lean_object* v_xs_1064_, lean_object* v_body_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
uint8_t v___x_1951__boxed_1071_; uint8_t v___x_1952__boxed_1072_; lean_object* v_res_1073_; 
v___x_1951__boxed_1071_ = lean_unbox(v___x_1062_);
v___x_1952__boxed_1072_ = lean_unbox(v___x_1063_);
v_res_1073_ = l_Lean_MVarId_abstractMVars___lam__0(v___x_1951__boxed_1071_, v___x_1952__boxed_1072_, v_xs_1064_, v_body_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_);
lean_dec(v___y_1069_);
lean_dec_ref(v___y_1068_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec_ref(v_xs_1064_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__1(lean_object* v_a_1074_, uint8_t v___x_1075_, lean_object* v___f_1076_, lean_object* v_mvarId_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Lean_Meta_abstractMVars(v_a_1074_, v___x_1075_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v_mvars_1085_; lean_object* v_expr_1086_; lean_object* v___x_1087_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref(v___x_1083_);
v_mvars_1085_ = lean_ctor_get(v_a_1084_, 1);
lean_inc_ref(v_mvars_1085_);
v_expr_1086_ = lean_ctor_get(v_a_1084_, 2);
lean_inc_ref(v_expr_1086_);
lean_dec(v_a_1084_);
v___x_1087_ = l_Lean_Meta_lambdaTelescope___at___00Lean_MVarId_abstractMVars_spec__0___redArg(v_expr_1086_, v___f_1076_, v___x_1075_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1089_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc(v_a_1088_);
lean_dec_ref(v___x_1087_);
lean_inc(v_mvarId_1077_);
v___x_1089_ = l_Lean_MVarId_getTag(v_mvarId_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1091_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref(v___x_1089_);
v___x_1091_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1088_, v_a_1090_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1102_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc_n(v_a_1092_, 2);
lean_dec_ref(v___x_1091_);
v___x_1093_ = l_Lean_mkAppN(v_a_1092_, v_mvars_1085_);
lean_dec_ref(v_mvars_1085_);
v___x_1094_ = l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(v_mvarId_1077_, v___x_1093_, v___y_1079_, v___y_1081_);
v_isSharedCheck_1102_ = !lean_is_exclusive(v___x_1094_);
if (v_isSharedCheck_1102_ == 0)
{
lean_object* v_unused_1103_; 
v_unused_1103_ = lean_ctor_get(v___x_1094_, 0);
lean_dec(v_unused_1103_);
v___x_1096_ = v___x_1094_;
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
else
{
lean_dec(v___x_1094_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1102_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1098_; lean_object* v___x_1100_; 
v___x_1098_ = l_Lean_Expr_mvarId_x21(v_a_1092_);
lean_dec(v_a_1092_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 0, v___x_1098_);
v___x_1100_ = v___x_1096_;
goto v_reusejp_1099_;
}
else
{
lean_object* v_reuseFailAlloc_1101_; 
v_reuseFailAlloc_1101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1101_, 0, v___x_1098_);
v___x_1100_ = v_reuseFailAlloc_1101_;
goto v_reusejp_1099_;
}
v_reusejp_1099_:
{
return v___x_1100_;
}
}
}
else
{
lean_object* v_a_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
lean_dec_ref(v_mvars_1085_);
lean_dec(v_mvarId_1077_);
v_a_1104_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1111_ == 0)
{
v___x_1106_ = v___x_1091_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_a_1104_);
lean_dec(v___x_1091_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1104_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
else
{
lean_object* v_a_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1119_; 
lean_dec(v_a_1088_);
lean_dec_ref(v_mvars_1085_);
lean_dec(v_mvarId_1077_);
v_a_1112_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1119_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1114_ = v___x_1089_;
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_a_1112_);
lean_dec(v___x_1089_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1119_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___x_1117_; 
if (v_isShared_1115_ == 0)
{
v___x_1117_ = v___x_1114_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_a_1112_);
v___x_1117_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
return v___x_1117_;
}
}
}
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec_ref(v_mvars_1085_);
lean_dec(v_mvarId_1077_);
v_a_1120_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1087_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1087_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
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
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_mvarId_1077_);
lean_dec_ref(v___f_1076_);
v_a_1128_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1083_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1083_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___lam__1___boxed(lean_object* v_a_1136_, lean_object* v___x_1137_, lean_object* v___f_1138_, lean_object* v_mvarId_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
uint8_t v___x_1977__boxed_1145_; lean_object* v_res_1146_; 
v___x_1977__boxed_1145_ = lean_unbox(v___x_1137_);
v_res_1146_ = l_Lean_MVarId_abstractMVars___lam__1(v_a_1136_, v___x_1977__boxed_1145_, v___f_1138_, v_mvarId_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars(lean_object* v_mvarId_1147_, lean_object* v_a_1148_, lean_object* v_a_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1153_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__1, &l_Lean_MVarId_ensureNoMVar___closed__1_once, _init_l_Lean_MVarId_ensureNoMVar___closed__1);
lean_inc(v_mvarId_1147_);
v___x_1154_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1147_, v___x_1153_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v___x_1155_; 
lean_dec_ref(v___x_1154_);
lean_inc(v_mvarId_1147_);
v___x_1155_ = l_Lean_MVarId_getType(v_mvarId_1147_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1173_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref(v___x_1155_);
v___x_1157_ = l_Lean_instantiateMVars___at___00Lean_MVarId_ensureNoMVar_spec__0___redArg(v_a_1156_, v_a_1149_, v_a_1151_);
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1160_ = v___x_1157_;
v_isShared_1161_ = v_isSharedCheck_1173_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1173_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
uint8_t v___x_1162_; 
v___x_1162_ = l_Lean_Expr_hasExprMVar(v_a_1158_);
if (v___x_1162_ == 0)
{
lean_object* v___x_1164_; 
lean_dec(v_a_1158_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v_mvarId_1147_);
v___x_1164_ = v___x_1160_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_mvarId_1147_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
else
{
uint8_t v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___f_1169_; lean_object* v___x_1170_; lean_object* v___f_1171_; lean_object* v___x_1172_; 
lean_del_object(v___x_1160_);
v___x_1166_ = 0;
v___x_1167_ = lean_box(v___x_1166_);
v___x_1168_ = lean_box(v___x_1162_);
v___f_1169_ = lean_alloc_closure((void*)(l_Lean_MVarId_abstractMVars___lam__0___boxed), 9, 2);
lean_closure_set(v___f_1169_, 0, v___x_1167_);
lean_closure_set(v___f_1169_, 1, v___x_1168_);
v___x_1170_ = lean_box(v___x_1166_);
lean_inc(v_mvarId_1147_);
v___f_1171_ = lean_alloc_closure((void*)(l_Lean_MVarId_abstractMVars___lam__1___boxed), 9, 4);
lean_closure_set(v___f_1171_, 0, v_a_1158_);
lean_closure_set(v___f_1171_, 1, v___x_1170_);
lean_closure_set(v___f_1171_, 2, v___f_1169_);
lean_closure_set(v___f_1171_, 3, v_mvarId_1147_);
v___x_1172_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(v_mvarId_1147_, v___f_1171_, v_a_1148_, v_a_1149_, v_a_1150_, v_a_1151_);
return v___x_1172_;
}
}
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
lean_dec(v_mvarId_1147_);
v_a_1174_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1155_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1155_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_dec(v_mvarId_1147_);
v_a_1182_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1154_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1154_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_abstractMVars___boxed(lean_object* v_mvarId_1190_, lean_object* v_a_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_MVarId_abstractMVars(v_mvarId_1190_, v_a_1191_, v_a_1192_, v_a_1193_, v_a_1194_);
lean_dec(v_a_1194_);
lean_dec_ref(v_a_1193_);
lean_dec(v_a_1192_);
lean_dec_ref(v_a_1191_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget___lam__0(lean_object* v_mvarId_1197_, lean_object* v___x_1198_, lean_object* v_f_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v___x_1205_; 
lean_inc(v_mvarId_1197_);
v___x_1205_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1197_, v___x_1198_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
if (lean_obj_tag(v___x_1205_) == 0)
{
lean_object* v___x_1206_; 
lean_dec_ref(v___x_1205_);
lean_inc(v_mvarId_1197_);
v___x_1206_ = l_Lean_MVarId_getTag(v_mvarId_1197_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1208_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1207_);
lean_dec_ref(v___x_1206_);
lean_inc(v_mvarId_1197_);
v___x_1208_ = l_Lean_MVarId_getType(v_mvarId_1197_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref(v___x_1208_);
lean_inc(v___y_1203_);
lean_inc_ref(v___y_1202_);
lean_inc(v___y_1201_);
lean_inc_ref(v___y_1200_);
v___x_1210_ = lean_apply_6(v_f_1199_, v_a_1209_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, lean_box(0));
if (lean_obj_tag(v___x_1210_) == 0)
{
lean_object* v_a_1211_; lean_object* v___x_1212_; 
v_a_1211_ = lean_ctor_get(v___x_1210_, 0);
lean_inc(v_a_1211_);
lean_dec_ref(v___x_1210_);
v___x_1212_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1211_, v_a_1207_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec_ref(v___y_1200_);
if (lean_obj_tag(v___x_1212_) == 0)
{
lean_object* v_a_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1222_; 
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
lean_inc_n(v_a_1213_, 2);
lean_dec_ref(v___x_1212_);
v___x_1214_ = l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(v_mvarId_1197_, v_a_1213_, v___y_1201_, v___y_1203_);
lean_dec(v___y_1203_);
lean_dec(v___y_1201_);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1222_ == 0)
{
lean_object* v_unused_1223_; 
v_unused_1223_ = lean_ctor_get(v___x_1214_, 0);
lean_dec(v_unused_1223_);
v___x_1216_ = v___x_1214_;
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
else
{
lean_dec(v___x_1214_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1222_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1218_; lean_object* v___x_1220_; 
v___x_1218_ = l_Lean_Expr_mvarId_x21(v_a_1213_);
lean_dec(v_a_1213_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 0, v___x_1218_);
v___x_1220_ = v___x_1216_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v___x_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
else
{
lean_object* v_a_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1231_; 
lean_dec(v___y_1203_);
lean_dec(v___y_1201_);
lean_dec(v_mvarId_1197_);
v_a_1224_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1226_ = v___x_1212_;
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_a_1224_);
lean_dec(v___x_1212_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1231_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1229_; 
if (v_isShared_1227_ == 0)
{
v___x_1229_ = v___x_1226_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v_a_1224_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
else
{
lean_object* v_a_1232_; lean_object* v___x_1234_; uint8_t v_isShared_1235_; uint8_t v_isSharedCheck_1239_; 
lean_dec(v_a_1207_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec(v_mvarId_1197_);
v_a_1232_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1239_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1239_ == 0)
{
v___x_1234_ = v___x_1210_;
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
else
{
lean_inc(v_a_1232_);
lean_dec(v___x_1210_);
v___x_1234_ = lean_box(0);
v_isShared_1235_ = v_isSharedCheck_1239_;
goto v_resetjp_1233_;
}
v_resetjp_1233_:
{
lean_object* v___x_1237_; 
if (v_isShared_1235_ == 0)
{
v___x_1237_ = v___x_1234_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1238_; 
v_reuseFailAlloc_1238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1238_, 0, v_a_1232_);
v___x_1237_ = v_reuseFailAlloc_1238_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
return v___x_1237_;
}
}
}
}
else
{
lean_object* v_a_1240_; lean_object* v___x_1242_; uint8_t v_isShared_1243_; uint8_t v_isSharedCheck_1247_; 
lean_dec(v_a_1207_);
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec_ref(v_f_1199_);
lean_dec(v_mvarId_1197_);
v_a_1240_ = lean_ctor_get(v___x_1208_, 0);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1208_);
if (v_isSharedCheck_1247_ == 0)
{
v___x_1242_ = v___x_1208_;
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
else
{
lean_inc(v_a_1240_);
lean_dec(v___x_1208_);
v___x_1242_ = lean_box(0);
v_isShared_1243_ = v_isSharedCheck_1247_;
goto v_resetjp_1241_;
}
v_resetjp_1241_:
{
lean_object* v___x_1245_; 
if (v_isShared_1243_ == 0)
{
v___x_1245_ = v___x_1242_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_a_1240_);
v___x_1245_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
return v___x_1245_;
}
}
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec_ref(v_f_1199_);
lean_dec(v_mvarId_1197_);
v_a_1248_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1206_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1206_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
else
{
lean_object* v_a_1256_; lean_object* v___x_1258_; uint8_t v_isShared_1259_; uint8_t v_isSharedCheck_1263_; 
lean_dec(v___y_1203_);
lean_dec_ref(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec_ref(v___y_1200_);
lean_dec_ref(v_f_1199_);
lean_dec(v_mvarId_1197_);
v_a_1256_ = lean_ctor_get(v___x_1205_, 0);
v_isSharedCheck_1263_ = !lean_is_exclusive(v___x_1205_);
if (v_isSharedCheck_1263_ == 0)
{
v___x_1258_ = v___x_1205_;
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
else
{
lean_inc(v_a_1256_);
lean_dec(v___x_1205_);
v___x_1258_ = lean_box(0);
v_isShared_1259_ = v_isSharedCheck_1263_;
goto v_resetjp_1257_;
}
v_resetjp_1257_:
{
lean_object* v___x_1261_; 
if (v_isShared_1259_ == 0)
{
v___x_1261_ = v___x_1258_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1262_; 
v_reuseFailAlloc_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1262_, 0, v_a_1256_);
v___x_1261_ = v_reuseFailAlloc_1262_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
return v___x_1261_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget___lam__0___boxed(lean_object* v_mvarId_1264_, lean_object* v___x_1265_, lean_object* v_f_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_){
_start:
{
lean_object* v_res_1272_; 
v_res_1272_ = l_Lean_MVarId_transformTarget___lam__0(v_mvarId_1264_, v___x_1265_, v_f_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget(lean_object* v_mvarId_1273_, lean_object* v_f_1274_, lean_object* v_a_1275_, lean_object* v_a_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v___x_1280_; lean_object* v___f_1281_; lean_object* v___x_1282_; 
v___x_1280_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__1, &l_Lean_MVarId_ensureNoMVar___closed__1_once, _init_l_Lean_MVarId_ensureNoMVar___closed__1);
lean_inc(v_mvarId_1273_);
v___f_1281_ = lean_alloc_closure((void*)(l_Lean_MVarId_transformTarget___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1281_, 0, v_mvarId_1273_);
lean_closure_set(v___f_1281_, 1, v___x_1280_);
lean_closure_set(v___f_1281_, 2, v_f_1274_);
v___x_1282_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(v_mvarId_1273_, v___f_1281_, v_a_1275_, v_a_1276_, v_a_1277_, v_a_1278_);
return v___x_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_transformTarget___boxed(lean_object* v_mvarId_1283_, lean_object* v_f_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v_res_1290_; 
v_res_1290_ = l_Lean_MVarId_transformTarget(v_mvarId_1283_, v_f_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_);
lean_dec(v_a_1288_);
lean_dec_ref(v_a_1287_);
lean_dec(v_a_1286_);
lean_dec_ref(v_a_1285_);
return v_res_1290_;
}
}
static lean_object* _init_l_Lean_MVarId_unfoldReducible___closed__0(void){
_start:
{
lean_object* v___x_1291_; 
v___x_1291_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_unfoldReducible___boxed), 6, 0);
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_unfoldReducible(lean_object* v_mvarId_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_, lean_object* v_a_1296_){
_start:
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1298_ = lean_obj_once(&l_Lean_MVarId_unfoldReducible___closed__0, &l_Lean_MVarId_unfoldReducible___closed__0_once, _init_l_Lean_MVarId_unfoldReducible___closed__0);
v___x_1299_ = l_Lean_MVarId_transformTarget(v_mvarId_1292_, v___x_1298_, v_a_1293_, v_a_1294_, v_a_1295_, v_a_1296_);
return v___x_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_unfoldReducible___boxed(lean_object* v_mvarId_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_){
_start:
{
lean_object* v_res_1306_; 
v_res_1306_ = l_Lean_MVarId_unfoldReducible(v_mvarId_1300_, v_a_1301_, v_a_1302_, v_a_1303_, v_a_1304_);
lean_dec(v_a_1304_);
lean_dec_ref(v_a_1303_);
lean_dec(v_a_1302_);
lean_dec_ref(v_a_1301_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce___lam__0(lean_object* v_x_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
lean_object* v___x_1313_; 
v___x_1313_ = l_Lean_Core_betaReduce(v_x_1307_, v___y_1310_, v___y_1311_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce___lam__0___boxed(lean_object* v_x_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
lean_object* v_res_1320_; 
v_res_1320_ = l_Lean_MVarId_betaReduce___lam__0(v_x_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
return v_res_1320_;
}
}
static lean_object* _init_l_Lean_MVarId_betaReduce___closed__0(void){
_start:
{
lean_object* v___f_1321_; 
v___f_1321_ = lean_alloc_closure((void*)(l_Lean_MVarId_betaReduce___lam__0___boxed), 6, 0);
return v___f_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce(lean_object* v_mvarId_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
lean_object* v___f_1328_; lean_object* v___x_1329_; 
v___f_1328_ = lean_obj_once(&l_Lean_MVarId_betaReduce___closed__0, &l_Lean_MVarId_betaReduce___closed__0_once, _init_l_Lean_MVarId_betaReduce___closed__0);
v___x_1329_ = l_Lean_MVarId_transformTarget(v_mvarId_1322_, v___f_1328_, v_a_1323_, v_a_1324_, v_a_1325_, v_a_1326_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_betaReduce___boxed(lean_object* v_mvarId_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_){
_start:
{
lean_object* v_res_1336_; 
v_res_1336_ = l_Lean_MVarId_betaReduce(v_mvarId_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_);
lean_dec(v_a_1334_);
lean_dec_ref(v_a_1333_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
return v_res_1336_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_mk_string_unchecked("False", 5, 5);
return v___x_1337_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1338_; lean_object* v___x_1339_; 
v___x_1338_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___lam__0___closed__0, &l_Lean_MVarId_byContra_x3f___lam__0___closed__0_once, _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__0);
v___x_1339_ = l_Lean_Name_mkStr1(v___x_1338_);
return v___x_1339_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1340_ = lean_box(0);
v___x_1341_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___lam__0___closed__1, &l_Lean_MVarId_byContra_x3f___lam__0___closed__1_once, _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__1);
v___x_1342_ = l_Lean_mkConst(v___x_1341_, v___x_1340_);
return v___x_1342_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1343_; 
v___x_1343_ = lean_mk_string_unchecked("Classical", 9, 9);
return v___x_1343_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_mk_string_unchecked("byContradiction", 15, 15);
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1345_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___lam__0___closed__4, &l_Lean_MVarId_byContra_x3f___lam__0___closed__4_once, _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__4);
v___x_1346_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___lam__0___closed__3, &l_Lean_MVarId_byContra_x3f___lam__0___closed__3_once, _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__3);
v___x_1347_ = l_Lean_Name_mkStr2(v___x_1346_, v___x_1345_);
return v___x_1347_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__6(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1348_ = lean_box(0);
v___x_1349_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___lam__0___closed__5, &l_Lean_MVarId_byContra_x3f___lam__0___closed__5_once, _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__5);
v___x_1350_ = l_Lean_mkConst(v___x_1349_, v___x_1348_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f___lam__0(lean_object* v_mvarId_1351_, lean_object* v___x_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_){
_start:
{
lean_object* v___x_1358_; 
lean_inc(v_mvarId_1351_);
v___x_1358_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1351_, v___x_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v___x_1359_; 
lean_dec_ref(v___x_1358_);
lean_inc(v_mvarId_1351_);
v___x_1359_ = l_Lean_MVarId_getType(v_mvarId_1351_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; lean_object* v___x_1362_; uint8_t v_isShared_1363_; uint8_t v_isSharedCheck_1414_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1362_ = v___x_1359_;
v_isShared_1363_ = v_isSharedCheck_1414_;
goto v_resetjp_1361_;
}
else
{
lean_inc(v_a_1360_);
lean_dec(v___x_1359_);
v___x_1362_ = lean_box(0);
v_isShared_1363_ = v_isSharedCheck_1414_;
goto v_resetjp_1361_;
}
v_resetjp_1361_:
{
uint8_t v___x_1364_; 
lean_inc(v_a_1360_);
v___x_1364_ = l_Lean_Expr_isFalse(v_a_1360_);
if (v___x_1364_ == 0)
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
lean_del_object(v___x_1362_);
lean_inc(v_a_1360_);
v___x_1365_ = l_Lean_mkNot(v_a_1360_);
v___x_1366_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___lam__0___closed__2, &l_Lean_MVarId_byContra_x3f___lam__0___closed__2_once, _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__2);
v___x_1367_ = l_Lean_mkArrow(v___x_1365_, v___x_1366_, v___y_1355_, v___y_1356_);
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; lean_object* v___x_1369_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref(v___x_1367_);
lean_inc(v_mvarId_1351_);
v___x_1369_ = l_Lean_MVarId_getTag(v_mvarId_1351_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; lean_object* v___x_1371_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
lean_inc(v_a_1370_);
lean_dec_ref(v___x_1369_);
v___x_1371_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1368_, v_a_1370_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_);
if (lean_obj_tag(v___x_1371_) == 0)
{
lean_object* v_a_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1384_; 
v_a_1372_ = lean_ctor_get(v___x_1371_, 0);
lean_inc_n(v_a_1372_, 2);
lean_dec_ref(v___x_1371_);
v___x_1373_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___lam__0___closed__6, &l_Lean_MVarId_byContra_x3f___lam__0___closed__6_once, _init_l_Lean_MVarId_byContra_x3f___lam__0___closed__6);
v___x_1374_ = l_Lean_mkAppB(v___x_1373_, v_a_1360_, v_a_1372_);
v___x_1375_ = l_Lean_MVarId_assign___at___00Lean_MVarId_instantiateGoalMVars_spec__1___redArg(v_mvarId_1351_, v___x_1374_, v___y_1354_, v___y_1356_);
v_isSharedCheck_1384_ = !lean_is_exclusive(v___x_1375_);
if (v_isSharedCheck_1384_ == 0)
{
lean_object* v_unused_1385_; 
v_unused_1385_ = lean_ctor_get(v___x_1375_, 0);
lean_dec(v_unused_1385_);
v___x_1377_ = v___x_1375_;
v_isShared_1378_ = v_isSharedCheck_1384_;
goto v_resetjp_1376_;
}
else
{
lean_dec(v___x_1375_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1384_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1382_; 
v___x_1379_ = l_Lean_Expr_mvarId_x21(v_a_1372_);
lean_dec(v_a_1372_);
v___x_1380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
if (v_isShared_1378_ == 0)
{
lean_ctor_set(v___x_1377_, 0, v___x_1380_);
v___x_1382_ = v___x_1377_;
goto v_reusejp_1381_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1380_);
v___x_1382_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1381_;
}
v_reusejp_1381_:
{
return v___x_1382_;
}
}
}
else
{
lean_object* v_a_1386_; lean_object* v___x_1388_; uint8_t v_isShared_1389_; uint8_t v_isSharedCheck_1393_; 
lean_dec(v_a_1360_);
lean_dec(v_mvarId_1351_);
v_a_1386_ = lean_ctor_get(v___x_1371_, 0);
v_isSharedCheck_1393_ = !lean_is_exclusive(v___x_1371_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1388_ = v___x_1371_;
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
else
{
lean_inc(v_a_1386_);
lean_dec(v___x_1371_);
v___x_1388_ = lean_box(0);
v_isShared_1389_ = v_isSharedCheck_1393_;
goto v_resetjp_1387_;
}
v_resetjp_1387_:
{
lean_object* v___x_1391_; 
if (v_isShared_1389_ == 0)
{
v___x_1391_ = v___x_1388_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_a_1386_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
else
{
lean_object* v_a_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1401_; 
lean_dec(v_a_1368_);
lean_dec(v_a_1360_);
lean_dec(v_mvarId_1351_);
v_a_1394_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1396_ = v___x_1369_;
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_a_1394_);
lean_dec(v___x_1369_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1401_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v___x_1399_; 
if (v_isShared_1397_ == 0)
{
v___x_1399_ = v___x_1396_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_a_1394_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
}
}
else
{
lean_object* v_a_1402_; lean_object* v___x_1404_; uint8_t v_isShared_1405_; uint8_t v_isSharedCheck_1409_; 
lean_dec(v_a_1360_);
lean_dec(v_mvarId_1351_);
v_a_1402_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1409_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1409_ == 0)
{
v___x_1404_ = v___x_1367_;
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
else
{
lean_inc(v_a_1402_);
lean_dec(v___x_1367_);
v___x_1404_ = lean_box(0);
v_isShared_1405_ = v_isSharedCheck_1409_;
goto v_resetjp_1403_;
}
v_resetjp_1403_:
{
lean_object* v___x_1407_; 
if (v_isShared_1405_ == 0)
{
v___x_1407_ = v___x_1404_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_a_1402_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
lean_dec(v_a_1360_);
lean_dec(v_mvarId_1351_);
v___x_1410_ = lean_box(0);
if (v_isShared_1363_ == 0)
{
lean_ctor_set(v___x_1362_, 0, v___x_1410_);
v___x_1412_ = v___x_1362_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec(v_mvarId_1351_);
v_a_1415_ = lean_ctor_get(v___x_1359_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1359_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1359_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1359_);
v___x_1417_ = lean_box(0);
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
v_resetjp_1416_:
{
lean_object* v___x_1420_; 
if (v_isShared_1418_ == 0)
{
v___x_1420_ = v___x_1417_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v_a_1415_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec(v_mvarId_1351_);
v_a_1423_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1358_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1358_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1428_; 
if (v_isShared_1426_ == 0)
{
v___x_1428_ = v___x_1425_;
goto v_reusejp_1427_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v_a_1423_);
v___x_1428_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1427_;
}
v_reusejp_1427_:
{
return v___x_1428_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f___lam__0___boxed(lean_object* v_mvarId_1431_, lean_object* v___x_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l_Lean_MVarId_byContra_x3f___lam__0(v_mvarId_1431_, v___x_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
return v_res_1438_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___closed__0(void){
_start:
{
lean_object* v___x_1439_; 
v___x_1439_ = lean_mk_string_unchecked("by_contra", 9, 9);
return v___x_1439_;
}
}
static lean_object* _init_l_Lean_MVarId_byContra_x3f___closed__1(void){
_start:
{
lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1440_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___closed__0, &l_Lean_MVarId_byContra_x3f___closed__0_once, _init_l_Lean_MVarId_byContra_x3f___closed__0);
v___x_1441_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__0, &l_Lean_MVarId_ensureNoMVar___closed__0_once, _init_l_Lean_MVarId_ensureNoMVar___closed__0);
v___x_1442_ = l_Lean_Name_mkStr2(v___x_1441_, v___x_1440_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f(lean_object* v_mvarId_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_){
_start:
{
lean_object* v___x_1449_; lean_object* v___f_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_obj_once(&l_Lean_MVarId_byContra_x3f___closed__1, &l_Lean_MVarId_byContra_x3f___closed__1_once, _init_l_Lean_MVarId_byContra_x3f___closed__1);
lean_inc(v_mvarId_1443_);
v___f_1450_ = lean_alloc_closure((void*)(l_Lean_MVarId_byContra_x3f___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1450_, 0, v_mvarId_1443_);
lean_closure_set(v___f_1450_, 1, v___x_1449_);
v___x_1451_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(v_mvarId_1443_, v___f_1450_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byContra_x3f___boxed(lean_object* v_mvarId_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_){
_start:
{
lean_object* v_res_1458_; 
v_res_1458_ = l_Lean_MVarId_byContra_x3f(v_mvarId_1452_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_);
lean_dec(v_a_1456_);
lean_dec_ref(v_a_1455_);
lean_dec(v_a_1454_);
lean_dec_ref(v_a_1453_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_as_1459_, size_t v_sz_1460_, size_t v_i_1461_, lean_object* v_b_1462_){
_start:
{
uint8_t v___x_1464_; 
v___x_1464_ = lean_usize_dec_lt(v_i_1461_, v_sz_1460_);
if (v___x_1464_ == 0)
{
lean_object* v___x_1465_; 
v___x_1465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1465_, 0, v_b_1462_);
return v___x_1465_;
}
else
{
lean_object* v_snd_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1484_; 
v_snd_1466_ = lean_ctor_get(v_b_1462_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_b_1462_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v_b_1462_, 0);
lean_dec(v_unused_1485_);
v___x_1468_ = v_b_1462_;
v_isShared_1469_ = v_isSharedCheck_1484_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_snd_1466_);
lean_dec(v_b_1462_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1484_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v_a_1472_; lean_object* v_a_1479_; 
v___x_1470_ = lean_box(0);
v_a_1479_ = lean_array_uget_borrowed(v_as_1459_, v_i_1461_);
if (lean_obj_tag(v_a_1479_) == 0)
{
v_a_1472_ = v_snd_1466_;
goto v___jp_1471_;
}
else
{
lean_object* v_val_1480_; uint8_t v___x_1481_; 
v_val_1480_ = lean_ctor_get(v_a_1479_, 0);
v___x_1481_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1480_);
if (v___x_1481_ == 0)
{
v_a_1472_ = v_snd_1466_;
goto v___jp_1471_;
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; 
v___x_1482_ = l_Lean_LocalDecl_fvarId(v_val_1480_);
v___x_1483_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1483_, 0, v___x_1482_);
lean_ctor_set(v___x_1483_, 1, v_snd_1466_);
v_a_1472_ = v___x_1483_;
goto v___jp_1471_;
}
}
v___jp_1471_:
{
lean_object* v___x_1474_; 
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 1, v_a_1472_);
lean_ctor_set(v___x_1468_, 0, v___x_1470_);
v___x_1474_ = v___x_1468_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1470_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_a_1472_);
v___x_1474_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
size_t v___x_1475_; size_t v___x_1476_; 
v___x_1475_ = ((size_t)1ULL);
v___x_1476_ = lean_usize_add(v_i_1461_, v___x_1475_);
v_i_1461_ = v___x_1476_;
v_b_1462_ = v___x_1474_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_as_1486_, lean_object* v_sz_1487_, lean_object* v_i_1488_, lean_object* v_b_1489_, lean_object* v___y_1490_){
_start:
{
size_t v_sz_boxed_1491_; size_t v_i_boxed_1492_; lean_object* v_res_1493_; 
v_sz_boxed_1491_ = lean_unbox_usize(v_sz_1487_);
lean_dec(v_sz_1487_);
v_i_boxed_1492_ = lean_unbox_usize(v_i_1488_);
lean_dec(v_i_1488_);
v_res_1493_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___redArg(v_as_1486_, v_sz_boxed_1491_, v_i_boxed_1492_, v_b_1489_);
lean_dec_ref(v_as_1486_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2(lean_object* v_as_1494_, size_t v_sz_1495_, size_t v_i_1496_, lean_object* v_b_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
uint8_t v___x_1503_; 
v___x_1503_ = lean_usize_dec_lt(v_i_1496_, v_sz_1495_);
if (v___x_1503_ == 0)
{
lean_object* v___x_1504_; 
v___x_1504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1504_, 0, v_b_1497_);
return v___x_1504_;
}
else
{
lean_object* v_snd_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1523_; 
v_snd_1505_ = lean_ctor_get(v_b_1497_, 1);
v_isSharedCheck_1523_ = !lean_is_exclusive(v_b_1497_);
if (v_isSharedCheck_1523_ == 0)
{
lean_object* v_unused_1524_; 
v_unused_1524_ = lean_ctor_get(v_b_1497_, 0);
lean_dec(v_unused_1524_);
v___x_1507_ = v_b_1497_;
v_isShared_1508_ = v_isSharedCheck_1523_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_snd_1505_);
lean_dec(v_b_1497_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1523_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v_a_1511_; lean_object* v_a_1518_; 
v___x_1509_ = lean_box(0);
v_a_1518_ = lean_array_uget_borrowed(v_as_1494_, v_i_1496_);
if (lean_obj_tag(v_a_1518_) == 0)
{
v_a_1511_ = v_snd_1505_;
goto v___jp_1510_;
}
else
{
lean_object* v_val_1519_; uint8_t v___x_1520_; 
v_val_1519_ = lean_ctor_get(v_a_1518_, 0);
v___x_1520_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1519_);
if (v___x_1520_ == 0)
{
v_a_1511_ = v_snd_1505_;
goto v___jp_1510_;
}
else
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
v___x_1521_ = l_Lean_LocalDecl_fvarId(v_val_1519_);
v___x_1522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1522_, 0, v___x_1521_);
lean_ctor_set(v___x_1522_, 1, v_snd_1505_);
v_a_1511_ = v___x_1522_;
goto v___jp_1510_;
}
}
v___jp_1510_:
{
lean_object* v___x_1513_; 
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 1, v_a_1511_);
lean_ctor_set(v___x_1507_, 0, v___x_1509_);
v___x_1513_ = v___x_1507_;
goto v_reusejp_1512_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1517_, 1, v_a_1511_);
v___x_1513_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1512_;
}
v_reusejp_1512_:
{
size_t v___x_1514_; size_t v___x_1515_; lean_object* v___x_1516_; 
v___x_1514_ = ((size_t)1ULL);
v___x_1515_ = lean_usize_add(v_i_1496_, v___x_1514_);
v___x_1516_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___redArg(v_as_1494_, v_sz_1495_, v___x_1515_, v___x_1513_);
return v___x_1516_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2___boxed(lean_object* v_as_1525_, lean_object* v_sz_1526_, lean_object* v_i_1527_, lean_object* v_b_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
size_t v_sz_boxed_1534_; size_t v_i_boxed_1535_; lean_object* v_res_1536_; 
v_sz_boxed_1534_ = lean_unbox_usize(v_sz_1526_);
lean_dec(v_sz_1526_);
v_i_boxed_1535_ = lean_unbox_usize(v_i_1527_);
lean_dec(v_i_1527_);
v_res_1536_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2(v_as_1525_, v_sz_boxed_1534_, v_i_boxed_1535_, v_b_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec_ref(v_as_1525_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0(lean_object* v_init_1537_, lean_object* v_n_1538_, lean_object* v_b_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
if (lean_obj_tag(v_n_1538_) == 0)
{
lean_object* v_cs_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; size_t v_sz_1548_; size_t v___x_1549_; lean_object* v___x_1550_; 
v_cs_1545_ = lean_ctor_get(v_n_1538_, 0);
v___x_1546_ = lean_box(0);
v___x_1547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
lean_ctor_set(v___x_1547_, 1, v_b_1539_);
v_sz_1548_ = lean_array_size(v_cs_1545_);
v___x_1549_ = ((size_t)0ULL);
v___x_1550_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__1(v_init_1537_, v_cs_1545_, v_sz_1548_, v___x_1549_, v___x_1547_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v_a_1551_; lean_object* v___x_1553_; uint8_t v_isShared_1554_; uint8_t v_isSharedCheck_1565_; 
v_a_1551_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1553_ = v___x_1550_;
v_isShared_1554_ = v_isSharedCheck_1565_;
goto v_resetjp_1552_;
}
else
{
lean_inc(v_a_1551_);
lean_dec(v___x_1550_);
v___x_1553_ = lean_box(0);
v_isShared_1554_ = v_isSharedCheck_1565_;
goto v_resetjp_1552_;
}
v_resetjp_1552_:
{
lean_object* v_fst_1555_; 
v_fst_1555_ = lean_ctor_get(v_a_1551_, 0);
if (lean_obj_tag(v_fst_1555_) == 0)
{
lean_object* v_snd_1556_; lean_object* v___x_1557_; lean_object* v___x_1559_; 
v_snd_1556_ = lean_ctor_get(v_a_1551_, 1);
lean_inc(v_snd_1556_);
lean_dec(v_a_1551_);
v___x_1557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1557_, 0, v_snd_1556_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v___x_1557_);
v___x_1559_ = v___x_1553_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v___x_1557_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
else
{
lean_object* v_val_1561_; lean_object* v___x_1563_; 
lean_inc_ref(v_fst_1555_);
lean_dec(v_a_1551_);
v_val_1561_ = lean_ctor_get(v_fst_1555_, 0);
lean_inc(v_val_1561_);
lean_dec_ref(v_fst_1555_);
if (v_isShared_1554_ == 0)
{
lean_ctor_set(v___x_1553_, 0, v_val_1561_);
v___x_1563_ = v___x_1553_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_val_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
v_a_1566_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1550_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1550_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
v___x_1571_ = v_reuseFailAlloc_1572_;
goto v_reusejp_1570_;
}
v_reusejp_1570_:
{
return v___x_1571_;
}
}
}
}
else
{
lean_object* v_vs_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; size_t v_sz_1577_; size_t v___x_1578_; lean_object* v___x_1579_; 
v_vs_1574_ = lean_ctor_get(v_n_1538_, 0);
v___x_1575_ = lean_box(0);
v___x_1576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
lean_ctor_set(v___x_1576_, 1, v_b_1539_);
v_sz_1577_ = lean_array_size(v_vs_1574_);
v___x_1578_ = ((size_t)0ULL);
v___x_1579_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2(v_vs_1574_, v_sz_1577_, v___x_1578_, v___x_1576_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1594_; 
v_a_1580_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1594_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1594_ == 0)
{
v___x_1582_ = v___x_1579_;
v_isShared_1583_ = v_isSharedCheck_1594_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1579_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1594_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v_fst_1584_; 
v_fst_1584_ = lean_ctor_get(v_a_1580_, 0);
if (lean_obj_tag(v_fst_1584_) == 0)
{
lean_object* v_snd_1585_; lean_object* v___x_1586_; lean_object* v___x_1588_; 
v_snd_1585_ = lean_ctor_get(v_a_1580_, 1);
lean_inc(v_snd_1585_);
lean_dec(v_a_1580_);
v___x_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1586_, 0, v_snd_1585_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v___x_1586_);
v___x_1588_ = v___x_1582_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
else
{
lean_object* v_val_1590_; lean_object* v___x_1592_; 
lean_inc_ref(v_fst_1584_);
lean_dec(v_a_1580_);
v_val_1590_ = lean_ctor_get(v_fst_1584_, 0);
lean_inc(v_val_1590_);
lean_dec_ref(v_fst_1584_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 0, v_val_1590_);
v___x_1592_ = v___x_1582_;
goto v_reusejp_1591_;
}
else
{
lean_object* v_reuseFailAlloc_1593_; 
v_reuseFailAlloc_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1593_, 0, v_val_1590_);
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
else
{
lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1602_; 
v_a_1595_ = lean_ctor_get(v___x_1579_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1597_ = v___x_1579_;
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_dec(v___x_1579_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1602_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1600_; 
if (v_isShared_1598_ == 0)
{
v___x_1600_ = v___x_1597_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_a_1595_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__1(lean_object* v_init_1603_, lean_object* v_as_1604_, size_t v_sz_1605_, size_t v_i_1606_, lean_object* v_b_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
uint8_t v___x_1613_; 
v___x_1613_ = lean_usize_dec_lt(v_i_1606_, v_sz_1605_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; 
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v_b_1607_);
return v___x_1614_;
}
else
{
lean_object* v_snd_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1649_; 
v_snd_1615_ = lean_ctor_get(v_b_1607_, 1);
v_isSharedCheck_1649_ = !lean_is_exclusive(v_b_1607_);
if (v_isSharedCheck_1649_ == 0)
{
lean_object* v_unused_1650_; 
v_unused_1650_ = lean_ctor_get(v_b_1607_, 0);
lean_dec(v_unused_1650_);
v___x_1617_ = v_b_1607_;
v_isShared_1618_ = v_isSharedCheck_1649_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_snd_1615_);
lean_dec(v_b_1607_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1649_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v_a_1619_; lean_object* v___x_1620_; 
v_a_1619_ = lean_array_uget_borrowed(v_as_1604_, v_i_1606_);
lean_inc(v_snd_1615_);
v___x_1620_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0(v_init_1603_, v_a_1619_, v_snd_1615_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_object* v_a_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1640_; 
v_a_1621_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1640_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1640_ == 0)
{
v___x_1623_ = v___x_1620_;
v_isShared_1624_ = v_isSharedCheck_1640_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_a_1621_);
lean_dec(v___x_1620_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1640_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
if (lean_obj_tag(v_a_1621_) == 0)
{
lean_object* v___x_1625_; lean_object* v___x_1627_; 
v___x_1625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1625_, 0, v_a_1621_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 0, v___x_1625_);
v___x_1627_ = v___x_1617_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v___x_1625_);
lean_ctor_set(v_reuseFailAlloc_1631_, 1, v_snd_1615_);
v___x_1627_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
lean_object* v___x_1629_; 
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 0, v___x_1627_);
v___x_1629_ = v___x_1623_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1630_; 
v_reuseFailAlloc_1630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1630_, 0, v___x_1627_);
v___x_1629_ = v_reuseFailAlloc_1630_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
return v___x_1629_;
}
}
}
else
{
lean_object* v_a_1632_; lean_object* v___x_1633_; lean_object* v___x_1635_; 
lean_del_object(v___x_1623_);
lean_dec(v_snd_1615_);
v_a_1632_ = lean_ctor_get(v_a_1621_, 0);
lean_inc(v_a_1632_);
lean_dec_ref(v_a_1621_);
v___x_1633_ = lean_box(0);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 1, v_a_1632_);
lean_ctor_set(v___x_1617_, 0, v___x_1633_);
v___x_1635_ = v___x_1617_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1639_; 
v_reuseFailAlloc_1639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1639_, 0, v___x_1633_);
lean_ctor_set(v_reuseFailAlloc_1639_, 1, v_a_1632_);
v___x_1635_ = v_reuseFailAlloc_1639_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
size_t v___x_1636_; size_t v___x_1637_; 
v___x_1636_ = ((size_t)1ULL);
v___x_1637_ = lean_usize_add(v_i_1606_, v___x_1636_);
v_i_1606_ = v___x_1637_;
v_b_1607_ = v___x_1635_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
lean_del_object(v___x_1617_);
lean_dec(v_snd_1615_);
v_a_1641_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1620_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1620_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__1___boxed(lean_object* v_init_1651_, lean_object* v_as_1652_, lean_object* v_sz_1653_, lean_object* v_i_1654_, lean_object* v_b_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_){
_start:
{
size_t v_sz_boxed_1661_; size_t v_i_boxed_1662_; lean_object* v_res_1663_; 
v_sz_boxed_1661_ = lean_unbox_usize(v_sz_1653_);
lean_dec(v_sz_1653_);
v_i_boxed_1662_ = lean_unbox_usize(v_i_1654_);
lean_dec(v_i_1654_);
v_res_1663_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__1(v_init_1651_, v_as_1652_, v_sz_boxed_1661_, v_i_boxed_1662_, v_b_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1657_);
lean_dec_ref(v___y_1656_);
lean_dec_ref(v_as_1652_);
lean_dec(v_init_1651_);
return v_res_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0___boxed(lean_object* v_init_1664_, lean_object* v_n_1665_, lean_object* v_b_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_){
_start:
{
lean_object* v_res_1672_; 
v_res_1672_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0(v_init_1664_, v_n_1665_, v_b_1666_, v___y_1667_, v___y_1668_, v___y_1669_, v___y_1670_);
lean_dec(v___y_1670_);
lean_dec_ref(v___y_1669_);
lean_dec(v___y_1668_);
lean_dec_ref(v___y_1667_);
lean_dec_ref(v_n_1665_);
lean_dec(v_init_1664_);
return v_res_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___redArg(lean_object* v_as_1673_, size_t v_sz_1674_, size_t v_i_1675_, lean_object* v_b_1676_){
_start:
{
uint8_t v___x_1678_; 
v___x_1678_ = lean_usize_dec_lt(v_i_1675_, v_sz_1674_);
if (v___x_1678_ == 0)
{
lean_object* v___x_1679_; 
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v_b_1676_);
return v___x_1679_;
}
else
{
lean_object* v_snd_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1698_; 
v_snd_1680_ = lean_ctor_get(v_b_1676_, 1);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_b_1676_);
if (v_isSharedCheck_1698_ == 0)
{
lean_object* v_unused_1699_; 
v_unused_1699_ = lean_ctor_get(v_b_1676_, 0);
lean_dec(v_unused_1699_);
v___x_1682_ = v_b_1676_;
v_isShared_1683_ = v_isSharedCheck_1698_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_snd_1680_);
lean_dec(v_b_1676_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1698_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1684_; lean_object* v_a_1686_; lean_object* v_a_1693_; 
v___x_1684_ = lean_box(0);
v_a_1693_ = lean_array_uget_borrowed(v_as_1673_, v_i_1675_);
if (lean_obj_tag(v_a_1693_) == 0)
{
v_a_1686_ = v_snd_1680_;
goto v___jp_1685_;
}
else
{
lean_object* v_val_1694_; uint8_t v___x_1695_; 
v_val_1694_ = lean_ctor_get(v_a_1693_, 0);
v___x_1695_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1694_);
if (v___x_1695_ == 0)
{
v_a_1686_ = v_snd_1680_;
goto v___jp_1685_;
}
else
{
lean_object* v___x_1696_; lean_object* v___x_1697_; 
v___x_1696_ = l_Lean_LocalDecl_fvarId(v_val_1694_);
v___x_1697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1697_, 0, v___x_1696_);
lean_ctor_set(v___x_1697_, 1, v_snd_1680_);
v_a_1686_ = v___x_1697_;
goto v___jp_1685_;
}
}
v___jp_1685_:
{
lean_object* v___x_1688_; 
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 1, v_a_1686_);
lean_ctor_set(v___x_1682_, 0, v___x_1684_);
v___x_1688_ = v___x_1682_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1692_; 
v_reuseFailAlloc_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1692_, 0, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1692_, 1, v_a_1686_);
v___x_1688_ = v_reuseFailAlloc_1692_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
size_t v___x_1689_; size_t v___x_1690_; 
v___x_1689_ = ((size_t)1ULL);
v___x_1690_ = lean_usize_add(v_i_1675_, v___x_1689_);
v_i_1675_ = v___x_1690_;
v_b_1676_ = v___x_1688_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_as_1700_, lean_object* v_sz_1701_, lean_object* v_i_1702_, lean_object* v_b_1703_, lean_object* v___y_1704_){
_start:
{
size_t v_sz_boxed_1705_; size_t v_i_boxed_1706_; lean_object* v_res_1707_; 
v_sz_boxed_1705_ = lean_unbox_usize(v_sz_1701_);
lean_dec(v_sz_1701_);
v_i_boxed_1706_ = lean_unbox_usize(v_i_1702_);
lean_dec(v_i_1702_);
v_res_1707_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___redArg(v_as_1700_, v_sz_boxed_1705_, v_i_boxed_1706_, v_b_1703_);
lean_dec_ref(v_as_1700_);
return v_res_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1(lean_object* v_as_1708_, size_t v_sz_1709_, size_t v_i_1710_, lean_object* v_b_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
uint8_t v___x_1717_; 
v___x_1717_ = lean_usize_dec_lt(v_i_1710_, v_sz_1709_);
if (v___x_1717_ == 0)
{
lean_object* v___x_1718_; 
v___x_1718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1718_, 0, v_b_1711_);
return v___x_1718_;
}
else
{
lean_object* v_snd_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1737_; 
v_snd_1719_ = lean_ctor_get(v_b_1711_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v_b_1711_);
if (v_isSharedCheck_1737_ == 0)
{
lean_object* v_unused_1738_; 
v_unused_1738_ = lean_ctor_get(v_b_1711_, 0);
lean_dec(v_unused_1738_);
v___x_1721_ = v_b_1711_;
v_isShared_1722_ = v_isSharedCheck_1737_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_snd_1719_);
lean_dec(v_b_1711_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1737_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1723_; lean_object* v_a_1725_; lean_object* v_a_1732_; 
v___x_1723_ = lean_box(0);
v_a_1732_ = lean_array_uget_borrowed(v_as_1708_, v_i_1710_);
if (lean_obj_tag(v_a_1732_) == 0)
{
v_a_1725_ = v_snd_1719_;
goto v___jp_1724_;
}
else
{
lean_object* v_val_1733_; uint8_t v___x_1734_; 
v_val_1733_ = lean_ctor_get(v_a_1732_, 0);
v___x_1734_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1733_);
if (v___x_1734_ == 0)
{
v_a_1725_ = v_snd_1719_;
goto v___jp_1724_;
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = l_Lean_LocalDecl_fvarId(v_val_1733_);
v___x_1736_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
lean_ctor_set(v___x_1736_, 1, v_snd_1719_);
v_a_1725_ = v___x_1736_;
goto v___jp_1724_;
}
}
v___jp_1724_:
{
lean_object* v___x_1727_; 
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 1, v_a_1725_);
lean_ctor_set(v___x_1721_, 0, v___x_1723_);
v___x_1727_ = v___x_1721_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v___x_1723_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v_a_1725_);
v___x_1727_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
size_t v___x_1728_; size_t v___x_1729_; lean_object* v___x_1730_; 
v___x_1728_ = ((size_t)1ULL);
v___x_1729_ = lean_usize_add(v_i_1710_, v___x_1728_);
v___x_1730_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___redArg(v_as_1708_, v_sz_1709_, v___x_1729_, v___x_1727_);
return v___x_1730_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1___boxed(lean_object* v_as_1739_, lean_object* v_sz_1740_, lean_object* v_i_1741_, lean_object* v_b_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_){
_start:
{
size_t v_sz_boxed_1748_; size_t v_i_boxed_1749_; lean_object* v_res_1750_; 
v_sz_boxed_1748_ = lean_unbox_usize(v_sz_1740_);
lean_dec(v_sz_1740_);
v_i_boxed_1749_ = lean_unbox_usize(v_i_1741_);
lean_dec(v_i_1741_);
v_res_1750_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1(v_as_1739_, v_sz_boxed_1748_, v_i_boxed_1749_, v_b_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_);
lean_dec(v___y_1746_);
lean_dec_ref(v___y_1745_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec_ref(v_as_1739_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0(lean_object* v_t_1751_, lean_object* v_init_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_){
_start:
{
lean_object* v_root_1758_; lean_object* v_tail_1759_; lean_object* v___x_1760_; 
v_root_1758_ = lean_ctor_get(v_t_1751_, 0);
v_tail_1759_ = lean_ctor_get(v_t_1751_, 1);
lean_inc(v_init_1752_);
v___x_1760_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0(v_init_1752_, v_root_1758_, v_init_1752_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
lean_dec(v_init_1752_);
if (lean_obj_tag(v___x_1760_) == 0)
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1797_; 
v_a_1761_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1797_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1797_ == 0)
{
v___x_1763_ = v___x_1760_;
v_isShared_1764_ = v_isSharedCheck_1797_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1760_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1797_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
if (lean_obj_tag(v_a_1761_) == 0)
{
lean_object* v_a_1765_; lean_object* v___x_1767_; 
v_a_1765_ = lean_ctor_get(v_a_1761_, 0);
lean_inc(v_a_1765_);
lean_dec_ref(v_a_1761_);
if (v_isShared_1764_ == 0)
{
lean_ctor_set(v___x_1763_, 0, v_a_1765_);
v___x_1767_ = v___x_1763_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v_a_1765_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
else
{
lean_object* v_a_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; size_t v_sz_1772_; size_t v___x_1773_; lean_object* v___x_1774_; 
lean_del_object(v___x_1763_);
v_a_1769_ = lean_ctor_get(v_a_1761_, 0);
lean_inc(v_a_1769_);
lean_dec_ref(v_a_1761_);
v___x_1770_ = lean_box(0);
v___x_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1771_, 0, v___x_1770_);
lean_ctor_set(v___x_1771_, 1, v_a_1769_);
v_sz_1772_ = lean_array_size(v_tail_1759_);
v___x_1773_ = ((size_t)0ULL);
v___x_1774_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1(v_tail_1759_, v_sz_1772_, v___x_1773_, v___x_1771_, v___y_1753_, v___y_1754_, v___y_1755_, v___y_1756_);
if (lean_obj_tag(v___x_1774_) == 0)
{
lean_object* v_a_1775_; lean_object* v___x_1777_; uint8_t v_isShared_1778_; uint8_t v_isSharedCheck_1788_; 
v_a_1775_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1777_ = v___x_1774_;
v_isShared_1778_ = v_isSharedCheck_1788_;
goto v_resetjp_1776_;
}
else
{
lean_inc(v_a_1775_);
lean_dec(v___x_1774_);
v___x_1777_ = lean_box(0);
v_isShared_1778_ = v_isSharedCheck_1788_;
goto v_resetjp_1776_;
}
v_resetjp_1776_:
{
lean_object* v_fst_1779_; 
v_fst_1779_ = lean_ctor_get(v_a_1775_, 0);
if (lean_obj_tag(v_fst_1779_) == 0)
{
lean_object* v_snd_1780_; lean_object* v___x_1782_; 
v_snd_1780_ = lean_ctor_get(v_a_1775_, 1);
lean_inc(v_snd_1780_);
lean_dec(v_a_1775_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v_snd_1780_);
v___x_1782_ = v___x_1777_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_snd_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
else
{
lean_object* v_val_1784_; lean_object* v___x_1786_; 
lean_inc_ref(v_fst_1779_);
lean_dec(v_a_1775_);
v_val_1784_ = lean_ctor_get(v_fst_1779_, 0);
lean_inc(v_val_1784_);
lean_dec_ref(v_fst_1779_);
if (v_isShared_1778_ == 0)
{
lean_ctor_set(v___x_1777_, 0, v_val_1784_);
v___x_1786_ = v___x_1777_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_val_1784_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1796_; 
v_a_1789_ = lean_ctor_get(v___x_1774_, 0);
v_isSharedCheck_1796_ = !lean_is_exclusive(v___x_1774_);
if (v_isSharedCheck_1796_ == 0)
{
v___x_1791_ = v___x_1774_;
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1774_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1796_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v___x_1794_; 
if (v_isShared_1792_ == 0)
{
v___x_1794_ = v___x_1791_;
goto v_reusejp_1793_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v_a_1789_);
v___x_1794_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1793_;
}
v_reusejp_1793_:
{
return v___x_1794_;
}
}
}
}
}
}
else
{
lean_object* v_a_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1805_; 
v_a_1798_ = lean_ctor_get(v___x_1760_, 0);
v_isSharedCheck_1805_ = !lean_is_exclusive(v___x_1760_);
if (v_isSharedCheck_1805_ == 0)
{
v___x_1800_ = v___x_1760_;
v_isShared_1801_ = v_isSharedCheck_1805_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_a_1798_);
lean_dec(v___x_1760_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0___boxed(lean_object* v_t_1806_, lean_object* v_init_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_){
_start:
{
lean_object* v_res_1813_; 
v_res_1813_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0(v_t_1806_, v_init_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_);
lean_dec(v___y_1811_);
lean_dec_ref(v___y_1810_);
lean_dec(v___y_1809_);
lean_dec_ref(v___y_1808_);
lean_dec_ref(v_t_1806_);
return v_res_1813_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_1814_; 
v___x_1814_ = lean_mk_string_unchecked("the goal mentions the declaration `", 35, 35);
return v___x_1814_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_1815_; lean_object* v___x_1816_; 
v___x_1815_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__0, &l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__0_once, _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__0);
v___x_1816_ = l_Lean_stringToMessageData(v___x_1815_);
return v___x_1816_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1817_; 
v___x_1817_ = lean_mk_string_unchecked("`, which is being defined. To avoid circular reasoning, try rewriting the goal to eliminate `", 93, 93);
return v___x_1817_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_1818_; lean_object* v___x_1819_; 
v___x_1818_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__2);
v___x_1819_ = l_Lean_stringToMessageData(v___x_1818_);
return v___x_1819_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_mk_string_unchecked("` before using `grind`.", 23, 23);
return v___x_1820_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__5(void){
_start:
{
lean_object* v___x_1821_; lean_object* v___x_1822_; 
v___x_1821_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__4, &l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__4);
v___x_1822_ = l_Lean_stringToMessageData(v___x_1821_);
return v___x_1822_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg(lean_object* v_as_x27_1823_, lean_object* v_b_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_){
_start:
{
if (lean_obj_tag(v_as_x27_1823_) == 0)
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1830_, 0, v_b_1824_);
return v___x_1830_;
}
else
{
lean_object* v_head_1831_; lean_object* v_tail_1832_; lean_object* v___x_1833_; 
v_head_1831_ = lean_ctor_get(v_as_x27_1823_, 0);
v_tail_1832_ = lean_ctor_get(v_as_x27_1823_, 1);
lean_inc(v_head_1831_);
lean_inc(v_b_1824_);
v___x_1833_ = l_Lean_MVarId_clear(v_b_1824_, v_head_1831_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; 
lean_dec(v_b_1824_);
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref(v___x_1833_);
v_as_x27_1823_ = v_tail_1832_;
v_b_1824_ = v_a_1834_;
goto _start;
}
else
{
lean_object* v_a_1836_; uint8_t v___y_1838_; uint8_t v___x_1879_; 
v_a_1836_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1836_);
v___x_1879_ = l_Lean_Exception_isInterrupt(v_a_1836_);
if (v___x_1879_ == 0)
{
uint8_t v___x_1880_; 
v___x_1880_ = l_Lean_Exception_isRuntime(v_a_1836_);
v___y_1838_ = v___x_1880_;
goto v___jp_1837_;
}
else
{
lean_dec(v_a_1836_);
v___y_1838_ = v___x_1879_;
goto v___jp_1837_;
}
v___jp_1837_:
{
if (v___y_1838_ == 0)
{
lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1877_; 
v_isSharedCheck_1877_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1877_ == 0)
{
lean_object* v_unused_1878_; 
v_unused_1878_ = lean_ctor_get(v___x_1833_, 0);
lean_dec(v_unused_1878_);
v___x_1840_ = v___x_1833_;
v_isShared_1841_ = v_isSharedCheck_1877_;
goto v_resetjp_1839_;
}
else
{
lean_dec(v___x_1833_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1877_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1842_; 
lean_inc(v_head_1831_);
v___x_1842_ = l_Lean_FVarId_getDecl___redArg(v_head_1831_, v___y_1825_, v___y_1827_, v___y_1828_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; uint8_t v___x_1844_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
lean_inc(v_a_1843_);
lean_dec_ref(v___x_1842_);
v___x_1844_ = l_Lean_LocalDecl_isAuxDecl(v_a_1843_);
if (v___x_1844_ == 0)
{
lean_dec(v_a_1843_);
lean_del_object(v___x_1840_);
v_as_x27_1823_ = v_tail_1832_;
goto _start;
}
else
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1857_; 
v___x_1846_ = l_Lean_LocalDecl_userName(v_a_1843_);
lean_dec(v_a_1843_);
v___x_1847_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__1, &l_Lean_MVarId_ensureNoMVar___closed__1_once, _init_l_Lean_MVarId_ensureNoMVar___closed__1);
v___x_1848_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__1, &l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__1);
v___x_1849_ = l_Lean_MessageData_ofName(v___x_1846_);
lean_inc_ref(v___x_1849_);
v___x_1850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__3, &l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__3);
v___x_1852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1852_, 0, v___x_1850_);
lean_ctor_set(v___x_1852_, 1, v___x_1851_);
v___x_1853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1852_);
lean_ctor_set(v___x_1853_, 1, v___x_1849_);
v___x_1854_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__5, &l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__5_once, _init_l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___closed__5);
v___x_1855_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1853_);
lean_ctor_set(v___x_1855_, 1, v___x_1854_);
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 0, v___x_1855_);
v___x_1857_ = v___x_1840_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1868_; 
v_reuseFailAlloc_1868_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1868_, 0, v___x_1855_);
v___x_1857_ = v_reuseFailAlloc_1868_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
lean_object* v___x_1858_; 
lean_inc(v_b_1824_);
v___x_1858_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1847_, v_b_1824_, v___x_1857_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_dec_ref(v___x_1858_);
v_as_x27_1823_ = v_tail_1832_;
goto _start;
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1867_; 
lean_dec(v_b_1824_);
v_a_1860_ = lean_ctor_get(v___x_1858_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1858_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1862_ = v___x_1858_;
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1858_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
if (v_isShared_1863_ == 0)
{
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1860_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
}
}
else
{
lean_object* v_a_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1876_; 
lean_del_object(v___x_1840_);
lean_dec(v_b_1824_);
v_a_1869_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1876_ == 0)
{
v___x_1871_ = v___x_1842_;
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_a_1869_);
lean_dec(v___x_1842_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1876_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
lean_object* v___x_1874_; 
if (v_isShared_1872_ == 0)
{
v___x_1874_ = v___x_1871_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_a_1869_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
}
else
{
lean_dec(v_b_1824_);
return v___x_1833_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg___boxed(lean_object* v_as_x27_1881_, lean_object* v_b_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg(v_as_x27_1881_, v_b_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v_as_x27_1881_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails___lam__0(lean_object* v_mvarId_1889_, lean_object* v___x_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v___x_1896_; 
lean_inc(v_mvarId_1889_);
v___x_1896_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1889_, v___x_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
if (lean_obj_tag(v___x_1896_) == 0)
{
lean_object* v_lctx_1897_; lean_object* v_decls_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
lean_dec_ref(v___x_1896_);
v_lctx_1897_ = lean_ctor_get(v___y_1891_, 2);
v_decls_1898_ = lean_ctor_get(v_lctx_1897_, 1);
v___x_1899_ = lean_box(0);
v___x_1900_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0(v_decls_1898_, v___x_1899_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v___x_1903_; uint8_t v_isShared_1904_; uint8_t v_isSharedCheck_1910_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1903_ = v___x_1900_;
v_isShared_1904_ = v_isSharedCheck_1910_;
goto v_resetjp_1902_;
}
else
{
lean_inc(v_a_1901_);
lean_dec(v___x_1900_);
v___x_1903_ = lean_box(0);
v_isShared_1904_ = v_isSharedCheck_1910_;
goto v_resetjp_1902_;
}
v_resetjp_1902_:
{
uint8_t v___x_1905_; 
v___x_1905_ = l_List_isEmpty___redArg(v_a_1901_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; 
lean_del_object(v___x_1903_);
v___x_1906_ = l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg(v_a_1901_, v_mvarId_1889_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
lean_dec(v_a_1901_);
return v___x_1906_;
}
else
{
lean_object* v___x_1908_; 
lean_dec(v_a_1901_);
if (v_isShared_1904_ == 0)
{
lean_ctor_set(v___x_1903_, 0, v_mvarId_1889_);
v___x_1908_ = v___x_1903_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_mvarId_1889_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_dec(v_mvarId_1889_);
v_a_1911_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1900_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1900_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
else
{
lean_object* v_a_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1926_; 
lean_dec(v_mvarId_1889_);
v_a_1919_ = lean_ctor_get(v___x_1896_, 0);
v_isSharedCheck_1926_ = !lean_is_exclusive(v___x_1896_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1921_ = v___x_1896_;
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_a_1919_);
lean_dec(v___x_1896_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1926_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1924_; 
if (v_isShared_1922_ == 0)
{
v___x_1924_ = v___x_1921_;
goto v_reusejp_1923_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_a_1919_);
v___x_1924_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1923_;
}
v_reusejp_1923_:
{
return v___x_1924_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails___lam__0___boxed(lean_object* v_mvarId_1927_, lean_object* v___x_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_, lean_object* v___y_1933_){
_start:
{
lean_object* v_res_1934_; 
v_res_1934_ = l_Lean_MVarId_clearImplDetails___lam__0(v_mvarId_1927_, v___x_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
lean_dec(v___y_1932_);
lean_dec_ref(v___y_1931_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
return v_res_1934_;
}
}
static lean_object* _init_l_Lean_MVarId_clearImplDetails___closed__0(void){
_start:
{
lean_object* v___x_1935_; 
v___x_1935_ = lean_mk_string_unchecked("clear_aux_decls", 15, 15);
return v___x_1935_;
}
}
static lean_object* _init_l_Lean_MVarId_clearImplDetails___closed__1(void){
_start:
{
lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = lean_obj_once(&l_Lean_MVarId_clearImplDetails___closed__0, &l_Lean_MVarId_clearImplDetails___closed__0_once, _init_l_Lean_MVarId_clearImplDetails___closed__0);
v___x_1937_ = lean_obj_once(&l_Lean_MVarId_ensureNoMVar___closed__0, &l_Lean_MVarId_ensureNoMVar___closed__0_once, _init_l_Lean_MVarId_ensureNoMVar___closed__0);
v___x_1938_ = l_Lean_Name_mkStr2(v___x_1937_, v___x_1936_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails(lean_object* v_mvarId_1939_, lean_object* v_a_1940_, lean_object* v_a_1941_, lean_object* v_a_1942_, lean_object* v_a_1943_){
_start:
{
lean_object* v___x_1945_; lean_object* v___f_1946_; lean_object* v___x_1947_; 
v___x_1945_ = lean_obj_once(&l_Lean_MVarId_clearImplDetails___closed__1, &l_Lean_MVarId_clearImplDetails___closed__1_once, _init_l_Lean_MVarId_clearImplDetails___closed__1);
lean_inc(v_mvarId_1939_);
v___f_1946_ = lean_alloc_closure((void*)(l_Lean_MVarId_clearImplDetails___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1946_, 0, v_mvarId_1939_);
lean_closure_set(v___f_1946_, 1, v___x_1945_);
v___x_1947_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_abstractMVars_spec__1___redArg(v_mvarId_1939_, v___f_1946_, v_a_1940_, v_a_1941_, v_a_1942_, v_a_1943_);
return v___x_1947_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_clearImplDetails___boxed(lean_object* v_mvarId_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Lean_MVarId_clearImplDetails(v_mvarId_1948_, v_a_1949_, v_a_1950_, v_a_1951_, v_a_1952_);
lean_dec(v_a_1952_);
lean_dec_ref(v_a_1951_);
lean_dec(v_a_1950_);
lean_dec_ref(v_a_1949_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1(lean_object* v_as_1955_, lean_object* v_as_x27_1956_, lean_object* v_b_1957_, lean_object* v_a_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_){
_start:
{
lean_object* v___x_1964_; 
v___x_1964_ = l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___redArg(v_as_x27_1956_, v_b_1957_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1___boxed(lean_object* v_as_1965_, lean_object* v_as_x27_1966_, lean_object* v_b_1967_, lean_object* v_a_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v_res_1974_; 
v_res_1974_ = l_List_forIn_x27_loop___at___00Lean_MVarId_clearImplDetails_spec__1(v_as_1965_, v_as_x27_1966_, v_b_1967_, v_a_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v___y_1970_);
lean_dec_ref(v___y_1969_);
lean_dec(v_as_x27_1966_);
lean_dec(v_as_1965_);
return v_res_1974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4(lean_object* v_as_1975_, size_t v_sz_1976_, size_t v_i_1977_, lean_object* v_b_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___redArg(v_as_1975_, v_sz_1976_, v_i_1977_, v_b_1978_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4___boxed(lean_object* v_as_1985_, lean_object* v_sz_1986_, lean_object* v_i_1987_, lean_object* v_b_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_){
_start:
{
size_t v_sz_boxed_1994_; size_t v_i_boxed_1995_; lean_object* v_res_1996_; 
v_sz_boxed_1994_ = lean_unbox_usize(v_sz_1986_);
lean_dec(v_sz_1986_);
v_i_boxed_1995_ = lean_unbox_usize(v_i_1987_);
lean_dec(v_i_1987_);
v_res_1996_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__1_spec__4(v_as_1985_, v_sz_boxed_1994_, v_i_boxed_1995_, v_b_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec_ref(v_as_1985_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4(lean_object* v_as_1997_, size_t v_sz_1998_, size_t v_i_1999_, lean_object* v_b_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_){
_start:
{
lean_object* v___x_2006_; 
v___x_2006_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___redArg(v_as_1997_, v_sz_1998_, v_i_1999_, v_b_2000_);
return v___x_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_as_2007_, lean_object* v_sz_2008_, lean_object* v_i_2009_, lean_object* v_b_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
size_t v_sz_boxed_2016_; size_t v_i_boxed_2017_; lean_object* v_res_2018_; 
v_sz_boxed_2016_ = lean_unbox_usize(v_sz_2008_);
lean_dec(v_sz_2008_);
v_i_boxed_2017_ = lean_unbox_usize(v_i_2009_);
lean_dec(v_i_2009_);
v_res_2018_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_clearImplDetails_spec__0_spec__0_spec__2_spec__4(v_as_2007_, v_sz_boxed_2016_, v_i_boxed_2017_, v_b_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
lean_dec(v___y_2014_);
lean_dec_ref(v___y_2013_);
lean_dec(v___y_2012_);
lean_dec_ref(v___y_2011_);
lean_dec_ref(v_as_2007_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__0(lean_object* v_e_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_){
_start:
{
switch(lean_obj_tag(v_e_2019_))
{
case 8:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2023_, 0, v_e_2019_);
v___x_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2024_, 0, v___x_2023_);
return v___x_2024_;
}
case 6:
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2025_, 0, v_e_2019_);
v___x_2026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2026_, 0, v___x_2025_);
return v___x_2026_;
}
case 10:
{
lean_object* v_expr_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v_expr_2027_ = lean_ctor_get(v_e_2019_, 1);
lean_inc_ref(v_expr_2027_);
lean_dec_ref(v_e_2019_);
v___x_2028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2028_, 0, v_expr_2027_);
v___x_2029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2029_, 0, v___x_2028_);
return v___x_2029_;
}
default: 
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2030_, 0, v_e_2019_);
v___x_2031_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2031_, 0, v___x_2030_);
v___x_2032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2032_, 0, v___x_2031_);
return v___x_2032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__0___boxed(lean_object* v_e_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_Meta_Grind_eraseIrrelevantMData___lam__0(v_e_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__1(lean_object* v_e_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v___x_2042_; lean_object* v___x_2043_; 
v___x_2042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2042_, 0, v_e_2038_);
v___x_2043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2043_, 0, v___x_2042_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___lam__1___boxed(lean_object* v_e_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v_res_2048_; 
v_res_2048_ = l_Lean_Meta_Grind_eraseIrrelevantMData___lam__1(v_e_2044_, v___y_2045_, v___y_2046_);
lean_dec(v___y_2046_);
lean_dec_ref(v___y_2045_);
return v_res_2048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_2049_, lean_object* v_x_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; 
v___x_2054_ = lean_st_ref_get(v___y_2052_);
lean_dec(v___x_2054_);
v___x_2055_ = lean_apply_1(v_x_2050_, lean_box(0));
v___x_2056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_2057_, lean_object* v_x_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
lean_object* v_res_2062_; 
v_res_2062_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__0(v_00_u03b1_2057_, v_x_2058_, v___y_2059_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
return v_res_2062_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_2063_, lean_object* v_x_2064_){
_start:
{
if (lean_obj_tag(v_x_2064_) == 0)
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_box(0);
return v___x_2065_;
}
else
{
lean_object* v_key_2066_; lean_object* v_value_2067_; lean_object* v_tail_2068_; uint8_t v___x_2069_; 
v_key_2066_ = lean_ctor_get(v_x_2064_, 0);
v_value_2067_ = lean_ctor_get(v_x_2064_, 1);
v_tail_2068_ = lean_ctor_get(v_x_2064_, 2);
v___x_2069_ = l_Lean_ExprStructEq_beq(v_key_2066_, v_a_2063_);
if (v___x_2069_ == 0)
{
v_x_2064_ = v_tail_2068_;
goto _start;
}
else
{
lean_object* v___x_2071_; 
lean_inc(v_value_2067_);
v___x_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2071_, 0, v_value_2067_);
return v___x_2071_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_2072_, lean_object* v_x_2073_){
_start:
{
lean_object* v_res_2074_; 
v_res_2074_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___redArg(v_a_2072_, v_x_2073_);
lean_dec(v_x_2073_);
lean_dec_ref(v_a_2072_);
return v_res_2074_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg(lean_object* v_m_2075_, lean_object* v_a_2076_){
_start:
{
lean_object* v_buckets_2077_; lean_object* v___x_2078_; uint64_t v___x_2079_; uint64_t v___x_2080_; uint64_t v___x_2081_; uint64_t v_fold_2082_; uint64_t v___x_2083_; uint64_t v___x_2084_; uint64_t v___x_2085_; size_t v___x_2086_; size_t v___x_2087_; size_t v___x_2088_; size_t v___x_2089_; size_t v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v_buckets_2077_ = lean_ctor_get(v_m_2075_, 1);
v___x_2078_ = lean_array_get_size(v_buckets_2077_);
v___x_2079_ = l_Lean_ExprStructEq_hash(v_a_2076_);
v___x_2080_ = 32ULL;
v___x_2081_ = lean_uint64_shift_right(v___x_2079_, v___x_2080_);
v_fold_2082_ = lean_uint64_xor(v___x_2079_, v___x_2081_);
v___x_2083_ = 16ULL;
v___x_2084_ = lean_uint64_shift_right(v_fold_2082_, v___x_2083_);
v___x_2085_ = lean_uint64_xor(v_fold_2082_, v___x_2084_);
v___x_2086_ = lean_uint64_to_usize(v___x_2085_);
v___x_2087_ = lean_usize_of_nat(v___x_2078_);
v___x_2088_ = ((size_t)1ULL);
v___x_2089_ = lean_usize_sub(v___x_2087_, v___x_2088_);
v___x_2090_ = lean_usize_land(v___x_2086_, v___x_2089_);
v___x_2091_ = lean_array_uget_borrowed(v_buckets_2077_, v___x_2090_);
v___x_2092_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___redArg(v_a_2076_, v___x_2091_);
return v___x_2092_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_2093_, lean_object* v_a_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg(v_m_2093_, v_a_2094_);
lean_dec_ref(v_a_2094_);
lean_dec_ref(v_m_2093_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_2096_, lean_object* v_b_2097_, lean_object* v_x_2098_){
_start:
{
if (lean_obj_tag(v_x_2098_) == 0)
{
lean_dec(v_b_2097_);
lean_dec_ref(v_a_2096_);
return v_x_2098_;
}
else
{
lean_object* v_key_2099_; lean_object* v_value_2100_; lean_object* v_tail_2101_; lean_object* v___x_2103_; uint8_t v_isShared_2104_; uint8_t v_isSharedCheck_2113_; 
v_key_2099_ = lean_ctor_get(v_x_2098_, 0);
v_value_2100_ = lean_ctor_get(v_x_2098_, 1);
v_tail_2101_ = lean_ctor_get(v_x_2098_, 2);
v_isSharedCheck_2113_ = !lean_is_exclusive(v_x_2098_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2103_ = v_x_2098_;
v_isShared_2104_ = v_isSharedCheck_2113_;
goto v_resetjp_2102_;
}
else
{
lean_inc(v_tail_2101_);
lean_inc(v_value_2100_);
lean_inc(v_key_2099_);
lean_dec(v_x_2098_);
v___x_2103_ = lean_box(0);
v_isShared_2104_ = v_isSharedCheck_2113_;
goto v_resetjp_2102_;
}
v_resetjp_2102_:
{
uint8_t v___x_2105_; 
v___x_2105_ = l_Lean_ExprStructEq_beq(v_key_2099_, v_a_2096_);
if (v___x_2105_ == 0)
{
lean_object* v___x_2106_; lean_object* v___x_2108_; 
v___x_2106_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__12___redArg(v_a_2096_, v_b_2097_, v_tail_2101_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 2, v___x_2106_);
v___x_2108_ = v___x_2103_;
goto v_reusejp_2107_;
}
else
{
lean_object* v_reuseFailAlloc_2109_; 
v_reuseFailAlloc_2109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2109_, 0, v_key_2099_);
lean_ctor_set(v_reuseFailAlloc_2109_, 1, v_value_2100_);
lean_ctor_set(v_reuseFailAlloc_2109_, 2, v___x_2106_);
v___x_2108_ = v_reuseFailAlloc_2109_;
goto v_reusejp_2107_;
}
v_reusejp_2107_:
{
return v___x_2108_;
}
}
else
{
lean_object* v___x_2111_; 
lean_dec(v_value_2100_);
lean_dec(v_key_2099_);
if (v_isShared_2104_ == 0)
{
lean_ctor_set(v___x_2103_, 1, v_b_2097_);
lean_ctor_set(v___x_2103_, 0, v_a_2096_);
v___x_2111_ = v___x_2103_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2096_);
lean_ctor_set(v_reuseFailAlloc_2112_, 1, v_b_2097_);
lean_ctor_set(v_reuseFailAlloc_2112_, 2, v_tail_2101_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_2114_, lean_object* v_x_2115_){
_start:
{
if (lean_obj_tag(v_x_2115_) == 0)
{
return v_x_2114_;
}
else
{
lean_object* v_key_2116_; lean_object* v_value_2117_; lean_object* v_tail_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2141_; 
v_key_2116_ = lean_ctor_get(v_x_2115_, 0);
v_value_2117_ = lean_ctor_get(v_x_2115_, 1);
v_tail_2118_ = lean_ctor_get(v_x_2115_, 2);
v_isSharedCheck_2141_ = !lean_is_exclusive(v_x_2115_);
if (v_isSharedCheck_2141_ == 0)
{
v___x_2120_ = v_x_2115_;
v_isShared_2121_ = v_isSharedCheck_2141_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_tail_2118_);
lean_inc(v_value_2117_);
lean_inc(v_key_2116_);
lean_dec(v_x_2115_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2141_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; uint64_t v___x_2123_; uint64_t v___x_2124_; uint64_t v___x_2125_; uint64_t v_fold_2126_; uint64_t v___x_2127_; uint64_t v___x_2128_; uint64_t v___x_2129_; size_t v___x_2130_; size_t v___x_2131_; size_t v___x_2132_; size_t v___x_2133_; size_t v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2137_; 
v___x_2122_ = lean_array_get_size(v_x_2114_);
v___x_2123_ = l_Lean_ExprStructEq_hash(v_key_2116_);
v___x_2124_ = 32ULL;
v___x_2125_ = lean_uint64_shift_right(v___x_2123_, v___x_2124_);
v_fold_2126_ = lean_uint64_xor(v___x_2123_, v___x_2125_);
v___x_2127_ = 16ULL;
v___x_2128_ = lean_uint64_shift_right(v_fold_2126_, v___x_2127_);
v___x_2129_ = lean_uint64_xor(v_fold_2126_, v___x_2128_);
v___x_2130_ = lean_uint64_to_usize(v___x_2129_);
v___x_2131_ = lean_usize_of_nat(v___x_2122_);
v___x_2132_ = ((size_t)1ULL);
v___x_2133_ = lean_usize_sub(v___x_2131_, v___x_2132_);
v___x_2134_ = lean_usize_land(v___x_2130_, v___x_2133_);
v___x_2135_ = lean_array_uget_borrowed(v_x_2114_, v___x_2134_);
lean_inc(v___x_2135_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 2, v___x_2135_);
v___x_2137_ = v___x_2120_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2140_; 
v_reuseFailAlloc_2140_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2140_, 0, v_key_2116_);
lean_ctor_set(v_reuseFailAlloc_2140_, 1, v_value_2117_);
lean_ctor_set(v_reuseFailAlloc_2140_, 2, v___x_2135_);
v___x_2137_ = v_reuseFailAlloc_2140_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2138_; 
v___x_2138_ = lean_array_uset(v_x_2114_, v___x_2134_, v___x_2137_);
v_x_2114_ = v___x_2138_;
v_x_2115_ = v_tail_2118_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_2142_, lean_object* v_source_2143_, lean_object* v_target_2144_){
_start:
{
lean_object* v___x_2145_; uint8_t v___x_2146_; 
v___x_2145_ = lean_array_get_size(v_source_2143_);
v___x_2146_ = lean_nat_dec_lt(v_i_2142_, v___x_2145_);
if (v___x_2146_ == 0)
{
lean_dec_ref(v_source_2143_);
lean_dec(v_i_2142_);
return v_target_2144_;
}
else
{
lean_object* v_es_2147_; lean_object* v___x_2148_; lean_object* v_source_2149_; lean_object* v_target_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; 
v_es_2147_ = lean_array_fget(v_source_2143_, v_i_2142_);
v___x_2148_ = lean_box(0);
v_source_2149_ = lean_array_fset(v_source_2143_, v_i_2142_, v___x_2148_);
v_target_2150_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_2144_, v_es_2147_);
v___x_2151_ = lean_unsigned_to_nat(1u);
v___x_2152_ = lean_nat_add(v_i_2142_, v___x_2151_);
lean_dec(v_i_2142_);
v_i_2142_ = v___x_2152_;
v_source_2143_ = v_source_2149_;
v_target_2144_ = v_target_2150_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_2154_){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v_nbuckets_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2155_ = lean_array_get_size(v_data_2154_);
v___x_2156_ = lean_unsigned_to_nat(2u);
v_nbuckets_2157_ = lean_nat_mul(v___x_2155_, v___x_2156_);
v___x_2158_ = lean_unsigned_to_nat(0u);
v___x_2159_ = lean_box(0);
v___x_2160_ = lean_mk_array(v_nbuckets_2157_, v___x_2159_);
v___x_2161_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_2158_, v_data_2154_, v___x_2160_);
return v___x_2161_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_2162_, lean_object* v_x_2163_){
_start:
{
if (lean_obj_tag(v_x_2163_) == 0)
{
uint8_t v___x_2164_; 
v___x_2164_ = 0;
return v___x_2164_;
}
else
{
lean_object* v_key_2165_; lean_object* v_tail_2166_; uint8_t v___x_2167_; 
v_key_2165_ = lean_ctor_get(v_x_2163_, 0);
v_tail_2166_ = lean_ctor_get(v_x_2163_, 2);
v___x_2167_ = l_Lean_ExprStructEq_beq(v_key_2165_, v_a_2162_);
if (v___x_2167_ == 0)
{
v_x_2163_ = v_tail_2166_;
goto _start;
}
else
{
return v___x_2167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_2169_, lean_object* v_x_2170_){
_start:
{
uint8_t v_res_2171_; lean_object* v_r_2172_; 
v_res_2171_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___redArg(v_a_2169_, v_x_2170_);
lean_dec(v_x_2170_);
lean_dec_ref(v_a_2169_);
v_r_2172_ = lean_box(v_res_2171_);
return v_r_2172_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6___redArg(lean_object* v_m_2173_, lean_object* v_a_2174_, lean_object* v_b_2175_){
_start:
{
lean_object* v_size_2176_; lean_object* v_buckets_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2220_; 
v_size_2176_ = lean_ctor_get(v_m_2173_, 0);
v_buckets_2177_ = lean_ctor_get(v_m_2173_, 1);
v_isSharedCheck_2220_ = !lean_is_exclusive(v_m_2173_);
if (v_isSharedCheck_2220_ == 0)
{
v___x_2179_ = v_m_2173_;
v_isShared_2180_ = v_isSharedCheck_2220_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_buckets_2177_);
lean_inc(v_size_2176_);
lean_dec(v_m_2173_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2220_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2181_; uint64_t v___x_2182_; uint64_t v___x_2183_; uint64_t v___x_2184_; uint64_t v_fold_2185_; uint64_t v___x_2186_; uint64_t v___x_2187_; uint64_t v___x_2188_; size_t v___x_2189_; size_t v___x_2190_; size_t v___x_2191_; size_t v___x_2192_; size_t v___x_2193_; lean_object* v_bkt_2194_; uint8_t v___x_2195_; 
v___x_2181_ = lean_array_get_size(v_buckets_2177_);
v___x_2182_ = l_Lean_ExprStructEq_hash(v_a_2174_);
v___x_2183_ = 32ULL;
v___x_2184_ = lean_uint64_shift_right(v___x_2182_, v___x_2183_);
v_fold_2185_ = lean_uint64_xor(v___x_2182_, v___x_2184_);
v___x_2186_ = 16ULL;
v___x_2187_ = lean_uint64_shift_right(v_fold_2185_, v___x_2186_);
v___x_2188_ = lean_uint64_xor(v_fold_2185_, v___x_2187_);
v___x_2189_ = lean_uint64_to_usize(v___x_2188_);
v___x_2190_ = lean_usize_of_nat(v___x_2181_);
v___x_2191_ = ((size_t)1ULL);
v___x_2192_ = lean_usize_sub(v___x_2190_, v___x_2191_);
v___x_2193_ = lean_usize_land(v___x_2189_, v___x_2192_);
v_bkt_2194_ = lean_array_uget_borrowed(v_buckets_2177_, v___x_2193_);
v___x_2195_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___redArg(v_a_2174_, v_bkt_2194_);
if (v___x_2195_ == 0)
{
lean_object* v___x_2196_; lean_object* v_size_x27_2197_; lean_object* v___x_2198_; lean_object* v_buckets_x27_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; uint8_t v___x_2205_; 
v___x_2196_ = lean_unsigned_to_nat(1u);
v_size_x27_2197_ = lean_nat_add(v_size_2176_, v___x_2196_);
lean_dec(v_size_2176_);
lean_inc(v_bkt_2194_);
v___x_2198_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2198_, 0, v_a_2174_);
lean_ctor_set(v___x_2198_, 1, v_b_2175_);
lean_ctor_set(v___x_2198_, 2, v_bkt_2194_);
v_buckets_x27_2199_ = lean_array_uset(v_buckets_2177_, v___x_2193_, v___x_2198_);
v___x_2200_ = lean_unsigned_to_nat(4u);
v___x_2201_ = lean_nat_mul(v_size_x27_2197_, v___x_2200_);
v___x_2202_ = lean_unsigned_to_nat(3u);
v___x_2203_ = lean_nat_div(v___x_2201_, v___x_2202_);
lean_dec(v___x_2201_);
v___x_2204_ = lean_array_get_size(v_buckets_x27_2199_);
v___x_2205_ = lean_nat_dec_le(v___x_2203_, v___x_2204_);
lean_dec(v___x_2203_);
if (v___x_2205_ == 0)
{
lean_object* v_val_2206_; lean_object* v___x_2208_; 
v_val_2206_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_2199_);
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v_val_2206_);
lean_ctor_set(v___x_2179_, 0, v_size_x27_2197_);
v___x_2208_ = v___x_2179_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_size_x27_2197_);
lean_ctor_set(v_reuseFailAlloc_2209_, 1, v_val_2206_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
else
{
lean_object* v___x_2211_; 
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v_buckets_x27_2199_);
lean_ctor_set(v___x_2179_, 0, v_size_x27_2197_);
v___x_2211_ = v___x_2179_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_size_x27_2197_);
lean_ctor_set(v_reuseFailAlloc_2212_, 1, v_buckets_x27_2199_);
v___x_2211_ = v_reuseFailAlloc_2212_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
return v___x_2211_;
}
}
}
else
{
lean_object* v___x_2213_; lean_object* v_buckets_x27_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2218_; 
lean_inc(v_bkt_2194_);
v___x_2213_ = lean_box(0);
v_buckets_x27_2214_ = lean_array_uset(v_buckets_2177_, v___x_2193_, v___x_2213_);
v___x_2215_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__12___redArg(v_a_2174_, v_b_2175_, v_bkt_2194_);
v___x_2216_ = lean_array_uset(v_buckets_x27_2214_, v___x_2193_, v___x_2215_);
if (v_isShared_2180_ == 0)
{
lean_ctor_set(v___x_2179_, 1, v___x_2216_);
v___x_2218_ = v___x_2179_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v_size_2176_);
lean_ctor_set(v_reuseFailAlloc_2219_, 1, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2(lean_object* v_a_2221_, lean_object* v_e_2222_, lean_object* v_a_2223_){
_start:
{
lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2225_ = lean_st_ref_take(v_a_2221_);
v___x_2226_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6___redArg(v___x_2225_, v_e_2222_, v_a_2223_);
v___x_2227_ = lean_st_ref_set(v_a_2221_, v___x_2226_);
v___x_2228_ = lean_box(0);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2___boxed(lean_object* v_a_2229_, lean_object* v_e_2230_, lean_object* v_a_2231_, lean_object* v___y_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2(v_a_2229_, v_e_2230_, v_a_2231_);
lean_dec(v_a_2229_);
return v_res_2233_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_2234_; 
v___x_2234_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_2234_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_2235_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2236_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__1);
v___x_2237_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__0);
v___x_2238_ = l_Lean_Name_mkStr2(v___x_2237_, v___x_2236_);
return v___x_2238_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = l_Lean_maxRecDepthErrorMessage;
v___x_2240_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2240_, 0, v___x_2239_);
return v___x_2240_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; 
v___x_2241_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_2242_ = l_Lean_MessageData_ofFormat(v___x_2241_);
return v___x_2242_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2243_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_2244_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__2);
v___x_2245_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
lean_ctor_set(v___x_2245_, 1, v___x_2243_);
return v___x_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_2246_){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_2249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2249_, 0, v_ref_2246_);
lean_ctor_set(v___x_2249_, 1, v___x_2248_);
v___x_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2249_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_2251_, lean_object* v___y_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_2251_);
return v_res_2253_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; 
v___x_2254_ = lean_box(0);
v___x_2255_ = l_Lean_interruptExceptionId;
v___x_2256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
lean_ctor_set(v___x_2256_, 1, v___x_2254_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_2259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2259_, 0, v___x_2258_);
return v___x_2259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___redArg(lean_object* v_x_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___y_2268_; uint8_t v___y_2278_; lean_object* v___y_2279_; lean_object* v___y_2280_; lean_object* v___y_2281_; uint8_t v___y_2282_; lean_object* v___y_2283_; lean_object* v___y_2284_; lean_object* v___y_2285_; lean_object* v___y_2286_; lean_object* v___y_2287_; lean_object* v___y_2288_; lean_object* v___y_2289_; lean_object* v___y_2290_; lean_object* v___y_2291_; lean_object* v___y_2292_; lean_object* v___y_2293_; lean_object* v_fileName_2298_; lean_object* v_fileMap_2299_; lean_object* v_options_2300_; lean_object* v_currRecDepth_2301_; lean_object* v_maxRecDepth_2302_; lean_object* v_ref_2303_; lean_object* v_currNamespace_2304_; lean_object* v_openDecls_2305_; lean_object* v_initHeartbeats_2306_; lean_object* v_maxHeartbeats_2307_; lean_object* v_quotContext_2308_; lean_object* v_currMacroScope_2309_; uint8_t v_diag_2310_; lean_object* v_cancelTk_x3f_2311_; uint8_t v_suppressElabErrors_2312_; lean_object* v_inheritedTraceOptions_2313_; 
v_fileName_2298_ = lean_ctor_get(v___y_2264_, 0);
v_fileMap_2299_ = lean_ctor_get(v___y_2264_, 1);
v_options_2300_ = lean_ctor_get(v___y_2264_, 2);
v_currRecDepth_2301_ = lean_ctor_get(v___y_2264_, 3);
v_maxRecDepth_2302_ = lean_ctor_get(v___y_2264_, 4);
v_ref_2303_ = lean_ctor_get(v___y_2264_, 5);
v_currNamespace_2304_ = lean_ctor_get(v___y_2264_, 6);
v_openDecls_2305_ = lean_ctor_get(v___y_2264_, 7);
v_initHeartbeats_2306_ = lean_ctor_get(v___y_2264_, 8);
v_maxHeartbeats_2307_ = lean_ctor_get(v___y_2264_, 9);
v_quotContext_2308_ = lean_ctor_get(v___y_2264_, 10);
v_currMacroScope_2309_ = lean_ctor_get(v___y_2264_, 11);
v_diag_2310_ = lean_ctor_get_uint8(v___y_2264_, sizeof(void*)*14);
v_cancelTk_x3f_2311_ = lean_ctor_get(v___y_2264_, 12);
v_suppressElabErrors_2312_ = lean_ctor_get_uint8(v___y_2264_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2313_ = lean_ctor_get(v___y_2264_, 13);
if (lean_obj_tag(v_cancelTk_x3f_2311_) == 1)
{
lean_object* v_val_2319_; uint8_t v___x_2320_; 
v_val_2319_ = lean_ctor_get(v_cancelTk_x3f_2311_, 0);
v___x_2320_ = l_IO_CancelToken_isSet(v_val_2319_);
if (v___x_2320_ == 0)
{
goto v___jp_2314_;
}
else
{
lean_object* v___x_2321_; lean_object* v_a_2322_; lean_object* v___x_2324_; uint8_t v_isShared_2325_; uint8_t v_isSharedCheck_2329_; 
lean_dec_ref(v_x_2262_);
v___x_2321_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_2322_ = lean_ctor_get(v___x_2321_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v___x_2321_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2324_ = v___x_2321_;
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
else
{
lean_inc(v_a_2322_);
lean_dec(v___x_2321_);
v___x_2324_ = lean_box(0);
v_isShared_2325_ = v_isSharedCheck_2329_;
goto v_resetjp_2323_;
}
v_resetjp_2323_:
{
lean_object* v___x_2327_; 
if (v_isShared_2325_ == 0)
{
v___x_2327_ = v___x_2324_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2322_);
v___x_2327_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
return v___x_2327_;
}
}
}
}
else
{
goto v___jp_2314_;
}
v___jp_2267_:
{
if (lean_obj_tag(v___y_2268_) == 0)
{
return v___y_2268_;
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2276_; 
v_a_2269_ = lean_ctor_get(v___y_2268_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___y_2268_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2271_ = v___y_2268_;
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___y_2268_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
}
v___jp_2277_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2294_ = lean_unsigned_to_nat(1u);
v___x_2295_ = lean_nat_add(v___y_2289_, v___x_2294_);
lean_inc_ref(v___y_2292_);
lean_inc(v___y_2283_);
lean_inc(v___y_2293_);
lean_inc(v___y_2288_);
lean_inc(v___y_2280_);
lean_inc(v___y_2287_);
lean_inc(v___y_2285_);
lean_inc(v___y_2284_);
lean_inc(v___y_2290_);
lean_inc_ref(v___y_2291_);
lean_inc_ref(v___y_2281_);
lean_inc_ref(v___y_2279_);
v___x_2296_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2296_, 0, v___y_2279_);
lean_ctor_set(v___x_2296_, 1, v___y_2281_);
lean_ctor_set(v___x_2296_, 2, v___y_2291_);
lean_ctor_set(v___x_2296_, 3, v___x_2295_);
lean_ctor_set(v___x_2296_, 4, v___y_2290_);
lean_ctor_set(v___x_2296_, 5, v___y_2286_);
lean_ctor_set(v___x_2296_, 6, v___y_2284_);
lean_ctor_set(v___x_2296_, 7, v___y_2285_);
lean_ctor_set(v___x_2296_, 8, v___y_2287_);
lean_ctor_set(v___x_2296_, 9, v___y_2280_);
lean_ctor_set(v___x_2296_, 10, v___y_2288_);
lean_ctor_set(v___x_2296_, 11, v___y_2293_);
lean_ctor_set(v___x_2296_, 12, v___y_2283_);
lean_ctor_set(v___x_2296_, 13, v___y_2292_);
lean_ctor_set_uint8(v___x_2296_, sizeof(void*)*14, v___y_2282_);
lean_ctor_set_uint8(v___x_2296_, sizeof(void*)*14 + 1, v___y_2278_);
lean_inc(v___y_2265_);
lean_inc(v___y_2263_);
v___x_2297_ = lean_apply_4(v_x_2262_, v___y_2263_, v___x_2296_, v___y_2265_, lean_box(0));
v___y_2268_ = v___x_2297_;
goto v___jp_2267_;
}
v___jp_2314_:
{
lean_object* v___x_2315_; uint8_t v___x_2316_; 
v___x_2315_ = lean_unsigned_to_nat(0u);
v___x_2316_ = lean_nat_dec_eq(v_maxRecDepth_2302_, v___x_2315_);
if (v___x_2316_ == 0)
{
uint8_t v___x_2317_; 
v___x_2317_ = lean_nat_dec_eq(v_currRecDepth_2301_, v_maxRecDepth_2302_);
if (v___x_2317_ == 0)
{
lean_inc(v_ref_2303_);
v___y_2278_ = v_suppressElabErrors_2312_;
v___y_2279_ = v_fileName_2298_;
v___y_2280_ = v_maxHeartbeats_2307_;
v___y_2281_ = v_fileMap_2299_;
v___y_2282_ = v_diag_2310_;
v___y_2283_ = v_cancelTk_x3f_2311_;
v___y_2284_ = v_currNamespace_2304_;
v___y_2285_ = v_openDecls_2305_;
v___y_2286_ = v_ref_2303_;
v___y_2287_ = v_initHeartbeats_2306_;
v___y_2288_ = v_quotContext_2308_;
v___y_2289_ = v_currRecDepth_2301_;
v___y_2290_ = v_maxRecDepth_2302_;
v___y_2291_ = v_options_2300_;
v___y_2292_ = v_inheritedTraceOptions_2313_;
v___y_2293_ = v_currMacroScope_2309_;
goto v___jp_2277_;
}
else
{
lean_object* v___x_2318_; 
lean_dec_ref(v_x_2262_);
lean_inc(v_ref_2303_);
v___x_2318_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_2303_);
v___y_2268_ = v___x_2318_;
goto v___jp_2267_;
}
}
else
{
lean_inc(v_ref_2303_);
v___y_2278_ = v_suppressElabErrors_2312_;
v___y_2279_ = v_fileName_2298_;
v___y_2280_ = v_maxHeartbeats_2307_;
v___y_2281_ = v_fileMap_2299_;
v___y_2282_ = v_diag_2310_;
v___y_2283_ = v_cancelTk_x3f_2311_;
v___y_2284_ = v_currNamespace_2304_;
v___y_2285_ = v_openDecls_2305_;
v___y_2286_ = v_ref_2303_;
v___y_2287_ = v_initHeartbeats_2306_;
v___y_2288_ = v_quotContext_2308_;
v___y_2289_ = v_currRecDepth_2301_;
v___y_2290_ = v_maxRecDepth_2302_;
v___y_2291_ = v_options_2300_;
v___y_2292_ = v_inheritedTraceOptions_2313_;
v___y_2293_ = v_currMacroScope_2309_;
goto v___jp_2277_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___redArg(v_x_2330_, v___y_2331_, v___y_2332_, v___y_2333_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
return v_res_2335_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = lean_mk_string_unchecked("transform", 9, 9);
return v___x_2336_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2337_; lean_object* v_dummy_2338_; 
v___x_2337_ = lean_box(0);
v_dummy_2338_ = l_Lean_Expr_sort___override(v___x_2337_);
return v_dummy_2338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__1(lean_object* v_pre_2339_, lean_object* v_post_2340_, size_t v_sz_2341_, size_t v_i_2342_, lean_object* v_bs_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_){
_start:
{
uint8_t v___x_2348_; 
v___x_2348_ = lean_usize_dec_lt(v_i_2342_, v_sz_2341_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; 
lean_dec_ref(v_post_2340_);
lean_dec_ref(v_pre_2339_);
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v_bs_2343_);
return v___x_2349_;
}
else
{
lean_object* v_v_2350_; lean_object* v___x_2351_; 
v_v_2350_ = lean_array_uget_borrowed(v_bs_2343_, v_i_2342_);
lean_inc(v_v_2350_);
lean_inc_ref(v_post_2340_);
lean_inc_ref(v_pre_2339_);
v___x_2351_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2339_, v_post_2340_, v_v_2350_, v___y_2344_, v___y_2345_, v___y_2346_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2353_; lean_object* v_bs_x27_2354_; size_t v___x_2355_; size_t v___x_2356_; lean_object* v___x_2357_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref(v___x_2351_);
v___x_2353_ = lean_unsigned_to_nat(0u);
v_bs_x27_2354_ = lean_array_uset(v_bs_2343_, v_i_2342_, v___x_2353_);
v___x_2355_ = ((size_t)1ULL);
v___x_2356_ = lean_usize_add(v_i_2342_, v___x_2355_);
v___x_2357_ = lean_array_uset(v_bs_x27_2354_, v_i_2342_, v_a_2352_);
v_i_2342_ = v___x_2356_;
v_bs_2343_ = v___x_2357_;
goto _start;
}
else
{
lean_object* v_a_2359_; lean_object* v___x_2361_; uint8_t v_isShared_2362_; uint8_t v_isSharedCheck_2366_; 
lean_dec_ref(v_bs_2343_);
lean_dec_ref(v_post_2340_);
lean_dec_ref(v_pre_2339_);
v_a_2359_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2366_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2366_ == 0)
{
v___x_2361_ = v___x_2351_;
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
else
{
lean_inc(v_a_2359_);
lean_dec(v___x_2351_);
v___x_2361_ = lean_box(0);
v_isShared_2362_ = v_isSharedCheck_2366_;
goto v_resetjp_2360_;
}
v_resetjp_2360_:
{
lean_object* v___x_2364_; 
if (v_isShared_2362_ == 0)
{
v___x_2364_ = v___x_2361_;
goto v_reusejp_2363_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_a_2359_);
v___x_2364_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2363_;
}
v_reusejp_2363_:
{
return v___x_2364_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__4(lean_object* v_pre_2367_, lean_object* v_post_2368_, lean_object* v_x_2369_, lean_object* v_x_2370_, lean_object* v_x_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_){
_start:
{
if (lean_obj_tag(v_x_2369_) == 5)
{
lean_object* v_fn_2376_; lean_object* v_arg_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v_fn_2376_ = lean_ctor_get(v_x_2369_, 0);
lean_inc_ref(v_fn_2376_);
v_arg_2377_ = lean_ctor_get(v_x_2369_, 1);
lean_inc_ref(v_arg_2377_);
lean_dec_ref(v_x_2369_);
v___x_2378_ = lean_array_set(v_x_2370_, v_x_2371_, v_arg_2377_);
v___x_2379_ = lean_unsigned_to_nat(1u);
v___x_2380_ = lean_nat_sub(v_x_2371_, v___x_2379_);
lean_dec(v_x_2371_);
v_x_2369_ = v_fn_2376_;
v_x_2370_ = v___x_2378_;
v_x_2371_ = v___x_2380_;
goto _start;
}
else
{
lean_object* v___x_2382_; 
lean_dec(v_x_2371_);
lean_inc_ref(v_post_2368_);
lean_inc_ref(v_pre_2367_);
v___x_2382_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2367_, v_post_2368_, v_x_2369_, v___y_2372_, v___y_2373_, v___y_2374_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; size_t v_sz_2384_; size_t v___x_2385_; lean_object* v___x_2386_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
lean_inc(v_a_2383_);
lean_dec_ref(v___x_2382_);
v_sz_2384_ = lean_array_size(v_x_2370_);
v___x_2385_ = ((size_t)0ULL);
lean_inc_ref(v_post_2368_);
lean_inc_ref(v_pre_2367_);
v___x_2386_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__1(v_pre_2367_, v_post_2368_, v_sz_2384_, v___x_2385_, v_x_2370_, v___y_2372_, v___y_2373_, v___y_2374_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref(v___x_2386_);
v___x_2388_ = l_Lean_mkAppN(v_a_2383_, v_a_2387_);
lean_dec(v_a_2387_);
v___x_2389_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2367_, v_post_2368_, v___x_2388_, v___y_2372_, v___y_2373_, v___y_2374_);
return v___x_2389_;
}
else
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2397_; 
lean_dec(v_a_2383_);
lean_dec_ref(v_post_2368_);
lean_dec_ref(v_pre_2367_);
v_a_2390_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2397_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2397_ == 0)
{
v___x_2392_ = v___x_2386_;
v_isShared_2393_ = v_isSharedCheck_2397_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2386_);
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
else
{
lean_dec_ref(v_x_2370_);
lean_dec_ref(v_post_2368_);
lean_dec_ref(v_pre_2367_);
return v___x_2382_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1(lean_object* v___x_2398_, lean_object* v_pre_2399_, lean_object* v_e_2400_, lean_object* v_post_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v___y_2407_; lean_object* v___y_2408_; uint8_t v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; uint8_t v___y_2414_; uint8_t v___y_2424_; lean_object* v___y_2425_; lean_object* v___y_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; uint8_t v___y_2429_; lean_object* v___y_2437_; lean_object* v___y_2438_; uint8_t v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; uint8_t v___y_2442_; lean_object* v___x_2449_; 
v___x_2449_ = l_Lean_Core_checkSystem(v___x_2398_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2449_) == 0)
{
lean_object* v___x_2450_; 
lean_dec_ref(v___x_2449_);
lean_inc_ref(v_pre_2399_);
lean_inc(v___y_2404_);
lean_inc_ref(v___y_2403_);
lean_inc_ref(v_e_2400_);
v___x_2450_ = lean_apply_4(v_pre_2399_, v_e_2400_, v___y_2403_, v___y_2404_, lean_box(0));
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2540_; 
v_a_2451_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2540_ == 0)
{
v___x_2453_ = v___x_2450_;
v_isShared_2454_ = v_isSharedCheck_2540_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2450_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2540_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___y_2456_; 
switch(lean_obj_tag(v_a_2451_))
{
case 0:
{
lean_object* v_e_2530_; lean_object* v___x_2532_; 
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_e_2400_);
lean_dec_ref(v_pre_2399_);
v_e_2530_ = lean_ctor_get(v_a_2451_, 0);
lean_inc_ref(v_e_2530_);
lean_dec_ref(v_a_2451_);
if (v_isShared_2454_ == 0)
{
lean_ctor_set(v___x_2453_, 0, v_e_2530_);
v___x_2532_ = v___x_2453_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2533_; 
v_reuseFailAlloc_2533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2533_, 0, v_e_2530_);
v___x_2532_ = v_reuseFailAlloc_2533_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
return v___x_2532_;
}
}
case 1:
{
lean_object* v_e_2534_; lean_object* v___x_2535_; 
lean_del_object(v___x_2453_);
lean_dec_ref(v_e_2400_);
v_e_2534_ = lean_ctor_get(v_a_2451_, 0);
lean_inc_ref(v_e_2534_);
lean_dec_ref(v_a_2451_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2535_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_e_2534_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v___x_2537_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref(v___x_2535_);
v___x_2537_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v_a_2536_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2537_;
}
else
{
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2535_;
}
}
default: 
{
lean_object* v_e_x3f_2538_; 
lean_del_object(v___x_2453_);
v_e_x3f_2538_ = lean_ctor_get(v_a_2451_, 0);
lean_inc(v_e_x3f_2538_);
lean_dec_ref(v_a_2451_);
if (lean_obj_tag(v_e_x3f_2538_) == 0)
{
v___y_2456_ = v_e_2400_;
goto v___jp_2455_;
}
else
{
lean_object* v_val_2539_; 
lean_dec_ref(v_e_2400_);
v_val_2539_ = lean_ctor_get(v_e_x3f_2538_, 0);
lean_inc(v_val_2539_);
lean_dec_ref(v_e_x3f_2538_);
v___y_2456_ = v_val_2539_;
goto v___jp_2455_;
}
}
}
v___jp_2455_:
{
switch(lean_obj_tag(v___y_2456_))
{
case 7:
{
lean_object* v_binderName_2457_; lean_object* v_binderType_2458_; lean_object* v_body_2459_; uint8_t v_binderInfo_2460_; lean_object* v___x_2461_; 
v_binderName_2457_ = lean_ctor_get(v___y_2456_, 0);
lean_inc(v_binderName_2457_);
v_binderType_2458_ = lean_ctor_get(v___y_2456_, 1);
v_body_2459_ = lean_ctor_get(v___y_2456_, 2);
v_binderInfo_2460_ = lean_ctor_get_uint8(v___y_2456_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2458_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2461_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_binderType_2458_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_a_2462_; lean_object* v___x_2463_; 
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
lean_inc(v_a_2462_);
lean_dec_ref(v___x_2461_);
lean_inc_ref(v_body_2459_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2463_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_body_2459_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2463_) == 0)
{
lean_object* v_a_2464_; size_t v___x_2465_; size_t v___x_2466_; uint8_t v___x_2467_; 
v_a_2464_ = lean_ctor_get(v___x_2463_, 0);
lean_inc(v_a_2464_);
lean_dec_ref(v___x_2463_);
v___x_2465_ = lean_ptr_addr(v_binderType_2458_);
v___x_2466_ = lean_ptr_addr(v_a_2462_);
v___x_2467_ = lean_usize_dec_eq(v___x_2465_, v___x_2466_);
if (v___x_2467_ == 0)
{
v___y_2437_ = v_a_2462_;
v___y_2438_ = v___y_2456_;
v___y_2439_ = v_binderInfo_2460_;
v___y_2440_ = v_a_2464_;
v___y_2441_ = v_binderName_2457_;
v___y_2442_ = v___x_2467_;
goto v___jp_2436_;
}
else
{
size_t v___x_2468_; size_t v___x_2469_; uint8_t v___x_2470_; 
v___x_2468_ = lean_ptr_addr(v_body_2459_);
v___x_2469_ = lean_ptr_addr(v_a_2464_);
v___x_2470_ = lean_usize_dec_eq(v___x_2468_, v___x_2469_);
v___y_2437_ = v_a_2462_;
v___y_2438_ = v___y_2456_;
v___y_2439_ = v_binderInfo_2460_;
v___y_2440_ = v_a_2464_;
v___y_2441_ = v_binderName_2457_;
v___y_2442_ = v___x_2470_;
goto v___jp_2436_;
}
}
else
{
lean_dec(v_a_2462_);
lean_dec(v_binderName_2457_);
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2463_;
}
}
else
{
lean_dec_ref(v___y_2456_);
lean_dec(v_binderName_2457_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2461_;
}
}
case 6:
{
lean_object* v_binderName_2471_; lean_object* v_binderType_2472_; lean_object* v_body_2473_; uint8_t v_binderInfo_2474_; lean_object* v___x_2475_; 
v_binderName_2471_ = lean_ctor_get(v___y_2456_, 0);
lean_inc(v_binderName_2471_);
v_binderType_2472_ = lean_ctor_get(v___y_2456_, 1);
v_body_2473_ = lean_ctor_get(v___y_2456_, 2);
v_binderInfo_2474_ = lean_ctor_get_uint8(v___y_2456_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_2472_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2475_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_binderType_2472_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2475_) == 0)
{
lean_object* v_a_2476_; lean_object* v___x_2477_; 
v_a_2476_ = lean_ctor_get(v___x_2475_, 0);
lean_inc(v_a_2476_);
lean_dec_ref(v___x_2475_);
lean_inc_ref(v_body_2473_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2477_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_body_2473_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_a_2478_; size_t v___x_2479_; size_t v___x_2480_; uint8_t v___x_2481_; 
v_a_2478_ = lean_ctor_get(v___x_2477_, 0);
lean_inc(v_a_2478_);
lean_dec_ref(v___x_2477_);
v___x_2479_ = lean_ptr_addr(v_binderType_2472_);
v___x_2480_ = lean_ptr_addr(v_a_2476_);
v___x_2481_ = lean_usize_dec_eq(v___x_2479_, v___x_2480_);
if (v___x_2481_ == 0)
{
v___y_2424_ = v_binderInfo_2474_;
v___y_2425_ = v___y_2456_;
v___y_2426_ = v_binderName_2471_;
v___y_2427_ = v_a_2476_;
v___y_2428_ = v_a_2478_;
v___y_2429_ = v___x_2481_;
goto v___jp_2423_;
}
else
{
size_t v___x_2482_; size_t v___x_2483_; uint8_t v___x_2484_; 
v___x_2482_ = lean_ptr_addr(v_body_2473_);
v___x_2483_ = lean_ptr_addr(v_a_2478_);
v___x_2484_ = lean_usize_dec_eq(v___x_2482_, v___x_2483_);
v___y_2424_ = v_binderInfo_2474_;
v___y_2425_ = v___y_2456_;
v___y_2426_ = v_binderName_2471_;
v___y_2427_ = v_a_2476_;
v___y_2428_ = v_a_2478_;
v___y_2429_ = v___x_2484_;
goto v___jp_2423_;
}
}
else
{
lean_dec(v_a_2476_);
lean_dec(v_binderName_2471_);
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2477_;
}
}
else
{
lean_dec(v_binderName_2471_);
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2475_;
}
}
case 8:
{
lean_object* v_declName_2485_; lean_object* v_type_2486_; lean_object* v_value_2487_; lean_object* v_body_2488_; uint8_t v_nondep_2489_; lean_object* v___x_2490_; 
v_declName_2485_ = lean_ctor_get(v___y_2456_, 0);
lean_inc(v_declName_2485_);
v_type_2486_ = lean_ctor_get(v___y_2456_, 1);
v_value_2487_ = lean_ctor_get(v___y_2456_, 2);
v_body_2488_ = lean_ctor_get(v___y_2456_, 3);
lean_inc_ref(v_body_2488_);
v_nondep_2489_ = lean_ctor_get_uint8(v___y_2456_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_2486_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2490_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_type_2486_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2490_) == 0)
{
lean_object* v_a_2491_; lean_object* v___x_2492_; 
v_a_2491_ = lean_ctor_get(v___x_2490_, 0);
lean_inc(v_a_2491_);
lean_dec_ref(v___x_2490_);
lean_inc_ref(v_value_2487_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2492_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_value_2487_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2492_) == 0)
{
lean_object* v_a_2493_; lean_object* v___x_2494_; 
v_a_2493_ = lean_ctor_get(v___x_2492_, 0);
lean_inc(v_a_2493_);
lean_dec_ref(v___x_2492_);
lean_inc_ref(v_body_2488_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2494_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_body_2488_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2494_) == 0)
{
lean_object* v_a_2495_; size_t v___x_2496_; size_t v___x_2497_; uint8_t v___x_2498_; 
v_a_2495_ = lean_ctor_get(v___x_2494_, 0);
lean_inc(v_a_2495_);
lean_dec_ref(v___x_2494_);
v___x_2496_ = lean_ptr_addr(v_type_2486_);
v___x_2497_ = lean_ptr_addr(v_a_2491_);
v___x_2498_ = lean_usize_dec_eq(v___x_2496_, v___x_2497_);
if (v___x_2498_ == 0)
{
v___y_2407_ = v_body_2488_;
v___y_2408_ = v___y_2456_;
v___y_2409_ = v_nondep_2489_;
v___y_2410_ = v_a_2495_;
v___y_2411_ = v_a_2493_;
v___y_2412_ = v_a_2491_;
v___y_2413_ = v_declName_2485_;
v___y_2414_ = v___x_2498_;
goto v___jp_2406_;
}
else
{
size_t v___x_2499_; size_t v___x_2500_; uint8_t v___x_2501_; 
v___x_2499_ = lean_ptr_addr(v_value_2487_);
v___x_2500_ = lean_ptr_addr(v_a_2493_);
v___x_2501_ = lean_usize_dec_eq(v___x_2499_, v___x_2500_);
v___y_2407_ = v_body_2488_;
v___y_2408_ = v___y_2456_;
v___y_2409_ = v_nondep_2489_;
v___y_2410_ = v_a_2495_;
v___y_2411_ = v_a_2493_;
v___y_2412_ = v_a_2491_;
v___y_2413_ = v_declName_2485_;
v___y_2414_ = v___x_2501_;
goto v___jp_2406_;
}
}
else
{
lean_dec(v_a_2493_);
lean_dec(v_a_2491_);
lean_dec_ref(v_body_2488_);
lean_dec_ref(v___y_2456_);
lean_dec(v_declName_2485_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2494_;
}
}
else
{
lean_dec(v_a_2491_);
lean_dec_ref(v_body_2488_);
lean_dec(v_declName_2485_);
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2492_;
}
}
else
{
lean_dec_ref(v_body_2488_);
lean_dec(v_declName_2485_);
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2490_;
}
}
case 5:
{
lean_object* v_dummy_2502_; lean_object* v_nargs_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v_dummy_2502_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0);
v_nargs_2503_ = l_Lean_Expr_getAppNumArgs(v___y_2456_);
lean_inc(v_nargs_2503_);
v___x_2504_ = lean_mk_array(v_nargs_2503_, v_dummy_2502_);
v___x_2505_ = lean_unsigned_to_nat(1u);
v___x_2506_ = lean_nat_sub(v_nargs_2503_, v___x_2505_);
lean_dec(v_nargs_2503_);
v___x_2507_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__4(v_pre_2399_, v_post_2401_, v___y_2456_, v___x_2504_, v___x_2506_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2507_;
}
case 10:
{
lean_object* v_data_2508_; lean_object* v_expr_2509_; lean_object* v___x_2510_; 
v_data_2508_ = lean_ctor_get(v___y_2456_, 0);
v_expr_2509_ = lean_ctor_get(v___y_2456_, 1);
lean_inc_ref(v_expr_2509_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2510_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_expr_2509_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2510_) == 0)
{
lean_object* v_a_2511_; size_t v___x_2512_; size_t v___x_2513_; uint8_t v___x_2514_; 
v_a_2511_ = lean_ctor_get(v___x_2510_, 0);
lean_inc(v_a_2511_);
lean_dec_ref(v___x_2510_);
v___x_2512_ = lean_ptr_addr(v_expr_2509_);
v___x_2513_ = lean_ptr_addr(v_a_2511_);
v___x_2514_ = lean_usize_dec_eq(v___x_2512_, v___x_2513_);
if (v___x_2514_ == 0)
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
lean_inc(v_data_2508_);
lean_dec_ref(v___y_2456_);
v___x_2515_ = l_Lean_Expr_mdata___override(v_data_2508_, v_a_2511_);
v___x_2516_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2515_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2516_;
}
else
{
lean_object* v___x_2517_; 
lean_dec(v_a_2511_);
v___x_2517_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___y_2456_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2517_;
}
}
else
{
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2510_;
}
}
case 11:
{
lean_object* v_typeName_2518_; lean_object* v_idx_2519_; lean_object* v_struct_2520_; lean_object* v___x_2521_; 
v_typeName_2518_ = lean_ctor_get(v___y_2456_, 0);
v_idx_2519_ = lean_ctor_get(v___y_2456_, 1);
v_struct_2520_ = lean_ctor_get(v___y_2456_, 2);
lean_inc_ref(v_struct_2520_);
lean_inc_ref(v_post_2401_);
lean_inc_ref(v_pre_2399_);
v___x_2521_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2399_, v_post_2401_, v_struct_2520_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2521_) == 0)
{
lean_object* v_a_2522_; size_t v___x_2523_; size_t v___x_2524_; uint8_t v___x_2525_; 
v_a_2522_ = lean_ctor_get(v___x_2521_, 0);
lean_inc(v_a_2522_);
lean_dec_ref(v___x_2521_);
v___x_2523_ = lean_ptr_addr(v_struct_2520_);
v___x_2524_ = lean_ptr_addr(v_a_2522_);
v___x_2525_ = lean_usize_dec_eq(v___x_2523_, v___x_2524_);
if (v___x_2525_ == 0)
{
lean_object* v___x_2526_; lean_object* v___x_2527_; 
lean_inc(v_idx_2519_);
lean_inc(v_typeName_2518_);
lean_dec_ref(v___y_2456_);
v___x_2526_ = l_Lean_Expr_proj___override(v_typeName_2518_, v_idx_2519_, v_a_2522_);
v___x_2527_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2526_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2527_;
}
else
{
lean_object* v___x_2528_; 
lean_dec(v_a_2522_);
v___x_2528_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___y_2456_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2528_;
}
}
else
{
lean_dec_ref(v___y_2456_);
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_pre_2399_);
return v___x_2521_;
}
}
default: 
{
lean_object* v___x_2529_; 
v___x_2529_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___y_2456_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2529_;
}
}
}
}
}
else
{
lean_object* v_a_2541_; lean_object* v___x_2543_; uint8_t v_isShared_2544_; uint8_t v_isSharedCheck_2548_; 
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_e_2400_);
lean_dec_ref(v_pre_2399_);
v_a_2541_ = lean_ctor_get(v___x_2450_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2450_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2543_ = v___x_2450_;
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
else
{
lean_inc(v_a_2541_);
lean_dec(v___x_2450_);
v___x_2543_ = lean_box(0);
v_isShared_2544_ = v_isSharedCheck_2548_;
goto v_resetjp_2542_;
}
v_resetjp_2542_:
{
lean_object* v___x_2546_; 
if (v_isShared_2544_ == 0)
{
v___x_2546_ = v___x_2543_;
goto v_reusejp_2545_;
}
else
{
lean_object* v_reuseFailAlloc_2547_; 
v_reuseFailAlloc_2547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2547_, 0, v_a_2541_);
v___x_2546_ = v_reuseFailAlloc_2547_;
goto v_reusejp_2545_;
}
v_reusejp_2545_:
{
return v___x_2546_;
}
}
}
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
lean_dec_ref(v_post_2401_);
lean_dec_ref(v_e_2400_);
lean_dec_ref(v_pre_2399_);
v_a_2549_ = lean_ctor_get(v___x_2449_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2449_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2449_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2449_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
v___jp_2406_:
{
if (v___y_2414_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
lean_dec_ref(v___y_2408_);
lean_dec_ref(v___y_2407_);
v___x_2415_ = l_Lean_Expr_letE___override(v___y_2413_, v___y_2412_, v___y_2411_, v___y_2410_, v___y_2409_);
v___x_2416_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2415_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2416_;
}
else
{
size_t v___x_2417_; size_t v___x_2418_; uint8_t v___x_2419_; 
v___x_2417_ = lean_ptr_addr(v___y_2407_);
lean_dec_ref(v___y_2407_);
v___x_2418_ = lean_ptr_addr(v___y_2410_);
v___x_2419_ = lean_usize_dec_eq(v___x_2417_, v___x_2418_);
if (v___x_2419_ == 0)
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_dec_ref(v___y_2408_);
v___x_2420_ = l_Lean_Expr_letE___override(v___y_2413_, v___y_2412_, v___y_2411_, v___y_2410_, v___y_2409_);
v___x_2421_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2420_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2421_;
}
else
{
lean_object* v___x_2422_; 
lean_dec(v___y_2413_);
lean_dec_ref(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec_ref(v___y_2410_);
v___x_2422_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___y_2408_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2422_;
}
}
}
v___jp_2423_:
{
if (v___y_2429_ == 0)
{
lean_object* v___x_2430_; lean_object* v___x_2431_; 
lean_dec_ref(v___y_2425_);
v___x_2430_ = l_Lean_Expr_lam___override(v___y_2426_, v___y_2427_, v___y_2428_, v___y_2424_);
v___x_2431_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2430_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2431_;
}
else
{
uint8_t v___x_2432_; 
v___x_2432_ = l_Lean_instBEqBinderInfo_beq(v___y_2424_, v___y_2424_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
lean_dec_ref(v___y_2425_);
v___x_2433_ = l_Lean_Expr_lam___override(v___y_2426_, v___y_2427_, v___y_2428_, v___y_2424_);
v___x_2434_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2433_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2434_;
}
else
{
lean_object* v___x_2435_; 
lean_dec_ref(v___y_2428_);
lean_dec_ref(v___y_2427_);
lean_dec(v___y_2426_);
v___x_2435_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___y_2425_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2435_;
}
}
}
v___jp_2436_:
{
if (v___y_2442_ == 0)
{
lean_object* v___x_2443_; lean_object* v___x_2444_; 
lean_dec_ref(v___y_2438_);
v___x_2443_ = l_Lean_Expr_forallE___override(v___y_2441_, v___y_2437_, v___y_2440_, v___y_2439_);
v___x_2444_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2443_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2444_;
}
else
{
uint8_t v___x_2445_; 
v___x_2445_ = l_Lean_instBEqBinderInfo_beq(v___y_2439_, v___y_2439_);
if (v___x_2445_ == 0)
{
lean_object* v___x_2446_; lean_object* v___x_2447_; 
lean_dec_ref(v___y_2438_);
v___x_2446_ = l_Lean_Expr_forallE___override(v___y_2441_, v___y_2437_, v___y_2440_, v___y_2439_);
v___x_2447_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___x_2446_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2447_;
}
else
{
lean_object* v___x_2448_; 
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec_ref(v___y_2437_);
v___x_2448_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2399_, v_post_2401_, v___y_2438_, v___y_2402_, v___y_2403_, v___y_2404_);
return v___x_2448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___boxed(lean_object* v___x_2557_, lean_object* v_pre_2558_, lean_object* v_e_2559_, lean_object* v_post_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1(v___x_2557_, v_pre_2558_, v_e_2559_, v_post_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(lean_object* v_pre_2566_, lean_object* v_post_2567_, lean_object* v_e_2568_, lean_object* v_a_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; 
lean_inc(v_a_2569_);
v___x_2573_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2573_, 0, lean_box(0));
lean_closure_set(v___x_2573_, 1, lean_box(0));
lean_closure_set(v___x_2573_, 2, v_a_2569_);
v___x_2574_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__0(lean_box(0), v___x_2573_, v___y_2570_, v___y_2571_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v___x_2577_; uint8_t v_isShared_2578_; uint8_t v_isSharedCheck_2606_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2577_ = v___x_2574_;
v_isShared_2578_ = v_isSharedCheck_2606_;
goto v_resetjp_2576_;
}
else
{
lean_inc(v_a_2575_);
lean_dec(v___x_2574_);
v___x_2577_ = lean_box(0);
v_isShared_2578_ = v_isSharedCheck_2606_;
goto v_resetjp_2576_;
}
v_resetjp_2576_:
{
lean_object* v___x_2579_; 
v___x_2579_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg(v_a_2575_, v_e_2568_);
lean_dec(v_a_2575_);
if (lean_obj_tag(v___x_2579_) == 0)
{
lean_object* v___x_2580_; lean_object* v___f_2581_; lean_object* v___x_2582_; 
lean_del_object(v___x_2577_);
v___x_2580_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0);
lean_inc_ref(v_e_2568_);
v___f_2581_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_2581_, 0, v___x_2580_);
lean_closure_set(v___f_2581_, 1, v_pre_2566_);
lean_closure_set(v___f_2581_, 2, v_e_2568_);
lean_closure_set(v___f_2581_, 3, v_post_2567_);
v___x_2582_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___redArg(v___f_2581_, v_a_2569_, v___y_2570_, v___y_2571_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___f_2584_; lean_object* v___x_2585_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc_n(v_a_2583_, 2);
lean_dec_ref(v___x_2582_);
lean_inc(v_a_2569_);
v___f_2584_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2584_, 0, v_a_2569_);
lean_closure_set(v___f_2584_, 1, v_e_2568_);
lean_closure_set(v___f_2584_, 2, v_a_2583_);
v___x_2585_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__0(lean_box(0), v___f_2584_, v___y_2570_, v___y_2571_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v___x_2587_; uint8_t v_isShared_2588_; uint8_t v_isSharedCheck_2592_; 
v_isSharedCheck_2592_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2592_ == 0)
{
lean_object* v_unused_2593_; 
v_unused_2593_ = lean_ctor_get(v___x_2585_, 0);
lean_dec(v_unused_2593_);
v___x_2587_ = v___x_2585_;
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
else
{
lean_dec(v___x_2585_);
v___x_2587_ = lean_box(0);
v_isShared_2588_ = v_isSharedCheck_2592_;
goto v_resetjp_2586_;
}
v_resetjp_2586_:
{
lean_object* v___x_2590_; 
if (v_isShared_2588_ == 0)
{
lean_ctor_set(v___x_2587_, 0, v_a_2583_);
v___x_2590_ = v___x_2587_;
goto v_reusejp_2589_;
}
else
{
lean_object* v_reuseFailAlloc_2591_; 
v_reuseFailAlloc_2591_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2591_, 0, v_a_2583_);
v___x_2590_ = v_reuseFailAlloc_2591_;
goto v_reusejp_2589_;
}
v_reusejp_2589_:
{
return v___x_2590_;
}
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2596_; uint8_t v_isShared_2597_; uint8_t v_isSharedCheck_2601_; 
lean_dec(v_a_2583_);
v_a_2594_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2596_ = v___x_2585_;
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
else
{
lean_inc(v_a_2594_);
lean_dec(v___x_2585_);
v___x_2596_ = lean_box(0);
v_isShared_2597_ = v_isSharedCheck_2601_;
goto v_resetjp_2595_;
}
v_resetjp_2595_:
{
lean_object* v___x_2599_; 
if (v_isShared_2597_ == 0)
{
v___x_2599_ = v___x_2596_;
goto v_reusejp_2598_;
}
else
{
lean_object* v_reuseFailAlloc_2600_; 
v_reuseFailAlloc_2600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2600_, 0, v_a_2594_);
v___x_2599_ = v_reuseFailAlloc_2600_;
goto v_reusejp_2598_;
}
v_reusejp_2598_:
{
return v___x_2599_;
}
}
}
}
else
{
lean_dec_ref(v_e_2568_);
return v___x_2582_;
}
}
else
{
lean_object* v_val_2602_; lean_object* v___x_2604_; 
lean_dec_ref(v_e_2568_);
lean_dec_ref(v_post_2567_);
lean_dec_ref(v_pre_2566_);
v_val_2602_ = lean_ctor_get(v___x_2579_, 0);
lean_inc(v_val_2602_);
lean_dec_ref(v___x_2579_);
if (v_isShared_2578_ == 0)
{
lean_ctor_set(v___x_2577_, 0, v_val_2602_);
v___x_2604_ = v___x_2577_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_val_2602_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec_ref(v_e_2568_);
lean_dec_ref(v_post_2567_);
lean_dec_ref(v_pre_2566_);
v_a_2607_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2574_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2574_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(lean_object* v_pre_2615_, lean_object* v_post_2616_, lean_object* v_e_2617_, lean_object* v_a_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_){
_start:
{
lean_object* v___x_2622_; 
lean_inc_ref(v_post_2616_);
lean_inc(v___y_2620_);
lean_inc_ref(v___y_2619_);
lean_inc_ref(v_e_2617_);
v___x_2622_ = lean_apply_4(v_post_2616_, v_e_2617_, v___y_2619_, v___y_2620_, lean_box(0));
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2641_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2625_ = v___x_2622_;
v_isShared_2626_ = v_isSharedCheck_2641_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2622_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2641_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
switch(lean_obj_tag(v_a_2623_))
{
case 0:
{
lean_object* v_e_2627_; lean_object* v___x_2629_; 
lean_dec_ref(v_e_2617_);
lean_dec_ref(v_post_2616_);
lean_dec_ref(v_pre_2615_);
v_e_2627_ = lean_ctor_get(v_a_2623_, 0);
lean_inc_ref(v_e_2627_);
lean_dec_ref(v_a_2623_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v_e_2627_);
v___x_2629_ = v___x_2625_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_e_2627_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
case 1:
{
lean_object* v_e_2631_; lean_object* v___x_2632_; 
lean_del_object(v___x_2625_);
lean_dec_ref(v_e_2617_);
v_e_2631_ = lean_ctor_get(v_a_2623_, 0);
lean_inc_ref(v_e_2631_);
lean_dec_ref(v_a_2623_);
v___x_2632_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2615_, v_post_2616_, v_e_2631_, v_a_2618_, v___y_2619_, v___y_2620_);
return v___x_2632_;
}
default: 
{
lean_object* v_e_x3f_2633_; 
lean_dec_ref(v_post_2616_);
lean_dec_ref(v_pre_2615_);
v_e_x3f_2633_ = lean_ctor_get(v_a_2623_, 0);
lean_inc(v_e_x3f_2633_);
lean_dec_ref(v_a_2623_);
if (lean_obj_tag(v_e_x3f_2633_) == 0)
{
lean_object* v___x_2635_; 
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v_e_2617_);
v___x_2635_ = v___x_2625_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v_e_2617_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
else
{
lean_object* v_val_2637_; lean_object* v___x_2639_; 
lean_dec_ref(v_e_2617_);
v_val_2637_ = lean_ctor_get(v_e_x3f_2633_, 0);
lean_inc(v_val_2637_);
lean_dec_ref(v_e_x3f_2633_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v_val_2637_);
v___x_2639_ = v___x_2625_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_val_2637_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
}
}
}
else
{
lean_object* v_a_2642_; lean_object* v___x_2644_; uint8_t v_isShared_2645_; uint8_t v_isSharedCheck_2649_; 
lean_dec_ref(v_e_2617_);
lean_dec_ref(v_post_2616_);
lean_dec_ref(v_pre_2615_);
v_a_2642_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2649_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2649_ == 0)
{
v___x_2644_ = v___x_2622_;
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
else
{
lean_inc(v_a_2642_);
lean_dec(v___x_2622_);
v___x_2644_ = lean_box(0);
v_isShared_2645_ = v_isSharedCheck_2649_;
goto v_resetjp_2643_;
}
v_resetjp_2643_:
{
lean_object* v___x_2647_; 
if (v_isShared_2645_ == 0)
{
v___x_2647_ = v___x_2644_;
goto v_reusejp_2646_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_a_2642_);
v___x_2647_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2646_;
}
v_reusejp_2646_:
{
return v___x_2647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_2650_, lean_object* v_post_2651_, lean_object* v_e_2652_, lean_object* v_a_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v_res_2657_; 
v_res_2657_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__2(v_pre_2650_, v_post_2651_, v_e_2652_, v_a_2653_, v___y_2654_, v___y_2655_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v_a_2653_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_2658_, lean_object* v_post_2659_, lean_object* v_sz_2660_, lean_object* v_i_2661_, lean_object* v_bs_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_){
_start:
{
size_t v_sz_boxed_2667_; size_t v_i_boxed_2668_; lean_object* v_res_2669_; 
v_sz_boxed_2667_ = lean_unbox_usize(v_sz_2660_);
lean_dec(v_sz_2660_);
v_i_boxed_2668_ = lean_unbox_usize(v_i_2661_);
lean_dec(v_i_2661_);
v_res_2669_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__1(v_pre_2658_, v_post_2659_, v_sz_boxed_2667_, v_i_boxed_2668_, v_bs_2662_, v___y_2663_, v___y_2664_, v___y_2665_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
return v_res_2669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_2670_, lean_object* v_post_2671_, lean_object* v_x_2672_, lean_object* v_x_2673_, lean_object* v_x_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v_res_2679_; 
v_res_2679_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__4(v_pre_2670_, v_post_2671_, v_x_2672_, v_x_2673_, v_x_2674_, v___y_2675_, v___y_2676_, v___y_2677_);
lean_dec(v___y_2677_);
lean_dec_ref(v___y_2676_);
lean_dec(v___y_2675_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___boxed(lean_object* v_pre_2680_, lean_object* v_post_2681_, lean_object* v_e_2682_, lean_object* v_a_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v_res_2687_; 
v_res_2687_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2680_, v_post_2681_, v_e_2682_, v_a_2683_, v___y_2684_, v___y_2685_);
lean_dec(v___y_2685_);
lean_dec_ref(v___y_2684_);
lean_dec(v_a_2683_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___lam__0(lean_object* v_00_u03b1_2688_, lean_object* v_x_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v___x_2693_ = lean_st_ref_get(v___y_2691_);
lean_dec(v___x_2693_);
v___x_2694_ = lean_apply_1(v_x_2689_, lean_box(0));
v___x_2695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2694_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___lam__0___boxed(lean_object* v_00_u03b1_2696_, lean_object* v_x_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v_res_2701_; 
v_res_2701_ = l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___lam__0(v_00_u03b1_2696_, v_x_2697_, v___y_2698_, v___y_2699_);
lean_dec(v___y_2699_);
lean_dec_ref(v___y_2698_);
return v_res_2701_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; 
v___x_2702_ = lean_box(0);
v___x_2703_ = lean_unsigned_to_nat(16u);
v___x_2704_ = lean_mk_array(v___x_2703_, v___x_2702_);
return v___x_2704_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2705_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__0);
v___x_2706_ = lean_unsigned_to_nat(0u);
v___x_2707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
lean_ctor_set(v___x_2707_, 1, v___x_2705_);
return v___x_2707_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2708_; lean_object* v___x_2709_; 
v___x_2708_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__1);
v___x_2709_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2709_, 0, lean_box(0));
lean_closure_set(v___x_2709_, 1, lean_box(0));
lean_closure_set(v___x_2709_, 2, v___x_2708_);
return v___x_2709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0(lean_object* v_input_2710_, lean_object* v_pre_2711_, lean_object* v_post_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_){
_start:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v_a_2718_; lean_object* v___x_2719_; 
v___x_2716_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2);
v___x_2717_ = l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___lam__0(lean_box(0), v___x_2716_, v___y_2713_, v___y_2714_);
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_a_2718_);
lean_dec_ref(v___x_2717_);
v___x_2719_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0(v_pre_2711_, v_post_2712_, v_input_2710_, v_a_2718_, v___y_2713_, v___y_2714_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2724_; uint8_t v_isShared_2725_; uint8_t v_isSharedCheck_2729_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_a_2720_);
lean_dec_ref(v___x_2719_);
v___x_2721_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2721_, 0, lean_box(0));
lean_closure_set(v___x_2721_, 1, lean_box(0));
lean_closure_set(v___x_2721_, 2, v_a_2718_);
v___x_2722_ = l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___lam__0(lean_box(0), v___x_2721_, v___y_2713_, v___y_2714_);
v_isSharedCheck_2729_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2729_ == 0)
{
lean_object* v_unused_2730_; 
v_unused_2730_ = lean_ctor_get(v___x_2722_, 0);
lean_dec(v_unused_2730_);
v___x_2724_ = v___x_2722_;
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
else
{
lean_dec(v___x_2722_);
v___x_2724_ = lean_box(0);
v_isShared_2725_ = v_isSharedCheck_2729_;
goto v_resetjp_2723_;
}
v_resetjp_2723_:
{
lean_object* v___x_2727_; 
if (v_isShared_2725_ == 0)
{
lean_ctor_set(v___x_2724_, 0, v_a_2720_);
v___x_2727_ = v___x_2724_;
goto v_reusejp_2726_;
}
else
{
lean_object* v_reuseFailAlloc_2728_; 
v_reuseFailAlloc_2728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2728_, 0, v_a_2720_);
v___x_2727_ = v_reuseFailAlloc_2728_;
goto v_reusejp_2726_;
}
v_reusejp_2726_:
{
return v___x_2727_;
}
}
}
else
{
lean_dec(v_a_2718_);
return v___x_2719_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___boxed(lean_object* v_input_2731_, lean_object* v_pre_2732_, lean_object* v_post_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0(v_input_2731_, v_pre_2732_, v_post_2733_, v___y_2734_, v___y_2735_);
lean_dec(v___y_2735_);
lean_dec_ref(v___y_2734_);
return v_res_2737_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_eraseIrrelevantMData___closed__0(void){
_start:
{
lean_object* v___f_2738_; 
v___f_2738_ = lean_alloc_closure((void*)(l_Lean_Expr_isMData___boxed), 1, 0);
return v___f_2738_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_eraseIrrelevantMData___closed__1(void){
_start:
{
lean_object* v_pre_2739_; 
v_pre_2739_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_eraseIrrelevantMData___lam__0___boxed), 4, 0);
return v_pre_2739_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_eraseIrrelevantMData___closed__2(void){
_start:
{
lean_object* v___f_2740_; 
v___f_2740_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_eraseIrrelevantMData___lam__1___boxed), 4, 0);
return v___f_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData(lean_object* v_e_2741_, lean_object* v_a_2742_, lean_object* v_a_2743_){
_start:
{
lean_object* v___f_2745_; lean_object* v___x_2746_; 
v___f_2745_ = lean_obj_once(&l_Lean_Meta_Grind_eraseIrrelevantMData___closed__0, &l_Lean_Meta_Grind_eraseIrrelevantMData___closed__0_once, _init_l_Lean_Meta_Grind_eraseIrrelevantMData___closed__0);
v___x_2746_ = lean_find_expr(v___f_2745_, v_e_2741_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v___x_2747_; 
v___x_2747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2747_, 0, v_e_2741_);
return v___x_2747_;
}
else
{
lean_object* v_pre_2748_; lean_object* v___f_2749_; lean_object* v___x_2750_; 
lean_dec_ref(v___x_2746_);
v_pre_2748_ = lean_obj_once(&l_Lean_Meta_Grind_eraseIrrelevantMData___closed__1, &l_Lean_Meta_Grind_eraseIrrelevantMData___closed__1_once, _init_l_Lean_Meta_Grind_eraseIrrelevantMData___closed__1);
v___f_2749_ = lean_obj_once(&l_Lean_Meta_Grind_eraseIrrelevantMData___closed__2, &l_Lean_Meta_Grind_eraseIrrelevantMData___closed__2_once, _init_l_Lean_Meta_Grind_eraseIrrelevantMData___closed__2);
v___x_2750_ = l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0(v_e_2741_, v_pre_2748_, v___f_2749_, v_a_2742_, v_a_2743_);
return v___x_2750_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_eraseIrrelevantMData___boxed(lean_object* v_e_2751_, lean_object* v_a_2752_, lean_object* v_a_2753_, lean_object* v_a_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lean_Meta_Grind_eraseIrrelevantMData(v_e_2751_, v_a_2752_, v_a_2753_);
lean_dec(v_a_2753_);
lean_dec_ref(v_a_2752_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_2756_, lean_object* v_m_2757_, lean_object* v_a_2758_){
_start:
{
lean_object* v___x_2759_; 
v___x_2759_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg(v_m_2757_, v_a_2758_);
return v___x_2759_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_2760_, lean_object* v_m_2761_, lean_object* v_a_2762_){
_start:
{
lean_object* v_res_2763_; 
v_res_2763_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3(v_00_u03b2_2760_, v_m_2761_, v_a_2762_);
lean_dec_ref(v_a_2762_);
lean_dec_ref(v_m_2761_);
return v_res_2763_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_2764_, lean_object* v_ref_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_2765_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_2770_, lean_object* v_ref_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_){
_start:
{
lean_object* v_res_2775_; 
v_res_2775_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_2770_, v_ref_2771_, v___y_2772_, v___y_2773_);
lean_dec(v___y_2773_);
lean_dec_ref(v___y_2772_);
return v_res_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_){
_start:
{
lean_object* v___x_2780_; 
v___x_2780_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_2780_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_){
_start:
{
lean_object* v_res_2785_; 
v_res_2785_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_2781_, v___y_2782_, v___y_2783_);
lean_dec(v___y_2783_);
lean_dec_ref(v___y_2782_);
return v_res_2785_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_2786_, lean_object* v_x_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_){
_start:
{
lean_object* v___x_2792_; 
v___x_2792_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___redArg(v_x_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
return v___x_2792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_2793_, lean_object* v_x_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v_res_2799_; 
v_res_2799_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5(v_00_u03b1_2793_, v_x_2794_, v___y_2795_, v___y_2796_, v___y_2797_);
lean_dec(v___y_2797_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
return v_res_2799_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_2800_, lean_object* v_m_2801_, lean_object* v_a_2802_, lean_object* v_b_2803_){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6___redArg(v_m_2801_, v_a_2802_, v_b_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_2805_, lean_object* v_a_2806_, lean_object* v_x_2807_){
_start:
{
lean_object* v___x_2808_; 
v___x_2808_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___redArg(v_a_2806_, v_x_2807_);
return v___x_2808_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_2809_, lean_object* v_a_2810_, lean_object* v_x_2811_){
_start:
{
lean_object* v_res_2812_; 
v_res_2812_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_2809_, v_a_2810_, v_x_2811_);
lean_dec(v_x_2811_);
lean_dec_ref(v_a_2810_);
return v_res_2812_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_2813_, lean_object* v_a_2814_, lean_object* v_x_2815_){
_start:
{
uint8_t v___x_2816_; 
v___x_2816_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___redArg(v_a_2814_, v_x_2815_);
return v___x_2816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_2817_, lean_object* v_a_2818_, lean_object* v_x_2819_){
_start:
{
uint8_t v_res_2820_; lean_object* v_r_2821_; 
v_res_2820_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_2817_, v_a_2818_, v_x_2819_);
lean_dec(v_x_2819_);
lean_dec_ref(v_a_2818_);
v_r_2821_ = lean_box(v_res_2820_);
return v_r_2821_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_2822_, lean_object* v_data_2823_){
_start:
{
lean_object* v___x_2824_; 
v___x_2824_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11___redArg(v_data_2823_);
return v___x_2824_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_2825_, lean_object* v_a_2826_, lean_object* v_b_2827_, lean_object* v_x_2828_){
_start:
{
lean_object* v___x_2829_; 
v___x_2829_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__12___redArg(v_a_2826_, v_b_2827_, v_x_2828_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_2830_, lean_object* v_i_2831_, lean_object* v_source_2832_, lean_object* v_target_2833_){
_start:
{
lean_object* v___x_2834_; 
v___x_2834_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_2831_, v_source_2832_, v_target_2833_);
return v___x_2834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_2835_, lean_object* v_x_2836_, lean_object* v_x_2837_){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_2836_, v_x_2837_);
return v___x_2838_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0_spec__0(lean_object* v_msgData_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v___x_2845_; lean_object* v_env_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v_mctx_2849_; lean_object* v_lctx_2850_; lean_object* v_options_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; 
v___x_2845_ = lean_st_ref_get(v___y_2843_);
v_env_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc_ref(v_env_2846_);
lean_dec(v___x_2845_);
v___x_2847_ = lean_st_ref_get(v___y_2843_);
lean_dec(v___x_2847_);
v___x_2848_ = lean_st_ref_get(v___y_2841_);
v_mctx_2849_ = lean_ctor_get(v___x_2848_, 0);
lean_inc_ref(v_mctx_2849_);
lean_dec(v___x_2848_);
v_lctx_2850_ = lean_ctor_get(v___y_2840_, 2);
v_options_2851_ = lean_ctor_get(v___y_2842_, 2);
lean_inc_ref(v_options_2851_);
lean_inc_ref(v_lctx_2850_);
v___x_2852_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2852_, 0, v_env_2846_);
lean_ctor_set(v___x_2852_, 1, v_mctx_2849_);
lean_ctor_set(v___x_2852_, 2, v_lctx_2850_);
lean_ctor_set(v___x_2852_, 3, v_options_2851_);
v___x_2853_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
lean_ctor_set(v___x_2853_, 1, v_msgData_2839_);
v___x_2854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2854_, 0, v___x_2853_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0_spec__0___boxed(lean_object* v_msgData_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
lean_object* v_res_2861_; 
v_res_2861_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0_spec__0(v_msgData_2855_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_);
lean_dec(v___y_2859_);
lean_dec_ref(v___y_2858_);
lean_dec(v___y_2857_);
lean_dec_ref(v___y_2856_);
return v_res_2861_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2862_; double v___x_2863_; 
v___x_2862_ = lean_unsigned_to_nat(0u);
v___x_2863_ = lean_float_of_nat(v___x_2862_);
return v___x_2863_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = lean_mk_string_unchecked("", 0, 0);
return v___x_2864_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_unsigned_to_nat(0u);
v___x_2866_ = lean_mk_empty_array_with_capacity(v___x_2865_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0(lean_object* v_cls_2867_, lean_object* v_msg_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v_ref_2874_; lean_object* v___x_2875_; lean_object* v_a_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2920_; 
v_ref_2874_ = lean_ctor_get(v___y_2871_, 5);
v___x_2875_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0_spec__0(v_msg_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_);
v_a_2876_ = lean_ctor_get(v___x_2875_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2875_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2878_ = v___x_2875_;
v_isShared_2879_ = v_isSharedCheck_2920_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_a_2876_);
lean_dec(v___x_2875_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2920_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v___x_2880_; lean_object* v_traceState_2881_; lean_object* v_env_2882_; lean_object* v_nextMacroScope_2883_; lean_object* v_ngen_2884_; lean_object* v_auxDeclNGen_2885_; lean_object* v_cache_2886_; lean_object* v_messages_2887_; lean_object* v_infoState_2888_; lean_object* v_snapshotTasks_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2919_; 
v___x_2880_ = lean_st_ref_take(v___y_2872_);
v_traceState_2881_ = lean_ctor_get(v___x_2880_, 4);
v_env_2882_ = lean_ctor_get(v___x_2880_, 0);
v_nextMacroScope_2883_ = lean_ctor_get(v___x_2880_, 1);
v_ngen_2884_ = lean_ctor_get(v___x_2880_, 2);
v_auxDeclNGen_2885_ = lean_ctor_get(v___x_2880_, 3);
v_cache_2886_ = lean_ctor_get(v___x_2880_, 5);
v_messages_2887_ = lean_ctor_get(v___x_2880_, 6);
v_infoState_2888_ = lean_ctor_get(v___x_2880_, 7);
v_snapshotTasks_2889_ = lean_ctor_get(v___x_2880_, 8);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2880_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2891_ = v___x_2880_;
v_isShared_2892_ = v_isSharedCheck_2919_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_snapshotTasks_2889_);
lean_inc(v_infoState_2888_);
lean_inc(v_messages_2887_);
lean_inc(v_cache_2886_);
lean_inc(v_traceState_2881_);
lean_inc(v_auxDeclNGen_2885_);
lean_inc(v_ngen_2884_);
lean_inc(v_nextMacroScope_2883_);
lean_inc(v_env_2882_);
lean_dec(v___x_2880_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2919_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
uint64_t v_tid_2893_; lean_object* v_traces_2894_; lean_object* v___x_2896_; uint8_t v_isShared_2897_; uint8_t v_isSharedCheck_2918_; 
v_tid_2893_ = lean_ctor_get_uint64(v_traceState_2881_, sizeof(void*)*1);
v_traces_2894_ = lean_ctor_get(v_traceState_2881_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_traceState_2881_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2896_ = v_traceState_2881_;
v_isShared_2897_ = v_isSharedCheck_2918_;
goto v_resetjp_2895_;
}
else
{
lean_inc(v_traces_2894_);
lean_dec(v_traceState_2881_);
v___x_2896_ = lean_box(0);
v_isShared_2897_ = v_isSharedCheck_2918_;
goto v_resetjp_2895_;
}
v_resetjp_2895_:
{
lean_object* v___x_2898_; double v___x_2899_; uint8_t v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2908_; 
v___x_2898_ = lean_box(0);
v___x_2899_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__0);
v___x_2900_ = 0;
v___x_2901_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__1, &l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__1);
v___x_2902_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2902_, 0, v_cls_2867_);
lean_ctor_set(v___x_2902_, 1, v___x_2898_);
lean_ctor_set(v___x_2902_, 2, v___x_2901_);
lean_ctor_set_float(v___x_2902_, sizeof(void*)*3, v___x_2899_);
lean_ctor_set_float(v___x_2902_, sizeof(void*)*3 + 8, v___x_2899_);
lean_ctor_set_uint8(v___x_2902_, sizeof(void*)*3 + 16, v___x_2900_);
v___x_2903_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__2, &l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___closed__2);
v___x_2904_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2902_);
lean_ctor_set(v___x_2904_, 1, v_a_2876_);
lean_ctor_set(v___x_2904_, 2, v___x_2903_);
lean_inc(v_ref_2874_);
v___x_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2905_, 0, v_ref_2874_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
v___x_2906_ = l_Lean_PersistentArray_push___redArg(v_traces_2894_, v___x_2905_);
if (v_isShared_2897_ == 0)
{
lean_ctor_set(v___x_2896_, 0, v___x_2906_);
v___x_2908_ = v___x_2896_;
goto v_reusejp_2907_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2906_);
lean_ctor_set_uint64(v_reuseFailAlloc_2917_, sizeof(void*)*1, v_tid_2893_);
v___x_2908_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2907_;
}
v_reusejp_2907_:
{
lean_object* v___x_2910_; 
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 4, v___x_2908_);
v___x_2910_ = v___x_2891_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_env_2882_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v_nextMacroScope_2883_);
lean_ctor_set(v_reuseFailAlloc_2916_, 2, v_ngen_2884_);
lean_ctor_set(v_reuseFailAlloc_2916_, 3, v_auxDeclNGen_2885_);
lean_ctor_set(v_reuseFailAlloc_2916_, 4, v___x_2908_);
lean_ctor_set(v_reuseFailAlloc_2916_, 5, v_cache_2886_);
lean_ctor_set(v_reuseFailAlloc_2916_, 6, v_messages_2887_);
lean_ctor_set(v_reuseFailAlloc_2916_, 7, v_infoState_2888_);
lean_ctor_set(v_reuseFailAlloc_2916_, 8, v_snapshotTasks_2889_);
v___x_2910_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2914_; 
v___x_2911_ = lean_st_ref_set(v___y_2872_, v___x_2910_);
v___x_2912_ = lean_box(0);
if (v_isShared_2879_ == 0)
{
lean_ctor_set(v___x_2878_, 0, v___x_2912_);
v___x_2914_ = v___x_2878_;
goto v_reusejp_2913_;
}
else
{
lean_object* v_reuseFailAlloc_2915_; 
v_reuseFailAlloc_2915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2915_, 0, v___x_2912_);
v___x_2914_ = v_reuseFailAlloc_2915_;
goto v_reusejp_2913_;
}
v_reusejp_2913_:
{
return v___x_2914_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0___boxed(lean_object* v_cls_2921_, lean_object* v_msg_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0(v_cls_2921_, v_msg_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
return v_res_2928_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2929_; 
v___x_2929_ = lean_mk_string_unchecked("sym", 3, 3);
return v___x_2929_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2930_; 
v___x_2930_ = lean_mk_string_unchecked("issues", 6, 6);
return v___x_2930_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; 
v___x_2931_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__1, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__1);
v___x_2932_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__0, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__0);
v___x_2933_ = l_Lean_Name_mkStr2(v___x_2932_, v___x_2931_);
return v___x_2933_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2934_; 
v___x_2934_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_2934_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__3, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__3_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__3);
v___x_2936_ = l_Lean_Name_mkStr1(v___x_2935_);
return v___x_2936_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; 
v___x_2937_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__2, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__2_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__2);
v___x_2938_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__4, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__4_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__4);
v___x_2939_ = l_Lean_Name_append(v___x_2938_, v___x_2937_);
return v___x_2939_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2940_; 
v___x_2940_ = lean_mk_string_unchecked("found `Expr.proj` with invalid field index `", 44, 44);
return v___x_2940_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___x_2941_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__6, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__6_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__6);
v___x_2942_ = l_Lean_stringToMessageData(v___x_2941_);
return v___x_2942_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__8(void){
_start:
{
lean_object* v___x_2943_; 
v___x_2943_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_2943_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2944_; lean_object* v___x_2945_; 
v___x_2944_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__8, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__8_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__8);
v___x_2945_ = l_Lean_stringToMessageData(v___x_2944_);
return v___x_2945_;
}
}
static uint64_t _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__10(void){
_start:
{
uint8_t v___x_2946_; uint64_t v___x_2947_; 
v___x_2946_ = 1;
v___x_2947_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_2946_);
return v___x_2947_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__11(void){
_start:
{
lean_object* v___x_2948_; 
v___x_2948_ = lean_mk_string_unchecked("found `Expr.proj` but `", 23, 23);
return v___x_2948_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__12(void){
_start:
{
lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2949_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__11, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__11_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__11);
v___x_2950_ = l_Lean_stringToMessageData(v___x_2949_);
return v___x_2950_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__13(void){
_start:
{
lean_object* v___x_2951_; 
v___x_2951_ = lean_mk_string_unchecked("` is not marked as structure", 28, 28);
return v___x_2951_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__14(void){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2952_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__13, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__13_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__13);
v___x_2953_ = l_Lean_stringToMessageData(v___x_2952_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__0(lean_object* v_e_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
if (lean_obj_tag(v_e_2954_) == 11)
{
lean_object* v_typeName_2966_; lean_object* v_idx_2967_; lean_object* v_struct_2968_; lean_object* v___x_2969_; lean_object* v_env_2970_; lean_object* v___x_2971_; 
v_typeName_2966_ = lean_ctor_get(v_e_2954_, 0);
v_idx_2967_ = lean_ctor_get(v_e_2954_, 1);
v_struct_2968_ = lean_ctor_get(v_e_2954_, 2);
v___x_2969_ = lean_st_ref_get(v___y_2958_);
v_env_2970_ = lean_ctor_get(v___x_2969_, 0);
lean_inc_ref(v_env_2970_);
lean_dec(v___x_2969_);
lean_inc(v_typeName_2966_);
v___x_2971_ = l_Lean_getStructureInfo_x3f(v_env_2970_, v_typeName_2966_);
if (lean_obj_tag(v___x_2971_) == 1)
{
lean_object* v_val_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_3071_; 
v_val_2972_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_2974_ = v___x_2971_;
v_isShared_2975_ = v_isSharedCheck_3071_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_val_2972_);
lean_dec(v___x_2971_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_3071_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v_fieldNames_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v_fieldNames_2976_ = lean_ctor_get(v_val_2972_, 1);
lean_inc_ref(v_fieldNames_2976_);
lean_dec(v_val_2972_);
v___x_2977_ = lean_array_get_size(v_fieldNames_2976_);
v___x_2978_ = lean_nat_dec_lt(v_idx_2967_, v___x_2977_);
if (v___x_2978_ == 0)
{
lean_object* v_options_2979_; uint8_t v_hasTrace_2980_; 
lean_dec_ref(v_fieldNames_2976_);
v_options_2979_ = lean_ctor_get(v___y_2957_, 2);
v_hasTrace_2980_ = lean_ctor_get_uint8(v_options_2979_, sizeof(void*)*1);
if (v_hasTrace_2980_ == 0)
{
lean_del_object(v___x_2974_);
goto v___jp_2960_;
}
else
{
lean_object* v_inheritedTraceOptions_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; uint8_t v___x_2984_; 
v_inheritedTraceOptions_2981_ = lean_ctor_get(v___y_2957_, 13);
v___x_2982_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__2, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__2_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__2);
v___x_2983_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__5, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__5_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__5);
v___x_2984_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2981_, v_options_2979_, v___x_2983_);
if (v___x_2984_ == 0)
{
lean_del_object(v___x_2974_);
goto v___jp_2960_;
}
else
{
lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2988_; 
v___x_2985_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__7, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__7_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__7);
lean_inc(v_idx_2967_);
v___x_2986_ = l_Nat_reprFast(v_idx_2967_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set_tag(v___x_2974_, 3);
lean_ctor_set(v___x_2974_, 0, v___x_2986_);
v___x_2988_ = v___x_2974_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_3004_; 
v_reuseFailAlloc_3004_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3004_, 0, v___x_2986_);
v___x_2988_ = v_reuseFailAlloc_3004_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; 
v___x_2989_ = l_Lean_MessageData_ofFormat(v___x_2988_);
v___x_2990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2990_, 0, v___x_2985_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
v___x_2991_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__9, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__9_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__9);
v___x_2992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2992_, 0, v___x_2990_);
lean_ctor_set(v___x_2992_, 1, v___x_2991_);
lean_inc_ref(v_e_2954_);
v___x_2993_ = l_Lean_indentExpr(v_e_2954_);
v___x_2994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2994_, 0, v___x_2992_);
lean_ctor_set(v___x_2994_, 1, v___x_2993_);
v___x_2995_ = l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0(v___x_2982_, v___x_2994_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_);
if (lean_obj_tag(v___x_2995_) == 0)
{
lean_dec_ref(v___x_2995_);
goto v___jp_2960_;
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_dec_ref(v_e_2954_);
v_a_2996_ = lean_ctor_get(v___x_2995_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2995_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2995_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2995_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3005_; uint8_t v_foApprox_3006_; uint8_t v_ctxApprox_3007_; uint8_t v_quasiPatternApprox_3008_; uint8_t v_constApprox_3009_; uint8_t v_isDefEqStuckEx_3010_; uint8_t v_unificationHints_3011_; uint8_t v_proofIrrelevance_3012_; uint8_t v_assignSyntheticOpaque_3013_; uint8_t v_offsetCnstrs_3014_; uint8_t v_etaStruct_3015_; uint8_t v_univApprox_3016_; uint8_t v_iota_3017_; uint8_t v_beta_3018_; uint8_t v_proj_3019_; uint8_t v_zeta_3020_; uint8_t v_zetaDelta_3021_; uint8_t v_zetaUnused_3022_; uint8_t v_zetaHave_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3070_; 
lean_inc_ref(v_struct_2968_);
lean_inc(v_idx_2967_);
lean_dec_ref(v_e_2954_);
v___x_3005_ = l_Lean_Meta_Context_config(v___y_2955_);
v_foApprox_3006_ = lean_ctor_get_uint8(v___x_3005_, 0);
v_ctxApprox_3007_ = lean_ctor_get_uint8(v___x_3005_, 1);
v_quasiPatternApprox_3008_ = lean_ctor_get_uint8(v___x_3005_, 2);
v_constApprox_3009_ = lean_ctor_get_uint8(v___x_3005_, 3);
v_isDefEqStuckEx_3010_ = lean_ctor_get_uint8(v___x_3005_, 4);
v_unificationHints_3011_ = lean_ctor_get_uint8(v___x_3005_, 5);
v_proofIrrelevance_3012_ = lean_ctor_get_uint8(v___x_3005_, 6);
v_assignSyntheticOpaque_3013_ = lean_ctor_get_uint8(v___x_3005_, 7);
v_offsetCnstrs_3014_ = lean_ctor_get_uint8(v___x_3005_, 8);
v_etaStruct_3015_ = lean_ctor_get_uint8(v___x_3005_, 10);
v_univApprox_3016_ = lean_ctor_get_uint8(v___x_3005_, 11);
v_iota_3017_ = lean_ctor_get_uint8(v___x_3005_, 12);
v_beta_3018_ = lean_ctor_get_uint8(v___x_3005_, 13);
v_proj_3019_ = lean_ctor_get_uint8(v___x_3005_, 14);
v_zeta_3020_ = lean_ctor_get_uint8(v___x_3005_, 15);
v_zetaDelta_3021_ = lean_ctor_get_uint8(v___x_3005_, 16);
v_zetaUnused_3022_ = lean_ctor_get_uint8(v___x_3005_, 17);
v_zetaHave_3023_ = lean_ctor_get_uint8(v___x_3005_, 18);
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3005_);
if (v_isSharedCheck_3070_ == 0)
{
v___x_3025_ = v___x_3005_;
v_isShared_3026_ = v_isSharedCheck_3070_;
goto v_resetjp_3024_;
}
else
{
lean_dec(v___x_3005_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3070_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
uint8_t v_trackZetaDelta_3027_; lean_object* v_zetaDeltaSet_3028_; lean_object* v_lctx_3029_; lean_object* v_localInstances_3030_; lean_object* v_defEqCtx_x3f_3031_; lean_object* v_synthPendingDepth_3032_; lean_object* v_canUnfold_x3f_3033_; uint8_t v_univApprox_3034_; uint8_t v_inTypeClassResolution_3035_; uint8_t v_cacheInferType_3036_; uint8_t v___x_3037_; lean_object* v_config_3039_; 
v_trackZetaDelta_3027_ = lean_ctor_get_uint8(v___y_2955_, sizeof(void*)*7);
v_zetaDeltaSet_3028_ = lean_ctor_get(v___y_2955_, 1);
v_lctx_3029_ = lean_ctor_get(v___y_2955_, 2);
v_localInstances_3030_ = lean_ctor_get(v___y_2955_, 3);
v_defEqCtx_x3f_3031_ = lean_ctor_get(v___y_2955_, 4);
v_synthPendingDepth_3032_ = lean_ctor_get(v___y_2955_, 5);
v_canUnfold_x3f_3033_ = lean_ctor_get(v___y_2955_, 6);
v_univApprox_3034_ = lean_ctor_get_uint8(v___y_2955_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3035_ = lean_ctor_get_uint8(v___y_2955_, sizeof(void*)*7 + 2);
v_cacheInferType_3036_ = lean_ctor_get_uint8(v___y_2955_, sizeof(void*)*7 + 3);
v___x_3037_ = 1;
if (v_isShared_3026_ == 0)
{
v_config_3039_ = v___x_3025_;
goto v_reusejp_3038_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 0, v_foApprox_3006_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 1, v_ctxApprox_3007_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 2, v_quasiPatternApprox_3008_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 3, v_constApprox_3009_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 4, v_isDefEqStuckEx_3010_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 5, v_unificationHints_3011_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 6, v_proofIrrelevance_3012_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 7, v_assignSyntheticOpaque_3013_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 8, v_offsetCnstrs_3014_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 10, v_etaStruct_3015_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 11, v_univApprox_3016_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 12, v_iota_3017_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 13, v_beta_3018_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 14, v_proj_3019_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 15, v_zeta_3020_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 16, v_zetaDelta_3021_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 17, v_zetaUnused_3022_);
lean_ctor_set_uint8(v_reuseFailAlloc_3069_, 18, v_zetaHave_3023_);
v_config_3039_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3038_;
}
v_reusejp_3038_:
{
uint64_t v___x_3040_; uint64_t v___x_3041_; uint64_t v___x_3042_; lean_object* v___x_3043_; uint64_t v___x_3044_; uint64_t v___x_3045_; uint64_t v_key_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
lean_ctor_set_uint8(v_config_3039_, 9, v___x_3037_);
v___x_3040_ = l_Lean_Meta_Context_configKey(v___y_2955_);
v___x_3041_ = 2ULL;
v___x_3042_ = lean_uint64_shift_right(v___x_3040_, v___x_3041_);
v___x_3043_ = lean_array_fget(v_fieldNames_2976_, v_idx_2967_);
lean_dec(v_idx_2967_);
lean_dec_ref(v_fieldNames_2976_);
v___x_3044_ = lean_uint64_shift_left(v___x_3042_, v___x_3041_);
v___x_3045_ = lean_uint64_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__10, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__10_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__10);
v_key_3046_ = lean_uint64_lor(v___x_3044_, v___x_3045_);
v___x_3047_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3047_, 0, v_config_3039_);
lean_ctor_set_uint64(v___x_3047_, sizeof(void*)*1, v_key_3046_);
lean_inc(v_canUnfold_x3f_3033_);
lean_inc(v_synthPendingDepth_3032_);
lean_inc(v_defEqCtx_x3f_3031_);
lean_inc_ref(v_localInstances_3030_);
lean_inc_ref(v_lctx_3029_);
lean_inc(v_zetaDeltaSet_3028_);
v___x_3048_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3048_, 0, v___x_3047_);
lean_ctor_set(v___x_3048_, 1, v_zetaDeltaSet_3028_);
lean_ctor_set(v___x_3048_, 2, v_lctx_3029_);
lean_ctor_set(v___x_3048_, 3, v_localInstances_3030_);
lean_ctor_set(v___x_3048_, 4, v_defEqCtx_x3f_3031_);
lean_ctor_set(v___x_3048_, 5, v_synthPendingDepth_3032_);
lean_ctor_set(v___x_3048_, 6, v_canUnfold_x3f_3033_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*7, v_trackZetaDelta_3027_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*7 + 1, v_univApprox_3034_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3035_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*7 + 3, v_cacheInferType_3036_);
v___x_3049_ = l_Lean_Meta_mkProjection(v_struct_2968_, v___x_3043_, v___x_3048_, v___y_2956_, v___y_2957_, v___y_2958_);
lean_dec_ref(v___x_3048_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3052_; uint8_t v_isShared_3053_; uint8_t v_isSharedCheck_3060_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3060_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3060_ == 0)
{
v___x_3052_ = v___x_3049_;
v_isShared_3053_ = v_isSharedCheck_3060_;
goto v_resetjp_3051_;
}
else
{
lean_inc(v_a_3050_);
lean_dec(v___x_3049_);
v___x_3052_ = lean_box(0);
v_isShared_3053_ = v_isSharedCheck_3060_;
goto v_resetjp_3051_;
}
v_resetjp_3051_:
{
lean_object* v___x_3055_; 
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 0, v_a_3050_);
v___x_3055_ = v___x_2974_;
goto v_reusejp_3054_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_a_3050_);
v___x_3055_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3054_;
}
v_reusejp_3054_:
{
lean_object* v___x_3057_; 
if (v_isShared_3053_ == 0)
{
lean_ctor_set(v___x_3052_, 0, v___x_3055_);
v___x_3057_ = v___x_3052_;
goto v_reusejp_3056_;
}
else
{
lean_object* v_reuseFailAlloc_3058_; 
v_reuseFailAlloc_3058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3058_, 0, v___x_3055_);
v___x_3057_ = v_reuseFailAlloc_3058_;
goto v_reusejp_3056_;
}
v_reusejp_3056_:
{
return v___x_3057_;
}
}
}
}
else
{
lean_object* v_a_3061_; lean_object* v___x_3063_; uint8_t v_isShared_3064_; uint8_t v_isSharedCheck_3068_; 
lean_del_object(v___x_2974_);
v_a_3061_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3068_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3068_ == 0)
{
v___x_3063_ = v___x_3049_;
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
else
{
lean_inc(v_a_3061_);
lean_dec(v___x_3049_);
v___x_3063_ = lean_box(0);
v_isShared_3064_ = v_isSharedCheck_3068_;
goto v_resetjp_3062_;
}
v_resetjp_3062_:
{
lean_object* v___x_3066_; 
if (v_isShared_3064_ == 0)
{
v___x_3066_ = v___x_3063_;
goto v_reusejp_3065_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_a_3061_);
v___x_3066_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3065_;
}
v_reusejp_3065_:
{
return v___x_3066_;
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
lean_object* v_options_3072_; uint8_t v_hasTrace_3073_; 
lean_dec(v___x_2971_);
v_options_3072_ = lean_ctor_get(v___y_2957_, 2);
v_hasTrace_3073_ = lean_ctor_get_uint8(v_options_3072_, sizeof(void*)*1);
if (v_hasTrace_3073_ == 0)
{
goto v___jp_2963_;
}
else
{
lean_object* v_inheritedTraceOptions_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; uint8_t v___x_3077_; 
v_inheritedTraceOptions_3074_ = lean_ctor_get(v___y_2957_, 13);
v___x_3075_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__2, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__2_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__2);
v___x_3076_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__5, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__5_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__5);
v___x_3077_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3074_, v_options_3072_, v___x_3076_);
if (v___x_3077_ == 0)
{
goto v___jp_2963_;
}
else
{
lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; 
v___x_3078_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__12, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__12_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__12);
lean_inc(v_typeName_2966_);
v___x_3079_ = l_Lean_MessageData_ofName(v_typeName_2966_);
v___x_3080_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3078_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
v___x_3081_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__0___closed__14, &l_Lean_Meta_Grind_foldProjs___lam__0___closed__14_once, _init_l_Lean_Meta_Grind_foldProjs___lam__0___closed__14);
v___x_3082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3080_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
lean_inc_ref(v_e_2954_);
v___x_3083_ = l_Lean_indentExpr(v_e_2954_);
v___x_3084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3082_);
lean_ctor_set(v___x_3084_, 1, v___x_3083_);
v___x_3085_ = l_Lean_addTrace___at___00Lean_Meta_Grind_foldProjs_spec__0(v___x_3075_, v___x_3084_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_);
if (lean_obj_tag(v___x_3085_) == 0)
{
lean_dec_ref(v___x_3085_);
goto v___jp_2963_;
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec_ref(v_e_2954_);
v_a_3086_ = lean_ctor_get(v___x_3085_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3085_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3085_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3085_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3094_, 0, v_e_2954_);
v___x_3095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3094_);
return v___x_3095_;
}
v___jp_2960_:
{
lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2961_, 0, v_e_2954_);
v___x_2962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
return v___x_2962_;
}
v___jp_2963_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2964_, 0, v_e_2954_);
v___x_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2965_, 0, v___x_2964_);
return v___x_2965_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__0___boxed(lean_object* v_e_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_){
_start:
{
lean_object* v_res_3102_; 
v_res_3102_ = l_Lean_Meta_Grind_foldProjs___lam__0(v_e_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_);
lean_dec(v___y_3100_);
lean_dec_ref(v___y_3099_);
lean_dec(v___y_3098_);
lean_dec_ref(v___y_3097_);
return v_res_3102_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = lean_box(0);
v___x_3104_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__1(lean_object* v_x_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_){
_start:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3111_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__1___closed__0, &l_Lean_Meta_Grind_foldProjs___lam__1___closed__0_once, _init_l_Lean_Meta_Grind_foldProjs___lam__1___closed__0);
v___x_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
return v___x_3112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___lam__1___boxed(lean_object* v_x_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = l_Lean_Meta_Grind_foldProjs___lam__1(v_x_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
lean_dec(v___y_3117_);
lean_dec_ref(v___y_3116_);
lean_dec(v___y_3115_);
lean_dec_ref(v___y_3114_);
lean_dec_ref(v_x_3113_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0(lean_object* v_00_u03b1_3120_, lean_object* v_x_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; 
v___x_3127_ = lean_st_ref_get(v___y_3125_);
lean_dec(v___x_3127_);
v___x_3128_ = lean_apply_1(v_x_3121_, lean_box(0));
v___x_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3128_);
return v___x_3129_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0___boxed(lean_object* v_00_u03b1_3130_, lean_object* v_x_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_, lean_object* v___y_3136_){
_start:
{
lean_object* v_res_3137_; 
v_res_3137_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0(v_00_u03b1_3130_, v_x_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
lean_dec(v___y_3135_);
lean_dec_ref(v___y_3134_);
lean_dec(v___y_3133_);
lean_dec_ref(v___y_3132_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___redArg(lean_object* v_ref_3138_){
_start:
{
lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v___x_3140_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_3141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3141_, 0, v_ref_3138_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3141_);
return v___x_3142_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___redArg___boxed(lean_object* v_ref_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___redArg(v_ref_3143_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___redArg(lean_object* v_x_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
lean_object* v___y_3154_; lean_object* v_fileName_3163_; lean_object* v_fileMap_3164_; lean_object* v_options_3165_; lean_object* v_currRecDepth_3166_; lean_object* v_maxRecDepth_3167_; lean_object* v_ref_3168_; lean_object* v_currNamespace_3169_; lean_object* v_openDecls_3170_; lean_object* v_initHeartbeats_3171_; lean_object* v_maxHeartbeats_3172_; lean_object* v_quotContext_3173_; lean_object* v_currMacroScope_3174_; uint8_t v_diag_3175_; lean_object* v_cancelTk_x3f_3176_; uint8_t v_suppressElabErrors_3177_; lean_object* v_inheritedTraceOptions_3178_; lean_object* v___x_3184_; uint8_t v___x_3185_; 
v_fileName_3163_ = lean_ctor_get(v___y_3150_, 0);
v_fileMap_3164_ = lean_ctor_get(v___y_3150_, 1);
v_options_3165_ = lean_ctor_get(v___y_3150_, 2);
v_currRecDepth_3166_ = lean_ctor_get(v___y_3150_, 3);
v_maxRecDepth_3167_ = lean_ctor_get(v___y_3150_, 4);
v_ref_3168_ = lean_ctor_get(v___y_3150_, 5);
v_currNamespace_3169_ = lean_ctor_get(v___y_3150_, 6);
v_openDecls_3170_ = lean_ctor_get(v___y_3150_, 7);
v_initHeartbeats_3171_ = lean_ctor_get(v___y_3150_, 8);
v_maxHeartbeats_3172_ = lean_ctor_get(v___y_3150_, 9);
v_quotContext_3173_ = lean_ctor_get(v___y_3150_, 10);
v_currMacroScope_3174_ = lean_ctor_get(v___y_3150_, 11);
v_diag_3175_ = lean_ctor_get_uint8(v___y_3150_, sizeof(void*)*14);
v_cancelTk_x3f_3176_ = lean_ctor_get(v___y_3150_, 12);
v_suppressElabErrors_3177_ = lean_ctor_get_uint8(v___y_3150_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3178_ = lean_ctor_get(v___y_3150_, 13);
v___x_3184_ = lean_unsigned_to_nat(0u);
v___x_3185_ = lean_nat_dec_eq(v_maxRecDepth_3167_, v___x_3184_);
if (v___x_3185_ == 0)
{
uint8_t v___x_3186_; 
v___x_3186_ = lean_nat_dec_eq(v_currRecDepth_3166_, v_maxRecDepth_3167_);
if (v___x_3186_ == 0)
{
goto v___jp_3179_;
}
else
{
lean_object* v___x_3187_; 
lean_dec_ref(v_x_3146_);
lean_inc(v_ref_3168_);
v___x_3187_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___redArg(v_ref_3168_);
v___y_3154_ = v___x_3187_;
goto v___jp_3153_;
}
}
else
{
goto v___jp_3179_;
}
v___jp_3153_:
{
if (lean_obj_tag(v___y_3154_) == 0)
{
return v___y_3154_;
}
else
{
lean_object* v_a_3155_; lean_object* v___x_3157_; uint8_t v_isShared_3158_; uint8_t v_isSharedCheck_3162_; 
v_a_3155_ = lean_ctor_get(v___y_3154_, 0);
v_isSharedCheck_3162_ = !lean_is_exclusive(v___y_3154_);
if (v_isSharedCheck_3162_ == 0)
{
v___x_3157_ = v___y_3154_;
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
else
{
lean_inc(v_a_3155_);
lean_dec(v___y_3154_);
v___x_3157_ = lean_box(0);
v_isShared_3158_ = v_isSharedCheck_3162_;
goto v_resetjp_3156_;
}
v_resetjp_3156_:
{
lean_object* v___x_3160_; 
if (v_isShared_3158_ == 0)
{
v___x_3160_ = v___x_3157_;
goto v_reusejp_3159_;
}
else
{
lean_object* v_reuseFailAlloc_3161_; 
v_reuseFailAlloc_3161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3161_, 0, v_a_3155_);
v___x_3160_ = v_reuseFailAlloc_3161_;
goto v_reusejp_3159_;
}
v_reusejp_3159_:
{
return v___x_3160_;
}
}
}
}
v___jp_3179_:
{
lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3180_ = lean_unsigned_to_nat(1u);
v___x_3181_ = lean_nat_add(v_currRecDepth_3166_, v___x_3180_);
lean_inc_ref(v_inheritedTraceOptions_3178_);
lean_inc(v_cancelTk_x3f_3176_);
lean_inc(v_currMacroScope_3174_);
lean_inc(v_quotContext_3173_);
lean_inc(v_maxHeartbeats_3172_);
lean_inc(v_initHeartbeats_3171_);
lean_inc(v_openDecls_3170_);
lean_inc(v_currNamespace_3169_);
lean_inc(v_ref_3168_);
lean_inc(v_maxRecDepth_3167_);
lean_inc_ref(v_options_3165_);
lean_inc_ref(v_fileMap_3164_);
lean_inc_ref(v_fileName_3163_);
v___x_3182_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3182_, 0, v_fileName_3163_);
lean_ctor_set(v___x_3182_, 1, v_fileMap_3164_);
lean_ctor_set(v___x_3182_, 2, v_options_3165_);
lean_ctor_set(v___x_3182_, 3, v___x_3181_);
lean_ctor_set(v___x_3182_, 4, v_maxRecDepth_3167_);
lean_ctor_set(v___x_3182_, 5, v_ref_3168_);
lean_ctor_set(v___x_3182_, 6, v_currNamespace_3169_);
lean_ctor_set(v___x_3182_, 7, v_openDecls_3170_);
lean_ctor_set(v___x_3182_, 8, v_initHeartbeats_3171_);
lean_ctor_set(v___x_3182_, 9, v_maxHeartbeats_3172_);
lean_ctor_set(v___x_3182_, 10, v_quotContext_3173_);
lean_ctor_set(v___x_3182_, 11, v_currMacroScope_3174_);
lean_ctor_set(v___x_3182_, 12, v_cancelTk_x3f_3176_);
lean_ctor_set(v___x_3182_, 13, v_inheritedTraceOptions_3178_);
lean_ctor_set_uint8(v___x_3182_, sizeof(void*)*14, v_diag_3175_);
lean_ctor_set_uint8(v___x_3182_, sizeof(void*)*14 + 1, v_suppressElabErrors_3177_);
lean_inc(v___y_3151_);
lean_inc(v___y_3149_);
lean_inc_ref(v___y_3148_);
lean_inc(v___y_3147_);
v___x_3183_ = lean_apply_6(v_x_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___x_3182_, v___y_3151_, lean_box(0));
v___y_3154_ = v___x_3183_;
goto v___jp_3153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___redArg___boxed(lean_object* v_x_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_, lean_object* v___y_3194_){
_start:
{
lean_object* v_res_3195_; 
v_res_3195_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___redArg(v_x_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_, v___y_3193_);
lean_dec(v___y_3193_);
lean_dec_ref(v___y_3192_);
lean_dec(v___y_3191_);
lean_dec_ref(v___y_3190_);
lean_dec(v___y_3189_);
return v_res_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___lam__0(lean_object* v_k_3196_, lean_object* v___y_3197_, lean_object* v_b_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_, lean_object* v___y_3202_){
_start:
{
lean_object* v___x_3204_; 
lean_inc(v___y_3202_);
lean_inc_ref(v___y_3201_);
lean_inc(v___y_3200_);
lean_inc_ref(v___y_3199_);
lean_inc(v___y_3197_);
v___x_3204_ = lean_apply_7(v_k_3196_, v_b_3198_, v___y_3197_, v___y_3199_, v___y_3200_, v___y_3201_, v___y_3202_, lean_box(0));
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___lam__0___boxed(lean_object* v_k_3205_, lean_object* v___y_3206_, lean_object* v_b_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_){
_start:
{
lean_object* v_res_3213_; 
v_res_3213_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___lam__0(v_k_3205_, v___y_3206_, v_b_3207_, v___y_3208_, v___y_3209_, v___y_3210_, v___y_3211_);
lean_dec(v___y_3211_);
lean_dec_ref(v___y_3210_);
lean_dec(v___y_3209_);
lean_dec_ref(v___y_3208_);
lean_dec(v___y_3206_);
return v_res_3213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg(lean_object* v_name_3214_, uint8_t v_bi_3215_, lean_object* v_type_3216_, lean_object* v_k_3217_, uint8_t v_kind_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_, lean_object* v___y_3223_){
_start:
{
lean_object* v___f_3225_; lean_object* v___x_3226_; 
lean_inc(v___y_3219_);
v___f_3225_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3225_, 0, v_k_3217_);
lean_closure_set(v___f_3225_, 1, v___y_3219_);
v___x_3226_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3214_, v_bi_3215_, v_type_3216_, v___f_3225_, v_kind_3218_, v___y_3220_, v___y_3221_, v___y_3222_, v___y_3223_);
if (lean_obj_tag(v___x_3226_) == 0)
{
return v___x_3226_;
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3229_; uint8_t v_isShared_3230_; uint8_t v_isSharedCheck_3234_; 
v_a_3227_ = lean_ctor_get(v___x_3226_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v___x_3226_);
if (v_isSharedCheck_3234_ == 0)
{
v___x_3229_ = v___x_3226_;
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
else
{
lean_inc(v_a_3227_);
lean_dec(v___x_3226_);
v___x_3229_ = lean_box(0);
v_isShared_3230_ = v_isSharedCheck_3234_;
goto v_resetjp_3228_;
}
v_resetjp_3228_:
{
lean_object* v___x_3232_; 
if (v_isShared_3230_ == 0)
{
v___x_3232_ = v___x_3229_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_a_3227_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___boxed(lean_object* v_name_3235_, lean_object* v_bi_3236_, lean_object* v_type_3237_, lean_object* v_k_3238_, lean_object* v_kind_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_){
_start:
{
uint8_t v_bi_boxed_3246_; uint8_t v_kind_boxed_3247_; lean_object* v_res_3248_; 
v_bi_boxed_3246_ = lean_unbox(v_bi_3236_);
v_kind_boxed_3247_ = lean_unbox(v_kind_3239_);
v_res_3248_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg(v_name_3235_, v_bi_boxed_3246_, v_type_3237_, v_k_3238_, v_kind_boxed_3247_, v___y_3240_, v___y_3241_, v___y_3242_, v___y_3243_, v___y_3244_);
lean_dec(v___y_3244_);
lean_dec_ref(v___y_3243_);
lean_dec(v___y_3242_);
lean_dec_ref(v___y_3241_);
lean_dec(v___y_3240_);
return v_res_3248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___redArg(lean_object* v_name_3249_, lean_object* v_type_3250_, lean_object* v_val_3251_, lean_object* v_k_3252_, uint8_t v_nondep_3253_, uint8_t v_kind_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_){
_start:
{
lean_object* v___f_3261_; lean_object* v___x_3262_; 
lean_inc(v___y_3255_);
v___f_3261_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3261_, 0, v_k_3252_);
lean_closure_set(v___f_3261_, 1, v___y_3255_);
v___x_3262_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_3249_, v_type_3250_, v_val_3251_, v___f_3261_, v_nondep_3253_, v_kind_3254_, v___y_3256_, v___y_3257_, v___y_3258_, v___y_3259_);
if (lean_obj_tag(v___x_3262_) == 0)
{
return v___x_3262_;
}
else
{
lean_object* v_a_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3270_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3270_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3270_ == 0)
{
v___x_3265_ = v___x_3262_;
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_a_3263_);
lean_dec(v___x_3262_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3270_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3268_; 
if (v_isShared_3266_ == 0)
{
v___x_3268_ = v___x_3265_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3269_; 
v_reuseFailAlloc_3269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3269_, 0, v_a_3263_);
v___x_3268_ = v_reuseFailAlloc_3269_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
return v___x_3268_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___redArg___boxed(lean_object* v_name_3271_, lean_object* v_type_3272_, lean_object* v_val_3273_, lean_object* v_k_3274_, lean_object* v_nondep_3275_, lean_object* v_kind_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
uint8_t v_nondep_boxed_3283_; uint8_t v_kind_boxed_3284_; lean_object* v_res_3285_; 
v_nondep_boxed_3283_ = lean_unbox(v_nondep_3275_);
v_kind_boxed_3284_ = lean_unbox(v_kind_3276_);
v_res_3285_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___redArg(v_name_3271_, v_type_3272_, v_val_3273_, v_k_3274_, v_nondep_boxed_3283_, v_kind_boxed_3284_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_, v___y_3281_);
lean_dec(v___y_3281_);
lean_dec_ref(v___y_3280_);
lean_dec(v___y_3279_);
lean_dec_ref(v___y_3278_);
lean_dec(v___y_3277_);
return v_res_3285_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__2(lean_object* v___x_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
lean_object* v___x_3292_; 
v___x_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3286_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__2___boxed(lean_object* v___x_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_){
_start:
{
lean_object* v_res_3299_; 
v_res_3299_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__2(v___x_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
lean_dec(v___y_3297_);
lean_dec_ref(v___y_3296_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
return v_res_3299_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3300_; lean_object* v___x_3301_; 
v___x_3300_ = lean_unsigned_to_nat(0u);
v___x_3301_ = lean_mk_empty_array_with_capacity(v___x_3300_);
return v___x_3301_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___lam__0(lean_object* v_fvars_3302_, lean_object* v_pre_3303_, lean_object* v_post_3304_, uint8_t v_usedLetOnly_3305_, uint8_t v_skipConstInApp_3306_, uint8_t v_skipInstances_3307_, lean_object* v_body_3308_, lean_object* v_x_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_){
_start:
{
lean_object* v___x_3316_; lean_object* v___x_3317_; 
v___x_3316_ = lean_array_push(v_fvars_3302_, v_x_3309_);
v___x_3317_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7(v_pre_3303_, v_post_3304_, v_usedLetOnly_3305_, v_skipConstInApp_3306_, v_skipInstances_3307_, v___x_3316_, v_body_3308_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_);
return v___x_3317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___lam__0___boxed(lean_object* v_fvars_3318_, lean_object* v_pre_3319_, lean_object* v_post_3320_, lean_object* v_usedLetOnly_3321_, lean_object* v_skipConstInApp_3322_, lean_object* v_skipInstances_3323_, lean_object* v_body_3324_, lean_object* v_x_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
uint8_t v_usedLetOnly_boxed_3332_; uint8_t v_skipConstInApp_boxed_3333_; uint8_t v_skipInstances_boxed_3334_; lean_object* v_res_3335_; 
v_usedLetOnly_boxed_3332_ = lean_unbox(v_usedLetOnly_3321_);
v_skipConstInApp_boxed_3333_ = lean_unbox(v_skipConstInApp_3322_);
v_skipInstances_boxed_3334_ = lean_unbox(v_skipInstances_3323_);
v_res_3335_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___lam__0(v_fvars_3318_, v_pre_3319_, v_post_3320_, v_usedLetOnly_boxed_3332_, v_skipConstInApp_boxed_3333_, v_skipInstances_boxed_3334_, v_body_3324_, v_x_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_);
lean_dec(v___y_3330_);
lean_dec_ref(v___y_3329_);
lean_dec(v___y_3328_);
lean_dec_ref(v___y_3327_);
lean_dec(v___y_3326_);
return v_res_3335_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(lean_object* v_pre_3336_, lean_object* v_post_3337_, uint8_t v_usedLetOnly_3338_, uint8_t v_skipConstInApp_3339_, uint8_t v_skipInstances_3340_, lean_object* v_e_3341_, lean_object* v_a_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_){
_start:
{
lean_object* v___x_3348_; 
lean_inc_ref(v_post_3337_);
lean_inc(v___y_3346_);
lean_inc_ref(v___y_3345_);
lean_inc(v___y_3344_);
lean_inc_ref(v___y_3343_);
lean_inc_ref(v_e_3341_);
v___x_3348_ = lean_apply_6(v_post_3337_, v_e_3341_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, lean_box(0));
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_a_3349_; lean_object* v___x_3351_; uint8_t v_isShared_3352_; uint8_t v_isSharedCheck_3367_; 
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3367_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3367_ == 0)
{
v___x_3351_ = v___x_3348_;
v_isShared_3352_ = v_isSharedCheck_3367_;
goto v_resetjp_3350_;
}
else
{
lean_inc(v_a_3349_);
lean_dec(v___x_3348_);
v___x_3351_ = lean_box(0);
v_isShared_3352_ = v_isSharedCheck_3367_;
goto v_resetjp_3350_;
}
v_resetjp_3350_:
{
switch(lean_obj_tag(v_a_3349_))
{
case 0:
{
lean_object* v_e_3353_; lean_object* v___x_3355_; 
lean_dec_ref(v_e_3341_);
lean_dec_ref(v_post_3337_);
lean_dec_ref(v_pre_3336_);
v_e_3353_ = lean_ctor_get(v_a_3349_, 0);
lean_inc_ref(v_e_3353_);
lean_dec_ref(v_a_3349_);
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 0, v_e_3353_);
v___x_3355_ = v___x_3351_;
goto v_reusejp_3354_;
}
else
{
lean_object* v_reuseFailAlloc_3356_; 
v_reuseFailAlloc_3356_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3356_, 0, v_e_3353_);
v___x_3355_ = v_reuseFailAlloc_3356_;
goto v_reusejp_3354_;
}
v_reusejp_3354_:
{
return v___x_3355_;
}
}
case 1:
{
lean_object* v_e_3357_; lean_object* v___x_3358_; 
lean_del_object(v___x_3351_);
lean_dec_ref(v_e_3341_);
v_e_3357_ = lean_ctor_get(v_a_3349_, 0);
lean_inc_ref(v_e_3357_);
lean_dec_ref(v_a_3349_);
v___x_3358_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3336_, v_post_3337_, v_usedLetOnly_3338_, v_skipConstInApp_3339_, v_skipInstances_3340_, v_e_3357_, v_a_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
return v___x_3358_;
}
default: 
{
lean_object* v_e_x3f_3359_; 
lean_dec_ref(v_post_3337_);
lean_dec_ref(v_pre_3336_);
v_e_x3f_3359_ = lean_ctor_get(v_a_3349_, 0);
lean_inc(v_e_x3f_3359_);
lean_dec_ref(v_a_3349_);
if (lean_obj_tag(v_e_x3f_3359_) == 0)
{
lean_object* v___x_3361_; 
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 0, v_e_3341_);
v___x_3361_ = v___x_3351_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_e_3341_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
else
{
lean_object* v_val_3363_; lean_object* v___x_3365_; 
lean_dec_ref(v_e_3341_);
v_val_3363_ = lean_ctor_get(v_e_x3f_3359_, 0);
lean_inc(v_val_3363_);
lean_dec_ref(v_e_x3f_3359_);
if (v_isShared_3352_ == 0)
{
lean_ctor_set(v___x_3351_, 0, v_val_3363_);
v___x_3365_ = v___x_3351_;
goto v_reusejp_3364_;
}
else
{
lean_object* v_reuseFailAlloc_3366_; 
v_reuseFailAlloc_3366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3366_, 0, v_val_3363_);
v___x_3365_ = v_reuseFailAlloc_3366_;
goto v_reusejp_3364_;
}
v_reusejp_3364_:
{
return v___x_3365_;
}
}
}
}
}
}
else
{
lean_object* v_a_3368_; lean_object* v___x_3370_; uint8_t v_isShared_3371_; uint8_t v_isSharedCheck_3375_; 
lean_dec_ref(v_e_3341_);
lean_dec_ref(v_post_3337_);
lean_dec_ref(v_pre_3336_);
v_a_3368_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3375_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3370_ = v___x_3348_;
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
else
{
lean_inc(v_a_3368_);
lean_dec(v___x_3348_);
v___x_3370_ = lean_box(0);
v_isShared_3371_ = v_isSharedCheck_3375_;
goto v_resetjp_3369_;
}
v_resetjp_3369_:
{
lean_object* v___x_3373_; 
if (v_isShared_3371_ == 0)
{
v___x_3373_ = v___x_3370_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v_a_3368_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7(lean_object* v_pre_3376_, lean_object* v_post_3377_, uint8_t v_usedLetOnly_3378_, uint8_t v_skipConstInApp_3379_, uint8_t v_skipInstances_3380_, lean_object* v_fvars_3381_, lean_object* v_e_3382_, lean_object* v_a_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
if (lean_obj_tag(v_e_3382_) == 6)
{
lean_object* v_binderName_3389_; lean_object* v_binderType_3390_; lean_object* v_body_3391_; uint8_t v_binderInfo_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; 
v_binderName_3389_ = lean_ctor_get(v_e_3382_, 0);
lean_inc(v_binderName_3389_);
v_binderType_3390_ = lean_ctor_get(v_e_3382_, 1);
lean_inc_ref(v_binderType_3390_);
v_body_3391_ = lean_ctor_get(v_e_3382_, 2);
lean_inc_ref(v_body_3391_);
v_binderInfo_3392_ = lean_ctor_get_uint8(v_e_3382_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3382_);
v___x_3393_ = lean_expr_instantiate_rev(v_binderType_3390_, v_fvars_3381_);
lean_dec_ref(v_binderType_3390_);
lean_inc_ref(v_post_3377_);
lean_inc_ref(v_pre_3376_);
v___x_3394_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3376_, v_post_3377_, v_usedLetOnly_3378_, v_skipConstInApp_3379_, v_skipInstances_3380_, v___x_3393_, v_a_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
if (lean_obj_tag(v___x_3394_) == 0)
{
lean_object* v_a_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___f_3399_; uint8_t v___x_3400_; lean_object* v___x_3401_; 
v_a_3395_ = lean_ctor_get(v___x_3394_, 0);
lean_inc(v_a_3395_);
lean_dec_ref(v___x_3394_);
v___x_3396_ = lean_box(v_usedLetOnly_3378_);
v___x_3397_ = lean_box(v_skipConstInApp_3379_);
v___x_3398_ = lean_box(v_skipInstances_3380_);
v___f_3399_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3399_, 0, v_fvars_3381_);
lean_closure_set(v___f_3399_, 1, v_pre_3376_);
lean_closure_set(v___f_3399_, 2, v_post_3377_);
lean_closure_set(v___f_3399_, 3, v___x_3396_);
lean_closure_set(v___f_3399_, 4, v___x_3397_);
lean_closure_set(v___f_3399_, 5, v___x_3398_);
lean_closure_set(v___f_3399_, 6, v_body_3391_);
v___x_3400_ = 0;
v___x_3401_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg(v_binderName_3389_, v_binderInfo_3392_, v_a_3395_, v___f_3399_, v___x_3400_, v_a_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
return v___x_3401_;
}
else
{
lean_dec_ref(v_body_3391_);
lean_dec(v_binderName_3389_);
lean_dec_ref(v_fvars_3381_);
lean_dec_ref(v_post_3377_);
lean_dec_ref(v_pre_3376_);
return v___x_3394_;
}
}
else
{
lean_object* v___x_3402_; lean_object* v___x_3403_; 
v___x_3402_ = lean_expr_instantiate_rev(v_e_3382_, v_fvars_3381_);
lean_dec_ref(v_e_3382_);
lean_inc_ref(v_post_3377_);
lean_inc_ref(v_pre_3376_);
v___x_3403_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3376_, v_post_3377_, v_usedLetOnly_3378_, v_skipConstInApp_3379_, v_skipInstances_3380_, v___x_3402_, v_a_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
if (lean_obj_tag(v___x_3403_) == 0)
{
lean_object* v_a_3404_; uint8_t v___x_3405_; uint8_t v___x_3406_; uint8_t v___x_3407_; lean_object* v___x_3408_; 
v_a_3404_ = lean_ctor_get(v___x_3403_, 0);
lean_inc(v_a_3404_);
lean_dec_ref(v___x_3403_);
v___x_3405_ = 0;
v___x_3406_ = 1;
v___x_3407_ = 1;
v___x_3408_ = l_Lean_Meta_mkLambdaFVars(v_fvars_3381_, v_a_3404_, v___x_3405_, v_usedLetOnly_3378_, v___x_3405_, v___x_3406_, v___x_3407_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
lean_dec_ref(v_fvars_3381_);
if (lean_obj_tag(v___x_3408_) == 0)
{
lean_object* v_a_3409_; lean_object* v___x_3410_; 
v_a_3409_ = lean_ctor_get(v___x_3408_, 0);
lean_inc(v_a_3409_);
lean_dec_ref(v___x_3408_);
v___x_3410_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3376_, v_post_3377_, v_usedLetOnly_3378_, v_skipConstInApp_3379_, v_skipInstances_3380_, v_a_3409_, v_a_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
return v___x_3410_;
}
else
{
lean_dec_ref(v_post_3377_);
lean_dec_ref(v_pre_3376_);
return v___x_3408_;
}
}
else
{
lean_dec_ref(v_fvars_3381_);
lean_dec_ref(v_post_3377_);
lean_dec_ref(v_pre_3376_);
return v___x_3403_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___lam__0(lean_object* v_fvars_3411_, lean_object* v_pre_3412_, lean_object* v_post_3413_, uint8_t v_usedLetOnly_3414_, uint8_t v_skipConstInApp_3415_, uint8_t v_skipInstances_3416_, lean_object* v_body_3417_, lean_object* v_x_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v___x_3425_; lean_object* v___x_3426_; 
v___x_3425_ = lean_array_push(v_fvars_3411_, v_x_3418_);
v___x_3426_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8(v_pre_3412_, v_post_3413_, v_usedLetOnly_3414_, v_skipConstInApp_3415_, v_skipInstances_3416_, v___x_3425_, v_body_3417_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_);
return v___x_3426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___lam__0___boxed(lean_object* v_fvars_3427_, lean_object* v_pre_3428_, lean_object* v_post_3429_, lean_object* v_usedLetOnly_3430_, lean_object* v_skipConstInApp_3431_, lean_object* v_skipInstances_3432_, lean_object* v_body_3433_, lean_object* v_x_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
uint8_t v_usedLetOnly_boxed_3441_; uint8_t v_skipConstInApp_boxed_3442_; uint8_t v_skipInstances_boxed_3443_; lean_object* v_res_3444_; 
v_usedLetOnly_boxed_3441_ = lean_unbox(v_usedLetOnly_3430_);
v_skipConstInApp_boxed_3442_ = lean_unbox(v_skipConstInApp_3431_);
v_skipInstances_boxed_3443_ = lean_unbox(v_skipInstances_3432_);
v_res_3444_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___lam__0(v_fvars_3427_, v_pre_3428_, v_post_3429_, v_usedLetOnly_boxed_3441_, v_skipConstInApp_boxed_3442_, v_skipInstances_boxed_3443_, v_body_3433_, v_x_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
lean_dec(v___y_3435_);
return v_res_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8(lean_object* v_pre_3445_, lean_object* v_post_3446_, uint8_t v_usedLetOnly_3447_, uint8_t v_skipConstInApp_3448_, uint8_t v_skipInstances_3449_, lean_object* v_fvars_3450_, lean_object* v_e_3451_, lean_object* v_a_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_){
_start:
{
if (lean_obj_tag(v_e_3451_) == 8)
{
lean_object* v_declName_3458_; lean_object* v_type_3459_; lean_object* v_value_3460_; lean_object* v_body_3461_; uint8_t v_nondep_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; 
v_declName_3458_ = lean_ctor_get(v_e_3451_, 0);
lean_inc(v_declName_3458_);
v_type_3459_ = lean_ctor_get(v_e_3451_, 1);
lean_inc_ref(v_type_3459_);
v_value_3460_ = lean_ctor_get(v_e_3451_, 2);
lean_inc_ref(v_value_3460_);
v_body_3461_ = lean_ctor_get(v_e_3451_, 3);
lean_inc_ref(v_body_3461_);
v_nondep_3462_ = lean_ctor_get_uint8(v_e_3451_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_3451_);
v___x_3463_ = lean_expr_instantiate_rev(v_type_3459_, v_fvars_3450_);
lean_dec_ref(v_type_3459_);
lean_inc_ref(v_post_3446_);
lean_inc_ref(v_pre_3445_);
v___x_3464_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3445_, v_post_3446_, v_usedLetOnly_3447_, v_skipConstInApp_3448_, v_skipInstances_3449_, v___x_3463_, v_a_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
if (lean_obj_tag(v___x_3464_) == 0)
{
lean_object* v_a_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; 
v_a_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc(v_a_3465_);
lean_dec_ref(v___x_3464_);
v___x_3466_ = lean_expr_instantiate_rev(v_value_3460_, v_fvars_3450_);
lean_dec_ref(v_value_3460_);
lean_inc_ref(v_post_3446_);
lean_inc_ref(v_pre_3445_);
v___x_3467_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3445_, v_post_3446_, v_usedLetOnly_3447_, v_skipConstInApp_3448_, v_skipInstances_3449_, v___x_3466_, v_a_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
if (lean_obj_tag(v___x_3467_) == 0)
{
lean_object* v_a_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___f_3472_; uint8_t v___x_3473_; lean_object* v___x_3474_; 
v_a_3468_ = lean_ctor_get(v___x_3467_, 0);
lean_inc(v_a_3468_);
lean_dec_ref(v___x_3467_);
v___x_3469_ = lean_box(v_usedLetOnly_3447_);
v___x_3470_ = lean_box(v_skipConstInApp_3448_);
v___x_3471_ = lean_box(v_skipInstances_3449_);
v___f_3472_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3472_, 0, v_fvars_3450_);
lean_closure_set(v___f_3472_, 1, v_pre_3445_);
lean_closure_set(v___f_3472_, 2, v_post_3446_);
lean_closure_set(v___f_3472_, 3, v___x_3469_);
lean_closure_set(v___f_3472_, 4, v___x_3470_);
lean_closure_set(v___f_3472_, 5, v___x_3471_);
lean_closure_set(v___f_3472_, 6, v_body_3461_);
v___x_3473_ = 0;
v___x_3474_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___redArg(v_declName_3458_, v_a_3465_, v_a_3468_, v___f_3472_, v_nondep_3462_, v___x_3473_, v_a_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
return v___x_3474_;
}
else
{
lean_dec(v_a_3465_);
lean_dec_ref(v_body_3461_);
lean_dec(v_declName_3458_);
lean_dec_ref(v_fvars_3450_);
lean_dec_ref(v_post_3446_);
lean_dec_ref(v_pre_3445_);
return v___x_3467_;
}
}
else
{
lean_dec_ref(v_body_3461_);
lean_dec_ref(v_value_3460_);
lean_dec(v_declName_3458_);
lean_dec_ref(v_fvars_3450_);
lean_dec_ref(v_post_3446_);
lean_dec_ref(v_pre_3445_);
return v___x_3464_;
}
}
else
{
lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3475_ = lean_expr_instantiate_rev(v_e_3451_, v_fvars_3450_);
lean_dec_ref(v_e_3451_);
lean_inc_ref(v_post_3446_);
lean_inc_ref(v_pre_3445_);
v___x_3476_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3445_, v_post_3446_, v_usedLetOnly_3447_, v_skipConstInApp_3448_, v_skipInstances_3449_, v___x_3475_, v_a_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
if (lean_obj_tag(v___x_3476_) == 0)
{
lean_object* v_a_3477_; uint8_t v___x_3478_; uint8_t v___x_3479_; lean_object* v___x_3480_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
lean_dec_ref(v___x_3476_);
v___x_3478_ = 0;
v___x_3479_ = 1;
v___x_3480_ = l_Lean_Meta_mkLetFVars(v_fvars_3450_, v_a_3477_, v_usedLetOnly_3447_, v___x_3478_, v___x_3479_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
lean_dec_ref(v_fvars_3450_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3482_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref(v___x_3480_);
v___x_3482_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3445_, v_post_3446_, v_usedLetOnly_3447_, v_skipConstInApp_3448_, v_skipInstances_3449_, v_a_3481_, v_a_3452_, v___y_3453_, v___y_3454_, v___y_3455_, v___y_3456_);
return v___x_3482_;
}
else
{
lean_dec_ref(v_post_3446_);
lean_dec_ref(v_pre_3445_);
return v___x_3480_;
}
}
else
{
lean_dec_ref(v_fvars_3450_);
lean_dec_ref(v_post_3446_);
lean_dec_ref(v_pre_3445_);
return v___x_3476_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__3(lean_object* v_pre_3483_, lean_object* v_post_3484_, uint8_t v_usedLetOnly_3485_, uint8_t v_skipConstInApp_3486_, uint8_t v_skipInstances_3487_, size_t v_sz_3488_, size_t v_i_3489_, lean_object* v_bs_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_){
_start:
{
uint8_t v___x_3497_; 
v___x_3497_ = lean_usize_dec_lt(v_i_3489_, v_sz_3488_);
if (v___x_3497_ == 0)
{
lean_object* v___x_3498_; 
lean_dec_ref(v_post_3484_);
lean_dec_ref(v_pre_3483_);
v___x_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3498_, 0, v_bs_3490_);
return v___x_3498_;
}
else
{
lean_object* v_v_3499_; lean_object* v___x_3500_; 
v_v_3499_ = lean_array_uget_borrowed(v_bs_3490_, v_i_3489_);
lean_inc(v_v_3499_);
lean_inc_ref(v_post_3484_);
lean_inc_ref(v_pre_3483_);
v___x_3500_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3483_, v_post_3484_, v_usedLetOnly_3485_, v_skipConstInApp_3486_, v_skipInstances_3487_, v_v_3499_, v___y_3491_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
if (lean_obj_tag(v___x_3500_) == 0)
{
lean_object* v_a_3501_; lean_object* v___x_3502_; lean_object* v_bs_x27_3503_; size_t v___x_3504_; size_t v___x_3505_; lean_object* v___x_3506_; 
v_a_3501_ = lean_ctor_get(v___x_3500_, 0);
lean_inc(v_a_3501_);
lean_dec_ref(v___x_3500_);
v___x_3502_ = lean_unsigned_to_nat(0u);
v_bs_x27_3503_ = lean_array_uset(v_bs_3490_, v_i_3489_, v___x_3502_);
v___x_3504_ = ((size_t)1ULL);
v___x_3505_ = lean_usize_add(v_i_3489_, v___x_3504_);
v___x_3506_ = lean_array_uset(v_bs_x27_3503_, v_i_3489_, v_a_3501_);
v_i_3489_ = v___x_3505_;
v_bs_3490_ = v___x_3506_;
goto _start;
}
else
{
lean_object* v_a_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3515_; 
lean_dec_ref(v_bs_3490_);
lean_dec_ref(v_post_3484_);
lean_dec_ref(v_pre_3483_);
v_a_3508_ = lean_ctor_get(v___x_3500_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3500_);
if (v_isSharedCheck_3515_ == 0)
{
v___x_3510_ = v___x_3500_;
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_a_3508_);
lean_dec(v___x_3500_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3515_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3513_; 
if (v_isShared_3511_ == 0)
{
v___x_3513_ = v___x_3510_;
goto v_reusejp_3512_;
}
else
{
lean_object* v_reuseFailAlloc_3514_; 
v_reuseFailAlloc_3514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3514_, 0, v_a_3508_);
v___x_3513_ = v_reuseFailAlloc_3514_;
goto v_reusejp_3512_;
}
v_reusejp_3512_:
{
return v___x_3513_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__0(lean_object* v_pre_3516_, lean_object* v_post_3517_, uint8_t v_usedLetOnly_3518_, uint8_t v_skipConstInApp_3519_, uint8_t v_skipInstances_3520_, lean_object* v___x_3521_, lean_object* v___y_3522_, lean_object* v_b_3523_, lean_object* v_a_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_){
_start:
{
lean_object* v___x_3530_; 
v___x_3530_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3516_, v_post_3517_, v_usedLetOnly_3518_, v_skipConstInApp_3519_, v_skipInstances_3520_, v___x_3521_, v___y_3522_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
if (lean_obj_tag(v___x_3530_) == 0)
{
lean_object* v_a_3531_; lean_object* v___x_3533_; uint8_t v_isShared_3534_; uint8_t v_isSharedCheck_3540_; 
v_a_3531_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3533_ = v___x_3530_;
v_isShared_3534_ = v_isSharedCheck_3540_;
goto v_resetjp_3532_;
}
else
{
lean_inc(v_a_3531_);
lean_dec(v___x_3530_);
v___x_3533_ = lean_box(0);
v_isShared_3534_ = v_isSharedCheck_3540_;
goto v_resetjp_3532_;
}
v_resetjp_3532_:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; lean_object* v___x_3538_; 
v___x_3535_ = lean_array_fset(v_b_3523_, v_a_3524_, v_a_3531_);
v___x_3536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3536_, 0, v___x_3535_);
if (v_isShared_3534_ == 0)
{
lean_ctor_set(v___x_3533_, 0, v___x_3536_);
v___x_3538_ = v___x_3533_;
goto v_reusejp_3537_;
}
else
{
lean_object* v_reuseFailAlloc_3539_; 
v_reuseFailAlloc_3539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3539_, 0, v___x_3536_);
v___x_3538_ = v_reuseFailAlloc_3539_;
goto v_reusejp_3537_;
}
v_reusejp_3537_:
{
return v___x_3538_;
}
}
}
else
{
lean_object* v_a_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3548_; 
lean_dec_ref(v_b_3523_);
v_a_3541_ = lean_ctor_get(v___x_3530_, 0);
v_isSharedCheck_3548_ = !lean_is_exclusive(v___x_3530_);
if (v_isSharedCheck_3548_ == 0)
{
v___x_3543_ = v___x_3530_;
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_a_3541_);
lean_dec(v___x_3530_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3548_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
lean_object* v___x_3546_; 
if (v_isShared_3544_ == 0)
{
v___x_3546_ = v___x_3543_;
goto v_reusejp_3545_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v_a_3541_);
v___x_3546_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3545_;
}
v_reusejp_3545_:
{
return v___x_3546_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__0___boxed(lean_object* v_pre_3549_, lean_object* v_post_3550_, lean_object* v_usedLetOnly_3551_, lean_object* v_skipConstInApp_3552_, lean_object* v_skipInstances_3553_, lean_object* v___x_3554_, lean_object* v___y_3555_, lean_object* v_b_3556_, lean_object* v_a_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_){
_start:
{
uint8_t v_usedLetOnly_boxed_3563_; uint8_t v_skipConstInApp_boxed_3564_; uint8_t v_skipInstances_boxed_3565_; lean_object* v_res_3566_; 
v_usedLetOnly_boxed_3563_ = lean_unbox(v_usedLetOnly_3551_);
v_skipConstInApp_boxed_3564_ = lean_unbox(v_skipConstInApp_3552_);
v_skipInstances_boxed_3565_ = lean_unbox(v_skipInstances_3553_);
v_res_3566_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__0(v_pre_3549_, v_post_3550_, v_usedLetOnly_boxed_3563_, v_skipConstInApp_boxed_3564_, v_skipInstances_boxed_3565_, v___x_3554_, v___y_3555_, v_b_3556_, v_a_3557_, v___y_3558_, v___y_3559_, v___y_3560_, v___y_3561_);
lean_dec(v___y_3561_);
lean_dec_ref(v___y_3560_);
lean_dec(v___y_3559_);
lean_dec_ref(v___y_3558_);
lean_dec(v_a_3557_);
lean_dec(v___y_3555_);
return v_res_3566_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg(lean_object* v_upperBound_3567_, lean_object* v___x_3568_, lean_object* v_pre_3569_, lean_object* v_post_3570_, uint8_t v_usedLetOnly_3571_, uint8_t v_skipConstInApp_3572_, uint8_t v_skipInstances_3573_, lean_object* v_a_3574_, lean_object* v_b_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_){
_start:
{
lean_object* v___y_3583_; uint8_t v___x_3606_; 
v___x_3606_ = lean_nat_dec_lt(v_a_3574_, v_upperBound_3567_);
if (v___x_3606_ == 0)
{
lean_object* v___x_3607_; 
lean_dec(v_a_3574_);
lean_dec_ref(v_post_3570_);
lean_dec_ref(v_pre_3569_);
v___x_3607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_b_3575_);
return v___x_3607_;
}
else
{
lean_object* v___x_3608_; lean_object* v___x_3609_; uint8_t v___x_3610_; 
v___x_3608_ = lean_array_fget_borrowed(v_b_3575_, v_a_3574_);
v___x_3609_ = lean_array_get_size(v___x_3568_);
v___x_3610_ = lean_nat_dec_lt(v_a_3574_, v___x_3609_);
if (v___x_3610_ == 0)
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___f_3614_; 
lean_inc(v___x_3608_);
v___x_3611_ = lean_box(v_usedLetOnly_3571_);
v___x_3612_ = lean_box(v_skipConstInApp_3572_);
v___x_3613_ = lean_box(v_skipInstances_3573_);
lean_inc(v_a_3574_);
lean_inc(v___y_3576_);
lean_inc_ref(v_post_3570_);
lean_inc_ref(v_pre_3569_);
v___f_3614_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3614_, 0, v_pre_3569_);
lean_closure_set(v___f_3614_, 1, v_post_3570_);
lean_closure_set(v___f_3614_, 2, v___x_3611_);
lean_closure_set(v___f_3614_, 3, v___x_3612_);
lean_closure_set(v___f_3614_, 4, v___x_3613_);
lean_closure_set(v___f_3614_, 5, v___x_3608_);
lean_closure_set(v___f_3614_, 6, v___y_3576_);
lean_closure_set(v___f_3614_, 7, v_b_3575_);
lean_closure_set(v___f_3614_, 8, v_a_3574_);
v___y_3583_ = v___f_3614_;
goto v___jp_3582_;
}
else
{
lean_object* v___x_3615_; uint8_t v_isInstance_3616_; 
v___x_3615_ = lean_array_fget_borrowed(v___x_3568_, v_a_3574_);
v_isInstance_3616_ = lean_ctor_get_uint8(v___x_3615_, sizeof(void*)*1 + 4);
if (v_isInstance_3616_ == 0)
{
lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___f_3620_; 
lean_inc(v___x_3608_);
v___x_3617_ = lean_box(v_usedLetOnly_3571_);
v___x_3618_ = lean_box(v_skipConstInApp_3572_);
v___x_3619_ = lean_box(v_skipInstances_3573_);
lean_inc(v_a_3574_);
lean_inc(v___y_3576_);
lean_inc_ref(v_post_3570_);
lean_inc_ref(v_pre_3569_);
v___f_3620_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3620_, 0, v_pre_3569_);
lean_closure_set(v___f_3620_, 1, v_post_3570_);
lean_closure_set(v___f_3620_, 2, v___x_3617_);
lean_closure_set(v___f_3620_, 3, v___x_3618_);
lean_closure_set(v___f_3620_, 4, v___x_3619_);
lean_closure_set(v___f_3620_, 5, v___x_3608_);
lean_closure_set(v___f_3620_, 6, v___y_3576_);
lean_closure_set(v___f_3620_, 7, v_b_3575_);
lean_closure_set(v___f_3620_, 8, v_a_3574_);
v___y_3583_ = v___f_3620_;
goto v___jp_3582_;
}
else
{
lean_object* v___x_3621_; lean_object* v___f_3622_; 
v___x_3621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3621_, 0, v_b_3575_);
v___f_3622_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3622_, 0, v___x_3621_);
v___y_3583_ = v___f_3622_;
goto v___jp_3582_;
}
}
}
v___jp_3582_:
{
lean_object* v___x_3584_; 
lean_inc(v___y_3580_);
lean_inc_ref(v___y_3579_);
lean_inc(v___y_3578_);
lean_inc_ref(v___y_3577_);
v___x_3584_ = lean_apply_5(v___y_3583_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_, lean_box(0));
if (lean_obj_tag(v___x_3584_) == 0)
{
lean_object* v_a_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3597_; 
v_a_3585_ = lean_ctor_get(v___x_3584_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3584_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3587_ = v___x_3584_;
v_isShared_3588_ = v_isSharedCheck_3597_;
goto v_resetjp_3586_;
}
else
{
lean_inc(v_a_3585_);
lean_dec(v___x_3584_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3597_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
if (lean_obj_tag(v_a_3585_) == 0)
{
lean_object* v_a_3589_; lean_object* v___x_3591_; 
lean_dec(v_a_3574_);
lean_dec_ref(v_post_3570_);
lean_dec_ref(v_pre_3569_);
v_a_3589_ = lean_ctor_get(v_a_3585_, 0);
lean_inc(v_a_3589_);
lean_dec_ref(v_a_3585_);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v_a_3589_);
v___x_3591_ = v___x_3587_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v_a_3589_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
else
{
lean_object* v_a_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; 
lean_del_object(v___x_3587_);
v_a_3593_ = lean_ctor_get(v_a_3585_, 0);
lean_inc(v_a_3593_);
lean_dec_ref(v_a_3585_);
v___x_3594_ = lean_unsigned_to_nat(1u);
v___x_3595_ = lean_nat_add(v_a_3574_, v___x_3594_);
lean_dec(v_a_3574_);
v_a_3574_ = v___x_3595_;
v_b_3575_ = v_a_3593_;
goto _start;
}
}
}
else
{
lean_object* v_a_3598_; lean_object* v___x_3600_; uint8_t v_isShared_3601_; uint8_t v_isSharedCheck_3605_; 
lean_dec(v_a_3574_);
lean_dec_ref(v_post_3570_);
lean_dec_ref(v_pre_3569_);
v_a_3598_ = lean_ctor_get(v___x_3584_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3584_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3600_ = v___x_3584_;
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
else
{
lean_inc(v_a_3598_);
lean_dec(v___x_3584_);
v___x_3600_ = lean_box(0);
v_isShared_3601_ = v_isSharedCheck_3605_;
goto v_resetjp_3599_;
}
v_resetjp_3599_:
{
lean_object* v___x_3603_; 
if (v_isShared_3601_ == 0)
{
v___x_3603_ = v___x_3600_;
goto v_reusejp_3602_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3598_);
v___x_3603_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3602_;
}
v_reusejp_3602_:
{
return v___x_3603_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__9(uint8_t v_skipInstances_3623_, lean_object* v_pre_3624_, lean_object* v_post_3625_, uint8_t v_usedLetOnly_3626_, uint8_t v_skipConstInApp_3627_, lean_object* v_x_3628_, lean_object* v_x_3629_, lean_object* v_x_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_){
_start:
{
lean_object* v_f_3638_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3642_; lean_object* v___y_3643_; 
if (lean_obj_tag(v_x_3628_) == 5)
{
lean_object* v_fn_3686_; lean_object* v_arg_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v_fn_3686_ = lean_ctor_get(v_x_3628_, 0);
lean_inc_ref(v_fn_3686_);
v_arg_3687_ = lean_ctor_get(v_x_3628_, 1);
lean_inc_ref(v_arg_3687_);
lean_dec_ref(v_x_3628_);
v___x_3688_ = lean_array_set(v_x_3629_, v_x_3630_, v_arg_3687_);
v___x_3689_ = lean_unsigned_to_nat(1u);
v___x_3690_ = lean_nat_sub(v_x_3630_, v___x_3689_);
lean_dec(v_x_3630_);
v_x_3628_ = v_fn_3686_;
v_x_3629_ = v___x_3688_;
v_x_3630_ = v___x_3690_;
goto _start;
}
else
{
lean_dec(v_x_3630_);
if (v_skipConstInApp_3627_ == 0)
{
goto v___jp_3683_;
}
else
{
uint8_t v___x_3692_; 
v___x_3692_ = l_Lean_Expr_isConst(v_x_3628_);
if (v___x_3692_ == 0)
{
goto v___jp_3683_;
}
else
{
v_f_3638_ = v_x_3628_;
v___y_3639_ = v___y_3631_;
v___y_3640_ = v___y_3632_;
v___y_3641_ = v___y_3633_;
v___y_3642_ = v___y_3634_;
v___y_3643_ = v___y_3635_;
goto v___jp_3637_;
}
}
}
v___jp_3637_:
{
if (v_skipInstances_3623_ == 0)
{
size_t v_sz_3644_; size_t v___x_3645_; lean_object* v___x_3646_; 
v_sz_3644_ = lean_array_size(v_x_3629_);
v___x_3645_ = ((size_t)0ULL);
lean_inc_ref(v_post_3625_);
lean_inc_ref(v_pre_3624_);
v___x_3646_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__3(v_pre_3624_, v_post_3625_, v_usedLetOnly_3626_, v_skipConstInApp_3627_, v_skipInstances_3623_, v_sz_3644_, v___x_3645_, v_x_3629_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
if (lean_obj_tag(v___x_3646_) == 0)
{
lean_object* v_a_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; 
v_a_3647_ = lean_ctor_get(v___x_3646_, 0);
lean_inc(v_a_3647_);
lean_dec_ref(v___x_3646_);
v___x_3648_ = l_Lean_mkAppN(v_f_3638_, v_a_3647_);
lean_dec(v_a_3647_);
v___x_3649_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3624_, v_post_3625_, v_usedLetOnly_3626_, v_skipConstInApp_3627_, v_skipInstances_3623_, v___x_3648_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
return v___x_3649_;
}
else
{
lean_object* v_a_3650_; lean_object* v___x_3652_; uint8_t v_isShared_3653_; uint8_t v_isSharedCheck_3657_; 
lean_dec_ref(v_f_3638_);
lean_dec_ref(v_post_3625_);
lean_dec_ref(v_pre_3624_);
v_a_3650_ = lean_ctor_get(v___x_3646_, 0);
v_isSharedCheck_3657_ = !lean_is_exclusive(v___x_3646_);
if (v_isSharedCheck_3657_ == 0)
{
v___x_3652_ = v___x_3646_;
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
else
{
lean_inc(v_a_3650_);
lean_dec(v___x_3646_);
v___x_3652_ = lean_box(0);
v_isShared_3653_ = v_isSharedCheck_3657_;
goto v_resetjp_3651_;
}
v_resetjp_3651_:
{
lean_object* v___x_3655_; 
if (v_isShared_3653_ == 0)
{
v___x_3655_ = v___x_3652_;
goto v_reusejp_3654_;
}
else
{
lean_object* v_reuseFailAlloc_3656_; 
v_reuseFailAlloc_3656_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3656_, 0, v_a_3650_);
v___x_3655_ = v_reuseFailAlloc_3656_;
goto v_reusejp_3654_;
}
v_reusejp_3654_:
{
return v___x_3655_;
}
}
}
}
else
{
lean_object* v___x_3658_; lean_object* v___x_3659_; 
v___x_3658_ = lean_array_get_size(v_x_3629_);
lean_inc_ref(v_f_3638_);
v___x_3659_ = l_Lean_Meta_getFunInfoNArgs(v_f_3638_, v___x_3658_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
if (lean_obj_tag(v___x_3659_) == 0)
{
lean_object* v_a_3660_; lean_object* v_paramInfo_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; 
v_a_3660_ = lean_ctor_get(v___x_3659_, 0);
lean_inc(v_a_3660_);
lean_dec_ref(v___x_3659_);
v_paramInfo_3661_ = lean_ctor_get(v_a_3660_, 0);
lean_inc_ref(v_paramInfo_3661_);
lean_dec(v_a_3660_);
v___x_3662_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3625_);
lean_inc_ref(v_pre_3624_);
v___x_3663_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg(v___x_3658_, v_paramInfo_3661_, v_pre_3624_, v_post_3625_, v_usedLetOnly_3626_, v_skipConstInApp_3627_, v_skipInstances_3623_, v___x_3662_, v_x_3629_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
lean_dec_ref(v_paramInfo_3661_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
lean_inc(v_a_3664_);
lean_dec_ref(v___x_3663_);
v___x_3665_ = l_Lean_mkAppN(v_f_3638_, v_a_3664_);
lean_dec(v_a_3664_);
v___x_3666_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3624_, v_post_3625_, v_usedLetOnly_3626_, v_skipConstInApp_3627_, v_skipInstances_3623_, v___x_3665_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_);
return v___x_3666_;
}
else
{
lean_object* v_a_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3674_; 
lean_dec_ref(v_f_3638_);
lean_dec_ref(v_post_3625_);
lean_dec_ref(v_pre_3624_);
v_a_3667_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3674_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3674_ == 0)
{
v___x_3669_ = v___x_3663_;
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_a_3667_);
lean_dec(v___x_3663_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3674_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3672_; 
if (v_isShared_3670_ == 0)
{
v___x_3672_ = v___x_3669_;
goto v_reusejp_3671_;
}
else
{
lean_object* v_reuseFailAlloc_3673_; 
v_reuseFailAlloc_3673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3673_, 0, v_a_3667_);
v___x_3672_ = v_reuseFailAlloc_3673_;
goto v_reusejp_3671_;
}
v_reusejp_3671_:
{
return v___x_3672_;
}
}
}
}
else
{
lean_object* v_a_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3682_; 
lean_dec_ref(v_f_3638_);
lean_dec_ref(v_x_3629_);
lean_dec_ref(v_post_3625_);
lean_dec_ref(v_pre_3624_);
v_a_3675_ = lean_ctor_get(v___x_3659_, 0);
v_isSharedCheck_3682_ = !lean_is_exclusive(v___x_3659_);
if (v_isSharedCheck_3682_ == 0)
{
v___x_3677_ = v___x_3659_;
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_a_3675_);
lean_dec(v___x_3659_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3682_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3680_; 
if (v_isShared_3678_ == 0)
{
v___x_3680_ = v___x_3677_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3681_; 
v_reuseFailAlloc_3681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3681_, 0, v_a_3675_);
v___x_3680_ = v_reuseFailAlloc_3681_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
return v___x_3680_;
}
}
}
}
}
v___jp_3683_:
{
lean_object* v___x_3684_; 
lean_inc_ref(v_post_3625_);
lean_inc_ref(v_pre_3624_);
v___x_3684_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3624_, v_post_3625_, v_usedLetOnly_3626_, v_skipConstInApp_3627_, v_skipInstances_3623_, v_x_3628_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref(v___x_3684_);
v_f_3638_ = v_a_3685_;
v___y_3639_ = v___y_3631_;
v___y_3640_ = v___y_3632_;
v___y_3641_ = v___y_3633_;
v___y_3642_ = v___y_3634_;
v___y_3643_ = v___y_3635_;
goto v___jp_3637_;
}
else
{
lean_dec_ref(v_x_3629_);
lean_dec_ref(v_post_3625_);
lean_dec_ref(v_pre_3624_);
return v___x_3684_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1(lean_object* v___x_3693_, lean_object* v_pre_3694_, lean_object* v_e_3695_, lean_object* v_post_3696_, uint8_t v_usedLetOnly_3697_, uint8_t v_skipConstInApp_3698_, uint8_t v_skipInstances_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_){
_start:
{
lean_object* v___x_3706_; 
v___x_3706_ = l_Lean_Core_checkSystem(v___x_3693_, v___y_3703_, v___y_3704_);
if (lean_obj_tag(v___x_3706_) == 0)
{
lean_object* v___x_3707_; 
lean_dec_ref(v___x_3706_);
lean_inc_ref(v_pre_3694_);
lean_inc(v___y_3704_);
lean_inc_ref(v___y_3703_);
lean_inc(v___y_3702_);
lean_inc_ref(v___y_3701_);
lean_inc_ref(v_e_3695_);
v___x_3707_ = lean_apply_6(v_pre_3694_, v_e_3695_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, lean_box(0));
if (lean_obj_tag(v___x_3707_) == 0)
{
lean_object* v_a_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3756_; 
v_a_3708_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3756_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3756_ == 0)
{
v___x_3710_ = v___x_3707_;
v_isShared_3711_ = v_isSharedCheck_3756_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_a_3708_);
lean_dec(v___x_3707_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3756_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v___y_3713_; 
switch(lean_obj_tag(v_a_3708_))
{
case 0:
{
lean_object* v_e_3748_; lean_object* v___x_3750_; 
lean_dec_ref(v_post_3696_);
lean_dec_ref(v_e_3695_);
lean_dec_ref(v_pre_3694_);
v_e_3748_ = lean_ctor_get(v_a_3708_, 0);
lean_inc_ref(v_e_3748_);
lean_dec_ref(v_a_3708_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v_e_3748_);
v___x_3750_ = v___x_3710_;
goto v_reusejp_3749_;
}
else
{
lean_object* v_reuseFailAlloc_3751_; 
v_reuseFailAlloc_3751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3751_, 0, v_e_3748_);
v___x_3750_ = v_reuseFailAlloc_3751_;
goto v_reusejp_3749_;
}
v_reusejp_3749_:
{
return v___x_3750_;
}
}
case 1:
{
lean_object* v_e_3752_; lean_object* v___x_3753_; 
lean_del_object(v___x_3710_);
lean_dec_ref(v_e_3695_);
v_e_3752_ = lean_ctor_get(v_a_3708_, 0);
lean_inc_ref(v_e_3752_);
lean_dec_ref(v_a_3708_);
v___x_3753_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v_e_3752_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3753_;
}
default: 
{
lean_object* v_e_x3f_3754_; 
lean_del_object(v___x_3710_);
v_e_x3f_3754_ = lean_ctor_get(v_a_3708_, 0);
lean_inc(v_e_x3f_3754_);
lean_dec_ref(v_a_3708_);
if (lean_obj_tag(v_e_x3f_3754_) == 0)
{
v___y_3713_ = v_e_3695_;
goto v___jp_3712_;
}
else
{
lean_object* v_val_3755_; 
lean_dec_ref(v_e_3695_);
v_val_3755_ = lean_ctor_get(v_e_x3f_3754_, 0);
lean_inc(v_val_3755_);
lean_dec_ref(v_e_x3f_3754_);
v___y_3713_ = v_val_3755_;
goto v___jp_3712_;
}
}
}
v___jp_3712_:
{
switch(lean_obj_tag(v___y_3713_))
{
case 7:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0);
v___x_3715_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___x_3714_, v___y_3713_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3715_;
}
case 6:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; 
v___x_3716_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0);
v___x_3717_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___x_3716_, v___y_3713_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3717_;
}
case 8:
{
lean_object* v___x_3718_; lean_object* v___x_3719_; 
v___x_3718_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___closed__0);
v___x_3719_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___x_3718_, v___y_3713_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3719_;
}
case 5:
{
lean_object* v_dummy_3720_; lean_object* v_nargs_3721_; lean_object* v___x_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; 
v_dummy_3720_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0);
v_nargs_3721_ = l_Lean_Expr_getAppNumArgs(v___y_3713_);
lean_inc(v_nargs_3721_);
v___x_3722_ = lean_mk_array(v_nargs_3721_, v_dummy_3720_);
v___x_3723_ = lean_unsigned_to_nat(1u);
v___x_3724_ = lean_nat_sub(v_nargs_3721_, v___x_3723_);
lean_dec(v_nargs_3721_);
v___x_3725_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__9(v_skipInstances_3699_, v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v___y_3713_, v___x_3722_, v___x_3724_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3725_;
}
case 10:
{
lean_object* v_data_3726_; lean_object* v_expr_3727_; lean_object* v___x_3728_; 
v_data_3726_ = lean_ctor_get(v___y_3713_, 0);
v_expr_3727_ = lean_ctor_get(v___y_3713_, 1);
lean_inc_ref(v_expr_3727_);
lean_inc_ref(v_post_3696_);
lean_inc_ref(v_pre_3694_);
v___x_3728_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v_expr_3727_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
if (lean_obj_tag(v___x_3728_) == 0)
{
lean_object* v_a_3729_; size_t v___x_3730_; size_t v___x_3731_; uint8_t v___x_3732_; 
v_a_3729_ = lean_ctor_get(v___x_3728_, 0);
lean_inc(v_a_3729_);
lean_dec_ref(v___x_3728_);
v___x_3730_ = lean_ptr_addr(v_expr_3727_);
v___x_3731_ = lean_ptr_addr(v_a_3729_);
v___x_3732_ = lean_usize_dec_eq(v___x_3730_, v___x_3731_);
if (v___x_3732_ == 0)
{
lean_object* v___x_3733_; lean_object* v___x_3734_; 
lean_inc(v_data_3726_);
lean_dec_ref(v___y_3713_);
v___x_3733_ = l_Lean_Expr_mdata___override(v_data_3726_, v_a_3729_);
v___x_3734_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___x_3733_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3734_;
}
else
{
lean_object* v___x_3735_; 
lean_dec(v_a_3729_);
v___x_3735_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___y_3713_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3735_;
}
}
else
{
lean_dec_ref(v___y_3713_);
lean_dec_ref(v_post_3696_);
lean_dec_ref(v_pre_3694_);
return v___x_3728_;
}
}
case 11:
{
lean_object* v_typeName_3736_; lean_object* v_idx_3737_; lean_object* v_struct_3738_; lean_object* v___x_3739_; 
v_typeName_3736_ = lean_ctor_get(v___y_3713_, 0);
v_idx_3737_ = lean_ctor_get(v___y_3713_, 1);
v_struct_3738_ = lean_ctor_get(v___y_3713_, 2);
lean_inc_ref(v_struct_3738_);
lean_inc_ref(v_post_3696_);
lean_inc_ref(v_pre_3694_);
v___x_3739_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v_struct_3738_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
if (lean_obj_tag(v___x_3739_) == 0)
{
lean_object* v_a_3740_; size_t v___x_3741_; size_t v___x_3742_; uint8_t v___x_3743_; 
v_a_3740_ = lean_ctor_get(v___x_3739_, 0);
lean_inc(v_a_3740_);
lean_dec_ref(v___x_3739_);
v___x_3741_ = lean_ptr_addr(v_struct_3738_);
v___x_3742_ = lean_ptr_addr(v_a_3740_);
v___x_3743_ = lean_usize_dec_eq(v___x_3741_, v___x_3742_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; lean_object* v___x_3745_; 
lean_inc(v_idx_3737_);
lean_inc(v_typeName_3736_);
lean_dec_ref(v___y_3713_);
v___x_3744_ = l_Lean_Expr_proj___override(v_typeName_3736_, v_idx_3737_, v_a_3740_);
v___x_3745_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___x_3744_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3745_;
}
else
{
lean_object* v___x_3746_; 
lean_dec(v_a_3740_);
v___x_3746_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___y_3713_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3746_;
}
}
else
{
lean_dec_ref(v___y_3713_);
lean_dec_ref(v_post_3696_);
lean_dec_ref(v_pre_3694_);
return v___x_3739_;
}
}
default: 
{
lean_object* v___x_3747_; 
v___x_3747_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3694_, v_post_3696_, v_usedLetOnly_3697_, v_skipConstInApp_3698_, v_skipInstances_3699_, v___y_3713_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_);
return v___x_3747_;
}
}
}
}
}
else
{
lean_object* v_a_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3764_; 
lean_dec_ref(v_post_3696_);
lean_dec_ref(v_e_3695_);
lean_dec_ref(v_pre_3694_);
v_a_3757_ = lean_ctor_get(v___x_3707_, 0);
v_isSharedCheck_3764_ = !lean_is_exclusive(v___x_3707_);
if (v_isSharedCheck_3764_ == 0)
{
v___x_3759_ = v___x_3707_;
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_a_3757_);
lean_dec(v___x_3707_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3764_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3762_; 
if (v_isShared_3760_ == 0)
{
v___x_3762_ = v___x_3759_;
goto v_reusejp_3761_;
}
else
{
lean_object* v_reuseFailAlloc_3763_; 
v_reuseFailAlloc_3763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3763_, 0, v_a_3757_);
v___x_3762_ = v_reuseFailAlloc_3763_;
goto v_reusejp_3761_;
}
v_reusejp_3761_:
{
return v___x_3762_;
}
}
}
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
lean_dec_ref(v_post_3696_);
lean_dec_ref(v_e_3695_);
lean_dec_ref(v_pre_3694_);
v_a_3765_ = lean_ctor_get(v___x_3706_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3706_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3706_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3706_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___boxed(lean_object* v___x_3773_, lean_object* v_pre_3774_, lean_object* v_e_3775_, lean_object* v_post_3776_, lean_object* v_usedLetOnly_3777_, lean_object* v_skipConstInApp_3778_, lean_object* v_skipInstances_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_){
_start:
{
uint8_t v_usedLetOnly_boxed_3786_; uint8_t v_skipConstInApp_boxed_3787_; uint8_t v_skipInstances_boxed_3788_; lean_object* v_res_3789_; 
v_usedLetOnly_boxed_3786_ = lean_unbox(v_usedLetOnly_3777_);
v_skipConstInApp_boxed_3787_ = lean_unbox(v_skipConstInApp_3778_);
v_skipInstances_boxed_3788_ = lean_unbox(v_skipInstances_3779_);
v_res_3789_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1(v___x_3773_, v_pre_3774_, v_e_3775_, v_post_3776_, v_usedLetOnly_boxed_3786_, v_skipConstInApp_boxed_3787_, v_skipInstances_boxed_3788_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_);
lean_dec(v___y_3784_);
lean_dec_ref(v___y_3783_);
lean_dec(v___y_3782_);
lean_dec_ref(v___y_3781_);
lean_dec(v___y_3780_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(lean_object* v_pre_3790_, lean_object* v_post_3791_, uint8_t v_usedLetOnly_3792_, uint8_t v_skipConstInApp_3793_, uint8_t v_skipInstances_3794_, lean_object* v_e_3795_, lean_object* v_a_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_){
_start:
{
lean_object* v___x_3802_; lean_object* v___x_3803_; 
lean_inc(v_a_3796_);
v___x_3802_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3802_, 0, lean_box(0));
lean_closure_set(v___x_3802_, 1, lean_box(0));
lean_closure_set(v___x_3802_, 2, v_a_3796_);
v___x_3803_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0(lean_box(0), v___x_3802_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_);
if (lean_obj_tag(v___x_3803_) == 0)
{
lean_object* v_a_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3838_; 
v_a_3804_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3838_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3838_ == 0)
{
v___x_3806_ = v___x_3803_;
v_isShared_3807_ = v_isSharedCheck_3838_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_a_3804_);
lean_dec(v___x_3803_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3838_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v___x_3808_; 
v___x_3808_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg(v_a_3804_, v_e_3795_);
lean_dec(v_a_3804_);
if (lean_obj_tag(v___x_3808_) == 0)
{
lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___f_3813_; lean_object* v___x_3814_; 
lean_del_object(v___x_3806_);
v___x_3809_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0);
v___x_3810_ = lean_box(v_usedLetOnly_3792_);
v___x_3811_ = lean_box(v_skipConstInApp_3793_);
v___x_3812_ = lean_box(v_skipInstances_3794_);
lean_inc_ref(v_e_3795_);
v___f_3813_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__1___boxed), 13, 7);
lean_closure_set(v___f_3813_, 0, v___x_3809_);
lean_closure_set(v___f_3813_, 1, v_pre_3790_);
lean_closure_set(v___f_3813_, 2, v_e_3795_);
lean_closure_set(v___f_3813_, 3, v_post_3791_);
lean_closure_set(v___f_3813_, 4, v___x_3810_);
lean_closure_set(v___f_3813_, 5, v___x_3811_);
lean_closure_set(v___f_3813_, 6, v___x_3812_);
v___x_3814_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___redArg(v___f_3813_, v_a_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_);
if (lean_obj_tag(v___x_3814_) == 0)
{
lean_object* v_a_3815_; lean_object* v___f_3816_; lean_object* v___x_3817_; 
v_a_3815_ = lean_ctor_get(v___x_3814_, 0);
lean_inc_n(v_a_3815_, 2);
lean_dec_ref(v___x_3814_);
lean_inc(v_a_3796_);
v___f_3816_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3816_, 0, v_a_3796_);
lean_closure_set(v___f_3816_, 1, v_e_3795_);
lean_closure_set(v___f_3816_, 2, v_a_3815_);
v___x_3817_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0(lean_box(0), v___f_3816_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_object* v___x_3819_; uint8_t v_isShared_3820_; uint8_t v_isSharedCheck_3824_; 
v_isSharedCheck_3824_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3824_ == 0)
{
lean_object* v_unused_3825_; 
v_unused_3825_ = lean_ctor_get(v___x_3817_, 0);
lean_dec(v_unused_3825_);
v___x_3819_ = v___x_3817_;
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
else
{
lean_dec(v___x_3817_);
v___x_3819_ = lean_box(0);
v_isShared_3820_ = v_isSharedCheck_3824_;
goto v_resetjp_3818_;
}
v_resetjp_3818_:
{
lean_object* v___x_3822_; 
if (v_isShared_3820_ == 0)
{
lean_ctor_set(v___x_3819_, 0, v_a_3815_);
v___x_3822_ = v___x_3819_;
goto v_reusejp_3821_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v_a_3815_);
v___x_3822_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3821_;
}
v_reusejp_3821_:
{
return v___x_3822_;
}
}
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3833_; 
lean_dec(v_a_3815_);
v_a_3826_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3828_ = v___x_3817_;
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v___x_3817_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
}
else
{
lean_dec_ref(v_e_3795_);
return v___x_3814_;
}
}
else
{
lean_object* v_val_3834_; lean_object* v___x_3836_; 
lean_dec_ref(v_e_3795_);
lean_dec_ref(v_post_3791_);
lean_dec_ref(v_pre_3790_);
v_val_3834_ = lean_ctor_get(v___x_3808_, 0);
lean_inc(v_val_3834_);
lean_dec_ref(v___x_3808_);
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 0, v_val_3834_);
v___x_3836_ = v___x_3806_;
goto v_reusejp_3835_;
}
else
{
lean_object* v_reuseFailAlloc_3837_; 
v_reuseFailAlloc_3837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3837_, 0, v_val_3834_);
v___x_3836_ = v_reuseFailAlloc_3837_;
goto v_reusejp_3835_;
}
v_reusejp_3835_:
{
return v___x_3836_;
}
}
}
}
else
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3846_; 
lean_dec_ref(v_e_3795_);
lean_dec_ref(v_post_3791_);
lean_dec_ref(v_pre_3790_);
v_a_3839_ = lean_ctor_get(v___x_3803_, 0);
v_isSharedCheck_3846_ = !lean_is_exclusive(v___x_3803_);
if (v_isSharedCheck_3846_ == 0)
{
v___x_3841_ = v___x_3803_;
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3803_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3846_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3844_; 
if (v_isShared_3842_ == 0)
{
v___x_3844_ = v___x_3841_;
goto v_reusejp_3843_;
}
else
{
lean_object* v_reuseFailAlloc_3845_; 
v_reuseFailAlloc_3845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3845_, 0, v_a_3839_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___lam__0___boxed(lean_object* v_fvars_3847_, lean_object* v_pre_3848_, lean_object* v_post_3849_, lean_object* v_usedLetOnly_3850_, lean_object* v_skipConstInApp_3851_, lean_object* v_skipInstances_3852_, lean_object* v_body_3853_, lean_object* v_x_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_){
_start:
{
uint8_t v_usedLetOnly_boxed_3861_; uint8_t v_skipConstInApp_boxed_3862_; uint8_t v_skipInstances_boxed_3863_; lean_object* v_res_3864_; 
v_usedLetOnly_boxed_3861_ = lean_unbox(v_usedLetOnly_3850_);
v_skipConstInApp_boxed_3862_ = lean_unbox(v_skipConstInApp_3851_);
v_skipInstances_boxed_3863_ = lean_unbox(v_skipInstances_3852_);
v_res_3864_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___lam__0(v_fvars_3847_, v_pre_3848_, v_post_3849_, v_usedLetOnly_boxed_3861_, v_skipConstInApp_boxed_3862_, v_skipInstances_boxed_3863_, v_body_3853_, v_x_3854_, v___y_3855_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_);
lean_dec(v___y_3859_);
lean_dec_ref(v___y_3858_);
lean_dec(v___y_3857_);
lean_dec_ref(v___y_3856_);
lean_dec(v___y_3855_);
return v_res_3864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6(lean_object* v_pre_3865_, lean_object* v_post_3866_, uint8_t v_usedLetOnly_3867_, uint8_t v_skipConstInApp_3868_, uint8_t v_skipInstances_3869_, lean_object* v_fvars_3870_, lean_object* v_e_3871_, lean_object* v_a_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_){
_start:
{
if (lean_obj_tag(v_e_3871_) == 7)
{
lean_object* v_binderName_3878_; lean_object* v_binderType_3879_; lean_object* v_body_3880_; uint8_t v_binderInfo_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v_binderName_3878_ = lean_ctor_get(v_e_3871_, 0);
lean_inc(v_binderName_3878_);
v_binderType_3879_ = lean_ctor_get(v_e_3871_, 1);
lean_inc_ref(v_binderType_3879_);
v_body_3880_ = lean_ctor_get(v_e_3871_, 2);
lean_inc_ref(v_body_3880_);
v_binderInfo_3881_ = lean_ctor_get_uint8(v_e_3871_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3871_);
v___x_3882_ = lean_expr_instantiate_rev(v_binderType_3879_, v_fvars_3870_);
lean_dec_ref(v_binderType_3879_);
lean_inc_ref(v_post_3866_);
lean_inc_ref(v_pre_3865_);
v___x_3883_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3865_, v_post_3866_, v_usedLetOnly_3867_, v_skipConstInApp_3868_, v_skipInstances_3869_, v___x_3882_, v_a_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
if (lean_obj_tag(v___x_3883_) == 0)
{
lean_object* v_a_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___f_3888_; uint8_t v___x_3889_; lean_object* v___x_3890_; 
v_a_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_a_3884_);
lean_dec_ref(v___x_3883_);
v___x_3885_ = lean_box(v_usedLetOnly_3867_);
v___x_3886_ = lean_box(v_skipConstInApp_3868_);
v___x_3887_ = lean_box(v_skipInstances_3869_);
v___f_3888_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3888_, 0, v_fvars_3870_);
lean_closure_set(v___f_3888_, 1, v_pre_3865_);
lean_closure_set(v___f_3888_, 2, v_post_3866_);
lean_closure_set(v___f_3888_, 3, v___x_3885_);
lean_closure_set(v___f_3888_, 4, v___x_3886_);
lean_closure_set(v___f_3888_, 5, v___x_3887_);
lean_closure_set(v___f_3888_, 6, v_body_3880_);
v___x_3889_ = 0;
v___x_3890_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg(v_binderName_3878_, v_binderInfo_3881_, v_a_3884_, v___f_3888_, v___x_3889_, v_a_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
return v___x_3890_;
}
else
{
lean_dec_ref(v_body_3880_);
lean_dec(v_binderName_3878_);
lean_dec_ref(v_fvars_3870_);
lean_dec_ref(v_post_3866_);
lean_dec_ref(v_pre_3865_);
return v___x_3883_;
}
}
else
{
lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3891_ = lean_expr_instantiate_rev(v_e_3871_, v_fvars_3870_);
lean_dec_ref(v_e_3871_);
lean_inc_ref(v_post_3866_);
lean_inc_ref(v_pre_3865_);
v___x_3892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3865_, v_post_3866_, v_usedLetOnly_3867_, v_skipConstInApp_3868_, v_skipInstances_3869_, v___x_3891_, v_a_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; uint8_t v___x_3894_; uint8_t v___x_3895_; uint8_t v___x_3896_; lean_object* v___x_3897_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
lean_inc(v_a_3893_);
lean_dec_ref(v___x_3892_);
v___x_3894_ = 0;
v___x_3895_ = 1;
v___x_3896_ = 1;
v___x_3897_ = l_Lean_Meta_mkForallFVars(v_fvars_3870_, v_a_3893_, v___x_3894_, v_usedLetOnly_3867_, v___x_3895_, v___x_3896_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
lean_dec_ref(v_fvars_3870_);
if (lean_obj_tag(v___x_3897_) == 0)
{
lean_object* v_a_3898_; lean_object* v___x_3899_; 
v_a_3898_ = lean_ctor_get(v___x_3897_, 0);
lean_inc(v_a_3898_);
lean_dec_ref(v___x_3897_);
v___x_3899_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3865_, v_post_3866_, v_usedLetOnly_3867_, v_skipConstInApp_3868_, v_skipInstances_3869_, v_a_3898_, v_a_3872_, v___y_3873_, v___y_3874_, v___y_3875_, v___y_3876_);
return v___x_3899_;
}
else
{
lean_dec_ref(v_post_3866_);
lean_dec_ref(v_pre_3865_);
return v___x_3897_;
}
}
else
{
lean_dec_ref(v_fvars_3870_);
lean_dec_ref(v_post_3866_);
lean_dec_ref(v_pre_3865_);
return v___x_3892_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___lam__0(lean_object* v_fvars_3900_, lean_object* v_pre_3901_, lean_object* v_post_3902_, uint8_t v_usedLetOnly_3903_, uint8_t v_skipConstInApp_3904_, uint8_t v_skipInstances_3905_, lean_object* v_body_3906_, lean_object* v_x_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_){
_start:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; 
v___x_3914_ = lean_array_push(v_fvars_3900_, v_x_3907_);
v___x_3915_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6(v_pre_3901_, v_post_3902_, v_usedLetOnly_3903_, v_skipConstInApp_3904_, v_skipInstances_3905_, v___x_3914_, v_body_3906_, v___y_3908_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
return v___x_3915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4___boxed(lean_object* v_pre_3916_, lean_object* v_post_3917_, lean_object* v_usedLetOnly_3918_, lean_object* v_skipConstInApp_3919_, lean_object* v_skipInstances_3920_, lean_object* v_e_3921_, lean_object* v_a_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_){
_start:
{
uint8_t v_usedLetOnly_boxed_3928_; uint8_t v_skipConstInApp_boxed_3929_; uint8_t v_skipInstances_boxed_3930_; lean_object* v_res_3931_; 
v_usedLetOnly_boxed_3928_ = lean_unbox(v_usedLetOnly_3918_);
v_skipConstInApp_boxed_3929_ = lean_unbox(v_skipConstInApp_3919_);
v_skipInstances_boxed_3930_ = lean_unbox(v_skipInstances_3920_);
v_res_3931_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__4(v_pre_3916_, v_post_3917_, v_usedLetOnly_boxed_3928_, v_skipConstInApp_boxed_3929_, v_skipInstances_boxed_3930_, v_e_3921_, v_a_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
lean_dec(v___y_3924_);
lean_dec_ref(v___y_3923_);
lean_dec(v_a_3922_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__3___boxed(lean_object* v_pre_3932_, lean_object* v_post_3933_, lean_object* v_usedLetOnly_3934_, lean_object* v_skipConstInApp_3935_, lean_object* v_skipInstances_3936_, lean_object* v_sz_3937_, lean_object* v_i_3938_, lean_object* v_bs_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
uint8_t v_usedLetOnly_boxed_3946_; uint8_t v_skipConstInApp_boxed_3947_; uint8_t v_skipInstances_boxed_3948_; size_t v_sz_boxed_3949_; size_t v_i_boxed_3950_; lean_object* v_res_3951_; 
v_usedLetOnly_boxed_3946_ = lean_unbox(v_usedLetOnly_3934_);
v_skipConstInApp_boxed_3947_ = lean_unbox(v_skipConstInApp_3935_);
v_skipInstances_boxed_3948_ = lean_unbox(v_skipInstances_3936_);
v_sz_boxed_3949_ = lean_unbox_usize(v_sz_3937_);
lean_dec(v_sz_3937_);
v_i_boxed_3950_ = lean_unbox_usize(v_i_3938_);
lean_dec(v_i_3938_);
v_res_3951_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__3(v_pre_3932_, v_post_3933_, v_usedLetOnly_boxed_3946_, v_skipConstInApp_boxed_3947_, v_skipInstances_boxed_3948_, v_sz_boxed_3949_, v_i_boxed_3950_, v_bs_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
lean_dec(v___y_3944_);
lean_dec_ref(v___y_3943_);
lean_dec(v___y_3942_);
lean_dec_ref(v___y_3941_);
lean_dec(v___y_3940_);
return v_res_3951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___boxed(lean_object* v_pre_3952_, lean_object* v_post_3953_, lean_object* v_usedLetOnly_3954_, lean_object* v_skipConstInApp_3955_, lean_object* v_skipInstances_3956_, lean_object* v_e_3957_, lean_object* v_a_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
uint8_t v_usedLetOnly_boxed_3964_; uint8_t v_skipConstInApp_boxed_3965_; uint8_t v_skipInstances_boxed_3966_; lean_object* v_res_3967_; 
v_usedLetOnly_boxed_3964_ = lean_unbox(v_usedLetOnly_3954_);
v_skipConstInApp_boxed_3965_ = lean_unbox(v_skipConstInApp_3955_);
v_skipInstances_boxed_3966_ = lean_unbox(v_skipInstances_3956_);
v_res_3967_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_3952_, v_post_3953_, v_usedLetOnly_boxed_3964_, v_skipConstInApp_boxed_3965_, v_skipInstances_boxed_3966_, v_e_3957_, v_a_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
lean_dec(v_a_3958_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6___boxed(lean_object* v_pre_3968_, lean_object* v_post_3969_, lean_object* v_usedLetOnly_3970_, lean_object* v_skipConstInApp_3971_, lean_object* v_skipInstances_3972_, lean_object* v_fvars_3973_, lean_object* v_e_3974_, lean_object* v_a_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
uint8_t v_usedLetOnly_boxed_3981_; uint8_t v_skipConstInApp_boxed_3982_; uint8_t v_skipInstances_boxed_3983_; lean_object* v_res_3984_; 
v_usedLetOnly_boxed_3981_ = lean_unbox(v_usedLetOnly_3970_);
v_skipConstInApp_boxed_3982_ = lean_unbox(v_skipConstInApp_3971_);
v_skipInstances_boxed_3983_ = lean_unbox(v_skipInstances_3972_);
v_res_3984_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6(v_pre_3968_, v_post_3969_, v_usedLetOnly_boxed_3981_, v_skipConstInApp_boxed_3982_, v_skipInstances_boxed_3983_, v_fvars_3973_, v_e_3974_, v_a_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_);
lean_dec(v___y_3979_);
lean_dec_ref(v___y_3978_);
lean_dec(v___y_3977_);
lean_dec_ref(v___y_3976_);
lean_dec(v_a_3975_);
return v_res_3984_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7___boxed(lean_object* v_pre_3985_, lean_object* v_post_3986_, lean_object* v_usedLetOnly_3987_, lean_object* v_skipConstInApp_3988_, lean_object* v_skipInstances_3989_, lean_object* v_fvars_3990_, lean_object* v_e_3991_, lean_object* v_a_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
uint8_t v_usedLetOnly_boxed_3998_; uint8_t v_skipConstInApp_boxed_3999_; uint8_t v_skipInstances_boxed_4000_; lean_object* v_res_4001_; 
v_usedLetOnly_boxed_3998_ = lean_unbox(v_usedLetOnly_3987_);
v_skipConstInApp_boxed_3999_ = lean_unbox(v_skipConstInApp_3988_);
v_skipInstances_boxed_4000_ = lean_unbox(v_skipInstances_3989_);
v_res_4001_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__7(v_pre_3985_, v_post_3986_, v_usedLetOnly_boxed_3998_, v_skipConstInApp_boxed_3999_, v_skipInstances_boxed_4000_, v_fvars_3990_, v_e_3991_, v_a_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
lean_dec(v___y_3994_);
lean_dec_ref(v___y_3993_);
lean_dec(v_a_3992_);
return v_res_4001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8___boxed(lean_object* v_pre_4002_, lean_object* v_post_4003_, lean_object* v_usedLetOnly_4004_, lean_object* v_skipConstInApp_4005_, lean_object* v_skipInstances_4006_, lean_object* v_fvars_4007_, lean_object* v_e_4008_, lean_object* v_a_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_){
_start:
{
uint8_t v_usedLetOnly_boxed_4015_; uint8_t v_skipConstInApp_boxed_4016_; uint8_t v_skipInstances_boxed_4017_; lean_object* v_res_4018_; 
v_usedLetOnly_boxed_4015_ = lean_unbox(v_usedLetOnly_4004_);
v_skipConstInApp_boxed_4016_ = lean_unbox(v_skipConstInApp_4005_);
v_skipInstances_boxed_4017_ = lean_unbox(v_skipInstances_4006_);
v_res_4018_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8(v_pre_4002_, v_post_4003_, v_usedLetOnly_boxed_4015_, v_skipConstInApp_boxed_4016_, v_skipInstances_boxed_4017_, v_fvars_4007_, v_e_4008_, v_a_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_);
lean_dec(v___y_4013_);
lean_dec_ref(v___y_4012_);
lean_dec(v___y_4011_);
lean_dec_ref(v___y_4010_);
lean_dec(v_a_4009_);
return v_res_4018_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_upperBound_4019_, lean_object* v___x_4020_, lean_object* v_pre_4021_, lean_object* v_post_4022_, lean_object* v_usedLetOnly_4023_, lean_object* v_skipConstInApp_4024_, lean_object* v_skipInstances_4025_, lean_object* v_a_4026_, lean_object* v_b_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
uint8_t v_usedLetOnly_boxed_4034_; uint8_t v_skipConstInApp_boxed_4035_; uint8_t v_skipInstances_boxed_4036_; lean_object* v_res_4037_; 
v_usedLetOnly_boxed_4034_ = lean_unbox(v_usedLetOnly_4023_);
v_skipConstInApp_boxed_4035_ = lean_unbox(v_skipConstInApp_4024_);
v_skipInstances_boxed_4036_ = lean_unbox(v_skipInstances_4025_);
v_res_4037_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg(v_upperBound_4019_, v___x_4020_, v_pre_4021_, v_post_4022_, v_usedLetOnly_boxed_4034_, v_skipConstInApp_boxed_4035_, v_skipInstances_boxed_4036_, v_a_4026_, v_b_4027_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_);
lean_dec(v___y_4032_);
lean_dec_ref(v___y_4031_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
lean_dec(v___y_4028_);
lean_dec_ref(v___x_4020_);
lean_dec(v_upperBound_4019_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__9___boxed(lean_object* v_skipInstances_4038_, lean_object* v_pre_4039_, lean_object* v_post_4040_, lean_object* v_usedLetOnly_4041_, lean_object* v_skipConstInApp_4042_, lean_object* v_x_4043_, lean_object* v_x_4044_, lean_object* v_x_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
uint8_t v_skipInstances_boxed_4052_; uint8_t v_usedLetOnly_boxed_4053_; uint8_t v_skipConstInApp_boxed_4054_; lean_object* v_res_4055_; 
v_skipInstances_boxed_4052_ = lean_unbox(v_skipInstances_4038_);
v_usedLetOnly_boxed_4053_ = lean_unbox(v_usedLetOnly_4041_);
v_skipConstInApp_boxed_4054_ = lean_unbox(v_skipConstInApp_4042_);
v_res_4055_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__9(v_skipInstances_boxed_4052_, v_pre_4039_, v_post_4040_, v_usedLetOnly_boxed_4053_, v_skipConstInApp_boxed_4054_, v_x_4043_, v_x_4044_, v_x_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_);
lean_dec(v___y_4050_);
lean_dec_ref(v___y_4049_);
lean_dec(v___y_4048_);
lean_dec_ref(v___y_4047_);
lean_dec(v___y_4046_);
return v_res_4055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0(lean_object* v_00_u03b1_4056_, lean_object* v_x_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_){
_start:
{
lean_object* v___x_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4063_ = lean_st_ref_get(v___y_4061_);
lean_dec(v___x_4063_);
v___x_4064_ = lean_apply_1(v_x_4057_, lean_box(0));
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
return v___x_4065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0___boxed(lean_object* v_00_u03b1_4066_, lean_object* v_x_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0(v_00_u03b1_4066_, v_x_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1(lean_object* v_input_4074_, lean_object* v_pre_4075_, lean_object* v_post_4076_, uint8_t v_usedLetOnly_4077_, uint8_t v_skipConstInApp_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v_a_4086_; uint8_t v___x_4087_; lean_object* v___x_4088_; 
v___x_4084_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2);
v___x_4085_ = l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0(lean_box(0), v___x_4084_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc(v_a_4086_);
lean_dec_ref(v___x_4085_);
v___x_4087_ = 0;
v___x_4088_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2(v_pre_4075_, v_post_4076_, v_usedLetOnly_4077_, v_skipConstInApp_4078_, v___x_4087_, v_input_4074_, v_a_4086_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
if (lean_obj_tag(v___x_4088_) == 0)
{
lean_object* v_a_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; lean_object* v___x_4093_; uint8_t v_isShared_4094_; uint8_t v_isSharedCheck_4098_; 
v_a_4089_ = lean_ctor_get(v___x_4088_, 0);
lean_inc(v_a_4089_);
lean_dec_ref(v___x_4088_);
v___x_4090_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4090_, 0, lean_box(0));
lean_closure_set(v___x_4090_, 1, lean_box(0));
lean_closure_set(v___x_4090_, 2, v_a_4086_);
v___x_4091_ = l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0(lean_box(0), v___x_4090_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
v_isSharedCheck_4098_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4098_ == 0)
{
lean_object* v_unused_4099_; 
v_unused_4099_ = lean_ctor_get(v___x_4091_, 0);
lean_dec(v_unused_4099_);
v___x_4093_ = v___x_4091_;
v_isShared_4094_ = v_isSharedCheck_4098_;
goto v_resetjp_4092_;
}
else
{
lean_dec(v___x_4091_);
v___x_4093_ = lean_box(0);
v_isShared_4094_ = v_isSharedCheck_4098_;
goto v_resetjp_4092_;
}
v_resetjp_4092_:
{
lean_object* v___x_4096_; 
if (v_isShared_4094_ == 0)
{
lean_ctor_set(v___x_4093_, 0, v_a_4089_);
v___x_4096_ = v___x_4093_;
goto v_reusejp_4095_;
}
else
{
lean_object* v_reuseFailAlloc_4097_; 
v_reuseFailAlloc_4097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4097_, 0, v_a_4089_);
v___x_4096_ = v_reuseFailAlloc_4097_;
goto v_reusejp_4095_;
}
v_reusejp_4095_:
{
return v___x_4096_;
}
}
}
else
{
lean_dec(v_a_4086_);
return v___x_4088_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___boxed(lean_object* v_input_4100_, lean_object* v_pre_4101_, lean_object* v_post_4102_, lean_object* v_usedLetOnly_4103_, lean_object* v_skipConstInApp_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
uint8_t v_usedLetOnly_boxed_4110_; uint8_t v_skipConstInApp_boxed_4111_; lean_object* v_res_4112_; 
v_usedLetOnly_boxed_4110_ = lean_unbox(v_usedLetOnly_4103_);
v_skipConstInApp_boxed_4111_ = lean_unbox(v_skipConstInApp_4104_);
v_res_4112_ = l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1(v_input_4100_, v_pre_4101_, v_post_4102_, v_usedLetOnly_boxed_4110_, v_skipConstInApp_boxed_4111_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec(v___y_4106_);
lean_dec_ref(v___y_4105_);
return v_res_4112_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___closed__0(void){
_start:
{
lean_object* v___f_4113_; 
v___f_4113_ = lean_alloc_closure((void*)(l_Lean_Expr_isProj___boxed), 1, 0);
return v___f_4113_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___closed__1(void){
_start:
{
lean_object* v_post_4114_; 
v_post_4114_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_foldProjs___lam__0___boxed), 6, 0);
return v_post_4114_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_foldProjs___closed__2(void){
_start:
{
lean_object* v___f_4115_; 
v___f_4115_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_foldProjs___lam__1___boxed), 6, 0);
return v___f_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs(lean_object* v_e_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_){
_start:
{
lean_object* v___f_4122_; lean_object* v___x_4123_; 
v___f_4122_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___closed__0, &l_Lean_Meta_Grind_foldProjs___closed__0_once, _init_l_Lean_Meta_Grind_foldProjs___closed__0);
v___x_4123_ = lean_find_expr(v___f_4122_, v_e_4116_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v___x_4124_; 
v___x_4124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4124_, 0, v_e_4116_);
return v___x_4124_;
}
else
{
lean_object* v_post_4125_; lean_object* v___f_4126_; uint8_t v___x_4127_; lean_object* v___x_4128_; 
lean_dec_ref(v___x_4123_);
v_post_4125_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___closed__1, &l_Lean_Meta_Grind_foldProjs___closed__1_once, _init_l_Lean_Meta_Grind_foldProjs___closed__1);
v___f_4126_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___closed__2, &l_Lean_Meta_Grind_foldProjs___closed__2_once, _init_l_Lean_Meta_Grind_foldProjs___closed__2);
v___x_4127_ = 0;
v___x_4128_ = l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1(v_e_4116_, v___f_4126_, v_post_4125_, v___x_4127_, v___x_4127_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_);
return v___x_4128_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_foldProjs___boxed(lean_object* v_e_4129_, lean_object* v_a_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_){
_start:
{
lean_object* v_res_4135_; 
v_res_4135_ = l_Lean_Meta_Grind_foldProjs(v_e_4129_, v_a_4130_, v_a_4131_, v_a_4132_, v_a_4133_);
lean_dec(v_a_4133_);
lean_dec_ref(v_a_4132_);
lean_dec(v_a_4131_);
lean_dec_ref(v_a_4130_);
return v_res_4135_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5(lean_object* v_upperBound_4136_, lean_object* v___x_4137_, lean_object* v_pre_4138_, lean_object* v_post_4139_, uint8_t v_usedLetOnly_4140_, uint8_t v_skipConstInApp_4141_, uint8_t v_skipInstances_4142_, lean_object* v___x_4143_, lean_object* v_inst_4144_, lean_object* v_R_4145_, lean_object* v_a_4146_, lean_object* v_b_4147_, lean_object* v_c_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v___x_4155_; 
v___x_4155_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___redArg(v_upperBound_4136_, v___x_4137_, v_pre_4138_, v_post_4139_, v_usedLetOnly_4140_, v_skipConstInApp_4141_, v_skipInstances_4142_, v_a_4146_, v_b_4147_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5___boxed(lean_object** _args){
lean_object* v_upperBound_4156_ = _args[0];
lean_object* v___x_4157_ = _args[1];
lean_object* v_pre_4158_ = _args[2];
lean_object* v_post_4159_ = _args[3];
lean_object* v_usedLetOnly_4160_ = _args[4];
lean_object* v_skipConstInApp_4161_ = _args[5];
lean_object* v_skipInstances_4162_ = _args[6];
lean_object* v___x_4163_ = _args[7];
lean_object* v_inst_4164_ = _args[8];
lean_object* v_R_4165_ = _args[9];
lean_object* v_a_4166_ = _args[10];
lean_object* v_b_4167_ = _args[11];
lean_object* v_c_4168_ = _args[12];
lean_object* v___y_4169_ = _args[13];
lean_object* v___y_4170_ = _args[14];
lean_object* v___y_4171_ = _args[15];
lean_object* v___y_4172_ = _args[16];
lean_object* v___y_4173_ = _args[17];
lean_object* v___y_4174_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_4175_; uint8_t v_skipConstInApp_boxed_4176_; uint8_t v_skipInstances_boxed_4177_; lean_object* v_res_4178_; 
v_usedLetOnly_boxed_4175_ = lean_unbox(v_usedLetOnly_4160_);
v_skipConstInApp_boxed_4176_ = lean_unbox(v_skipConstInApp_4161_);
v_skipInstances_boxed_4177_ = lean_unbox(v_skipInstances_4162_);
v_res_4178_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__5(v_upperBound_4156_, v___x_4157_, v_pre_4158_, v_post_4159_, v_usedLetOnly_boxed_4175_, v_skipConstInApp_boxed_4176_, v_skipInstances_boxed_4177_, v___x_4163_, v_inst_4164_, v_R_4165_, v_a_4166_, v_b_4167_, v_c_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_);
lean_dec(v___y_4173_);
lean_dec_ref(v___y_4172_);
lean_dec(v___y_4171_);
lean_dec_ref(v___y_4170_);
lean_dec(v___y_4169_);
lean_dec(v___x_4163_);
lean_dec_ref(v___x_4157_);
lean_dec(v_upperBound_4156_);
return v_res_4178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7(lean_object* v_00_u03b1_4179_, lean_object* v_name_4180_, uint8_t v_bi_4181_, lean_object* v_type_4182_, lean_object* v_k_4183_, uint8_t v_kind_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_){
_start:
{
lean_object* v___x_4191_; 
v___x_4191_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___redArg(v_name_4180_, v_bi_4181_, v_type_4182_, v_k_4183_, v_kind_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
return v___x_4191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7___boxed(lean_object* v_00_u03b1_4192_, lean_object* v_name_4193_, lean_object* v_bi_4194_, lean_object* v_type_4195_, lean_object* v_k_4196_, lean_object* v_kind_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_){
_start:
{
uint8_t v_bi_boxed_4204_; uint8_t v_kind_boxed_4205_; lean_object* v_res_4206_; 
v_bi_boxed_4204_ = lean_unbox(v_bi_4194_);
v_kind_boxed_4205_ = lean_unbox(v_kind_4197_);
v_res_4206_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__6_spec__7(v_00_u03b1_4192_, v_name_4193_, v_bi_boxed_4204_, v_type_4195_, v_k_4196_, v_kind_boxed_4205_, v___y_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
lean_dec(v___y_4202_);
lean_dec_ref(v___y_4201_);
lean_dec(v___y_4200_);
lean_dec_ref(v___y_4199_);
lean_dec(v___y_4198_);
return v_res_4206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10(lean_object* v_00_u03b1_4207_, lean_object* v_name_4208_, lean_object* v_type_4209_, lean_object* v_val_4210_, lean_object* v_k_4211_, uint8_t v_nondep_4212_, uint8_t v_kind_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_){
_start:
{
lean_object* v___x_4220_; 
v___x_4220_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___redArg(v_name_4208_, v_type_4209_, v_val_4210_, v_k_4211_, v_nondep_4212_, v_kind_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_);
return v___x_4220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10___boxed(lean_object* v_00_u03b1_4221_, lean_object* v_name_4222_, lean_object* v_type_4223_, lean_object* v_val_4224_, lean_object* v_k_4225_, lean_object* v_nondep_4226_, lean_object* v_kind_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_){
_start:
{
uint8_t v_nondep_boxed_4234_; uint8_t v_kind_boxed_4235_; lean_object* v_res_4236_; 
v_nondep_boxed_4234_ = lean_unbox(v_nondep_4226_);
v_kind_boxed_4235_ = lean_unbox(v_kind_4227_);
v_res_4236_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__8_spec__10(v_00_u03b1_4221_, v_name_4222_, v_type_4223_, v_val_4224_, v_k_4225_, v_nondep_boxed_4234_, v_kind_boxed_4235_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_, v___y_4232_);
lean_dec(v___y_4232_);
lean_dec_ref(v___y_4231_);
lean_dec(v___y_4230_);
lean_dec_ref(v___y_4229_);
lean_dec(v___y_4228_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13(lean_object* v_00_u03b1_4237_, lean_object* v_ref_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_){
_start:
{
lean_object* v___x_4244_; 
v___x_4244_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___redArg(v_ref_4238_);
return v___x_4244_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13___boxed(lean_object* v_00_u03b1_4245_, lean_object* v_ref_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_){
_start:
{
lean_object* v_res_4252_; 
v_res_4252_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10_spec__13(v_00_u03b1_4245_, v_ref_4246_, v___y_4247_, v___y_4248_, v___y_4249_, v___y_4250_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
lean_dec(v___y_4248_);
lean_dec_ref(v___y_4247_);
return v_res_4252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10(lean_object* v_00_u03b1_4253_, lean_object* v_x_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_){
_start:
{
lean_object* v___x_4261_; 
v___x_4261_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___redArg(v_x_4254_, v___y_4255_, v___y_4256_, v___y_4257_, v___y_4258_, v___y_4259_);
return v___x_4261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10___boxed(lean_object* v_00_u03b1_4262_, lean_object* v_x_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_){
_start:
{
lean_object* v_res_4270_; 
v_res_4270_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2_spec__10(v_00_u03b1_4262_, v_x_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_, v___y_4268_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
lean_dec(v___y_4266_);
lean_dec_ref(v___y_4265_);
lean_dec(v___y_4264_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_normalize___boxed(lean_object* v_e_4278_, lean_object* v_config_4279_, lean_object* v_a_4280_, lean_object* v_a_4281_, lean_object* v_a_4282_, lean_object* v_a_4283_, lean_object* v_a_00___x40___internal___hyg_4284_){
_start:
{
lean_object* v_res_4285_; 
v_res_4285_ = lean_grind_normalize(v_e_4278_, v_config_4279_, v_a_4280_, v_a_4281_, v_a_4282_, v_a_4283_);
return v_res_4285_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsMatchCond___closed__0(void){
_start:
{
lean_object* v___x_4286_; 
v___x_4286_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_4286_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsMatchCond___closed__1(void){
_start:
{
lean_object* v___x_4287_; 
v___x_4287_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_4287_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsMatchCond___closed__2(void){
_start:
{
lean_object* v___x_4288_; 
v___x_4288_ = lean_mk_string_unchecked("MatchCond", 9, 9);
return v___x_4288_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsMatchCond___closed__3(void){
_start:
{
lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___x_4292_; 
v___x_4289_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__2, &l_Lean_Meta_Grind_markAsMatchCond___closed__2_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__2);
v___x_4290_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__1, &l_Lean_Meta_Grind_markAsMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__1);
v___x_4291_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__0, &l_Lean_Meta_Grind_markAsMatchCond___closed__0_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__0);
v___x_4292_ = l_Lean_Name_mkStr3(v___x_4291_, v___x_4290_, v___x_4289_);
return v___x_4292_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsMatchCond___closed__4(void){
_start:
{
lean_object* v___x_4293_; lean_object* v___x_4294_; lean_object* v___x_4295_; 
v___x_4293_ = lean_box(0);
v___x_4294_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__3, &l_Lean_Meta_Grind_markAsMatchCond___closed__3_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__3);
v___x_4295_ = l_Lean_mkConst(v___x_4294_, v___x_4293_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_markAsMatchCond(lean_object* v_e_4296_){
_start:
{
lean_object* v___x_4297_; lean_object* v___x_4298_; 
v___x_4297_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__4, &l_Lean_Meta_Grind_markAsMatchCond___closed__4_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__4);
v___x_4298_ = l_Lean_Expr_app___override(v___x_4297_, v_e_4296_);
return v___x_4298_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isMatchCond(lean_object* v_e_4299_){
_start:
{
lean_object* v___x_4300_; lean_object* v___x_4301_; uint8_t v___x_4302_; 
v___x_4300_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__3, &l_Lean_Meta_Grind_markAsMatchCond___closed__3_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__3);
v___x_4301_ = lean_unsigned_to_nat(1u);
v___x_4302_ = l_Lean_Expr_isAppOfArity(v_e_4299_, v___x_4300_, v___x_4301_);
return v___x_4302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isMatchCond___boxed(lean_object* v_e_4303_){
_start:
{
uint8_t v_res_4304_; lean_object* v_r_4305_; 
v_res_4304_ = l_Lean_Meta_Grind_isMatchCond(v_e_4303_);
lean_dec_ref(v_e_4303_);
v_r_4305_ = lean_box(v_res_4304_);
return v_r_4305_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__0(void){
_start:
{
lean_object* v___x_4306_; 
v___x_4306_ = lean_mk_string_unchecked("PreMatchCond", 12, 12);
return v___x_4306_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__1(void){
_start:
{
lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v___x_4307_ = lean_obj_once(&l_Lean_Meta_Grind_markAsPreMatchCond___closed__0, &l_Lean_Meta_Grind_markAsPreMatchCond___closed__0_once, _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__0);
v___x_4308_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__1, &l_Lean_Meta_Grind_markAsMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__1);
v___x_4309_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__0, &l_Lean_Meta_Grind_markAsMatchCond___closed__0_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__0);
v___x_4310_ = l_Lean_Name_mkStr3(v___x_4309_, v___x_4308_, v___x_4307_);
return v___x_4310_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__2(void){
_start:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; 
v___x_4311_ = lean_box(0);
v___x_4312_ = lean_obj_once(&l_Lean_Meta_Grind_markAsPreMatchCond___closed__1, &l_Lean_Meta_Grind_markAsPreMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__1);
v___x_4313_ = l_Lean_mkConst(v___x_4312_, v___x_4311_);
return v___x_4313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_markAsPreMatchCond(lean_object* v_e_4314_){
_start:
{
lean_object* v___x_4315_; lean_object* v___x_4316_; 
v___x_4315_ = lean_obj_once(&l_Lean_Meta_Grind_markAsPreMatchCond___closed__2, &l_Lean_Meta_Grind_markAsPreMatchCond___closed__2_once, _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__2);
v___x_4316_ = l_Lean_Expr_app___override(v___x_4315_, v_e_4314_);
return v___x_4316_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isPreMatchCond(lean_object* v_e_4317_){
_start:
{
lean_object* v___x_4318_; lean_object* v___x_4319_; uint8_t v___x_4320_; 
v___x_4318_ = lean_obj_once(&l_Lean_Meta_Grind_markAsPreMatchCond___closed__1, &l_Lean_Meta_Grind_markAsPreMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__1);
v___x_4319_ = lean_unsigned_to_nat(1u);
v___x_4320_ = l_Lean_Expr_isAppOfArity(v_e_4317_, v___x_4318_, v___x_4319_);
return v___x_4320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isPreMatchCond___boxed(lean_object* v_e_4321_){
_start:
{
uint8_t v_res_4322_; lean_object* v_r_4323_; 
v_res_4322_ = l_Lean_Meta_Grind_isPreMatchCond(v_e_4321_);
lean_dec_ref(v_e_4321_);
v_r_4323_ = lean_box(v_res_4322_);
return v_r_4323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond___redArg(lean_object* v_e_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_){
_start:
{
lean_object* v___x_4328_; 
lean_inc_ref(v_e_4324_);
v___x_4328_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_e_4324_, v_a_4325_, v_a_4326_);
if (lean_obj_tag(v___x_4328_) == 0)
{
lean_object* v_a_4329_; lean_object* v___x_4331_; uint8_t v_isShared_4332_; uint8_t v_isSharedCheck_4345_; 
v_a_4329_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4345_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4345_ == 0)
{
v___x_4331_ = v___x_4328_;
v_isShared_4332_ = v_isSharedCheck_4345_;
goto v_resetjp_4330_;
}
else
{
lean_inc(v_a_4329_);
lean_dec(v___x_4328_);
v___x_4331_ = lean_box(0);
v_isShared_4332_ = v_isSharedCheck_4345_;
goto v_resetjp_4330_;
}
v_resetjp_4330_:
{
lean_object* v___x_4338_; uint8_t v___x_4339_; 
v___x_4338_ = l_Lean_Expr_cleanupAnnotations(v_a_4329_);
v___x_4339_ = l_Lean_Expr_isApp(v___x_4338_);
if (v___x_4339_ == 0)
{
lean_dec_ref(v___x_4338_);
lean_dec_ref(v_e_4324_);
goto v___jp_4333_;
}
else
{
lean_object* v___x_4340_; lean_object* v___x_4341_; uint8_t v___x_4342_; 
v___x_4340_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4338_);
v___x_4341_ = lean_obj_once(&l_Lean_Meta_Grind_markAsPreMatchCond___closed__1, &l_Lean_Meta_Grind_markAsPreMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__1);
v___x_4342_ = l_Lean_Expr_isConstOf(v___x_4340_, v___x_4341_);
lean_dec_ref(v___x_4340_);
if (v___x_4342_ == 0)
{
lean_dec_ref(v_e_4324_);
goto v___jp_4333_;
}
else
{
lean_object* v___x_4343_; lean_object* v___x_4344_; 
lean_del_object(v___x_4331_);
v___x_4343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4343_, 0, v_e_4324_);
v___x_4344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4344_, 0, v___x_4343_);
return v___x_4344_;
}
}
v___jp_4333_:
{
lean_object* v___x_4334_; lean_object* v___x_4336_; 
v___x_4334_ = lean_obj_once(&l_Lean_Meta_Grind_foldProjs___lam__1___closed__0, &l_Lean_Meta_Grind_foldProjs___lam__1___closed__0_once, _init_l_Lean_Meta_Grind_foldProjs___lam__1___closed__0);
if (v_isShared_4332_ == 0)
{
lean_ctor_set(v___x_4331_, 0, v___x_4334_);
v___x_4336_ = v___x_4331_;
goto v_reusejp_4335_;
}
else
{
lean_object* v_reuseFailAlloc_4337_; 
v_reuseFailAlloc_4337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4337_, 0, v___x_4334_);
v___x_4336_ = v_reuseFailAlloc_4337_;
goto v_reusejp_4335_;
}
v_reusejp_4335_:
{
return v___x_4336_;
}
}
}
}
else
{
lean_object* v_a_4346_; lean_object* v___x_4348_; uint8_t v_isShared_4349_; uint8_t v_isSharedCheck_4353_; 
lean_dec_ref(v_e_4324_);
v_a_4346_ = lean_ctor_get(v___x_4328_, 0);
v_isSharedCheck_4353_ = !lean_is_exclusive(v___x_4328_);
if (v_isSharedCheck_4353_ == 0)
{
v___x_4348_ = v___x_4328_;
v_isShared_4349_ = v_isSharedCheck_4353_;
goto v_resetjp_4347_;
}
else
{
lean_inc(v_a_4346_);
lean_dec(v___x_4328_);
v___x_4348_ = lean_box(0);
v_isShared_4349_ = v_isSharedCheck_4353_;
goto v_resetjp_4347_;
}
v_resetjp_4347_:
{
lean_object* v___x_4351_; 
if (v_isShared_4349_ == 0)
{
v___x_4351_ = v___x_4348_;
goto v_reusejp_4350_;
}
else
{
lean_object* v_reuseFailAlloc_4352_; 
v_reuseFailAlloc_4352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4352_, 0, v_a_4346_);
v___x_4351_ = v_reuseFailAlloc_4352_;
goto v_reusejp_4350_;
}
v_reusejp_4350_:
{
return v___x_4351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond___redArg___boxed(lean_object* v_e_4354_, lean_object* v_a_4355_, lean_object* v_a_4356_, lean_object* v_a_4357_){
_start:
{
lean_object* v_res_4358_; 
v_res_4358_ = l_Lean_Meta_Grind_reducePreMatchCond___redArg(v_e_4354_, v_a_4355_, v_a_4356_);
lean_dec(v_a_4356_);
lean_dec(v_a_4355_);
return v_res_4358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond(lean_object* v_e_4359_, lean_object* v_a_4360_, lean_object* v_a_4361_, lean_object* v_a_4362_, lean_object* v_a_4363_, lean_object* v_a_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_){
_start:
{
lean_object* v___x_4368_; 
v___x_4368_ = l_Lean_Meta_Grind_reducePreMatchCond___redArg(v_e_4359_, v_a_4364_, v_a_4366_);
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_reducePreMatchCond___boxed(lean_object* v_e_4369_, lean_object* v_a_4370_, lean_object* v_a_4371_, lean_object* v_a_4372_, lean_object* v_a_4373_, lean_object* v_a_4374_, lean_object* v_a_4375_, lean_object* v_a_4376_, lean_object* v_a_4377_){
_start:
{
lean_object* v_res_4378_; 
v_res_4378_ = l_Lean_Meta_Grind_reducePreMatchCond(v_e_4369_, v_a_4370_, v_a_4371_, v_a_4372_, v_a_4373_, v_a_4374_, v_a_4375_, v_a_4376_);
lean_dec(v_a_4376_);
lean_dec_ref(v_a_4375_);
lean_dec(v_a_4374_);
lean_dec_ref(v_a_4373_);
lean_dec(v_a_4372_);
lean_dec_ref(v_a_4371_);
lean_dec(v_a_4370_);
return v_res_4378_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__0_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_(void){
_start:
{
lean_object* v___x_4379_; 
v___x_4379_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_4379_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__1_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_(void){
_start:
{
lean_object* v___x_4380_; 
v___x_4380_ = lean_mk_string_unchecked("reducePreMatchCond", 18, 18);
return v___x_4380_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_(void){
_start:
{
lean_object* v___x_4381_; lean_object* v___x_4382_; lean_object* v___x_4383_; lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4381_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__1_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_, &l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__1_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once, _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__1_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_);
v___x_4382_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__1, &l_Lean_Meta_Grind_markAsMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__1);
v___x_4383_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__0_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_, &l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__0_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once, _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__0_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_);
v___x_4384_ = lean_obj_once(&l_Lean_Meta_Grind_markAsMatchCond___closed__0, &l_Lean_Meta_Grind_markAsMatchCond___closed__0_once, _init_l_Lean_Meta_Grind_markAsMatchCond___closed__0);
v___x_4385_ = l_Lean_Name_mkStr4(v___x_4384_, v___x_4383_, v___x_4382_, v___x_4381_);
return v___x_4385_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__3_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_(void){
_start:
{
lean_object* v___x_4386_; lean_object* v___x_4387_; lean_object* v___x_4388_; 
v___x_4386_ = lean_unsigned_to_nat(1u);
v___x_4387_ = lean_obj_once(&l_Lean_Meta_Grind_markAsPreMatchCond___closed__1, &l_Lean_Meta_Grind_markAsPreMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__1);
v___x_4388_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4388_, 0, v___x_4387_);
lean_ctor_set(v___x_4388_, 1, v___x_4386_);
return v___x_4388_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__4_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_(void){
_start:
{
lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; 
v___x_4389_ = lean_box(0);
v___x_4390_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__3_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_, &l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__3_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once, _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__3_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_);
v___x_4391_ = lean_unsigned_to_nat(2u);
v___x_4392_ = lean_mk_empty_array_with_capacity(v___x_4391_);
v___x_4393_ = lean_array_push(v___x_4392_, v___x_4390_);
v___x_4394_ = lean_array_push(v___x_4393_, v___x_4389_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_(){
_start:
{
lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; 
v___x_4396_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_, &l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once, _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_);
v___x_4397_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__4_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_, &l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__4_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once, _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__4_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_);
v___x_4398_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_reducePreMatchCond___boxed), 9, 0);
v___x_4399_ = l_Lean_Meta_Simp_registerBuiltinDSimproc(v___x_4396_, v___x_4397_, v___x_4398_);
return v___x_4399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10____boxed(lean_object* v_a_4400_){
_start:
{
lean_object* v_res_4401_; 
v_res_4401_ = l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_();
return v_res_4401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addPreMatchCondSimproc(lean_object* v_s_4402_, lean_object* v_a_4403_, lean_object* v_a_4404_){
_start:
{
lean_object* v___x_4406_; uint8_t v___x_4407_; lean_object* v___x_4408_; 
v___x_4406_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_, &l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10__once, _init_l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50___closed__2_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_);
v___x_4407_ = 0;
v___x_4408_ = l_Lean_Meta_Simp_Simprocs_add(v_s_4402_, v___x_4406_, v___x_4407_, v_a_4403_, v_a_4404_);
return v___x_4408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addPreMatchCondSimproc___boxed(lean_object* v_s_4409_, lean_object* v_a_4410_, lean_object* v_a_4411_, lean_object* v_a_4412_){
_start:
{
lean_object* v_res_4413_; 
v_res_4413_ = l_Lean_Meta_Grind_addPreMatchCondSimproc(v_s_4409_, v_a_4410_, v_a_4411_);
lean_dec(v_a_4411_);
lean_dec_ref(v_a_4410_);
return v_res_4413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__0(lean_object* v_e_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_){
_start:
{
lean_object* v___x_4424_; uint8_t v___x_4425_; 
lean_inc_ref(v_e_4414_);
v___x_4424_ = l_Lean_Expr_cleanupAnnotations(v_e_4414_);
v___x_4425_ = l_Lean_Expr_isApp(v___x_4424_);
if (v___x_4425_ == 0)
{
lean_dec_ref(v___x_4424_);
goto v___jp_4420_;
}
else
{
lean_object* v_arg_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; uint8_t v___x_4429_; 
v_arg_4426_ = lean_ctor_get(v___x_4424_, 1);
lean_inc_ref(v_arg_4426_);
v___x_4427_ = l_Lean_Expr_appFnCleanup___redArg(v___x_4424_);
v___x_4428_ = lean_obj_once(&l_Lean_Meta_Grind_markAsPreMatchCond___closed__1, &l_Lean_Meta_Grind_markAsPreMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_markAsPreMatchCond___closed__1);
v___x_4429_ = l_Lean_Expr_isConstOf(v___x_4427_, v___x_4428_);
lean_dec_ref(v___x_4427_);
if (v___x_4429_ == 0)
{
lean_dec_ref(v_arg_4426_);
goto v___jp_4420_;
}
else
{
lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; 
lean_dec_ref(v_e_4414_);
v___x_4430_ = l_Lean_Meta_Grind_markAsMatchCond(v_arg_4426_);
v___x_4431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4430_);
v___x_4432_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4432_, 0, v___x_4431_);
v___x_4433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4433_, 0, v___x_4432_);
return v___x_4433_;
}
}
v___jp_4420_:
{
lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; 
v___x_4421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4421_, 0, v_e_4414_);
v___x_4422_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4422_, 0, v___x_4421_);
v___x_4423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4422_);
return v___x_4423_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__0___boxed(lean_object* v_e_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_){
_start:
{
lean_object* v_res_4440_; 
v_res_4440_ = l_Lean_Meta_Grind_replacePreMatchCond___lam__0(v_e_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_);
lean_dec(v___y_4438_);
lean_dec_ref(v___y_4437_);
lean_dec(v___y_4436_);
lean_dec_ref(v___y_4435_);
return v_res_4440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__1(lean_object* v_e_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
lean_object* v___x_4447_; lean_object* v___x_4448_; 
v___x_4447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4447_, 0, v_e_4441_);
v___x_4448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4447_);
return v___x_4448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___lam__1___boxed(lean_object* v_e_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_){
_start:
{
lean_object* v_res_4455_; 
v_res_4455_ = l_Lean_Meta_Grind_replacePreMatchCond___lam__1(v_e_4449_, v___y_4450_, v___y_4451_, v___y_4452_, v___y_4453_);
lean_dec(v___y_4453_);
lean_dec_ref(v___y_4452_);
lean_dec(v___y_4451_);
lean_dec_ref(v___y_4450_);
return v_res_4455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___redArg(lean_object* v_x_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v___y_4464_; lean_object* v___y_4474_; lean_object* v___y_4475_; lean_object* v___y_4476_; lean_object* v___y_4477_; lean_object* v___y_4478_; lean_object* v___y_4479_; lean_object* v___y_4480_; lean_object* v___y_4481_; lean_object* v___y_4482_; lean_object* v___y_4483_; lean_object* v___y_4484_; lean_object* v___y_4485_; uint8_t v___y_4486_; lean_object* v___y_4487_; lean_object* v___y_4488_; uint8_t v___y_4489_; lean_object* v_fileName_4494_; lean_object* v_fileMap_4495_; lean_object* v_options_4496_; lean_object* v_currRecDepth_4497_; lean_object* v_maxRecDepth_4498_; lean_object* v_ref_4499_; lean_object* v_currNamespace_4500_; lean_object* v_openDecls_4501_; lean_object* v_initHeartbeats_4502_; lean_object* v_maxHeartbeats_4503_; lean_object* v_quotContext_4504_; lean_object* v_currMacroScope_4505_; uint8_t v_diag_4506_; lean_object* v_cancelTk_x3f_4507_; uint8_t v_suppressElabErrors_4508_; lean_object* v_inheritedTraceOptions_4509_; 
v_fileName_4494_ = lean_ctor_get(v___y_4460_, 0);
v_fileMap_4495_ = lean_ctor_get(v___y_4460_, 1);
v_options_4496_ = lean_ctor_get(v___y_4460_, 2);
v_currRecDepth_4497_ = lean_ctor_get(v___y_4460_, 3);
v_maxRecDepth_4498_ = lean_ctor_get(v___y_4460_, 4);
v_ref_4499_ = lean_ctor_get(v___y_4460_, 5);
v_currNamespace_4500_ = lean_ctor_get(v___y_4460_, 6);
v_openDecls_4501_ = lean_ctor_get(v___y_4460_, 7);
v_initHeartbeats_4502_ = lean_ctor_get(v___y_4460_, 8);
v_maxHeartbeats_4503_ = lean_ctor_get(v___y_4460_, 9);
v_quotContext_4504_ = lean_ctor_get(v___y_4460_, 10);
v_currMacroScope_4505_ = lean_ctor_get(v___y_4460_, 11);
v_diag_4506_ = lean_ctor_get_uint8(v___y_4460_, sizeof(void*)*14);
v_cancelTk_x3f_4507_ = lean_ctor_get(v___y_4460_, 12);
v_suppressElabErrors_4508_ = lean_ctor_get_uint8(v___y_4460_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_4509_ = lean_ctor_get(v___y_4460_, 13);
if (lean_obj_tag(v_cancelTk_x3f_4507_) == 1)
{
lean_object* v_val_4515_; uint8_t v___x_4516_; 
v_val_4515_ = lean_ctor_get(v_cancelTk_x3f_4507_, 0);
v___x_4516_ = l_IO_CancelToken_isSet(v_val_4515_);
if (v___x_4516_ == 0)
{
goto v___jp_4510_;
}
else
{
lean_object* v___x_4517_; lean_object* v_a_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4525_; 
lean_dec_ref(v_x_4456_);
v___x_4517_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_4518_ = lean_ctor_get(v___x_4517_, 0);
v_isSharedCheck_4525_ = !lean_is_exclusive(v___x_4517_);
if (v_isSharedCheck_4525_ == 0)
{
v___x_4520_ = v___x_4517_;
v_isShared_4521_ = v_isSharedCheck_4525_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_a_4518_);
lean_dec(v___x_4517_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4525_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v___x_4523_; 
if (v_isShared_4521_ == 0)
{
v___x_4523_ = v___x_4520_;
goto v_reusejp_4522_;
}
else
{
lean_object* v_reuseFailAlloc_4524_; 
v_reuseFailAlloc_4524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4524_, 0, v_a_4518_);
v___x_4523_ = v_reuseFailAlloc_4524_;
goto v_reusejp_4522_;
}
v_reusejp_4522_:
{
return v___x_4523_;
}
}
}
}
else
{
goto v___jp_4510_;
}
v___jp_4463_:
{
if (lean_obj_tag(v___y_4464_) == 0)
{
return v___y_4464_;
}
else
{
lean_object* v_a_4465_; lean_object* v___x_4467_; uint8_t v_isShared_4468_; uint8_t v_isSharedCheck_4472_; 
v_a_4465_ = lean_ctor_get(v___y_4464_, 0);
v_isSharedCheck_4472_ = !lean_is_exclusive(v___y_4464_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4467_ = v___y_4464_;
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
else
{
lean_inc(v_a_4465_);
lean_dec(v___y_4464_);
v___x_4467_ = lean_box(0);
v_isShared_4468_ = v_isSharedCheck_4472_;
goto v_resetjp_4466_;
}
v_resetjp_4466_:
{
lean_object* v___x_4470_; 
if (v_isShared_4468_ == 0)
{
v___x_4470_ = v___x_4467_;
goto v_reusejp_4469_;
}
else
{
lean_object* v_reuseFailAlloc_4471_; 
v_reuseFailAlloc_4471_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4471_, 0, v_a_4465_);
v___x_4470_ = v_reuseFailAlloc_4471_;
goto v_reusejp_4469_;
}
v_reusejp_4469_:
{
return v___x_4470_;
}
}
}
}
v___jp_4473_:
{
lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; 
v___x_4490_ = lean_unsigned_to_nat(1u);
v___x_4491_ = lean_nat_add(v___y_4475_, v___x_4490_);
lean_inc_ref(v___y_4483_);
lean_inc(v___y_4481_);
lean_inc(v___y_4474_);
lean_inc(v___y_4485_);
lean_inc(v___y_4480_);
lean_inc(v___y_4477_);
lean_inc(v___y_4488_);
lean_inc(v___y_4478_);
lean_inc(v___y_4479_);
lean_inc_ref(v___y_4482_);
lean_inc_ref(v___y_4487_);
lean_inc_ref(v___y_4476_);
v___x_4492_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_4492_, 0, v___y_4476_);
lean_ctor_set(v___x_4492_, 1, v___y_4487_);
lean_ctor_set(v___x_4492_, 2, v___y_4482_);
lean_ctor_set(v___x_4492_, 3, v___x_4491_);
lean_ctor_set(v___x_4492_, 4, v___y_4479_);
lean_ctor_set(v___x_4492_, 5, v___y_4484_);
lean_ctor_set(v___x_4492_, 6, v___y_4478_);
lean_ctor_set(v___x_4492_, 7, v___y_4488_);
lean_ctor_set(v___x_4492_, 8, v___y_4477_);
lean_ctor_set(v___x_4492_, 9, v___y_4480_);
lean_ctor_set(v___x_4492_, 10, v___y_4485_);
lean_ctor_set(v___x_4492_, 11, v___y_4474_);
lean_ctor_set(v___x_4492_, 12, v___y_4481_);
lean_ctor_set(v___x_4492_, 13, v___y_4483_);
lean_ctor_set_uint8(v___x_4492_, sizeof(void*)*14, v___y_4486_);
lean_ctor_set_uint8(v___x_4492_, sizeof(void*)*14 + 1, v___y_4489_);
lean_inc(v___y_4461_);
lean_inc(v___y_4459_);
lean_inc_ref(v___y_4458_);
lean_inc(v___y_4457_);
v___x_4493_ = lean_apply_6(v_x_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___x_4492_, v___y_4461_, lean_box(0));
v___y_4464_ = v___x_4493_;
goto v___jp_4463_;
}
v___jp_4510_:
{
lean_object* v___x_4511_; uint8_t v___x_4512_; 
v___x_4511_ = lean_unsigned_to_nat(0u);
v___x_4512_ = lean_nat_dec_eq(v_maxRecDepth_4498_, v___x_4511_);
if (v___x_4512_ == 0)
{
uint8_t v___x_4513_; 
v___x_4513_ = lean_nat_dec_eq(v_currRecDepth_4497_, v_maxRecDepth_4498_);
if (v___x_4513_ == 0)
{
lean_inc(v_ref_4499_);
v___y_4474_ = v_currMacroScope_4505_;
v___y_4475_ = v_currRecDepth_4497_;
v___y_4476_ = v_fileName_4494_;
v___y_4477_ = v_initHeartbeats_4502_;
v___y_4478_ = v_currNamespace_4500_;
v___y_4479_ = v_maxRecDepth_4498_;
v___y_4480_ = v_maxHeartbeats_4503_;
v___y_4481_ = v_cancelTk_x3f_4507_;
v___y_4482_ = v_options_4496_;
v___y_4483_ = v_inheritedTraceOptions_4509_;
v___y_4484_ = v_ref_4499_;
v___y_4485_ = v_quotContext_4504_;
v___y_4486_ = v_diag_4506_;
v___y_4487_ = v_fileMap_4495_;
v___y_4488_ = v_openDecls_4501_;
v___y_4489_ = v_suppressElabErrors_4508_;
goto v___jp_4473_;
}
else
{
lean_object* v___x_4514_; 
lean_dec_ref(v_x_4456_);
lean_inc(v_ref_4499_);
v___x_4514_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_4499_);
v___y_4464_ = v___x_4514_;
goto v___jp_4463_;
}
}
else
{
lean_inc(v_ref_4499_);
v___y_4474_ = v_currMacroScope_4505_;
v___y_4475_ = v_currRecDepth_4497_;
v___y_4476_ = v_fileName_4494_;
v___y_4477_ = v_initHeartbeats_4502_;
v___y_4478_ = v_currNamespace_4500_;
v___y_4479_ = v_maxRecDepth_4498_;
v___y_4480_ = v_maxHeartbeats_4503_;
v___y_4481_ = v_cancelTk_x3f_4507_;
v___y_4482_ = v_options_4496_;
v___y_4483_ = v_inheritedTraceOptions_4509_;
v___y_4484_ = v_ref_4499_;
v___y_4485_ = v_quotContext_4504_;
v___y_4486_ = v_diag_4506_;
v___y_4487_ = v_fileMap_4495_;
v___y_4488_ = v_openDecls_4501_;
v___y_4489_ = v_suppressElabErrors_4508_;
goto v___jp_4473_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_x_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_, lean_object* v___y_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_){
_start:
{
lean_object* v_res_4533_; 
v_res_4533_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___redArg(v_x_4526_, v___y_4527_, v___y_4528_, v___y_4529_, v___y_4530_, v___y_4531_);
lean_dec(v___y_4531_);
lean_dec_ref(v___y_4530_);
lean_dec(v___y_4529_);
lean_dec_ref(v___y_4528_);
lean_dec(v___y_4527_);
return v_res_4533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__1(lean_object* v_pre_4534_, lean_object* v_post_4535_, size_t v_sz_4536_, size_t v_i_4537_, lean_object* v_bs_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_){
_start:
{
uint8_t v___x_4545_; 
v___x_4545_ = lean_usize_dec_lt(v_i_4537_, v_sz_4536_);
if (v___x_4545_ == 0)
{
lean_object* v___x_4546_; 
lean_dec_ref(v_post_4535_);
lean_dec_ref(v_pre_4534_);
v___x_4546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4546_, 0, v_bs_4538_);
return v___x_4546_;
}
else
{
lean_object* v_v_4547_; lean_object* v___x_4548_; 
v_v_4547_ = lean_array_uget_borrowed(v_bs_4538_, v_i_4537_);
lean_inc(v_v_4547_);
lean_inc_ref(v_post_4535_);
lean_inc_ref(v_pre_4534_);
v___x_4548_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4534_, v_post_4535_, v_v_4547_, v___y_4539_, v___y_4540_, v___y_4541_, v___y_4542_, v___y_4543_);
if (lean_obj_tag(v___x_4548_) == 0)
{
lean_object* v_a_4549_; lean_object* v___x_4550_; lean_object* v_bs_x27_4551_; size_t v___x_4552_; size_t v___x_4553_; lean_object* v___x_4554_; 
v_a_4549_ = lean_ctor_get(v___x_4548_, 0);
lean_inc(v_a_4549_);
lean_dec_ref(v___x_4548_);
v___x_4550_ = lean_unsigned_to_nat(0u);
v_bs_x27_4551_ = lean_array_uset(v_bs_4538_, v_i_4537_, v___x_4550_);
v___x_4552_ = ((size_t)1ULL);
v___x_4553_ = lean_usize_add(v_i_4537_, v___x_4552_);
v___x_4554_ = lean_array_uset(v_bs_x27_4551_, v_i_4537_, v_a_4549_);
v_i_4537_ = v___x_4553_;
v_bs_4538_ = v___x_4554_;
goto _start;
}
else
{
lean_object* v_a_4556_; lean_object* v___x_4558_; uint8_t v_isShared_4559_; uint8_t v_isSharedCheck_4563_; 
lean_dec_ref(v_bs_4538_);
lean_dec_ref(v_post_4535_);
lean_dec_ref(v_pre_4534_);
v_a_4556_ = lean_ctor_get(v___x_4548_, 0);
v_isSharedCheck_4563_ = !lean_is_exclusive(v___x_4548_);
if (v_isSharedCheck_4563_ == 0)
{
v___x_4558_ = v___x_4548_;
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
else
{
lean_inc(v_a_4556_);
lean_dec(v___x_4548_);
v___x_4558_ = lean_box(0);
v_isShared_4559_ = v_isSharedCheck_4563_;
goto v_resetjp_4557_;
}
v_resetjp_4557_:
{
lean_object* v___x_4561_; 
if (v_isShared_4559_ == 0)
{
v___x_4561_ = v___x_4558_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4562_; 
v_reuseFailAlloc_4562_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4562_, 0, v_a_4556_);
v___x_4561_ = v_reuseFailAlloc_4562_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
return v___x_4561_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__3(lean_object* v_pre_4564_, lean_object* v_post_4565_, lean_object* v_x_4566_, lean_object* v_x_4567_, lean_object* v_x_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_){
_start:
{
if (lean_obj_tag(v_x_4566_) == 5)
{
lean_object* v_fn_4575_; lean_object* v_arg_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4579_; 
v_fn_4575_ = lean_ctor_get(v_x_4566_, 0);
lean_inc_ref(v_fn_4575_);
v_arg_4576_ = lean_ctor_get(v_x_4566_, 1);
lean_inc_ref(v_arg_4576_);
lean_dec_ref(v_x_4566_);
v___x_4577_ = lean_array_set(v_x_4567_, v_x_4568_, v_arg_4576_);
v___x_4578_ = lean_unsigned_to_nat(1u);
v___x_4579_ = lean_nat_sub(v_x_4568_, v___x_4578_);
lean_dec(v_x_4568_);
v_x_4566_ = v_fn_4575_;
v_x_4567_ = v___x_4577_;
v_x_4568_ = v___x_4579_;
goto _start;
}
else
{
lean_object* v___x_4581_; 
lean_dec(v_x_4568_);
lean_inc_ref(v_post_4565_);
lean_inc_ref(v_pre_4564_);
v___x_4581_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4564_, v_post_4565_, v_x_4566_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_);
if (lean_obj_tag(v___x_4581_) == 0)
{
lean_object* v_a_4582_; size_t v_sz_4583_; size_t v___x_4584_; lean_object* v___x_4585_; 
v_a_4582_ = lean_ctor_get(v___x_4581_, 0);
lean_inc(v_a_4582_);
lean_dec_ref(v___x_4581_);
v_sz_4583_ = lean_array_size(v_x_4567_);
v___x_4584_ = ((size_t)0ULL);
lean_inc_ref(v_post_4565_);
lean_inc_ref(v_pre_4564_);
v___x_4585_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__1(v_pre_4564_, v_post_4565_, v_sz_4583_, v___x_4584_, v_x_4567_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_);
if (lean_obj_tag(v___x_4585_) == 0)
{
lean_object* v_a_4586_; lean_object* v___x_4587_; lean_object* v___x_4588_; 
v_a_4586_ = lean_ctor_get(v___x_4585_, 0);
lean_inc(v_a_4586_);
lean_dec_ref(v___x_4585_);
v___x_4587_ = l_Lean_mkAppN(v_a_4582_, v_a_4586_);
lean_dec(v_a_4586_);
v___x_4588_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4564_, v_post_4565_, v___x_4587_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_, v___y_4573_);
return v___x_4588_;
}
else
{
lean_object* v_a_4589_; lean_object* v___x_4591_; uint8_t v_isShared_4592_; uint8_t v_isSharedCheck_4596_; 
lean_dec(v_a_4582_);
lean_dec_ref(v_post_4565_);
lean_dec_ref(v_pre_4564_);
v_a_4589_ = lean_ctor_get(v___x_4585_, 0);
v_isSharedCheck_4596_ = !lean_is_exclusive(v___x_4585_);
if (v_isSharedCheck_4596_ == 0)
{
v___x_4591_ = v___x_4585_;
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
else
{
lean_inc(v_a_4589_);
lean_dec(v___x_4585_);
v___x_4591_ = lean_box(0);
v_isShared_4592_ = v_isSharedCheck_4596_;
goto v_resetjp_4590_;
}
v_resetjp_4590_:
{
lean_object* v___x_4594_; 
if (v_isShared_4592_ == 0)
{
v___x_4594_ = v___x_4591_;
goto v_reusejp_4593_;
}
else
{
lean_object* v_reuseFailAlloc_4595_; 
v_reuseFailAlloc_4595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4595_, 0, v_a_4589_);
v___x_4594_ = v_reuseFailAlloc_4595_;
goto v_reusejp_4593_;
}
v_reusejp_4593_:
{
return v___x_4594_;
}
}
}
}
else
{
lean_dec_ref(v_x_4567_);
lean_dec_ref(v_post_4565_);
lean_dec_ref(v_pre_4564_);
return v___x_4581_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___lam__1(lean_object* v___x_4597_, lean_object* v_pre_4598_, lean_object* v_e_4599_, lean_object* v_post_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_){
_start:
{
lean_object* v___y_4608_; lean_object* v___y_4609_; lean_object* v___y_4610_; lean_object* v___y_4611_; lean_object* v___y_4612_; lean_object* v___y_4613_; uint8_t v___y_4614_; uint8_t v___y_4615_; lean_object* v___y_4625_; lean_object* v___y_4626_; uint8_t v___y_4627_; lean_object* v___y_4628_; lean_object* v___y_4629_; uint8_t v___y_4630_; lean_object* v___y_4638_; lean_object* v___y_4639_; lean_object* v___y_4640_; uint8_t v___y_4641_; lean_object* v___y_4642_; uint8_t v___y_4643_; lean_object* v___x_4650_; 
v___x_4650_ = l_Lean_Core_checkSystem(v___x_4597_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4650_) == 0)
{
lean_object* v___x_4651_; 
lean_dec_ref(v___x_4650_);
lean_inc_ref(v_pre_4598_);
lean_inc(v___y_4605_);
lean_inc_ref(v___y_4604_);
lean_inc(v___y_4603_);
lean_inc_ref(v___y_4602_);
lean_inc_ref(v_e_4599_);
v___x_4651_ = lean_apply_6(v_pre_4598_, v_e_4599_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_, lean_box(0));
if (lean_obj_tag(v___x_4651_) == 0)
{
lean_object* v_a_4652_; lean_object* v___x_4654_; uint8_t v_isShared_4655_; uint8_t v_isSharedCheck_4741_; 
v_a_4652_ = lean_ctor_get(v___x_4651_, 0);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4651_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4654_ = v___x_4651_;
v_isShared_4655_ = v_isSharedCheck_4741_;
goto v_resetjp_4653_;
}
else
{
lean_inc(v_a_4652_);
lean_dec(v___x_4651_);
v___x_4654_ = lean_box(0);
v_isShared_4655_ = v_isSharedCheck_4741_;
goto v_resetjp_4653_;
}
v_resetjp_4653_:
{
lean_object* v___y_4657_; 
switch(lean_obj_tag(v_a_4652_))
{
case 0:
{
lean_object* v_e_4731_; lean_object* v___x_4733_; 
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_e_4599_);
lean_dec_ref(v_pre_4598_);
v_e_4731_ = lean_ctor_get(v_a_4652_, 0);
lean_inc_ref(v_e_4731_);
lean_dec_ref(v_a_4652_);
if (v_isShared_4655_ == 0)
{
lean_ctor_set(v___x_4654_, 0, v_e_4731_);
v___x_4733_ = v___x_4654_;
goto v_reusejp_4732_;
}
else
{
lean_object* v_reuseFailAlloc_4734_; 
v_reuseFailAlloc_4734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4734_, 0, v_e_4731_);
v___x_4733_ = v_reuseFailAlloc_4734_;
goto v_reusejp_4732_;
}
v_reusejp_4732_:
{
return v___x_4733_;
}
}
case 1:
{
lean_object* v_e_4735_; lean_object* v___x_4736_; 
lean_del_object(v___x_4654_);
lean_dec_ref(v_e_4599_);
v_e_4735_ = lean_ctor_get(v_a_4652_, 0);
lean_inc_ref(v_e_4735_);
lean_dec_ref(v_a_4652_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4736_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_e_4735_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4736_) == 0)
{
lean_object* v_a_4737_; lean_object* v___x_4738_; 
v_a_4737_ = lean_ctor_get(v___x_4736_, 0);
lean_inc(v_a_4737_);
lean_dec_ref(v___x_4736_);
v___x_4738_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v_a_4737_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4738_;
}
else
{
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4736_;
}
}
default: 
{
lean_object* v_e_x3f_4739_; 
lean_del_object(v___x_4654_);
v_e_x3f_4739_ = lean_ctor_get(v_a_4652_, 0);
lean_inc(v_e_x3f_4739_);
lean_dec_ref(v_a_4652_);
if (lean_obj_tag(v_e_x3f_4739_) == 0)
{
v___y_4657_ = v_e_4599_;
goto v___jp_4656_;
}
else
{
lean_object* v_val_4740_; 
lean_dec_ref(v_e_4599_);
v_val_4740_ = lean_ctor_get(v_e_x3f_4739_, 0);
lean_inc(v_val_4740_);
lean_dec_ref(v_e_x3f_4739_);
v___y_4657_ = v_val_4740_;
goto v___jp_4656_;
}
}
}
v___jp_4656_:
{
switch(lean_obj_tag(v___y_4657_))
{
case 7:
{
lean_object* v_binderName_4658_; lean_object* v_binderType_4659_; lean_object* v_body_4660_; uint8_t v_binderInfo_4661_; lean_object* v___x_4662_; 
v_binderName_4658_ = lean_ctor_get(v___y_4657_, 0);
lean_inc(v_binderName_4658_);
v_binderType_4659_ = lean_ctor_get(v___y_4657_, 1);
v_body_4660_ = lean_ctor_get(v___y_4657_, 2);
v_binderInfo_4661_ = lean_ctor_get_uint8(v___y_4657_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_4659_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4662_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_binderType_4659_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4662_) == 0)
{
lean_object* v_a_4663_; lean_object* v___x_4664_; 
v_a_4663_ = lean_ctor_get(v___x_4662_, 0);
lean_inc(v_a_4663_);
lean_dec_ref(v___x_4662_);
lean_inc_ref(v_body_4660_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4664_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_body_4660_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4664_) == 0)
{
lean_object* v_a_4665_; size_t v___x_4666_; size_t v___x_4667_; uint8_t v___x_4668_; 
v_a_4665_ = lean_ctor_get(v___x_4664_, 0);
lean_inc(v_a_4665_);
lean_dec_ref(v___x_4664_);
v___x_4666_ = lean_ptr_addr(v_binderType_4659_);
v___x_4667_ = lean_ptr_addr(v_a_4663_);
v___x_4668_ = lean_usize_dec_eq(v___x_4666_, v___x_4667_);
if (v___x_4668_ == 0)
{
v___y_4638_ = v_binderName_4658_;
v___y_4639_ = v_a_4665_;
v___y_4640_ = v_a_4663_;
v___y_4641_ = v_binderInfo_4661_;
v___y_4642_ = v___y_4657_;
v___y_4643_ = v___x_4668_;
goto v___jp_4637_;
}
else
{
size_t v___x_4669_; size_t v___x_4670_; uint8_t v___x_4671_; 
v___x_4669_ = lean_ptr_addr(v_body_4660_);
v___x_4670_ = lean_ptr_addr(v_a_4665_);
v___x_4671_ = lean_usize_dec_eq(v___x_4669_, v___x_4670_);
v___y_4638_ = v_binderName_4658_;
v___y_4639_ = v_a_4665_;
v___y_4640_ = v_a_4663_;
v___y_4641_ = v_binderInfo_4661_;
v___y_4642_ = v___y_4657_;
v___y_4643_ = v___x_4671_;
goto v___jp_4637_;
}
}
else
{
lean_dec(v_a_4663_);
lean_dec(v_binderName_4658_);
lean_dec_ref(v___y_4657_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4664_;
}
}
else
{
lean_dec(v_binderName_4658_);
lean_dec_ref(v___y_4657_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4662_;
}
}
case 6:
{
lean_object* v_binderName_4672_; lean_object* v_binderType_4673_; lean_object* v_body_4674_; uint8_t v_binderInfo_4675_; lean_object* v___x_4676_; 
v_binderName_4672_ = lean_ctor_get(v___y_4657_, 0);
lean_inc(v_binderName_4672_);
v_binderType_4673_ = lean_ctor_get(v___y_4657_, 1);
v_body_4674_ = lean_ctor_get(v___y_4657_, 2);
v_binderInfo_4675_ = lean_ctor_get_uint8(v___y_4657_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_4673_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4676_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_binderType_4673_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4676_) == 0)
{
lean_object* v_a_4677_; lean_object* v___x_4678_; 
v_a_4677_ = lean_ctor_get(v___x_4676_, 0);
lean_inc(v_a_4677_);
lean_dec_ref(v___x_4676_);
lean_inc_ref(v_body_4674_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4678_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_body_4674_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4678_) == 0)
{
lean_object* v_a_4679_; size_t v___x_4680_; size_t v___x_4681_; uint8_t v___x_4682_; 
v_a_4679_ = lean_ctor_get(v___x_4678_, 0);
lean_inc(v_a_4679_);
lean_dec_ref(v___x_4678_);
v___x_4680_ = lean_ptr_addr(v_binderType_4673_);
v___x_4681_ = lean_ptr_addr(v_a_4677_);
v___x_4682_ = lean_usize_dec_eq(v___x_4680_, v___x_4681_);
if (v___x_4682_ == 0)
{
v___y_4625_ = v_a_4677_;
v___y_4626_ = v_a_4679_;
v___y_4627_ = v_binderInfo_4675_;
v___y_4628_ = v_binderName_4672_;
v___y_4629_ = v___y_4657_;
v___y_4630_ = v___x_4682_;
goto v___jp_4624_;
}
else
{
size_t v___x_4683_; size_t v___x_4684_; uint8_t v___x_4685_; 
v___x_4683_ = lean_ptr_addr(v_body_4674_);
v___x_4684_ = lean_ptr_addr(v_a_4679_);
v___x_4685_ = lean_usize_dec_eq(v___x_4683_, v___x_4684_);
v___y_4625_ = v_a_4677_;
v___y_4626_ = v_a_4679_;
v___y_4627_ = v_binderInfo_4675_;
v___y_4628_ = v_binderName_4672_;
v___y_4629_ = v___y_4657_;
v___y_4630_ = v___x_4685_;
goto v___jp_4624_;
}
}
else
{
lean_dec(v_a_4677_);
lean_dec(v_binderName_4672_);
lean_dec_ref(v___y_4657_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4678_;
}
}
else
{
lean_dec_ref(v___y_4657_);
lean_dec(v_binderName_4672_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4676_;
}
}
case 8:
{
lean_object* v_declName_4686_; lean_object* v_type_4687_; lean_object* v_value_4688_; lean_object* v_body_4689_; uint8_t v_nondep_4690_; lean_object* v___x_4691_; 
v_declName_4686_ = lean_ctor_get(v___y_4657_, 0);
lean_inc(v_declName_4686_);
v_type_4687_ = lean_ctor_get(v___y_4657_, 1);
v_value_4688_ = lean_ctor_get(v___y_4657_, 2);
v_body_4689_ = lean_ctor_get(v___y_4657_, 3);
lean_inc_ref(v_body_4689_);
v_nondep_4690_ = lean_ctor_get_uint8(v___y_4657_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_4687_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4691_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_type_4687_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4691_) == 0)
{
lean_object* v_a_4692_; lean_object* v___x_4693_; 
v_a_4692_ = lean_ctor_get(v___x_4691_, 0);
lean_inc(v_a_4692_);
lean_dec_ref(v___x_4691_);
lean_inc_ref(v_value_4688_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4693_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_value_4688_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4693_) == 0)
{
lean_object* v_a_4694_; lean_object* v___x_4695_; 
v_a_4694_ = lean_ctor_get(v___x_4693_, 0);
lean_inc(v_a_4694_);
lean_dec_ref(v___x_4693_);
lean_inc_ref(v_body_4689_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4695_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_body_4689_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4695_) == 0)
{
lean_object* v_a_4696_; size_t v___x_4697_; size_t v___x_4698_; uint8_t v___x_4699_; 
v_a_4696_ = lean_ctor_get(v___x_4695_, 0);
lean_inc(v_a_4696_);
lean_dec_ref(v___x_4695_);
v___x_4697_ = lean_ptr_addr(v_type_4687_);
v___x_4698_ = lean_ptr_addr(v_a_4692_);
v___x_4699_ = lean_usize_dec_eq(v___x_4697_, v___x_4698_);
if (v___x_4699_ == 0)
{
v___y_4608_ = v_a_4696_;
v___y_4609_ = v_declName_4686_;
v___y_4610_ = v_a_4692_;
v___y_4611_ = v_body_4689_;
v___y_4612_ = v_a_4694_;
v___y_4613_ = v___y_4657_;
v___y_4614_ = v_nondep_4690_;
v___y_4615_ = v___x_4699_;
goto v___jp_4607_;
}
else
{
size_t v___x_4700_; size_t v___x_4701_; uint8_t v___x_4702_; 
v___x_4700_ = lean_ptr_addr(v_value_4688_);
v___x_4701_ = lean_ptr_addr(v_a_4694_);
v___x_4702_ = lean_usize_dec_eq(v___x_4700_, v___x_4701_);
v___y_4608_ = v_a_4696_;
v___y_4609_ = v_declName_4686_;
v___y_4610_ = v_a_4692_;
v___y_4611_ = v_body_4689_;
v___y_4612_ = v_a_4694_;
v___y_4613_ = v___y_4657_;
v___y_4614_ = v_nondep_4690_;
v___y_4615_ = v___x_4702_;
goto v___jp_4607_;
}
}
else
{
lean_dec(v_a_4694_);
lean_dec(v_a_4692_);
lean_dec_ref(v_body_4689_);
lean_dec_ref(v___y_4657_);
lean_dec(v_declName_4686_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4695_;
}
}
else
{
lean_dec(v_a_4692_);
lean_dec_ref(v_body_4689_);
lean_dec_ref(v___y_4657_);
lean_dec(v_declName_4686_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4693_;
}
}
else
{
lean_dec_ref(v_body_4689_);
lean_dec(v_declName_4686_);
lean_dec_ref(v___y_4657_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4691_;
}
}
case 5:
{
lean_object* v_dummy_4703_; lean_object* v_nargs_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; 
v_dummy_4703_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__1___closed__0);
v_nargs_4704_ = l_Lean_Expr_getAppNumArgs(v___y_4657_);
lean_inc(v_nargs_4704_);
v___x_4705_ = lean_mk_array(v_nargs_4704_, v_dummy_4703_);
v___x_4706_ = lean_unsigned_to_nat(1u);
v___x_4707_ = lean_nat_sub(v_nargs_4704_, v___x_4706_);
lean_dec(v_nargs_4704_);
v___x_4708_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__3(v_pre_4598_, v_post_4600_, v___y_4657_, v___x_4705_, v___x_4707_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4708_;
}
case 10:
{
lean_object* v_data_4709_; lean_object* v_expr_4710_; lean_object* v___x_4711_; 
v_data_4709_ = lean_ctor_get(v___y_4657_, 0);
v_expr_4710_ = lean_ctor_get(v___y_4657_, 1);
lean_inc_ref(v_expr_4710_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4711_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_expr_4710_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4711_) == 0)
{
lean_object* v_a_4712_; size_t v___x_4713_; size_t v___x_4714_; uint8_t v___x_4715_; 
v_a_4712_ = lean_ctor_get(v___x_4711_, 0);
lean_inc(v_a_4712_);
lean_dec_ref(v___x_4711_);
v___x_4713_ = lean_ptr_addr(v_expr_4710_);
v___x_4714_ = lean_ptr_addr(v_a_4712_);
v___x_4715_ = lean_usize_dec_eq(v___x_4713_, v___x_4714_);
if (v___x_4715_ == 0)
{
lean_object* v___x_4716_; lean_object* v___x_4717_; 
lean_inc(v_data_4709_);
lean_dec_ref(v___y_4657_);
v___x_4716_ = l_Lean_Expr_mdata___override(v_data_4709_, v_a_4712_);
v___x_4717_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4716_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4717_;
}
else
{
lean_object* v___x_4718_; 
lean_dec(v_a_4712_);
v___x_4718_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___y_4657_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4718_;
}
}
else
{
lean_dec_ref(v___y_4657_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4711_;
}
}
case 11:
{
lean_object* v_typeName_4719_; lean_object* v_idx_4720_; lean_object* v_struct_4721_; lean_object* v___x_4722_; 
v_typeName_4719_ = lean_ctor_get(v___y_4657_, 0);
v_idx_4720_ = lean_ctor_get(v___y_4657_, 1);
v_struct_4721_ = lean_ctor_get(v___y_4657_, 2);
lean_inc_ref(v_struct_4721_);
lean_inc_ref(v_post_4600_);
lean_inc_ref(v_pre_4598_);
v___x_4722_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4598_, v_post_4600_, v_struct_4721_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
if (lean_obj_tag(v___x_4722_) == 0)
{
lean_object* v_a_4723_; size_t v___x_4724_; size_t v___x_4725_; uint8_t v___x_4726_; 
v_a_4723_ = lean_ctor_get(v___x_4722_, 0);
lean_inc(v_a_4723_);
lean_dec_ref(v___x_4722_);
v___x_4724_ = lean_ptr_addr(v_struct_4721_);
v___x_4725_ = lean_ptr_addr(v_a_4723_);
v___x_4726_ = lean_usize_dec_eq(v___x_4724_, v___x_4725_);
if (v___x_4726_ == 0)
{
lean_object* v___x_4727_; lean_object* v___x_4728_; 
lean_inc(v_idx_4720_);
lean_inc(v_typeName_4719_);
lean_dec_ref(v___y_4657_);
v___x_4727_ = l_Lean_Expr_proj___override(v_typeName_4719_, v_idx_4720_, v_a_4723_);
v___x_4728_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4727_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4728_;
}
else
{
lean_object* v___x_4729_; 
lean_dec(v_a_4723_);
v___x_4729_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___y_4657_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4729_;
}
}
else
{
lean_dec_ref(v___y_4657_);
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_pre_4598_);
return v___x_4722_;
}
}
default: 
{
lean_object* v___x_4730_; 
v___x_4730_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___y_4657_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4730_;
}
}
}
}
}
else
{
lean_object* v_a_4742_; lean_object* v___x_4744_; uint8_t v_isShared_4745_; uint8_t v_isSharedCheck_4749_; 
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_e_4599_);
lean_dec_ref(v_pre_4598_);
v_a_4742_ = lean_ctor_get(v___x_4651_, 0);
v_isSharedCheck_4749_ = !lean_is_exclusive(v___x_4651_);
if (v_isSharedCheck_4749_ == 0)
{
v___x_4744_ = v___x_4651_;
v_isShared_4745_ = v_isSharedCheck_4749_;
goto v_resetjp_4743_;
}
else
{
lean_inc(v_a_4742_);
lean_dec(v___x_4651_);
v___x_4744_ = lean_box(0);
v_isShared_4745_ = v_isSharedCheck_4749_;
goto v_resetjp_4743_;
}
v_resetjp_4743_:
{
lean_object* v___x_4747_; 
if (v_isShared_4745_ == 0)
{
v___x_4747_ = v___x_4744_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4748_; 
v_reuseFailAlloc_4748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4748_, 0, v_a_4742_);
v___x_4747_ = v_reuseFailAlloc_4748_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
return v___x_4747_;
}
}
}
}
else
{
lean_object* v_a_4750_; lean_object* v___x_4752_; uint8_t v_isShared_4753_; uint8_t v_isSharedCheck_4757_; 
lean_dec_ref(v_post_4600_);
lean_dec_ref(v_e_4599_);
lean_dec_ref(v_pre_4598_);
v_a_4750_ = lean_ctor_get(v___x_4650_, 0);
v_isSharedCheck_4757_ = !lean_is_exclusive(v___x_4650_);
if (v_isSharedCheck_4757_ == 0)
{
v___x_4752_ = v___x_4650_;
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
else
{
lean_inc(v_a_4750_);
lean_dec(v___x_4650_);
v___x_4752_ = lean_box(0);
v_isShared_4753_ = v_isSharedCheck_4757_;
goto v_resetjp_4751_;
}
v_resetjp_4751_:
{
lean_object* v___x_4755_; 
if (v_isShared_4753_ == 0)
{
v___x_4755_ = v___x_4752_;
goto v_reusejp_4754_;
}
else
{
lean_object* v_reuseFailAlloc_4756_; 
v_reuseFailAlloc_4756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4756_, 0, v_a_4750_);
v___x_4755_ = v_reuseFailAlloc_4756_;
goto v_reusejp_4754_;
}
v_reusejp_4754_:
{
return v___x_4755_;
}
}
}
v___jp_4607_:
{
if (v___y_4615_ == 0)
{
lean_object* v___x_4616_; lean_object* v___x_4617_; 
lean_dec_ref(v___y_4613_);
lean_dec_ref(v___y_4611_);
v___x_4616_ = l_Lean_Expr_letE___override(v___y_4609_, v___y_4610_, v___y_4612_, v___y_4608_, v___y_4614_);
v___x_4617_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4616_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4617_;
}
else
{
size_t v___x_4618_; size_t v___x_4619_; uint8_t v___x_4620_; 
v___x_4618_ = lean_ptr_addr(v___y_4611_);
lean_dec_ref(v___y_4611_);
v___x_4619_ = lean_ptr_addr(v___y_4608_);
v___x_4620_ = lean_usize_dec_eq(v___x_4618_, v___x_4619_);
if (v___x_4620_ == 0)
{
lean_object* v___x_4621_; lean_object* v___x_4622_; 
lean_dec_ref(v___y_4613_);
v___x_4621_ = l_Lean_Expr_letE___override(v___y_4609_, v___y_4610_, v___y_4612_, v___y_4608_, v___y_4614_);
v___x_4622_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4621_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4622_;
}
else
{
lean_object* v___x_4623_; 
lean_dec_ref(v___y_4612_);
lean_dec_ref(v___y_4610_);
lean_dec(v___y_4609_);
lean_dec_ref(v___y_4608_);
v___x_4623_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___y_4613_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4623_;
}
}
}
v___jp_4624_:
{
if (v___y_4630_ == 0)
{
lean_object* v___x_4631_; lean_object* v___x_4632_; 
lean_dec_ref(v___y_4629_);
v___x_4631_ = l_Lean_Expr_lam___override(v___y_4628_, v___y_4625_, v___y_4626_, v___y_4627_);
v___x_4632_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4631_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4632_;
}
else
{
uint8_t v___x_4633_; 
v___x_4633_ = l_Lean_instBEqBinderInfo_beq(v___y_4627_, v___y_4627_);
if (v___x_4633_ == 0)
{
lean_object* v___x_4634_; lean_object* v___x_4635_; 
lean_dec_ref(v___y_4629_);
v___x_4634_ = l_Lean_Expr_lam___override(v___y_4628_, v___y_4625_, v___y_4626_, v___y_4627_);
v___x_4635_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4634_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4635_;
}
else
{
lean_object* v___x_4636_; 
lean_dec(v___y_4628_);
lean_dec_ref(v___y_4626_);
lean_dec_ref(v___y_4625_);
v___x_4636_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___y_4629_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4636_;
}
}
}
v___jp_4637_:
{
if (v___y_4643_ == 0)
{
lean_object* v___x_4644_; lean_object* v___x_4645_; 
lean_dec_ref(v___y_4642_);
v___x_4644_ = l_Lean_Expr_forallE___override(v___y_4638_, v___y_4640_, v___y_4639_, v___y_4641_);
v___x_4645_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4644_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4645_;
}
else
{
uint8_t v___x_4646_; 
v___x_4646_ = l_Lean_instBEqBinderInfo_beq(v___y_4641_, v___y_4641_);
if (v___x_4646_ == 0)
{
lean_object* v___x_4647_; lean_object* v___x_4648_; 
lean_dec_ref(v___y_4642_);
v___x_4647_ = l_Lean_Expr_forallE___override(v___y_4638_, v___y_4640_, v___y_4639_, v___y_4641_);
v___x_4648_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___x_4647_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4648_;
}
else
{
lean_object* v___x_4649_; 
lean_dec_ref(v___y_4640_);
lean_dec_ref(v___y_4639_);
lean_dec(v___y_4638_);
v___x_4649_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4598_, v_post_4600_, v___y_4642_, v___y_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_);
return v___x_4649_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___lam__1___boxed(lean_object* v___x_4758_, lean_object* v_pre_4759_, lean_object* v_e_4760_, lean_object* v_post_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_, lean_object* v___y_4764_, lean_object* v___y_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_){
_start:
{
lean_object* v_res_4768_; 
v_res_4768_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___lam__1(v___x_4758_, v_pre_4759_, v_e_4760_, v_post_4761_, v___y_4762_, v___y_4763_, v___y_4764_, v___y_4765_, v___y_4766_);
lean_dec(v___y_4766_);
lean_dec_ref(v___y_4765_);
lean_dec(v___y_4764_);
lean_dec_ref(v___y_4763_);
lean_dec(v___y_4762_);
return v_res_4768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(lean_object* v_pre_4769_, lean_object* v_post_4770_, lean_object* v_e_4771_, lean_object* v_a_4772_, lean_object* v___y_4773_, lean_object* v___y_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_){
_start:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; 
lean_inc(v_a_4772_);
v___x_4778_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4778_, 0, lean_box(0));
lean_closure_set(v___x_4778_, 1, lean_box(0));
lean_closure_set(v___x_4778_, 2, v_a_4772_);
v___x_4779_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0(lean_box(0), v___x_4778_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
if (lean_obj_tag(v___x_4779_) == 0)
{
lean_object* v_a_4780_; lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4811_; 
v_a_4780_ = lean_ctor_get(v___x_4779_, 0);
v_isSharedCheck_4811_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4811_ == 0)
{
v___x_4782_ = v___x_4779_;
v_isShared_4783_ = v_isSharedCheck_4811_;
goto v_resetjp_4781_;
}
else
{
lean_inc(v_a_4780_);
lean_dec(v___x_4779_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4811_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
lean_object* v___x_4784_; 
v___x_4784_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0_spec__3___redArg(v_a_4780_, v_e_4771_);
lean_dec(v_a_4780_);
if (lean_obj_tag(v___x_4784_) == 0)
{
lean_object* v___x_4785_; lean_object* v___f_4786_; lean_object* v___x_4787_; 
lean_del_object(v___x_4782_);
v___x_4785_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___closed__0);
lean_inc_ref(v_e_4771_);
v___f_4786_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___lam__1___boxed), 10, 4);
lean_closure_set(v___f_4786_, 0, v___x_4785_);
lean_closure_set(v___f_4786_, 1, v_pre_4769_);
lean_closure_set(v___f_4786_, 2, v_e_4771_);
lean_closure_set(v___f_4786_, 3, v_post_4770_);
v___x_4787_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___redArg(v___f_4786_, v_a_4772_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
if (lean_obj_tag(v___x_4787_) == 0)
{
lean_object* v_a_4788_; lean_object* v___f_4789_; lean_object* v___x_4790_; 
v_a_4788_ = lean_ctor_get(v___x_4787_, 0);
lean_inc_n(v_a_4788_, 2);
lean_dec_ref(v___x_4787_);
lean_inc(v_a_4772_);
v___f_4789_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4789_, 0, v_a_4772_);
lean_closure_set(v___f_4789_, 1, v_e_4771_);
lean_closure_set(v___f_4789_, 2, v_a_4788_);
v___x_4790_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1_spec__2___lam__0(lean_box(0), v___f_4789_, v___y_4773_, v___y_4774_, v___y_4775_, v___y_4776_);
if (lean_obj_tag(v___x_4790_) == 0)
{
lean_object* v___x_4792_; uint8_t v_isShared_4793_; uint8_t v_isSharedCheck_4797_; 
v_isSharedCheck_4797_ = !lean_is_exclusive(v___x_4790_);
if (v_isSharedCheck_4797_ == 0)
{
lean_object* v_unused_4798_; 
v_unused_4798_ = lean_ctor_get(v___x_4790_, 0);
lean_dec(v_unused_4798_);
v___x_4792_ = v___x_4790_;
v_isShared_4793_ = v_isSharedCheck_4797_;
goto v_resetjp_4791_;
}
else
{
lean_dec(v___x_4790_);
v___x_4792_ = lean_box(0);
v_isShared_4793_ = v_isSharedCheck_4797_;
goto v_resetjp_4791_;
}
v_resetjp_4791_:
{
lean_object* v___x_4795_; 
if (v_isShared_4793_ == 0)
{
lean_ctor_set(v___x_4792_, 0, v_a_4788_);
v___x_4795_ = v___x_4792_;
goto v_reusejp_4794_;
}
else
{
lean_object* v_reuseFailAlloc_4796_; 
v_reuseFailAlloc_4796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4796_, 0, v_a_4788_);
v___x_4795_ = v_reuseFailAlloc_4796_;
goto v_reusejp_4794_;
}
v_reusejp_4794_:
{
return v___x_4795_;
}
}
}
else
{
lean_object* v_a_4799_; lean_object* v___x_4801_; uint8_t v_isShared_4802_; uint8_t v_isSharedCheck_4806_; 
lean_dec(v_a_4788_);
v_a_4799_ = lean_ctor_get(v___x_4790_, 0);
v_isSharedCheck_4806_ = !lean_is_exclusive(v___x_4790_);
if (v_isSharedCheck_4806_ == 0)
{
v___x_4801_ = v___x_4790_;
v_isShared_4802_ = v_isSharedCheck_4806_;
goto v_resetjp_4800_;
}
else
{
lean_inc(v_a_4799_);
lean_dec(v___x_4790_);
v___x_4801_ = lean_box(0);
v_isShared_4802_ = v_isSharedCheck_4806_;
goto v_resetjp_4800_;
}
v_resetjp_4800_:
{
lean_object* v___x_4804_; 
if (v_isShared_4802_ == 0)
{
v___x_4804_ = v___x_4801_;
goto v_reusejp_4803_;
}
else
{
lean_object* v_reuseFailAlloc_4805_; 
v_reuseFailAlloc_4805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4805_, 0, v_a_4799_);
v___x_4804_ = v_reuseFailAlloc_4805_;
goto v_reusejp_4803_;
}
v_reusejp_4803_:
{
return v___x_4804_;
}
}
}
}
else
{
lean_dec_ref(v_e_4771_);
return v___x_4787_;
}
}
else
{
lean_object* v_val_4807_; lean_object* v___x_4809_; 
lean_dec_ref(v_e_4771_);
lean_dec_ref(v_post_4770_);
lean_dec_ref(v_pre_4769_);
v_val_4807_ = lean_ctor_get(v___x_4784_, 0);
lean_inc(v_val_4807_);
lean_dec_ref(v___x_4784_);
if (v_isShared_4783_ == 0)
{
lean_ctor_set(v___x_4782_, 0, v_val_4807_);
v___x_4809_ = v___x_4782_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v_val_4807_);
v___x_4809_ = v_reuseFailAlloc_4810_;
goto v_reusejp_4808_;
}
v_reusejp_4808_:
{
return v___x_4809_;
}
}
}
}
else
{
lean_object* v_a_4812_; lean_object* v___x_4814_; uint8_t v_isShared_4815_; uint8_t v_isSharedCheck_4819_; 
lean_dec_ref(v_e_4771_);
lean_dec_ref(v_post_4770_);
lean_dec_ref(v_pre_4769_);
v_a_4812_ = lean_ctor_get(v___x_4779_, 0);
v_isSharedCheck_4819_ = !lean_is_exclusive(v___x_4779_);
if (v_isSharedCheck_4819_ == 0)
{
v___x_4814_ = v___x_4779_;
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
else
{
lean_inc(v_a_4812_);
lean_dec(v___x_4779_);
v___x_4814_ = lean_box(0);
v_isShared_4815_ = v_isSharedCheck_4819_;
goto v_resetjp_4813_;
}
v_resetjp_4813_:
{
lean_object* v___x_4817_; 
if (v_isShared_4815_ == 0)
{
v___x_4817_ = v___x_4814_;
goto v_reusejp_4816_;
}
else
{
lean_object* v_reuseFailAlloc_4818_; 
v_reuseFailAlloc_4818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4818_, 0, v_a_4812_);
v___x_4817_ = v_reuseFailAlloc_4818_;
goto v_reusejp_4816_;
}
v_reusejp_4816_:
{
return v___x_4817_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(lean_object* v_pre_4820_, lean_object* v_post_4821_, lean_object* v_e_4822_, lean_object* v_a_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_){
_start:
{
lean_object* v___x_4829_; 
lean_inc_ref(v_post_4821_);
lean_inc(v___y_4827_);
lean_inc_ref(v___y_4826_);
lean_inc(v___y_4825_);
lean_inc_ref(v___y_4824_);
lean_inc_ref(v_e_4822_);
v___x_4829_ = lean_apply_6(v_post_4821_, v_e_4822_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_, lean_box(0));
if (lean_obj_tag(v___x_4829_) == 0)
{
lean_object* v_a_4830_; lean_object* v___x_4832_; uint8_t v_isShared_4833_; uint8_t v_isSharedCheck_4848_; 
v_a_4830_ = lean_ctor_get(v___x_4829_, 0);
v_isSharedCheck_4848_ = !lean_is_exclusive(v___x_4829_);
if (v_isSharedCheck_4848_ == 0)
{
v___x_4832_ = v___x_4829_;
v_isShared_4833_ = v_isSharedCheck_4848_;
goto v_resetjp_4831_;
}
else
{
lean_inc(v_a_4830_);
lean_dec(v___x_4829_);
v___x_4832_ = lean_box(0);
v_isShared_4833_ = v_isSharedCheck_4848_;
goto v_resetjp_4831_;
}
v_resetjp_4831_:
{
switch(lean_obj_tag(v_a_4830_))
{
case 0:
{
lean_object* v_e_4834_; lean_object* v___x_4836_; 
lean_dec_ref(v_e_4822_);
lean_dec_ref(v_post_4821_);
lean_dec_ref(v_pre_4820_);
v_e_4834_ = lean_ctor_get(v_a_4830_, 0);
lean_inc_ref(v_e_4834_);
lean_dec_ref(v_a_4830_);
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 0, v_e_4834_);
v___x_4836_ = v___x_4832_;
goto v_reusejp_4835_;
}
else
{
lean_object* v_reuseFailAlloc_4837_; 
v_reuseFailAlloc_4837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4837_, 0, v_e_4834_);
v___x_4836_ = v_reuseFailAlloc_4837_;
goto v_reusejp_4835_;
}
v_reusejp_4835_:
{
return v___x_4836_;
}
}
case 1:
{
lean_object* v_e_4838_; lean_object* v___x_4839_; 
lean_del_object(v___x_4832_);
lean_dec_ref(v_e_4822_);
v_e_4838_ = lean_ctor_get(v_a_4830_, 0);
lean_inc_ref(v_e_4838_);
lean_dec_ref(v_a_4830_);
v___x_4839_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4820_, v_post_4821_, v_e_4838_, v_a_4823_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_);
return v___x_4839_;
}
default: 
{
lean_object* v_e_x3f_4840_; 
lean_dec_ref(v_post_4821_);
lean_dec_ref(v_pre_4820_);
v_e_x3f_4840_ = lean_ctor_get(v_a_4830_, 0);
lean_inc(v_e_x3f_4840_);
lean_dec_ref(v_a_4830_);
if (lean_obj_tag(v_e_x3f_4840_) == 0)
{
lean_object* v___x_4842_; 
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 0, v_e_4822_);
v___x_4842_ = v___x_4832_;
goto v_reusejp_4841_;
}
else
{
lean_object* v_reuseFailAlloc_4843_; 
v_reuseFailAlloc_4843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4843_, 0, v_e_4822_);
v___x_4842_ = v_reuseFailAlloc_4843_;
goto v_reusejp_4841_;
}
v_reusejp_4841_:
{
return v___x_4842_;
}
}
else
{
lean_object* v_val_4844_; lean_object* v___x_4846_; 
lean_dec_ref(v_e_4822_);
v_val_4844_ = lean_ctor_get(v_e_x3f_4840_, 0);
lean_inc(v_val_4844_);
lean_dec_ref(v_e_x3f_4840_);
if (v_isShared_4833_ == 0)
{
lean_ctor_set(v___x_4832_, 0, v_val_4844_);
v___x_4846_ = v___x_4832_;
goto v_reusejp_4845_;
}
else
{
lean_object* v_reuseFailAlloc_4847_; 
v_reuseFailAlloc_4847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4847_, 0, v_val_4844_);
v___x_4846_ = v_reuseFailAlloc_4847_;
goto v_reusejp_4845_;
}
v_reusejp_4845_:
{
return v___x_4846_;
}
}
}
}
}
}
else
{
lean_object* v_a_4849_; lean_object* v___x_4851_; uint8_t v_isShared_4852_; uint8_t v_isSharedCheck_4856_; 
lean_dec_ref(v_e_4822_);
lean_dec_ref(v_post_4821_);
lean_dec_ref(v_pre_4820_);
v_a_4849_ = lean_ctor_get(v___x_4829_, 0);
v_isSharedCheck_4856_ = !lean_is_exclusive(v___x_4829_);
if (v_isSharedCheck_4856_ == 0)
{
v___x_4851_ = v___x_4829_;
v_isShared_4852_ = v_isSharedCheck_4856_;
goto v_resetjp_4850_;
}
else
{
lean_inc(v_a_4849_);
lean_dec(v___x_4829_);
v___x_4851_ = lean_box(0);
v_isShared_4852_ = v_isSharedCheck_4856_;
goto v_resetjp_4850_;
}
v_resetjp_4850_:
{
lean_object* v___x_4854_; 
if (v_isShared_4852_ == 0)
{
v___x_4854_ = v___x_4851_;
goto v_reusejp_4853_;
}
else
{
lean_object* v_reuseFailAlloc_4855_; 
v_reuseFailAlloc_4855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4855_, 0, v_a_4849_);
v___x_4854_ = v_reuseFailAlloc_4855_;
goto v_reusejp_4853_;
}
v_reusejp_4853_:
{
return v___x_4854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_4857_, lean_object* v_post_4858_, lean_object* v_e_4859_, lean_object* v_a_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_){
_start:
{
lean_object* v_res_4866_; 
v_res_4866_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__2(v_pre_4857_, v_post_4858_, v_e_4859_, v_a_4860_, v___y_4861_, v___y_4862_, v___y_4863_, v___y_4864_);
lean_dec(v___y_4864_);
lean_dec_ref(v___y_4863_);
lean_dec(v___y_4862_);
lean_dec_ref(v___y_4861_);
lean_dec(v_a_4860_);
return v_res_4866_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_4867_, lean_object* v_post_4868_, lean_object* v_sz_4869_, lean_object* v_i_4870_, lean_object* v_bs_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_, lean_object* v___y_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_){
_start:
{
size_t v_sz_boxed_4878_; size_t v_i_boxed_4879_; lean_object* v_res_4880_; 
v_sz_boxed_4878_ = lean_unbox_usize(v_sz_4869_);
lean_dec(v_sz_4869_);
v_i_boxed_4879_ = lean_unbox_usize(v_i_4870_);
lean_dec(v_i_4870_);
v_res_4880_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__1(v_pre_4867_, v_post_4868_, v_sz_boxed_4878_, v_i_boxed_4879_, v_bs_4871_, v___y_4872_, v___y_4873_, v___y_4874_, v___y_4875_, v___y_4876_);
lean_dec(v___y_4876_);
lean_dec_ref(v___y_4875_);
lean_dec(v___y_4874_);
lean_dec_ref(v___y_4873_);
lean_dec(v___y_4872_);
return v_res_4880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__3___boxed(lean_object* v_pre_4881_, lean_object* v_post_4882_, lean_object* v_x_4883_, lean_object* v_x_4884_, lean_object* v_x_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_){
_start:
{
lean_object* v_res_4892_; 
v_res_4892_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__3(v_pre_4881_, v_post_4882_, v_x_4883_, v_x_4884_, v_x_4885_, v___y_4886_, v___y_4887_, v___y_4888_, v___y_4889_, v___y_4890_);
lean_dec(v___y_4890_);
lean_dec_ref(v___y_4889_);
lean_dec(v___y_4888_);
lean_dec_ref(v___y_4887_);
lean_dec(v___y_4886_);
return v_res_4892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0___boxed(lean_object* v_pre_4893_, lean_object* v_post_4894_, lean_object* v_e_4895_, lean_object* v_a_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_){
_start:
{
lean_object* v_res_4902_; 
v_res_4902_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4893_, v_post_4894_, v_e_4895_, v_a_4896_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
lean_dec(v___y_4898_);
lean_dec_ref(v___y_4897_);
lean_dec(v_a_4896_);
return v_res_4902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0(lean_object* v_input_4903_, lean_object* v_pre_4904_, lean_object* v_post_4905_, lean_object* v___y_4906_, lean_object* v___y_4907_, lean_object* v___y_4908_, lean_object* v___y_4909_){
_start:
{
lean_object* v___x_4911_; lean_object* v___x_4912_; lean_object* v_a_4913_; lean_object* v___x_4914_; 
v___x_4911_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_Grind_eraseIrrelevantMData_spec__0___closed__2);
v___x_4912_ = l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0(lean_box(0), v___x_4911_, v___y_4906_, v___y_4907_, v___y_4908_, v___y_4909_);
v_a_4913_ = lean_ctor_get(v___x_4912_, 0);
lean_inc(v_a_4913_);
lean_dec_ref(v___x_4912_);
v___x_4914_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0(v_pre_4904_, v_post_4905_, v_input_4903_, v_a_4913_, v___y_4906_, v___y_4907_, v___y_4908_, v___y_4909_);
if (lean_obj_tag(v___x_4914_) == 0)
{
lean_object* v_a_4915_; lean_object* v___x_4916_; lean_object* v___x_4917_; lean_object* v___x_4919_; uint8_t v_isShared_4920_; uint8_t v_isSharedCheck_4924_; 
v_a_4915_ = lean_ctor_get(v___x_4914_, 0);
lean_inc(v_a_4915_);
lean_dec_ref(v___x_4914_);
v___x_4916_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4916_, 0, lean_box(0));
lean_closure_set(v___x_4916_, 1, lean_box(0));
lean_closure_set(v___x_4916_, 2, v_a_4913_);
v___x_4917_ = l_Lean_Meta_transform___at___00Lean_Meta_Grind_foldProjs_spec__1___lam__0(lean_box(0), v___x_4916_, v___y_4906_, v___y_4907_, v___y_4908_, v___y_4909_);
v_isSharedCheck_4924_ = !lean_is_exclusive(v___x_4917_);
if (v_isSharedCheck_4924_ == 0)
{
lean_object* v_unused_4925_; 
v_unused_4925_ = lean_ctor_get(v___x_4917_, 0);
lean_dec(v_unused_4925_);
v___x_4919_ = v___x_4917_;
v_isShared_4920_ = v_isSharedCheck_4924_;
goto v_resetjp_4918_;
}
else
{
lean_dec(v___x_4917_);
v___x_4919_ = lean_box(0);
v_isShared_4920_ = v_isSharedCheck_4924_;
goto v_resetjp_4918_;
}
v_resetjp_4918_:
{
lean_object* v___x_4922_; 
if (v_isShared_4920_ == 0)
{
lean_ctor_set(v___x_4919_, 0, v_a_4915_);
v___x_4922_ = v___x_4919_;
goto v_reusejp_4921_;
}
else
{
lean_object* v_reuseFailAlloc_4923_; 
v_reuseFailAlloc_4923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4923_, 0, v_a_4915_);
v___x_4922_ = v_reuseFailAlloc_4923_;
goto v_reusejp_4921_;
}
v_reusejp_4921_:
{
return v___x_4922_;
}
}
}
else
{
lean_dec(v_a_4913_);
return v___x_4914_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0___boxed(lean_object* v_input_4926_, lean_object* v_pre_4927_, lean_object* v_post_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_){
_start:
{
lean_object* v_res_4934_; 
v_res_4934_ = l_Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0(v_input_4926_, v_pre_4927_, v_post_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_);
lean_dec(v___y_4932_);
lean_dec_ref(v___y_4931_);
lean_dec(v___y_4930_);
lean_dec_ref(v___y_4929_);
return v_res_4934_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_replacePreMatchCond___closed__0(void){
_start:
{
lean_object* v___x_4935_; 
v___x_4935_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_isPreMatchCond___boxed), 1, 0);
return v___x_4935_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_replacePreMatchCond___closed__1(void){
_start:
{
lean_object* v_pre_4936_; 
v_pre_4936_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_replacePreMatchCond___lam__0___boxed), 6, 0);
return v_pre_4936_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_replacePreMatchCond___closed__2(void){
_start:
{
lean_object* v___f_4937_; 
v___f_4937_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_replacePreMatchCond___lam__1___boxed), 6, 0);
return v___f_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond(lean_object* v_e_4938_, lean_object* v_a_4939_, lean_object* v_a_4940_, lean_object* v_a_4941_, lean_object* v_a_4942_){
_start:
{
lean_object* v___x_4944_; lean_object* v___x_4945_; 
v___x_4944_ = lean_obj_once(&l_Lean_Meta_Grind_replacePreMatchCond___closed__0, &l_Lean_Meta_Grind_replacePreMatchCond___closed__0_once, _init_l_Lean_Meta_Grind_replacePreMatchCond___closed__0);
v___x_4945_ = lean_find_expr(v___x_4944_, v_e_4938_);
if (lean_obj_tag(v___x_4945_) == 0)
{
uint8_t v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; 
v___x_4946_ = 1;
v___x_4947_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4947_, 0, v_e_4938_);
lean_ctor_set(v___x_4947_, 1, v___x_4945_);
lean_ctor_set_uint8(v___x_4947_, sizeof(void*)*2, v___x_4946_);
v___x_4948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4948_, 0, v___x_4947_);
return v___x_4948_;
}
else
{
lean_object* v___x_4950_; uint8_t v_isShared_4951_; uint8_t v_isSharedCheck_4997_; 
v_isSharedCheck_4997_ = !lean_is_exclusive(v___x_4945_);
if (v_isSharedCheck_4997_ == 0)
{
lean_object* v_unused_4998_; 
v_unused_4998_ = lean_ctor_get(v___x_4945_, 0);
lean_dec(v_unused_4998_);
v___x_4950_ = v___x_4945_;
v_isShared_4951_ = v_isSharedCheck_4997_;
goto v_resetjp_4949_;
}
else
{
lean_dec(v___x_4945_);
v___x_4950_ = lean_box(0);
v_isShared_4951_ = v_isSharedCheck_4997_;
goto v_resetjp_4949_;
}
v_resetjp_4949_:
{
lean_object* v_pre_4952_; lean_object* v___f_4953_; lean_object* v___x_4954_; 
v_pre_4952_ = lean_obj_once(&l_Lean_Meta_Grind_replacePreMatchCond___closed__1, &l_Lean_Meta_Grind_replacePreMatchCond___closed__1_once, _init_l_Lean_Meta_Grind_replacePreMatchCond___closed__1);
v___f_4953_ = lean_obj_once(&l_Lean_Meta_Grind_replacePreMatchCond___closed__2, &l_Lean_Meta_Grind_replacePreMatchCond___closed__2_once, _init_l_Lean_Meta_Grind_replacePreMatchCond___closed__2);
lean_inc_ref(v_e_4938_);
v___x_4954_ = l_Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0(v_e_4938_, v_pre_4952_, v___f_4953_, v_a_4939_, v_a_4940_, v_a_4941_, v_a_4942_);
if (lean_obj_tag(v___x_4954_) == 0)
{
lean_object* v_a_4955_; lean_object* v___x_4956_; 
v_a_4955_ = lean_ctor_get(v___x_4954_, 0);
lean_inc_n(v_a_4955_, 2);
lean_dec_ref(v___x_4954_);
v___x_4956_ = l_Lean_Meta_mkEqRefl(v_a_4955_, v_a_4939_, v_a_4940_, v_a_4941_, v_a_4942_);
if (lean_obj_tag(v___x_4956_) == 0)
{
lean_object* v_a_4957_; lean_object* v___x_4958_; 
v_a_4957_ = lean_ctor_get(v___x_4956_, 0);
lean_inc(v_a_4957_);
lean_dec_ref(v___x_4956_);
lean_inc(v_a_4955_);
v___x_4958_ = l_Lean_Meta_mkEq(v_e_4938_, v_a_4955_, v_a_4939_, v_a_4940_, v_a_4941_, v_a_4942_);
if (lean_obj_tag(v___x_4958_) == 0)
{
lean_object* v_a_4959_; lean_object* v___x_4961_; uint8_t v_isShared_4962_; uint8_t v_isSharedCheck_4972_; 
v_a_4959_ = lean_ctor_get(v___x_4958_, 0);
v_isSharedCheck_4972_ = !lean_is_exclusive(v___x_4958_);
if (v_isSharedCheck_4972_ == 0)
{
v___x_4961_ = v___x_4958_;
v_isShared_4962_ = v_isSharedCheck_4972_;
goto v_resetjp_4960_;
}
else
{
lean_inc(v_a_4959_);
lean_dec(v___x_4958_);
v___x_4961_ = lean_box(0);
v_isShared_4962_ = v_isSharedCheck_4972_;
goto v_resetjp_4960_;
}
v_resetjp_4960_:
{
uint8_t v___x_4963_; lean_object* v___x_4964_; lean_object* v___x_4966_; 
v___x_4963_ = 1;
v___x_4964_ = l_Lean_Meta_mkExpectedPropHint(v_a_4957_, v_a_4959_);
if (v_isShared_4951_ == 0)
{
lean_ctor_set(v___x_4950_, 0, v___x_4964_);
v___x_4966_ = v___x_4950_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4971_; 
v_reuseFailAlloc_4971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4971_, 0, v___x_4964_);
v___x_4966_ = v_reuseFailAlloc_4971_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
lean_object* v___x_4967_; lean_object* v___x_4969_; 
v___x_4967_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_4967_, 0, v_a_4955_);
lean_ctor_set(v___x_4967_, 1, v___x_4966_);
lean_ctor_set_uint8(v___x_4967_, sizeof(void*)*2, v___x_4963_);
if (v_isShared_4962_ == 0)
{
lean_ctor_set(v___x_4961_, 0, v___x_4967_);
v___x_4969_ = v___x_4961_;
goto v_reusejp_4968_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v___x_4967_);
v___x_4969_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4968_;
}
v_reusejp_4968_:
{
return v___x_4969_;
}
}
}
}
else
{
lean_object* v_a_4973_; lean_object* v___x_4975_; uint8_t v_isShared_4976_; uint8_t v_isSharedCheck_4980_; 
lean_dec(v_a_4957_);
lean_dec(v_a_4955_);
lean_del_object(v___x_4950_);
v_a_4973_ = lean_ctor_get(v___x_4958_, 0);
v_isSharedCheck_4980_ = !lean_is_exclusive(v___x_4958_);
if (v_isSharedCheck_4980_ == 0)
{
v___x_4975_ = v___x_4958_;
v_isShared_4976_ = v_isSharedCheck_4980_;
goto v_resetjp_4974_;
}
else
{
lean_inc(v_a_4973_);
lean_dec(v___x_4958_);
v___x_4975_ = lean_box(0);
v_isShared_4976_ = v_isSharedCheck_4980_;
goto v_resetjp_4974_;
}
v_resetjp_4974_:
{
lean_object* v___x_4978_; 
if (v_isShared_4976_ == 0)
{
v___x_4978_ = v___x_4975_;
goto v_reusejp_4977_;
}
else
{
lean_object* v_reuseFailAlloc_4979_; 
v_reuseFailAlloc_4979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4979_, 0, v_a_4973_);
v___x_4978_ = v_reuseFailAlloc_4979_;
goto v_reusejp_4977_;
}
v_reusejp_4977_:
{
return v___x_4978_;
}
}
}
}
else
{
lean_object* v_a_4981_; lean_object* v___x_4983_; uint8_t v_isShared_4984_; uint8_t v_isSharedCheck_4988_; 
lean_dec(v_a_4955_);
lean_del_object(v___x_4950_);
lean_dec_ref(v_e_4938_);
v_a_4981_ = lean_ctor_get(v___x_4956_, 0);
v_isSharedCheck_4988_ = !lean_is_exclusive(v___x_4956_);
if (v_isSharedCheck_4988_ == 0)
{
v___x_4983_ = v___x_4956_;
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
else
{
lean_inc(v_a_4981_);
lean_dec(v___x_4956_);
v___x_4983_ = lean_box(0);
v_isShared_4984_ = v_isSharedCheck_4988_;
goto v_resetjp_4982_;
}
v_resetjp_4982_:
{
lean_object* v___x_4986_; 
if (v_isShared_4984_ == 0)
{
v___x_4986_ = v___x_4983_;
goto v_reusejp_4985_;
}
else
{
lean_object* v_reuseFailAlloc_4987_; 
v_reuseFailAlloc_4987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4987_, 0, v_a_4981_);
v___x_4986_ = v_reuseFailAlloc_4987_;
goto v_reusejp_4985_;
}
v_reusejp_4985_:
{
return v___x_4986_;
}
}
}
}
else
{
lean_object* v_a_4989_; lean_object* v___x_4991_; uint8_t v_isShared_4992_; uint8_t v_isSharedCheck_4996_; 
lean_del_object(v___x_4950_);
lean_dec_ref(v_e_4938_);
v_a_4989_ = lean_ctor_get(v___x_4954_, 0);
v_isSharedCheck_4996_ = !lean_is_exclusive(v___x_4954_);
if (v_isSharedCheck_4996_ == 0)
{
v___x_4991_ = v___x_4954_;
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
else
{
lean_inc(v_a_4989_);
lean_dec(v___x_4954_);
v___x_4991_ = lean_box(0);
v_isShared_4992_ = v_isSharedCheck_4996_;
goto v_resetjp_4990_;
}
v_resetjp_4990_:
{
lean_object* v___x_4994_; 
if (v_isShared_4992_ == 0)
{
v___x_4994_ = v___x_4991_;
goto v_reusejp_4993_;
}
else
{
lean_object* v_reuseFailAlloc_4995_; 
v_reuseFailAlloc_4995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4995_, 0, v_a_4989_);
v___x_4994_ = v_reuseFailAlloc_4995_;
goto v_reusejp_4993_;
}
v_reusejp_4993_:
{
return v___x_4994_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_replacePreMatchCond___boxed(lean_object* v_e_4999_, lean_object* v_a_5000_, lean_object* v_a_5001_, lean_object* v_a_5002_, lean_object* v_a_5003_, lean_object* v_a_5004_){
_start:
{
lean_object* v_res_5005_; 
v_res_5005_ = l_Lean_Meta_Grind_replacePreMatchCond(v_e_4999_, v_a_5000_, v_a_5001_, v_a_5002_, v_a_5003_);
lean_dec(v_a_5003_);
lean_dec_ref(v_a_5002_);
lean_dec(v_a_5001_);
lean_dec_ref(v_a_5000_);
return v_res_5005_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4(lean_object* v_00_u03b1_5006_, lean_object* v_x_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_){
_start:
{
lean_object* v___x_5014_; 
v___x_5014_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___redArg(v_x_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_, v___y_5012_);
return v___x_5014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b1_5015_, lean_object* v_x_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_){
_start:
{
lean_object* v_res_5023_; 
v_res_5023_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_Grind_replacePreMatchCond_spec__0_spec__0_spec__4(v_00_u03b1_5015_, v_x_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_);
lean_dec(v___y_5021_);
lean_dec_ref(v___y_5020_);
lean_dec(v___y_5019_);
lean_dec_ref(v___y_5018_);
lean_dec(v___y_5017_);
return v_res_5023_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isIte___closed__0(void){
_start:
{
lean_object* v___x_5024_; 
v___x_5024_ = lean_mk_string_unchecked("ite", 3, 3);
return v___x_5024_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isIte___closed__1(void){
_start:
{
lean_object* v___x_5025_; lean_object* v___x_5026_; 
v___x_5025_ = lean_obj_once(&l_Lean_Meta_Grind_isIte___closed__0, &l_Lean_Meta_Grind_isIte___closed__0_once, _init_l_Lean_Meta_Grind_isIte___closed__0);
v___x_5026_ = l_Lean_Name_mkStr1(v___x_5025_);
return v___x_5026_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isIte(lean_object* v_e_5027_){
_start:
{
lean_object* v___x_5028_; uint8_t v___x_5029_; 
v___x_5028_ = lean_obj_once(&l_Lean_Meta_Grind_isIte___closed__1, &l_Lean_Meta_Grind_isIte___closed__1_once, _init_l_Lean_Meta_Grind_isIte___closed__1);
v___x_5029_ = l_Lean_Expr_isAppOf(v_e_5027_, v___x_5028_);
if (v___x_5029_ == 0)
{
return v___x_5029_;
}
else
{
lean_object* v___x_5030_; lean_object* v___x_5031_; uint8_t v___x_5032_; 
v___x_5030_ = lean_unsigned_to_nat(5u);
v___x_5031_ = l_Lean_Expr_getAppNumArgs(v_e_5027_);
v___x_5032_ = lean_nat_dec_le(v___x_5030_, v___x_5031_);
lean_dec(v___x_5031_);
return v___x_5032_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isIte___boxed(lean_object* v_e_5033_){
_start:
{
uint8_t v_res_5034_; lean_object* v_r_5035_; 
v_res_5034_ = l_Lean_Meta_Grind_isIte(v_e_5033_);
lean_dec_ref(v_e_5033_);
v_r_5035_ = lean_box(v_res_5034_);
return v_r_5035_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isDIte___closed__0(void){
_start:
{
lean_object* v___x_5036_; 
v___x_5036_ = lean_mk_string_unchecked("dite", 4, 4);
return v___x_5036_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_isDIte___closed__1(void){
_start:
{
lean_object* v___x_5037_; lean_object* v___x_5038_; 
v___x_5037_ = lean_obj_once(&l_Lean_Meta_Grind_isDIte___closed__0, &l_Lean_Meta_Grind_isDIte___closed__0_once, _init_l_Lean_Meta_Grind_isDIte___closed__0);
v___x_5038_ = l_Lean_Name_mkStr1(v___x_5037_);
return v___x_5038_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_isDIte(lean_object* v_e_5039_){
_start:
{
lean_object* v___x_5040_; uint8_t v___x_5041_; 
v___x_5040_ = lean_obj_once(&l_Lean_Meta_Grind_isDIte___closed__1, &l_Lean_Meta_Grind_isDIte___closed__1_once, _init_l_Lean_Meta_Grind_isDIte___closed__1);
v___x_5041_ = l_Lean_Expr_isAppOf(v_e_5039_, v___x_5040_);
if (v___x_5041_ == 0)
{
return v___x_5041_;
}
else
{
lean_object* v___x_5042_; lean_object* v___x_5043_; uint8_t v___x_5044_; 
v___x_5042_ = lean_unsigned_to_nat(5u);
v___x_5043_ = l_Lean_Expr_getAppNumArgs(v_e_5039_);
v___x_5044_ = lean_nat_dec_le(v___x_5042_, v___x_5043_);
lean_dec(v___x_5043_);
return v___x_5044_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_isDIte___boxed(lean_object* v_e_5045_){
_start:
{
uint8_t v_res_5046_; lean_object* v_r_5047_; 
v_res_5046_ = l_Lean_Meta_Grind_isDIte(v_e_5045_);
lean_dec_ref(v_e_5045_);
v_r_5047_ = lean_box(v_res_5046_);
return v_r_5047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getBinOp(lean_object* v_e_5048_){
_start:
{
uint8_t v___x_5049_; 
v___x_5049_ = l_Lean_Expr_isApp(v_e_5048_);
if (v___x_5049_ == 0)
{
lean_object* v___x_5050_; 
v___x_5050_ = lean_box(0);
return v___x_5050_;
}
else
{
lean_object* v_f_5051_; uint8_t v___x_5052_; 
v_f_5051_ = l_Lean_Expr_appFn_x21(v_e_5048_);
v___x_5052_ = l_Lean_Expr_isApp(v_f_5051_);
if (v___x_5052_ == 0)
{
lean_object* v___x_5053_; 
lean_dec_ref(v_f_5051_);
v___x_5053_ = lean_box(0);
return v___x_5053_;
}
else
{
lean_object* v___x_5054_; lean_object* v___x_5055_; 
v___x_5054_ = l_Lean_Expr_appFn_x21(v_f_5051_);
lean_dec_ref(v_f_5051_);
v___x_5055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5055_, 0, v___x_5054_);
return v___x_5055_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getBinOp___boxed(lean_object* v_e_5056_){
_start:
{
lean_object* v_res_5057_; 
v_res_5057_ = l_Lean_Meta_Grind_getBinOp(v_e_5056_);
lean_dec_ref(v_e_5056_);
return v_res_5057_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Init_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Config(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Grind_Util_0____regBuiltin_Lean_Meta_Grind_reducePreMatchCond_declare__50_00___x40_Lean_Meta_Tactic_Grind_Util_3017030382____hygCtx___hyg_10_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Init_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Clear(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
lean_object* initialize_Init_Grind_Config(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Clear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Config(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Util(builtin);
}
#ifdef __cplusplus
}
#endif
