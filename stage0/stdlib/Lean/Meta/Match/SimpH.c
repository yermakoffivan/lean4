// Lean compiler output
// Module: Lean.Meta.Match.SimpH
// Imports: public import Lean.Meta.Basic import Lean.Meta.Tactic.Contradiction
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
lean_object* l_Lean_Meta_substVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_injections(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_contradictionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MVarId_revert(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_injection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchHEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_heqToEq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_substCore(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_LocalContext_getFVarIds(lean_object*);
lean_object* l_Lean_MVarId_tryClearMany(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst_spec__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__2;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__3;
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_simpH_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_simpH_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_simpH___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_Match_simpH___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst_spec__0(lean_object* v_s_1_, lean_object* v_a_2_, lean_object* v_a_3_){
_start:
{
if (lean_obj_tag(v_a_2_) == 0)
{
lean_object* v___x_4_; 
lean_dec(v_s_1_);
v___x_4_ = lean_array_to_list(v_a_3_);
return v___x_4_;
}
else
{
lean_object* v_head_5_; lean_object* v_tail_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v_head_5_ = lean_ctor_get(v_a_2_, 0);
lean_inc(v_head_5_);
v_tail_6_ = lean_ctor_get(v_a_2_, 1);
lean_inc(v_tail_6_);
lean_dec_ref(v_a_2_);
v___x_7_ = l_Lean_mkFVar(v_head_5_);
lean_inc(v_s_1_);
v___x_8_ = l_Lean_Meta_FVarSubst_apply(v_s_1_, v___x_7_);
lean_dec_ref(v___x_7_);
if (lean_obj_tag(v___x_8_) == 1)
{
lean_object* v_fvarId_9_; lean_object* v___x_10_; 
v_fvarId_9_ = lean_ctor_get(v___x_8_, 0);
lean_inc(v_fvarId_9_);
lean_dec_ref(v___x_8_);
v___x_10_ = lean_array_push(v_a_3_, v_fvarId_9_);
v_a_2_ = v_tail_6_;
v_a_3_ = v___x_10_;
goto _start;
}
else
{
lean_dec_ref(v___x_8_);
v_a_2_ = v_tail_6_;
goto _start;
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_unsigned_to_nat(0u);
v___x_14_ = lean_mk_empty_array_with_capacity(v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst(lean_object* v_s_15_, lean_object* v_fvarIds_16_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_17_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0);
v___x_18_ = l_List_filterMapTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst_spec__0(v_s_15_, v_fvarIds_16_, v___x_17_);
return v___x_18_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__0(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = l_instMonadEIO(lean_box(0));
return v___x_19_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__1(void){
_start:
{
lean_object* v___f_20_; 
v___f_20_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_20_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__2(void){
_start:
{
lean_object* v___f_21_; 
v___f_21_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_21_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__3(void){
_start:
{
lean_object* v___f_22_; 
v___f_22_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_22_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__4(void){
_start:
{
lean_object* v___f_23_; 
v___f_23_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_23_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v_toApplicative_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_95_; 
v___x_31_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__0);
v___x_32_ = l_StateRefT_x27_instMonad___redArg(v___x_31_);
v_toApplicative_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_95_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_95_ == 0)
{
lean_object* v_unused_96_; 
v_unused_96_ = lean_ctor_get(v___x_32_, 1);
lean_dec(v_unused_96_);
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_95_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_toApplicative_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_95_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v_toFunctor_37_; lean_object* v_toSeq_38_; lean_object* v_toSeqLeft_39_; lean_object* v_toSeqRight_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_93_; 
v_toFunctor_37_ = lean_ctor_get(v_toApplicative_33_, 0);
v_toSeq_38_ = lean_ctor_get(v_toApplicative_33_, 2);
v_toSeqLeft_39_ = lean_ctor_get(v_toApplicative_33_, 3);
v_toSeqRight_40_ = lean_ctor_get(v_toApplicative_33_, 4);
v_isSharedCheck_93_ = !lean_is_exclusive(v_toApplicative_33_);
if (v_isSharedCheck_93_ == 0)
{
lean_object* v_unused_94_; 
v_unused_94_ = lean_ctor_get(v_toApplicative_33_, 1);
lean_dec(v_unused_94_);
v___x_42_ = v_toApplicative_33_;
v_isShared_43_ = v_isSharedCheck_93_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_toSeqRight_40_);
lean_inc(v_toSeqLeft_39_);
lean_inc(v_toSeq_38_);
lean_inc(v_toFunctor_37_);
lean_dec(v_toApplicative_33_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_93_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v___f_44_; lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___f_47_; lean_object* v___x_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___x_53_; 
v___f_44_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__1, &l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__1_once, _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__1);
v___f_45_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__2, &l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__2_once, _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__2);
lean_inc_ref(v_toFunctor_37_);
v___f_46_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_46_, 0, v_toFunctor_37_);
v___f_47_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_47_, 0, v_toFunctor_37_);
v___x_48_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_48_, 0, v___f_46_);
lean_ctor_set(v___x_48_, 1, v___f_47_);
v___f_49_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_49_, 0, v_toSeqRight_40_);
v___f_50_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_50_, 0, v_toSeqLeft_39_);
v___f_51_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_51_, 0, v_toSeq_38_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 4, v___f_49_);
lean_ctor_set(v___x_42_, 3, v___f_50_);
lean_ctor_set(v___x_42_, 2, v___f_51_);
lean_ctor_set(v___x_42_, 1, v___f_44_);
lean_ctor_set(v___x_42_, 0, v___x_48_);
v___x_53_ = v___x_42_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_48_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v___f_44_);
lean_ctor_set(v_reuseFailAlloc_92_, 2, v___f_51_);
lean_ctor_set(v_reuseFailAlloc_92_, 3, v___f_50_);
lean_ctor_set(v_reuseFailAlloc_92_, 4, v___f_49_);
v___x_53_ = v_reuseFailAlloc_92_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
lean_object* v___x_55_; 
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 1, v___f_45_);
lean_ctor_set(v___x_35_, 0, v___x_53_);
v___x_55_ = v___x_35_;
goto v_reusejp_54_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_53_);
lean_ctor_set(v_reuseFailAlloc_91_, 1, v___f_45_);
v___x_55_ = v_reuseFailAlloc_91_;
goto v_reusejp_54_;
}
v_reusejp_54_:
{
lean_object* v___x_56_; lean_object* v_toApplicative_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_89_; 
v___x_56_ = l_StateRefT_x27_instMonad___redArg(v___x_55_);
v_toApplicative_57_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_89_ == 0)
{
lean_object* v_unused_90_; 
v_unused_90_ = lean_ctor_get(v___x_56_, 1);
lean_dec(v_unused_90_);
v___x_59_ = v___x_56_;
v_isShared_60_ = v_isSharedCheck_89_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_toApplicative_57_);
lean_dec(v___x_56_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_89_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v_toFunctor_61_; lean_object* v_toSeq_62_; lean_object* v_toSeqLeft_63_; lean_object* v_toSeqRight_64_; lean_object* v___x_66_; uint8_t v_isShared_67_; uint8_t v_isSharedCheck_87_; 
v_toFunctor_61_ = lean_ctor_get(v_toApplicative_57_, 0);
v_toSeq_62_ = lean_ctor_get(v_toApplicative_57_, 2);
v_toSeqLeft_63_ = lean_ctor_get(v_toApplicative_57_, 3);
v_toSeqRight_64_ = lean_ctor_get(v_toApplicative_57_, 4);
v_isSharedCheck_87_ = !lean_is_exclusive(v_toApplicative_57_);
if (v_isSharedCheck_87_ == 0)
{
lean_object* v_unused_88_; 
v_unused_88_ = lean_ctor_get(v_toApplicative_57_, 1);
lean_dec(v_unused_88_);
v___x_66_ = v_toApplicative_57_;
v_isShared_67_ = v_isSharedCheck_87_;
goto v_resetjp_65_;
}
else
{
lean_inc(v_toSeqRight_64_);
lean_inc(v_toSeqLeft_63_);
lean_inc(v_toSeq_62_);
lean_inc(v_toFunctor_61_);
lean_dec(v_toApplicative_57_);
v___x_66_ = lean_box(0);
v_isShared_67_ = v_isSharedCheck_87_;
goto v_resetjp_65_;
}
v_resetjp_65_:
{
lean_object* v___f_68_; lean_object* v___f_69_; lean_object* v___f_70_; lean_object* v___f_71_; lean_object* v___x_72_; lean_object* v___f_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___x_77_; 
v___f_68_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__3, &l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__3_once, _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__3);
v___f_69_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__4, &l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__4_once, _init_l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___closed__4);
lean_inc_ref(v_toFunctor_61_);
v___f_70_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_70_, 0, v_toFunctor_61_);
v___f_71_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_71_, 0, v_toFunctor_61_);
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v___f_70_);
lean_ctor_set(v___x_72_, 1, v___f_71_);
v___f_73_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_73_, 0, v_toSeqRight_64_);
v___f_74_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_74_, 0, v_toSeqLeft_63_);
v___f_75_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_75_, 0, v_toSeq_62_);
if (v_isShared_67_ == 0)
{
lean_ctor_set(v___x_66_, 4, v___f_73_);
lean_ctor_set(v___x_66_, 3, v___f_74_);
lean_ctor_set(v___x_66_, 2, v___f_75_);
lean_ctor_set(v___x_66_, 1, v___f_68_);
lean_ctor_set(v___x_66_, 0, v___x_72_);
v___x_77_ = v___x_66_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_72_);
lean_ctor_set(v_reuseFailAlloc_86_, 1, v___f_68_);
lean_ctor_set(v_reuseFailAlloc_86_, 2, v___f_75_);
lean_ctor_set(v_reuseFailAlloc_86_, 3, v___f_74_);
lean_ctor_set(v_reuseFailAlloc_86_, 4, v___f_73_);
v___x_77_ = v_reuseFailAlloc_86_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
lean_object* v___x_79_; 
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 1, v___f_69_);
lean_ctor_set(v___x_59_, 0, v___x_77_);
v___x_79_ = v___x_59_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v___x_77_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v___f_69_);
v___x_79_ = v_reuseFailAlloc_85_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_2006__overap_83_; lean_object* v___x_84_; 
v___x_80_ = l_StateRefT_x27_instMonad___redArg(v___x_79_);
v___x_81_ = lean_box(0);
v___x_82_ = l_instInhabitedOfMonad___redArg(v___x_80_, v___x_81_);
v___x_2006__overap_83_ = lean_panic_fn_borrowed(v___x_82_, v_msg_24_);
lean_dec(v___x_82_);
lean_inc(v___y_29_);
lean_inc_ref(v___y_28_);
lean_inc(v___y_27_);
lean_inc_ref(v___y_26_);
lean_inc(v___y_25_);
v___x_84_ = lean_apply_6(v___x_2006__overap_83_, v___y_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, lean_box(0));
return v___x_84_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1___boxed(lean_object* v_msg_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1(v_msg_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
lean_dec(v___y_102_);
lean_dec_ref(v___y_101_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2_spec__2(lean_object* v_as_105_, size_t v_i_106_, size_t v_stop_107_, lean_object* v_b_108_){
_start:
{
uint8_t v___x_109_; 
v___x_109_ = lean_usize_dec_eq(v_i_106_, v_stop_107_);
if (v___x_109_ == 0)
{
size_t v___x_110_; size_t v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_110_ = ((size_t)1ULL);
v___x_111_ = lean_usize_sub(v_i_106_, v___x_110_);
v___x_112_ = lean_array_uget_borrowed(v_as_105_, v___x_111_);
lean_inc(v___x_112_);
v___x_113_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
lean_ctor_set(v___x_113_, 1, v_b_108_);
v_i_106_ = v___x_111_;
v_b_108_ = v___x_113_;
goto _start;
}
else
{
return v_b_108_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2_spec__2___boxed(lean_object* v_as_115_, lean_object* v_i_116_, lean_object* v_stop_117_, lean_object* v_b_118_){
_start:
{
size_t v_i_boxed_119_; size_t v_stop_boxed_120_; lean_object* v_res_121_; 
v_i_boxed_119_ = lean_unbox_usize(v_i_116_);
lean_dec(v_i_116_);
v_stop_boxed_120_ = lean_unbox_usize(v_stop_117_);
lean_dec(v_stop_117_);
v_res_121_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2_spec__2(v_as_115_, v_i_boxed_119_, v_stop_boxed_120_, v_b_118_);
lean_dec_ref(v_as_115_);
return v_res_121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2(lean_object* v_l_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_){
_start:
{
if (lean_obj_tag(v_a_124_) == 0)
{
lean_dec_ref(v_a_125_);
lean_inc(v_l_122_);
return v_l_122_;
}
else
{
lean_object* v_head_126_; lean_object* v_tail_127_; uint8_t v___x_128_; 
v_head_126_ = lean_ctor_get(v_a_124_, 0);
lean_inc(v_head_126_);
v_tail_127_ = lean_ctor_get(v_a_124_, 1);
lean_inc(v_tail_127_);
lean_dec_ref(v_a_124_);
v___x_128_ = l_Lean_instBEqFVarId_beq(v_head_126_, v_a_123_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_array_push(v_a_125_, v_head_126_);
v_a_124_ = v_tail_127_;
v_a_125_ = v___x_129_;
goto _start;
}
else
{
lean_object* v___x_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
lean_dec(v_head_126_);
v___x_131_ = lean_array_get_size(v_a_125_);
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = lean_nat_dec_lt(v___x_132_, v___x_131_);
if (v___x_133_ == 0)
{
lean_dec_ref(v_a_125_);
return v_tail_127_;
}
else
{
size_t v___x_134_; size_t v___x_135_; lean_object* v___x_136_; 
v___x_134_ = lean_usize_of_nat(v___x_131_);
v___x_135_ = ((size_t)0ULL);
v___x_136_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2_spec__2(v_a_125_, v___x_134_, v___x_135_, v_tail_127_);
lean_dec_ref(v_a_125_);
return v___x_136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2___boxed(lean_object* v_l_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2(v_l_137_, v_a_138_, v_a_139_, v_a_140_);
lean_dec(v_a_138_);
lean_dec(v_l_137_);
return v_res_141_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__0(lean_object* v_a_142_, lean_object* v_x_143_){
_start:
{
if (lean_obj_tag(v_x_143_) == 0)
{
uint8_t v___x_144_; 
v___x_144_ = 0;
return v___x_144_;
}
else
{
lean_object* v_head_145_; lean_object* v_tail_146_; uint8_t v___x_147_; 
v_head_145_ = lean_ctor_get(v_x_143_, 0);
v_tail_146_ = lean_ctor_get(v_x_143_, 1);
v___x_147_ = l_Lean_instBEqFVarId_beq(v_a_142_, v_head_145_);
if (v___x_147_ == 0)
{
v_x_143_ = v_tail_146_;
goto _start;
}
else
{
return v___x_147_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__0___boxed(lean_object* v_a_149_, lean_object* v_x_150_){
_start:
{
uint8_t v_res_151_; lean_object* v_r_152_; 
v_res_151_ = l_List_elem___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__0(v_a_149_, v_x_150_);
lean_dec(v_x_150_);
lean_dec(v_a_149_);
v_r_152_ = lean_box(v_res_151_);
return v_r_152_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__0(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("Lean.Meta.Match.SimpH", 21, 21);
return v___x_153_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__1(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_mk_string_unchecked("_private.Lean.Meta.Match.SimpH.0.Lean.Meta.Match.SimpH.substRHS", 63, 63);
return v___x_154_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__2(void){
_start:
{
lean_object* v___x_155_; 
v___x_155_ = lean_mk_string_unchecked("assertion violation: ( __do_lift._@.Lean.Meta.Match.SimpH.2411129310._hygCtx._hyg.10.0 ).xs.contains rhs\n  ", 107, 107);
return v___x_155_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__3(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_156_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__2, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__2_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__2);
v___x_157_ = lean_unsigned_to_nat(2u);
v___x_158_ = lean_unsigned_to_nat(46u);
v___x_159_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__1, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__1_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__1);
v___x_160_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__0, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__0_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__0);
v___x_161_ = l_mkPanicMessageWithDecl(v___x_160_, v___x_159_, v___x_158_, v___x_157_, v___x_156_);
return v___x_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS(lean_object* v_eq_162_, lean_object* v_rhs_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v_xs_172_; uint8_t v___x_173_; 
v___x_170_ = lean_st_ref_get(v_a_168_);
lean_dec(v___x_170_);
v___x_171_ = lean_st_ref_get(v_a_164_);
v_xs_172_ = lean_ctor_get(v___x_171_, 1);
lean_inc(v_xs_172_);
lean_dec(v___x_171_);
v___x_173_ = l_List_elem___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__0(v_rhs_163_, v_xs_172_);
lean_dec(v_xs_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; 
lean_dec(v_eq_162_);
v___x_174_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__3, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__3_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___closed__3);
v___x_175_ = l_panic___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__1(v___x_174_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
return v___x_175_;
}
else
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v_mvarId_178_; lean_object* v___x_179_; uint8_t v___x_180_; lean_object* v___x_181_; 
v___x_176_ = lean_st_ref_get(v_a_168_);
lean_dec(v___x_176_);
v___x_177_ = lean_st_ref_get(v_a_164_);
v_mvarId_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_mvarId_178_);
lean_dec(v___x_177_);
v___x_179_ = lean_box(0);
v___x_180_ = 0;
v___x_181_ = l_Lean_Meta_substCore(v_mvarId_178_, v_eq_162_, v___x_173_, v___x_179_, v___x_173_, v___x_180_, v_a_165_, v_a_166_, v_a_167_, v_a_168_);
if (lean_obj_tag(v___x_181_) == 0)
{
lean_object* v_a_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_211_; 
v_a_182_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_211_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_211_ == 0)
{
v___x_184_ = v___x_181_;
v_isShared_185_ = v_isSharedCheck_211_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_a_182_);
lean_dec(v___x_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_211_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v_fst_186_; lean_object* v_snd_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v_xs_190_; lean_object* v_eqs_191_; lean_object* v_eqsNew_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_209_; 
v_fst_186_ = lean_ctor_get(v_a_182_, 0);
lean_inc(v_fst_186_);
v_snd_187_ = lean_ctor_get(v_a_182_, 1);
lean_inc(v_snd_187_);
lean_dec(v_a_182_);
v___x_188_ = lean_st_ref_get(v_a_168_);
lean_dec(v___x_188_);
v___x_189_ = lean_st_ref_take(v_a_164_);
v_xs_190_ = lean_ctor_get(v___x_189_, 1);
v_eqs_191_ = lean_ctor_get(v___x_189_, 2);
v_eqsNew_192_ = lean_ctor_get(v___x_189_, 3);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_209_ == 0)
{
lean_object* v_unused_210_; 
v_unused_210_ = lean_ctor_get(v___x_189_, 0);
lean_dec(v_unused_210_);
v___x_194_ = v___x_189_;
v_isShared_195_ = v_isSharedCheck_209_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_eqsNew_192_);
lean_inc(v_eqs_191_);
lean_inc(v_xs_190_);
lean_dec(v___x_189_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_209_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_202_; 
v___x_196_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst___closed__0);
lean_inc(v_xs_190_);
v___x_197_ = l___private_Init_Data_List_Impl_0__List_eraseTR_go___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__2(v_xs_190_, v_rhs_163_, v_xs_190_, v___x_196_);
lean_dec(v_xs_190_);
lean_inc_n(v_fst_186_, 2);
v___x_198_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst(v_fst_186_, v___x_197_);
v___x_199_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst(v_fst_186_, v_eqs_191_);
v___x_200_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_applySubst(v_fst_186_, v_eqsNew_192_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 3, v___x_200_);
lean_ctor_set(v___x_194_, 2, v___x_199_);
lean_ctor_set(v___x_194_, 1, v___x_198_);
lean_ctor_set(v___x_194_, 0, v_snd_187_);
v___x_202_ = v___x_194_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_snd_187_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v___x_198_);
lean_ctor_set(v_reuseFailAlloc_208_, 2, v___x_199_);
lean_ctor_set(v_reuseFailAlloc_208_, 3, v___x_200_);
v___x_202_ = v_reuseFailAlloc_208_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_203_ = lean_st_ref_set(v_a_164_, v___x_202_);
v___x_204_ = lean_box(0);
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v___x_204_);
v___x_206_ = v___x_184_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v___x_204_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
}
else
{
lean_object* v_a_212_; lean_object* v___x_214_; uint8_t v_isShared_215_; uint8_t v_isSharedCheck_219_; 
v_a_212_ = lean_ctor_get(v___x_181_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v___x_181_);
if (v_isSharedCheck_219_ == 0)
{
v___x_214_ = v___x_181_;
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
else
{
lean_inc(v_a_212_);
lean_dec(v___x_181_);
v___x_214_ = lean_box(0);
v_isShared_215_ = v_isSharedCheck_219_;
goto v_resetjp_213_;
}
v_resetjp_213_:
{
lean_object* v___x_217_; 
if (v_isShared_215_ == 0)
{
v___x_217_ = v___x_214_;
goto v_reusejp_216_;
}
else
{
lean_object* v_reuseFailAlloc_218_; 
v_reuseFailAlloc_218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_218_, 0, v_a_212_);
v___x_217_ = v_reuseFailAlloc_218_;
goto v_reusejp_216_;
}
v_reusejp_216_:
{
return v___x_217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS___boxed(lean_object* v_eq_220_, lean_object* v_rhs_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS(v_eq_220_, v_rhs_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec(v_rhs_221_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___redArg(lean_object* v_a_229_, lean_object* v_a_230_){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v_eqs_234_; uint8_t v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_232_ = lean_st_ref_get(v_a_230_);
lean_dec(v___x_232_);
v___x_233_ = lean_st_ref_get(v_a_229_);
v_eqs_234_ = lean_ctor_get(v___x_233_, 2);
lean_inc(v_eqs_234_);
lean_dec(v___x_233_);
v___x_235_ = l_List_isEmpty___redArg(v_eqs_234_);
lean_dec(v_eqs_234_);
v___x_236_ = lean_box(v___x_235_);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___redArg___boxed(lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___redArg(v_a_238_, v_a_239_);
lean_dec(v_a_239_);
lean_dec(v_a_238_);
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone(lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v___x_248_; 
v___x_248_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___redArg(v_a_242_, v_a_246_);
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___boxed(lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone(v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_);
lean_dec(v_a_253_);
lean_dec_ref(v_a_252_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
lean_dec(v_a_249_);
return v_res_255_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___closed__0(void){
_start:
{
lean_object* v___x_256_; uint8_t v___x_257_; uint8_t v___x_258_; lean_object* v___x_259_; 
v___x_256_ = lean_unsigned_to_nat(16u);
v___x_257_ = 0;
v___x_258_ = 1;
v___x_259_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_259_, 0, v___x_256_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1, v___x_258_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1 + 1, v___x_257_);
lean_ctor_set_uint8(v___x_259_, sizeof(void*)*1 + 2, v___x_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction(lean_object* v_mvarId_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___closed__0, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___closed__0_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___closed__0);
v___x_267_ = l_Lean_MVarId_contradictionCore(v_mvarId_260_, v___x_266_, v_a_261_, v_a_262_, v_a_263_, v_a_264_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction___boxed(lean_object* v_mvarId_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction(v_mvarId_268_, v_a_269_, v_a_270_, v_a_271_, v_a_272_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
lean_dec(v_a_270_);
lean_dec_ref(v_a_269_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction_spec__0(lean_object* v_x_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
lean_object* v___x_281_; 
v___x_281_ = l_Lean_Meta_saveState___redArg(v___y_277_, v___y_279_);
if (lean_obj_tag(v___x_281_) == 0)
{
lean_object* v_a_282_; lean_object* v___y_284_; lean_object* v___y_285_; uint8_t v___y_286_; lean_object* v___y_305_; lean_object* v_a_306_; lean_object* v___x_309_; 
v_a_282_ = lean_ctor_get(v___x_281_, 0);
lean_inc(v_a_282_);
lean_dec_ref(v___x_281_);
lean_inc(v___y_279_);
lean_inc_ref(v___y_278_);
lean_inc(v___y_277_);
lean_inc_ref(v___y_276_);
v___x_309_ = lean_apply_5(v_x_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, lean_box(0));
if (lean_obj_tag(v___x_309_) == 0)
{
lean_object* v_a_310_; uint8_t v___x_311_; 
v_a_310_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_a_310_);
v___x_311_ = lean_unbox(v_a_310_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; 
lean_dec_ref(v___x_309_);
v___x_312_ = l_Lean_Meta_SavedState_restore___redArg(v_a_282_, v___y_277_, v___y_279_);
if (lean_obj_tag(v___x_312_) == 0)
{
lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_319_; 
lean_dec(v_a_282_);
v_isSharedCheck_319_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_319_ == 0)
{
lean_object* v_unused_320_; 
v_unused_320_ = lean_ctor_get(v___x_312_, 0);
lean_dec(v_unused_320_);
v___x_314_ = v___x_312_;
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
else
{
lean_dec(v___x_312_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_319_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 0, v_a_310_);
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v_a_310_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_dec(v_a_310_);
v_a_321_ = lean_ctor_get(v___x_312_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___x_312_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___x_312_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___x_312_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
lean_inc(v_a_321_);
if (v_isShared_324_ == 0)
{
v___x_326_ = v___x_323_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v_a_321_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
v___y_305_ = v___x_326_;
v_a_306_ = v_a_321_;
goto v___jp_304_;
}
}
}
}
else
{
lean_dec(v_a_310_);
lean_dec(v_a_282_);
return v___x_309_;
}
}
else
{
lean_object* v_a_329_; 
v_a_329_ = lean_ctor_get(v___x_309_, 0);
lean_inc(v_a_329_);
v___y_305_ = v___x_309_;
v_a_306_ = v_a_329_;
goto v___jp_304_;
}
v___jp_283_:
{
if (v___y_286_ == 0)
{
lean_object* v___x_287_; 
lean_dec_ref(v___y_285_);
v___x_287_ = l_Lean_Meta_SavedState_restore___redArg(v_a_282_, v___y_277_, v___y_279_);
lean_dec(v_a_282_);
if (lean_obj_tag(v___x_287_) == 0)
{
lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_294_; 
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_294_ == 0)
{
lean_object* v_unused_295_; 
v_unused_295_ = lean_ctor_get(v___x_287_, 0);
lean_dec(v_unused_295_);
v___x_289_ = v___x_287_;
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
else
{
lean_dec(v___x_287_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_294_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_292_; 
if (v_isShared_290_ == 0)
{
lean_ctor_set_tag(v___x_289_, 1);
lean_ctor_set(v___x_289_, 0, v___y_284_);
v___x_292_ = v___x_289_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___y_284_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
}
else
{
lean_object* v_a_296_; lean_object* v___x_298_; uint8_t v_isShared_299_; uint8_t v_isSharedCheck_303_; 
lean_dec_ref(v___y_284_);
v_a_296_ = lean_ctor_get(v___x_287_, 0);
v_isSharedCheck_303_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_303_ == 0)
{
v___x_298_ = v___x_287_;
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
else
{
lean_inc(v_a_296_);
lean_dec(v___x_287_);
v___x_298_ = lean_box(0);
v_isShared_299_ = v_isSharedCheck_303_;
goto v_resetjp_297_;
}
v_resetjp_297_:
{
lean_object* v___x_301_; 
if (v_isShared_299_ == 0)
{
v___x_301_ = v___x_298_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_302_; 
v_reuseFailAlloc_302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_302_, 0, v_a_296_);
v___x_301_ = v_reuseFailAlloc_302_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
return v___x_301_;
}
}
}
}
else
{
lean_dec_ref(v___y_284_);
lean_dec(v_a_282_);
return v___y_285_;
}
}
v___jp_304_:
{
uint8_t v___x_307_; 
v___x_307_ = l_Lean_Exception_isInterrupt(v_a_306_);
if (v___x_307_ == 0)
{
uint8_t v___x_308_; 
lean_inc_ref(v_a_306_);
v___x_308_ = l_Lean_Exception_isRuntime(v_a_306_);
v___y_284_ = v_a_306_;
v___y_285_ = v___y_305_;
v___y_286_ = v___x_308_;
goto v___jp_283_;
}
else
{
v___y_284_ = v_a_306_;
v___y_285_ = v___y_305_;
v___y_286_ = v___x_307_;
goto v___jp_283_;
}
}
}
else
{
lean_object* v_a_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_337_; 
lean_dec_ref(v_x_275_);
v_a_330_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_337_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_337_ == 0)
{
v___x_332_ = v___x_281_;
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_a_330_);
lean_dec(v___x_281_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_337_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_335_; 
if (v_isShared_333_ == 0)
{
v___x_335_ = v___x_332_;
goto v_reusejp_334_;
}
else
{
lean_object* v_reuseFailAlloc_336_; 
v_reuseFailAlloc_336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_336_, 0, v_a_330_);
v___x_335_ = v_reuseFailAlloc_336_;
goto v_reusejp_334_;
}
v_reusejp_334_:
{
return v___x_335_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhen___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction_spec__0___boxed(lean_object* v_x_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction_spec__0(v_x_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___lam__0(lean_object* v_mvarId_345_, lean_object* v_forbidden_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l_Lean_Meta_substVars(v_mvarId_345_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v_a_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; 
v_a_353_ = lean_ctor_get(v___x_352_, 0);
lean_inc_n(v_a_353_, 2);
lean_dec_ref(v___x_352_);
v___x_354_ = lean_box(0);
v___x_355_ = lean_unsigned_to_nat(5u);
v___x_356_ = l_Lean_Meta_injections(v_a_353_, v___x_354_, v___x_355_, v_forbidden_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_356_) == 0)
{
lean_object* v_a_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_371_; 
v_a_357_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_371_ == 0)
{
v___x_359_ = v___x_356_;
v_isShared_360_ = v_isSharedCheck_371_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_a_357_);
lean_dec(v___x_356_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_371_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
if (lean_obj_tag(v_a_357_) == 0)
{
uint8_t v___x_361_; lean_object* v___x_362_; lean_object* v___x_364_; 
lean_dec(v_a_353_);
v___x_361_ = 1;
v___x_362_ = lean_box(v___x_361_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 0, v___x_362_);
v___x_364_ = v___x_359_;
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
lean_object* v_mvarId_366_; lean_object* v_forbidden_367_; uint8_t v___x_368_; 
lean_del_object(v___x_359_);
v_mvarId_366_ = lean_ctor_get(v_a_357_, 0);
lean_inc(v_mvarId_366_);
v_forbidden_367_ = lean_ctor_get(v_a_357_, 2);
lean_inc(v_forbidden_367_);
lean_dec_ref(v_a_357_);
v___x_368_ = l_Lean_instBEqMVarId_beq(v_mvarId_366_, v_a_353_);
if (v___x_368_ == 0)
{
lean_object* v___x_369_; 
lean_dec(v_a_353_);
v___x_369_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction(v_mvarId_366_, v_forbidden_367_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
return v___x_369_;
}
else
{
lean_object* v___x_370_; 
lean_dec(v_forbidden_367_);
lean_dec(v_mvarId_366_);
v___x_370_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_contradiction(v_a_353_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
return v___x_370_;
}
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec(v_a_353_);
v_a_372_ = lean_ctor_get(v___x_356_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_356_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_356_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_356_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
else
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_387_; 
lean_dec(v_forbidden_346_);
v_a_380_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_387_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_387_ == 0)
{
v___x_382_ = v___x_352_;
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v___x_352_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_387_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
if (v_isShared_383_ == 0)
{
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_386_; 
v_reuseFailAlloc_386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_386_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_386_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
return v___x_385_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___lam__0___boxed(lean_object* v_mvarId_388_, lean_object* v_forbidden_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___lam__0(v_mvarId_388_, v_forbidden_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction(lean_object* v_mvarId_396_, lean_object* v_forbidden_397_, lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_){
_start:
{
lean_object* v___f_403_; lean_object* v___x_404_; 
v___f_403_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___lam__0___boxed), 7, 2);
lean_closure_set(v___f_403_, 0, v_mvarId_396_);
lean_closure_set(v___f_403_, 1, v_forbidden_397_);
v___x_404_ = l_Lean_commitWhen___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction_spec__0(v___f_403_, v_a_398_, v_a_399_, v_a_400_, v_a_401_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction___boxed(lean_object* v_mvarId_405_, lean_object* v_forbidden_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_){
_start:
{
lean_object* v_res_412_; 
v_res_412_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction(v_mvarId_405_, v_forbidden_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
return v_res_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___lam__0(lean_object* v_x_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___x_420_; 
lean_inc(v___y_414_);
v___x_420_ = lean_apply_6(v_x_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, lean_box(0));
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___lam__0___boxed(lean_object* v_x_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___lam__0(v_x_421_, v___y_422_, v___y_423_, v___y_424_, v___y_425_, v___y_426_);
lean_dec(v___y_422_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg(lean_object* v_mvarId_429_, lean_object* v_x_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_){
_start:
{
lean_object* v___f_437_; lean_object* v___x_438_; 
lean_inc(v___y_431_);
v___f_437_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___lam__0___boxed), 7, 2);
lean_closure_set(v___f_437_, 0, v_x_430_);
lean_closure_set(v___f_437_, 1, v___y_431_);
v___x_438_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_429_, v___f_437_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
if (lean_obj_tag(v___x_438_) == 0)
{
return v___x_438_;
}
else
{
lean_object* v_a_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_446_; 
v_a_439_ = lean_ctor_get(v___x_438_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_438_);
if (v_isSharedCheck_446_ == 0)
{
v___x_441_ = v___x_438_;
v_isShared_442_ = v_isSharedCheck_446_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_a_439_);
lean_dec(v___x_438_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg___boxed(lean_object* v_mvarId_447_, lean_object* v_x_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_){
_start:
{
lean_object* v_res_455_; 
v_res_455_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg(v_mvarId_447_, v_x_448_, v___y_449_, v___y_450_, v___y_451_, v___y_452_, v___y_453_);
lean_dec(v___y_453_);
lean_dec_ref(v___y_452_);
lean_dec(v___y_451_);
lean_dec_ref(v___y_450_);
lean_dec(v___y_449_);
return v_res_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0(lean_object* v_00_u03b1_456_, lean_object* v_mvarId_457_, lean_object* v_x_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg(v_mvarId_457_, v_x_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___boxed(lean_object* v_00_u03b1_466_, lean_object* v_mvarId_467_, lean_object* v_x_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v_res_475_; 
v_res_475_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0(v_00_u03b1_466_, v_mvarId_467_, v_x_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
lean_dec(v___y_473_);
lean_dec_ref(v___y_472_);
lean_dec(v___y_471_);
lean_dec_ref(v___y_470_);
lean_dec(v___y_469_);
return v_res_475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__0(lean_object* v_____r_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
uint8_t v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_483_ = 1;
v___x_484_ = lean_box(v___x_483_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__0___boxed(lean_object* v_____r_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__0(v_____r_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__1(lean_object* v_eqs_494_, lean_object* v___f_495_, lean_object* v_mvarId_496_, lean_object* v_xs_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
if (lean_obj_tag(v_eqs_494_) == 1)
{
lean_object* v_head_504_; lean_object* v_tail_505_; lean_object* v___x_507_; uint8_t v_isShared_508_; uint8_t v_isSharedCheck_749_; 
v_head_504_ = lean_ctor_get(v_eqs_494_, 0);
v_tail_505_ = lean_ctor_get(v_eqs_494_, 1);
v_isSharedCheck_749_ = !lean_is_exclusive(v_eqs_494_);
if (v_isSharedCheck_749_ == 0)
{
v___x_507_ = v_eqs_494_;
v_isShared_508_ = v_isSharedCheck_749_;
goto v_resetjp_506_;
}
else
{
lean_inc(v_tail_505_);
lean_inc(v_head_504_);
lean_dec(v_eqs_494_);
v___x_507_ = lean_box(0);
v_isShared_508_ = v_isSharedCheck_749_;
goto v_resetjp_506_;
}
v_resetjp_506_:
{
lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v___y_515_; uint8_t v___y_516_; lean_object* v___y_538_; lean_object* v___y_539_; lean_object* v___y_540_; lean_object* v___y_541_; lean_object* v___y_542_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v_mvarId_580_; lean_object* v_xs_581_; lean_object* v_eqsNew_582_; lean_object* v___x_584_; uint8_t v_isShared_585_; uint8_t v_isSharedCheck_747_; 
v___x_578_ = lean_st_ref_get(v___y_502_);
lean_dec(v___x_578_);
v___x_579_ = lean_st_ref_take(v___y_498_);
v_mvarId_580_ = lean_ctor_get(v___x_579_, 0);
v_xs_581_ = lean_ctor_get(v___x_579_, 1);
v_eqsNew_582_ = lean_ctor_get(v___x_579_, 3);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_747_ == 0)
{
lean_object* v_unused_748_; 
v_unused_748_ = lean_ctor_get(v___x_579_, 2);
lean_dec(v_unused_748_);
v___x_584_ = v___x_579_;
v_isShared_585_ = v_isSharedCheck_747_;
goto v_resetjp_583_;
}
else
{
lean_inc(v_eqsNew_582_);
lean_inc(v_xs_581_);
lean_inc(v_mvarId_580_);
lean_dec(v___x_579_);
v___x_584_ = lean_box(0);
v_isShared_585_ = v_isSharedCheck_747_;
goto v_resetjp_583_;
}
v___jp_509_:
{
if (v___y_516_ == 0)
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v_mvarId_519_; lean_object* v_xs_520_; lean_object* v_eqs_521_; lean_object* v_eqsNew_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_535_; 
lean_dec_ref(v___y_512_);
v___x_517_ = lean_st_ref_get(v___y_510_);
lean_dec(v___x_517_);
v___x_518_ = lean_st_ref_take(v___y_515_);
v_mvarId_519_ = lean_ctor_get(v___x_518_, 0);
v_xs_520_ = lean_ctor_get(v___x_518_, 1);
v_eqs_521_ = lean_ctor_get(v___x_518_, 2);
v_eqsNew_522_ = lean_ctor_get(v___x_518_, 3);
v_isSharedCheck_535_ = !lean_is_exclusive(v___x_518_);
if (v_isSharedCheck_535_ == 0)
{
v___x_524_ = v___x_518_;
v_isShared_525_ = v_isSharedCheck_535_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_eqsNew_522_);
lean_inc(v_eqs_521_);
lean_inc(v_xs_520_);
lean_inc(v_mvarId_519_);
lean_dec(v___x_518_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_535_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_508_ == 0)
{
lean_ctor_set(v___x_507_, 1, v_eqsNew_522_);
v___x_527_ = v___x_507_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v_head_504_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v_eqsNew_522_);
v___x_527_ = v_reuseFailAlloc_534_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_529_; 
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 3, v___x_527_);
v___x_529_ = v___x_524_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_mvarId_519_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v_xs_520_);
lean_ctor_set(v_reuseFailAlloc_533_, 2, v_eqs_521_);
lean_ctor_set(v_reuseFailAlloc_533_, 3, v___x_527_);
v___x_529_ = v_reuseFailAlloc_533_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = lean_st_ref_set(v___y_515_, v___x_529_);
v___x_531_ = lean_box(0);
lean_inc(v___y_510_);
lean_inc_ref(v___y_511_);
lean_inc(v___y_513_);
lean_inc_ref(v___y_514_);
lean_inc(v___y_515_);
v___x_532_ = lean_apply_7(v___f_495_, v___x_531_, v___y_515_, v___y_514_, v___y_513_, v___y_511_, v___y_510_, lean_box(0));
return v___x_532_;
}
}
}
}
else
{
lean_object* v___x_536_; 
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec_ref(v___f_495_);
v___x_536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_536_, 0, v___y_512_);
return v___x_536_;
}
}
v___jp_537_:
{
lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_543_ = lean_box(0);
lean_inc(v_head_504_);
v___x_544_ = l_Lean_Meta_injection(v_mvarId_496_, v_head_504_, v___x_543_, v___y_539_, v___y_540_, v___y_541_, v___y_542_);
if (lean_obj_tag(v___x_544_) == 0)
{
lean_object* v_a_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_574_; 
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
v_a_545_ = lean_ctor_get(v___x_544_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_544_);
if (v_isSharedCheck_574_ == 0)
{
v___x_547_ = v___x_544_;
v_isShared_548_ = v_isSharedCheck_574_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_a_545_);
lean_dec(v___x_544_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_574_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
if (lean_obj_tag(v_a_545_) == 0)
{
uint8_t v___x_549_; lean_object* v___x_550_; lean_object* v___x_552_; 
lean_dec_ref(v___f_495_);
v___x_549_ = 0;
v___x_550_ = lean_box(v___x_549_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 0, v___x_550_);
v___x_552_ = v___x_547_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v___x_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
else
{
lean_object* v_mvarId_554_; lean_object* v_newEqs_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v_xs_558_; lean_object* v_eqs_559_; lean_object* v_eqsNew_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_572_; 
lean_del_object(v___x_547_);
v_mvarId_554_ = lean_ctor_get(v_a_545_, 0);
lean_inc(v_mvarId_554_);
v_newEqs_555_ = lean_ctor_get(v_a_545_, 1);
lean_inc_ref(v_newEqs_555_);
lean_dec_ref(v_a_545_);
v___x_556_ = lean_st_ref_get(v___y_542_);
lean_dec(v___x_556_);
v___x_557_ = lean_st_ref_take(v___y_538_);
v_xs_558_ = lean_ctor_get(v___x_557_, 1);
v_eqs_559_ = lean_ctor_get(v___x_557_, 2);
v_eqsNew_560_ = lean_ctor_get(v___x_557_, 3);
v_isSharedCheck_572_ = !lean_is_exclusive(v___x_557_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v___x_557_, 0);
lean_dec(v_unused_573_);
v___x_562_ = v___x_557_;
v_isShared_563_ = v_isSharedCheck_572_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_eqsNew_560_);
lean_inc(v_eqs_559_);
lean_inc(v_xs_558_);
lean_dec(v___x_557_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_572_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_564_ = lean_array_to_list(v_newEqs_555_);
v___x_565_ = l_List_appendTR___redArg(v___x_564_, v_eqs_559_);
if (v_isShared_563_ == 0)
{
lean_ctor_set(v___x_562_, 2, v___x_565_);
lean_ctor_set(v___x_562_, 0, v_mvarId_554_);
v___x_567_ = v___x_562_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_mvarId_554_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_xs_558_);
lean_ctor_set(v_reuseFailAlloc_571_, 2, v___x_565_);
lean_ctor_set(v_reuseFailAlloc_571_, 3, v_eqsNew_560_);
v___x_567_ = v_reuseFailAlloc_571_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_568_ = lean_st_ref_set(v___y_538_, v___x_567_);
v___x_569_ = lean_box(0);
lean_inc(v___y_542_);
lean_inc_ref(v___y_541_);
lean_inc(v___y_540_);
lean_inc_ref(v___y_539_);
lean_inc(v___y_538_);
v___x_570_ = lean_apply_7(v___f_495_, v___x_569_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, lean_box(0));
return v___x_570_;
}
}
}
}
}
else
{
lean_object* v_a_575_; uint8_t v___x_576_; 
v_a_575_ = lean_ctor_get(v___x_544_, 0);
lean_inc(v_a_575_);
lean_dec_ref(v___x_544_);
v___x_576_ = l_Lean_Exception_isInterrupt(v_a_575_);
if (v___x_576_ == 0)
{
uint8_t v___x_577_; 
lean_inc(v_a_575_);
v___x_577_ = l_Lean_Exception_isRuntime(v_a_575_);
v___y_510_ = v___y_542_;
v___y_511_ = v___y_541_;
v___y_512_ = v_a_575_;
v___y_513_ = v___y_540_;
v___y_514_ = v___y_539_;
v___y_515_ = v___y_538_;
v___y_516_ = v___x_577_;
goto v___jp_509_;
}
else
{
v___y_510_ = v___y_542_;
v___y_511_ = v___y_541_;
v___y_512_ = v_a_575_;
v___y_513_ = v___y_540_;
v___y_514_ = v___y_539_;
v___y_515_ = v___y_538_;
v___y_516_ = v___x_576_;
goto v___jp_509_;
}
}
}
v_resetjp_583_:
{
lean_object* v___x_587_; 
if (v_isShared_585_ == 0)
{
lean_ctor_set(v___x_584_, 2, v_tail_505_);
v___x_587_ = v___x_584_;
goto v_reusejp_586_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_mvarId_580_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_xs_581_);
lean_ctor_set(v_reuseFailAlloc_746_, 2, v_tail_505_);
lean_ctor_set(v_reuseFailAlloc_746_, 3, v_eqsNew_582_);
v___x_587_ = v_reuseFailAlloc_746_;
goto v_reusejp_586_;
}
v_reusejp_586_:
{
lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_588_ = lean_st_ref_set(v___y_498_, v___x_587_);
lean_inc(v_head_504_);
v___x_589_ = l_Lean_mkFVar(v_head_504_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
v___x_590_ = lean_infer_type(v___x_589_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___x_664_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc_n(v_a_591_, 2);
lean_dec_ref(v___x_590_);
v___x_664_ = l_Lean_Meta_matchEq_x3f(v_a_591_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_object* v_a_665_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref(v___x_664_);
if (lean_obj_tag(v_a_665_) == 1)
{
lean_object* v_val_666_; lean_object* v_snd_667_; lean_object* v_fst_668_; lean_object* v_snd_669_; lean_object* v___x_670_; 
v_val_666_ = lean_ctor_get(v_a_665_, 0);
lean_inc(v_val_666_);
lean_dec_ref(v_a_665_);
v_snd_667_ = lean_ctor_get(v_val_666_, 1);
lean_inc(v_snd_667_);
lean_dec(v_val_666_);
v_fst_668_ = lean_ctor_get(v_snd_667_, 0);
lean_inc(v_fst_668_);
v_snd_669_ = lean_ctor_get(v_snd_667_, 1);
lean_inc_n(v_snd_669_, 2);
lean_dec(v_snd_667_);
v___x_670_ = l_Lean_Meta_isExprDefEq(v_fst_668_, v_snd_669_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; uint8_t v___x_672_; uint8_t v___y_674_; uint8_t v___x_694_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
lean_inc(v_a_671_);
lean_dec_ref(v___x_670_);
v___x_672_ = 1;
v___x_694_ = lean_unbox(v_a_671_);
lean_dec(v_a_671_);
if (v___x_694_ == 0)
{
uint8_t v___x_695_; 
v___x_695_ = l_Lean_Expr_isFVar(v_snd_669_);
if (v___x_695_ == 0)
{
v___y_674_ = v___x_695_;
goto v___jp_673_;
}
else
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = l_Lean_Expr_fvarId_x21(v_snd_669_);
v___x_697_ = l_List_elem___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS_spec__0(v___x_696_, v_xs_497_);
lean_dec(v___x_696_);
v___y_674_ = v___x_697_;
goto v___jp_673_;
}
}
else
{
lean_object* v___x_698_; 
lean_dec(v_snd_669_);
lean_dec(v_a_591_);
lean_del_object(v___x_507_);
lean_dec_ref(v___f_495_);
v___x_698_ = l_Lean_MVarId_clear(v_mvarId_496_, v_head_504_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
if (lean_obj_tag(v___x_698_) == 0)
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_721_; 
v_a_699_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_721_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_721_ == 0)
{
v___x_701_ = v___x_698_;
v_isShared_702_ = v_isSharedCheck_721_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_698_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_721_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v_xs_705_; lean_object* v_eqs_706_; lean_object* v_eqsNew_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_719_; 
v___x_703_ = lean_st_ref_get(v___y_502_);
lean_dec(v___x_703_);
v___x_704_ = lean_st_ref_take(v___y_498_);
v_xs_705_ = lean_ctor_get(v___x_704_, 1);
v_eqs_706_ = lean_ctor_get(v___x_704_, 2);
v_eqsNew_707_ = lean_ctor_get(v___x_704_, 3);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_719_ == 0)
{
lean_object* v_unused_720_; 
v_unused_720_ = lean_ctor_get(v___x_704_, 0);
lean_dec(v_unused_720_);
v___x_709_ = v___x_704_;
v_isShared_710_ = v_isSharedCheck_719_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_eqsNew_707_);
lean_inc(v_eqs_706_);
lean_inc(v_xs_705_);
lean_dec(v___x_704_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_719_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v___x_712_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 0, v_a_699_);
v___x_712_ = v___x_709_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_699_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_xs_705_);
lean_ctor_set(v_reuseFailAlloc_718_, 2, v_eqs_706_);
lean_ctor_set(v_reuseFailAlloc_718_, 3, v_eqsNew_707_);
v___x_712_ = v_reuseFailAlloc_718_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_713_ = lean_st_ref_set(v___y_498_, v___x_712_);
v___x_714_ = lean_box(v___x_672_);
if (v_isShared_702_ == 0)
{
lean_ctor_set(v___x_701_, 0, v___x_714_);
v___x_716_ = v___x_701_;
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
}
}
else
{
lean_object* v_a_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_729_; 
v_a_722_ = lean_ctor_get(v___x_698_, 0);
v_isSharedCheck_729_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_729_ == 0)
{
v___x_724_ = v___x_698_;
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_a_722_);
lean_dec(v___x_698_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_729_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v___x_727_; 
if (v_isShared_725_ == 0)
{
v___x_727_ = v___x_724_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_728_; 
v_reuseFailAlloc_728_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_728_, 0, v_a_722_);
v___x_727_ = v_reuseFailAlloc_728_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
return v___x_727_;
}
}
}
}
v___jp_673_:
{
if (v___y_674_ == 0)
{
lean_dec(v_snd_669_);
v___y_593_ = v___y_498_;
v___y_594_ = v___y_499_;
v___y_595_ = v___y_500_;
v___y_596_ = v___y_501_;
v___y_597_ = v___y_502_;
goto v___jp_592_;
}
else
{
lean_object* v___x_675_; lean_object* v___x_676_; 
lean_dec(v_a_591_);
lean_del_object(v___x_507_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
v___x_675_ = l_Lean_Expr_fvarId_x21(v_snd_669_);
lean_dec(v_snd_669_);
v___x_676_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_substRHS(v_head_504_, v___x_675_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_);
lean_dec(v___x_675_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_684_; 
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_684_ == 0)
{
lean_object* v_unused_685_; 
v_unused_685_ = lean_ctor_get(v___x_676_, 0);
lean_dec(v_unused_685_);
v___x_678_ = v___x_676_;
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
else
{
lean_dec(v___x_676_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_684_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_680_; lean_object* v___x_682_; 
v___x_680_ = lean_box(v___x_672_);
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 0, v___x_680_);
v___x_682_ = v___x_678_;
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
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
v_a_686_ = lean_ctor_get(v___x_676_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_676_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_676_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_676_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_691_; 
if (v_isShared_689_ == 0)
{
v___x_691_ = v___x_688_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_686_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
}
}
else
{
lean_dec(v_snd_669_);
lean_dec(v_a_591_);
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
return v___x_670_;
}
}
else
{
lean_dec(v_a_665_);
v___y_593_ = v___y_498_;
v___y_594_ = v___y_499_;
v___y_595_ = v___y_500_;
v___y_596_ = v___y_501_;
v___y_597_ = v___y_502_;
goto v___jp_592_;
}
}
else
{
lean_object* v_a_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_737_; 
lean_dec(v_a_591_);
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
v_a_730_ = lean_ctor_get(v___x_664_, 0);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_664_);
if (v_isSharedCheck_737_ == 0)
{
v___x_732_ = v___x_664_;
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_a_730_);
lean_dec(v___x_664_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_737_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v___x_735_; 
if (v_isShared_733_ == 0)
{
v___x_735_ = v___x_732_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_736_; 
v_reuseFailAlloc_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_736_, 0, v_a_730_);
v___x_735_ = v_reuseFailAlloc_736_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
return v___x_735_;
}
}
}
v___jp_592_:
{
lean_object* v___x_598_; 
v___x_598_ = l_Lean_Meta_matchHEq_x3f(v_a_591_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
if (lean_obj_tag(v___x_598_) == 0)
{
lean_object* v_a_599_; 
v_a_599_ = lean_ctor_get(v___x_598_, 0);
lean_inc(v_a_599_);
lean_dec_ref(v___x_598_);
if (lean_obj_tag(v_a_599_) == 1)
{
uint8_t v___x_600_; lean_object* v___x_601_; 
lean_dec_ref(v_a_599_);
v___x_600_ = 1;
lean_inc(v_head_504_);
lean_inc(v_mvarId_496_);
v___x_601_ = l_Lean_Meta_heqToEq(v_mvarId_496_, v_head_504_, v___x_600_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
if (lean_obj_tag(v___x_601_) == 0)
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_647_; 
v_a_602_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_647_ == 0)
{
v___x_604_ = v___x_601_;
v_isShared_605_ = v_isSharedCheck_647_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_601_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_647_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v_fst_606_; lean_object* v_snd_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_646_; 
v_fst_606_ = lean_ctor_get(v_a_602_, 0);
v_snd_607_ = lean_ctor_get(v_a_602_, 1);
v_isSharedCheck_646_ = !lean_is_exclusive(v_a_602_);
if (v_isSharedCheck_646_ == 0)
{
v___x_609_ = v_a_602_;
v_isShared_610_ = v_isSharedCheck_646_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_snd_607_);
lean_inc(v_fst_606_);
lean_dec(v_a_602_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_646_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
uint8_t v___x_611_; 
v___x_611_ = l_Lean_instBEqMVarId_beq(v_snd_607_, v_mvarId_496_);
if (v___x_611_ == 0)
{
lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v_xs_614_; lean_object* v_eqs_615_; lean_object* v_eqsNew_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_631_; 
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
v___x_612_ = lean_st_ref_get(v___y_597_);
lean_dec(v___x_612_);
v___x_613_ = lean_st_ref_take(v___y_593_);
v_xs_614_ = lean_ctor_get(v___x_613_, 1);
v_eqs_615_ = lean_ctor_get(v___x_613_, 2);
v_eqsNew_616_ = lean_ctor_get(v___x_613_, 3);
v_isSharedCheck_631_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_631_ == 0)
{
lean_object* v_unused_632_; 
v_unused_632_ = lean_ctor_get(v___x_613_, 0);
lean_dec(v_unused_632_);
v___x_618_ = v___x_613_;
v_isShared_619_ = v_isSharedCheck_631_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_eqsNew_616_);
lean_inc(v_eqs_615_);
lean_inc(v_xs_614_);
lean_dec(v___x_613_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_631_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_610_ == 0)
{
lean_ctor_set_tag(v___x_609_, 1);
lean_ctor_set(v___x_609_, 1, v_eqs_615_);
v___x_621_ = v___x_609_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_630_; 
v_reuseFailAlloc_630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_630_, 0, v_fst_606_);
lean_ctor_set(v_reuseFailAlloc_630_, 1, v_eqs_615_);
v___x_621_ = v_reuseFailAlloc_630_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
lean_object* v___x_623_; 
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 2, v___x_621_);
lean_ctor_set(v___x_618_, 0, v_snd_607_);
v___x_623_ = v___x_618_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_snd_607_);
lean_ctor_set(v_reuseFailAlloc_629_, 1, v_xs_614_);
lean_ctor_set(v_reuseFailAlloc_629_, 2, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_629_, 3, v_eqsNew_616_);
v___x_623_ = v_reuseFailAlloc_629_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_627_; 
v___x_624_ = lean_st_ref_set(v___y_593_, v___x_623_);
v___x_625_ = lean_box(v___x_600_);
if (v_isShared_605_ == 0)
{
lean_ctor_set(v___x_604_, 0, v___x_625_);
v___x_627_ = v___x_604_;
goto v_reusejp_626_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v___x_625_);
v___x_627_ = v_reuseFailAlloc_628_;
goto v_reusejp_626_;
}
v_reusejp_626_:
{
return v___x_627_;
}
}
}
}
}
else
{
lean_object* v___x_633_; lean_object* v___x_634_; 
lean_del_object(v___x_609_);
lean_dec(v_snd_607_);
lean_dec(v_fst_606_);
lean_del_object(v___x_604_);
v___x_633_ = lean_box(1);
lean_inc(v_mvarId_496_);
v___x_634_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_trySubstVarsAndContradiction(v_mvarId_496_, v___x_633_, v___y_594_, v___y_595_, v___y_596_, v___y_597_);
if (lean_obj_tag(v___x_634_) == 0)
{
lean_object* v_a_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_645_; 
v_a_635_ = lean_ctor_get(v___x_634_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_634_);
if (v_isSharedCheck_645_ == 0)
{
v___x_637_ = v___x_634_;
v_isShared_638_ = v_isSharedCheck_645_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_a_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_645_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
uint8_t v___x_639_; 
v___x_639_ = lean_unbox(v_a_635_);
lean_dec(v_a_635_);
if (v___x_639_ == 0)
{
lean_del_object(v___x_637_);
v___y_538_ = v___y_593_;
v___y_539_ = v___y_594_;
v___y_540_ = v___y_595_;
v___y_541_ = v___y_596_;
v___y_542_ = v___y_597_;
goto v___jp_537_;
}
else
{
uint8_t v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
v___x_640_ = 0;
v___x_641_ = lean_box(v___x_640_);
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 0, v___x_641_);
v___x_643_ = v___x_637_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
else
{
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
return v___x_634_;
}
}
}
}
}
else
{
lean_object* v_a_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_655_; 
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
v_a_648_ = lean_ctor_get(v___x_601_, 0);
v_isSharedCheck_655_ = !lean_is_exclusive(v___x_601_);
if (v_isSharedCheck_655_ == 0)
{
v___x_650_ = v___x_601_;
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_a_648_);
lean_dec(v___x_601_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_655_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_653_; 
if (v_isShared_651_ == 0)
{
v___x_653_ = v___x_650_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_a_648_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
}
}
else
{
lean_dec(v_a_599_);
v___y_538_ = v___y_593_;
v___y_539_ = v___y_594_;
v___y_540_ = v___y_595_;
v___y_541_ = v___y_596_;
v___y_542_ = v___y_597_;
goto v___jp_537_;
}
}
else
{
lean_object* v_a_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_663_; 
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
v_a_656_ = lean_ctor_get(v___x_598_, 0);
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_598_);
if (v_isSharedCheck_663_ == 0)
{
v___x_658_ = v___x_598_;
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_a_656_);
lean_dec(v___x_598_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_663_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_661_; 
if (v_isShared_659_ == 0)
{
v___x_661_ = v___x_658_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v_a_656_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
}
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_del_object(v___x_507_);
lean_dec(v_head_504_);
lean_dec(v_mvarId_496_);
lean_dec_ref(v___f_495_);
v_a_738_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_590_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_590_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_750_; lean_object* v___x_751_; 
lean_dec(v_mvarId_496_);
lean_dec(v_eqs_494_);
v___x_750_ = lean_box(0);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
lean_inc(v___y_498_);
v___x_751_ = lean_apply_7(v___f_495_, v___x_750_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, lean_box(0));
return v___x_751_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__1___boxed(lean_object* v_eqs_752_, lean_object* v___f_753_, lean_object* v_mvarId_754_, lean_object* v_xs_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__1(v_eqs_752_, v___f_753_, v_mvarId_754_, v_xs_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_);
lean_dec(v___y_760_);
lean_dec_ref(v___y_759_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec(v_xs_755_);
return v_res_762_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___closed__0(void){
_start:
{
lean_object* v___f_763_; 
v___f_763_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__0___boxed), 7, 0);
return v___f_763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq(lean_object* v_a_764_, lean_object* v_a_765_, lean_object* v_a_766_, lean_object* v_a_767_, lean_object* v_a_768_){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v_mvarId_772_; lean_object* v_xs_773_; lean_object* v_eqs_774_; lean_object* v___f_775_; lean_object* v___y_776_; lean_object* v___x_777_; 
v___x_770_ = lean_st_ref_get(v_a_768_);
lean_dec(v___x_770_);
v___x_771_ = lean_st_ref_get(v_a_764_);
v_mvarId_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc_n(v_mvarId_772_, 2);
v_xs_773_ = lean_ctor_get(v___x_771_, 1);
lean_inc(v_xs_773_);
v_eqs_774_ = lean_ctor_get(v___x_771_, 2);
lean_inc(v_eqs_774_);
lean_dec(v___x_771_);
v___f_775_ = lean_obj_once(&l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___closed__0, &l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___closed__0_once, _init_l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___closed__0);
v___y_776_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___lam__1___boxed), 10, 4);
lean_closure_set(v___y_776_, 0, v_eqs_774_);
lean_closure_set(v___y_776_, 1, v___f_775_);
lean_closure_set(v___y_776_, 2, v_mvarId_772_);
lean_closure_set(v___y_776_, 3, v_xs_773_);
v___x_777_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq_spec__0___redArg(v_mvarId_772_, v___y_776_, v_a_764_, v_a_765_, v_a_766_, v_a_767_, v_a_768_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq___boxed(lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq(v_a_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_);
lean_dec(v_a_782_);
lean_dec_ref(v_a_781_);
lean_dec(v_a_780_);
lean_dec_ref(v_a_779_);
lean_dec(v_a_778_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_go(lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_isDone___redArg(v_a_785_, v_a_789_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; uint8_t v___x_793_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_a_792_);
v___x_793_ = lean_unbox(v_a_792_);
lean_dec(v_a_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; 
lean_dec_ref(v___x_791_);
v___x_794_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_processNextEq(v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_);
if (lean_obj_tag(v___x_794_) == 0)
{
lean_object* v_a_795_; uint8_t v___x_796_; 
v_a_795_ = lean_ctor_get(v___x_794_, 0);
lean_inc(v_a_795_);
v___x_796_ = lean_unbox(v_a_795_);
lean_dec(v_a_795_);
if (v___x_796_ == 0)
{
return v___x_794_;
}
else
{
lean_dec_ref(v___x_794_);
goto _start;
}
}
else
{
return v___x_794_;
}
}
else
{
return v___x_791_;
}
}
else
{
return v___x_791_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_go___boxed(lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_go(v_a_798_, v_a_799_, v_a_800_, v_a_801_, v_a_802_);
lean_dec(v_a_802_);
lean_dec_ref(v_a_801_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
lean_dec(v_a_798_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___lam__0(lean_object* v_k_805_, lean_object* v_b_806_, lean_object* v_c_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_){
_start:
{
lean_object* v___x_813_; 
lean_inc(v___y_811_);
lean_inc_ref(v___y_810_);
lean_inc(v___y_809_);
lean_inc_ref(v___y_808_);
v___x_813_ = lean_apply_7(v_k_805_, v_b_806_, v_c_807_, v___y_808_, v___y_809_, v___y_810_, v___y_811_, lean_box(0));
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___lam__0___boxed(lean_object* v_k_814_, lean_object* v_b_815_, lean_object* v_c_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___lam__0(v_k_814_, v_b_815_, v_c_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg(lean_object* v_type_823_, lean_object* v_k_824_, uint8_t v_cleanupAnnotations_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v___f_831_; uint8_t v___x_832_; lean_object* v___x_833_; lean_object* v___x_834_; 
v___f_831_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_831_, 0, v_k_824_);
v___x_832_ = 0;
v___x_833_ = lean_box(0);
v___x_834_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_832_, v___x_833_, v_type_823_, v___f_831_, v_cleanupAnnotations_825_, v___x_832_, v___y_826_, v___y_827_, v___y_828_, v___y_829_);
if (lean_obj_tag(v___x_834_) == 0)
{
lean_object* v_a_835_; lean_object* v___x_837_; uint8_t v_isShared_838_; uint8_t v_isSharedCheck_842_; 
v_a_835_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_842_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_842_ == 0)
{
v___x_837_ = v___x_834_;
v_isShared_838_ = v_isSharedCheck_842_;
goto v_resetjp_836_;
}
else
{
lean_inc(v_a_835_);
lean_dec(v___x_834_);
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
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_850_; 
v_a_843_ = lean_ctor_get(v___x_834_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_834_);
if (v_isSharedCheck_850_ == 0)
{
v___x_845_ = v___x_834_;
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_834_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_850_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_848_; 
if (v_isShared_846_ == 0)
{
v___x_848_ = v___x_845_;
goto v_reusejp_847_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v_a_843_);
v___x_848_ = v_reuseFailAlloc_849_;
goto v_reusejp_847_;
}
v_reusejp_847_:
{
return v___x_848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg___boxed(lean_object* v_type_851_, lean_object* v_k_852_, lean_object* v_cleanupAnnotations_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_859_; lean_object* v_res_860_; 
v_cleanupAnnotations_boxed_859_ = lean_unbox(v_cleanupAnnotations_853_);
v_res_860_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg(v_type_851_, v_k_852_, v_cleanupAnnotations_boxed_859_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0(lean_object* v_00_u03b1_861_, lean_object* v_type_862_, lean_object* v_k_863_, uint8_t v_cleanupAnnotations_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v___x_870_; 
v___x_870_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg(v_type_862_, v_k_863_, v_cleanupAnnotations_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___boxed(lean_object* v_00_u03b1_871_, lean_object* v_type_872_, lean_object* v_k_873_, lean_object* v_cleanupAnnotations_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_880_; lean_object* v_res_881_; 
v_cleanupAnnotations_boxed_880_ = lean_unbox(v_cleanupAnnotations_874_);
v_res_881_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0(v_00_u03b1_871_, v_type_872_, v_k_873_, v_cleanupAnnotations_boxed_880_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
lean_dec(v___y_876_);
lean_dec_ref(v___y_875_);
return v_res_881_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__0(lean_object* v_x_882_){
_start:
{
uint8_t v___x_883_; 
v___x_883_ = 0;
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__0___boxed(lean_object* v_x_884_){
_start:
{
uint8_t v_res_885_; lean_object* v_r_886_; 
v_res_885_ = l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__0(v_x_884_);
lean_dec(v_x_884_);
v_r_886_ = lean_box(v_res_885_);
return v_r_886_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__1(lean_object* v_fvarId_887_, lean_object* v_x_888_){
_start:
{
uint8_t v___x_889_; 
v___x_889_ = l_Lean_instBEqFVarId_beq(v_fvarId_887_, v_x_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__1___boxed(lean_object* v_fvarId_890_, lean_object* v_x_891_){
_start:
{
uint8_t v_res_892_; lean_object* v_r_893_; 
v_res_892_ = l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__1(v_fvarId_890_, v_x_891_);
lean_dec(v_x_891_);
lean_dec(v_fvarId_890_);
v_r_893_ = lean_box(v_res_892_);
return v_r_893_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___f_894_; 
v___f_894_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__0___boxed), 1, 0);
return v___f_894_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_895_ = lean_box(0);
v___x_896_ = lean_unsigned_to_nat(16u);
v___x_897_ = lean_mk_array(v___x_896_, v___x_895_);
return v___x_897_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_898_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__1);
v___x_899_ = lean_unsigned_to_nat(0u);
v___x_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v___x_898_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg(lean_object* v_e_901_, lean_object* v_fvarId_902_, lean_object* v___y_903_, lean_object* v___y_904_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; uint8_t v_fst_909_; lean_object* v_mctx_910_; lean_object* v___y_929_; lean_object* v_mctx_934_; lean_object* v___f_935_; lean_object* v___f_936_; lean_object* v___x_937_; lean_object* v___x_938_; uint8_t v___x_939_; 
v___x_906_ = lean_st_ref_get(v___y_904_);
lean_dec(v___x_906_);
v___x_907_ = lean_st_ref_get(v___y_903_);
v_mctx_934_ = lean_ctor_get(v___x_907_, 0);
lean_inc_ref_n(v_mctx_934_, 2);
lean_dec(v___x_907_);
v___f_935_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__0, &l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__0_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__0);
v___f_936_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_936_, 0, v_fvarId_902_);
v___x_937_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___closed__2);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
lean_ctor_set(v___x_938_, 1, v_mctx_934_);
v___x_939_ = l_Lean_Expr_hasFVar(v_e_901_);
if (v___x_939_ == 0)
{
uint8_t v___x_940_; 
v___x_940_ = l_Lean_Expr_hasMVar(v_e_901_);
if (v___x_940_ == 0)
{
lean_dec_ref(v___x_938_);
lean_dec_ref(v___f_936_);
lean_dec_ref(v_e_901_);
v_fst_909_ = v___x_940_;
v_mctx_910_ = v_mctx_934_;
goto v___jp_908_;
}
else
{
lean_object* v___x_941_; 
lean_dec_ref(v_mctx_934_);
v___x_941_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_936_, v___f_935_, v_e_901_, v___x_938_);
v___y_929_ = v___x_941_;
goto v___jp_928_;
}
}
else
{
lean_object* v___x_942_; 
lean_dec_ref(v_mctx_934_);
v___x_942_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_936_, v___f_935_, v_e_901_, v___x_938_);
v___y_929_ = v___x_942_;
goto v___jp_928_;
}
v___jp_908_:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v_cache_913_; lean_object* v_zetaDeltaFVarIds_914_; lean_object* v_postponed_915_; lean_object* v_diag_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_926_; 
v___x_911_ = lean_st_ref_get(v___y_904_);
lean_dec(v___x_911_);
v___x_912_ = lean_st_ref_take(v___y_903_);
v_cache_913_ = lean_ctor_get(v___x_912_, 1);
v_zetaDeltaFVarIds_914_ = lean_ctor_get(v___x_912_, 2);
v_postponed_915_ = lean_ctor_get(v___x_912_, 3);
v_diag_916_ = lean_ctor_get(v___x_912_, 4);
v_isSharedCheck_926_ = !lean_is_exclusive(v___x_912_);
if (v_isSharedCheck_926_ == 0)
{
lean_object* v_unused_927_; 
v_unused_927_ = lean_ctor_get(v___x_912_, 0);
lean_dec(v_unused_927_);
v___x_918_ = v___x_912_;
v_isShared_919_ = v_isSharedCheck_926_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_diag_916_);
lean_inc(v_postponed_915_);
lean_inc(v_zetaDeltaFVarIds_914_);
lean_inc(v_cache_913_);
lean_dec(v___x_912_);
v___x_918_ = lean_box(0);
v_isShared_919_ = v_isSharedCheck_926_;
goto v_resetjp_917_;
}
v_resetjp_917_:
{
lean_object* v___x_921_; 
if (v_isShared_919_ == 0)
{
lean_ctor_set(v___x_918_, 0, v_mctx_910_);
v___x_921_ = v___x_918_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v_mctx_910_);
lean_ctor_set(v_reuseFailAlloc_925_, 1, v_cache_913_);
lean_ctor_set(v_reuseFailAlloc_925_, 2, v_zetaDeltaFVarIds_914_);
lean_ctor_set(v_reuseFailAlloc_925_, 3, v_postponed_915_);
lean_ctor_set(v_reuseFailAlloc_925_, 4, v_diag_916_);
v___x_921_ = v_reuseFailAlloc_925_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; 
v___x_922_ = lean_st_ref_set(v___y_903_, v___x_921_);
v___x_923_ = lean_box(v_fst_909_);
v___x_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_924_, 0, v___x_923_);
return v___x_924_;
}
}
}
v___jp_928_:
{
lean_object* v_snd_930_; lean_object* v_fst_931_; lean_object* v_mctx_932_; uint8_t v___x_933_; 
v_snd_930_ = lean_ctor_get(v___y_929_, 1);
lean_inc(v_snd_930_);
v_fst_931_ = lean_ctor_get(v___y_929_, 0);
lean_inc(v_fst_931_);
lean_dec_ref(v___y_929_);
v_mctx_932_ = lean_ctor_get(v_snd_930_, 1);
lean_inc_ref(v_mctx_932_);
lean_dec(v_snd_930_);
v___x_933_ = lean_unbox(v_fst_931_);
lean_dec(v_fst_931_);
v_fst_909_ = v___x_933_;
v_mctx_910_ = v_mctx_932_;
goto v___jp_908_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg___boxed(lean_object* v_e_943_, lean_object* v_fvarId_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg(v_e_943_, v_fvarId_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
lean_dec(v___y_945_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1(lean_object* v_e_949_, lean_object* v_fvarId_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg(v_e_949_, v_fvarId_950_, v___y_952_, v___y_954_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___boxed(lean_object* v_e_957_, lean_object* v_fvarId_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_){
_start:
{
lean_object* v_res_964_; 
v_res_964_ = l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1(v_e_957_, v_fvarId_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_);
lean_dec(v___y_962_);
lean_dec_ref(v___y_961_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
return v_res_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg(lean_object* v_mvarId_965_, lean_object* v_x_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_965_, v_x_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_980_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_980_ == 0)
{
v___x_975_ = v___x_972_;
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_980_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_976_ == 0)
{
v___x_978_ = v___x_975_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_a_973_);
v___x_978_ = v_reuseFailAlloc_979_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
return v___x_978_;
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
v_a_981_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_972_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_972_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg___boxed(lean_object* v_mvarId_989_, lean_object* v_x_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg(v_mvarId_989_, v_x_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3(lean_object* v_00_u03b1_997_, lean_object* v_mvarId_998_, lean_object* v_x_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg(v_mvarId_998_, v_x_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___boxed(lean_object* v_00_u03b1_1006_, lean_object* v_mvarId_1007_, lean_object* v_x_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3(v_00_u03b1_1006_, v_mvarId_1007_, v_x_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
return v_res_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__0(lean_object* v_numEqs_1015_, lean_object* v_ys_1016_, lean_object* v_x_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1023_ = lean_array_get_size(v_ys_1016_);
v___x_1024_ = lean_nat_sub(v___x_1023_, v_numEqs_1015_);
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1024_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__0___boxed(lean_object* v_numEqs_1026_, lean_object* v_ys_1027_, lean_object* v_x_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_){
_start:
{
lean_object* v_res_1034_; 
v_res_1034_ = l_Lean_Meta_Match_simpH___lam__0(v_numEqs_1026_, v_ys_1027_, v_x_1028_, v___y_1029_, v___y_1030_, v___y_1031_, v___y_1032_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec_ref(v_x_1028_);
lean_dec_ref(v_ys_1027_);
lean_dec(v_numEqs_1026_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_simpH_spec__2(lean_object* v_a_1035_, lean_object* v_as_1036_, size_t v_i_1037_, size_t v_stop_1038_, lean_object* v_b_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
uint8_t v___x_1045_; 
v___x_1045_ = lean_usize_dec_eq(v_i_1037_, v_stop_1038_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = lean_array_uget_borrowed(v_as_1036_, v_i_1037_);
lean_inc(v___x_1046_);
lean_inc_ref(v_a_1035_);
v___x_1047_ = l_Lean_exprDependsOn___at___00Lean_Meta_Match_simpH_spec__1___redArg(v_a_1035_, v___x_1046_, v___y_1041_, v___y_1043_);
if (lean_obj_tag(v___x_1047_) == 0)
{
lean_object* v_a_1048_; lean_object* v_a_1050_; uint8_t v___x_1054_; 
v_a_1048_ = lean_ctor_get(v___x_1047_, 0);
lean_inc(v_a_1048_);
lean_dec_ref(v___x_1047_);
v___x_1054_ = lean_unbox(v_a_1048_);
lean_dec(v_a_1048_);
if (v___x_1054_ == 0)
{
v_a_1050_ = v_b_1039_;
goto v___jp_1049_;
}
else
{
lean_object* v___x_1055_; 
lean_inc(v___x_1046_);
v___x_1055_ = lean_array_push(v_b_1039_, v___x_1046_);
v_a_1050_ = v___x_1055_;
goto v___jp_1049_;
}
v___jp_1049_:
{
size_t v___x_1051_; size_t v___x_1052_; 
v___x_1051_ = ((size_t)1ULL);
v___x_1052_ = lean_usize_add(v_i_1037_, v___x_1051_);
v_i_1037_ = v___x_1052_;
v_b_1039_ = v_a_1050_;
goto _start;
}
}
else
{
lean_object* v_a_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1063_; 
lean_dec_ref(v_b_1039_);
lean_dec_ref(v_a_1035_);
v_a_1056_ = lean_ctor_get(v___x_1047_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1047_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1058_ = v___x_1047_;
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_a_1056_);
lean_dec(v___x_1047_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1063_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1061_; 
if (v_isShared_1059_ == 0)
{
v___x_1061_ = v___x_1058_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_a_1056_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
}
else
{
lean_object* v___x_1064_; 
lean_dec_ref(v_a_1035_);
v___x_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1064_, 0, v_b_1039_);
return v___x_1064_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_simpH_spec__2___boxed(lean_object* v_a_1065_, lean_object* v_as_1066_, lean_object* v_i_1067_, lean_object* v_stop_1068_, lean_object* v_b_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
size_t v_i_boxed_1075_; size_t v_stop_boxed_1076_; lean_object* v_res_1077_; 
v_i_boxed_1075_ = lean_unbox_usize(v_i_1067_);
lean_dec(v_i_1067_);
v_stop_boxed_1076_ = lean_unbox_usize(v_stop_1068_);
lean_dec(v_stop_1068_);
v_res_1077_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_simpH_spec__2(v_a_1065_, v_as_1066_, v_i_boxed_1075_, v_stop_boxed_1076_, v_b_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec_ref(v_as_1066_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__1(lean_object* v_snd_1078_, uint8_t v___x_1079_, lean_object* v___x_1080_, lean_object* v___x_1081_, lean_object* v_a_1082_, lean_object* v___x_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v_a_1090_; lean_object* v___y_1111_; lean_object* v___x_1121_; uint8_t v___x_1122_; 
v___x_1121_ = lean_mk_empty_array_with_capacity(v___x_1080_);
v___x_1122_ = lean_nat_dec_lt(v___x_1080_, v___x_1081_);
if (v___x_1122_ == 0)
{
lean_dec_ref(v_a_1082_);
v_a_1090_ = v___x_1121_;
goto v___jp_1089_;
}
else
{
uint8_t v___x_1123_; 
v___x_1123_ = lean_nat_dec_le(v___x_1081_, v___x_1081_);
if (v___x_1123_ == 0)
{
if (v___x_1122_ == 0)
{
lean_dec_ref(v_a_1082_);
v_a_1090_ = v___x_1121_;
goto v___jp_1089_;
}
else
{
size_t v___x_1124_; size_t v___x_1125_; lean_object* v___x_1126_; 
v___x_1124_ = ((size_t)0ULL);
v___x_1125_ = lean_usize_of_nat(v___x_1081_);
v___x_1126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_simpH_spec__2(v_a_1082_, v___x_1083_, v___x_1124_, v___x_1125_, v___x_1121_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
v___y_1111_ = v___x_1126_;
goto v___jp_1110_;
}
}
else
{
size_t v___x_1127_; size_t v___x_1128_; lean_object* v___x_1129_; 
v___x_1127_ = ((size_t)0ULL);
v___x_1128_ = lean_usize_of_nat(v___x_1081_);
v___x_1129_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_Match_simpH_spec__2(v_a_1082_, v___x_1083_, v___x_1127_, v___x_1128_, v___x_1121_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
v___y_1111_ = v___x_1129_;
goto v___jp_1110_;
}
}
v___jp_1089_:
{
lean_object* v___x_1091_; 
v___x_1091_ = l_Lean_MVarId_revert(v_snd_1078_, v_a_1090_, v___x_1079_, v___x_1079_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1101_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1094_ = v___x_1091_;
v_isShared_1095_ = v_isSharedCheck_1101_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1091_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1101_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v_snd_1096_; lean_object* v___x_1097_; lean_object* v___x_1099_; 
v_snd_1096_ = lean_ctor_get(v_a_1092_, 1);
lean_inc(v_snd_1096_);
lean_dec(v_a_1092_);
v___x_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1097_, 0, v_snd_1096_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v___x_1097_);
v___x_1099_ = v___x_1094_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v___x_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_a_1102_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1091_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1091_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
v___jp_1110_:
{
if (lean_obj_tag(v___y_1111_) == 0)
{
lean_object* v_a_1112_; 
v_a_1112_ = lean_ctor_get(v___y_1111_, 0);
lean_inc(v_a_1112_);
lean_dec_ref(v___y_1111_);
v_a_1090_ = v_a_1112_;
goto v___jp_1089_;
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_snd_1078_);
v_a_1113_ = lean_ctor_get(v___y_1111_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___y_1111_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___y_1111_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___y_1111_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
v___x_1118_ = v_reuseFailAlloc_1119_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
return v___x_1118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__1___boxed(lean_object* v_snd_1130_, lean_object* v___x_1131_, lean_object* v___x_1132_, lean_object* v___x_1133_, lean_object* v_a_1134_, lean_object* v___x_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
uint8_t v___x_7236__boxed_1141_; lean_object* v_res_1142_; 
v___x_7236__boxed_1141_ = lean_unbox(v___x_1131_);
v_res_1142_ = l_Lean_Meta_Match_simpH___lam__1(v_snd_1130_, v___x_7236__boxed_1141_, v___x_1132_, v___x_1133_, v_a_1134_, v___x_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec_ref(v___x_1135_);
lean_dec(v___x_1133_);
lean_dec(v___x_1132_);
return v_res_1142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__2(lean_object* v_mvarId_1143_, lean_object* v___x_1144_, uint8_t v___x_1145_, lean_object* v_xs_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_){
_start:
{
lean_object* v___x_1152_; 
v___x_1152_ = l_Lean_MVarId_revert(v_mvarId_1143_, v___x_1144_, v___x_1145_, v___x_1145_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
if (lean_obj_tag(v___x_1152_) == 0)
{
lean_object* v_a_1153_; lean_object* v_snd_1154_; lean_object* v___x_1155_; 
v_a_1153_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_a_1153_);
lean_dec_ref(v___x_1152_);
v_snd_1154_ = lean_ctor_get(v_a_1153_, 1);
lean_inc_n(v_snd_1154_, 2);
lean_dec(v_a_1153_);
v___x_1155_ = l_Lean_MVarId_getType(v_snd_1154_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___f_1162_; lean_object* v___x_1163_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref(v___x_1155_);
v___x_1157_ = lean_array_mk(v_xs_1146_);
v___x_1158_ = l_Array_reverse___redArg(v___x_1157_);
v___x_1159_ = lean_unsigned_to_nat(0u);
v___x_1160_ = lean_array_get_size(v___x_1158_);
v___x_1161_ = lean_box(v___x_1145_);
lean_inc(v_snd_1154_);
v___f_1162_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_simpH___lam__1___boxed), 11, 6);
lean_closure_set(v___f_1162_, 0, v_snd_1154_);
lean_closure_set(v___f_1162_, 1, v___x_1161_);
lean_closure_set(v___f_1162_, 2, v___x_1159_);
lean_closure_set(v___f_1162_, 3, v___x_1160_);
lean_closure_set(v___f_1162_, 4, v_a_1156_);
lean_closure_set(v___f_1162_, 5, v___x_1158_);
v___x_1163_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg(v_snd_1154_, v___f_1162_, v___y_1147_, v___y_1148_, v___y_1149_, v___y_1150_);
return v___x_1163_;
}
else
{
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_snd_1154_);
lean_dec(v_xs_1146_);
v_a_1164_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1155_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1155_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_xs_1146_);
v_a_1172_ = lean_ctor_get(v___x_1152_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1152_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1152_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1152_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___lam__2___boxed(lean_object* v_mvarId_1180_, lean_object* v___x_1181_, lean_object* v___x_1182_, lean_object* v_xs_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_){
_start:
{
uint8_t v___x_7347__boxed_1189_; lean_object* v_res_1190_; 
v___x_7347__boxed_1189_ = lean_unbox(v___x_1182_);
v_res_1190_ = l_Lean_Meta_Match_simpH___lam__2(v_mvarId_1180_, v___x_1181_, v___x_7347__boxed_1189_, v_xs_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1190_;
}
}
static uint64_t _init_l_Lean_Meta_Match_simpH___closed__0(void){
_start:
{
uint8_t v___x_1191_; uint64_t v___x_1192_; 
v___x_1191_ = 1;
v___x_1192_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1191_);
return v___x_1192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH(lean_object* v_mvarId_1193_, lean_object* v_numEqs_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_){
_start:
{
lean_object* v___x_1200_; uint8_t v_foApprox_1201_; uint8_t v_ctxApprox_1202_; uint8_t v_quasiPatternApprox_1203_; uint8_t v_constApprox_1204_; uint8_t v_isDefEqStuckEx_1205_; uint8_t v_unificationHints_1206_; uint8_t v_proofIrrelevance_1207_; uint8_t v_assignSyntheticOpaque_1208_; uint8_t v_offsetCnstrs_1209_; uint8_t v_etaStruct_1210_; uint8_t v_univApprox_1211_; uint8_t v_iota_1212_; uint8_t v_beta_1213_; uint8_t v_proj_1214_; uint8_t v_zeta_1215_; uint8_t v_zetaDelta_1216_; uint8_t v_zetaUnused_1217_; uint8_t v_zetaHave_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1336_; 
v___x_1200_ = l_Lean_Meta_Context_config(v_a_1195_);
v_foApprox_1201_ = lean_ctor_get_uint8(v___x_1200_, 0);
v_ctxApprox_1202_ = lean_ctor_get_uint8(v___x_1200_, 1);
v_quasiPatternApprox_1203_ = lean_ctor_get_uint8(v___x_1200_, 2);
v_constApprox_1204_ = lean_ctor_get_uint8(v___x_1200_, 3);
v_isDefEqStuckEx_1205_ = lean_ctor_get_uint8(v___x_1200_, 4);
v_unificationHints_1206_ = lean_ctor_get_uint8(v___x_1200_, 5);
v_proofIrrelevance_1207_ = lean_ctor_get_uint8(v___x_1200_, 6);
v_assignSyntheticOpaque_1208_ = lean_ctor_get_uint8(v___x_1200_, 7);
v_offsetCnstrs_1209_ = lean_ctor_get_uint8(v___x_1200_, 8);
v_etaStruct_1210_ = lean_ctor_get_uint8(v___x_1200_, 10);
v_univApprox_1211_ = lean_ctor_get_uint8(v___x_1200_, 11);
v_iota_1212_ = lean_ctor_get_uint8(v___x_1200_, 12);
v_beta_1213_ = lean_ctor_get_uint8(v___x_1200_, 13);
v_proj_1214_ = lean_ctor_get_uint8(v___x_1200_, 14);
v_zeta_1215_ = lean_ctor_get_uint8(v___x_1200_, 15);
v_zetaDelta_1216_ = lean_ctor_get_uint8(v___x_1200_, 16);
v_zetaUnused_1217_ = lean_ctor_get_uint8(v___x_1200_, 17);
v_zetaHave_1218_ = lean_ctor_get_uint8(v___x_1200_, 18);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1200_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1220_ = v___x_1200_;
v_isShared_1221_ = v_isSharedCheck_1336_;
goto v_resetjp_1219_;
}
else
{
lean_dec(v___x_1200_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1336_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
uint8_t v_trackZetaDelta_1222_; lean_object* v_zetaDeltaSet_1223_; lean_object* v_lctx_1224_; lean_object* v_localInstances_1225_; lean_object* v_defEqCtx_x3f_1226_; lean_object* v_synthPendingDepth_1227_; lean_object* v_canUnfold_x3f_1228_; uint8_t v_univApprox_1229_; uint8_t v_inTypeClassResolution_1230_; uint8_t v_cacheInferType_1231_; uint8_t v___x_1232_; lean_object* v_config_1234_; 
v_trackZetaDelta_1222_ = lean_ctor_get_uint8(v_a_1195_, sizeof(void*)*7);
v_zetaDeltaSet_1223_ = lean_ctor_get(v_a_1195_, 1);
v_lctx_1224_ = lean_ctor_get(v_a_1195_, 2);
v_localInstances_1225_ = lean_ctor_get(v_a_1195_, 3);
v_defEqCtx_x3f_1226_ = lean_ctor_get(v_a_1195_, 4);
v_synthPendingDepth_1227_ = lean_ctor_get(v_a_1195_, 5);
v_canUnfold_x3f_1228_ = lean_ctor_get(v_a_1195_, 6);
v_univApprox_1229_ = lean_ctor_get_uint8(v_a_1195_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1230_ = lean_ctor_get_uint8(v_a_1195_, sizeof(void*)*7 + 2);
v_cacheInferType_1231_ = lean_ctor_get_uint8(v_a_1195_, sizeof(void*)*7 + 3);
v___x_1232_ = 1;
if (v_isShared_1221_ == 0)
{
v_config_1234_ = v___x_1220_;
goto v_reusejp_1233_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 0, v_foApprox_1201_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 1, v_ctxApprox_1202_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 2, v_quasiPatternApprox_1203_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 3, v_constApprox_1204_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 4, v_isDefEqStuckEx_1205_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 5, v_unificationHints_1206_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 6, v_proofIrrelevance_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 7, v_assignSyntheticOpaque_1208_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 8, v_offsetCnstrs_1209_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 10, v_etaStruct_1210_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 11, v_univApprox_1211_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 12, v_iota_1212_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 13, v_beta_1213_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 14, v_proj_1214_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 15, v_zeta_1215_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 16, v_zetaDelta_1216_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 17, v_zetaUnused_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1335_, 18, v_zetaHave_1218_);
v_config_1234_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1233_;
}
v_reusejp_1233_:
{
uint64_t v___x_1235_; uint64_t v___x_1236_; uint64_t v___x_1237_; uint64_t v___x_1238_; uint64_t v___x_1239_; uint64_t v_key_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
lean_ctor_set_uint8(v_config_1234_, 9, v___x_1232_);
v___x_1235_ = l_Lean_Meta_Context_configKey(v_a_1195_);
v___x_1236_ = 2ULL;
v___x_1237_ = lean_uint64_shift_right(v___x_1235_, v___x_1236_);
v___x_1238_ = lean_uint64_shift_left(v___x_1237_, v___x_1236_);
v___x_1239_ = lean_uint64_once(&l_Lean_Meta_Match_simpH___closed__0, &l_Lean_Meta_Match_simpH___closed__0_once, _init_l_Lean_Meta_Match_simpH___closed__0);
v_key_1240_ = lean_uint64_lor(v___x_1238_, v___x_1239_);
v___x_1241_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1241_, 0, v_config_1234_);
lean_ctor_set_uint64(v___x_1241_, sizeof(void*)*1, v_key_1240_);
lean_inc(v_canUnfold_x3f_1228_);
lean_inc(v_synthPendingDepth_1227_);
lean_inc(v_defEqCtx_x3f_1226_);
lean_inc_ref(v_localInstances_1225_);
lean_inc_ref(v_lctx_1224_);
lean_inc(v_zetaDeltaSet_1223_);
v___x_1242_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
lean_ctor_set(v___x_1242_, 1, v_zetaDeltaSet_1223_);
lean_ctor_set(v___x_1242_, 2, v_lctx_1224_);
lean_ctor_set(v___x_1242_, 3, v_localInstances_1225_);
lean_ctor_set(v___x_1242_, 4, v_defEqCtx_x3f_1226_);
lean_ctor_set(v___x_1242_, 5, v_synthPendingDepth_1227_);
lean_ctor_set(v___x_1242_, 6, v_canUnfold_x3f_1228_);
lean_ctor_set_uint8(v___x_1242_, sizeof(void*)*7, v_trackZetaDelta_1222_);
lean_ctor_set_uint8(v___x_1242_, sizeof(void*)*7 + 1, v_univApprox_1229_);
lean_ctor_set_uint8(v___x_1242_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1230_);
lean_ctor_set_uint8(v___x_1242_, sizeof(void*)*7 + 3, v_cacheInferType_1231_);
lean_inc(v_mvarId_1193_);
v___x_1243_ = l_Lean_MVarId_getType(v_mvarId_1193_, v___x_1242_, v_a_1196_, v_a_1197_, v_a_1198_);
if (lean_obj_tag(v___x_1243_) == 0)
{
lean_object* v_a_1244_; lean_object* v___f_1245_; uint8_t v___x_1246_; lean_object* v___x_1247_; 
v_a_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_a_1244_);
lean_dec_ref(v___x_1243_);
lean_inc(v_numEqs_1194_);
v___f_1245_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_simpH___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1245_, 0, v_numEqs_1194_);
v___x_1246_ = 0;
v___x_1247_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_Match_simpH_spec__0___redArg(v_a_1244_, v___f_1245_, v___x_1246_, v___x_1242_, v_a_1196_, v_a_1197_, v_a_1198_);
if (lean_obj_tag(v___x_1247_) == 0)
{
lean_object* v_a_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; 
v_a_1248_ = lean_ctor_get(v___x_1247_, 0);
lean_inc(v_a_1248_);
lean_dec_ref(v___x_1247_);
v___x_1249_ = l_Lean_LocalContext_getFVarIds(v_lctx_1224_);
v___x_1250_ = l_Lean_MVarId_tryClearMany(v_mvarId_1193_, v___x_1249_, v___x_1242_, v_a_1196_, v_a_1197_, v_a_1198_);
lean_dec_ref(v___x_1249_);
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
lean_inc(v_a_1251_);
lean_dec_ref(v___x_1250_);
v___x_1252_ = lean_box(0);
v___x_1253_ = l_Lean_Meta_introNCore(v_a_1251_, v_a_1248_, v___x_1252_, v___x_1246_, v___x_1246_, v___x_1242_, v_a_1196_, v_a_1197_, v_a_1198_);
if (lean_obj_tag(v___x_1253_) == 0)
{
lean_object* v_a_1254_; lean_object* v_fst_1255_; lean_object* v_snd_1256_; lean_object* v___x_1257_; 
v_a_1254_ = lean_ctor_get(v___x_1253_, 0);
lean_inc(v_a_1254_);
lean_dec_ref(v___x_1253_);
v_fst_1255_ = lean_ctor_get(v_a_1254_, 0);
lean_inc(v_fst_1255_);
v_snd_1256_ = lean_ctor_get(v_a_1254_, 1);
lean_inc(v_snd_1256_);
lean_dec(v_a_1254_);
v___x_1257_ = l_Lean_Meta_introNCore(v_snd_1256_, v_numEqs_1194_, v___x_1252_, v___x_1246_, v___x_1246_, v___x_1242_, v_a_1196_, v_a_1197_, v_a_1198_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v_a_1258_; lean_object* v_fst_1259_; lean_object* v_snd_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
lean_inc(v_a_1258_);
lean_dec_ref(v___x_1257_);
v_fst_1259_ = lean_ctor_get(v_a_1258_, 0);
lean_inc(v_fst_1259_);
v_snd_1260_ = lean_ctor_get(v_a_1258_, 1);
lean_inc(v_snd_1260_);
lean_dec(v_a_1258_);
v___x_1261_ = lean_st_ref_get(v_a_1198_);
lean_dec(v___x_1261_);
v___x_1262_ = lean_array_to_list(v_fst_1255_);
v___x_1263_ = lean_array_to_list(v_fst_1259_);
v___x_1264_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1264_, 0, v_snd_1260_);
lean_ctor_set(v___x_1264_, 1, v___x_1262_);
lean_ctor_set(v___x_1264_, 2, v___x_1263_);
lean_ctor_set(v___x_1264_, 3, v___x_1252_);
v___x_1265_ = lean_st_mk_ref(v___x_1264_);
v___x_1266_ = l___private_Lean_Meta_Match_SimpH_0__Lean_Meta_Match_SimpH_go(v___x_1265_, v___x_1242_, v_a_1196_, v_a_1197_, v_a_1198_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1286_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
v_isSharedCheck_1286_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1269_ = v___x_1266_;
v_isShared_1270_ = v_isSharedCheck_1286_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1266_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1286_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; uint8_t v___x_1273_; 
v___x_1271_ = lean_st_ref_get(v_a_1198_);
lean_dec(v___x_1271_);
v___x_1272_ = lean_st_ref_get(v___x_1265_);
lean_dec(v___x_1265_);
v___x_1273_ = lean_unbox(v_a_1267_);
lean_dec(v_a_1267_);
if (v___x_1273_ == 0)
{
lean_object* v___x_1274_; lean_object* v___x_1276_; 
lean_dec(v___x_1272_);
lean_dec_ref(v___x_1242_);
v___x_1274_ = lean_box(0);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 0, v___x_1274_);
v___x_1276_ = v___x_1269_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1274_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
return v___x_1276_;
}
}
else
{
lean_object* v_mvarId_1278_; lean_object* v_xs_1279_; lean_object* v_eqsNew_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___f_1284_; lean_object* v___x_1285_; 
lean_del_object(v___x_1269_);
v_mvarId_1278_ = lean_ctor_get(v___x_1272_, 0);
lean_inc_n(v_mvarId_1278_, 2);
v_xs_1279_ = lean_ctor_get(v___x_1272_, 1);
lean_inc(v_xs_1279_);
v_eqsNew_1280_ = lean_ctor_get(v___x_1272_, 3);
lean_inc(v_eqsNew_1280_);
lean_dec(v___x_1272_);
v___x_1281_ = l_List_reverse___redArg(v_eqsNew_1280_);
v___x_1282_ = lean_array_mk(v___x_1281_);
v___x_1283_ = lean_box(v___x_1246_);
v___f_1284_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_simpH___lam__2___boxed), 9, 4);
lean_closure_set(v___f_1284_, 0, v_mvarId_1278_);
lean_closure_set(v___f_1284_, 1, v___x_1282_);
lean_closure_set(v___f_1284_, 2, v___x_1283_);
lean_closure_set(v___f_1284_, 3, v_xs_1279_);
v___x_1285_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Match_simpH_spec__3___redArg(v_mvarId_1278_, v___f_1284_, v___x_1242_, v_a_1196_, v_a_1197_, v_a_1198_);
lean_dec_ref(v___x_1242_);
return v___x_1285_;
}
}
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec(v___x_1265_);
lean_dec_ref(v___x_1242_);
v_a_1287_ = lean_ctor_get(v___x_1266_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1266_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1266_);
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
lean_dec(v_fst_1255_);
lean_dec_ref(v___x_1242_);
v_a_1295_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1297_ = v___x_1257_;
v_isShared_1298_ = v_isSharedCheck_1302_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_a_1295_);
lean_dec(v___x_1257_);
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
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
lean_dec_ref(v___x_1242_);
lean_dec(v_numEqs_1194_);
v_a_1303_ = lean_ctor_get(v___x_1253_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1253_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1253_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1253_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
else
{
lean_object* v_a_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1318_; 
lean_dec(v_a_1248_);
lean_dec_ref(v___x_1242_);
lean_dec(v_numEqs_1194_);
v_a_1311_ = lean_ctor_get(v___x_1250_, 0);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1250_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1313_ = v___x_1250_;
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_a_1311_);
lean_dec(v___x_1250_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1318_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1316_; 
if (v_isShared_1314_ == 0)
{
v___x_1316_ = v___x_1313_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1317_, 0, v_a_1311_);
v___x_1316_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
return v___x_1316_;
}
}
}
}
else
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1326_; 
lean_dec_ref(v___x_1242_);
lean_dec(v_numEqs_1194_);
lean_dec(v_mvarId_1193_);
v_a_1319_ = lean_ctor_get(v___x_1247_, 0);
v_isSharedCheck_1326_ = !lean_is_exclusive(v___x_1247_);
if (v_isSharedCheck_1326_ == 0)
{
v___x_1321_ = v___x_1247_;
v_isShared_1322_ = v_isSharedCheck_1326_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1247_);
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
else
{
lean_object* v_a_1327_; lean_object* v___x_1329_; uint8_t v_isShared_1330_; uint8_t v_isSharedCheck_1334_; 
lean_dec_ref(v___x_1242_);
lean_dec(v_numEqs_1194_);
lean_dec(v_mvarId_1193_);
v_a_1327_ = lean_ctor_get(v___x_1243_, 0);
v_isSharedCheck_1334_ = !lean_is_exclusive(v___x_1243_);
if (v_isSharedCheck_1334_ == 0)
{
v___x_1329_ = v___x_1243_;
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
else
{
lean_inc(v_a_1327_);
lean_dec(v___x_1243_);
v___x_1329_ = lean_box(0);
v_isShared_1330_ = v_isSharedCheck_1334_;
goto v_resetjp_1328_;
}
v_resetjp_1328_:
{
lean_object* v___x_1332_; 
if (v_isShared_1330_ == 0)
{
v___x_1332_ = v___x_1329_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v_a_1327_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH___boxed(lean_object* v_mvarId_1337_, lean_object* v_numEqs_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_, lean_object* v_a_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lean_Meta_Match_simpH(v_mvarId_1337_, v_numEqs_1338_, v_a_1339_, v_a_1340_, v_a_1341_, v_a_1342_);
lean_dec(v_a_1342_);
lean_dec_ref(v_a_1341_);
lean_dec(v_a_1340_);
lean_dec_ref(v_a_1339_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH_x3f(lean_object* v_h_1345_, lean_object* v_numEqs_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_, lean_object* v_a_1349_, lean_object* v_a_1350_){
_start:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1352_ = lean_box(0);
v___x_1353_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_h_1345_, v___x_1352_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v_a_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; 
v_a_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc(v_a_1354_);
lean_dec_ref(v___x_1353_);
v___x_1355_ = l_Lean_Expr_mvarId_x21(v_a_1354_);
lean_dec(v_a_1354_);
v___x_1356_ = l_Lean_Meta_Match_simpH(v___x_1355_, v_numEqs_1346_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_);
if (lean_obj_tag(v___x_1356_) == 0)
{
lean_object* v_a_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1390_; 
v_a_1357_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1390_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1390_ == 0)
{
v___x_1359_ = v___x_1356_;
v_isShared_1360_ = v_isSharedCheck_1390_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_a_1357_);
lean_dec(v___x_1356_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1390_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
if (lean_obj_tag(v_a_1357_) == 0)
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1361_ = lean_box(0);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 0, v___x_1361_);
v___x_1363_ = v___x_1359_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1361_);
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
lean_object* v_val_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1389_; 
lean_del_object(v___x_1359_);
v_val_1365_ = lean_ctor_get(v_a_1357_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_a_1357_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1367_ = v_a_1357_;
v_isShared_1368_ = v_isSharedCheck_1389_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_val_1365_);
lean_dec(v_a_1357_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1389_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1369_; 
v___x_1369_ = l_Lean_MVarId_getType(v_val_1365_, v_a_1347_, v_a_1348_, v_a_1349_, v_a_1350_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1380_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1372_ = v___x_1369_;
v_isShared_1373_ = v_isSharedCheck_1380_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v___x_1369_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1380_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v___x_1375_; 
if (v_isShared_1368_ == 0)
{
lean_ctor_set(v___x_1367_, 0, v_a_1370_);
v___x_1375_ = v___x_1367_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1370_);
v___x_1375_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1377_; 
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 0, v___x_1375_);
v___x_1377_ = v___x_1372_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_del_object(v___x_1367_);
v_a_1381_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1369_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1369_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1391_; lean_object* v___x_1393_; uint8_t v_isShared_1394_; uint8_t v_isSharedCheck_1398_; 
v_a_1391_ = lean_ctor_get(v___x_1356_, 0);
v_isSharedCheck_1398_ = !lean_is_exclusive(v___x_1356_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1393_ = v___x_1356_;
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
else
{
lean_inc(v_a_1391_);
lean_dec(v___x_1356_);
v___x_1393_ = lean_box(0);
v_isShared_1394_ = v_isSharedCheck_1398_;
goto v_resetjp_1392_;
}
v_resetjp_1392_:
{
lean_object* v___x_1396_; 
if (v_isShared_1394_ == 0)
{
v___x_1396_ = v___x_1393_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_a_1391_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
}
}
else
{
lean_object* v_a_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1406_; 
lean_dec(v_numEqs_1346_);
v_a_1399_ = lean_ctor_get(v___x_1353_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1353_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1401_ = v___x_1353_;
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_a_1399_);
lean_dec(v___x_1353_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1406_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1404_; 
if (v_isShared_1402_ == 0)
{
v___x_1404_ = v___x_1401_;
goto v_reusejp_1403_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v_a_1399_);
v___x_1404_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1403_;
}
v_reusejp_1403_:
{
return v___x_1404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_simpH_x3f___boxed(lean_object* v_h_1407_, lean_object* v_numEqs_1408_, lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lean_Meta_Match_simpH_x3f(v_h_1407_, v_numEqs_1408_, v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_);
lean_dec(v_a_1412_);
lean_dec_ref(v_a_1411_);
lean_dec(v_a_1410_);
lean_dec_ref(v_a_1409_);
return v_res_1414_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_SimpH(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_SimpH(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Contradiction(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_SimpH(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Contradiction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_SimpH(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_SimpH(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_SimpH(builtin);
}
#ifdef __cplusplus
}
#endif
