// Lean compiler output
// Module: Lean.Elab.PreDefinition.PartialFixpoint.Main
// Imports: public import Lean.Elab.PreDefinition.MkInhabitant public import Lean.Elab.PreDefinition.Mutual public import Lean.Elab.PreDefinition.PartialFixpoint.Eqns public import Lean.Elab.Tactic.Monotonicity public import Lean.Meta.Order
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Elab_Mutual_cleanPreDef(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPartialFixpoint_default;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkInstPiOfInstsForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_mkInhabitantFor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Meta_PProdN_pack(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkPackedPPRodInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_toPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_proj(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_replace_expr(lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAsAxiom___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_Term_elabTermEnsuringType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_logUnassignedUsingErrorInfos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkSorry(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_hasRecAppSyntax___boxed(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_andList(lean_object*);
lean_object* l_Lean_Meta_PProdN_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_reduceProjs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Monotonicity_solveMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_genMk___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFixOfMonFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefsFromUnary(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_addAndCompilePartialRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_PartialFixpoint_registerEqnsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Mutual_addPreDefAttributes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM(lean_object*);
uint8_t l_Lean_Elab_isLatticeTheoretic(uint8_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__7;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__9;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__10;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_partialFixpoint_spec__25___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__25___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__2(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__0;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9(lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__4;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__5;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__8;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__9;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__10;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__11;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__12;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__13;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__14;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__15;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__16;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__17;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__18;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__19;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__20;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__5;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__6;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__8;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__9;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__11;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__12;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__13;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__14;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__23(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__23___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_partialFixpoint___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___closed__0;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26_spec__31(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26_spec__31___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__10___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__4;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__4;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__5;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__6;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__7;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__8;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__9;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__10;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__11;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__12;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__13;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__4(lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__4;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__5;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__6;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__7;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__8;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__9;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__10;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__11;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27_spec__33(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_partialFixpoint___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___closed__0;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___closed__1;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___closed__2;
static lean_once_cell_t l_Lean_Elab_partialFixpoint___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_partialFixpoint___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0(void){
_start:
{
lean_object* v___f_1_; 
v___f_1_ = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return v___f_1_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___f_8_; lean_object* v___x_710__overap_9_; lean_object* v___x_10_; 
v___f_8_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0);
v___x_710__overap_9_ = lean_panic_fn_borrowed(v___f_8_, v_msg_2_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_10_ = lean_apply_5(v___x_710__overap_9_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___boxed(lean_object* v_msg_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0(v_msg_11_, v___y_12_, v___y_13_, v___y_14_, v___y_15_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
lean_dec(v___y_13_);
lean_dec_ref(v___y_12_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1_spec__2(lean_object* v_xs_18_, lean_object* v_v_19_, lean_object* v_i_20_){
_start:
{
lean_object* v___x_21_; uint8_t v___x_22_; 
v___x_21_ = lean_array_get_size(v_xs_18_);
v___x_22_ = lean_nat_dec_lt(v_i_20_, v___x_21_);
if (v___x_22_ == 0)
{
lean_object* v___x_23_; 
lean_dec(v_i_20_);
v___x_23_ = lean_box(0);
return v___x_23_;
}
else
{
lean_object* v___x_24_; uint8_t v___x_25_; 
v___x_24_ = lean_array_fget_borrowed(v_xs_18_, v_i_20_);
v___x_25_ = lean_name_eq(v___x_24_, v_v_19_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(1u);
v___x_27_ = lean_nat_add(v_i_20_, v___x_26_);
lean_dec(v_i_20_);
v_i_20_ = v___x_27_;
goto _start;
}
else
{
lean_object* v___x_29_; 
v___x_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_29_, 0, v_i_20_);
return v___x_29_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1_spec__2___boxed(lean_object* v_xs_30_, lean_object* v_v_31_, lean_object* v_i_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1_spec__2(v_xs_30_, v_v_31_, v_i_32_);
lean_dec(v_v_31_);
lean_dec_ref(v_xs_30_);
return v_res_33_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1(lean_object* v_xs_34_, lean_object* v_v_35_){
_start:
{
lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_36_ = lean_unsigned_to_nat(0u);
v___x_37_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1_spec__2(v_xs_34_, v_v_35_, v___x_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1___boxed(lean_object* v_xs_38_, lean_object* v_v_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1(v_xs_38_, v_v_39_);
lean_dec(v_v_39_);
lean_dec_ref(v_xs_38_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1(lean_object* v_xs_41_, lean_object* v_v_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Array_finIdxOf_x3f___at___00Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1_spec__1(v_xs_41_, v_v_42_);
if (lean_obj_tag(v___x_43_) == 0)
{
lean_object* v___x_44_; 
v___x_44_ = lean_box(0);
return v___x_44_;
}
else
{
lean_object* v_val_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_52_; 
v_val_45_ = lean_ctor_get(v___x_43_, 0);
v_isSharedCheck_52_ = !lean_is_exclusive(v___x_43_);
if (v_isSharedCheck_52_ == 0)
{
v___x_47_ = v___x_43_;
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_val_45_);
lean_dec(v___x_43_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_52_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_50_; 
if (v_isShared_48_ == 0)
{
v___x_50_ = v___x_47_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v_val_45_);
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
}
LEAN_EXPORT lean_object* l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1___boxed(lean_object* v_xs_53_, lean_object* v_v_54_){
_start:
{
lean_object* v_res_55_; 
v_res_55_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1(v_xs_53_, v_v_54_);
lean_dec(v_v_54_);
lean_dec_ref(v_xs_53_);
return v_res_55_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__0(void){
_start:
{
lean_object* v___x_56_; lean_object* v_dummy_57_; 
v___x_56_ = lean_box(0);
v_dummy_57_ = l_Lean_Expr_sort___override(v___x_56_);
return v_dummy_57_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Array_instInhabited(lean_box(0));
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0(lean_object* v_recFnNames_59_, lean_object* v_perms_60_, lean_object* v___x_61_, lean_object* v_a_62_, lean_object* v_f_63_, lean_object* v_e_64_){
_start:
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = l_Lean_Expr_getAppFn(v_e_64_);
v___x_66_ = l_Lean_Expr_isConst(v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; 
lean_dec_ref(v___x_65_);
lean_dec_ref(v_e_64_);
lean_dec_ref(v_f_63_);
lean_dec_ref(v_a_62_);
v___x_67_ = lean_box(0);
return v___x_67_;
}
else
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = l_Lean_Expr_constName_x21(v___x_65_);
lean_dec_ref(v___x_65_);
v___x_69_ = l_Array_idxOf_x3f___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__1(v_recFnNames_59_, v___x_68_);
lean_dec(v___x_68_);
if (lean_obj_tag(v___x_69_) == 0)
{
lean_object* v___x_70_; 
lean_dec_ref(v_e_64_);
lean_dec_ref(v_f_63_);
lean_dec_ref(v_a_62_);
v___x_70_ = lean_box(0);
return v___x_70_;
}
else
{
lean_object* v_val_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_89_; 
v_val_71_ = lean_ctor_get(v___x_69_, 0);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_69_);
if (v_isSharedCheck_89_ == 0)
{
v___x_73_ = v___x_69_;
v_isShared_74_ = v_isSharedCheck_89_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_val_71_);
lean_dec(v___x_69_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_89_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v_dummy_75_; lean_object* v_nargs_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_87_; 
v_dummy_75_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__0);
v_nargs_76_ = l_Lean_Expr_getAppNumArgs(v_e_64_);
lean_inc(v_nargs_76_);
v___x_77_ = lean_mk_array(v_nargs_76_, v_dummy_75_);
v___x_78_ = lean_unsigned_to_nat(1u);
v___x_79_ = lean_nat_sub(v_nargs_76_, v___x_78_);
lean_dec(v_nargs_76_);
v___x_80_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_64_, v___x_77_, v___x_79_);
v___x_81_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1);
v___x_82_ = lean_array_get_borrowed(v___x_81_, v_perms_60_, v_val_71_);
v___x_83_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v___x_82_, v___x_80_);
lean_dec_ref(v___x_80_);
v___x_84_ = l_Lean_Meta_PProdN_proj(v___x_61_, v_val_71_, v_a_62_, v_f_63_);
lean_dec(v_val_71_);
v___x_85_ = l_Lean_mkAppN(v___x_84_, v___x_83_);
lean_dec_ref(v___x_83_);
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 0, v___x_85_);
v___x_87_ = v___x_73_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___boxed(lean_object* v_recFnNames_90_, lean_object* v_perms_91_, lean_object* v___x_92_, lean_object* v_a_93_, lean_object* v_f_94_, lean_object* v_e_95_){
_start:
{
lean_object* v_res_96_; 
v_res_96_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0(v_recFnNames_90_, v_perms_91_, v___x_92_, v_a_93_, v_f_94_, v_e_95_);
lean_dec(v___x_92_);
lean_dec_ref(v_perms_91_);
lean_dec_ref(v_recFnNames_90_);
return v_res_96_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_97_; 
v___x_97_ = lean_mk_string_unchecked("Lean.Elab.PreDefinition.PartialFixpoint.Main", 44, 44);
return v___x_97_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.PartialFixpoint.Main.0.Lean.Elab.replaceRecApps", 80, 80);
return v___x_98_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__2(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_mk_string_unchecked("assertion violation: recFnNames.size = fixedParamPerms.perms.size\n  ", 68, 68);
return v___x_99_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__3(void){
_start:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_100_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__2);
v___x_101_ = lean_unsigned_to_nat(2u);
v___x_102_ = lean_unsigned_to_nat(25u);
v___x_103_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__1);
v___x_104_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0);
v___x_105_ = l_mkPanicMessageWithDecl(v___x_104_, v___x_103_, v___x_102_, v___x_101_, v___x_100_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps(lean_object* v_recFnNames_106_, lean_object* v_fixedParamPerms_107_, lean_object* v_f_108_, lean_object* v_e_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_perms_115_; lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; 
v_perms_115_ = lean_ctor_get(v_fixedParamPerms_107_, 1);
lean_inc_ref(v_perms_115_);
lean_dec_ref(v_fixedParamPerms_107_);
v___x_116_ = lean_array_get_size(v_recFnNames_106_);
v___x_117_ = lean_array_get_size(v_perms_115_);
v___x_118_ = lean_nat_dec_eq(v___x_116_, v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; 
lean_dec_ref(v_perms_115_);
lean_dec_ref(v_f_108_);
lean_dec_ref(v_recFnNames_106_);
v___x_119_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__3);
v___x_120_ = l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0(v___x_119_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
return v___x_120_;
}
else
{
lean_object* v___x_121_; 
lean_inc(v_a_113_);
lean_inc_ref(v_a_112_);
lean_inc(v_a_111_);
lean_inc_ref(v_a_110_);
lean_inc_ref(v_f_108_);
v___x_121_ = lean_infer_type(v_f_108_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_131_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_131_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_131_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_131_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___f_126_; lean_object* v___x_127_; lean_object* v___x_129_; 
v___f_126_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___boxed), 6, 5);
lean_closure_set(v___f_126_, 0, v_recFnNames_106_);
lean_closure_set(v___f_126_, 1, v_perms_115_);
lean_closure_set(v___f_126_, 2, v___x_116_);
lean_closure_set(v___f_126_, 3, v_a_122_);
lean_closure_set(v___f_126_, 4, v_f_108_);
v___x_127_ = lean_replace_expr(v___f_126_, v_e_109_);
lean_dec_ref(v___f_126_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_127_);
v___x_129_ = v___x_124_;
goto v_reusejp_128_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_127_);
v___x_129_ = v_reuseFailAlloc_130_;
goto v_reusejp_128_;
}
v_reusejp_128_:
{
return v___x_129_;
}
}
}
else
{
lean_dec_ref(v_perms_115_);
lean_dec_ref(v_f_108_);
lean_dec_ref(v_recFnNames_106_);
return v___x_121_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___boxed(lean_object* v_recFnNames_132_, lean_object* v_fixedParamPerms_133_, lean_object* v_f_134_, lean_object* v_e_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps(v_recFnNames_132_, v_fixedParamPerms_133_, v_f_134_, v_e_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
lean_dec_ref(v_e_135_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___lam__0(lean_object* v_k_142_, lean_object* v_b_143_, lean_object* v_c_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v___x_150_; 
lean_inc(v___y_148_);
lean_inc_ref(v___y_147_);
lean_inc(v___y_146_);
lean_inc_ref(v___y_145_);
v___x_150_ = lean_apply_7(v_k_142_, v_b_143_, v_c_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, lean_box(0));
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___lam__0___boxed(lean_object* v_k_151_, lean_object* v_b_152_, lean_object* v_c_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___lam__0(v_k_151_, v_b_152_, v_c_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg(lean_object* v_e_160_, lean_object* v_k_161_, uint8_t v_cleanupAnnotations_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v___f_168_; uint8_t v___x_169_; uint8_t v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v___f_168_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_168_, 0, v_k_161_);
v___x_169_ = 1;
v___x_170_ = 0;
v___x_171_ = lean_box(0);
v___x_172_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_160_, v___x_169_, v___x_170_, v___x_169_, v___x_170_, v___x_171_, v___f_168_, v_cleanupAnnotations_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_180_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_180_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_180_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_178_; 
if (v_isShared_176_ == 0)
{
v___x_178_ = v___x_175_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v_a_173_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
else
{
lean_object* v_a_181_; lean_object* v___x_183_; uint8_t v_isShared_184_; uint8_t v_isSharedCheck_188_; 
v_a_181_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_188_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_188_ == 0)
{
v___x_183_ = v___x_172_;
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
else
{
lean_inc(v_a_181_);
lean_dec(v___x_172_);
v___x_183_ = lean_box(0);
v_isShared_184_ = v_isSharedCheck_188_;
goto v_resetjp_182_;
}
v_resetjp_182_:
{
lean_object* v___x_186_; 
if (v_isShared_184_ == 0)
{
v___x_186_ = v___x_183_;
goto v_reusejp_185_;
}
else
{
lean_object* v_reuseFailAlloc_187_; 
v_reuseFailAlloc_187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_187_, 0, v_a_181_);
v___x_186_ = v_reuseFailAlloc_187_;
goto v_reusejp_185_;
}
v_reusejp_185_:
{
return v___x_186_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___boxed(lean_object* v_e_189_, lean_object* v_k_190_, lean_object* v_cleanupAnnotations_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_197_; lean_object* v_res_198_; 
v_cleanupAnnotations_boxed_197_ = lean_unbox(v_cleanupAnnotations_191_);
v_res_198_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg(v_e_189_, v_k_190_, v_cleanupAnnotations_boxed_197_, v___y_192_, v___y_193_, v___y_194_, v___y_195_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1(lean_object* v_00_u03b1_199_, lean_object* v_e_200_, lean_object* v_k_201_, uint8_t v_cleanupAnnotations_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v___x_208_; 
v___x_208_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg(v_e_200_, v_k_201_, v_cleanupAnnotations_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___boxed(lean_object* v_00_u03b1_209_, lean_object* v_e_210_, lean_object* v_k_211_, lean_object* v_cleanupAnnotations_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_218_; lean_object* v_res_219_; 
v_cleanupAnnotations_boxed_218_ = lean_unbox(v_cleanupAnnotations_212_);
v_res_219_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1(v_00_u03b1_209_, v_e_210_, v_k_211_, v_cleanupAnnotations_boxed_218_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
lean_dec(v___y_216_);
lean_dec_ref(v___y_215_);
lean_dec(v___y_214_);
lean_dec_ref(v___y_213_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___redArg(lean_object* v_e_220_, lean_object* v_maxFVars_221_, lean_object* v_k_222_, uint8_t v_cleanupAnnotations_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_, lean_object* v___y_227_){
_start:
{
lean_object* v___f_229_; uint8_t v___x_230_; uint8_t v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___f_229_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_229_, 0, v_k_222_);
v___x_230_ = 1;
v___x_231_ = 0;
v___x_232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_232_, 0, v_maxFVars_221_);
v___x_233_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_220_, v___x_230_, v___x_231_, v___x_230_, v___x_231_, v___x_232_, v___f_229_, v_cleanupAnnotations_223_, v___y_224_, v___y_225_, v___y_226_, v___y_227_);
lean_dec_ref(v___x_232_);
if (lean_obj_tag(v___x_233_) == 0)
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
v_a_234_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_233_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_233_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
}
}
}
else
{
lean_object* v_a_242_; lean_object* v___x_244_; uint8_t v_isShared_245_; uint8_t v_isSharedCheck_249_; 
v_a_242_ = lean_ctor_get(v___x_233_, 0);
v_isSharedCheck_249_ = !lean_is_exclusive(v___x_233_);
if (v_isSharedCheck_249_ == 0)
{
v___x_244_ = v___x_233_;
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
else
{
lean_inc(v_a_242_);
lean_dec(v___x_233_);
v___x_244_ = lean_box(0);
v_isShared_245_ = v_isSharedCheck_249_;
goto v_resetjp_243_;
}
v_resetjp_243_:
{
lean_object* v___x_247_; 
if (v_isShared_245_ == 0)
{
v___x_247_ = v___x_244_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v_a_242_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___redArg___boxed(lean_object* v_e_250_, lean_object* v_maxFVars_251_, lean_object* v_k_252_, lean_object* v_cleanupAnnotations_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_259_; lean_object* v_res_260_; 
v_cleanupAnnotations_boxed_259_ = lean_unbox(v_cleanupAnnotations_253_);
v_res_260_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___redArg(v_e_250_, v_maxFVars_251_, v_k_252_, v_cleanupAnnotations_boxed_259_, v___y_254_, v___y_255_, v___y_256_, v___y_257_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3(lean_object* v_00_u03b1_261_, lean_object* v_e_262_, lean_object* v_maxFVars_263_, lean_object* v_k_264_, uint8_t v_cleanupAnnotations_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___x_271_; 
v___x_271_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___redArg(v_e_262_, v_maxFVars_263_, v_k_264_, v_cleanupAnnotations_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
return v___x_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___boxed(lean_object* v_00_u03b1_272_, lean_object* v_e_273_, lean_object* v_maxFVars_274_, lean_object* v_k_275_, lean_object* v_cleanupAnnotations_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_282_; lean_object* v_res_283_; 
v_cleanupAnnotations_boxed_282_ = lean_unbox(v_cleanupAnnotations_276_);
v_res_283_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3(v_00_u03b1_272_, v_e_273_, v_maxFVars_274_, v_k_275_, v_cleanupAnnotations_boxed_282_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__0(lean_object* v___x_284_, lean_object* v_a_285_, lean_object* v_e_286_){
_start:
{
uint8_t v___x_287_; 
v___x_287_ = lean_expr_eqv(v_e_286_, v___x_284_);
if (v___x_287_ == 0)
{
lean_object* v___x_288_; 
lean_dec_ref(v_a_285_);
v___x_288_ = lean_box(0);
return v___x_288_;
}
else
{
lean_object* v___x_289_; 
v___x_289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_289_, 0, v_a_285_);
return v___x_289_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__0___boxed(lean_object* v___x_290_, lean_object* v_a_291_, lean_object* v_e_292_){
_start:
{
lean_object* v_res_293_; 
v_res_293_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__0(v___x_290_, v_a_291_, v_e_292_);
lean_dec_ref(v_e_292_);
lean_dec_ref(v___x_290_);
return v_res_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__1(lean_object* v___x_294_, lean_object* v___x_295_, lean_object* v_a_296_, lean_object* v_f_297_, lean_object* v_e_298_, lean_object* v___y_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_){
_start:
{
lean_object* v___x_304_; lean_object* v___f_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_304_ = lean_array_get_borrowed(v___x_294_, v_f_297_, v___x_295_);
lean_inc(v___x_304_);
v___f_305_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_305_, 0, v___x_304_);
lean_closure_set(v___f_305_, 1, v_a_296_);
v___x_306_ = lean_replace_expr(v___f_305_, v_e_298_);
lean_dec_ref(v___f_305_);
v___x_307_ = l_Lean_Meta_PProdN_reduceProjs(v___x_306_, v___y_299_, v___y_300_, v___y_301_, v___y_302_);
if (lean_obj_tag(v___x_307_) == 0)
{
lean_object* v_a_308_; lean_object* v___x_309_; 
v_a_308_ = lean_ctor_get(v___x_307_, 0);
lean_inc(v_a_308_);
lean_dec_ref(v___x_307_);
v___x_309_ = l_Lean_Core_betaReduce(v_a_308_, v___y_301_, v___y_302_);
return v___x_309_;
}
else
{
return v___x_307_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__1___boxed(lean_object* v___x_310_, lean_object* v___x_311_, lean_object* v_a_312_, lean_object* v_f_313_, lean_object* v_e_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__1(v___x_310_, v___x_311_, v_a_312_, v_f_313_, v_e_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
lean_dec(v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec_ref(v_e_314_);
lean_dec_ref(v_f_313_);
lean_dec(v___x_311_);
lean_dec_ref(v___x_310_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__0(lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
if (lean_obj_tag(v_a_321_) == 0)
{
lean_object* v___x_323_; 
v___x_323_ = l_List_reverse___redArg(v_a_322_);
return v___x_323_;
}
else
{
lean_object* v_head_324_; lean_object* v_tail_325_; lean_object* v___x_327_; uint8_t v_isShared_328_; uint8_t v_isSharedCheck_334_; 
v_head_324_ = lean_ctor_get(v_a_321_, 0);
v_tail_325_ = lean_ctor_get(v_a_321_, 1);
v_isSharedCheck_334_ = !lean_is_exclusive(v_a_321_);
if (v_isSharedCheck_334_ == 0)
{
v___x_327_ = v_a_321_;
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
else
{
lean_inc(v_tail_325_);
lean_inc(v_head_324_);
lean_dec(v_a_321_);
v___x_327_ = lean_box(0);
v_isShared_328_ = v_isSharedCheck_334_;
goto v_resetjp_326_;
}
v_resetjp_326_:
{
lean_object* v___x_329_; lean_object* v___x_331_; 
v___x_329_ = l_Lean_mkLevelParam(v_head_324_);
if (v_isShared_328_ == 0)
{
lean_ctor_set(v___x_327_, 1, v_a_322_);
lean_ctor_set(v___x_327_, 0, v___x_329_);
v___x_331_ = v___x_327_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_329_);
lean_ctor_set(v_reuseFailAlloc_333_, 1, v_a_322_);
v___x_331_ = v_reuseFailAlloc_333_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
v_a_321_ = v_tail_325_;
v_a_322_ = v___x_331_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___lam__0(lean_object* v___x_335_, lean_object* v___x_336_, lean_object* v_fixedArgs_337_, uint8_t v_isZero_338_, lean_object* v_xs_339_, lean_object* v_x_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_levelParams_346_; lean_object* v_declName_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; uint8_t v___x_353_; uint8_t v___x_354_; lean_object* v___x_355_; 
v_levelParams_346_ = lean_ctor_get(v___x_335_, 1);
lean_inc(v_levelParams_346_);
v_declName_347_ = lean_ctor_get(v___x_335_, 3);
lean_inc(v_declName_347_);
lean_dec_ref(v___x_335_);
lean_inc_ref(v_xs_339_);
v___x_348_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v___x_336_, v_fixedArgs_337_, v_xs_339_);
v___x_349_ = lean_box(0);
v___x_350_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__0(v_levelParams_346_, v___x_349_);
v___x_351_ = l_Lean_Expr_const___override(v_declName_347_, v___x_350_);
v___x_352_ = l_Lean_mkAppN(v___x_351_, v___x_348_);
lean_dec_ref(v___x_348_);
v___x_353_ = 1;
v___x_354_ = 1;
v___x_355_ = l_Lean_Meta_mkLambdaFVars(v_xs_339_, v___x_352_, v_isZero_338_, v___x_353_, v___x_353_, v___x_353_, v___x_354_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec_ref(v_xs_339_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___lam__0___boxed(lean_object* v___x_356_, lean_object* v___x_357_, lean_object* v_fixedArgs_358_, lean_object* v_isZero_359_, lean_object* v_xs_360_, lean_object* v_x_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
uint8_t v_isZero_boxed_367_; lean_object* v_res_368_; 
v_isZero_boxed_367_ = lean_unbox(v_isZero_359_);
v_res_368_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___lam__0(v___x_356_, v___x_357_, v_fixedArgs_358_, v_isZero_boxed_367_, v_xs_360_, v_x_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
lean_dec_ref(v_x_361_);
lean_dec_ref(v_fixedArgs_358_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg(lean_object* v_fixedParamPerms_369_, lean_object* v_fixedArgs_370_, lean_object* v_as_371_, lean_object* v_i_372_, lean_object* v_j_373_, lean_object* v_bs_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_zero_380_; uint8_t v_isZero_381_; 
v_zero_380_ = lean_unsigned_to_nat(0u);
v_isZero_381_ = lean_nat_dec_eq(v_i_372_, v_zero_380_);
if (v_isZero_381_ == 1)
{
lean_object* v___x_382_; 
lean_dec(v_j_373_);
lean_dec(v_i_372_);
lean_dec_ref(v_fixedArgs_370_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v_bs_374_);
return v___x_382_;
}
else
{
lean_object* v_perms_383_; lean_object* v___x_384_; lean_object* v_value_385_; lean_object* v___x_386_; lean_object* v_one_387_; lean_object* v_n_388_; lean_object* v___y_390_; lean_object* v___x_403_; lean_object* v___x_404_; 
v_perms_383_ = lean_ctor_get(v_fixedParamPerms_369_, 1);
v___x_384_ = lean_array_fget_borrowed(v_as_371_, v_j_373_);
v_value_385_ = lean_ctor_get(v___x_384_, 7);
v___x_386_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1);
v_one_387_ = lean_unsigned_to_nat(1u);
v_n_388_ = lean_nat_sub(v_i_372_, v_one_387_);
lean_dec(v_i_372_);
v___x_403_ = lean_array_get_borrowed(v___x_386_, v_perms_383_, v_j_373_);
lean_inc_ref(v_fixedArgs_370_);
lean_inc_ref(v_value_385_);
lean_inc(v___x_403_);
v___x_404_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_403_, v_value_385_, v_fixedArgs_370_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_406_; lean_object* v___f_407_; lean_object* v___x_408_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
lean_inc(v_a_405_);
lean_dec_ref(v___x_404_);
v___x_406_ = lean_box(v_isZero_381_);
lean_inc_ref(v_fixedArgs_370_);
lean_inc(v___x_403_);
lean_inc(v___x_384_);
v___f_407_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_407_, 0, v___x_384_);
lean_closure_set(v___f_407_, 1, v___x_403_);
lean_closure_set(v___f_407_, 2, v_fixedArgs_370_);
lean_closure_set(v___f_407_, 3, v___x_406_);
v___x_408_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__1___redArg(v_a_405_, v___f_407_, v_isZero_381_, v___y_375_, v___y_376_, v___y_377_, v___y_378_);
v___y_390_ = v___x_408_;
goto v___jp_389_;
}
else
{
v___y_390_ = v___x_404_;
goto v___jp_389_;
}
v___jp_389_:
{
if (lean_obj_tag(v___y_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_a_391_ = lean_ctor_get(v___y_390_, 0);
lean_inc(v_a_391_);
lean_dec_ref(v___y_390_);
v___x_392_ = lean_nat_add(v_j_373_, v_one_387_);
lean_dec(v_j_373_);
v___x_393_ = lean_array_push(v_bs_374_, v_a_391_);
v_i_372_ = v_n_388_;
v_j_373_ = v___x_392_;
v_bs_374_ = v___x_393_;
goto _start;
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
lean_dec(v_n_388_);
lean_dec_ref(v_bs_374_);
lean_dec(v_j_373_);
lean_dec_ref(v_fixedArgs_370_);
v_a_395_ = lean_ctor_get(v___y_390_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___y_390_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___y_390_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___y_390_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg___boxed(lean_object* v_fixedParamPerms_409_, lean_object* v_fixedArgs_410_, lean_object* v_as_411_, lean_object* v_i_412_, lean_object* v_j_413_, lean_object* v_bs_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg(v_fixedParamPerms_409_, v_fixedArgs_410_, v_as_411_, v_i_412_, v_j_413_, v_bs_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec_ref(v_as_411_);
lean_dec_ref(v_fixedParamPerms_409_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg(lean_object* v_as_421_, size_t v_i_422_, size_t v_stop_423_, lean_object* v_b_424_, lean_object* v___y_425_, lean_object* v___y_426_){
_start:
{
uint8_t v___x_428_; 
v___x_428_ = lean_usize_dec_eq(v_i_422_, v_stop_423_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_array_uget_borrowed(v_as_421_, v_i_422_);
v___x_430_ = l_Lean_Elab_addAsAxiom___redArg(v___x_429_, v___y_425_, v___y_426_);
if (lean_obj_tag(v___x_430_) == 0)
{
lean_object* v_a_431_; size_t v___x_432_; size_t v___x_433_; 
v_a_431_ = lean_ctor_get(v___x_430_, 0);
lean_inc(v_a_431_);
lean_dec_ref(v___x_430_);
v___x_432_ = ((size_t)1ULL);
v___x_433_ = lean_usize_add(v_i_422_, v___x_432_);
v_i_422_ = v___x_433_;
v_b_424_ = v_a_431_;
goto _start;
}
else
{
return v___x_430_;
}
}
else
{
lean_object* v___x_435_; 
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v_b_424_);
return v___x_435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg___boxed(lean_object* v_as_436_, lean_object* v_i_437_, lean_object* v_stop_438_, lean_object* v_b_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_){
_start:
{
size_t v_i_boxed_443_; size_t v_stop_boxed_444_; lean_object* v_res_445_; 
v_i_boxed_443_ = lean_unbox_usize(v_i_437_);
lean_dec(v_i_437_);
v_stop_boxed_444_ = lean_unbox_usize(v_stop_438_);
lean_dec(v_stop_438_);
v_res_445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg(v_as_436_, v_i_boxed_443_, v_stop_boxed_444_, v_b_439_, v___y_440_, v___y_441_);
lean_dec(v___y_441_);
lean_dec_ref(v___y_440_);
lean_dec_ref(v_as_436_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__2(lean_object* v___x_446_, lean_object* v_fixedParamPerms_447_, lean_object* v_fixedArgs_448_, lean_object* v_preDefs_449_, lean_object* v___x_450_, lean_object* v___x_451_, lean_object* v_F_452_, lean_object* v_k_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v___y_497_; uint8_t v___x_506_; 
v___x_506_ = lean_nat_dec_lt(v___x_450_, v___x_446_);
if (v___x_506_ == 0)
{
goto v___jp_459_;
}
else
{
lean_object* v___x_507_; uint8_t v___x_508_; 
v___x_507_ = lean_box(0);
v___x_508_ = lean_nat_dec_le(v___x_446_, v___x_446_);
if (v___x_508_ == 0)
{
if (v___x_506_ == 0)
{
goto v___jp_459_;
}
else
{
size_t v___x_509_; size_t v___x_510_; lean_object* v___x_511_; 
v___x_509_ = ((size_t)0ULL);
v___x_510_ = lean_usize_of_nat(v___x_446_);
v___x_511_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg(v_preDefs_449_, v___x_509_, v___x_510_, v___x_507_, v___y_456_, v___y_457_);
v___y_497_ = v___x_511_;
goto v___jp_496_;
}
}
else
{
size_t v___x_512_; size_t v___x_513_; lean_object* v___x_514_; 
v___x_512_ = ((size_t)0ULL);
v___x_513_ = lean_usize_of_nat(v___x_446_);
v___x_514_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg(v_preDefs_449_, v___x_512_, v___x_513_, v___x_507_, v___y_456_, v___y_457_);
v___y_497_ = v___x_514_;
goto v___jp_496_;
}
}
v___jp_459_:
{
lean_object* v___x_460_; lean_object* v___x_461_; 
v___x_460_ = lean_mk_empty_array_with_capacity(v___x_446_);
lean_inc(v___x_450_);
v___x_461_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg(v_fixedParamPerms_447_, v_fixedArgs_448_, v_preDefs_449_, v___x_446_, v___x_450_, v___x_460_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
if (lean_obj_tag(v___x_461_) == 0)
{
lean_object* v_a_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v_a_462_ = lean_ctor_get(v___x_461_, 0);
lean_inc(v_a_462_);
lean_dec_ref(v___x_461_);
v___x_463_ = l_Lean_Level_ofNat(v___x_450_);
v___x_464_ = l_Lean_Meta_PProdN_mk(v___x_463_, v_a_462_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
if (lean_obj_tag(v___x_464_) == 0)
{
lean_object* v_a_465_; lean_object* v___f_466_; lean_object* v___x_467_; uint8_t v___x_468_; lean_object* v___x_469_; 
v_a_465_ = lean_ctor_get(v___x_464_, 0);
lean_inc(v_a_465_);
lean_dec_ref(v___x_464_);
v___f_466_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__1___boxed), 10, 3);
lean_closure_set(v___f_466_, 0, v___x_451_);
lean_closure_set(v___f_466_, 1, v___x_450_);
lean_closure_set(v___f_466_, 2, v_a_465_);
v___x_467_ = lean_unsigned_to_nat(1u);
v___x_468_ = 0;
v___x_469_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__3___redArg(v_F_452_, v___x_467_, v___f_466_, v___x_468_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_471_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref(v___x_469_);
v___x_471_ = lean_apply_6(v_k_453_, v_a_470_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, lean_box(0));
return v___x_471_;
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec_ref(v_k_453_);
v_a_472_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_469_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_469_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_477_; 
if (v_isShared_475_ == 0)
{
v___x_477_ = v___x_474_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_a_472_);
v___x_477_ = v_reuseFailAlloc_478_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
return v___x_477_;
}
}
}
}
else
{
lean_object* v_a_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec_ref(v_k_453_);
lean_dec_ref(v_F_452_);
lean_dec_ref(v___x_451_);
lean_dec(v___x_450_);
v_a_480_ = lean_ctor_get(v___x_464_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_464_);
if (v_isSharedCheck_487_ == 0)
{
v___x_482_ = v___x_464_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_a_480_);
lean_dec(v___x_464_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_480_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
else
{
lean_object* v_a_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec_ref(v_k_453_);
lean_dec_ref(v_F_452_);
lean_dec_ref(v___x_451_);
lean_dec(v___x_450_);
v_a_488_ = lean_ctor_get(v___x_461_, 0);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_461_);
if (v_isSharedCheck_495_ == 0)
{
v___x_490_ = v___x_461_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_a_488_);
lean_dec(v___x_461_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_488_);
v___x_493_ = v_reuseFailAlloc_494_;
goto v_reusejp_492_;
}
v_reusejp_492_:
{
return v___x_493_;
}
}
}
}
v___jp_496_:
{
if (lean_obj_tag(v___y_497_) == 0)
{
lean_dec_ref(v___y_497_);
goto v___jp_459_;
}
else
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_505_; 
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
lean_dec_ref(v_k_453_);
lean_dec_ref(v_F_452_);
lean_dec_ref(v___x_451_);
lean_dec(v___x_450_);
lean_dec_ref(v_fixedArgs_448_);
lean_dec(v___x_446_);
v_a_498_ = lean_ctor_get(v___y_497_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___y_497_);
if (v_isSharedCheck_505_ == 0)
{
v___x_500_ = v___y_497_;
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___y_497_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__2___boxed(lean_object* v___x_515_, lean_object* v_fixedParamPerms_516_, lean_object* v_fixedArgs_517_, lean_object* v_preDefs_518_, lean_object* v___x_519_, lean_object* v___x_520_, lean_object* v_F_521_, lean_object* v_k_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__2(v___x_515_, v_fixedParamPerms_516_, v_fixedArgs_517_, v_preDefs_518_, v___x_519_, v___x_520_, v_F_521_, v_k_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_);
lean_dec_ref(v_preDefs_518_);
lean_dec_ref(v_fixedParamPerms_516_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7(lean_object* v_msgData_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
lean_object* v___x_535_; lean_object* v_env_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v_mctx_539_; lean_object* v_lctx_540_; lean_object* v_options_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_535_ = lean_st_ref_get(v___y_533_);
v_env_536_ = lean_ctor_get(v___x_535_, 0);
lean_inc_ref(v_env_536_);
lean_dec(v___x_535_);
v___x_537_ = lean_st_ref_get(v___y_533_);
lean_dec(v___x_537_);
v___x_538_ = lean_st_ref_get(v___y_531_);
v_mctx_539_ = lean_ctor_get(v___x_538_, 0);
lean_inc_ref(v_mctx_539_);
lean_dec(v___x_538_);
v_lctx_540_ = lean_ctor_get(v___y_530_, 2);
v_options_541_ = lean_ctor_get(v___y_532_, 2);
lean_inc_ref(v_options_541_);
lean_inc_ref(v_lctx_540_);
v___x_542_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_542_, 0, v_env_536_);
lean_ctor_set(v___x_542_, 1, v_mctx_539_);
lean_ctor_set(v___x_542_, 2, v_lctx_540_);
lean_ctor_set(v___x_542_, 3, v_options_541_);
v___x_543_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_542_);
lean_ctor_set(v___x_543_, 1, v_msgData_529_);
v___x_544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7___boxed(lean_object* v_msgData_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7(v_msgData_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_);
lean_dec(v___y_549_);
lean_dec_ref(v___y_548_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(lean_object* v_msg_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_){
_start:
{
lean_object* v_ref_558_; lean_object* v___x_559_; lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_568_; 
v_ref_558_ = lean_ctor_get(v___y_555_, 5);
v___x_559_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7(v_msg_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
v_a_560_ = lean_ctor_get(v___x_559_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_559_);
if (v_isSharedCheck_568_ == 0)
{
v___x_562_ = v___x_559_;
v_isShared_563_ = v_isSharedCheck_568_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_559_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_568_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_564_; lean_object* v___x_566_; 
lean_inc(v_ref_558_);
v___x_564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_564_, 0, v_ref_558_);
lean_ctor_set(v___x_564_, 1, v_a_560_);
if (v_isShared_563_ == 0)
{
lean_ctor_set_tag(v___x_562_, 1);
lean_ctor_set(v___x_562_, 0, v___x_564_);
v___x_566_ = v___x_562_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_564_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg___boxed(lean_object* v_msg_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_){
_start:
{
lean_object* v_res_575_; 
v_res_575_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(v_msg_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
return v_res_575_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_576_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__0, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__0);
v___x_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
return v___x_578_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_579_; lean_object* v___x_580_; 
v___x_579_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1);
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v___x_579_);
lean_ctor_set(v___x_580_, 1, v___x_579_);
return v___x_580_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_581_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__1);
v___x_582_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
lean_ctor_set(v___x_582_, 1, v___x_581_);
lean_ctor_set(v___x_582_, 2, v___x_581_);
lean_ctor_set(v___x_582_, 3, v___x_581_);
lean_ctor_set(v___x_582_, 4, v___x_581_);
lean_ctor_set(v___x_582_, 5, v___x_581_);
return v___x_582_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg(lean_object* v_env_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v___x_587_; lean_object* v_nextMacroScope_588_; lean_object* v_ngen_589_; lean_object* v_auxDeclNGen_590_; lean_object* v_traceState_591_; lean_object* v_messages_592_; lean_object* v_infoState_593_; lean_object* v_snapshotTasks_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_621_; 
v___x_587_ = lean_st_ref_take(v___y_585_);
v_nextMacroScope_588_ = lean_ctor_get(v___x_587_, 1);
v_ngen_589_ = lean_ctor_get(v___x_587_, 2);
v_auxDeclNGen_590_ = lean_ctor_get(v___x_587_, 3);
v_traceState_591_ = lean_ctor_get(v___x_587_, 4);
v_messages_592_ = lean_ctor_get(v___x_587_, 6);
v_infoState_593_ = lean_ctor_get(v___x_587_, 7);
v_snapshotTasks_594_ = lean_ctor_get(v___x_587_, 8);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_621_ == 0)
{
lean_object* v_unused_622_; lean_object* v_unused_623_; 
v_unused_622_ = lean_ctor_get(v___x_587_, 5);
lean_dec(v_unused_622_);
v_unused_623_ = lean_ctor_get(v___x_587_, 0);
lean_dec(v_unused_623_);
v___x_596_ = v___x_587_;
v_isShared_597_ = v_isSharedCheck_621_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_snapshotTasks_594_);
lean_inc(v_infoState_593_);
lean_inc(v_messages_592_);
lean_inc(v_traceState_591_);
lean_inc(v_auxDeclNGen_590_);
lean_inc(v_ngen_589_);
lean_inc(v_nextMacroScope_588_);
lean_dec(v___x_587_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_621_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_600_; 
v___x_598_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 5, v___x_598_);
lean_ctor_set(v___x_596_, 0, v_env_583_);
v___x_600_ = v___x_596_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_env_583_);
lean_ctor_set(v_reuseFailAlloc_620_, 1, v_nextMacroScope_588_);
lean_ctor_set(v_reuseFailAlloc_620_, 2, v_ngen_589_);
lean_ctor_set(v_reuseFailAlloc_620_, 3, v_auxDeclNGen_590_);
lean_ctor_set(v_reuseFailAlloc_620_, 4, v_traceState_591_);
lean_ctor_set(v_reuseFailAlloc_620_, 5, v___x_598_);
lean_ctor_set(v_reuseFailAlloc_620_, 6, v_messages_592_);
lean_ctor_set(v_reuseFailAlloc_620_, 7, v_infoState_593_);
lean_ctor_set(v_reuseFailAlloc_620_, 8, v_snapshotTasks_594_);
v___x_600_ = v_reuseFailAlloc_620_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v_mctx_604_; lean_object* v_zetaDeltaFVarIds_605_; lean_object* v_postponed_606_; lean_object* v_diag_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_618_; 
v___x_601_ = lean_st_ref_set(v___y_585_, v___x_600_);
v___x_602_ = lean_st_ref_get(v___y_585_);
lean_dec(v___x_602_);
v___x_603_ = lean_st_ref_take(v___y_584_);
v_mctx_604_ = lean_ctor_get(v___x_603_, 0);
v_zetaDeltaFVarIds_605_ = lean_ctor_get(v___x_603_, 2);
v_postponed_606_ = lean_ctor_get(v___x_603_, 3);
v_diag_607_ = lean_ctor_get(v___x_603_, 4);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_603_);
if (v_isSharedCheck_618_ == 0)
{
lean_object* v_unused_619_; 
v_unused_619_ = lean_ctor_get(v___x_603_, 1);
lean_dec(v_unused_619_);
v___x_609_ = v___x_603_;
v_isShared_610_ = v_isSharedCheck_618_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_diag_607_);
lean_inc(v_postponed_606_);
lean_inc(v_zetaDeltaFVarIds_605_);
lean_inc(v_mctx_604_);
lean_dec(v___x_603_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_618_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
lean_object* v___x_611_; lean_object* v___x_613_; 
v___x_611_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 1, v___x_611_);
v___x_613_ = v___x_609_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_mctx_604_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v___x_611_);
lean_ctor_set(v_reuseFailAlloc_617_, 2, v_zetaDeltaFVarIds_605_);
lean_ctor_set(v_reuseFailAlloc_617_, 3, v_postponed_606_);
lean_ctor_set(v_reuseFailAlloc_617_, 4, v_diag_607_);
v___x_613_ = v_reuseFailAlloc_617_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_614_ = lean_st_ref_set(v___y_584_, v___x_613_);
v___x_615_ = lean_box(0);
v___x_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_616_, 0, v___x_615_);
return v___x_616_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___boxed(lean_object* v_env_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_){
_start:
{
lean_object* v_res_628_; 
v_res_628_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg(v_env_624_, v___y_625_, v___y_626_);
lean_dec(v___y_626_);
lean_dec(v___y_625_);
return v_res_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___redArg(lean_object* v_env_629_, lean_object* v_x_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v___x_636_; lean_object* v_env_637_; lean_object* v_a_639_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_636_ = lean_st_ref_get(v___y_634_);
v_env_637_ = lean_ctor_get(v___x_636_, 0);
lean_inc_ref(v_env_637_);
lean_dec(v___x_636_);
v___x_649_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg(v_env_629_, v___y_632_, v___y_634_);
lean_dec_ref(v___x_649_);
lean_inc(v___y_634_);
lean_inc_ref(v___y_633_);
lean_inc(v___y_632_);
lean_inc_ref(v___y_631_);
v___x_650_ = lean_apply_5(v_x_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, lean_box(0));
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_652_; lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_659_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_651_);
lean_dec_ref(v___x_650_);
v___x_652_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg(v_env_637_, v___y_632_, v___y_634_);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_659_ == 0)
{
lean_object* v_unused_660_; 
v_unused_660_ = lean_ctor_get(v___x_652_, 0);
lean_dec(v_unused_660_);
v___x_654_ = v___x_652_;
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
else
{
lean_dec(v___x_652_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_659_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_657_; 
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v_a_651_);
v___x_657_ = v___x_654_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_a_651_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
else
{
lean_object* v_a_661_; 
v_a_661_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_a_661_);
lean_dec_ref(v___x_650_);
v_a_639_ = v_a_661_;
goto v___jp_638_;
}
v___jp_638_:
{
lean_object* v___x_640_; lean_object* v___x_642_; uint8_t v_isShared_643_; uint8_t v_isSharedCheck_647_; 
v___x_640_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg(v_env_637_, v___y_632_, v___y_634_);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_647_ == 0)
{
lean_object* v_unused_648_; 
v_unused_648_ = lean_ctor_get(v___x_640_, 0);
lean_dec(v_unused_648_);
v___x_642_ = v___x_640_;
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
else
{
lean_dec(v___x_640_);
v___x_642_ = lean_box(0);
v_isShared_643_ = v_isSharedCheck_647_;
goto v_resetjp_641_;
}
v_resetjp_641_:
{
lean_object* v___x_645_; 
if (v_isShared_643_ == 0)
{
lean_ctor_set_tag(v___x_642_, 1);
lean_ctor_set(v___x_642_, 0, v_a_639_);
v___x_645_ = v___x_642_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_a_639_);
v___x_645_ = v_reuseFailAlloc_646_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
return v___x_645_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___redArg___boxed(lean_object* v_env_662_, lean_object* v_x_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v___y_667_, lean_object* v___y_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___redArg(v_env_662_, v_x_663_, v___y_664_, v___y_665_, v___y_666_, v___y_667_);
lean_dec(v___y_667_);
lean_dec_ref(v___y_666_);
lean_dec(v___y_665_);
lean_dec_ref(v___y_664_);
return v_res_669_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__0(void){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = lean_mk_string_unchecked("Expected lambda:", 16, 16);
return v___x_670_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__1(void){
_start:
{
lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_671_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__0);
v___x_672_ = l_Lean_stringToMessageData(v___x_671_);
return v___x_672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg(lean_object* v_preDefs_673_, lean_object* v_fixedParamPerms_674_, lean_object* v_fixedArgs_675_, lean_object* v_F_676_, lean_object* v_k_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v___x_683_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_688_; uint8_t v___x_696_; 
v___x_683_ = l_Lean_instInhabitedExpr;
v___x_696_ = l_Lean_Expr_isLambda(v_F_676_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v_a_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_708_; 
lean_dec_ref(v_k_677_);
lean_dec_ref(v_fixedArgs_675_);
lean_dec_ref(v_fixedParamPerms_674_);
lean_dec_ref(v_preDefs_673_);
v___x_697_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___closed__1);
v___x_698_ = l_Lean_indentExpr(v_F_676_);
v___x_699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_699_, 0, v___x_697_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(v___x_699_, v_a_678_, v_a_679_, v_a_680_, v_a_681_);
v_a_701_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_708_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_708_ == 0)
{
v___x_703_ = v___x_700_;
v_isShared_704_ = v_isSharedCheck_708_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_a_701_);
lean_dec(v___x_700_);
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
else
{
v___y_685_ = v_a_678_;
v___y_686_ = v_a_679_;
v___y_687_ = v_a_680_;
v___y_688_ = v_a_681_;
goto v___jp_684_;
}
v___jp_684_:
{
lean_object* v___x_689_; lean_object* v_env_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___f_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_689_ = lean_st_ref_get(v___y_688_);
v_env_690_ = lean_ctor_get(v___x_689_, 0);
lean_inc_ref(v_env_690_);
lean_dec(v___x_689_);
v___x_691_ = lean_unsigned_to_nat(0u);
v___x_692_ = lean_array_get_size(v_preDefs_673_);
v___f_693_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___lam__2___boxed), 13, 8);
lean_closure_set(v___f_693_, 0, v___x_692_);
lean_closure_set(v___f_693_, 1, v_fixedParamPerms_674_);
lean_closure_set(v___f_693_, 2, v_fixedArgs_675_);
lean_closure_set(v___f_693_, 3, v_preDefs_673_);
lean_closure_set(v___f_693_, 4, v___x_691_);
lean_closure_set(v___f_693_, 5, v___x_683_);
lean_closure_set(v___f_693_, 6, v_F_676_);
lean_closure_set(v___f_693_, 7, v_k_677_);
v___x_694_ = l_Lean_Environment_unlockAsync(v_env_690_);
v___x_695_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___redArg(v___x_694_, v___f_693_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
return v___x_695_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg___boxed(lean_object* v_preDefs_709_, lean_object* v_fixedParamPerms_710_, lean_object* v_fixedArgs_711_, lean_object* v_F_712_, lean_object* v_k_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg(v_preDefs_709_, v_fixedParamPerms_710_, v_fixedArgs_711_, v_F_712_, v_k_713_, v_a_714_, v_a_715_, v_a_716_, v_a_717_);
lean_dec(v_a_717_);
lean_dec_ref(v_a_716_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps(lean_object* v_00_u03b1_720_, lean_object* v_preDefs_721_, lean_object* v_fixedParamPerms_722_, lean_object* v_fixedArgs_723_, lean_object* v_F_724_, lean_object* v_k_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg(v_preDefs_721_, v_fixedParamPerms_722_, v_fixedArgs_723_, v_F_724_, v_k_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___boxed(lean_object* v_00_u03b1_732_, lean_object* v_preDefs_733_, lean_object* v_fixedParamPerms_734_, lean_object* v_fixedArgs_735_, lean_object* v_F_736_, lean_object* v_k_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps(v_00_u03b1_732_, v_preDefs_733_, v_fixedParamPerms_734_, v_fixedArgs_735_, v_F_736_, v_k_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_);
lean_dec(v_a_741_);
lean_dec_ref(v_a_740_);
lean_dec(v_a_739_);
lean_dec_ref(v_a_738_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2(lean_object* v_fixedParamPerms_744_, lean_object* v_fixedArgs_745_, lean_object* v_as_746_, lean_object* v_i_747_, lean_object* v_j_748_, lean_object* v_inv_749_, lean_object* v_bs_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___redArg(v_fixedParamPerms_744_, v_fixedArgs_745_, v_as_746_, v_i_747_, v_j_748_, v_bs_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2___boxed(lean_object* v_fixedParamPerms_757_, lean_object* v_fixedArgs_758_, lean_object* v_as_759_, lean_object* v_i_760_, lean_object* v_j_761_, lean_object* v_inv_762_, lean_object* v_bs_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__2(v_fixedParamPerms_757_, v_fixedArgs_758_, v_as_759_, v_i_760_, v_j_761_, v_inv_762_, v_bs_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec_ref(v_as_759_);
lean_dec_ref(v_fixedParamPerms_757_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4(lean_object* v_as_770_, size_t v_i_771_, size_t v_stop_772_, lean_object* v_b_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___x_779_; 
v___x_779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___redArg(v_as_770_, v_i_771_, v_stop_772_, v_b_773_, v___y_776_, v___y_777_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4___boxed(lean_object* v_as_780_, lean_object* v_i_781_, lean_object* v_stop_782_, lean_object* v_b_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
size_t v_i_boxed_789_; size_t v_stop_boxed_790_; lean_object* v_res_791_; 
v_i_boxed_789_ = lean_unbox_usize(v_i_781_);
lean_dec(v_i_781_);
v_stop_boxed_790_ = lean_unbox_usize(v_stop_782_);
lean_dec(v_stop_782_);
v_res_791_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__4(v_as_780_, v_i_boxed_789_, v_stop_boxed_790_, v_b_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec_ref(v_as_780_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5(lean_object* v_env_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v___x_798_; 
v___x_798_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg(v_env_792_, v___y_794_, v___y_796_);
return v___x_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___boxed(lean_object* v_env_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v_res_805_; 
v_res_805_ = l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5(v_env_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v___y_801_);
lean_dec_ref(v___y_800_);
return v_res_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5(lean_object* v_00_u03b1_806_, lean_object* v_env_807_, lean_object* v_x_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___redArg(v_env_807_, v_x_808_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5___boxed(lean_object* v_00_u03b1_815_, lean_object* v_env_816_, lean_object* v_x_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5(v_00_u03b1_815_, v_env_816_, v_x_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6(lean_object* v_00_u03b1_824_, lean_object* v_msg_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_){
_start:
{
lean_object* v___x_831_; 
v___x_831_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(v_msg_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_);
return v___x_831_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___boxed(lean_object* v_00_u03b1_832_, lean_object* v_msg_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6(v_00_u03b1_832_, v_msg_833_, v___y_834_, v___y_835_, v___y_836_, v___y_837_);
lean_dec(v___y_837_);
lean_dec_ref(v___y_836_);
lean_dec(v___y_835_);
lean_dec_ref(v___y_834_);
return v_res_839_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__0(void){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = lean_mk_string_unchecked("mkMonoPProd: unexpected type of", 31, 31);
return v___x_840_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1(void){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_841_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__0);
v___x_842_ = l_Lean_stringToMessageData(v___x_841_);
return v___x_842_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2(void){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_843_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3(void){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = lean_mk_string_unchecked("Order", 5, 5);
return v___x_844_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__4(void){
_start:
{
lean_object* v___x_845_; 
v___x_845_ = lean_mk_string_unchecked("monotone", 8, 8);
return v___x_845_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5(void){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_846_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__4, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__4);
v___x_847_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3);
v___x_848_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_849_ = l_Lean_Name_mkStr3(v___x_848_, v___x_847_, v___x_846_);
return v___x_849_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__6(void){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = lean_mk_string_unchecked("PProd", 5, 5);
return v___x_850_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__7(void){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = lean_mk_string_unchecked("monotone_mk", 11, 11);
return v___x_851_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__8(void){
_start:
{
lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v___x_852_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__7, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__7);
v___x_853_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__6, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__6);
v___x_854_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3);
v___x_855_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_856_ = l_Lean_Name_mkStr4(v___x_855_, v___x_854_, v___x_853_, v___x_852_);
return v___x_856_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__9(void){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_857_ = lean_box(0);
v___x_858_ = lean_unsigned_to_nat(10u);
v___x_859_ = lean_mk_empty_array_with_capacity(v___x_858_);
v___x_860_ = lean_array_push(v___x_859_, v___x_857_);
return v___x_860_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__10(void){
_start:
{
lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_861_ = lean_box(0);
v___x_862_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__9, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__9);
v___x_863_ = lean_array_push(v___x_862_, v___x_861_);
return v___x_863_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__11(void){
_start:
{
lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_864_ = lean_box(0);
v___x_865_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__10, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__10);
v___x_866_ = lean_array_push(v___x_865_, v___x_864_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd(lean_object* v_x_867_, lean_object* v_x_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_){
_start:
{
lean_object* v_fst_874_; lean_object* v_snd_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_978_; 
v_fst_874_ = lean_ctor_get(v_x_867_, 0);
v_snd_875_ = lean_ctor_get(v_x_867_, 1);
v_isSharedCheck_978_ = !lean_is_exclusive(v_x_867_);
if (v_isSharedCheck_978_ == 0)
{
v___x_877_ = v_x_867_;
v_isShared_878_ = v_isSharedCheck_978_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_snd_875_);
lean_inc(v_fst_874_);
lean_dec(v_x_867_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_978_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___y_880_; lean_object* v___y_881_; lean_object* v___y_882_; lean_object* v___y_883_; lean_object* v_fst_890_; lean_object* v_snd_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_977_; 
v_fst_890_ = lean_ctor_get(v_x_868_, 0);
v_snd_891_ = lean_ctor_get(v_x_868_, 1);
v_isSharedCheck_977_ = !lean_is_exclusive(v_x_868_);
if (v_isSharedCheck_977_ == 0)
{
v___x_893_ = v_x_868_;
v_isShared_894_ = v_isSharedCheck_977_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_snd_891_);
lean_inc(v_fst_890_);
lean_dec(v_x_868_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_977_;
goto v_resetjp_892_;
}
v___jp_879_:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_887_; 
v___x_884_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1);
v___x_885_ = l_Lean_indentExpr(v_snd_875_);
if (v_isShared_878_ == 0)
{
lean_ctor_set_tag(v___x_877_, 7);
lean_ctor_set(v___x_877_, 1, v___x_885_);
lean_ctor_set(v___x_877_, 0, v___x_884_);
v___x_887_ = v___x_877_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v___x_885_);
v___x_887_ = v_reuseFailAlloc_889_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
lean_object* v___x_888_; 
v___x_888_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(v___x_887_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
return v___x_888_;
}
}
v_resetjp_892_:
{
lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_898_; lean_object* v___y_899_; lean_object* v___x_904_; uint8_t v___x_905_; 
v___x_904_ = l_Lean_Expr_cleanupAnnotations(v_fst_874_);
v___x_905_ = l_Lean_Expr_isApp(v___x_904_);
if (v___x_905_ == 0)
{
lean_dec_ref(v___x_904_);
lean_del_object(v___x_893_);
lean_dec(v_snd_891_);
lean_dec(v_fst_890_);
v___y_880_ = v_a_869_;
v___y_881_ = v_a_870_;
v___y_882_ = v_a_871_;
v___y_883_ = v_a_872_;
goto v___jp_879_;
}
else
{
lean_object* v___x_906_; uint8_t v___x_907_; 
v___x_906_ = l_Lean_Expr_appFnCleanup___redArg(v___x_904_);
v___x_907_ = l_Lean_Expr_isApp(v___x_906_);
if (v___x_907_ == 0)
{
lean_dec_ref(v___x_906_);
lean_del_object(v___x_893_);
lean_dec(v_snd_891_);
lean_dec(v_fst_890_);
v___y_880_ = v_a_869_;
v___y_881_ = v_a_870_;
v___y_882_ = v_a_871_;
v___y_883_ = v_a_872_;
goto v___jp_879_;
}
else
{
lean_object* v_arg_908_; lean_object* v___x_909_; uint8_t v___x_910_; 
v_arg_908_ = lean_ctor_get(v___x_906_, 1);
lean_inc_ref(v_arg_908_);
v___x_909_ = l_Lean_Expr_appFnCleanup___redArg(v___x_906_);
v___x_910_ = l_Lean_Expr_isApp(v___x_909_);
if (v___x_910_ == 0)
{
lean_dec_ref(v___x_909_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_891_);
lean_dec(v_fst_890_);
v___y_880_ = v_a_869_;
v___y_881_ = v_a_870_;
v___y_882_ = v_a_871_;
v___y_883_ = v_a_872_;
goto v___jp_879_;
}
else
{
lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_911_ = l_Lean_Expr_appFnCleanup___redArg(v___x_909_);
v___x_912_ = l_Lean_Expr_isApp(v___x_911_);
if (v___x_912_ == 0)
{
lean_dec_ref(v___x_911_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_891_);
lean_dec(v_fst_890_);
v___y_880_ = v_a_869_;
v___y_881_ = v_a_870_;
v___y_882_ = v_a_871_;
v___y_883_ = v_a_872_;
goto v___jp_879_;
}
else
{
lean_object* v_arg_913_; lean_object* v___x_914_; uint8_t v___x_915_; 
v_arg_913_ = lean_ctor_get(v___x_911_, 1);
lean_inc_ref(v_arg_913_);
v___x_914_ = l_Lean_Expr_appFnCleanup___redArg(v___x_911_);
v___x_915_ = l_Lean_Expr_isApp(v___x_914_);
if (v___x_915_ == 0)
{
lean_dec_ref(v___x_914_);
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_891_);
lean_dec(v_fst_890_);
v___y_880_ = v_a_869_;
v___y_881_ = v_a_870_;
v___y_882_ = v_a_871_;
v___y_883_ = v_a_872_;
goto v___jp_879_;
}
else
{
lean_object* v___x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
v___x_916_ = l_Lean_Expr_appFnCleanup___redArg(v___x_914_);
v___x_917_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5);
v___x_918_ = l_Lean_Expr_isConstOf(v___x_916_, v___x_917_);
lean_dec_ref(v___x_916_);
if (v___x_918_ == 0)
{
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_891_);
lean_dec(v_fst_890_);
v___y_880_ = v_a_869_;
v___y_881_ = v_a_870_;
v___y_882_ = v_a_871_;
v___y_883_ = v_a_872_;
goto v___jp_879_;
}
else
{
lean_object* v___x_919_; uint8_t v___x_920_; 
lean_del_object(v___x_877_);
v___x_919_ = l_Lean_Expr_cleanupAnnotations(v_fst_890_);
v___x_920_ = l_Lean_Expr_isApp(v___x_919_);
if (v___x_920_ == 0)
{
lean_dec_ref(v___x_919_);
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_875_);
v___y_896_ = v_a_869_;
v___y_897_ = v_a_870_;
v___y_898_ = v_a_871_;
v___y_899_ = v_a_872_;
goto v___jp_895_;
}
else
{
lean_object* v___x_921_; uint8_t v___x_922_; 
v___x_921_ = l_Lean_Expr_appFnCleanup___redArg(v___x_919_);
v___x_922_ = l_Lean_Expr_isApp(v___x_921_);
if (v___x_922_ == 0)
{
lean_dec_ref(v___x_921_);
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_875_);
v___y_896_ = v_a_869_;
v___y_897_ = v_a_870_;
v___y_898_ = v_a_871_;
v___y_899_ = v_a_872_;
goto v___jp_895_;
}
else
{
lean_object* v_arg_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v_arg_923_ = lean_ctor_get(v___x_921_, 1);
lean_inc_ref(v_arg_923_);
v___x_924_ = l_Lean_Expr_appFnCleanup___redArg(v___x_921_);
v___x_925_ = l_Lean_Expr_isApp(v___x_924_);
if (v___x_925_ == 0)
{
lean_dec_ref(v___x_924_);
lean_dec_ref(v_arg_923_);
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_875_);
v___y_896_ = v_a_869_;
v___y_897_ = v_a_870_;
v___y_898_ = v_a_871_;
v___y_899_ = v_a_872_;
goto v___jp_895_;
}
else
{
lean_object* v___x_926_; uint8_t v___x_927_; 
v___x_926_ = l_Lean_Expr_appFnCleanup___redArg(v___x_924_);
v___x_927_ = l_Lean_Expr_isApp(v___x_926_);
if (v___x_927_ == 0)
{
lean_dec_ref(v___x_926_);
lean_dec_ref(v_arg_923_);
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_875_);
v___y_896_ = v_a_869_;
v___y_897_ = v_a_870_;
v___y_898_ = v_a_871_;
v___y_899_ = v_a_872_;
goto v___jp_895_;
}
else
{
lean_object* v___x_928_; uint8_t v___x_929_; 
v___x_928_ = l_Lean_Expr_appFnCleanup___redArg(v___x_926_);
v___x_929_ = l_Lean_Expr_isApp(v___x_928_);
if (v___x_929_ == 0)
{
lean_dec_ref(v___x_928_);
lean_dec_ref(v_arg_923_);
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_875_);
v___y_896_ = v_a_869_;
v___y_897_ = v_a_870_;
v___y_898_ = v_a_871_;
v___y_899_ = v_a_872_;
goto v___jp_895_;
}
else
{
lean_object* v___x_930_; uint8_t v___x_931_; 
v___x_930_ = l_Lean_Expr_appFnCleanup___redArg(v___x_928_);
v___x_931_ = l_Lean_Expr_isConstOf(v___x_930_, v___x_917_);
lean_dec_ref(v___x_930_);
if (v___x_931_ == 0)
{
lean_dec_ref(v_arg_923_);
lean_dec_ref(v_arg_913_);
lean_dec_ref(v_arg_908_);
lean_del_object(v___x_893_);
lean_dec(v_snd_875_);
v___y_896_ = v_a_869_;
v___y_897_ = v_a_870_;
v___y_898_ = v_a_871_;
v___y_899_ = v_a_872_;
goto v___jp_895_;
}
else
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_932_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__8, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__8);
v___x_933_ = lean_box(0);
v___x_934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_934_, 0, v_arg_908_);
v___x_935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_935_, 0, v_arg_923_);
v___x_936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_936_, 0, v_arg_913_);
v___x_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_937_, 0, v_snd_875_);
v___x_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_938_, 0, v_snd_891_);
v___x_939_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__11, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__11);
v___x_940_ = lean_array_push(v___x_939_, v___x_934_);
v___x_941_ = lean_array_push(v___x_940_, v___x_935_);
v___x_942_ = lean_array_push(v___x_941_, v___x_936_);
v___x_943_ = lean_array_push(v___x_942_, v___x_933_);
v___x_944_ = lean_array_push(v___x_943_, v___x_933_);
v___x_945_ = lean_array_push(v___x_944_, v___x_937_);
v___x_946_ = lean_array_push(v___x_945_, v___x_938_);
v___x_947_ = l_Lean_Meta_mkAppOptM(v___x_932_, v___x_946_, v_a_869_, v_a_870_, v_a_871_, v_a_872_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc_n(v_a_948_, 2);
lean_dec_ref(v___x_947_);
lean_inc(v_a_872_);
lean_inc_ref(v_a_871_);
lean_inc(v_a_870_);
lean_inc_ref(v_a_869_);
v___x_949_ = lean_infer_type(v_a_948_, v_a_869_, v_a_870_, v_a_871_, v_a_872_);
if (lean_obj_tag(v___x_949_) == 0)
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_960_; 
v_a_950_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_960_ == 0)
{
v___x_952_ = v___x_949_;
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_949_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_960_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 1, v_a_948_);
lean_ctor_set(v___x_893_, 0, v_a_950_);
v___x_955_ = v___x_893_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v_a_950_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_a_948_);
v___x_955_ = v_reuseFailAlloc_959_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
lean_object* v___x_957_; 
if (v_isShared_953_ == 0)
{
lean_ctor_set(v___x_952_, 0, v___x_955_);
v___x_957_ = v___x_952_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v___x_955_);
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
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
lean_dec(v_a_948_);
lean_del_object(v___x_893_);
v_a_961_ = lean_ctor_get(v___x_949_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_949_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_949_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_949_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
else
{
lean_object* v_a_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_976_; 
lean_del_object(v___x_893_);
v_a_969_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_976_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_976_ == 0)
{
v___x_971_ = v___x_947_;
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_a_969_);
lean_dec(v___x_947_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_976_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_974_; 
if (v_isShared_972_ == 0)
{
v___x_974_ = v___x_971_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_975_; 
v_reuseFailAlloc_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_975_, 0, v_a_969_);
v___x_974_ = v_reuseFailAlloc_975_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
return v___x_974_;
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
}
}
}
}
}
v___jp_895_:
{
lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_900_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__1);
v___x_901_ = l_Lean_indentExpr(v_snd_891_);
v___x_902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(v___x_902_, v___y_896_, v___y_897_, v___y_898_, v___y_899_);
return v___x_903_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___boxed(lean_object* v_x_979_, lean_object* v_x_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd(v_x_979_, v_x_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0(lean_object* v_k_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v_b_990_, lean_object* v_c_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v___x_997_; 
lean_inc(v___y_995_);
lean_inc_ref(v___y_994_);
lean_inc(v___y_993_);
lean_inc_ref(v___y_992_);
lean_inc(v___y_989_);
lean_inc_ref(v___y_988_);
v___x_997_ = lean_apply_9(v_k_987_, v_b_990_, v_c_991_, v___y_988_, v___y_989_, v___y_992_, v___y_993_, v___y_994_, v___y_995_, lean_box(0));
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0___boxed(lean_object* v_k_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v_b_1001_, lean_object* v_c_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0(v_k_998_, v___y_999_, v___y_1000_, v_b_1001_, v_c_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg(lean_object* v_type_1009_, lean_object* v_k_1010_, uint8_t v_cleanupAnnotations_1011_, uint8_t v_whnfType_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v___f_1020_; lean_object* v___x_1021_; 
lean_inc(v___y_1014_);
lean_inc_ref(v___y_1013_);
v___f_1020_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1020_, 0, v_k_1010_);
lean_closure_set(v___f_1020_, 1, v___y_1013_);
lean_closure_set(v___f_1020_, 2, v___y_1014_);
v___x_1021_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_1009_, v___f_1020_, v_cleanupAnnotations_1011_, v_whnfType_1012_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
if (lean_obj_tag(v___x_1021_) == 0)
{
return v___x_1021_;
}
else
{
lean_object* v_a_1022_; lean_object* v___x_1024_; uint8_t v_isShared_1025_; uint8_t v_isSharedCheck_1029_; 
v_a_1022_ = lean_ctor_get(v___x_1021_, 0);
v_isSharedCheck_1029_ = !lean_is_exclusive(v___x_1021_);
if (v_isSharedCheck_1029_ == 0)
{
v___x_1024_ = v___x_1021_;
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
else
{
lean_inc(v_a_1022_);
lean_dec(v___x_1021_);
v___x_1024_ = lean_box(0);
v_isShared_1025_ = v_isSharedCheck_1029_;
goto v_resetjp_1023_;
}
v_resetjp_1023_:
{
lean_object* v___x_1027_; 
if (v_isShared_1025_ == 0)
{
v___x_1027_ = v___x_1024_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_a_1022_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___boxed(lean_object* v_type_1030_, lean_object* v_k_1031_, lean_object* v_cleanupAnnotations_1032_, lean_object* v_whnfType_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1041_; uint8_t v_whnfType_boxed_1042_; lean_object* v_res_1043_; 
v_cleanupAnnotations_boxed_1041_ = lean_unbox(v_cleanupAnnotations_1032_);
v_whnfType_boxed_1042_ = lean_unbox(v_whnfType_1033_);
v_res_1043_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg(v_type_1030_, v_k_1031_, v_cleanupAnnotations_boxed_1041_, v_whnfType_boxed_1042_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3(lean_object* v_00_u03b1_1044_, lean_object* v_type_1045_, lean_object* v_k_1046_, uint8_t v_cleanupAnnotations_1047_, uint8_t v_whnfType_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_){
_start:
{
lean_object* v___x_1056_; 
v___x_1056_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg(v_type_1045_, v_k_1046_, v_cleanupAnnotations_1047_, v_whnfType_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_);
return v___x_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___boxed(lean_object* v_00_u03b1_1057_, lean_object* v_type_1058_, lean_object* v_k_1059_, lean_object* v_cleanupAnnotations_1060_, lean_object* v_whnfType_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1069_; uint8_t v_whnfType_boxed_1070_; lean_object* v_res_1071_; 
v_cleanupAnnotations_boxed_1069_ = lean_unbox(v_cleanupAnnotations_1060_);
v_whnfType_boxed_1070_ = lean_unbox(v_whnfType_1061_);
v_res_1071_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3(v_00_u03b1_1057_, v_type_1058_, v_k_1059_, v_cleanupAnnotations_boxed_1069_, v_whnfType_boxed_1070_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_);
lean_dec(v___y_1067_);
lean_dec_ref(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
lean_dec(v___y_1063_);
lean_dec_ref(v___y_1062_);
return v_res_1071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg(lean_object* v_e_1072_, lean_object* v_k_1073_, uint8_t v_cleanupAnnotations_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v___f_1082_; uint8_t v___x_1083_; uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
lean_inc(v___y_1076_);
lean_inc_ref(v___y_1075_);
v___f_1082_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1082_, 0, v_k_1073_);
lean_closure_set(v___f_1082_, 1, v___y_1075_);
lean_closure_set(v___f_1082_, 2, v___y_1076_);
v___x_1083_ = 1;
v___x_1084_ = 0;
v___x_1085_ = lean_box(0);
v___x_1086_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_1072_, v___x_1083_, v___x_1084_, v___x_1083_, v___x_1084_, v___x_1085_, v___f_1082_, v_cleanupAnnotations_1074_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
if (lean_obj_tag(v___x_1086_) == 0)
{
return v___x_1086_;
}
else
{
lean_object* v_a_1087_; lean_object* v___x_1089_; uint8_t v_isShared_1090_; uint8_t v_isSharedCheck_1094_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1094_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1089_ = v___x_1086_;
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
else
{
lean_inc(v_a_1087_);
lean_dec(v___x_1086_);
v___x_1089_ = lean_box(0);
v_isShared_1090_ = v_isSharedCheck_1094_;
goto v_resetjp_1088_;
}
v_resetjp_1088_:
{
lean_object* v___x_1092_; 
if (v_isShared_1090_ == 0)
{
v___x_1092_ = v___x_1089_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v_a_1087_);
v___x_1092_ = v_reuseFailAlloc_1093_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
return v___x_1092_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg___boxed(lean_object* v_e_1095_, lean_object* v_k_1096_, lean_object* v_cleanupAnnotations_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1105_; lean_object* v_res_1106_; 
v_cleanupAnnotations_boxed_1105_ = lean_unbox(v_cleanupAnnotations_1097_);
v_res_1106_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg(v_e_1095_, v_k_1096_, v_cleanupAnnotations_boxed_1105_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, v___y_1103_);
lean_dec(v___y_1103_);
lean_dec_ref(v___y_1102_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5(lean_object* v_00_u03b1_1107_, lean_object* v_e_1108_, lean_object* v_k_1109_, uint8_t v_cleanupAnnotations_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v___x_1118_; 
v___x_1118_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg(v_e_1108_, v_k_1109_, v_cleanupAnnotations_1110_, v___y_1111_, v___y_1112_, v___y_1113_, v___y_1114_, v___y_1115_, v___y_1116_);
return v___x_1118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___boxed(lean_object* v_00_u03b1_1119_, lean_object* v_e_1120_, lean_object* v_k_1121_, lean_object* v_cleanupAnnotations_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1130_; lean_object* v_res_1131_; 
v_cleanupAnnotations_boxed_1130_ = lean_unbox(v_cleanupAnnotations_1122_);
v_res_1131_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5(v_00_u03b1_1119_, v_e_1120_, v_k_1121_, v_cleanupAnnotations_boxed_1130_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8___redArg(lean_object* v_msg_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___f_1138_; lean_object* v___x_41589__overap_1139_; lean_object* v___x_1140_; 
v___f_1138_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps_spec__0___closed__0);
v___x_41589__overap_1139_ = lean_panic_fn_borrowed(v___f_1138_, v_msg_1132_);
lean_inc(v___y_1136_);
lean_inc_ref(v___y_1135_);
lean_inc(v___y_1134_);
lean_inc_ref(v___y_1133_);
v___x_1140_ = lean_apply_5(v___x_41589__overap_1139_, v___y_1133_, v___y_1134_, v___y_1135_, v___y_1136_, lean_box(0));
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8___redArg___boxed(lean_object* v_msg_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_panic___at___00Lean_Elab_partialFixpoint_spec__8___redArg(v_msg_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8(lean_object* v_00_u03b1_1148_, lean_object* v_msg_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = l_panic___at___00Lean_Elab_partialFixpoint_spec__8___redArg(v_msg_1149_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__8___boxed(lean_object* v_00_u03b1_1156_, lean_object* v_msg_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_panic___at___00Lean_Elab_partialFixpoint_spec__8(v_00_u03b1_1156_, v_msg_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg(lean_object* v_e_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_){
_start:
{
uint8_t v___x_1168_; 
v___x_1168_ = l_Lean_Expr_hasMVar(v_e_1164_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1169_, 0, v_e_1164_);
return v___x_1169_;
}
else
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v_mctx_1172_; lean_object* v___x_1173_; lean_object* v_fst_1174_; lean_object* v_snd_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v_cache_1178_; lean_object* v_zetaDeltaFVarIds_1179_; lean_object* v_postponed_1180_; lean_object* v_diag_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1190_; 
v___x_1170_ = lean_st_ref_get(v___y_1166_);
lean_dec(v___x_1170_);
v___x_1171_ = lean_st_ref_get(v___y_1165_);
v_mctx_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc_ref(v_mctx_1172_);
lean_dec(v___x_1171_);
v___x_1173_ = l_Lean_instantiateMVarsCore(v_mctx_1172_, v_e_1164_);
v_fst_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_fst_1174_);
v_snd_1175_ = lean_ctor_get(v___x_1173_, 1);
lean_inc(v_snd_1175_);
lean_dec_ref(v___x_1173_);
v___x_1176_ = lean_st_ref_get(v___y_1166_);
lean_dec(v___x_1176_);
v___x_1177_ = lean_st_ref_take(v___y_1165_);
v_cache_1178_ = lean_ctor_get(v___x_1177_, 1);
v_zetaDeltaFVarIds_1179_ = lean_ctor_get(v___x_1177_, 2);
v_postponed_1180_ = lean_ctor_get(v___x_1177_, 3);
v_diag_1181_ = lean_ctor_get(v___x_1177_, 4);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1177_);
if (v_isSharedCheck_1190_ == 0)
{
lean_object* v_unused_1191_; 
v_unused_1191_ = lean_ctor_get(v___x_1177_, 0);
lean_dec(v_unused_1191_);
v___x_1183_ = v___x_1177_;
v_isShared_1184_ = v_isSharedCheck_1190_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_diag_1181_);
lean_inc(v_postponed_1180_);
lean_inc(v_zetaDeltaFVarIds_1179_);
lean_inc(v_cache_1178_);
lean_dec(v___x_1177_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1190_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
lean_ctor_set(v___x_1183_, 0, v_snd_1175_);
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_snd_1175_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_cache_1178_);
lean_ctor_set(v_reuseFailAlloc_1189_, 2, v_zetaDeltaFVarIds_1179_);
lean_ctor_set(v_reuseFailAlloc_1189_, 3, v_postponed_1180_);
lean_ctor_set(v_reuseFailAlloc_1189_, 4, v_diag_1181_);
v___x_1186_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1187_ = lean_st_ref_set(v___y_1165_, v___x_1186_);
v___x_1188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1188_, 0, v_fst_1174_);
return v___x_1188_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg___boxed(lean_object* v_e_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg(v_e_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec(v___y_1193_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18(lean_object* v_e_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg(v_e_1197_, v___y_1201_, v___y_1203_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___boxed(lean_object* v_e_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18(v_e_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___redArg(lean_object* v_type_1215_, lean_object* v_maxFVars_x3f_1216_, lean_object* v_k_1217_, uint8_t v_cleanupAnnotations_1218_, uint8_t v_whnfType_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___f_1227_; lean_object* v___x_1228_; 
lean_inc(v___y_1221_);
lean_inc_ref(v___y_1220_);
v___f_1227_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1227_, 0, v_k_1217_);
lean_closure_set(v___f_1227_, 1, v___y_1220_);
lean_closure_set(v___f_1227_, 2, v___y_1221_);
v___x_1228_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1215_, v_maxFVars_x3f_1216_, v___f_1227_, v_cleanupAnnotations_1218_, v_whnfType_1219_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
if (lean_obj_tag(v___x_1228_) == 0)
{
return v___x_1228_;
}
else
{
lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
v_a_1229_ = lean_ctor_get(v___x_1228_, 0);
v_isSharedCheck_1236_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1231_ = v___x_1228_;
v_isShared_1232_ = v_isSharedCheck_1236_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_a_1229_);
lean_dec(v___x_1228_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___redArg___boxed(lean_object* v_type_1237_, lean_object* v_maxFVars_x3f_1238_, lean_object* v_k_1239_, lean_object* v_cleanupAnnotations_1240_, lean_object* v_whnfType_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1249_; uint8_t v_whnfType_boxed_1250_; lean_object* v_res_1251_; 
v_cleanupAnnotations_boxed_1249_ = lean_unbox(v_cleanupAnnotations_1240_);
v_whnfType_boxed_1250_ = lean_unbox(v_whnfType_1241_);
v_res_1251_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___redArg(v_type_1237_, v_maxFVars_x3f_1238_, v_k_1239_, v_cleanupAnnotations_boxed_1249_, v_whnfType_boxed_1250_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20(lean_object* v_00_u03b1_1252_, lean_object* v_type_1253_, lean_object* v_maxFVars_x3f_1254_, lean_object* v_k_1255_, uint8_t v_cleanupAnnotations_1256_, uint8_t v_whnfType_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___redArg(v_type_1253_, v_maxFVars_x3f_1254_, v_k_1255_, v_cleanupAnnotations_1256_, v_whnfType_1257_, v___y_1258_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___boxed(lean_object* v_00_u03b1_1266_, lean_object* v_type_1267_, lean_object* v_maxFVars_x3f_1268_, lean_object* v_k_1269_, lean_object* v_cleanupAnnotations_1270_, lean_object* v_whnfType_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1279_; uint8_t v_whnfType_boxed_1280_; lean_object* v_res_1281_; 
v_cleanupAnnotations_boxed_1279_ = lean_unbox(v_cleanupAnnotations_1270_);
v_whnfType_boxed_1280_ = lean_unbox(v_whnfType_1271_);
v_res_1281_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20(v_00_u03b1_1266_, v_type_1267_, v_maxFVars_x3f_1268_, v_k_1269_, v_cleanupAnnotations_boxed_1279_, v_whnfType_boxed_1280_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec_ref(v___y_1272_);
return v_res_1281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___lam__0(lean_object* v_k_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v_b_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_){
_start:
{
lean_object* v___x_1291_; 
lean_inc(v___y_1289_);
lean_inc_ref(v___y_1288_);
lean_inc(v___y_1287_);
lean_inc_ref(v___y_1286_);
lean_inc(v___y_1284_);
lean_inc_ref(v___y_1283_);
v___x_1291_ = lean_apply_8(v_k_1282_, v_b_1285_, v___y_1283_, v___y_1284_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, lean_box(0));
return v___x_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___lam__0___boxed(lean_object* v_k_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v_b_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v_res_1301_; 
v_res_1301_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___lam__0(v_k_1292_, v___y_1293_, v___y_1294_, v_b_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec_ref(v___y_1296_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg(lean_object* v_perm_1302_, lean_object* v_type_1303_, lean_object* v_k_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___f_1312_; lean_object* v___x_1313_; 
lean_inc(v___y_1306_);
lean_inc_ref(v___y_1305_);
v___f_1312_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1312_, 0, v_k_1304_);
lean_closure_set(v___f_1312_, 1, v___y_1305_);
lean_closure_set(v___f_1312_, 2, v___y_1306_);
v___x_1313_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_box(0), v_perm_1302_, v_type_1303_, v___f_1312_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_);
if (lean_obj_tag(v___x_1313_) == 0)
{
return v___x_1313_;
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
v_a_1314_ = lean_ctor_get(v___x_1313_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1313_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1313_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1313_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
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
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg___boxed(lean_object* v_perm_1322_, lean_object* v_type_1323_, lean_object* v_k_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg(v_perm_1322_, v_type_1323_, v_k_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec_ref(v___y_1327_);
lean_dec(v___y_1326_);
lean_dec_ref(v___y_1325_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24(lean_object* v_00_u03b1_1333_, lean_object* v_perm_1334_, lean_object* v_type_1335_, lean_object* v_k_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg(v_perm_1334_, v_type_1335_, v_k_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___boxed(lean_object* v_00_u03b1_1345_, lean_object* v_perm_1346_, lean_object* v_type_1347_, lean_object* v_k_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24(v_00_u03b1_1345_, v_perm_1346_, v_type_1347_, v_k_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
return v_res_1356_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_partialFixpoint_spec__25___closed__0(void){
_start:
{
lean_object* v___x_1357_; 
v___x_1357_ = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
return v___x_1357_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__25(lean_object* v_msg_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_47570__overap_1367_; lean_object* v___x_1368_; 
v___x_1366_ = lean_obj_once(&l_panic___at___00Lean_Elab_partialFixpoint_spec__25___closed__0, &l_panic___at___00Lean_Elab_partialFixpoint_spec__25___closed__0_once, _init_l_panic___at___00Lean_Elab_partialFixpoint_spec__25___closed__0);
v___x_47570__overap_1367_ = lean_panic_fn_borrowed(v___x_1366_, v_msg_1358_);
lean_inc(v___y_1364_);
lean_inc_ref(v___y_1363_);
lean_inc(v___y_1362_);
lean_inc_ref(v___y_1361_);
lean_inc(v___y_1360_);
lean_inc_ref(v___y_1359_);
v___x_1368_ = lean_apply_7(v___x_47570__overap_1367_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, lean_box(0));
return v___x_1368_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_partialFixpoint_spec__25___boxed(lean_object* v_msg_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_panic___at___00Lean_Elab_partialFixpoint_spec__25(v_msg_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
return v_res_1377_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1378_; double v___x_1379_; 
v___x_1378_ = lean_unsigned_to_nat(0u);
v___x_1379_ = lean_float_of_nat(v___x_1378_);
return v___x_1379_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_mk_string_unchecked("", 0, 0);
return v___x_1380_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_unsigned_to_nat(0u);
v___x_1382_ = lean_mk_empty_array_with_capacity(v___x_1381_);
return v___x_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(lean_object* v_cls_1383_, lean_object* v_msg_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v_ref_1390_; lean_object* v___x_1391_; lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1436_; 
v_ref_1390_ = lean_ctor_get(v___y_1387_, 5);
v___x_1391_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7(v_msg_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_);
v_a_1392_ = lean_ctor_get(v___x_1391_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v___x_1391_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1394_ = v___x_1391_;
v_isShared_1395_ = v_isSharedCheck_1436_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1391_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1436_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1396_; lean_object* v_traceState_1397_; lean_object* v_env_1398_; lean_object* v_nextMacroScope_1399_; lean_object* v_ngen_1400_; lean_object* v_auxDeclNGen_1401_; lean_object* v_cache_1402_; lean_object* v_messages_1403_; lean_object* v_infoState_1404_; lean_object* v_snapshotTasks_1405_; lean_object* v___x_1407_; uint8_t v_isShared_1408_; uint8_t v_isSharedCheck_1435_; 
v___x_1396_ = lean_st_ref_take(v___y_1388_);
v_traceState_1397_ = lean_ctor_get(v___x_1396_, 4);
v_env_1398_ = lean_ctor_get(v___x_1396_, 0);
v_nextMacroScope_1399_ = lean_ctor_get(v___x_1396_, 1);
v_ngen_1400_ = lean_ctor_get(v___x_1396_, 2);
v_auxDeclNGen_1401_ = lean_ctor_get(v___x_1396_, 3);
v_cache_1402_ = lean_ctor_get(v___x_1396_, 5);
v_messages_1403_ = lean_ctor_get(v___x_1396_, 6);
v_infoState_1404_ = lean_ctor_get(v___x_1396_, 7);
v_snapshotTasks_1405_ = lean_ctor_get(v___x_1396_, 8);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1407_ = v___x_1396_;
v_isShared_1408_ = v_isSharedCheck_1435_;
goto v_resetjp_1406_;
}
else
{
lean_inc(v_snapshotTasks_1405_);
lean_inc(v_infoState_1404_);
lean_inc(v_messages_1403_);
lean_inc(v_cache_1402_);
lean_inc(v_traceState_1397_);
lean_inc(v_auxDeclNGen_1401_);
lean_inc(v_ngen_1400_);
lean_inc(v_nextMacroScope_1399_);
lean_inc(v_env_1398_);
lean_dec(v___x_1396_);
v___x_1407_ = lean_box(0);
v_isShared_1408_ = v_isSharedCheck_1435_;
goto v_resetjp_1406_;
}
v_resetjp_1406_:
{
uint64_t v_tid_1409_; lean_object* v_traces_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1434_; 
v_tid_1409_ = lean_ctor_get_uint64(v_traceState_1397_, sizeof(void*)*1);
v_traces_1410_ = lean_ctor_get(v_traceState_1397_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v_traceState_1397_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1412_ = v_traceState_1397_;
v_isShared_1413_ = v_isSharedCheck_1434_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_traces_1410_);
lean_dec(v_traceState_1397_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1434_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
lean_object* v___x_1414_; double v___x_1415_; uint8_t v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1424_; 
v___x_1414_ = lean_box(0);
v___x_1415_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__0);
v___x_1416_ = 0;
v___x_1417_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1);
v___x_1418_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1418_, 0, v_cls_1383_);
lean_ctor_set(v___x_1418_, 1, v___x_1414_);
lean_ctor_set(v___x_1418_, 2, v___x_1417_);
lean_ctor_set_float(v___x_1418_, sizeof(void*)*3, v___x_1415_);
lean_ctor_set_float(v___x_1418_, sizeof(void*)*3 + 8, v___x_1415_);
lean_ctor_set_uint8(v___x_1418_, sizeof(void*)*3 + 16, v___x_1416_);
v___x_1419_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__2, &l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__2);
v___x_1420_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
lean_ctor_set(v___x_1420_, 1, v_a_1392_);
lean_ctor_set(v___x_1420_, 2, v___x_1419_);
lean_inc(v_ref_1390_);
v___x_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1421_, 0, v_ref_1390_);
lean_ctor_set(v___x_1421_, 1, v___x_1420_);
v___x_1422_ = l_Lean_PersistentArray_push___redArg(v_traces_1410_, v___x_1421_);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v___x_1422_);
v___x_1424_ = v___x_1412_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1422_);
lean_ctor_set_uint64(v_reuseFailAlloc_1433_, sizeof(void*)*1, v_tid_1409_);
v___x_1424_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1426_; 
if (v_isShared_1408_ == 0)
{
lean_ctor_set(v___x_1407_, 4, v___x_1424_);
v___x_1426_ = v___x_1407_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_env_1398_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v_nextMacroScope_1399_);
lean_ctor_set(v_reuseFailAlloc_1432_, 2, v_ngen_1400_);
lean_ctor_set(v_reuseFailAlloc_1432_, 3, v_auxDeclNGen_1401_);
lean_ctor_set(v_reuseFailAlloc_1432_, 4, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1432_, 5, v_cache_1402_);
lean_ctor_set(v_reuseFailAlloc_1432_, 6, v_messages_1403_);
lean_ctor_set(v_reuseFailAlloc_1432_, 7, v_infoState_1404_);
lean_ctor_set(v_reuseFailAlloc_1432_, 8, v_snapshotTasks_1405_);
v___x_1426_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1430_; 
v___x_1427_ = lean_st_ref_set(v___y_1388_, v___x_1426_);
v___x_1428_ = lean_box(0);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 0, v___x_1428_);
v___x_1430_ = v___x_1394_;
goto v_reusejp_1429_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1428_);
v___x_1430_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1429_;
}
v_reusejp_1429_:
{
return v___x_1430_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___boxed(lean_object* v_cls_1437_, lean_object* v_msg_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(v_cls_1437_, v_msg_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___lam__0(lean_object* v___x_1445_, lean_object* v___x_1446_, lean_object* v___y_1447_, lean_object* v___x_1448_, lean_object* v_j_1449_, lean_object* v_a_1450_, uint8_t v_isZero_1451_, uint8_t v___x_1452_, uint8_t v___x_1453_, lean_object* v_ref_1454_, uint8_t v_kind_1455_, lean_object* v_levelParams_1456_, lean_object* v_modifiers_1457_, lean_object* v_declName_1458_, lean_object* v_binders_1459_, lean_object* v_numSectionVars_1460_, lean_object* v_type_1461_, lean_object* v_termination_1462_, lean_object* v_params_1463_, lean_object* v_x_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v___x_1472_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v___x_1445_, v_params_1463_);
v___x_1473_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v___x_1445_, v_params_1463_);
v___x_1474_ = lean_box(0);
v___x_1475_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__0(v___x_1446_, v___x_1474_);
v___x_1476_ = l_Lean_mkConst(v___y_1447_, v___x_1475_);
v___x_1477_ = l_Lean_mkAppN(v___x_1476_, v___x_1472_);
lean_dec_ref(v___x_1472_);
v___x_1478_ = l_Lean_Meta_PProdN_proj(v___x_1448_, v_j_1449_, v_a_1450_, v___x_1477_);
v___x_1479_ = l_Lean_mkAppN(v___x_1478_, v___x_1473_);
lean_dec_ref(v___x_1473_);
v___x_1480_ = l_Lean_Meta_mkLambdaFVars(v_params_1463_, v___x_1479_, v_isZero_1451_, v___x_1452_, v___x_1452_, v___x_1452_, v___x_1453_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1489_; 
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
v___x_1485_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_1485_, 0, v_ref_1454_);
lean_ctor_set(v___x_1485_, 1, v_levelParams_1456_);
lean_ctor_set(v___x_1485_, 2, v_modifiers_1457_);
lean_ctor_set(v___x_1485_, 3, v_declName_1458_);
lean_ctor_set(v___x_1485_, 4, v_binders_1459_);
lean_ctor_set(v___x_1485_, 5, v_numSectionVars_1460_);
lean_ctor_set(v___x_1485_, 6, v_type_1461_);
lean_ctor_set(v___x_1485_, 7, v_a_1481_);
lean_ctor_set(v___x_1485_, 8, v_termination_1462_);
lean_ctor_set_uint8(v___x_1485_, sizeof(void*)*9, v_kind_1455_);
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
lean_dec_ref(v_termination_1462_);
lean_dec_ref(v_type_1461_);
lean_dec(v_numSectionVars_1460_);
lean_dec(v_binders_1459_);
lean_dec(v_declName_1458_);
lean_dec_ref(v_modifiers_1457_);
lean_dec(v_levelParams_1456_);
lean_dec(v_ref_1454_);
v_a_1490_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1480_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1480_);
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
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_1498_ = _args[0];
lean_object* v___x_1499_ = _args[1];
lean_object* v___y_1500_ = _args[2];
lean_object* v___x_1501_ = _args[3];
lean_object* v_j_1502_ = _args[4];
lean_object* v_a_1503_ = _args[5];
lean_object* v_isZero_1504_ = _args[6];
lean_object* v___x_1505_ = _args[7];
lean_object* v___x_1506_ = _args[8];
lean_object* v_ref_1507_ = _args[9];
lean_object* v_kind_1508_ = _args[10];
lean_object* v_levelParams_1509_ = _args[11];
lean_object* v_modifiers_1510_ = _args[12];
lean_object* v_declName_1511_ = _args[13];
lean_object* v_binders_1512_ = _args[14];
lean_object* v_numSectionVars_1513_ = _args[15];
lean_object* v_type_1514_ = _args[16];
lean_object* v_termination_1515_ = _args[17];
lean_object* v_params_1516_ = _args[18];
lean_object* v_x_1517_ = _args[19];
lean_object* v___y_1518_ = _args[20];
lean_object* v___y_1519_ = _args[21];
lean_object* v___y_1520_ = _args[22];
lean_object* v___y_1521_ = _args[23];
lean_object* v___y_1522_ = _args[24];
lean_object* v___y_1523_ = _args[25];
lean_object* v___y_1524_ = _args[26];
_start:
{
uint8_t v_isZero_boxed_1525_; uint8_t v___x_56118__boxed_1526_; uint8_t v___x_56119__boxed_1527_; uint8_t v_kind_boxed_1528_; lean_object* v_res_1529_; 
v_isZero_boxed_1525_ = lean_unbox(v_isZero_1504_);
v___x_56118__boxed_1526_ = lean_unbox(v___x_1505_);
v___x_56119__boxed_1527_ = lean_unbox(v___x_1506_);
v_kind_boxed_1528_ = lean_unbox(v_kind_1508_);
v_res_1529_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___lam__0(v___x_1498_, v___x_1499_, v___y_1500_, v___x_1501_, v_j_1502_, v_a_1503_, v_isZero_boxed_1525_, v___x_56118__boxed_1526_, v___x_56119__boxed_1527_, v_ref_1507_, v_kind_boxed_1528_, v_levelParams_1509_, v_modifiers_1510_, v_declName_1511_, v_binders_1512_, v_numSectionVars_1513_, v_type_1514_, v_termination_1515_, v_params_1516_, v_x_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec_ref(v_x_1517_);
lean_dec_ref(v_params_1516_);
lean_dec(v_j_1502_);
lean_dec(v___x_1501_);
lean_dec_ref(v___x_1498_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg(lean_object* v___x_1530_, lean_object* v___x_1531_, lean_object* v___y_1532_, lean_object* v___x_1533_, lean_object* v_a_1534_, lean_object* v_as_1535_, lean_object* v_i_1536_, lean_object* v_j_1537_, lean_object* v_bs_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_){
_start:
{
lean_object* v_zero_1546_; uint8_t v_isZero_1547_; 
v_zero_1546_ = lean_unsigned_to_nat(0u);
v_isZero_1547_ = lean_nat_dec_eq(v_i_1536_, v_zero_1546_);
if (v_isZero_1547_ == 1)
{
lean_object* v___x_1548_; 
lean_dec(v_j_1537_);
lean_dec(v_i_1536_);
lean_dec_ref(v_a_1534_);
lean_dec(v___x_1533_);
lean_dec(v___y_1532_);
lean_dec(v___x_1531_);
v___x_1548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1548_, 0, v_bs_1538_);
return v___x_1548_;
}
else
{
lean_object* v___x_1549_; lean_object* v_ref_1550_; uint8_t v_kind_1551_; lean_object* v_levelParams_1552_; lean_object* v_modifiers_1553_; lean_object* v_declName_1554_; lean_object* v_binders_1555_; lean_object* v_numSectionVars_1556_; lean_object* v_type_1557_; lean_object* v_termination_1558_; lean_object* v___x_1559_; uint8_t v___x_1560_; uint8_t v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___f_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1549_ = lean_array_fget_borrowed(v_as_1535_, v_j_1537_);
v_ref_1550_ = lean_ctor_get(v___x_1549_, 0);
v_kind_1551_ = lean_ctor_get_uint8(v___x_1549_, sizeof(void*)*9);
v_levelParams_1552_ = lean_ctor_get(v___x_1549_, 1);
v_modifiers_1553_ = lean_ctor_get(v___x_1549_, 2);
v_declName_1554_ = lean_ctor_get(v___x_1549_, 3);
v_binders_1555_ = lean_ctor_get(v___x_1549_, 4);
v_numSectionVars_1556_ = lean_ctor_get(v___x_1549_, 5);
v_type_1557_ = lean_ctor_get(v___x_1549_, 6);
v_termination_1558_ = lean_ctor_get(v___x_1549_, 8);
v___x_1559_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1);
v___x_1560_ = 1;
v___x_1561_ = 1;
v___x_1562_ = lean_array_get_borrowed(v___x_1559_, v___x_1530_, v_j_1537_);
v___x_1563_ = lean_box(v_isZero_1547_);
v___x_1564_ = lean_box(v___x_1560_);
v___x_1565_ = lean_box(v___x_1561_);
v___x_1566_ = lean_box(v_kind_1551_);
lean_inc_ref(v_termination_1558_);
lean_inc_ref_n(v_type_1557_, 2);
lean_inc(v_numSectionVars_1556_);
lean_inc(v_binders_1555_);
lean_inc(v_declName_1554_);
lean_inc_ref(v_modifiers_1553_);
lean_inc(v_levelParams_1552_);
lean_inc(v_ref_1550_);
lean_inc_ref(v_a_1534_);
lean_inc(v_j_1537_);
lean_inc(v___x_1533_);
lean_inc(v___y_1532_);
lean_inc(v___x_1531_);
lean_inc(v___x_1562_);
v___f_1567_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___lam__0___boxed), 27, 18);
lean_closure_set(v___f_1567_, 0, v___x_1562_);
lean_closure_set(v___f_1567_, 1, v___x_1531_);
lean_closure_set(v___f_1567_, 2, v___y_1532_);
lean_closure_set(v___f_1567_, 3, v___x_1533_);
lean_closure_set(v___f_1567_, 4, v_j_1537_);
lean_closure_set(v___f_1567_, 5, v_a_1534_);
lean_closure_set(v___f_1567_, 6, v___x_1563_);
lean_closure_set(v___f_1567_, 7, v___x_1564_);
lean_closure_set(v___f_1567_, 8, v___x_1565_);
lean_closure_set(v___f_1567_, 9, v_ref_1550_);
lean_closure_set(v___f_1567_, 10, v___x_1566_);
lean_closure_set(v___f_1567_, 11, v_levelParams_1552_);
lean_closure_set(v___f_1567_, 12, v_modifiers_1553_);
lean_closure_set(v___f_1567_, 13, v_declName_1554_);
lean_closure_set(v___f_1567_, 14, v_binders_1555_);
lean_closure_set(v___f_1567_, 15, v_numSectionVars_1556_);
lean_closure_set(v___f_1567_, 16, v_type_1557_);
lean_closure_set(v___f_1567_, 17, v_termination_1558_);
v___x_1568_ = lean_array_get_size(v___x_1562_);
v___x_1569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1568_);
v___x_1570_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_partialFixpoint_spec__20___redArg(v_type_1557_, v___x_1569_, v___f_1567_, v_isZero_1547_, v_isZero_1547_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v_one_1572_; lean_object* v_n_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
lean_inc(v_a_1571_);
lean_dec_ref(v___x_1570_);
v_one_1572_ = lean_unsigned_to_nat(1u);
v_n_1573_ = lean_nat_sub(v_i_1536_, v_one_1572_);
lean_dec(v_i_1536_);
v___x_1574_ = lean_nat_add(v_j_1537_, v_one_1572_);
lean_dec(v_j_1537_);
v___x_1575_ = lean_array_push(v_bs_1538_, v_a_1571_);
v_i_1536_ = v_n_1573_;
v_j_1537_ = v___x_1574_;
v_bs_1538_ = v___x_1575_;
goto _start;
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
lean_dec_ref(v_bs_1538_);
lean_dec(v_j_1537_);
lean_dec(v_i_1536_);
lean_dec_ref(v_a_1534_);
lean_dec(v___x_1533_);
lean_dec(v___y_1532_);
lean_dec(v___x_1531_);
v_a_1577_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1570_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1570_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1577_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg___boxed(lean_object* v___x_1585_, lean_object* v___x_1586_, lean_object* v___y_1587_, lean_object* v___x_1588_, lean_object* v_a_1589_, lean_object* v_as_1590_, lean_object* v_i_1591_, lean_object* v_j_1592_, lean_object* v_bs_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_){
_start:
{
lean_object* v_res_1601_; 
v_res_1601_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg(v___x_1585_, v___x_1586_, v___y_1587_, v___x_1588_, v_a_1589_, v_as_1590_, v_i_1591_, v_j_1592_, v_bs_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_);
lean_dec(v___y_1599_);
lean_dec_ref(v___y_1598_);
lean_dec(v___y_1597_);
lean_dec_ref(v___y_1596_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec_ref(v_as_1590_);
lean_dec_ref(v___x_1585_);
return v_res_1601_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__2(lean_object* v___x_1602_, lean_object* v_e_1603_){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
v___x_1604_ = l_Lean_indentD(v_e_1603_);
v___x_1605_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1602_);
lean_ctor_set(v___x_1605_, 1, v___x_1604_);
return v___x_1605_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__0(void){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_1606_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__1(void){
_start:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
v___x_1607_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__0, &l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__0);
v___x_1608_ = l_Lean_stringToMessageData(v___x_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9(lean_object* v_a_1609_, lean_object* v_a_1610_){
_start:
{
if (lean_obj_tag(v_a_1609_) == 0)
{
lean_object* v___x_1611_; 
v___x_1611_ = l_List_reverse___redArg(v_a_1610_);
return v___x_1611_;
}
else
{
lean_object* v_head_1612_; lean_object* v_tail_1613_; lean_object* v___x_1615_; uint8_t v_isShared_1616_; uint8_t v_isSharedCheck_1626_; 
v_head_1612_ = lean_ctor_get(v_a_1609_, 0);
v_tail_1613_ = lean_ctor_get(v_a_1609_, 1);
v_isSharedCheck_1626_ = !lean_is_exclusive(v_a_1609_);
if (v_isSharedCheck_1626_ == 0)
{
v___x_1615_ = v_a_1609_;
v_isShared_1616_ = v_isSharedCheck_1626_;
goto v_resetjp_1614_;
}
else
{
lean_inc(v_tail_1613_);
lean_inc(v_head_1612_);
lean_dec(v_a_1609_);
v___x_1615_ = lean_box(0);
v_isShared_1616_ = v_isSharedCheck_1626_;
goto v_resetjp_1614_;
}
v_resetjp_1614_:
{
lean_object* v___x_1617_; uint8_t v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1623_; 
v___x_1617_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9___closed__1);
v___x_1618_ = 0;
v___x_1619_ = l_Lean_MessageData_ofConstName(v_head_1612_, v___x_1618_);
v___x_1620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1617_);
lean_ctor_set(v___x_1620_, 1, v___x_1619_);
v___x_1621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1621_, 0, v___x_1620_);
lean_ctor_set(v___x_1621_, 1, v___x_1617_);
if (v_isShared_1616_ == 0)
{
lean_ctor_set(v___x_1615_, 1, v_a_1610_);
lean_ctor_set(v___x_1615_, 0, v___x_1621_);
v___x_1623_ = v___x_1615_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1625_; 
v_reuseFailAlloc_1625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1625_, 0, v___x_1621_);
lean_ctor_set(v_reuseFailAlloc_1625_, 1, v_a_1610_);
v___x_1623_ = v_reuseFailAlloc_1625_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
v_a_1609_ = v_tail_1613_;
v_a_1610_ = v___x_1623_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = lean_alloc_closure((void*)(l_Lean_hasRecAppSyntax___boxed), 1, 0);
return v___x_1627_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1628_; 
v___x_1628_ = lean_mk_string_unchecked("Cannot eliminate recursive call `", 33, 33);
return v___x_1628_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__1);
v___x_1630_ = l_Lean_stringToMessageData(v___x_1629_);
return v___x_1630_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = lean_mk_string_unchecked("` enclosed in", 13, 13);
return v___x_1631_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__3);
v___x_1633_ = l_Lean_stringToMessageData(v___x_1632_);
return v___x_1633_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_1634_; 
v___x_1634_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_1634_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__5, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__5_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__5);
v___x_1636_ = l_Lean_stringToMessageData(v___x_1635_);
return v___x_1636_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_1637_; 
v___x_1637_ = lean_mk_string_unchecked("Lean.Elab.partialFixpoint", 25, 25);
return v___x_1637_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_1638_; 
v___x_1638_ = lean_mk_string_unchecked("getRecAppSyntax\? failed", 23, 23);
return v___x_1638_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1639_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__8, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__8_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__8);
v___x_1640_ = lean_unsigned_to_nat(52u);
v___x_1641_ = lean_unsigned_to_nat(148u);
v___x_1642_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7);
v___x_1643_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0);
v___x_1644_ = l_mkPanicMessageWithDecl(v___x_1643_, v___x_1642_, v___x_1641_, v___x_1640_, v___x_1639_);
return v___x_1644_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__10(void){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = lean_mk_string_unchecked("Cannot eliminate recursive call in", 34, 34);
return v___x_1645_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__11(void){
_start:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; 
v___x_1646_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__10, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__10_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__10);
v___x_1647_ = l_Lean_stringToMessageData(v___x_1646_);
return v___x_1647_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__12(void){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = lean_mk_string_unchecked("Tried to apply ", 15, 15);
return v___x_1648_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__13(void){
_start:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; 
v___x_1649_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__12, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__12_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__12);
v___x_1650_ = l_Lean_stringToMessageData(v___x_1649_);
return v___x_1650_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__14(void){
_start:
{
lean_object* v___x_1651_; 
v___x_1651_ = lean_mk_string_unchecked(", but failed.\nPossible cause: A missing `", 41, 41);
return v___x_1651_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__15(void){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__14, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__14_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__14);
v___x_1653_ = l_Lean_stringToMessageData(v___x_1652_);
return v___x_1653_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__16(void){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = lean_mk_string_unchecked("MonoBind", 8, 8);
return v___x_1654_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__17(void){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1655_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__16, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__16_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__16);
v___x_1656_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3);
v___x_1657_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_1658_ = l_Lean_Name_mkStr3(v___x_1657_, v___x_1656_, v___x_1655_);
return v___x_1658_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__18(void){
_start:
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_mk_string_unchecked("` instance.\nUse `set_option trace.Elab.Tactic.monotonicity true` to debug.", 74, 74);
return v___x_1659_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__19(void){
_start:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; 
v___x_1660_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__18, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__18_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__18);
v___x_1661_ = l_Lean_stringToMessageData(v___x_1660_);
return v___x_1661_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__20(void){
_start:
{
lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1662_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg___closed__1);
v___x_1663_ = l_Lean_stringToMessageData(v___x_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0(lean_object* v_monoThms_1664_, lean_object* v_t_1665_, lean_object* v___y_1666_, lean_object* v___y_1667_, lean_object* v___y_1668_, lean_object* v___y_1669_){
_start:
{
lean_object* v___y_1672_; lean_object* v___x_1716_; lean_object* v___x_1717_; uint8_t v___x_1718_; 
v___x_1716_ = lean_array_get_size(v_monoThms_1664_);
v___x_1717_ = lean_unsigned_to_nat(0u);
v___x_1718_ = lean_nat_dec_eq(v___x_1716_, v___x_1717_);
if (v___x_1718_ == 0)
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
v___x_1719_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__13, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__13_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__13);
v___x_1720_ = lean_array_to_list(v_monoThms_1664_);
v___x_1721_ = lean_box(0);
v___x_1722_ = l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__9(v___x_1720_, v___x_1721_);
v___x_1723_ = l_Lean_MessageData_andList(v___x_1722_);
v___x_1724_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1724_, 0, v___x_1719_);
lean_ctor_set(v___x_1724_, 1, v___x_1723_);
v___x_1725_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__15, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__15_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__15);
v___x_1726_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1724_);
lean_ctor_set(v___x_1726_, 1, v___x_1725_);
v___x_1727_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__17, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__17_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__17);
v___x_1728_ = l_Lean_MessageData_ofConstName(v___x_1727_, v___x_1718_);
v___x_1729_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1726_);
lean_ctor_set(v___x_1729_, 1, v___x_1728_);
v___x_1730_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__19, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__19_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__19);
v___x_1731_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1729_);
lean_ctor_set(v___x_1731_, 1, v___x_1730_);
v___y_1672_ = v___x_1731_;
goto v___jp_1671_;
}
else
{
lean_object* v___x_1732_; 
lean_dec_ref(v_monoThms_1664_);
v___x_1732_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__20, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__20_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__20);
v___y_1672_ = v___x_1732_;
goto v___jp_1671_;
}
v___jp_1671_:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1673_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__0);
v___x_1674_ = lean_find_expr(v___x_1673_, v_t_1665_);
if (lean_obj_tag(v___x_1674_) == 1)
{
lean_object* v_val_1675_; lean_object* v___x_1676_; 
v_val_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_val_1675_);
lean_dec_ref(v___x_1674_);
v___x_1676_ = l_Lean_getRecAppSyntax_x3f(v_val_1675_);
lean_dec(v_val_1675_);
if (lean_obj_tag(v___x_1676_) == 1)
{
lean_object* v_val_1677_; lean_object* v_fileName_1678_; lean_object* v_fileMap_1679_; lean_object* v_options_1680_; lean_object* v_currRecDepth_1681_; lean_object* v_maxRecDepth_1682_; lean_object* v_ref_1683_; lean_object* v_currNamespace_1684_; lean_object* v_openDecls_1685_; lean_object* v_initHeartbeats_1686_; lean_object* v_maxHeartbeats_1687_; lean_object* v_quotContext_1688_; lean_object* v_currMacroScope_1689_; uint8_t v_diag_1690_; lean_object* v_cancelTk_x3f_1691_; uint8_t v_suppressElabErrors_1692_; lean_object* v_inheritedTraceOptions_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v_ref_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v_val_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc_n(v_val_1677_, 2);
lean_dec_ref(v___x_1676_);
v_fileName_1678_ = lean_ctor_get(v___y_1668_, 0);
v_fileMap_1679_ = lean_ctor_get(v___y_1668_, 1);
v_options_1680_ = lean_ctor_get(v___y_1668_, 2);
v_currRecDepth_1681_ = lean_ctor_get(v___y_1668_, 3);
v_maxRecDepth_1682_ = lean_ctor_get(v___y_1668_, 4);
v_ref_1683_ = lean_ctor_get(v___y_1668_, 5);
v_currNamespace_1684_ = lean_ctor_get(v___y_1668_, 6);
v_openDecls_1685_ = lean_ctor_get(v___y_1668_, 7);
v_initHeartbeats_1686_ = lean_ctor_get(v___y_1668_, 8);
v_maxHeartbeats_1687_ = lean_ctor_get(v___y_1668_, 9);
v_quotContext_1688_ = lean_ctor_get(v___y_1668_, 10);
v_currMacroScope_1689_ = lean_ctor_get(v___y_1668_, 11);
v_diag_1690_ = lean_ctor_get_uint8(v___y_1668_, sizeof(void*)*14);
v_cancelTk_x3f_1691_ = lean_ctor_get(v___y_1668_, 12);
v_suppressElabErrors_1692_ = lean_ctor_get_uint8(v___y_1668_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1693_ = lean_ctor_get(v___y_1668_, 13);
v___x_1694_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__2);
v___x_1695_ = l_Lean_MessageData_ofSyntax(v_val_1677_);
v___x_1696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1696_, 0, v___x_1694_);
lean_ctor_set(v___x_1696_, 1, v___x_1695_);
v___x_1697_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__4);
v___x_1698_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1696_);
lean_ctor_set(v___x_1698_, 1, v___x_1697_);
v___x_1699_ = l_Lean_indentExpr(v_t_1665_);
v___x_1700_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1700_, 0, v___x_1698_);
lean_ctor_set(v___x_1700_, 1, v___x_1699_);
v___x_1701_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6);
v___x_1702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1700_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1703_, 0, v___x_1702_);
lean_ctor_set(v___x_1703_, 1, v___y_1672_);
v_ref_1704_ = l_Lean_replaceRef(v_val_1677_, v_ref_1683_);
lean_dec(v_val_1677_);
lean_inc_ref(v_inheritedTraceOptions_1693_);
lean_inc(v_cancelTk_x3f_1691_);
lean_inc(v_currMacroScope_1689_);
lean_inc(v_quotContext_1688_);
lean_inc(v_maxHeartbeats_1687_);
lean_inc(v_initHeartbeats_1686_);
lean_inc(v_openDecls_1685_);
lean_inc(v_currNamespace_1684_);
lean_inc(v_maxRecDepth_1682_);
lean_inc(v_currRecDepth_1681_);
lean_inc_ref(v_options_1680_);
lean_inc_ref(v_fileMap_1679_);
lean_inc_ref(v_fileName_1678_);
v___x_1705_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1705_, 0, v_fileName_1678_);
lean_ctor_set(v___x_1705_, 1, v_fileMap_1679_);
lean_ctor_set(v___x_1705_, 2, v_options_1680_);
lean_ctor_set(v___x_1705_, 3, v_currRecDepth_1681_);
lean_ctor_set(v___x_1705_, 4, v_maxRecDepth_1682_);
lean_ctor_set(v___x_1705_, 5, v_ref_1704_);
lean_ctor_set(v___x_1705_, 6, v_currNamespace_1684_);
lean_ctor_set(v___x_1705_, 7, v_openDecls_1685_);
lean_ctor_set(v___x_1705_, 8, v_initHeartbeats_1686_);
lean_ctor_set(v___x_1705_, 9, v_maxHeartbeats_1687_);
lean_ctor_set(v___x_1705_, 10, v_quotContext_1688_);
lean_ctor_set(v___x_1705_, 11, v_currMacroScope_1689_);
lean_ctor_set(v___x_1705_, 12, v_cancelTk_x3f_1691_);
lean_ctor_set(v___x_1705_, 13, v_inheritedTraceOptions_1693_);
lean_ctor_set_uint8(v___x_1705_, sizeof(void*)*14, v_diag_1690_);
lean_ctor_set_uint8(v___x_1705_, sizeof(void*)*14 + 1, v_suppressElabErrors_1692_);
v___x_1706_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(v___x_1703_, v___y_1666_, v___y_1667_, v___x_1705_, v___y_1669_);
lean_dec_ref(v___x_1705_);
return v___x_1706_;
}
else
{
lean_object* v___x_1707_; lean_object* v___x_1708_; 
lean_dec(v___x_1676_);
lean_dec_ref(v___y_1672_);
lean_dec_ref(v_t_1665_);
v___x_1707_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__9, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__9);
v___x_1708_ = l_panic___at___00Lean_Elab_partialFixpoint_spec__8___redArg(v___x_1707_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_);
return v___x_1708_;
}
}
else
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; 
lean_dec(v___x_1674_);
v___x_1709_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__11, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__11_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__11);
v___x_1710_ = l_Lean_indentExpr(v_t_1665_);
v___x_1711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1711_, 0, v___x_1709_);
lean_ctor_set(v___x_1711_, 1, v___x_1710_);
v___x_1712_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__6);
v___x_1713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1711_);
lean_ctor_set(v___x_1713_, 1, v___x_1712_);
v___x_1714_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1714_, 0, v___x_1713_);
lean_ctor_set(v___x_1714_, 1, v___y_1672_);
v___x_1715_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6___redArg(v___x_1714_, v___y_1666_, v___y_1667_, v___y_1668_, v___y_1669_);
return v___x_1715_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___boxed(lean_object* v_monoThms_1733_, lean_object* v_t_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0(v_monoThms_1733_, v_t_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
lean_dec(v___y_1738_);
lean_dec_ref(v___y_1737_);
lean_dec(v___y_1736_);
lean_dec_ref(v___y_1735_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__1(lean_object* v_preDefs_1741_, lean_object* v_a_1742_, lean_object* v_fixedArgs_1743_, lean_object* v_00_u03b1_1744_, lean_object* v_f_1745_, lean_object* v_monoThms_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v___f_1752_; lean_object* v___x_1753_; 
v___f_1752_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1752_, 0, v_monoThms_1746_);
v___x_1753_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps___redArg(v_preDefs_1741_, v_a_1742_, v_fixedArgs_1743_, v_f_1745_, v___f_1752_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__1___boxed(lean_object* v_preDefs_1754_, lean_object* v_a_1755_, lean_object* v_fixedArgs_1756_, lean_object* v_00_u03b1_1757_, lean_object* v_f_1758_, lean_object* v_monoThms_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v_res_1765_; 
v_res_1765_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__1(v_preDefs_1754_, v_a_1755_, v_fixedArgs_1756_, v_00_u03b1_1757_, v_f_1758_, v_monoThms_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec(v___y_1763_);
lean_dec_ref(v___y_1762_);
lean_dec(v___y_1761_);
lean_dec_ref(v___y_1760_);
return v_res_1765_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__3(lean_object* v___f_1766_, lean_object* v___x_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = l_Lean_Meta_Monotonicity_solveMono(v___f_1766_, v___x_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__3___boxed(lean_object* v___f_1774_, lean_object* v___x_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__3(v___f_1774_, v___x_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
lean_dec(v___y_1779_);
lean_dec_ref(v___y_1778_);
lean_dec(v___y_1777_);
lean_dec_ref(v___y_1776_);
return v_res_1781_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = lean_mk_string_unchecked("Could not prove '", 17, 17);
return v___x_1782_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_1783_; lean_object* v___x_1784_; 
v___x_1783_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__0);
v___x_1784_ = l_Lean_stringToMessageData(v___x_1783_);
return v___x_1784_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = lean_mk_string_unchecked("' to be monotone in its recursive calls:", 40, 40);
return v___x_1785_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__3(void){
_start:
{
lean_object* v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__2);
v___x_1787_ = l_Lean_stringToMessageData(v___x_1786_);
return v___x_1787_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4(void){
_start:
{
lean_object* v___x_1788_; 
v___x_1788_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_1788_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__5(void){
_start:
{
lean_object* v___x_1789_; 
v___x_1789_ = lean_mk_string_unchecked("definition", 10, 10);
return v___x_1789_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__6(void){
_start:
{
lean_object* v___x_1790_; 
v___x_1790_ = lean_mk_string_unchecked("partialFixpoint", 15, 15);
return v___x_1790_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7(void){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1791_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__6, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__6_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__6);
v___x_1792_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__5, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__5_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__5);
v___x_1793_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4);
v___x_1794_ = l_Lean_Name_mkStr3(v___x_1793_, v___x_1792_, v___x_1791_);
return v___x_1794_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__8(void){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_1795_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__9(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1796_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__8, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__8_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__8);
v___x_1797_ = l_Lean_Name_mkStr1(v___x_1796_);
return v___x_1797_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10(void){
_start:
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1798_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7);
v___x_1799_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__9, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__9);
v___x_1800_ = l_Lean_Name_append(v___x_1799_, v___x_1798_);
return v___x_1800_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__11(void){
_start:
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_mk_string_unchecked("monotonicity proof for ", 23, 23);
return v___x_1801_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__12(void){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__11, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__11_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__11);
v___x_1803_ = l_Lean_stringToMessageData(v___x_1802_);
return v___x_1803_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__13(void){
_start:
{
lean_object* v___x_1804_; 
v___x_1804_ = lean_mk_string_unchecked(": ", 2, 2);
return v___x_1804_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__14(void){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1805_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__13, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__13_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__13);
v___x_1806_ = l_Lean_stringToMessageData(v___x_1805_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg(lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_hints_1812_, lean_object* v_preDefs_1813_, lean_object* v_a_1814_, lean_object* v_fixedArgs_1815_, lean_object* v_as_1816_, lean_object* v_i_1817_, lean_object* v_j_1818_, lean_object* v_bs_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
lean_object* v_zero_1827_; uint8_t v_isZero_1828_; 
v_zero_1827_ = lean_unsigned_to_nat(0u);
v_isZero_1828_ = lean_nat_dec_eq(v_i_1817_, v_zero_1827_);
if (v_isZero_1828_ == 1)
{
lean_object* v___x_1829_; 
lean_dec(v_j_1818_);
lean_dec(v_i_1817_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v_bs_1819_);
return v___x_1829_;
}
else
{
lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v___x_1830_ = l_Lean_instInhabitedExpr;
v___x_1831_ = lean_array_get_borrowed(v___x_1830_, v_a_1807_, v_j_1818_);
v___x_1832_ = lean_array_get_borrowed(v___x_1830_, v_a_1808_, v_j_1818_);
lean_inc(v___x_1831_);
v___x_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1831_);
lean_inc_ref(v___x_1833_);
lean_inc(v___x_1832_);
v___x_1834_ = l_Lean_Meta_toPartialOrder(v___x_1832_, v___x_1833_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1834_) == 0)
{
lean_object* v_a_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v_a_1835_ = lean_ctor_get(v___x_1834_, 0);
lean_inc(v_a_1835_);
lean_dec_ref(v___x_1834_);
v___x_1836_ = lean_array_get_borrowed(v___x_1830_, v_a_1809_, v_j_1818_);
v___x_1837_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__5);
lean_inc_ref(v_a_1810_);
v___x_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1838_, 0, v_a_1810_);
lean_inc_ref(v_a_1811_);
v___x_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1839_, 0, v_a_1811_);
v___x_1840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1840_, 0, v_a_1835_);
lean_inc(v___x_1836_);
v___x_1841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1841_, 0, v___x_1836_);
v___x_1842_ = lean_unsigned_to_nat(5u);
v___x_1843_ = lean_mk_empty_array_with_capacity(v___x_1842_);
v___x_1844_ = lean_array_push(v___x_1843_, v___x_1838_);
v___x_1845_ = lean_array_push(v___x_1844_, v___x_1839_);
v___x_1846_ = lean_array_push(v___x_1845_, v___x_1833_);
v___x_1847_ = lean_array_push(v___x_1846_, v___x_1840_);
v___x_1848_ = lean_array_push(v___x_1847_, v___x_1841_);
v___x_1849_ = l_Lean_Meta_mkAppOptM(v___x_1837_, v___x_1848_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v_term_x3f_1853_; lean_object* v_one_1854_; lean_object* v_n_1855_; lean_object* v_a_1857_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
lean_dec_ref(v___x_1849_);
v___x_1851_ = l_Lean_Elab_instInhabitedPartialFixpoint_default;
v___x_1852_ = lean_array_get_borrowed(v___x_1851_, v_hints_1812_, v_j_1818_);
v_term_x3f_1853_ = lean_ctor_get(v___x_1852_, 1);
lean_inc(v_term_x3f_1853_);
v_one_1854_ = lean_unsigned_to_nat(1u);
v_n_1855_ = lean_nat_sub(v_i_1817_, v_one_1854_);
lean_dec(v_i_1817_);
if (lean_obj_tag(v_term_x3f_1853_) == 1)
{
lean_object* v_val_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1919_; 
v_val_1861_ = lean_ctor_get(v_term_x3f_1853_, 0);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_term_x3f_1853_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1863_ = v_term_x3f_1853_;
v_isShared_1864_ = v_isSharedCheck_1919_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_val_1861_);
lean_dec(v_term_x3f_1853_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1919_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
uint8_t v___x_1865_; lean_object* v___x_1867_; 
v___x_1865_ = 1;
lean_inc(v_a_1850_);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v_a_1850_);
v___x_1867_ = v___x_1863_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_a_1850_);
v___x_1867_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; uint8_t v___x_1872_; lean_object* v___x_1873_; 
v___x_1868_ = lean_box(0);
v___x_1869_ = lean_box(v___x_1865_);
v___x_1870_ = lean_box(v___x_1865_);
v___x_1871_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_elabTermEnsuringType___boxed), 12, 5);
lean_closure_set(v___x_1871_, 0, v_val_1861_);
lean_closure_set(v___x_1871_, 1, v___x_1867_);
lean_closure_set(v___x_1871_, 2, v___x_1869_);
lean_closure_set(v___x_1871_, 3, v___x_1870_);
lean_closure_set(v___x_1871_, 4, v___x_1868_);
v___x_1872_ = 1;
v___x_1873_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_1871_, v___x_1872_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1873_) == 0)
{
lean_object* v_a_1874_; lean_object* v___x_1875_; lean_object* v_a_1876_; lean_object* v___x_1877_; 
v_a_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_a_1874_);
lean_dec_ref(v___x_1873_);
v___x_1875_ = l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg(v_a_1874_, v___y_1823_, v___y_1825_);
v_a_1876_ = lean_ctor_get(v___x_1875_, 0);
lean_inc_n(v_a_1876_, 2);
lean_dec_ref(v___x_1875_);
v___x_1877_ = l_Lean_Meta_getMVars(v_a_1876_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1877_) == 0)
{
lean_object* v_a_1878_; lean_object* v___x_1879_; uint8_t v___x_1880_; 
v_a_1878_ = lean_ctor_get(v___x_1877_, 0);
lean_inc(v_a_1878_);
lean_dec_ref(v___x_1877_);
v___x_1879_ = lean_array_get_size(v_a_1878_);
v___x_1880_ = lean_nat_dec_eq(v___x_1879_, v_zero_1827_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; 
lean_dec(v_a_1876_);
v___x_1881_ = l_Lean_Elab_Term_logUnassignedUsingErrorInfos(v_a_1878_, v___x_1868_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
lean_dec(v_a_1878_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v___x_1882_; 
lean_dec_ref(v___x_1881_);
lean_inc(v_a_1850_);
v___x_1882_ = l_Lean_Meta_mkSorry(v_a_1850_, v___x_1865_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1882_) == 0)
{
lean_object* v_a_1883_; lean_object* v___x_1884_; 
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
lean_inc(v_a_1883_);
lean_dec_ref(v___x_1882_);
v___x_1884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1884_, 0, v_a_1850_);
lean_ctor_set(v___x_1884_, 1, v_a_1883_);
v_a_1857_ = v___x_1884_;
goto v___jp_1856_;
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1885_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1882_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1882_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
else
{
lean_object* v_a_1893_; lean_object* v___x_1895_; uint8_t v_isShared_1896_; uint8_t v_isSharedCheck_1900_; 
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1893_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1900_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1895_ = v___x_1881_;
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
else
{
lean_inc(v_a_1893_);
lean_dec(v___x_1881_);
v___x_1895_ = lean_box(0);
v_isShared_1896_ = v_isSharedCheck_1900_;
goto v_resetjp_1894_;
}
v_resetjp_1894_:
{
lean_object* v___x_1898_; 
if (v_isShared_1896_ == 0)
{
v___x_1898_ = v___x_1895_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_a_1893_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
lean_object* v___x_1901_; 
lean_dec(v_a_1878_);
v___x_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1901_, 0, v_a_1850_);
lean_ctor_set(v___x_1901_, 1, v_a_1876_);
v_a_1857_ = v___x_1901_;
goto v___jp_1856_;
}
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_dec(v_a_1876_);
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1902_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1877_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1877_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
else
{
lean_object* v_a_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1917_; 
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1910_ = lean_ctor_get(v___x_1873_, 0);
v_isSharedCheck_1917_ = !lean_is_exclusive(v___x_1873_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1912_ = v___x_1873_;
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_a_1910_);
lean_dec(v___x_1873_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1917_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v___x_1915_; 
if (v_isShared_1913_ == 0)
{
v___x_1915_ = v___x_1912_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1916_; 
v_reuseFailAlloc_1916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1916_, 0, v_a_1910_);
v___x_1915_ = v_reuseFailAlloc_1916_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
return v___x_1915_;
}
}
}
}
}
}
else
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
lean_dec(v_term_x3f_1853_);
v___x_1920_ = lean_box(0);
lean_inc(v_a_1850_);
v___x_1921_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_1850_, v___x_1920_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v___y_1926_; lean_object* v___y_1927_; lean_object* v___y_1928_; lean_object* v___y_1929_; lean_object* v___x_1933_; lean_object* v_declName_1934_; lean_object* v___f_1935_; lean_object* v___x_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___f_1941_; lean_object* v___x_1942_; lean_object* v___f_1943_; lean_object* v___x_1944_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
lean_inc(v_a_1922_);
lean_dec_ref(v___x_1921_);
v___x_1933_ = lean_array_fget_borrowed(v_as_1816_, v_j_1818_);
v_declName_1934_ = lean_ctor_get(v___x_1933_, 3);
lean_inc_ref(v_fixedArgs_1815_);
lean_inc_ref(v_a_1814_);
lean_inc_ref(v_preDefs_1813_);
v___f_1935_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__1___boxed), 11, 3);
lean_closure_set(v___f_1935_, 0, v_preDefs_1813_);
lean_closure_set(v___f_1935_, 1, v_a_1814_);
lean_closure_set(v___f_1935_, 2, v_fixedArgs_1815_);
v___x_1936_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__1);
lean_inc(v_declName_1934_);
v___x_1937_ = l_Lean_MessageData_ofName(v_declName_1934_);
lean_inc_ref(v___x_1937_);
v___x_1938_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1938_, 0, v___x_1936_);
lean_ctor_set(v___x_1938_, 1, v___x_1937_);
v___x_1939_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__3);
v___x_1940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1938_);
lean_ctor_set(v___x_1940_, 1, v___x_1939_);
v___f_1941_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1941_, 0, v___x_1940_);
v___x_1942_ = l_Lean_Expr_mvarId_x21(v_a_1922_);
v___f_1943_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__3___boxed), 7, 2);
lean_closure_set(v___f_1943_, 0, v___f_1935_);
lean_closure_set(v___f_1943_, 1, v___x_1942_);
v___x_1944_ = l_Lean_Meta_mapErrorImp___redArg(v___f_1943_, v___f_1941_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1944_) == 0)
{
if (lean_obj_tag(v___x_1944_) == 0)
{
lean_object* v_options_1945_; uint8_t v_hasTrace_1946_; 
lean_dec_ref(v___x_1944_);
v_options_1945_ = lean_ctor_get(v___y_1824_, 2);
v_hasTrace_1946_ = lean_ctor_get_uint8(v_options_1945_, sizeof(void*)*1);
if (v_hasTrace_1946_ == 0)
{
lean_dec_ref(v___x_1937_);
v___y_1924_ = v___y_1820_;
v___y_1925_ = v___y_1821_;
v___y_1926_ = v___y_1822_;
v___y_1927_ = v___y_1823_;
v___y_1928_ = v___y_1824_;
v___y_1929_ = v___y_1825_;
goto v___jp_1923_;
}
else
{
lean_object* v_inheritedTraceOptions_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; uint8_t v___x_1950_; 
v_inheritedTraceOptions_1947_ = lean_ctor_get(v___y_1824_, 13);
v___x_1948_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7);
v___x_1949_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10);
v___x_1950_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1947_, v_options_1945_, v___x_1949_);
if (v___x_1950_ == 0)
{
lean_dec_ref(v___x_1937_);
v___y_1924_ = v___y_1820_;
v___y_1925_ = v___y_1821_;
v___y_1926_ = v___y_1822_;
v___y_1927_ = v___y_1823_;
v___y_1928_ = v___y_1824_;
v___y_1929_ = v___y_1825_;
goto v___jp_1923_;
}
else
{
lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; 
v___x_1951_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__12, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__12_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__12);
v___x_1952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1951_);
lean_ctor_set(v___x_1952_, 1, v___x_1937_);
v___x_1953_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__14, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__14_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__14);
v___x_1954_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1954_, 0, v___x_1952_);
lean_ctor_set(v___x_1954_, 1, v___x_1953_);
lean_inc(v_a_1922_);
v___x_1955_ = l_Lean_MessageData_ofExpr(v_a_1922_);
v___x_1956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1956_, 0, v___x_1954_);
lean_ctor_set(v___x_1956_, 1, v___x_1955_);
v___x_1957_ = l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(v___x_1948_, v___x_1956_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_dec_ref(v___x_1957_);
v___y_1924_ = v___y_1820_;
v___y_1925_ = v___y_1821_;
v___y_1926_ = v___y_1822_;
v___y_1927_ = v___y_1823_;
v___y_1928_ = v___y_1824_;
v___y_1929_ = v___y_1825_;
goto v___jp_1923_;
}
else
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
lean_dec(v_a_1922_);
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1965_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_a_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
}
else
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1973_; 
lean_dec_ref(v___x_1937_);
lean_dec(v_a_1922_);
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1966_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1968_ = v___x_1944_;
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1944_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1973_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1971_; 
if (v_isShared_1969_ == 0)
{
lean_ctor_set_tag(v___x_1968_, 1);
v___x_1971_ = v___x_1968_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v_a_1966_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
return v___x_1971_;
}
}
}
}
else
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1981_; 
lean_dec_ref(v___x_1937_);
lean_dec(v_a_1922_);
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1974_ = lean_ctor_get(v___x_1944_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1976_ = v___x_1944_;
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1944_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
v___x_1979_ = v___x_1976_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v_a_1974_);
v___x_1979_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
return v___x_1979_;
}
}
}
v___jp_1923_:
{
lean_object* v___x_1930_; lean_object* v_a_1931_; lean_object* v___x_1932_; 
v___x_1930_ = l_Lean_instantiateMVars___at___00Lean_Elab_partialFixpoint_spec__18___redArg(v_a_1922_, v___y_1927_, v___y_1929_);
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref(v___x_1930_);
v___x_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1932_, 0, v_a_1850_);
lean_ctor_set(v___x_1932_, 1, v_a_1931_);
v_a_1857_ = v___x_1932_;
goto v___jp_1856_;
}
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
lean_dec(v_n_1855_);
lean_dec(v_a_1850_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1982_ = lean_ctor_get(v___x_1921_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1921_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v___x_1921_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___x_1921_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
return v___x_1987_;
}
}
}
}
v___jp_1856_:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; 
v___x_1858_ = lean_nat_add(v_j_1818_, v_one_1854_);
lean_dec(v_j_1818_);
v___x_1859_ = lean_array_push(v_bs_1819_, v_a_1857_);
v_i_1817_ = v_n_1855_;
v_j_1818_ = v___x_1858_;
v_bs_1819_ = v___x_1859_;
goto _start;
}
}
else
{
lean_object* v_a_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_1997_; 
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec(v_i_1817_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1990_ = lean_ctor_get(v___x_1849_, 0);
v_isSharedCheck_1997_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1992_ = v___x_1849_;
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_a_1990_);
lean_dec(v___x_1849_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_1997_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v___x_1995_; 
if (v_isShared_1993_ == 0)
{
v___x_1995_ = v___x_1992_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_a_1990_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
else
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2005_; 
lean_dec_ref(v___x_1833_);
lean_dec_ref(v_bs_1819_);
lean_dec(v_j_1818_);
lean_dec(v_i_1817_);
lean_dec_ref(v_fixedArgs_1815_);
lean_dec_ref(v_a_1814_);
lean_dec_ref(v_preDefs_1813_);
lean_dec_ref(v_a_1811_);
lean_dec_ref(v_a_1810_);
v_a_1998_ = lean_ctor_get(v___x_1834_, 0);
v_isSharedCheck_2005_ = !lean_is_exclusive(v___x_1834_);
if (v_isSharedCheck_2005_ == 0)
{
v___x_2000_ = v___x_1834_;
v_isShared_2001_ = v_isSharedCheck_2005_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1834_);
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
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___boxed(lean_object** _args){
lean_object* v_a_2006_ = _args[0];
lean_object* v_a_2007_ = _args[1];
lean_object* v_a_2008_ = _args[2];
lean_object* v_a_2009_ = _args[3];
lean_object* v_a_2010_ = _args[4];
lean_object* v_hints_2011_ = _args[5];
lean_object* v_preDefs_2012_ = _args[6];
lean_object* v_a_2013_ = _args[7];
lean_object* v_fixedArgs_2014_ = _args[8];
lean_object* v_as_2015_ = _args[9];
lean_object* v_i_2016_ = _args[10];
lean_object* v_j_2017_ = _args[11];
lean_object* v_bs_2018_ = _args[12];
lean_object* v___y_2019_ = _args[13];
lean_object* v___y_2020_ = _args[14];
lean_object* v___y_2021_ = _args[15];
lean_object* v___y_2022_ = _args[16];
lean_object* v___y_2023_ = _args[17];
lean_object* v___y_2024_ = _args[18];
lean_object* v___y_2025_ = _args[19];
_start:
{
lean_object* v_res_2026_; 
v_res_2026_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg(v_a_2006_, v_a_2007_, v_a_2008_, v_a_2009_, v_a_2010_, v_hints_2011_, v_preDefs_2012_, v_a_2013_, v_fixedArgs_2014_, v_as_2015_, v_i_2016_, v_j_2017_, v_bs_2018_, v___y_2019_, v___y_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec_ref(v___y_2021_);
lean_dec(v___y_2020_);
lean_dec_ref(v___y_2019_);
lean_dec_ref(v_as_2015_);
lean_dec_ref(v_hints_2011_);
lean_dec_ref(v_a_2008_);
lean_dec_ref(v_a_2007_);
lean_dec_ref(v_a_2006_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19(lean_object* v_a_2027_, lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_hints_2032_, lean_object* v_preDefs_2033_, lean_object* v_a_2034_, lean_object* v_fixedArgs_2035_, lean_object* v_as_2036_, lean_object* v_i_2037_, lean_object* v_j_2038_, lean_object* v_inv_2039_, lean_object* v_bs_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg(v_a_2027_, v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_, v_hints_2032_, v_preDefs_2033_, v_a_2034_, v_fixedArgs_2035_, v_as_2036_, v_i_2037_, v_j_2038_, v_bs_2040_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___boxed(lean_object** _args){
lean_object* v_a_2049_ = _args[0];
lean_object* v_a_2050_ = _args[1];
lean_object* v_a_2051_ = _args[2];
lean_object* v_a_2052_ = _args[3];
lean_object* v_a_2053_ = _args[4];
lean_object* v_hints_2054_ = _args[5];
lean_object* v_preDefs_2055_ = _args[6];
lean_object* v_a_2056_ = _args[7];
lean_object* v_fixedArgs_2057_ = _args[8];
lean_object* v_as_2058_ = _args[9];
lean_object* v_i_2059_ = _args[10];
lean_object* v_j_2060_ = _args[11];
lean_object* v_inv_2061_ = _args[12];
lean_object* v_bs_2062_ = _args[13];
lean_object* v___y_2063_ = _args[14];
lean_object* v___y_2064_ = _args[15];
lean_object* v___y_2065_ = _args[16];
lean_object* v___y_2066_ = _args[17];
lean_object* v___y_2067_ = _args[18];
lean_object* v___y_2068_ = _args[19];
lean_object* v___y_2069_ = _args[20];
_start:
{
lean_object* v_res_2070_; 
v_res_2070_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19(v_a_2049_, v_a_2050_, v_a_2051_, v_a_2052_, v_a_2053_, v_hints_2054_, v_preDefs_2055_, v_a_2056_, v_fixedArgs_2057_, v_as_2058_, v_i_2059_, v_j_2060_, v_inv_2061_, v_bs_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec_ref(v_as_2058_);
lean_dec_ref(v_hints_2054_);
lean_dec_ref(v_a_2051_);
lean_dec_ref(v_a_2050_);
lean_dec_ref(v_a_2049_);
return v_res_2070_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___lam__0(lean_object* v_xs_2071_, lean_object* v_inst_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
lean_object* v___x_2080_; 
v___x_2080_ = l_Lean_Meta_mkInstPiOfInstsForall(v_xs_2071_, v_inst_2072_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
return v___x_2080_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___lam__0___boxed(lean_object* v_xs_2081_, lean_object* v_inst_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___lam__0(v_xs_2081_, v_inst_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
return v_res_2090_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___closed__0(void){
_start:
{
lean_object* v___f_2091_; 
v___f_2091_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___lam__0___boxed), 9, 0);
return v___f_2091_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12(size_t v_sz_2092_, size_t v_i_2093_, lean_object* v_bs_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_){
_start:
{
uint8_t v___x_2102_; 
v___x_2102_ = lean_usize_dec_lt(v_i_2093_, v_sz_2092_);
if (v___x_2102_ == 0)
{
lean_object* v___x_2103_; 
v___x_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2103_, 0, v_bs_2094_);
return v___x_2103_;
}
else
{
lean_object* v___f_2104_; lean_object* v_v_2105_; uint8_t v___x_2106_; lean_object* v___x_2107_; 
v___f_2104_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___closed__0);
v_v_2105_ = lean_array_uget_borrowed(v_bs_2094_, v_i_2093_);
v___x_2106_ = 0;
lean_inc(v_v_2105_);
v___x_2107_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg(v_v_2105_, v___f_2104_, v___x_2106_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_, v___y_2100_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2109_; lean_object* v_bs_x27_2110_; size_t v___x_2111_; size_t v___x_2112_; lean_object* v___x_2113_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
lean_inc(v_a_2108_);
lean_dec_ref(v___x_2107_);
v___x_2109_ = lean_unsigned_to_nat(0u);
v_bs_x27_2110_ = lean_array_uset(v_bs_2094_, v_i_2093_, v___x_2109_);
v___x_2111_ = ((size_t)1ULL);
v___x_2112_ = lean_usize_add(v_i_2093_, v___x_2111_);
v___x_2113_ = lean_array_uset(v_bs_x27_2110_, v_i_2093_, v_a_2108_);
v_i_2093_ = v___x_2112_;
v_bs_2094_ = v___x_2113_;
goto _start;
}
else
{
lean_object* v_a_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2122_; 
lean_dec_ref(v_bs_2094_);
v_a_2115_ = lean_ctor_get(v___x_2107_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2117_ = v___x_2107_;
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_a_2115_);
lean_dec(v___x_2107_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2122_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2120_; 
if (v_isShared_2118_ == 0)
{
v___x_2120_ = v___x_2117_;
goto v_reusejp_2119_;
}
else
{
lean_object* v_reuseFailAlloc_2121_; 
v_reuseFailAlloc_2121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2121_, 0, v_a_2115_);
v___x_2120_ = v_reuseFailAlloc_2121_;
goto v_reusejp_2119_;
}
v_reusejp_2119_:
{
return v___x_2120_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12___boxed(lean_object* v_sz_2123_, lean_object* v_i_2124_, lean_object* v_bs_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_){
_start:
{
size_t v_sz_boxed_2133_; size_t v_i_boxed_2134_; lean_object* v_res_2135_; 
v_sz_boxed_2133_ = lean_unbox_usize(v_sz_2123_);
lean_dec(v_sz_2123_);
v_i_boxed_2134_ = lean_unbox_usize(v_i_2124_);
lean_dec(v_i_2124_);
v_res_2135_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12(v_sz_boxed_2133_, v_i_boxed_2134_, v_bs_2125_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec(v___y_2129_);
lean_dec_ref(v___y_2128_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___redArg(lean_object* v___x_2136_, lean_object* v_fixedArgs_2137_, lean_object* v_as_2138_, lean_object* v_i_2139_, lean_object* v_j_2140_, lean_object* v_bs_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_){
_start:
{
lean_object* v_zero_2147_; uint8_t v_isZero_2148_; 
v_zero_2147_ = lean_unsigned_to_nat(0u);
v_isZero_2148_ = lean_nat_dec_eq(v_i_2139_, v_zero_2147_);
if (v_isZero_2148_ == 1)
{
lean_object* v___x_2149_; 
lean_dec(v_j_2140_);
lean_dec(v_i_2139_);
lean_dec_ref(v_fixedArgs_2137_);
v___x_2149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2149_, 0, v_bs_2141_);
return v___x_2149_;
}
else
{
lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2150_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1);
v___x_2151_ = lean_array_fget_borrowed(v_as_2138_, v_j_2140_);
v___x_2152_ = lean_array_get_borrowed(v___x_2150_, v___x_2136_, v_j_2140_);
lean_inc_ref(v_fixedArgs_2137_);
lean_inc(v___x_2151_);
lean_inc(v___x_2152_);
v___x_2153_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_2152_, v___x_2151_, v_fixedArgs_2137_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_);
if (lean_obj_tag(v___x_2153_) == 0)
{
lean_object* v_a_2154_; lean_object* v_one_2155_; lean_object* v_n_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; 
v_a_2154_ = lean_ctor_get(v___x_2153_, 0);
lean_inc(v_a_2154_);
lean_dec_ref(v___x_2153_);
v_one_2155_ = lean_unsigned_to_nat(1u);
v_n_2156_ = lean_nat_sub(v_i_2139_, v_one_2155_);
lean_dec(v_i_2139_);
v___x_2157_ = lean_nat_add(v_j_2140_, v_one_2155_);
lean_dec(v_j_2140_);
v___x_2158_ = lean_array_push(v_bs_2141_, v_a_2154_);
v_i_2139_ = v_n_2156_;
v_j_2140_ = v___x_2157_;
v_bs_2141_ = v___x_2158_;
goto _start;
}
else
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2167_; 
lean_dec_ref(v_bs_2141_);
lean_dec(v_j_2140_);
lean_dec(v_i_2139_);
lean_dec_ref(v_fixedArgs_2137_);
v_a_2160_ = lean_ctor_get(v___x_2153_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2153_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2162_ = v___x_2153_;
v_isShared_2163_ = v_isSharedCheck_2167_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___x_2153_);
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
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___redArg___boxed(lean_object* v___x_2168_, lean_object* v_fixedArgs_2169_, lean_object* v_as_2170_, lean_object* v_i_2171_, lean_object* v_j_2172_, lean_object* v_bs_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
lean_object* v_res_2179_; 
v_res_2179_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___redArg(v___x_2168_, v_fixedArgs_2169_, v_as_2170_, v_i_2171_, v_j_2172_, v_bs_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec_ref(v_as_2170_);
lean_dec_ref(v___x_2168_);
return v_res_2179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___redArg(size_t v_sz_2180_, size_t v_i_2181_, lean_object* v_bs_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
uint8_t v___x_2188_; 
v___x_2188_ = lean_usize_dec_lt(v_i_2181_, v_sz_2180_);
if (v___x_2188_ == 0)
{
lean_object* v___x_2189_; 
v___x_2189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2189_, 0, v_bs_2182_);
return v___x_2189_;
}
else
{
lean_object* v_v_2190_; lean_object* v___x_2191_; 
v_v_2190_ = lean_array_uget_borrowed(v_bs_2182_, v_i_2181_);
lean_inc(v_v_2190_);
v___x_2191_ = l_Lean_Elab_Mutual_cleanPreDef(v_v_2190_, v___x_2188_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
if (lean_obj_tag(v___x_2191_) == 0)
{
lean_object* v_a_2192_; lean_object* v___x_2193_; lean_object* v_bs_x27_2194_; size_t v___x_2195_; size_t v___x_2196_; lean_object* v___x_2197_; 
v_a_2192_ = lean_ctor_get(v___x_2191_, 0);
lean_inc(v_a_2192_);
lean_dec_ref(v___x_2191_);
v___x_2193_ = lean_unsigned_to_nat(0u);
v_bs_x27_2194_ = lean_array_uset(v_bs_2182_, v_i_2181_, v___x_2193_);
v___x_2195_ = ((size_t)1ULL);
v___x_2196_ = lean_usize_add(v_i_2181_, v___x_2195_);
v___x_2197_ = lean_array_uset(v_bs_x27_2194_, v_i_2181_, v_a_2192_);
v_i_2181_ = v___x_2196_;
v_bs_2182_ = v___x_2197_;
goto _start;
}
else
{
lean_object* v_a_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2206_; 
lean_dec_ref(v_bs_2182_);
v_a_2199_ = lean_ctor_get(v___x_2191_, 0);
v_isSharedCheck_2206_ = !lean_is_exclusive(v___x_2191_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2201_ = v___x_2191_;
v_isShared_2202_ = v_isSharedCheck_2206_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_a_2199_);
lean_dec(v___x_2191_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___redArg___boxed(lean_object* v_sz_2207_, lean_object* v_i_2208_, lean_object* v_bs_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_, lean_object* v___y_2212_, lean_object* v___y_2213_, lean_object* v___y_2214_){
_start:
{
size_t v_sz_boxed_2215_; size_t v_i_boxed_2216_; lean_object* v_res_2217_; 
v_sz_boxed_2215_ = lean_unbox_usize(v_sz_2207_);
lean_dec(v_sz_2207_);
v_i_boxed_2216_ = lean_unbox_usize(v_i_2208_);
lean_dec(v_i_2208_);
v_res_2217_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___redArg(v_sz_boxed_2215_, v_i_boxed_2216_, v_bs_2209_, v___y_2210_, v___y_2211_, v___y_2212_, v___y_2213_);
lean_dec(v___y_2213_);
lean_dec_ref(v___y_2212_);
lean_dec(v___y_2211_);
lean_dec_ref(v___y_2210_);
return v_res_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___lam__0(lean_object* v___y_2218_, uint8_t v_isExporting_2219_, lean_object* v___x_2220_, lean_object* v___y_2221_, lean_object* v___x_2222_, lean_object* v_a_x3f_2223_){
_start:
{
lean_object* v___x_2225_; lean_object* v_env_2226_; lean_object* v_nextMacroScope_2227_; lean_object* v_ngen_2228_; lean_object* v_auxDeclNGen_2229_; lean_object* v_traceState_2230_; lean_object* v_messages_2231_; lean_object* v_infoState_2232_; lean_object* v_snapshotTasks_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2259_; 
v___x_2225_ = lean_st_ref_take(v___y_2218_);
v_env_2226_ = lean_ctor_get(v___x_2225_, 0);
v_nextMacroScope_2227_ = lean_ctor_get(v___x_2225_, 1);
v_ngen_2228_ = lean_ctor_get(v___x_2225_, 2);
v_auxDeclNGen_2229_ = lean_ctor_get(v___x_2225_, 3);
v_traceState_2230_ = lean_ctor_get(v___x_2225_, 4);
v_messages_2231_ = lean_ctor_get(v___x_2225_, 6);
v_infoState_2232_ = lean_ctor_get(v___x_2225_, 7);
v_snapshotTasks_2233_ = lean_ctor_get(v___x_2225_, 8);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2225_);
if (v_isSharedCheck_2259_ == 0)
{
lean_object* v_unused_2260_; 
v_unused_2260_ = lean_ctor_get(v___x_2225_, 5);
lean_dec(v_unused_2260_);
v___x_2235_ = v___x_2225_;
v_isShared_2236_ = v_isSharedCheck_2259_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_snapshotTasks_2233_);
lean_inc(v_infoState_2232_);
lean_inc(v_messages_2231_);
lean_inc(v_traceState_2230_);
lean_inc(v_auxDeclNGen_2229_);
lean_inc(v_ngen_2228_);
lean_inc(v_nextMacroScope_2227_);
lean_inc(v_env_2226_);
lean_dec(v___x_2225_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2259_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
lean_object* v___x_2237_; lean_object* v___x_2239_; 
v___x_2237_ = l_Lean_Environment_setExporting(v_env_2226_, v_isExporting_2219_);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 5, v___x_2220_);
lean_ctor_set(v___x_2235_, 0, v___x_2237_);
v___x_2239_ = v___x_2235_;
goto v_reusejp_2238_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v___x_2237_);
lean_ctor_set(v_reuseFailAlloc_2258_, 1, v_nextMacroScope_2227_);
lean_ctor_set(v_reuseFailAlloc_2258_, 2, v_ngen_2228_);
lean_ctor_set(v_reuseFailAlloc_2258_, 3, v_auxDeclNGen_2229_);
lean_ctor_set(v_reuseFailAlloc_2258_, 4, v_traceState_2230_);
lean_ctor_set(v_reuseFailAlloc_2258_, 5, v___x_2220_);
lean_ctor_set(v_reuseFailAlloc_2258_, 6, v_messages_2231_);
lean_ctor_set(v_reuseFailAlloc_2258_, 7, v_infoState_2232_);
lean_ctor_set(v_reuseFailAlloc_2258_, 8, v_snapshotTasks_2233_);
v___x_2239_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2238_;
}
v_reusejp_2238_:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v_mctx_2243_; lean_object* v_zetaDeltaFVarIds_2244_; lean_object* v_postponed_2245_; lean_object* v_diag_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2256_; 
v___x_2240_ = lean_st_ref_set(v___y_2218_, v___x_2239_);
v___x_2241_ = lean_st_ref_get(v___y_2218_);
lean_dec(v___x_2241_);
v___x_2242_ = lean_st_ref_take(v___y_2221_);
v_mctx_2243_ = lean_ctor_get(v___x_2242_, 0);
v_zetaDeltaFVarIds_2244_ = lean_ctor_get(v___x_2242_, 2);
v_postponed_2245_ = lean_ctor_get(v___x_2242_, 3);
v_diag_2246_ = lean_ctor_get(v___x_2242_, 4);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2256_ == 0)
{
lean_object* v_unused_2257_; 
v_unused_2257_ = lean_ctor_get(v___x_2242_, 1);
lean_dec(v_unused_2257_);
v___x_2248_ = v___x_2242_;
v_isShared_2249_ = v_isSharedCheck_2256_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_diag_2246_);
lean_inc(v_postponed_2245_);
lean_inc(v_zetaDeltaFVarIds_2244_);
lean_inc(v_mctx_2243_);
lean_dec(v___x_2242_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2256_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v___x_2251_; 
if (v_isShared_2249_ == 0)
{
lean_ctor_set(v___x_2248_, 1, v___x_2222_);
v___x_2251_ = v___x_2248_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v_mctx_2243_);
lean_ctor_set(v_reuseFailAlloc_2255_, 1, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2255_, 2, v_zetaDeltaFVarIds_2244_);
lean_ctor_set(v_reuseFailAlloc_2255_, 3, v_postponed_2245_);
lean_ctor_set(v_reuseFailAlloc_2255_, 4, v_diag_2246_);
v___x_2251_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2252_ = lean_st_ref_set(v___y_2221_, v___x_2251_);
v___x_2253_ = lean_box(0);
v___x_2254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2253_);
return v___x_2254_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___lam__0___boxed(lean_object* v___y_2261_, lean_object* v_isExporting_2262_, lean_object* v___x_2263_, lean_object* v___y_2264_, lean_object* v___x_2265_, lean_object* v_a_x3f_2266_, lean_object* v___y_2267_){
_start:
{
uint8_t v_isExporting_boxed_2268_; lean_object* v_res_2269_; 
v_isExporting_boxed_2268_ = lean_unbox(v_isExporting_2262_);
v_res_2269_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___lam__0(v___y_2261_, v_isExporting_boxed_2268_, v___x_2263_, v___y_2264_, v___x_2265_, v_a_x3f_2266_);
lean_dec(v_a_x3f_2266_);
lean_dec(v___y_2264_);
lean_dec(v___y_2261_);
return v_res_2269_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg(lean_object* v_x_2270_, uint8_t v_isExporting_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v___x_2279_; lean_object* v_env_2280_; uint8_t v_isExporting_2281_; lean_object* v___x_2282_; lean_object* v_env_2283_; lean_object* v_nextMacroScope_2284_; lean_object* v_ngen_2285_; lean_object* v_auxDeclNGen_2286_; lean_object* v_traceState_2287_; lean_object* v_messages_2288_; lean_object* v_infoState_2289_; lean_object* v_snapshotTasks_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2345_; 
v___x_2279_ = lean_st_ref_get(v___y_2277_);
v_env_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc_ref(v_env_2280_);
lean_dec(v___x_2279_);
v_isExporting_2281_ = lean_ctor_get_uint8(v_env_2280_, sizeof(void*)*8);
lean_dec_ref(v_env_2280_);
v___x_2282_ = lean_st_ref_take(v___y_2277_);
v_env_2283_ = lean_ctor_get(v___x_2282_, 0);
v_nextMacroScope_2284_ = lean_ctor_get(v___x_2282_, 1);
v_ngen_2285_ = lean_ctor_get(v___x_2282_, 2);
v_auxDeclNGen_2286_ = lean_ctor_get(v___x_2282_, 3);
v_traceState_2287_ = lean_ctor_get(v___x_2282_, 4);
v_messages_2288_ = lean_ctor_get(v___x_2282_, 6);
v_infoState_2289_ = lean_ctor_get(v___x_2282_, 7);
v_snapshotTasks_2290_ = lean_ctor_get(v___x_2282_, 8);
v_isSharedCheck_2345_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2345_ == 0)
{
lean_object* v_unused_2346_; 
v_unused_2346_ = lean_ctor_get(v___x_2282_, 5);
lean_dec(v_unused_2346_);
v___x_2292_ = v___x_2282_;
v_isShared_2293_ = v_isSharedCheck_2345_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_snapshotTasks_2290_);
lean_inc(v_infoState_2289_);
lean_inc(v_messages_2288_);
lean_inc(v_traceState_2287_);
lean_inc(v_auxDeclNGen_2286_);
lean_inc(v_ngen_2285_);
lean_inc(v_nextMacroScope_2284_);
lean_inc(v_env_2283_);
lean_dec(v___x_2282_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2345_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2297_; 
v___x_2294_ = l_Lean_Environment_setExporting(v_env_2283_, v_isExporting_2271_);
v___x_2295_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 5, v___x_2295_);
lean_ctor_set(v___x_2292_, 0, v___x_2294_);
v___x_2297_ = v___x_2292_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v___x_2294_);
lean_ctor_set(v_reuseFailAlloc_2344_, 1, v_nextMacroScope_2284_);
lean_ctor_set(v_reuseFailAlloc_2344_, 2, v_ngen_2285_);
lean_ctor_set(v_reuseFailAlloc_2344_, 3, v_auxDeclNGen_2286_);
lean_ctor_set(v_reuseFailAlloc_2344_, 4, v_traceState_2287_);
lean_ctor_set(v_reuseFailAlloc_2344_, 5, v___x_2295_);
lean_ctor_set(v_reuseFailAlloc_2344_, 6, v_messages_2288_);
lean_ctor_set(v_reuseFailAlloc_2344_, 7, v_infoState_2289_);
lean_ctor_set(v_reuseFailAlloc_2344_, 8, v_snapshotTasks_2290_);
v___x_2297_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v_mctx_2301_; lean_object* v_zetaDeltaFVarIds_2302_; lean_object* v_postponed_2303_; lean_object* v_diag_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2342_; 
v___x_2298_ = lean_st_ref_set(v___y_2277_, v___x_2297_);
v___x_2299_ = lean_st_ref_get(v___y_2277_);
lean_dec(v___x_2299_);
v___x_2300_ = lean_st_ref_take(v___y_2275_);
v_mctx_2301_ = lean_ctor_get(v___x_2300_, 0);
v_zetaDeltaFVarIds_2302_ = lean_ctor_get(v___x_2300_, 2);
v_postponed_2303_ = lean_ctor_get(v___x_2300_, 3);
v_diag_2304_ = lean_ctor_get(v___x_2300_, 4);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2342_ == 0)
{
lean_object* v_unused_2343_; 
v_unused_2343_ = lean_ctor_get(v___x_2300_, 1);
lean_dec(v_unused_2343_);
v___x_2306_ = v___x_2300_;
v_isShared_2307_ = v_isSharedCheck_2342_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_diag_2304_);
lean_inc(v_postponed_2303_);
lean_inc(v_zetaDeltaFVarIds_2302_);
lean_inc(v_mctx_2301_);
lean_dec(v___x_2300_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2342_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; lean_object* v___x_2310_; 
v___x_2308_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 1, v___x_2308_);
v___x_2310_ = v___x_2306_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_mctx_2301_);
lean_ctor_set(v_reuseFailAlloc_2341_, 1, v___x_2308_);
lean_ctor_set(v_reuseFailAlloc_2341_, 2, v_zetaDeltaFVarIds_2302_);
lean_ctor_set(v_reuseFailAlloc_2341_, 3, v_postponed_2303_);
lean_ctor_set(v_reuseFailAlloc_2341_, 4, v_diag_2304_);
v___x_2310_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
lean_object* v___x_2311_; lean_object* v_r_2312_; 
v___x_2311_ = lean_st_ref_set(v___y_2275_, v___x_2310_);
lean_inc(v___y_2277_);
lean_inc_ref(v___y_2276_);
lean_inc(v___y_2275_);
lean_inc_ref(v___y_2274_);
lean_inc(v___y_2273_);
lean_inc_ref(v___y_2272_);
v_r_2312_ = lean_apply_7(v_x_2270_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, lean_box(0));
if (lean_obj_tag(v_r_2312_) == 0)
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2329_; 
v_a_2313_ = lean_ctor_get(v_r_2312_, 0);
v_isSharedCheck_2329_ = !lean_is_exclusive(v_r_2312_);
if (v_isSharedCheck_2329_ == 0)
{
v___x_2315_ = v_r_2312_;
v_isShared_2316_ = v_isSharedCheck_2329_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v_r_2312_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2329_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
lean_inc(v_a_2313_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set_tag(v___x_2315_, 1);
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2328_; 
v_reuseFailAlloc_2328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2328_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2328_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
lean_object* v___x_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
v___x_2319_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___lam__0(v___y_2277_, v_isExporting_2281_, v___x_2295_, v___y_2275_, v___x_2308_, v___x_2318_);
lean_dec_ref(v___x_2318_);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2326_ == 0)
{
lean_object* v_unused_2327_; 
v_unused_2327_ = lean_ctor_get(v___x_2319_, 0);
lean_dec(v_unused_2327_);
v___x_2321_ = v___x_2319_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_dec(v___x_2319_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
lean_ctor_set(v___x_2321_, 0, v_a_2313_);
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2313_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2339_; 
v_a_2330_ = lean_ctor_get(v_r_2312_, 0);
lean_inc(v_a_2330_);
lean_dec_ref(v_r_2312_);
v___x_2331_ = lean_box(0);
v___x_2332_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___lam__0(v___y_2277_, v_isExporting_2281_, v___x_2295_, v___y_2275_, v___x_2308_, v___x_2331_);
v_isSharedCheck_2339_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2339_ == 0)
{
lean_object* v_unused_2340_; 
v_unused_2340_ = lean_ctor_get(v___x_2332_, 0);
lean_dec(v_unused_2340_);
v___x_2334_ = v___x_2332_;
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
else
{
lean_dec(v___x_2332_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2339_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2337_; 
if (v_isShared_2335_ == 0)
{
lean_ctor_set_tag(v___x_2334_, 1);
lean_ctor_set(v___x_2334_, 0, v_a_2330_);
v___x_2337_ = v___x_2334_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2338_; 
v_reuseFailAlloc_2338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2338_, 0, v_a_2330_);
v___x_2337_ = v_reuseFailAlloc_2338_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
return v___x_2337_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg___boxed(lean_object* v_x_2347_, lean_object* v_isExporting_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
uint8_t v_isExporting_boxed_2356_; lean_object* v_res_2357_; 
v_isExporting_boxed_2356_ = lean_unbox(v_isExporting_2348_);
v_res_2357_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg(v_x_2347_, v_isExporting_boxed_2356_, v___y_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
lean_dec(v___y_2350_);
lean_dec_ref(v___y_2349_);
return v_res_2357_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg(lean_object* v_x_2358_, uint8_t v_when_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_){
_start:
{
if (v_when_2359_ == 0)
{
lean_object* v___x_2367_; 
lean_inc(v___y_2365_);
lean_inc_ref(v___y_2364_);
lean_inc(v___y_2363_);
lean_inc_ref(v___y_2362_);
lean_inc(v___y_2361_);
lean_inc_ref(v___y_2360_);
v___x_2367_ = lean_apply_7(v_x_2358_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, lean_box(0));
return v___x_2367_;
}
else
{
uint8_t v___x_2368_; lean_object* v___x_2369_; 
v___x_2368_ = 0;
v___x_2369_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg(v_x_2358_, v___x_2368_, v___y_2360_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_);
return v___x_2369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg___boxed(lean_object* v_x_2370_, lean_object* v_when_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
uint8_t v_when_boxed_2379_; lean_object* v_res_2380_; 
v_when_boxed_2379_ = lean_unbox(v_when_2371_);
v_res_2380_ = l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg(v_x_2370_, v_when_boxed_2379_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_);
lean_dec(v___y_2377_);
lean_dec_ref(v___y_2376_);
lean_dec(v___y_2375_);
lean_dec_ref(v___y_2374_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___lam__0(lean_object* v_k_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v_b_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v___x_2390_; 
lean_inc(v___y_2388_);
lean_inc_ref(v___y_2387_);
lean_inc(v___y_2386_);
lean_inc_ref(v___y_2385_);
lean_inc(v___y_2383_);
lean_inc_ref(v___y_2382_);
v___x_2390_ = lean_apply_8(v_k_2381_, v_b_2384_, v___y_2382_, v___y_2383_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, lean_box(0));
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___lam__0___boxed(lean_object* v_k_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v_b_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___lam__0(v_k_2391_, v___y_2392_, v___y_2393_, v_b_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v___y_2393_);
lean_dec_ref(v___y_2392_);
return v_res_2400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg(lean_object* v_name_2401_, uint8_t v_bi_2402_, lean_object* v_type_2403_, lean_object* v_k_2404_, uint8_t v_kind_2405_, lean_object* v___y_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_){
_start:
{
lean_object* v___f_2413_; lean_object* v___x_2414_; 
lean_inc(v___y_2407_);
lean_inc_ref(v___y_2406_);
v___f_2413_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_2413_, 0, v_k_2404_);
lean_closure_set(v___f_2413_, 1, v___y_2406_);
lean_closure_set(v___f_2413_, 2, v___y_2407_);
v___x_2414_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2401_, v_bi_2402_, v_type_2403_, v___f_2413_, v_kind_2405_, v___y_2408_, v___y_2409_, v___y_2410_, v___y_2411_);
if (lean_obj_tag(v___x_2414_) == 0)
{
return v___x_2414_;
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2417_; uint8_t v_isShared_2418_; uint8_t v_isSharedCheck_2422_; 
v_a_2415_ = lean_ctor_get(v___x_2414_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2414_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2417_ = v___x_2414_;
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
else
{
lean_inc(v_a_2415_);
lean_dec(v___x_2414_);
v___x_2417_ = lean_box(0);
v_isShared_2418_ = v_isSharedCheck_2422_;
goto v_resetjp_2416_;
}
v_resetjp_2416_:
{
lean_object* v___x_2420_; 
if (v_isShared_2418_ == 0)
{
v___x_2420_ = v___x_2417_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v_a_2415_);
v___x_2420_ = v_reuseFailAlloc_2421_;
goto v_reusejp_2419_;
}
v_reusejp_2419_:
{
return v___x_2420_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg___boxed(lean_object* v_name_2423_, lean_object* v_bi_2424_, lean_object* v_type_2425_, lean_object* v_k_2426_, lean_object* v_kind_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
uint8_t v_bi_boxed_2435_; uint8_t v_kind_boxed_2436_; lean_object* v_res_2437_; 
v_bi_boxed_2435_ = lean_unbox(v_bi_2424_);
v_kind_boxed_2436_ = lean_unbox(v_kind_2427_);
v_res_2437_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg(v_name_2423_, v_bi_boxed_2435_, v_type_2425_, v_k_2426_, v_kind_boxed_2436_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_);
lean_dec(v___y_2433_);
lean_dec_ref(v___y_2432_);
lean_dec(v___y_2431_);
lean_dec_ref(v___y_2430_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___redArg(lean_object* v_name_2438_, lean_object* v_type_2439_, lean_object* v_k_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_){
_start:
{
uint8_t v___x_2448_; uint8_t v___x_2449_; lean_object* v___x_2450_; 
v___x_2448_ = 0;
v___x_2449_ = 0;
v___x_2450_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg(v_name_2438_, v___x_2448_, v_type_2439_, v_k_2440_, v___x_2449_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_);
return v___x_2450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___redArg___boxed(lean_object* v_name_2451_, lean_object* v_type_2452_, lean_object* v_k_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_){
_start:
{
lean_object* v_res_2461_; 
v_res_2461_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___redArg(v_name_2451_, v_type_2452_, v_k_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
return v_res_2461_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg(lean_object* v_env_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_){
_start:
{
lean_object* v___x_2466_; lean_object* v_nextMacroScope_2467_; lean_object* v_ngen_2468_; lean_object* v_auxDeclNGen_2469_; lean_object* v_traceState_2470_; lean_object* v_messages_2471_; lean_object* v_infoState_2472_; lean_object* v_snapshotTasks_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2500_; 
v___x_2466_ = lean_st_ref_take(v___y_2464_);
v_nextMacroScope_2467_ = lean_ctor_get(v___x_2466_, 1);
v_ngen_2468_ = lean_ctor_get(v___x_2466_, 2);
v_auxDeclNGen_2469_ = lean_ctor_get(v___x_2466_, 3);
v_traceState_2470_ = lean_ctor_get(v___x_2466_, 4);
v_messages_2471_ = lean_ctor_get(v___x_2466_, 6);
v_infoState_2472_ = lean_ctor_get(v___x_2466_, 7);
v_snapshotTasks_2473_ = lean_ctor_get(v___x_2466_, 8);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2500_ == 0)
{
lean_object* v_unused_2501_; lean_object* v_unused_2502_; 
v_unused_2501_ = lean_ctor_get(v___x_2466_, 5);
lean_dec(v_unused_2501_);
v_unused_2502_ = lean_ctor_get(v___x_2466_, 0);
lean_dec(v_unused_2502_);
v___x_2475_ = v___x_2466_;
v_isShared_2476_ = v_isSharedCheck_2500_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_snapshotTasks_2473_);
lean_inc(v_infoState_2472_);
lean_inc(v_messages_2471_);
lean_inc(v_traceState_2470_);
lean_inc(v_auxDeclNGen_2469_);
lean_inc(v_ngen_2468_);
lean_inc(v_nextMacroScope_2467_);
lean_dec(v___x_2466_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2500_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v___x_2477_; lean_object* v___x_2479_; 
v___x_2477_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__2);
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 5, v___x_2477_);
lean_ctor_set(v___x_2475_, 0, v_env_2462_);
v___x_2479_ = v___x_2475_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v_env_2462_);
lean_ctor_set(v_reuseFailAlloc_2499_, 1, v_nextMacroScope_2467_);
lean_ctor_set(v_reuseFailAlloc_2499_, 2, v_ngen_2468_);
lean_ctor_set(v_reuseFailAlloc_2499_, 3, v_auxDeclNGen_2469_);
lean_ctor_set(v_reuseFailAlloc_2499_, 4, v_traceState_2470_);
lean_ctor_set(v_reuseFailAlloc_2499_, 5, v___x_2477_);
lean_ctor_set(v_reuseFailAlloc_2499_, 6, v_messages_2471_);
lean_ctor_set(v_reuseFailAlloc_2499_, 7, v_infoState_2472_);
lean_ctor_set(v_reuseFailAlloc_2499_, 8, v_snapshotTasks_2473_);
v___x_2479_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v_mctx_2483_; lean_object* v_zetaDeltaFVarIds_2484_; lean_object* v_postponed_2485_; lean_object* v_diag_2486_; lean_object* v___x_2488_; uint8_t v_isShared_2489_; uint8_t v_isSharedCheck_2497_; 
v___x_2480_ = lean_st_ref_set(v___y_2464_, v___x_2479_);
v___x_2481_ = lean_st_ref_get(v___y_2464_);
lean_dec(v___x_2481_);
v___x_2482_ = lean_st_ref_take(v___y_2463_);
v_mctx_2483_ = lean_ctor_get(v___x_2482_, 0);
v_zetaDeltaFVarIds_2484_ = lean_ctor_get(v___x_2482_, 2);
v_postponed_2485_ = lean_ctor_get(v___x_2482_, 3);
v_diag_2486_ = lean_ctor_get(v___x_2482_, 4);
v_isSharedCheck_2497_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2497_ == 0)
{
lean_object* v_unused_2498_; 
v_unused_2498_ = lean_ctor_get(v___x_2482_, 1);
lean_dec(v_unused_2498_);
v___x_2488_ = v___x_2482_;
v_isShared_2489_ = v_isSharedCheck_2497_;
goto v_resetjp_2487_;
}
else
{
lean_inc(v_diag_2486_);
lean_inc(v_postponed_2485_);
lean_inc(v_zetaDeltaFVarIds_2484_);
lean_inc(v_mctx_2483_);
lean_dec(v___x_2482_);
v___x_2488_ = lean_box(0);
v_isShared_2489_ = v_isSharedCheck_2497_;
goto v_resetjp_2487_;
}
v_resetjp_2487_:
{
lean_object* v___x_2490_; lean_object* v___x_2492_; 
v___x_2490_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3, &l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3_once, _init_l_Lean_setEnv___at___00Lean_withEnv___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__5_spec__5___redArg___closed__3);
if (v_isShared_2489_ == 0)
{
lean_ctor_set(v___x_2488_, 1, v___x_2490_);
v___x_2492_ = v___x_2488_;
goto v_reusejp_2491_;
}
else
{
lean_object* v_reuseFailAlloc_2496_; 
v_reuseFailAlloc_2496_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2496_, 0, v_mctx_2483_);
lean_ctor_set(v_reuseFailAlloc_2496_, 1, v___x_2490_);
lean_ctor_set(v_reuseFailAlloc_2496_, 2, v_zetaDeltaFVarIds_2484_);
lean_ctor_set(v_reuseFailAlloc_2496_, 3, v_postponed_2485_);
lean_ctor_set(v_reuseFailAlloc_2496_, 4, v_diag_2486_);
v___x_2492_ = v_reuseFailAlloc_2496_;
goto v_reusejp_2491_;
}
v_reusejp_2491_:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; 
v___x_2493_ = lean_st_ref_set(v___y_2463_, v___x_2492_);
v___x_2494_ = lean_box(0);
v___x_2495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2494_);
return v___x_2495_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg___boxed(lean_object* v_env_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg(v_env_2503_, v___y_2504_, v___y_2505_);
lean_dec(v___y_2505_);
lean_dec(v___y_2504_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___redArg(lean_object* v_env_2508_, lean_object* v_x_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_){
_start:
{
lean_object* v___x_2517_; lean_object* v_env_2518_; lean_object* v_a_2520_; lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2517_ = lean_st_ref_get(v___y_2515_);
v_env_2518_ = lean_ctor_get(v___x_2517_, 0);
lean_inc_ref(v_env_2518_);
lean_dec(v___x_2517_);
v___x_2530_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg(v_env_2508_, v___y_2513_, v___y_2515_);
lean_dec_ref(v___x_2530_);
lean_inc(v___y_2515_);
lean_inc_ref(v___y_2514_);
lean_inc(v___y_2513_);
lean_inc_ref(v___y_2512_);
lean_inc(v___y_2511_);
lean_inc_ref(v___y_2510_);
v___x_2531_ = lean_apply_7(v_x_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, lean_box(0));
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v_a_2532_; lean_object* v___x_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2540_; 
v_a_2532_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2532_);
lean_dec_ref(v___x_2531_);
v___x_2533_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg(v_env_2518_, v___y_2513_, v___y_2515_);
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2533_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v___x_2533_, 0);
lean_dec(v_unused_2541_);
v___x_2535_ = v___x_2533_;
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
else
{
lean_dec(v___x_2533_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2540_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v___x_2538_; 
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 0, v_a_2532_);
v___x_2538_ = v___x_2535_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v_a_2532_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
else
{
lean_object* v_a_2542_; 
v_a_2542_ = lean_ctor_get(v___x_2531_, 0);
lean_inc(v_a_2542_);
lean_dec_ref(v___x_2531_);
v_a_2520_ = v_a_2542_;
goto v___jp_2519_;
}
v___jp_2519_:
{
lean_object* v___x_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2528_; 
v___x_2521_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg(v_env_2518_, v___y_2513_, v___y_2515_);
v_isSharedCheck_2528_ = !lean_is_exclusive(v___x_2521_);
if (v_isSharedCheck_2528_ == 0)
{
lean_object* v_unused_2529_; 
v_unused_2529_ = lean_ctor_get(v___x_2521_, 0);
lean_dec(v_unused_2529_);
v___x_2523_ = v___x_2521_;
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
else
{
lean_dec(v___x_2521_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2528_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2526_; 
if (v_isShared_2524_ == 0)
{
lean_ctor_set_tag(v___x_2523_, 1);
lean_ctor_set(v___x_2523_, 0, v_a_2520_);
v___x_2526_ = v___x_2523_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2527_; 
v_reuseFailAlloc_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2527_, 0, v_a_2520_);
v___x_2526_ = v_reuseFailAlloc_2527_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
return v___x_2526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___redArg___boxed(lean_object* v_env_2543_, lean_object* v_x_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___redArg(v_env_2543_, v_x_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2545_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg(lean_object* v_as_2553_, size_t v_i_2554_, size_t v_stop_2555_, lean_object* v_b_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
uint8_t v___x_2560_; 
v___x_2560_ = lean_usize_dec_eq(v_i_2554_, v_stop_2555_);
if (v___x_2560_ == 0)
{
lean_object* v___x_2561_; lean_object* v___x_2562_; 
v___x_2561_ = lean_array_uget_borrowed(v_as_2553_, v_i_2554_);
v___x_2562_ = l_Lean_Elab_addAsAxiom___redArg(v___x_2561_, v___y_2557_, v___y_2558_);
if (lean_obj_tag(v___x_2562_) == 0)
{
lean_object* v_a_2563_; size_t v___x_2564_; size_t v___x_2565_; 
v_a_2563_ = lean_ctor_get(v___x_2562_, 0);
lean_inc(v_a_2563_);
lean_dec_ref(v___x_2562_);
v___x_2564_ = ((size_t)1ULL);
v___x_2565_ = lean_usize_add(v_i_2554_, v___x_2564_);
v_i_2554_ = v___x_2565_;
v_b_2556_ = v_a_2563_;
goto _start;
}
else
{
return v___x_2562_;
}
}
else
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2567_, 0, v_b_2556_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg___boxed(lean_object* v_as_2568_, lean_object* v_i_2569_, lean_object* v_stop_2570_, lean_object* v_b_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
size_t v_i_boxed_2575_; size_t v_stop_boxed_2576_; lean_object* v_res_2577_; 
v_i_boxed_2575_ = lean_unbox_usize(v_i_2569_);
lean_dec(v_i_2569_);
v_stop_boxed_2576_ = lean_unbox_usize(v_stop_2570_);
lean_dec(v_stop_2570_);
v_res_2577_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg(v_as_2568_, v_i_boxed_2575_, v_stop_boxed_2576_, v_b_2571_, v___y_2572_, v___y_2573_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec_ref(v_as_2568_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__0(lean_object* v___x_2578_, lean_object* v___x_2579_, lean_object* v___x_2580_, lean_object* v_a_2581_, lean_object* v_f_2582_, lean_object* v_a_2583_, lean_object* v_preDefs_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
lean_object* v___y_2593_; uint8_t v___x_2603_; 
v___x_2603_ = lean_nat_dec_lt(v___x_2578_, v___x_2579_);
if (v___x_2603_ == 0)
{
lean_object* v___x_2604_; 
v___x_2604_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps(v___x_2580_, v_a_2581_, v_f_2582_, v_a_2583_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
return v___x_2604_;
}
else
{
lean_object* v___x_2605_; lean_object* v___x_2606_; uint8_t v___x_2607_; 
v___x_2605_ = lean_box(0);
v___x_2606_ = lean_array_get_size(v_preDefs_2584_);
v___x_2607_ = lean_nat_dec_le(v___x_2579_, v___x_2606_);
if (v___x_2607_ == 0)
{
uint8_t v___x_2608_; 
v___x_2608_ = lean_nat_dec_lt(v___x_2578_, v___x_2606_);
if (v___x_2608_ == 0)
{
lean_object* v___x_2609_; 
v___x_2609_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps(v___x_2580_, v_a_2581_, v_f_2582_, v_a_2583_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
return v___x_2609_;
}
else
{
size_t v___x_2610_; size_t v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = ((size_t)0ULL);
v___x_2611_ = lean_usize_of_nat(v___x_2606_);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg(v_preDefs_2584_, v___x_2610_, v___x_2611_, v___x_2605_, v___y_2589_, v___y_2590_);
v___y_2593_ = v___x_2612_;
goto v___jp_2592_;
}
}
else
{
size_t v___x_2613_; size_t v___x_2614_; lean_object* v___x_2615_; 
v___x_2613_ = ((size_t)0ULL);
v___x_2614_ = lean_usize_of_nat(v___x_2579_);
v___x_2615_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg(v_preDefs_2584_, v___x_2613_, v___x_2614_, v___x_2605_, v___y_2589_, v___y_2590_);
v___y_2593_ = v___x_2615_;
goto v___jp_2592_;
}
}
v___jp_2592_:
{
if (lean_obj_tag(v___y_2593_) == 0)
{
lean_object* v___x_2594_; 
lean_dec_ref(v___y_2593_);
v___x_2594_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps(v___x_2580_, v_a_2581_, v_f_2582_, v_a_2583_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_);
return v___x_2594_;
}
else
{
lean_object* v_a_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2602_; 
lean_dec_ref(v_f_2582_);
lean_dec_ref(v_a_2581_);
lean_dec_ref(v___x_2580_);
v_a_2595_ = lean_ctor_get(v___y_2593_, 0);
v_isSharedCheck_2602_ = !lean_is_exclusive(v___y_2593_);
if (v_isSharedCheck_2602_ == 0)
{
v___x_2597_ = v___y_2593_;
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_a_2595_);
lean_dec(v___y_2593_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2602_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v___x_2600_; 
if (v_isShared_2598_ == 0)
{
v___x_2600_ = v___x_2597_;
goto v_reusejp_2599_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_a_2595_);
v___x_2600_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2599_;
}
v_reusejp_2599_:
{
return v___x_2600_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__0___boxed(lean_object* v___x_2616_, lean_object* v___x_2617_, lean_object* v___x_2618_, lean_object* v_a_2619_, lean_object* v_f_2620_, lean_object* v_a_2621_, lean_object* v_preDefs_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_){
_start:
{
lean_object* v_res_2630_; 
v_res_2630_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__0(v___x_2616_, v___x_2617_, v___x_2618_, v_a_2619_, v_f_2620_, v_a_2621_, v_preDefs_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec(v___y_2624_);
lean_dec_ref(v___y_2623_);
lean_dec_ref(v_preDefs_2622_);
lean_dec_ref(v_a_2621_);
lean_dec(v___x_2617_);
lean_dec(v___x_2616_);
return v_res_2630_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__1(lean_object* v___x_2631_, lean_object* v___x_2632_, lean_object* v___x_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_preDefs_2636_, uint8_t v_isZero_2637_, lean_object* v_f_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_){
_start:
{
lean_object* v___x_2646_; lean_object* v_env_2647_; lean_object* v___f_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v___x_2646_ = lean_st_ref_get(v___y_2644_);
v_env_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc_ref(v_env_2647_);
lean_dec(v___x_2646_);
lean_inc_ref(v_f_2638_);
v___f_2648_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2648_, 0, v___x_2631_);
lean_closure_set(v___f_2648_, 1, v___x_2632_);
lean_closure_set(v___f_2648_, 2, v___x_2633_);
lean_closure_set(v___f_2648_, 3, v_a_2634_);
lean_closure_set(v___f_2648_, 4, v_f_2638_);
lean_closure_set(v___f_2648_, 5, v_a_2635_);
lean_closure_set(v___f_2648_, 6, v_preDefs_2636_);
v___x_2649_ = l_Lean_Environment_unlockAsync(v_env_2647_);
v___x_2650_ = l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___redArg(v___x_2649_, v___f_2648_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v_a_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; uint8_t v___x_2655_; uint8_t v___x_2656_; lean_object* v___x_2657_; 
v_a_2651_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_a_2651_);
lean_dec_ref(v___x_2650_);
v___x_2652_ = lean_unsigned_to_nat(1u);
v___x_2653_ = lean_mk_empty_array_with_capacity(v___x_2652_);
v___x_2654_ = lean_array_push(v___x_2653_, v_f_2638_);
v___x_2655_ = 1;
v___x_2656_ = 1;
v___x_2657_ = l_Lean_Meta_mkLambdaFVars(v___x_2654_, v_a_2651_, v_isZero_2637_, v___x_2655_, v_isZero_2637_, v___x_2655_, v___x_2656_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_);
lean_dec_ref(v___x_2654_);
return v___x_2657_;
}
else
{
lean_dec_ref(v_f_2638_);
return v___x_2650_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__1___boxed(lean_object* v___x_2658_, lean_object* v___x_2659_, lean_object* v___x_2660_, lean_object* v_a_2661_, lean_object* v_a_2662_, lean_object* v_preDefs_2663_, lean_object* v_isZero_2664_, lean_object* v_f_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
uint8_t v_isZero_boxed_2673_; lean_object* v_res_2674_; 
v_isZero_boxed_2673_ = lean_unbox(v_isZero_2664_);
v_res_2674_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__1(v___x_2658_, v___x_2659_, v___x_2660_, v_a_2661_, v_a_2662_, v_preDefs_2663_, v_isZero_boxed_2673_, v_f_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
return v_res_2674_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = lean_mk_string_unchecked("f", 1, 1);
return v___x_2675_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; 
v___x_2676_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__0);
v___x_2677_ = l_Lean_Name_mkStr1(v___x_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg(lean_object* v___x_2678_, lean_object* v_fixedArgs_2679_, lean_object* v___x_2680_, lean_object* v_a_2681_, lean_object* v___x_2682_, lean_object* v_preDefs_2683_, lean_object* v_a_2684_, lean_object* v_as_2685_, lean_object* v_i_2686_, lean_object* v_j_2687_, lean_object* v_bs_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_){
_start:
{
lean_object* v_zero_2696_; uint8_t v_isZero_2697_; 
v_zero_2696_ = lean_unsigned_to_nat(0u);
v_isZero_2697_ = lean_nat_dec_eq(v_i_2686_, v_zero_2696_);
if (v_isZero_2697_ == 1)
{
lean_object* v___x_2698_; 
lean_dec(v_j_2687_);
lean_dec(v_i_2686_);
lean_dec_ref(v_a_2684_);
lean_dec_ref(v_preDefs_2683_);
lean_dec(v___x_2682_);
lean_dec_ref(v_a_2681_);
lean_dec_ref(v___x_2680_);
lean_dec_ref(v_fixedArgs_2679_);
v___x_2698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2698_, 0, v_bs_2688_);
return v___x_2698_;
}
else
{
lean_object* v___x_2699_; lean_object* v_value_2700_; lean_object* v___x_2701_; lean_object* v_one_2702_; lean_object* v_n_2703_; lean_object* v___y_2705_; lean_object* v___x_2718_; lean_object* v___x_2719_; 
v___x_2699_ = lean_array_fget_borrowed(v_as_2685_, v_j_2687_);
v_value_2700_ = lean_ctor_get(v___x_2699_, 7);
v___x_2701_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1);
v_one_2702_ = lean_unsigned_to_nat(1u);
v_n_2703_ = lean_nat_sub(v_i_2686_, v_one_2702_);
lean_dec(v_i_2686_);
v___x_2718_ = lean_array_get_borrowed(v___x_2701_, v___x_2678_, v_j_2687_);
lean_inc_ref(v_fixedArgs_2679_);
lean_inc_ref(v_value_2700_);
lean_inc(v___x_2718_);
v___x_2719_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v___x_2718_, v_value_2700_, v_fixedArgs_2679_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_);
if (lean_obj_tag(v___x_2719_) == 0)
{
lean_object* v_a_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; 
v_a_2720_ = lean_ctor_get(v___x_2719_, 0);
lean_inc(v_a_2720_);
lean_dec_ref(v___x_2719_);
v___x_2721_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___closed__1);
v___x_2722_ = l_Lean_Core_mkFreshUserName(v___x_2721_, v___y_2693_, v___y_2694_);
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_object* v_a_2723_; lean_object* v___x_2724_; lean_object* v___f_2725_; lean_object* v___x_2726_; 
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
lean_inc(v_a_2723_);
lean_dec_ref(v___x_2722_);
v___x_2724_ = lean_box(v_isZero_2697_);
lean_inc_ref(v_preDefs_2683_);
lean_inc_ref(v_a_2681_);
lean_inc_ref(v___x_2680_);
lean_inc(v___x_2682_);
v___f_2725_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___lam__1___boxed), 15, 7);
lean_closure_set(v___f_2725_, 0, v_zero_2696_);
lean_closure_set(v___f_2725_, 1, v___x_2682_);
lean_closure_set(v___f_2725_, 2, v___x_2680_);
lean_closure_set(v___f_2725_, 3, v_a_2681_);
lean_closure_set(v___f_2725_, 4, v_a_2720_);
lean_closure_set(v___f_2725_, 5, v_preDefs_2683_);
lean_closure_set(v___f_2725_, 6, v___x_2724_);
lean_inc_ref(v_a_2684_);
v___x_2726_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___redArg(v_a_2723_, v_a_2684_, v___f_2725_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_);
v___y_2705_ = v___x_2726_;
goto v___jp_2704_;
}
else
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
lean_dec(v_a_2720_);
lean_dec(v_n_2703_);
lean_dec_ref(v_bs_2688_);
lean_dec(v_j_2687_);
lean_dec_ref(v_a_2684_);
lean_dec_ref(v_preDefs_2683_);
lean_dec(v___x_2682_);
lean_dec_ref(v_a_2681_);
lean_dec_ref(v___x_2680_);
lean_dec_ref(v_fixedArgs_2679_);
v_a_2727_ = lean_ctor_get(v___x_2722_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2729_ = v___x_2722_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2722_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2727_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
}
else
{
v___y_2705_ = v___x_2719_;
goto v___jp_2704_;
}
v___jp_2704_:
{
if (lean_obj_tag(v___y_2705_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; 
v_a_2706_ = lean_ctor_get(v___y_2705_, 0);
lean_inc(v_a_2706_);
lean_dec_ref(v___y_2705_);
v___x_2707_ = lean_nat_add(v_j_2687_, v_one_2702_);
lean_dec(v_j_2687_);
v___x_2708_ = lean_array_push(v_bs_2688_, v_a_2706_);
v_i_2686_ = v_n_2703_;
v_j_2687_ = v___x_2707_;
v_bs_2688_ = v___x_2708_;
goto _start;
}
else
{
lean_object* v_a_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2717_; 
lean_dec(v_n_2703_);
lean_dec_ref(v_bs_2688_);
lean_dec(v_j_2687_);
lean_dec_ref(v_a_2684_);
lean_dec_ref(v_preDefs_2683_);
lean_dec(v___x_2682_);
lean_dec_ref(v_a_2681_);
lean_dec_ref(v___x_2680_);
lean_dec_ref(v_fixedArgs_2679_);
v_a_2710_ = lean_ctor_get(v___y_2705_, 0);
v_isSharedCheck_2717_ = !lean_is_exclusive(v___y_2705_);
if (v_isSharedCheck_2717_ == 0)
{
v___x_2712_ = v___y_2705_;
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_a_2710_);
lean_dec(v___y_2705_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2717_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v___x_2715_; 
if (v_isShared_2713_ == 0)
{
v___x_2715_ = v___x_2712_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2716_; 
v_reuseFailAlloc_2716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2716_, 0, v_a_2710_);
v___x_2715_ = v_reuseFailAlloc_2716_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
return v___x_2715_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg___boxed(lean_object** _args){
lean_object* v___x_2735_ = _args[0];
lean_object* v_fixedArgs_2736_ = _args[1];
lean_object* v___x_2737_ = _args[2];
lean_object* v_a_2738_ = _args[3];
lean_object* v___x_2739_ = _args[4];
lean_object* v_preDefs_2740_ = _args[5];
lean_object* v_a_2741_ = _args[6];
lean_object* v_as_2742_ = _args[7];
lean_object* v_i_2743_ = _args[8];
lean_object* v_j_2744_ = _args[9];
lean_object* v_bs_2745_ = _args[10];
lean_object* v___y_2746_ = _args[11];
lean_object* v___y_2747_ = _args[12];
lean_object* v___y_2748_ = _args[13];
lean_object* v___y_2749_ = _args[14];
lean_object* v___y_2750_ = _args[15];
lean_object* v___y_2751_ = _args[16];
lean_object* v___y_2752_ = _args[17];
_start:
{
lean_object* v_res_2753_; 
v_res_2753_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg(v___x_2735_, v_fixedArgs_2736_, v___x_2737_, v_a_2738_, v___x_2739_, v_preDefs_2740_, v_a_2741_, v_as_2742_, v_i_2743_, v_j_2744_, v_bs_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec_ref(v_as_2742_);
lean_dec_ref(v___x_2735_);
return v_res_2753_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16(lean_object* v___x_2754_, lean_object* v_fixedArgs_2755_, lean_object* v___x_2756_, lean_object* v_a_2757_, lean_object* v___x_2758_, lean_object* v_preDefs_2759_, lean_object* v_a_2760_, lean_object* v_as_2761_, lean_object* v_i_2762_, lean_object* v_j_2763_, lean_object* v_inv_2764_, lean_object* v_bs_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_){
_start:
{
lean_object* v___x_2773_; 
v___x_2773_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___redArg(v___x_2754_, v_fixedArgs_2755_, v___x_2756_, v_a_2757_, v___x_2758_, v_preDefs_2759_, v_a_2760_, v_as_2761_, v_i_2762_, v_j_2763_, v_bs_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
return v___x_2773_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___boxed(lean_object** _args){
lean_object* v___x_2774_ = _args[0];
lean_object* v_fixedArgs_2775_ = _args[1];
lean_object* v___x_2776_ = _args[2];
lean_object* v_a_2777_ = _args[3];
lean_object* v___x_2778_ = _args[4];
lean_object* v_preDefs_2779_ = _args[5];
lean_object* v_a_2780_ = _args[6];
lean_object* v_as_2781_ = _args[7];
lean_object* v_i_2782_ = _args[8];
lean_object* v_j_2783_ = _args[9];
lean_object* v_inv_2784_ = _args[10];
lean_object* v_bs_2785_ = _args[11];
lean_object* v___y_2786_ = _args[12];
lean_object* v___y_2787_ = _args[13];
lean_object* v___y_2788_ = _args[14];
lean_object* v___y_2789_ = _args[15];
lean_object* v___y_2790_ = _args[16];
lean_object* v___y_2791_ = _args[17];
lean_object* v___y_2792_ = _args[18];
_start:
{
lean_object* v_res_2793_; 
v_res_2793_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16(v___x_2774_, v_fixedArgs_2775_, v___x_2776_, v_a_2777_, v___x_2778_, v_preDefs_2779_, v_a_2780_, v_as_2781_, v_i_2782_, v_j_2783_, v_inv_2784_, v_bs_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
lean_dec(v___y_2791_);
lean_dec_ref(v___y_2790_);
lean_dec(v___y_2789_);
lean_dec_ref(v___y_2788_);
lean_dec(v___y_2787_);
lean_dec_ref(v___y_2786_);
lean_dec_ref(v_as_2781_);
lean_dec_ref(v___x_2774_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__23(size_t v_sz_2794_, size_t v_i_2795_, lean_object* v_bs_2796_){
_start:
{
uint8_t v___x_2797_; 
v___x_2797_ = lean_usize_dec_lt(v_i_2795_, v_sz_2794_);
if (v___x_2797_ == 0)
{
return v_bs_2796_;
}
else
{
lean_object* v_v_2798_; uint8_t v_fixpointType_2799_; lean_object* v___x_2800_; lean_object* v_bs_x27_2801_; size_t v___x_2802_; size_t v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; 
v_v_2798_ = lean_array_uget_borrowed(v_bs_2796_, v_i_2795_);
v_fixpointType_2799_ = lean_ctor_get_uint8(v_v_2798_, sizeof(void*)*2);
v___x_2800_ = lean_unsigned_to_nat(0u);
v_bs_x27_2801_ = lean_array_uset(v_bs_2796_, v_i_2795_, v___x_2800_);
v___x_2802_ = ((size_t)1ULL);
v___x_2803_ = lean_usize_add(v_i_2795_, v___x_2802_);
v___x_2804_ = lean_box(v_fixpointType_2799_);
v___x_2805_ = lean_array_uset(v_bs_x27_2801_, v_i_2795_, v___x_2804_);
v_i_2795_ = v___x_2803_;
v_bs_2796_ = v___x_2805_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__23___boxed(lean_object* v_sz_2807_, lean_object* v_i_2808_, lean_object* v_bs_2809_){
_start:
{
size_t v_sz_boxed_2810_; size_t v_i_boxed_2811_; lean_object* v_res_2812_; 
v_sz_boxed_2810_ = lean_unbox_usize(v_sz_2807_);
lean_dec(v_sz_2807_);
v_i_boxed_2811_ = lean_unbox_usize(v_i_2808_);
lean_dec(v_i_2808_);
v_res_2812_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__23(v_sz_boxed_2810_, v_i_boxed_2811_, v_bs_2809_);
return v_res_2812_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___redArg(lean_object* v___x_2813_, lean_object* v_fixedArgs_2814_, lean_object* v_as_2815_, lean_object* v_i_2816_, lean_object* v_j_2817_, lean_object* v_bs_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
lean_object* v_zero_2824_; uint8_t v_isZero_2825_; 
v_zero_2824_ = lean_unsigned_to_nat(0u);
v_isZero_2825_ = lean_nat_dec_eq(v_i_2816_, v_zero_2824_);
if (v_isZero_2825_ == 1)
{
lean_object* v___x_2826_; 
lean_dec(v_j_2817_);
lean_dec(v_i_2816_);
lean_dec_ref(v_fixedArgs_2814_);
v___x_2826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2826_, 0, v_bs_2818_);
return v___x_2826_;
}
else
{
lean_object* v___x_2827_; lean_object* v_type_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2827_ = lean_array_fget_borrowed(v_as_2815_, v_j_2817_);
v_type_2828_ = lean_ctor_get(v___x_2827_, 6);
v___x_2829_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1);
v___x_2830_ = lean_array_get_borrowed(v___x_2829_, v___x_2813_, v_j_2817_);
lean_inc_ref(v_fixedArgs_2814_);
lean_inc_ref(v_type_2828_);
lean_inc(v___x_2830_);
v___x_2831_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v___x_2830_, v_type_2828_, v_fixedArgs_2814_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_);
if (lean_obj_tag(v___x_2831_) == 0)
{
lean_object* v_a_2832_; lean_object* v_one_2833_; lean_object* v_n_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; 
v_a_2832_ = lean_ctor_get(v___x_2831_, 0);
lean_inc(v_a_2832_);
lean_dec_ref(v___x_2831_);
v_one_2833_ = lean_unsigned_to_nat(1u);
v_n_2834_ = lean_nat_sub(v_i_2816_, v_one_2833_);
lean_dec(v_i_2816_);
v___x_2835_ = lean_nat_add(v_j_2817_, v_one_2833_);
lean_dec(v_j_2817_);
v___x_2836_ = lean_array_push(v_bs_2818_, v_a_2832_);
v_i_2816_ = v_n_2834_;
v_j_2817_ = v___x_2835_;
v_bs_2818_ = v___x_2836_;
goto _start;
}
else
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2845_; 
lean_dec_ref(v_bs_2818_);
lean_dec(v_j_2817_);
lean_dec(v_i_2816_);
lean_dec_ref(v_fixedArgs_2814_);
v_a_2838_ = lean_ctor_get(v___x_2831_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2831_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2840_ = v___x_2831_;
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2831_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2843_; 
if (v_isShared_2841_ == 0)
{
v___x_2843_ = v___x_2840_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2838_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___redArg___boxed(lean_object* v___x_2846_, lean_object* v_fixedArgs_2847_, lean_object* v_as_2848_, lean_object* v_i_2849_, lean_object* v_j_2850_, lean_object* v_bs_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___redArg(v___x_2846_, v_fixedArgs_2847_, v_as_2848_, v_i_2849_, v_j_2850_, v_bs_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec_ref(v_as_2848_);
lean_dec_ref(v___x_2846_);
return v_res_2857_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; 
v___x_2858_ = l_Lean_instInhabitedExpr;
v___x_2859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2859_, 0, v___x_2858_);
lean_ctor_set(v___x_2859_, 1, v___x_2858_);
return v___x_2859_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2860_; 
v___x_2860_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___boxed), 7, 0);
return v___x_2860_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2861_; 
v___x_2861_ = lean_mk_string_unchecked("mutual", 6, 6);
return v___x_2861_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2862_; lean_object* v___x_2863_; 
v___x_2862_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___lam__0___closed__2, &l_Lean_Elab_partialFixpoint___lam__0___closed__2_once, _init_l_Lean_Elab_partialFixpoint___lam__0___closed__2);
v___x_2863_ = l_Lean_Name_mkStr1(v___x_2862_);
return v___x_2863_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = lean_mk_string_unchecked("packedValue: ", 13, 13);
return v___x_2864_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2865_; lean_object* v___x_2866_; 
v___x_2865_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___lam__0___closed__4, &l_Lean_Elab_partialFixpoint___lam__0___closed__4_once, _init_l_Lean_Elab_partialFixpoint___lam__0___closed__4);
v___x_2866_ = l_Lean_stringToMessageData(v___x_2865_);
return v___x_2866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint___lam__0(lean_object* v_a_2867_, lean_object* v_perms_2868_, lean_object* v___x_2869_, lean_object* v_preDefs_2870_, lean_object* v___x_2871_, lean_object* v___x_2872_, size_t v___x_2873_, lean_object* v___x_2874_, lean_object* v_a_2875_, uint8_t v___x_2876_, lean_object* v_hints_2877_, lean_object* v___x_2878_, lean_object* v_docCtx_2879_, size_t v_sz_2880_, lean_object* v_fixedArgs_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2889_ = lean_array_get_size(v_a_2867_);
v___x_2890_ = lean_mk_empty_array_with_capacity(v___x_2889_);
lean_inc(v___x_2869_);
lean_inc_ref(v_fixedArgs_2881_);
v___x_2891_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___redArg(v_perms_2868_, v_fixedArgs_2881_, v_a_2867_, v___x_2889_, v___x_2869_, v___x_2890_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2891_) == 0)
{
lean_object* v_a_2892_; lean_object* v___x_2893_; 
v_a_2892_ = lean_ctor_get(v___x_2891_, 0);
lean_inc(v_a_2892_);
lean_dec_ref(v___x_2891_);
lean_inc_ref(v___x_2872_);
lean_inc(v___x_2869_);
lean_inc(v___x_2871_);
lean_inc_ref(v_fixedArgs_2881_);
v___x_2893_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___redArg(v_perms_2868_, v_fixedArgs_2881_, v_preDefs_2870_, v___x_2871_, v___x_2869_, v___x_2872_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2893_) == 0)
{
lean_object* v_a_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; 
v_a_2894_ = lean_ctor_get(v___x_2893_, 0);
lean_inc_n(v_a_2894_, 2);
lean_dec_ref(v___x_2893_);
v___x_2895_ = l_Lean_Level_ofNat(v___x_2869_);
v___x_2896_ = l_Lean_Meta_PProdN_pack(v___x_2895_, v_a_2894_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2896_) == 0)
{
lean_object* v_a_2897_; size_t v_sz_2898_; lean_object* v___x_2899_; 
v_a_2897_ = lean_ctor_get(v___x_2896_, 0);
lean_inc(v_a_2897_);
lean_dec_ref(v___x_2896_);
v_sz_2898_ = lean_array_size(v_a_2892_);
v___x_2899_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__12(v_sz_2898_, v___x_2873_, v_a_2892_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2899_) == 0)
{
lean_object* v_a_2900_; lean_object* v___x_2901_; 
v_a_2900_ = lean_ctor_get(v___x_2899_, 0);
lean_inc_n(v_a_2900_, 2);
lean_dec_ref(v___x_2899_);
v___x_2901_ = l_Lean_Meta_mkPackedPPRodInstance(v_a_2900_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2901_) == 0)
{
lean_object* v_a_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v_a_2902_ = lean_ctor_get(v___x_2901_, 0);
lean_inc_n(v_a_2902_, 2);
lean_dec_ref(v___x_2901_);
v___x_2903_ = lean_box(0);
v___x_2904_ = l_Lean_Meta_toPartialOrder(v_a_2902_, v___x_2903_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2904_) == 0)
{
lean_object* v_a_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v_a_2905_ = lean_ctor_get(v___x_2904_, 0);
lean_inc(v_a_2905_);
lean_dec_ref(v___x_2904_);
lean_inc(v___x_2869_);
lean_inc(v_a_2897_);
lean_inc_ref_n(v_preDefs_2870_, 2);
lean_inc_n(v___x_2871_, 2);
lean_inc_ref(v_a_2875_);
lean_inc_ref(v_fixedArgs_2881_);
lean_inc_ref(v_perms_2868_);
v___x_2906_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__16___boxed), 19, 12);
lean_closure_set(v___x_2906_, 0, v_perms_2868_);
lean_closure_set(v___x_2906_, 1, v_fixedArgs_2881_);
lean_closure_set(v___x_2906_, 2, v___x_2874_);
lean_closure_set(v___x_2906_, 3, v_a_2875_);
lean_closure_set(v___x_2906_, 4, v___x_2871_);
lean_closure_set(v___x_2906_, 5, v_preDefs_2870_);
lean_closure_set(v___x_2906_, 6, v_a_2897_);
lean_closure_set(v___x_2906_, 7, v_preDefs_2870_);
lean_closure_set(v___x_2906_, 8, v___x_2871_);
lean_closure_set(v___x_2906_, 9, v___x_2869_);
lean_closure_set(v___x_2906_, 10, lean_box(0));
lean_closure_set(v___x_2906_, 11, v___x_2872_);
v___x_2907_ = l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg(v___x_2906_, v___x_2876_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2907_) == 0)
{
lean_object* v_a_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; 
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
lean_inc(v_a_2908_);
lean_dec_ref(v___x_2907_);
v___x_2909_ = lean_mk_empty_array_with_capacity(v___x_2871_);
lean_inc_ref(v___x_2909_);
lean_inc(v___x_2869_);
lean_inc(v___x_2871_);
lean_inc_ref(v_fixedArgs_2881_);
lean_inc_ref(v_a_2875_);
lean_inc_ref_n(v_preDefs_2870_, 2);
lean_inc_ref(v_hints_2877_);
lean_inc(v_a_2897_);
v___x_2910_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___boxed), 21, 14);
lean_closure_set(v___x_2910_, 0, v_a_2894_);
lean_closure_set(v___x_2910_, 1, v_a_2900_);
lean_closure_set(v___x_2910_, 2, v_a_2908_);
lean_closure_set(v___x_2910_, 3, v_a_2897_);
lean_closure_set(v___x_2910_, 4, v_a_2905_);
lean_closure_set(v___x_2910_, 5, v_hints_2877_);
lean_closure_set(v___x_2910_, 6, v_preDefs_2870_);
lean_closure_set(v___x_2910_, 7, v_a_2875_);
lean_closure_set(v___x_2910_, 8, v_fixedArgs_2881_);
lean_closure_set(v___x_2910_, 9, v_preDefs_2870_);
lean_closure_set(v___x_2910_, 10, v___x_2871_);
lean_closure_set(v___x_2910_, 11, v___x_2869_);
lean_closure_set(v___x_2910_, 12, lean_box(0));
lean_closure_set(v___x_2910_, 13, v___x_2909_);
v___x_2911_ = l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg(v___x_2910_, v___x_2876_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
lean_inc(v_a_2912_);
lean_dec_ref(v___x_2911_);
v___x_2913_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___lam__0___closed__0, &l_Lean_Elab_partialFixpoint___lam__0___closed__0_once, _init_l_Lean_Elab_partialFixpoint___lam__0___closed__0);
v___x_2914_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___lam__0___closed__1, &l_Lean_Elab_partialFixpoint___lam__0___closed__1_once, _init_l_Lean_Elab_partialFixpoint___lam__0___closed__1);
v___x_2915_ = l_Lean_Meta_PProdN_genMk___redArg(v___x_2913_, v___x_2914_, v_a_2912_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2915_) == 0)
{
lean_object* v_a_2916_; lean_object* v_snd_2917_; lean_object* v___x_2919_; uint8_t v_isShared_2920_; uint8_t v_isSharedCheck_3038_; 
v_a_2916_ = lean_ctor_get(v___x_2915_, 0);
lean_inc(v_a_2916_);
lean_dec_ref(v___x_2915_);
v_snd_2917_ = lean_ctor_get(v_a_2916_, 1);
v_isSharedCheck_3038_ = !lean_is_exclusive(v_a_2916_);
if (v_isSharedCheck_3038_ == 0)
{
lean_object* v_unused_3039_; 
v_unused_3039_ = lean_ctor_get(v_a_2916_, 0);
lean_dec(v_unused_3039_);
v___x_2919_ = v_a_2916_;
v_isShared_2920_ = v_isSharedCheck_3038_;
goto v_resetjp_2918_;
}
else
{
lean_inc(v_snd_2917_);
lean_dec(v_a_2916_);
v___x_2919_ = lean_box(0);
v_isShared_2920_ = v_isSharedCheck_3038_;
goto v_resetjp_2918_;
}
v_resetjp_2918_:
{
lean_object* v___x_2921_; 
lean_inc(v_a_2897_);
v___x_2921_ = l_Lean_Meta_mkFixOfMonFun(v_a_2897_, v_a_2902_, v_snd_2917_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2921_) == 0)
{
lean_object* v_a_2922_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; uint8_t v___y_3003_; lean_object* v___y_3009_; lean_object* v___y_3010_; lean_object* v___y_3011_; lean_object* v___y_3012_; lean_object* v___y_3013_; lean_object* v___y_3014_; lean_object* v_options_3018_; uint8_t v_hasTrace_3019_; 
v_a_2922_ = lean_ctor_get(v___x_2921_, 0);
lean_inc(v_a_2922_);
lean_dec_ref(v___x_2921_);
v_options_3018_ = lean_ctor_get(v___y_2886_, 2);
v_hasTrace_3019_ = lean_ctor_get_uint8(v_options_3018_, sizeof(void*)*1);
if (v_hasTrace_3019_ == 0)
{
lean_del_object(v___x_2919_);
v___y_3009_ = v___y_2882_;
v___y_3010_ = v___y_2883_;
v___y_3011_ = v___y_2884_;
v___y_3012_ = v___y_2885_;
v___y_3013_ = v___y_2886_;
v___y_3014_ = v___y_2887_;
goto v___jp_3008_;
}
else
{
lean_object* v_inheritedTraceOptions_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; uint8_t v___x_3023_; 
v_inheritedTraceOptions_3020_ = lean_ctor_get(v___y_2886_, 13);
v___x_3021_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7);
v___x_3022_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10);
v___x_3023_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3020_, v_options_3018_, v___x_3022_);
if (v___x_3023_ == 0)
{
lean_del_object(v___x_2919_);
v___y_3009_ = v___y_2882_;
v___y_3010_ = v___y_2883_;
v___y_3011_ = v___y_2884_;
v___y_3012_ = v___y_2885_;
v___y_3013_ = v___y_2886_;
v___y_3014_ = v___y_2887_;
goto v___jp_3008_;
}
else
{
lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3027_; 
v___x_3024_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___lam__0___closed__5, &l_Lean_Elab_partialFixpoint___lam__0___closed__5_once, _init_l_Lean_Elab_partialFixpoint___lam__0___closed__5);
lean_inc(v_a_2922_);
v___x_3025_ = l_Lean_MessageData_ofExpr(v_a_2922_);
if (v_isShared_2920_ == 0)
{
lean_ctor_set_tag(v___x_2919_, 7);
lean_ctor_set(v___x_2919_, 1, v___x_3025_);
lean_ctor_set(v___x_2919_, 0, v___x_3024_);
v___x_3027_ = v___x_2919_;
goto v_reusejp_3026_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v___x_3024_);
lean_ctor_set(v_reuseFailAlloc_3029_, 1, v___x_3025_);
v___x_3027_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3026_;
}
v_reusejp_3026_:
{
lean_object* v___x_3028_; 
v___x_3028_ = l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(v___x_3021_, v___x_3027_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_3028_) == 0)
{
lean_dec_ref(v___x_3028_);
v___y_3009_ = v___y_2882_;
v___y_3010_ = v___y_2883_;
v___y_3011_ = v___y_2884_;
v___y_3012_ = v___y_2885_;
v___y_3013_ = v___y_2886_;
v___y_3014_ = v___y_2887_;
goto v___jp_3008_;
}
else
{
lean_dec(v_a_2922_);
lean_dec_ref(v___x_2909_);
lean_dec(v_a_2897_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
return v___x_3028_;
}
}
}
}
v___jp_2923_:
{
uint8_t v___x_2931_; uint8_t v___x_2932_; lean_object* v___x_2933_; 
v___x_2931_ = 0;
v___x_2932_ = 1;
lean_inc(v_a_2897_);
v___x_2933_ = l_Lean_Meta_mkForallFVars(v_fixedArgs_2881_, v_a_2897_, v___x_2931_, v___x_2876_, v___x_2876_, v___x_2932_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v_a_2934_; lean_object* v___x_2935_; 
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
lean_inc(v_a_2934_);
lean_dec_ref(v___x_2933_);
v___x_2935_ = l_Lean_Meta_mkLambdaFVars(v_fixedArgs_2881_, v_a_2922_, v___x_2931_, v___x_2876_, v___x_2931_, v___x_2876_, v___x_2932_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
lean_dec_ref(v_fixedArgs_2881_);
if (lean_obj_tag(v___x_2935_) == 0)
{
lean_object* v_a_2936_; lean_object* v_ref_2937_; uint8_t v_kind_2938_; lean_object* v_levelParams_2939_; lean_object* v_modifiers_2940_; lean_object* v_binders_2941_; lean_object* v_numSectionVars_2942_; lean_object* v_termination_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2976_; 
v_a_2936_ = lean_ctor_get(v___x_2935_, 0);
lean_inc(v_a_2936_);
lean_dec_ref(v___x_2935_);
v_ref_2937_ = lean_ctor_get(v___x_2878_, 0);
v_kind_2938_ = lean_ctor_get_uint8(v___x_2878_, sizeof(void*)*9);
v_levelParams_2939_ = lean_ctor_get(v___x_2878_, 1);
v_modifiers_2940_ = lean_ctor_get(v___x_2878_, 2);
v_binders_2941_ = lean_ctor_get(v___x_2878_, 4);
v_numSectionVars_2942_ = lean_ctor_get(v___x_2878_, 5);
v_termination_2943_ = lean_ctor_get(v___x_2878_, 8);
v_isSharedCheck_2976_ = !lean_is_exclusive(v___x_2878_);
if (v_isSharedCheck_2976_ == 0)
{
lean_object* v_unused_2977_; lean_object* v_unused_2978_; lean_object* v_unused_2979_; 
v_unused_2977_ = lean_ctor_get(v___x_2878_, 7);
lean_dec(v_unused_2977_);
v_unused_2978_ = lean_ctor_get(v___x_2878_, 6);
lean_dec(v_unused_2978_);
v_unused_2979_ = lean_ctor_get(v___x_2878_, 3);
lean_dec(v_unused_2979_);
v___x_2945_ = v___x_2878_;
v_isShared_2946_ = v_isSharedCheck_2976_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_termination_2943_);
lean_inc(v_numSectionVars_2942_);
lean_inc(v_binders_2941_);
lean_inc(v_modifiers_2940_);
lean_inc(v_levelParams_2939_);
lean_inc(v_ref_2937_);
lean_dec(v___x_2878_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2976_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2947_; 
lean_inc(v___x_2871_);
lean_inc(v___y_2930_);
lean_inc(v_levelParams_2939_);
v___x_2947_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg(v_perms_2868_, v_levelParams_2939_, v___y_2930_, v___x_2871_, v_a_2897_, v_preDefs_2870_, v___x_2871_, v___x_2869_, v___x_2909_, v___y_2928_, v___y_2927_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
lean_dec_ref(v_perms_2868_);
if (lean_obj_tag(v___x_2947_) == 0)
{
lean_object* v_a_2948_; lean_object* v___x_2950_; 
v_a_2948_ = lean_ctor_get(v___x_2947_, 0);
lean_inc(v_a_2948_);
lean_dec_ref(v___x_2947_);
lean_inc(v___y_2930_);
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 7, v_a_2936_);
lean_ctor_set(v___x_2945_, 6, v_a_2934_);
lean_ctor_set(v___x_2945_, 3, v___y_2930_);
v___x_2950_ = v___x_2945_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_ref_2937_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v_levelParams_2939_);
lean_ctor_set(v_reuseFailAlloc_2967_, 2, v_modifiers_2940_);
lean_ctor_set(v_reuseFailAlloc_2967_, 3, v___y_2930_);
lean_ctor_set(v_reuseFailAlloc_2967_, 4, v_binders_2941_);
lean_ctor_set(v_reuseFailAlloc_2967_, 5, v_numSectionVars_2942_);
lean_ctor_set(v_reuseFailAlloc_2967_, 6, v_a_2934_);
lean_ctor_set(v_reuseFailAlloc_2967_, 7, v_a_2936_);
lean_ctor_set(v_reuseFailAlloc_2967_, 8, v_termination_2943_);
lean_ctor_set_uint8(v_reuseFailAlloc_2967_, sizeof(void*)*9, v_kind_2938_);
v___x_2950_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
lean_object* v___x_2951_; 
lean_inc_ref(v_preDefs_2870_);
lean_inc_ref(v_docCtx_2879_);
v___x_2951_ = l_Lean_Elab_Mutual_addPreDefsFromUnary(v_docCtx_2879_, v_preDefs_2870_, v_a_2948_, v___x_2950_, v___x_2876_, v___y_2928_, v___y_2927_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
lean_dec(v_a_2948_);
if (lean_obj_tag(v___x_2951_) == 0)
{
lean_object* v___x_2952_; 
lean_dec_ref(v___x_2951_);
lean_inc_ref(v_preDefs_2870_);
v___x_2952_ = l_Lean_Elab_addAndCompilePartialRec(v_docCtx_2879_, v_preDefs_2870_, v___y_2928_, v___y_2927_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v___x_2953_; 
lean_dec_ref(v___x_2952_);
v___x_2953_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___redArg(v_sz_2880_, v___x_2873_, v_preDefs_2870_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_object* v_a_2954_; size_t v_sz_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; 
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
lean_inc_n(v_a_2954_, 2);
lean_dec_ref(v___x_2953_);
v_sz_2955_ = lean_array_size(v_hints_2877_);
v___x_2956_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__23(v_sz_2955_, v___x_2873_, v_hints_2877_);
v___x_2957_ = l_Lean_Elab_PartialFixpoint_registerEqnsInfo(v_a_2954_, v___y_2930_, v_a_2875_, v___x_2956_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v___x_2958_; 
lean_dec_ref(v___x_2957_);
v___x_2958_ = l_Lean_Elab_Mutual_addPreDefAttributes(v_a_2954_, v___y_2928_, v___y_2927_, v___y_2924_, v___y_2926_, v___y_2929_, v___y_2925_);
return v___x_2958_;
}
else
{
lean_dec(v_a_2954_);
return v___x_2957_;
}
}
else
{
lean_object* v_a_2959_; lean_object* v___x_2961_; uint8_t v_isShared_2962_; uint8_t v_isSharedCheck_2966_; 
lean_dec(v___y_2930_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
v_a_2959_ = lean_ctor_get(v___x_2953_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2953_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2961_ = v___x_2953_;
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
else
{
lean_inc(v_a_2959_);
lean_dec(v___x_2953_);
v___x_2961_ = lean_box(0);
v_isShared_2962_ = v_isSharedCheck_2966_;
goto v_resetjp_2960_;
}
v_resetjp_2960_:
{
lean_object* v___x_2964_; 
if (v_isShared_2962_ == 0)
{
v___x_2964_ = v___x_2961_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v_a_2959_);
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
else
{
lean_dec(v___y_2930_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v_preDefs_2870_);
return v___x_2952_;
}
}
else
{
lean_dec(v___y_2930_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v_preDefs_2870_);
return v___x_2951_;
}
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
lean_del_object(v___x_2945_);
lean_dec_ref(v_termination_2943_);
lean_dec(v_numSectionVars_2942_);
lean_dec(v_binders_2941_);
lean_dec_ref(v_modifiers_2940_);
lean_dec(v_levelParams_2939_);
lean_dec(v_ref_2937_);
lean_dec(v_a_2936_);
lean_dec(v_a_2934_);
lean_dec(v___y_2930_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v_preDefs_2870_);
v_a_2968_ = lean_ctor_get(v___x_2947_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2947_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2970_ = v___x_2947_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2947_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
}
else
{
lean_object* v_a_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_2987_; 
lean_dec(v_a_2934_);
lean_dec(v___y_2930_);
lean_dec_ref(v___x_2909_);
lean_dec(v_a_2897_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_2980_ = lean_ctor_get(v___x_2935_, 0);
v_isSharedCheck_2987_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2982_ = v___x_2935_;
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_a_2980_);
lean_dec(v___x_2935_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_2987_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
lean_object* v___x_2985_; 
if (v_isShared_2983_ == 0)
{
v___x_2985_ = v___x_2982_;
goto v_reusejp_2984_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v_a_2980_);
v___x_2985_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2984_;
}
v_reusejp_2984_:
{
return v___x_2985_;
}
}
}
}
else
{
lean_object* v_a_2988_; lean_object* v___x_2990_; uint8_t v_isShared_2991_; uint8_t v_isSharedCheck_2995_; 
lean_dec(v___y_2930_);
lean_dec(v_a_2922_);
lean_dec_ref(v___x_2909_);
lean_dec(v_a_2897_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_2988_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2990_ = v___x_2933_;
v_isShared_2991_ = v_isSharedCheck_2995_;
goto v_resetjp_2989_;
}
else
{
lean_inc(v_a_2988_);
lean_dec(v___x_2933_);
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
v___jp_2996_:
{
if (v___y_3003_ == 0)
{
lean_object* v_declName_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v_declName_3004_ = lean_ctor_get(v___x_2878_, 3);
v___x_3005_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___lam__0___closed__3, &l_Lean_Elab_partialFixpoint___lam__0___closed__3_once, _init_l_Lean_Elab_partialFixpoint___lam__0___closed__3);
lean_inc(v_declName_3004_);
v___x_3006_ = l_Lean_Name_append(v_declName_3004_, v___x_3005_);
v___y_2924_ = v___y_2997_;
v___y_2925_ = v___y_2999_;
v___y_2926_ = v___y_2998_;
v___y_2927_ = v___y_3000_;
v___y_2928_ = v___y_3002_;
v___y_2929_ = v___y_3001_;
v___y_2930_ = v___x_3006_;
goto v___jp_2923_;
}
else
{
lean_object* v_declName_3007_; 
v_declName_3007_ = lean_ctor_get(v___x_2878_, 3);
lean_inc(v_declName_3007_);
v___y_2924_ = v___y_2997_;
v___y_2925_ = v___y_2999_;
v___y_2926_ = v___y_2998_;
v___y_2927_ = v___y_3000_;
v___y_2928_ = v___y_3002_;
v___y_2929_ = v___y_3001_;
v___y_2930_ = v_declName_3007_;
goto v___jp_2923_;
}
}
v___jp_3008_:
{
lean_object* v___x_3015_; uint8_t v___x_3016_; 
v___x_3015_ = lean_unsigned_to_nat(1u);
v___x_3016_ = lean_nat_dec_eq(v___x_2871_, v___x_3015_);
if (v___x_3016_ == 0)
{
v___y_2997_ = v___y_3011_;
v___y_2998_ = v___y_3012_;
v___y_2999_ = v___y_3014_;
v___y_3000_ = v___y_3010_;
v___y_3001_ = v___y_3013_;
v___y_3002_ = v___y_3009_;
v___y_3003_ = v___x_3016_;
goto v___jp_2996_;
}
else
{
uint8_t v___x_3017_; 
lean_inc_ref(v_a_2875_);
v___x_3017_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_a_2875_);
v___y_2997_ = v___y_3011_;
v___y_2998_ = v___y_3012_;
v___y_2999_ = v___y_3014_;
v___y_3000_ = v___y_3010_;
v___y_3001_ = v___y_3013_;
v___y_3002_ = v___y_3009_;
v___y_3003_ = v___x_3017_;
goto v___jp_2996_;
}
}
}
else
{
lean_object* v_a_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3037_; 
lean_del_object(v___x_2919_);
lean_dec_ref(v___x_2909_);
lean_dec(v_a_2897_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3030_ = lean_ctor_get(v___x_2921_, 0);
v_isSharedCheck_3037_ = !lean_is_exclusive(v___x_2921_);
if (v_isSharedCheck_3037_ == 0)
{
v___x_3032_ = v___x_2921_;
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_a_3030_);
lean_dec(v___x_2921_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3037_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___x_3035_; 
if (v_isShared_3033_ == 0)
{
v___x_3035_ = v___x_3032_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3036_; 
v_reuseFailAlloc_3036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3036_, 0, v_a_3030_);
v___x_3035_ = v_reuseFailAlloc_3036_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
return v___x_3035_;
}
}
}
}
}
else
{
lean_object* v_a_3040_; lean_object* v___x_3042_; uint8_t v_isShared_3043_; uint8_t v_isSharedCheck_3047_; 
lean_dec_ref(v___x_2909_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3040_ = lean_ctor_get(v___x_2915_, 0);
v_isSharedCheck_3047_ = !lean_is_exclusive(v___x_2915_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3042_ = v___x_2915_;
v_isShared_3043_ = v_isSharedCheck_3047_;
goto v_resetjp_3041_;
}
else
{
lean_inc(v_a_3040_);
lean_dec(v___x_2915_);
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
else
{
lean_object* v_a_3048_; lean_object* v___x_3050_; uint8_t v_isShared_3051_; uint8_t v_isSharedCheck_3055_; 
lean_dec_ref(v___x_2909_);
lean_dec(v_a_2902_);
lean_dec(v_a_2897_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3048_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_3055_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_3055_ == 0)
{
v___x_3050_ = v___x_2911_;
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
else
{
lean_inc(v_a_3048_);
lean_dec(v___x_2911_);
v___x_3050_ = lean_box(0);
v_isShared_3051_ = v_isSharedCheck_3055_;
goto v_resetjp_3049_;
}
v_resetjp_3049_:
{
lean_object* v___x_3053_; 
if (v_isShared_3051_ == 0)
{
v___x_3053_ = v___x_3050_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3054_; 
v_reuseFailAlloc_3054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3054_, 0, v_a_3048_);
v___x_3053_ = v_reuseFailAlloc_3054_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
return v___x_3053_;
}
}
}
}
else
{
lean_object* v_a_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3063_; 
lean_dec(v_a_2905_);
lean_dec(v_a_2902_);
lean_dec(v_a_2900_);
lean_dec(v_a_2897_);
lean_dec(v_a_2894_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3056_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3058_ = v___x_2907_;
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_a_3056_);
lean_dec(v___x_2907_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3063_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v___x_3061_; 
if (v_isShared_3059_ == 0)
{
v___x_3061_ = v___x_3058_;
goto v_reusejp_3060_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v_a_3056_);
v___x_3061_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3060_;
}
v_reusejp_3060_:
{
return v___x_3061_;
}
}
}
}
else
{
lean_object* v_a_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3071_; 
lean_dec(v_a_2902_);
lean_dec(v_a_2900_);
lean_dec(v_a_2897_);
lean_dec(v_a_2894_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2872_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3064_ = lean_ctor_get(v___x_2904_, 0);
v_isSharedCheck_3071_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3066_ = v___x_2904_;
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_a_3064_);
lean_dec(v___x_2904_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3071_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___x_3069_; 
if (v_isShared_3067_ == 0)
{
v___x_3069_ = v___x_3066_;
goto v_reusejp_3068_;
}
else
{
lean_object* v_reuseFailAlloc_3070_; 
v_reuseFailAlloc_3070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3070_, 0, v_a_3064_);
v___x_3069_ = v_reuseFailAlloc_3070_;
goto v_reusejp_3068_;
}
v_reusejp_3068_:
{
return v___x_3069_;
}
}
}
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
lean_dec(v_a_2900_);
lean_dec(v_a_2897_);
lean_dec(v_a_2894_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2872_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3072_ = lean_ctor_get(v___x_2901_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_2901_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_2901_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_2901_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
else
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
lean_dec(v_a_2897_);
lean_dec(v_a_2894_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2872_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3080_ = lean_ctor_get(v___x_2899_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___x_2899_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3082_ = v___x_2899_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v___x_2899_);
v___x_3082_ = lean_box(0);
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
v_resetjp_3081_:
{
lean_object* v___x_3085_; 
if (v_isShared_3083_ == 0)
{
v___x_3085_ = v___x_3082_;
goto v_reusejp_3084_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_a_3080_);
v___x_3085_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3084_;
}
v_reusejp_3084_:
{
return v___x_3085_;
}
}
}
}
else
{
lean_object* v_a_3088_; lean_object* v___x_3090_; uint8_t v_isShared_3091_; uint8_t v_isSharedCheck_3095_; 
lean_dec(v_a_2894_);
lean_dec(v_a_2892_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2872_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3088_ = lean_ctor_get(v___x_2896_, 0);
v_isSharedCheck_3095_ = !lean_is_exclusive(v___x_2896_);
if (v_isSharedCheck_3095_ == 0)
{
v___x_3090_ = v___x_2896_;
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
else
{
lean_inc(v_a_3088_);
lean_dec(v___x_2896_);
v___x_3090_ = lean_box(0);
v_isShared_3091_ = v_isSharedCheck_3095_;
goto v_resetjp_3089_;
}
v_resetjp_3089_:
{
lean_object* v___x_3093_; 
if (v_isShared_3091_ == 0)
{
v___x_3093_ = v___x_3090_;
goto v_reusejp_3092_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_a_3088_);
v___x_3093_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3092_;
}
v_reusejp_3092_:
{
return v___x_3093_;
}
}
}
}
else
{
lean_object* v_a_3096_; lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3103_; 
lean_dec(v_a_2892_);
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2872_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3096_ = lean_ctor_get(v___x_2893_, 0);
v_isSharedCheck_3103_ = !lean_is_exclusive(v___x_2893_);
if (v_isSharedCheck_3103_ == 0)
{
v___x_3098_ = v___x_2893_;
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
else
{
lean_inc(v_a_3096_);
lean_dec(v___x_2893_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3103_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3101_; 
if (v_isShared_3099_ == 0)
{
v___x_3101_ = v___x_3098_;
goto v_reusejp_3100_;
}
else
{
lean_object* v_reuseFailAlloc_3102_; 
v_reuseFailAlloc_3102_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3102_, 0, v_a_3096_);
v___x_3101_ = v_reuseFailAlloc_3102_;
goto v_reusejp_3100_;
}
v_reusejp_3100_:
{
return v___x_3101_;
}
}
}
}
else
{
lean_object* v_a_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3111_; 
lean_dec_ref(v_fixedArgs_2881_);
lean_dec_ref(v_docCtx_2879_);
lean_dec_ref(v___x_2878_);
lean_dec_ref(v_hints_2877_);
lean_dec_ref(v_a_2875_);
lean_dec_ref(v___x_2874_);
lean_dec_ref(v___x_2872_);
lean_dec(v___x_2871_);
lean_dec_ref(v_preDefs_2870_);
lean_dec(v___x_2869_);
lean_dec_ref(v_perms_2868_);
v_a_3104_ = lean_ctor_get(v___x_2891_, 0);
v_isSharedCheck_3111_ = !lean_is_exclusive(v___x_2891_);
if (v_isSharedCheck_3111_ == 0)
{
v___x_3106_ = v___x_2891_;
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_a_3104_);
lean_dec(v___x_2891_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3111_;
goto v_resetjp_3105_;
}
v_resetjp_3105_:
{
lean_object* v___x_3109_; 
if (v_isShared_3107_ == 0)
{
v___x_3109_ = v___x_3106_;
goto v_reusejp_3108_;
}
else
{
lean_object* v_reuseFailAlloc_3110_; 
v_reuseFailAlloc_3110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3110_, 0, v_a_3104_);
v___x_3109_ = v_reuseFailAlloc_3110_;
goto v_reusejp_3108_;
}
v_reusejp_3108_:
{
return v___x_3109_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint___lam__0___boxed(lean_object** _args){
lean_object* v_a_3112_ = _args[0];
lean_object* v_perms_3113_ = _args[1];
lean_object* v___x_3114_ = _args[2];
lean_object* v_preDefs_3115_ = _args[3];
lean_object* v___x_3116_ = _args[4];
lean_object* v___x_3117_ = _args[5];
lean_object* v___x_3118_ = _args[6];
lean_object* v___x_3119_ = _args[7];
lean_object* v_a_3120_ = _args[8];
lean_object* v___x_3121_ = _args[9];
lean_object* v_hints_3122_ = _args[10];
lean_object* v___x_3123_ = _args[11];
lean_object* v_docCtx_3124_ = _args[12];
lean_object* v_sz_3125_ = _args[13];
lean_object* v_fixedArgs_3126_ = _args[14];
lean_object* v___y_3127_ = _args[15];
lean_object* v___y_3128_ = _args[16];
lean_object* v___y_3129_ = _args[17];
lean_object* v___y_3130_ = _args[18];
lean_object* v___y_3131_ = _args[19];
lean_object* v___y_3132_ = _args[20];
lean_object* v___y_3133_ = _args[21];
_start:
{
size_t v___x_58229__boxed_3134_; uint8_t v___x_58232__boxed_3135_; size_t v_sz_boxed_3136_; lean_object* v_res_3137_; 
v___x_58229__boxed_3134_ = lean_unbox_usize(v___x_3118_);
lean_dec(v___x_3118_);
v___x_58232__boxed_3135_ = lean_unbox(v___x_3121_);
v_sz_boxed_3136_ = lean_unbox_usize(v_sz_3125_);
lean_dec(v_sz_3125_);
v_res_3137_ = l_Lean_Elab_partialFixpoint___lam__0(v_a_3112_, v_perms_3113_, v___x_3114_, v_preDefs_3115_, v___x_3116_, v___x_3117_, v___x_58229__boxed_3134_, v___x_3119_, v_a_3120_, v___x_58232__boxed_3135_, v_hints_3122_, v___x_3123_, v_docCtx_3124_, v_sz_boxed_3136_, v_fixedArgs_3126_, v___y_3127_, v___y_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_);
lean_dec(v___y_3132_);
lean_dec_ref(v___y_3131_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec(v___y_3128_);
lean_dec_ref(v___y_3127_);
lean_dec_ref(v_a_3112_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__7(size_t v_sz_3138_, size_t v_i_3139_, lean_object* v_bs_3140_){
_start:
{
uint8_t v___x_3141_; 
v___x_3141_ = lean_usize_dec_lt(v_i_3139_, v_sz_3138_);
if (v___x_3141_ == 0)
{
return v_bs_3140_;
}
else
{
lean_object* v_v_3142_; lean_object* v_declName_3143_; lean_object* v___x_3144_; lean_object* v_bs_x27_3145_; size_t v___x_3146_; size_t v___x_3147_; lean_object* v___x_3148_; 
v_v_3142_ = lean_array_uget_borrowed(v_bs_3140_, v_i_3139_);
v_declName_3143_ = lean_ctor_get(v_v_3142_, 3);
lean_inc(v_declName_3143_);
v___x_3144_ = lean_unsigned_to_nat(0u);
v_bs_x27_3145_ = lean_array_uset(v_bs_3140_, v_i_3139_, v___x_3144_);
v___x_3146_ = ((size_t)1ULL);
v___x_3147_ = lean_usize_add(v_i_3139_, v___x_3146_);
v___x_3148_ = lean_array_uset(v_bs_x27_3145_, v_i_3139_, v_declName_3143_);
v_i_3139_ = v___x_3147_;
v_bs_3140_ = v___x_3148_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__7___boxed(lean_object* v_sz_3150_, lean_object* v_i_3151_, lean_object* v_bs_3152_){
_start:
{
size_t v_sz_boxed_3153_; size_t v_i_boxed_3154_; lean_object* v_res_3155_; 
v_sz_boxed_3153_ = lean_unbox_usize(v_sz_3150_);
lean_dec(v_sz_3150_);
v_i_boxed_3154_ = lean_unbox_usize(v_i_3151_);
lean_dec(v_i_3151_);
v_res_3155_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__7(v_sz_boxed_3153_, v_i_boxed_3154_, v_bs_3152_);
return v_res_3155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0_spec__0(lean_object* v_as_3156_, size_t v_i_3157_, size_t v_stop_3158_, lean_object* v_b_3159_){
_start:
{
lean_object* v___y_3161_; uint8_t v___x_3165_; 
v___x_3165_ = lean_usize_dec_eq(v_i_3157_, v_stop_3158_);
if (v___x_3165_ == 0)
{
lean_object* v___x_3166_; lean_object* v_termination_3167_; lean_object* v_partialFixpoint_x3f_3168_; 
v___x_3166_ = lean_array_uget_borrowed(v_as_3156_, v_i_3157_);
v_termination_3167_ = lean_ctor_get(v___x_3166_, 8);
v_partialFixpoint_x3f_3168_ = lean_ctor_get(v_termination_3167_, 3);
if (lean_obj_tag(v_partialFixpoint_x3f_3168_) == 0)
{
v___y_3161_ = v_b_3159_;
goto v___jp_3160_;
}
else
{
lean_object* v_val_3169_; lean_object* v___x_3170_; 
v_val_3169_ = lean_ctor_get(v_partialFixpoint_x3f_3168_, 0);
lean_inc(v_val_3169_);
v___x_3170_ = lean_array_push(v_b_3159_, v_val_3169_);
v___y_3161_ = v___x_3170_;
goto v___jp_3160_;
}
}
else
{
return v_b_3159_;
}
v___jp_3160_:
{
size_t v___x_3162_; size_t v___x_3163_; 
v___x_3162_ = ((size_t)1ULL);
v___x_3163_ = lean_usize_add(v_i_3157_, v___x_3162_);
v_i_3157_ = v___x_3163_;
v_b_3159_ = v___y_3161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0_spec__0___boxed(lean_object* v_as_3171_, lean_object* v_i_3172_, lean_object* v_stop_3173_, lean_object* v_b_3174_){
_start:
{
size_t v_i_boxed_3175_; size_t v_stop_boxed_3176_; lean_object* v_res_3177_; 
v_i_boxed_3175_ = lean_unbox_usize(v_i_3172_);
lean_dec(v_i_3172_);
v_stop_boxed_3176_ = lean_unbox_usize(v_stop_3173_);
lean_dec(v_stop_3173_);
v_res_3177_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0_spec__0(v_as_3171_, v_i_boxed_3175_, v_stop_boxed_3176_, v_b_3174_);
lean_dec_ref(v_as_3171_);
return v_res_3177_;
}
}
static lean_object* _init_l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3178_ = lean_unsigned_to_nat(0u);
v___x_3179_ = lean_mk_empty_array_with_capacity(v___x_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0(lean_object* v_as_3180_, lean_object* v_start_3181_, lean_object* v_stop_3182_){
_start:
{
lean_object* v___x_3183_; uint8_t v___x_3184_; 
v___x_3183_ = lean_obj_once(&l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___closed__0, &l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___closed__0_once, _init_l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___closed__0);
v___x_3184_ = lean_nat_dec_lt(v_start_3181_, v_stop_3182_);
if (v___x_3184_ == 0)
{
return v___x_3183_;
}
else
{
lean_object* v___x_3185_; uint8_t v___x_3186_; 
v___x_3185_ = lean_array_get_size(v_as_3180_);
v___x_3186_ = lean_nat_dec_le(v_stop_3182_, v___x_3185_);
if (v___x_3186_ == 0)
{
uint8_t v___x_3187_; 
v___x_3187_ = lean_nat_dec_lt(v_start_3181_, v___x_3185_);
if (v___x_3187_ == 0)
{
return v___x_3183_;
}
else
{
size_t v___x_3188_; size_t v___x_3189_; lean_object* v___x_3190_; 
v___x_3188_ = lean_usize_of_nat(v_start_3181_);
v___x_3189_ = lean_usize_of_nat(v___x_3185_);
v___x_3190_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0_spec__0(v_as_3180_, v___x_3188_, v___x_3189_, v___x_3183_);
return v___x_3190_;
}
}
else
{
size_t v___x_3191_; size_t v___x_3192_; lean_object* v___x_3193_; 
v___x_3191_ = lean_usize_of_nat(v_start_3181_);
v___x_3192_ = lean_usize_of_nat(v_stop_3182_);
v___x_3193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0_spec__0(v_as_3180_, v___x_3191_, v___x_3192_, v___x_3183_);
return v___x_3193_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0___boxed(lean_object* v_as_3194_, lean_object* v_start_3195_, lean_object* v_stop_3196_){
_start:
{
lean_object* v_res_3197_; 
v_res_3197_ = l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0(v_as_3194_, v_start_3195_, v_stop_3196_);
lean_dec(v_stop_3196_);
lean_dec(v_start_3195_);
lean_dec_ref(v_as_3194_);
return v_res_3197_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26_spec__31(lean_object* v_as_3198_, size_t v_i_3199_, size_t v_stop_3200_){
_start:
{
uint8_t v___x_3201_; 
v___x_3201_ = lean_usize_dec_eq(v_i_3199_, v_stop_3200_);
if (v___x_3201_ == 0)
{
lean_object* v___x_3202_; uint8_t v_fixpointType_3203_; uint8_t v___x_3204_; 
v___x_3202_ = lean_array_uget_borrowed(v_as_3198_, v_i_3199_);
v_fixpointType_3203_ = lean_ctor_get_uint8(v___x_3202_, sizeof(void*)*2);
v___x_3204_ = l_Lean_Elab_isLatticeTheoretic(v_fixpointType_3203_);
if (v___x_3204_ == 0)
{
size_t v___x_3205_; size_t v___x_3206_; 
v___x_3205_ = ((size_t)1ULL);
v___x_3206_ = lean_usize_add(v_i_3199_, v___x_3205_);
v_i_3199_ = v___x_3206_;
goto _start;
}
else
{
return v___x_3204_;
}
}
else
{
uint8_t v___x_3208_; 
v___x_3208_ = 0;
return v___x_3208_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26_spec__31___boxed(lean_object* v_as_3209_, lean_object* v_i_3210_, lean_object* v_stop_3211_){
_start:
{
size_t v_i_boxed_3212_; size_t v_stop_boxed_3213_; uint8_t v_res_3214_; lean_object* v_r_3215_; 
v_i_boxed_3212_ = lean_unbox_usize(v_i_3210_);
lean_dec(v_i_3210_);
v_stop_boxed_3213_ = lean_unbox_usize(v_stop_3211_);
lean_dec(v_stop_3211_);
v_res_3214_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26_spec__31(v_as_3209_, v_i_boxed_3212_, v_stop_boxed_3213_);
lean_dec_ref(v_as_3209_);
v_r_3215_ = lean_box(v_res_3214_);
return v_r_3215_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26(lean_object* v_as_3216_, size_t v_i_3217_, size_t v_stop_3218_){
_start:
{
uint8_t v___x_3219_; 
v___x_3219_ = lean_usize_dec_eq(v_i_3217_, v_stop_3218_);
if (v___x_3219_ == 0)
{
lean_object* v___x_3220_; uint8_t v_fixpointType_3221_; uint8_t v___x_3222_; 
v___x_3220_ = lean_array_uget_borrowed(v_as_3216_, v_i_3217_);
v_fixpointType_3221_ = lean_ctor_get_uint8(v___x_3220_, sizeof(void*)*2);
v___x_3222_ = l_Lean_Elab_isLatticeTheoretic(v_fixpointType_3221_);
if (v___x_3222_ == 0)
{
size_t v___x_3223_; size_t v___x_3224_; uint8_t v___x_3225_; 
v___x_3223_ = ((size_t)1ULL);
v___x_3224_ = lean_usize_add(v_i_3217_, v___x_3223_);
v___x_3225_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26_spec__31(v_as_3216_, v___x_3224_, v_stop_3218_);
return v___x_3225_;
}
else
{
return v___x_3222_;
}
}
else
{
uint8_t v___x_3226_; 
v___x_3226_ = 0;
return v___x_3226_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26___boxed(lean_object* v_as_3227_, lean_object* v_i_3228_, lean_object* v_stop_3229_){
_start:
{
size_t v_i_boxed_3230_; size_t v_stop_boxed_3231_; uint8_t v_res_3232_; lean_object* v_r_3233_; 
v_i_boxed_3230_ = lean_unbox_usize(v_i_3228_);
lean_dec(v_i_3228_);
v_stop_boxed_3231_ = lean_unbox_usize(v_stop_3229_);
lean_dec(v_stop_3229_);
v_res_3232_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26(v_as_3227_, v_i_boxed_3230_, v_stop_boxed_3231_);
lean_dec_ref(v_as_3227_);
v_r_3233_ = lean_box(v_res_3232_);
return v_r_3233_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__10(lean_object* v_opts_3234_, lean_object* v_opt_3235_){
_start:
{
lean_object* v_name_3236_; lean_object* v_defValue_3237_; lean_object* v_map_3238_; lean_object* v___x_3239_; 
v_name_3236_ = lean_ctor_get(v_opt_3235_, 0);
v_defValue_3237_ = lean_ctor_get(v_opt_3235_, 1);
v_map_3238_ = lean_ctor_get(v_opts_3234_, 0);
v___x_3239_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3238_, v_name_3236_);
if (lean_obj_tag(v___x_3239_) == 0)
{
uint8_t v___x_3240_; 
v___x_3240_ = lean_unbox(v_defValue_3237_);
return v___x_3240_;
}
else
{
lean_object* v_val_3241_; 
v_val_3241_ = lean_ctor_get(v___x_3239_, 0);
lean_inc(v_val_3241_);
lean_dec_ref(v___x_3239_);
if (lean_obj_tag(v_val_3241_) == 1)
{
uint8_t v_v_3242_; 
v_v_3242_ = lean_ctor_get_uint8(v_val_3241_, 0);
lean_dec_ref(v_val_3241_);
return v_v_3242_;
}
else
{
uint8_t v___x_3243_; 
lean_dec(v_val_3241_);
v___x_3243_ = lean_unbox(v_defValue_3237_);
return v___x_3243_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__10___boxed(lean_object* v_opts_3244_, lean_object* v_opt_3245_){
_start:
{
uint8_t v_res_3246_; lean_object* v_r_3247_; 
v_res_3246_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__10(v_opts_3244_, v_opt_3245_);
lean_dec_ref(v_opt_3245_);
lean_dec_ref(v_opts_3244_);
v_r_3247_ = lean_box(v_res_3246_);
return v_r_3247_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0(void){
_start:
{
lean_object* v___x_3248_; lean_object* v___x_3249_; 
v___x_3248_ = lean_box(1);
v___x_3249_ = l_Lean_MessageData_ofFormat(v___x_3248_);
return v___x_3249_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__1(void){
_start:
{
lean_object* v___x_3250_; 
v___x_3250_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_3250_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__2(void){
_start:
{
lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3251_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__1);
v___x_3252_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3252_, 0, v___x_3251_);
return v___x_3252_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__3(void){
_start:
{
lean_object* v___x_3253_; lean_object* v___x_3254_; 
v___x_3253_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__2);
v___x_3254_ = l_Lean_MessageData_ofFormat(v___x_3253_);
return v___x_3254_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11(lean_object* v_x_3255_, lean_object* v_x_3256_){
_start:
{
if (lean_obj_tag(v_x_3256_) == 0)
{
return v_x_3255_;
}
else
{
lean_object* v_head_3257_; lean_object* v_tail_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3280_; 
v_head_3257_ = lean_ctor_get(v_x_3256_, 0);
v_tail_3258_ = lean_ctor_get(v_x_3256_, 1);
v_isSharedCheck_3280_ = !lean_is_exclusive(v_x_3256_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3260_ = v_x_3256_;
v_isShared_3261_ = v_isSharedCheck_3280_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_tail_3258_);
lean_inc(v_head_3257_);
lean_dec(v_x_3256_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3280_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v_before_3262_; lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3278_; 
v_before_3262_ = lean_ctor_get(v_head_3257_, 0);
v_isSharedCheck_3278_ = !lean_is_exclusive(v_head_3257_);
if (v_isSharedCheck_3278_ == 0)
{
lean_object* v_unused_3279_; 
v_unused_3279_ = lean_ctor_get(v_head_3257_, 1);
lean_dec(v_unused_3279_);
v___x_3264_ = v_head_3257_;
v_isShared_3265_ = v_isSharedCheck_3278_;
goto v_resetjp_3263_;
}
else
{
lean_inc(v_before_3262_);
lean_dec(v_head_3257_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3278_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3266_; lean_object* v___x_3268_; 
v___x_3266_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0);
if (v_isShared_3265_ == 0)
{
lean_ctor_set_tag(v___x_3264_, 7);
lean_ctor_set(v___x_3264_, 1, v___x_3266_);
lean_ctor_set(v___x_3264_, 0, v_x_3255_);
v___x_3268_ = v___x_3264_;
goto v_reusejp_3267_;
}
else
{
lean_object* v_reuseFailAlloc_3277_; 
v_reuseFailAlloc_3277_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3277_, 0, v_x_3255_);
lean_ctor_set(v_reuseFailAlloc_3277_, 1, v___x_3266_);
v___x_3268_ = v_reuseFailAlloc_3277_;
goto v_reusejp_3267_;
}
v_reusejp_3267_:
{
lean_object* v___x_3269_; lean_object* v___x_3271_; 
v___x_3269_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__3);
if (v_isShared_3261_ == 0)
{
lean_ctor_set_tag(v___x_3260_, 7);
lean_ctor_set(v___x_3260_, 1, v___x_3269_);
lean_ctor_set(v___x_3260_, 0, v___x_3268_);
v___x_3271_ = v___x_3260_;
goto v_reusejp_3270_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v___x_3268_);
lean_ctor_set(v_reuseFailAlloc_3276_, 1, v___x_3269_);
v___x_3271_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3270_;
}
v_reusejp_3270_:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3272_ = l_Lean_MessageData_ofSyntax(v_before_3262_);
v___x_3273_ = l_Lean_indentD(v___x_3272_);
v___x_3274_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3271_);
lean_ctor_set(v___x_3274_, 1, v___x_3273_);
v_x_3255_ = v___x_3274_;
v_x_3256_ = v_tail_3258_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_3281_; 
v___x_3281_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_3281_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__0);
v___x_3283_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
return v___x_3283_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
v___x_3284_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__1);
v___x_3285_ = l_Lean_MessageData_ofFormat(v___x_3284_);
return v___x_3285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg(lean_object* v_msgData_3286_, lean_object* v_macroStack_3287_, lean_object* v___y_3288_){
_start:
{
lean_object* v_options_3290_; lean_object* v___x_3291_; uint8_t v___x_3292_; 
v_options_3290_ = lean_ctor_get(v___y_3288_, 2);
v___x_3291_ = l_Lean_Elab_pp_macroStack;
v___x_3292_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__10(v_options_3290_, v___x_3291_);
if (v___x_3292_ == 0)
{
lean_object* v___x_3293_; 
lean_dec(v_macroStack_3287_);
v___x_3293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3293_, 0, v_msgData_3286_);
return v___x_3293_;
}
else
{
if (lean_obj_tag(v_macroStack_3287_) == 0)
{
lean_object* v___x_3294_; 
v___x_3294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3294_, 0, v_msgData_3286_);
return v___x_3294_;
}
else
{
lean_object* v_head_3295_; lean_object* v_after_3296_; lean_object* v___x_3298_; uint8_t v_isShared_3299_; uint8_t v_isSharedCheck_3311_; 
v_head_3295_ = lean_ctor_get(v_macroStack_3287_, 0);
lean_inc(v_head_3295_);
v_after_3296_ = lean_ctor_get(v_head_3295_, 1);
v_isSharedCheck_3311_ = !lean_is_exclusive(v_head_3295_);
if (v_isSharedCheck_3311_ == 0)
{
lean_object* v_unused_3312_; 
v_unused_3312_ = lean_ctor_get(v_head_3295_, 0);
lean_dec(v_unused_3312_);
v___x_3298_ = v_head_3295_;
v_isShared_3299_ = v_isSharedCheck_3311_;
goto v_resetjp_3297_;
}
else
{
lean_inc(v_after_3296_);
lean_dec(v_head_3295_);
v___x_3298_ = lean_box(0);
v_isShared_3299_ = v_isSharedCheck_3311_;
goto v_resetjp_3297_;
}
v_resetjp_3297_:
{
lean_object* v___x_3300_; lean_object* v___x_3302_; 
v___x_3300_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11___closed__0);
if (v_isShared_3299_ == 0)
{
lean_ctor_set_tag(v___x_3298_, 7);
lean_ctor_set(v___x_3298_, 1, v___x_3300_);
lean_ctor_set(v___x_3298_, 0, v_msgData_3286_);
v___x_3302_ = v___x_3298_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_msgData_3286_);
lean_ctor_set(v_reuseFailAlloc_3310_, 1, v___x_3300_);
v___x_3302_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v_msgData_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3303_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___closed__2);
v___x_3304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3302_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = l_Lean_MessageData_ofSyntax(v_after_3296_);
v___x_3306_ = l_Lean_indentD(v___x_3305_);
v_msgData_3307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_3307_, 0, v___x_3304_);
lean_ctor_set(v_msgData_3307_, 1, v___x_3306_);
v___x_3308_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2_spec__11(v_msgData_3307_, v_macroStack_3287_);
v___x_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3308_);
return v___x_3309_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_3313_, lean_object* v_macroStack_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_){
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg(v_msgData_3313_, v_macroStack_3314_, v___y_3315_);
lean_dec_ref(v___y_3315_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg(lean_object* v_msg_3318_, lean_object* v___y_3319_, lean_object* v___y_3320_, lean_object* v___y_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_){
_start:
{
lean_object* v_ref_3326_; lean_object* v___x_3327_; lean_object* v_a_3328_; lean_object* v_macroStack_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v_a_3332_; lean_object* v___x_3334_; uint8_t v_isShared_3335_; uint8_t v_isSharedCheck_3340_; 
v_ref_3326_ = lean_ctor_get(v___y_3323_, 5);
v___x_3327_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_unReplaceRecApps_spec__6_spec__7(v_msg_3318_, v___y_3321_, v___y_3322_, v___y_3323_, v___y_3324_);
v_a_3328_ = lean_ctor_get(v___x_3327_, 0);
lean_inc(v_a_3328_);
lean_dec_ref(v___x_3327_);
v_macroStack_3329_ = lean_ctor_get(v___y_3319_, 1);
v___x_3330_ = l_Lean_Elab_getBetterRef(v_ref_3326_, v_macroStack_3329_);
lean_inc(v_macroStack_3329_);
v___x_3331_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg(v_a_3328_, v_macroStack_3329_, v___y_3323_);
v_a_3332_ = lean_ctor_get(v___x_3331_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_3331_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3334_ = v___x_3331_;
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
else
{
lean_inc(v_a_3332_);
lean_dec(v___x_3331_);
v___x_3334_ = lean_box(0);
v_isShared_3335_ = v_isSharedCheck_3340_;
goto v_resetjp_3333_;
}
v_resetjp_3333_:
{
lean_object* v___x_3336_; lean_object* v___x_3338_; 
v___x_3336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3330_);
lean_ctor_set(v___x_3336_, 1, v_a_3332_);
if (v_isShared_3335_ == 0)
{
lean_ctor_set_tag(v___x_3334_, 1);
lean_ctor_set(v___x_3334_, 0, v___x_3336_);
v___x_3338_ = v___x_3334_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v___x_3336_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg___boxed(lean_object* v_msg_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_){
_start:
{
lean_object* v_res_3349_; 
v_res_3349_ = l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg(v_msg_3341_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_, v___y_3347_);
lean_dec(v___y_3347_);
lean_dec_ref(v___y_3346_);
lean_dec(v___y_3345_);
lean_dec_ref(v___y_3344_);
lean_dec(v___y_3343_);
lean_dec_ref(v___y_3342_);
return v_res_3349_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3350_; 
v___x_3350_ = lean_mk_string_unchecked("ImplicationOrder", 16, 16);
return v___x_3350_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3351_; 
v___x_3351_ = lean_mk_string_unchecked("instCompleteLattice", 19, 19);
return v___x_3351_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; 
v___x_3352_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1);
v___x_3353_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__0);
v___x_3354_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3);
v___x_3355_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_3356_ = l_Lean_Name_mkStr4(v___x_3355_, v___x_3354_, v___x_3353_, v___x_3352_);
return v___x_3356_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3357_ = lean_box(0);
v___x_3358_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__2);
v___x_3359_ = l_Lean_mkConst(v___x_3358_, v___x_3357_);
return v___x_3359_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_3360_; 
v___x_3360_ = lean_mk_string_unchecked("`inductive_fixpoint` can be only used to define predicates", 58, 58);
return v___x_3360_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3361_; lean_object* v___x_3362_; 
v___x_3361_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__4);
v___x_3362_ = l_Lean_stringToMessageData(v___x_3361_);
return v___x_3362_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1(lean_object* v_xs_3363_, lean_object* v_e_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_){
_start:
{
uint8_t v___x_3375_; 
v___x_3375_ = l_Lean_Expr_isProp(v_e_3364_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v_a_3378_; lean_object* v___x_3380_; uint8_t v_isShared_3381_; uint8_t v_isSharedCheck_3385_; 
lean_dec_ref(v_xs_3363_);
v___x_3376_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__5, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__5_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__5);
v___x_3377_ = l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg(v___x_3376_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
v_a_3378_ = lean_ctor_get(v___x_3377_, 0);
v_isSharedCheck_3385_ = !lean_is_exclusive(v___x_3377_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3380_ = v___x_3377_;
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
else
{
lean_inc(v_a_3378_);
lean_dec(v___x_3377_);
v___x_3380_ = lean_box(0);
v_isShared_3381_ = v_isSharedCheck_3385_;
goto v_resetjp_3379_;
}
v_resetjp_3379_:
{
lean_object* v___x_3383_; 
if (v_isShared_3381_ == 0)
{
v___x_3383_ = v___x_3380_;
goto v_reusejp_3382_;
}
else
{
lean_object* v_reuseFailAlloc_3384_; 
v_reuseFailAlloc_3384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3384_, 0, v_a_3378_);
v___x_3383_ = v_reuseFailAlloc_3384_;
goto v_reusejp_3382_;
}
v_reusejp_3382_:
{
return v___x_3383_;
}
}
}
else
{
goto v___jp_3372_;
}
v___jp_3372_:
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__3);
v___x_3374_ = l_Lean_Meta_mkInstPiOfInstsForall(v_xs_3363_, v___x_3373_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_);
return v___x_3374_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___boxed(lean_object* v_xs_3386_, lean_object* v_e_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v_res_3395_; 
v_res_3395_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1(v_xs_3386_, v_e_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
lean_dec(v___y_3393_);
lean_dec_ref(v___y_3392_);
lean_dec(v___y_3391_);
lean_dec_ref(v___y_3390_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec_ref(v_e_3387_);
return v_res_3395_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3396_; 
v___x_3396_ = lean_mk_string_unchecked("ReverseImplicationOrder", 23, 23);
return v___x_3396_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3397_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___closed__1);
v___x_3398_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__0);
v___x_3399_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3);
v___x_3400_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_3401_ = l_Lean_Name_mkStr4(v___x_3400_, v___x_3399_, v___x_3398_, v___x_3397_);
return v___x_3401_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3402_ = lean_box(0);
v___x_3403_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__1);
v___x_3404_ = l_Lean_mkConst(v___x_3403_, v___x_3402_);
return v___x_3404_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = lean_mk_string_unchecked("`coinductive_fixpoint` can be only used to define predicates", 60, 60);
return v___x_3405_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3406_; lean_object* v___x_3407_; 
v___x_3406_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__3);
v___x_3407_ = l_Lean_stringToMessageData(v___x_3406_);
return v___x_3407_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0(lean_object* v_xs_3408_, lean_object* v_e_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_){
_start:
{
uint8_t v___x_3420_; 
v___x_3420_ = l_Lean_Expr_isProp(v_e_3409_);
if (v___x_3420_ == 0)
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_dec_ref(v_xs_3408_);
v___x_3421_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__4);
v___x_3422_ = l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg(v___x_3421_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
v_a_3423_ = lean_ctor_get(v___x_3422_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3422_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3422_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3422_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
else
{
goto v___jp_3417_;
}
v___jp_3417_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___closed__2);
v___x_3419_ = l_Lean_Meta_mkInstPiOfInstsForall(v_xs_3408_, v___x_3418_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_);
return v___x_3419_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___boxed(lean_object* v_xs_3431_, lean_object* v_e_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0(v_xs_3431_, v_e_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec_ref(v_e_3432_);
return v_res_3440_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_3441_; 
v___x_3441_ = lean_mk_string_unchecked("failed to compile definition '", 30, 30);
return v___x_3441_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3442_; lean_object* v___x_3443_; 
v___x_3442_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__0);
v___x_3443_ = l_Lean_stringToMessageData(v___x_3442_);
return v___x_3443_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = lean_mk_string_unchecked("' using `partial_fixpoint`", 26, 26);
return v___x_3444_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; 
v___x_3445_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__2);
v___x_3446_ = l_Lean_stringToMessageData(v___x_3445_);
return v___x_3446_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__4(void){
_start:
{
lean_object* v___x_3447_; lean_object* v___x_3448_; 
v___x_3447_ = lean_unsigned_to_nat(0u);
v___x_3448_ = lean_mk_empty_array_with_capacity(v___x_3447_);
return v___x_3448_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_3449_; 
v___x_3449_ = lean_mk_string_unchecked("Nonempty", 8, 8);
return v___x_3449_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__6(void){
_start:
{
lean_object* v___x_3450_; 
v___x_3450_ = lean_mk_string_unchecked("intro", 5, 5);
return v___x_3450_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__7(void){
_start:
{
lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3451_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__6, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__6_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__6);
v___x_3452_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__5, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__5_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__5);
v___x_3453_ = l_Lean_Name_mkStr2(v___x_3452_, v___x_3451_);
return v___x_3453_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__8(void){
_start:
{
lean_object* v___x_3454_; 
v___x_3454_ = lean_mk_string_unchecked("Classical", 9, 9);
return v___x_3454_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__9(void){
_start:
{
lean_object* v___x_3455_; 
v___x_3455_ = lean_mk_string_unchecked("ofNonempty", 10, 10);
return v___x_3455_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__10(void){
_start:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3456_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__9, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__9);
v___x_3457_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__8, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__8_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__8);
v___x_3458_ = l_Lean_Name_mkStr2(v___x_3457_, v___x_3456_);
return v___x_3458_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__11(void){
_start:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3461_; lean_object* v___x_3462_; 
v___x_3459_ = lean_box(0);
v___x_3460_ = lean_unsigned_to_nat(2u);
v___x_3461_ = lean_mk_empty_array_with_capacity(v___x_3460_);
v___x_3462_ = lean_array_push(v___x_3461_, v___x_3459_);
return v___x_3462_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__12(void){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = lean_mk_string_unchecked("FlatOrder", 9, 9);
return v___x_3463_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__13(void){
_start:
{
lean_object* v___x_3464_; 
v___x_3464_ = lean_mk_string_unchecked("instCCPO", 8, 8);
return v___x_3464_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2(lean_object* v_declName_3465_, lean_object* v_type_3466_, lean_object* v_xs_3467_, lean_object* v___x_3468_, lean_object* v___x_3469_, lean_object* v_____r_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_){
_start:
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3484_; 
v___x_3478_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__1);
v___x_3479_ = l_Lean_MessageData_ofName(v_declName_3465_);
v___x_3480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3478_);
lean_ctor_set(v___x_3480_, 1, v___x_3479_);
v___x_3481_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__3);
v___x_3482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3482_, 0, v___x_3480_);
lean_ctor_set(v___x_3482_, 1, v___x_3481_);
v___x_3483_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__4);
v___x_3484_ = l_Lean_Elab_mkInhabitantFor(v___x_3482_, v___x_3483_, v_type_3466_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_);
if (lean_obj_tag(v___x_3484_) == 0)
{
lean_object* v_a_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; 
v_a_3485_ = lean_ctor_get(v___x_3484_, 0);
lean_inc(v_a_3485_);
lean_dec_ref(v___x_3484_);
v___x_3486_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__7);
v___x_3487_ = l_Lean_mkAppN(v_a_3485_, v_xs_3467_);
v___x_3488_ = lean_unsigned_to_nat(1u);
v___x_3489_ = lean_mk_empty_array_with_capacity(v___x_3488_);
v___x_3490_ = lean_array_push(v___x_3489_, v___x_3487_);
v___x_3491_ = l_Lean_Meta_mkAppM(v___x_3486_, v___x_3490_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_);
if (lean_obj_tag(v___x_3491_) == 0)
{
lean_object* v_a_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3516_; 
v_a_3492_ = lean_ctor_get(v___x_3491_, 0);
v_isSharedCheck_3516_ = !lean_is_exclusive(v___x_3491_);
if (v_isSharedCheck_3516_ == 0)
{
v___x_3494_ = v___x_3491_;
v_isShared_3495_ = v_isSharedCheck_3516_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_a_3492_);
lean_dec(v___x_3491_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3516_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3496_; lean_object* v___x_3498_; 
v___x_3496_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__10, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__10_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__10);
if (v_isShared_3495_ == 0)
{
lean_ctor_set_tag(v___x_3494_, 1);
v___x_3498_ = v___x_3494_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_a_3492_);
v___x_3498_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__11, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__11_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__11);
v___x_3500_ = lean_array_push(v___x_3499_, v___x_3498_);
v___x_3501_ = l_Lean_Meta_mkAppOptM(v___x_3496_, v___x_3500_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3502_; lean_object* v___x_3504_; uint8_t v_isShared_3505_; uint8_t v_isSharedCheck_3514_; 
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3501_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3504_ = v___x_3501_;
v_isShared_3505_ = v_isSharedCheck_3514_;
goto v_resetjp_3503_;
}
else
{
lean_inc(v_a_3502_);
lean_dec(v___x_3501_);
v___x_3504_ = lean_box(0);
v_isShared_3505_ = v_isSharedCheck_3514_;
goto v_resetjp_3503_;
}
v_resetjp_3503_:
{
lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3510_; 
v___x_3506_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__12, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__12_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__12);
v___x_3507_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__13, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__13_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___closed__13);
v___x_3508_ = l_Lean_Name_mkStr4(v___x_3468_, v___x_3469_, v___x_3506_, v___x_3507_);
if (v_isShared_3505_ == 0)
{
lean_ctor_set_tag(v___x_3504_, 1);
v___x_3510_ = v___x_3504_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v_a_3502_);
v___x_3510_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; 
v___x_3511_ = lean_array_push(v___x_3499_, v___x_3510_);
v___x_3512_ = l_Lean_Meta_mkAppOptM(v___x_3508_, v___x_3511_, v___y_3473_, v___y_3474_, v___y_3475_, v___y_3476_);
return v___x_3512_;
}
}
}
else
{
lean_dec_ref(v___x_3469_);
lean_dec_ref(v___x_3468_);
return v___x_3501_;
}
}
}
}
else
{
lean_dec_ref(v___x_3469_);
lean_dec_ref(v___x_3468_);
return v___x_3491_;
}
}
else
{
lean_dec_ref(v___x_3469_);
lean_dec_ref(v___x_3468_);
return v___x_3484_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___boxed(lean_object* v_declName_3517_, lean_object* v_type_3518_, lean_object* v_xs_3519_, lean_object* v___x_3520_, lean_object* v___x_3521_, lean_object* v_____r_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_){
_start:
{
lean_object* v_res_3530_; 
v_res_3530_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2(v_declName_3517_, v_type_3518_, v_xs_3519_, v___x_3520_, v___x_3521_, v_____r_3522_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3527_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
lean_dec_ref(v_xs_3519_);
return v_res_3530_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__4(lean_object* v_a_3531_, lean_object* v_a_3532_){
_start:
{
if (lean_obj_tag(v_a_3531_) == 0)
{
lean_object* v___x_3533_; 
v___x_3533_ = l_List_reverse___redArg(v_a_3532_);
return v___x_3533_;
}
else
{
lean_object* v_head_3534_; lean_object* v_tail_3535_; lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3544_; 
v_head_3534_ = lean_ctor_get(v_a_3531_, 0);
v_tail_3535_ = lean_ctor_get(v_a_3531_, 1);
v_isSharedCheck_3544_ = !lean_is_exclusive(v_a_3531_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3537_ = v_a_3531_;
v_isShared_3538_ = v_isSharedCheck_3544_;
goto v_resetjp_3536_;
}
else
{
lean_inc(v_tail_3535_);
lean_inc(v_head_3534_);
lean_dec(v_a_3531_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3544_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3539_; lean_object* v___x_3541_; 
v___x_3539_ = l_Lean_MessageData_ofExpr(v_head_3534_);
if (v_isShared_3538_ == 0)
{
lean_ctor_set(v___x_3537_, 1, v_a_3532_);
lean_ctor_set(v___x_3537_, 0, v___x_3539_);
v___x_3541_ = v___x_3537_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v___x_3539_);
lean_ctor_set(v_reuseFailAlloc_3543_, 1, v_a_3532_);
v___x_3541_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
v_a_3531_ = v_tail_3535_;
v_a_3532_ = v___x_3541_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_3545_; 
v___x_3545_ = lean_mk_string_unchecked("No CCPO instance found for ", 27, 27);
return v___x_3545_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__0);
v___x_3547_ = l_Lean_stringToMessageData(v___x_3546_);
return v___x_3547_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_3548_; 
v___x_3548_ = lean_mk_string_unchecked(", trying inhabitation", 21, 21);
return v___x_3548_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__2);
v___x_3550_ = l_Lean_stringToMessageData(v___x_3549_);
return v___x_3550_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_3551_; 
v___x_3551_ = lean_mk_string_unchecked("CCPO", 4, 4);
return v___x_3551_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3552_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__4);
v___x_3553_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3);
v___x_3554_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_3555_ = l_Lean_Name_mkStr3(v___x_3554_, v___x_3553_, v___x_3552_);
return v___x_3555_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__6(void){
_start:
{
lean_object* v___x_3556_; 
v___x_3556_ = lean_mk_string_unchecked("preDef.value: ", 14, 14);
return v___x_3556_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__7(void){
_start:
{
lean_object* v___x_3557_; lean_object* v___x_3558_; 
v___x_3557_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__6, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__6_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__6);
v___x_3558_ = l_Lean_stringToMessageData(v___x_3557_);
return v___x_3558_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__8(void){
_start:
{
lean_object* v___x_3559_; 
v___x_3559_ = lean_mk_string_unchecked(", xs: ", 6, 6);
return v___x_3559_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__9(void){
_start:
{
lean_object* v___x_3560_; lean_object* v___x_3561_; 
v___x_3560_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__8, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__8_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__8);
v___x_3561_ = l_Lean_stringToMessageData(v___x_3560_);
return v___x_3561_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__10(void){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = lean_mk_string_unchecked(", _body: ", 9, 9);
return v___x_3562_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__11(void){
_start:
{
lean_object* v___x_3563_; lean_object* v___x_3564_; 
v___x_3563_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__10, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__10_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__10);
v___x_3564_ = l_Lean_stringToMessageData(v___x_3563_);
return v___x_3564_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3(uint8_t v_isZero_3565_, lean_object* v_declName_3566_, lean_object* v_type_3567_, uint8_t v_fixpointType_3568_, lean_object* v___f_3569_, lean_object* v___f_3570_, lean_object* v_value_3571_, lean_object* v_xs_3572_, lean_object* v___body_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_){
_start:
{
lean_object* v_inst_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; lean_object* v___y_3604_; lean_object* v_options_3607_; lean_object* v_inheritedTraceOptions_3608_; uint8_t v_hasTrace_3609_; lean_object* v_cls_3610_; lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3614_; lean_object* v___y_3615_; lean_object* v___y_3616_; lean_object* v___y_3617_; lean_object* v___y_3618_; lean_object* v___y_3619_; uint8_t v___y_3620_; lean_object* v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3647_; lean_object* v___y_3648_; lean_object* v___y_3649_; lean_object* v___y_3650_; lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v___y_3659_; lean_object* v___y_3660_; lean_object* v___y_3661_; 
v_options_3607_ = lean_ctor_get(v___y_3578_, 2);
v_inheritedTraceOptions_3608_ = lean_ctor_get(v___y_3578_, 13);
v_hasTrace_3609_ = lean_ctor_get_uint8(v_options_3607_, sizeof(void*)*1);
v_cls_3610_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7);
if (v_hasTrace_3609_ == 0)
{
lean_dec_ref(v___body_3573_);
lean_dec_ref(v_value_3571_);
v___y_3656_ = v___y_3574_;
v___y_3657_ = v___y_3575_;
v___y_3658_ = v___y_3576_;
v___y_3659_ = v___y_3577_;
v___y_3660_ = v___y_3578_;
v___y_3661_ = v___y_3579_;
goto v___jp_3655_;
}
else
{
lean_object* v___x_3681_; uint8_t v___x_3682_; 
v___x_3681_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10);
v___x_3682_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3608_, v_options_3607_, v___x_3681_);
if (v___x_3682_ == 0)
{
lean_dec_ref(v___body_3573_);
lean_dec_ref(v_value_3571_);
v___y_3656_ = v___y_3574_;
v___y_3657_ = v___y_3575_;
v___y_3658_ = v___y_3576_;
v___y_3659_ = v___y_3577_;
v___y_3660_ = v___y_3578_;
v___y_3661_ = v___y_3579_;
goto v___jp_3655_;
}
else
{
lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3697_; 
v___x_3683_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__7);
v___x_3684_ = l_Lean_MessageData_ofExpr(v_value_3571_);
v___x_3685_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3685_, 0, v___x_3683_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
v___x_3686_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__9, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__9);
v___x_3687_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3687_, 0, v___x_3685_);
lean_ctor_set(v___x_3687_, 1, v___x_3686_);
lean_inc_ref(v_xs_3572_);
v___x_3688_ = lean_array_to_list(v_xs_3572_);
v___x_3689_ = lean_box(0);
v___x_3690_ = l_List_mapTR_loop___at___00Lean_Elab_partialFixpoint_spec__4(v___x_3688_, v___x_3689_);
v___x_3691_ = l_Lean_MessageData_ofList(v___x_3690_);
v___x_3692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3692_, 0, v___x_3687_);
lean_ctor_set(v___x_3692_, 1, v___x_3691_);
v___x_3693_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__11, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__11_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__11);
v___x_3694_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3692_);
lean_ctor_set(v___x_3694_, 1, v___x_3693_);
v___x_3695_ = l_Lean_MessageData_ofExpr(v___body_3573_);
v___x_3696_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3696_, 0, v___x_3694_);
lean_ctor_set(v___x_3696_, 1, v___x_3695_);
v___x_3697_ = l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(v_cls_3610_, v___x_3696_, v___y_3576_, v___y_3577_, v___y_3578_, v___y_3579_);
if (lean_obj_tag(v___x_3697_) == 0)
{
lean_dec_ref(v___x_3697_);
v___y_3656_ = v___y_3574_;
v___y_3657_ = v___y_3575_;
v___y_3658_ = v___y_3576_;
v___y_3659_ = v___y_3577_;
v___y_3660_ = v___y_3578_;
v___y_3661_ = v___y_3579_;
goto v___jp_3655_;
}
else
{
lean_object* v_a_3698_; lean_object* v___x_3700_; uint8_t v_isShared_3701_; uint8_t v_isSharedCheck_3705_; 
lean_dec_ref(v_xs_3572_);
lean_dec_ref(v___f_3570_);
lean_dec_ref(v___f_3569_);
lean_dec_ref(v_type_3567_);
lean_dec(v_declName_3566_);
v_a_3698_ = lean_ctor_get(v___x_3697_, 0);
v_isSharedCheck_3705_ = !lean_is_exclusive(v___x_3697_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3700_ = v___x_3697_;
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
else
{
lean_inc(v_a_3698_);
lean_dec(v___x_3697_);
v___x_3700_ = lean_box(0);
v_isShared_3701_ = v_isSharedCheck_3705_;
goto v_resetjp_3699_;
}
v_resetjp_3699_:
{
lean_object* v___x_3703_; 
if (v_isShared_3701_ == 0)
{
v___x_3703_ = v___x_3700_;
goto v_reusejp_3702_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3704_, 0, v_a_3698_);
v___x_3703_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3702_;
}
v_reusejp_3702_:
{
return v___x_3703_;
}
}
}
}
}
v___jp_3581_:
{
uint8_t v___x_3587_; uint8_t v___x_3588_; lean_object* v___x_3589_; 
v___x_3587_ = 1;
v___x_3588_ = 1;
v___x_3589_ = l_Lean_Meta_mkLambdaFVars(v_xs_3572_, v_inst_3582_, v_isZero_3565_, v___x_3587_, v_isZero_3565_, v___x_3587_, v___x_3588_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_);
lean_dec_ref(v_xs_3572_);
return v___x_3589_;
}
v___jp_3590_:
{
if (lean_obj_tag(v___y_3595_) == 0)
{
lean_object* v_a_3596_; 
v_a_3596_ = lean_ctor_get(v___y_3595_, 0);
lean_inc(v_a_3596_);
lean_dec_ref(v___y_3595_);
v_inst_3582_ = v_a_3596_;
v___y_3583_ = v___y_3594_;
v___y_3584_ = v___y_3593_;
v___y_3585_ = v___y_3591_;
v___y_3586_ = v___y_3592_;
goto v___jp_3581_;
}
else
{
lean_dec_ref(v_xs_3572_);
return v___y_3595_;
}
}
v___jp_3597_:
{
lean_object* v___x_3605_; lean_object* v___x_3606_; 
v___x_3605_ = lean_box(0);
lean_inc(v___y_3601_);
lean_inc_ref(v___y_3600_);
lean_inc(v___y_3602_);
lean_inc_ref(v___y_3604_);
lean_inc(v___y_3598_);
lean_inc_ref(v___y_3603_);
v___x_3606_ = lean_apply_8(v___y_3599_, v___x_3605_, v___y_3603_, v___y_3598_, v___y_3604_, v___y_3602_, v___y_3600_, v___y_3601_, lean_box(0));
v___y_3591_ = v___y_3600_;
v___y_3592_ = v___y_3601_;
v___y_3593_ = v___y_3602_;
v___y_3594_ = v___y_3604_;
v___y_3595_ = v___x_3606_;
goto v___jp_3590_;
}
v___jp_3611_:
{
if (v___y_3620_ == 0)
{
lean_object* v_options_3621_; uint8_t v_hasTrace_3622_; 
lean_dec_ref(v___y_3614_);
v_options_3621_ = lean_ctor_get(v___y_3615_, 2);
v_hasTrace_3622_ = lean_ctor_get_uint8(v_options_3621_, sizeof(void*)*1);
if (v_hasTrace_3622_ == 0)
{
lean_dec(v_declName_3566_);
v___y_3598_ = v___y_3612_;
v___y_3599_ = v___y_3613_;
v___y_3600_ = v___y_3615_;
v___y_3601_ = v___y_3616_;
v___y_3602_ = v___y_3617_;
v___y_3603_ = v___y_3618_;
v___y_3604_ = v___y_3619_;
goto v___jp_3597_;
}
else
{
lean_object* v_inheritedTraceOptions_3623_; lean_object* v___x_3624_; uint8_t v___x_3625_; 
v_inheritedTraceOptions_3623_ = lean_ctor_get(v___y_3615_, 13);
v___x_3624_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__10);
v___x_3625_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3623_, v_options_3621_, v___x_3624_);
if (v___x_3625_ == 0)
{
lean_dec(v_declName_3566_);
v___y_3598_ = v___y_3612_;
v___y_3599_ = v___y_3613_;
v___y_3600_ = v___y_3615_;
v___y_3601_ = v___y_3616_;
v___y_3602_ = v___y_3617_;
v___y_3603_ = v___y_3618_;
v___y_3604_ = v___y_3619_;
goto v___jp_3597_;
}
else
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3626_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__1);
v___x_3627_ = l_Lean_MessageData_ofName(v_declName_3566_);
v___x_3628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3626_);
lean_ctor_set(v___x_3628_, 1, v___x_3627_);
v___x_3629_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__3);
v___x_3630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3630_, 0, v___x_3628_);
lean_ctor_set(v___x_3630_, 1, v___x_3629_);
v___x_3631_ = l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(v_cls_3610_, v___x_3630_, v___y_3619_, v___y_3617_, v___y_3615_, v___y_3616_);
if (lean_obj_tag(v___x_3631_) == 0)
{
lean_object* v_a_3632_; lean_object* v___x_3633_; 
v_a_3632_ = lean_ctor_get(v___x_3631_, 0);
lean_inc(v_a_3632_);
lean_dec_ref(v___x_3631_);
lean_inc(v___y_3616_);
lean_inc_ref(v___y_3615_);
lean_inc(v___y_3617_);
lean_inc_ref(v___y_3619_);
lean_inc(v___y_3612_);
lean_inc_ref(v___y_3618_);
v___x_3633_ = lean_apply_8(v___y_3613_, v_a_3632_, v___y_3618_, v___y_3612_, v___y_3619_, v___y_3617_, v___y_3615_, v___y_3616_, lean_box(0));
v___y_3591_ = v___y_3615_;
v___y_3592_ = v___y_3616_;
v___y_3593_ = v___y_3617_;
v___y_3594_ = v___y_3619_;
v___y_3595_ = v___x_3633_;
goto v___jp_3590_;
}
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
lean_dec_ref(v___y_3613_);
lean_dec_ref(v_xs_3572_);
v_a_3634_ = lean_ctor_get(v___x_3631_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3631_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3631_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3631_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v___x_3639_; 
if (v_isShared_3637_ == 0)
{
v___x_3639_ = v___x_3636_;
goto v_reusejp_3638_;
}
else
{
lean_object* v_reuseFailAlloc_3640_; 
v_reuseFailAlloc_3640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3640_, 0, v_a_3634_);
v___x_3639_ = v_reuseFailAlloc_3640_;
goto v_reusejp_3638_;
}
v_reusejp_3638_:
{
return v___x_3639_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___y_3613_);
lean_dec_ref(v_xs_3572_);
lean_dec(v_declName_3566_);
return v___y_3614_;
}
}
v___jp_3642_:
{
if (lean_obj_tag(v___y_3650_) == 0)
{
lean_object* v_a_3651_; 
lean_dec_ref(v___y_3644_);
lean_dec(v_declName_3566_);
v_a_3651_ = lean_ctor_get(v___y_3650_, 0);
lean_inc(v_a_3651_);
lean_dec_ref(v___y_3650_);
v_inst_3582_ = v_a_3651_;
v___y_3583_ = v___y_3649_;
v___y_3584_ = v___y_3647_;
v___y_3585_ = v___y_3645_;
v___y_3586_ = v___y_3646_;
goto v___jp_3581_;
}
else
{
lean_object* v_a_3652_; uint8_t v___x_3653_; 
v_a_3652_ = lean_ctor_get(v___y_3650_, 0);
v___x_3653_ = l_Lean_Exception_isInterrupt(v_a_3652_);
if (v___x_3653_ == 0)
{
uint8_t v___x_3654_; 
lean_inc(v_a_3652_);
v___x_3654_ = l_Lean_Exception_isRuntime(v_a_3652_);
v___y_3612_ = v___y_3643_;
v___y_3613_ = v___y_3644_;
v___y_3614_ = v___y_3650_;
v___y_3615_ = v___y_3645_;
v___y_3616_ = v___y_3646_;
v___y_3617_ = v___y_3647_;
v___y_3618_ = v___y_3648_;
v___y_3619_ = v___y_3649_;
v___y_3620_ = v___x_3654_;
goto v___jp_3611_;
}
else
{
v___y_3612_ = v___y_3643_;
v___y_3613_ = v___y_3644_;
v___y_3614_ = v___y_3650_;
v___y_3615_ = v___y_3645_;
v___y_3616_ = v___y_3646_;
v___y_3617_ = v___y_3647_;
v___y_3618_ = v___y_3648_;
v___y_3619_ = v___y_3649_;
v___y_3620_ = v___x_3653_;
goto v___jp_3611_;
}
}
}
v___jp_3655_:
{
lean_object* v___x_3662_; 
lean_inc_ref(v_type_3567_);
v___x_3662_ = l_Lean_Meta_instantiateForall(v_type_3567_, v_xs_3572_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3662_) == 0)
{
switch(v_fixpointType_3568_)
{
case 0:
{
lean_object* v_a_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___f_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; 
lean_dec_ref(v___f_3570_);
lean_dec_ref(v___f_3569_);
v_a_3663_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3663_);
lean_dec_ref(v___x_3662_);
v___x_3664_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_3665_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__3);
lean_inc_ref(v_xs_3572_);
lean_inc(v_declName_3566_);
v___f_3666_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__2___boxed), 13, 5);
lean_closure_set(v___f_3666_, 0, v_declName_3566_);
lean_closure_set(v___f_3666_, 1, v_type_3567_);
lean_closure_set(v___f_3666_, 2, v_xs_3572_);
lean_closure_set(v___f_3666_, 3, v___x_3664_);
lean_closure_set(v___f_3666_, 4, v___x_3665_);
v___x_3667_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__5, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__5_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___closed__5);
v___x_3668_ = lean_unsigned_to_nat(1u);
v___x_3669_ = lean_mk_empty_array_with_capacity(v___x_3668_);
v___x_3670_ = lean_array_push(v___x_3669_, v_a_3663_);
v___x_3671_ = l_Lean_Meta_mkAppM(v___x_3667_, v___x_3670_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3671_) == 0)
{
lean_object* v_a_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v_a_3672_ = lean_ctor_get(v___x_3671_, 0);
lean_inc(v_a_3672_);
lean_dec_ref(v___x_3671_);
v___x_3673_ = lean_box(0);
v___x_3674_ = l_Lean_Meta_synthInstance(v_a_3672_, v___x_3673_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
v___y_3643_ = v___y_3657_;
v___y_3644_ = v___f_3666_;
v___y_3645_ = v___y_3660_;
v___y_3646_ = v___y_3661_;
v___y_3647_ = v___y_3659_;
v___y_3648_ = v___y_3656_;
v___y_3649_ = v___y_3658_;
v___y_3650_ = v___x_3674_;
goto v___jp_3642_;
}
else
{
v___y_3643_ = v___y_3657_;
v___y_3644_ = v___f_3666_;
v___y_3645_ = v___y_3660_;
v___y_3646_ = v___y_3661_;
v___y_3647_ = v___y_3659_;
v___y_3648_ = v___y_3656_;
v___y_3649_ = v___y_3658_;
v___y_3650_ = v___x_3671_;
goto v___jp_3642_;
}
}
case 1:
{
lean_object* v_a_3675_; lean_object* v___x_3676_; 
lean_dec_ref(v___f_3570_);
lean_dec_ref(v_type_3567_);
lean_dec(v_declName_3566_);
v_a_3675_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3675_);
lean_dec_ref(v___x_3662_);
v___x_3676_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg(v_a_3675_, v___f_3569_, v_isZero_3565_, v_isZero_3565_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
lean_inc(v_a_3677_);
lean_dec_ref(v___x_3676_);
v_inst_3582_ = v_a_3677_;
v___y_3583_ = v___y_3658_;
v___y_3584_ = v___y_3659_;
v___y_3585_ = v___y_3660_;
v___y_3586_ = v___y_3661_;
goto v___jp_3581_;
}
else
{
lean_dec_ref(v_xs_3572_);
return v___x_3676_;
}
}
default: 
{
lean_object* v_a_3678_; lean_object* v___x_3679_; 
lean_dec_ref(v___f_3569_);
lean_dec_ref(v_type_3567_);
lean_dec(v_declName_3566_);
v_a_3678_ = lean_ctor_get(v___x_3662_, 0);
lean_inc(v_a_3678_);
lean_dec_ref(v___x_3662_);
v___x_3679_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Elab_partialFixpoint_spec__3___redArg(v_a_3678_, v___f_3570_, v_isZero_3565_, v_isZero_3565_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_, v___y_3661_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v_a_3680_; 
v_a_3680_ = lean_ctor_get(v___x_3679_, 0);
lean_inc(v_a_3680_);
lean_dec_ref(v___x_3679_);
v_inst_3582_ = v_a_3680_;
v___y_3583_ = v___y_3658_;
v___y_3584_ = v___y_3659_;
v___y_3585_ = v___y_3660_;
v___y_3586_ = v___y_3661_;
goto v___jp_3581_;
}
else
{
lean_dec_ref(v_xs_3572_);
return v___x_3679_;
}
}
}
}
else
{
lean_dec_ref(v_xs_3572_);
lean_dec_ref(v___f_3570_);
lean_dec_ref(v___f_3569_);
lean_dec_ref(v_type_3567_);
lean_dec(v_declName_3566_);
return v___x_3662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___boxed(lean_object* v_isZero_3706_, lean_object* v_declName_3707_, lean_object* v_type_3708_, lean_object* v_fixpointType_3709_, lean_object* v___f_3710_, lean_object* v___f_3711_, lean_object* v_value_3712_, lean_object* v_xs_3713_, lean_object* v___body_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
uint8_t v_isZero_boxed_3722_; uint8_t v_fixpointType_boxed_3723_; lean_object* v_res_3724_; 
v_isZero_boxed_3722_ = lean_unbox(v_isZero_3706_);
v_fixpointType_boxed_3723_ = lean_unbox(v_fixpointType_3709_);
v_res_3724_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3(v_isZero_boxed_3722_, v_declName_3707_, v_type_3708_, v_fixpointType_boxed_3723_, v___f_3710_, v___f_3711_, v_value_3712_, v_xs_3713_, v___body_3714_, v___y_3715_, v___y_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec(v___y_3716_);
lean_dec_ref(v___y_3715_);
return v_res_3724_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___f_3725_; 
v___f_3725_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__0___boxed), 9, 0);
return v___f_3725_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___f_3726_; 
v___f_3726_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__1___boxed), 9, 0);
return v___f_3726_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg(lean_object* v_hints_3727_, lean_object* v_as_3728_, lean_object* v_i_3729_, lean_object* v_j_3730_, lean_object* v_bs_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_){
_start:
{
lean_object* v_zero_3739_; uint8_t v_isZero_3740_; 
v_zero_3739_ = lean_unsigned_to_nat(0u);
v_isZero_3740_ = lean_nat_dec_eq(v_i_3729_, v_zero_3739_);
if (v_isZero_3740_ == 1)
{
lean_object* v___x_3741_; 
lean_dec(v_j_3730_);
lean_dec(v_i_3729_);
v___x_3741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3741_, 0, v_bs_3731_);
return v___x_3741_;
}
else
{
lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v_ref_3744_; uint8_t v_fixpointType_3745_; lean_object* v___x_3746_; lean_object* v_declName_3747_; lean_object* v_type_3748_; lean_object* v_value_3749_; lean_object* v_fileName_3750_; lean_object* v_fileMap_3751_; lean_object* v_options_3752_; lean_object* v_currRecDepth_3753_; lean_object* v_maxRecDepth_3754_; lean_object* v_ref_3755_; lean_object* v_currNamespace_3756_; lean_object* v_openDecls_3757_; lean_object* v_initHeartbeats_3758_; lean_object* v_maxHeartbeats_3759_; lean_object* v_quotContext_3760_; lean_object* v_currMacroScope_3761_; uint8_t v_diag_3762_; lean_object* v_cancelTk_x3f_3763_; uint8_t v_suppressElabErrors_3764_; lean_object* v_inheritedTraceOptions_3765_; lean_object* v___f_3766_; lean_object* v___f_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___f_3770_; lean_object* v_ref_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3742_ = l_Lean_Elab_instInhabitedPartialFixpoint_default;
v___x_3743_ = lean_array_get_borrowed(v___x_3742_, v_hints_3727_, v_j_3730_);
v_ref_3744_ = lean_ctor_get(v___x_3743_, 0);
v_fixpointType_3745_ = lean_ctor_get_uint8(v___x_3743_, sizeof(void*)*2);
v___x_3746_ = lean_array_fget_borrowed(v_as_3728_, v_j_3730_);
v_declName_3747_ = lean_ctor_get(v___x_3746_, 3);
v_type_3748_ = lean_ctor_get(v___x_3746_, 6);
v_value_3749_ = lean_ctor_get(v___x_3746_, 7);
v_fileName_3750_ = lean_ctor_get(v___y_3736_, 0);
v_fileMap_3751_ = lean_ctor_get(v___y_3736_, 1);
v_options_3752_ = lean_ctor_get(v___y_3736_, 2);
v_currRecDepth_3753_ = lean_ctor_get(v___y_3736_, 3);
v_maxRecDepth_3754_ = lean_ctor_get(v___y_3736_, 4);
v_ref_3755_ = lean_ctor_get(v___y_3736_, 5);
v_currNamespace_3756_ = lean_ctor_get(v___y_3736_, 6);
v_openDecls_3757_ = lean_ctor_get(v___y_3736_, 7);
v_initHeartbeats_3758_ = lean_ctor_get(v___y_3736_, 8);
v_maxHeartbeats_3759_ = lean_ctor_get(v___y_3736_, 9);
v_quotContext_3760_ = lean_ctor_get(v___y_3736_, 10);
v_currMacroScope_3761_ = lean_ctor_get(v___y_3736_, 11);
v_diag_3762_ = lean_ctor_get_uint8(v___y_3736_, sizeof(void*)*14);
v_cancelTk_x3f_3763_ = lean_ctor_get(v___y_3736_, 12);
v_suppressElabErrors_3764_ = lean_ctor_get_uint8(v___y_3736_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3765_ = lean_ctor_get(v___y_3736_, 13);
v___f_3766_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__0);
v___f_3767_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___closed__1);
v___x_3768_ = lean_box(v_isZero_3740_);
v___x_3769_ = lean_box(v_fixpointType_3745_);
lean_inc_ref_n(v_value_3749_, 2);
lean_inc_ref(v_type_3748_);
lean_inc(v_declName_3747_);
v___f_3770_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___lam__3___boxed), 16, 7);
lean_closure_set(v___f_3770_, 0, v___x_3768_);
lean_closure_set(v___f_3770_, 1, v_declName_3747_);
lean_closure_set(v___f_3770_, 2, v_type_3748_);
lean_closure_set(v___f_3770_, 3, v___x_3769_);
lean_closure_set(v___f_3770_, 4, v___f_3766_);
lean_closure_set(v___f_3770_, 5, v___f_3767_);
lean_closure_set(v___f_3770_, 6, v_value_3749_);
v_ref_3771_ = l_Lean_replaceRef(v_ref_3744_, v_ref_3755_);
lean_inc_ref(v_inheritedTraceOptions_3765_);
lean_inc(v_cancelTk_x3f_3763_);
lean_inc(v_currMacroScope_3761_);
lean_inc(v_quotContext_3760_);
lean_inc(v_maxHeartbeats_3759_);
lean_inc(v_initHeartbeats_3758_);
lean_inc(v_openDecls_3757_);
lean_inc(v_currNamespace_3756_);
lean_inc(v_maxRecDepth_3754_);
lean_inc(v_currRecDepth_3753_);
lean_inc_ref(v_options_3752_);
lean_inc_ref(v_fileMap_3751_);
lean_inc_ref(v_fileName_3750_);
v___x_3772_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3772_, 0, v_fileName_3750_);
lean_ctor_set(v___x_3772_, 1, v_fileMap_3751_);
lean_ctor_set(v___x_3772_, 2, v_options_3752_);
lean_ctor_set(v___x_3772_, 3, v_currRecDepth_3753_);
lean_ctor_set(v___x_3772_, 4, v_maxRecDepth_3754_);
lean_ctor_set(v___x_3772_, 5, v_ref_3771_);
lean_ctor_set(v___x_3772_, 6, v_currNamespace_3756_);
lean_ctor_set(v___x_3772_, 7, v_openDecls_3757_);
lean_ctor_set(v___x_3772_, 8, v_initHeartbeats_3758_);
lean_ctor_set(v___x_3772_, 9, v_maxHeartbeats_3759_);
lean_ctor_set(v___x_3772_, 10, v_quotContext_3760_);
lean_ctor_set(v___x_3772_, 11, v_currMacroScope_3761_);
lean_ctor_set(v___x_3772_, 12, v_cancelTk_x3f_3763_);
lean_ctor_set(v___x_3772_, 13, v_inheritedTraceOptions_3765_);
lean_ctor_set_uint8(v___x_3772_, sizeof(void*)*14, v_diag_3762_);
lean_ctor_set_uint8(v___x_3772_, sizeof(void*)*14 + 1, v_suppressElabErrors_3764_);
v___x_3773_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_partialFixpoint_spec__5___redArg(v_value_3749_, v___f_3770_, v_isZero_3740_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_, v___x_3772_, v___y_3737_);
lean_dec_ref(v___x_3772_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v_a_3774_; lean_object* v_one_3775_; lean_object* v_n_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; 
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_a_3774_);
lean_dec_ref(v___x_3773_);
v_one_3775_ = lean_unsigned_to_nat(1u);
v_n_3776_ = lean_nat_sub(v_i_3729_, v_one_3775_);
lean_dec(v_i_3729_);
v___x_3777_ = lean_nat_add(v_j_3730_, v_one_3775_);
lean_dec(v_j_3730_);
v___x_3778_ = lean_array_push(v_bs_3731_, v_a_3774_);
v_i_3729_ = v_n_3776_;
v_j_3730_ = v___x_3777_;
v_bs_3731_ = v___x_3778_;
goto _start;
}
else
{
lean_object* v_a_3780_; lean_object* v___x_3782_; uint8_t v_isShared_3783_; uint8_t v_isSharedCheck_3787_; 
lean_dec_ref(v_bs_3731_);
lean_dec(v_j_3730_);
lean_dec(v_i_3729_);
v_a_3780_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3787_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3787_ == 0)
{
v___x_3782_ = v___x_3773_;
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
else
{
lean_inc(v_a_3780_);
lean_dec(v___x_3773_);
v___x_3782_ = lean_box(0);
v_isShared_3783_ = v_isSharedCheck_3787_;
goto v_resetjp_3781_;
}
v_resetjp_3781_:
{
lean_object* v___x_3785_; 
if (v_isShared_3783_ == 0)
{
v___x_3785_ = v___x_3782_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_a_3780_);
v___x_3785_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
return v___x_3785_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg___boxed(lean_object* v_hints_3788_, lean_object* v_as_3789_, lean_object* v_i_3790_, lean_object* v_j_3791_, lean_object* v_bs_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg(v_hints_3788_, v_as_3789_, v_i_3790_, v_j_3791_, v_bs_3792_, v___y_3793_, v___y_3794_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_);
lean_dec(v___y_3798_);
lean_dec_ref(v___y_3797_);
lean_dec(v___y_3796_);
lean_dec_ref(v___y_3795_);
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
lean_dec_ref(v_as_3789_);
lean_dec_ref(v_hints_3788_);
return v_res_3800_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27_spec__33(uint8_t v___x_3801_, lean_object* v_as_3802_, size_t v_i_3803_, size_t v_stop_3804_){
_start:
{
uint8_t v___x_3805_; 
v___x_3805_ = lean_usize_dec_eq(v_i_3803_, v_stop_3804_);
if (v___x_3805_ == 0)
{
lean_object* v___x_3806_; uint8_t v_fixpointType_3807_; uint8_t v___x_3808_; uint8_t v___y_3810_; uint8_t v___x_3814_; 
v___x_3806_ = lean_array_uget_borrowed(v_as_3802_, v_i_3803_);
v_fixpointType_3807_ = lean_ctor_get_uint8(v___x_3806_, sizeof(void*)*2);
v___x_3808_ = 1;
v___x_3814_ = l_Lean_Elab_isLatticeTheoretic(v_fixpointType_3807_);
if (v___x_3814_ == 0)
{
v___y_3810_ = v___x_3801_;
goto v___jp_3809_;
}
else
{
v___y_3810_ = v___x_3805_;
goto v___jp_3809_;
}
v___jp_3809_:
{
if (v___y_3810_ == 0)
{
size_t v___x_3811_; size_t v___x_3812_; 
v___x_3811_ = ((size_t)1ULL);
v___x_3812_ = lean_usize_add(v_i_3803_, v___x_3811_);
v_i_3803_ = v___x_3812_;
goto _start;
}
else
{
return v___x_3808_;
}
}
}
else
{
uint8_t v___x_3815_; 
v___x_3815_ = 0;
return v___x_3815_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27_spec__33___boxed(lean_object* v___x_3816_, lean_object* v_as_3817_, lean_object* v_i_3818_, lean_object* v_stop_3819_){
_start:
{
uint8_t v___x_59804__boxed_3820_; size_t v_i_boxed_3821_; size_t v_stop_boxed_3822_; uint8_t v_res_3823_; lean_object* v_r_3824_; 
v___x_59804__boxed_3820_ = lean_unbox(v___x_3816_);
v_i_boxed_3821_ = lean_unbox_usize(v_i_3818_);
lean_dec(v_i_3818_);
v_stop_boxed_3822_ = lean_unbox_usize(v_stop_3819_);
lean_dec(v_stop_3819_);
v_res_3823_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27_spec__33(v___x_59804__boxed_3820_, v_as_3817_, v_i_boxed_3821_, v_stop_boxed_3822_);
lean_dec_ref(v_as_3817_);
v_r_3824_ = lean_box(v_res_3823_);
return v_r_3824_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27(uint8_t v___x_3825_, lean_object* v_as_3826_, size_t v_i_3827_, size_t v_stop_3828_){
_start:
{
uint8_t v___x_3829_; 
v___x_3829_ = lean_usize_dec_eq(v_i_3827_, v_stop_3828_);
if (v___x_3829_ == 0)
{
lean_object* v___x_3830_; uint8_t v_fixpointType_3831_; uint8_t v___x_3832_; uint8_t v___y_3834_; uint8_t v___x_3838_; 
v___x_3830_ = lean_array_uget_borrowed(v_as_3826_, v_i_3827_);
v_fixpointType_3831_ = lean_ctor_get_uint8(v___x_3830_, sizeof(void*)*2);
v___x_3832_ = 1;
v___x_3838_ = l_Lean_Elab_isLatticeTheoretic(v_fixpointType_3831_);
if (v___x_3838_ == 0)
{
v___y_3834_ = v___x_3825_;
goto v___jp_3833_;
}
else
{
v___y_3834_ = v___x_3829_;
goto v___jp_3833_;
}
v___jp_3833_:
{
if (v___y_3834_ == 0)
{
size_t v___x_3835_; size_t v___x_3836_; uint8_t v___x_3837_; 
v___x_3835_ = ((size_t)1ULL);
v___x_3836_ = lean_usize_add(v_i_3827_, v___x_3835_);
v___x_3837_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27_spec__33(v___x_3825_, v_as_3826_, v___x_3836_, v_stop_3828_);
return v___x_3837_;
}
else
{
return v___x_3832_;
}
}
}
else
{
uint8_t v___x_3839_; 
v___x_3839_ = 0;
return v___x_3839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27___boxed(lean_object* v___x_3840_, lean_object* v_as_3841_, lean_object* v_i_3842_, lean_object* v_stop_3843_){
_start:
{
uint8_t v___x_59827__boxed_3844_; size_t v_i_boxed_3845_; size_t v_stop_boxed_3846_; uint8_t v_res_3847_; lean_object* v_r_3848_; 
v___x_59827__boxed_3844_ = lean_unbox(v___x_3840_);
v_i_boxed_3845_ = lean_unbox_usize(v_i_3842_);
lean_dec(v_i_3842_);
v_stop_boxed_3846_ = lean_unbox_usize(v_stop_3843_);
lean_dec(v_stop_3843_);
v_res_3847_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27(v___x_59827__boxed_3844_, v_as_3841_, v_i_boxed_3845_, v_stop_boxed_3846_);
lean_dec_ref(v_as_3841_);
v_r_3848_ = lean_box(v_res_3847_);
return v_r_3848_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___closed__0(void){
_start:
{
lean_object* v___x_3849_; 
v___x_3849_ = lean_mk_string_unchecked("assertion violation: preDefs.size = hints.size\n  -- We check if any fixpoints were defined lattice-theoretically\n  ", 115, 115);
return v___x_3849_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___closed__1(void){
_start:
{
lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; 
v___x_3850_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___closed__0, &l_Lean_Elab_partialFixpoint___closed__0_once, _init_l_Lean_Elab_partialFixpoint___closed__0);
v___x_3851_ = lean_unsigned_to_nat(2u);
v___x_3852_ = lean_unsigned_to_nat(82u);
v___x_3853_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7);
v___x_3854_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0);
v___x_3855_ = l_mkPanicMessageWithDecl(v___x_3854_, v___x_3853_, v___x_3852_, v___x_3851_, v___x_3850_);
return v___x_3855_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___closed__2(void){
_start:
{
lean_object* v___x_3856_; 
v___x_3856_ = lean_mk_string_unchecked("assertion violation: hints.all fun x => isLatticeTheoretic x.fixpointType\n\n  -- For every function of type `∀ x y, r x y`, an CCPO instance\n  -- ∀ x y, CCPO (r x y), but crucially constructed using `instCCPOPi`\n  ", 217, 213);
return v___x_3856_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___closed__3(void){
_start:
{
lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; lean_object* v___x_3862_; 
v___x_3857_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___closed__2, &l_Lean_Elab_partialFixpoint___closed__2_once, _init_l_Lean_Elab_partialFixpoint___closed__2);
v___x_3858_ = lean_unsigned_to_nat(4u);
v___x_3859_ = lean_unsigned_to_nat(86u);
v___x_3860_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___lam__0___closed__7);
v___x_3861_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___closed__0);
v___x_3862_ = l_mkPanicMessageWithDecl(v___x_3861_, v___x_3860_, v___x_3859_, v___x_3858_, v___x_3857_);
return v___x_3862_;
}
}
static lean_object* _init_l_Lean_Elab_partialFixpoint___boxed__const__1(void){
_start:
{
size_t v___x_3863_; lean_object* v___x_3864_; 
v___x_3863_ = ((size_t)0ULL);
v___x_3864_ = lean_box_usize(v___x_3863_);
return v___x_3864_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint(lean_object* v_docCtx_3865_, lean_object* v_preDefs_3866_, lean_object* v_a_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_){
_start:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v_hints_3876_; lean_object* v___x_3877_; uint8_t v___x_3878_; lean_object* v___y_3880_; lean_object* v___y_3881_; lean_object* v___y_3882_; lean_object* v___y_3883_; lean_object* v___y_3884_; lean_object* v___y_3885_; 
v___x_3874_ = lean_unsigned_to_nat(0u);
v___x_3875_ = lean_array_get_size(v_preDefs_3866_);
v_hints_3876_ = l_Array_filterMapM___at___00Lean_Elab_partialFixpoint_spec__0(v_preDefs_3866_, v___x_3874_, v___x_3875_);
v___x_3877_ = lean_array_get_size(v_hints_3876_);
v___x_3878_ = lean_nat_dec_eq(v___x_3875_, v___x_3877_);
if (v___x_3878_ == 0)
{
lean_object* v___x_3921_; lean_object* v___x_3922_; 
lean_dec_ref(v_hints_3876_);
lean_dec_ref(v_preDefs_3866_);
lean_dec_ref(v_docCtx_3865_);
v___x_3921_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___closed__1, &l_Lean_Elab_partialFixpoint___closed__1_once, _init_l_Lean_Elab_partialFixpoint___closed__1);
v___x_3922_ = l_panic___at___00Lean_Elab_partialFixpoint_spec__25(v___x_3921_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_);
return v___x_3922_;
}
else
{
uint8_t v___x_3923_; 
v___x_3923_ = lean_nat_dec_lt(v___x_3874_, v___x_3877_);
if (v___x_3923_ == 0)
{
v___y_3880_ = v_a_3867_;
v___y_3881_ = v_a_3868_;
v___y_3882_ = v_a_3869_;
v___y_3883_ = v_a_3870_;
v___y_3884_ = v_a_3871_;
v___y_3885_ = v_a_3872_;
goto v___jp_3879_;
}
else
{
if (v___x_3923_ == 0)
{
v___y_3880_ = v_a_3867_;
v___y_3881_ = v_a_3868_;
v___y_3882_ = v_a_3869_;
v___y_3883_ = v_a_3870_;
v___y_3884_ = v_a_3871_;
v___y_3885_ = v_a_3872_;
goto v___jp_3879_;
}
else
{
size_t v___x_3924_; size_t v___x_3925_; uint8_t v___x_3926_; 
v___x_3924_ = ((size_t)0ULL);
v___x_3925_ = lean_usize_of_nat(v___x_3877_);
v___x_3926_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__26(v_hints_3876_, v___x_3924_, v___x_3925_);
if (v___x_3926_ == 0)
{
v___y_3880_ = v_a_3867_;
v___y_3881_ = v_a_3868_;
v___y_3882_ = v_a_3869_;
v___y_3883_ = v_a_3870_;
v___y_3884_ = v_a_3871_;
v___y_3885_ = v_a_3872_;
goto v___jp_3879_;
}
else
{
if (v___x_3923_ == 0)
{
v___y_3880_ = v_a_3867_;
v___y_3881_ = v_a_3868_;
v___y_3882_ = v_a_3869_;
v___y_3883_ = v_a_3870_;
v___y_3884_ = v_a_3871_;
v___y_3885_ = v_a_3872_;
goto v___jp_3879_;
}
else
{
if (v___x_3923_ == 0)
{
v___y_3880_ = v_a_3867_;
v___y_3881_ = v_a_3868_;
v___y_3882_ = v_a_3869_;
v___y_3883_ = v_a_3870_;
v___y_3884_ = v_a_3871_;
v___y_3885_ = v_a_3872_;
goto v___jp_3879_;
}
else
{
uint8_t v___x_3927_; 
v___x_3927_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_partialFixpoint_spec__27(v___x_3926_, v_hints_3876_, v___x_3924_, v___x_3925_);
if (v___x_3927_ == 0)
{
v___y_3880_ = v_a_3867_;
v___y_3881_ = v_a_3868_;
v___y_3882_ = v_a_3869_;
v___y_3883_ = v_a_3870_;
v___y_3884_ = v_a_3871_;
v___y_3885_ = v_a_3872_;
goto v___jp_3879_;
}
else
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
lean_dec_ref(v_hints_3876_);
lean_dec_ref(v_preDefs_3866_);
lean_dec_ref(v_docCtx_3865_);
v___x_3928_ = lean_obj_once(&l_Lean_Elab_partialFixpoint___closed__3, &l_Lean_Elab_partialFixpoint___closed__3_once, _init_l_Lean_Elab_partialFixpoint___closed__3);
v___x_3929_ = l_panic___at___00Lean_Elab_partialFixpoint_spec__25(v___x_3928_, v_a_3867_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_);
return v___x_3929_;
}
}
}
}
}
}
}
v___jp_3879_:
{
lean_object* v___x_3886_; lean_object* v___x_3887_; 
v___x_3886_ = lean_mk_empty_array_with_capacity(v___x_3875_);
lean_inc_ref(v___x_3886_);
v___x_3887_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg(v_hints_3876_, v_preDefs_3866_, v___x_3875_, v___x_3874_, v___x_3886_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3887_) == 0)
{
lean_object* v_a_3888_; size_t v_sz_3889_; size_t v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v_a_3888_ = lean_ctor_get(v___x_3887_, 0);
lean_inc(v_a_3888_);
lean_dec_ref(v___x_3887_);
v_sz_3889_ = lean_array_size(v_preDefs_3866_);
v___x_3890_ = ((size_t)0ULL);
lean_inc_ref_n(v_preDefs_3866_, 2);
v___x_3891_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__7(v_sz_3889_, v___x_3890_, v_preDefs_3866_);
v___x_3892_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_3866_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
if (lean_obj_tag(v___x_3892_) == 0)
{
lean_object* v_a_3893_; lean_object* v_perms_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v_type_3897_; lean_object* v___x_3898_; lean_object* v___x_3899_; lean_object* v___x_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; lean_object* v___f_3903_; lean_object* v___x_3904_; 
v_a_3893_ = lean_ctor_get(v___x_3892_, 0);
lean_inc(v_a_3893_);
lean_dec_ref(v___x_3892_);
v_perms_3894_ = lean_ctor_get(v_a_3893_, 1);
lean_inc_ref(v_perms_3894_);
v___x_3895_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_3896_ = lean_array_get(v___x_3895_, v_preDefs_3866_, v___x_3874_);
v_type_3897_ = lean_ctor_get(v___x_3896_, 6);
lean_inc_ref(v_type_3897_);
v___x_3898_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_replaceRecApps___lam__0___closed__1);
v___x_3899_ = lean_array_get(v___x_3898_, v_perms_3894_, v___x_3874_);
v___x_3900_ = l_Lean_Elab_partialFixpoint___boxed__const__1;
v___x_3901_ = lean_box(v___x_3878_);
v___x_3902_ = lean_box_usize(v_sz_3889_);
v___f_3903_ = lean_alloc_closure((void*)(l_Lean_Elab_partialFixpoint___lam__0___boxed), 22, 14);
lean_closure_set(v___f_3903_, 0, v_a_3888_);
lean_closure_set(v___f_3903_, 1, v_perms_3894_);
lean_closure_set(v___f_3903_, 2, v___x_3874_);
lean_closure_set(v___f_3903_, 3, v_preDefs_3866_);
lean_closure_set(v___f_3903_, 4, v___x_3875_);
lean_closure_set(v___f_3903_, 5, v___x_3886_);
lean_closure_set(v___f_3903_, 6, v___x_3900_);
lean_closure_set(v___f_3903_, 7, v___x_3891_);
lean_closure_set(v___f_3903_, 8, v_a_3893_);
lean_closure_set(v___f_3903_, 9, v___x_3901_);
lean_closure_set(v___f_3903_, 10, v_hints_3876_);
lean_closure_set(v___f_3903_, 11, v___x_3896_);
lean_closure_set(v___f_3903_, 12, v_docCtx_3865_);
lean_closure_set(v___f_3903_, 13, v___x_3902_);
v___x_3904_ = l_Lean_Elab_FixedParamPerm_forallTelescope___at___00Lean_Elab_partialFixpoint_spec__24___redArg(v___x_3899_, v_type_3897_, v___f_3903_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_);
return v___x_3904_;
}
else
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3912_; 
lean_dec_ref(v___x_3891_);
lean_dec(v_a_3888_);
lean_dec_ref(v___x_3886_);
lean_dec_ref(v_hints_3876_);
lean_dec_ref(v_preDefs_3866_);
lean_dec_ref(v_docCtx_3865_);
v_a_3905_ = lean_ctor_get(v___x_3892_, 0);
v_isSharedCheck_3912_ = !lean_is_exclusive(v___x_3892_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3907_ = v___x_3892_;
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3892_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3912_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3910_; 
if (v_isShared_3908_ == 0)
{
v___x_3910_ = v___x_3907_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v_a_3905_);
v___x_3910_ = v_reuseFailAlloc_3911_;
goto v_reusejp_3909_;
}
v_reusejp_3909_:
{
return v___x_3910_;
}
}
}
}
else
{
lean_object* v_a_3913_; lean_object* v___x_3915_; uint8_t v_isShared_3916_; uint8_t v_isSharedCheck_3920_; 
lean_dec_ref(v___x_3886_);
lean_dec_ref(v_hints_3876_);
lean_dec_ref(v_preDefs_3866_);
lean_dec_ref(v_docCtx_3865_);
v_a_3913_ = lean_ctor_get(v___x_3887_, 0);
v_isSharedCheck_3920_ = !lean_is_exclusive(v___x_3887_);
if (v_isSharedCheck_3920_ == 0)
{
v___x_3915_ = v___x_3887_;
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
else
{
lean_inc(v_a_3913_);
lean_dec(v___x_3887_);
v___x_3915_ = lean_box(0);
v_isShared_3916_ = v_isSharedCheck_3920_;
goto v_resetjp_3914_;
}
v_resetjp_3914_:
{
lean_object* v___x_3918_; 
if (v_isShared_3916_ == 0)
{
v___x_3918_ = v___x_3915_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3919_; 
v_reuseFailAlloc_3919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3919_, 0, v_a_3913_);
v___x_3918_ = v_reuseFailAlloc_3919_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
return v___x_3918_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_partialFixpoint___boxed(lean_object* v_docCtx_3930_, lean_object* v_preDefs_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_){
_start:
{
lean_object* v_res_3939_; 
v_res_3939_ = l_Lean_Elab_partialFixpoint(v_docCtx_3930_, v_preDefs_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_, v_a_3936_, v_a_3937_);
lean_dec(v_a_3937_);
lean_dec_ref(v_a_3936_);
lean_dec(v_a_3935_);
lean_dec_ref(v_a_3934_);
lean_dec(v_a_3933_);
lean_dec_ref(v_a_3932_);
return v_res_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1(lean_object* v_00_u03b1_3940_, lean_object* v_msg_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v___x_3949_; 
v___x_3949_ = l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___redArg(v_msg_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_);
return v___x_3949_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1___boxed(lean_object* v_00_u03b1_3950_, lean_object* v_msg_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_){
_start:
{
lean_object* v_res_3959_; 
v_res_3959_ = l_Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1(v_00_u03b1_3950_, v_msg_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_, v___y_3957_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
lean_dec(v___y_3955_);
lean_dec_ref(v___y_3954_);
lean_dec(v___y_3953_);
lean_dec_ref(v___y_3952_);
return v_res_3959_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2(lean_object* v_cls_3960_, lean_object* v_msg_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_){
_start:
{
lean_object* v___x_3969_; 
v___x_3969_ = l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___redArg(v_cls_3960_, v_msg_3961_, v___y_3964_, v___y_3965_, v___y_3966_, v___y_3967_);
return v___x_3969_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2___boxed(lean_object* v_cls_3970_, lean_object* v_msg_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_){
_start:
{
lean_object* v_res_3979_; 
v_res_3979_ = l_Lean_addTrace___at___00Lean_Elab_partialFixpoint_spec__2(v_cls_3970_, v_msg_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_, v___y_3977_);
lean_dec(v___y_3977_);
lean_dec_ref(v___y_3976_);
lean_dec(v___y_3975_);
lean_dec_ref(v___y_3974_);
lean_dec(v___y_3973_);
lean_dec_ref(v___y_3972_);
return v_res_3979_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6(lean_object* v_hints_3980_, lean_object* v_as_3981_, lean_object* v_i_3982_, lean_object* v_j_3983_, lean_object* v_inv_3984_, lean_object* v_bs_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_){
_start:
{
lean_object* v___x_3993_; 
v___x_3993_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___redArg(v_hints_3980_, v_as_3981_, v_i_3982_, v_j_3983_, v_bs_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
return v___x_3993_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6___boxed(lean_object* v_hints_3994_, lean_object* v_as_3995_, lean_object* v_i_3996_, lean_object* v_j_3997_, lean_object* v_inv_3998_, lean_object* v_bs_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_){
_start:
{
lean_object* v_res_4007_; 
v_res_4007_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__6(v_hints_3994_, v_as_3995_, v_i_3996_, v_j_3997_, v_inv_3998_, v_bs_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_, v___y_4005_);
lean_dec(v___y_4005_);
lean_dec_ref(v___y_4004_);
lean_dec(v___y_4003_);
lean_dec_ref(v___y_4002_);
lean_dec(v___y_4001_);
lean_dec_ref(v___y_4000_);
lean_dec_ref(v_as_3995_);
lean_dec_ref(v_hints_3994_);
return v_res_4007_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10(lean_object* v___x_4008_, lean_object* v_fixedArgs_4009_, lean_object* v_as_4010_, lean_object* v_i_4011_, lean_object* v_j_4012_, lean_object* v_inv_4013_, lean_object* v_bs_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_){
_start:
{
lean_object* v___x_4022_; 
v___x_4022_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___redArg(v___x_4008_, v_fixedArgs_4009_, v_as_4010_, v_i_4011_, v_j_4012_, v_bs_4014_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_);
return v___x_4022_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10___boxed(lean_object* v___x_4023_, lean_object* v_fixedArgs_4024_, lean_object* v_as_4025_, lean_object* v_i_4026_, lean_object* v_j_4027_, lean_object* v_inv_4028_, lean_object* v_bs_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v_res_4037_; 
v_res_4037_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__10(v___x_4023_, v_fixedArgs_4024_, v_as_4025_, v_i_4026_, v_j_4027_, v_inv_4028_, v_bs_4029_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_);
lean_dec(v___y_4035_);
lean_dec_ref(v___y_4034_);
lean_dec(v___y_4033_);
lean_dec_ref(v___y_4032_);
lean_dec(v___y_4031_);
lean_dec_ref(v___y_4030_);
lean_dec_ref(v_as_4025_);
lean_dec_ref(v___x_4023_);
return v_res_4037_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11(lean_object* v___x_4038_, lean_object* v_fixedArgs_4039_, lean_object* v_as_4040_, lean_object* v_i_4041_, lean_object* v_j_4042_, lean_object* v_inv_4043_, lean_object* v_bs_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v___x_4052_; 
v___x_4052_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___redArg(v___x_4038_, v_fixedArgs_4039_, v_as_4040_, v_i_4041_, v_j_4042_, v_bs_4044_, v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_);
return v___x_4052_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11___boxed(lean_object* v___x_4053_, lean_object* v_fixedArgs_4054_, lean_object* v_as_4055_, lean_object* v_i_4056_, lean_object* v_j_4057_, lean_object* v_inv_4058_, lean_object* v_bs_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__11(v___x_4053_, v_fixedArgs_4054_, v_as_4055_, v_i_4056_, v_j_4057_, v_inv_4058_, v_bs_4059_, v___y_4060_, v___y_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_);
lean_dec(v___y_4065_);
lean_dec_ref(v___y_4064_);
lean_dec(v___y_4063_);
lean_dec_ref(v___y_4062_);
lean_dec(v___y_4061_);
lean_dec_ref(v___y_4060_);
lean_dec_ref(v_as_4055_);
lean_dec_ref(v___x_4053_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13(lean_object* v_as_4068_, size_t v_i_4069_, size_t v_stop_4070_, lean_object* v_b_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v___x_4079_; 
v___x_4079_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___redArg(v_as_4068_, v_i_4069_, v_stop_4070_, v_b_4071_, v___y_4076_, v___y_4077_);
return v___x_4079_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13___boxed(lean_object* v_as_4080_, lean_object* v_i_4081_, lean_object* v_stop_4082_, lean_object* v_b_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_){
_start:
{
size_t v_i_boxed_4091_; size_t v_stop_boxed_4092_; lean_object* v_res_4093_; 
v_i_boxed_4091_ = lean_unbox_usize(v_i_4081_);
lean_dec(v_i_4081_);
v_stop_boxed_4092_ = lean_unbox_usize(v_stop_4082_);
lean_dec(v_stop_4082_);
v_res_4093_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_partialFixpoint_spec__13(v_as_4080_, v_i_boxed_4091_, v_stop_boxed_4092_, v_b_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_);
lean_dec(v___y_4089_);
lean_dec_ref(v___y_4088_);
lean_dec(v___y_4087_);
lean_dec_ref(v___y_4086_);
lean_dec(v___y_4085_);
lean_dec_ref(v___y_4084_);
lean_dec_ref(v_as_4080_);
return v_res_4093_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16(lean_object* v_env_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_){
_start:
{
lean_object* v___x_4102_; 
v___x_4102_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___redArg(v_env_4094_, v___y_4098_, v___y_4100_);
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16___boxed(lean_object* v_env_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_){
_start:
{
lean_object* v_res_4111_; 
v_res_4111_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14_spec__16(v_env_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
lean_dec(v___y_4109_);
lean_dec_ref(v___y_4108_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
return v_res_4111_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14(lean_object* v_00_u03b1_4112_, lean_object* v_env_4113_, lean_object* v_x_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_){
_start:
{
lean_object* v___x_4122_; 
v___x_4122_ = l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___redArg(v_env_4113_, v_x_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_);
return v___x_4122_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14___boxed(lean_object* v_00_u03b1_4123_, lean_object* v_env_4124_, lean_object* v_x_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_){
_start:
{
lean_object* v_res_4133_; 
v_res_4133_ = l_Lean_withEnv___at___00Lean_Elab_partialFixpoint_spec__14(v_00_u03b1_4123_, v_env_4124_, v_x_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_);
lean_dec(v___y_4131_);
lean_dec_ref(v___y_4130_);
lean_dec(v___y_4129_);
lean_dec_ref(v___y_4128_);
lean_dec(v___y_4127_);
lean_dec_ref(v___y_4126_);
return v_res_4133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18(lean_object* v_00_u03b1_4134_, lean_object* v_name_4135_, uint8_t v_bi_4136_, lean_object* v_type_4137_, lean_object* v_k_4138_, uint8_t v_kind_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_){
_start:
{
lean_object* v___x_4147_; 
v___x_4147_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___redArg(v_name_4135_, v_bi_4136_, v_type_4137_, v_k_4138_, v_kind_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_, v___y_4144_, v___y_4145_);
return v___x_4147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18___boxed(lean_object* v_00_u03b1_4148_, lean_object* v_name_4149_, lean_object* v_bi_4150_, lean_object* v_type_4151_, lean_object* v_k_4152_, lean_object* v_kind_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_){
_start:
{
uint8_t v_bi_boxed_4161_; uint8_t v_kind_boxed_4162_; lean_object* v_res_4163_; 
v_bi_boxed_4161_ = lean_unbox(v_bi_4150_);
v_kind_boxed_4162_ = lean_unbox(v_kind_4153_);
v_res_4163_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15_spec__18(v_00_u03b1_4148_, v_name_4149_, v_bi_boxed_4161_, v_type_4151_, v_k_4152_, v_kind_boxed_4162_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_);
lean_dec(v___y_4159_);
lean_dec_ref(v___y_4158_);
lean_dec(v___y_4157_);
lean_dec_ref(v___y_4156_);
lean_dec(v___y_4155_);
lean_dec_ref(v___y_4154_);
return v_res_4163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15(lean_object* v_00_u03b1_4164_, lean_object* v_name_4165_, lean_object* v_type_4166_, lean_object* v_k_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
lean_object* v___x_4175_; 
v___x_4175_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___redArg(v_name_4165_, v_type_4166_, v_k_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_, v___y_4173_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15___boxed(lean_object* v_00_u03b1_4176_, lean_object* v_name_4177_, lean_object* v_type_4178_, lean_object* v_k_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_){
_start:
{
lean_object* v_res_4187_; 
v_res_4187_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_partialFixpoint_spec__15(v_00_u03b1_4176_, v_name_4177_, v_type_4178_, v_k_4179_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_);
lean_dec(v___y_4185_);
lean_dec_ref(v___y_4184_);
lean_dec(v___y_4183_);
lean_dec_ref(v___y_4182_);
lean_dec(v___y_4181_);
lean_dec_ref(v___y_4180_);
return v_res_4187_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21(lean_object* v_00_u03b1_4188_, lean_object* v_x_4189_, uint8_t v_isExporting_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v___x_4198_; 
v___x_4198_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___redArg(v_x_4189_, v_isExporting_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_);
return v___x_4198_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21___boxed(lean_object* v_00_u03b1_4199_, lean_object* v_x_4200_, lean_object* v_isExporting_4201_, lean_object* v___y_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_){
_start:
{
uint8_t v_isExporting_boxed_4209_; lean_object* v_res_4210_; 
v_isExporting_boxed_4209_ = lean_unbox(v_isExporting_4201_);
v_res_4210_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17_spec__21(v_00_u03b1_4199_, v_x_4200_, v_isExporting_boxed_4209_, v___y_4202_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_, v___y_4207_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec(v___y_4205_);
lean_dec_ref(v___y_4204_);
lean_dec(v___y_4203_);
lean_dec_ref(v___y_4202_);
return v_res_4210_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17(lean_object* v_00_u03b1_4211_, lean_object* v_x_4212_, uint8_t v_when_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_){
_start:
{
lean_object* v___x_4221_; 
v___x_4221_ = l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___redArg(v_x_4212_, v_when_4213_, v___y_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_);
return v___x_4221_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17___boxed(lean_object* v_00_u03b1_4222_, lean_object* v_x_4223_, lean_object* v_when_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_){
_start:
{
uint8_t v_when_boxed_4232_; lean_object* v_res_4233_; 
v_when_boxed_4232_ = lean_unbox(v_when_4224_);
v_res_4233_ = l_Lean_withoutExporting___at___00Lean_Elab_partialFixpoint_spec__17(v_00_u03b1_4222_, v_x_4223_, v_when_boxed_4232_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_);
lean_dec(v___y_4230_);
lean_dec_ref(v___y_4229_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
return v_res_4233_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21(lean_object* v___x_4234_, lean_object* v___x_4235_, lean_object* v___y_4236_, lean_object* v___x_4237_, lean_object* v_a_4238_, lean_object* v_as_4239_, lean_object* v_i_4240_, lean_object* v_j_4241_, lean_object* v_inv_4242_, lean_object* v_bs_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v___x_4251_; 
v___x_4251_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___redArg(v___x_4234_, v___x_4235_, v___y_4236_, v___x_4237_, v_a_4238_, v_as_4239_, v_i_4240_, v_j_4241_, v_bs_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_, v___y_4248_, v___y_4249_);
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21___boxed(lean_object** _args){
lean_object* v___x_4252_ = _args[0];
lean_object* v___x_4253_ = _args[1];
lean_object* v___y_4254_ = _args[2];
lean_object* v___x_4255_ = _args[3];
lean_object* v_a_4256_ = _args[4];
lean_object* v_as_4257_ = _args[5];
lean_object* v_i_4258_ = _args[6];
lean_object* v_j_4259_ = _args[7];
lean_object* v_inv_4260_ = _args[8];
lean_object* v_bs_4261_ = _args[9];
lean_object* v___y_4262_ = _args[10];
lean_object* v___y_4263_ = _args[11];
lean_object* v___y_4264_ = _args[12];
lean_object* v___y_4265_ = _args[13];
lean_object* v___y_4266_ = _args[14];
lean_object* v___y_4267_ = _args[15];
lean_object* v___y_4268_ = _args[16];
_start:
{
lean_object* v_res_4269_; 
v_res_4269_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__21(v___x_4252_, v___x_4253_, v___y_4254_, v___x_4255_, v_a_4256_, v_as_4257_, v_i_4258_, v_j_4259_, v_inv_4260_, v_bs_4261_, v___y_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_, v___y_4267_);
lean_dec(v___y_4267_);
lean_dec_ref(v___y_4266_);
lean_dec(v___y_4265_);
lean_dec_ref(v___y_4264_);
lean_dec(v___y_4263_);
lean_dec_ref(v___y_4262_);
lean_dec_ref(v_as_4257_);
lean_dec_ref(v___x_4252_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22(size_t v_sz_4270_, size_t v_i_4271_, lean_object* v_bs_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_){
_start:
{
lean_object* v___x_4280_; 
v___x_4280_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___redArg(v_sz_4270_, v_i_4271_, v_bs_4272_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_);
return v___x_4280_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22___boxed(lean_object* v_sz_4281_, lean_object* v_i_4282_, lean_object* v_bs_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_, lean_object* v___y_4286_, lean_object* v___y_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_){
_start:
{
size_t v_sz_boxed_4291_; size_t v_i_boxed_4292_; lean_object* v_res_4293_; 
v_sz_boxed_4291_ = lean_unbox_usize(v_sz_4281_);
lean_dec(v_sz_4281_);
v_i_boxed_4292_ = lean_unbox_usize(v_i_4282_);
lean_dec(v_i_4282_);
v_res_4293_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_partialFixpoint_spec__22(v_sz_boxed_4291_, v_i_boxed_4292_, v_bs_4283_, v___y_4284_, v___y_4285_, v___y_4286_, v___y_4287_, v___y_4288_, v___y_4289_);
lean_dec(v___y_4289_);
lean_dec_ref(v___y_4288_);
lean_dec(v___y_4287_);
lean_dec_ref(v___y_4286_);
lean_dec(v___y_4285_);
lean_dec_ref(v___y_4284_);
return v_res_4293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2(lean_object* v_msgData_4294_, lean_object* v_macroStack_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_){
_start:
{
lean_object* v___x_4303_; 
v___x_4303_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___redArg(v_msgData_4294_, v_macroStack_4295_, v___y_4300_);
return v___x_4303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2___boxed(lean_object* v_msgData_4304_, lean_object* v_macroStack_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
lean_object* v_res_4313_; 
v_res_4313_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_partialFixpoint_spec__1_spec__2(v_msgData_4304_, v_macroStack_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
lean_dec(v___y_4311_);
lean_dec_ref(v___y_4310_);
lean_dec(v___y_4309_);
lean_dec_ref(v___y_4308_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
return v_res_4313_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4314_; 
v___x_4314_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_4314_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4315_; lean_object* v___x_4316_; lean_object* v___x_4317_; 
v___x_4315_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4316_ = lean_box(0);
v___x_4317_ = l_Lean_Name_str___override(v___x_4316_, v___x_4315_);
return v___x_4317_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; 
v___x_4318_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_4319_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4320_ = l_Lean_Name_str___override(v___x_4319_, v___x_4318_);
return v___x_4320_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4321_; lean_object* v___x_4322_; lean_object* v___x_4323_; 
v___x_4321_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4);
v___x_4322_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4323_ = l_Lean_Name_str___override(v___x_4322_, v___x_4321_);
return v___x_4323_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4324_; 
v___x_4324_ = lean_mk_string_unchecked("PreDefinition", 13, 13);
return v___x_4324_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; lean_object* v___x_4327_; 
v___x_4325_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4326_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4327_ = l_Lean_Name_str___override(v___x_4326_, v___x_4325_);
return v___x_4327_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4328_; 
v___x_4328_ = lean_mk_string_unchecked("PartialFixpoint", 15, 15);
return v___x_4328_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4329_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4330_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4331_ = l_Lean_Name_str___override(v___x_4330_, v___x_4329_);
return v___x_4331_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4332_; 
v___x_4332_ = lean_mk_string_unchecked("Main", 4, 4);
return v___x_4332_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; 
v___x_4333_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4334_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4335_ = l_Lean_Name_str___override(v___x_4334_, v___x_4333_);
return v___x_4335_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; 
v___x_4336_ = lean_unsigned_to_nat(0u);
v___x_4337_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4338_ = l_Lean_Name_num___override(v___x_4337_, v___x_4336_);
return v___x_4338_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4339_; 
v___x_4339_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_4339_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v___x_4340_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4341_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4342_ = l_Lean_Name_str___override(v___x_4341_, v___x_4340_);
return v___x_4342_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4343_; 
v___x_4343_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_4343_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; 
v___x_4344_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4345_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4346_ = l_Lean_Name_str___override(v___x_4345_, v___x_4344_);
return v___x_4346_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; 
v___x_4347_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__Lean_Elab_mkMonoPProd___closed__2);
v___x_4348_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4349_ = l_Lean_Name_str___override(v___x_4348_, v___x_4347_);
return v___x_4349_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4350_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__4);
v___x_4351_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4352_ = l_Lean_Name_str___override(v___x_4351_, v___x_4350_);
return v___x_4352_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4355_; 
v___x_4353_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4354_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4355_ = l_Lean_Name_str___override(v___x_4354_, v___x_4353_);
return v___x_4355_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4356_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4357_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4358_ = l_Lean_Name_str___override(v___x_4357_, v___x_4356_);
return v___x_4358_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4359_; lean_object* v___x_4360_; lean_object* v___x_4361_; 
v___x_4359_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4360_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4361_ = l_Lean_Name_str___override(v___x_4360_, v___x_4359_);
return v___x_4361_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4362_; lean_object* v___x_4363_; lean_object* v___x_4364_; 
v___x_4362_ = lean_unsigned_to_nat(1989807118u);
v___x_4363_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4364_ = l_Lean_Name_num___override(v___x_4363_, v___x_4362_);
return v___x_4364_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4365_; 
v___x_4365_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_4365_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; 
v___x_4366_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4367_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4368_ = l_Lean_Name_str___override(v___x_4367_, v___x_4366_);
return v___x_4368_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4369_; 
v___x_4369_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_4369_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4370_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4371_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4372_ = l_Lean_Name_str___override(v___x_4371_, v___x_4370_);
return v___x_4372_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; 
v___x_4373_ = lean_unsigned_to_nat(2u);
v___x_4374_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__24_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4375_ = l_Lean_Name_num___override(v___x_4374_, v___x_4373_);
return v___x_4375_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4377_; uint8_t v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; 
v___x_4377_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_Elab_partialFixpoint_spec__19___redArg___closed__7);
v___x_4378_ = 0;
v___x_4379_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn___closed__25_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_);
v___x_4380_ = l_Lean_registerTraceClass(v___x_4377_, v___x_4378_, v___x_4379_);
return v___x_4380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2____boxed(lean_object* v_a_4381_){
_start:
{
lean_object* v_res_4382_; 
v_res_4382_ = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_();
return v_res_4382_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_MkInhabitant(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Monotonicity(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Order(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Main(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_MkInhabitant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Monotonicity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_partialFixpoint___boxed__const__1 = _init_l_Lean_Elab_partialFixpoint___boxed__const__1();
lean_mark_persistent(l_Lean_Elab_partialFixpoint___boxed__const__1);
res = l___private_Lean_Elab_PreDefinition_PartialFixpoint_Main_0__initFn_00___x40_Lean_Elab_PreDefinition_PartialFixpoint_Main_1989807118____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Main(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_MkInhabitant(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Mutual(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Monotonicity(uint8_t builtin);
lean_object* initialize_Lean_Meta_Order(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_PartialFixpoint_Main(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_MkInhabitant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Mutual(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_PartialFixpoint_Eqns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Monotonicity(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_PartialFixpoint_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_PartialFixpoint_Main(builtin);
}
#ifdef __cplusplus
}
#endif
