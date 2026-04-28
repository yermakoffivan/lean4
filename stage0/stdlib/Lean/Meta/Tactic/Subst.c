// Lean compiler output
// Module: Lean.Meta.Tactic.Subst
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.MatchUtil public import Lean.Meta.Tactic.Assert
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_FVarSubst_empty;
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_substCore_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_substCore_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_substCore___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_substCore___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__0;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__1;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__2;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__3;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__4;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__5;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__6;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__7;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__8;
static lean_once_cell_t l_Lean_Meta_substCore___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__2___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__5;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__6;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__7;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__8;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__9;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__10;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__11;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__12;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__13;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__14;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__15;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__16;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__17;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__18;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__19;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__20;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__21;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__22;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__23;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__24;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__25;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__26;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__27;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__28;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__29;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__30;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__31;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_heqToEq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_heqToEq___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_heqToEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_heqToEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_substVar___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substVar___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_substEq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substEq___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_substEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__5;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__6;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__7;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__9;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__10;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__11;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__12;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__13;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__14;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__15;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__16;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__17;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__18;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__19;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__20;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__0___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__0___closed__21;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_introSubstEq___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__0;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__1;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__2;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__3;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__4;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__5;
static lean_once_cell_t l_Lean_Meta_introSubstEq___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_introSubstEq___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(lean_object* v_e_1_, lean_object* v___y_2_, lean_object* v___y_3_){
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
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg___boxed(lean_object* v_e_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_29_, v___y_30_, v___y_31_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(lean_object* v_e_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_e_34_, v___y_36_, v___y_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___boxed(lean_object* v_e_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0(v_e_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_substCore_spec__1___closed__0(void){
_start:
{
lean_object* v___f_48_; 
v___f_48_ = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return v___f_48_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1(lean_object* v_msg_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___f_55_; lean_object* v___x_28810__overap_56_; lean_object* v___x_57_; 
v___f_55_ = lean_obj_once(&l_panic___at___00Lean_Meta_substCore_spec__1___closed__0, &l_panic___at___00Lean_Meta_substCore_spec__1___closed__0_once, _init_l_panic___at___00Lean_Meta_substCore_spec__1___closed__0);
v___x_28810__overap_56_ = lean_panic_fn_borrowed(v___f_55_, v_msg_49_);
lean_inc(v___y_53_);
lean_inc_ref(v___y_52_);
lean_inc(v___y_51_);
lean_inc_ref(v___y_50_);
v___x_57_ = lean_apply_5(v___x_28810__overap_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, lean_box(0));
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_substCore_spec__1___boxed(lean_object* v_msg_58_, lean_object* v___y_59_, lean_object* v___y_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_panic___at___00Lean_Meta_substCore_spec__1(v_msg_58_, v___y_59_, v___y_60_, v___y_61_, v___y_62_);
lean_dec(v___y_62_);
lean_dec_ref(v___y_61_);
lean_dec(v___y_60_);
lean_dec_ref(v___y_59_);
return v_res_64_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0(lean_object* v_x_65_){
_start:
{
uint8_t v___x_66_; 
v___x_66_ = 0;
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0___boxed(lean_object* v_x_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0(v_x_67_);
lean_dec(v_x_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1(lean_object* v_fvarId_70_, lean_object* v_x_71_){
_start:
{
uint8_t v___x_72_; 
v___x_72_ = l_Lean_instBEqFVarId_beq(v_fvarId_70_, v_x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1___boxed(lean_object* v_fvarId_73_, lean_object* v_x_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1(v_fvarId_73_, v_x_74_);
lean_dec(v_x_74_);
lean_dec(v_fvarId_73_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___f_77_; 
v___f_77_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__0___boxed), 1, 0);
return v___f_77_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_78_ = lean_box(0);
v___x_79_ = lean_unsigned_to_nat(16u);
v___x_80_ = lean_mk_array(v___x_79_, v___x_78_);
return v___x_80_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_81_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__1);
v___x_82_ = lean_unsigned_to_nat(0u);
v___x_83_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_82_);
lean_ctor_set(v___x_83_, 1, v___x_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(lean_object* v_e_84_, lean_object* v_fvarId_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v_fst_92_; lean_object* v_mctx_93_; lean_object* v___y_112_; lean_object* v_mctx_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___x_120_; lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_89_ = lean_st_ref_get(v___y_87_);
lean_dec(v___x_89_);
v___x_90_ = lean_st_ref_get(v___y_86_);
v_mctx_117_ = lean_ctor_get(v___x_90_, 0);
lean_inc_ref_n(v_mctx_117_, 2);
lean_dec(v___x_90_);
v___f_118_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__0);
v___f_119_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_119_, 0, v_fvarId_85_);
v___x_120_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___closed__2);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v_mctx_117_);
v___x_122_ = l_Lean_Expr_hasFVar(v_e_84_);
if (v___x_122_ == 0)
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_Expr_hasMVar(v_e_84_);
if (v___x_123_ == 0)
{
lean_dec_ref(v___x_121_);
lean_dec_ref(v___f_119_);
lean_dec_ref(v_e_84_);
v_fst_92_ = v___x_123_;
v_mctx_93_ = v_mctx_117_;
goto v___jp_91_;
}
else
{
lean_object* v___x_124_; 
lean_dec_ref(v_mctx_117_);
v___x_124_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_119_, v___f_118_, v_e_84_, v___x_121_);
v___y_112_ = v___x_124_;
goto v___jp_111_;
}
}
else
{
lean_object* v___x_125_; 
lean_dec_ref(v_mctx_117_);
v___x_125_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_119_, v___f_118_, v_e_84_, v___x_121_);
v___y_112_ = v___x_125_;
goto v___jp_111_;
}
v___jp_91_:
{
lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v_cache_96_; lean_object* v_zetaDeltaFVarIds_97_; lean_object* v_postponed_98_; lean_object* v_diag_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_109_; 
v___x_94_ = lean_st_ref_get(v___y_87_);
lean_dec(v___x_94_);
v___x_95_ = lean_st_ref_take(v___y_86_);
v_cache_96_ = lean_ctor_get(v___x_95_, 1);
v_zetaDeltaFVarIds_97_ = lean_ctor_get(v___x_95_, 2);
v_postponed_98_ = lean_ctor_get(v___x_95_, 3);
v_diag_99_ = lean_ctor_get(v___x_95_, 4);
v_isSharedCheck_109_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_109_ == 0)
{
lean_object* v_unused_110_; 
v_unused_110_ = lean_ctor_get(v___x_95_, 0);
lean_dec(v_unused_110_);
v___x_101_ = v___x_95_;
v_isShared_102_ = v_isSharedCheck_109_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_diag_99_);
lean_inc(v_postponed_98_);
lean_inc(v_zetaDeltaFVarIds_97_);
lean_inc(v_cache_96_);
lean_dec(v___x_95_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_109_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v___x_104_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 0, v_mctx_93_);
v___x_104_ = v___x_101_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_108_; 
v_reuseFailAlloc_108_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_108_, 0, v_mctx_93_);
lean_ctor_set(v_reuseFailAlloc_108_, 1, v_cache_96_);
lean_ctor_set(v_reuseFailAlloc_108_, 2, v_zetaDeltaFVarIds_97_);
lean_ctor_set(v_reuseFailAlloc_108_, 3, v_postponed_98_);
lean_ctor_set(v_reuseFailAlloc_108_, 4, v_diag_99_);
v___x_104_ = v_reuseFailAlloc_108_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_105_ = lean_st_ref_set(v___y_86_, v___x_104_);
v___x_106_ = lean_box(v_fst_92_);
v___x_107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
return v___x_107_;
}
}
}
v___jp_111_:
{
lean_object* v_snd_113_; lean_object* v_fst_114_; lean_object* v_mctx_115_; uint8_t v___x_116_; 
v_snd_113_ = lean_ctor_get(v___y_112_, 1);
lean_inc(v_snd_113_);
v_fst_114_ = lean_ctor_get(v___y_112_, 0);
lean_inc(v_fst_114_);
lean_dec_ref(v___y_112_);
v_mctx_115_ = lean_ctor_get(v_snd_113_, 1);
lean_inc_ref(v_mctx_115_);
lean_dec(v_snd_113_);
v___x_116_ = lean_unbox(v_fst_114_);
lean_dec(v_fst_114_);
v_fst_92_ = v___x_116_;
v_mctx_93_ = v_mctx_115_;
goto v___jp_91_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg___boxed(lean_object* v_e_126_, lean_object* v_fvarId_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_e_126_, v_fvarId_127_, v___y_128_, v___y_129_);
lean_dec(v___y_129_);
lean_dec(v___y_128_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4(lean_object* v_e_132_, lean_object* v_fvarId_133_, lean_object* v___y_134_, lean_object* v___y_135_, lean_object* v___y_136_, lean_object* v___y_137_){
_start:
{
lean_object* v___x_139_; 
v___x_139_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_e_132_, v_fvarId_133_, v___y_135_, v___y_137_);
return v___x_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___boxed(lean_object* v_e_140_, lean_object* v_fvarId_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4(v_e_140_, v_fvarId_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_);
lean_dec(v___y_145_);
lean_dec_ref(v___y_144_);
lean_dec(v___y_143_);
lean_dec_ref(v___y_142_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(lean_object* v_mvarId_148_, lean_object* v_x_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_148_, v_x_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_158_; uint8_t v_isShared_159_; uint8_t v_isSharedCheck_163_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_163_ == 0)
{
v___x_158_ = v___x_155_;
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
else
{
lean_inc(v_a_156_);
lean_dec(v___x_155_);
v___x_158_ = lean_box(0);
v_isShared_159_ = v_isSharedCheck_163_;
goto v_resetjp_157_;
}
v_resetjp_157_:
{
lean_object* v___x_161_; 
if (v_isShared_159_ == 0)
{
v___x_161_ = v___x_158_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_156_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
v_a_164_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_155_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_155_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg___boxed(lean_object* v_mvarId_172_, lean_object* v_x_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_172_, v_x_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(lean_object* v_00_u03b1_180_, lean_object* v_mvarId_181_, lean_object* v_x_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_181_, v_x_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed(lean_object* v_00_u03b1_189_, lean_object* v_mvarId_190_, lean_object* v_x_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7(v_00_u03b1_189_, v_mvarId_190_, v_x_191_, v___y_192_, v___y_193_, v___y_194_, v___y_195_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
return v_res_197_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__0___closed__0(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_198_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__0___closed__1(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_obj_once(&l_Lean_Meta_substCore___lam__0___closed__0, &l_Lean_Meta_substCore___lam__0___closed__0_once, _init_l_Lean_Meta_substCore___lam__0___closed__0);
v___x_200_ = l_Lean_Name_mkStr1(v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0(lean_object* v___x_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_options_207_; uint8_t v_hasTrace_208_; 
v_options_207_ = lean_ctor_get(v___y_204_, 2);
v_hasTrace_208_ = lean_ctor_get_uint8(v_options_207_, sizeof(void*)*1);
if (v_hasTrace_208_ == 0)
{
lean_object* v___x_209_; lean_object* v___x_210_; 
lean_dec(v___x_201_);
v___x_209_ = lean_box(v_hasTrace_208_);
v___x_210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_210_, 0, v___x_209_);
return v___x_210_;
}
else
{
lean_object* v_inheritedTraceOptions_211_; lean_object* v___x_212_; lean_object* v___x_213_; uint8_t v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; 
v_inheritedTraceOptions_211_ = lean_ctor_get(v___y_204_, 13);
v___x_212_ = lean_obj_once(&l_Lean_Meta_substCore___lam__0___closed__1, &l_Lean_Meta_substCore___lam__0___closed__1_once, _init_l_Lean_Meta_substCore___lam__0___closed__1);
v___x_213_ = l_Lean_Name_append(v___x_212_, v___x_201_);
v___x_214_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_211_, v_options_207_, v___x_213_);
lean_dec(v___x_213_);
v___x_215_ = lean_box(v___x_214_);
v___x_216_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_216_, 0, v___x_215_);
return v___x_216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__0___boxed(lean_object* v___x_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_Lean_Meta_substCore___lam__0(v___x_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1(lean_object* v_type_224_, lean_object* v___x_225_, lean_object* v___x_226_, lean_object* v___x_227_, uint8_t v___x_228_, uint8_t v___x_229_, lean_object* v_hAux_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_236_; 
lean_inc_ref(v_hAux_230_);
v___x_236_ = l_Lean_Meta_mkEqSymm(v_hAux_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
if (lean_obj_tag(v___x_236_) == 0)
{
lean_object* v_a_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; 
v_a_237_ = lean_ctor_get(v___x_236_, 0);
lean_inc(v_a_237_);
lean_dec_ref(v___x_236_);
v___x_238_ = l_Lean_Expr_replaceFVar(v_type_224_, v___x_225_, v_a_237_);
lean_dec(v_a_237_);
v___x_239_ = lean_mk_empty_array_with_capacity(v___x_226_);
v___x_240_ = lean_array_push(v___x_239_, v___x_227_);
v___x_241_ = lean_array_push(v___x_240_, v_hAux_230_);
v___x_242_ = 1;
v___x_243_ = l_Lean_Meta_mkLambdaFVars(v___x_241_, v___x_238_, v___x_228_, v___x_229_, v___x_228_, v___x_229_, v___x_242_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
lean_dec_ref(v___x_241_);
return v___x_243_;
}
else
{
lean_dec_ref(v_hAux_230_);
lean_dec_ref(v___x_227_);
lean_dec_ref(v___x_225_);
return v___x_236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object* v_type_244_, lean_object* v___x_245_, lean_object* v___x_246_, lean_object* v___x_247_, lean_object* v___x_248_, lean_object* v___x_249_, lean_object* v_hAux_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
uint8_t v___x_33289__boxed_256_; uint8_t v___x_33290__boxed_257_; lean_object* v_res_258_; 
v___x_33289__boxed_256_ = lean_unbox(v___x_248_);
v___x_33290__boxed_257_ = lean_unbox(v___x_249_);
v_res_258_ = l_Lean_Meta_substCore___lam__1(v_type_244_, v___x_245_, v___x_246_, v___x_247_, v___x_33289__boxed_256_, v___x_33290__boxed_257_, v_hAux_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___x_246_);
lean_dec_ref(v_type_244_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(lean_object* v_fst_259_, lean_object* v_fst_260_, lean_object* v_n_261_, lean_object* v_i_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_zero_265_; uint8_t v_isZero_266_; 
v_zero_265_ = lean_unsigned_to_nat(0u);
v_isZero_266_ = lean_nat_dec_eq(v_i_262_, v_zero_265_);
if (v_isZero_266_ == 1)
{
lean_object* v___x_267_; 
lean_dec(v_i_262_);
v___x_267_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_267_, 0, v_a_263_);
return v___x_267_;
}
else
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v_one_270_; lean_object* v_n_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_268_ = lean_unsigned_to_nat(2u);
v___x_269_ = lean_box(0);
v_one_270_ = lean_unsigned_to_nat(1u);
v_n_271_ = lean_nat_sub(v_i_262_, v_one_270_);
lean_dec(v_i_262_);
v___x_272_ = lean_nat_sub(v_n_261_, v_n_271_);
v___x_273_ = lean_nat_sub(v___x_272_, v_one_270_);
lean_dec(v___x_272_);
v___x_274_ = lean_nat_add(v___x_273_, v___x_268_);
v___x_275_ = lean_array_get_borrowed(v___x_269_, v_fst_259_, v___x_274_);
lean_dec(v___x_274_);
v___x_276_ = lean_array_fget_borrowed(v_fst_260_, v___x_273_);
lean_dec(v___x_273_);
lean_inc(v___x_276_);
v___x_277_ = l_Lean_mkFVar(v___x_276_);
lean_inc(v___x_275_);
v___x_278_ = l_Lean_Meta_FVarSubst_insert(v_a_263_, v___x_275_, v___x_277_);
v_i_262_ = v_n_271_;
v_a_263_ = v___x_278_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg___boxed(lean_object* v_fst_280_, lean_object* v_fst_281_, lean_object* v_n_282_, lean_object* v_i_283_, lean_object* v_a_284_, lean_object* v___y_285_){
_start:
{
lean_object* v_res_286_; 
v_res_286_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(v_fst_280_, v_fst_281_, v_n_282_, v_i_283_, v_a_284_);
lean_dec(v_n_282_);
lean_dec_ref(v_fst_281_);
lean_dec_ref(v_fst_280_);
return v_res_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0(lean_object* v_k_287_, lean_object* v_b_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_){
_start:
{
lean_object* v___x_294_; 
lean_inc(v___y_292_);
lean_inc_ref(v___y_291_);
lean_inc(v___y_290_);
lean_inc_ref(v___y_289_);
v___x_294_ = lean_apply_6(v_k_287_, v_b_288_, v___y_289_, v___y_290_, v___y_291_, v___y_292_, lean_box(0));
return v___x_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_295_, lean_object* v_b_296_, lean_object* v___y_297_, lean_object* v___y_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_){
_start:
{
lean_object* v_res_302_; 
v_res_302_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0(v_k_295_, v_b_296_, v___y_297_, v___y_298_, v___y_299_, v___y_300_);
lean_dec(v___y_300_);
lean_dec_ref(v___y_299_);
lean_dec(v___y_298_);
lean_dec_ref(v___y_297_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(lean_object* v_name_303_, uint8_t v_bi_304_, lean_object* v_type_305_, lean_object* v_k_306_, uint8_t v_kind_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___f_313_; lean_object* v___x_314_; 
v___f_313_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_313_, 0, v_k_306_);
v___x_314_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_303_, v_bi_304_, v_type_305_, v___f_313_, v_kind_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
if (lean_obj_tag(v___x_314_) == 0)
{
lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
v_a_315_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_314_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_dec(v___x_314_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
v_a_323_ = lean_ctor_get(v___x_314_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_314_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_314_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_314_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg___boxed(lean_object* v_name_331_, lean_object* v_bi_332_, lean_object* v_type_333_, lean_object* v_k_334_, lean_object* v_kind_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_){
_start:
{
uint8_t v_bi_boxed_341_; uint8_t v_kind_boxed_342_; lean_object* v_res_343_; 
v_bi_boxed_341_ = lean_unbox(v_bi_332_);
v_kind_boxed_342_ = lean_unbox(v_kind_335_);
v_res_343_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(v_name_331_, v_bi_boxed_341_, v_type_333_, v_k_334_, v_kind_boxed_342_, v___y_336_, v___y_337_, v___y_338_, v___y_339_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(lean_object* v_name_344_, lean_object* v_type_345_, lean_object* v_k_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
uint8_t v___x_352_; uint8_t v___x_353_; lean_object* v___x_354_; 
v___x_352_ = 0;
v___x_353_ = 0;
v___x_354_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(v_name_344_, v___x_352_, v_type_345_, v_k_346_, v___x_353_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
return v___x_354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg___boxed(lean_object* v_name_355_, lean_object* v_type_356_, lean_object* v_k_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_, lean_object* v___y_362_){
_start:
{
lean_object* v_res_363_; 
v_res_363_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(v_name_355_, v_type_356_, v_k_357_, v___y_358_, v___y_359_, v___y_360_, v___y_361_);
lean_dec(v___y_361_);
lean_dec_ref(v___y_360_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
return v_res_363_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(lean_object* v_x_364_, lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v_x_367_){
_start:
{
lean_object* v_ks_368_; lean_object* v_vs_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_393_; 
v_ks_368_ = lean_ctor_get(v_x_364_, 0);
v_vs_369_ = lean_ctor_get(v_x_364_, 1);
v_isSharedCheck_393_ = !lean_is_exclusive(v_x_364_);
if (v_isSharedCheck_393_ == 0)
{
v___x_371_ = v_x_364_;
v_isShared_372_ = v_isSharedCheck_393_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_vs_369_);
lean_inc(v_ks_368_);
lean_dec(v_x_364_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_393_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_373_; uint8_t v___x_374_; 
v___x_373_ = lean_array_get_size(v_ks_368_);
v___x_374_ = lean_nat_dec_lt(v_x_365_, v___x_373_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_378_; 
lean_dec(v_x_365_);
v___x_375_ = lean_array_push(v_ks_368_, v_x_366_);
v___x_376_ = lean_array_push(v_vs_369_, v_x_367_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v___x_376_);
lean_ctor_set(v___x_371_, 0, v___x_375_);
v___x_378_ = v___x_371_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v___x_376_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
else
{
lean_object* v_k_x27_380_; uint8_t v___x_381_; 
v_k_x27_380_ = lean_array_fget_borrowed(v_ks_368_, v_x_365_);
v___x_381_ = l_Lean_instBEqMVarId_beq(v_x_366_, v_k_x27_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_383_; 
if (v_isShared_372_ == 0)
{
v___x_383_ = v___x_371_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_387_; 
v_reuseFailAlloc_387_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_387_, 0, v_ks_368_);
lean_ctor_set(v_reuseFailAlloc_387_, 1, v_vs_369_);
v___x_383_ = v_reuseFailAlloc_387_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_unsigned_to_nat(1u);
v___x_385_ = lean_nat_add(v_x_365_, v___x_384_);
lean_dec(v_x_365_);
v_x_364_ = v___x_383_;
v_x_365_ = v___x_385_;
goto _start;
}
}
else
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_391_; 
v___x_388_ = lean_array_fset(v_ks_368_, v_x_365_, v_x_366_);
v___x_389_ = lean_array_fset(v_vs_369_, v_x_365_, v_x_367_);
lean_dec(v_x_365_);
if (v_isShared_372_ == 0)
{
lean_ctor_set(v___x_371_, 1, v___x_389_);
lean_ctor_set(v___x_371_, 0, v___x_388_);
v___x_391_ = v___x_371_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v___x_388_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v___x_389_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(lean_object* v_n_394_, lean_object* v_k_395_, lean_object* v_v_396_){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_397_ = lean_unsigned_to_nat(0u);
v___x_398_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(v_n_394_, v___x_397_, v_k_395_, v_v_396_);
return v___x_398_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0(void){
_start:
{
size_t v___x_399_; size_t v___x_400_; size_t v___x_401_; 
v___x_399_ = ((size_t)5ULL);
v___x_400_ = ((size_t)1ULL);
v___x_401_ = lean_usize_shift_left(v___x_400_, v___x_399_);
return v___x_401_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1(void){
_start:
{
size_t v___x_402_; size_t v___x_403_; size_t v___x_404_; 
v___x_402_ = ((size_t)1ULL);
v___x_403_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__0);
v___x_404_ = lean_usize_sub(v___x_403_, v___x_402_);
return v___x_404_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2(void){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(lean_object* v_x_406_, size_t v_x_407_, size_t v_x_408_, lean_object* v_x_409_, lean_object* v_x_410_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
lean_object* v_es_411_; size_t v___x_412_; size_t v___x_413_; size_t v___x_414_; size_t v___x_415_; lean_object* v_j_416_; lean_object* v___x_417_; uint8_t v___x_418_; 
v_es_411_ = lean_ctor_get(v_x_406_, 0);
v___x_412_ = ((size_t)5ULL);
v___x_413_ = ((size_t)1ULL);
v___x_414_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1);
v___x_415_ = lean_usize_land(v_x_407_, v___x_414_);
v_j_416_ = lean_usize_to_nat(v___x_415_);
v___x_417_ = lean_array_get_size(v_es_411_);
v___x_418_ = lean_nat_dec_lt(v_j_416_, v___x_417_);
if (v___x_418_ == 0)
{
lean_dec(v_j_416_);
lean_dec(v_x_410_);
lean_dec(v_x_409_);
return v_x_406_;
}
else
{
lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_455_; 
lean_inc_ref(v_es_411_);
v_isSharedCheck_455_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_455_ == 0)
{
lean_object* v_unused_456_; 
v_unused_456_ = lean_ctor_get(v_x_406_, 0);
lean_dec(v_unused_456_);
v___x_420_ = v_x_406_;
v_isShared_421_ = v_isSharedCheck_455_;
goto v_resetjp_419_;
}
else
{
lean_dec(v_x_406_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_455_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v_v_422_; lean_object* v___x_423_; lean_object* v_xs_x27_424_; lean_object* v___y_426_; 
v_v_422_ = lean_array_fget(v_es_411_, v_j_416_);
v___x_423_ = lean_box(0);
v_xs_x27_424_ = lean_array_fset(v_es_411_, v_j_416_, v___x_423_);
switch(lean_obj_tag(v_v_422_))
{
case 0:
{
lean_object* v_key_431_; lean_object* v_val_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_442_; 
v_key_431_ = lean_ctor_get(v_v_422_, 0);
v_val_432_ = lean_ctor_get(v_v_422_, 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v_v_422_);
if (v_isSharedCheck_442_ == 0)
{
v___x_434_ = v_v_422_;
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_val_432_);
lean_inc(v_key_431_);
lean_dec(v_v_422_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_442_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
uint8_t v___x_436_; 
v___x_436_ = l_Lean_instBEqMVarId_beq(v_x_409_, v_key_431_);
if (v___x_436_ == 0)
{
lean_object* v___x_437_; lean_object* v___x_438_; 
lean_del_object(v___x_434_);
v___x_437_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_431_, v_val_432_, v_x_409_, v_x_410_);
v___x_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
v___y_426_ = v___x_438_;
goto v___jp_425_;
}
else
{
lean_object* v___x_440_; 
lean_dec(v_val_432_);
lean_dec(v_key_431_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v_x_410_);
lean_ctor_set(v___x_434_, 0, v_x_409_);
v___x_440_ = v___x_434_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_x_409_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_x_410_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
v___y_426_ = v___x_440_;
goto v___jp_425_;
}
}
}
}
case 1:
{
lean_object* v_node_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_453_; 
v_node_443_ = lean_ctor_get(v_v_422_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v_v_422_);
if (v_isSharedCheck_453_ == 0)
{
v___x_445_ = v_v_422_;
v_isShared_446_ = v_isSharedCheck_453_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_node_443_);
lean_dec(v_v_422_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_453_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
size_t v___x_447_; size_t v___x_448_; lean_object* v___x_449_; lean_object* v___x_451_; 
v___x_447_ = lean_usize_shift_right(v_x_407_, v___x_412_);
v___x_448_ = lean_usize_add(v_x_408_, v___x_413_);
v___x_449_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_node_443_, v___x_447_, v___x_448_, v_x_409_, v_x_410_);
if (v_isShared_446_ == 0)
{
lean_ctor_set(v___x_445_, 0, v___x_449_);
v___x_451_ = v___x_445_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
v___y_426_ = v___x_451_;
goto v___jp_425_;
}
}
}
default: 
{
lean_object* v___x_454_; 
v___x_454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_454_, 0, v_x_409_);
lean_ctor_set(v___x_454_, 1, v_x_410_);
v___y_426_ = v___x_454_;
goto v___jp_425_;
}
}
v___jp_425_:
{
lean_object* v___x_427_; lean_object* v___x_429_; 
v___x_427_ = lean_array_fset(v_xs_x27_424_, v_j_416_, v___y_426_);
lean_dec(v_j_416_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 0, v___x_427_);
v___x_429_ = v___x_420_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
}
}
}
else
{
lean_object* v_ks_457_; lean_object* v_vs_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_478_; 
v_ks_457_ = lean_ctor_get(v_x_406_, 0);
v_vs_458_ = lean_ctor_get(v_x_406_, 1);
v_isSharedCheck_478_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_478_ == 0)
{
v___x_460_ = v_x_406_;
v_isShared_461_ = v_isSharedCheck_478_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_vs_458_);
lean_inc(v_ks_457_);
lean_dec(v_x_406_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_478_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_ks_457_);
lean_ctor_set(v_reuseFailAlloc_477_, 1, v_vs_458_);
v___x_463_ = v_reuseFailAlloc_477_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v_newNode_464_; uint8_t v___y_466_; size_t v___x_472_; uint8_t v___x_473_; 
v_newNode_464_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(v___x_463_, v_x_409_, v_x_410_);
v___x_472_ = ((size_t)7ULL);
v___x_473_ = lean_usize_dec_le(v___x_472_, v_x_408_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_474_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_464_);
v___x_475_ = lean_unsigned_to_nat(4u);
v___x_476_ = lean_nat_dec_lt(v___x_474_, v___x_475_);
lean_dec(v___x_474_);
v___y_466_ = v___x_476_;
goto v___jp_465_;
}
else
{
v___y_466_ = v___x_473_;
goto v___jp_465_;
}
v___jp_465_:
{
if (v___y_466_ == 0)
{
lean_object* v_ks_467_; lean_object* v_vs_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v_ks_467_ = lean_ctor_get(v_newNode_464_, 0);
lean_inc_ref(v_ks_467_);
v_vs_468_ = lean_ctor_get(v_newNode_464_, 1);
lean_inc_ref(v_vs_468_);
lean_dec_ref(v_newNode_464_);
v___x_469_ = lean_unsigned_to_nat(0u);
v___x_470_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__2);
v___x_471_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(v_x_408_, v_ks_467_, v_vs_468_, v___x_469_, v___x_470_);
lean_dec_ref(v_vs_468_);
lean_dec_ref(v_ks_467_);
return v___x_471_;
}
else
{
return v_newNode_464_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(size_t v_depth_479_, lean_object* v_keys_480_, lean_object* v_vals_481_, lean_object* v_i_482_, lean_object* v_entries_483_){
_start:
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = lean_array_get_size(v_keys_480_);
v___x_485_ = lean_nat_dec_lt(v_i_482_, v___x_484_);
if (v___x_485_ == 0)
{
lean_dec(v_i_482_);
return v_entries_483_;
}
else
{
lean_object* v_k_486_; lean_object* v_v_487_; uint64_t v___x_488_; size_t v_h_489_; size_t v___x_490_; lean_object* v___x_491_; size_t v___x_492_; size_t v___x_493_; size_t v___x_494_; size_t v_h_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v_k_486_ = lean_array_fget_borrowed(v_keys_480_, v_i_482_);
v_v_487_ = lean_array_fget_borrowed(v_vals_481_, v_i_482_);
v___x_488_ = l_Lean_instHashableMVarId_hash(v_k_486_);
v_h_489_ = lean_uint64_to_usize(v___x_488_);
v___x_490_ = ((size_t)5ULL);
v___x_491_ = lean_unsigned_to_nat(1u);
v___x_492_ = ((size_t)1ULL);
v___x_493_ = lean_usize_sub(v_depth_479_, v___x_492_);
v___x_494_ = lean_usize_mul(v___x_490_, v___x_493_);
v_h_495_ = lean_usize_shift_right(v_h_489_, v___x_494_);
v___x_496_ = lean_nat_add(v_i_482_, v___x_491_);
lean_dec(v_i_482_);
lean_inc(v_v_487_);
lean_inc(v_k_486_);
v___x_497_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_entries_483_, v_h_495_, v_depth_479_, v_k_486_, v_v_487_);
v_i_482_ = v___x_496_;
v_entries_483_ = v___x_497_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg___boxed(lean_object* v_depth_499_, lean_object* v_keys_500_, lean_object* v_vals_501_, lean_object* v_i_502_, lean_object* v_entries_503_){
_start:
{
size_t v_depth_boxed_504_; lean_object* v_res_505_; 
v_depth_boxed_504_ = lean_unbox_usize(v_depth_499_);
lean_dec(v_depth_499_);
v_res_505_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(v_depth_boxed_504_, v_keys_500_, v_vals_501_, v_i_502_, v_entries_503_);
lean_dec_ref(v_vals_501_);
lean_dec_ref(v_keys_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_x_506_, lean_object* v_x_507_, lean_object* v_x_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
size_t v_x_33547__boxed_511_; size_t v_x_33548__boxed_512_; lean_object* v_res_513_; 
v_x_33547__boxed_511_ = lean_unbox_usize(v_x_507_);
lean_dec(v_x_507_);
v_x_33548__boxed_512_ = lean_unbox_usize(v_x_508_);
lean_dec(v_x_508_);
v_res_513_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_x_506_, v_x_33547__boxed_511_, v_x_33548__boxed_512_, v_x_509_, v_x_510_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(lean_object* v_x_514_, lean_object* v_x_515_, lean_object* v_x_516_){
_start:
{
uint64_t v___x_517_; size_t v___x_518_; size_t v___x_519_; lean_object* v___x_520_; 
v___x_517_ = l_Lean_instHashableMVarId_hash(v_x_515_);
v___x_518_ = lean_uint64_to_usize(v___x_517_);
v___x_519_ = ((size_t)1ULL);
v___x_520_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_x_514_, v___x_518_, v___x_519_, v_x_515_, v_x_516_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(lean_object* v_mvarId_521_, lean_object* v_val_522_, lean_object* v___y_523_, lean_object* v___y_524_){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v_mctx_528_; lean_object* v_cache_529_; lean_object* v_zetaDeltaFVarIds_530_; lean_object* v_postponed_531_; lean_object* v_diag_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_560_; 
v___x_526_ = lean_st_ref_get(v___y_524_);
lean_dec(v___x_526_);
v___x_527_ = lean_st_ref_take(v___y_523_);
v_mctx_528_ = lean_ctor_get(v___x_527_, 0);
v_cache_529_ = lean_ctor_get(v___x_527_, 1);
v_zetaDeltaFVarIds_530_ = lean_ctor_get(v___x_527_, 2);
v_postponed_531_ = lean_ctor_get(v___x_527_, 3);
v_diag_532_ = lean_ctor_get(v___x_527_, 4);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_527_);
if (v_isSharedCheck_560_ == 0)
{
v___x_534_ = v___x_527_;
v_isShared_535_ = v_isSharedCheck_560_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_diag_532_);
lean_inc(v_postponed_531_);
lean_inc(v_zetaDeltaFVarIds_530_);
lean_inc(v_cache_529_);
lean_inc(v_mctx_528_);
lean_dec(v___x_527_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_560_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v_depth_536_; lean_object* v_levelAssignDepth_537_; lean_object* v_lmvarCounter_538_; lean_object* v_mvarCounter_539_; lean_object* v_lDecls_540_; lean_object* v_decls_541_; lean_object* v_userNames_542_; lean_object* v_lAssignment_543_; lean_object* v_eAssignment_544_; lean_object* v_dAssignment_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_559_; 
v_depth_536_ = lean_ctor_get(v_mctx_528_, 0);
v_levelAssignDepth_537_ = lean_ctor_get(v_mctx_528_, 1);
v_lmvarCounter_538_ = lean_ctor_get(v_mctx_528_, 2);
v_mvarCounter_539_ = lean_ctor_get(v_mctx_528_, 3);
v_lDecls_540_ = lean_ctor_get(v_mctx_528_, 4);
v_decls_541_ = lean_ctor_get(v_mctx_528_, 5);
v_userNames_542_ = lean_ctor_get(v_mctx_528_, 6);
v_lAssignment_543_ = lean_ctor_get(v_mctx_528_, 7);
v_eAssignment_544_ = lean_ctor_get(v_mctx_528_, 8);
v_dAssignment_545_ = lean_ctor_get(v_mctx_528_, 9);
v_isSharedCheck_559_ = !lean_is_exclusive(v_mctx_528_);
if (v_isSharedCheck_559_ == 0)
{
v___x_547_ = v_mctx_528_;
v_isShared_548_ = v_isSharedCheck_559_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_dAssignment_545_);
lean_inc(v_eAssignment_544_);
lean_inc(v_lAssignment_543_);
lean_inc(v_userNames_542_);
lean_inc(v_decls_541_);
lean_inc(v_lDecls_540_);
lean_inc(v_mvarCounter_539_);
lean_inc(v_lmvarCounter_538_);
lean_inc(v_levelAssignDepth_537_);
lean_inc(v_depth_536_);
lean_dec(v_mctx_528_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_559_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_549_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(v_eAssignment_544_, v_mvarId_521_, v_val_522_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 8, v___x_549_);
v___x_551_ = v___x_547_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_depth_536_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_levelAssignDepth_537_);
lean_ctor_set(v_reuseFailAlloc_558_, 2, v_lmvarCounter_538_);
lean_ctor_set(v_reuseFailAlloc_558_, 3, v_mvarCounter_539_);
lean_ctor_set(v_reuseFailAlloc_558_, 4, v_lDecls_540_);
lean_ctor_set(v_reuseFailAlloc_558_, 5, v_decls_541_);
lean_ctor_set(v_reuseFailAlloc_558_, 6, v_userNames_542_);
lean_ctor_set(v_reuseFailAlloc_558_, 7, v_lAssignment_543_);
lean_ctor_set(v_reuseFailAlloc_558_, 8, v___x_549_);
lean_ctor_set(v_reuseFailAlloc_558_, 9, v_dAssignment_545_);
v___x_551_ = v_reuseFailAlloc_558_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
lean_object* v___x_553_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_551_);
v___x_553_ = v___x_534_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v___x_551_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v_cache_529_);
lean_ctor_set(v_reuseFailAlloc_557_, 2, v_zetaDeltaFVarIds_530_);
lean_ctor_set(v_reuseFailAlloc_557_, 3, v_postponed_531_);
lean_ctor_set(v_reuseFailAlloc_557_, 4, v_diag_532_);
v___x_553_ = v_reuseFailAlloc_557_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; 
v___x_554_ = lean_st_ref_set(v___y_523_, v___x_553_);
v___x_555_ = lean_box(0);
v___x_556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_556_, 0, v___x_555_);
return v___x_556_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg___boxed(lean_object* v_mvarId_561_, lean_object* v_val_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_){
_start:
{
lean_object* v_res_566_; 
v_res_566_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v_mvarId_561_, v_val_562_, v___y_563_, v___y_564_);
lean_dec(v___y_564_);
lean_dec(v___y_563_);
return v_res_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(lean_object* v_msgData_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_){
_start:
{
lean_object* v___x_573_; lean_object* v_env_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v_mctx_577_; lean_object* v_lctx_578_; lean_object* v_options_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_573_ = lean_st_ref_get(v___y_571_);
v_env_574_ = lean_ctor_get(v___x_573_, 0);
lean_inc_ref(v_env_574_);
lean_dec(v___x_573_);
v___x_575_ = lean_st_ref_get(v___y_571_);
lean_dec(v___x_575_);
v___x_576_ = lean_st_ref_get(v___y_569_);
v_mctx_577_ = lean_ctor_get(v___x_576_, 0);
lean_inc_ref(v_mctx_577_);
lean_dec(v___x_576_);
v_lctx_578_ = lean_ctor_get(v___y_568_, 2);
v_options_579_ = lean_ctor_get(v___y_570_, 2);
lean_inc_ref(v_options_579_);
lean_inc_ref(v_lctx_578_);
v___x_580_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_580_, 0, v_env_574_);
lean_ctor_set(v___x_580_, 1, v_mctx_577_);
lean_ctor_set(v___x_580_, 2, v_lctx_578_);
lean_ctor_set(v___x_580_, 3, v_options_579_);
v___x_581_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
lean_ctor_set(v___x_581_, 1, v_msgData_567_);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3___boxed(lean_object* v_msgData_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(v_msgData_583_, v___y_584_, v___y_585_, v___y_586_, v___y_587_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___y_585_);
lean_dec_ref(v___y_584_);
return v_res_589_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0(void){
_start:
{
lean_object* v___x_590_; double v___x_591_; 
v___x_590_ = lean_unsigned_to_nat(0u);
v___x_591_ = lean_float_of_nat(v___x_590_);
return v___x_591_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1(void){
_start:
{
lean_object* v___x_592_; 
v___x_592_ = lean_mk_string_unchecked("", 0, 0);
return v___x_592_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_unsigned_to_nat(0u);
v___x_594_ = lean_mk_empty_array_with_capacity(v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(lean_object* v_cls_595_, lean_object* v_msg_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
lean_object* v_ref_602_; lean_object* v___x_603_; lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_648_; 
v_ref_602_ = lean_ctor_get(v___y_599_, 5);
v___x_603_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(v_msg_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_);
v_a_604_ = lean_ctor_get(v___x_603_, 0);
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_648_ == 0)
{
v___x_606_ = v___x_603_;
v_isShared_607_ = v_isSharedCheck_648_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_603_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_648_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_608_; lean_object* v_traceState_609_; lean_object* v_env_610_; lean_object* v_nextMacroScope_611_; lean_object* v_ngen_612_; lean_object* v_auxDeclNGen_613_; lean_object* v_cache_614_; lean_object* v_messages_615_; lean_object* v_infoState_616_; lean_object* v_snapshotTasks_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_647_; 
v___x_608_ = lean_st_ref_take(v___y_600_);
v_traceState_609_ = lean_ctor_get(v___x_608_, 4);
v_env_610_ = lean_ctor_get(v___x_608_, 0);
v_nextMacroScope_611_ = lean_ctor_get(v___x_608_, 1);
v_ngen_612_ = lean_ctor_get(v___x_608_, 2);
v_auxDeclNGen_613_ = lean_ctor_get(v___x_608_, 3);
v_cache_614_ = lean_ctor_get(v___x_608_, 5);
v_messages_615_ = lean_ctor_get(v___x_608_, 6);
v_infoState_616_ = lean_ctor_get(v___x_608_, 7);
v_snapshotTasks_617_ = lean_ctor_get(v___x_608_, 8);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_608_);
if (v_isSharedCheck_647_ == 0)
{
v___x_619_ = v___x_608_;
v_isShared_620_ = v_isSharedCheck_647_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_snapshotTasks_617_);
lean_inc(v_infoState_616_);
lean_inc(v_messages_615_);
lean_inc(v_cache_614_);
lean_inc(v_traceState_609_);
lean_inc(v_auxDeclNGen_613_);
lean_inc(v_ngen_612_);
lean_inc(v_nextMacroScope_611_);
lean_inc(v_env_610_);
lean_dec(v___x_608_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_647_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
uint64_t v_tid_621_; lean_object* v_traces_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_646_; 
v_tid_621_ = lean_ctor_get_uint64(v_traceState_609_, sizeof(void*)*1);
v_traces_622_ = lean_ctor_get(v_traceState_609_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v_traceState_609_);
if (v_isSharedCheck_646_ == 0)
{
v___x_624_ = v_traceState_609_;
v_isShared_625_ = v_isSharedCheck_646_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_traces_622_);
lean_dec(v_traceState_609_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_646_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___x_626_; double v___x_627_; uint8_t v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_636_; 
v___x_626_ = lean_box(0);
v___x_627_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0, &l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__0);
v___x_628_ = 0;
v___x_629_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1, &l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__1);
v___x_630_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_630_, 0, v_cls_595_);
lean_ctor_set(v___x_630_, 1, v___x_626_);
lean_ctor_set(v___x_630_, 2, v___x_629_);
lean_ctor_set_float(v___x_630_, sizeof(void*)*3, v___x_627_);
lean_ctor_set_float(v___x_630_, sizeof(void*)*3 + 8, v___x_627_);
lean_ctor_set_uint8(v___x_630_, sizeof(void*)*3 + 16, v___x_628_);
v___x_631_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2, &l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___closed__2);
v___x_632_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_632_, 0, v___x_630_);
lean_ctor_set(v___x_632_, 1, v_a_604_);
lean_ctor_set(v___x_632_, 2, v___x_631_);
lean_inc(v_ref_602_);
v___x_633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_633_, 0, v_ref_602_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = l_Lean_PersistentArray_push___redArg(v_traces_622_, v___x_633_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v___x_634_);
v___x_636_ = v___x_624_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_634_);
lean_ctor_set_uint64(v_reuseFailAlloc_645_, sizeof(void*)*1, v_tid_621_);
v___x_636_ = v_reuseFailAlloc_645_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
lean_object* v___x_638_; 
if (v_isShared_620_ == 0)
{
lean_ctor_set(v___x_619_, 4, v___x_636_);
v___x_638_ = v___x_619_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_env_610_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_nextMacroScope_611_);
lean_ctor_set(v_reuseFailAlloc_644_, 2, v_ngen_612_);
lean_ctor_set(v_reuseFailAlloc_644_, 3, v_auxDeclNGen_613_);
lean_ctor_set(v_reuseFailAlloc_644_, 4, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_644_, 5, v_cache_614_);
lean_ctor_set(v_reuseFailAlloc_644_, 6, v_messages_615_);
lean_ctor_set(v_reuseFailAlloc_644_, 7, v_infoState_616_);
lean_ctor_set(v_reuseFailAlloc_644_, 8, v_snapshotTasks_617_);
v___x_638_ = v_reuseFailAlloc_644_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_639_ = lean_st_ref_set(v___y_600_, v___x_638_);
v___x_640_ = lean_box(0);
if (v_isShared_607_ == 0)
{
lean_ctor_set(v___x_606_, 0, v___x_640_);
v___x_642_ = v___x_606_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3___boxed(lean_object* v_cls_649_, lean_object* v_msg_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v_cls_649_, v_msg_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
return v_res_656_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__0(void){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_mk_string_unchecked("after intro rest ", 17, 17);
return v___x_657_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__1(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__0, &l_Lean_Meta_substCore___lam__2___closed__0_once, _init_l_Lean_Meta_substCore___lam__2___closed__0);
v___x_659_ = l_Lean_stringToMessageData(v___x_658_);
return v___x_659_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__2(void){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_660_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__3(void){
_start:
{
lean_object* v___x_661_; lean_object* v___x_662_; 
v___x_661_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__2, &l_Lean_Meta_substCore___lam__2___closed__2_once, _init_l_Lean_Meta_substCore___lam__2___closed__2);
v___x_662_ = l_Lean_stringToMessageData(v___x_661_);
return v___x_662_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__4(void){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = lean_mk_string_unchecked("Lean.Meta.Tactic.Subst", 22, 22);
return v___x_663_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__5(void){
_start:
{
lean_object* v___x_664_; 
v___x_664_ = lean_mk_string_unchecked("Lean.Meta.substCore", 19, 19);
return v___x_664_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__6(void){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_665_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__7(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_666_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__6, &l_Lean_Meta_substCore___lam__2___closed__6_once, _init_l_Lean_Meta_substCore___lam__2___closed__6);
v___x_667_ = lean_unsigned_to_nat(22u);
v___x_668_ = lean_unsigned_to_nat(64u);
v___x_669_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__5, &l_Lean_Meta_substCore___lam__2___closed__5_once, _init_l_Lean_Meta_substCore___lam__2___closed__5);
v___x_670_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__4, &l_Lean_Meta_substCore___lam__2___closed__4_once, _init_l_Lean_Meta_substCore___lam__2___closed__4);
v___x_671_ = l_mkPanicMessageWithDecl(v___x_670_, v___x_669_, v___x_668_, v___x_667_, v___x_666_);
return v___x_671_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__8(void){
_start:
{
lean_object* v___x_672_; 
v___x_672_ = lean_mk_string_unchecked("_h", 2, 2);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__2___closed__9(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; 
v___x_673_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__8, &l_Lean_Meta_substCore___lam__2___closed__8_once, _init_l_Lean_Meta_substCore___lam__2___closed__8);
v___x_674_ = l_Lean_Name_mkStr1(v___x_673_);
return v___x_674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object* v_snd_675_, lean_object* v___x_676_, lean_object* v_fvarId_677_, lean_object* v_hFVarId_678_, lean_object* v___x_679_, lean_object* v_fst_680_, lean_object* v_fvarSubst_681_, uint8_t v_clearH_682_, lean_object* v___x_683_, lean_object* v___x_684_, lean_object* v___x_685_, uint8_t v_skip_686_, uint8_t v___x_687_, lean_object* v___x_688_, lean_object* v___x_689_, lean_object* v_a_690_, uint8_t v_symm_691_, uint8_t v___x_692_, lean_object* v___x_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v___y_700_; lean_object* v___y_701_; lean_object* v___y_702_; lean_object* v___y_708_; lean_object* v___y_709_; lean_object* v___y_710_; lean_object* v___y_716_; lean_object* v_mvarId_717_; lean_object* v___y_718_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v_newVal_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; uint8_t v___y_802_; lean_object* v_major_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_806_; lean_object* v___y_807_; lean_object* v___y_840_; uint8_t v___y_841_; lean_object* v_motive_842_; lean_object* v_newType_843_; lean_object* v___y_844_; lean_object* v___y_845_; lean_object* v___y_846_; lean_object* v___y_847_; lean_object* v___x_858_; 
lean_inc(v_snd_675_);
v___x_858_ = l_Lean_MVarId_getDecl(v_snd_675_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_860_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref(v___x_858_);
lean_inc(v___x_676_);
v___x_860_ = l_Lean_FVarId_getDecl___redArg(v___x_676_, v___y_694_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref(v___x_860_);
v___x_862_ = l_Lean_LocalDecl_type(v_a_861_);
lean_dec(v_a_861_);
v___x_863_ = l_Lean_Meta_matchEq_x3f(v___x_862_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_a_864_);
lean_dec_ref(v___x_863_);
if (lean_obj_tag(v_a_864_) == 0)
{
lean_object* v___x_865_; lean_object* v___x_866_; 
lean_dec(v_a_859_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v___x_865_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__7, &l_Lean_Meta_substCore___lam__2___closed__7_once, _init_l_Lean_Meta_substCore___lam__2___closed__7);
v___x_866_ = l_panic___at___00Lean_Meta_substCore_spec__1(v___x_865_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
return v___x_866_;
}
else
{
lean_object* v_val_867_; lean_object* v_snd_868_; lean_object* v_fst_869_; lean_object* v_snd_870_; lean_object* v_type_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___f_874_; lean_object* v___y_876_; 
v_val_867_ = lean_ctor_get(v_a_864_, 0);
lean_inc(v_val_867_);
lean_dec_ref(v_a_864_);
v_snd_868_ = lean_ctor_get(v_val_867_, 1);
lean_inc(v_snd_868_);
lean_dec(v_val_867_);
v_fst_869_ = lean_ctor_get(v_snd_868_, 0);
lean_inc(v_fst_869_);
v_snd_870_ = lean_ctor_get(v_snd_868_, 1);
lean_inc(v_snd_870_);
lean_dec(v_snd_868_);
v_type_871_ = lean_ctor_get(v_a_859_, 2);
lean_inc_ref_n(v_type_871_, 2);
lean_dec(v_a_859_);
v___x_872_ = lean_box(v___x_692_);
v___x_873_ = lean_box(v___x_687_);
lean_inc_ref(v___x_683_);
lean_inc(v___x_684_);
lean_inc_ref(v___x_679_);
v___f_874_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__1___boxed), 12, 6);
lean_closure_set(v___f_874_, 0, v_type_871_);
lean_closure_set(v___f_874_, 1, v___x_679_);
lean_closure_set(v___f_874_, 2, v___x_684_);
lean_closure_set(v___f_874_, 3, v___x_683_);
lean_closure_set(v___f_874_, 4, v___x_872_);
lean_closure_set(v___f_874_, 5, v___x_873_);
if (v_symm_691_ == 0)
{
lean_dec(v_fst_869_);
v___y_876_ = v_snd_870_;
goto v___jp_875_;
}
else
{
lean_dec(v_snd_870_);
v___y_876_ = v_fst_869_;
goto v___jp_875_;
}
v___jp_875_:
{
lean_object* v___x_877_; lean_object* v_a_878_; lean_object* v___x_879_; lean_object* v_a_880_; uint8_t v___x_881_; 
v___x_877_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_876_, v___y_695_, v___y_697_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_a_878_);
lean_dec_ref(v___x_877_);
lean_inc(v___x_676_);
lean_inc_ref(v_type_871_);
v___x_879_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_type_871_, v___x_676_, v___y_695_, v___y_697_);
v_a_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_a_880_);
lean_dec_ref(v___x_879_);
v___x_881_ = lean_unbox(v_a_880_);
if (v___x_881_ == 0)
{
lean_object* v___x_882_; lean_object* v___x_883_; uint8_t v___x_884_; lean_object* v___x_885_; 
lean_dec_ref(v___f_874_);
v___x_882_ = lean_mk_empty_array_with_capacity(v___x_693_);
lean_inc_ref(v___x_683_);
v___x_883_ = lean_array_push(v___x_882_, v___x_683_);
v___x_884_ = 1;
lean_inc_ref(v_type_871_);
v___x_885_ = l_Lean_Meta_mkLambdaFVars(v___x_883_, v_type_871_, v___x_692_, v___x_687_, v___x_692_, v___x_687_, v___x_884_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
lean_dec_ref(v___x_883_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v___x_887_; uint8_t v___x_888_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref(v___x_885_);
lean_inc_ref(v___x_683_);
v___x_887_ = l_Lean_Expr_replaceFVar(v_type_871_, v___x_683_, v_a_878_);
lean_dec_ref(v_type_871_);
v___x_888_ = lean_unbox(v_a_880_);
lean_dec(v_a_880_);
v___y_840_ = v_a_878_;
v___y_841_ = v___x_888_;
v_motive_842_ = v_a_886_;
v_newType_843_ = v___x_887_;
v___y_844_ = v___y_694_;
v___y_845_ = v___y_695_;
v___y_846_ = v___y_696_;
v___y_847_ = v___y_697_;
goto v___jp_839_;
}
else
{
lean_object* v_a_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_896_; 
lean_dec(v_a_880_);
lean_dec(v_a_878_);
lean_dec_ref(v_type_871_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_889_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_896_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_896_ == 0)
{
v___x_891_ = v___x_885_;
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_a_889_);
lean_dec(v___x_885_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_896_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_894_; 
if (v_isShared_892_ == 0)
{
v___x_894_ = v___x_891_;
goto v_reusejp_893_;
}
else
{
lean_object* v_reuseFailAlloc_895_; 
v_reuseFailAlloc_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_895_, 0, v_a_889_);
v___x_894_ = v_reuseFailAlloc_895_;
goto v_reusejp_893_;
}
v_reusejp_893_:
{
return v___x_894_;
}
}
}
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; 
lean_inc_ref(v___x_683_);
v___x_897_ = l_Lean_Expr_replaceFVar(v_type_871_, v___x_683_, v_a_878_);
lean_inc(v_a_878_);
v___x_898_ = l_Lean_Meta_mkEqRefl(v_a_878_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v_a_899_; lean_object* v___x_900_; 
v_a_899_ = lean_ctor_get(v___x_898_, 0);
lean_inc(v_a_899_);
lean_dec_ref(v___x_898_);
lean_inc_ref(v___x_679_);
v___x_900_ = l_Lean_Expr_replaceFVar(v___x_897_, v___x_679_, v_a_899_);
lean_dec(v_a_899_);
lean_dec_ref(v___x_897_);
if (v_symm_691_ == 0)
{
lean_object* v___x_901_; 
lean_dec_ref(v_type_871_);
lean_inc_ref(v___x_683_);
lean_inc(v_a_878_);
v___x_901_ = l_Lean_Meta_mkEq(v_a_878_, v___x_683_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_901_) == 0)
{
lean_object* v_a_902_; lean_object* v___x_903_; lean_object* v___x_904_; 
v_a_902_ = lean_ctor_get(v___x_901_, 0);
lean_inc(v_a_902_);
lean_dec_ref(v___x_901_);
v___x_903_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__9, &l_Lean_Meta_substCore___lam__2___closed__9_once, _init_l_Lean_Meta_substCore___lam__2___closed__9);
v___x_904_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(v___x_903_, v_a_902_, v___f_874_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; uint8_t v___x_906_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
lean_dec_ref(v___x_904_);
v___x_906_ = lean_unbox(v_a_880_);
lean_dec(v_a_880_);
v___y_840_ = v_a_878_;
v___y_841_ = v___x_906_;
v_motive_842_ = v_a_905_;
v_newType_843_ = v___x_900_;
v___y_844_ = v___y_694_;
v___y_845_ = v___y_695_;
v___y_846_ = v___y_696_;
v___y_847_ = v___y_697_;
goto v___jp_839_;
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v___x_900_);
lean_dec(v_a_880_);
lean_dec(v_a_878_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_907_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_904_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_904_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
else
{
lean_object* v_a_915_; lean_object* v___x_917_; uint8_t v_isShared_918_; uint8_t v_isSharedCheck_922_; 
lean_dec_ref(v___x_900_);
lean_dec(v_a_880_);
lean_dec(v_a_878_);
lean_dec_ref(v___f_874_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_915_ = lean_ctor_get(v___x_901_, 0);
v_isSharedCheck_922_ = !lean_is_exclusive(v___x_901_);
if (v_isSharedCheck_922_ == 0)
{
v___x_917_ = v___x_901_;
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
else
{
lean_inc(v_a_915_);
lean_dec(v___x_901_);
v___x_917_ = lean_box(0);
v_isShared_918_ = v_isSharedCheck_922_;
goto v_resetjp_916_;
}
v_resetjp_916_:
{
lean_object* v___x_920_; 
if (v_isShared_918_ == 0)
{
v___x_920_ = v___x_917_;
goto v_reusejp_919_;
}
else
{
lean_object* v_reuseFailAlloc_921_; 
v_reuseFailAlloc_921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_921_, 0, v_a_915_);
v___x_920_ = v_reuseFailAlloc_921_;
goto v_reusejp_919_;
}
v_reusejp_919_:
{
return v___x_920_;
}
}
}
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; uint8_t v___x_926_; lean_object* v___x_927_; 
lean_dec_ref(v___f_874_);
v___x_923_ = lean_mk_empty_array_with_capacity(v___x_684_);
lean_inc_ref(v___x_683_);
v___x_924_ = lean_array_push(v___x_923_, v___x_683_);
lean_inc_ref(v___x_679_);
v___x_925_ = lean_array_push(v___x_924_, v___x_679_);
v___x_926_ = 1;
v___x_927_ = l_Lean_Meta_mkLambdaFVars(v___x_925_, v_type_871_, v___x_692_, v___x_687_, v___x_692_, v___x_687_, v___x_926_, v___y_694_, v___y_695_, v___y_696_, v___y_697_);
lean_dec_ref(v___x_925_);
if (lean_obj_tag(v___x_927_) == 0)
{
lean_object* v_a_928_; uint8_t v___x_929_; 
v_a_928_ = lean_ctor_get(v___x_927_, 0);
lean_inc(v_a_928_);
lean_dec_ref(v___x_927_);
v___x_929_ = lean_unbox(v_a_880_);
lean_dec(v_a_880_);
v___y_840_ = v_a_878_;
v___y_841_ = v___x_929_;
v_motive_842_ = v_a_928_;
v_newType_843_ = v___x_900_;
v___y_844_ = v___y_694_;
v___y_845_ = v___y_695_;
v___y_846_ = v___y_696_;
v___y_847_ = v___y_697_;
goto v___jp_839_;
}
else
{
lean_object* v_a_930_; lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_937_; 
lean_dec_ref(v___x_900_);
lean_dec(v_a_880_);
lean_dec(v_a_878_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_930_ = lean_ctor_get(v___x_927_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_927_);
if (v_isSharedCheck_937_ == 0)
{
v___x_932_ = v___x_927_;
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
else
{
lean_inc(v_a_930_);
lean_dec(v___x_927_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_937_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_935_; 
if (v_isShared_933_ == 0)
{
v___x_935_ = v___x_932_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_a_930_);
v___x_935_ = v_reuseFailAlloc_936_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
return v___x_935_;
}
}
}
}
}
else
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec_ref(v___x_897_);
lean_dec(v_a_880_);
lean_dec(v_a_878_);
lean_dec_ref(v___f_874_);
lean_dec_ref(v_type_871_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_938_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_898_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_898_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v___x_943_; 
if (v_isShared_941_ == 0)
{
v___x_943_ = v___x_940_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_a_938_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_dec(v_a_859_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_946_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_863_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_863_);
v___x_948_ = lean_box(0);
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
v_resetjp_947_:
{
lean_object* v___x_951_; 
if (v_isShared_949_ == 0)
{
v___x_951_ = v___x_948_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v_a_946_);
v___x_951_ = v_reuseFailAlloc_952_;
goto v_reusejp_950_;
}
v_reusejp_950_:
{
return v___x_951_;
}
}
}
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec(v_a_859_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_954_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_860_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_860_);
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
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_969_; 
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_962_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_969_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_969_ == 0)
{
v___x_964_ = v___x_858_;
v_isShared_965_ = v_isSharedCheck_969_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_858_);
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
v___jp_699_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_703_ = l_Lean_Meta_FVarSubst_insert(v___y_700_, v_fvarId_677_, v___y_702_);
v___x_704_ = l_Lean_Meta_FVarSubst_insert(v___x_703_, v_hFVarId_678_, v___x_679_);
v___x_705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_705_, 0, v___x_704_);
lean_ctor_set(v___x_705_, 1, v___y_701_);
v___x_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_706_, 0, v___x_705_);
return v___x_706_;
}
v___jp_707_:
{
lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_711_ = lean_array_get_size(v___y_709_);
v___x_712_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(v_fst_680_, v___y_709_, v___x_711_, v___x_711_, v_fvarSubst_681_);
lean_dec_ref(v___y_709_);
if (v_clearH_682_ == 0)
{
lean_object* v_a_713_; 
lean_dec_ref(v___y_710_);
v_a_713_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_713_);
lean_dec_ref(v___x_712_);
v___y_700_ = v_a_713_;
v___y_701_ = v___y_708_;
v___y_702_ = v___x_683_;
goto v___jp_699_;
}
else
{
lean_object* v_a_714_; 
lean_dec_ref(v___x_683_);
v_a_714_ = lean_ctor_get(v___x_712_, 0);
lean_inc(v_a_714_);
lean_dec_ref(v___x_712_);
v___y_700_ = v_a_714_;
v___y_701_ = v___y_708_;
v___y_702_ = v___y_710_;
goto v___jp_699_;
}
}
v___jp_715_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_722_ = lean_array_get_size(v_fst_680_);
v___x_723_ = lean_nat_sub(v___x_722_, v___x_684_);
lean_dec(v___x_684_);
lean_inc(v___x_723_);
v___x_724_ = l_Lean_Meta_introNCore(v_mvarId_717_, v___x_723_, v___x_685_, v_skip_686_, v___x_687_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v_options_726_; uint8_t v_hasTrace_727_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref(v___x_724_);
v_options_726_ = lean_ctor_get(v___y_720_, 2);
v_hasTrace_727_ = lean_ctor_get_uint8(v_options_726_, sizeof(void*)*1);
if (v_hasTrace_727_ == 0)
{
lean_object* v_fst_728_; lean_object* v_snd_729_; 
lean_dec(v___x_723_);
lean_dec(v___x_688_);
v_fst_728_ = lean_ctor_get(v_a_725_, 0);
lean_inc(v_fst_728_);
v_snd_729_ = lean_ctor_get(v_a_725_, 1);
lean_inc(v_snd_729_);
lean_dec(v_a_725_);
v___y_708_ = v_snd_729_;
v___y_709_ = v_fst_728_;
v___y_710_ = v___y_716_;
goto v___jp_707_;
}
else
{
lean_object* v_fst_730_; lean_object* v_snd_731_; lean_object* v___x_733_; uint8_t v_isShared_734_; uint8_t v_isSharedCheck_759_; 
v_fst_730_ = lean_ctor_get(v_a_725_, 0);
v_snd_731_ = lean_ctor_get(v_a_725_, 1);
v_isSharedCheck_759_ = !lean_is_exclusive(v_a_725_);
if (v_isSharedCheck_759_ == 0)
{
v___x_733_ = v_a_725_;
v_isShared_734_ = v_isSharedCheck_759_;
goto v_resetjp_732_;
}
else
{
lean_inc(v_snd_731_);
lean_inc(v_fst_730_);
lean_dec(v_a_725_);
v___x_733_ = lean_box(0);
v_isShared_734_ = v_isSharedCheck_759_;
goto v_resetjp_732_;
}
v_resetjp_732_:
{
lean_object* v_inheritedTraceOptions_735_; lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v_inheritedTraceOptions_735_ = lean_ctor_get(v___y_720_, 13);
v___x_736_ = lean_obj_once(&l_Lean_Meta_substCore___lam__0___closed__1, &l_Lean_Meta_substCore___lam__0___closed__1_once, _init_l_Lean_Meta_substCore___lam__0___closed__1);
lean_inc(v___x_688_);
v___x_737_ = l_Lean_Name_append(v___x_736_, v___x_688_);
v___x_738_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_735_, v_options_726_, v___x_737_);
lean_dec(v___x_737_);
if (v___x_738_ == 0)
{
lean_del_object(v___x_733_);
lean_dec(v___x_723_);
lean_dec(v___x_688_);
v___y_708_ = v_snd_731_;
v___y_709_ = v_fst_730_;
v___y_710_ = v___y_716_;
goto v___jp_707_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_739_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__1, &l_Lean_Meta_substCore___lam__2___closed__1_once, _init_l_Lean_Meta_substCore___lam__2___closed__1);
v___x_740_ = l_Nat_reprFast(v___x_723_);
v___x_741_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
v___x_742_ = l_Lean_MessageData_ofFormat(v___x_741_);
if (v_isShared_734_ == 0)
{
lean_ctor_set_tag(v___x_733_, 7);
lean_ctor_set(v___x_733_, 1, v___x_742_);
lean_ctor_set(v___x_733_, 0, v___x_739_);
v___x_744_ = v___x_733_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v___x_739_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v___x_742_);
v___x_744_ = v_reuseFailAlloc_758_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_745_ = lean_obj_once(&l_Lean_Meta_substCore___lam__2___closed__3, &l_Lean_Meta_substCore___lam__2___closed__3_once, _init_l_Lean_Meta_substCore___lam__2___closed__3);
v___x_746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_746_, 0, v___x_744_);
lean_ctor_set(v___x_746_, 1, v___x_745_);
lean_inc(v_snd_731_);
v___x_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_747_, 0, v_snd_731_);
v___x_748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_748_, 0, v___x_746_);
lean_ctor_set(v___x_748_, 1, v___x_747_);
v___x_749_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___x_688_, v___x_748_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_dec_ref(v___x_749_);
v___y_708_ = v_snd_731_;
v___y_709_ = v_fst_730_;
v___y_710_ = v___y_716_;
goto v___jp_707_;
}
else
{
lean_object* v_a_750_; lean_object* v___x_752_; uint8_t v_isShared_753_; uint8_t v_isSharedCheck_757_; 
lean_dec(v_snd_731_);
lean_dec(v_fst_730_);
lean_dec_ref(v___y_716_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
v_a_750_ = lean_ctor_get(v___x_749_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v___x_749_);
if (v_isSharedCheck_757_ == 0)
{
v___x_752_ = v___x_749_;
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
else
{
lean_inc(v_a_750_);
lean_dec(v___x_749_);
v___x_752_ = lean_box(0);
v_isShared_753_ = v_isSharedCheck_757_;
goto v_resetjp_751_;
}
v_resetjp_751_:
{
lean_object* v___x_755_; 
if (v_isShared_753_ == 0)
{
v___x_755_ = v___x_752_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
}
}
else
{
lean_object* v_a_760_; lean_object* v___x_762_; uint8_t v_isShared_763_; uint8_t v_isSharedCheck_767_; 
lean_dec(v___x_723_);
lean_dec_ref(v___y_716_);
lean_dec(v___x_688_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
v_a_760_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_767_ == 0)
{
v___x_762_ = v___x_724_;
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
else
{
lean_inc(v_a_760_);
lean_dec(v___x_724_);
v___x_762_ = lean_box(0);
v_isShared_763_ = v_isSharedCheck_767_;
goto v_resetjp_761_;
}
v_resetjp_761_:
{
lean_object* v___x_765_; 
if (v_isShared_763_ == 0)
{
v___x_765_ = v___x_762_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_a_760_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
v___jp_768_:
{
lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_776_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v_snd_675_, v_newVal_771_, v___y_773_, v___y_775_);
lean_dec_ref(v___x_776_);
v___x_777_ = l_Lean_Expr_mvarId_x21(v___y_769_);
lean_dec_ref(v___y_769_);
if (v_clearH_682_ == 0)
{
lean_dec(v___x_689_);
lean_dec(v___x_676_);
v___y_716_ = v___y_770_;
v_mvarId_717_ = v___x_777_;
v___y_718_ = v___y_772_;
v___y_719_ = v___y_773_;
v___y_720_ = v___y_774_;
v___y_721_ = v___y_775_;
goto v___jp_715_;
}
else
{
lean_object* v___x_778_; 
v___x_778_ = l_Lean_MVarId_clear(v___x_777_, v___x_676_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
if (lean_obj_tag(v___x_778_) == 0)
{
lean_object* v_a_779_; lean_object* v___x_780_; 
v_a_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_a_779_);
lean_dec_ref(v___x_778_);
v___x_780_ = l_Lean_MVarId_clear(v_a_779_, v___x_689_, v___y_772_, v___y_773_, v___y_774_, v___y_775_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_781_);
lean_dec_ref(v___x_780_);
v___y_716_ = v___y_770_;
v_mvarId_717_ = v_a_781_;
v___y_718_ = v___y_772_;
v___y_719_ = v___y_773_;
v___y_720_ = v___y_774_;
v___y_721_ = v___y_775_;
goto v___jp_715_;
}
else
{
lean_object* v_a_782_; lean_object* v___x_784_; uint8_t v_isShared_785_; uint8_t v_isSharedCheck_789_; 
lean_dec_ref(v___y_770_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
v_a_782_ = lean_ctor_get(v___x_780_, 0);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_780_);
if (v_isSharedCheck_789_ == 0)
{
v___x_784_ = v___x_780_;
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
else
{
lean_inc(v_a_782_);
lean_dec(v___x_780_);
v___x_784_ = lean_box(0);
v_isShared_785_ = v_isSharedCheck_789_;
goto v_resetjp_783_;
}
v_resetjp_783_:
{
lean_object* v___x_787_; 
if (v_isShared_785_ == 0)
{
v___x_787_ = v___x_784_;
goto v_reusejp_786_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_a_782_);
v___x_787_ = v_reuseFailAlloc_788_;
goto v_reusejp_786_;
}
v_reusejp_786_:
{
return v___x_787_;
}
}
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v___y_770_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
v_a_790_ = lean_ctor_get(v___x_778_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_778_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_778_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_778_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
}
v___jp_798_:
{
lean_object* v___x_808_; 
v___x_808_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_801_, v_a_690_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_808_) == 0)
{
if (v___y_802_ == 0)
{
lean_object* v_a_809_; lean_object* v___x_810_; 
v_a_809_ = lean_ctor_get(v___x_808_, 0);
lean_inc_n(v_a_809_, 2);
lean_dec_ref(v___x_808_);
v___x_810_ = l_Lean_Meta_mkEqNDRec(v___y_799_, v_a_809_, v_major_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_810_) == 0)
{
lean_object* v_a_811_; 
v_a_811_ = lean_ctor_get(v___x_810_, 0);
lean_inc(v_a_811_);
lean_dec_ref(v___x_810_);
v___y_769_ = v_a_809_;
v___y_770_ = v___y_800_;
v_newVal_771_ = v_a_811_;
v___y_772_ = v___y_804_;
v___y_773_ = v___y_805_;
v___y_774_ = v___y_806_;
v___y_775_ = v___y_807_;
goto v___jp_768_;
}
else
{
lean_object* v_a_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_819_; 
lean_dec(v_a_809_);
lean_dec_ref(v___y_800_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_812_ = lean_ctor_get(v___x_810_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v___x_810_);
if (v_isSharedCheck_819_ == 0)
{
v___x_814_ = v___x_810_;
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_a_812_);
lean_dec(v___x_810_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_819_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_817_; 
if (v_isShared_815_ == 0)
{
v___x_817_ = v___x_814_;
goto v_reusejp_816_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_a_812_);
v___x_817_ = v_reuseFailAlloc_818_;
goto v_reusejp_816_;
}
v_reusejp_816_:
{
return v___x_817_;
}
}
}
}
else
{
lean_object* v_a_820_; lean_object* v___x_821_; 
v_a_820_ = lean_ctor_get(v___x_808_, 0);
lean_inc_n(v_a_820_, 2);
lean_dec_ref(v___x_808_);
v___x_821_ = l_Lean_Meta_mkEqRec(v___y_799_, v_a_820_, v_major_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref(v___x_821_);
v___y_769_ = v_a_820_;
v___y_770_ = v___y_800_;
v_newVal_771_ = v_a_822_;
v___y_772_ = v___y_804_;
v___y_773_ = v___y_805_;
v___y_774_ = v___y_806_;
v___y_775_ = v___y_807_;
goto v___jp_768_;
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_a_820_);
lean_dec_ref(v___y_800_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_823_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_821_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_821_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_828_; 
if (v_isShared_826_ == 0)
{
v___x_828_ = v___x_825_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_a_823_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
}
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
lean_dec_ref(v_major_803_);
lean_dec_ref(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_831_ = lean_ctor_get(v___x_808_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_808_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_808_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_808_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
v___jp_839_:
{
if (v_symm_691_ == 0)
{
lean_object* v___x_848_; 
lean_inc_ref(v___x_679_);
v___x_848_ = l_Lean_Meta_mkEqSymm(v___x_679_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_a_849_);
lean_dec_ref(v___x_848_);
v___y_799_ = v_motive_842_;
v___y_800_ = v___y_840_;
v___y_801_ = v_newType_843_;
v___y_802_ = v___y_841_;
v_major_803_ = v_a_849_;
v___y_804_ = v___y_844_;
v___y_805_ = v___y_845_;
v___y_806_ = v___y_846_;
v___y_807_ = v___y_847_;
goto v___jp_798_;
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
lean_dec_ref(v_newType_843_);
lean_dec_ref(v_motive_842_);
lean_dec_ref(v___y_840_);
lean_dec(v_a_690_);
lean_dec(v___x_689_);
lean_dec(v___x_688_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
lean_dec_ref(v___x_683_);
lean_dec(v_fvarSubst_681_);
lean_dec_ref(v___x_679_);
lean_dec(v_hFVarId_678_);
lean_dec(v_fvarId_677_);
lean_dec(v___x_676_);
lean_dec(v_snd_675_);
v_a_850_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_848_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_848_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
else
{
lean_inc_ref(v___x_679_);
v___y_799_ = v_motive_842_;
v___y_800_ = v___y_840_;
v___y_801_ = v_newType_843_;
v___y_802_ = v___y_841_;
v_major_803_ = v___x_679_;
v___y_804_ = v___y_844_;
v___y_805_ = v___y_845_;
v___y_806_ = v___y_846_;
v___y_807_ = v___y_847_;
goto v___jp_798_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object** _args){
lean_object* v_snd_970_ = _args[0];
lean_object* v___x_971_ = _args[1];
lean_object* v_fvarId_972_ = _args[2];
lean_object* v_hFVarId_973_ = _args[3];
lean_object* v___x_974_ = _args[4];
lean_object* v_fst_975_ = _args[5];
lean_object* v_fvarSubst_976_ = _args[6];
lean_object* v_clearH_977_ = _args[7];
lean_object* v___x_978_ = _args[8];
lean_object* v___x_979_ = _args[9];
lean_object* v___x_980_ = _args[10];
lean_object* v_skip_981_ = _args[11];
lean_object* v___x_982_ = _args[12];
lean_object* v___x_983_ = _args[13];
lean_object* v___x_984_ = _args[14];
lean_object* v_a_985_ = _args[15];
lean_object* v_symm_986_ = _args[16];
lean_object* v___x_987_ = _args[17];
lean_object* v___x_988_ = _args[18];
lean_object* v___y_989_ = _args[19];
lean_object* v___y_990_ = _args[20];
lean_object* v___y_991_ = _args[21];
lean_object* v___y_992_ = _args[22];
lean_object* v___y_993_ = _args[23];
_start:
{
uint8_t v_clearH_boxed_994_; uint8_t v_skip_boxed_995_; uint8_t v___x_33946__boxed_996_; uint8_t v_symm_boxed_997_; uint8_t v___x_33950__boxed_998_; lean_object* v_res_999_; 
v_clearH_boxed_994_ = lean_unbox(v_clearH_977_);
v_skip_boxed_995_ = lean_unbox(v_skip_981_);
v___x_33946__boxed_996_ = lean_unbox(v___x_982_);
v_symm_boxed_997_ = lean_unbox(v_symm_986_);
v___x_33950__boxed_998_ = lean_unbox(v___x_987_);
v_res_999_ = l_Lean_Meta_substCore___lam__2(v_snd_970_, v___x_971_, v_fvarId_972_, v_hFVarId_973_, v___x_974_, v_fst_975_, v_fvarSubst_976_, v_clearH_boxed_994_, v___x_978_, v___x_979_, v___x_980_, v_skip_boxed_995_, v___x_33946__boxed_996_, v___x_983_, v___x_984_, v_a_985_, v_symm_boxed_997_, v___x_33950__boxed_998_, v___x_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___x_988_);
lean_dec_ref(v_fst_975_);
return v_res_999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t v_sz_1000_, size_t v_i_1001_, lean_object* v_bs_1002_){
_start:
{
uint8_t v___x_1003_; 
v___x_1003_ = lean_usize_dec_lt(v_i_1001_, v_sz_1000_);
if (v___x_1003_ == 0)
{
return v_bs_1002_;
}
else
{
lean_object* v_v_1004_; lean_object* v___x_1005_; lean_object* v_bs_x27_1006_; size_t v___x_1007_; size_t v___x_1008_; lean_object* v___x_1009_; 
v_v_1004_ = lean_array_uget(v_bs_1002_, v_i_1001_);
v___x_1005_ = lean_unsigned_to_nat(0u);
v_bs_x27_1006_ = lean_array_uset(v_bs_1002_, v_i_1001_, v___x_1005_);
v___x_1007_ = ((size_t)1ULL);
v___x_1008_ = lean_usize_add(v_i_1001_, v___x_1007_);
v___x_1009_ = lean_array_uset(v_bs_x27_1006_, v_i_1001_, v_v_1004_);
v_i_1001_ = v___x_1008_;
v_bs_1002_ = v___x_1009_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object* v_sz_1011_, lean_object* v_i_1012_, lean_object* v_bs_1013_){
_start:
{
size_t v_sz_boxed_1014_; size_t v_i_boxed_1015_; lean_object* v_res_1016_; 
v_sz_boxed_1014_ = lean_unbox_usize(v_sz_1011_);
lean_dec(v_sz_1011_);
v_i_boxed_1015_ = lean_unbox_usize(v_i_1012_);
lean_dec(v_i_1012_);
v_res_1016_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_boxed_1014_, v_i_boxed_1015_, v_bs_1013_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object* v_a_1017_, lean_object* v_a_1018_){
_start:
{
if (lean_obj_tag(v_a_1017_) == 0)
{
lean_object* v___x_1019_; 
v___x_1019_ = l_List_reverse___redArg(v_a_1018_);
return v___x_1019_;
}
else
{
lean_object* v_head_1020_; lean_object* v_tail_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1030_; 
v_head_1020_ = lean_ctor_get(v_a_1017_, 0);
v_tail_1021_ = lean_ctor_get(v_a_1017_, 1);
v_isSharedCheck_1030_ = !lean_is_exclusive(v_a_1017_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1023_ = v_a_1017_;
v_isShared_1024_ = v_isSharedCheck_1030_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_tail_1021_);
lean_inc(v_head_1020_);
lean_dec(v_a_1017_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1030_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
lean_object* v___x_1025_; lean_object* v___x_1027_; 
v___x_1025_ = l_Lean_MessageData_ofName(v_head_1020_);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 1, v_a_1018_);
lean_ctor_set(v___x_1023_, 0, v___x_1025_);
v___x_1027_ = v___x_1023_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_a_1018_);
v___x_1027_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
v_a_1017_ = v_tail_1021_;
v_a_1018_ = v___x_1027_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_mk_string_unchecked("subst", 5, 5);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__0, &l_Lean_Meta_substCore___lam__3___closed__0_once, _init_l_Lean_Meta_substCore___lam__3___closed__0);
v___x_1033_ = l_Lean_Name_mkStr1(v___x_1032_);
return v___x_1033_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__2(void){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = lean_mk_string_unchecked("invalid equality proof, it is not of the form ", 46, 46);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; 
v___x_1035_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__2, &l_Lean_Meta_substCore___lam__3___closed__2_once, _init_l_Lean_Meta_substCore___lam__3___closed__2);
v___x_1036_ = l_Lean_stringToMessageData(v___x_1035_);
return v___x_1036_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = lean_mk_string_unchecked("\nafter WHNF, variable expected, but obtained", 44, 44);
return v___x_1037_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__4, &l_Lean_Meta_substCore___lam__3___closed__4_once, _init_l_Lean_Meta_substCore___lam__3___closed__4);
v___x_1039_ = l_Lean_stringToMessageData(v___x_1038_);
return v___x_1039_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__6(void){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = lean_mk_string_unchecked("argument must be an equality proof", 34, 34);
return v___x_1040_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__7(void){
_start:
{
lean_object* v___x_1041_; lean_object* v___x_1042_; 
v___x_1041_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__6, &l_Lean_Meta_substCore___lam__3___closed__6_once, _init_l_Lean_Meta_substCore___lam__3___closed__6);
v___x_1042_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1041_);
return v___x_1042_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__8(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__7, &l_Lean_Meta_substCore___lam__3___closed__7_once, _init_l_Lean_Meta_substCore___lam__3___closed__7);
v___x_1044_ = l_Lean_MessageData_ofFormat(v___x_1043_);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__9(void){
_start:
{
lean_object* v___x_1045_; lean_object* v___x_1046_; 
v___x_1045_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__8, &l_Lean_Meta_substCore___lam__3___closed__8_once, _init_l_Lean_Meta_substCore___lam__3___closed__8);
v___x_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1045_);
return v___x_1046_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__10(void){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = lean_mk_string_unchecked("reverted variables ", 19, 19);
return v___x_1047_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__11(void){
_start:
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1048_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__10, &l_Lean_Meta_substCore___lam__3___closed__10_once, _init_l_Lean_Meta_substCore___lam__3___closed__10);
v___x_1049_ = l_Lean_stringToMessageData(v___x_1048_);
return v___x_1049_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__12(void){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_mk_string_unchecked("after intro2 ", 13, 13);
return v___x_1050_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__13(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__12, &l_Lean_Meta_substCore___lam__3___closed__12_once, _init_l_Lean_Meta_substCore___lam__3___closed__12);
v___x_1052_ = l_Lean_stringToMessageData(v___x_1051_);
return v___x_1052_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__14(void){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = lean_mk_string_unchecked("after revert ", 13, 13);
return v___x_1053_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__15(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__14, &l_Lean_Meta_substCore___lam__3___closed__14_once, _init_l_Lean_Meta_substCore___lam__3___closed__14);
v___x_1055_ = l_Lean_stringToMessageData(v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__16(void){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_1056_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__17(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__16, &l_Lean_Meta_substCore___lam__3___closed__16_once, _init_l_Lean_Meta_substCore___lam__3___closed__16);
v___x_1058_ = l_Lean_stringToMessageData(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__18(void){
_start:
{
lean_object* v___x_1059_; 
v___x_1059_ = lean_mk_string_unchecked("' occurs at", 11, 11);
return v___x_1059_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__19(void){
_start:
{
lean_object* v___x_1060_; lean_object* v___x_1061_; 
v___x_1060_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__18, &l_Lean_Meta_substCore___lam__3___closed__18_once, _init_l_Lean_Meta_substCore___lam__3___closed__18);
v___x_1061_ = l_Lean_stringToMessageData(v___x_1060_);
return v___x_1061_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__20(void){
_start:
{
lean_object* v___x_1062_; 
v___x_1062_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_1062_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__21(void){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_1063_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__22(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1064_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__0, &l_Lean_Meta_substCore___lam__3___closed__0_once, _init_l_Lean_Meta_substCore___lam__3___closed__0);
v___x_1065_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__21, &l_Lean_Meta_substCore___lam__3___closed__21_once, _init_l_Lean_Meta_substCore___lam__3___closed__21);
v___x_1066_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__20, &l_Lean_Meta_substCore___lam__3___closed__20_once, _init_l_Lean_Meta_substCore___lam__3___closed__20);
v___x_1067_ = l_Lean_Name_mkStr3(v___x_1066_, v___x_1065_, v___x_1064_);
return v___x_1067_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__23(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___f_1069_; 
v___x_1068_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__22, &l_Lean_Meta_substCore___lam__3___closed__22_once, _init_l_Lean_Meta_substCore___lam__3___closed__22);
v___f_1069_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1069_, 0, v___x_1068_);
return v___f_1069_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__24(void){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = lean_mk_string_unchecked("substituting ", 13, 13);
return v___x_1070_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__25(void){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__24, &l_Lean_Meta_substCore___lam__3___closed__24_once, _init_l_Lean_Meta_substCore___lam__3___closed__24);
v___x_1072_ = l_Lean_stringToMessageData(v___x_1071_);
return v___x_1072_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__26(void){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = lean_mk_string_unchecked(" (id: ", 6, 6);
return v___x_1073_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__27(void){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__26, &l_Lean_Meta_substCore___lam__3___closed__26_once, _init_l_Lean_Meta_substCore___lam__3___closed__26);
v___x_1075_ = l_Lean_stringToMessageData(v___x_1074_);
return v___x_1075_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__28(void){
_start:
{
lean_object* v___x_1076_; 
v___x_1076_ = lean_mk_string_unchecked(") with ", 7, 7);
return v___x_1076_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__29(void){
_start:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; 
v___x_1077_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__28, &l_Lean_Meta_substCore___lam__3___closed__28_once, _init_l_Lean_Meta_substCore___lam__3___closed__28);
v___x_1078_ = l_Lean_stringToMessageData(v___x_1077_);
return v___x_1078_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__30(void){
_start:
{
lean_object* v___x_1079_; 
v___x_1079_ = lean_mk_string_unchecked("(x = t)", 7, 7);
return v___x_1079_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__31(void){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_mk_string_unchecked("(t = x)", 7, 7);
return v___x_1080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object* v_mvarId_1081_, lean_object* v_hFVarId_1082_, lean_object* v___x_1083_, uint8_t v_clearH_1084_, lean_object* v_fvarSubst_1085_, uint8_t v_symm_1086_, uint8_t v_tryToSkip_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___x_1131_; 
lean_inc(v_mvarId_1081_);
v___x_1131_ = l_Lean_MVarId_getTag(v_mvarId_1081_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_a_1132_);
lean_dec_ref(v___x_1131_);
v___x_1133_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__1, &l_Lean_Meta_substCore___lam__3___closed__1_once, _init_l_Lean_Meta_substCore___lam__3___closed__1);
lean_inc(v_mvarId_1081_);
v___x_1134_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1081_, v___x_1133_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1134_) == 0)
{
lean_object* v___x_1135_; 
lean_dec_ref(v___x_1134_);
lean_inc(v_hFVarId_1082_);
v___x_1135_ = l_Lean_FVarId_getDecl___redArg(v_hFVarId_1082_, v___y_1088_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v_a_1136_; lean_object* v___x_1137_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___x_1152_; 
v_a_1136_ = lean_ctor_get(v___x_1135_, 0);
lean_inc(v_a_1136_);
lean_dec_ref(v___x_1135_);
v___x_1137_ = l_Lean_LocalDecl_type(v_a_1136_);
lean_dec(v_a_1136_);
lean_inc_ref(v___x_1137_);
v___x_1152_ = l_Lean_Meta_matchEq_x3f(v___x_1137_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1153_);
lean_dec_ref(v___x_1152_);
if (lean_obj_tag(v_a_1153_) == 0)
{
lean_object* v___x_1154_; lean_object* v___x_1155_; 
lean_dec_ref(v___x_1137_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v___x_1154_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__9, &l_Lean_Meta_substCore___lam__3___closed__9_once, _init_l_Lean_Meta_substCore___lam__3___closed__9);
v___x_1155_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1133_, v_mvarId_1081_, v___x_1154_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
return v___x_1155_;
}
else
{
lean_object* v_val_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1478_; 
v_val_1156_ = lean_ctor_get(v_a_1153_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v_a_1153_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1158_ = v_a_1153_;
v_isShared_1159_ = v_isSharedCheck_1478_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_val_1156_);
lean_dec(v_a_1153_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1478_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v_snd_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1476_; 
v_snd_1160_ = lean_ctor_get(v_val_1156_, 1);
v_isSharedCheck_1476_ = !lean_is_exclusive(v_val_1156_);
if (v_isSharedCheck_1476_ == 0)
{
lean_object* v_unused_1477_; 
v_unused_1477_ = lean_ctor_get(v_val_1156_, 0);
lean_dec(v_unused_1477_);
v___x_1162_ = v_val_1156_;
v_isShared_1163_ = v_isSharedCheck_1476_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_snd_1160_);
lean_dec(v_val_1156_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1476_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v_fst_1164_; lean_object* v_snd_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1475_; 
v_fst_1164_ = lean_ctor_get(v_snd_1160_, 0);
v_snd_1165_ = lean_ctor_get(v_snd_1160_, 1);
v_isSharedCheck_1475_ = !lean_is_exclusive(v_snd_1160_);
if (v_isSharedCheck_1475_ == 0)
{
v___x_1167_ = v_snd_1160_;
v_isShared_1168_ = v_isSharedCheck_1475_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_snd_1165_);
lean_inc(v_fst_1164_);
lean_dec(v_snd_1160_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1475_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
uint8_t v___x_1169_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; uint8_t v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; uint8_t v_skip_1188_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1200_; lean_object* v___y_1201_; lean_object* v___y_1202_; uint8_t v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; uint8_t v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1210_; lean_object* v___y_1211_; lean_object* v___y_1212_; lean_object* v___y_1238_; lean_object* v___y_1239_; lean_object* v___y_1240_; lean_object* v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; uint8_t v___y_1244_; lean_object* v___y_1245_; lean_object* v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; uint8_t v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1291_; uint8_t v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; lean_object* v___y_1295_; uint8_t v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1346_; lean_object* v___y_1347_; lean_object* v___y_1348_; lean_object* v___y_1349_; lean_object* v___y_1350_; lean_object* v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1353_; lean_object* v___y_1354_; lean_object* v___y_1402_; lean_object* v___y_1403_; lean_object* v___y_1404_; lean_object* v___y_1405_; lean_object* v___y_1406_; lean_object* v___y_1407_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1438_; lean_object* v___y_1439_; lean_object* v___y_1471_; 
v___x_1169_ = 1;
if (v_symm_1086_ == 0)
{
lean_inc(v_fst_1164_);
v___y_1471_ = v_fst_1164_;
goto v___jp_1470_;
}
else
{
lean_inc(v_snd_1165_);
v___y_1471_ = v_snd_1165_;
goto v___jp_1470_;
}
v___jp_1170_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___f_1194_; lean_object* v___x_1195_; 
v___x_1189_ = lean_box(v_clearH_1084_);
v___x_1190_ = lean_box(v_skip_1188_);
v___x_1191_ = lean_box(v___x_1169_);
v___x_1192_ = lean_box(v_symm_1086_);
v___x_1193_ = lean_box(v___y_1176_);
v___f_1194_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__2___boxed), 24, 19);
lean_closure_set(v___f_1194_, 0, v___y_1173_);
lean_closure_set(v___f_1194_, 1, v___y_1178_);
lean_closure_set(v___f_1194_, 2, v___y_1184_);
lean_closure_set(v___f_1194_, 3, v_hFVarId_1082_);
lean_closure_set(v___f_1194_, 4, v___y_1182_);
lean_closure_set(v___f_1194_, 5, v___y_1171_);
lean_closure_set(v___f_1194_, 6, v_fvarSubst_1085_);
lean_closure_set(v___f_1194_, 7, v___x_1189_);
lean_closure_set(v___f_1194_, 8, v___y_1185_);
lean_closure_set(v___f_1194_, 9, v___y_1186_);
lean_closure_set(v___f_1194_, 10, v___y_1177_);
lean_closure_set(v___f_1194_, 11, v___x_1190_);
lean_closure_set(v___f_1194_, 12, v___x_1191_);
lean_closure_set(v___f_1194_, 13, v___y_1172_);
lean_closure_set(v___f_1194_, 14, v___y_1174_);
lean_closure_set(v___f_1194_, 15, v_a_1132_);
lean_closure_set(v___f_1194_, 16, v___x_1192_);
lean_closure_set(v___f_1194_, 17, v___x_1193_);
lean_closure_set(v___f_1194_, 18, v___y_1179_);
v___x_1195_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v___y_1175_, v___f_1194_, v___y_1180_, v___y_1181_, v___y_1183_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
return v___x_1195_;
}
v___jp_1196_:
{
lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1213_ = lean_unsigned_to_nat(0u);
v___x_1214_ = lean_array_get(v___x_1083_, v___y_1204_, v___x_1213_);
lean_inc(v___x_1214_);
v___x_1215_ = l_Lean_mkFVar(v___x_1214_);
v___x_1216_ = lean_unsigned_to_nat(1u);
v___x_1217_ = lean_array_get(v___x_1083_, v___y_1204_, v___x_1216_);
lean_dec_ref(v___y_1204_);
lean_inc(v___x_1217_);
v___x_1218_ = l_Lean_mkFVar(v___x_1217_);
if (v_tryToSkip_1087_ == 0)
{
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1206_);
v___y_1171_ = v___y_1197_;
v___y_1172_ = v___y_1199_;
v___y_1173_ = v___y_1201_;
v___y_1174_ = v___x_1214_;
v___y_1175_ = v___y_1205_;
v___y_1176_ = v___y_1203_;
v___y_1177_ = v___y_1198_;
v___y_1178_ = v___x_1217_;
v___y_1179_ = v___x_1216_;
v___y_1180_ = v___y_1209_;
v___y_1181_ = v___y_1210_;
v___y_1182_ = v___x_1218_;
v___y_1183_ = v___y_1211_;
v___y_1184_ = v___y_1200_;
v___y_1185_ = v___x_1215_;
v___y_1186_ = v___y_1202_;
v___y_1187_ = v___y_1212_;
v_skip_1188_ = v___y_1207_;
goto v___jp_1170_;
}
else
{
lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = lean_array_get_size(v___y_1208_);
lean_dec_ref(v___y_1208_);
v___x_1220_ = lean_nat_dec_eq(v___x_1219_, v___y_1206_);
lean_dec(v___y_1206_);
if (v___x_1220_ == 0)
{
v___y_1171_ = v___y_1197_;
v___y_1172_ = v___y_1199_;
v___y_1173_ = v___y_1201_;
v___y_1174_ = v___x_1214_;
v___y_1175_ = v___y_1205_;
v___y_1176_ = v___y_1203_;
v___y_1177_ = v___y_1198_;
v___y_1178_ = v___x_1217_;
v___y_1179_ = v___x_1216_;
v___y_1180_ = v___y_1209_;
v___y_1181_ = v___y_1210_;
v___y_1182_ = v___x_1218_;
v___y_1183_ = v___y_1211_;
v___y_1184_ = v___y_1200_;
v___y_1185_ = v___x_1215_;
v___y_1186_ = v___y_1202_;
v___y_1187_ = v___y_1212_;
v_skip_1188_ = v___y_1207_;
goto v___jp_1170_;
}
else
{
lean_object* v___x_1221_; 
lean_inc(v___y_1205_);
v___x_1221_ = l_Lean_MVarId_getType(v___y_1205_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v_a_1222_; lean_object* v___x_1223_; lean_object* v_a_1224_; uint8_t v___x_1225_; 
v_a_1222_ = lean_ctor_get(v___x_1221_, 0);
lean_inc_n(v_a_1222_, 2);
lean_dec_ref(v___x_1221_);
lean_inc(v___x_1214_);
v___x_1223_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1222_, v___x_1214_, v___y_1210_, v___y_1212_);
v_a_1224_ = lean_ctor_get(v___x_1223_, 0);
lean_inc(v_a_1224_);
lean_dec_ref(v___x_1223_);
v___x_1225_ = lean_unbox(v_a_1224_);
lean_dec(v_a_1224_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; lean_object* v_a_1227_; uint8_t v___x_1228_; 
lean_inc(v___x_1217_);
v___x_1226_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1222_, v___x_1217_, v___y_1210_, v___y_1212_);
v_a_1227_ = lean_ctor_get(v___x_1226_, 0);
lean_inc(v_a_1227_);
lean_dec_ref(v___x_1226_);
v___x_1228_ = lean_unbox(v_a_1227_);
lean_dec(v_a_1227_);
if (v___x_1228_ == 0)
{
lean_dec_ref(v___x_1218_);
lean_dec_ref(v___x_1215_);
lean_dec(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v_a_1132_);
lean_dec(v_hFVarId_1082_);
v___y_1094_ = v___x_1217_;
v___y_1095_ = v___y_1209_;
v___y_1096_ = v___y_1210_;
v___y_1097_ = v___y_1211_;
v___y_1098_ = v___x_1214_;
v___y_1099_ = v___y_1212_;
v___y_1100_ = v___y_1205_;
goto v___jp_1093_;
}
else
{
v___y_1171_ = v___y_1197_;
v___y_1172_ = v___y_1199_;
v___y_1173_ = v___y_1201_;
v___y_1174_ = v___x_1214_;
v___y_1175_ = v___y_1205_;
v___y_1176_ = v___y_1203_;
v___y_1177_ = v___y_1198_;
v___y_1178_ = v___x_1217_;
v___y_1179_ = v___x_1216_;
v___y_1180_ = v___y_1209_;
v___y_1181_ = v___y_1210_;
v___y_1182_ = v___x_1218_;
v___y_1183_ = v___y_1211_;
v___y_1184_ = v___y_1200_;
v___y_1185_ = v___x_1215_;
v___y_1186_ = v___y_1202_;
v___y_1187_ = v___y_1212_;
v_skip_1188_ = v___y_1207_;
goto v___jp_1170_;
}
}
else
{
lean_dec(v_a_1222_);
v___y_1171_ = v___y_1197_;
v___y_1172_ = v___y_1199_;
v___y_1173_ = v___y_1201_;
v___y_1174_ = v___x_1214_;
v___y_1175_ = v___y_1205_;
v___y_1176_ = v___y_1203_;
v___y_1177_ = v___y_1198_;
v___y_1178_ = v___x_1217_;
v___y_1179_ = v___x_1216_;
v___y_1180_ = v___y_1209_;
v___y_1181_ = v___y_1210_;
v___y_1182_ = v___x_1218_;
v___y_1183_ = v___y_1211_;
v___y_1184_ = v___y_1200_;
v___y_1185_ = v___x_1215_;
v___y_1186_ = v___y_1202_;
v___y_1187_ = v___y_1212_;
v_skip_1188_ = v___y_1207_;
goto v___jp_1170_;
}
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
lean_dec_ref(v___x_1218_);
lean_dec(v___x_1217_);
lean_dec_ref(v___x_1215_);
lean_dec(v___x_1214_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1205_);
lean_dec(v___y_1202_);
lean_dec(v___y_1201_);
lean_dec(v___y_1200_);
lean_dec(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1229_ = lean_ctor_get(v___x_1221_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1221_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1221_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v___x_1234_; 
if (v_isShared_1232_ == 0)
{
v___x_1234_ = v___x_1231_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1235_; 
v_reuseFailAlloc_1235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1235_, 0, v_a_1229_);
v___x_1234_ = v_reuseFailAlloc_1235_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
return v___x_1234_;
}
}
}
}
}
}
v___jp_1237_:
{
lean_object* v___x_1256_; 
lean_inc_ref(v___y_1246_);
lean_inc(v___y_1255_);
lean_inc_ref(v___y_1254_);
lean_inc(v___y_1253_);
lean_inc_ref(v___y_1252_);
v___x_1256_ = lean_apply_5(v___y_1246_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, lean_box(0));
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; uint8_t v___x_1258_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
lean_inc(v_a_1257_);
lean_dec_ref(v___x_1256_);
v___x_1258_ = lean_unbox(v_a_1257_);
lean_dec(v_a_1257_);
if (v___x_1258_ == 0)
{
lean_dec(v___y_1251_);
lean_del_object(v___x_1167_);
v___y_1197_ = v___y_1238_;
v___y_1198_ = v___y_1239_;
v___y_1199_ = v___y_1240_;
v___y_1200_ = v___y_1242_;
v___y_1201_ = v___y_1241_;
v___y_1202_ = v___y_1243_;
v___y_1203_ = v___y_1244_;
v___y_1204_ = v___y_1245_;
v___y_1205_ = v___y_1247_;
v___y_1206_ = v___y_1248_;
v___y_1207_ = v___y_1249_;
v___y_1208_ = v___y_1250_;
v___y_1209_ = v___y_1252_;
v___y_1210_ = v___y_1253_;
v___y_1211_ = v___y_1254_;
v___y_1212_ = v___y_1255_;
goto v___jp_1196_;
}
else
{
lean_object* v___x_1259_; size_t v_sz_1260_; size_t v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1268_; 
v___x_1259_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__11, &l_Lean_Meta_substCore___lam__3___closed__11_once, _init_l_Lean_Meta_substCore___lam__3___closed__11);
v_sz_1260_ = lean_array_size(v___y_1250_);
v___x_1261_ = ((size_t)0ULL);
lean_inc_ref(v___y_1250_);
v___x_1262_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_1260_, v___x_1261_, v___y_1250_);
v___x_1263_ = lean_array_to_list(v___x_1262_);
v___x_1264_ = lean_box(0);
v___x_1265_ = l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(v___x_1263_, v___x_1264_);
v___x_1266_ = l_Lean_MessageData_ofList(v___x_1265_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 7);
lean_ctor_set(v___x_1167_, 1, v___x_1266_);
lean_ctor_set(v___x_1167_, 0, v___x_1259_);
v___x_1268_ = v___x_1167_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1259_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v___x_1266_);
v___x_1268_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___y_1251_, v___x_1268_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_dec_ref(v___x_1269_);
v___y_1197_ = v___y_1238_;
v___y_1198_ = v___y_1239_;
v___y_1199_ = v___y_1240_;
v___y_1200_ = v___y_1242_;
v___y_1201_ = v___y_1241_;
v___y_1202_ = v___y_1243_;
v___y_1203_ = v___y_1244_;
v___y_1204_ = v___y_1245_;
v___y_1205_ = v___y_1247_;
v___y_1206_ = v___y_1248_;
v___y_1207_ = v___y_1249_;
v___y_1208_ = v___y_1250_;
v___y_1209_ = v___y_1252_;
v___y_1210_ = v___y_1253_;
v___y_1211_ = v___y_1254_;
v___y_1212_ = v___y_1255_;
goto v___jp_1196_;
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
}
}
else
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1286_; 
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec(v___y_1253_);
lean_dec_ref(v___y_1252_);
lean_dec(v___y_1251_);
lean_dec_ref(v___y_1250_);
lean_dec(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1243_);
lean_dec(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec(v___y_1240_);
lean_dec(v___y_1239_);
lean_dec_ref(v___y_1238_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1279_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1281_ = v___x_1256_;
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1256_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1286_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v___x_1284_; 
if (v_isShared_1282_ == 0)
{
v___x_1284_ = v___x_1281_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1285_; 
v_reuseFailAlloc_1285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1285_, 0, v_a_1279_);
v___x_1284_ = v_reuseFailAlloc_1285_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
return v___x_1284_;
}
}
}
}
v___jp_1287_:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = lean_box(0);
lean_inc(v___y_1295_);
v___x_1304_ = l_Lean_Meta_introNCore(v___y_1293_, v___y_1295_, v___x_1303_, v___y_1296_, v___x_1169_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1304_) == 0)
{
lean_object* v_a_1305_; lean_object* v_fst_1306_; lean_object* v_snd_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1336_; 
v_a_1305_ = lean_ctor_get(v___x_1304_, 0);
lean_inc(v_a_1305_);
lean_dec_ref(v___x_1304_);
v_fst_1306_ = lean_ctor_get(v_a_1305_, 0);
v_snd_1307_ = lean_ctor_get(v_a_1305_, 1);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_a_1305_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1309_ = v_a_1305_;
v_isShared_1310_ = v_isSharedCheck_1336_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_snd_1307_);
lean_inc(v_fst_1306_);
lean_dec(v_a_1305_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1336_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v___x_1311_; 
lean_inc_ref(v___y_1294_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
lean_inc(v___y_1300_);
lean_inc_ref(v___y_1299_);
v___x_1311_ = lean_apply_5(v___y_1294_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_, lean_box(0));
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; uint8_t v___x_1313_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref(v___x_1311_);
v___x_1313_ = lean_unbox(v_a_1312_);
lean_dec(v_a_1312_);
if (v___x_1313_ == 0)
{
lean_del_object(v___x_1309_);
lean_inc(v_snd_1307_);
v___y_1238_ = v___y_1288_;
v___y_1239_ = v___x_1303_;
v___y_1240_ = v___y_1289_;
v___y_1241_ = v_snd_1307_;
v___y_1242_ = v___y_1290_;
v___y_1243_ = v___y_1291_;
v___y_1244_ = v___y_1292_;
v___y_1245_ = v_fst_1306_;
v___y_1246_ = v___y_1294_;
v___y_1247_ = v_snd_1307_;
v___y_1248_ = v___y_1295_;
v___y_1249_ = v___y_1296_;
v___y_1250_ = v___y_1297_;
v___y_1251_ = v___y_1298_;
v___y_1252_ = v___y_1299_;
v___y_1253_ = v___y_1300_;
v___y_1254_ = v___y_1301_;
v___y_1255_ = v___y_1302_;
goto v___jp_1237_;
}
else
{
lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1314_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__13, &l_Lean_Meta_substCore___lam__3___closed__13_once, _init_l_Lean_Meta_substCore___lam__3___closed__13);
lean_inc(v_snd_1307_);
v___x_1315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1315_, 0, v_snd_1307_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set_tag(v___x_1309_, 7);
lean_ctor_set(v___x_1309_, 1, v___x_1315_);
lean_ctor_set(v___x_1309_, 0, v___x_1314_);
v___x_1317_ = v___x_1309_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1314_);
lean_ctor_set(v_reuseFailAlloc_1327_, 1, v___x_1315_);
v___x_1317_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
lean_object* v___x_1318_; 
lean_inc(v___y_1298_);
v___x_1318_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___y_1298_, v___x_1317_, v___y_1299_, v___y_1300_, v___y_1301_, v___y_1302_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_dec_ref(v___x_1318_);
lean_inc(v_snd_1307_);
v___y_1238_ = v___y_1288_;
v___y_1239_ = v___x_1303_;
v___y_1240_ = v___y_1289_;
v___y_1241_ = v_snd_1307_;
v___y_1242_ = v___y_1290_;
v___y_1243_ = v___y_1291_;
v___y_1244_ = v___y_1292_;
v___y_1245_ = v_fst_1306_;
v___y_1246_ = v___y_1294_;
v___y_1247_ = v_snd_1307_;
v___y_1248_ = v___y_1295_;
v___y_1249_ = v___y_1296_;
v___y_1250_ = v___y_1297_;
v___y_1251_ = v___y_1298_;
v___y_1252_ = v___y_1299_;
v___y_1253_ = v___y_1300_;
v___y_1254_ = v___y_1301_;
v___y_1255_ = v___y_1302_;
goto v___jp_1237_;
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec(v_snd_1307_);
lean_dec(v_fst_1306_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1295_);
lean_dec(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1318_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1318_);
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
}
}
else
{
lean_object* v_a_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1335_; 
lean_del_object(v___x_1309_);
lean_dec(v_snd_1307_);
lean_dec(v_fst_1306_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1295_);
lean_dec(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1328_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1330_ = v___x_1311_;
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_a_1328_);
lean_dec(v___x_1311_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1335_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1333_; 
if (v_isShared_1331_ == 0)
{
v___x_1333_ = v___x_1330_;
goto v_reusejp_1332_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v_a_1328_);
v___x_1333_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1332_;
}
v_reusejp_1332_:
{
return v___x_1333_;
}
}
}
}
}
else
{
lean_object* v_a_1337_; lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1295_);
lean_dec(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1337_ = lean_ctor_get(v___x_1304_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1304_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1339_ = v___x_1304_;
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
else
{
lean_inc(v_a_1337_);
lean_dec(v___x_1304_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1344_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1342_; 
if (v_isShared_1340_ == 0)
{
v___x_1342_ = v___x_1339_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_a_1337_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
v___jp_1345_:
{
lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; uint8_t v___x_1359_; lean_object* v___x_1360_; 
v___x_1355_ = lean_unsigned_to_nat(2u);
v___x_1356_ = lean_mk_empty_array_with_capacity(v___x_1355_);
v___x_1357_ = lean_array_push(v___x_1356_, v___y_1348_);
lean_inc(v_hFVarId_1082_);
v___x_1358_ = lean_array_push(v___x_1357_, v_hFVarId_1082_);
v___x_1359_ = 0;
v___x_1360_ = l_Lean_MVarId_revert(v_mvarId_1081_, v___x_1358_, v___x_1169_, v___x_1359_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v_fst_1362_; lean_object* v_snd_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1392_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1361_);
lean_dec_ref(v___x_1360_);
v_fst_1362_ = lean_ctor_get(v_a_1361_, 0);
v_snd_1363_ = lean_ctor_get(v_a_1361_, 1);
v_isSharedCheck_1392_ = !lean_is_exclusive(v_a_1361_);
if (v_isSharedCheck_1392_ == 0)
{
v___x_1365_ = v_a_1361_;
v_isShared_1366_ = v_isSharedCheck_1392_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_snd_1363_);
lean_inc(v_fst_1362_);
lean_dec(v_a_1361_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1392_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1367_; 
lean_inc_ref(v___y_1349_);
lean_inc(v___y_1354_);
lean_inc_ref(v___y_1353_);
lean_inc(v___y_1352_);
lean_inc_ref(v___y_1351_);
v___x_1367_ = lean_apply_5(v___y_1349_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, lean_box(0));
if (lean_obj_tag(v___x_1367_) == 0)
{
lean_object* v_a_1368_; uint8_t v___x_1369_; 
v_a_1368_ = lean_ctor_get(v___x_1367_, 0);
lean_inc(v_a_1368_);
lean_dec_ref(v___x_1367_);
v___x_1369_ = lean_unbox(v_a_1368_);
lean_dec(v_a_1368_);
if (v___x_1369_ == 0)
{
lean_del_object(v___x_1365_);
lean_inc(v_fst_1362_);
v___y_1288_ = v_fst_1362_;
v___y_1289_ = v___y_1346_;
v___y_1290_ = v___y_1347_;
v___y_1291_ = v___x_1355_;
v___y_1292_ = v___x_1359_;
v___y_1293_ = v_snd_1363_;
v___y_1294_ = v___y_1349_;
v___y_1295_ = v___x_1355_;
v___y_1296_ = v___x_1359_;
v___y_1297_ = v_fst_1362_;
v___y_1298_ = v___y_1350_;
v___y_1299_ = v___y_1351_;
v___y_1300_ = v___y_1352_;
v___y_1301_ = v___y_1353_;
v___y_1302_ = v___y_1354_;
goto v___jp_1287_;
}
else
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1373_; 
v___x_1370_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__15, &l_Lean_Meta_substCore___lam__3___closed__15_once, _init_l_Lean_Meta_substCore___lam__3___closed__15);
lean_inc(v_snd_1363_);
v___x_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1371_, 0, v_snd_1363_);
if (v_isShared_1366_ == 0)
{
lean_ctor_set_tag(v___x_1365_, 7);
lean_ctor_set(v___x_1365_, 1, v___x_1371_);
lean_ctor_set(v___x_1365_, 0, v___x_1370_);
v___x_1373_ = v___x_1365_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1370_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v___x_1371_);
v___x_1373_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
lean_object* v___x_1374_; 
lean_inc(v___y_1350_);
v___x_1374_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___y_1350_, v___x_1373_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
if (lean_obj_tag(v___x_1374_) == 0)
{
lean_dec_ref(v___x_1374_);
lean_inc(v_fst_1362_);
v___y_1288_ = v_fst_1362_;
v___y_1289_ = v___y_1346_;
v___y_1290_ = v___y_1347_;
v___y_1291_ = v___x_1355_;
v___y_1292_ = v___x_1359_;
v___y_1293_ = v_snd_1363_;
v___y_1294_ = v___y_1349_;
v___y_1295_ = v___x_1355_;
v___y_1296_ = v___x_1359_;
v___y_1297_ = v_fst_1362_;
v___y_1298_ = v___y_1350_;
v___y_1299_ = v___y_1351_;
v___y_1300_ = v___y_1352_;
v___y_1301_ = v___y_1353_;
v___y_1302_ = v___y_1354_;
goto v___jp_1287_;
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
lean_dec(v_snd_1363_);
lean_dec(v_fst_1362_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec(v___y_1347_);
lean_dec(v___y_1346_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1375_ = lean_ctor_get(v___x_1374_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1374_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1374_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1374_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
}
}
else
{
lean_object* v_a_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1391_; 
lean_del_object(v___x_1365_);
lean_dec(v_snd_1363_);
lean_dec(v_fst_1362_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec(v___y_1347_);
lean_dec(v___y_1346_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1384_ = lean_ctor_get(v___x_1367_, 0);
v_isSharedCheck_1391_ = !lean_is_exclusive(v___x_1367_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1386_ = v___x_1367_;
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_a_1384_);
lean_dec(v___x_1367_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1391_;
goto v_resetjp_1385_;
}
v_resetjp_1385_:
{
lean_object* v___x_1389_; 
if (v_isShared_1387_ == 0)
{
v___x_1389_ = v___x_1386_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_a_1384_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
}
else
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1400_; 
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec(v___y_1347_);
lean_dec(v___y_1346_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
v_a_1393_ = lean_ctor_get(v___x_1360_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1360_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1395_ = v___x_1360_;
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___x_1360_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1400_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
lean_object* v___x_1398_; 
if (v_isShared_1396_ == 0)
{
v___x_1398_ = v___x_1395_;
goto v_reusejp_1397_;
}
else
{
lean_object* v_reuseFailAlloc_1399_; 
v_reuseFailAlloc_1399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1399_, 0, v_a_1393_);
v___x_1398_ = v_reuseFailAlloc_1399_;
goto v_reusejp_1397_;
}
v_reusejp_1397_:
{
return v___x_1398_;
}
}
}
}
v___jp_1401_:
{
lean_object* v___x_1413_; lean_object* v_a_1414_; uint8_t v___x_1415_; 
lean_inc(v___y_1405_);
lean_inc_ref(v___y_1407_);
v___x_1413_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v___y_1407_, v___y_1405_, v___y_1410_, v___y_1412_);
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref(v___x_1413_);
v___x_1415_ = lean_unbox(v_a_1414_);
lean_dec(v_a_1414_);
if (v___x_1415_ == 0)
{
lean_dec_ref(v___y_1407_);
lean_dec_ref(v___y_1404_);
lean_del_object(v___x_1162_);
lean_del_object(v___x_1158_);
v___y_1346_ = v___y_1402_;
v___y_1347_ = v___y_1403_;
v___y_1348_ = v___y_1405_;
v___y_1349_ = v___y_1406_;
v___y_1350_ = v___y_1408_;
v___y_1351_ = v___y_1409_;
v___y_1352_ = v___y_1410_;
v___y_1353_ = v___y_1411_;
v___y_1354_ = v___y_1412_;
goto v___jp_1345_;
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1419_; 
v___x_1416_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_1417_ = l_Lean_MessageData_ofExpr(v___y_1404_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set_tag(v___x_1162_, 7);
lean_ctor_set(v___x_1162_, 1, v___x_1417_);
lean_ctor_set(v___x_1162_, 0, v___x_1416_);
v___x_1419_ = v___x_1162_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v___x_1416_);
lean_ctor_set(v_reuseFailAlloc_1436_, 1, v___x_1417_);
v___x_1419_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1425_; 
v___x_1420_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__19, &l_Lean_Meta_substCore___lam__3___closed__19_once, _init_l_Lean_Meta_substCore___lam__3___closed__19);
v___x_1421_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1421_, 0, v___x_1419_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = l_Lean_indentExpr(v___y_1407_);
v___x_1423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1421_);
lean_ctor_set(v___x_1423_, 1, v___x_1422_);
if (v_isShared_1159_ == 0)
{
lean_ctor_set(v___x_1158_, 0, v___x_1423_);
v___x_1425_ = v___x_1158_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1435_; 
v_reuseFailAlloc_1435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1435_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1435_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
lean_object* v___x_1426_; 
lean_inc(v_mvarId_1081_);
v___x_1426_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1133_, v_mvarId_1081_, v___x_1425_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
if (lean_obj_tag(v___x_1426_) == 0)
{
lean_dec_ref(v___x_1426_);
v___y_1346_ = v___y_1402_;
v___y_1347_ = v___y_1403_;
v___y_1348_ = v___y_1405_;
v___y_1349_ = v___y_1406_;
v___y_1350_ = v___y_1408_;
v___y_1351_ = v___y_1409_;
v___y_1352_ = v___y_1410_;
v___y_1353_ = v___y_1411_;
v___y_1354_ = v___y_1412_;
goto v___jp_1345_;
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec(v___y_1405_);
lean_dec(v___y_1403_);
lean_dec(v___y_1402_);
lean_del_object(v___x_1167_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
lean_dec(v_mvarId_1081_);
v_a_1427_ = lean_ctor_get(v___x_1426_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1426_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1426_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1426_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
}
}
v___jp_1437_:
{
lean_object* v___x_1440_; 
v___x_1440_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1439_, v___y_1089_, v___y_1091_);
if (lean_obj_tag(v___y_1438_) == 1)
{
lean_object* v_a_1441_; lean_object* v_fvarId_1442_; lean_object* v___x_1443_; lean_object* v___f_1444_; lean_object* v___x_1445_; lean_object* v_a_1446_; uint8_t v___x_1447_; 
lean_dec_ref(v___x_1137_);
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref(v___x_1440_);
v_fvarId_1442_ = lean_ctor_get(v___y_1438_, 0);
lean_inc(v_fvarId_1442_);
v___x_1443_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__22, &l_Lean_Meta_substCore___lam__3___closed__22_once, _init_l_Lean_Meta_substCore___lam__3___closed__22);
v___f_1444_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__23, &l_Lean_Meta_substCore___lam__3___closed__23_once, _init_l_Lean_Meta_substCore___lam__3___closed__23);
v___x_1445_ = l_Lean_Meta_substCore___lam__0(v___x_1443_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_a_1446_);
lean_dec_ref(v___x_1445_);
v___x_1447_ = lean_unbox(v_a_1446_);
lean_dec(v_a_1446_);
if (v___x_1447_ == 0)
{
lean_inc(v_fvarId_1442_);
v___y_1402_ = v___x_1443_;
v___y_1403_ = v_fvarId_1442_;
v___y_1404_ = v___y_1438_;
v___y_1405_ = v_fvarId_1442_;
v___y_1406_ = v___f_1444_;
v___y_1407_ = v_a_1441_;
v___y_1408_ = v___x_1443_;
v___y_1409_ = v___y_1088_;
v___y_1410_ = v___y_1089_;
v___y_1411_ = v___y_1090_;
v___y_1412_ = v___y_1091_;
goto v___jp_1401_;
}
else
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; 
v___x_1448_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__25, &l_Lean_Meta_substCore___lam__3___closed__25_once, _init_l_Lean_Meta_substCore___lam__3___closed__25);
lean_inc_ref(v___y_1438_);
v___x_1449_ = l_Lean_MessageData_ofExpr(v___y_1438_);
v___x_1450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1448_);
lean_ctor_set(v___x_1450_, 1, v___x_1449_);
v___x_1451_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__27, &l_Lean_Meta_substCore___lam__3___closed__27_once, _init_l_Lean_Meta_substCore___lam__3___closed__27);
v___x_1452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1452_, 0, v___x_1450_);
lean_ctor_set(v___x_1452_, 1, v___x_1451_);
lean_inc(v_fvarId_1442_);
v___x_1453_ = l_Lean_MessageData_ofName(v_fvarId_1442_);
v___x_1454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
v___x_1455_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__29, &l_Lean_Meta_substCore___lam__3___closed__29_once, _init_l_Lean_Meta_substCore___lam__3___closed__29);
v___x_1456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
lean_inc(v_a_1441_);
v___x_1457_ = l_Lean_MessageData_ofExpr(v_a_1441_);
v___x_1458_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1458_, 0, v___x_1456_);
lean_ctor_set(v___x_1458_, 1, v___x_1457_);
v___x_1459_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___x_1443_, v___x_1458_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1459_) == 0)
{
lean_dec_ref(v___x_1459_);
lean_inc(v_fvarId_1442_);
v___y_1402_ = v___x_1443_;
v___y_1403_ = v_fvarId_1442_;
v___y_1404_ = v___y_1438_;
v___y_1405_ = v_fvarId_1442_;
v___y_1406_ = v___f_1444_;
v___y_1407_ = v_a_1441_;
v___y_1408_ = v___x_1443_;
v___y_1409_ = v___y_1088_;
v___y_1410_ = v___y_1089_;
v___y_1411_ = v___y_1090_;
v___y_1412_ = v___y_1091_;
goto v___jp_1401_;
}
else
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
lean_dec(v_fvarId_1442_);
lean_dec_ref(v___y_1438_);
lean_dec(v_a_1441_);
lean_del_object(v___x_1167_);
lean_del_object(v___x_1162_);
lean_del_object(v___x_1158_);
lean_dec(v_a_1132_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
lean_dec(v_mvarId_1081_);
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1459_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1459_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1459_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1440_);
lean_del_object(v___x_1167_);
lean_del_object(v___x_1162_);
lean_del_object(v___x_1158_);
lean_dec(v_a_1132_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
if (v_symm_1086_ == 0)
{
lean_object* v___x_1468_; 
v___x_1468_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__30, &l_Lean_Meta_substCore___lam__3___closed__30_once, _init_l_Lean_Meta_substCore___lam__3___closed__30);
v___y_1139_ = v___y_1438_;
v___y_1140_ = v___x_1468_;
goto v___jp_1138_;
}
else
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__31, &l_Lean_Meta_substCore___lam__3___closed__31_once, _init_l_Lean_Meta_substCore___lam__3___closed__31);
v___y_1139_ = v___y_1438_;
v___y_1140_ = v___x_1469_;
goto v___jp_1138_;
}
}
}
v___jp_1470_:
{
lean_object* v___x_1472_; 
v___x_1472_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1471_, v___y_1089_, v___y_1091_);
if (v_symm_1086_ == 0)
{
lean_object* v_a_1473_; 
lean_dec(v_fst_1164_);
v_a_1473_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1473_);
lean_dec_ref(v___x_1472_);
v___y_1438_ = v_a_1473_;
v___y_1439_ = v_snd_1165_;
goto v___jp_1437_;
}
else
{
lean_object* v_a_1474_; 
lean_dec(v_snd_1165_);
v_a_1474_ = lean_ctor_get(v___x_1472_, 0);
lean_inc(v_a_1474_);
lean_dec_ref(v___x_1472_);
v___y_1438_ = v_a_1474_;
v___y_1439_ = v_fst_1164_;
goto v___jp_1437_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
lean_dec_ref(v___x_1137_);
lean_dec(v_a_1132_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
lean_dec(v_mvarId_1081_);
v_a_1479_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1152_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1152_);
v___x_1481_ = lean_box(0);
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
v_resetjp_1480_:
{
lean_object* v___x_1484_; 
if (v_isShared_1482_ == 0)
{
v___x_1484_ = v___x_1481_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1485_; 
v_reuseFailAlloc_1485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1485_, 0, v_a_1479_);
v___x_1484_ = v_reuseFailAlloc_1485_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
return v___x_1484_;
}
}
}
v___jp_1138_:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1141_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__3, &l_Lean_Meta_substCore___lam__3___closed__3_once, _init_l_Lean_Meta_substCore___lam__3___closed__3);
lean_inc_ref(v___y_1140_);
v___x_1142_ = l_Lean_stringToMessageData(v___y_1140_);
v___x_1143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1143_, 0, v___x_1141_);
lean_ctor_set(v___x_1143_, 1, v___x_1142_);
v___x_1144_ = l_Lean_indentExpr(v___x_1137_);
v___x_1145_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1143_);
lean_ctor_set(v___x_1145_, 1, v___x_1144_);
v___x_1146_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__5, &l_Lean_Meta_substCore___lam__3___closed__5_once, _init_l_Lean_Meta_substCore___lam__3___closed__5);
v___x_1147_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1145_);
lean_ctor_set(v___x_1147_, 1, v___x_1146_);
v___x_1148_ = l_Lean_indentExpr(v___y_1139_);
v___x_1149_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1147_);
lean_ctor_set(v___x_1149_, 1, v___x_1148_);
v___x_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1150_, 0, v___x_1149_);
v___x_1151_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1133_, v_mvarId_1081_, v___x_1150_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
return v___x_1151_;
}
}
else
{
lean_object* v_a_1487_; lean_object* v___x_1489_; uint8_t v_isShared_1490_; uint8_t v_isSharedCheck_1494_; 
lean_dec(v_a_1132_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
lean_dec(v_mvarId_1081_);
v_a_1487_ = lean_ctor_get(v___x_1135_, 0);
v_isSharedCheck_1494_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1494_ == 0)
{
v___x_1489_ = v___x_1135_;
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
else
{
lean_inc(v_a_1487_);
lean_dec(v___x_1135_);
v___x_1489_ = lean_box(0);
v_isShared_1490_ = v_isSharedCheck_1494_;
goto v_resetjp_1488_;
}
v_resetjp_1488_:
{
lean_object* v___x_1492_; 
if (v_isShared_1490_ == 0)
{
v___x_1492_ = v___x_1489_;
goto v_reusejp_1491_;
}
else
{
lean_object* v_reuseFailAlloc_1493_; 
v_reuseFailAlloc_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1493_, 0, v_a_1487_);
v___x_1492_ = v_reuseFailAlloc_1493_;
goto v_reusejp_1491_;
}
v_reusejp_1491_:
{
return v___x_1492_;
}
}
}
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1502_; 
lean_dec(v_a_1132_);
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
lean_dec(v_mvarId_1081_);
v_a_1495_ = lean_ctor_get(v___x_1134_, 0);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1134_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1497_ = v___x_1134_;
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_a_1495_);
lean_dec(v___x_1134_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1502_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1500_; 
if (v_isShared_1498_ == 0)
{
v___x_1500_ = v___x_1497_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v_a_1495_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
else
{
lean_object* v_a_1503_; lean_object* v___x_1505_; uint8_t v_isShared_1506_; uint8_t v_isSharedCheck_1510_; 
lean_dec(v___y_1091_);
lean_dec_ref(v___y_1090_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v_fvarSubst_1085_);
lean_dec(v_hFVarId_1082_);
lean_dec(v_mvarId_1081_);
v_a_1503_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1505_ = v___x_1131_;
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
else
{
lean_inc(v_a_1503_);
lean_dec(v___x_1131_);
v___x_1505_ = lean_box(0);
v_isShared_1506_ = v_isSharedCheck_1510_;
goto v_resetjp_1504_;
}
v_resetjp_1504_:
{
lean_object* v___x_1508_; 
if (v_isShared_1506_ == 0)
{
v___x_1508_ = v___x_1505_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_a_1503_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
v___jp_1093_:
{
if (v_clearH_1084_ == 0)
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
lean_dec(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
v___x_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1101_, 0, v_fvarSubst_1085_);
lean_ctor_set(v___x_1101_, 1, v___y_1100_);
v___x_1102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1101_);
return v___x_1102_;
}
else
{
lean_object* v___x_1103_; 
v___x_1103_ = l_Lean_MVarId_clear(v___y_1100_, v___y_1094_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1099_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; lean_object* v___x_1105_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc(v_a_1104_);
lean_dec_ref(v___x_1103_);
v___x_1105_ = l_Lean_MVarId_clear(v_a_1104_, v___y_1098_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
if (lean_obj_tag(v___x_1105_) == 0)
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1114_; 
v_a_1106_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1108_ = v___x_1105_;
v_isShared_1109_ = v_isSharedCheck_1114_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1105_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1114_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v_fvarSubst_1085_);
lean_ctor_set(v___x_1110_, 1, v_a_1106_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 0, v___x_1110_);
v___x_1112_ = v___x_1108_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
return v___x_1112_;
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec(v_fvarSubst_1085_);
v_a_1115_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1105_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1105_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1120_; 
if (v_isShared_1118_ == 0)
{
v___x_1120_ = v___x_1117_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_a_1115_);
v___x_1120_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1119_;
}
v_reusejp_1119_:
{
return v___x_1120_;
}
}
}
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v_fvarSubst_1085_);
v_a_1123_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1103_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1103_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object* v_mvarId_1511_, lean_object* v_hFVarId_1512_, lean_object* v___x_1513_, lean_object* v_clearH_1514_, lean_object* v_fvarSubst_1515_, lean_object* v_symm_1516_, lean_object* v_tryToSkip_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
uint8_t v_clearH_boxed_1523_; uint8_t v_symm_boxed_1524_; uint8_t v_tryToSkip_boxed_1525_; lean_object* v_res_1526_; 
v_clearH_boxed_1523_ = lean_unbox(v_clearH_1514_);
v_symm_boxed_1524_ = lean_unbox(v_symm_1516_);
v_tryToSkip_boxed_1525_ = lean_unbox(v_tryToSkip_1517_);
v_res_1526_ = l_Lean_Meta_substCore___lam__3(v_mvarId_1511_, v_hFVarId_1512_, v___x_1513_, v_clearH_boxed_1523_, v_fvarSubst_1515_, v_symm_boxed_1524_, v_tryToSkip_boxed_1525_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___x_1513_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object* v_mvarId_1527_, lean_object* v_hFVarId_1528_, uint8_t v_symm_1529_, lean_object* v_fvarSubst_1530_, uint8_t v_clearH_1531_, uint8_t v_tryToSkip_1532_, lean_object* v_a_1533_, lean_object* v_a_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_){
_start:
{
lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___f_1542_; lean_object* v___x_1543_; 
v___x_1538_ = lean_box(0);
v___x_1539_ = lean_box(v_clearH_1531_);
v___x_1540_ = lean_box(v_symm_1529_);
v___x_1541_ = lean_box(v_tryToSkip_1532_);
lean_inc(v_mvarId_1527_);
v___f_1542_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__3___boxed), 12, 7);
lean_closure_set(v___f_1542_, 0, v_mvarId_1527_);
lean_closure_set(v___f_1542_, 1, v_hFVarId_1528_);
lean_closure_set(v___f_1542_, 2, v___x_1538_);
lean_closure_set(v___f_1542_, 3, v___x_1539_);
lean_closure_set(v___f_1542_, 4, v_fvarSubst_1530_);
lean_closure_set(v___f_1542_, 5, v___x_1540_);
lean_closure_set(v___f_1542_, 6, v___x_1541_);
v___x_1543_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1527_, v___f_1542_, v_a_1533_, v_a_1534_, v_a_1535_, v_a_1536_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object* v_mvarId_1544_, lean_object* v_hFVarId_1545_, lean_object* v_symm_1546_, lean_object* v_fvarSubst_1547_, lean_object* v_clearH_1548_, lean_object* v_tryToSkip_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
uint8_t v_symm_boxed_1555_; uint8_t v_clearH_boxed_1556_; uint8_t v_tryToSkip_boxed_1557_; lean_object* v_res_1558_; 
v_symm_boxed_1555_ = lean_unbox(v_symm_1546_);
v_clearH_boxed_1556_ = lean_unbox(v_clearH_1548_);
v_tryToSkip_boxed_1557_ = lean_unbox(v_tryToSkip_1549_);
v_res_1558_ = l_Lean_Meta_substCore(v_mvarId_1544_, v_hFVarId_1545_, v_symm_boxed_1555_, v_fvarSubst_1547_, v_clearH_boxed_1556_, v_tryToSkip_boxed_1557_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_);
lean_dec(v_a_1553_);
lean_dec_ref(v_a_1552_);
lean_dec(v_a_1551_);
lean_dec_ref(v_a_1550_);
return v_res_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2(lean_object* v_fst_1559_, lean_object* v_fst_1560_, lean_object* v_n_1561_, lean_object* v_i_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
lean_object* v___x_1570_; 
v___x_1570_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___redArg(v_fst_1559_, v_fst_1560_, v_n_1561_, v_i_1562_, v_a_1564_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2___boxed(lean_object* v_fst_1571_, lean_object* v_fst_1572_, lean_object* v_n_1573_, lean_object* v_i_1574_, lean_object* v_a_1575_, lean_object* v_a_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_){
_start:
{
lean_object* v_res_1582_; 
v_res_1582_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__2(v_fst_1571_, v_fst_1572_, v_n_1573_, v_i_1574_, v_a_1575_, v_a_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v_n_1573_);
lean_dec_ref(v_fst_1572_);
lean_dec_ref(v_fst_1571_);
return v_res_1582_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5(lean_object* v_mvarId_1583_, lean_object* v_val_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v___x_1590_; 
v___x_1590_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v_mvarId_1583_, v_val_1584_, v___y_1586_, v___y_1588_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___boxed(lean_object* v_mvarId_1591_, lean_object* v_val_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v_res_1598_; 
v_res_1598_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5(v_mvarId_1591_, v_val_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
return v_res_1598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8(lean_object* v_00_u03b1_1599_, lean_object* v_name_1600_, uint8_t v_bi_1601_, lean_object* v_type_1602_, lean_object* v_k_1603_, uint8_t v_kind_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___redArg(v_name_1600_, v_bi_1601_, v_type_1602_, v_k_1603_, v_kind_1604_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8___boxed(lean_object* v_00_u03b1_1611_, lean_object* v_name_1612_, lean_object* v_bi_1613_, lean_object* v_type_1614_, lean_object* v_k_1615_, lean_object* v_kind_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
uint8_t v_bi_boxed_1622_; uint8_t v_kind_boxed_1623_; lean_object* v_res_1624_; 
v_bi_boxed_1622_ = lean_unbox(v_bi_1613_);
v_kind_boxed_1623_ = lean_unbox(v_kind_1616_);
v_res_1624_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6_spec__8(v_00_u03b1_1611_, v_name_1612_, v_bi_boxed_1622_, v_type_1614_, v_k_1615_, v_kind_boxed_1623_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6(lean_object* v_00_u03b1_1625_, lean_object* v_name_1626_, lean_object* v_type_1627_, lean_object* v_k_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___redArg(v_name_1626_, v_type_1627_, v_k_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
return v___x_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6___boxed(lean_object* v_00_u03b1_1635_, lean_object* v_name_1636_, lean_object* v_type_1637_, lean_object* v_k_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__6(v_00_u03b1_1635_, v_name_1636_, v_type_1637_, v_k_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_);
lean_dec(v___y_1642_);
lean_dec_ref(v___y_1641_);
lean_dec(v___y_1640_);
lean_dec_ref(v___y_1639_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6(lean_object* v_00_u03b2_1645_, lean_object* v_x_1646_, lean_object* v_x_1647_, lean_object* v_x_1648_){
_start:
{
lean_object* v___x_1649_; 
v___x_1649_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6___redArg(v_x_1646_, v_x_1647_, v_x_1648_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8(lean_object* v_00_u03b2_1650_, lean_object* v_x_1651_, size_t v_x_1652_, size_t v_x_1653_, lean_object* v_x_1654_, lean_object* v_x_1655_){
_start:
{
lean_object* v___x_1656_; 
v___x_1656_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg(v_x_1651_, v_x_1652_, v_x_1653_, v_x_1654_, v_x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03b2_1657_, lean_object* v_x_1658_, lean_object* v_x_1659_, lean_object* v_x_1660_, lean_object* v_x_1661_, lean_object* v_x_1662_){
_start:
{
size_t v_x_35746__boxed_1663_; size_t v_x_35747__boxed_1664_; lean_object* v_res_1665_; 
v_x_35746__boxed_1663_ = lean_unbox_usize(v_x_1659_);
lean_dec(v_x_1659_);
v_x_35747__boxed_1664_ = lean_unbox_usize(v_x_1660_);
lean_dec(v_x_1660_);
v_res_1665_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8(v_00_u03b2_1657_, v_x_1658_, v_x_35746__boxed_1663_, v_x_35747__boxed_1664_, v_x_1661_, v_x_1662_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13(lean_object* v_00_u03b2_1666_, lean_object* v_n_1667_, lean_object* v_k_1668_, lean_object* v_v_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13___redArg(v_n_1667_, v_k_1668_, v_v_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14(lean_object* v_00_u03b2_1671_, size_t v_depth_1672_, lean_object* v_keys_1673_, lean_object* v_vals_1674_, lean_object* v_heq_1675_, lean_object* v_i_1676_, lean_object* v_entries_1677_){
_start:
{
lean_object* v___x_1678_; 
v___x_1678_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___redArg(v_depth_1672_, v_keys_1673_, v_vals_1674_, v_i_1676_, v_entries_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1679_, lean_object* v_depth_1680_, lean_object* v_keys_1681_, lean_object* v_vals_1682_, lean_object* v_heq_1683_, lean_object* v_i_1684_, lean_object* v_entries_1685_){
_start:
{
size_t v_depth_boxed_1686_; lean_object* v_res_1687_; 
v_depth_boxed_1686_ = lean_unbox_usize(v_depth_1680_);
lean_dec(v_depth_1680_);
v_res_1687_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__14(v_00_u03b2_1679_, v_depth_boxed_1686_, v_keys_1681_, v_vals_1682_, v_heq_1683_, v_i_1684_, v_entries_1685_);
lean_dec_ref(v_vals_1682_);
lean_dec_ref(v_keys_1681_);
return v_res_1687_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14(lean_object* v_00_u03b2_1688_, lean_object* v_x_1689_, lean_object* v_x_1690_, lean_object* v_x_1691_, lean_object* v_x_1692_){
_start:
{
lean_object* v___x_1693_; 
v___x_1693_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8_spec__13_spec__14___redArg(v_x_1689_, v_x_1690_, v_x_1691_, v_x_1692_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lean_Meta_heqToEq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1694_; 
v___x_1694_ = lean_mk_string_unchecked("HEq", 3, 3);
return v___x_1694_;
}
}
static lean_object* _init_l_Lean_Meta_heqToEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1695_ = lean_obj_once(&l_Lean_Meta_heqToEq___lam__0___closed__0, &l_Lean_Meta_heqToEq___lam__0___closed__0_once, _init_l_Lean_Meta_heqToEq___lam__0___closed__0);
v___x_1696_ = l_Lean_Name_mkStr1(v___x_1695_);
return v___x_1696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object* v_fvarId_1697_, lean_object* v_mvarId_1698_, uint8_t v_tryToClear_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_){
_start:
{
lean_object* v___x_1705_; 
lean_inc(v_fvarId_1697_);
v___x_1705_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1697_, v___y_1700_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_object* v_a_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v_a_1706_ = lean_ctor_get(v___x_1705_, 0);
lean_inc(v_a_1706_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = l_Lean_LocalDecl_type(v_a_1706_);
lean_inc(v___y_1703_);
lean_inc_ref(v___y_1702_);
lean_inc(v___y_1701_);
lean_inc_ref(v___y_1700_);
v___x_1708_ = lean_whnf(v___x_1707_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1708_) == 0)
{
lean_object* v_a_1709_; lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1793_; 
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1793_ == 0)
{
v___x_1711_ = v___x_1708_;
v_isShared_1712_ = v_isSharedCheck_1793_;
goto v_resetjp_1710_;
}
else
{
lean_inc(v_a_1709_);
lean_dec(v___x_1708_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1793_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; uint8_t v___x_1715_; 
v___x_1713_ = lean_obj_once(&l_Lean_Meta_heqToEq___lam__0___closed__1, &l_Lean_Meta_heqToEq___lam__0___closed__1_once, _init_l_Lean_Meta_heqToEq___lam__0___closed__1);
v___x_1714_ = lean_unsigned_to_nat(4u);
v___x_1715_ = l_Lean_Expr_isAppOfArity(v_a_1709_, v___x_1713_, v___x_1714_);
if (v___x_1715_ == 0)
{
lean_object* v___x_1716_; lean_object* v___x_1718_; 
lean_dec(v_a_1709_);
lean_dec(v_a_1706_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
v___x_1716_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1716_, 0, v_fvarId_1697_);
lean_ctor_set(v___x_1716_, 1, v_mvarId_1698_);
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 0, v___x_1716_);
v___x_1718_ = v___x_1711_;
goto v_reusejp_1717_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1716_);
v___x_1718_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1717_;
}
v_reusejp_1717_:
{
return v___x_1718_;
}
}
else
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
lean_del_object(v___x_1711_);
v___x_1720_ = l_Lean_Expr_appFn_x21(v_a_1709_);
v___x_1721_ = l_Lean_Expr_appFn_x21(v___x_1720_);
v___x_1722_ = l_Lean_Expr_appFn_x21(v___x_1721_);
v___x_1723_ = l_Lean_Expr_appArg_x21(v___x_1722_);
lean_dec_ref(v___x_1722_);
v___x_1724_ = l_Lean_Expr_appArg_x21(v___x_1720_);
lean_dec_ref(v___x_1720_);
v___x_1725_ = l_Lean_Meta_isExprDefEq(v___x_1723_, v___x_1724_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1784_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1784_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1728_ = v___x_1725_;
v_isShared_1729_ = v_isSharedCheck_1784_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1725_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1784_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
uint8_t v___x_1730_; 
v___x_1730_ = lean_unbox(v_a_1726_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
lean_dec(v_a_1726_);
lean_dec_ref(v___x_1721_);
lean_dec(v_a_1709_);
lean_dec(v_a_1706_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
v___x_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1731_, 0, v_fvarId_1697_);
lean_ctor_set(v___x_1731_, 1, v_mvarId_1698_);
if (v_isShared_1729_ == 0)
{
lean_ctor_set(v___x_1728_, 0, v___x_1731_);
v___x_1733_ = v___x_1728_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
else
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
lean_del_object(v___x_1728_);
lean_inc(v_fvarId_1697_);
v___x_1735_ = l_Lean_mkFVar(v_fvarId_1697_);
v___x_1736_ = l_Lean_Meta_mkEqOfHEq(v___x_1735_, v___x_1715_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1736_) == 0)
{
lean_object* v_a_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; 
v_a_1737_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_a_1737_);
lean_dec_ref(v___x_1736_);
v___x_1738_ = l_Lean_Expr_appArg_x21(v___x_1721_);
lean_dec_ref(v___x_1721_);
v___x_1739_ = l_Lean_Expr_appArg_x21(v_a_1709_);
lean_dec(v_a_1709_);
v___x_1740_ = l_Lean_Meta_mkEq(v___x_1738_, v___x_1739_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref(v___x_1740_);
v___x_1742_ = l_Lean_LocalDecl_userName(v_a_1706_);
lean_dec(v_a_1706_);
v___x_1743_ = l_Lean_MVarId_assert(v_mvarId_1698_, v___x_1742_, v_a_1741_, v_a_1737_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1743_) == 0)
{
if (v_tryToClear_1699_ == 0)
{
lean_object* v_a_1744_; uint8_t v___x_1745_; lean_object* v___x_1746_; 
lean_dec(v_fvarId_1697_);
v_a_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1744_);
lean_dec_ref(v___x_1743_);
v___x_1745_ = lean_unbox(v_a_1726_);
lean_dec(v_a_1726_);
v___x_1746_ = l_Lean_Meta_intro1Core(v_a_1744_, v___x_1745_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v___x_1746_;
}
else
{
lean_object* v_a_1747_; lean_object* v___x_1748_; 
v_a_1747_ = lean_ctor_get(v___x_1743_, 0);
lean_inc(v_a_1747_);
lean_dec_ref(v___x_1743_);
v___x_1748_ = l_Lean_MVarId_tryClear(v_a_1747_, v_fvarId_1697_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; uint8_t v___x_1750_; lean_object* v___x_1751_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_a_1749_);
lean_dec_ref(v___x_1748_);
v___x_1750_ = lean_unbox(v_a_1726_);
lean_dec(v_a_1726_);
v___x_1751_ = l_Lean_Meta_intro1Core(v_a_1749_, v___x_1750_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v___x_1751_;
}
else
{
lean_object* v_a_1752_; lean_object* v___x_1754_; uint8_t v_isShared_1755_; uint8_t v_isSharedCheck_1759_; 
lean_dec(v_a_1726_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
v_a_1752_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1759_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1759_ == 0)
{
v___x_1754_ = v___x_1748_;
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
else
{
lean_inc(v_a_1752_);
lean_dec(v___x_1748_);
v___x_1754_ = lean_box(0);
v_isShared_1755_ = v_isSharedCheck_1759_;
goto v_resetjp_1753_;
}
v_resetjp_1753_:
{
lean_object* v___x_1757_; 
if (v_isShared_1755_ == 0)
{
v___x_1757_ = v___x_1754_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1758_; 
v_reuseFailAlloc_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1758_, 0, v_a_1752_);
v___x_1757_ = v_reuseFailAlloc_1758_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
return v___x_1757_;
}
}
}
}
}
else
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1767_; 
lean_dec(v_a_1726_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_fvarId_1697_);
v_a_1760_ = lean_ctor_get(v___x_1743_, 0);
v_isSharedCheck_1767_ = !lean_is_exclusive(v___x_1743_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1762_ = v___x_1743_;
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1743_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1767_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1765_; 
if (v_isShared_1763_ == 0)
{
v___x_1765_ = v___x_1762_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_a_1760_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
}
else
{
lean_object* v_a_1768_; lean_object* v___x_1770_; uint8_t v_isShared_1771_; uint8_t v_isSharedCheck_1775_; 
lean_dec(v_a_1737_);
lean_dec(v_a_1726_);
lean_dec(v_a_1706_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_mvarId_1698_);
lean_dec(v_fvarId_1697_);
v_a_1768_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1775_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1775_ == 0)
{
v___x_1770_ = v___x_1740_;
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
else
{
lean_inc(v_a_1768_);
lean_dec(v___x_1740_);
v___x_1770_ = lean_box(0);
v_isShared_1771_ = v_isSharedCheck_1775_;
goto v_resetjp_1769_;
}
v_resetjp_1769_:
{
lean_object* v___x_1773_; 
if (v_isShared_1771_ == 0)
{
v___x_1773_ = v___x_1770_;
goto v_reusejp_1772_;
}
else
{
lean_object* v_reuseFailAlloc_1774_; 
v_reuseFailAlloc_1774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1774_, 0, v_a_1768_);
v___x_1773_ = v_reuseFailAlloc_1774_;
goto v_reusejp_1772_;
}
v_reusejp_1772_:
{
return v___x_1773_;
}
}
}
}
else
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1783_; 
lean_dec(v_a_1726_);
lean_dec_ref(v___x_1721_);
lean_dec(v_a_1709_);
lean_dec(v_a_1706_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_mvarId_1698_);
lean_dec(v_fvarId_1697_);
v_a_1776_ = lean_ctor_get(v___x_1736_, 0);
v_isSharedCheck_1783_ = !lean_is_exclusive(v___x_1736_);
if (v_isSharedCheck_1783_ == 0)
{
v___x_1778_ = v___x_1736_;
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1736_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1783_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v___x_1781_; 
if (v_isShared_1779_ == 0)
{
v___x_1781_ = v___x_1778_;
goto v_reusejp_1780_;
}
else
{
lean_object* v_reuseFailAlloc_1782_; 
v_reuseFailAlloc_1782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1782_, 0, v_a_1776_);
v___x_1781_ = v_reuseFailAlloc_1782_;
goto v_reusejp_1780_;
}
v_reusejp_1780_:
{
return v___x_1781_;
}
}
}
}
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_dec_ref(v___x_1721_);
lean_dec(v_a_1709_);
lean_dec(v_a_1706_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_mvarId_1698_);
lean_dec(v_fvarId_1697_);
v_a_1785_ = lean_ctor_get(v___x_1725_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1725_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1725_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1725_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
}
else
{
lean_object* v_a_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1801_; 
lean_dec(v_a_1706_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_mvarId_1698_);
lean_dec(v_fvarId_1697_);
v_a_1794_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1801_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1801_ == 0)
{
v___x_1796_ = v___x_1708_;
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_a_1794_);
lean_dec(v___x_1708_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1801_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1799_; 
if (v_isShared_1797_ == 0)
{
v___x_1799_ = v___x_1796_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1800_; 
v_reuseFailAlloc_1800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1800_, 0, v_a_1794_);
v___x_1799_ = v_reuseFailAlloc_1800_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
return v___x_1799_;
}
}
}
}
else
{
lean_object* v_a_1802_; lean_object* v___x_1804_; uint8_t v_isShared_1805_; uint8_t v_isSharedCheck_1809_; 
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v_mvarId_1698_);
lean_dec(v_fvarId_1697_);
v_a_1802_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1804_ = v___x_1705_;
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
else
{
lean_inc(v_a_1802_);
lean_dec(v___x_1705_);
v___x_1804_ = lean_box(0);
v_isShared_1805_ = v_isSharedCheck_1809_;
goto v_resetjp_1803_;
}
v_resetjp_1803_:
{
lean_object* v___x_1807_; 
if (v_isShared_1805_ == 0)
{
v___x_1807_ = v___x_1804_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_a_1802_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object* v_fvarId_1810_, lean_object* v_mvarId_1811_, lean_object* v_tryToClear_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_){
_start:
{
uint8_t v_tryToClear_boxed_1818_; lean_object* v_res_1819_; 
v_tryToClear_boxed_1818_ = lean_unbox(v_tryToClear_1812_);
v_res_1819_ = l_Lean_Meta_heqToEq___lam__0(v_fvarId_1810_, v_mvarId_1811_, v_tryToClear_boxed_1818_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object* v_mvarId_1820_, lean_object* v_fvarId_1821_, uint8_t v_tryToClear_1822_, lean_object* v_a_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_){
_start:
{
lean_object* v___x_1828_; lean_object* v___f_1829_; lean_object* v___x_1830_; 
v___x_1828_ = lean_box(v_tryToClear_1822_);
lean_inc(v_mvarId_1820_);
v___f_1829_ = lean_alloc_closure((void*)(l_Lean_Meta_heqToEq___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1829_, 0, v_fvarId_1821_);
lean_closure_set(v___f_1829_, 1, v_mvarId_1820_);
lean_closure_set(v___f_1829_, 2, v___x_1828_);
v___x_1830_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1820_, v___f_1829_, v_a_1823_, v_a_1824_, v_a_1825_, v_a_1826_);
return v___x_1830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object* v_mvarId_1831_, lean_object* v_fvarId_1832_, lean_object* v_tryToClear_1833_, lean_object* v_a_1834_, lean_object* v_a_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_){
_start:
{
uint8_t v_tryToClear_boxed_1839_; lean_object* v_res_1840_; 
v_tryToClear_boxed_1839_ = lean_unbox(v_tryToClear_1833_);
v_res_1840_ = l_Lean_Meta_heqToEq(v_mvarId_1831_, v_fvarId_1832_, v_tryToClear_boxed_1839_, v_a_1834_, v_a_1835_, v_a_1836_, v_a_1837_);
lean_dec(v_a_1837_);
lean_dec_ref(v_a_1836_);
lean_dec(v_a_1835_);
lean_dec_ref(v_a_1834_);
return v_res_1840_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1841_ = lean_box(0);
v___x_1842_ = lean_box(0);
v___x_1843_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1843_, 0, v___x_1842_);
lean_ctor_set(v___x_1843_, 1, v___x_1841_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_1844_, lean_object* v_as_1845_, size_t v_sz_1846_, size_t v_i_1847_, lean_object* v_b_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v_a_1855_; uint8_t v___x_1859_; 
v___x_1859_ = lean_usize_dec_lt(v_i_1847_, v_sz_1846_);
if (v___x_1859_ == 0)
{
lean_object* v___x_1860_; 
lean_dec(v_x_1844_);
v___x_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1860_, 0, v_b_1848_);
return v___x_1860_;
}
else
{
lean_object* v___x_1861_; lean_object* v_a_1863_; lean_object* v___x_1867_; lean_object* v_a_1868_; 
lean_dec_ref(v_b_1848_);
v___x_1861_ = lean_box(0);
v___x_1867_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0);
v_a_1868_ = lean_array_uget(v_as_1845_, v_i_1847_);
if (lean_obj_tag(v_a_1868_) == 0)
{
v_a_1855_ = v___x_1867_;
goto v___jp_1854_;
}
else
{
lean_object* v_val_1869_; lean_object* v___x_1871_; uint8_t v_isShared_1872_; uint8_t v_isSharedCheck_1958_; 
v_val_1869_ = lean_ctor_get(v_a_1868_, 0);
v_isSharedCheck_1958_ = !lean_is_exclusive(v_a_1868_);
if (v_isSharedCheck_1958_ == 0)
{
v___x_1871_ = v_a_1868_;
v_isShared_1872_ = v_isSharedCheck_1958_;
goto v_resetjp_1870_;
}
else
{
lean_inc(v_val_1869_);
lean_dec(v_a_1868_);
v___x_1871_ = lean_box(0);
v_isShared_1872_ = v_isSharedCheck_1958_;
goto v_resetjp_1870_;
}
v_resetjp_1870_:
{
uint8_t v___x_1880_; 
v___x_1880_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1869_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1886_; lean_object* v___x_1887_; 
v___x_1886_ = l_Lean_LocalDecl_type(v_val_1869_);
v___x_1887_ = l_Lean_Meta_matchEq_x3f(v___x_1886_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
if (lean_obj_tag(v___x_1887_) == 0)
{
lean_object* v_a_1888_; 
v_a_1888_ = lean_ctor_get(v___x_1887_, 0);
lean_inc(v_a_1888_);
lean_dec_ref(v___x_1887_);
if (lean_obj_tag(v_a_1888_) == 1)
{
lean_object* v_val_1889_; lean_object* v_snd_1890_; lean_object* v_fst_1891_; lean_object* v_snd_1892_; lean_object* v___x_1893_; 
v_val_1889_ = lean_ctor_get(v_a_1888_, 0);
lean_inc(v_val_1889_);
lean_dec_ref(v_a_1888_);
v_snd_1890_ = lean_ctor_get(v_val_1889_, 1);
lean_inc(v_snd_1890_);
lean_dec(v_val_1889_);
v_fst_1891_ = lean_ctor_get(v_snd_1890_, 0);
lean_inc(v_fst_1891_);
v_snd_1892_ = lean_ctor_get(v_snd_1890_, 1);
lean_inc(v_snd_1892_);
lean_dec(v_snd_1890_);
v___x_1893_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_1891_, v___y_1850_, v___y_1852_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; lean_object* v___x_1895_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
lean_inc(v_a_1894_);
lean_dec_ref(v___x_1893_);
v___x_1895_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_1892_, v___y_1850_, v___y_1852_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; lean_object* v___y_1898_; lean_object* v___y_1899_; uint8_t v___y_1900_; lean_object* v___y_1913_; lean_object* v___y_1914_; uint8_t v___y_1919_; uint8_t v___x_1931_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_a_1896_);
lean_dec_ref(v___x_1895_);
v___x_1931_ = l_Lean_Expr_isFVar(v_a_1896_);
if (v___x_1931_ == 0)
{
v___y_1919_ = v___x_1931_;
goto v___jp_1918_;
}
else
{
lean_object* v___x_1932_; uint8_t v___x_1933_; 
v___x_1932_ = l_Lean_Expr_fvarId_x21(v_a_1896_);
v___x_1933_ = l_Lean_instBEqFVarId_beq(v___x_1932_, v_x_1844_);
lean_dec(v___x_1932_);
v___y_1919_ = v___x_1933_;
goto v___jp_1918_;
}
v___jp_1897_:
{
if (v___y_1900_ == 0)
{
lean_dec(v_a_1896_);
lean_dec(v_val_1869_);
v_a_1855_ = v___x_1867_;
goto v___jp_1854_;
}
else
{
lean_object* v___x_1901_; 
lean_inc(v_x_1844_);
v___x_1901_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1896_, v_x_1844_, v___y_1899_, v___y_1898_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; uint8_t v___x_1903_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
lean_inc(v_a_1902_);
lean_dec_ref(v___x_1901_);
v___x_1903_ = lean_unbox(v_a_1902_);
lean_dec(v_a_1902_);
if (v___x_1903_ == 0)
{
lean_dec(v_x_1844_);
goto v___jp_1881_;
}
else
{
if (v___x_1880_ == 0)
{
lean_dec(v_val_1869_);
v_a_1855_ = v___x_1867_;
goto v___jp_1854_;
}
else
{
lean_dec(v_x_1844_);
goto v___jp_1881_;
}
}
}
else
{
lean_object* v_a_1904_; lean_object* v___x_1906_; uint8_t v_isShared_1907_; uint8_t v_isSharedCheck_1911_; 
lean_dec(v_val_1869_);
lean_dec(v_x_1844_);
v_a_1904_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1911_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1911_ == 0)
{
v___x_1906_ = v___x_1901_;
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
else
{
lean_inc(v_a_1904_);
lean_dec(v___x_1901_);
v___x_1906_ = lean_box(0);
v_isShared_1907_ = v_isSharedCheck_1911_;
goto v_resetjp_1905_;
}
v_resetjp_1905_:
{
lean_object* v___x_1909_; 
if (v_isShared_1907_ == 0)
{
v___x_1909_ = v___x_1906_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1910_; 
v_reuseFailAlloc_1910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1910_, 0, v_a_1904_);
v___x_1909_ = v_reuseFailAlloc_1910_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
return v___x_1909_;
}
}
}
}
}
v___jp_1912_:
{
uint8_t v___x_1915_; 
v___x_1915_ = l_Lean_Expr_isFVar(v_a_1894_);
if (v___x_1915_ == 0)
{
lean_dec(v_a_1894_);
v___y_1898_ = v___y_1914_;
v___y_1899_ = v___y_1913_;
v___y_1900_ = v___x_1915_;
goto v___jp_1897_;
}
else
{
lean_object* v___x_1916_; uint8_t v___x_1917_; 
v___x_1916_ = l_Lean_Expr_fvarId_x21(v_a_1894_);
lean_dec(v_a_1894_);
v___x_1917_ = l_Lean_instBEqFVarId_beq(v___x_1916_, v_x_1844_);
lean_dec(v___x_1916_);
v___y_1898_ = v___y_1914_;
v___y_1899_ = v___y_1913_;
v___y_1900_ = v___x_1917_;
goto v___jp_1897_;
}
}
v___jp_1918_:
{
if (v___y_1919_ == 0)
{
lean_del_object(v___x_1871_);
v___y_1913_ = v___y_1850_;
v___y_1914_ = v___y_1852_;
goto v___jp_1912_;
}
else
{
lean_object* v___x_1920_; 
lean_inc(v_x_1844_);
lean_inc(v_a_1894_);
v___x_1920_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_1894_, v_x_1844_, v___y_1850_, v___y_1852_);
if (lean_obj_tag(v___x_1920_) == 0)
{
lean_object* v_a_1921_; uint8_t v___x_1922_; 
v_a_1921_ = lean_ctor_get(v___x_1920_, 0);
lean_inc(v_a_1921_);
lean_dec_ref(v___x_1920_);
v___x_1922_ = lean_unbox(v_a_1921_);
lean_dec(v_a_1921_);
if (v___x_1922_ == 0)
{
lean_dec(v_a_1896_);
lean_dec(v_a_1894_);
lean_dec(v_x_1844_);
goto v___jp_1873_;
}
else
{
if (v___x_1880_ == 0)
{
lean_del_object(v___x_1871_);
v___y_1913_ = v___y_1850_;
v___y_1914_ = v___y_1852_;
goto v___jp_1912_;
}
else
{
lean_dec(v_a_1896_);
lean_dec(v_a_1894_);
lean_dec(v_x_1844_);
goto v___jp_1873_;
}
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_dec(v_a_1896_);
lean_dec(v_a_1894_);
lean_del_object(v___x_1871_);
lean_dec(v_val_1869_);
lean_dec(v_x_1844_);
v_a_1923_ = lean_ctor_get(v___x_1920_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1920_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1920_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1920_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
}
}
else
{
lean_object* v_a_1934_; lean_object* v___x_1936_; uint8_t v_isShared_1937_; uint8_t v_isSharedCheck_1941_; 
lean_dec(v_a_1894_);
lean_del_object(v___x_1871_);
lean_dec(v_val_1869_);
lean_dec(v_x_1844_);
v_a_1934_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1936_ = v___x_1895_;
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
else
{
lean_inc(v_a_1934_);
lean_dec(v___x_1895_);
v___x_1936_ = lean_box(0);
v_isShared_1937_ = v_isSharedCheck_1941_;
goto v_resetjp_1935_;
}
v_resetjp_1935_:
{
lean_object* v___x_1939_; 
if (v_isShared_1937_ == 0)
{
v___x_1939_ = v___x_1936_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v_a_1934_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec(v_snd_1892_);
lean_del_object(v___x_1871_);
lean_dec(v_val_1869_);
lean_dec(v_x_1844_);
v_a_1942_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1893_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1893_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
else
{
lean_dec(v_a_1888_);
lean_del_object(v___x_1871_);
lean_dec(v_val_1869_);
v_a_1855_ = v___x_1867_;
goto v___jp_1854_;
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_del_object(v___x_1871_);
lean_dec(v_val_1869_);
lean_dec(v_x_1844_);
v_a_1950_ = lean_ctor_get(v___x_1887_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1887_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1887_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1887_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
else
{
lean_del_object(v___x_1871_);
lean_dec(v_val_1869_);
v_a_1855_ = v___x_1867_;
goto v___jp_1854_;
}
v___jp_1873_:
{
lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1878_; 
v___x_1874_ = l_Lean_LocalDecl_fvarId(v_val_1869_);
lean_dec(v_val_1869_);
v___x_1875_ = lean_box(v___x_1859_);
v___x_1876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1876_, 0, v___x_1874_);
lean_ctor_set(v___x_1876_, 1, v___x_1875_);
if (v_isShared_1872_ == 0)
{
lean_ctor_set(v___x_1871_, 0, v___x_1876_);
v___x_1878_ = v___x_1871_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v___x_1876_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
v_a_1863_ = v___x_1878_;
goto v___jp_1862_;
}
}
v___jp_1881_:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1882_ = l_Lean_LocalDecl_fvarId(v_val_1869_);
lean_dec(v_val_1869_);
v___x_1883_ = lean_box(v___x_1880_);
v___x_1884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1884_, 0, v___x_1882_);
lean_ctor_set(v___x_1884_, 1, v___x_1883_);
v___x_1885_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1885_, 0, v___x_1884_);
v_a_1863_ = v___x_1885_;
goto v___jp_1862_;
}
}
}
v___jp_1862_:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1864_, 0, v_a_1863_);
v___x_1865_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
lean_ctor_set(v___x_1865_, 1, v___x_1861_);
v___x_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
return v___x_1866_;
}
}
v___jp_1854_:
{
size_t v___x_1856_; size_t v___x_1857_; 
v___x_1856_ = ((size_t)1ULL);
v___x_1857_ = lean_usize_add(v_i_1847_, v___x_1856_);
lean_inc_ref(v_a_1855_);
v_i_1847_ = v___x_1857_;
v_b_1848_ = v_a_1855_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_1959_, lean_object* v_as_1960_, lean_object* v_sz_1961_, lean_object* v_i_1962_, lean_object* v_b_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_){
_start:
{
size_t v_sz_boxed_1969_; size_t v_i_boxed_1970_; lean_object* v_res_1971_; 
v_sz_boxed_1969_ = lean_unbox_usize(v_sz_1961_);
lean_dec(v_sz_1961_);
v_i_boxed_1970_ = lean_unbox_usize(v_i_1962_);
lean_dec(v_i_1962_);
v_res_1971_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1959_, v_as_1960_, v_sz_boxed_1969_, v_i_boxed_1970_, v_b_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v_as_1960_);
return v_res_1971_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object* v_x_1972_, lean_object* v_as_1973_, size_t v_sz_1974_, size_t v_i_1975_, lean_object* v_b_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v_a_1983_; uint8_t v___x_1987_; 
v___x_1987_ = lean_usize_dec_lt(v_i_1975_, v_sz_1974_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; 
lean_dec(v_x_1972_);
v___x_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1988_, 0, v_b_1976_);
return v___x_1988_;
}
else
{
lean_object* v___x_1989_; lean_object* v_a_1991_; lean_object* v___x_1995_; lean_object* v_a_1996_; 
lean_dec_ref(v_b_1976_);
v___x_1989_ = lean_box(0);
v___x_1995_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0);
v_a_1996_ = lean_array_uget(v_as_1973_, v_i_1975_);
if (lean_obj_tag(v_a_1996_) == 0)
{
v_a_1983_ = v___x_1995_;
goto v___jp_1982_;
}
else
{
lean_object* v_val_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2086_; 
v_val_1997_ = lean_ctor_get(v_a_1996_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v_a_1996_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_1999_ = v_a_1996_;
v_isShared_2000_ = v_isSharedCheck_2086_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_val_1997_);
lean_dec(v_a_1996_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2086_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
uint8_t v___x_2008_; 
v___x_2008_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1997_);
if (v___x_2008_ == 0)
{
lean_object* v___x_2014_; lean_object* v___x_2015_; 
v___x_2014_ = l_Lean_LocalDecl_type(v_val_1997_);
v___x_2015_ = l_Lean_Meta_matchEq_x3f(v___x_2014_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref(v___x_2015_);
if (lean_obj_tag(v_a_2016_) == 1)
{
lean_object* v_val_2017_; lean_object* v_snd_2018_; lean_object* v_fst_2019_; lean_object* v_snd_2020_; lean_object* v___x_2021_; 
v_val_2017_ = lean_ctor_get(v_a_2016_, 0);
lean_inc(v_val_2017_);
lean_dec_ref(v_a_2016_);
v_snd_2018_ = lean_ctor_get(v_val_2017_, 1);
lean_inc(v_snd_2018_);
lean_dec(v_val_2017_);
v_fst_2019_ = lean_ctor_get(v_snd_2018_, 0);
lean_inc(v_fst_2019_);
v_snd_2020_ = lean_ctor_get(v_snd_2018_, 1);
lean_inc(v_snd_2020_);
lean_dec(v_snd_2018_);
v___x_2021_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_2019_, v___y_1978_, v___y_1980_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2023_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref(v___x_2021_);
v___x_2023_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_2020_, v___y_1978_, v___y_1980_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_a_2024_; lean_object* v___y_2026_; lean_object* v___y_2027_; uint8_t v___y_2028_; lean_object* v___y_2041_; lean_object* v___y_2042_; uint8_t v___y_2047_; uint8_t v___x_2059_; 
v_a_2024_ = lean_ctor_get(v___x_2023_, 0);
lean_inc(v_a_2024_);
lean_dec_ref(v___x_2023_);
v___x_2059_ = l_Lean_Expr_isFVar(v_a_2024_);
if (v___x_2059_ == 0)
{
v___y_2047_ = v___x_2059_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2060_; uint8_t v___x_2061_; 
v___x_2060_ = l_Lean_Expr_fvarId_x21(v_a_2024_);
v___x_2061_ = l_Lean_instBEqFVarId_beq(v___x_2060_, v_x_1972_);
lean_dec(v___x_2060_);
v___y_2047_ = v___x_2061_;
goto v___jp_2046_;
}
v___jp_2025_:
{
if (v___y_2028_ == 0)
{
lean_dec(v_a_2024_);
lean_dec(v_val_1997_);
v_a_1983_ = v___x_1995_;
goto v___jp_1982_;
}
else
{
lean_object* v___x_2029_; 
lean_inc(v_x_1972_);
v___x_2029_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_2024_, v_x_1972_, v___y_2027_, v___y_2026_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_a_2030_; uint8_t v___x_2031_; 
v_a_2030_ = lean_ctor_get(v___x_2029_, 0);
lean_inc(v_a_2030_);
lean_dec_ref(v___x_2029_);
v___x_2031_ = lean_unbox(v_a_2030_);
lean_dec(v_a_2030_);
if (v___x_2031_ == 0)
{
lean_dec(v_x_1972_);
goto v___jp_2009_;
}
else
{
if (v___x_2008_ == 0)
{
lean_dec(v_val_1997_);
v_a_1983_ = v___x_1995_;
goto v___jp_1982_;
}
else
{
lean_dec(v_x_1972_);
goto v___jp_2009_;
}
}
}
else
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2039_; 
lean_dec(v_val_1997_);
lean_dec(v_x_1972_);
v_a_2032_ = lean_ctor_get(v___x_2029_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2034_ = v___x_2029_;
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2029_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2032_);
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
v___jp_2040_:
{
uint8_t v___x_2043_; 
v___x_2043_ = l_Lean_Expr_isFVar(v_a_2022_);
if (v___x_2043_ == 0)
{
lean_dec(v_a_2022_);
v___y_2026_ = v___y_2042_;
v___y_2027_ = v___y_2041_;
v___y_2028_ = v___x_2043_;
goto v___jp_2025_;
}
else
{
lean_object* v___x_2044_; uint8_t v___x_2045_; 
v___x_2044_ = l_Lean_Expr_fvarId_x21(v_a_2022_);
lean_dec(v_a_2022_);
v___x_2045_ = l_Lean_instBEqFVarId_beq(v___x_2044_, v_x_1972_);
lean_dec(v___x_2044_);
v___y_2026_ = v___y_2042_;
v___y_2027_ = v___y_2041_;
v___y_2028_ = v___x_2045_;
goto v___jp_2025_;
}
}
v___jp_2046_:
{
if (v___y_2047_ == 0)
{
lean_del_object(v___x_1999_);
v___y_2041_ = v___y_1978_;
v___y_2042_ = v___y_1980_;
goto v___jp_2040_;
}
else
{
lean_object* v___x_2048_; 
lean_inc(v_x_1972_);
lean_inc(v_a_2022_);
v___x_2048_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__4___redArg(v_a_2022_, v_x_1972_, v___y_1978_, v___y_1980_);
if (lean_obj_tag(v___x_2048_) == 0)
{
lean_object* v_a_2049_; uint8_t v___x_2050_; 
v_a_2049_ = lean_ctor_get(v___x_2048_, 0);
lean_inc(v_a_2049_);
lean_dec_ref(v___x_2048_);
v___x_2050_ = lean_unbox(v_a_2049_);
lean_dec(v_a_2049_);
if (v___x_2050_ == 0)
{
lean_dec(v_a_2024_);
lean_dec(v_a_2022_);
lean_dec(v_x_1972_);
goto v___jp_2001_;
}
else
{
if (v___x_2008_ == 0)
{
lean_del_object(v___x_1999_);
v___y_2041_ = v___y_1978_;
v___y_2042_ = v___y_1980_;
goto v___jp_2040_;
}
else
{
lean_dec(v_a_2024_);
lean_dec(v_a_2022_);
lean_dec(v_x_1972_);
goto v___jp_2001_;
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
lean_dec(v_a_2024_);
lean_dec(v_a_2022_);
lean_del_object(v___x_1999_);
lean_dec(v_val_1997_);
lean_dec(v_x_1972_);
v_a_2051_ = lean_ctor_get(v___x_2048_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2048_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2048_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2048_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2056_; 
if (v_isShared_2054_ == 0)
{
v___x_2056_ = v___x_2053_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v_a_2051_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
}
}
}
}
else
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2069_; 
lean_dec(v_a_2022_);
lean_del_object(v___x_1999_);
lean_dec(v_val_1997_);
lean_dec(v_x_1972_);
v_a_2062_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_2064_ = v___x_2023_;
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2023_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2069_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2067_; 
if (v_isShared_2065_ == 0)
{
v___x_2067_ = v___x_2064_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v_a_2062_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
else
{
lean_object* v_a_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2077_; 
lean_dec(v_snd_2020_);
lean_del_object(v___x_1999_);
lean_dec(v_val_1997_);
lean_dec(v_x_1972_);
v_a_2070_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2077_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2077_ == 0)
{
v___x_2072_ = v___x_2021_;
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_a_2070_);
lean_dec(v___x_2021_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2077_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2075_; 
if (v_isShared_2073_ == 0)
{
v___x_2075_ = v___x_2072_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_a_2070_);
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
else
{
lean_dec(v_a_2016_);
lean_del_object(v___x_1999_);
lean_dec(v_val_1997_);
v_a_1983_ = v___x_1995_;
goto v___jp_1982_;
}
}
else
{
lean_object* v_a_2078_; lean_object* v___x_2080_; uint8_t v_isShared_2081_; uint8_t v_isSharedCheck_2085_; 
lean_del_object(v___x_1999_);
lean_dec(v_val_1997_);
lean_dec(v_x_1972_);
v_a_2078_ = lean_ctor_get(v___x_2015_, 0);
v_isSharedCheck_2085_ = !lean_is_exclusive(v___x_2015_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2080_ = v___x_2015_;
v_isShared_2081_ = v_isSharedCheck_2085_;
goto v_resetjp_2079_;
}
else
{
lean_inc(v_a_2078_);
lean_dec(v___x_2015_);
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
else
{
lean_del_object(v___x_1999_);
lean_dec(v_val_1997_);
v_a_1983_ = v___x_1995_;
goto v___jp_1982_;
}
v___jp_2001_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2006_; 
v___x_2002_ = l_Lean_LocalDecl_fvarId(v_val_1997_);
lean_dec(v_val_1997_);
v___x_2003_ = lean_box(v___x_1987_);
v___x_2004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_2002_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 0, v___x_2004_);
v___x_2006_ = v___x_1999_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2007_; 
v_reuseFailAlloc_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2007_, 0, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2007_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
v_a_1991_ = v___x_2006_;
goto v___jp_1990_;
}
}
v___jp_2009_:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; 
v___x_2010_ = l_Lean_LocalDecl_fvarId(v_val_1997_);
lean_dec(v_val_1997_);
v___x_2011_ = lean_box(v___x_2008_);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2010_);
lean_ctor_set(v___x_2012_, 1, v___x_2011_);
v___x_2013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
v_a_1991_ = v___x_2013_;
goto v___jp_1990_;
}
}
}
v___jp_1990_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; 
v___x_1992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1992_, 0, v_a_1991_);
v___x_1993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1993_, 0, v___x_1992_);
lean_ctor_set(v___x_1993_, 1, v___x_1989_);
v___x_1994_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1993_);
return v___x_1994_;
}
}
v___jp_1982_:
{
size_t v___x_1984_; size_t v___x_1985_; lean_object* v___x_1986_; 
v___x_1984_ = ((size_t)1ULL);
v___x_1985_ = lean_usize_add(v_i_1975_, v___x_1984_);
lean_inc_ref(v_a_1983_);
v___x_1986_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1972_, v_as_1973_, v_sz_1974_, v___x_1985_, v_a_1983_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_);
return v___x_1986_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2087_, lean_object* v_as_2088_, lean_object* v_sz_2089_, lean_object* v_i_2090_, lean_object* v_b_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_){
_start:
{
size_t v_sz_boxed_2097_; size_t v_i_boxed_2098_; lean_object* v_res_2099_; 
v_sz_boxed_2097_ = lean_unbox_usize(v_sz_2089_);
lean_dec(v_sz_2089_);
v_i_boxed_2098_ = lean_unbox_usize(v_i_2090_);
lean_dec(v_i_2090_);
v_res_2099_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2087_, v_as_2088_, v_sz_boxed_2097_, v_i_boxed_2098_, v_b_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_);
lean_dec(v___y_2095_);
lean_dec_ref(v___y_2094_);
lean_dec(v___y_2093_);
lean_dec_ref(v___y_2092_);
lean_dec_ref(v_as_2088_);
return v_res_2099_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object* v_x_2100_, lean_object* v_x_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_){
_start:
{
if (lean_obj_tag(v_x_2101_) == 0)
{
lean_object* v_cs_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; size_t v_sz_2110_; size_t v___x_2111_; lean_object* v___x_2112_; 
v_cs_2107_ = lean_ctor_get(v_x_2101_, 0);
v___x_2108_ = lean_box(0);
v___x_2109_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0);
v_sz_2110_ = lean_array_size(v_cs_2107_);
v___x_2111_ = ((size_t)0ULL);
v___x_2112_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2100_, v_cs_2107_, v_sz_2110_, v___x_2111_, v___x_2109_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_);
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; lean_object* v___x_2115_; uint8_t v_isShared_2116_; uint8_t v_isSharedCheck_2125_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2115_ = v___x_2112_;
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
else
{
lean_inc(v_a_2113_);
lean_dec(v___x_2112_);
v___x_2115_ = lean_box(0);
v_isShared_2116_ = v_isSharedCheck_2125_;
goto v_resetjp_2114_;
}
v_resetjp_2114_:
{
lean_object* v_fst_2117_; 
v_fst_2117_ = lean_ctor_get(v_a_2113_, 0);
lean_inc(v_fst_2117_);
lean_dec(v_a_2113_);
if (lean_obj_tag(v_fst_2117_) == 0)
{
lean_object* v___x_2119_; 
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 0, v___x_2108_);
v___x_2119_ = v___x_2115_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2108_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
else
{
lean_object* v_val_2121_; lean_object* v___x_2123_; 
v_val_2121_ = lean_ctor_get(v_fst_2117_, 0);
lean_inc(v_val_2121_);
lean_dec_ref(v_fst_2117_);
if (v_isShared_2116_ == 0)
{
lean_ctor_set(v___x_2115_, 0, v_val_2121_);
v___x_2123_ = v___x_2115_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_val_2121_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
else
{
lean_object* v_a_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2133_; 
v_a_2126_ = lean_ctor_get(v___x_2112_, 0);
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2133_ == 0)
{
v___x_2128_ = v___x_2112_;
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_a_2126_);
lean_dec(v___x_2112_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2133_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v___x_2131_; 
if (v_isShared_2129_ == 0)
{
v___x_2131_ = v___x_2128_;
goto v_reusejp_2130_;
}
else
{
lean_object* v_reuseFailAlloc_2132_; 
v_reuseFailAlloc_2132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2132_, 0, v_a_2126_);
v___x_2131_ = v_reuseFailAlloc_2132_;
goto v_reusejp_2130_;
}
v_reusejp_2130_:
{
return v___x_2131_;
}
}
}
}
else
{
lean_object* v_vs_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; size_t v_sz_2137_; size_t v___x_2138_; lean_object* v___x_2139_; 
v_vs_2134_ = lean_ctor_get(v_x_2101_, 0);
v___x_2135_ = lean_box(0);
v___x_2136_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0);
v_sz_2137_ = lean_array_size(v_vs_2134_);
v___x_2138_ = ((size_t)0ULL);
v___x_2139_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2100_, v_vs_2134_, v_sz_2137_, v___x_2138_, v___x_2136_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_);
if (lean_obj_tag(v___x_2139_) == 0)
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2152_; 
v_a_2140_ = lean_ctor_get(v___x_2139_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2142_ = v___x_2139_;
v_isShared_2143_ = v_isSharedCheck_2152_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2139_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2152_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v_fst_2144_; 
v_fst_2144_ = lean_ctor_get(v_a_2140_, 0);
lean_inc(v_fst_2144_);
lean_dec(v_a_2140_);
if (lean_obj_tag(v_fst_2144_) == 0)
{
lean_object* v___x_2146_; 
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 0, v___x_2135_);
v___x_2146_ = v___x_2142_;
goto v_reusejp_2145_;
}
else
{
lean_object* v_reuseFailAlloc_2147_; 
v_reuseFailAlloc_2147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2147_, 0, v___x_2135_);
v___x_2146_ = v_reuseFailAlloc_2147_;
goto v_reusejp_2145_;
}
v_reusejp_2145_:
{
return v___x_2146_;
}
}
else
{
lean_object* v_val_2148_; lean_object* v___x_2150_; 
v_val_2148_ = lean_ctor_get(v_fst_2144_, 0);
lean_inc(v_val_2148_);
lean_dec_ref(v_fst_2144_);
if (v_isShared_2143_ == 0)
{
lean_ctor_set(v___x_2142_, 0, v_val_2148_);
v___x_2150_ = v___x_2142_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_val_2148_);
v___x_2150_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
return v___x_2150_;
}
}
}
}
else
{
lean_object* v_a_2153_; lean_object* v___x_2155_; uint8_t v_isShared_2156_; uint8_t v_isSharedCheck_2160_; 
v_a_2153_ = lean_ctor_get(v___x_2139_, 0);
v_isSharedCheck_2160_ = !lean_is_exclusive(v___x_2139_);
if (v_isSharedCheck_2160_ == 0)
{
v___x_2155_ = v___x_2139_;
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
else
{
lean_inc(v_a_2153_);
lean_dec(v___x_2139_);
v___x_2155_ = lean_box(0);
v_isShared_2156_ = v_isSharedCheck_2160_;
goto v_resetjp_2154_;
}
v_resetjp_2154_:
{
lean_object* v___x_2158_; 
if (v_isShared_2156_ == 0)
{
v___x_2158_ = v___x_2155_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2159_; 
v_reuseFailAlloc_2159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2159_, 0, v_a_2153_);
v___x_2158_ = v_reuseFailAlloc_2159_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
return v___x_2158_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2161_, lean_object* v_as_2162_, size_t v_sz_2163_, size_t v_i_2164_, lean_object* v_b_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_){
_start:
{
uint8_t v___x_2171_; 
v___x_2171_ = lean_usize_dec_lt(v_i_2164_, v_sz_2163_);
if (v___x_2171_ == 0)
{
lean_object* v___x_2172_; 
lean_dec(v_x_2161_);
v___x_2172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2172_, 0, v_b_2165_);
return v___x_2172_;
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2174_; 
lean_dec_ref(v_b_2165_);
v_a_2173_ = lean_array_uget_borrowed(v_as_2162_, v_i_2164_);
lean_inc(v_x_2161_);
v___x_2174_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2161_, v_a_2173_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
if (lean_obj_tag(v___x_2174_) == 0)
{
lean_object* v_a_2175_; lean_object* v___x_2177_; uint8_t v_isShared_2178_; uint8_t v_isSharedCheck_2189_; 
v_a_2175_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2189_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2189_ == 0)
{
v___x_2177_ = v___x_2174_;
v_isShared_2178_ = v_isSharedCheck_2189_;
goto v_resetjp_2176_;
}
else
{
lean_inc(v_a_2175_);
lean_dec(v___x_2174_);
v___x_2177_ = lean_box(0);
v_isShared_2178_ = v_isSharedCheck_2189_;
goto v_resetjp_2176_;
}
v_resetjp_2176_:
{
lean_object* v___x_2179_; 
v___x_2179_ = lean_box(0);
if (lean_obj_tag(v_a_2175_) == 1)
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2183_; 
lean_dec(v_x_2161_);
v___x_2180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2180_, 0, v_a_2175_);
v___x_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
lean_ctor_set(v___x_2181_, 1, v___x_2179_);
if (v_isShared_2178_ == 0)
{
lean_ctor_set(v___x_2177_, 0, v___x_2181_);
v___x_2183_ = v___x_2177_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v___x_2181_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
else
{
lean_object* v___x_2185_; size_t v___x_2186_; size_t v___x_2187_; 
lean_del_object(v___x_2177_);
lean_dec(v_a_2175_);
v___x_2185_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0);
v___x_2186_ = ((size_t)1ULL);
v___x_2187_ = lean_usize_add(v_i_2164_, v___x_2186_);
v_i_2164_ = v___x_2187_;
v_b_2165_ = v___x_2185_;
goto _start;
}
}
}
else
{
lean_object* v_a_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2197_; 
lean_dec(v_x_2161_);
v_a_2190_ = lean_ctor_get(v___x_2174_, 0);
v_isSharedCheck_2197_ = !lean_is_exclusive(v___x_2174_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2192_ = v___x_2174_;
v_isShared_2193_ = v_isSharedCheck_2197_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_a_2190_);
lean_dec(v___x_2174_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_x_2198_, lean_object* v_as_2199_, lean_object* v_sz_2200_, lean_object* v_i_2201_, lean_object* v_b_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
size_t v_sz_boxed_2208_; size_t v_i_boxed_2209_; lean_object* v_res_2210_; 
v_sz_boxed_2208_ = lean_unbox_usize(v_sz_2200_);
lean_dec(v_sz_2200_);
v_i_boxed_2209_ = lean_unbox_usize(v_i_2201_);
lean_dec(v_i_2201_);
v_res_2210_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2198_, v_as_2199_, v_sz_boxed_2208_, v_i_boxed_2209_, v_b_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec_ref(v_as_2199_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object* v_x_2211_, lean_object* v_x_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2211_, v_x_2212_, v___y_2213_, v___y_2214_, v___y_2215_, v___y_2216_);
lean_dec(v___y_2216_);
lean_dec_ref(v___y_2215_);
lean_dec(v___y_2214_);
lean_dec_ref(v___y_2213_);
lean_dec_ref(v_x_2212_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object* v_x_2219_, lean_object* v_t_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v_root_2226_; lean_object* v_tail_2227_; lean_object* v___x_2228_; 
v_root_2226_ = lean_ctor_get(v_t_2220_, 0);
v_tail_2227_ = lean_ctor_get(v_t_2220_, 1);
lean_inc(v_x_2219_);
v___x_2228_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2219_, v_root_2226_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_a_2229_);
if (lean_obj_tag(v_a_2229_) == 0)
{
lean_object* v___x_2230_; size_t v_sz_2231_; size_t v___x_2232_; lean_object* v___x_2233_; 
lean_dec_ref(v___x_2228_);
v___x_2230_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0);
v_sz_2231_ = lean_array_size(v_tail_2227_);
v___x_2232_ = ((size_t)0ULL);
v___x_2233_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2219_, v_tail_2227_, v_sz_2231_, v___x_2232_, v___x_2230_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_);
if (lean_obj_tag(v___x_2233_) == 0)
{
lean_object* v_a_2234_; lean_object* v___x_2236_; uint8_t v_isShared_2237_; uint8_t v_isSharedCheck_2246_; 
v_a_2234_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2246_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2246_ == 0)
{
v___x_2236_ = v___x_2233_;
v_isShared_2237_ = v_isSharedCheck_2246_;
goto v_resetjp_2235_;
}
else
{
lean_inc(v_a_2234_);
lean_dec(v___x_2233_);
v___x_2236_ = lean_box(0);
v_isShared_2237_ = v_isSharedCheck_2246_;
goto v_resetjp_2235_;
}
v_resetjp_2235_:
{
lean_object* v_fst_2238_; 
v_fst_2238_ = lean_ctor_get(v_a_2234_, 0);
lean_inc(v_fst_2238_);
lean_dec(v_a_2234_);
if (lean_obj_tag(v_fst_2238_) == 0)
{
lean_object* v___x_2240_; 
if (v_isShared_2237_ == 0)
{
lean_ctor_set(v___x_2236_, 0, v_a_2229_);
v___x_2240_ = v___x_2236_;
goto v_reusejp_2239_;
}
else
{
lean_object* v_reuseFailAlloc_2241_; 
v_reuseFailAlloc_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2241_, 0, v_a_2229_);
v___x_2240_ = v_reuseFailAlloc_2241_;
goto v_reusejp_2239_;
}
v_reusejp_2239_:
{
return v___x_2240_;
}
}
else
{
lean_object* v_val_2242_; lean_object* v___x_2244_; 
v_val_2242_ = lean_ctor_get(v_fst_2238_, 0);
lean_inc(v_val_2242_);
lean_dec_ref(v_fst_2238_);
if (v_isShared_2237_ == 0)
{
lean_ctor_set(v___x_2236_, 0, v_val_2242_);
v___x_2244_ = v___x_2236_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_val_2242_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
return v___x_2244_;
}
}
}
}
else
{
lean_object* v_a_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2254_; 
v_a_2247_ = lean_ctor_get(v___x_2233_, 0);
v_isSharedCheck_2254_ = !lean_is_exclusive(v___x_2233_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2249_ = v___x_2233_;
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_a_2247_);
lean_dec(v___x_2233_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2254_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2252_; 
if (v_isShared_2250_ == 0)
{
v___x_2252_ = v___x_2249_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_a_2247_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
}
}
else
{
lean_dec_ref(v_a_2229_);
lean_dec(v_x_2219_);
return v___x_2228_;
}
}
else
{
lean_dec(v_x_2219_);
return v___x_2228_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object* v_x_2255_, lean_object* v_t_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2255_, v_t_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec_ref(v_t_2256_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object* v_x_2263_, lean_object* v_lctx_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_){
_start:
{
lean_object* v_decls_2270_; lean_object* v___x_2271_; 
v_decls_2270_ = lean_ctor_get(v_lctx_2264_, 1);
v___x_2271_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2263_, v_decls_2270_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object* v_x_2272_, lean_object* v_lctx_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2272_, v_lctx_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec_ref(v___y_2274_);
lean_dec_ref(v_lctx_2273_);
return v_res_2279_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2280_; 
v___x_2280_ = lean_mk_string_unchecked("did not find equation for eliminating '", 39, 39);
return v___x_2280_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2281_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__0, &l_Lean_Meta_substVar___lam__0___closed__0_once, _init_l_Lean_Meta_substVar___lam__0___closed__0);
v___x_2282_ = l_Lean_stringToMessageData(v___x_2281_);
return v___x_2282_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = lean_mk_string_unchecked("variable '", 10, 10);
return v___x_2283_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2284_; lean_object* v___x_2285_; 
v___x_2284_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__2, &l_Lean_Meta_substVar___lam__0___closed__2_once, _init_l_Lean_Meta_substVar___lam__0___closed__2);
v___x_2285_ = l_Lean_stringToMessageData(v___x_2284_);
return v___x_2285_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2286_; 
v___x_2286_ = lean_mk_string_unchecked("' is a let-declaration", 22, 22);
return v___x_2286_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2287_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__4, &l_Lean_Meta_substVar___lam__0___closed__4_once, _init_l_Lean_Meta_substVar___lam__0___closed__4);
v___x_2288_ = l_Lean_stringToMessageData(v___x_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object* v_x_2289_, lean_object* v_mvarId_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
lean_object* v___y_2297_; lean_object* v___y_2298_; lean_object* v___y_2299_; lean_object* v___y_2300_; lean_object* v___x_2345_; 
lean_inc(v_x_2289_);
v___x_2345_ = l_Lean_FVarId_getDecl___redArg(v_x_2289_, v___y_2291_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2345_) == 0)
{
lean_object* v_a_2346_; uint8_t v___x_2347_; uint8_t v___x_2348_; 
v_a_2346_ = lean_ctor_get(v___x_2345_, 0);
lean_inc(v_a_2346_);
lean_dec_ref(v___x_2345_);
v___x_2347_ = 0;
v___x_2348_ = l_Lean_LocalDecl_isLet(v_a_2346_, v___x_2347_);
lean_dec(v_a_2346_);
if (v___x_2348_ == 0)
{
v___y_2297_ = v___y_2291_;
v___y_2298_ = v___y_2292_;
v___y_2299_ = v___y_2293_;
v___y_2300_ = v___y_2294_;
goto v___jp_2296_;
}
else
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2349_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__1, &l_Lean_Meta_substCore___lam__3___closed__1_once, _init_l_Lean_Meta_substCore___lam__3___closed__1);
v___x_2350_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__3, &l_Lean_Meta_substVar___lam__0___closed__3_once, _init_l_Lean_Meta_substVar___lam__0___closed__3);
lean_inc(v_x_2289_);
v___x_2351_ = l_Lean_mkFVar(v_x_2289_);
v___x_2352_ = l_Lean_MessageData_ofExpr(v___x_2351_);
v___x_2353_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2353_, 0, v___x_2350_);
lean_ctor_set(v___x_2353_, 1, v___x_2352_);
v___x_2354_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__5, &l_Lean_Meta_substVar___lam__0___closed__5_once, _init_l_Lean_Meta_substVar___lam__0___closed__5);
v___x_2355_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2355_, 0, v___x_2353_);
lean_ctor_set(v___x_2355_, 1, v___x_2354_);
v___x_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2355_);
lean_inc(v_mvarId_2290_);
v___x_2357_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2349_, v_mvarId_2290_, v___x_2356_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_);
if (lean_obj_tag(v___x_2357_) == 0)
{
lean_dec_ref(v___x_2357_);
v___y_2297_ = v___y_2291_;
v___y_2298_ = v___y_2292_;
v___y_2299_ = v___y_2293_;
v___y_2300_ = v___y_2294_;
goto v___jp_2296_;
}
else
{
lean_object* v_a_2358_; lean_object* v___x_2360_; uint8_t v_isShared_2361_; uint8_t v_isSharedCheck_2365_; 
lean_dec(v_mvarId_2290_);
lean_dec(v_x_2289_);
v_a_2358_ = lean_ctor_get(v___x_2357_, 0);
v_isSharedCheck_2365_ = !lean_is_exclusive(v___x_2357_);
if (v_isSharedCheck_2365_ == 0)
{
v___x_2360_ = v___x_2357_;
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
else
{
lean_inc(v_a_2358_);
lean_dec(v___x_2357_);
v___x_2360_ = lean_box(0);
v_isShared_2361_ = v_isSharedCheck_2365_;
goto v_resetjp_2359_;
}
v_resetjp_2359_:
{
lean_object* v___x_2363_; 
if (v_isShared_2361_ == 0)
{
v___x_2363_ = v___x_2360_;
goto v_reusejp_2362_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2358_);
v___x_2363_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2362_;
}
v_reusejp_2362_:
{
return v___x_2363_;
}
}
}
}
}
else
{
lean_object* v_a_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2373_; 
lean_dec(v_mvarId_2290_);
lean_dec(v_x_2289_);
v_a_2366_ = lean_ctor_get(v___x_2345_, 0);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2345_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2368_ = v___x_2345_;
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_a_2366_);
lean_dec(v___x_2345_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2373_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2371_; 
if (v_isShared_2369_ == 0)
{
v___x_2371_ = v___x_2368_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v_a_2366_);
v___x_2371_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
return v___x_2371_;
}
}
}
v___jp_2296_:
{
lean_object* v_lctx_2301_; lean_object* v___x_2302_; 
v_lctx_2301_ = lean_ctor_get(v___y_2297_, 2);
lean_inc(v_x_2289_);
v___x_2302_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2289_, v_lctx_2301_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
if (lean_obj_tag(v___x_2302_) == 0)
{
lean_object* v_a_2303_; 
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
lean_inc(v_a_2303_);
lean_dec_ref(v___x_2302_);
if (lean_obj_tag(v_a_2303_) == 1)
{
lean_object* v_val_2304_; lean_object* v_fst_2305_; lean_object* v_snd_2306_; lean_object* v___x_2307_; uint8_t v___x_2308_; uint8_t v___x_2309_; lean_object* v___x_2310_; 
lean_dec(v_x_2289_);
v_val_2304_ = lean_ctor_get(v_a_2303_, 0);
lean_inc(v_val_2304_);
lean_dec_ref(v_a_2303_);
v_fst_2305_ = lean_ctor_get(v_val_2304_, 0);
lean_inc(v_fst_2305_);
v_snd_2306_ = lean_ctor_get(v_val_2304_, 1);
lean_inc(v_snd_2306_);
lean_dec(v_val_2304_);
v___x_2307_ = lean_box(0);
v___x_2308_ = 1;
v___x_2309_ = lean_unbox(v_snd_2306_);
lean_dec(v_snd_2306_);
v___x_2310_ = l_Lean_Meta_substCore(v_mvarId_2290_, v_fst_2305_, v___x_2309_, v___x_2307_, v___x_2308_, v___x_2308_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2319_; 
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2319_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2319_ == 0)
{
v___x_2313_ = v___x_2310_;
v_isShared_2314_ = v_isSharedCheck_2319_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2310_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2319_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v_snd_2315_; lean_object* v___x_2317_; 
v_snd_2315_ = lean_ctor_get(v_a_2311_, 1);
lean_inc(v_snd_2315_);
lean_dec(v_a_2311_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 0, v_snd_2315_);
v___x_2317_ = v___x_2313_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v_snd_2315_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
else
{
lean_object* v_a_2320_; lean_object* v___x_2322_; uint8_t v_isShared_2323_; uint8_t v_isSharedCheck_2327_; 
v_a_2320_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2327_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2322_ = v___x_2310_;
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
else
{
lean_inc(v_a_2320_);
lean_dec(v___x_2310_);
v___x_2322_ = lean_box(0);
v_isShared_2323_ = v_isSharedCheck_2327_;
goto v_resetjp_2321_;
}
v_resetjp_2321_:
{
lean_object* v___x_2325_; 
if (v_isShared_2323_ == 0)
{
v___x_2325_ = v___x_2322_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_a_2320_);
v___x_2325_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
return v___x_2325_;
}
}
}
}
else
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
lean_dec(v_a_2303_);
v___x_2328_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__1, &l_Lean_Meta_substCore___lam__3___closed__1_once, _init_l_Lean_Meta_substCore___lam__3___closed__1);
v___x_2329_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__1, &l_Lean_Meta_substVar___lam__0___closed__1_once, _init_l_Lean_Meta_substVar___lam__0___closed__1);
v___x_2330_ = l_Lean_mkFVar(v_x_2289_);
v___x_2331_ = l_Lean_MessageData_ofExpr(v___x_2330_);
v___x_2332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2329_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__17, &l_Lean_Meta_substCore___lam__3___closed__17_once, _init_l_Lean_Meta_substCore___lam__3___closed__17);
v___x_2334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
v___x_2336_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2328_, v_mvarId_2290_, v___x_2335_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
return v___x_2336_;
}
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec(v_mvarId_2290_);
lean_dec(v_x_2289_);
v_a_2337_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2302_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2302_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object* v_x_2374_, lean_object* v_mvarId_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_){
_start:
{
lean_object* v_res_2381_; 
v_res_2381_ = l_Lean_Meta_substVar___lam__0(v_x_2374_, v_mvarId_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
lean_dec(v___y_2379_);
lean_dec_ref(v___y_2378_);
lean_dec(v___y_2377_);
lean_dec_ref(v___y_2376_);
return v_res_2381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object* v_mvarId_2382_, lean_object* v_x_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_){
_start:
{
lean_object* v___f_2389_; lean_object* v___x_2390_; 
lean_inc(v_mvarId_2382_);
v___f_2389_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2389_, 0, v_x_2383_);
lean_closure_set(v___f_2389_, 1, v_mvarId_2382_);
v___x_2390_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2382_, v___f_2389_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object* v_mvarId_2391_, lean_object* v_x_2392_, lean_object* v_a_2393_, lean_object* v_a_2394_, lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_){
_start:
{
lean_object* v_res_2398_; 
v_res_2398_ = l_Lean_Meta_substVar(v_mvarId_2391_, v_x_2392_, v_a_2393_, v_a_2394_, v_a_2395_, v_a_2396_);
lean_dec(v_a_2396_);
lean_dec_ref(v_a_2395_);
lean_dec(v_a_2394_);
lean_dec_ref(v_a_2393_);
return v_res_2398_;
}
}
static lean_object* _init_l_Lean_Meta_substEq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = lean_mk_string_unchecked("invalid equality proof, it is not of the form (x = t) or (t = x)", 64, 64);
return v___x_2399_;
}
}
static lean_object* _init_l_Lean_Meta_substEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2400_ = lean_obj_once(&l_Lean_Meta_substEq___lam__0___closed__0, &l_Lean_Meta_substEq___lam__0___closed__0_once, _init_l_Lean_Meta_substEq___lam__0___closed__0);
v___x_2401_ = l_Lean_stringToMessageData(v___x_2400_);
return v___x_2401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object* v_fst_2402_, lean_object* v_snd_2403_, uint8_t v___x_2404_, lean_object* v_fvarSubst_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_){
_start:
{
lean_object* v___x_2411_; 
lean_inc(v_fst_2402_);
v___x_2411_ = l_Lean_FVarId_getDecl___redArg(v_fst_2402_, v___y_2406_, v___y_2408_, v___y_2409_);
if (lean_obj_tag(v___x_2411_) == 0)
{
lean_object* v_a_2412_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v_newType_2426_; uint8_t v_symm_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___x_2467_; lean_object* v___x_2468_; 
v_a_2412_ = lean_ctor_get(v___x_2411_, 0);
lean_inc(v_a_2412_);
lean_dec_ref(v___x_2411_);
v___x_2467_ = l_Lean_LocalDecl_type(v_a_2412_);
v___x_2468_ = l_Lean_Meta_matchEq_x3f(v___x_2467_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
if (lean_obj_tag(v___x_2468_) == 0)
{
lean_object* v_a_2469_; 
v_a_2469_ = lean_ctor_get(v___x_2468_, 0);
lean_inc(v_a_2469_);
lean_dec_ref(v___x_2468_);
if (lean_obj_tag(v_a_2469_) == 1)
{
lean_object* v_val_2470_; lean_object* v_snd_2471_; lean_object* v_fst_2472_; lean_object* v_snd_2473_; lean_object* v___x_2474_; 
v_val_2470_ = lean_ctor_get(v_a_2469_, 0);
lean_inc(v_val_2470_);
lean_dec_ref(v_a_2469_);
v_snd_2471_ = lean_ctor_get(v_val_2470_, 1);
lean_inc(v_snd_2471_);
lean_dec(v_val_2470_);
v_fst_2472_ = lean_ctor_get(v_snd_2471_, 0);
lean_inc(v_fst_2472_);
v_snd_2473_ = lean_ctor_get(v_snd_2471_, 1);
lean_inc_n(v_snd_2473_, 2);
lean_dec(v_snd_2471_);
lean_inc(v___y_2409_);
lean_inc_ref(v___y_2408_);
lean_inc(v___y_2407_);
lean_inc_ref(v___y_2406_);
v___x_2474_ = lean_whnf(v_snd_2473_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; uint8_t v___x_2476_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref(v___x_2474_);
v___x_2476_ = l_Lean_Expr_isFVar(v_a_2475_);
if (v___x_2476_ == 0)
{
lean_object* v___x_2477_; 
lean_dec(v_a_2475_);
lean_inc(v___y_2409_);
lean_inc_ref(v___y_2408_);
lean_inc(v___y_2407_);
lean_inc_ref(v___y_2406_);
lean_inc(v_fst_2472_);
v___x_2477_ = lean_whnf(v_fst_2472_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v_a_2478_; uint8_t v___y_2480_; uint8_t v___x_2492_; 
v_a_2478_ = lean_ctor_get(v___x_2477_, 0);
lean_inc(v_a_2478_);
lean_dec_ref(v___x_2477_);
v___x_2492_ = l_Lean_Expr_isFVar(v_a_2478_);
if (v___x_2492_ == 0)
{
lean_dec(v_a_2478_);
lean_dec(v_snd_2473_);
lean_dec(v_fst_2472_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_fst_2402_);
v___y_2414_ = v___y_2406_;
v___y_2415_ = v___y_2407_;
v___y_2416_ = v___y_2408_;
v___y_2417_ = v___y_2409_;
goto v___jp_2413_;
}
else
{
uint8_t v___x_2493_; 
v___x_2493_ = lean_expr_eqv(v_fst_2472_, v_a_2478_);
lean_dec(v_fst_2472_);
if (v___x_2493_ == 0)
{
v___y_2480_ = v___x_2492_;
goto v___jp_2479_;
}
else
{
v___y_2480_ = v___x_2476_;
goto v___jp_2479_;
}
}
v___jp_2479_:
{
if (v___y_2480_ == 0)
{
lean_object* v___x_2481_; 
lean_dec(v_a_2478_);
lean_dec(v_snd_2473_);
lean_dec(v_a_2412_);
v___x_2481_ = l_Lean_Meta_substCore(v_snd_2403_, v_fst_2402_, v___y_2480_, v_fvarSubst_2405_, v___x_2404_, v___x_2404_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
return v___x_2481_;
}
else
{
lean_object* v___x_2482_; 
v___x_2482_ = l_Lean_Meta_mkEq(v_a_2478_, v_snd_2473_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
lean_inc(v_a_2483_);
lean_dec_ref(v___x_2482_);
v_newType_2426_ = v_a_2483_;
v_symm_2427_ = v___x_2476_;
v___y_2428_ = v___y_2406_;
v___y_2429_ = v___y_2407_;
v___y_2430_ = v___y_2408_;
v___y_2431_ = v___y_2409_;
goto v___jp_2425_;
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
lean_dec(v_a_2412_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_snd_2403_);
lean_dec(v_fst_2402_);
v_a_2484_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2482_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2482_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
}
}
else
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2501_; 
lean_dec(v_snd_2473_);
lean_dec(v_fst_2472_);
lean_dec(v_a_2412_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_snd_2403_);
lean_dec(v_fst_2402_);
v_a_2494_ = lean_ctor_get(v___x_2477_, 0);
v_isSharedCheck_2501_ = !lean_is_exclusive(v___x_2477_);
if (v_isSharedCheck_2501_ == 0)
{
v___x_2496_ = v___x_2477_;
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2477_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2501_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2499_; 
if (v_isShared_2497_ == 0)
{
v___x_2499_ = v___x_2496_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2500_; 
v_reuseFailAlloc_2500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2500_, 0, v_a_2494_);
v___x_2499_ = v_reuseFailAlloc_2500_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
return v___x_2499_;
}
}
}
}
else
{
uint8_t v___x_2502_; 
v___x_2502_ = lean_expr_eqv(v_snd_2473_, v_a_2475_);
lean_dec(v_snd_2473_);
if (v___x_2502_ == 0)
{
if (v___x_2476_ == 0)
{
lean_object* v___x_2503_; 
lean_dec(v_a_2475_);
lean_dec(v_fst_2472_);
lean_dec(v_a_2412_);
v___x_2503_ = l_Lean_Meta_substCore(v_snd_2403_, v_fst_2402_, v___x_2404_, v_fvarSubst_2405_, v___x_2404_, v___x_2404_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
return v___x_2503_;
}
else
{
lean_object* v___x_2504_; 
v___x_2504_ = l_Lean_Meta_mkEq(v_fst_2472_, v_a_2475_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
lean_inc(v_a_2505_);
lean_dec_ref(v___x_2504_);
v_newType_2426_ = v_a_2505_;
v_symm_2427_ = v___x_2404_;
v___y_2428_ = v___y_2406_;
v___y_2429_ = v___y_2407_;
v___y_2430_ = v___y_2408_;
v___y_2431_ = v___y_2409_;
goto v___jp_2425_;
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_a_2412_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_snd_2403_);
lean_dec(v_fst_2402_);
v_a_2506_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2504_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2504_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
}
else
{
lean_object* v___x_2514_; 
lean_dec(v_a_2475_);
lean_dec(v_fst_2472_);
lean_dec(v_a_2412_);
v___x_2514_ = l_Lean_Meta_substCore(v_snd_2403_, v_fst_2402_, v___x_2404_, v_fvarSubst_2405_, v___x_2404_, v___x_2404_, v___y_2406_, v___y_2407_, v___y_2408_, v___y_2409_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
return v___x_2514_;
}
}
}
else
{
lean_object* v_a_2515_; lean_object* v___x_2517_; uint8_t v_isShared_2518_; uint8_t v_isSharedCheck_2522_; 
lean_dec(v_snd_2473_);
lean_dec(v_fst_2472_);
lean_dec(v_a_2412_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_snd_2403_);
lean_dec(v_fst_2402_);
v_a_2515_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2522_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2522_ == 0)
{
v___x_2517_ = v___x_2474_;
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
else
{
lean_inc(v_a_2515_);
lean_dec(v___x_2474_);
v___x_2517_ = lean_box(0);
v_isShared_2518_ = v_isSharedCheck_2522_;
goto v_resetjp_2516_;
}
v_resetjp_2516_:
{
lean_object* v___x_2520_; 
if (v_isShared_2518_ == 0)
{
v___x_2520_ = v___x_2517_;
goto v_reusejp_2519_;
}
else
{
lean_object* v_reuseFailAlloc_2521_; 
v_reuseFailAlloc_2521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2521_, 0, v_a_2515_);
v___x_2520_ = v_reuseFailAlloc_2521_;
goto v_reusejp_2519_;
}
v_reusejp_2519_:
{
return v___x_2520_;
}
}
}
}
else
{
lean_dec(v_a_2469_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_fst_2402_);
v___y_2414_ = v___y_2406_;
v___y_2415_ = v___y_2407_;
v___y_2416_ = v___y_2408_;
v___y_2417_ = v___y_2409_;
goto v___jp_2413_;
}
}
else
{
lean_object* v_a_2523_; lean_object* v___x_2525_; uint8_t v_isShared_2526_; uint8_t v_isSharedCheck_2530_; 
lean_dec(v_a_2412_);
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_snd_2403_);
lean_dec(v_fst_2402_);
v_a_2523_ = lean_ctor_get(v___x_2468_, 0);
v_isSharedCheck_2530_ = !lean_is_exclusive(v___x_2468_);
if (v_isSharedCheck_2530_ == 0)
{
v___x_2525_ = v___x_2468_;
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
else
{
lean_inc(v_a_2523_);
lean_dec(v___x_2468_);
v___x_2525_ = lean_box(0);
v_isShared_2526_ = v_isSharedCheck_2530_;
goto v_resetjp_2524_;
}
v_resetjp_2524_:
{
lean_object* v___x_2528_; 
if (v_isShared_2526_ == 0)
{
v___x_2528_ = v___x_2525_;
goto v_reusejp_2527_;
}
else
{
lean_object* v_reuseFailAlloc_2529_; 
v_reuseFailAlloc_2529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2529_, 0, v_a_2523_);
v___x_2528_ = v_reuseFailAlloc_2529_;
goto v_reusejp_2527_;
}
v_reusejp_2527_:
{
return v___x_2528_;
}
}
}
v___jp_2413_:
{
lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2418_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__1, &l_Lean_Meta_substCore___lam__3___closed__1_once, _init_l_Lean_Meta_substCore___lam__3___closed__1);
v___x_2419_ = lean_obj_once(&l_Lean_Meta_substEq___lam__0___closed__1, &l_Lean_Meta_substEq___lam__0___closed__1_once, _init_l_Lean_Meta_substEq___lam__0___closed__1);
v___x_2420_ = l_Lean_LocalDecl_type(v_a_2412_);
lean_dec(v_a_2412_);
v___x_2421_ = l_Lean_indentExpr(v___x_2420_);
v___x_2422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2419_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2423_, 0, v___x_2422_);
v___x_2424_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2418_, v_snd_2403_, v___x_2423_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
return v___x_2424_;
}
v___jp_2425_:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = l_Lean_LocalDecl_userName(v_a_2412_);
lean_dec(v_a_2412_);
lean_inc(v_fst_2402_);
v___x_2433_ = l_Lean_mkFVar(v_fst_2402_);
v___x_2434_ = l_Lean_MVarId_assert(v_snd_2403_, v___x_2432_, v_newType_2426_, v___x_2433_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
if (lean_obj_tag(v___x_2434_) == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2436_; 
v_a_2435_ = lean_ctor_get(v___x_2434_, 0);
lean_inc(v_a_2435_);
lean_dec_ref(v___x_2434_);
v___x_2436_ = l_Lean_Meta_intro1Core(v_a_2435_, v___x_2404_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v_fst_2438_; lean_object* v_snd_2439_; lean_object* v___x_2440_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref(v___x_2436_);
v_fst_2438_ = lean_ctor_get(v_a_2437_, 0);
lean_inc(v_fst_2438_);
v_snd_2439_ = lean_ctor_get(v_a_2437_, 1);
lean_inc(v_snd_2439_);
lean_dec(v_a_2437_);
v___x_2440_ = l_Lean_MVarId_clear(v_snd_2439_, v_fst_2402_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
if (lean_obj_tag(v___x_2440_) == 0)
{
lean_object* v_a_2441_; lean_object* v___x_2442_; 
v_a_2441_ = lean_ctor_get(v___x_2440_, 0);
lean_inc(v_a_2441_);
lean_dec_ref(v___x_2440_);
v___x_2442_ = l_Lean_Meta_substCore(v_a_2441_, v_fst_2438_, v_symm_2427_, v_fvarSubst_2405_, v___x_2404_, v___x_2404_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
return v___x_2442_;
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec(v_fst_2438_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v_fvarSubst_2405_);
v_a_2443_ = lean_ctor_get(v___x_2440_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2440_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2440_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2440_);
v___x_2445_ = lean_box(0);
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
v_resetjp_2444_:
{
lean_object* v___x_2448_; 
if (v_isShared_2446_ == 0)
{
v___x_2448_ = v___x_2445_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2449_; 
v_reuseFailAlloc_2449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2449_, 0, v_a_2443_);
v___x_2448_ = v_reuseFailAlloc_2449_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
return v___x_2448_;
}
}
}
}
else
{
lean_object* v_a_2451_; lean_object* v___x_2453_; uint8_t v_isShared_2454_; uint8_t v_isSharedCheck_2458_; 
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_fst_2402_);
v_a_2451_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2458_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2458_ == 0)
{
v___x_2453_ = v___x_2436_;
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
else
{
lean_inc(v_a_2451_);
lean_dec(v___x_2436_);
v___x_2453_ = lean_box(0);
v_isShared_2454_ = v_isSharedCheck_2458_;
goto v_resetjp_2452_;
}
v_resetjp_2452_:
{
lean_object* v___x_2456_; 
if (v_isShared_2454_ == 0)
{
v___x_2456_ = v___x_2453_;
goto v_reusejp_2455_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v_a_2451_);
v___x_2456_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2455_;
}
v_reusejp_2455_:
{
return v___x_2456_;
}
}
}
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_fst_2402_);
v_a_2459_ = lean_ctor_get(v___x_2434_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2434_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2434_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2434_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v___x_2464_; 
if (v_isShared_2462_ == 0)
{
v___x_2464_ = v___x_2461_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2465_; 
v_reuseFailAlloc_2465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2465_, 0, v_a_2459_);
v___x_2464_ = v_reuseFailAlloc_2465_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
return v___x_2464_;
}
}
}
}
}
else
{
lean_object* v_a_2531_; lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
lean_dec(v___y_2409_);
lean_dec_ref(v___y_2408_);
lean_dec(v___y_2407_);
lean_dec_ref(v___y_2406_);
lean_dec(v_fvarSubst_2405_);
lean_dec(v_snd_2403_);
lean_dec(v_fst_2402_);
v_a_2531_ = lean_ctor_get(v___x_2411_, 0);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2411_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2533_ = v___x_2411_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_inc(v_a_2531_);
lean_dec(v___x_2411_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object* v_fst_2539_, lean_object* v_snd_2540_, lean_object* v___x_2541_, lean_object* v_fvarSubst_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
uint8_t v___x_1937__boxed_2548_; lean_object* v_res_2549_; 
v___x_1937__boxed_2548_ = lean_unbox(v___x_2541_);
v_res_2549_ = l_Lean_Meta_substEq___lam__0(v_fst_2539_, v_snd_2540_, v___x_1937__boxed_2548_, v_fvarSubst_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v_res_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object* v_mvarId_2550_, lean_object* v_hFVarId_2551_, lean_object* v_fvarSubst_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_){
_start:
{
uint8_t v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = 1;
v___x_2559_ = l_Lean_Meta_heqToEq(v_mvarId_2550_, v_hFVarId_2551_, v___x_2558_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_);
if (lean_obj_tag(v___x_2559_) == 0)
{
lean_object* v_a_2560_; lean_object* v_fst_2561_; lean_object* v_snd_2562_; lean_object* v___x_2563_; lean_object* v___f_2564_; lean_object* v___x_2565_; 
v_a_2560_ = lean_ctor_get(v___x_2559_, 0);
lean_inc(v_a_2560_);
lean_dec_ref(v___x_2559_);
v_fst_2561_ = lean_ctor_get(v_a_2560_, 0);
lean_inc(v_fst_2561_);
v_snd_2562_ = lean_ctor_get(v_a_2560_, 1);
lean_inc_n(v_snd_2562_, 2);
lean_dec(v_a_2560_);
v___x_2563_ = lean_box(v___x_2558_);
v___f_2564_ = lean_alloc_closure((void*)(l_Lean_Meta_substEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2564_, 0, v_fst_2561_);
lean_closure_set(v___f_2564_, 1, v_snd_2562_);
lean_closure_set(v___f_2564_, 2, v___x_2563_);
lean_closure_set(v___f_2564_, 3, v_fvarSubst_2552_);
v___x_2565_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_snd_2562_, v___f_2564_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_);
return v___x_2565_;
}
else
{
lean_object* v_a_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2573_; 
lean_dec(v_fvarSubst_2552_);
v_a_2566_ = lean_ctor_get(v___x_2559_, 0);
v_isSharedCheck_2573_ = !lean_is_exclusive(v___x_2559_);
if (v_isSharedCheck_2573_ == 0)
{
v___x_2568_ = v___x_2559_;
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_a_2566_);
lean_dec(v___x_2559_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2573_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v___x_2571_; 
if (v_isShared_2569_ == 0)
{
v___x_2571_ = v___x_2568_;
goto v_reusejp_2570_;
}
else
{
lean_object* v_reuseFailAlloc_2572_; 
v_reuseFailAlloc_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2572_, 0, v_a_2566_);
v___x_2571_ = v_reuseFailAlloc_2572_;
goto v_reusejp_2570_;
}
v_reusejp_2570_:
{
return v___x_2571_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object* v_mvarId_2574_, lean_object* v_hFVarId_2575_, lean_object* v_fvarSubst_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_){
_start:
{
lean_object* v_res_2582_; 
v_res_2582_ = l_Lean_Meta_substEq(v_mvarId_2574_, v_hFVarId_2575_, v_fvarSubst_2576_, v_a_2577_, v_a_2578_, v_a_2579_, v_a_2580_);
lean_dec(v_a_2580_);
lean_dec_ref(v_a_2579_);
lean_dec(v_a_2578_);
lean_dec_ref(v_a_2577_);
return v_res_2582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object* v_h_2583_, lean_object* v_mvarId_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v___x_2590_; 
lean_inc(v_h_2583_);
v___x_2590_ = l_Lean_FVarId_getType___redArg(v_h_2583_, v___y_2585_, v___y_2587_, v___y_2588_);
if (lean_obj_tag(v___x_2590_) == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2592_; 
v_a_2591_ = lean_ctor_get(v___x_2590_, 0);
lean_inc_n(v_a_2591_, 2);
lean_dec_ref(v___x_2590_);
v___x_2592_ = l_Lean_Meta_matchEq_x3f(v_a_2591_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
if (lean_obj_tag(v___x_2592_) == 0)
{
lean_object* v_a_2593_; 
v_a_2593_ = lean_ctor_get(v___x_2592_, 0);
lean_inc(v_a_2593_);
lean_dec_ref(v___x_2592_);
if (lean_obj_tag(v_a_2593_) == 0)
{
lean_object* v___x_2594_; 
v___x_2594_ = l_Lean_Meta_matchHEq_x3f(v_a_2591_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v_a_2595_; 
v_a_2595_ = lean_ctor_get(v___x_2594_, 0);
lean_inc(v_a_2595_);
lean_dec_ref(v___x_2594_);
if (lean_obj_tag(v_a_2595_) == 0)
{
lean_object* v___x_2596_; 
v___x_2596_ = l_Lean_Meta_substVar(v_mvarId_2584_, v_h_2583_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
return v___x_2596_;
}
else
{
uint8_t v___x_2597_; lean_object* v___x_2598_; 
lean_dec_ref(v_a_2595_);
v___x_2597_ = 1;
lean_inc(v_h_2583_);
lean_inc(v_mvarId_2584_);
v___x_2598_ = l_Lean_Meta_heqToEq(v_mvarId_2584_, v_h_2583_, v___x_2597_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v_fst_2600_; lean_object* v_snd_2601_; uint8_t v___x_2602_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
lean_dec_ref(v___x_2598_);
v_fst_2600_ = lean_ctor_get(v_a_2599_, 0);
lean_inc(v_fst_2600_);
v_snd_2601_ = lean_ctor_get(v_a_2599_, 1);
lean_inc(v_snd_2601_);
lean_dec(v_a_2599_);
v___x_2602_ = l_Lean_instBEqMVarId_beq(v_mvarId_2584_, v_snd_2601_);
if (v___x_2602_ == 0)
{
lean_object* v___x_2603_; 
lean_dec(v_mvarId_2584_);
lean_dec(v_h_2583_);
v___x_2603_ = l_Lean_Meta_subst(v_snd_2601_, v_fst_2600_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
return v___x_2603_;
}
else
{
lean_object* v___x_2604_; 
lean_dec(v_snd_2601_);
lean_dec(v_fst_2600_);
v___x_2604_ = l_Lean_Meta_substVar(v_mvarId_2584_, v_h_2583_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
return v___x_2604_;
}
}
else
{
lean_object* v_a_2605_; lean_object* v___x_2607_; uint8_t v_isShared_2608_; uint8_t v_isSharedCheck_2612_; 
lean_dec(v_mvarId_2584_);
lean_dec(v_h_2583_);
v_a_2605_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2612_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2612_ == 0)
{
v___x_2607_ = v___x_2598_;
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
else
{
lean_inc(v_a_2605_);
lean_dec(v___x_2598_);
v___x_2607_ = lean_box(0);
v_isShared_2608_ = v_isSharedCheck_2612_;
goto v_resetjp_2606_;
}
v_resetjp_2606_:
{
lean_object* v___x_2610_; 
if (v_isShared_2608_ == 0)
{
v___x_2610_ = v___x_2607_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2611_; 
v_reuseFailAlloc_2611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2611_, 0, v_a_2605_);
v___x_2610_ = v_reuseFailAlloc_2611_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
return v___x_2610_;
}
}
}
}
}
else
{
lean_object* v_a_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2620_; 
lean_dec(v_mvarId_2584_);
lean_dec(v_h_2583_);
v_a_2613_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2620_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2620_ == 0)
{
v___x_2615_ = v___x_2594_;
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_a_2613_);
lean_dec(v___x_2594_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2620_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2618_; 
if (v_isShared_2616_ == 0)
{
v___x_2618_ = v___x_2615_;
goto v_reusejp_2617_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_a_2613_);
v___x_2618_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2617_;
}
v_reusejp_2617_:
{
return v___x_2618_;
}
}
}
}
else
{
lean_object* v___x_2621_; lean_object* v___x_2622_; 
lean_dec_ref(v_a_2593_);
lean_dec(v_a_2591_);
v___x_2621_ = lean_box(0);
v___x_2622_ = l_Lean_Meta_substEq(v_mvarId_2584_, v_h_2583_, v___x_2621_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
if (lean_obj_tag(v___x_2622_) == 0)
{
lean_object* v_a_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2631_; 
v_a_2623_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2625_ = v___x_2622_;
v_isShared_2626_ = v_isSharedCheck_2631_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_a_2623_);
lean_dec(v___x_2622_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2631_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v_snd_2627_; lean_object* v___x_2629_; 
v_snd_2627_ = lean_ctor_get(v_a_2623_, 1);
lean_inc(v_snd_2627_);
lean_dec(v_a_2623_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 0, v_snd_2627_);
v___x_2629_ = v___x_2625_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_snd_2627_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
else
{
lean_object* v_a_2632_; lean_object* v___x_2634_; uint8_t v_isShared_2635_; uint8_t v_isSharedCheck_2639_; 
v_a_2632_ = lean_ctor_get(v___x_2622_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2622_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2634_ = v___x_2622_;
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
else
{
lean_inc(v_a_2632_);
lean_dec(v___x_2622_);
v___x_2634_ = lean_box(0);
v_isShared_2635_ = v_isSharedCheck_2639_;
goto v_resetjp_2633_;
}
v_resetjp_2633_:
{
lean_object* v___x_2637_; 
if (v_isShared_2635_ == 0)
{
v___x_2637_ = v___x_2634_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v_a_2632_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
lean_dec(v_a_2591_);
lean_dec(v_mvarId_2584_);
lean_dec(v_h_2583_);
v_a_2640_ = lean_ctor_get(v___x_2592_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2592_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2592_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2592_);
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
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2655_; 
lean_dec(v_mvarId_2584_);
lean_dec(v_h_2583_);
v_a_2648_ = lean_ctor_get(v___x_2590_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2590_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2650_ = v___x_2590_;
v_isShared_2651_ = v_isSharedCheck_2655_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v___x_2590_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2655_;
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
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_a_2648_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object* v_h_2656_, lean_object* v_mvarId_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_){
_start:
{
lean_object* v_res_2663_; 
v_res_2663_ = l_Lean_Meta_subst___lam__0(v_h_2656_, v_mvarId_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec_ref(v___y_2658_);
return v_res_2663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object* v_mvarId_2664_, lean_object* v_h_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v___f_2671_; lean_object* v___x_2672_; 
lean_inc(v_mvarId_2664_);
v___f_2671_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2671_, 0, v_h_2665_);
lean_closure_set(v___f_2671_, 1, v_mvarId_2664_);
v___x_2672_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2664_, v___f_2671_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
return v___x_2672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object* v_mvarId_2673_, lean_object* v_h_2674_, lean_object* v_a_2675_, lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l_Lean_Meta_subst(v_mvarId_2673_, v_h_2674_, v_a_2675_, v_a_2676_, v_a_2677_, v_a_2678_);
lean_dec(v_a_2678_);
lean_dec_ref(v_a_2677_);
lean_dec(v_a_2676_);
lean_dec_ref(v_a_2675_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object* v_x_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = l_Lean_Meta_saveState___redArg(v___y_2683_, v___y_2685_);
if (lean_obj_tag(v___x_2687_) == 0)
{
lean_object* v_a_2688_; lean_object* v___x_2689_; 
v_a_2688_ = lean_ctor_get(v___x_2687_, 0);
lean_inc(v_a_2688_);
lean_dec_ref(v___x_2687_);
lean_inc(v___y_2685_);
lean_inc_ref(v___y_2684_);
lean_inc(v___y_2683_);
lean_inc_ref(v___y_2682_);
v___x_2689_ = lean_apply_5(v_x_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_, lean_box(0));
if (lean_obj_tag(v___x_2689_) == 0)
{
lean_dec(v_a_2688_);
return v___x_2689_;
}
else
{
lean_object* v_a_2690_; uint8_t v___y_2692_; uint8_t v___x_2710_; 
v_a_2690_ = lean_ctor_get(v___x_2689_, 0);
lean_inc(v_a_2690_);
v___x_2710_ = l_Lean_Exception_isInterrupt(v_a_2690_);
if (v___x_2710_ == 0)
{
uint8_t v___x_2711_; 
lean_inc(v_a_2690_);
v___x_2711_ = l_Lean_Exception_isRuntime(v_a_2690_);
v___y_2692_ = v___x_2711_;
goto v___jp_2691_;
}
else
{
v___y_2692_ = v___x_2710_;
goto v___jp_2691_;
}
v___jp_2691_:
{
if (v___y_2692_ == 0)
{
lean_object* v___x_2693_; 
lean_dec_ref(v___x_2689_);
v___x_2693_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2688_, v___y_2683_, v___y_2685_);
lean_dec(v_a_2688_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v___x_2695_; uint8_t v_isShared_2696_; uint8_t v_isSharedCheck_2700_; 
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2700_ == 0)
{
lean_object* v_unused_2701_; 
v_unused_2701_ = lean_ctor_get(v___x_2693_, 0);
lean_dec(v_unused_2701_);
v___x_2695_ = v___x_2693_;
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
else
{
lean_dec(v___x_2693_);
v___x_2695_ = lean_box(0);
v_isShared_2696_ = v_isSharedCheck_2700_;
goto v_resetjp_2694_;
}
v_resetjp_2694_:
{
lean_object* v___x_2698_; 
if (v_isShared_2696_ == 0)
{
lean_ctor_set_tag(v___x_2695_, 1);
lean_ctor_set(v___x_2695_, 0, v_a_2690_);
v___x_2698_ = v___x_2695_;
goto v_reusejp_2697_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_a_2690_);
v___x_2698_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2697_;
}
v_reusejp_2697_:
{
return v___x_2698_;
}
}
}
else
{
lean_object* v_a_2702_; lean_object* v___x_2704_; uint8_t v_isShared_2705_; uint8_t v_isSharedCheck_2709_; 
lean_dec(v_a_2690_);
v_a_2702_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2709_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2709_ == 0)
{
v___x_2704_ = v___x_2693_;
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
else
{
lean_inc(v_a_2702_);
lean_dec(v___x_2693_);
v___x_2704_ = lean_box(0);
v_isShared_2705_ = v_isSharedCheck_2709_;
goto v_resetjp_2703_;
}
v_resetjp_2703_:
{
lean_object* v___x_2707_; 
if (v_isShared_2705_ == 0)
{
v___x_2707_ = v___x_2704_;
goto v_reusejp_2706_;
}
else
{
lean_object* v_reuseFailAlloc_2708_; 
v_reuseFailAlloc_2708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2708_, 0, v_a_2702_);
v___x_2707_ = v_reuseFailAlloc_2708_;
goto v_reusejp_2706_;
}
v_reusejp_2706_:
{
return v___x_2707_;
}
}
}
}
else
{
lean_dec(v_a_2690_);
lean_dec(v_a_2688_);
return v___x_2689_;
}
}
}
}
else
{
lean_object* v_a_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2719_; 
lean_dec_ref(v_x_2681_);
v_a_2712_ = lean_ctor_get(v___x_2687_, 0);
v_isSharedCheck_2719_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2714_ = v___x_2687_;
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_a_2712_);
lean_dec(v___x_2687_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2719_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
lean_object* v___x_2717_; 
if (v_isShared_2715_ == 0)
{
v___x_2717_ = v___x_2714_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2712_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object* v_x_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v_res_2726_; 
v_res_2726_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2720_, v___y_2721_, v___y_2722_, v___y_2723_, v___y_2724_);
lean_dec(v___y_2724_);
lean_dec_ref(v___y_2723_);
lean_dec(v___y_2722_);
lean_dec_ref(v___y_2721_);
return v_res_2726_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object* v_00_u03b1_2727_, lean_object* v_x_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_){
_start:
{
lean_object* v___x_2734_; 
v___x_2734_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_);
return v___x_2734_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object* v_00_u03b1_2735_, lean_object* v_x_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(v_00_u03b1_2735_, v_x_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_);
lean_dec(v___y_2740_);
lean_dec_ref(v___y_2739_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object* v_msg_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_){
_start:
{
lean_object* v_ref_2749_; lean_object* v___x_2750_; lean_object* v_a_2751_; lean_object* v___x_2753_; uint8_t v_isShared_2754_; uint8_t v_isSharedCheck_2759_; 
v_ref_2749_ = lean_ctor_get(v___y_2746_, 5);
v___x_2750_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__3_spec__3(v_msg_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
v_a_2751_ = lean_ctor_get(v___x_2750_, 0);
v_isSharedCheck_2759_ = !lean_is_exclusive(v___x_2750_);
if (v_isSharedCheck_2759_ == 0)
{
v___x_2753_ = v___x_2750_;
v_isShared_2754_ = v_isSharedCheck_2759_;
goto v_resetjp_2752_;
}
else
{
lean_inc(v_a_2751_);
lean_dec(v___x_2750_);
v___x_2753_ = lean_box(0);
v_isShared_2754_ = v_isSharedCheck_2759_;
goto v_resetjp_2752_;
}
v_resetjp_2752_:
{
lean_object* v___x_2755_; lean_object* v___x_2757_; 
lean_inc(v_ref_2749_);
v___x_2755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2755_, 0, v_ref_2749_);
lean_ctor_set(v___x_2755_, 1, v_a_2751_);
if (v_isShared_2754_ == 0)
{
lean_ctor_set_tag(v___x_2753_, 1);
lean_ctor_set(v___x_2753_, 0, v___x_2755_);
v___x_2757_ = v___x_2753_;
goto v_reusejp_2756_;
}
else
{
lean_object* v_reuseFailAlloc_2758_; 
v_reuseFailAlloc_2758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2758_, 0, v___x_2755_);
v___x_2757_ = v_reuseFailAlloc_2758_;
goto v_reusejp_2756_;
}
v_reusejp_2756_:
{
return v___x_2757_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object* v_msg_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_){
_start:
{
lean_object* v_res_2766_; 
v_res_2766_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_2760_, v___y_2761_, v___y_2762_, v___y_2763_, v___y_2764_);
lean_dec(v___y_2764_);
lean_dec_ref(v___y_2763_);
lean_dec(v___y_2762_);
lean_dec_ref(v___y_2761_);
return v_res_2766_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2767_; 
v___x_2767_ = lean_mk_string_unchecked("not an arrow type", 17, 17);
return v___x_2767_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__0, &l_Lean_Meta_introSubstEq___lam__0___closed__0_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__0);
v___x_2769_ = l_Lean_stringToMessageData(v___x_2768_);
return v___x_2769_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_mk_string_unchecked("variable ", 9, 9);
return v___x_2770_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2771_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__2, &l_Lean_Meta_introSubstEq___lam__0___closed__2_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__2);
v___x_2772_ = l_Lean_stringToMessageData(v___x_2771_);
return v___x_2772_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_mk_string_unchecked(" has forward dependencies", 25, 25);
return v___x_2773_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2774_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__4, &l_Lean_Meta_introSubstEq___lam__0___closed__4_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__4);
v___x_2775_ = l_Lean_stringToMessageData(v___x_2774_);
return v___x_2775_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2776_; 
v___x_2776_ = lean_mk_string_unchecked("equality rhs not a free variable", 32, 32);
return v___x_2776_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2777_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__6, &l_Lean_Meta_introSubstEq___lam__0___closed__6_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__6);
v___x_2778_ = l_Lean_stringToMessageData(v___x_2777_);
return v___x_2778_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__8(void){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = lean_mk_string_unchecked("not an equality", 15, 15);
return v___x_2779_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2780_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__8, &l_Lean_Meta_introSubstEq___lam__0___closed__8_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__8);
v___x_2781_ = l_Lean_stringToMessageData(v___x_2780_);
return v___x_2781_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__10(void){
_start:
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_2782_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__11(void){
_start:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2783_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__10, &l_Lean_Meta_introSubstEq___lam__0___closed__10_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__10);
v___x_2784_ = l_Lean_Name_mkStr1(v___x_2783_);
return v___x_2784_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__12(void){
_start:
{
lean_object* v___x_2785_; 
v___x_2785_ = lean_mk_string_unchecked("homo_ndrec", 10, 10);
return v___x_2785_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__13(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2786_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__12, &l_Lean_Meta_introSubstEq___lam__0___closed__12_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__12);
v___x_2787_ = lean_obj_once(&l_Lean_Meta_heqToEq___lam__0___closed__0, &l_Lean_Meta_heqToEq___lam__0___closed__0_once, _init_l_Lean_Meta_heqToEq___lam__0___closed__0);
v___x_2788_ = l_Lean_Name_mkStr2(v___x_2787_, v___x_2786_);
return v___x_2788_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__14(void){
_start:
{
lean_object* v___x_2789_; 
v___x_2789_ = lean_mk_string_unchecked("homo_ndrec_symm", 15, 15);
return v___x_2789_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__15(void){
_start:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2790_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__14, &l_Lean_Meta_introSubstEq___lam__0___closed__14_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__14);
v___x_2791_ = lean_obj_once(&l_Lean_Meta_heqToEq___lam__0___closed__0, &l_Lean_Meta_heqToEq___lam__0___closed__0_once, _init_l_Lean_Meta_heqToEq___lam__0___closed__0);
v___x_2792_ = l_Lean_Name_mkStr2(v___x_2791_, v___x_2790_);
return v___x_2792_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__16(void){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = lean_mk_string_unchecked("hetereogenenous equality isn't homogeneous", 42, 42);
return v___x_2793_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__17(void){
_start:
{
lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2794_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__16, &l_Lean_Meta_introSubstEq___lam__0___closed__16_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__16);
v___x_2795_ = l_Lean_stringToMessageData(v___x_2794_);
return v___x_2795_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__18(void){
_start:
{
lean_object* v___x_2796_; 
v___x_2796_ = lean_mk_string_unchecked("ndrec", 5, 5);
return v___x_2796_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__19(void){
_start:
{
lean_object* v___x_2797_; lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2797_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__18, &l_Lean_Meta_introSubstEq___lam__0___closed__18_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__18);
v___x_2798_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__10, &l_Lean_Meta_introSubstEq___lam__0___closed__10_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__10);
v___x_2799_ = l_Lean_Name_mkStr2(v___x_2798_, v___x_2797_);
return v___x_2799_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__20(void){
_start:
{
lean_object* v___x_2800_; 
v___x_2800_ = lean_mk_string_unchecked("ndrec_symm", 10, 10);
return v___x_2800_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__21(void){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2801_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__20, &l_Lean_Meta_introSubstEq___lam__0___closed__20_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__20);
v___x_2802_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__10, &l_Lean_Meta_introSubstEq___lam__0___closed__10_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__10);
v___x_2803_ = l_Lean_Name_mkStr2(v___x_2802_, v___x_2801_);
return v___x_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object* v_mvarId_2804_, uint8_t v_substLHS_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
lean_object* v___x_2811_; 
lean_inc(v_mvarId_2804_);
v___x_2811_ = l_Lean_MVarId_getType_x27(v_mvarId_2804_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc(v_a_2812_);
lean_dec_ref(v___x_2811_);
if (lean_obj_tag(v_a_2812_) == 7)
{
lean_object* v_binderType_2816_; lean_object* v_body_2817_; uint8_t v___x_2818_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; lean_object* v___y_2830_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2908_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v_fst_2953_; lean_object* v_fst_2954_; lean_object* v_fst_2955_; lean_object* v_snd_2956_; lean_object* v___y_2957_; lean_object* v___y_2958_; lean_object* v___y_2959_; lean_object* v___y_2960_; 
v_binderType_2816_ = lean_ctor_get(v_a_2812_, 1);
lean_inc_ref(v_binderType_2816_);
v_body_2817_ = lean_ctor_get(v_a_2812_, 2);
lean_inc_ref(v_body_2817_);
lean_dec_ref(v_a_2812_);
v___x_2818_ = l_Lean_Expr_hasLooseBVars(v_body_2817_);
if (v___x_2818_ == 0)
{
lean_object* v___x_2972_; 
v___x_2972_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_2816_, v___y_2807_, v___y_2809_);
if (lean_obj_tag(v___x_2972_) == 0)
{
lean_object* v_a_2973_; lean_object* v___y_2975_; lean_object* v___y_2976_; lean_object* v___y_2977_; lean_object* v___y_2978_; lean_object* v___x_2989_; uint8_t v___x_2990_; 
v_a_2973_ = lean_ctor_get(v___x_2972_, 0);
lean_inc(v_a_2973_);
lean_dec_ref(v___x_2972_);
v___x_2989_ = l_Lean_Expr_cleanupAnnotations(v_a_2973_);
v___x_2990_ = l_Lean_Expr_isApp(v___x_2989_);
if (v___x_2990_ == 0)
{
lean_dec_ref(v___x_2989_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v___y_2975_ = v___y_2806_;
v___y_2976_ = v___y_2807_;
v___y_2977_ = v___y_2808_;
v___y_2978_ = v___y_2809_;
goto v___jp_2974_;
}
else
{
lean_object* v_arg_2991_; lean_object* v___x_2992_; uint8_t v___x_2993_; 
v_arg_2991_ = lean_ctor_get(v___x_2989_, 1);
lean_inc_ref(v_arg_2991_);
v___x_2992_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2989_);
v___x_2993_ = l_Lean_Expr_isApp(v___x_2992_);
if (v___x_2993_ == 0)
{
lean_dec_ref(v___x_2992_);
lean_dec_ref(v_arg_2991_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v___y_2975_ = v___y_2806_;
v___y_2976_ = v___y_2807_;
v___y_2977_ = v___y_2808_;
v___y_2978_ = v___y_2809_;
goto v___jp_2974_;
}
else
{
lean_object* v_arg_2994_; lean_object* v___x_2995_; uint8_t v___x_2996_; 
v_arg_2994_ = lean_ctor_get(v___x_2992_, 1);
lean_inc_ref(v_arg_2994_);
v___x_2995_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2992_);
v___x_2996_ = l_Lean_Expr_isApp(v___x_2995_);
if (v___x_2996_ == 0)
{
lean_dec_ref(v___x_2995_);
lean_dec_ref(v_arg_2994_);
lean_dec_ref(v_arg_2991_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v___y_2975_ = v___y_2806_;
v___y_2976_ = v___y_2807_;
v___y_2977_ = v___y_2808_;
v___y_2978_ = v___y_2809_;
goto v___jp_2974_;
}
else
{
lean_object* v_arg_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; uint8_t v___x_3000_; 
v_arg_2997_ = lean_ctor_get(v___x_2995_, 1);
lean_inc_ref(v_arg_2997_);
v___x_2998_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2995_);
v___x_2999_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__11, &l_Lean_Meta_introSubstEq___lam__0___closed__11_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__11);
v___x_3000_ = l_Lean_Expr_isConstOf(v___x_2998_, v___x_2999_);
if (v___x_3000_ == 0)
{
uint8_t v___x_3001_; 
v___x_3001_ = l_Lean_Expr_isApp(v___x_2998_);
if (v___x_3001_ == 0)
{
lean_dec_ref(v___x_2998_);
lean_dec_ref(v_arg_2997_);
lean_dec_ref(v_arg_2994_);
lean_dec_ref(v_arg_2991_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v___y_2975_ = v___y_2806_;
v___y_2976_ = v___y_2807_;
v___y_2977_ = v___y_2808_;
v___y_2978_ = v___y_2809_;
goto v___jp_2974_;
}
else
{
lean_object* v_arg_3002_; lean_object* v___y_3004_; lean_object* v___y_3005_; lean_object* v___y_3006_; lean_object* v___y_3007_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v_arg_3002_ = lean_ctor_get(v___x_2998_, 1);
lean_inc_ref(v_arg_3002_);
v___x_3010_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2998_);
v___x_3011_ = lean_obj_once(&l_Lean_Meta_heqToEq___lam__0___closed__1, &l_Lean_Meta_heqToEq___lam__0___closed__1_once, _init_l_Lean_Meta_heqToEq___lam__0___closed__1);
v___x_3012_ = l_Lean_Expr_isConstOf(v___x_3010_, v___x_3011_);
lean_dec_ref(v___x_3010_);
if (v___x_3012_ == 0)
{
lean_dec_ref(v_arg_3002_);
lean_dec_ref(v_arg_2997_);
lean_dec_ref(v_arg_2994_);
lean_dec_ref(v_arg_2991_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v___y_2975_ = v___y_2806_;
v___y_2976_ = v___y_2807_;
v___y_2977_ = v___y_2808_;
v___y_2978_ = v___y_2809_;
goto v___jp_2974_;
}
else
{
lean_object* v___x_3013_; 
lean_inc_ref(v_arg_3002_);
v___x_3013_ = l_Lean_Meta_isExprDefEq(v_arg_3002_, v_arg_2994_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
if (lean_obj_tag(v___x_3013_) == 0)
{
lean_object* v_a_3014_; uint8_t v___x_3015_; 
v_a_3014_ = lean_ctor_get(v___x_3013_, 0);
lean_inc(v_a_3014_);
lean_dec_ref(v___x_3013_);
v___x_3015_ = lean_unbox(v_a_3014_);
lean_dec(v_a_3014_);
if (v___x_3015_ == 0)
{
lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3025_; 
lean_dec_ref(v_arg_3002_);
lean_dec_ref(v_arg_2997_);
lean_dec_ref(v_arg_2991_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v___x_3016_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__17, &l_Lean_Meta_introSubstEq___lam__0___closed__17_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__17);
v___x_3017_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_3016_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
v_a_3018_ = lean_ctor_get(v___x_3017_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v___x_3017_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3020_ = v___x_3017_;
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v___x_3017_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3023_; 
if (v_isShared_3021_ == 0)
{
v___x_3023_ = v___x_3020_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_a_3018_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
}
else
{
v___y_3004_ = v___y_2806_;
v___y_3005_ = v___y_2807_;
v___y_3006_ = v___y_2808_;
v___y_3007_ = v___y_2809_;
goto v___jp_3003_;
}
}
else
{
lean_object* v_a_3026_; lean_object* v___x_3028_; uint8_t v_isShared_3029_; uint8_t v_isSharedCheck_3033_; 
lean_dec_ref(v_arg_3002_);
lean_dec_ref(v_arg_2997_);
lean_dec_ref(v_arg_2991_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v_a_3026_ = lean_ctor_get(v___x_3013_, 0);
v_isSharedCheck_3033_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3033_ == 0)
{
v___x_3028_ = v___x_3013_;
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
else
{
lean_inc(v_a_3026_);
lean_dec(v___x_3013_);
v___x_3028_ = lean_box(0);
v_isShared_3029_ = v_isSharedCheck_3033_;
goto v_resetjp_3027_;
}
v_resetjp_3027_:
{
lean_object* v___x_3031_; 
if (v_isShared_3029_ == 0)
{
v___x_3031_ = v___x_3028_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_a_3026_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
v___jp_3003_:
{
if (v_substLHS_2805_ == 0)
{
lean_object* v___x_3008_; 
v___x_3008_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__13, &l_Lean_Meta_introSubstEq___lam__0___closed__13_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__13);
v_fst_2953_ = v_arg_3002_;
v_fst_2954_ = v_arg_2997_;
v_fst_2955_ = v_arg_2991_;
v_snd_2956_ = v___x_3008_;
v___y_2957_ = v___y_3004_;
v___y_2958_ = v___y_3005_;
v___y_2959_ = v___y_3006_;
v___y_2960_ = v___y_3007_;
goto v___jp_2952_;
}
else
{
lean_object* v___x_3009_; 
v___x_3009_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__15, &l_Lean_Meta_introSubstEq___lam__0___closed__15_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__15);
v_fst_2953_ = v_arg_3002_;
v_fst_2954_ = v_arg_2991_;
v_fst_2955_ = v_arg_2997_;
v_snd_2956_ = v___x_3009_;
v___y_2957_ = v___y_3004_;
v___y_2958_ = v___y_3005_;
v___y_2959_ = v___y_3006_;
v___y_2960_ = v___y_3007_;
goto v___jp_2952_;
}
}
}
}
else
{
lean_dec_ref(v___x_2998_);
if (v_substLHS_2805_ == 0)
{
lean_object* v___x_3034_; 
v___x_3034_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__19, &l_Lean_Meta_introSubstEq___lam__0___closed__19_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__19);
v_fst_2953_ = v_arg_2997_;
v_fst_2954_ = v_arg_2994_;
v_fst_2955_ = v_arg_2991_;
v_snd_2956_ = v___x_3034_;
v___y_2957_ = v___y_2806_;
v___y_2958_ = v___y_2807_;
v___y_2959_ = v___y_2808_;
v___y_2960_ = v___y_2809_;
goto v___jp_2952_;
}
else
{
lean_object* v___x_3035_; 
v___x_3035_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__21, &l_Lean_Meta_introSubstEq___lam__0___closed__21_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__21);
v_fst_2953_ = v_arg_2997_;
v_fst_2954_ = v_arg_2991_;
v_fst_2955_ = v_arg_2994_;
v_snd_2956_ = v___x_3035_;
v___y_2957_ = v___y_2806_;
v___y_2958_ = v___y_2807_;
v___y_2959_ = v___y_2808_;
v___y_2960_ = v___y_2809_;
goto v___jp_2952_;
}
}
}
}
}
v___jp_2974_:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v_a_2981_; lean_object* v___x_2983_; uint8_t v_isShared_2984_; uint8_t v_isSharedCheck_2988_; 
v___x_2979_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__9, &l_Lean_Meta_introSubstEq___lam__0___closed__9_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__9);
v___x_2980_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2979_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_);
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2988_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2988_ == 0)
{
v___x_2983_ = v___x_2980_;
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
else
{
lean_inc(v_a_2981_);
lean_dec(v___x_2980_);
v___x_2983_ = lean_box(0);
v_isShared_2984_ = v_isSharedCheck_2988_;
goto v_resetjp_2982_;
}
v_resetjp_2982_:
{
lean_object* v___x_2986_; 
if (v_isShared_2984_ == 0)
{
v___x_2986_ = v___x_2983_;
goto v_reusejp_2985_;
}
else
{
lean_object* v_reuseFailAlloc_2987_; 
v_reuseFailAlloc_2987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2987_, 0, v_a_2981_);
v___x_2986_ = v_reuseFailAlloc_2987_;
goto v_reusejp_2985_;
}
v_reusejp_2985_:
{
return v___x_2986_;
}
}
}
}
else
{
lean_object* v_a_3036_; lean_object* v___x_3038_; uint8_t v_isShared_3039_; uint8_t v_isSharedCheck_3043_; 
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v_a_3036_ = lean_ctor_get(v___x_2972_, 0);
v_isSharedCheck_3043_ = !lean_is_exclusive(v___x_2972_);
if (v_isSharedCheck_3043_ == 0)
{
v___x_3038_ = v___x_2972_;
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
else
{
lean_inc(v_a_3036_);
lean_dec(v___x_2972_);
v___x_3038_ = lean_box(0);
v_isShared_3039_ = v_isSharedCheck_3043_;
goto v_resetjp_3037_;
}
v_resetjp_3037_:
{
lean_object* v___x_3041_; 
if (v_isShared_3039_ == 0)
{
v___x_3041_ = v___x_3038_;
goto v_reusejp_3040_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v_a_3036_);
v___x_3041_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3040_;
}
v_reusejp_3040_:
{
return v___x_3041_;
}
}
}
}
else
{
lean_dec_ref(v_body_2817_);
lean_dec_ref(v_binderType_2816_);
lean_dec(v_mvarId_2804_);
goto v___jp_2813_;
}
v___jp_2819_:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; uint8_t v___x_2833_; uint8_t v___x_2834_; lean_object* v___x_2835_; 
v___x_2831_ = lean_mk_empty_array_with_capacity(v___y_2821_);
lean_inc_ref(v___x_2831_);
v___x_2832_ = lean_array_push(v___x_2831_, v___y_2823_);
v___x_2833_ = 1;
v___x_2834_ = 1;
v___x_2835_ = l_Lean_Meta_mkLambdaFVars(v___x_2832_, v_body_2817_, v___x_2818_, v___x_2833_, v___x_2818_, v___x_2833_, v___x_2834_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec_ref(v___x_2832_);
if (lean_obj_tag(v___x_2835_) == 0)
{
lean_object* v_a_2836_; lean_object* v___x_2837_; 
v_a_2836_ = lean_ctor_get(v___x_2835_, 0);
lean_inc(v_a_2836_);
lean_dec_ref(v___x_2835_);
lean_inc(v___y_2822_);
v___x_2837_ = l_Lean_MVarId_getTag(v___y_2822_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2837_) == 0)
{
lean_object* v_a_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v_a_2838_ = lean_ctor_get(v___x_2837_, 0);
lean_inc(v_a_2838_);
lean_dec_ref(v___x_2837_);
lean_inc_ref(v___y_2826_);
v___x_2839_ = lean_array_push(v___x_2831_, v___y_2826_);
lean_inc(v_a_2836_);
v___x_2840_ = l_Lean_Expr_beta(v_a_2836_, v___x_2839_);
lean_inc_ref(v___x_2840_);
v___x_2841_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2840_, v_a_2838_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2841_) == 0)
{
lean_object* v_a_2842_; lean_object* v___x_2843_; 
v_a_2842_ = lean_ctor_get(v___x_2841_, 0);
lean_inc(v_a_2842_);
lean_dec_ref(v___x_2841_);
v___x_2843_ = l_Lean_Meta_getLevel(v___x_2840_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2843_) == 0)
{
lean_object* v_a_2844_; lean_object* v___x_2845_; 
v_a_2844_ = lean_ctor_get(v___x_2843_, 0);
lean_inc(v_a_2844_);
lean_dec_ref(v___x_2843_);
lean_inc_ref(v___y_2824_);
v___x_2845_ = l_Lean_Meta_getLevel(v___y_2824_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
if (lean_obj_tag(v___x_2845_) == 0)
{
lean_object* v_a_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; uint8_t v_isShared_2855_; uint8_t v_isSharedCheck_2863_; 
v_a_2846_ = lean_ctor_get(v___x_2845_, 0);
lean_inc(v_a_2846_);
lean_dec_ref(v___x_2845_);
v___x_2847_ = lean_box(0);
v___x_2848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2848_, 0, v_a_2846_);
lean_ctor_set(v___x_2848_, 1, v___x_2847_);
v___x_2849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2849_, 0, v_a_2844_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
lean_inc(v___y_2825_);
v___x_2850_ = l_Lean_mkConst(v___y_2825_, v___x_2849_);
lean_inc(v_a_2842_);
lean_inc_ref(v___y_2826_);
v___x_2851_ = l_Lean_mkApp4(v___x_2850_, v___y_2824_, v___y_2826_, v_a_2836_, v_a_2842_);
v___x_2852_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5___redArg(v___y_2822_, v___x_2851_, v___y_2828_, v___y_2830_);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2863_ == 0)
{
lean_object* v_unused_2864_; 
v_unused_2864_ = lean_ctor_get(v___x_2852_, 0);
lean_dec(v_unused_2864_);
v___x_2854_ = v___x_2852_;
v_isShared_2855_ = v_isSharedCheck_2863_;
goto v_resetjp_2853_;
}
else
{
lean_dec(v___x_2852_);
v___x_2854_ = lean_box(0);
v_isShared_2855_ = v_isSharedCheck_2863_;
goto v_resetjp_2853_;
}
v_resetjp_2853_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2861_; 
v___x_2856_ = l_Lean_Meta_FVarSubst_empty;
v___x_2857_ = l_Lean_Meta_FVarSubst_insert(v___x_2856_, v___y_2820_, v___y_2826_);
v___x_2858_ = l_Lean_Expr_mvarId_x21(v_a_2842_);
lean_dec(v_a_2842_);
v___x_2859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2857_);
lean_ctor_set(v___x_2859_, 1, v___x_2858_);
if (v_isShared_2855_ == 0)
{
lean_ctor_set(v___x_2854_, 0, v___x_2859_);
v___x_2861_ = v___x_2854_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v___x_2859_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
else
{
lean_object* v_a_2865_; lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2872_; 
lean_dec(v_a_2844_);
lean_dec(v_a_2842_);
lean_dec(v_a_2836_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2822_);
lean_dec(v___y_2820_);
v_a_2865_ = lean_ctor_get(v___x_2845_, 0);
v_isSharedCheck_2872_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2872_ == 0)
{
v___x_2867_ = v___x_2845_;
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
else
{
lean_inc(v_a_2865_);
lean_dec(v___x_2845_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2872_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2870_; 
if (v_isShared_2868_ == 0)
{
v___x_2870_ = v___x_2867_;
goto v_reusejp_2869_;
}
else
{
lean_object* v_reuseFailAlloc_2871_; 
v_reuseFailAlloc_2871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2871_, 0, v_a_2865_);
v___x_2870_ = v_reuseFailAlloc_2871_;
goto v_reusejp_2869_;
}
v_reusejp_2869_:
{
return v___x_2870_;
}
}
}
}
else
{
lean_object* v_a_2873_; lean_object* v___x_2875_; uint8_t v_isShared_2876_; uint8_t v_isSharedCheck_2880_; 
lean_dec(v_a_2842_);
lean_dec(v_a_2836_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2822_);
lean_dec(v___y_2820_);
v_a_2873_ = lean_ctor_get(v___x_2843_, 0);
v_isSharedCheck_2880_ = !lean_is_exclusive(v___x_2843_);
if (v_isSharedCheck_2880_ == 0)
{
v___x_2875_ = v___x_2843_;
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
else
{
lean_inc(v_a_2873_);
lean_dec(v___x_2843_);
v___x_2875_ = lean_box(0);
v_isShared_2876_ = v_isSharedCheck_2880_;
goto v_resetjp_2874_;
}
v_resetjp_2874_:
{
lean_object* v___x_2878_; 
if (v_isShared_2876_ == 0)
{
v___x_2878_ = v___x_2875_;
goto v_reusejp_2877_;
}
else
{
lean_object* v_reuseFailAlloc_2879_; 
v_reuseFailAlloc_2879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2879_, 0, v_a_2873_);
v___x_2878_ = v_reuseFailAlloc_2879_;
goto v_reusejp_2877_;
}
v_reusejp_2877_:
{
return v___x_2878_;
}
}
}
}
else
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2888_; 
lean_dec_ref(v___x_2840_);
lean_dec(v_a_2836_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2822_);
lean_dec(v___y_2820_);
v_a_2881_ = lean_ctor_get(v___x_2841_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2841_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2883_ = v___x_2841_;
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2841_);
v___x_2883_ = lean_box(0);
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
v_resetjp_2882_:
{
lean_object* v___x_2886_; 
if (v_isShared_2884_ == 0)
{
v___x_2886_ = v___x_2883_;
goto v_reusejp_2885_;
}
else
{
lean_object* v_reuseFailAlloc_2887_; 
v_reuseFailAlloc_2887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2887_, 0, v_a_2881_);
v___x_2886_ = v_reuseFailAlloc_2887_;
goto v_reusejp_2885_;
}
v_reusejp_2885_:
{
return v___x_2886_;
}
}
}
}
else
{
lean_object* v_a_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2896_; 
lean_dec(v_a_2836_);
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2822_);
lean_dec(v___y_2820_);
v_a_2889_ = lean_ctor_get(v___x_2837_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2837_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2891_ = v___x_2837_;
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_dec(v___x_2837_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___x_2894_; 
if (v_isShared_2892_ == 0)
{
v___x_2894_ = v___x_2891_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2895_; 
v_reuseFailAlloc_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2895_, 0, v_a_2889_);
v___x_2894_ = v_reuseFailAlloc_2895_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
return v___x_2894_;
}
}
}
}
else
{
lean_object* v_a_2897_; lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2904_; 
lean_dec_ref(v___x_2831_);
lean_dec_ref(v___y_2826_);
lean_dec_ref(v___y_2824_);
lean_dec(v___y_2822_);
lean_dec(v___y_2820_);
v_a_2897_ = lean_ctor_get(v___x_2835_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2835_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2835_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2835_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v___x_2902_; 
if (v_isShared_2900_ == 0)
{
v___x_2902_ = v___x_2899_;
goto v_reusejp_2901_;
}
else
{
lean_object* v_reuseFailAlloc_2903_; 
v_reuseFailAlloc_2903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2903_, 0, v_a_2897_);
v___x_2902_ = v_reuseFailAlloc_2903_;
goto v_reusejp_2901_;
}
v_reusejp_2901_:
{
return v___x_2902_;
}
}
}
}
v___jp_2905_:
{
lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2914_ = l_Lean_Expr_fvarId_x21(v___y_2906_);
v___x_2915_ = lean_unsigned_to_nat(1u);
v___x_2916_ = lean_mk_empty_array_with_capacity(v___x_2915_);
lean_inc(v___x_2914_);
v___x_2917_ = lean_array_push(v___x_2916_, v___x_2914_);
v___x_2918_ = l_Lean_MVarId_revert(v_mvarId_2804_, v___x_2917_, v___x_2818_, v___x_2818_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; lean_object* v_fst_2920_; lean_object* v_snd_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2943_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_a_2919_);
lean_dec_ref(v___x_2918_);
v_fst_2920_ = lean_ctor_get(v_a_2919_, 0);
v_snd_2921_ = lean_ctor_get(v_a_2919_, 1);
v_isSharedCheck_2943_ = !lean_is_exclusive(v_a_2919_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2923_ = v_a_2919_;
v_isShared_2924_ = v_isSharedCheck_2943_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_snd_2921_);
lean_inc(v_fst_2920_);
lean_dec(v_a_2919_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2943_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2925_; uint8_t v___x_2926_; 
v___x_2925_ = lean_array_get_size(v_fst_2920_);
lean_dec(v_fst_2920_);
v___x_2926_ = lean_nat_dec_eq(v___x_2925_, v___x_2915_);
if (v___x_2926_ == 0)
{
lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2930_; 
lean_dec(v_snd_2921_);
lean_dec(v___x_2914_);
lean_dec_ref(v___y_2909_);
lean_dec_ref(v___y_2907_);
lean_dec_ref(v_body_2817_);
v___x_2927_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__3, &l_Lean_Meta_introSubstEq___lam__0___closed__3_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__3);
v___x_2928_ = l_Lean_MessageData_ofExpr(v___y_2906_);
if (v_isShared_2924_ == 0)
{
lean_ctor_set_tag(v___x_2923_, 7);
lean_ctor_set(v___x_2923_, 1, v___x_2928_);
lean_ctor_set(v___x_2923_, 0, v___x_2927_);
v___x_2930_ = v___x_2923_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_2942_, 1, v___x_2928_);
v___x_2930_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
v___x_2931_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__5, &l_Lean_Meta_introSubstEq___lam__0___closed__5_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__5);
v___x_2932_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___x_2930_);
lean_ctor_set(v___x_2932_, 1, v___x_2931_);
v___x_2933_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2932_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___x_2933_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___x_2933_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
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
lean_del_object(v___x_2923_);
v___y_2820_ = v___x_2914_;
v___y_2821_ = v___x_2915_;
v___y_2822_ = v_snd_2921_;
v___y_2823_ = v___y_2906_;
v___y_2824_ = v___y_2907_;
v___y_2825_ = v___y_2908_;
v___y_2826_ = v___y_2909_;
v___y_2827_ = v___y_2910_;
v___y_2828_ = v___y_2911_;
v___y_2829_ = v___y_2912_;
v___y_2830_ = v___y_2913_;
goto v___jp_2819_;
}
}
}
else
{
lean_object* v_a_2944_; lean_object* v___x_2946_; uint8_t v_isShared_2947_; uint8_t v_isSharedCheck_2951_; 
lean_dec(v___x_2914_);
lean_dec_ref(v___y_2909_);
lean_dec_ref(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec_ref(v_body_2817_);
v_a_2944_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_2951_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2951_ == 0)
{
v___x_2946_ = v___x_2918_;
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
else
{
lean_inc(v_a_2944_);
lean_dec(v___x_2918_);
v___x_2946_ = lean_box(0);
v_isShared_2947_ = v_isSharedCheck_2951_;
goto v_resetjp_2945_;
}
v_resetjp_2945_:
{
lean_object* v___x_2949_; 
if (v_isShared_2947_ == 0)
{
v___x_2949_ = v___x_2946_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_a_2944_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
return v___x_2949_;
}
}
}
}
v___jp_2952_:
{
uint8_t v___x_2961_; 
v___x_2961_ = l_Lean_Expr_isFVar(v_fst_2955_);
if (v___x_2961_ == 0)
{
lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v_a_2964_; lean_object* v___x_2966_; uint8_t v_isShared_2967_; uint8_t v_isSharedCheck_2971_; 
lean_dec_ref(v_fst_2955_);
lean_dec_ref(v_fst_2954_);
lean_dec_ref(v_fst_2953_);
lean_dec_ref(v_body_2817_);
lean_dec(v_mvarId_2804_);
v___x_2962_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__7, &l_Lean_Meta_introSubstEq___lam__0___closed__7_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__7);
v___x_2963_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2962_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_);
v_a_2964_ = lean_ctor_get(v___x_2963_, 0);
v_isSharedCheck_2971_ = !lean_is_exclusive(v___x_2963_);
if (v_isSharedCheck_2971_ == 0)
{
v___x_2966_ = v___x_2963_;
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
else
{
lean_inc(v_a_2964_);
lean_dec(v___x_2963_);
v___x_2966_ = lean_box(0);
v_isShared_2967_ = v_isSharedCheck_2971_;
goto v_resetjp_2965_;
}
v_resetjp_2965_:
{
lean_object* v___x_2969_; 
if (v_isShared_2967_ == 0)
{
v___x_2969_ = v___x_2966_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2970_; 
v_reuseFailAlloc_2970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2970_, 0, v_a_2964_);
v___x_2969_ = v_reuseFailAlloc_2970_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
return v___x_2969_;
}
}
}
else
{
v___y_2906_ = v_fst_2955_;
v___y_2907_ = v_fst_2953_;
v___y_2908_ = v_snd_2956_;
v___y_2909_ = v_fst_2954_;
v___y_2910_ = v___y_2957_;
v___y_2911_ = v___y_2958_;
v___y_2912_ = v___y_2959_;
v___y_2913_ = v___y_2960_;
goto v___jp_2905_;
}
}
}
else
{
lean_dec(v_a_2812_);
lean_dec(v_mvarId_2804_);
goto v___jp_2813_;
}
v___jp_2813_:
{
lean_object* v___x_2814_; lean_object* v___x_2815_; 
v___x_2814_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__1, &l_Lean_Meta_introSubstEq___lam__0___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__1);
v___x_2815_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2814_, v___y_2806_, v___y_2807_, v___y_2808_, v___y_2809_);
return v___x_2815_;
}
}
else
{
lean_object* v_a_3044_; lean_object* v___x_3046_; uint8_t v_isShared_3047_; uint8_t v_isSharedCheck_3051_; 
lean_dec(v_mvarId_2804_);
v_a_3044_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_3051_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_3051_ == 0)
{
v___x_3046_ = v___x_2811_;
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
else
{
lean_inc(v_a_3044_);
lean_dec(v___x_2811_);
v___x_3046_ = lean_box(0);
v_isShared_3047_ = v_isSharedCheck_3051_;
goto v_resetjp_3045_;
}
v_resetjp_3045_:
{
lean_object* v___x_3049_; 
if (v_isShared_3047_ == 0)
{
v___x_3049_ = v___x_3046_;
goto v_reusejp_3048_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_a_3044_);
v___x_3049_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3048_;
}
v_reusejp_3048_:
{
return v___x_3049_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object* v_mvarId_3052_, lean_object* v_substLHS_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
uint8_t v_substLHS_boxed_3059_; lean_object* v_res_3060_; 
v_substLHS_boxed_3059_ = lean_unbox(v_substLHS_3053_);
v_res_3060_ = l_Lean_Meta_introSubstEq___lam__0(v_mvarId_3052_, v_substLHS_boxed_3059_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_);
lean_dec(v___y_3057_);
lean_dec_ref(v___y_3056_);
lean_dec(v___y_3055_);
lean_dec_ref(v___y_3054_);
return v_res_3060_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object* v_keys_3061_, lean_object* v_i_3062_, lean_object* v_k_3063_){
_start:
{
lean_object* v___x_3064_; uint8_t v___x_3065_; 
v___x_3064_ = lean_array_get_size(v_keys_3061_);
v___x_3065_ = lean_nat_dec_lt(v_i_3062_, v___x_3064_);
if (v___x_3065_ == 0)
{
lean_dec(v_i_3062_);
return v___x_3065_;
}
else
{
lean_object* v_k_x27_3066_; uint8_t v___x_3067_; 
v_k_x27_3066_ = lean_array_fget_borrowed(v_keys_3061_, v_i_3062_);
v___x_3067_ = l_Lean_instBEqMVarId_beq(v_k_3063_, v_k_x27_3066_);
if (v___x_3067_ == 0)
{
lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3068_ = lean_unsigned_to_nat(1u);
v___x_3069_ = lean_nat_add(v_i_3062_, v___x_3068_);
lean_dec(v_i_3062_);
v_i_3062_ = v___x_3069_;
goto _start;
}
else
{
lean_dec(v_i_3062_);
return v___x_3067_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_keys_3071_, lean_object* v_i_3072_, lean_object* v_k_3073_){
_start:
{
uint8_t v_res_3074_; lean_object* v_r_3075_; 
v_res_3074_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3071_, v_i_3072_, v_k_3073_);
lean_dec(v_k_3073_);
lean_dec_ref(v_keys_3071_);
v_r_3075_ = lean_box(v_res_3074_);
return v_r_3075_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object* v_x_3076_, size_t v_x_3077_, lean_object* v_x_3078_){
_start:
{
if (lean_obj_tag(v_x_3076_) == 0)
{
lean_object* v_es_3079_; lean_object* v___x_3080_; size_t v___x_3081_; size_t v___x_3082_; size_t v___x_3083_; lean_object* v_j_3084_; lean_object* v___x_3085_; 
v_es_3079_ = lean_ctor_get(v_x_3076_, 0);
v___x_3080_ = lean_box(2);
v___x_3081_ = ((size_t)5ULL);
v___x_3082_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__5_spec__6_spec__8___redArg___closed__1);
v___x_3083_ = lean_usize_land(v_x_3077_, v___x_3082_);
v_j_3084_ = lean_usize_to_nat(v___x_3083_);
v___x_3085_ = lean_array_get_borrowed(v___x_3080_, v_es_3079_, v_j_3084_);
lean_dec(v_j_3084_);
switch(lean_obj_tag(v___x_3085_))
{
case 0:
{
lean_object* v_key_3086_; uint8_t v___x_3087_; 
v_key_3086_ = lean_ctor_get(v___x_3085_, 0);
v___x_3087_ = l_Lean_instBEqMVarId_beq(v_x_3078_, v_key_3086_);
return v___x_3087_;
}
case 1:
{
lean_object* v_node_3088_; size_t v___x_3089_; 
v_node_3088_ = lean_ctor_get(v___x_3085_, 0);
v___x_3089_ = lean_usize_shift_right(v_x_3077_, v___x_3081_);
v_x_3076_ = v_node_3088_;
v_x_3077_ = v___x_3089_;
goto _start;
}
default: 
{
uint8_t v___x_3091_; 
v___x_3091_ = 0;
return v___x_3091_;
}
}
}
else
{
lean_object* v_ks_3092_; lean_object* v___x_3093_; uint8_t v___x_3094_; 
v_ks_3092_ = lean_ctor_get(v_x_3076_, 0);
v___x_3093_ = lean_unsigned_to_nat(0u);
v___x_3094_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_ks_3092_, v___x_3093_, v_x_3078_);
return v___x_3094_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_x_3095_, lean_object* v_x_3096_, lean_object* v_x_3097_){
_start:
{
size_t v_x_12623__boxed_3098_; uint8_t v_res_3099_; lean_object* v_r_3100_; 
v_x_12623__boxed_3098_ = lean_unbox_usize(v_x_3096_);
lean_dec(v_x_3096_);
v_res_3099_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3095_, v_x_12623__boxed_3098_, v_x_3097_);
lean_dec(v_x_3097_);
lean_dec_ref(v_x_3095_);
v_r_3100_ = lean_box(v_res_3099_);
return v_r_3100_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object* v_x_3101_, lean_object* v_x_3102_){
_start:
{
uint64_t v___x_3103_; size_t v___x_3104_; uint8_t v___x_3105_; 
v___x_3103_ = l_Lean_instHashableMVarId_hash(v_x_3102_);
v___x_3104_ = lean_uint64_to_usize(v___x_3103_);
v___x_3105_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3101_, v___x_3104_, v_x_3102_);
return v___x_3105_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object* v_x_3106_, lean_object* v_x_3107_){
_start:
{
uint8_t v_res_3108_; lean_object* v_r_3109_; 
v_res_3108_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3106_, v_x_3107_);
lean_dec(v_x_3107_);
lean_dec_ref(v_x_3106_);
v_r_3109_ = lean_box(v_res_3108_);
return v_r_3109_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object* v_mvarId_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v_mctx_3116_; lean_object* v_eAssignment_3117_; uint8_t v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
v___x_3114_ = lean_st_ref_get(v___y_3112_);
lean_dec(v___x_3114_);
v___x_3115_ = lean_st_ref_get(v___y_3111_);
v_mctx_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc_ref(v_mctx_3116_);
lean_dec(v___x_3115_);
v_eAssignment_3117_ = lean_ctor_get(v_mctx_3116_, 8);
lean_inc_ref(v_eAssignment_3117_);
lean_dec_ref(v_mctx_3116_);
v___x_3118_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_eAssignment_3117_, v_mvarId_3110_);
lean_dec_ref(v_eAssignment_3117_);
v___x_3119_ = lean_box(v___x_3118_);
v___x_3120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3120_, 0, v___x_3119_);
return v___x_3120_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object* v_mvarId_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3121_, v___y_3122_, v___y_3123_);
lean_dec(v___y_3123_);
lean_dec(v___y_3122_);
lean_dec(v_mvarId_3121_);
return v_res_3125_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3126_; 
v___x_3126_ = lean_mk_string_unchecked("introSubstEq: now assigned\?", 27, 27);
return v___x_3126_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3127_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__1___closed__0, &l_Lean_Meta_introSubstEq___lam__1___closed__0_once, _init_l_Lean_Meta_introSubstEq___lam__1___closed__0);
v___x_3128_ = l_Lean_stringToMessageData(v___x_3127_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object* v_mvarId_3129_, uint8_t v___y_3130_, lean_object* v_____r_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v___y_3138_; lean_object* v___y_3139_; lean_object* v___y_3140_; lean_object* v___y_3141_; lean_object* v___x_3173_; lean_object* v_a_3174_; uint8_t v___x_3175_; 
v___x_3173_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3129_, v___y_3133_, v___y_3135_);
v_a_3174_ = lean_ctor_get(v___x_3173_, 0);
lean_inc(v_a_3174_);
lean_dec_ref(v___x_3173_);
v___x_3175_ = lean_unbox(v_a_3174_);
lean_dec(v_a_3174_);
if (v___x_3175_ == 0)
{
v___y_3138_ = v___y_3132_;
v___y_3139_ = v___y_3133_;
v___y_3140_ = v___y_3134_;
v___y_3141_ = v___y_3135_;
goto v___jp_3137_;
}
else
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v_a_3178_; lean_object* v___x_3180_; uint8_t v_isShared_3181_; uint8_t v_isSharedCheck_3185_; 
lean_dec(v_mvarId_3129_);
v___x_3176_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__1___closed__1, &l_Lean_Meta_introSubstEq___lam__1___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__1___closed__1);
v___x_3177_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_3176_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
v_a_3178_ = lean_ctor_get(v___x_3177_, 0);
v_isSharedCheck_3185_ = !lean_is_exclusive(v___x_3177_);
if (v_isSharedCheck_3185_ == 0)
{
v___x_3180_ = v___x_3177_;
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
else
{
lean_inc(v_a_3178_);
lean_dec(v___x_3177_);
v___x_3180_ = lean_box(0);
v_isShared_3181_ = v_isSharedCheck_3185_;
goto v_resetjp_3179_;
}
v_resetjp_3179_:
{
lean_object* v___x_3183_; 
if (v_isShared_3181_ == 0)
{
v___x_3183_ = v___x_3180_;
goto v_reusejp_3182_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_a_3178_);
v___x_3183_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3182_;
}
v_reusejp_3182_:
{
return v___x_3183_;
}
}
}
v___jp_3137_:
{
lean_object* v___x_3142_; 
v___x_3142_ = l_Lean_Meta_intro1Core(v_mvarId_3129_, v___y_3130_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_);
if (lean_obj_tag(v___x_3142_) == 0)
{
lean_object* v_a_3143_; lean_object* v_fst_3144_; lean_object* v_snd_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v_a_3143_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_a_3143_);
lean_dec_ref(v___x_3142_);
v_fst_3144_ = lean_ctor_get(v_a_3143_, 0);
lean_inc(v_fst_3144_);
v_snd_3145_ = lean_ctor_get(v_a_3143_, 1);
lean_inc(v_snd_3145_);
lean_dec(v_a_3143_);
v___x_3146_ = lean_box(0);
v___x_3147_ = l_Lean_Meta_substEq(v_snd_3145_, v_fst_3144_, v___x_3146_, v___y_3138_, v___y_3139_, v___y_3140_, v___y_3141_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3156_; 
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3150_ = v___x_3147_;
v_isShared_3151_ = v_isSharedCheck_3156_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3147_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3156_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3152_; lean_object* v___x_3154_; 
v___x_3152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3152_, 0, v_a_3148_);
if (v_isShared_3151_ == 0)
{
lean_ctor_set(v___x_3150_, 0, v___x_3152_);
v___x_3154_ = v___x_3150_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
v_a_3157_ = lean_ctor_get(v___x_3147_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_3147_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3147_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
else
{
lean_object* v_a_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3172_; 
v_a_3165_ = lean_ctor_get(v___x_3142_, 0);
v_isSharedCheck_3172_ = !lean_is_exclusive(v___x_3142_);
if (v_isSharedCheck_3172_ == 0)
{
v___x_3167_ = v___x_3142_;
v_isShared_3168_ = v_isSharedCheck_3172_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_a_3165_);
lean_dec(v___x_3142_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object* v_mvarId_3186_, lean_object* v___y_3187_, lean_object* v_____r_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_, lean_object* v___y_3192_, lean_object* v___y_3193_){
_start:
{
uint8_t v___y_12702__boxed_3194_; lean_object* v_res_3195_; 
v___y_12702__boxed_3194_ = lean_unbox(v___y_3187_);
v_res_3195_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3186_, v___y_12702__boxed_3194_, v_____r_3188_, v___y_3189_, v___y_3190_, v___y_3191_, v___y_3192_);
lean_dec(v___y_3192_);
lean_dec_ref(v___y_3191_);
lean_dec(v___y_3190_);
lean_dec_ref(v___y_3189_);
return v_res_3195_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__0(void){
_start:
{
lean_object* v___x_3196_; 
v___x_3196_ = lean_mk_string_unchecked("introSubstEq", 12, 12);
return v___x_3196_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__1(void){
_start:
{
lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3197_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__0, &l_Lean_Meta_introSubstEq___closed__0_once, _init_l_Lean_Meta_introSubstEq___closed__0);
v___x_3198_ = l_Lean_Name_mkStr1(v___x_3197_);
return v___x_3198_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__2(void){
_start:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3199_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__22, &l_Lean_Meta_substCore___lam__3___closed__22_once, _init_l_Lean_Meta_substCore___lam__3___closed__22);
v___x_3200_ = lean_obj_once(&l_Lean_Meta_substCore___lam__0___closed__1, &l_Lean_Meta_substCore___lam__0___closed__1_once, _init_l_Lean_Meta_substCore___lam__0___closed__1);
v___x_3201_ = l_Lean_Name_append(v___x_3200_, v___x_3199_);
return v___x_3201_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__3(void){
_start:
{
lean_object* v___x_3202_; 
v___x_3202_ = lean_mk_string_unchecked("introSubstEq falling back to intro\n", 35, 35);
return v___x_3202_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__4(void){
_start:
{
lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3203_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__3, &l_Lean_Meta_introSubstEq___closed__3_once, _init_l_Lean_Meta_introSubstEq___closed__3);
v___x_3204_ = l_Lean_stringToMessageData(v___x_3203_);
return v___x_3204_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__5(void){
_start:
{
lean_object* v___x_3205_; 
v___x_3205_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_3205_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__6(void){
_start:
{
lean_object* v___x_3206_; lean_object* v___x_3207_; 
v___x_3206_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__5, &l_Lean_Meta_introSubstEq___closed__5_once, _init_l_Lean_Meta_introSubstEq___closed__5);
v___x_3207_ = l_Lean_stringToMessageData(v___x_3206_);
return v___x_3207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object* v_mvarId_3208_, uint8_t v_substLHS_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_){
_start:
{
lean_object* v___y_3216_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
v___x_3234_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__1, &l_Lean_Meta_introSubstEq___closed__1_once, _init_l_Lean_Meta_introSubstEq___closed__1);
lean_inc(v_mvarId_3208_);
v___x_3235_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3208_, v___x_3234_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3235_) == 0)
{
lean_object* v___x_3236_; lean_object* v___f_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; 
lean_dec_ref(v___x_3235_);
v___x_3236_ = lean_box(v_substLHS_3209_);
lean_inc_n(v_mvarId_3208_, 2);
v___f_3237_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3237_, 0, v_mvarId_3208_);
lean_closure_set(v___f_3237_, 1, v___x_3236_);
v___x_3238_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed), 8, 3);
lean_closure_set(v___x_3238_, 0, lean_box(0));
lean_closure_set(v___x_3238_, 1, v_mvarId_3208_);
lean_closure_set(v___x_3238_, 2, v___f_3237_);
v___x_3239_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v___x_3238_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3239_) == 0)
{
lean_dec(v_mvarId_3208_);
return v___x_3239_;
}
else
{
lean_object* v_a_3240_; lean_object* v___y_3242_; uint8_t v___y_3246_; uint8_t v___x_3280_; 
v_a_3240_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_a_3240_);
v___x_3280_ = l_Lean_Exception_isInterrupt(v_a_3240_);
if (v___x_3280_ == 0)
{
uint8_t v___x_3281_; 
lean_inc(v_a_3240_);
v___x_3281_ = l_Lean_Exception_isRuntime(v_a_3240_);
v___y_3246_ = v___x_3281_;
goto v___jp_3245_;
}
else
{
v___y_3246_ = v___x_3280_;
goto v___jp_3245_;
}
v___jp_3241_:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___x_3243_ = lean_box(0);
lean_inc(v_a_3213_);
lean_inc_ref(v_a_3212_);
lean_inc(v_a_3211_);
lean_inc_ref(v_a_3210_);
v___x_3244_ = lean_apply_6(v___y_3242_, v___x_3243_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_, lean_box(0));
v___y_3216_ = v___x_3244_;
goto v___jp_3215_;
}
v___jp_3245_:
{
if (v___y_3246_ == 0)
{
lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3278_; 
v_isSharedCheck_3278_ = !lean_is_exclusive(v___x_3239_);
if (v_isSharedCheck_3278_ == 0)
{
lean_object* v_unused_3279_; 
v_unused_3279_ = lean_ctor_get(v___x_3239_, 0);
lean_dec(v_unused_3279_);
v___x_3248_ = v___x_3239_;
v_isShared_3249_ = v_isSharedCheck_3278_;
goto v_resetjp_3247_;
}
else
{
lean_dec(v___x_3239_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3278_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v_options_3250_; lean_object* v_inheritedTraceOptions_3251_; uint8_t v_hasTrace_3252_; lean_object* v___x_3253_; lean_object* v___f_3254_; 
v_options_3250_ = lean_ctor_get(v_a_3212_, 2);
v_inheritedTraceOptions_3251_ = lean_ctor_get(v_a_3212_, 13);
v_hasTrace_3252_ = lean_ctor_get_uint8(v_options_3250_, sizeof(void*)*1);
v___x_3253_ = lean_box(v___y_3246_);
lean_inc(v_mvarId_3208_);
v___f_3254_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__1___boxed), 8, 2);
lean_closure_set(v___f_3254_, 0, v_mvarId_3208_);
lean_closure_set(v___f_3254_, 1, v___x_3253_);
if (v_hasTrace_3252_ == 0)
{
lean_del_object(v___x_3248_);
lean_dec(v_a_3240_);
lean_dec(v_mvarId_3208_);
v___y_3242_ = v___f_3254_;
goto v___jp_3241_;
}
else
{
lean_object* v___x_3255_; lean_object* v___x_3256_; uint8_t v___x_3257_; 
v___x_3255_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__22, &l_Lean_Meta_substCore___lam__3___closed__22_once, _init_l_Lean_Meta_substCore___lam__3___closed__22);
v___x_3256_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__2, &l_Lean_Meta_introSubstEq___closed__2_once, _init_l_Lean_Meta_introSubstEq___closed__2);
v___x_3257_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3251_, v_options_3250_, v___x_3256_);
if (v___x_3257_ == 0)
{
lean_del_object(v___x_3248_);
lean_dec(v_a_3240_);
lean_dec(v_mvarId_3208_);
v___y_3242_ = v___f_3254_;
goto v___jp_3241_;
}
else
{
lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3264_; 
lean_dec_ref(v___f_3254_);
v___x_3258_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__4, &l_Lean_Meta_introSubstEq___closed__4_once, _init_l_Lean_Meta_introSubstEq___closed__4);
v___x_3259_ = l_Lean_Exception_toMessageData(v_a_3240_);
v___x_3260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3260_, 0, v___x_3258_);
lean_ctor_set(v___x_3260_, 1, v___x_3259_);
v___x_3261_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__6, &l_Lean_Meta_introSubstEq___closed__6_once, _init_l_Lean_Meta_introSubstEq___closed__6);
v___x_3262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3262_, 0, v___x_3260_);
lean_ctor_set(v___x_3262_, 1, v___x_3261_);
lean_inc(v_mvarId_3208_);
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 0, v_mvarId_3208_);
v___x_3264_ = v___x_3248_;
goto v_reusejp_3263_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_mvarId_3208_);
v___x_3264_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3263_;
}
v_reusejp_3263_:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; 
v___x_3265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3265_, 0, v___x_3262_);
lean_ctor_set(v___x_3265_, 1, v___x_3264_);
v___x_3266_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__3(v___x_3255_, v___x_3265_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_object* v_a_3267_; lean_object* v___x_3268_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref(v___x_3266_);
v___x_3268_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3208_, v___y_3246_, v_a_3267_, v_a_3210_, v_a_3211_, v_a_3212_, v_a_3213_);
v___y_3216_ = v___x_3268_;
goto v___jp_3215_;
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v_mvarId_3208_);
v_a_3269_ = lean_ctor_get(v___x_3266_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3266_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3266_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3266_);
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
}
}
}
}
else
{
lean_dec(v_a_3240_);
lean_dec(v_mvarId_3208_);
return v___x_3239_;
}
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3289_; 
lean_dec(v_mvarId_3208_);
v_a_3282_ = lean_ctor_get(v___x_3235_, 0);
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3235_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3284_ = v___x_3235_;
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_a_3282_);
lean_dec(v___x_3235_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3287_; 
if (v_isShared_3285_ == 0)
{
v___x_3287_ = v___x_3284_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v_a_3282_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
v___jp_3215_:
{
if (lean_obj_tag(v___y_3216_) == 0)
{
lean_object* v_a_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3225_; 
v_a_3217_ = lean_ctor_get(v___y_3216_, 0);
v_isSharedCheck_3225_ = !lean_is_exclusive(v___y_3216_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3219_ = v___y_3216_;
v_isShared_3220_ = v_isSharedCheck_3225_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_a_3217_);
lean_dec(v___y_3216_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3225_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v_a_3221_; lean_object* v___x_3223_; 
v_a_3221_ = lean_ctor_get(v_a_3217_, 0);
lean_inc(v_a_3221_);
lean_dec(v_a_3217_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 0, v_a_3221_);
v___x_3223_ = v___x_3219_;
goto v_reusejp_3222_;
}
else
{
lean_object* v_reuseFailAlloc_3224_; 
v_reuseFailAlloc_3224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3224_, 0, v_a_3221_);
v___x_3223_ = v_reuseFailAlloc_3224_;
goto v_reusejp_3222_;
}
v_reusejp_3222_:
{
return v___x_3223_;
}
}
}
else
{
lean_object* v_a_3226_; lean_object* v___x_3228_; uint8_t v_isShared_3229_; uint8_t v_isSharedCheck_3233_; 
v_a_3226_ = lean_ctor_get(v___y_3216_, 0);
v_isSharedCheck_3233_ = !lean_is_exclusive(v___y_3216_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3228_ = v___y_3216_;
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
else
{
lean_inc(v_a_3226_);
lean_dec(v___y_3216_);
v___x_3228_ = lean_box(0);
v_isShared_3229_ = v_isSharedCheck_3233_;
goto v_resetjp_3227_;
}
v_resetjp_3227_:
{
lean_object* v___x_3231_; 
if (v_isShared_3229_ == 0)
{
v___x_3231_ = v___x_3228_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3232_; 
v_reuseFailAlloc_3232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3232_, 0, v_a_3226_);
v___x_3231_ = v_reuseFailAlloc_3232_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
return v___x_3231_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object* v_mvarId_3290_, lean_object* v_substLHS_3291_, lean_object* v_a_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_, lean_object* v_a_3295_, lean_object* v_a_3296_){
_start:
{
uint8_t v_substLHS_boxed_3297_; lean_object* v_res_3298_; 
v_substLHS_boxed_3297_ = lean_unbox(v_substLHS_3291_);
v_res_3298_ = l_Lean_Meta_introSubstEq(v_mvarId_3290_, v_substLHS_boxed_3297_, v_a_3292_, v_a_3293_, v_a_3294_, v_a_3295_);
lean_dec(v_a_3295_);
lean_dec_ref(v_a_3294_);
lean_dec(v_a_3293_);
lean_dec_ref(v_a_3292_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object* v_00_u03b1_3299_, lean_object* v_msg_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_){
_start:
{
lean_object* v___x_3306_; 
v___x_3306_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_);
return v___x_3306_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object* v_00_u03b1_3307_, lean_object* v_msg_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(v_00_u03b1_3307_, v_msg_3308_, v___y_3309_, v___y_3310_, v___y_3311_, v___y_3312_);
lean_dec(v___y_3312_);
lean_dec_ref(v___y_3311_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object* v_mvarId_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
lean_object* v___x_3321_; 
v___x_3321_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3315_, v___y_3317_, v___y_3319_);
return v___x_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object* v_mvarId_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(v_mvarId_3322_, v___y_3323_, v___y_3324_, v___y_3325_, v___y_3326_);
lean_dec(v___y_3326_);
lean_dec_ref(v___y_3325_);
lean_dec(v___y_3324_);
lean_dec_ref(v___y_3323_);
lean_dec(v_mvarId_3322_);
return v_res_3328_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object* v_00_u03b2_3329_, lean_object* v_x_3330_, lean_object* v_x_3331_){
_start:
{
uint8_t v___x_3332_; 
v___x_3332_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3330_, v_x_3331_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3333_, lean_object* v_x_3334_, lean_object* v_x_3335_){
_start:
{
uint8_t v_res_3336_; lean_object* v_r_3337_; 
v_res_3336_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(v_00_u03b2_3333_, v_x_3334_, v_x_3335_);
lean_dec(v_x_3335_);
lean_dec_ref(v_x_3334_);
v_r_3337_ = lean_box(v_res_3336_);
return v_r_3337_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object* v_00_u03b2_3338_, lean_object* v_x_3339_, size_t v_x_3340_, lean_object* v_x_3341_){
_start:
{
uint8_t v___x_3342_; 
v___x_3342_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3339_, v_x_3340_, v_x_3341_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3343_, lean_object* v_x_3344_, lean_object* v_x_3345_, lean_object* v_x_3346_){
_start:
{
size_t v_x_13066__boxed_3347_; uint8_t v_res_3348_; lean_object* v_r_3349_; 
v_x_13066__boxed_3347_ = lean_unbox_usize(v_x_3345_);
lean_dec(v_x_3345_);
v_res_3348_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(v_00_u03b2_3343_, v_x_3344_, v_x_13066__boxed_3347_, v_x_3346_);
lean_dec(v_x_3346_);
lean_dec_ref(v_x_3344_);
v_r_3349_ = lean_box(v_res_3348_);
return v_r_3349_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3350_, lean_object* v_keys_3351_, lean_object* v_vals_3352_, lean_object* v_heq_3353_, lean_object* v_i_3354_, lean_object* v_k_3355_){
_start:
{
uint8_t v___x_3356_; 
v___x_3356_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3351_, v_i_3354_, v_k_3355_);
return v___x_3356_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3357_, lean_object* v_keys_3358_, lean_object* v_vals_3359_, lean_object* v_heq_3360_, lean_object* v_i_3361_, lean_object* v_k_3362_){
_start:
{
uint8_t v_res_3363_; lean_object* v_r_3364_; 
v_res_3363_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(v_00_u03b2_3357_, v_keys_3358_, v_vals_3359_, v_heq_3360_, v_i_3361_, v_k_3362_);
lean_dec(v_k_3362_);
lean_dec_ref(v_vals_3359_);
lean_dec_ref(v_keys_3358_);
v_r_3364_ = lean_box(v_res_3363_);
return v_r_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object* v_x_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v___x_3371_; 
v___x_3371_ = l_Lean_Meta_saveState___redArg(v___y_3367_, v___y_3369_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; lean_object* v___x_3373_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref(v___x_3371_);
lean_inc(v___y_3369_);
lean_inc_ref(v___y_3368_);
lean_inc(v___y_3367_);
lean_inc_ref(v___y_3366_);
v___x_3373_ = lean_apply_5(v_x_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, lean_box(0));
if (lean_obj_tag(v___x_3373_) == 0)
{
lean_object* v_a_3374_; lean_object* v___x_3376_; uint8_t v_isShared_3377_; uint8_t v_isSharedCheck_3382_; 
lean_dec(v_a_3372_);
v_a_3374_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3382_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3382_ == 0)
{
v___x_3376_ = v___x_3373_;
v_isShared_3377_ = v_isSharedCheck_3382_;
goto v_resetjp_3375_;
}
else
{
lean_inc(v_a_3374_);
lean_dec(v___x_3373_);
v___x_3376_ = lean_box(0);
v_isShared_3377_ = v_isSharedCheck_3382_;
goto v_resetjp_3375_;
}
v_resetjp_3375_:
{
lean_object* v___x_3378_; lean_object* v___x_3380_; 
v___x_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3378_, 0, v_a_3374_);
if (v_isShared_3377_ == 0)
{
lean_ctor_set(v___x_3376_, 0, v___x_3378_);
v___x_3380_ = v___x_3376_;
goto v_reusejp_3379_;
}
else
{
lean_object* v_reuseFailAlloc_3381_; 
v_reuseFailAlloc_3381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3381_, 0, v___x_3378_);
v___x_3380_ = v_reuseFailAlloc_3381_;
goto v_reusejp_3379_;
}
v_reusejp_3379_:
{
return v___x_3380_;
}
}
}
else
{
lean_object* v_a_3383_; lean_object* v___x_3385_; uint8_t v_isShared_3386_; uint8_t v_isSharedCheck_3412_; 
v_a_3383_ = lean_ctor_get(v___x_3373_, 0);
v_isSharedCheck_3412_ = !lean_is_exclusive(v___x_3373_);
if (v_isSharedCheck_3412_ == 0)
{
v___x_3385_ = v___x_3373_;
v_isShared_3386_ = v_isSharedCheck_3412_;
goto v_resetjp_3384_;
}
else
{
lean_inc(v_a_3383_);
lean_dec(v___x_3373_);
v___x_3385_ = lean_box(0);
v_isShared_3386_ = v_isSharedCheck_3412_;
goto v_resetjp_3384_;
}
v_resetjp_3384_:
{
uint8_t v___y_3388_; uint8_t v___x_3410_; 
v___x_3410_ = l_Lean_Exception_isInterrupt(v_a_3383_);
if (v___x_3410_ == 0)
{
uint8_t v___x_3411_; 
lean_inc(v_a_3383_);
v___x_3411_ = l_Lean_Exception_isRuntime(v_a_3383_);
v___y_3388_ = v___x_3411_;
goto v___jp_3387_;
}
else
{
v___y_3388_ = v___x_3410_;
goto v___jp_3387_;
}
v___jp_3387_:
{
if (v___y_3388_ == 0)
{
lean_object* v___x_3389_; 
lean_del_object(v___x_3385_);
lean_dec(v_a_3383_);
v___x_3389_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3372_, v___y_3367_, v___y_3369_);
lean_dec(v_a_3372_);
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3397_; 
v_isSharedCheck_3397_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3397_ == 0)
{
lean_object* v_unused_3398_; 
v_unused_3398_ = lean_ctor_get(v___x_3389_, 0);
lean_dec(v_unused_3398_);
v___x_3391_ = v___x_3389_;
v_isShared_3392_ = v_isSharedCheck_3397_;
goto v_resetjp_3390_;
}
else
{
lean_dec(v___x_3389_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3397_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3393_; lean_object* v___x_3395_; 
v___x_3393_ = lean_box(0);
if (v_isShared_3392_ == 0)
{
lean_ctor_set(v___x_3391_, 0, v___x_3393_);
v___x_3395_ = v___x_3391_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v___x_3393_);
v___x_3395_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
return v___x_3395_;
}
}
}
else
{
lean_object* v_a_3399_; lean_object* v___x_3401_; uint8_t v_isShared_3402_; uint8_t v_isSharedCheck_3406_; 
v_a_3399_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3406_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3406_ == 0)
{
v___x_3401_ = v___x_3389_;
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
else
{
lean_inc(v_a_3399_);
lean_dec(v___x_3389_);
v___x_3401_ = lean_box(0);
v_isShared_3402_ = v_isSharedCheck_3406_;
goto v_resetjp_3400_;
}
v_resetjp_3400_:
{
lean_object* v___x_3404_; 
if (v_isShared_3402_ == 0)
{
v___x_3404_ = v___x_3401_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_a_3399_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
else
{
lean_object* v___x_3408_; 
lean_dec(v_a_3372_);
if (v_isShared_3386_ == 0)
{
v___x_3408_ = v___x_3385_;
goto v_reusejp_3407_;
}
else
{
lean_object* v_reuseFailAlloc_3409_; 
v_reuseFailAlloc_3409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3409_, 0, v_a_3383_);
v___x_3408_ = v_reuseFailAlloc_3409_;
goto v_reusejp_3407_;
}
v_reusejp_3407_:
{
return v___x_3408_;
}
}
}
}
}
}
else
{
lean_object* v_a_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3420_; 
lean_dec_ref(v_x_3365_);
v_a_3413_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3420_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3420_ == 0)
{
v___x_3415_ = v___x_3371_;
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
else
{
lean_inc(v_a_3413_);
lean_dec(v___x_3371_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3420_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3418_; 
if (v_isShared_3416_ == 0)
{
v___x_3418_ = v___x_3415_;
goto v_reusejp_3417_;
}
else
{
lean_object* v_reuseFailAlloc_3419_; 
v_reuseFailAlloc_3419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3419_, 0, v_a_3413_);
v___x_3418_ = v_reuseFailAlloc_3419_;
goto v_reusejp_3417_;
}
v_reusejp_3417_:
{
return v___x_3418_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object* v_x_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object* v_00_u03b1_3428_, lean_object* v_x_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object* v_00_u03b1_3436_, lean_object* v_x_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_){
_start:
{
lean_object* v_res_3443_; 
v_res_3443_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(v_00_u03b1_3436_, v_x_3437_, v___y_3438_, v___y_3439_, v___y_3440_, v___y_3441_);
lean_dec(v___y_3441_);
lean_dec_ref(v___y_3440_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
return v_res_3443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object* v_mvarId_3444_, lean_object* v_hFVarId_3445_, lean_object* v_a_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_){
_start:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; 
v___x_3451_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___boxed), 7, 2);
lean_closure_set(v___x_3451_, 0, v_mvarId_3444_);
lean_closure_set(v___x_3451_, 1, v_hFVarId_3445_);
v___x_3452_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3451_, v_a_3446_, v_a_3447_, v_a_3448_, v_a_3449_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object* v_mvarId_3453_, lean_object* v_hFVarId_3454_, lean_object* v_a_3455_, lean_object* v_a_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_){
_start:
{
lean_object* v_res_3460_; 
v_res_3460_ = l_Lean_Meta_substVar_x3f(v_mvarId_3453_, v_hFVarId_3454_, v_a_3455_, v_a_3456_, v_a_3457_, v_a_3458_);
lean_dec(v_a_3458_);
lean_dec_ref(v_a_3457_);
lean_dec(v_a_3456_);
lean_dec_ref(v_a_3455_);
return v_res_3460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object* v_mvarId_3461_, lean_object* v_hFVarId_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_){
_start:
{
lean_object* v___x_3468_; lean_object* v___x_3469_; 
v___x_3468_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___boxed), 7, 2);
lean_closure_set(v___x_3468_, 0, v_mvarId_3461_);
lean_closure_set(v___x_3468_, 1, v_hFVarId_3462_);
v___x_3469_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3468_, v_a_3463_, v_a_3464_, v_a_3465_, v_a_3466_);
return v___x_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object* v_mvarId_3470_, lean_object* v_hFVarId_3471_, lean_object* v_a_3472_, lean_object* v_a_3473_, lean_object* v_a_3474_, lean_object* v_a_3475_, lean_object* v_a_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l_Lean_Meta_subst_x3f(v_mvarId_3470_, v_hFVarId_3471_, v_a_3472_, v_a_3473_, v_a_3474_, v_a_3475_);
lean_dec(v_a_3475_);
lean_dec_ref(v_a_3474_);
lean_dec(v_a_3473_);
lean_dec_ref(v_a_3472_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object* v_mvarId_3478_, lean_object* v_hFVarId_3479_, uint8_t v_symm_3480_, lean_object* v_fvarSubst_3481_, uint8_t v_clearH_3482_, uint8_t v_tryToSkip_3483_, lean_object* v_a_3484_, lean_object* v_a_3485_, lean_object* v_a_3486_, lean_object* v_a_3487_){
_start:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3489_ = lean_box(v_symm_3480_);
v___x_3490_ = lean_box(v_clearH_3482_);
v___x_3491_ = lean_box(v_tryToSkip_3483_);
v___x_3492_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_3492_, 0, v_mvarId_3478_);
lean_closure_set(v___x_3492_, 1, v_hFVarId_3479_);
lean_closure_set(v___x_3492_, 2, v___x_3489_);
lean_closure_set(v___x_3492_, 3, v_fvarSubst_3481_);
lean_closure_set(v___x_3492_, 4, v___x_3490_);
lean_closure_set(v___x_3492_, 5, v___x_3491_);
v___x_3493_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3492_, v_a_3484_, v_a_3485_, v_a_3486_, v_a_3487_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object* v_mvarId_3494_, lean_object* v_hFVarId_3495_, lean_object* v_symm_3496_, lean_object* v_fvarSubst_3497_, lean_object* v_clearH_3498_, lean_object* v_tryToSkip_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_){
_start:
{
uint8_t v_symm_boxed_3505_; uint8_t v_clearH_boxed_3506_; uint8_t v_tryToSkip_boxed_3507_; lean_object* v_res_3508_; 
v_symm_boxed_3505_ = lean_unbox(v_symm_3496_);
v_clearH_boxed_3506_ = lean_unbox(v_clearH_3498_);
v_tryToSkip_boxed_3507_ = lean_unbox(v_tryToSkip_3499_);
v_res_3508_ = l_Lean_Meta_substCore_x3f(v_mvarId_3494_, v_hFVarId_3495_, v_symm_boxed_3505_, v_fvarSubst_3497_, v_clearH_boxed_3506_, v_tryToSkip_boxed_3507_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_);
lean_dec(v_a_3503_);
lean_dec_ref(v_a_3502_);
lean_dec(v_a_3501_);
lean_dec_ref(v_a_3500_);
return v_res_3508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object* v_mvarId_3509_, lean_object* v_hFVarId_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_){
_start:
{
lean_object* v___x_3516_; 
lean_inc(v_mvarId_3509_);
v___x_3516_ = l_Lean_Meta_substVar_x3f(v_mvarId_3509_, v_hFVarId_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3528_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3519_ = v___x_3516_;
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3516_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
if (lean_obj_tag(v_a_3517_) == 0)
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 0, v_mvarId_3509_);
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_mvarId_3509_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
else
{
lean_object* v_val_3524_; lean_object* v___x_3526_; 
lean_dec(v_mvarId_3509_);
v_val_3524_ = lean_ctor_get(v_a_3517_, 0);
lean_inc(v_val_3524_);
lean_dec_ref(v_a_3517_);
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 0, v_val_3524_);
v___x_3526_ = v___x_3519_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_val_3524_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
lean_dec(v_mvarId_3509_);
v_a_3529_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3516_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3516_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object* v_mvarId_3537_, lean_object* v_hFVarId_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_Meta_trySubstVar(v_mvarId_3537_, v_hFVarId_3538_, v_a_3539_, v_a_3540_, v_a_3541_, v_a_3542_);
lean_dec(v_a_3542_);
lean_dec_ref(v_a_3541_);
lean_dec(v_a_3540_);
lean_dec_ref(v_a_3539_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object* v_mvarId_3545_, lean_object* v_hFVarId_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_){
_start:
{
lean_object* v___x_3552_; 
lean_inc(v_mvarId_3545_);
v___x_3552_ = l_Lean_Meta_subst_x3f(v_mvarId_3545_, v_hFVarId_3546_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3564_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3564_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3564_ == 0)
{
v___x_3555_ = v___x_3552_;
v_isShared_3556_ = v_isSharedCheck_3564_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_a_3553_);
lean_dec(v___x_3552_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3564_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
if (lean_obj_tag(v_a_3553_) == 0)
{
lean_object* v___x_3558_; 
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 0, v_mvarId_3545_);
v___x_3558_ = v___x_3555_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_mvarId_3545_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
else
{
lean_object* v_val_3560_; lean_object* v___x_3562_; 
lean_dec(v_mvarId_3545_);
v_val_3560_ = lean_ctor_get(v_a_3553_, 0);
lean_inc(v_val_3560_);
lean_dec_ref(v_a_3553_);
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 0, v_val_3560_);
v___x_3562_ = v___x_3555_;
goto v_reusejp_3561_;
}
else
{
lean_object* v_reuseFailAlloc_3563_; 
v_reuseFailAlloc_3563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3563_, 0, v_val_3560_);
v___x_3562_ = v_reuseFailAlloc_3563_;
goto v_reusejp_3561_;
}
v_reusejp_3561_:
{
return v___x_3562_;
}
}
}
}
else
{
lean_object* v_a_3565_; lean_object* v___x_3567_; uint8_t v_isShared_3568_; uint8_t v_isSharedCheck_3572_; 
lean_dec(v_mvarId_3545_);
v_a_3565_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3567_ = v___x_3552_;
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
else
{
lean_inc(v_a_3565_);
lean_dec(v___x_3552_);
v___x_3567_ = lean_box(0);
v_isShared_3568_ = v_isSharedCheck_3572_;
goto v_resetjp_3566_;
}
v_resetjp_3566_:
{
lean_object* v___x_3570_; 
if (v_isShared_3568_ == 0)
{
v___x_3570_ = v___x_3567_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_a_3565_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object* v_mvarId_3573_, lean_object* v_hFVarId_3574_, lean_object* v_a_3575_, lean_object* v_a_3576_, lean_object* v_a_3577_, lean_object* v_a_3578_, lean_object* v_a_3579_){
_start:
{
lean_object* v_res_3580_; 
v_res_3580_ = l_Lean_Meta_trySubst(v_mvarId_3573_, v_hFVarId_3574_, v_a_3575_, v_a_3576_, v_a_3577_, v_a_3578_);
lean_dec(v_a_3578_);
lean_dec_ref(v_a_3577_);
lean_dec(v_a_3576_);
lean_dec_ref(v_a_3575_);
return v_res_3580_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0(void){
_start:
{
lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3581_ = lean_box(0);
v___x_3582_ = lean_box(0);
v___x_3583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3583_, 0, v___x_3582_);
lean_ctor_set(v___x_3583_, 1, v___x_3581_);
return v___x_3583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object* v_mvarId_3584_, lean_object* v_as_3585_, size_t v_sz_3586_, size_t v_i_3587_, lean_object* v_b_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_){
_start:
{
uint8_t v___x_3594_; 
v___x_3594_ = lean_usize_dec_lt(v_i_3587_, v_sz_3586_);
if (v___x_3594_ == 0)
{
lean_object* v___x_3595_; 
lean_dec(v_mvarId_3584_);
v___x_3595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3595_, 0, v_b_3588_);
return v___x_3595_;
}
else
{
lean_object* v_snd_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3648_; 
v_snd_3596_ = lean_ctor_get(v_b_3588_, 1);
v_isSharedCheck_3648_ = !lean_is_exclusive(v_b_3588_);
if (v_isSharedCheck_3648_ == 0)
{
lean_object* v_unused_3649_; 
v_unused_3649_ = lean_ctor_get(v_b_3588_, 0);
lean_dec(v_unused_3649_);
v___x_3598_ = v_b_3588_;
v_isShared_3599_ = v_isSharedCheck_3648_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_snd_3596_);
lean_dec(v_b_3588_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3648_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3600_; lean_object* v_a_3602_; lean_object* v_a_3609_; 
v___x_3600_ = lean_box(0);
v_a_3609_ = lean_array_uget(v_as_3585_, v_i_3587_);
if (lean_obj_tag(v_a_3609_) == 0)
{
v_a_3602_ = v_snd_3596_;
goto v___jp_3601_;
}
else
{
lean_object* v_val_3610_; lean_object* v___x_3612_; uint8_t v_isShared_3613_; uint8_t v_isSharedCheck_3647_; 
v_val_3610_ = lean_ctor_get(v_a_3609_, 0);
v_isSharedCheck_3647_ = !lean_is_exclusive(v_a_3609_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3612_ = v_a_3609_;
v_isShared_3613_ = v_isSharedCheck_3647_;
goto v_resetjp_3611_;
}
else
{
lean_inc(v_val_3610_);
lean_dec(v_a_3609_);
v___x_3612_ = lean_box(0);
v_isShared_3613_ = v_isSharedCheck_3647_;
goto v_resetjp_3611_;
}
v_resetjp_3611_:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = l_Lean_LocalDecl_fvarId(v_val_3610_);
lean_dec(v_val_3610_);
lean_inc(v_mvarId_3584_);
v___x_3615_ = l_Lean_Meta_subst_x3f(v_mvarId_3584_, v___x_3614_, v___y_3589_, v___y_3590_, v___y_3591_, v___y_3592_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3638_; 
v_a_3616_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3638_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3638_ == 0)
{
v___x_3618_ = v___x_3615_;
v_isShared_3619_ = v_isSharedCheck_3638_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3615_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3638_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3620_; 
v___x_3620_ = lean_box(0);
if (lean_obj_tag(v_a_3616_) == 1)
{
lean_object* v___x_3622_; 
lean_del_object(v___x_3598_);
lean_dec(v_mvarId_3584_);
lean_inc_ref(v_a_3616_);
if (v_isShared_3613_ == 0)
{
lean_ctor_set(v___x_3612_, 0, v_a_3616_);
v___x_3622_ = v___x_3612_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3636_; 
v_reuseFailAlloc_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3636_, 0, v_a_3616_);
v___x_3622_ = v_reuseFailAlloc_3636_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3634_; 
v_isSharedCheck_3634_ = !lean_is_exclusive(v_a_3616_);
if (v_isSharedCheck_3634_ == 0)
{
lean_object* v_unused_3635_; 
v_unused_3635_ = lean_ctor_get(v_a_3616_, 0);
lean_dec(v_unused_3635_);
v___x_3624_ = v_a_3616_;
v_isShared_3625_ = v_isSharedCheck_3634_;
goto v_resetjp_3623_;
}
else
{
lean_dec(v_a_3616_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3634_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
lean_object* v___x_3626_; lean_object* v___x_3628_; 
v___x_3626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3622_);
lean_ctor_set(v___x_3626_, 1, v___x_3620_);
if (v_isShared_3625_ == 0)
{
lean_ctor_set(v___x_3624_, 0, v___x_3626_);
v___x_3628_ = v___x_3624_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3626_);
v___x_3628_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_object* v___x_3629_; lean_object* v___x_3631_; 
v___x_3629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3628_);
lean_ctor_set(v___x_3629_, 1, v_snd_3596_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 0, v___x_3629_);
v___x_3631_ = v___x_3618_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v___x_3629_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
}
else
{
lean_object* v___x_3637_; 
lean_del_object(v___x_3618_);
lean_dec(v_a_3616_);
lean_del_object(v___x_3612_);
lean_dec(v_snd_3596_);
v___x_3637_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0);
v_a_3602_ = v___x_3637_;
goto v___jp_3601_;
}
}
}
else
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3646_; 
lean_del_object(v___x_3612_);
lean_del_object(v___x_3598_);
lean_dec(v_snd_3596_);
lean_dec(v_mvarId_3584_);
v_a_3639_ = lean_ctor_get(v___x_3615_, 0);
v_isSharedCheck_3646_ = !lean_is_exclusive(v___x_3615_);
if (v_isSharedCheck_3646_ == 0)
{
v___x_3641_ = v___x_3615_;
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3615_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3646_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3644_; 
if (v_isShared_3642_ == 0)
{
v___x_3644_ = v___x_3641_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_a_3639_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
}
}
v___jp_3601_:
{
lean_object* v___x_3604_; 
if (v_isShared_3599_ == 0)
{
lean_ctor_set(v___x_3598_, 1, v_a_3602_);
lean_ctor_set(v___x_3598_, 0, v___x_3600_);
v___x_3604_ = v___x_3598_;
goto v_reusejp_3603_;
}
else
{
lean_object* v_reuseFailAlloc_3608_; 
v_reuseFailAlloc_3608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3608_, 0, v___x_3600_);
lean_ctor_set(v_reuseFailAlloc_3608_, 1, v_a_3602_);
v___x_3604_ = v_reuseFailAlloc_3608_;
goto v_reusejp_3603_;
}
v_reusejp_3603_:
{
size_t v___x_3605_; size_t v___x_3606_; 
v___x_3605_ = ((size_t)1ULL);
v___x_3606_ = lean_usize_add(v_i_3587_, v___x_3605_);
v_i_3587_ = v___x_3606_;
v_b_3588_ = v___x_3604_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object* v_mvarId_3650_, lean_object* v_as_3651_, lean_object* v_sz_3652_, lean_object* v_i_3653_, lean_object* v_b_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_){
_start:
{
size_t v_sz_boxed_3660_; size_t v_i_boxed_3661_; lean_object* v_res_3662_; 
v_sz_boxed_3660_ = lean_unbox_usize(v_sz_3652_);
lean_dec(v_sz_3652_);
v_i_boxed_3661_ = lean_unbox_usize(v_i_3653_);
lean_dec(v_i_3653_);
v_res_3662_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3650_, v_as_3651_, v_sz_boxed_3660_, v_i_boxed_3661_, v_b_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec(v___y_3656_);
lean_dec_ref(v___y_3655_);
lean_dec_ref(v_as_3651_);
return v_res_3662_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object* v_mvarId_3663_, lean_object* v_as_3664_, size_t v_sz_3665_, size_t v_i_3666_, lean_object* v_b_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_){
_start:
{
uint8_t v___x_3673_; 
v___x_3673_ = lean_usize_dec_lt(v_i_3666_, v_sz_3665_);
if (v___x_3673_ == 0)
{
lean_object* v___x_3674_; 
lean_dec(v_mvarId_3663_);
v___x_3674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3674_, 0, v_b_3667_);
return v___x_3674_;
}
else
{
lean_object* v_snd_3675_; lean_object* v___x_3677_; uint8_t v_isShared_3678_; uint8_t v_isSharedCheck_3727_; 
v_snd_3675_ = lean_ctor_get(v_b_3667_, 1);
v_isSharedCheck_3727_ = !lean_is_exclusive(v_b_3667_);
if (v_isSharedCheck_3727_ == 0)
{
lean_object* v_unused_3728_; 
v_unused_3728_ = lean_ctor_get(v_b_3667_, 0);
lean_dec(v_unused_3728_);
v___x_3677_ = v_b_3667_;
v_isShared_3678_ = v_isSharedCheck_3727_;
goto v_resetjp_3676_;
}
else
{
lean_inc(v_snd_3675_);
lean_dec(v_b_3667_);
v___x_3677_ = lean_box(0);
v_isShared_3678_ = v_isSharedCheck_3727_;
goto v_resetjp_3676_;
}
v_resetjp_3676_:
{
lean_object* v___x_3679_; lean_object* v_a_3681_; lean_object* v_a_3688_; 
v___x_3679_ = lean_box(0);
v_a_3688_ = lean_array_uget(v_as_3664_, v_i_3666_);
if (lean_obj_tag(v_a_3688_) == 0)
{
v_a_3681_ = v_snd_3675_;
goto v___jp_3680_;
}
else
{
lean_object* v_val_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3726_; 
v_val_3689_ = lean_ctor_get(v_a_3688_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v_a_3688_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3691_ = v_a_3688_;
v_isShared_3692_ = v_isSharedCheck_3726_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_val_3689_);
lean_dec(v_a_3688_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3726_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; 
v___x_3693_ = l_Lean_LocalDecl_fvarId(v_val_3689_);
lean_dec(v_val_3689_);
lean_inc(v_mvarId_3663_);
v___x_3694_ = l_Lean_Meta_subst_x3f(v_mvarId_3663_, v___x_3693_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_);
if (lean_obj_tag(v___x_3694_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3717_; 
v_a_3695_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3717_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3717_ == 0)
{
v___x_3697_ = v___x_3694_;
v_isShared_3698_ = v_isSharedCheck_3717_;
goto v_resetjp_3696_;
}
else
{
lean_inc(v_a_3695_);
lean_dec(v___x_3694_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3717_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
lean_object* v___x_3699_; 
v___x_3699_ = lean_box(0);
if (lean_obj_tag(v_a_3695_) == 1)
{
lean_object* v___x_3701_; 
lean_del_object(v___x_3677_);
lean_dec(v_mvarId_3663_);
lean_inc_ref(v_a_3695_);
if (v_isShared_3692_ == 0)
{
lean_ctor_set(v___x_3691_, 0, v_a_3695_);
v___x_3701_ = v___x_3691_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3715_; 
v_reuseFailAlloc_3715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3715_, 0, v_a_3695_);
v___x_3701_ = v_reuseFailAlloc_3715_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3713_; 
v_isSharedCheck_3713_ = !lean_is_exclusive(v_a_3695_);
if (v_isSharedCheck_3713_ == 0)
{
lean_object* v_unused_3714_; 
v_unused_3714_ = lean_ctor_get(v_a_3695_, 0);
lean_dec(v_unused_3714_);
v___x_3703_ = v_a_3695_;
v_isShared_3704_ = v_isSharedCheck_3713_;
goto v_resetjp_3702_;
}
else
{
lean_dec(v_a_3695_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3713_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3705_; lean_object* v___x_3707_; 
v___x_3705_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3705_, 0, v___x_3701_);
lean_ctor_set(v___x_3705_, 1, v___x_3699_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set(v___x_3703_, 0, v___x_3705_);
v___x_3707_ = v___x_3703_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3705_);
v___x_3707_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
lean_object* v___x_3708_; lean_object* v___x_3710_; 
v___x_3708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3707_);
lean_ctor_set(v___x_3708_, 1, v_snd_3675_);
if (v_isShared_3698_ == 0)
{
lean_ctor_set(v___x_3697_, 0, v___x_3708_);
v___x_3710_ = v___x_3697_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v___x_3708_);
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
else
{
lean_object* v___x_3716_; 
lean_del_object(v___x_3697_);
lean_dec(v_a_3695_);
lean_del_object(v___x_3691_);
lean_dec(v_snd_3675_);
v___x_3716_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0);
v_a_3681_ = v___x_3716_;
goto v___jp_3680_;
}
}
}
else
{
lean_object* v_a_3718_; lean_object* v___x_3720_; uint8_t v_isShared_3721_; uint8_t v_isSharedCheck_3725_; 
lean_del_object(v___x_3691_);
lean_del_object(v___x_3677_);
lean_dec(v_snd_3675_);
lean_dec(v_mvarId_3663_);
v_a_3718_ = lean_ctor_get(v___x_3694_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3694_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3720_ = v___x_3694_;
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
else
{
lean_inc(v_a_3718_);
lean_dec(v___x_3694_);
v___x_3720_ = lean_box(0);
v_isShared_3721_ = v_isSharedCheck_3725_;
goto v_resetjp_3719_;
}
v_resetjp_3719_:
{
lean_object* v___x_3723_; 
if (v_isShared_3721_ == 0)
{
v___x_3723_ = v___x_3720_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v_a_3718_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
}
v___jp_3680_:
{
lean_object* v___x_3683_; 
if (v_isShared_3678_ == 0)
{
lean_ctor_set(v___x_3677_, 1, v_a_3681_);
lean_ctor_set(v___x_3677_, 0, v___x_3679_);
v___x_3683_ = v___x_3677_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3679_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v_a_3681_);
v___x_3683_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
size_t v___x_3684_; size_t v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = ((size_t)1ULL);
v___x_3685_ = lean_usize_add(v_i_3666_, v___x_3684_);
v___x_3686_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3663_, v_as_3664_, v_sz_3665_, v___x_3685_, v___x_3683_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_);
return v___x_3686_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object* v_mvarId_3729_, lean_object* v_as_3730_, lean_object* v_sz_3731_, lean_object* v_i_3732_, lean_object* v_b_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_){
_start:
{
size_t v_sz_boxed_3739_; size_t v_i_boxed_3740_; lean_object* v_res_3741_; 
v_sz_boxed_3739_ = lean_unbox_usize(v_sz_3731_);
lean_dec(v_sz_3731_);
v_i_boxed_3740_ = lean_unbox_usize(v_i_3732_);
lean_dec(v_i_3732_);
v_res_3741_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_3729_, v_as_3730_, v_sz_boxed_3739_, v_i_boxed_3740_, v_b_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_);
lean_dec(v___y_3737_);
lean_dec_ref(v___y_3736_);
lean_dec(v___y_3735_);
lean_dec_ref(v___y_3734_);
lean_dec_ref(v_as_3730_);
return v_res_3741_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0(void){
_start:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3742_ = lean_box(0);
v___x_3743_ = lean_box(0);
v___x_3744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3743_);
lean_ctor_set(v___x_3744_, 1, v___x_3742_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_mvarId_3745_, lean_object* v_as_3746_, size_t v_sz_3747_, size_t v_i_3748_, lean_object* v_b_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_){
_start:
{
uint8_t v___x_3755_; 
v___x_3755_ = lean_usize_dec_lt(v_i_3748_, v_sz_3747_);
if (v___x_3755_ == 0)
{
lean_object* v___x_3756_; 
lean_dec(v_mvarId_3745_);
v___x_3756_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3756_, 0, v_b_3749_);
return v___x_3756_;
}
else
{
lean_object* v_snd_3757_; lean_object* v___x_3759_; uint8_t v_isShared_3760_; uint8_t v_isSharedCheck_3810_; 
v_snd_3757_ = lean_ctor_get(v_b_3749_, 1);
v_isSharedCheck_3810_ = !lean_is_exclusive(v_b_3749_);
if (v_isSharedCheck_3810_ == 0)
{
lean_object* v_unused_3811_; 
v_unused_3811_ = lean_ctor_get(v_b_3749_, 0);
lean_dec(v_unused_3811_);
v___x_3759_ = v_b_3749_;
v_isShared_3760_ = v_isSharedCheck_3810_;
goto v_resetjp_3758_;
}
else
{
lean_inc(v_snd_3757_);
lean_dec(v_b_3749_);
v___x_3759_ = lean_box(0);
v_isShared_3760_ = v_isSharedCheck_3810_;
goto v_resetjp_3758_;
}
v_resetjp_3758_:
{
lean_object* v___x_3761_; lean_object* v_a_3763_; lean_object* v_a_3770_; 
v___x_3761_ = lean_box(0);
v_a_3770_ = lean_array_uget(v_as_3746_, v_i_3748_);
if (lean_obj_tag(v_a_3770_) == 0)
{
v_a_3763_ = v_snd_3757_;
goto v___jp_3762_;
}
else
{
lean_object* v_val_3771_; lean_object* v___x_3773_; uint8_t v_isShared_3774_; uint8_t v_isSharedCheck_3809_; 
v_val_3771_ = lean_ctor_get(v_a_3770_, 0);
v_isSharedCheck_3809_ = !lean_is_exclusive(v_a_3770_);
if (v_isSharedCheck_3809_ == 0)
{
v___x_3773_ = v_a_3770_;
v_isShared_3774_ = v_isSharedCheck_3809_;
goto v_resetjp_3772_;
}
else
{
lean_inc(v_val_3771_);
lean_dec(v_a_3770_);
v___x_3773_ = lean_box(0);
v_isShared_3774_ = v_isSharedCheck_3809_;
goto v_resetjp_3772_;
}
v_resetjp_3772_:
{
lean_object* v___x_3775_; lean_object* v___x_3776_; 
v___x_3775_ = l_Lean_LocalDecl_fvarId(v_val_3771_);
lean_dec(v_val_3771_);
lean_inc(v_mvarId_3745_);
v___x_3776_ = l_Lean_Meta_subst_x3f(v_mvarId_3745_, v___x_3775_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_);
if (lean_obj_tag(v___x_3776_) == 0)
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3800_; 
v_a_3777_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3779_ = v___x_3776_;
v_isShared_3780_ = v_isSharedCheck_3800_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3776_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3800_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3781_; 
v___x_3781_ = lean_box(0);
if (lean_obj_tag(v_a_3777_) == 1)
{
lean_object* v___x_3783_; 
lean_del_object(v___x_3759_);
lean_dec(v_mvarId_3745_);
lean_inc_ref(v_a_3777_);
if (v_isShared_3774_ == 0)
{
lean_ctor_set(v___x_3773_, 0, v_a_3777_);
v___x_3783_ = v___x_3773_;
goto v_reusejp_3782_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v_a_3777_);
v___x_3783_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3782_;
}
v_reusejp_3782_:
{
lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3796_; 
v_isSharedCheck_3796_ = !lean_is_exclusive(v_a_3777_);
if (v_isSharedCheck_3796_ == 0)
{
lean_object* v_unused_3797_; 
v_unused_3797_ = lean_ctor_get(v_a_3777_, 0);
lean_dec(v_unused_3797_);
v___x_3785_ = v_a_3777_;
v_isShared_3786_ = v_isSharedCheck_3796_;
goto v_resetjp_3784_;
}
else
{
lean_dec(v_a_3777_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3796_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3787_; lean_object* v___x_3789_; 
v___x_3787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___x_3783_);
lean_ctor_set(v___x_3787_, 1, v___x_3781_);
if (v_isShared_3786_ == 0)
{
lean_ctor_set_tag(v___x_3785_, 0);
lean_ctor_set(v___x_3785_, 0, v___x_3787_);
v___x_3789_ = v___x_3785_;
goto v_reusejp_3788_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v___x_3787_);
v___x_3789_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3788_;
}
v_reusejp_3788_:
{
lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3793_; 
v___x_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3789_);
v___x_3791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3791_, 0, v___x_3790_);
lean_ctor_set(v___x_3791_, 1, v_snd_3757_);
if (v_isShared_3780_ == 0)
{
lean_ctor_set(v___x_3779_, 0, v___x_3791_);
v___x_3793_ = v___x_3779_;
goto v_reusejp_3792_;
}
else
{
lean_object* v_reuseFailAlloc_3794_; 
v_reuseFailAlloc_3794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3794_, 0, v___x_3791_);
v___x_3793_ = v_reuseFailAlloc_3794_;
goto v_reusejp_3792_;
}
v_reusejp_3792_:
{
return v___x_3793_;
}
}
}
}
}
else
{
lean_object* v___x_3799_; 
lean_del_object(v___x_3779_);
lean_dec(v_a_3777_);
lean_del_object(v___x_3773_);
lean_dec(v_snd_3757_);
v___x_3799_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0);
v_a_3763_ = v___x_3799_;
goto v___jp_3762_;
}
}
}
else
{
lean_object* v_a_3801_; lean_object* v___x_3803_; uint8_t v_isShared_3804_; uint8_t v_isSharedCheck_3808_; 
lean_del_object(v___x_3773_);
lean_del_object(v___x_3759_);
lean_dec(v_snd_3757_);
lean_dec(v_mvarId_3745_);
v_a_3801_ = lean_ctor_get(v___x_3776_, 0);
v_isSharedCheck_3808_ = !lean_is_exclusive(v___x_3776_);
if (v_isSharedCheck_3808_ == 0)
{
v___x_3803_ = v___x_3776_;
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
else
{
lean_inc(v_a_3801_);
lean_dec(v___x_3776_);
v___x_3803_ = lean_box(0);
v_isShared_3804_ = v_isSharedCheck_3808_;
goto v_resetjp_3802_;
}
v_resetjp_3802_:
{
lean_object* v___x_3806_; 
if (v_isShared_3804_ == 0)
{
v___x_3806_ = v___x_3803_;
goto v_reusejp_3805_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v_a_3801_);
v___x_3806_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3805_;
}
v_reusejp_3805_:
{
return v___x_3806_;
}
}
}
}
}
v___jp_3762_:
{
lean_object* v___x_3765_; 
if (v_isShared_3760_ == 0)
{
lean_ctor_set(v___x_3759_, 1, v_a_3763_);
lean_ctor_set(v___x_3759_, 0, v___x_3761_);
v___x_3765_ = v___x_3759_;
goto v_reusejp_3764_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v___x_3761_);
lean_ctor_set(v_reuseFailAlloc_3769_, 1, v_a_3763_);
v___x_3765_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3764_;
}
v_reusejp_3764_:
{
size_t v___x_3766_; size_t v___x_3767_; 
v___x_3766_ = ((size_t)1ULL);
v___x_3767_ = lean_usize_add(v_i_3748_, v___x_3766_);
v_i_3748_ = v___x_3767_;
v_b_3749_ = v___x_3765_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_mvarId_3812_, lean_object* v_as_3813_, lean_object* v_sz_3814_, lean_object* v_i_3815_, lean_object* v_b_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
size_t v_sz_boxed_3822_; size_t v_i_boxed_3823_; lean_object* v_res_3824_; 
v_sz_boxed_3822_ = lean_unbox_usize(v_sz_3814_);
lean_dec(v_sz_3814_);
v_i_boxed_3823_ = lean_unbox_usize(v_i_3815_);
lean_dec(v_i_3815_);
v_res_3824_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3812_, v_as_3813_, v_sz_boxed_3822_, v_i_boxed_3823_, v_b_3816_, v___y_3817_, v___y_3818_, v___y_3819_, v___y_3820_);
lean_dec(v___y_3820_);
lean_dec_ref(v___y_3819_);
lean_dec(v___y_3818_);
lean_dec_ref(v___y_3817_);
lean_dec_ref(v_as_3813_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object* v_mvarId_3825_, lean_object* v_as_3826_, size_t v_sz_3827_, size_t v_i_3828_, lean_object* v_b_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
uint8_t v___x_3835_; 
v___x_3835_ = lean_usize_dec_lt(v_i_3828_, v_sz_3827_);
if (v___x_3835_ == 0)
{
lean_object* v___x_3836_; 
lean_dec(v_mvarId_3825_);
v___x_3836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3836_, 0, v_b_3829_);
return v___x_3836_;
}
else
{
lean_object* v_snd_3837_; lean_object* v___x_3839_; uint8_t v_isShared_3840_; uint8_t v_isSharedCheck_3890_; 
v_snd_3837_ = lean_ctor_get(v_b_3829_, 1);
v_isSharedCheck_3890_ = !lean_is_exclusive(v_b_3829_);
if (v_isSharedCheck_3890_ == 0)
{
lean_object* v_unused_3891_; 
v_unused_3891_ = lean_ctor_get(v_b_3829_, 0);
lean_dec(v_unused_3891_);
v___x_3839_ = v_b_3829_;
v_isShared_3840_ = v_isSharedCheck_3890_;
goto v_resetjp_3838_;
}
else
{
lean_inc(v_snd_3837_);
lean_dec(v_b_3829_);
v___x_3839_ = lean_box(0);
v_isShared_3840_ = v_isSharedCheck_3890_;
goto v_resetjp_3838_;
}
v_resetjp_3838_:
{
lean_object* v___x_3841_; lean_object* v_a_3843_; lean_object* v_a_3850_; 
v___x_3841_ = lean_box(0);
v_a_3850_ = lean_array_uget(v_as_3826_, v_i_3828_);
if (lean_obj_tag(v_a_3850_) == 0)
{
v_a_3843_ = v_snd_3837_;
goto v___jp_3842_;
}
else
{
lean_object* v_val_3851_; lean_object* v___x_3853_; uint8_t v_isShared_3854_; uint8_t v_isSharedCheck_3889_; 
v_val_3851_ = lean_ctor_get(v_a_3850_, 0);
v_isSharedCheck_3889_ = !lean_is_exclusive(v_a_3850_);
if (v_isSharedCheck_3889_ == 0)
{
v___x_3853_ = v_a_3850_;
v_isShared_3854_ = v_isSharedCheck_3889_;
goto v_resetjp_3852_;
}
else
{
lean_inc(v_val_3851_);
lean_dec(v_a_3850_);
v___x_3853_ = lean_box(0);
v_isShared_3854_ = v_isSharedCheck_3889_;
goto v_resetjp_3852_;
}
v_resetjp_3852_:
{
lean_object* v___x_3855_; lean_object* v___x_3856_; 
v___x_3855_ = l_Lean_LocalDecl_fvarId(v_val_3851_);
lean_dec(v_val_3851_);
lean_inc(v_mvarId_3825_);
v___x_3856_ = l_Lean_Meta_subst_x3f(v_mvarId_3825_, v___x_3855_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v_a_3857_; lean_object* v___x_3859_; uint8_t v_isShared_3860_; uint8_t v_isSharedCheck_3880_; 
v_a_3857_ = lean_ctor_get(v___x_3856_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3859_ = v___x_3856_;
v_isShared_3860_ = v_isSharedCheck_3880_;
goto v_resetjp_3858_;
}
else
{
lean_inc(v_a_3857_);
lean_dec(v___x_3856_);
v___x_3859_ = lean_box(0);
v_isShared_3860_ = v_isSharedCheck_3880_;
goto v_resetjp_3858_;
}
v_resetjp_3858_:
{
lean_object* v___x_3861_; 
v___x_3861_ = lean_box(0);
if (lean_obj_tag(v_a_3857_) == 1)
{
lean_object* v___x_3863_; 
lean_del_object(v___x_3839_);
lean_dec(v_mvarId_3825_);
lean_inc_ref(v_a_3857_);
if (v_isShared_3854_ == 0)
{
lean_ctor_set(v___x_3853_, 0, v_a_3857_);
v___x_3863_ = v___x_3853_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3878_; 
v_reuseFailAlloc_3878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3878_, 0, v_a_3857_);
v___x_3863_ = v_reuseFailAlloc_3878_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3876_; 
v_isSharedCheck_3876_ = !lean_is_exclusive(v_a_3857_);
if (v_isSharedCheck_3876_ == 0)
{
lean_object* v_unused_3877_; 
v_unused_3877_ = lean_ctor_get(v_a_3857_, 0);
lean_dec(v_unused_3877_);
v___x_3865_ = v_a_3857_;
v_isShared_3866_ = v_isSharedCheck_3876_;
goto v_resetjp_3864_;
}
else
{
lean_dec(v_a_3857_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3876_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3867_; lean_object* v___x_3869_; 
v___x_3867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3867_, 0, v___x_3863_);
lean_ctor_set(v___x_3867_, 1, v___x_3861_);
if (v_isShared_3866_ == 0)
{
lean_ctor_set_tag(v___x_3865_, 0);
lean_ctor_set(v___x_3865_, 0, v___x_3867_);
v___x_3869_ = v___x_3865_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v___x_3867_);
v___x_3869_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3873_; 
v___x_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3870_, 0, v___x_3869_);
v___x_3871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3871_, 0, v___x_3870_);
lean_ctor_set(v___x_3871_, 1, v_snd_3837_);
if (v_isShared_3860_ == 0)
{
lean_ctor_set(v___x_3859_, 0, v___x_3871_);
v___x_3873_ = v___x_3859_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v___x_3879_; 
lean_del_object(v___x_3859_);
lean_dec(v_a_3857_);
lean_del_object(v___x_3853_);
lean_dec(v_snd_3837_);
v___x_3879_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0);
v_a_3843_ = v___x_3879_;
goto v___jp_3842_;
}
}
}
else
{
lean_object* v_a_3881_; lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3888_; 
lean_del_object(v___x_3853_);
lean_del_object(v___x_3839_);
lean_dec(v_snd_3837_);
lean_dec(v_mvarId_3825_);
v_a_3881_ = lean_ctor_get(v___x_3856_, 0);
v_isSharedCheck_3888_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3883_ = v___x_3856_;
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
else
{
lean_inc(v_a_3881_);
lean_dec(v___x_3856_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3886_; 
if (v_isShared_3884_ == 0)
{
v___x_3886_ = v___x_3883_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v_a_3881_);
v___x_3886_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
return v___x_3886_;
}
}
}
}
}
v___jp_3842_:
{
lean_object* v___x_3845_; 
if (v_isShared_3840_ == 0)
{
lean_ctor_set(v___x_3839_, 1, v_a_3843_);
lean_ctor_set(v___x_3839_, 0, v___x_3841_);
v___x_3845_ = v___x_3839_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3849_; 
v_reuseFailAlloc_3849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3849_, 0, v___x_3841_);
lean_ctor_set(v_reuseFailAlloc_3849_, 1, v_a_3843_);
v___x_3845_ = v_reuseFailAlloc_3849_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
size_t v___x_3846_; size_t v___x_3847_; lean_object* v___x_3848_; 
v___x_3846_ = ((size_t)1ULL);
v___x_3847_ = lean_usize_add(v_i_3828_, v___x_3846_);
v___x_3848_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3825_, v_as_3826_, v_sz_3827_, v___x_3847_, v___x_3845_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
return v___x_3848_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_mvarId_3892_, lean_object* v_as_3893_, lean_object* v_sz_3894_, lean_object* v_i_3895_, lean_object* v_b_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_){
_start:
{
size_t v_sz_boxed_3902_; size_t v_i_boxed_3903_; lean_object* v_res_3904_; 
v_sz_boxed_3902_ = lean_unbox_usize(v_sz_3894_);
lean_dec(v_sz_3894_);
v_i_boxed_3903_ = lean_unbox_usize(v_i_3895_);
lean_dec(v_i_3895_);
v_res_3904_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3892_, v_as_3893_, v_sz_boxed_3902_, v_i_boxed_3903_, v_b_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_);
lean_dec(v___y_3900_);
lean_dec_ref(v___y_3899_);
lean_dec(v___y_3898_);
lean_dec_ref(v___y_3897_);
lean_dec_ref(v_as_3893_);
return v_res_3904_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object* v_init_3905_, lean_object* v_mvarId_3906_, lean_object* v_n_3907_, lean_object* v_b_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_){
_start:
{
if (lean_obj_tag(v_n_3907_) == 0)
{
lean_object* v_cs_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; size_t v_sz_3917_; size_t v___x_3918_; lean_object* v___x_3919_; 
v_cs_3914_ = lean_ctor_get(v_n_3907_, 0);
v___x_3915_ = lean_box(0);
v___x_3916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3916_, 0, v___x_3915_);
lean_ctor_set(v___x_3916_, 1, v_b_3908_);
v_sz_3917_ = lean_array_size(v_cs_3914_);
v___x_3918_ = ((size_t)0ULL);
v___x_3919_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3905_, v_mvarId_3906_, v_cs_3914_, v_sz_3917_, v___x_3918_, v___x_3916_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v_a_3920_; lean_object* v___x_3922_; uint8_t v_isShared_3923_; uint8_t v_isSharedCheck_3934_; 
v_a_3920_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3934_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3934_ == 0)
{
v___x_3922_ = v___x_3919_;
v_isShared_3923_ = v_isSharedCheck_3934_;
goto v_resetjp_3921_;
}
else
{
lean_inc(v_a_3920_);
lean_dec(v___x_3919_);
v___x_3922_ = lean_box(0);
v_isShared_3923_ = v_isSharedCheck_3934_;
goto v_resetjp_3921_;
}
v_resetjp_3921_:
{
lean_object* v_fst_3924_; 
v_fst_3924_ = lean_ctor_get(v_a_3920_, 0);
if (lean_obj_tag(v_fst_3924_) == 0)
{
lean_object* v_snd_3925_; lean_object* v___x_3926_; lean_object* v___x_3928_; 
v_snd_3925_ = lean_ctor_get(v_a_3920_, 1);
lean_inc(v_snd_3925_);
lean_dec(v_a_3920_);
v___x_3926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3926_, 0, v_snd_3925_);
if (v_isShared_3923_ == 0)
{
lean_ctor_set(v___x_3922_, 0, v___x_3926_);
v___x_3928_ = v___x_3922_;
goto v_reusejp_3927_;
}
else
{
lean_object* v_reuseFailAlloc_3929_; 
v_reuseFailAlloc_3929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3929_, 0, v___x_3926_);
v___x_3928_ = v_reuseFailAlloc_3929_;
goto v_reusejp_3927_;
}
v_reusejp_3927_:
{
return v___x_3928_;
}
}
else
{
lean_object* v_val_3930_; lean_object* v___x_3932_; 
lean_inc_ref(v_fst_3924_);
lean_dec(v_a_3920_);
v_val_3930_ = lean_ctor_get(v_fst_3924_, 0);
lean_inc(v_val_3930_);
lean_dec_ref(v_fst_3924_);
if (v_isShared_3923_ == 0)
{
lean_ctor_set(v___x_3922_, 0, v_val_3930_);
v___x_3932_ = v___x_3922_;
goto v_reusejp_3931_;
}
else
{
lean_object* v_reuseFailAlloc_3933_; 
v_reuseFailAlloc_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3933_, 0, v_val_3930_);
v___x_3932_ = v_reuseFailAlloc_3933_;
goto v_reusejp_3931_;
}
v_reusejp_3931_:
{
return v___x_3932_;
}
}
}
}
else
{
lean_object* v_a_3935_; lean_object* v___x_3937_; uint8_t v_isShared_3938_; uint8_t v_isSharedCheck_3942_; 
v_a_3935_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3942_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3942_ == 0)
{
v___x_3937_ = v___x_3919_;
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
else
{
lean_inc(v_a_3935_);
lean_dec(v___x_3919_);
v___x_3937_ = lean_box(0);
v_isShared_3938_ = v_isSharedCheck_3942_;
goto v_resetjp_3936_;
}
v_resetjp_3936_:
{
lean_object* v___x_3940_; 
if (v_isShared_3938_ == 0)
{
v___x_3940_ = v___x_3937_;
goto v_reusejp_3939_;
}
else
{
lean_object* v_reuseFailAlloc_3941_; 
v_reuseFailAlloc_3941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3941_, 0, v_a_3935_);
v___x_3940_ = v_reuseFailAlloc_3941_;
goto v_reusejp_3939_;
}
v_reusejp_3939_:
{
return v___x_3940_;
}
}
}
}
else
{
lean_object* v_vs_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; size_t v_sz_3946_; size_t v___x_3947_; lean_object* v___x_3948_; 
v_vs_3943_ = lean_ctor_get(v_n_3907_, 0);
v___x_3944_ = lean_box(0);
v___x_3945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3944_);
lean_ctor_set(v___x_3945_, 1, v_b_3908_);
v_sz_3946_ = lean_array_size(v_vs_3943_);
v___x_3947_ = ((size_t)0ULL);
v___x_3948_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3906_, v_vs_3943_, v_sz_3946_, v___x_3947_, v___x_3945_, v___y_3909_, v___y_3910_, v___y_3911_, v___y_3912_);
if (lean_obj_tag(v___x_3948_) == 0)
{
lean_object* v_a_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3963_; 
v_a_3949_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3951_ = v___x_3948_;
v_isShared_3952_ = v_isSharedCheck_3963_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_a_3949_);
lean_dec(v___x_3948_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3963_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v_fst_3953_; 
v_fst_3953_ = lean_ctor_get(v_a_3949_, 0);
if (lean_obj_tag(v_fst_3953_) == 0)
{
lean_object* v_snd_3954_; lean_object* v___x_3955_; lean_object* v___x_3957_; 
v_snd_3954_ = lean_ctor_get(v_a_3949_, 1);
lean_inc(v_snd_3954_);
lean_dec(v_a_3949_);
v___x_3955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3955_, 0, v_snd_3954_);
if (v_isShared_3952_ == 0)
{
lean_ctor_set(v___x_3951_, 0, v___x_3955_);
v___x_3957_ = v___x_3951_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v___x_3955_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
else
{
lean_object* v_val_3959_; lean_object* v___x_3961_; 
lean_inc_ref(v_fst_3953_);
lean_dec(v_a_3949_);
v_val_3959_ = lean_ctor_get(v_fst_3953_, 0);
lean_inc(v_val_3959_);
lean_dec_ref(v_fst_3953_);
if (v_isShared_3952_ == 0)
{
lean_ctor_set(v___x_3951_, 0, v_val_3959_);
v___x_3961_ = v___x_3951_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_val_3959_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
return v___x_3961_;
}
}
}
}
else
{
lean_object* v_a_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3971_; 
v_a_3964_ = lean_ctor_get(v___x_3948_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3948_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3966_ = v___x_3948_;
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_a_3964_);
lean_dec(v___x_3948_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3969_; 
if (v_isShared_3967_ == 0)
{
v___x_3969_ = v___x_3966_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v_a_3964_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
return v___x_3969_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object* v_init_3972_, lean_object* v_mvarId_3973_, lean_object* v_as_3974_, size_t v_sz_3975_, size_t v_i_3976_, lean_object* v_b_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_){
_start:
{
uint8_t v___x_3983_; 
v___x_3983_ = lean_usize_dec_lt(v_i_3976_, v_sz_3975_);
if (v___x_3983_ == 0)
{
lean_object* v___x_3984_; 
lean_dec(v_mvarId_3973_);
v___x_3984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3984_, 0, v_b_3977_);
return v___x_3984_;
}
else
{
lean_object* v_snd_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_4019_; 
v_snd_3985_ = lean_ctor_get(v_b_3977_, 1);
v_isSharedCheck_4019_ = !lean_is_exclusive(v_b_3977_);
if (v_isSharedCheck_4019_ == 0)
{
lean_object* v_unused_4020_; 
v_unused_4020_ = lean_ctor_get(v_b_3977_, 0);
lean_dec(v_unused_4020_);
v___x_3987_ = v_b_3977_;
v_isShared_3988_ = v_isSharedCheck_4019_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_snd_3985_);
lean_dec(v_b_3977_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_4019_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v_a_3989_; lean_object* v___x_3990_; 
v_a_3989_ = lean_array_uget_borrowed(v_as_3974_, v_i_3976_);
lean_inc(v_snd_3985_);
lean_inc(v_mvarId_3973_);
v___x_3990_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3972_, v_mvarId_3973_, v_a_3989_, v_snd_3985_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v_a_3991_; lean_object* v___x_3993_; uint8_t v_isShared_3994_; uint8_t v_isSharedCheck_4010_; 
v_a_3991_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4010_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4010_ == 0)
{
v___x_3993_ = v___x_3990_;
v_isShared_3994_ = v_isSharedCheck_4010_;
goto v_resetjp_3992_;
}
else
{
lean_inc(v_a_3991_);
lean_dec(v___x_3990_);
v___x_3993_ = lean_box(0);
v_isShared_3994_ = v_isSharedCheck_4010_;
goto v_resetjp_3992_;
}
v_resetjp_3992_:
{
if (lean_obj_tag(v_a_3991_) == 0)
{
lean_object* v___x_3995_; lean_object* v___x_3997_; 
lean_dec(v_mvarId_3973_);
v___x_3995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3995_, 0, v_a_3991_);
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 0, v___x_3995_);
v___x_3997_ = v___x_3987_;
goto v_reusejp_3996_;
}
else
{
lean_object* v_reuseFailAlloc_4001_; 
v_reuseFailAlloc_4001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4001_, 0, v___x_3995_);
lean_ctor_set(v_reuseFailAlloc_4001_, 1, v_snd_3985_);
v___x_3997_ = v_reuseFailAlloc_4001_;
goto v_reusejp_3996_;
}
v_reusejp_3996_:
{
lean_object* v___x_3999_; 
if (v_isShared_3994_ == 0)
{
lean_ctor_set(v___x_3993_, 0, v___x_3997_);
v___x_3999_ = v___x_3993_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v___x_3997_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
else
{
lean_object* v_a_4002_; lean_object* v___x_4003_; lean_object* v___x_4005_; 
lean_del_object(v___x_3993_);
lean_dec(v_snd_3985_);
v_a_4002_ = lean_ctor_get(v_a_3991_, 0);
lean_inc(v_a_4002_);
lean_dec_ref(v_a_3991_);
v___x_4003_ = lean_box(0);
if (v_isShared_3988_ == 0)
{
lean_ctor_set(v___x_3987_, 1, v_a_4002_);
lean_ctor_set(v___x_3987_, 0, v___x_4003_);
v___x_4005_ = v___x_3987_;
goto v_reusejp_4004_;
}
else
{
lean_object* v_reuseFailAlloc_4009_; 
v_reuseFailAlloc_4009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4009_, 0, v___x_4003_);
lean_ctor_set(v_reuseFailAlloc_4009_, 1, v_a_4002_);
v___x_4005_ = v_reuseFailAlloc_4009_;
goto v_reusejp_4004_;
}
v_reusejp_4004_:
{
size_t v___x_4006_; size_t v___x_4007_; 
v___x_4006_ = ((size_t)1ULL);
v___x_4007_ = lean_usize_add(v_i_3976_, v___x_4006_);
v_i_3976_ = v___x_4007_;
v_b_3977_ = v___x_4005_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4011_; lean_object* v___x_4013_; uint8_t v_isShared_4014_; uint8_t v_isSharedCheck_4018_; 
lean_del_object(v___x_3987_);
lean_dec(v_snd_3985_);
lean_dec(v_mvarId_3973_);
v_a_4011_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4013_ = v___x_3990_;
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
else
{
lean_inc(v_a_4011_);
lean_dec(v___x_3990_);
v___x_4013_ = lean_box(0);
v_isShared_4014_ = v_isSharedCheck_4018_;
goto v_resetjp_4012_;
}
v_resetjp_4012_:
{
lean_object* v___x_4016_; 
if (v_isShared_4014_ == 0)
{
v___x_4016_ = v___x_4013_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_a_4011_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_init_4021_, lean_object* v_mvarId_4022_, lean_object* v_as_4023_, lean_object* v_sz_4024_, lean_object* v_i_4025_, lean_object* v_b_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_){
_start:
{
size_t v_sz_boxed_4032_; size_t v_i_boxed_4033_; lean_object* v_res_4034_; 
v_sz_boxed_4032_ = lean_unbox_usize(v_sz_4024_);
lean_dec(v_sz_4024_);
v_i_boxed_4033_ = lean_unbox_usize(v_i_4025_);
lean_dec(v_i_4025_);
v_res_4034_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_4021_, v_mvarId_4022_, v_as_4023_, v_sz_boxed_4032_, v_i_boxed_4033_, v_b_4026_, v___y_4027_, v___y_4028_, v___y_4029_, v___y_4030_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
lean_dec(v___y_4028_);
lean_dec_ref(v___y_4027_);
lean_dec_ref(v_as_4023_);
lean_dec_ref(v_init_4021_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object* v_init_4035_, lean_object* v_mvarId_4036_, lean_object* v_n_4037_, lean_object* v_b_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_){
_start:
{
lean_object* v_res_4044_; 
v_res_4044_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_4035_, v_mvarId_4036_, v_n_4037_, v_b_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec_ref(v___y_4039_);
lean_dec_ref(v_n_4037_);
lean_dec_ref(v_init_4035_);
return v_res_4044_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object* v_mvarId_4045_, lean_object* v_t_4046_, lean_object* v_init_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_){
_start:
{
lean_object* v_root_4053_; lean_object* v_tail_4054_; lean_object* v___x_4055_; 
v_root_4053_ = lean_ctor_get(v_t_4046_, 0);
v_tail_4054_ = lean_ctor_get(v_t_4046_, 1);
lean_inc(v_mvarId_4045_);
lean_inc_ref(v_init_4047_);
v___x_4055_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_4047_, v_mvarId_4045_, v_root_4053_, v_init_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_);
lean_dec_ref(v_init_4047_);
if (lean_obj_tag(v___x_4055_) == 0)
{
lean_object* v_a_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4092_; 
v_a_4056_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4092_ == 0)
{
v___x_4058_ = v___x_4055_;
v_isShared_4059_ = v_isSharedCheck_4092_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_a_4056_);
lean_dec(v___x_4055_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4092_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
if (lean_obj_tag(v_a_4056_) == 0)
{
lean_object* v_a_4060_; lean_object* v___x_4062_; 
lean_dec(v_mvarId_4045_);
v_a_4060_ = lean_ctor_get(v_a_4056_, 0);
lean_inc(v_a_4060_);
lean_dec_ref(v_a_4056_);
if (v_isShared_4059_ == 0)
{
lean_ctor_set(v___x_4058_, 0, v_a_4060_);
v___x_4062_ = v___x_4058_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v_a_4060_);
v___x_4062_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
return v___x_4062_;
}
}
else
{
lean_object* v_a_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; size_t v_sz_4067_; size_t v___x_4068_; lean_object* v___x_4069_; 
lean_del_object(v___x_4058_);
v_a_4064_ = lean_ctor_get(v_a_4056_, 0);
lean_inc(v_a_4064_);
lean_dec_ref(v_a_4056_);
v___x_4065_ = lean_box(0);
v___x_4066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4066_, 0, v___x_4065_);
lean_ctor_set(v___x_4066_, 1, v_a_4064_);
v_sz_4067_ = lean_array_size(v_tail_4054_);
v___x_4068_ = ((size_t)0ULL);
v___x_4069_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_4045_, v_tail_4054_, v_sz_4067_, v___x_4068_, v___x_4066_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_);
if (lean_obj_tag(v___x_4069_) == 0)
{
lean_object* v_a_4070_; lean_object* v___x_4072_; uint8_t v_isShared_4073_; uint8_t v_isSharedCheck_4083_; 
v_a_4070_ = lean_ctor_get(v___x_4069_, 0);
v_isSharedCheck_4083_ = !lean_is_exclusive(v___x_4069_);
if (v_isSharedCheck_4083_ == 0)
{
v___x_4072_ = v___x_4069_;
v_isShared_4073_ = v_isSharedCheck_4083_;
goto v_resetjp_4071_;
}
else
{
lean_inc(v_a_4070_);
lean_dec(v___x_4069_);
v___x_4072_ = lean_box(0);
v_isShared_4073_ = v_isSharedCheck_4083_;
goto v_resetjp_4071_;
}
v_resetjp_4071_:
{
lean_object* v_fst_4074_; 
v_fst_4074_ = lean_ctor_get(v_a_4070_, 0);
if (lean_obj_tag(v_fst_4074_) == 0)
{
lean_object* v_snd_4075_; lean_object* v___x_4077_; 
v_snd_4075_ = lean_ctor_get(v_a_4070_, 1);
lean_inc(v_snd_4075_);
lean_dec(v_a_4070_);
if (v_isShared_4073_ == 0)
{
lean_ctor_set(v___x_4072_, 0, v_snd_4075_);
v___x_4077_ = v___x_4072_;
goto v_reusejp_4076_;
}
else
{
lean_object* v_reuseFailAlloc_4078_; 
v_reuseFailAlloc_4078_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4078_, 0, v_snd_4075_);
v___x_4077_ = v_reuseFailAlloc_4078_;
goto v_reusejp_4076_;
}
v_reusejp_4076_:
{
return v___x_4077_;
}
}
else
{
lean_object* v_val_4079_; lean_object* v___x_4081_; 
lean_inc_ref(v_fst_4074_);
lean_dec(v_a_4070_);
v_val_4079_ = lean_ctor_get(v_fst_4074_, 0);
lean_inc(v_val_4079_);
lean_dec_ref(v_fst_4074_);
if (v_isShared_4073_ == 0)
{
lean_ctor_set(v___x_4072_, 0, v_val_4079_);
v___x_4081_ = v___x_4072_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v_val_4079_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
}
}
else
{
lean_object* v_a_4084_; lean_object* v___x_4086_; uint8_t v_isShared_4087_; uint8_t v_isSharedCheck_4091_; 
v_a_4084_ = lean_ctor_get(v___x_4069_, 0);
v_isSharedCheck_4091_ = !lean_is_exclusive(v___x_4069_);
if (v_isSharedCheck_4091_ == 0)
{
v___x_4086_ = v___x_4069_;
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
else
{
lean_inc(v_a_4084_);
lean_dec(v___x_4069_);
v___x_4086_ = lean_box(0);
v_isShared_4087_ = v_isSharedCheck_4091_;
goto v_resetjp_4085_;
}
v_resetjp_4085_:
{
lean_object* v___x_4089_; 
if (v_isShared_4087_ == 0)
{
v___x_4089_ = v___x_4086_;
goto v_reusejp_4088_;
}
else
{
lean_object* v_reuseFailAlloc_4090_; 
v_reuseFailAlloc_4090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4090_, 0, v_a_4084_);
v___x_4089_ = v_reuseFailAlloc_4090_;
goto v_reusejp_4088_;
}
v_reusejp_4088_:
{
return v___x_4089_;
}
}
}
}
}
}
else
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4100_; 
lean_dec(v_mvarId_4045_);
v_a_4093_ = lean_ctor_get(v___x_4055_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4055_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4095_ = v___x_4055_;
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4055_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4100_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
lean_object* v___x_4098_; 
if (v_isShared_4096_ == 0)
{
v___x_4098_ = v___x_4095_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_a_4093_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object* v_mvarId_4101_, lean_object* v_t_4102_, lean_object* v_init_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4101_, v_t_4102_, v_init_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec_ref(v_t_4102_);
return v_res_4109_;
}
}
static lean_object* _init_l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; 
v___x_4110_ = lean_box(0);
v___x_4111_ = lean_box(0);
v___x_4112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4111_);
lean_ctor_set(v___x_4112_, 1, v___x_4110_);
return v___x_4112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object* v_mvarId_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_){
_start:
{
lean_object* v_lctx_4119_; lean_object* v_decls_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; 
v_lctx_4119_ = lean_ctor_get(v___y_4114_, 2);
v_decls_4120_ = lean_ctor_get(v_lctx_4119_, 1);
v___x_4121_ = lean_box(0);
v___x_4122_ = lean_obj_once(&l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0, &l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0_once, _init_l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0);
v___x_4123_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4113_, v_decls_4120_, v___x_4122_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_);
if (lean_obj_tag(v___x_4123_) == 0)
{
lean_object* v_a_4124_; lean_object* v___x_4126_; uint8_t v_isShared_4127_; uint8_t v_isSharedCheck_4136_; 
v_a_4124_ = lean_ctor_get(v___x_4123_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4123_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4126_ = v___x_4123_;
v_isShared_4127_ = v_isSharedCheck_4136_;
goto v_resetjp_4125_;
}
else
{
lean_inc(v_a_4124_);
lean_dec(v___x_4123_);
v___x_4126_ = lean_box(0);
v_isShared_4127_ = v_isSharedCheck_4136_;
goto v_resetjp_4125_;
}
v_resetjp_4125_:
{
lean_object* v_fst_4128_; 
v_fst_4128_ = lean_ctor_get(v_a_4124_, 0);
lean_inc(v_fst_4128_);
lean_dec(v_a_4124_);
if (lean_obj_tag(v_fst_4128_) == 0)
{
lean_object* v___x_4130_; 
if (v_isShared_4127_ == 0)
{
lean_ctor_set(v___x_4126_, 0, v___x_4121_);
v___x_4130_ = v___x_4126_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v___x_4121_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
else
{
lean_object* v_val_4132_; lean_object* v___x_4134_; 
v_val_4132_ = lean_ctor_get(v_fst_4128_, 0);
lean_inc(v_val_4132_);
lean_dec_ref(v_fst_4128_);
if (v_isShared_4127_ == 0)
{
lean_ctor_set(v___x_4126_, 0, v_val_4132_);
v___x_4134_ = v___x_4126_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_val_4132_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
else
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
v_a_4137_ = lean_ctor_get(v___x_4123_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4123_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4123_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4123_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object* v_mvarId_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Lean_Meta_substSomeVar_x3f___lam__0(v_mvarId_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
lean_dec(v___y_4149_);
lean_dec_ref(v___y_4148_);
lean_dec(v___y_4147_);
lean_dec_ref(v___y_4146_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object* v_mvarId_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_, lean_object* v_a_4155_, lean_object* v_a_4156_){
_start:
{
lean_object* v___f_4158_; lean_object* v___x_4159_; 
lean_inc(v_mvarId_4152_);
v___f_4158_ = lean_alloc_closure((void*)(l_Lean_Meta_substSomeVar_x3f___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4158_, 0, v_mvarId_4152_);
v___x_4159_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_4152_, v___f_4158_, v_a_4153_, v_a_4154_, v_a_4155_, v_a_4156_);
return v___x_4159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object* v_mvarId_4160_, lean_object* v_a_4161_, lean_object* v_a_4162_, lean_object* v_a_4163_, lean_object* v_a_4164_, lean_object* v_a_4165_){
_start:
{
lean_object* v_res_4166_; 
v_res_4166_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4160_, v_a_4161_, v_a_4162_, v_a_4163_, v_a_4164_);
lean_dec(v_a_4164_);
lean_dec_ref(v_a_4163_);
lean_dec(v_a_4162_);
lean_dec_ref(v_a_4161_);
return v_res_4166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object* v_mvarId_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_){
_start:
{
lean_object* v___x_4173_; 
lean_inc(v_mvarId_4167_);
v___x_4173_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4167_, v_a_4168_, v_a_4169_, v_a_4170_, v_a_4171_);
if (lean_obj_tag(v___x_4173_) == 0)
{
lean_object* v_a_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4183_; 
v_a_4174_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4183_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4183_ == 0)
{
v___x_4176_ = v___x_4173_;
v_isShared_4177_ = v_isSharedCheck_4183_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_a_4174_);
lean_dec(v___x_4173_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4183_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
if (lean_obj_tag(v_a_4174_) == 1)
{
lean_object* v_val_4178_; 
lean_del_object(v___x_4176_);
lean_dec(v_mvarId_4167_);
v_val_4178_ = lean_ctor_get(v_a_4174_, 0);
lean_inc(v_val_4178_);
lean_dec_ref(v_a_4174_);
v_mvarId_4167_ = v_val_4178_;
goto _start;
}
else
{
lean_object* v___x_4181_; 
lean_dec(v_a_4174_);
if (v_isShared_4177_ == 0)
{
lean_ctor_set(v___x_4176_, 0, v_mvarId_4167_);
v___x_4181_ = v___x_4176_;
goto v_reusejp_4180_;
}
else
{
lean_object* v_reuseFailAlloc_4182_; 
v_reuseFailAlloc_4182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4182_, 0, v_mvarId_4167_);
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
lean_dec(v_mvarId_4167_);
v_a_4184_ = lean_ctor_get(v___x_4173_, 0);
v_isSharedCheck_4191_ = !lean_is_exclusive(v___x_4173_);
if (v_isSharedCheck_4191_ == 0)
{
v___x_4186_ = v___x_4173_;
v_isShared_4187_ = v_isSharedCheck_4191_;
goto v_resetjp_4185_;
}
else
{
lean_inc(v_a_4184_);
lean_dec(v___x_4173_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object* v_mvarId_4192_, lean_object* v_a_4193_, lean_object* v_a_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_){
_start:
{
lean_object* v_res_4198_; 
v_res_4198_ = l_Lean_Meta_substVars(v_mvarId_4192_, v_a_4193_, v_a_4194_, v_a_4195_, v_a_4196_);
lean_dec(v_a_4196_);
lean_dec_ref(v_a_4195_);
lean_dec(v_a_4194_);
lean_dec_ref(v_a_4193_);
return v_res_4198_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4199_; 
v___x_4199_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_4199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4200_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4201_ = lean_box(0);
v___x_4202_ = l_Lean_Name_str___override(v___x_4201_, v___x_4200_);
return v___x_4202_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4203_; 
v___x_4203_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_4203_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; 
v___x_4204_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4205_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4206_ = l_Lean_Name_str___override(v___x_4205_, v___x_4204_);
return v___x_4206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; 
v___x_4207_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__20, &l_Lean_Meta_substCore___lam__3___closed__20_once, _init_l_Lean_Meta_substCore___lam__3___closed__20);
v___x_4208_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4209_ = l_Lean_Name_str___override(v___x_4208_, v___x_4207_);
return v___x_4209_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; 
v___x_4210_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__21, &l_Lean_Meta_substCore___lam__3___closed__21_once, _init_l_Lean_Meta_substCore___lam__3___closed__21);
v___x_4211_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4212_ = l_Lean_Name_str___override(v___x_4211_, v___x_4210_);
return v___x_4212_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4213_; 
v___x_4213_ = lean_mk_string_unchecked("Subst", 5, 5);
return v___x_4213_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; 
v___x_4214_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4215_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4216_ = l_Lean_Name_str___override(v___x_4215_, v___x_4214_);
return v___x_4216_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
v___x_4217_ = lean_unsigned_to_nat(0u);
v___x_4218_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4219_ = l_Lean_Name_num___override(v___x_4218_, v___x_4217_);
return v___x_4219_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; 
v___x_4220_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4221_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4222_ = l_Lean_Name_str___override(v___x_4221_, v___x_4220_);
return v___x_4222_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; 
v___x_4223_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__20, &l_Lean_Meta_substCore___lam__3___closed__20_once, _init_l_Lean_Meta_substCore___lam__3___closed__20);
v___x_4224_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4225_ = l_Lean_Name_str___override(v___x_4224_, v___x_4223_);
return v___x_4225_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4226_; 
v___x_4226_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_4226_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4227_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4228_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4229_ = l_Lean_Name_str___override(v___x_4228_, v___x_4227_);
return v___x_4229_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4230_; 
v___x_4230_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_4230_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4231_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4232_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4233_ = l_Lean_Name_str___override(v___x_4232_, v___x_4231_);
return v___x_4233_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; 
v___x_4234_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4235_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4236_ = l_Lean_Name_str___override(v___x_4235_, v___x_4234_);
return v___x_4236_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; 
v___x_4237_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__20, &l_Lean_Meta_substCore___lam__3___closed__20_once, _init_l_Lean_Meta_substCore___lam__3___closed__20);
v___x_4238_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4239_ = l_Lean_Name_str___override(v___x_4238_, v___x_4237_);
return v___x_4239_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; 
v___x_4240_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__21, &l_Lean_Meta_substCore___lam__3___closed__21_once, _init_l_Lean_Meta_substCore___lam__3___closed__21);
v___x_4241_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4242_ = l_Lean_Name_str___override(v___x_4241_, v___x_4240_);
return v___x_4242_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4243_; lean_object* v___x_4244_; lean_object* v___x_4245_; 
v___x_4243_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4244_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4245_ = l_Lean_Name_str___override(v___x_4244_, v___x_4243_);
return v___x_4245_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; 
v___x_4246_ = lean_unsigned_to_nat(2712302007u);
v___x_4247_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4248_ = l_Lean_Name_num___override(v___x_4247_, v___x_4246_);
return v___x_4248_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4249_; 
v___x_4249_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_4249_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4250_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4251_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4252_ = l_Lean_Name_str___override(v___x_4251_, v___x_4250_);
return v___x_4252_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4253_; 
v___x_4253_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_4253_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; 
v___x_4254_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4255_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4256_ = l_Lean_Name_str___override(v___x_4255_, v___x_4254_);
return v___x_4256_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v___x_4257_ = lean_unsigned_to_nat(2u);
v___x_4258_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4259_ = l_Lean_Name_num___override(v___x_4258_, v___x_4257_);
return v___x_4259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4261_; uint8_t v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
v___x_4261_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__22, &l_Lean_Meta_substCore___lam__3___closed__22_once, _init_l_Lean_Meta_substCore___lam__3___closed__22);
v___x_4262_ = 0;
v___x_4263_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_);
v___x_4264_ = l_Lean_registerTraceClass(v___x_4261_, v___x_4262_, v___x_4263_);
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2____boxed(lean_object* v_a_4265_){
_start:
{
lean_object* v_res_4266_; 
v_res_4266_ = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_();
return v_res_4266_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_2712302007____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_MatchUtil(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Subst(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_MatchUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Subst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Subst(builtin);
}
#ifdef __cplusplus
}
#endif
