// Lean compiler output
// Module: Lean.Elab.PreDefinition.WF.Fix
// Imports: public import Lean.Data.Array public import Lean.Elab.PreDefinition.Basic public import Lean.Elab.PreDefinition.WF.Basic public import Lean.Meta.ArgsPacker public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Meta.Tactic.Cleanup public import Lean.Util.HasConstCache
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
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instInhabitedTermElabM(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_isSubPrefixOf(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_ArgsPacker_unpack(lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_Expr_mdataExpr_x21(lean_object*);
lean_object* l_Lean_MVarId_setType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_WF_applyCleanWfTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Elab_Term_reportUnsolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Elab_Tactic_setGoals___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkInitialTacticInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_evalTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Term_withDeclName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_mkRecAppWithSyntax(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
extern lean_object* l_Lean_instInhabitedLocalDecl_default;
lean_object* l_Lean_LocalContext_size(lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_local_ctx_is_empty(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1;
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2;
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3;
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4;
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5;
static lean_once_cell_t l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_assignSubsumed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_assignSubsumed___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__0;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__1;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__2;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__3;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__4;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__5;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__6;
static lean_once_cell_t l_Lean_Elab_WF_isNatLtWF___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_isNatLtWF___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__2;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__3;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__4;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__5;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__6;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_WF_mkFix___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___closed__0;
static lean_once_cell_t l_Lean_Elab_WF_mkFix___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_WF_mkFix___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__spec__0(lean_object* v_name_1_, lean_object* v_decl_2_, lean_object* v_ref_3_){
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
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_29_, lean_object* v_decl_30_, lean_object* v_ref_31_, lean_object* v_a_32_){
_start:
{
lean_object* v_res_33_; 
v_res_33_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__spec__0(v_name_29_, v_decl_30_, v_ref_31_);
lean_dec_ref(v_decl_30_);
return v_res_33_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_34_; 
v___x_34_ = lean_mk_string_unchecked("debug", 5, 5);
return v___x_34_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = lean_mk_string_unchecked("definition", 10, 10);
return v___x_35_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_36_; 
v___x_36_ = lean_mk_string_unchecked("wf", 2, 2);
return v___x_36_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_mk_string_unchecked("replaceRecApps", 14, 14);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_38_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_39_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_40_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_41_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_42_ = l_Lean_Name_mkStr4(v___x_41_, v___x_40_, v___x_39_, v___x_38_);
return v___x_42_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = lean_mk_string_unchecked("Type check every step of the well-founded definition translation", 64, 64);
return v___x_43_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; uint8_t v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_44_ = lean_box(0);
v___x_45_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__5_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_46_ = 0;
v___x_47_ = lean_box(v___x_46_);
v___x_48_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_48_, 0, v___x_47_);
lean_ctor_set(v___x_48_, 1, v___x_45_);
lean_ctor_set(v___x_48_, 2, v___x_44_);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_49_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_50_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_mk_string_unchecked("WF", 2, 2);
return v___x_51_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_52_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__3_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_53_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_54_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_55_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__0_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_56_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__9_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_57_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_58_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_59_ = l_Lean_Name_mkStr7(v___x_58_, v___x_57_, v___x_56_, v___x_55_, v___x_54_, v___x_53_, v___x_52_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_61_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__4_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_62_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__6_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_63_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__10_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_64_ = l_Lean_Option_register___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__spec__0(v___x_61_, v___x_62_, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4____boxed(lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_();
return v_res_66_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0(void){
_start:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_mk_empty_array_with_capacity(v___x_67_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(lean_object* v_decreasingProp_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v_ref_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v_ref_75_ = lean_ctor_get(v_a_72_, 5);
lean_inc(v_ref_75_);
v___x_76_ = l_Lean_mkRecAppWithSyntax(v_decreasingProp_69_, v_ref_75_);
v___x_77_ = lean_box(0);
v___x_78_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_76_, v___x_77_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
if (lean_obj_tag(v___x_78_) == 0)
{
lean_object* v_a_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; 
v_a_79_ = lean_ctor_get(v___x_78_, 0);
lean_inc(v_a_79_);
lean_dec_ref(v___x_78_);
v___x_80_ = l_Lean_Expr_mvarId_x21(v_a_79_);
v___x_81_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0);
v___x_82_ = 1;
v___x_83_ = l___private_Lean_Meta_Tactic_Cleanup_0__Lean_Meta_cleanupCore(v___x_80_, v___x_81_, v___x_82_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
if (lean_obj_tag(v___x_83_) == 0)
{
lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_90_; 
v_isSharedCheck_90_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_90_ == 0)
{
lean_object* v_unused_91_; 
v_unused_91_ = lean_ctor_get(v___x_83_, 0);
lean_dec(v_unused_91_);
v___x_85_ = v___x_83_;
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
else
{
lean_dec(v___x_83_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_90_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v_a_79_);
v___x_88_ = v___x_85_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_a_79_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
lean_dec(v_a_79_);
v_a_92_ = lean_ctor_get(v___x_83_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_83_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_83_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_83_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
else
{
return v___x_78_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___boxed(lean_object* v_decreasingProp_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
return v_res_106_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(lean_object* v_decreasingProp_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v_decreasingProp_107_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___boxed(lean_object* v_decreasingProp_116_, lean_object* v_a_117_, lean_object* v_a_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof(v_decreasingProp_116_, v_a_117_, v_a_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec_ref(v_a_119_);
lean_dec(v_a_118_);
lean_dec_ref(v_a_117_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(lean_object* v_msg_125_){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = l_Lean_instInhabitedLocalDecl_default;
v___x_127_ = lean_panic_fn_borrowed(v___x_126_, v_msg_125_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(lean_object* v_msgData_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; lean_object* v_env_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v_mctx_138_; lean_object* v_lctx_139_; lean_object* v_options_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_134_ = lean_st_ref_get(v___y_132_);
v_env_135_ = lean_ctor_get(v___x_134_, 0);
lean_inc_ref(v_env_135_);
lean_dec(v___x_134_);
v___x_136_ = lean_st_ref_get(v___y_132_);
lean_dec(v___x_136_);
v___x_137_ = lean_st_ref_get(v___y_130_);
v_mctx_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc_ref(v_mctx_138_);
lean_dec(v___x_137_);
v_lctx_139_ = lean_ctor_get(v___y_129_, 2);
v_options_140_ = lean_ctor_get(v___y_131_, 2);
lean_inc_ref(v_options_140_);
lean_inc_ref(v_lctx_139_);
v___x_141_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_141_, 0, v_env_135_);
lean_ctor_set(v___x_141_, 1, v_mctx_138_);
lean_ctor_set(v___x_141_, 2, v_lctx_139_);
lean_ctor_set(v___x_141_, 3, v_options_140_);
v___x_142_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
lean_ctor_set(v___x_142_, 1, v_msgData_128_);
v___x_143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_143_, 0, v___x_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1___boxed(lean_object* v_msgData_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
lean_object* v_res_150_; 
v_res_150_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msgData_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
return v_res_150_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(lean_object* v_msg_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_ref_157_; lean_object* v___x_158_; lean_object* v_a_159_; lean_object* v___x_161_; uint8_t v_isShared_162_; uint8_t v_isSharedCheck_167_; 
v_ref_157_ = lean_ctor_get(v___y_154_, 5);
v___x_158_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_151_, v___y_152_, v___y_153_, v___y_154_, v___y_155_);
v_a_159_ = lean_ctor_get(v___x_158_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_158_);
if (v_isSharedCheck_167_ == 0)
{
v___x_161_ = v___x_158_;
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
else
{
lean_inc(v_a_159_);
lean_dec(v___x_158_);
v___x_161_ = lean_box(0);
v_isShared_162_ = v_isSharedCheck_167_;
goto v_resetjp_160_;
}
v_resetjp_160_:
{
lean_object* v___x_163_; lean_object* v___x_165_; 
lean_inc(v_ref_157_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v_ref_157_);
lean_ctor_set(v___x_163_, 1, v_a_159_);
if (v_isShared_162_ == 0)
{
lean_ctor_set_tag(v___x_161_, 1);
lean_ctor_set(v___x_161_, 0, v___x_163_);
v___x_165_ = v___x_161_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_163_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg___boxed(lean_object* v_msg_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
return v_res_174_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0(void){
_start:
{
lean_object* v___x_175_; 
v___x_175_ = lean_mk_string_unchecked("Init.Data.Option.BasicAux", 25, 25);
return v___x_175_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1(void){
_start:
{
lean_object* v___x_176_; 
v___x_176_ = lean_mk_string_unchecked("Option.get!", 11, 11);
return v___x_176_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2(void){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = lean_mk_string_unchecked("value is none", 13, 13);
return v___x_177_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_178_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__2);
v___x_179_ = lean_unsigned_to_nat(14u);
v___x_180_ = lean_unsigned_to_nat(22u);
v___x_181_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__1);
v___x_182_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__0);
v___x_183_ = l_mkPanicMessageWithDecl(v___x_182_, v___x_181_, v___x_180_, v___x_179_, v___x_178_);
return v___x_183_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4(void){
_start:
{
lean_object* v___x_184_; 
v___x_184_ = lean_mk_string_unchecked("unexpected empty local context", 30, 30);
return v___x_184_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5(void){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__4);
v___x_186_ = l_Lean_stringToMessageData(v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v___y_193_; lean_object* v___y_197_; lean_object* v_lctx_201_; lean_object* v___x_202_; uint8_t v___x_212_; 
v_lctx_201_ = lean_ctor_get(v_a_187_, 2);
v___x_202_ = lean_box(0);
lean_inc_ref(v_lctx_201_);
v___x_212_ = lean_local_ctx_is_empty(v_lctx_201_);
if (v___x_212_ == 0)
{
goto v___jp_203_;
}
else
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
v___x_213_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__5);
v___x_214_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_213_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
v_a_215_ = lean_ctor_get(v___x_214_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_214_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_214_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = l_Lean_LocalDecl_fvarId(v___y_193_);
lean_dec_ref(v___y_193_);
v___x_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_195_, 0, v___x_194_);
return v___x_195_;
}
v___jp_196_:
{
if (lean_obj_tag(v___y_197_) == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; 
v___x_198_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___closed__3);
v___x_199_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__0(v___x_198_);
v___y_193_ = v___x_199_;
goto v___jp_192_;
}
else
{
lean_object* v_val_200_; 
v_val_200_ = lean_ctor_get(v___y_197_, 0);
lean_inc(v_val_200_);
lean_dec_ref(v___y_197_);
v___y_193_ = v_val_200_;
goto v___jp_192_;
}
}
v___jp_203_:
{
lean_object* v_decls_204_; lean_object* v_size_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v_decls_204_ = lean_ctor_get(v_lctx_201_, 1);
v_size_205_ = lean_ctor_get(v_decls_204_, 2);
v___x_206_ = l_Lean_LocalContext_size(v_lctx_201_);
v___x_207_ = lean_unsigned_to_nat(1u);
v___x_208_ = lean_nat_sub(v___x_206_, v___x_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_nat_dec_lt(v___x_208_, v_size_205_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; 
lean_dec(v___x_208_);
v___x_210_ = l_outOfBounds___redArg(v___x_202_);
v___y_197_ = v___x_210_;
goto v___jp_196_;
}
else
{
lean_object* v___x_211_; 
v___x_211_ = l_Lean_PersistentArray_get_x21___redArg(v___x_202_, v_decls_204_, v___x_208_);
lean_dec(v___x_208_);
v___y_197_ = v___x_211_;
goto v___jp_196_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId___boxed(lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(lean_object* v_00_u03b1_229_, lean_object* v_msg_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v_msg_230_, v___y_231_, v___y_232_, v___y_233_, v___y_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___boxed(lean_object* v_00_u03b1_237_, lean_object* v_msg_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_, lean_object* v___y_243_){
_start:
{
lean_object* v_res_244_; 
v_res_244_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1(v_00_u03b1_237_, v_msg_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
lean_dec(v___y_242_);
lean_dec_ref(v___y_241_);
lean_dec(v___y_240_);
lean_dec_ref(v___y_239_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(lean_object* v_lctxid_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_lctx_248_; uint8_t v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v_lctx_248_ = lean_ctor_get(v_a_246_, 2);
v___x_249_ = l_Lean_LocalContext_contains(v_lctx_248_, v_lctxid_245_);
v___x_250_ = lean_box(v___x_249_);
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg___boxed(lean_object* v_lctxid_252_, lean_object* v_a_253_, lean_object* v_a_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_252_, v_a_253_);
lean_dec_ref(v_a_253_);
lean_dec(v_lctxid_252_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(lean_object* v_lctxid_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_lctxid_256_, v_a_257_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___boxed(lean_object* v_lctxid_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_, lean_object* v_a_267_, lean_object* v_a_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid(v_lctxid_263_, v_a_264_, v_a_265_, v_a_266_, v_a_267_);
lean_dec(v_a_267_);
lean_dec_ref(v_a_266_);
lean_dec(v_a_265_);
lean_dec_ref(v_a_264_);
lean_dec(v_lctxid_263_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(lean_object* v_recFnName_270_, lean_object* v_e_271_, lean_object* v_a_272_, lean_object* v_a_273_){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v_fst_281_; lean_object* v_snd_282_; lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_275_ = lean_st_ref_get(v_a_273_);
lean_dec(v___x_275_);
v___x_276_ = lean_st_ref_take(v_a_272_);
v___x_277_ = lean_unsigned_to_nat(1u);
v___x_278_ = lean_mk_empty_array_with_capacity(v___x_277_);
v___x_279_ = lean_array_push(v___x_278_, v_recFnName_270_);
v___x_280_ = l_Lean_HasConstCache_containsUnsafe(v___x_279_, v_e_271_, v___x_276_);
lean_dec_ref(v___x_279_);
v_fst_281_ = lean_ctor_get(v___x_280_, 0);
lean_inc(v_fst_281_);
v_snd_282_ = lean_ctor_get(v___x_280_, 1);
lean_inc(v_snd_282_);
lean_dec_ref(v___x_280_);
v___x_283_ = lean_st_ref_set(v_a_272_, v_snd_282_);
v___x_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_284_, 0, v_fst_281_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg___boxed(lean_object* v_recFnName_285_, lean_object* v_e_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_285_, v_e_286_, v_a_287_, v_a_288_);
lean_dec(v_a_288_);
lean_dec(v_a_287_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(lean_object* v_recFnName_291_, lean_object* v_e_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_, lean_object* v_a_298_, lean_object* v_a_299_, lean_object* v_a_300_){
_start:
{
lean_object* v___x_302_; 
v___x_302_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_291_, v_e_292_, v_a_293_, v_a_300_);
return v___x_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___boxed(lean_object* v_recFnName_303_, lean_object* v_e_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn(v_recFnName_303_, v_e_304_, v_a_305_, v_a_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_, v_a_311_, v_a_312_);
lean_dec(v_a_312_);
lean_dec_ref(v_a_311_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
lean_dec(v_a_306_);
lean_dec(v_a_305_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(lean_object* v_a_315_, lean_object* v_x_316_){
_start:
{
if (lean_obj_tag(v_x_316_) == 0)
{
lean_object* v___x_317_; 
v___x_317_ = lean_box(0);
return v___x_317_;
}
else
{
lean_object* v_key_318_; lean_object* v_value_319_; lean_object* v_tail_320_; uint8_t v___x_321_; 
v_key_318_ = lean_ctor_get(v_x_316_, 0);
v_value_319_ = lean_ctor_get(v_x_316_, 1);
v_tail_320_ = lean_ctor_get(v_x_316_, 2);
v___x_321_ = lean_expr_eqv(v_key_318_, v_a_315_);
if (v___x_321_ == 0)
{
v_x_316_ = v_tail_320_;
goto _start;
}
else
{
lean_object* v___x_323_; 
lean_inc(v_value_319_);
v___x_323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_323_, 0, v_value_319_);
return v___x_323_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg___boxed(lean_object* v_a_324_, lean_object* v_x_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_324_, v_x_325_);
lean_dec(v_x_325_);
lean_dec_ref(v_a_324_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(lean_object* v_m_327_, lean_object* v_a_328_){
_start:
{
lean_object* v_buckets_329_; lean_object* v___x_330_; uint64_t v___x_331_; uint64_t v___x_332_; uint64_t v___x_333_; uint64_t v_fold_334_; uint64_t v___x_335_; uint64_t v___x_336_; uint64_t v___x_337_; size_t v___x_338_; size_t v___x_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v_buckets_329_ = lean_ctor_get(v_m_327_, 1);
v___x_330_ = lean_array_get_size(v_buckets_329_);
v___x_331_ = l_Lean_Expr_hash(v_a_328_);
v___x_332_ = 32ULL;
v___x_333_ = lean_uint64_shift_right(v___x_331_, v___x_332_);
v_fold_334_ = lean_uint64_xor(v___x_331_, v___x_333_);
v___x_335_ = 16ULL;
v___x_336_ = lean_uint64_shift_right(v_fold_334_, v___x_335_);
v___x_337_ = lean_uint64_xor(v_fold_334_, v___x_336_);
v___x_338_ = lean_uint64_to_usize(v___x_337_);
v___x_339_ = lean_usize_of_nat(v___x_330_);
v___x_340_ = ((size_t)1ULL);
v___x_341_ = lean_usize_sub(v___x_339_, v___x_340_);
v___x_342_ = lean_usize_land(v___x_338_, v___x_341_);
v___x_343_ = lean_array_uget_borrowed(v_buckets_329_, v___x_342_);
v___x_344_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_328_, v___x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg___boxed(lean_object* v_m_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_345_, v_a_346_);
lean_dec_ref(v_a_346_);
lean_dec_ref(v_m_345_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(lean_object* v_msg_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_){
_start:
{
lean_object* v_ref_354_; lean_object* v___x_355_; lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_364_; 
v_ref_354_ = lean_ctor_get(v___y_351_, 5);
v___x_355_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_348_, v___y_349_, v___y_350_, v___y_351_, v___y_352_);
v_a_356_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_364_ == 0)
{
v___x_358_ = v___x_355_;
v_isShared_359_ = v_isSharedCheck_364_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_355_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_364_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_360_; lean_object* v___x_362_; 
lean_inc(v_ref_354_);
v___x_360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_360_, 0, v_ref_354_);
lean_ctor_set(v___x_360_, 1, v_a_356_);
if (v_isShared_359_ == 0)
{
lean_ctor_set_tag(v___x_358_, 1);
lean_ctor_set(v___x_358_, 0, v___x_360_);
v___x_362_ = v___x_358_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_363_; 
v_reuseFailAlloc_363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_363_, 0, v___x_360_);
v___x_362_ = v_reuseFailAlloc_363_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
return v___x_362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg___boxed(lean_object* v_msg_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
lean_dec(v___y_367_);
lean_dec_ref(v___y_366_);
return v_res_371_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0(void){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lean_mk_string_unchecked("Type not preserved transforming", 31, 31);
return v___x_372_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1(void){
_start:
{
lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_373_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__0);
v___x_374_ = l_Lean_stringToMessageData(v___x_373_);
return v___x_374_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2(void){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = lean_mk_string_unchecked("\nto", 3, 3);
return v___x_375_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3(void){
_start:
{
lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_376_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__2);
v___x_377_ = l_Lean_stringToMessageData(v___x_376_);
return v___x_377_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_mk_string_unchecked("\nType was", 9, 9);
return v___x_378_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__4);
v___x_380_ = l_Lean_stringToMessageData(v___x_379_);
return v___x_380_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6(void){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = lean_mk_string_unchecked("\nand now is", 11, 11);
return v___x_381_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7(void){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__6);
v___x_383_ = l_Lean_stringToMessageData(v___x_382_);
return v___x_383_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8(void){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = lean_mk_string_unchecked("Type error introduced when transforming", 39, 39);
return v___x_384_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9(void){
_start:
{
lean_object* v___x_385_; lean_object* v___x_386_; 
v___x_385_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__8);
v___x_386_ = l_Lean_stringToMessageData(v___x_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(lean_object* v_a_387_, lean_object* v_e_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v___y_399_; lean_object* v___y_400_; lean_object* v___y_401_; lean_object* v___y_402_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___x_480_; 
lean_inc_ref(v_a_387_);
v___x_480_ = l_Lean_Meta_isTypeCorrect(v_a_387_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; uint8_t v___x_482_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
lean_inc(v_a_481_);
lean_dec_ref(v___x_480_);
v___x_482_ = lean_unbox(v_a_481_);
lean_dec(v_a_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_483_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__9);
lean_inc_ref(v_e_388_);
v___x_484_ = l_Lean_indentExpr(v_e_388_);
v___x_485_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_485_, 0, v___x_483_);
lean_ctor_set(v___x_485_, 1, v___x_484_);
v___x_486_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_487_, 0, v___x_485_);
lean_ctor_set(v___x_487_, 1, v___x_486_);
lean_inc_ref(v_a_387_);
v___x_488_ = l_Lean_indentExpr(v_a_387_);
v___x_489_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_489_, 0, v___x_487_);
lean_ctor_set(v___x_489_, 1, v___x_488_);
v___x_490_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_489_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_dec_ref(v___x_490_);
v___y_399_ = v___y_389_;
v___y_400_ = v___y_390_;
v___y_401_ = v___y_391_;
v___y_402_ = v___y_392_;
v___y_403_ = v___y_393_;
v___y_404_ = v___y_394_;
v___y_405_ = v___y_395_;
v___y_406_ = v___y_396_;
goto v___jp_398_;
}
else
{
lean_dec_ref(v_e_388_);
lean_dec_ref(v_a_387_);
return v___x_490_;
}
}
else
{
v___y_399_ = v___y_389_;
v___y_400_ = v___y_390_;
v___y_401_ = v___y_391_;
v___y_402_ = v___y_392_;
v___y_403_ = v___y_393_;
v___y_404_ = v___y_394_;
v___y_405_ = v___y_395_;
v___y_406_ = v___y_396_;
goto v___jp_398_;
}
}
else
{
lean_object* v_a_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_498_; 
lean_dec_ref(v_e_388_);
lean_dec_ref(v_a_387_);
v_a_491_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_498_ == 0)
{
v___x_493_ = v___x_480_;
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_a_491_);
lean_dec(v___x_480_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_498_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_496_; 
if (v_isShared_494_ == 0)
{
v___x_496_ = v___x_493_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_491_);
v___x_496_ = v_reuseFailAlloc_497_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
return v___x_496_;
}
}
}
v___jp_398_:
{
lean_object* v___x_407_; 
lean_inc(v___y_406_);
lean_inc_ref(v___y_405_);
lean_inc(v___y_404_);
lean_inc_ref(v___y_403_);
lean_inc_ref(v_e_388_);
v___x_407_ = lean_infer_type(v_e_388_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_407_) == 0)
{
lean_object* v_a_408_; lean_object* v___x_409_; 
v_a_408_ = lean_ctor_get(v___x_407_, 0);
lean_inc(v_a_408_);
lean_dec_ref(v___x_407_);
lean_inc(v___y_406_);
lean_inc_ref(v___y_405_);
lean_inc(v___y_404_);
lean_inc_ref(v___y_403_);
lean_inc_ref(v_a_387_);
v___x_409_ = lean_infer_type(v_a_387_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v___x_411_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc_n(v_a_410_, 2);
lean_dec_ref(v___x_409_);
lean_inc(v_a_408_);
v___x_411_ = l_Lean_Meta_isExprDefEq(v_a_408_, v_a_410_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_411_) == 0)
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_455_; 
v_a_412_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_455_ == 0)
{
v___x_414_ = v___x_411_;
v_isShared_415_ = v_isSharedCheck_455_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_411_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_455_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
uint8_t v___x_416_; 
v___x_416_ = lean_unbox(v_a_412_);
lean_dec(v_a_412_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; 
lean_del_object(v___x_414_);
v___x_417_ = l_Lean_Meta_addPPExplicitToExposeDiff(v_a_408_, v_a_410_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_417_) == 0)
{
lean_object* v_a_418_; lean_object* v_fst_419_; lean_object* v_snd_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_442_; 
v_a_418_ = lean_ctor_get(v___x_417_, 0);
lean_inc(v_a_418_);
lean_dec_ref(v___x_417_);
v_fst_419_ = lean_ctor_get(v_a_418_, 0);
v_snd_420_ = lean_ctor_get(v_a_418_, 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v_a_418_);
if (v_isSharedCheck_442_ == 0)
{
v___x_422_ = v_a_418_;
v_isShared_423_ = v_isSharedCheck_442_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_snd_420_);
lean_inc(v_fst_419_);
lean_dec(v_a_418_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_442_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_424_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__1);
v___x_425_ = l_Lean_indentExpr(v_e_388_);
if (v_isShared_423_ == 0)
{
lean_ctor_set_tag(v___x_422_, 7);
lean_ctor_set(v___x_422_, 1, v___x_425_);
lean_ctor_set(v___x_422_, 0, v___x_424_);
v___x_427_ = v___x_422_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v___x_425_);
v___x_427_ = v_reuseFailAlloc_441_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_428_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__3);
v___x_429_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_427_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v___x_430_ = l_Lean_indentExpr(v_a_387_);
v___x_431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_431_, 0, v___x_429_);
lean_ctor_set(v___x_431_, 1, v___x_430_);
v___x_432_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__5);
v___x_433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_433_, 0, v___x_431_);
lean_ctor_set(v___x_433_, 1, v___x_432_);
v___x_434_ = l_Lean_indentExpr(v_fst_419_);
v___x_435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_435_, 0, v___x_433_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
v___x_436_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___closed__7);
v___x_437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_437_, 0, v___x_435_);
lean_ctor_set(v___x_437_, 1, v___x_436_);
v___x_438_ = l_Lean_indentExpr(v_snd_420_);
v___x_439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_439_, 0, v___x_437_);
lean_ctor_set(v___x_439_, 1, v___x_438_);
v___x_440_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_439_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
return v___x_440_;
}
}
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
lean_dec_ref(v_e_388_);
lean_dec_ref(v_a_387_);
v_a_443_ = lean_ctor_get(v___x_417_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_417_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_417_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_417_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
else
{
lean_object* v___x_451_; lean_object* v___x_453_; 
lean_dec(v_a_410_);
lean_dec(v_a_408_);
lean_dec_ref(v_e_388_);
lean_dec_ref(v_a_387_);
v___x_451_ = lean_box(0);
if (v_isShared_415_ == 0)
{
lean_ctor_set(v___x_414_, 0, v___x_451_);
v___x_453_ = v___x_414_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_451_);
v___x_453_ = v_reuseFailAlloc_454_;
goto v_reusejp_452_;
}
v_reusejp_452_:
{
return v___x_453_;
}
}
}
}
else
{
lean_object* v_a_456_; lean_object* v___x_458_; uint8_t v_isShared_459_; uint8_t v_isSharedCheck_463_; 
lean_dec(v_a_410_);
lean_dec(v_a_408_);
lean_dec_ref(v_e_388_);
lean_dec_ref(v_a_387_);
v_a_456_ = lean_ctor_get(v___x_411_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_411_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_411_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_411_);
v___x_458_ = lean_box(0);
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
v_resetjp_457_:
{
lean_object* v___x_461_; 
if (v_isShared_459_ == 0)
{
v___x_461_ = v___x_458_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_a_456_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
}
}
else
{
lean_object* v_a_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_471_; 
lean_dec(v_a_408_);
lean_dec_ref(v_e_388_);
lean_dec_ref(v_a_387_);
v_a_464_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_471_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_471_ == 0)
{
v___x_466_ = v___x_409_;
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_a_464_);
lean_dec(v___x_409_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_471_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_469_; 
if (v_isShared_467_ == 0)
{
v___x_469_ = v___x_466_;
goto v_reusejp_468_;
}
else
{
lean_object* v_reuseFailAlloc_470_; 
v_reuseFailAlloc_470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_470_, 0, v_a_464_);
v___x_469_ = v_reuseFailAlloc_470_;
goto v_reusejp_468_;
}
v_reusejp_468_:
{
return v___x_469_;
}
}
}
}
else
{
lean_object* v_a_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_479_; 
lean_dec_ref(v_e_388_);
lean_dec_ref(v_a_387_);
v_a_472_ = lean_ctor_get(v___x_407_, 0);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_407_);
if (v_isSharedCheck_479_ == 0)
{
v___x_474_ = v___x_407_;
v_isShared_475_ = v_isSharedCheck_479_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_a_472_);
lean_dec(v___x_407_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed(lean_object* v_a_499_, lean_object* v_e_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_){
_start:
{
lean_object* v_res_510_; 
v_res_510_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0(v_a_499_, v_e_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_);
lean_dec(v___y_508_);
lean_dec_ref(v___y_507_);
lean_dec(v___y_506_);
lean_dec_ref(v___y_505_);
lean_dec(v___y_504_);
lean_dec_ref(v___y_503_);
lean_dec(v___y_502_);
lean_dec(v___y_501_);
return v_res_510_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(lean_object* v_opts_511_, lean_object* v_opt_512_){
_start:
{
lean_object* v_name_513_; lean_object* v_defValue_514_; lean_object* v_map_515_; lean_object* v___x_516_; 
v_name_513_ = lean_ctor_get(v_opt_512_, 0);
v_defValue_514_ = lean_ctor_get(v_opt_512_, 1);
v_map_515_ = lean_ctor_get(v_opts_511_, 0);
v___x_516_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_515_, v_name_513_);
if (lean_obj_tag(v___x_516_) == 0)
{
uint8_t v___x_517_; 
v___x_517_ = lean_unbox(v_defValue_514_);
return v___x_517_;
}
else
{
lean_object* v_val_518_; 
v_val_518_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_val_518_);
lean_dec_ref(v___x_516_);
if (lean_obj_tag(v_val_518_) == 1)
{
uint8_t v_v_519_; 
v_v_519_ = lean_ctor_get_uint8(v_val_518_, 0);
lean_dec_ref(v_val_518_);
return v_v_519_;
}
else
{
uint8_t v___x_520_; 
lean_dec(v_val_518_);
v___x_520_ = lean_unbox(v_defValue_514_);
return v___x_520_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5___boxed(lean_object* v_opts_521_, lean_object* v_opt_522_){
_start:
{
uint8_t v_res_523_; lean_object* v_r_524_; 
v_res_523_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_opts_521_, v_opt_522_);
lean_dec_ref(v_opt_522_);
lean_dec_ref(v_opts_521_);
v_r_524_ = lean_box(v_res_523_);
return v_r_524_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_a_525_, lean_object* v_x_526_){
_start:
{
if (lean_obj_tag(v_x_526_) == 0)
{
uint8_t v___x_527_; 
v___x_527_ = 0;
return v___x_527_;
}
else
{
lean_object* v_key_528_; lean_object* v_tail_529_; uint8_t v___x_530_; 
v_key_528_ = lean_ctor_get(v_x_526_, 0);
v_tail_529_ = lean_ctor_get(v_x_526_, 2);
v___x_530_ = lean_expr_eqv(v_key_528_, v_a_525_);
if (v___x_530_ == 0)
{
v_x_526_ = v_tail_529_;
goto _start;
}
else
{
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_a_532_, lean_object* v_x_533_){
_start:
{
uint8_t v_res_534_; lean_object* v_r_535_; 
v_res_534_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_532_, v_x_533_);
lean_dec(v_x_533_);
lean_dec_ref(v_a_532_);
v_r_535_ = lean_box(v_res_534_);
return v_r_535_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(lean_object* v_x_536_, lean_object* v_x_537_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
return v_x_536_;
}
else
{
lean_object* v_key_538_; lean_object* v_value_539_; lean_object* v_tail_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_563_; 
v_key_538_ = lean_ctor_get(v_x_537_, 0);
v_value_539_ = lean_ctor_get(v_x_537_, 1);
v_tail_540_ = lean_ctor_get(v_x_537_, 2);
v_isSharedCheck_563_ = !lean_is_exclusive(v_x_537_);
if (v_isSharedCheck_563_ == 0)
{
v___x_542_ = v_x_537_;
v_isShared_543_ = v_isSharedCheck_563_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_tail_540_);
lean_inc(v_value_539_);
lean_inc(v_key_538_);
lean_dec(v_x_537_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_563_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_544_; uint64_t v___x_545_; uint64_t v___x_546_; uint64_t v___x_547_; uint64_t v_fold_548_; uint64_t v___x_549_; uint64_t v___x_550_; uint64_t v___x_551_; size_t v___x_552_; size_t v___x_553_; size_t v___x_554_; size_t v___x_555_; size_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_559_; 
v___x_544_ = lean_array_get_size(v_x_536_);
v___x_545_ = l_Lean_Expr_hash(v_key_538_);
v___x_546_ = 32ULL;
v___x_547_ = lean_uint64_shift_right(v___x_545_, v___x_546_);
v_fold_548_ = lean_uint64_xor(v___x_545_, v___x_547_);
v___x_549_ = 16ULL;
v___x_550_ = lean_uint64_shift_right(v_fold_548_, v___x_549_);
v___x_551_ = lean_uint64_xor(v_fold_548_, v___x_550_);
v___x_552_ = lean_uint64_to_usize(v___x_551_);
v___x_553_ = lean_usize_of_nat(v___x_544_);
v___x_554_ = ((size_t)1ULL);
v___x_555_ = lean_usize_sub(v___x_553_, v___x_554_);
v___x_556_ = lean_usize_land(v___x_552_, v___x_555_);
v___x_557_ = lean_array_uget_borrowed(v_x_536_, v___x_556_);
lean_inc(v___x_557_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 2, v___x_557_);
v___x_559_ = v___x_542_;
goto v_reusejp_558_;
}
else
{
lean_object* v_reuseFailAlloc_562_; 
v_reuseFailAlloc_562_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_562_, 0, v_key_538_);
lean_ctor_set(v_reuseFailAlloc_562_, 1, v_value_539_);
lean_ctor_set(v_reuseFailAlloc_562_, 2, v___x_557_);
v___x_559_ = v_reuseFailAlloc_562_;
goto v_reusejp_558_;
}
v_reusejp_558_:
{
lean_object* v___x_560_; 
v___x_560_ = lean_array_uset(v_x_536_, v___x_556_, v___x_559_);
v_x_536_ = v___x_560_;
v_x_537_ = v_tail_540_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(lean_object* v_i_564_, lean_object* v_source_565_, lean_object* v_target_566_){
_start:
{
lean_object* v___x_567_; uint8_t v___x_568_; 
v___x_567_ = lean_array_get_size(v_source_565_);
v___x_568_ = lean_nat_dec_lt(v_i_564_, v___x_567_);
if (v___x_568_ == 0)
{
lean_dec_ref(v_source_565_);
lean_dec(v_i_564_);
return v_target_566_;
}
else
{
lean_object* v_es_569_; lean_object* v___x_570_; lean_object* v_source_571_; lean_object* v_target_572_; lean_object* v___x_573_; lean_object* v___x_574_; 
v_es_569_ = lean_array_fget(v_source_565_, v_i_564_);
v___x_570_ = lean_box(0);
v_source_571_ = lean_array_fset(v_source_565_, v_i_564_, v___x_570_);
v_target_572_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_target_566_, v_es_569_);
v___x_573_ = lean_unsigned_to_nat(1u);
v___x_574_ = lean_nat_add(v_i_564_, v___x_573_);
lean_dec(v_i_564_);
v_i_564_ = v___x_574_;
v_source_565_ = v_source_571_;
v_target_566_ = v_target_572_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(lean_object* v_data_576_){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v_nbuckets_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_577_ = lean_array_get_size(v_data_576_);
v___x_578_ = lean_unsigned_to_nat(2u);
v_nbuckets_579_ = lean_nat_mul(v___x_577_, v___x_578_);
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = lean_box(0);
v___x_582_ = lean_mk_array(v_nbuckets_579_, v___x_581_);
v___x_583_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v___x_580_, v_data_576_, v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(lean_object* v_a_584_, lean_object* v_b_585_, lean_object* v_x_586_){
_start:
{
if (lean_obj_tag(v_x_586_) == 0)
{
lean_dec(v_b_585_);
lean_dec_ref(v_a_584_);
return v_x_586_;
}
else
{
lean_object* v_key_587_; lean_object* v_value_588_; lean_object* v_tail_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_601_; 
v_key_587_ = lean_ctor_get(v_x_586_, 0);
v_value_588_ = lean_ctor_get(v_x_586_, 1);
v_tail_589_ = lean_ctor_get(v_x_586_, 2);
v_isSharedCheck_601_ = !lean_is_exclusive(v_x_586_);
if (v_isSharedCheck_601_ == 0)
{
v___x_591_ = v_x_586_;
v_isShared_592_ = v_isSharedCheck_601_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_tail_589_);
lean_inc(v_value_588_);
lean_inc(v_key_587_);
lean_dec(v_x_586_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_601_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
uint8_t v___x_593_; 
v___x_593_ = lean_expr_eqv(v_key_587_, v_a_584_);
if (v___x_593_ == 0)
{
lean_object* v___x_594_; lean_object* v___x_596_; 
v___x_594_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_584_, v_b_585_, v_tail_589_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 2, v___x_594_);
v___x_596_ = v___x_591_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_key_587_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v_value_588_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v___x_594_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
else
{
lean_object* v___x_599_; 
lean_dec(v_value_588_);
lean_dec(v_key_587_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 1, v_b_585_);
lean_ctor_set(v___x_591_, 0, v_a_584_);
v___x_599_ = v___x_591_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v_a_584_);
lean_ctor_set(v_reuseFailAlloc_600_, 1, v_b_585_);
lean_ctor_set(v_reuseFailAlloc_600_, 2, v_tail_589_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(lean_object* v_m_602_, lean_object* v_a_603_, lean_object* v_b_604_){
_start:
{
lean_object* v_size_605_; lean_object* v_buckets_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_649_; 
v_size_605_ = lean_ctor_get(v_m_602_, 0);
v_buckets_606_ = lean_ctor_get(v_m_602_, 1);
v_isSharedCheck_649_ = !lean_is_exclusive(v_m_602_);
if (v_isSharedCheck_649_ == 0)
{
v___x_608_ = v_m_602_;
v_isShared_609_ = v_isSharedCheck_649_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_buckets_606_);
lean_inc(v_size_605_);
lean_dec(v_m_602_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_649_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_610_; uint64_t v___x_611_; uint64_t v___x_612_; uint64_t v___x_613_; uint64_t v_fold_614_; uint64_t v___x_615_; uint64_t v___x_616_; uint64_t v___x_617_; size_t v___x_618_; size_t v___x_619_; size_t v___x_620_; size_t v___x_621_; size_t v___x_622_; lean_object* v_bkt_623_; uint8_t v___x_624_; 
v___x_610_ = lean_array_get_size(v_buckets_606_);
v___x_611_ = l_Lean_Expr_hash(v_a_603_);
v___x_612_ = 32ULL;
v___x_613_ = lean_uint64_shift_right(v___x_611_, v___x_612_);
v_fold_614_ = lean_uint64_xor(v___x_611_, v___x_613_);
v___x_615_ = 16ULL;
v___x_616_ = lean_uint64_shift_right(v_fold_614_, v___x_615_);
v___x_617_ = lean_uint64_xor(v_fold_614_, v___x_616_);
v___x_618_ = lean_uint64_to_usize(v___x_617_);
v___x_619_ = lean_usize_of_nat(v___x_610_);
v___x_620_ = ((size_t)1ULL);
v___x_621_ = lean_usize_sub(v___x_619_, v___x_620_);
v___x_622_ = lean_usize_land(v___x_618_, v___x_621_);
v_bkt_623_ = lean_array_uget_borrowed(v_buckets_606_, v___x_622_);
v___x_624_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_603_, v_bkt_623_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; lean_object* v_size_x27_626_; lean_object* v___x_627_; lean_object* v_buckets_x27_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; 
v___x_625_ = lean_unsigned_to_nat(1u);
v_size_x27_626_ = lean_nat_add(v_size_605_, v___x_625_);
lean_dec(v_size_605_);
lean_inc(v_bkt_623_);
v___x_627_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_627_, 0, v_a_603_);
lean_ctor_set(v___x_627_, 1, v_b_604_);
lean_ctor_set(v___x_627_, 2, v_bkt_623_);
v_buckets_x27_628_ = lean_array_uset(v_buckets_606_, v___x_622_, v___x_627_);
v___x_629_ = lean_unsigned_to_nat(4u);
v___x_630_ = lean_nat_mul(v_size_x27_626_, v___x_629_);
v___x_631_ = lean_unsigned_to_nat(3u);
v___x_632_ = lean_nat_div(v___x_630_, v___x_631_);
lean_dec(v___x_630_);
v___x_633_ = lean_array_get_size(v_buckets_x27_628_);
v___x_634_ = lean_nat_dec_le(v___x_632_, v___x_633_);
lean_dec(v___x_632_);
if (v___x_634_ == 0)
{
lean_object* v_val_635_; lean_object* v___x_637_; 
v_val_635_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_buckets_x27_628_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v_val_635_);
lean_ctor_set(v___x_608_, 0, v_size_x27_626_);
v___x_637_ = v___x_608_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_size_x27_626_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v_val_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
return v___x_637_;
}
}
else
{
lean_object* v___x_640_; 
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v_buckets_x27_628_);
lean_ctor_set(v___x_608_, 0, v_size_x27_626_);
v___x_640_ = v___x_608_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_size_x27_626_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_buckets_x27_628_);
v___x_640_ = v_reuseFailAlloc_641_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
return v___x_640_;
}
}
}
else
{
lean_object* v___x_642_; lean_object* v_buckets_x27_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_647_; 
lean_inc(v_bkt_623_);
v___x_642_ = lean_box(0);
v_buckets_x27_643_ = lean_array_uset(v_buckets_606_, v___x_622_, v___x_642_);
v___x_644_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_603_, v_b_604_, v_bkt_623_);
v___x_645_ = lean_array_uset(v_buckets_x27_643_, v___x_622_, v___x_644_);
if (v_isShared_609_ == 0)
{
lean_ctor_set(v___x_608_, 1, v___x_645_);
v___x_647_ = v___x_608_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_size_605_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v___x_645_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(lean_object* v_k_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v_b_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v___x_661_; 
lean_inc(v___y_659_);
lean_inc_ref(v___y_658_);
lean_inc(v___y_657_);
lean_inc_ref(v___y_656_);
lean_inc(v___y_654_);
lean_inc_ref(v___y_653_);
lean_inc(v___y_652_);
lean_inc(v___y_651_);
v___x_661_ = lean_apply_10(v_k_650_, v_b_655_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, lean_box(0));
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed(lean_object* v_k_662_, lean_object* v___y_663_, lean_object* v___y_664_, lean_object* v___y_665_, lean_object* v___y_666_, lean_object* v_b_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0(v_k_662_, v___y_663_, v___y_664_, v___y_665_, v___y_666_, v_b_667_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
lean_dec_ref(v___y_668_);
lean_dec(v___y_666_);
lean_dec_ref(v___y_665_);
lean_dec(v___y_664_);
lean_dec(v___y_663_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(lean_object* v_name_674_, uint8_t v_bi_675_, lean_object* v_type_676_, lean_object* v_k_677_, uint8_t v_kind_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_){
_start:
{
lean_object* v___f_688_; lean_object* v___x_689_; 
lean_inc(v___y_682_);
lean_inc_ref(v___y_681_);
lean_inc(v___y_680_);
lean_inc(v___y_679_);
v___f_688_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_688_, 0, v_k_677_);
lean_closure_set(v___f_688_, 1, v___y_679_);
lean_closure_set(v___f_688_, 2, v___y_680_);
lean_closure_set(v___f_688_, 3, v___y_681_);
lean_closure_set(v___f_688_, 4, v___y_682_);
v___x_689_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_674_, v_bi_675_, v_type_676_, v___f_688_, v_kind_678_, v___y_683_, v___y_684_, v___y_685_, v___y_686_);
if (lean_obj_tag(v___x_689_) == 0)
{
return v___x_689_;
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___boxed(lean_object* v_name_698_, lean_object* v_bi_699_, lean_object* v_type_700_, lean_object* v_k_701_, lean_object* v_kind_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
uint8_t v_bi_boxed_712_; uint8_t v_kind_boxed_713_; lean_object* v_res_714_; 
v_bi_boxed_712_ = lean_unbox(v_bi_699_);
v_kind_boxed_713_ = lean_unbox(v_kind_702_);
v_res_714_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_698_, v_bi_boxed_712_, v_type_700_, v_k_701_, v_kind_boxed_713_, v___y_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec(v___y_706_);
lean_dec_ref(v___y_705_);
lean_dec(v___y_704_);
lean_dec(v___y_703_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(lean_object* v_k_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v_b_720_, lean_object* v_c_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_, lean_object* v___y_725_){
_start:
{
lean_object* v___x_727_; 
lean_inc(v___y_725_);
lean_inc_ref(v___y_724_);
lean_inc(v___y_723_);
lean_inc_ref(v___y_722_);
lean_inc(v___y_719_);
lean_inc_ref(v___y_718_);
lean_inc(v___y_717_);
lean_inc(v___y_716_);
v___x_727_ = lean_apply_11(v_k_715_, v_b_720_, v_c_721_, v___y_716_, v___y_717_, v___y_718_, v___y_719_, v___y_722_, v___y_723_, v___y_724_, v___y_725_, lean_box(0));
return v___x_727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed(lean_object* v_k_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v_b_733_, lean_object* v_c_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_){
_start:
{
lean_object* v_res_740_; 
v_res_740_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0(v_k_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v_b_733_, v_c_734_, v___y_735_, v___y_736_, v___y_737_, v___y_738_);
lean_dec(v___y_738_);
lean_dec_ref(v___y_737_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
lean_dec(v___y_730_);
lean_dec(v___y_729_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(lean_object* v_e_741_, lean_object* v_maxFVars_742_, lean_object* v_k_743_, uint8_t v_cleanupAnnotations_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___f_754_; uint8_t v___x_755_; uint8_t v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
lean_inc(v___y_748_);
lean_inc_ref(v___y_747_);
lean_inc(v___y_746_);
lean_inc(v___y_745_);
v___f_754_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___lam__0___boxed), 12, 5);
lean_closure_set(v___f_754_, 0, v_k_743_);
lean_closure_set(v___f_754_, 1, v___y_745_);
lean_closure_set(v___f_754_, 2, v___y_746_);
lean_closure_set(v___f_754_, 3, v___y_747_);
lean_closure_set(v___f_754_, 4, v___y_748_);
v___x_755_ = 1;
v___x_756_ = 0;
v___x_757_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_757_, 0, v_maxFVars_742_);
v___x_758_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_741_, v___x_755_, v___x_756_, v___x_755_, v___x_756_, v___x_757_, v___f_754_, v_cleanupAnnotations_744_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
lean_dec_ref(v___x_757_);
if (lean_obj_tag(v___x_758_) == 0)
{
return v___x_758_;
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
v_a_759_ = lean_ctor_get(v___x_758_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_758_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_758_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_758_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg___boxed(lean_object* v_e_767_, lean_object* v_maxFVars_768_, lean_object* v_k_769_, lean_object* v_cleanupAnnotations_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_780_; lean_object* v_res_781_; 
v_cleanupAnnotations_boxed_780_ = lean_unbox(v_cleanupAnnotations_770_);
v_res_781_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_767_, v_maxFVars_768_, v_k_769_, v_cleanupAnnotations_boxed_780_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
lean_dec(v___y_774_);
lean_dec_ref(v___y_773_);
lean_dec(v___y_772_);
lean_dec(v___y_771_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(lean_object* v_ref_782_, lean_object* v_msg_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_fileName_793_; lean_object* v_fileMap_794_; lean_object* v_options_795_; lean_object* v_currRecDepth_796_; lean_object* v_maxRecDepth_797_; lean_object* v_ref_798_; lean_object* v_currNamespace_799_; lean_object* v_openDecls_800_; lean_object* v_initHeartbeats_801_; lean_object* v_maxHeartbeats_802_; lean_object* v_quotContext_803_; lean_object* v_currMacroScope_804_; uint8_t v_diag_805_; lean_object* v_cancelTk_x3f_806_; uint8_t v_suppressElabErrors_807_; lean_object* v_inheritedTraceOptions_808_; lean_object* v_ref_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v_fileName_793_ = lean_ctor_get(v___y_790_, 0);
v_fileMap_794_ = lean_ctor_get(v___y_790_, 1);
v_options_795_ = lean_ctor_get(v___y_790_, 2);
v_currRecDepth_796_ = lean_ctor_get(v___y_790_, 3);
v_maxRecDepth_797_ = lean_ctor_get(v___y_790_, 4);
v_ref_798_ = lean_ctor_get(v___y_790_, 5);
v_currNamespace_799_ = lean_ctor_get(v___y_790_, 6);
v_openDecls_800_ = lean_ctor_get(v___y_790_, 7);
v_initHeartbeats_801_ = lean_ctor_get(v___y_790_, 8);
v_maxHeartbeats_802_ = lean_ctor_get(v___y_790_, 9);
v_quotContext_803_ = lean_ctor_get(v___y_790_, 10);
v_currMacroScope_804_ = lean_ctor_get(v___y_790_, 11);
v_diag_805_ = lean_ctor_get_uint8(v___y_790_, sizeof(void*)*14);
v_cancelTk_x3f_806_ = lean_ctor_get(v___y_790_, 12);
v_suppressElabErrors_807_ = lean_ctor_get_uint8(v___y_790_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_808_ = lean_ctor_get(v___y_790_, 13);
v_ref_809_ = l_Lean_replaceRef(v_ref_782_, v_ref_798_);
lean_inc_ref(v_inheritedTraceOptions_808_);
lean_inc(v_cancelTk_x3f_806_);
lean_inc(v_currMacroScope_804_);
lean_inc(v_quotContext_803_);
lean_inc(v_maxHeartbeats_802_);
lean_inc(v_initHeartbeats_801_);
lean_inc(v_openDecls_800_);
lean_inc(v_currNamespace_799_);
lean_inc(v_maxRecDepth_797_);
lean_inc(v_currRecDepth_796_);
lean_inc_ref(v_options_795_);
lean_inc_ref(v_fileMap_794_);
lean_inc_ref(v_fileName_793_);
v___x_810_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_810_, 0, v_fileName_793_);
lean_ctor_set(v___x_810_, 1, v_fileMap_794_);
lean_ctor_set(v___x_810_, 2, v_options_795_);
lean_ctor_set(v___x_810_, 3, v_currRecDepth_796_);
lean_ctor_set(v___x_810_, 4, v_maxRecDepth_797_);
lean_ctor_set(v___x_810_, 5, v_ref_809_);
lean_ctor_set(v___x_810_, 6, v_currNamespace_799_);
lean_ctor_set(v___x_810_, 7, v_openDecls_800_);
lean_ctor_set(v___x_810_, 8, v_initHeartbeats_801_);
lean_ctor_set(v___x_810_, 9, v_maxHeartbeats_802_);
lean_ctor_set(v___x_810_, 10, v_quotContext_803_);
lean_ctor_set(v___x_810_, 11, v_currMacroScope_804_);
lean_ctor_set(v___x_810_, 12, v_cancelTk_x3f_806_);
lean_ctor_set(v___x_810_, 13, v_inheritedTraceOptions_808_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*14, v_diag_805_);
lean_ctor_set_uint8(v___x_810_, sizeof(void*)*14 + 1, v_suppressElabErrors_807_);
v___x_811_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_783_, v___y_788_, v___y_789_, v___x_810_, v___y_791_);
lean_dec_ref(v___x_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg___boxed(lean_object* v_ref_812_, lean_object* v_msg_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_812_, v_msg_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec(v___y_819_);
lean_dec_ref(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
lean_dec(v___y_815_);
lean_dec(v___y_814_);
lean_dec(v_ref_812_);
return v_res_823_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0(void){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_824_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1(void){
_start:
{
lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_825_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__0);
v___x_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
return v___x_826_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_828_ = lean_unsigned_to_nat(0u);
v___x_829_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_829_, 0, v___x_828_);
lean_ctor_set(v___x_829_, 1, v___x_828_);
lean_ctor_set(v___x_829_, 2, v___x_828_);
lean_ctor_set(v___x_829_, 3, v___x_828_);
lean_ctor_set(v___x_829_, 4, v___x_827_);
lean_ctor_set(v___x_829_, 5, v___x_827_);
lean_ctor_set(v___x_829_, 6, v___x_827_);
lean_ctor_set(v___x_829_, 7, v___x_827_);
lean_ctor_set(v___x_829_, 8, v___x_827_);
lean_ctor_set(v___x_829_, 9, v___x_827_);
return v___x_829_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = lean_unsigned_to_nat(32u);
v___x_831_ = lean_mk_empty_array_with_capacity(v___x_830_);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4(void){
_start:
{
size_t v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_833_ = ((size_t)5ULL);
v___x_834_ = lean_unsigned_to_nat(0u);
v___x_835_ = lean_unsigned_to_nat(32u);
v___x_836_ = lean_mk_empty_array_with_capacity(v___x_835_);
v___x_837_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__3);
v___x_838_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_838_, 0, v___x_837_);
lean_ctor_set(v___x_838_, 1, v___x_836_);
lean_ctor_set(v___x_838_, 2, v___x_834_);
lean_ctor_set(v___x_838_, 3, v___x_834_);
lean_ctor_set_usize(v___x_838_, 4, v___x_833_);
return v___x_838_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5(void){
_start:
{
lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_839_ = lean_box(1);
v___x_840_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__4);
v___x_841_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__1);
v___x_842_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_842_, 0, v___x_841_);
lean_ctor_set(v___x_842_, 1, v___x_840_);
lean_ctor_set(v___x_842_, 2, v___x_839_);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6(void){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = lean_mk_string_unchecked("A private declaration `", 23, 23);
return v___x_843_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_844_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__6);
v___x_845_ = l_Lean_stringToMessageData(v___x_844_);
return v___x_845_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8(void){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = lean_mk_string_unchecked("` (from the current module) exists but would need to be public to access here.", 78, 78);
return v___x_846_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9(void){
_start:
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__8);
v___x_848_ = l_Lean_stringToMessageData(v___x_847_);
return v___x_848_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10(void){
_start:
{
lean_object* v___x_849_; 
v___x_849_ = lean_mk_string_unchecked("A public declaration `", 22, 22);
return v___x_849_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11(void){
_start:
{
lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_850_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__10);
v___x_851_ = l_Lean_stringToMessageData(v___x_850_);
return v___x_851_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12(void){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = lean_mk_string_unchecked("` exists but is imported privately; consider adding `public import ", 67, 67);
return v___x_852_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13(void){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__12);
v___x_854_ = l_Lean_stringToMessageData(v___x_853_);
return v___x_854_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14(void){
_start:
{
lean_object* v___x_855_; 
v___x_855_ = lean_mk_string_unchecked("`.", 2, 2);
return v___x_855_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15(void){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; 
v___x_856_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__14);
v___x_857_ = l_Lean_stringToMessageData(v___x_856_);
return v___x_857_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16(void){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = lean_mk_string_unchecked("` (from `", 9, 9);
return v___x_858_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17(void){
_start:
{
lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_859_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__16);
v___x_860_ = l_Lean_stringToMessageData(v___x_859_);
return v___x_860_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18(void){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = lean_mk_string_unchecked("`) exists but would need to be public to access here.", 53, 53);
return v___x_861_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19(void){
_start:
{
lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_862_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__18);
v___x_863_ = l_Lean_stringToMessageData(v___x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(lean_object* v_msg_864_, lean_object* v_declHint_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___x_868_; lean_object* v_env_869_; uint8_t v___x_870_; 
v___x_868_ = lean_st_ref_get(v___y_866_);
v_env_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc_ref(v_env_869_);
lean_dec(v___x_868_);
v___x_870_ = l_Lean_Name_isAnonymous(v_declHint_865_);
if (v___x_870_ == 0)
{
uint8_t v_isExporting_871_; 
v_isExporting_871_ = lean_ctor_get_uint8(v_env_869_, sizeof(void*)*8);
if (v_isExporting_871_ == 0)
{
lean_object* v___x_872_; 
lean_dec_ref(v_env_869_);
lean_dec(v_declHint_865_);
v___x_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_872_, 0, v_msg_864_);
return v___x_872_;
}
else
{
lean_object* v___x_873_; uint8_t v___x_874_; 
lean_inc_ref(v_env_869_);
v___x_873_ = l_Lean_Environment_setExporting(v_env_869_, v___x_870_);
lean_inc(v_declHint_865_);
lean_inc_ref(v___x_873_);
v___x_874_ = l_Lean_Environment_contains(v___x_873_, v_declHint_865_, v_isExporting_871_);
if (v___x_874_ == 0)
{
lean_object* v___x_875_; 
lean_dec_ref(v___x_873_);
lean_dec_ref(v_env_869_);
lean_dec(v_declHint_865_);
v___x_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_875_, 0, v_msg_864_);
return v___x_875_;
}
else
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v_c_881_; lean_object* v___x_882_; 
v___x_876_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__2);
v___x_877_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__5);
v___x_878_ = l_Lean_Options_empty;
v___x_879_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_879_, 0, v___x_873_);
lean_ctor_set(v___x_879_, 1, v___x_876_);
lean_ctor_set(v___x_879_, 2, v___x_877_);
lean_ctor_set(v___x_879_, 3, v___x_878_);
lean_inc(v_declHint_865_);
v___x_880_ = l_Lean_MessageData_ofConstName(v_declHint_865_, v___x_870_);
v_c_881_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_881_, 0, v___x_879_);
lean_ctor_set(v_c_881_, 1, v___x_880_);
v___x_882_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_869_, v_declHint_865_);
if (lean_obj_tag(v___x_882_) == 0)
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
lean_dec_ref(v_env_869_);
lean_dec(v_declHint_865_);
v___x_883_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_884_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v_c_881_);
v___x_885_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__9);
v___x_886_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_884_);
lean_ctor_set(v___x_886_, 1, v___x_885_);
v___x_887_ = l_Lean_MessageData_note(v___x_886_);
v___x_888_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_888_, 0, v_msg_864_);
lean_ctor_set(v___x_888_, 1, v___x_887_);
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
else
{
lean_object* v_val_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_925_; 
v_val_890_ = lean_ctor_get(v___x_882_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_882_);
if (v_isSharedCheck_925_ == 0)
{
v___x_892_ = v___x_882_;
v_isShared_893_ = v_isSharedCheck_925_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_val_890_);
lean_dec(v___x_882_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_925_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v_mod_897_; uint8_t v___x_898_; 
v___x_894_ = lean_box(0);
v___x_895_ = l_Lean_Environment_header(v_env_869_);
lean_dec_ref(v_env_869_);
v___x_896_ = l_Lean_EnvironmentHeader_moduleNames(v___x_895_);
v_mod_897_ = lean_array_get(v___x_894_, v___x_896_, v_val_890_);
lean_dec(v_val_890_);
lean_dec_ref(v___x_896_);
v___x_898_ = l_Lean_isPrivateName(v_declHint_865_);
lean_dec(v_declHint_865_);
if (v___x_898_ == 0)
{
lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_910_; 
v___x_899_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__11);
v___x_900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_900_, 0, v___x_899_);
lean_ctor_set(v___x_900_, 1, v_c_881_);
v___x_901_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__13);
v___x_902_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_902_, 0, v___x_900_);
lean_ctor_set(v___x_902_, 1, v___x_901_);
v___x_903_ = l_Lean_MessageData_ofName(v_mod_897_);
v___x_904_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_904_, 0, v___x_902_);
lean_ctor_set(v___x_904_, 1, v___x_903_);
v___x_905_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__15);
v___x_906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_906_, 0, v___x_904_);
lean_ctor_set(v___x_906_, 1, v___x_905_);
v___x_907_ = l_Lean_MessageData_note(v___x_906_);
v___x_908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_908_, 0, v_msg_864_);
lean_ctor_set(v___x_908_, 1, v___x_907_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 0);
lean_ctor_set(v___x_892_, 0, v___x_908_);
v___x_910_ = v___x_892_;
goto v_reusejp_909_;
}
else
{
lean_object* v_reuseFailAlloc_911_; 
v_reuseFailAlloc_911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_911_, 0, v___x_908_);
v___x_910_ = v_reuseFailAlloc_911_;
goto v_reusejp_909_;
}
v_reusejp_909_:
{
return v___x_910_;
}
}
else
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_923_; 
v___x_912_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__7);
v___x_913_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_913_, 0, v___x_912_);
lean_ctor_set(v___x_913_, 1, v_c_881_);
v___x_914_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__17);
v___x_915_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_915_, 0, v___x_913_);
lean_ctor_set(v___x_915_, 1, v___x_914_);
v___x_916_ = l_Lean_MessageData_ofName(v_mod_897_);
v___x_917_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_917_, 0, v___x_915_);
lean_ctor_set(v___x_917_, 1, v___x_916_);
v___x_918_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___closed__19);
v___x_919_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_919_, 0, v___x_917_);
lean_ctor_set(v___x_919_, 1, v___x_918_);
v___x_920_ = l_Lean_MessageData_note(v___x_919_);
v___x_921_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_921_, 0, v_msg_864_);
lean_ctor_set(v___x_921_, 1, v___x_920_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 0);
lean_ctor_set(v___x_892_, 0, v___x_921_);
v___x_923_ = v___x_892_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v___x_921_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_926_; 
lean_dec_ref(v_env_869_);
lean_dec(v_declHint_865_);
v___x_926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_926_, 0, v_msg_864_);
return v___x_926_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg___boxed(lean_object* v_msg_927_, lean_object* v_declHint_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_927_, v_declHint_928_, v___y_929_);
lean_dec(v___y_929_);
return v_res_931_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(lean_object* v_msg_932_, lean_object* v_declHint_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v___x_943_; lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_953_; 
v___x_943_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_932_, v_declHint_933_, v___y_941_);
v_a_944_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_953_ == 0)
{
v___x_946_ = v___x_943_;
v_isShared_947_ = v_isSharedCheck_953_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_943_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_953_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_951_; 
v___x_948_ = l_Lean_unknownIdentifierMessageTag;
v___x_949_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_949_, 0, v___x_948_);
lean_ctor_set(v___x_949_, 1, v_a_944_);
if (v_isShared_947_ == 0)
{
lean_ctor_set(v___x_946_, 0, v___x_949_);
v___x_951_ = v___x_946_;
goto v_reusejp_950_;
}
else
{
lean_object* v_reuseFailAlloc_952_; 
v_reuseFailAlloc_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_952_, 0, v___x_949_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30___boxed(lean_object* v_msg_954_, lean_object* v_declHint_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_954_, v_declHint_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_, v___y_962_, v___y_963_);
lean_dec(v___y_963_);
lean_dec_ref(v___y_962_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v___y_957_);
lean_dec(v___y_956_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(lean_object* v_ref_966_, lean_object* v_msg_967_, lean_object* v_declHint_968_, lean_object* v___y_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; lean_object* v_a_979_; lean_object* v___x_980_; 
v___x_978_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30(v_msg_967_, v_declHint_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref(v___x_978_);
v___x_980_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_966_, v_a_979_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg___boxed(lean_object* v_ref_981_, lean_object* v_msg_982_, lean_object* v_declHint_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v_res_993_; 
v_res_993_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_981_, v_msg_982_, v_declHint_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_);
lean_dec(v___y_991_);
lean_dec_ref(v___y_990_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
lean_dec(v___y_985_);
lean_dec(v___y_984_);
lean_dec(v_ref_981_);
return v_res_993_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0(void){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = lean_mk_string_unchecked("Unknown constant `", 18, 18);
return v___x_994_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; 
v___x_995_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__0);
v___x_996_ = l_Lean_stringToMessageData(v___x_995_);
return v___x_996_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2(void){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_997_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__2);
v___x_999_ = l_Lean_stringToMessageData(v___x_998_);
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(lean_object* v_ref_1000_, lean_object* v_constName_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_){
_start:
{
lean_object* v___x_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1011_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__1);
v___x_1012_ = 0;
lean_inc(v_constName_1001_);
v___x_1013_ = l_Lean_MessageData_ofConstName(v_constName_1001_, v___x_1012_);
v___x_1014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1011_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___closed__3);
v___x_1016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1014_);
lean_ctor_set(v___x_1016_, 1, v___x_1015_);
v___x_1017_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_1000_, v___x_1016_, v_constName_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg___boxed(lean_object* v_ref_1018_, lean_object* v_constName_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v_res_1029_; 
v_res_1029_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_1018_, v_constName_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec(v___y_1021_);
lean_dec(v___y_1020_);
lean_dec(v_ref_1018_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(lean_object* v_constName_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v_ref_1040_; lean_object* v___x_1041_; 
v_ref_1040_ = lean_ctor_get(v___y_1037_, 5);
v___x_1041_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_1040_, v_constName_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg___boxed(lean_object* v_constName_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
lean_object* v_res_1052_; 
v_res_1052_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec(v___y_1043_);
return v_res_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(lean_object* v_constName_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___x_1063_; lean_object* v_env_1064_; uint8_t v___x_1065_; lean_object* v___x_1066_; 
v___x_1063_ = lean_st_ref_get(v___y_1061_);
v_env_1064_ = lean_ctor_get(v___x_1063_, 0);
lean_inc_ref(v_env_1064_);
lean_dec(v___x_1063_);
v___x_1065_ = 0;
lean_inc(v_constName_1053_);
v___x_1066_ = l_Lean_Environment_find_x3f(v_env_1064_, v_constName_1053_, v___x_1065_);
if (lean_obj_tag(v___x_1066_) == 0)
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_);
return v___x_1067_;
}
else
{
lean_object* v_val_1068_; lean_object* v___x_1070_; uint8_t v_isShared_1071_; uint8_t v_isSharedCheck_1075_; 
lean_dec(v_constName_1053_);
v_val_1068_ = lean_ctor_get(v___x_1066_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1075_ == 0)
{
v___x_1070_ = v___x_1066_;
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
else
{
lean_inc(v_val_1068_);
lean_dec(v___x_1066_);
v___x_1070_ = lean_box(0);
v_isShared_1071_ = v_isSharedCheck_1075_;
goto v_resetjp_1069_;
}
v_resetjp_1069_:
{
lean_object* v___x_1073_; 
if (v_isShared_1071_ == 0)
{
lean_ctor_set_tag(v___x_1070_, 0);
v___x_1073_ = v___x_1070_;
goto v_reusejp_1072_;
}
else
{
lean_object* v_reuseFailAlloc_1074_; 
v_reuseFailAlloc_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1074_, 0, v_val_1068_);
v___x_1073_ = v_reuseFailAlloc_1074_;
goto v_reusejp_1072_;
}
v_reusejp_1072_:
{
return v___x_1073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18___boxed(lean_object* v_constName_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_){
_start:
{
lean_object* v_res_1086_; 
v_res_1086_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_constName_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_);
lean_dec(v___y_1084_);
lean_dec_ref(v___y_1083_);
lean_dec(v___y_1082_);
lean_dec_ref(v___y_1081_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec(v___y_1077_);
return v_res_1086_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0(void){
_start:
{
lean_object* v___x_1087_; 
v___x_1087_ = l_instMonadEIO(lean_box(0));
return v___x_1087_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1(void){
_start:
{
lean_object* v___f_1088_; 
v___f_1088_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1088_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2(void){
_start:
{
lean_object* v___f_1089_; 
v___f_1089_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1089_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3(void){
_start:
{
lean_object* v___f_1090_; 
v___f_1090_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_1090_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4(void){
_start:
{
lean_object* v___f_1091_; 
v___f_1091_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_1091_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5(void){
_start:
{
lean_object* v___f_1092_; 
v___f_1092_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed), 9, 0);
return v___f_1092_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6(void){
_start:
{
lean_object* v___f_1093_; 
v___f_1093_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed), 11, 0);
return v___f_1093_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(lean_object* v_msg_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v_toApplicative_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1199_; 
v___x_1104_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__0);
v___x_1105_ = l_StateRefT_x27_instMonad___redArg(v___x_1104_);
v_toApplicative_1106_ = lean_ctor_get(v___x_1105_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1105_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; 
v_unused_1200_ = lean_ctor_get(v___x_1105_, 1);
lean_dec(v_unused_1200_);
v___x_1108_ = v___x_1105_;
v_isShared_1109_ = v_isSharedCheck_1199_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_toApplicative_1106_);
lean_dec(v___x_1105_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1199_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v_toFunctor_1110_; lean_object* v_toSeq_1111_; lean_object* v_toSeqLeft_1112_; lean_object* v_toSeqRight_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1197_; 
v_toFunctor_1110_ = lean_ctor_get(v_toApplicative_1106_, 0);
v_toSeq_1111_ = lean_ctor_get(v_toApplicative_1106_, 2);
v_toSeqLeft_1112_ = lean_ctor_get(v_toApplicative_1106_, 3);
v_toSeqRight_1113_ = lean_ctor_get(v_toApplicative_1106_, 4);
v_isSharedCheck_1197_ = !lean_is_exclusive(v_toApplicative_1106_);
if (v_isSharedCheck_1197_ == 0)
{
lean_object* v_unused_1198_; 
v_unused_1198_ = lean_ctor_get(v_toApplicative_1106_, 1);
lean_dec(v_unused_1198_);
v___x_1115_ = v_toApplicative_1106_;
v_isShared_1116_ = v_isSharedCheck_1197_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_toSeqRight_1113_);
lean_inc(v_toSeqLeft_1112_);
lean_inc(v_toSeq_1111_);
lean_inc(v_toFunctor_1110_);
lean_dec(v_toApplicative_1106_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1197_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___f_1117_; lean_object* v___f_1118_; lean_object* v___f_1119_; lean_object* v___f_1120_; lean_object* v___x_1121_; lean_object* v___f_1122_; lean_object* v___f_1123_; lean_object* v___f_1124_; lean_object* v___x_1126_; 
v___f_1117_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__1);
v___f_1118_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__2);
lean_inc_ref(v_toFunctor_1110_);
v___f_1119_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1119_, 0, v_toFunctor_1110_);
v___f_1120_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1120_, 0, v_toFunctor_1110_);
v___x_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___f_1119_);
lean_ctor_set(v___x_1121_, 1, v___f_1120_);
v___f_1122_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1122_, 0, v_toSeqRight_1113_);
v___f_1123_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1123_, 0, v_toSeqLeft_1112_);
v___f_1124_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1124_, 0, v_toSeq_1111_);
if (v_isShared_1116_ == 0)
{
lean_ctor_set(v___x_1115_, 4, v___f_1122_);
lean_ctor_set(v___x_1115_, 3, v___f_1123_);
lean_ctor_set(v___x_1115_, 2, v___f_1124_);
lean_ctor_set(v___x_1115_, 1, v___f_1117_);
lean_ctor_set(v___x_1115_, 0, v___x_1121_);
v___x_1126_ = v___x_1115_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1196_, 1, v___f_1117_);
lean_ctor_set(v_reuseFailAlloc_1196_, 2, v___f_1124_);
lean_ctor_set(v_reuseFailAlloc_1196_, 3, v___f_1123_);
lean_ctor_set(v_reuseFailAlloc_1196_, 4, v___f_1122_);
v___x_1126_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
lean_object* v___x_1128_; 
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 1, v___f_1118_);
lean_ctor_set(v___x_1108_, 0, v___x_1126_);
v___x_1128_ = v___x_1108_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v___f_1118_);
v___x_1128_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1129_; lean_object* v_toApplicative_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1193_; 
v___x_1129_ = l_StateRefT_x27_instMonad___redArg(v___x_1128_);
v_toApplicative_1130_ = lean_ctor_get(v___x_1129_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1129_);
if (v_isSharedCheck_1193_ == 0)
{
lean_object* v_unused_1194_; 
v_unused_1194_ = lean_ctor_get(v___x_1129_, 1);
lean_dec(v_unused_1194_);
v___x_1132_ = v___x_1129_;
v_isShared_1133_ = v_isSharedCheck_1193_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_toApplicative_1130_);
lean_dec(v___x_1129_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1193_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v_toFunctor_1134_; lean_object* v_toSeq_1135_; lean_object* v_toSeqLeft_1136_; lean_object* v_toSeqRight_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1191_; 
v_toFunctor_1134_ = lean_ctor_get(v_toApplicative_1130_, 0);
v_toSeq_1135_ = lean_ctor_get(v_toApplicative_1130_, 2);
v_toSeqLeft_1136_ = lean_ctor_get(v_toApplicative_1130_, 3);
v_toSeqRight_1137_ = lean_ctor_get(v_toApplicative_1130_, 4);
v_isSharedCheck_1191_ = !lean_is_exclusive(v_toApplicative_1130_);
if (v_isSharedCheck_1191_ == 0)
{
lean_object* v_unused_1192_; 
v_unused_1192_ = lean_ctor_get(v_toApplicative_1130_, 1);
lean_dec(v_unused_1192_);
v___x_1139_ = v_toApplicative_1130_;
v_isShared_1140_ = v_isSharedCheck_1191_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_toSeqRight_1137_);
lean_inc(v_toSeqLeft_1136_);
lean_inc(v_toSeq_1135_);
lean_inc(v_toFunctor_1134_);
lean_dec(v_toApplicative_1130_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1191_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___f_1141_; lean_object* v___f_1142_; lean_object* v___f_1143_; lean_object* v___f_1144_; lean_object* v___x_1145_; lean_object* v___f_1146_; lean_object* v___f_1147_; lean_object* v___f_1148_; lean_object* v___x_1150_; 
v___f_1141_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__3);
v___f_1142_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__4);
lean_inc_ref(v_toFunctor_1134_);
v___f_1143_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1143_, 0, v_toFunctor_1134_);
v___f_1144_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1144_, 0, v_toFunctor_1134_);
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v___f_1143_);
lean_ctor_set(v___x_1145_, 1, v___f_1144_);
v___f_1146_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1146_, 0, v_toSeqRight_1137_);
v___f_1147_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1147_, 0, v_toSeqLeft_1136_);
v___f_1148_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1148_, 0, v_toSeq_1135_);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 4, v___f_1146_);
lean_ctor_set(v___x_1139_, 3, v___f_1147_);
lean_ctor_set(v___x_1139_, 2, v___f_1148_);
lean_ctor_set(v___x_1139_, 1, v___f_1141_);
lean_ctor_set(v___x_1139_, 0, v___x_1145_);
v___x_1150_ = v___x_1139_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v___x_1145_);
lean_ctor_set(v_reuseFailAlloc_1190_, 1, v___f_1141_);
lean_ctor_set(v_reuseFailAlloc_1190_, 2, v___f_1148_);
lean_ctor_set(v_reuseFailAlloc_1190_, 3, v___f_1147_);
lean_ctor_set(v_reuseFailAlloc_1190_, 4, v___f_1146_);
v___x_1150_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
lean_object* v___x_1152_; 
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 1, v___f_1142_);
lean_ctor_set(v___x_1132_, 0, v___x_1150_);
v___x_1152_ = v___x_1132_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1150_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v___f_1142_);
v___x_1152_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
lean_object* v___x_1153_; lean_object* v_toApplicative_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1187_; 
v___x_1153_ = l_StateRefT_x27_instMonad___redArg(v___x_1152_);
v_toApplicative_1154_ = lean_ctor_get(v___x_1153_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1153_);
if (v_isSharedCheck_1187_ == 0)
{
lean_object* v_unused_1188_; 
v_unused_1188_ = lean_ctor_get(v___x_1153_, 1);
lean_dec(v_unused_1188_);
v___x_1156_ = v___x_1153_;
v_isShared_1157_ = v_isSharedCheck_1187_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_toApplicative_1154_);
lean_dec(v___x_1153_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1187_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_toFunctor_1158_; lean_object* v_toSeq_1159_; lean_object* v_toSeqLeft_1160_; lean_object* v_toSeqRight_1161_; lean_object* v___x_1163_; uint8_t v_isShared_1164_; uint8_t v_isSharedCheck_1185_; 
v_toFunctor_1158_ = lean_ctor_get(v_toApplicative_1154_, 0);
v_toSeq_1159_ = lean_ctor_get(v_toApplicative_1154_, 2);
v_toSeqLeft_1160_ = lean_ctor_get(v_toApplicative_1154_, 3);
v_toSeqRight_1161_ = lean_ctor_get(v_toApplicative_1154_, 4);
v_isSharedCheck_1185_ = !lean_is_exclusive(v_toApplicative_1154_);
if (v_isSharedCheck_1185_ == 0)
{
lean_object* v_unused_1186_; 
v_unused_1186_ = lean_ctor_get(v_toApplicative_1154_, 1);
lean_dec(v_unused_1186_);
v___x_1163_ = v_toApplicative_1154_;
v_isShared_1164_ = v_isSharedCheck_1185_;
goto v_resetjp_1162_;
}
else
{
lean_inc(v_toSeqRight_1161_);
lean_inc(v_toSeqLeft_1160_);
lean_inc(v_toSeq_1159_);
lean_inc(v_toFunctor_1158_);
lean_dec(v_toApplicative_1154_);
v___x_1163_ = lean_box(0);
v_isShared_1164_ = v_isSharedCheck_1185_;
goto v_resetjp_1162_;
}
v_resetjp_1162_:
{
lean_object* v___f_1165_; lean_object* v___f_1166_; lean_object* v___f_1167_; lean_object* v___f_1168_; lean_object* v___x_1169_; lean_object* v___f_1170_; lean_object* v___f_1171_; lean_object* v___f_1172_; lean_object* v___x_1174_; 
v___f_1165_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__5);
v___f_1166_ = lean_obj_once(&l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6, &l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6_once, _init_l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___closed__6);
lean_inc_ref(v_toFunctor_1158_);
v___f_1167_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1167_, 0, v_toFunctor_1158_);
v___f_1168_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1168_, 0, v_toFunctor_1158_);
v___x_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1169_, 0, v___f_1167_);
lean_ctor_set(v___x_1169_, 1, v___f_1168_);
v___f_1170_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1170_, 0, v_toSeqRight_1161_);
v___f_1171_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1171_, 0, v_toSeqLeft_1160_);
v___f_1172_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1172_, 0, v_toSeq_1159_);
if (v_isShared_1164_ == 0)
{
lean_ctor_set(v___x_1163_, 4, v___f_1170_);
lean_ctor_set(v___x_1163_, 3, v___f_1171_);
lean_ctor_set(v___x_1163_, 2, v___f_1172_);
lean_ctor_set(v___x_1163_, 1, v___f_1165_);
lean_ctor_set(v___x_1163_, 0, v___x_1169_);
v___x_1174_ = v___x_1163_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1169_);
lean_ctor_set(v_reuseFailAlloc_1184_, 1, v___f_1165_);
lean_ctor_set(v_reuseFailAlloc_1184_, 2, v___f_1172_);
lean_ctor_set(v_reuseFailAlloc_1184_, 3, v___f_1171_);
lean_ctor_set(v_reuseFailAlloc_1184_, 4, v___f_1170_);
v___x_1174_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
lean_object* v___x_1176_; 
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 1, v___f_1166_);
lean_ctor_set(v___x_1156_, 0, v___x_1174_);
v___x_1176_ = v___x_1156_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1183_; 
v_reuseFailAlloc_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1183_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1183_, 1, v___f_1166_);
v___x_1176_ = v_reuseFailAlloc_1183_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_59182__overap_1181_; lean_object* v___x_1182_; 
v___x_1177_ = l_StateRefT_x27_instMonad___redArg(v___x_1176_);
v___x_1178_ = l_StateRefT_x27_instMonad___redArg(v___x_1177_);
v___x_1179_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_1180_ = l_instInhabitedOfMonad___redArg(v___x_1178_, v___x_1179_);
v___x_59182__overap_1181_ = lean_panic_fn_borrowed(v___x_1180_, v_msg_1094_);
lean_dec(v___x_1180_);
lean_inc(v___y_1102_);
lean_inc_ref(v___y_1101_);
lean_inc(v___y_1100_);
lean_inc_ref(v___y_1099_);
lean_inc(v___y_1098_);
lean_inc_ref(v___y_1097_);
lean_inc(v___y_1096_);
lean_inc(v___y_1095_);
v___x_1182_ = lean_apply_9(v___x_59182__overap_1181_, v___y_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_, v___y_1102_, lean_box(0));
return v___x_1182_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19___boxed(lean_object* v_msg_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_){
_start:
{
lean_object* v_res_1211_; 
v_res_1211_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v_msg_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
lean_dec(v___y_1207_);
lean_dec_ref(v___y_1206_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v___y_1203_);
lean_dec(v___y_1202_);
return v_res_1211_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0(void){
_start:
{
lean_object* v___x_1212_; 
v___x_1212_ = lean_mk_string_unchecked("Lean.Meta.Match.MatcherApp.Basic", 32, 32);
return v___x_1212_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1(void){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_mk_string_unchecked("Lean.Meta.matchMatcherApp\?", 26, 26);
return v___x_1213_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2(void){
_start:
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_mk_string_unchecked("expected constructor", 20, 20);
return v___x_1214_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3(void){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; 
v___x_1215_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__2);
v___x_1216_ = lean_unsigned_to_nat(53u);
v___x_1217_ = lean_unsigned_to_nat(62u);
v___x_1218_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__1);
v___x_1219_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__0);
v___x_1220_ = l_mkPanicMessageWithDecl(v___x_1219_, v___x_1218_, v___x_1217_, v___x_1216_, v___x_1215_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(size_t v_sz_1221_, size_t v_i_1222_, lean_object* v_bs_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
uint8_t v___x_1233_; 
v___x_1233_ = lean_usize_dec_lt(v_i_1222_, v_sz_1221_);
if (v___x_1233_ == 0)
{
lean_object* v___x_1234_; 
v___x_1234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1234_, 0, v_bs_1223_);
return v___x_1234_;
}
else
{
lean_object* v_v_1235_; lean_object* v___x_1236_; 
v_v_1235_ = lean_array_uget_borrowed(v_bs_1223_, v_i_1222_);
lean_inc(v_v_1235_);
v___x_1236_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_v_1235_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; lean_object* v___x_1238_; lean_object* v_bs_x27_1239_; lean_object* v_a_1241_; 
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
lean_inc(v_a_1237_);
lean_dec_ref(v___x_1236_);
v___x_1238_ = lean_unsigned_to_nat(0u);
v_bs_x27_1239_ = lean_array_uset(v_bs_1223_, v_i_1222_, v___x_1238_);
if (lean_obj_tag(v_a_1237_) == 6)
{
lean_object* v_val_1246_; lean_object* v_numFields_1247_; uint8_t v___x_1248_; lean_object* v___x_1249_; 
v_val_1246_ = lean_ctor_get(v_a_1237_, 0);
lean_inc_ref(v_val_1246_);
lean_dec_ref(v_a_1237_);
v_numFields_1247_ = lean_ctor_get(v_val_1246_, 4);
lean_inc(v_numFields_1247_);
lean_dec_ref(v_val_1246_);
v___x_1248_ = 0;
v___x_1249_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_1249_, 0, v_numFields_1247_);
lean_ctor_set(v___x_1249_, 1, v___x_1238_);
lean_ctor_set_uint8(v___x_1249_, sizeof(void*)*2, v___x_1248_);
v_a_1241_ = v___x_1249_;
goto v___jp_1240_;
}
else
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
lean_dec(v_a_1237_);
v___x_1250_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___closed__3);
v___x_1251_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__19(v___x_1250_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v_a_1252_; 
v_a_1252_ = lean_ctor_get(v___x_1251_, 0);
lean_inc(v_a_1252_);
lean_dec_ref(v___x_1251_);
v_a_1241_ = v_a_1252_;
goto v___jp_1240_;
}
else
{
lean_object* v_a_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1260_; 
lean_dec_ref(v_bs_x27_1239_);
v_a_1253_ = lean_ctor_get(v___x_1251_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1251_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1255_ = v___x_1251_;
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_a_1253_);
lean_dec(v___x_1251_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1260_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1258_; 
if (v_isShared_1256_ == 0)
{
v___x_1258_ = v___x_1255_;
goto v_reusejp_1257_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_a_1253_);
v___x_1258_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1257_;
}
v_reusejp_1257_:
{
return v___x_1258_;
}
}
}
}
v___jp_1240_:
{
size_t v___x_1242_; size_t v___x_1243_; lean_object* v___x_1244_; 
v___x_1242_ = ((size_t)1ULL);
v___x_1243_ = lean_usize_add(v_i_1222_, v___x_1242_);
v___x_1244_ = lean_array_uset(v_bs_x27_1239_, v_i_1222_, v_a_1241_);
v_i_1222_ = v___x_1243_;
v_bs_1223_ = v___x_1244_;
goto _start;
}
}
else
{
lean_object* v_a_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1268_; 
lean_dec_ref(v_bs_1223_);
v_a_1261_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1268_ == 0)
{
v___x_1263_ = v___x_1236_;
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_a_1261_);
lean_dec(v___x_1236_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1268_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1266_; 
if (v_isShared_1264_ == 0)
{
v___x_1266_ = v___x_1263_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1267_; 
v_reuseFailAlloc_1267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1267_, 0, v_a_1261_);
v___x_1266_ = v_reuseFailAlloc_1267_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
return v___x_1266_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21___boxed(lean_object* v_sz_1269_, lean_object* v_i_1270_, lean_object* v_bs_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_){
_start:
{
size_t v_sz_boxed_1281_; size_t v_i_boxed_1282_; lean_object* v_res_1283_; 
v_sz_boxed_1281_ = lean_unbox_usize(v_sz_1269_);
lean_dec(v_sz_1269_);
v_i_boxed_1282_ = lean_unbox_usize(v_i_1270_);
lean_dec(v_i_1270_);
v_res_1283_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(v_sz_boxed_1281_, v_i_boxed_1282_, v_bs_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
lean_dec(v___y_1277_);
lean_dec_ref(v___y_1276_);
lean_dec(v___y_1275_);
lean_dec_ref(v___y_1274_);
lean_dec(v___y_1273_);
lean_dec(v___y_1272_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(lean_object* v_declName_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; lean_object* v_env_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1287_ = lean_st_ref_get(v___y_1285_);
v_env_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc_ref(v_env_1288_);
lean_dec(v___x_1287_);
v___x_1289_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1288_, v_declName_1284_);
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg___boxed(lean_object* v_declName_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_1291_, v___y_1292_);
lean_dec(v___y_1292_);
return v_res_1294_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0(void){
_start:
{
lean_object* v___x_1295_; lean_object* v_dummy_1296_; 
v___x_1295_ = lean_box(0);
v_dummy_1296_ = l_Lean_Expr_sort___override(v___x_1295_);
return v_dummy_1296_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1(void){
_start:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1297_ = lean_box(0);
v___x_1298_ = lean_unsigned_to_nat(16u);
v___x_1299_ = lean_mk_array(v___x_1298_, v___x_1297_);
return v___x_1299_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2(void){
_start:
{
lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__1);
v___x_1301_ = lean_unsigned_to_nat(0u);
v___x_1302_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1301_);
lean_ctor_set(v___x_1302_, 1, v___x_1300_);
return v___x_1302_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
v___x_1303_ = lean_unsigned_to_nat(0u);
v___x_1304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1303_);
return v___x_1304_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(lean_object* v_e_1305_, uint8_t v_alsoCasesOn_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
uint8_t v___x_1319_; 
v___x_1319_ = l_Lean_Expr_isApp(v_e_1305_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1321_; 
lean_dec_ref(v_e_1305_);
v___x_1320_ = lean_box(0);
v___x_1321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1321_, 0, v___x_1320_);
return v___x_1321_;
}
else
{
lean_object* v___x_1322_; 
v___x_1322_ = l_Lean_Expr_getAppFn(v_e_1305_);
if (lean_obj_tag(v___x_1322_) == 4)
{
lean_object* v_declName_1323_; lean_object* v_us_1324_; lean_object* v___x_1325_; lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1480_; 
v_declName_1323_ = lean_ctor_get(v___x_1322_, 0);
lean_inc_n(v_declName_1323_, 2);
v_us_1324_ = lean_ctor_get(v___x_1322_, 1);
lean_inc(v_us_1324_);
lean_dec_ref(v___x_1322_);
v___x_1325_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_1323_, v___y_1314_);
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1480_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1480_ == 0)
{
v___x_1328_ = v___x_1325_;
v_isShared_1329_ = v_isSharedCheck_1480_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1325_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1480_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
if (lean_obj_tag(v_a_1326_) == 1)
{
lean_object* v_val_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1372_; 
v_val_1330_ = lean_ctor_get(v_a_1326_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v_a_1326_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1332_ = v_a_1326_;
v_isShared_1333_ = v_isSharedCheck_1372_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_val_1330_);
lean_dec(v_a_1326_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1372_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v_dummy_1334_; lean_object* v_nargs_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v_args_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; uint8_t v___x_1342_; 
v_dummy_1334_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
v_nargs_1335_ = l_Lean_Expr_getAppNumArgs(v_e_1305_);
lean_inc(v_nargs_1335_);
v___x_1336_ = lean_mk_array(v_nargs_1335_, v_dummy_1334_);
v___x_1337_ = lean_unsigned_to_nat(1u);
v___x_1338_ = lean_nat_sub(v_nargs_1335_, v___x_1337_);
lean_dec(v_nargs_1335_);
v_args_1339_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1305_, v___x_1336_, v___x_1338_);
v___x_1340_ = lean_array_get_size(v_args_1339_);
v___x_1341_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_1330_);
v___x_1342_ = lean_nat_dec_lt(v___x_1340_, v___x_1341_);
lean_dec(v___x_1341_);
if (v___x_1342_ == 0)
{
lean_object* v_numParams_1343_; lean_object* v_numDiscrs_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1363_; 
v_numParams_1343_ = lean_ctor_get(v_val_1330_, 0);
v_numDiscrs_1344_ = lean_ctor_get(v_val_1330_, 1);
v___x_1345_ = lean_array_mk(v_us_1324_);
v___x_1346_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1343_);
v___x_1347_ = l_Array_extract___redArg(v_args_1339_, v___x_1346_, v_numParams_1343_);
v___x_1348_ = l_Lean_instInhabitedExpr;
v___x_1349_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_1330_);
v___x_1350_ = lean_array_get(v___x_1348_, v_args_1339_, v___x_1349_);
lean_dec(v___x_1349_);
v___x_1351_ = lean_nat_add(v_numParams_1343_, v___x_1337_);
v___x_1352_ = lean_nat_add(v___x_1351_, v_numDiscrs_1344_);
lean_inc(v___x_1352_);
lean_inc_ref_n(v_args_1339_, 2);
v___x_1353_ = l_Array_toSubarray___redArg(v_args_1339_, v___x_1351_, v___x_1352_);
v___x_1354_ = l_Subarray_copy___redArg(v___x_1353_);
v___x_1355_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_1330_);
v___x_1356_ = lean_nat_add(v___x_1352_, v___x_1355_);
lean_dec(v___x_1355_);
lean_inc(v___x_1356_);
v___x_1357_ = l_Array_toSubarray___redArg(v_args_1339_, v___x_1352_, v___x_1356_);
v___x_1358_ = l_Subarray_copy___redArg(v___x_1357_);
v___x_1359_ = l_Array_toSubarray___redArg(v_args_1339_, v___x_1356_, v___x_1340_);
v___x_1360_ = l_Subarray_copy___redArg(v___x_1359_);
v___x_1361_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1361_, 0, v_val_1330_);
lean_ctor_set(v___x_1361_, 1, v_declName_1323_);
lean_ctor_set(v___x_1361_, 2, v___x_1345_);
lean_ctor_set(v___x_1361_, 3, v___x_1347_);
lean_ctor_set(v___x_1361_, 4, v___x_1350_);
lean_ctor_set(v___x_1361_, 5, v___x_1354_);
lean_ctor_set(v___x_1361_, 6, v___x_1358_);
lean_ctor_set(v___x_1361_, 7, v___x_1360_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v___x_1361_);
v___x_1363_ = v___x_1332_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1361_);
v___x_1363_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
lean_object* v___x_1365_; 
if (v_isShared_1329_ == 0)
{
lean_ctor_set(v___x_1328_, 0, v___x_1363_);
v___x_1365_ = v___x_1328_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1366_; 
v_reuseFailAlloc_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1366_, 0, v___x_1363_);
v___x_1365_ = v_reuseFailAlloc_1366_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
return v___x_1365_;
}
}
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1370_; 
lean_dec_ref(v_args_1339_);
lean_del_object(v___x_1332_);
lean_dec(v_val_1330_);
lean_dec(v_us_1324_);
lean_dec(v_declName_1323_);
v___x_1368_ = lean_box(0);
if (v_isShared_1329_ == 0)
{
lean_ctor_set(v___x_1328_, 0, v___x_1368_);
v___x_1370_ = v___x_1328_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1368_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
else
{
lean_object* v___x_1373_; 
lean_del_object(v___x_1328_);
lean_dec(v_a_1326_);
v___x_1373_ = lean_st_ref_get(v___y_1314_);
if (v_alsoCasesOn_1306_ == 0)
{
lean_dec(v___x_1373_);
lean_dec(v_us_1324_);
lean_dec(v_declName_1323_);
lean_dec_ref(v_e_1305_);
goto v___jp_1316_;
}
else
{
lean_object* v_env_1374_; uint8_t v___x_1375_; 
v_env_1374_ = lean_ctor_get(v___x_1373_, 0);
lean_inc_ref(v_env_1374_);
lean_dec(v___x_1373_);
lean_inc(v_declName_1323_);
v___x_1375_ = l_Lean_isCasesOnRecursor(v_env_1374_, v_declName_1323_);
if (v___x_1375_ == 0)
{
lean_dec(v_us_1324_);
lean_dec(v_declName_1323_);
lean_dec_ref(v_e_1305_);
goto v___jp_1316_;
}
else
{
lean_object* v_indName_1376_; lean_object* v___x_1377_; 
v_indName_1376_ = l_Lean_Name_getPrefix(v_declName_1323_);
v___x_1377_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18(v_indName_1376_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v___x_1380_; uint8_t v_isShared_1381_; uint8_t v_isSharedCheck_1471_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1471_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1471_ == 0)
{
v___x_1380_ = v___x_1377_;
v_isShared_1381_ = v_isSharedCheck_1471_;
goto v_resetjp_1379_;
}
else
{
lean_inc(v_a_1378_);
lean_dec(v___x_1377_);
v___x_1380_ = lean_box(0);
v_isShared_1381_ = v_isSharedCheck_1471_;
goto v_resetjp_1379_;
}
v_resetjp_1379_:
{
if (lean_obj_tag(v_a_1378_) == 5)
{
lean_object* v_val_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1466_; 
v_val_1382_ = lean_ctor_get(v_a_1378_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_a_1378_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1384_ = v_a_1378_;
v_isShared_1385_ = v_isSharedCheck_1466_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_val_1382_);
lean_dec(v_a_1378_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1466_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v_toConstantVal_1386_; lean_object* v_numParams_1387_; lean_object* v_numIndices_1388_; lean_object* v_ctors_1389_; lean_object* v_nargs_1390_; lean_object* v_dummy_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v_args_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; uint8_t v___x_1402_; 
v_toConstantVal_1386_ = lean_ctor_get(v_val_1382_, 0);
lean_inc_ref(v_toConstantVal_1386_);
v_numParams_1387_ = lean_ctor_get(v_val_1382_, 1);
lean_inc(v_numParams_1387_);
v_numIndices_1388_ = lean_ctor_get(v_val_1382_, 2);
lean_inc(v_numIndices_1388_);
v_ctors_1389_ = lean_ctor_get(v_val_1382_, 4);
lean_inc(v_ctors_1389_);
v_nargs_1390_ = l_Lean_Expr_getAppNumArgs(v_e_1305_);
v_dummy_1391_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v_nargs_1390_);
v___x_1392_ = lean_mk_array(v_nargs_1390_, v_dummy_1391_);
v___x_1393_ = lean_unsigned_to_nat(1u);
v___x_1394_ = lean_nat_sub(v_nargs_1390_, v___x_1393_);
lean_dec(v_nargs_1390_);
v_args_1395_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1305_, v___x_1392_, v___x_1394_);
v___x_1396_ = lean_nat_add(v_numParams_1387_, v___x_1393_);
v___x_1397_ = lean_nat_add(v___x_1396_, v_numIndices_1388_);
v___x_1398_ = lean_nat_add(v___x_1397_, v___x_1393_);
lean_dec(v___x_1397_);
v___x_1399_ = l_Lean_InductiveVal_numCtors(v_val_1382_);
lean_dec_ref(v_val_1382_);
v___x_1400_ = lean_nat_add(v___x_1398_, v___x_1399_);
lean_dec(v___x_1399_);
v___x_1401_ = lean_array_get_size(v_args_1395_);
v___x_1402_ = lean_nat_dec_le(v___x_1400_, v___x_1401_);
if (v___x_1402_ == 0)
{
lean_object* v___x_1403_; lean_object* v___x_1405_; 
lean_dec(v___x_1400_);
lean_dec(v___x_1398_);
lean_dec(v___x_1396_);
lean_dec_ref(v_args_1395_);
lean_dec(v_ctors_1389_);
lean_dec(v_numIndices_1388_);
lean_dec(v_numParams_1387_);
lean_dec_ref(v_toConstantVal_1386_);
lean_del_object(v___x_1384_);
lean_dec(v_us_1324_);
lean_dec(v_declName_1323_);
v___x_1403_ = lean_box(0);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v___x_1403_);
v___x_1405_ = v___x_1380_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v___x_1403_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
else
{
lean_object* v___x_1407_; lean_object* v_params_1408_; lean_object* v___x_1409_; lean_object* v_motive_1410_; lean_object* v_discrs_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v_discrInfos_1414_; lean_object* v_alts_1415_; lean_object* v___y_1417_; lean_object* v___y_1418_; lean_object* v_lower_1457_; lean_object* v_upper_1458_; uint8_t v___x_1465_; 
lean_del_object(v___x_1380_);
v___x_1407_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_1387_);
lean_inc_ref_n(v_args_1395_, 3);
v_params_1408_ = l_Array_toSubarray___redArg(v_args_1395_, v___x_1407_, v_numParams_1387_);
v___x_1409_ = l_Lean_instInhabitedExpr;
v_motive_1410_ = lean_array_get(v___x_1409_, v_args_1395_, v_numParams_1387_);
lean_dec(v_numParams_1387_);
lean_inc(v___x_1398_);
v_discrs_1411_ = l_Array_toSubarray___redArg(v_args_1395_, v___x_1396_, v___x_1398_);
v___x_1412_ = lean_nat_add(v_numIndices_1388_, v___x_1393_);
lean_dec(v_numIndices_1388_);
v___x_1413_ = lean_box(0);
v_discrInfos_1414_ = lean_mk_array(v___x_1412_, v___x_1413_);
lean_inc(v___x_1400_);
v_alts_1415_ = l_Array_toSubarray___redArg(v_args_1395_, v___x_1398_, v___x_1400_);
v___x_1465_ = lean_nat_dec_le(v___x_1400_, v___x_1407_);
if (v___x_1465_ == 0)
{
v_lower_1457_ = v___x_1400_;
v_upper_1458_ = v___x_1401_;
goto v___jp_1456_;
}
else
{
lean_dec(v___x_1400_);
v_lower_1457_ = v___x_1407_;
v_upper_1458_ = v___x_1401_;
goto v___jp_1456_;
}
v___jp_1416_:
{
lean_object* v___x_1419_; size_t v_sz_1420_; size_t v___x_1421_; lean_object* v___x_1422_; 
v___x_1419_ = lean_array_mk(v_ctors_1389_);
v_sz_1420_ = lean_array_size(v___x_1419_);
v___x_1421_ = ((size_t)0ULL);
v___x_1422_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__21(v_sz_1420_, v___x_1421_, v___x_1419_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1447_; 
v_a_1423_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1425_ = v___x_1422_;
v_isShared_1426_ = v_isSharedCheck_1447_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1422_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1447_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v_start_1427_; lean_object* v_stop_1428_; lean_object* v_start_1429_; lean_object* v_stop_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1442_; 
v_start_1427_ = lean_ctor_get(v_params_1408_, 1);
lean_inc(v_start_1427_);
v_stop_1428_ = lean_ctor_get(v_params_1408_, 2);
lean_inc(v_stop_1428_);
v_start_1429_ = lean_ctor_get(v_discrs_1411_, 1);
lean_inc(v_start_1429_);
v_stop_1430_ = lean_ctor_get(v_discrs_1411_, 2);
lean_inc(v_stop_1430_);
v___x_1431_ = lean_nat_sub(v_stop_1428_, v_start_1427_);
lean_dec(v_start_1427_);
lean_dec(v_stop_1428_);
v___x_1432_ = lean_nat_sub(v_stop_1430_, v_start_1429_);
lean_dec(v_start_1429_);
lean_dec(v_stop_1430_);
v___x_1433_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__2);
v___x_1434_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1431_);
lean_ctor_set(v___x_1434_, 1, v___x_1432_);
lean_ctor_set(v___x_1434_, 2, v_a_1423_);
lean_ctor_set(v___x_1434_, 3, v___y_1418_);
lean_ctor_set(v___x_1434_, 4, v_discrInfos_1414_);
lean_ctor_set(v___x_1434_, 5, v___x_1433_);
v___x_1435_ = lean_array_mk(v_us_1324_);
v___x_1436_ = l_Subarray_copy___redArg(v_params_1408_);
v___x_1437_ = l_Subarray_copy___redArg(v_discrs_1411_);
v___x_1438_ = l_Subarray_copy___redArg(v_alts_1415_);
v___x_1439_ = l_Subarray_copy___redArg(v___y_1417_);
v___x_1440_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1434_);
lean_ctor_set(v___x_1440_, 1, v_declName_1323_);
lean_ctor_set(v___x_1440_, 2, v___x_1435_);
lean_ctor_set(v___x_1440_, 3, v___x_1436_);
lean_ctor_set(v___x_1440_, 4, v_motive_1410_);
lean_ctor_set(v___x_1440_, 5, v___x_1437_);
lean_ctor_set(v___x_1440_, 6, v___x_1438_);
lean_ctor_set(v___x_1440_, 7, v___x_1439_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 1);
lean_ctor_set(v___x_1384_, 0, v___x_1440_);
v___x_1442_ = v___x_1384_;
goto v_reusejp_1441_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v___x_1440_);
v___x_1442_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1441_;
}
v_reusejp_1441_:
{
lean_object* v___x_1444_; 
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1442_);
v___x_1444_ = v___x_1425_;
goto v_reusejp_1443_;
}
else
{
lean_object* v_reuseFailAlloc_1445_; 
v_reuseFailAlloc_1445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1445_, 0, v___x_1442_);
v___x_1444_ = v_reuseFailAlloc_1445_;
goto v_reusejp_1443_;
}
v_reusejp_1443_:
{
return v___x_1444_;
}
}
}
}
else
{
lean_object* v_a_1448_; lean_object* v___x_1450_; uint8_t v_isShared_1451_; uint8_t v_isSharedCheck_1455_; 
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
lean_dec_ref(v_alts_1415_);
lean_dec_ref(v_discrInfos_1414_);
lean_dec_ref(v_discrs_1411_);
lean_dec(v_motive_1410_);
lean_dec_ref(v_params_1408_);
lean_del_object(v___x_1384_);
lean_dec(v_us_1324_);
lean_dec(v_declName_1323_);
v_a_1448_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1455_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1455_ == 0)
{
v___x_1450_ = v___x_1422_;
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
else
{
lean_inc(v_a_1448_);
lean_dec(v___x_1422_);
v___x_1450_ = lean_box(0);
v_isShared_1451_ = v_isSharedCheck_1455_;
goto v_resetjp_1449_;
}
v_resetjp_1449_:
{
lean_object* v___x_1453_; 
if (v_isShared_1451_ == 0)
{
v___x_1453_ = v___x_1450_;
goto v_reusejp_1452_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v_a_1448_);
v___x_1453_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1452_;
}
v_reusejp_1452_:
{
return v___x_1453_;
}
}
}
}
v___jp_1456_:
{
lean_object* v_levelParams_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; uint8_t v___x_1463_; 
v_levelParams_1459_ = lean_ctor_get(v_toConstantVal_1386_, 1);
lean_inc(v_levelParams_1459_);
lean_dec_ref(v_toConstantVal_1386_);
v___x_1460_ = l_Array_toSubarray___redArg(v_args_1395_, v_lower_1457_, v_upper_1458_);
v___x_1461_ = l_List_lengthTR___redArg(v_levelParams_1459_);
lean_dec(v_levelParams_1459_);
v___x_1462_ = l_List_lengthTR___redArg(v_us_1324_);
v___x_1463_ = lean_nat_dec_eq(v___x_1461_, v___x_1462_);
lean_dec(v___x_1462_);
lean_dec(v___x_1461_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__3);
v___y_1417_ = v___x_1460_;
v___y_1418_ = v___x_1464_;
goto v___jp_1416_;
}
else
{
v___y_1417_ = v___x_1460_;
v___y_1418_ = v___x_1413_;
goto v___jp_1416_;
}
}
}
}
}
else
{
lean_object* v___x_1467_; lean_object* v___x_1469_; 
lean_dec(v_a_1378_);
lean_dec(v_us_1324_);
lean_dec(v_declName_1323_);
lean_dec_ref(v_e_1305_);
v___x_1467_ = lean_box(0);
if (v_isShared_1381_ == 0)
{
lean_ctor_set(v___x_1380_, 0, v___x_1467_);
v___x_1469_ = v___x_1380_;
goto v_reusejp_1468_;
}
else
{
lean_object* v_reuseFailAlloc_1470_; 
v_reuseFailAlloc_1470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1470_, 0, v___x_1467_);
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
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
lean_dec(v_us_1324_);
lean_dec(v_declName_1323_);
lean_dec_ref(v_e_1305_);
v_a_1472_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1377_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1377_);
v___x_1474_ = lean_box(0);
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
v_resetjp_1473_:
{
lean_object* v___x_1477_; 
if (v_isShared_1475_ == 0)
{
v___x_1477_ = v___x_1474_;
goto v_reusejp_1476_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v_a_1472_);
v___x_1477_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1476_;
}
v_reusejp_1476_:
{
return v___x_1477_;
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
lean_dec_ref(v___x_1322_);
lean_dec_ref(v_e_1305_);
goto v___jp_1316_;
}
}
v___jp_1316_:
{
lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1317_ = lean_box(0);
v___x_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___boxed(lean_object* v_e_1481_, lean_object* v_alsoCasesOn_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
uint8_t v_alsoCasesOn_boxed_1492_; lean_object* v_res_1493_; 
v_alsoCasesOn_boxed_1492_ = lean_unbox(v_alsoCasesOn_1482_);
v_res_1493_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_1481_, v_alsoCasesOn_boxed_1492_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v___y_1484_);
lean_dec(v___y_1483_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(lean_object* v_name_1494_, lean_object* v_type_1495_, lean_object* v_val_1496_, lean_object* v_k_1497_, uint8_t v_nondep_1498_, uint8_t v_kind_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v___f_1509_; lean_object* v___x_1510_; 
lean_inc(v___y_1503_);
lean_inc_ref(v___y_1502_);
lean_inc(v___y_1501_);
lean_inc(v___y_1500_);
v___f_1509_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1509_, 0, v_k_1497_);
lean_closure_set(v___f_1509_, 1, v___y_1500_);
lean_closure_set(v___f_1509_, 2, v___y_1501_);
lean_closure_set(v___f_1509_, 3, v___y_1502_);
lean_closure_set(v___f_1509_, 4, v___y_1503_);
v___x_1510_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_1494_, v_type_1495_, v_val_1496_, v___f_1509_, v_nondep_1498_, v_kind_1499_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_);
if (lean_obj_tag(v___x_1510_) == 0)
{
return v___x_1510_;
}
else
{
lean_object* v_a_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1518_; 
v_a_1511_ = lean_ctor_get(v___x_1510_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v___x_1510_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1513_ = v___x_1510_;
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_a_1511_);
lean_dec(v___x_1510_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1518_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1517_; 
v_reuseFailAlloc_1517_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1517_, 0, v_a_1511_);
v___x_1516_ = v_reuseFailAlloc_1517_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
return v___x_1516_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg___boxed(lean_object* v_name_1519_, lean_object* v_type_1520_, lean_object* v_val_1521_, lean_object* v_k_1522_, lean_object* v_nondep_1523_, lean_object* v_kind_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
uint8_t v_nondep_boxed_1534_; uint8_t v_kind_boxed_1535_; lean_object* v_res_1536_; 
v_nondep_boxed_1534_ = lean_unbox(v_nondep_1523_);
v_kind_boxed_1535_ = lean_unbox(v_kind_1524_);
v_res_1536_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1519_, v_type_1520_, v_val_1521_, v_k_1522_, v_nondep_boxed_1534_, v_kind_boxed_1535_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
lean_dec(v___y_1528_);
lean_dec_ref(v___y_1527_);
lean_dec(v___y_1526_);
lean_dec(v___y_1525_);
return v_res_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(lean_object* v_k_1537_, uint8_t v_usedLetOnly_1538_, lean_object* v_x_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_){
_start:
{
lean_object* v___x_1549_; 
lean_inc(v___y_1547_);
lean_inc_ref(v___y_1546_);
lean_inc(v___y_1545_);
lean_inc_ref(v___y_1544_);
lean_inc(v___y_1543_);
lean_inc_ref(v___y_1542_);
lean_inc(v___y_1541_);
lean_inc(v___y_1540_);
lean_inc_ref(v_x_1539_);
v___x_1549_ = lean_apply_10(v_k_1537_, v_x_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, lean_box(0));
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; uint8_t v___x_1555_; lean_object* v___x_1556_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref(v___x_1549_);
v___x_1551_ = lean_unsigned_to_nat(1u);
v___x_1552_ = lean_mk_empty_array_with_capacity(v___x_1551_);
v___x_1553_ = lean_array_push(v___x_1552_, v_x_1539_);
v___x_1554_ = 0;
v___x_1555_ = 1;
v___x_1556_ = l_Lean_Meta_mkLetFVars(v___x_1553_, v_a_1550_, v_usedLetOnly_1538_, v___x_1554_, v___x_1555_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
lean_dec_ref(v___x_1553_);
return v___x_1556_;
}
else
{
lean_dec_ref(v_x_1539_);
return v___x_1549_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed(lean_object* v_k_1557_, lean_object* v_usedLetOnly_1558_, lean_object* v_x_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_){
_start:
{
uint8_t v_usedLetOnly_boxed_1569_; lean_object* v_res_1570_; 
v_usedLetOnly_boxed_1569_ = lean_unbox(v_usedLetOnly_1558_);
v_res_1570_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0(v_k_1557_, v_usedLetOnly_boxed_1569_, v_x_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
lean_dec(v___y_1567_);
lean_dec_ref(v___y_1566_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec(v___y_1561_);
lean_dec(v___y_1560_);
return v_res_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(lean_object* v_name_1571_, lean_object* v_type_1572_, lean_object* v_val_1573_, lean_object* v_k_1574_, uint8_t v_nondep_1575_, uint8_t v_kind_1576_, uint8_t v_usedLetOnly_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v___x_1587_; lean_object* v___f_1588_; lean_object* v___x_1589_; 
v___x_1587_ = lean_box(v_usedLetOnly_1577_);
v___f_1588_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___lam__0___boxed), 12, 2);
lean_closure_set(v___f_1588_, 0, v_k_1574_);
lean_closure_set(v___f_1588_, 1, v___x_1587_);
v___x_1589_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_1571_, v_type_1572_, v_val_1573_, v___f_1588_, v_nondep_1575_, v_kind_1576_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11___boxed(lean_object* v_name_1590_, lean_object* v_type_1591_, lean_object* v_val_1592_, lean_object* v_k_1593_, lean_object* v_nondep_1594_, lean_object* v_kind_1595_, lean_object* v_usedLetOnly_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_){
_start:
{
uint8_t v_nondep_boxed_1606_; uint8_t v_kind_boxed_1607_; uint8_t v_usedLetOnly_boxed_1608_; lean_object* v_res_1609_; 
v_nondep_boxed_1606_ = lean_unbox(v_nondep_1594_);
v_kind_boxed_1607_ = lean_unbox(v_kind_1595_);
v_usedLetOnly_boxed_1608_ = lean_unbox(v_usedLetOnly_1596_);
v_res_1609_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_name_1590_, v_type_1591_, v_val_1592_, v_k_1593_, v_nondep_boxed_1606_, v_kind_boxed_1607_, v_usedLetOnly_boxed_1608_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
lean_dec(v___y_1604_);
lean_dec_ref(v___y_1603_);
lean_dec(v___y_1602_);
lean_dec_ref(v___y_1601_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec(v___y_1597_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(lean_object* v_k_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v___x_1620_; 
lean_inc(v___y_1614_);
lean_inc_ref(v___y_1613_);
lean_inc(v___y_1612_);
lean_inc(v___y_1611_);
v___x_1620_ = lean_apply_9(v_k_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, lean_box(0));
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed(lean_object* v_k_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_){
_start:
{
lean_object* v_res_1631_; 
v_res_1631_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0(v_k_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
lean_dec(v___y_1625_);
lean_dec_ref(v___y_1624_);
lean_dec(v___y_1623_);
lean_dec(v___y_1622_);
return v_res_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(lean_object* v_k_1632_, uint8_t v_allowLevelAssignments_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_){
_start:
{
lean_object* v___f_1643_; lean_object* v___x_1644_; 
lean_inc(v___y_1637_);
lean_inc_ref(v___y_1636_);
lean_inc(v___y_1635_);
lean_inc(v___y_1634_);
v___f_1643_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1643_, 0, v_k_1632_);
lean_closure_set(v___f_1643_, 1, v___y_1634_);
lean_closure_set(v___f_1643_, 2, v___y_1635_);
lean_closure_set(v___f_1643_, 3, v___y_1636_);
lean_closure_set(v___f_1643_, 4, v___y_1637_);
v___x_1644_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1633_, v___f_1643_, v___y_1638_, v___y_1639_, v___y_1640_, v___y_1641_);
if (lean_obj_tag(v___x_1644_) == 0)
{
return v___x_1644_;
}
else
{
lean_object* v_a_1645_; lean_object* v___x_1647_; uint8_t v_isShared_1648_; uint8_t v_isSharedCheck_1652_; 
v_a_1645_ = lean_ctor_get(v___x_1644_, 0);
v_isSharedCheck_1652_ = !lean_is_exclusive(v___x_1644_);
if (v_isSharedCheck_1652_ == 0)
{
v___x_1647_ = v___x_1644_;
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
else
{
lean_inc(v_a_1645_);
lean_dec(v___x_1644_);
v___x_1647_ = lean_box(0);
v_isShared_1648_ = v_isSharedCheck_1652_;
goto v_resetjp_1646_;
}
v_resetjp_1646_:
{
lean_object* v___x_1650_; 
if (v_isShared_1648_ == 0)
{
v___x_1650_ = v___x_1647_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v_a_1645_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg___boxed(lean_object* v_k_1653_, lean_object* v_allowLevelAssignments_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1664_; lean_object* v_res_1665_; 
v_allowLevelAssignments_boxed_1664_ = lean_unbox(v_allowLevelAssignments_1654_);
v_res_1665_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_1653_, v_allowLevelAssignments_boxed_1664_, v___y_1655_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec(v___y_1655_);
return v_res_1665_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1666_; double v___x_1667_; 
v___x_1666_ = lean_unsigned_to_nat(0u);
v___x_1667_ = lean_float_of_nat(v___x_1666_);
return v___x_1667_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = lean_mk_string_unchecked("", 0, 0);
return v___x_1668_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1669_ = lean_unsigned_to_nat(0u);
v___x_1670_ = lean_mk_empty_array_with_capacity(v___x_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(lean_object* v_cls_1671_, lean_object* v_msg_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_){
_start:
{
lean_object* v_ref_1678_; lean_object* v___x_1679_; lean_object* v_a_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1724_; 
v_ref_1678_ = lean_ctor_get(v___y_1675_, 5);
v___x_1679_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_);
v_a_1680_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1682_ = v___x_1679_;
v_isShared_1683_ = v_isSharedCheck_1724_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_a_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1724_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
lean_object* v___x_1684_; lean_object* v_traceState_1685_; lean_object* v_env_1686_; lean_object* v_nextMacroScope_1687_; lean_object* v_ngen_1688_; lean_object* v_auxDeclNGen_1689_; lean_object* v_cache_1690_; lean_object* v_messages_1691_; lean_object* v_infoState_1692_; lean_object* v_snapshotTasks_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1723_; 
v___x_1684_ = lean_st_ref_take(v___y_1676_);
v_traceState_1685_ = lean_ctor_get(v___x_1684_, 4);
v_env_1686_ = lean_ctor_get(v___x_1684_, 0);
v_nextMacroScope_1687_ = lean_ctor_get(v___x_1684_, 1);
v_ngen_1688_ = lean_ctor_get(v___x_1684_, 2);
v_auxDeclNGen_1689_ = lean_ctor_get(v___x_1684_, 3);
v_cache_1690_ = lean_ctor_get(v___x_1684_, 5);
v_messages_1691_ = lean_ctor_get(v___x_1684_, 6);
v_infoState_1692_ = lean_ctor_get(v___x_1684_, 7);
v_snapshotTasks_1693_ = lean_ctor_get(v___x_1684_, 8);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1684_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1695_ = v___x_1684_;
v_isShared_1696_ = v_isSharedCheck_1723_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_snapshotTasks_1693_);
lean_inc(v_infoState_1692_);
lean_inc(v_messages_1691_);
lean_inc(v_cache_1690_);
lean_inc(v_traceState_1685_);
lean_inc(v_auxDeclNGen_1689_);
lean_inc(v_ngen_1688_);
lean_inc(v_nextMacroScope_1687_);
lean_inc(v_env_1686_);
lean_dec(v___x_1684_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1723_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
uint64_t v_tid_1697_; lean_object* v_traces_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1722_; 
v_tid_1697_ = lean_ctor_get_uint64(v_traceState_1685_, sizeof(void*)*1);
v_traces_1698_ = lean_ctor_get(v_traceState_1685_, 0);
v_isSharedCheck_1722_ = !lean_is_exclusive(v_traceState_1685_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1700_ = v_traceState_1685_;
v_isShared_1701_ = v_isSharedCheck_1722_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_traces_1698_);
lean_dec(v_traceState_1685_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1722_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; double v___x_1703_; uint8_t v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1712_; 
v___x_1702_ = lean_box(0);
v___x_1703_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_1704_ = 0;
v___x_1705_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1);
v___x_1706_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1706_, 0, v_cls_1671_);
lean_ctor_set(v___x_1706_, 1, v___x_1702_);
lean_ctor_set(v___x_1706_, 2, v___x_1705_);
lean_ctor_set_float(v___x_1706_, sizeof(void*)*3, v___x_1703_);
lean_ctor_set_float(v___x_1706_, sizeof(void*)*3 + 8, v___x_1703_);
lean_ctor_set_uint8(v___x_1706_, sizeof(void*)*3 + 16, v___x_1704_);
v___x_1707_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2);
v___x_1708_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1706_);
lean_ctor_set(v___x_1708_, 1, v_a_1680_);
lean_ctor_set(v___x_1708_, 2, v___x_1707_);
lean_inc(v_ref_1678_);
v___x_1709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1709_, 0, v_ref_1678_);
lean_ctor_set(v___x_1709_, 1, v___x_1708_);
v___x_1710_ = l_Lean_PersistentArray_push___redArg(v_traces_1698_, v___x_1709_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 0, v___x_1710_);
v___x_1712_ = v___x_1700_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1721_; 
v_reuseFailAlloc_1721_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1721_, 0, v___x_1710_);
lean_ctor_set_uint64(v_reuseFailAlloc_1721_, sizeof(void*)*1, v_tid_1697_);
v___x_1712_ = v_reuseFailAlloc_1721_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1714_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 4, v___x_1712_);
v___x_1714_ = v___x_1695_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_env_1686_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_nextMacroScope_1687_);
lean_ctor_set(v_reuseFailAlloc_1720_, 2, v_ngen_1688_);
lean_ctor_set(v_reuseFailAlloc_1720_, 3, v_auxDeclNGen_1689_);
lean_ctor_set(v_reuseFailAlloc_1720_, 4, v___x_1712_);
lean_ctor_set(v_reuseFailAlloc_1720_, 5, v_cache_1690_);
lean_ctor_set(v_reuseFailAlloc_1720_, 6, v_messages_1691_);
lean_ctor_set(v_reuseFailAlloc_1720_, 7, v_infoState_1692_);
lean_ctor_set(v_reuseFailAlloc_1720_, 8, v_snapshotTasks_1693_);
v___x_1714_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1718_; 
v___x_1715_ = lean_st_ref_set(v___y_1676_, v___x_1714_);
v___x_1716_ = lean_box(0);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1716_);
v___x_1718_ = v___x_1682_;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___boxed(lean_object* v_cls_1725_, lean_object* v_msg_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_1725_, v_msg_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_);
lean_dec(v___y_1730_);
lean_dec_ref(v___y_1729_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(lean_object* v_a_1733_, lean_object* v_b_1734_){
_start:
{
lean_object* v_array_1735_; lean_object* v_start_1736_; lean_object* v_stop_1737_; lean_object* v___x_1739_; uint8_t v_isShared_1740_; uint8_t v_isSharedCheck_1750_; 
v_array_1735_ = lean_ctor_get(v_a_1733_, 0);
v_start_1736_ = lean_ctor_get(v_a_1733_, 1);
v_stop_1737_ = lean_ctor_get(v_a_1733_, 2);
v_isSharedCheck_1750_ = !lean_is_exclusive(v_a_1733_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1739_ = v_a_1733_;
v_isShared_1740_ = v_isSharedCheck_1750_;
goto v_resetjp_1738_;
}
else
{
lean_inc(v_stop_1737_);
lean_inc(v_start_1736_);
lean_inc(v_array_1735_);
lean_dec(v_a_1733_);
v___x_1739_ = lean_box(0);
v_isShared_1740_ = v_isSharedCheck_1750_;
goto v_resetjp_1738_;
}
v_resetjp_1738_:
{
uint8_t v___x_1741_; 
v___x_1741_ = lean_nat_dec_lt(v_start_1736_, v_stop_1737_);
if (v___x_1741_ == 0)
{
lean_del_object(v___x_1739_);
lean_dec(v_stop_1737_);
lean_dec(v_start_1736_);
lean_dec_ref(v_array_1735_);
return v_b_1734_;
}
else
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1745_; 
v___x_1742_ = lean_unsigned_to_nat(1u);
v___x_1743_ = lean_nat_add(v_start_1736_, v___x_1742_);
lean_inc_ref(v_array_1735_);
if (v_isShared_1740_ == 0)
{
lean_ctor_set(v___x_1739_, 1, v___x_1743_);
v___x_1745_ = v___x_1739_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_array_1735_);
lean_ctor_set(v_reuseFailAlloc_1749_, 1, v___x_1743_);
lean_ctor_set(v_reuseFailAlloc_1749_, 2, v_stop_1737_);
v___x_1745_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = lean_array_fget(v_array_1735_, v_start_1736_);
lean_dec(v_start_1736_);
lean_dec_ref(v_array_1735_);
v___x_1747_ = lean_array_push(v_b_1734_, v___x_1746_);
v_a_1733_ = v___x_1745_;
v_b_1734_ = v___x_1747_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(lean_object* v_body_1751_, lean_object* v_recFnName_1752_, lean_object* v_fixedPrefixSize_1753_, lean_object* v_F_1754_, lean_object* v_x_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1765_ = lean_expr_instantiate1(v_body_1751_, v_x_1755_);
v___x_1766_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1752_, v_fixedPrefixSize_1753_, v_F_1754_, v___x_1765_, v___y_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
if (lean_obj_tag(v___x_1766_) == 0)
{
lean_object* v_a_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; uint8_t v___x_1771_; uint8_t v___x_1772_; uint8_t v___x_1773_; lean_object* v___x_1774_; 
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref(v___x_1766_);
v___x_1768_ = lean_unsigned_to_nat(1u);
v___x_1769_ = lean_mk_empty_array_with_capacity(v___x_1768_);
v___x_1770_ = lean_array_push(v___x_1769_, v_x_1755_);
v___x_1771_ = 0;
v___x_1772_ = 1;
v___x_1773_ = 1;
v___x_1774_ = l_Lean_Meta_mkLambdaFVars(v___x_1770_, v_a_1767_, v___x_1771_, v___x_1772_, v___x_1771_, v___x_1772_, v___x_1773_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
lean_dec_ref(v___x_1770_);
return v___x_1774_;
}
else
{
lean_dec_ref(v_x_1755_);
return v___x_1766_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed(lean_object* v_body_1775_, lean_object* v_recFnName_1776_, lean_object* v_fixedPrefixSize_1777_, lean_object* v_F_1778_, lean_object* v_x_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
lean_object* v_res_1789_; 
v_res_1789_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0(v_body_1775_, v_recFnName_1776_, v_fixedPrefixSize_1777_, v_F_1778_, v_x_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec(v___y_1780_);
lean_dec_ref(v_body_1775_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(lean_object* v_body_1790_, lean_object* v_recFnName_1791_, lean_object* v_fixedPrefixSize_1792_, lean_object* v_F_1793_, lean_object* v_x_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = lean_expr_instantiate1(v_body_1790_, v_x_1794_);
v___x_1805_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1791_, v_fixedPrefixSize_1792_, v_F_1793_, v___x_1804_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; uint8_t v___x_1810_; uint8_t v___x_1811_; uint8_t v___x_1812_; lean_object* v___x_1813_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref(v___x_1805_);
v___x_1807_ = lean_unsigned_to_nat(1u);
v___x_1808_ = lean_mk_empty_array_with_capacity(v___x_1807_);
v___x_1809_ = lean_array_push(v___x_1808_, v_x_1794_);
v___x_1810_ = 0;
v___x_1811_ = 1;
v___x_1812_ = 1;
v___x_1813_ = l_Lean_Meta_mkForallFVars(v___x_1809_, v_a_1806_, v___x_1810_, v___x_1811_, v___x_1811_, v___x_1812_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec_ref(v___x_1809_);
return v___x_1813_;
}
else
{
lean_dec_ref(v_x_1794_);
return v___x_1805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed(lean_object* v_body_1814_, lean_object* v_recFnName_1815_, lean_object* v_fixedPrefixSize_1816_, lean_object* v_F_1817_, lean_object* v_x_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v_res_1828_; 
v_res_1828_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1(v_body_1814_, v_recFnName_1815_, v_fixedPrefixSize_1816_, v_F_1817_, v_x_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec(v___y_1824_);
lean_dec_ref(v___y_1823_);
lean_dec(v___y_1822_);
lean_dec_ref(v___y_1821_);
lean_dec(v___y_1820_);
lean_dec(v___y_1819_);
lean_dec_ref(v_body_1814_);
return v_res_1828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed(lean_object* v_body_1829_, lean_object* v_recFnName_1830_, lean_object* v_fixedPrefixSize_1831_, lean_object* v_F_1832_, lean_object* v_x_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v_res_1843_; 
v_res_1843_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(v_body_1829_, v_recFnName_1830_, v_fixedPrefixSize_1831_, v_F_1832_, v_x_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_);
lean_dec(v___y_1841_);
lean_dec_ref(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
lean_dec(v___y_1837_);
lean_dec_ref(v___y_1836_);
lean_dec(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v_x_1833_);
lean_dec_ref(v_body_1829_);
return v_res_1843_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0(void){
_start:
{
lean_object* v___x_1844_; lean_object* v___x_1845_; 
v___x_1844_ = lean_unsigned_to_nat(0u);
v___x_1845_ = lean_mk_empty_array_with_capacity(v___x_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(lean_object* v_recFnName_1846_, lean_object* v_fixedPrefixSize_1847_, lean_object* v_F_1848_, size_t v_sz_1849_, size_t v_i_1850_, lean_object* v_bs_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_){
_start:
{
uint8_t v___x_1861_; 
v___x_1861_ = lean_usize_dec_lt(v_i_1850_, v_sz_1849_);
if (v___x_1861_ == 0)
{
lean_object* v___x_1862_; 
lean_dec_ref(v_F_1848_);
lean_dec(v_fixedPrefixSize_1847_);
lean_dec(v_recFnName_1846_);
v___x_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1862_, 0, v_bs_1851_);
return v___x_1862_;
}
else
{
lean_object* v_v_1863_; lean_object* v___x_1864_; 
v_v_1863_ = lean_array_uget_borrowed(v_bs_1851_, v_i_1850_);
lean_inc(v_v_1863_);
lean_inc_ref(v_F_1848_);
lean_inc(v_fixedPrefixSize_1847_);
lean_inc(v_recFnName_1846_);
v___x_1864_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1846_, v_fixedPrefixSize_1847_, v_F_1848_, v_v_1863_, v___y_1852_, v___y_1853_, v___y_1854_, v___y_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
if (lean_obj_tag(v___x_1864_) == 0)
{
lean_object* v_a_1865_; lean_object* v___x_1866_; lean_object* v_bs_x27_1867_; size_t v___x_1868_; size_t v___x_1869_; lean_object* v___x_1870_; 
v_a_1865_ = lean_ctor_get(v___x_1864_, 0);
lean_inc(v_a_1865_);
lean_dec_ref(v___x_1864_);
v___x_1866_ = lean_unsigned_to_nat(0u);
v_bs_x27_1867_ = lean_array_uset(v_bs_1851_, v_i_1850_, v___x_1866_);
v___x_1868_ = ((size_t)1ULL);
v___x_1869_ = lean_usize_add(v_i_1850_, v___x_1868_);
v___x_1870_ = lean_array_uset(v_bs_x27_1867_, v_i_1850_, v_a_1865_);
v_i_1850_ = v___x_1869_;
v_bs_1851_ = v___x_1870_;
goto _start;
}
else
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1879_; 
lean_dec_ref(v_bs_1851_);
lean_dec_ref(v_F_1848_);
lean_dec(v_fixedPrefixSize_1847_);
lean_dec(v_recFnName_1846_);
v_a_1872_ = lean_ctor_get(v___x_1864_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1864_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1874_ = v___x_1864_;
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1864_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1879_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
lean_object* v___x_1877_; 
if (v_isShared_1875_ == 0)
{
v___x_1877_ = v___x_1874_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_a_1872_);
v___x_1877_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1876_;
}
v_reusejp_1876_:
{
return v___x_1877_;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1(void){
_start:
{
lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v_cls_1883_; 
v___x_1880_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__2_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_1881_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__1_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_1882_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__8_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v_cls_1883_ = l_Lean_Name_mkStr3(v___x_1882_, v___x_1881_, v___x_1880_);
return v_cls_1883_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2(void){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_1884_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__2);
v___x_1886_ = l_Lean_Name_mkStr1(v___x_1885_);
return v___x_1886_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4(void){
_start:
{
lean_object* v_cls_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v_cls_1887_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1);
v___x_1888_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__3);
v___x_1889_ = l_Lean_Name_append(v___x_1888_, v_cls_1887_);
return v___x_1889_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5(void){
_start:
{
lean_object* v___x_1890_; 
v___x_1890_ = lean_mk_string_unchecked("replaceRecApp: eta-expanding", 28, 28);
return v___x_1890_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6(void){
_start:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__5);
v___x_1892_ = l_Lean_stringToMessageData(v___x_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(lean_object* v_recFnName_1893_, lean_object* v_fixedPrefixSize_1894_, lean_object* v_F_1895_, lean_object* v_e_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v___y_1907_; lean_object* v___y_1908_; lean_object* v___y_1909_; lean_object* v___y_1910_; lean_object* v___y_1911_; lean_object* v___y_1912_; lean_object* v___y_1913_; lean_object* v___y_1914_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; uint8_t v___x_1921_; 
v___x_1918_ = l_Lean_Expr_getAppNumArgs(v_e_1896_);
v___x_1919_ = lean_unsigned_to_nat(1u);
v___x_1920_ = lean_nat_add(v_fixedPrefixSize_1894_, v___x_1919_);
v___x_1921_ = lean_nat_dec_lt(v___x_1918_, v___x_1920_);
if (v___x_1921_ == 0)
{
lean_object* v_dummy_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v_args_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; 
v_dummy_1922_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_1918_);
v___x_1923_ = lean_mk_array(v___x_1918_, v_dummy_1922_);
v___x_1924_ = lean_nat_sub(v___x_1918_, v___x_1919_);
lean_dec(v___x_1918_);
v_args_1925_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_1896_, v___x_1923_, v___x_1924_);
v___x_1926_ = l_Lean_instInhabitedExpr;
v___x_1927_ = lean_array_get(v___x_1926_, v_args_1925_, v_fixedPrefixSize_1894_);
lean_inc_ref(v_F_1895_);
lean_inc(v_fixedPrefixSize_1894_);
lean_inc(v_recFnName_1893_);
v___x_1928_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1893_, v_fixedPrefixSize_1894_, v_F_1895_, v___x_1927_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref(v___x_1928_);
lean_inc_ref(v_F_1895_);
v___x_1930_ = l_Lean_Expr_app___override(v_F_1895_, v_a_1929_);
lean_inc(v_a_1904_);
lean_inc_ref(v_a_1903_);
lean_inc(v_a_1902_);
lean_inc_ref(v_a_1901_);
lean_inc_ref(v___x_1930_);
v___x_1931_ = lean_infer_type(v___x_1930_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
if (lean_obj_tag(v___x_1931_) == 0)
{
lean_object* v_a_1932_; lean_object* v___x_1933_; 
v_a_1932_ = lean_ctor_get(v___x_1931_, 0);
lean_inc(v_a_1932_);
lean_dec_ref(v___x_1931_);
lean_inc(v_a_1904_);
lean_inc_ref(v_a_1903_);
lean_inc(v_a_1902_);
lean_inc_ref(v_a_1901_);
v___x_1933_ = lean_whnf(v_a_1932_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_a_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v_a_1934_ = lean_ctor_get(v___x_1933_, 0);
lean_inc(v_a_1934_);
lean_dec_ref(v___x_1933_);
v___x_1935_ = l_Lean_Expr_bindingDomain_x21(v_a_1934_);
lean_dec(v_a_1934_);
v___x_1936_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg(v___x_1935_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
if (lean_obj_tag(v___x_1936_) == 0)
{
lean_object* v_a_1937_; lean_object* v___x_1938_; lean_object* v_lower_1940_; lean_object* v_upper_1941_; lean_object* v___x_1965_; lean_object* v___x_1966_; uint8_t v___x_1967_; 
v_a_1937_ = lean_ctor_get(v___x_1936_, 0);
lean_inc(v_a_1937_);
lean_dec_ref(v___x_1936_);
v___x_1938_ = l_Lean_Expr_app___override(v___x_1930_, v_a_1937_);
v___x_1965_ = lean_unsigned_to_nat(0u);
v___x_1966_ = lean_array_get_size(v_args_1925_);
v___x_1967_ = lean_nat_dec_le(v___x_1920_, v___x_1965_);
if (v___x_1967_ == 0)
{
v_lower_1940_ = v___x_1920_;
v_upper_1941_ = v___x_1966_;
goto v___jp_1939_;
}
else
{
lean_dec(v___x_1920_);
v_lower_1940_ = v___x_1965_;
v_upper_1941_ = v___x_1966_;
goto v___jp_1939_;
}
v___jp_1939_:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; size_t v_sz_1945_; size_t v___x_1946_; lean_object* v___x_1947_; 
v___x_1942_ = l_Array_toSubarray___redArg(v_args_1925_, v_lower_1940_, v_upper_1941_);
v___x_1943_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0);
v___x_1944_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v___x_1942_, v___x_1943_);
v_sz_1945_ = lean_array_size(v___x_1944_);
v___x_1946_ = ((size_t)0ULL);
v___x_1947_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_1893_, v_fixedPrefixSize_1894_, v_F_1895_, v_sz_1945_, v___x_1946_, v___x_1944_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
if (lean_obj_tag(v___x_1947_) == 0)
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1956_; 
v_a_1948_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1956_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1956_ == 0)
{
v___x_1950_ = v___x_1947_;
v_isShared_1951_ = v_isSharedCheck_1956_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___x_1947_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1956_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1952_; lean_object* v___x_1954_; 
v___x_1952_ = l_Lean_mkAppN(v___x_1938_, v_a_1948_);
lean_dec(v_a_1948_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 0, v___x_1952_);
v___x_1954_ = v___x_1950_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1955_; 
v_reuseFailAlloc_1955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1955_, 0, v___x_1952_);
v___x_1954_ = v_reuseFailAlloc_1955_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
return v___x_1954_;
}
}
}
else
{
lean_object* v_a_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1964_; 
lean_dec_ref(v___x_1938_);
v_a_1957_ = lean_ctor_get(v___x_1947_, 0);
v_isSharedCheck_1964_ = !lean_is_exclusive(v___x_1947_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1959_ = v___x_1947_;
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_a_1957_);
lean_dec(v___x_1947_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1964_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1962_; 
if (v_isShared_1960_ == 0)
{
v___x_1962_ = v___x_1959_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_a_1957_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1930_);
lean_dec_ref(v_args_1925_);
lean_dec(v___x_1920_);
lean_dec_ref(v_F_1895_);
lean_dec(v_fixedPrefixSize_1894_);
lean_dec(v_recFnName_1893_);
return v___x_1936_;
}
}
else
{
lean_dec_ref(v___x_1930_);
lean_dec_ref(v_args_1925_);
lean_dec(v___x_1920_);
lean_dec_ref(v_F_1895_);
lean_dec(v_fixedPrefixSize_1894_);
lean_dec(v_recFnName_1893_);
return v___x_1933_;
}
}
else
{
lean_dec_ref(v___x_1930_);
lean_dec_ref(v_args_1925_);
lean_dec(v___x_1920_);
lean_dec_ref(v_F_1895_);
lean_dec(v_fixedPrefixSize_1894_);
lean_dec(v_recFnName_1893_);
return v___x_1931_;
}
}
else
{
lean_dec_ref(v_args_1925_);
lean_dec(v___x_1920_);
lean_dec_ref(v_F_1895_);
lean_dec(v_fixedPrefixSize_1894_);
lean_dec(v_recFnName_1893_);
return v___x_1928_;
}
}
else
{
lean_object* v_options_1968_; uint8_t v_hasTrace_1969_; 
lean_dec(v___x_1920_);
lean_dec(v___x_1918_);
v_options_1968_ = lean_ctor_get(v_a_1903_, 2);
v_hasTrace_1969_ = lean_ctor_get_uint8(v_options_1968_, sizeof(void*)*1);
if (v_hasTrace_1969_ == 0)
{
v___y_1907_ = v_a_1897_;
v___y_1908_ = v_a_1898_;
v___y_1909_ = v_a_1899_;
v___y_1910_ = v_a_1900_;
v___y_1911_ = v_a_1901_;
v___y_1912_ = v_a_1902_;
v___y_1913_ = v_a_1903_;
v___y_1914_ = v_a_1904_;
goto v___jp_1906_;
}
else
{
lean_object* v_inheritedTraceOptions_1970_; lean_object* v_cls_1971_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v_inheritedTraceOptions_1970_ = lean_ctor_get(v_a_1903_, 13);
v_cls_1971_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1);
v___x_1972_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_1973_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1970_, v_options_1968_, v___x_1972_);
if (v___x_1973_ == 0)
{
v___y_1907_ = v_a_1897_;
v___y_1908_ = v_a_1898_;
v___y_1909_ = v_a_1899_;
v___y_1910_ = v_a_1900_;
v___y_1911_ = v_a_1901_;
v___y_1912_ = v_a_1902_;
v___y_1913_ = v_a_1903_;
v___y_1914_ = v_a_1904_;
goto v___jp_1906_;
}
else
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1974_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__6);
lean_inc_ref(v_e_1896_);
v___x_1975_ = l_Lean_indentExpr(v_e_1896_);
v___x_1976_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1976_, 0, v___x_1974_);
lean_ctor_set(v___x_1976_, 1, v___x_1975_);
v___x_1977_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_1971_, v___x_1976_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_dec_ref(v___x_1977_);
v___y_1907_ = v_a_1897_;
v___y_1908_ = v_a_1898_;
v___y_1909_ = v_a_1899_;
v___y_1910_ = v_a_1900_;
v___y_1911_ = v_a_1901_;
v___y_1912_ = v_a_1902_;
v___y_1913_ = v_a_1903_;
v___y_1914_ = v_a_1904_;
goto v___jp_1906_;
}
else
{
lean_object* v_a_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1985_; 
lean_dec_ref(v_e_1896_);
lean_dec_ref(v_F_1895_);
lean_dec(v_fixedPrefixSize_1894_);
lean_dec(v_recFnName_1893_);
v_a_1978_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1980_ = v___x_1977_;
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_a_1978_);
lean_dec(v___x_1977_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1985_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1984_; 
v_reuseFailAlloc_1984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1984_, 0, v_a_1978_);
v___x_1983_ = v_reuseFailAlloc_1984_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
return v___x_1983_;
}
}
}
}
}
}
v___jp_1906_:
{
lean_object* v___x_1915_; 
v___x_1915_ = l_Lean_Meta_etaExpand(v_e_1896_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
if (lean_obj_tag(v___x_1915_) == 0)
{
lean_object* v_a_1916_; lean_object* v___x_1917_; 
v_a_1916_ = lean_ctor_get(v___x_1915_, 0);
lean_inc(v_a_1916_);
lean_dec_ref(v___x_1915_);
v___x_1917_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1893_, v_fixedPrefixSize_1894_, v_F_1895_, v_a_1916_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
return v___x_1917_;
}
else
{
lean_dec_ref(v_F_1895_);
lean_dec(v_fixedPrefixSize_1894_);
lean_dec(v_recFnName_1893_);
return v___x_1915_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(lean_object* v_recFnName_1986_, lean_object* v_fixedPrefixSize_1987_, lean_object* v_F_1988_, lean_object* v_x_1989_, lean_object* v_x_1990_, lean_object* v_x_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_){
_start:
{
if (lean_obj_tag(v_x_1989_) == 5)
{
lean_object* v_fn_2001_; lean_object* v_arg_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v_fn_2001_ = lean_ctor_get(v_x_1989_, 0);
lean_inc_ref(v_fn_2001_);
v_arg_2002_ = lean_ctor_get(v_x_1989_, 1);
lean_inc_ref(v_arg_2002_);
lean_dec_ref(v_x_1989_);
v___x_2003_ = lean_array_set(v_x_1990_, v_x_1991_, v_arg_2002_);
v___x_2004_ = lean_unsigned_to_nat(1u);
v___x_2005_ = lean_nat_sub(v_x_1991_, v___x_2004_);
lean_dec(v_x_1991_);
v_x_1989_ = v_fn_2001_;
v_x_1990_ = v___x_2003_;
v_x_1991_ = v___x_2005_;
goto _start;
}
else
{
lean_object* v___x_2007_; 
lean_dec(v_x_1991_);
lean_inc_ref(v_F_1988_);
lean_inc(v_fixedPrefixSize_1987_);
lean_inc(v_recFnName_1986_);
v___x_2007_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_1986_, v_fixedPrefixSize_1987_, v_F_1988_, v_x_1989_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_);
if (lean_obj_tag(v___x_2007_) == 0)
{
lean_object* v_a_2008_; size_t v_sz_2009_; size_t v___x_2010_; lean_object* v___x_2011_; 
v_a_2008_ = lean_ctor_get(v___x_2007_, 0);
lean_inc(v_a_2008_);
lean_dec_ref(v___x_2007_);
v_sz_2009_ = lean_array_size(v_x_1990_);
v___x_2010_ = ((size_t)0ULL);
v___x_2011_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_1986_, v_fixedPrefixSize_1987_, v_F_1988_, v_sz_2009_, v___x_2010_, v_x_1990_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_, v___y_1998_, v___y_1999_);
if (lean_obj_tag(v___x_2011_) == 0)
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2020_; 
v_a_2012_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2020_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2020_ == 0)
{
v___x_2014_ = v___x_2011_;
v_isShared_2015_ = v_isSharedCheck_2020_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_2011_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2020_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2016_; lean_object* v___x_2018_; 
v___x_2016_ = l_Lean_mkAppN(v_a_2008_, v_a_2012_);
lean_dec(v_a_2012_);
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 0, v___x_2016_);
v___x_2018_ = v___x_2014_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2016_);
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
lean_object* v_a_2021_; lean_object* v___x_2023_; uint8_t v_isShared_2024_; uint8_t v_isSharedCheck_2028_; 
lean_dec(v_a_2008_);
v_a_2021_ = lean_ctor_get(v___x_2011_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2023_ = v___x_2011_;
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
else
{
lean_inc(v_a_2021_);
lean_dec(v___x_2011_);
v___x_2023_ = lean_box(0);
v_isShared_2024_ = v_isSharedCheck_2028_;
goto v_resetjp_2022_;
}
v_resetjp_2022_:
{
lean_object* v___x_2026_; 
if (v_isShared_2024_ == 0)
{
v___x_2026_ = v___x_2023_;
goto v_reusejp_2025_;
}
else
{
lean_object* v_reuseFailAlloc_2027_; 
v_reuseFailAlloc_2027_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2027_, 0, v_a_2021_);
v___x_2026_ = v_reuseFailAlloc_2027_;
goto v_reusejp_2025_;
}
v_reusejp_2025_:
{
return v___x_2026_;
}
}
}
}
else
{
lean_dec_ref(v_x_1990_);
lean_dec_ref(v_F_1988_);
lean_dec(v_fixedPrefixSize_1987_);
lean_dec(v_recFnName_1986_);
return v___x_2007_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(lean_object* v_recFnName_2029_, lean_object* v_fixedPrefixSize_2030_, lean_object* v_F_2031_, lean_object* v_e_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
uint8_t v___x_2042_; 
v___x_2042_ = l_Lean_Expr_isAppOf(v_e_2032_, v_recFnName_2029_);
if (v___x_2042_ == 0)
{
lean_object* v_dummy_2043_; lean_object* v_nargs_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; 
v_dummy_2043_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
v_nargs_2044_ = l_Lean_Expr_getAppNumArgs(v_e_2032_);
lean_inc(v_nargs_2044_);
v___x_2045_ = lean_mk_array(v_nargs_2044_, v_dummy_2043_);
v___x_2046_ = lean_unsigned_to_nat(1u);
v___x_2047_ = lean_nat_sub(v_nargs_2044_, v___x_2046_);
lean_dec(v_nargs_2044_);
v___x_2048_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2029_, v_fixedPrefixSize_2030_, v_F_2031_, v_e_2032_, v___x_2045_, v___x_2047_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_);
return v___x_2048_;
}
else
{
lean_object* v___x_2049_; 
v___x_2049_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2029_, v_fixedPrefixSize_2030_, v_F_2031_, v_e_2032_, v_a_2033_, v_a_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_, v_a_2039_, v_a_2040_);
return v___x_2049_;
}
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2050_; 
v___x_2050_ = lean_mk_string_unchecked("unexpected matcher application alternative", 42, 42);
return v___x_2050_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2051_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__0);
v___x_2052_ = l_Lean_stringToMessageData(v___x_2051_);
return v___x_2052_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2053_; 
v___x_2053_ = lean_mk_string_unchecked("\nat application", 15, 15);
return v___x_2053_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2054_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__2);
v___x_2055_ = l_Lean_stringToMessageData(v___x_2054_);
return v___x_2055_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(lean_object* v___x_2056_, lean_object* v_b_2057_, lean_object* v_recFnName_2058_, lean_object* v_fixedPrefixSize_2059_, uint8_t v___x_2060_, lean_object* v___x_2061_, lean_object* v_a_2062_, lean_object* v_e_2063_, lean_object* v_xs_2064_, lean_object* v_altBody_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_){
_start:
{
lean_object* v___x_2082_; uint8_t v___x_2083_; 
v___x_2082_ = lean_array_get_size(v_xs_2064_);
v___x_2083_ = lean_nat_dec_eq(v___x_2082_, v___x_2061_);
if (v___x_2083_ == 0)
{
lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v_a_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2099_; 
lean_dec_ref(v_altBody_2065_);
lean_dec(v_fixedPrefixSize_2059_);
lean_dec(v_recFnName_2058_);
v___x_2084_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__1);
v___x_2085_ = l_Lean_indentExpr(v_a_2062_);
v___x_2086_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2086_, 0, v___x_2084_);
lean_ctor_set(v___x_2086_, 1, v___x_2085_);
v___x_2087_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___closed__3);
v___x_2088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2086_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = l_Lean_indentExpr(v_e_2063_);
v___x_2090_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2088_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v___x_2090_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
v_a_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2099_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2099_ == 0)
{
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_a_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2099_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
lean_object* v___x_2097_; 
if (v_isShared_2095_ == 0)
{
v___x_2097_ = v___x_2094_;
goto v_reusejp_2096_;
}
else
{
lean_object* v_reuseFailAlloc_2098_; 
v_reuseFailAlloc_2098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2098_, 0, v_a_2092_);
v___x_2097_ = v_reuseFailAlloc_2098_;
goto v_reusejp_2096_;
}
v_reusejp_2096_:
{
return v___x_2097_;
}
}
}
else
{
lean_dec_ref(v_e_2063_);
lean_dec_ref(v_a_2062_);
goto v___jp_2075_;
}
v___jp_2075_:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2076_ = lean_array_get_borrowed(v___x_2056_, v_xs_2064_, v_b_2057_);
lean_inc(v___x_2076_);
v___x_2077_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2058_, v_fixedPrefixSize_2059_, v___x_2076_, v_altBody_2065_, v___y_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
if (lean_obj_tag(v___x_2077_) == 0)
{
lean_object* v_a_2078_; uint8_t v___x_2079_; uint8_t v___x_2080_; lean_object* v___x_2081_; 
v_a_2078_ = lean_ctor_get(v___x_2077_, 0);
lean_inc(v_a_2078_);
lean_dec_ref(v___x_2077_);
v___x_2079_ = 0;
v___x_2080_ = 1;
v___x_2081_ = l_Lean_Meta_mkLambdaFVars(v_xs_2064_, v_a_2078_, v___x_2079_, v___x_2060_, v___x_2079_, v___x_2060_, v___x_2080_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_);
return v___x_2081_;
}
else
{
return v___x_2077_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed(lean_object** _args){
lean_object* v___x_2100_ = _args[0];
lean_object* v_b_2101_ = _args[1];
lean_object* v_recFnName_2102_ = _args[2];
lean_object* v_fixedPrefixSize_2103_ = _args[3];
lean_object* v___x_2104_ = _args[4];
lean_object* v___x_2105_ = _args[5];
lean_object* v_a_2106_ = _args[6];
lean_object* v_e_2107_ = _args[7];
lean_object* v_xs_2108_ = _args[8];
lean_object* v_altBody_2109_ = _args[9];
lean_object* v___y_2110_ = _args[10];
lean_object* v___y_2111_ = _args[11];
lean_object* v___y_2112_ = _args[12];
lean_object* v___y_2113_ = _args[13];
lean_object* v___y_2114_ = _args[14];
lean_object* v___y_2115_ = _args[15];
lean_object* v___y_2116_ = _args[16];
lean_object* v___y_2117_ = _args[17];
lean_object* v___y_2118_ = _args[18];
_start:
{
uint8_t v___x_67585__boxed_2119_; lean_object* v_res_2120_; 
v___x_67585__boxed_2119_ = lean_unbox(v___x_2104_);
v_res_2120_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0(v___x_2100_, v_b_2101_, v_recFnName_2102_, v_fixedPrefixSize_2103_, v___x_67585__boxed_2119_, v___x_2105_, v_a_2106_, v_e_2107_, v_xs_2108_, v_altBody_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_);
lean_dec(v___y_2117_);
lean_dec_ref(v___y_2116_);
lean_dec(v___y_2115_);
lean_dec_ref(v___y_2114_);
lean_dec(v___y_2113_);
lean_dec_ref(v___y_2112_);
lean_dec(v___y_2111_);
lean_dec(v___y_2110_);
lean_dec_ref(v_xs_2108_);
lean_dec(v___x_2105_);
lean_dec(v_b_2101_);
lean_dec_ref(v___x_2100_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(lean_object* v_recFnName_2121_, lean_object* v_fixedPrefixSize_2122_, lean_object* v_e_2123_, lean_object* v_as_2124_, lean_object* v_bs_2125_, lean_object* v_i_2126_, lean_object* v_cs_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; uint8_t v___x_2138_; 
v___x_2137_ = lean_array_get_size(v_as_2124_);
v___x_2138_ = lean_nat_dec_lt(v_i_2126_, v___x_2137_);
if (v___x_2138_ == 0)
{
lean_object* v___x_2139_; 
lean_dec(v_i_2126_);
lean_dec_ref(v_e_2123_);
lean_dec(v_fixedPrefixSize_2122_);
lean_dec(v_recFnName_2121_);
v___x_2139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_cs_2127_);
return v___x_2139_;
}
else
{
lean_object* v___x_2140_; uint8_t v___x_2141_; 
v___x_2140_ = lean_array_get_size(v_bs_2125_);
v___x_2141_ = lean_nat_dec_lt(v_i_2126_, v___x_2140_);
if (v___x_2141_ == 0)
{
lean_object* v___x_2142_; 
lean_dec(v_i_2126_);
lean_dec_ref(v_e_2123_);
lean_dec(v_fixedPrefixSize_2122_);
lean_dec(v_recFnName_2121_);
v___x_2142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2142_, 0, v_cs_2127_);
return v___x_2142_;
}
else
{
lean_object* v___x_2143_; lean_object* v_a_2144_; lean_object* v_b_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___f_2149_; uint8_t v___x_2150_; lean_object* v___x_2151_; 
v___x_2143_ = l_Lean_instInhabitedExpr;
v_a_2144_ = lean_array_fget_borrowed(v_as_2124_, v_i_2126_);
v_b_2145_ = lean_array_fget_borrowed(v_bs_2125_, v_i_2126_);
v___x_2146_ = lean_unsigned_to_nat(1u);
v___x_2147_ = lean_nat_add(v_b_2145_, v___x_2146_);
v___x_2148_ = lean_box(v___x_2141_);
lean_inc_ref(v_e_2123_);
lean_inc_n(v_a_2144_, 2);
lean_inc(v___x_2147_);
lean_inc(v_fixedPrefixSize_2122_);
lean_inc(v_recFnName_2121_);
lean_inc(v_b_2145_);
v___f_2149_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___lam__0___boxed), 19, 8);
lean_closure_set(v___f_2149_, 0, v___x_2143_);
lean_closure_set(v___f_2149_, 1, v_b_2145_);
lean_closure_set(v___f_2149_, 2, v_recFnName_2121_);
lean_closure_set(v___f_2149_, 3, v_fixedPrefixSize_2122_);
lean_closure_set(v___f_2149_, 4, v___x_2148_);
lean_closure_set(v___f_2149_, 5, v___x_2147_);
lean_closure_set(v___f_2149_, 6, v_a_2144_);
lean_closure_set(v___f_2149_, 7, v_e_2123_);
v___x_2150_ = 0;
v___x_2151_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_a_2144_, v___x_2147_, v___f_2149_, v___x_2150_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_a_2152_);
lean_dec_ref(v___x_2151_);
v___x_2153_ = lean_nat_add(v_i_2126_, v___x_2146_);
lean_dec(v_i_2126_);
v___x_2154_ = lean_array_push(v_cs_2127_, v_a_2152_);
v_i_2126_ = v___x_2153_;
v_cs_2127_ = v___x_2154_;
goto _start;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v_cs_2127_);
lean_dec(v_i_2126_);
lean_dec_ref(v_e_2123_);
lean_dec(v_fixedPrefixSize_2122_);
lean_dec(v_recFnName_2121_);
v_a_2156_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2151_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2151_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(lean_object* v_recFnName_2164_, lean_object* v_fixedPrefixSize_2165_, lean_object* v_F_2166_, lean_object* v_e_2167_, lean_object* v_a_2168_, lean_object* v_a_2169_, lean_object* v_a_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_, lean_object* v_a_2175_){
_start:
{
switch(lean_obj_tag(v_e_2167_))
{
case 6:
{
lean_object* v_binderName_2177_; lean_object* v_binderType_2178_; lean_object* v_body_2179_; uint8_t v_binderInfo_2180_; lean_object* v___x_2181_; 
v_binderName_2177_ = lean_ctor_get(v_e_2167_, 0);
lean_inc(v_binderName_2177_);
v_binderType_2178_ = lean_ctor_get(v_e_2167_, 1);
lean_inc_ref(v_binderType_2178_);
v_body_2179_ = lean_ctor_get(v_e_2167_, 2);
lean_inc_ref(v_body_2179_);
v_binderInfo_2180_ = lean_ctor_get_uint8(v_e_2167_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2167_);
lean_inc_ref(v_F_2166_);
lean_inc(v_fixedPrefixSize_2165_);
lean_inc(v_recFnName_2164_);
v___x_2181_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_binderType_2178_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2181_) == 0)
{
lean_object* v_a_2182_; lean_object* v___f_2183_; uint8_t v___x_2184_; lean_object* v___x_2185_; 
v_a_2182_ = lean_ctor_get(v___x_2181_, 0);
lean_inc(v_a_2182_);
lean_dec_ref(v___x_2181_);
v___f_2183_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__0___boxed), 14, 4);
lean_closure_set(v___f_2183_, 0, v_body_2179_);
lean_closure_set(v___f_2183_, 1, v_recFnName_2164_);
lean_closure_set(v___f_2183_, 2, v_fixedPrefixSize_2165_);
lean_closure_set(v___f_2183_, 3, v_F_2166_);
v___x_2184_ = 0;
v___x_2185_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2177_, v_binderInfo_2180_, v_a_2182_, v___f_2183_, v___x_2184_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
return v___x_2185_;
}
else
{
lean_dec_ref(v_body_2179_);
lean_dec(v_binderName_2177_);
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
return v___x_2181_;
}
}
case 7:
{
lean_object* v_binderName_2186_; lean_object* v_binderType_2187_; lean_object* v_body_2188_; uint8_t v_binderInfo_2189_; lean_object* v___x_2190_; 
v_binderName_2186_ = lean_ctor_get(v_e_2167_, 0);
lean_inc(v_binderName_2186_);
v_binderType_2187_ = lean_ctor_get(v_e_2167_, 1);
lean_inc_ref(v_binderType_2187_);
v_body_2188_ = lean_ctor_get(v_e_2167_, 2);
lean_inc_ref(v_body_2188_);
v_binderInfo_2189_ = lean_ctor_get_uint8(v_e_2167_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2167_);
lean_inc_ref(v_F_2166_);
lean_inc(v_fixedPrefixSize_2165_);
lean_inc(v_recFnName_2164_);
v___x_2190_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_binderType_2187_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_a_2191_; lean_object* v___f_2192_; uint8_t v___x_2193_; lean_object* v___x_2194_; 
v_a_2191_ = lean_ctor_get(v___x_2190_, 0);
lean_inc(v_a_2191_);
lean_dec_ref(v___x_2190_);
v___f_2192_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__1___boxed), 14, 4);
lean_closure_set(v___f_2192_, 0, v_body_2188_);
lean_closure_set(v___f_2192_, 1, v_recFnName_2164_);
lean_closure_set(v___f_2192_, 2, v_fixedPrefixSize_2165_);
lean_closure_set(v___f_2192_, 3, v_F_2166_);
v___x_2193_ = 0;
v___x_2194_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_binderName_2186_, v_binderInfo_2189_, v_a_2191_, v___f_2192_, v___x_2193_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
return v___x_2194_;
}
else
{
lean_dec_ref(v_body_2188_);
lean_dec(v_binderName_2186_);
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
return v___x_2190_;
}
}
case 8:
{
lean_object* v_declName_2195_; lean_object* v_type_2196_; lean_object* v_value_2197_; lean_object* v_body_2198_; uint8_t v_nondep_2199_; lean_object* v___x_2200_; 
v_declName_2195_ = lean_ctor_get(v_e_2167_, 0);
lean_inc(v_declName_2195_);
v_type_2196_ = lean_ctor_get(v_e_2167_, 1);
lean_inc_ref(v_type_2196_);
v_value_2197_ = lean_ctor_get(v_e_2167_, 2);
lean_inc_ref(v_value_2197_);
v_body_2198_ = lean_ctor_get(v_e_2167_, 3);
lean_inc_ref(v_body_2198_);
v_nondep_2199_ = lean_ctor_get_uint8(v_e_2167_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_2167_);
lean_inc_ref(v_F_2166_);
lean_inc(v_fixedPrefixSize_2165_);
lean_inc(v_recFnName_2164_);
v___x_2200_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_type_2196_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_object* v_a_2201_; lean_object* v___x_2202_; 
v_a_2201_ = lean_ctor_get(v___x_2200_, 0);
lean_inc(v_a_2201_);
lean_dec_ref(v___x_2200_);
lean_inc_ref(v_F_2166_);
lean_inc(v_fixedPrefixSize_2165_);
lean_inc(v_recFnName_2164_);
v___x_2202_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_value_2197_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2202_) == 0)
{
lean_object* v_a_2203_; lean_object* v___f_2204_; uint8_t v___x_2205_; uint8_t v___x_2206_; lean_object* v___x_2207_; 
v_a_2203_ = lean_ctor_get(v___x_2202_, 0);
lean_inc(v_a_2203_);
lean_dec_ref(v___x_2202_);
v___f_2204_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2___boxed), 14, 4);
lean_closure_set(v___f_2204_, 0, v_body_2198_);
lean_closure_set(v___f_2204_, 1, v_recFnName_2164_);
lean_closure_set(v___f_2204_, 2, v_fixedPrefixSize_2165_);
lean_closure_set(v___f_2204_, 3, v_F_2166_);
v___x_2205_ = 0;
v___x_2206_ = 0;
v___x_2207_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11(v_declName_2195_, v_a_2201_, v_a_2203_, v___f_2204_, v_nondep_2199_, v___x_2205_, v___x_2206_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
return v___x_2207_;
}
else
{
lean_dec(v_a_2201_);
lean_dec_ref(v_body_2198_);
lean_dec(v_declName_2195_);
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
return v___x_2202_;
}
}
else
{
lean_dec_ref(v_body_2198_);
lean_dec_ref(v_value_2197_);
lean_dec(v_declName_2195_);
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
return v___x_2200_;
}
}
case 10:
{
lean_object* v_data_2208_; lean_object* v_expr_2209_; lean_object* v___x_2210_; 
v_data_2208_ = lean_ctor_get(v_e_2167_, 0);
lean_inc(v_data_2208_);
v_expr_2209_ = lean_ctor_get(v_e_2167_, 1);
lean_inc_ref(v_expr_2209_);
v___x_2210_ = l_Lean_getRecAppSyntax_x3f(v_e_2167_);
lean_dec_ref(v_e_2167_);
if (lean_obj_tag(v___x_2210_) == 1)
{
lean_object* v_val_2211_; lean_object* v_fileName_2212_; lean_object* v_fileMap_2213_; lean_object* v_options_2214_; lean_object* v_currRecDepth_2215_; lean_object* v_maxRecDepth_2216_; lean_object* v_ref_2217_; lean_object* v_currNamespace_2218_; lean_object* v_openDecls_2219_; lean_object* v_initHeartbeats_2220_; lean_object* v_maxHeartbeats_2221_; lean_object* v_quotContext_2222_; lean_object* v_currMacroScope_2223_; uint8_t v_diag_2224_; lean_object* v_cancelTk_x3f_2225_; uint8_t v_suppressElabErrors_2226_; lean_object* v_inheritedTraceOptions_2227_; lean_object* v_ref_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
lean_dec(v_data_2208_);
v_val_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_val_2211_);
lean_dec_ref(v___x_2210_);
v_fileName_2212_ = lean_ctor_get(v_a_2174_, 0);
v_fileMap_2213_ = lean_ctor_get(v_a_2174_, 1);
v_options_2214_ = lean_ctor_get(v_a_2174_, 2);
v_currRecDepth_2215_ = lean_ctor_get(v_a_2174_, 3);
v_maxRecDepth_2216_ = lean_ctor_get(v_a_2174_, 4);
v_ref_2217_ = lean_ctor_get(v_a_2174_, 5);
v_currNamespace_2218_ = lean_ctor_get(v_a_2174_, 6);
v_openDecls_2219_ = lean_ctor_get(v_a_2174_, 7);
v_initHeartbeats_2220_ = lean_ctor_get(v_a_2174_, 8);
v_maxHeartbeats_2221_ = lean_ctor_get(v_a_2174_, 9);
v_quotContext_2222_ = lean_ctor_get(v_a_2174_, 10);
v_currMacroScope_2223_ = lean_ctor_get(v_a_2174_, 11);
v_diag_2224_ = lean_ctor_get_uint8(v_a_2174_, sizeof(void*)*14);
v_cancelTk_x3f_2225_ = lean_ctor_get(v_a_2174_, 12);
v_suppressElabErrors_2226_ = lean_ctor_get_uint8(v_a_2174_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2227_ = lean_ctor_get(v_a_2174_, 13);
v_ref_2228_ = l_Lean_replaceRef(v_val_2211_, v_ref_2217_);
lean_dec(v_val_2211_);
lean_inc_ref(v_inheritedTraceOptions_2227_);
lean_inc(v_cancelTk_x3f_2225_);
lean_inc(v_currMacroScope_2223_);
lean_inc(v_quotContext_2222_);
lean_inc(v_maxHeartbeats_2221_);
lean_inc(v_initHeartbeats_2220_);
lean_inc(v_openDecls_2219_);
lean_inc(v_currNamespace_2218_);
lean_inc(v_maxRecDepth_2216_);
lean_inc(v_currRecDepth_2215_);
lean_inc_ref(v_options_2214_);
lean_inc_ref(v_fileMap_2213_);
lean_inc_ref(v_fileName_2212_);
v___x_2229_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2229_, 0, v_fileName_2212_);
lean_ctor_set(v___x_2229_, 1, v_fileMap_2213_);
lean_ctor_set(v___x_2229_, 2, v_options_2214_);
lean_ctor_set(v___x_2229_, 3, v_currRecDepth_2215_);
lean_ctor_set(v___x_2229_, 4, v_maxRecDepth_2216_);
lean_ctor_set(v___x_2229_, 5, v_ref_2228_);
lean_ctor_set(v___x_2229_, 6, v_currNamespace_2218_);
lean_ctor_set(v___x_2229_, 7, v_openDecls_2219_);
lean_ctor_set(v___x_2229_, 8, v_initHeartbeats_2220_);
lean_ctor_set(v___x_2229_, 9, v_maxHeartbeats_2221_);
lean_ctor_set(v___x_2229_, 10, v_quotContext_2222_);
lean_ctor_set(v___x_2229_, 11, v_currMacroScope_2223_);
lean_ctor_set(v___x_2229_, 12, v_cancelTk_x3f_2225_);
lean_ctor_set(v___x_2229_, 13, v_inheritedTraceOptions_2227_);
lean_ctor_set_uint8(v___x_2229_, sizeof(void*)*14, v_diag_2224_);
lean_ctor_set_uint8(v___x_2229_, sizeof(void*)*14 + 1, v_suppressElabErrors_2226_);
v___x_2230_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_expr_2209_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v___x_2229_, v_a_2175_);
lean_dec_ref(v___x_2229_);
return v___x_2230_;
}
else
{
lean_object* v___x_2231_; 
lean_dec(v___x_2210_);
v___x_2231_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_expr_2209_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v_a_2232_; lean_object* v___x_2234_; uint8_t v_isShared_2235_; uint8_t v_isSharedCheck_2240_; 
v_a_2232_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2240_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2240_ == 0)
{
v___x_2234_ = v___x_2231_;
v_isShared_2235_ = v_isSharedCheck_2240_;
goto v_resetjp_2233_;
}
else
{
lean_inc(v_a_2232_);
lean_dec(v___x_2231_);
v___x_2234_ = lean_box(0);
v_isShared_2235_ = v_isSharedCheck_2240_;
goto v_resetjp_2233_;
}
v_resetjp_2233_:
{
lean_object* v___x_2236_; lean_object* v___x_2238_; 
v___x_2236_ = l_Lean_mkMData(v_data_2208_, v_a_2232_);
if (v_isShared_2235_ == 0)
{
lean_ctor_set(v___x_2234_, 0, v___x_2236_);
v___x_2238_ = v___x_2234_;
goto v_reusejp_2237_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2236_);
v___x_2238_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2237_;
}
v_reusejp_2237_:
{
return v___x_2238_;
}
}
}
else
{
lean_dec(v_data_2208_);
return v___x_2231_;
}
}
}
case 11:
{
lean_object* v_typeName_2241_; lean_object* v_idx_2242_; lean_object* v_struct_2243_; lean_object* v___x_2244_; 
v_typeName_2241_ = lean_ctor_get(v_e_2167_, 0);
lean_inc(v_typeName_2241_);
v_idx_2242_ = lean_ctor_get(v_e_2167_, 1);
lean_inc(v_idx_2242_);
v_struct_2243_ = lean_ctor_get(v_e_2167_, 2);
lean_inc_ref(v_struct_2243_);
lean_dec_ref(v_e_2167_);
v___x_2244_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_struct_2243_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2244_) == 0)
{
lean_object* v_a_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2253_; 
v_a_2245_ = lean_ctor_get(v___x_2244_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v___x_2244_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2247_ = v___x_2244_;
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_a_2245_);
lean_dec(v___x_2244_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2249_; lean_object* v___x_2251_; 
v___x_2249_ = l_Lean_mkProj(v_typeName_2241_, v_idx_2242_, v_a_2245_);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 0, v___x_2249_);
v___x_2251_ = v___x_2247_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v___x_2249_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
return v___x_2251_;
}
}
}
else
{
lean_dec(v_idx_2242_);
lean_dec(v_typeName_2241_);
return v___x_2244_;
}
}
case 4:
{
uint8_t v___x_2254_; 
v___x_2254_ = l_Lean_Expr_isConstOf(v_e_2167_, v_recFnName_2164_);
if (v___x_2254_ == 0)
{
lean_object* v___x_2255_; 
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
v___x_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2255_, 0, v_e_2167_);
return v___x_2255_;
}
else
{
lean_object* v___x_2256_; 
v___x_2256_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_e_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
return v___x_2256_;
}
}
case 5:
{
uint8_t v___x_2257_; lean_object* v___x_2258_; 
v___x_2257_ = 1;
lean_inc_ref(v_e_2167_);
v___x_2258_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13(v_e_2167_, v___x_2257_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2258_) == 0)
{
lean_object* v_a_2259_; 
v_a_2259_ = lean_ctor_get(v___x_2258_, 0);
lean_inc(v_a_2259_);
lean_dec_ref(v___x_2258_);
if (lean_obj_tag(v_a_2259_) == 0)
{
lean_object* v___x_2260_; 
v___x_2260_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_e_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
return v___x_2260_;
}
else
{
lean_object* v_val_2261_; lean_object* v___x_2262_; 
v_val_2261_ = lean_ctor_get(v_a_2259_, 0);
lean_inc(v_val_2261_);
lean_dec_ref(v_a_2259_);
lean_inc_ref(v_F_2166_);
v___x_2262_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_2261_, v_F_2166_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2262_) == 0)
{
lean_object* v_a_2263_; 
v_a_2263_ = lean_ctor_get(v___x_2262_, 0);
lean_inc(v_a_2263_);
lean_dec_ref(v___x_2262_);
if (lean_obj_tag(v_a_2263_) == 1)
{
lean_object* v_val_2264_; lean_object* v_toMatcherInfo_2265_; lean_object* v_matcherName_2266_; lean_object* v_matcherLevels_2267_; lean_object* v_params_2268_; lean_object* v_motive_2269_; lean_object* v_discrs_2270_; lean_object* v_alts_2271_; lean_object* v_remaining_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v_val_2264_ = lean_ctor_get(v_a_2263_, 0);
lean_inc(v_val_2264_);
lean_dec_ref(v_a_2263_);
v_toMatcherInfo_2265_ = lean_ctor_get(v_val_2264_, 0);
lean_inc_ref(v_toMatcherInfo_2265_);
v_matcherName_2266_ = lean_ctor_get(v_val_2264_, 1);
lean_inc(v_matcherName_2266_);
v_matcherLevels_2267_ = lean_ctor_get(v_val_2264_, 2);
lean_inc_ref(v_matcherLevels_2267_);
v_params_2268_ = lean_ctor_get(v_val_2264_, 3);
lean_inc_ref(v_params_2268_);
v_motive_2269_ = lean_ctor_get(v_val_2264_, 4);
lean_inc_ref(v_motive_2269_);
v_discrs_2270_ = lean_ctor_get(v_val_2264_, 5);
lean_inc_ref(v_discrs_2270_);
v_alts_2271_ = lean_ctor_get(v_val_2264_, 6);
lean_inc_ref(v_alts_2271_);
v_remaining_2272_ = lean_ctor_get(v_val_2264_, 7);
lean_inc_ref(v_remaining_2272_);
v___x_2273_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_2264_);
v___x_2274_ = lean_unsigned_to_nat(0u);
v___x_2275_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0);
lean_inc(v_fixedPrefixSize_2165_);
lean_inc(v_recFnName_2164_);
v___x_2276_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_e_2167_, v_alts_2271_, v___x_2273_, v___x_2274_, v___x_2275_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
lean_dec_ref(v___x_2273_);
lean_dec_ref(v_alts_2271_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v_a_2277_; size_t v_sz_2278_; size_t v___x_2279_; lean_object* v___x_2280_; 
v_a_2277_ = lean_ctor_get(v___x_2276_, 0);
lean_inc(v_a_2277_);
lean_dec_ref(v___x_2276_);
v_sz_2278_ = lean_array_size(v_discrs_2270_);
v___x_2279_ = ((size_t)0ULL);
v___x_2280_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_sz_2278_, v___x_2279_, v_discrs_2270_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2280_) == 0)
{
lean_object* v_a_2281_; lean_object* v___x_2283_; uint8_t v_isShared_2284_; uint8_t v_isSharedCheck_2290_; 
v_a_2281_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2283_ = v___x_2280_;
v_isShared_2284_ = v_isSharedCheck_2290_;
goto v_resetjp_2282_;
}
else
{
lean_inc(v_a_2281_);
lean_dec(v___x_2280_);
v___x_2283_ = lean_box(0);
v_isShared_2284_ = v_isSharedCheck_2290_;
goto v_resetjp_2282_;
}
v_resetjp_2282_:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2288_; 
v___x_2285_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2285_, 0, v_toMatcherInfo_2265_);
lean_ctor_set(v___x_2285_, 1, v_matcherName_2266_);
lean_ctor_set(v___x_2285_, 2, v_matcherLevels_2267_);
lean_ctor_set(v___x_2285_, 3, v_params_2268_);
lean_ctor_set(v___x_2285_, 4, v_motive_2269_);
lean_ctor_set(v___x_2285_, 5, v_a_2281_);
lean_ctor_set(v___x_2285_, 6, v_a_2277_);
lean_ctor_set(v___x_2285_, 7, v_remaining_2272_);
v___x_2286_ = l_Lean_Meta_MatcherApp_toExpr(v___x_2285_);
if (v_isShared_2284_ == 0)
{
lean_ctor_set(v___x_2283_, 0, v___x_2286_);
v___x_2288_ = v___x_2283_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2286_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
return v___x_2288_;
}
}
}
else
{
lean_object* v_a_2291_; lean_object* v___x_2293_; uint8_t v_isShared_2294_; uint8_t v_isSharedCheck_2298_; 
lean_dec(v_a_2277_);
lean_dec_ref(v_remaining_2272_);
lean_dec_ref(v_motive_2269_);
lean_dec_ref(v_params_2268_);
lean_dec_ref(v_matcherLevels_2267_);
lean_dec(v_matcherName_2266_);
lean_dec_ref(v_toMatcherInfo_2265_);
v_a_2291_ = lean_ctor_get(v___x_2280_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2280_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2293_ = v___x_2280_;
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
else
{
lean_inc(v_a_2291_);
lean_dec(v___x_2280_);
v___x_2293_ = lean_box(0);
v_isShared_2294_ = v_isSharedCheck_2298_;
goto v_resetjp_2292_;
}
v_resetjp_2292_:
{
lean_object* v___x_2296_; 
if (v_isShared_2294_ == 0)
{
v___x_2296_ = v___x_2293_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_a_2291_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_dec_ref(v_remaining_2272_);
lean_dec_ref(v_discrs_2270_);
lean_dec_ref(v_motive_2269_);
lean_dec_ref(v_params_2268_);
lean_dec_ref(v_matcherLevels_2267_);
lean_dec(v_matcherName_2266_);
lean_dec_ref(v_toMatcherInfo_2265_);
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
v_a_2299_ = lean_ctor_get(v___x_2276_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2276_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2276_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
else
{
lean_object* v___x_2307_; 
lean_dec(v_a_2263_);
v___x_2307_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2164_, v_fixedPrefixSize_2165_, v_F_2166_, v_e_2167_, v_a_2168_, v_a_2169_, v_a_2170_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
return v___x_2307_;
}
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2315_; 
lean_dec_ref(v_e_2167_);
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
v_a_2308_ = lean_ctor_get(v___x_2262_, 0);
v_isSharedCheck_2315_ = !lean_is_exclusive(v___x_2262_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2310_ = v___x_2262_;
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_a_2308_);
lean_dec(v___x_2262_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2315_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2313_; 
if (v_isShared_2311_ == 0)
{
v___x_2313_ = v___x_2310_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v_a_2308_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec_ref(v_e_2167_);
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
lean_dec(v_recFnName_2164_);
v_a_2316_ = lean_ctor_get(v___x_2258_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2258_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2258_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2258_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
default: 
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
lean_dec_ref(v_F_2166_);
lean_dec(v_fixedPrefixSize_2165_);
v___x_2324_ = lean_unsigned_to_nat(1u);
v___x_2325_ = lean_mk_empty_array_with_capacity(v___x_2324_);
v___x_2326_ = lean_array_push(v___x_2325_, v_recFnName_2164_);
lean_inc_ref(v_e_2167_);
v___x_2327_ = l_Lean_Elab_ensureNoRecFn(v___x_2326_, v_e_2167_, v_a_2172_, v_a_2173_, v_a_2174_, v_a_2175_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2334_ == 0)
{
lean_object* v_unused_2335_; 
v_unused_2335_ = lean_ctor_get(v___x_2327_, 0);
lean_dec(v_unused_2335_);
v___x_2329_ = v___x_2327_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_dec(v___x_2327_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 0, v_e_2167_);
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_e_2167_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
else
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
lean_dec_ref(v_e_2167_);
v_a_2336_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2327_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2327_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2341_; 
if (v_isShared_2339_ == 0)
{
v___x_2341_ = v___x_2338_;
goto v_reusejp_2340_;
}
else
{
lean_object* v_reuseFailAlloc_2342_; 
v_reuseFailAlloc_2342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2342_, 0, v_a_2336_);
v___x_2341_ = v_reuseFailAlloc_2342_;
goto v_reusejp_2340_;
}
v_reusejp_2340_:
{
return v___x_2341_;
}
}
}
}
}
}
}
static uint64_t _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0(void){
_start:
{
uint8_t v___x_2344_; uint64_t v___x_2345_; 
v___x_2344_ = 0;
v___x_2345_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_2344_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(lean_object* v_recFnName_2346_, lean_object* v_fixedPrefixSize_2347_, lean_object* v_F_2348_, lean_object* v_e_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v___x_2359_; 
lean_inc_ref(v_e_2349_);
lean_inc(v_recFnName_2346_);
v___x_2359_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_containsRecFn___redArg(v_recFnName_2346_, v_e_2349_, v_a_2350_, v_a_2357_);
if (lean_obj_tag(v___x_2359_) == 0)
{
lean_object* v_a_2360_; lean_object* v___x_2362_; uint8_t v_isShared_2363_; uint8_t v_isSharedCheck_2500_; 
v_a_2360_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2500_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2362_ = v___x_2359_;
v_isShared_2363_ = v_isSharedCheck_2500_;
goto v_resetjp_2361_;
}
else
{
lean_inc(v_a_2360_);
lean_dec(v___x_2359_);
v___x_2362_ = lean_box(0);
v_isShared_2363_ = v_isSharedCheck_2500_;
goto v_resetjp_2361_;
}
v_resetjp_2361_:
{
uint8_t v___x_2364_; 
v___x_2364_ = lean_unbox(v_a_2360_);
lean_dec(v_a_2360_);
if (v___x_2364_ == 0)
{
lean_object* v___x_2366_; 
lean_dec_ref(v_F_2348_);
lean_dec(v_fixedPrefixSize_2347_);
lean_dec(v_recFnName_2346_);
if (v_isShared_2363_ == 0)
{
lean_ctor_set(v___x_2362_, 0, v_e_2349_);
v___x_2366_ = v___x_2362_;
goto v_reusejp_2365_;
}
else
{
lean_object* v_reuseFailAlloc_2367_; 
v_reuseFailAlloc_2367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2367_, 0, v_e_2349_);
v___x_2366_ = v_reuseFailAlloc_2367_;
goto v_reusejp_2365_;
}
v_reusejp_2365_:
{
return v___x_2366_;
}
}
else
{
lean_object* v___x_2368_; lean_object* v___x_2369_; uint8_t v___x_2370_; lean_object* v___y_2372_; lean_object* v___y_2373_; lean_object* v___y_2374_; lean_object* v___y_2375_; lean_object* v___y_2376_; lean_object* v___y_2377_; lean_object* v___y_2378_; lean_object* v___y_2379_; lean_object* v___x_2478_; 
lean_del_object(v___x_2362_);
v___x_2368_ = lean_st_ref_get(v_a_2357_);
lean_dec(v___x_2368_);
v___x_2369_ = lean_st_ref_get(v_a_2351_);
v___x_2370_ = 0;
v___x_2478_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v___x_2369_, v_e_2349_);
lean_dec(v___x_2369_);
if (lean_obj_tag(v___x_2478_) == 1)
{
lean_object* v_val_2479_; lean_object* v_fst_2480_; lean_object* v_snd_2481_; lean_object* v___x_2482_; 
v_val_2479_ = lean_ctor_get(v___x_2478_, 0);
lean_inc(v_val_2479_);
lean_dec_ref(v___x_2478_);
v_fst_2480_ = lean_ctor_get(v_val_2479_, 0);
lean_inc(v_fst_2480_);
v_snd_2481_ = lean_ctor_get(v_val_2479_, 1);
lean_inc(v_snd_2481_);
lean_dec(v_val_2479_);
v___x_2482_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_LCtxId_isValid___redArg(v_snd_2481_, v_a_2354_);
lean_dec(v_snd_2481_);
if (lean_obj_tag(v___x_2482_) == 0)
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2491_; 
v_a_2483_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2485_ = v___x_2482_;
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2482_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2491_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
uint8_t v___x_2487_; 
v___x_2487_ = lean_unbox(v_a_2483_);
lean_dec(v_a_2483_);
if (v___x_2487_ == 0)
{
lean_del_object(v___x_2485_);
lean_dec(v_fst_2480_);
v___y_2372_ = v_a_2350_;
v___y_2373_ = v_a_2351_;
v___y_2374_ = v_a_2352_;
v___y_2375_ = v_a_2353_;
v___y_2376_ = v_a_2354_;
v___y_2377_ = v_a_2355_;
v___y_2378_ = v_a_2356_;
v___y_2379_ = v_a_2357_;
goto v___jp_2371_;
}
else
{
lean_object* v___x_2489_; 
lean_dec_ref(v_e_2349_);
lean_dec_ref(v_F_2348_);
lean_dec(v_fixedPrefixSize_2347_);
lean_dec(v_recFnName_2346_);
if (v_isShared_2486_ == 0)
{
lean_ctor_set(v___x_2485_, 0, v_fst_2480_);
v___x_2489_ = v___x_2485_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_fst_2480_);
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
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_dec(v_fst_2480_);
lean_dec_ref(v_e_2349_);
lean_dec_ref(v_F_2348_);
lean_dec(v_fixedPrefixSize_2347_);
lean_dec(v_recFnName_2346_);
v_a_2492_ = lean_ctor_get(v___x_2482_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2482_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2482_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2482_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
else
{
lean_dec(v___x_2478_);
v___y_2372_ = v_a_2350_;
v___y_2373_ = v_a_2351_;
v___y_2374_ = v_a_2352_;
v___y_2375_ = v_a_2353_;
v___y_2376_ = v_a_2354_;
v___y_2377_ = v_a_2355_;
v___y_2378_ = v_a_2356_;
v___y_2379_ = v_a_2357_;
goto v___jp_2371_;
}
v___jp_2371_:
{
lean_object* v___x_2380_; 
lean_inc_ref(v_e_2349_);
v___x_2380_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2346_, v_fixedPrefixSize_2347_, v_F_2348_, v_e_2349_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2382_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
lean_inc(v_a_2381_);
lean_dec_ref(v___x_2380_);
v___x_2382_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId(v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
if (lean_obj_tag(v___x_2382_) == 0)
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2469_; 
v_a_2383_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2385_ = v___x_2382_;
v_isShared_2386_ = v_isSharedCheck_2469_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2382_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2469_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v_options_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; 
v___x_2387_ = lean_st_ref_get(v___y_2379_);
lean_dec(v___x_2387_);
v___x_2388_ = lean_st_ref_take(v___y_2373_);
lean_inc(v_a_2381_);
v___x_2389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2389_, 0, v_a_2381_);
lean_ctor_set(v___x_2389_, 1, v_a_2383_);
lean_inc_ref(v_e_2349_);
v___x_2390_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v___x_2388_, v_e_2349_, v___x_2389_);
v___x_2391_ = lean_st_ref_set(v___y_2373_, v___x_2390_);
v_options_2392_ = lean_ctor_get(v___y_2378_, 2);
v___x_2393_ = l_Lean_Elab_WF_debug_definition_wf_replaceRecApps;
v___x_2394_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_options_2392_, v___x_2393_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2396_; 
lean_dec_ref(v_e_2349_);
if (v_isShared_2386_ == 0)
{
lean_ctor_set(v___x_2385_, 0, v_a_2381_);
v___x_2396_ = v___x_2385_;
goto v_reusejp_2395_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_a_2381_);
v___x_2396_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2395_;
}
v_reusejp_2395_:
{
return v___x_2396_;
}
}
else
{
lean_object* v___x_2398_; uint8_t v_foApprox_2399_; uint8_t v_ctxApprox_2400_; uint8_t v_quasiPatternApprox_2401_; uint8_t v_constApprox_2402_; uint8_t v_isDefEqStuckEx_2403_; uint8_t v_unificationHints_2404_; uint8_t v_proofIrrelevance_2405_; uint8_t v_assignSyntheticOpaque_2406_; uint8_t v_offsetCnstrs_2407_; uint8_t v_etaStruct_2408_; uint8_t v_univApprox_2409_; uint8_t v_iota_2410_; uint8_t v_beta_2411_; uint8_t v_proj_2412_; uint8_t v_zeta_2413_; uint8_t v_zetaDelta_2414_; uint8_t v_zetaUnused_2415_; uint8_t v_zetaHave_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2468_; 
lean_del_object(v___x_2385_);
v___x_2398_ = l_Lean_Meta_Context_config(v___y_2376_);
v_foApprox_2399_ = lean_ctor_get_uint8(v___x_2398_, 0);
v_ctxApprox_2400_ = lean_ctor_get_uint8(v___x_2398_, 1);
v_quasiPatternApprox_2401_ = lean_ctor_get_uint8(v___x_2398_, 2);
v_constApprox_2402_ = lean_ctor_get_uint8(v___x_2398_, 3);
v_isDefEqStuckEx_2403_ = lean_ctor_get_uint8(v___x_2398_, 4);
v_unificationHints_2404_ = lean_ctor_get_uint8(v___x_2398_, 5);
v_proofIrrelevance_2405_ = lean_ctor_get_uint8(v___x_2398_, 6);
v_assignSyntheticOpaque_2406_ = lean_ctor_get_uint8(v___x_2398_, 7);
v_offsetCnstrs_2407_ = lean_ctor_get_uint8(v___x_2398_, 8);
v_etaStruct_2408_ = lean_ctor_get_uint8(v___x_2398_, 10);
v_univApprox_2409_ = lean_ctor_get_uint8(v___x_2398_, 11);
v_iota_2410_ = lean_ctor_get_uint8(v___x_2398_, 12);
v_beta_2411_ = lean_ctor_get_uint8(v___x_2398_, 13);
v_proj_2412_ = lean_ctor_get_uint8(v___x_2398_, 14);
v_zeta_2413_ = lean_ctor_get_uint8(v___x_2398_, 15);
v_zetaDelta_2414_ = lean_ctor_get_uint8(v___x_2398_, 16);
v_zetaUnused_2415_ = lean_ctor_get_uint8(v___x_2398_, 17);
v_zetaHave_2416_ = lean_ctor_get_uint8(v___x_2398_, 18);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2418_ = v___x_2398_;
v_isShared_2419_ = v_isSharedCheck_2468_;
goto v_resetjp_2417_;
}
else
{
lean_dec(v___x_2398_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2468_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
uint8_t v_trackZetaDelta_2420_; lean_object* v_zetaDeltaSet_2421_; lean_object* v_lctx_2422_; lean_object* v_localInstances_2423_; lean_object* v_defEqCtx_x3f_2424_; lean_object* v_synthPendingDepth_2425_; lean_object* v_canUnfold_x3f_2426_; uint8_t v_univApprox_2427_; uint8_t v_inTypeClassResolution_2428_; uint8_t v_cacheInferType_2429_; uint8_t v___x_2430_; lean_object* v_config_2432_; 
v_trackZetaDelta_2420_ = lean_ctor_get_uint8(v___y_2376_, sizeof(void*)*7);
v_zetaDeltaSet_2421_ = lean_ctor_get(v___y_2376_, 1);
v_lctx_2422_ = lean_ctor_get(v___y_2376_, 2);
v_localInstances_2423_ = lean_ctor_get(v___y_2376_, 3);
v_defEqCtx_x3f_2424_ = lean_ctor_get(v___y_2376_, 4);
v_synthPendingDepth_2425_ = lean_ctor_get(v___y_2376_, 5);
v_canUnfold_x3f_2426_ = lean_ctor_get(v___y_2376_, 6);
v_univApprox_2427_ = lean_ctor_get_uint8(v___y_2376_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2428_ = lean_ctor_get_uint8(v___y_2376_, sizeof(void*)*7 + 2);
v_cacheInferType_2429_ = lean_ctor_get_uint8(v___y_2376_, sizeof(void*)*7 + 3);
v___x_2430_ = 0;
if (v_isShared_2419_ == 0)
{
v_config_2432_ = v___x_2418_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 0, v_foApprox_2399_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 1, v_ctxApprox_2400_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 2, v_quasiPatternApprox_2401_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 3, v_constApprox_2402_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 4, v_isDefEqStuckEx_2403_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 5, v_unificationHints_2404_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 6, v_proofIrrelevance_2405_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 7, v_assignSyntheticOpaque_2406_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 8, v_offsetCnstrs_2407_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 10, v_etaStruct_2408_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 11, v_univApprox_2409_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 12, v_iota_2410_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 13, v_beta_2411_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 14, v_proj_2412_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 15, v_zeta_2413_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 16, v_zetaDelta_2414_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 17, v_zetaUnused_2415_);
lean_ctor_set_uint8(v_reuseFailAlloc_2467_, 18, v_zetaHave_2416_);
v_config_2432_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
uint64_t v___x_2433_; uint64_t v___x_2434_; uint64_t v___x_2435_; lean_object* v___f_2436_; uint64_t v___x_2437_; uint64_t v___x_2438_; uint64_t v_key_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; 
lean_ctor_set_uint8(v_config_2432_, 9, v___x_2430_);
v___x_2433_ = l_Lean_Meta_Context_configKey(v___y_2376_);
v___x_2434_ = 2ULL;
v___x_2435_ = lean_uint64_shift_right(v___x_2433_, v___x_2434_);
lean_inc(v_a_2381_);
v___f_2436_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___lam__0___boxed), 11, 2);
lean_closure_set(v___f_2436_, 0, v_a_2381_);
lean_closure_set(v___f_2436_, 1, v_e_2349_);
v___x_2437_ = lean_uint64_shift_left(v___x_2435_, v___x_2434_);
v___x_2438_ = lean_uint64_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___closed__0);
v_key_2439_ = lean_uint64_lor(v___x_2437_, v___x_2438_);
v___x_2440_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2440_, 0, v_config_2432_);
lean_ctor_set_uint64(v___x_2440_, sizeof(void*)*1, v_key_2439_);
lean_inc(v_canUnfold_x3f_2426_);
lean_inc(v_synthPendingDepth_2425_);
lean_inc(v_defEqCtx_x3f_2424_);
lean_inc_ref(v_localInstances_2423_);
lean_inc_ref(v_lctx_2422_);
lean_inc(v_zetaDeltaSet_2421_);
v___x_2441_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2441_, 0, v___x_2440_);
lean_ctor_set(v___x_2441_, 1, v_zetaDeltaSet_2421_);
lean_ctor_set(v___x_2441_, 2, v_lctx_2422_);
lean_ctor_set(v___x_2441_, 3, v_localInstances_2423_);
lean_ctor_set(v___x_2441_, 4, v_defEqCtx_x3f_2424_);
lean_ctor_set(v___x_2441_, 5, v_synthPendingDepth_2425_);
lean_ctor_set(v___x_2441_, 6, v_canUnfold_x3f_2426_);
lean_ctor_set_uint8(v___x_2441_, sizeof(void*)*7, v_trackZetaDelta_2420_);
lean_ctor_set_uint8(v___x_2441_, sizeof(void*)*7 + 1, v_univApprox_2427_);
lean_ctor_set_uint8(v___x_2441_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2428_);
lean_ctor_set_uint8(v___x_2441_, sizeof(void*)*7 + 3, v_cacheInferType_2429_);
v___x_2442_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v___f_2436_, v___x_2370_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___x_2441_, v___y_2377_, v___y_2378_, v___y_2379_);
lean_dec_ref(v___x_2441_);
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v___x_2444_; uint8_t v_isShared_2445_; uint8_t v_isSharedCheck_2449_; 
v_isSharedCheck_2449_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2449_ == 0)
{
lean_object* v_unused_2450_; 
v_unused_2450_ = lean_ctor_get(v___x_2442_, 0);
lean_dec(v_unused_2450_);
v___x_2444_ = v___x_2442_;
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
else
{
lean_dec(v___x_2442_);
v___x_2444_ = lean_box(0);
v_isShared_2445_ = v_isSharedCheck_2449_;
goto v_resetjp_2443_;
}
v_resetjp_2443_:
{
lean_object* v___x_2447_; 
if (v_isShared_2445_ == 0)
{
lean_ctor_set(v___x_2444_, 0, v_a_2381_);
v___x_2447_ = v___x_2444_;
goto v_reusejp_2446_;
}
else
{
lean_object* v_reuseFailAlloc_2448_; 
v_reuseFailAlloc_2448_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2448_, 0, v_a_2381_);
v___x_2447_ = v_reuseFailAlloc_2448_;
goto v_reusejp_2446_;
}
v_reusejp_2446_:
{
return v___x_2447_;
}
}
}
else
{
if (lean_obj_tag(v___x_2442_) == 0)
{
lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2457_; 
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2457_ == 0)
{
lean_object* v_unused_2458_; 
v_unused_2458_ = lean_ctor_get(v___x_2442_, 0);
lean_dec(v_unused_2458_);
v___x_2452_ = v___x_2442_;
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
else
{
lean_dec(v___x_2442_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2457_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2455_; 
if (v_isShared_2453_ == 0)
{
lean_ctor_set_tag(v___x_2452_, 0);
lean_ctor_set(v___x_2452_, 0, v_a_2381_);
v___x_2455_ = v___x_2452_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v_a_2381_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
else
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2466_; 
lean_dec(v_a_2381_);
v_a_2459_ = lean_ctor_get(v___x_2442_, 0);
v_isSharedCheck_2466_ = !lean_is_exclusive(v___x_2442_);
if (v_isSharedCheck_2466_ == 0)
{
v___x_2461_ = v___x_2442_;
v_isShared_2462_ = v_isSharedCheck_2466_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2442_);
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
}
}
}
}
else
{
lean_object* v_a_2470_; lean_object* v___x_2472_; uint8_t v_isShared_2473_; uint8_t v_isSharedCheck_2477_; 
lean_dec(v_a_2381_);
lean_dec_ref(v_e_2349_);
v_a_2470_ = lean_ctor_get(v___x_2382_, 0);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2382_);
if (v_isSharedCheck_2477_ == 0)
{
v___x_2472_ = v___x_2382_;
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
else
{
lean_inc(v_a_2470_);
lean_dec(v___x_2382_);
v___x_2472_ = lean_box(0);
v_isShared_2473_ = v_isSharedCheck_2477_;
goto v_resetjp_2471_;
}
v_resetjp_2471_:
{
lean_object* v___x_2475_; 
if (v_isShared_2473_ == 0)
{
v___x_2475_ = v___x_2472_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_a_2470_);
v___x_2475_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
return v___x_2475_;
}
}
}
}
else
{
lean_dec_ref(v_e_2349_);
return v___x_2380_;
}
}
}
}
}
else
{
lean_object* v_a_2501_; lean_object* v___x_2503_; uint8_t v_isShared_2504_; uint8_t v_isSharedCheck_2508_; 
lean_dec_ref(v_e_2349_);
lean_dec_ref(v_F_2348_);
lean_dec(v_fixedPrefixSize_2347_);
lean_dec(v_recFnName_2346_);
v_a_2501_ = lean_ctor_get(v___x_2359_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2503_ = v___x_2359_;
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
else
{
lean_inc(v_a_2501_);
lean_dec(v___x_2359_);
v___x_2503_ = lean_box(0);
v_isShared_2504_ = v_isSharedCheck_2508_;
goto v_resetjp_2502_;
}
v_resetjp_2502_:
{
lean_object* v___x_2506_; 
if (v_isShared_2504_ == 0)
{
v___x_2506_ = v___x_2503_;
goto v_reusejp_2505_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_a_2501_);
v___x_2506_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2505_;
}
v_reusejp_2505_:
{
return v___x_2506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___lam__2(lean_object* v_body_2509_, lean_object* v_recFnName_2510_, lean_object* v_fixedPrefixSize_2511_, lean_object* v_F_2512_, lean_object* v_x_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2523_ = lean_expr_instantiate1(v_body_2509_, v_x_2513_);
v___x_2524_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2510_, v_fixedPrefixSize_2511_, v_F_2512_, v___x_2523_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
return v___x_2524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp___boxed(lean_object* v_recFnName_2525_, lean_object* v_fixedPrefixSize_2526_, lean_object* v_F_2527_, lean_object* v_e_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp(v_recFnName_2525_, v_fixedPrefixSize_2526_, v_F_2527_, v_e_2528_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_, v_a_2535_, v_a_2536_);
lean_dec(v_a_2536_);
lean_dec_ref(v_a_2535_);
lean_dec(v_a_2534_);
lean_dec_ref(v_a_2533_);
lean_dec(v_a_2532_);
lean_dec_ref(v_a_2531_);
lean_dec(v_a_2530_);
lean_dec(v_a_2529_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1___boxed(lean_object* v_recFnName_2539_, lean_object* v_fixedPrefixSize_2540_, lean_object* v_F_2541_, lean_object* v_sz_2542_, lean_object* v_i_2543_, lean_object* v_bs_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
size_t v_sz_boxed_2554_; size_t v_i_boxed_2555_; lean_object* v_res_2556_; 
v_sz_boxed_2554_ = lean_unbox_usize(v_sz_2542_);
lean_dec(v_sz_2542_);
v_i_boxed_2555_ = lean_unbox_usize(v_i_2543_);
lean_dec(v_i_2543_);
v_res_2556_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__1(v_recFnName_2539_, v_fixedPrefixSize_2540_, v_F_2541_, v_sz_boxed_2554_, v_i_boxed_2555_, v_bs_2544_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec(v___y_2546_);
lean_dec(v___y_2545_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16___boxed(lean_object* v_recFnName_2557_, lean_object* v_fixedPrefixSize_2558_, lean_object* v_F_2559_, lean_object* v_x_2560_, lean_object* v_x_2561_, lean_object* v_x_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
lean_object* v_res_2572_; 
v_res_2572_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processApp_spec__16(v_recFnName_2557_, v_fixedPrefixSize_2558_, v_F_2559_, v_x_2560_, v_x_2561_, v_x_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec_ref(v___y_2565_);
lean_dec(v___y_2564_);
lean_dec(v___y_2563_);
return v_res_2572_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14___boxed(lean_object* v_recFnName_2573_, lean_object* v_fixedPrefixSize_2574_, lean_object* v_e_2575_, lean_object* v_as_2576_, lean_object* v_bs_2577_, lean_object* v_i_2578_, lean_object* v_cs_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_res_2589_; 
v_res_2589_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__14(v_recFnName_2573_, v_fixedPrefixSize_2574_, v_e_2575_, v_as_2576_, v_bs_2577_, v_i_2578_, v_cs_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v_bs_2577_);
lean_dec_ref(v_as_2576_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop___boxed(lean_object* v_recFnName_2590_, lean_object* v_fixedPrefixSize_2591_, lean_object* v_F_2592_, lean_object* v_e_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v_res_2603_; 
v_res_2603_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_2590_, v_fixedPrefixSize_2591_, v_F_2592_, v_e_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_);
lean_dec(v_a_2601_);
lean_dec_ref(v_a_2600_);
lean_dec(v_a_2599_);
lean_dec_ref(v_a_2598_);
lean_dec(v_a_2597_);
lean_dec_ref(v_a_2596_);
lean_dec(v_a_2595_);
lean_dec(v_a_2594_);
return v_res_2603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___boxed(lean_object* v_recFnName_2604_, lean_object* v_fixedPrefixSize_2605_, lean_object* v_F_2606_, lean_object* v_e_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec(v_recFnName_2604_, v_fixedPrefixSize_2605_, v_F_2606_, v_e_2607_, v_a_2608_, v_a_2609_, v_a_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_);
lean_dec(v_a_2615_);
lean_dec_ref(v_a_2614_);
lean_dec(v_a_2613_);
lean_dec_ref(v_a_2612_);
lean_dec(v_a_2611_);
lean_dec_ref(v_a_2610_);
lean_dec(v_a_2609_);
lean_dec(v_a_2608_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo___boxed(lean_object* v_recFnName_2618_, lean_object* v_fixedPrefixSize_2619_, lean_object* v_F_2620_, lean_object* v_e_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo(v_recFnName_2618_, v_fixedPrefixSize_2619_, v_F_2620_, v_e_2621_, v_a_2622_, v_a_2623_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_);
lean_dec(v_a_2629_);
lean_dec_ref(v_a_2628_);
lean_dec(v_a_2627_);
lean_dec_ref(v_a_2626_);
lean_dec(v_a_2625_);
lean_dec_ref(v_a_2624_);
lean_dec(v_a_2623_);
lean_dec(v_a_2622_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(lean_object* v_00_u03b1_2632_, lean_object* v_k_2633_, uint8_t v_allowLevelAssignments_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v___x_2644_; 
v___x_2644_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___redArg(v_k_2633_, v_allowLevelAssignments_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7___boxed(lean_object* v_00_u03b1_2645_, lean_object* v_k_2646_, lean_object* v_allowLevelAssignments_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_2657_; lean_object* v_res_2658_; 
v_allowLevelAssignments_boxed_2657_ = lean_unbox(v_allowLevelAssignments_2647_);
v_res_2658_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__7(v_00_u03b1_2645_, v_k_2646_, v_allowLevelAssignments_boxed_2657_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec(v___y_2648_);
return v_res_2658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(lean_object* v_00_u03b1_2659_, lean_object* v_name_2660_, uint8_t v_bi_2661_, lean_object* v_type_2662_, lean_object* v_k_2663_, uint8_t v_kind_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___redArg(v_name_2660_, v_bi_2661_, v_type_2662_, v_k_2663_, v_kind_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10___boxed(lean_object* v_00_u03b1_2675_, lean_object* v_name_2676_, lean_object* v_bi_2677_, lean_object* v_type_2678_, lean_object* v_k_2679_, lean_object* v_kind_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_){
_start:
{
uint8_t v_bi_boxed_2690_; uint8_t v_kind_boxed_2691_; lean_object* v_res_2692_; 
v_bi_boxed_2690_ = lean_unbox(v_bi_2677_);
v_kind_boxed_2691_ = lean_unbox(v_kind_2680_);
v_res_2692_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__10(v_00_u03b1_2675_, v_name_2676_, v_bi_boxed_2690_, v_type_2678_, v_k_2679_, v_kind_boxed_2691_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_);
lean_dec(v___y_2688_);
lean_dec_ref(v___y_2687_);
lean_dec(v___y_2686_);
lean_dec_ref(v___y_2685_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec(v___y_2681_);
return v_res_2692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(lean_object* v_00_u03b1_2693_, lean_object* v_e_2694_, lean_object* v_maxFVars_2695_, lean_object* v_k_2696_, uint8_t v_cleanupAnnotations_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_){
_start:
{
lean_object* v___x_2707_; 
v___x_2707_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___redArg(v_e_2694_, v_maxFVars_2695_, v_k_2696_, v_cleanupAnnotations_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
return v___x_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12___boxed(lean_object* v_00_u03b1_2708_, lean_object* v_e_2709_, lean_object* v_maxFVars_2710_, lean_object* v_k_2711_, lean_object* v_cleanupAnnotations_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2722_; lean_object* v_res_2723_; 
v_cleanupAnnotations_boxed_2722_ = lean_unbox(v_cleanupAnnotations_2712_);
v_res_2723_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__12(v_00_u03b1_2708_, v_e_2709_, v_maxFVars_2710_, v_k_2711_, v_cleanupAnnotations_boxed_2722_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_);
lean_dec(v___y_2720_);
lean_dec_ref(v___y_2719_);
lean_dec(v___y_2718_);
lean_dec_ref(v___y_2717_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
lean_dec(v___y_2714_);
lean_dec(v___y_2713_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0(lean_object* v_inst_2724_, lean_object* v_R_2725_, lean_object* v_a_2726_, lean_object* v_b_2727_){
_start:
{
lean_object* v___x_2728_; 
v___x_2728_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__0___redArg(v_a_2726_, v_b_2727_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(lean_object* v_cls_2729_, lean_object* v_msg_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v___x_2740_; 
v___x_2740_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg(v_cls_2729_, v_msg_2730_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
return v___x_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___boxed(lean_object* v_cls_2741_, lean_object* v_msg_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_){
_start:
{
lean_object* v_res_2752_; 
v_res_2752_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2(v_cls_2741_, v_msg_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_);
lean_dec(v___y_2750_);
lean_dec_ref(v___y_2749_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec(v___y_2743_);
return v_res_2752_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4(lean_object* v_00_u03b2_2753_, lean_object* v_m_2754_, lean_object* v_a_2755_, lean_object* v_b_2756_){
_start:
{
lean_object* v___x_2757_; 
v___x_2757_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4___redArg(v_m_2754_, v_a_2755_, v_b_2756_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(lean_object* v_00_u03b1_2758_, lean_object* v_msg_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___redArg(v_msg_2759_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6___boxed(lean_object* v_00_u03b1_2770_, lean_object* v_msg_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__6(v_00_u03b1_2770_, v_msg_2771_, v___y_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec_ref(v___y_2774_);
lean_dec(v___y_2773_);
lean_dec(v___y_2772_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(lean_object* v_00_u03b2_2782_, lean_object* v_m_2783_, lean_object* v_a_2784_){
_start:
{
lean_object* v___x_2785_; 
v___x_2785_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___redArg(v_m_2783_, v_a_2784_);
return v___x_2785_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8___boxed(lean_object* v_00_u03b2_2786_, lean_object* v_m_2787_, lean_object* v_a_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8(v_00_u03b2_2786_, v_m_2787_, v_a_2788_);
lean_dec_ref(v_a_2788_);
lean_dec_ref(v_m_2787_);
return v_res_2789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(lean_object* v_00_u03b1_2790_, lean_object* v_name_2791_, lean_object* v_type_2792_, lean_object* v_val_2793_, lean_object* v_k_2794_, uint8_t v_nondep_2795_, uint8_t v_kind_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_){
_start:
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___redArg(v_name_2791_, v_type_2792_, v_val_2793_, v_k_2794_, v_nondep_2795_, v_kind_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
return v___x_2806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15___boxed(lean_object* v_00_u03b1_2807_, lean_object* v_name_2808_, lean_object* v_type_2809_, lean_object* v_val_2810_, lean_object* v_k_2811_, lean_object* v_nondep_2812_, lean_object* v_kind_2813_, lean_object* v___y_2814_, lean_object* v___y_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
uint8_t v_nondep_boxed_2823_; uint8_t v_kind_boxed_2824_; lean_object* v_res_2825_; 
v_nondep_boxed_2823_ = lean_unbox(v_nondep_2812_);
v_kind_boxed_2824_ = lean_unbox(v_kind_2813_);
v_res_2825_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__11_spec__15(v_00_u03b1_2807_, v_name_2808_, v_type_2809_, v_val_2810_, v_k_2811_, v_nondep_boxed_2823_, v_kind_boxed_2824_, v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
lean_dec(v___y_2815_);
lean_dec(v___y_2814_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(lean_object* v_declName_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___redArg(v_declName_2826_, v___y_2834_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20___boxed(lean_object* v_declName_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__20(v_declName_2837_, v___y_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec_ref(v___y_2840_);
lean_dec(v___y_2839_);
lean_dec(v___y_2838_);
return v_res_2847_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b2_2848_, lean_object* v_a_2849_, lean_object* v_x_2850_){
_start:
{
uint8_t v___x_2851_; 
v___x_2851_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___redArg(v_a_2849_, v_x_2850_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b2_2852_, lean_object* v_a_2853_, lean_object* v_x_2854_){
_start:
{
uint8_t v_res_2855_; lean_object* v_r_2856_; 
v_res_2855_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__4(v_00_u03b2_2852_, v_a_2853_, v_x_2854_);
lean_dec(v_x_2854_);
lean_dec_ref(v_a_2853_);
v_r_2856_ = lean_box(v_res_2855_);
return v_r_2856_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5(lean_object* v_00_u03b2_2857_, lean_object* v_data_2858_){
_start:
{
lean_object* v___x_2859_; 
v___x_2859_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5___redArg(v_data_2858_);
return v___x_2859_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6(lean_object* v_00_u03b2_2860_, lean_object* v_a_2861_, lean_object* v_b_2862_, lean_object* v_x_2863_){
_start:
{
lean_object* v___x_2864_; 
v___x_2864_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__6___redArg(v_a_2861_, v_b_2862_, v_x_2863_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(lean_object* v_00_u03b2_2865_, lean_object* v_a_2866_, lean_object* v_x_2867_){
_start:
{
lean_object* v___x_2868_; 
v___x_2868_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___redArg(v_a_2866_, v_x_2867_);
return v___x_2868_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11___boxed(lean_object* v_00_u03b2_2869_, lean_object* v_a_2870_, lean_object* v_x_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__8_spec__11(v_00_u03b2_2869_, v_a_2870_, v_x_2871_);
lean_dec(v_x_2871_);
lean_dec_ref(v_a_2870_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12(lean_object* v_00_u03b2_2873_, lean_object* v_i_2874_, lean_object* v_source_2875_, lean_object* v_target_2876_){
_start:
{
lean_object* v___x_2877_; 
v___x_2877_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12___redArg(v_i_2874_, v_source_2875_, v_target_2876_);
return v___x_2877_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(lean_object* v_00_u03b1_2878_, lean_object* v_constName_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___redArg(v_constName_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
return v___x_2889_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21___boxed(lean_object* v_00_u03b1_2890_, lean_object* v_constName_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_){
_start:
{
lean_object* v_res_2901_; 
v_res_2901_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21(v_00_u03b1_2890_, v_constName_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_, v___y_2897_, v___y_2898_, v___y_2899_);
lean_dec(v___y_2899_);
lean_dec_ref(v___y_2898_);
lean_dec(v___y_2897_);
lean_dec_ref(v___y_2896_);
lean_dec(v___y_2895_);
lean_dec_ref(v___y_2894_);
lean_dec(v___y_2893_);
lean_dec(v___y_2892_);
return v_res_2901_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22(lean_object* v_00_u03b2_2902_, lean_object* v_x_2903_, lean_object* v_x_2904_){
_start:
{
lean_object* v___x_2905_; 
v___x_2905_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__4_spec__5_spec__12_spec__22___redArg(v_x_2903_, v_x_2904_);
return v___x_2905_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(lean_object* v_00_u03b1_2906_, lean_object* v_ref_2907_, lean_object* v_constName_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v___x_2918_; 
v___x_2918_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___redArg(v_ref_2907_, v_constName_2908_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
return v___x_2918_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27___boxed(lean_object* v_00_u03b1_2919_, lean_object* v_ref_2920_, lean_object* v_constName_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_, lean_object* v___y_2929_, lean_object* v___y_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27(v_00_u03b1_2919_, v_ref_2920_, v_constName_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_, v___y_2928_, v___y_2929_);
lean_dec(v___y_2929_);
lean_dec_ref(v___y_2928_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
lean_dec(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec(v_ref_2920_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(lean_object* v_00_u03b1_2932_, lean_object* v_ref_2933_, lean_object* v_msg_2934_, lean_object* v_declHint_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___redArg(v_ref_2933_, v_msg_2934_, v_declHint_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29___boxed(lean_object* v_00_u03b1_2946_, lean_object* v_ref_2947_, lean_object* v_msg_2948_, lean_object* v_declHint_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_){
_start:
{
lean_object* v_res_2959_; 
v_res_2959_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29(v_00_u03b1_2946_, v_ref_2947_, v_msg_2948_, v_declHint_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_);
lean_dec(v___y_2957_);
lean_dec_ref(v___y_2956_);
lean_dec(v___y_2955_);
lean_dec_ref(v___y_2954_);
lean_dec(v___y_2953_);
lean_dec_ref(v___y_2952_);
lean_dec(v___y_2951_);
lean_dec(v___y_2950_);
lean_dec(v_ref_2947_);
return v_res_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(lean_object* v_msg_2960_, lean_object* v_declHint_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v___x_2971_; 
v___x_2971_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___redArg(v_msg_2960_, v_declHint_2961_, v___y_2969_);
return v___x_2971_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31___boxed(lean_object* v_msg_2972_, lean_object* v_declHint_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__30_spec__31(v_msg_2972_, v_declHint_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
lean_dec(v___y_2975_);
lean_dec(v___y_2974_);
return v_res_2983_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(lean_object* v_00_u03b1_2984_, lean_object* v_ref_2985_, lean_object* v_msg_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_){
_start:
{
lean_object* v___x_2996_; 
v___x_2996_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___redArg(v_ref_2985_, v_msg_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31___boxed(lean_object* v_00_u03b1_2997_, lean_object* v_ref_2998_, lean_object* v_msg_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_){
_start:
{
lean_object* v_res_3009_; 
v_res_3009_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13_spec__18_spec__21_spec__27_spec__29_spec__31(v_00_u03b1_2997_, v_ref_2998_, v_msg_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_);
lean_dec(v___y_3007_);
lean_dec_ref(v___y_3006_);
lean_dec(v___y_3005_);
lean_dec_ref(v___y_3004_);
lean_dec(v___y_3003_);
lean_dec_ref(v___y_3002_);
lean_dec(v___y_3001_);
lean_dec(v___y_3000_);
lean_dec(v_ref_2998_);
return v_res_3009_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(lean_object* v_cls_3010_, lean_object* v_msg_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_){
_start:
{
lean_object* v_ref_3017_; lean_object* v___x_3018_; lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3063_; 
v_ref_3017_ = lean_ctor_get(v___y_3014_, 5);
v___x_3018_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_3011_, v___y_3012_, v___y_3013_, v___y_3014_, v___y_3015_);
v_a_3019_ = lean_ctor_get(v___x_3018_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3018_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3021_ = v___x_3018_;
v_isShared_3022_ = v_isSharedCheck_3063_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_3018_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3063_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3023_; lean_object* v_traceState_3024_; lean_object* v_env_3025_; lean_object* v_nextMacroScope_3026_; lean_object* v_ngen_3027_; lean_object* v_auxDeclNGen_3028_; lean_object* v_cache_3029_; lean_object* v_messages_3030_; lean_object* v_infoState_3031_; lean_object* v_snapshotTasks_3032_; lean_object* v___x_3034_; uint8_t v_isShared_3035_; uint8_t v_isSharedCheck_3062_; 
v___x_3023_ = lean_st_ref_take(v___y_3015_);
v_traceState_3024_ = lean_ctor_get(v___x_3023_, 4);
v_env_3025_ = lean_ctor_get(v___x_3023_, 0);
v_nextMacroScope_3026_ = lean_ctor_get(v___x_3023_, 1);
v_ngen_3027_ = lean_ctor_get(v___x_3023_, 2);
v_auxDeclNGen_3028_ = lean_ctor_get(v___x_3023_, 3);
v_cache_3029_ = lean_ctor_get(v___x_3023_, 5);
v_messages_3030_ = lean_ctor_get(v___x_3023_, 6);
v_infoState_3031_ = lean_ctor_get(v___x_3023_, 7);
v_snapshotTasks_3032_ = lean_ctor_get(v___x_3023_, 8);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3023_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3034_ = v___x_3023_;
v_isShared_3035_ = v_isSharedCheck_3062_;
goto v_resetjp_3033_;
}
else
{
lean_inc(v_snapshotTasks_3032_);
lean_inc(v_infoState_3031_);
lean_inc(v_messages_3030_);
lean_inc(v_cache_3029_);
lean_inc(v_traceState_3024_);
lean_inc(v_auxDeclNGen_3028_);
lean_inc(v_ngen_3027_);
lean_inc(v_nextMacroScope_3026_);
lean_inc(v_env_3025_);
lean_dec(v___x_3023_);
v___x_3034_ = lean_box(0);
v_isShared_3035_ = v_isSharedCheck_3062_;
goto v_resetjp_3033_;
}
v_resetjp_3033_:
{
uint64_t v_tid_3036_; lean_object* v_traces_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3061_; 
v_tid_3036_ = lean_ctor_get_uint64(v_traceState_3024_, sizeof(void*)*1);
v_traces_3037_ = lean_ctor_get(v_traceState_3024_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v_traceState_3024_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3039_ = v_traceState_3024_;
v_isShared_3040_ = v_isSharedCheck_3061_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_traces_3037_);
lean_dec(v_traceState_3024_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3061_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3041_; double v___x_3042_; uint8_t v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3051_; 
v___x_3041_ = lean_box(0);
v___x_3042_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__0);
v___x_3043_ = 0;
v___x_3044_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__1);
v___x_3045_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3045_, 0, v_cls_3010_);
lean_ctor_set(v___x_3045_, 1, v___x_3041_);
lean_ctor_set(v___x_3045_, 2, v___x_3044_);
lean_ctor_set_float(v___x_3045_, sizeof(void*)*3, v___x_3042_);
lean_ctor_set_float(v___x_3045_, sizeof(void*)*3 + 8, v___x_3042_);
lean_ctor_set_uint8(v___x_3045_, sizeof(void*)*3 + 16, v___x_3043_);
v___x_3046_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec_spec__2___redArg___closed__2);
v___x_3047_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3045_);
lean_ctor_set(v___x_3047_, 1, v_a_3019_);
lean_ctor_set(v___x_3047_, 2, v___x_3046_);
lean_inc(v_ref_3017_);
v___x_3048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3048_, 0, v_ref_3017_);
lean_ctor_set(v___x_3048_, 1, v___x_3047_);
v___x_3049_ = l_Lean_PersistentArray_push___redArg(v_traces_3037_, v___x_3048_);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 0, v___x_3049_);
v___x_3051_ = v___x_3039_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3049_);
lean_ctor_set_uint64(v_reuseFailAlloc_3060_, sizeof(void*)*1, v_tid_3036_);
v___x_3051_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
lean_object* v___x_3053_; 
if (v_isShared_3035_ == 0)
{
lean_ctor_set(v___x_3034_, 4, v___x_3051_);
v___x_3053_ = v___x_3034_;
goto v_reusejp_3052_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v_env_3025_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v_nextMacroScope_3026_);
lean_ctor_set(v_reuseFailAlloc_3059_, 2, v_ngen_3027_);
lean_ctor_set(v_reuseFailAlloc_3059_, 3, v_auxDeclNGen_3028_);
lean_ctor_set(v_reuseFailAlloc_3059_, 4, v___x_3051_);
lean_ctor_set(v_reuseFailAlloc_3059_, 5, v_cache_3029_);
lean_ctor_set(v_reuseFailAlloc_3059_, 6, v_messages_3030_);
lean_ctor_set(v_reuseFailAlloc_3059_, 7, v_infoState_3031_);
lean_ctor_set(v_reuseFailAlloc_3059_, 8, v_snapshotTasks_3032_);
v___x_3053_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3052_;
}
v_reusejp_3052_:
{
lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3057_; 
v___x_3054_ = lean_st_ref_set(v___y_3015_, v___x_3053_);
v___x_3055_ = lean_box(0);
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 0, v___x_3055_);
v___x_3057_ = v___x_3021_;
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg___boxed(lean_object* v_cls_3064_, lean_object* v_msg_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3064_, v_msg_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_);
lean_dec(v___y_3069_);
lean_dec_ref(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec_ref(v___y_3066_);
return v_res_3071_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; 
v___x_3072_ = lean_box(0);
v___x_3073_ = lean_unsigned_to_nat(16u);
v___x_3074_ = lean_mk_array(v___x_3073_, v___x_3072_);
return v___x_3074_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3075_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__0);
v___x_3076_ = lean_unsigned_to_nat(0u);
v___x_3077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3077_, 0, v___x_3076_);
lean_ctor_set(v___x_3077_, 1, v___x_3075_);
return v___x_3077_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2(void){
_start:
{
lean_object* v___x_3078_; 
v___x_3078_ = lean_mk_string_unchecked("type of functorial ", 19, 19);
return v___x_3078_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3(void){
_start:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
v___x_3079_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__2);
v___x_3080_ = l_Lean_stringToMessageData(v___x_3079_);
return v___x_3080_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4(void){
_start:
{
lean_object* v___x_3081_; 
v___x_3081_ = lean_mk_string_unchecked(" is", 3, 3);
return v___x_3081_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5(void){
_start:
{
lean_object* v___x_3082_; lean_object* v___x_3083_; 
v___x_3082_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__4);
v___x_3083_ = l_Lean_stringToMessageData(v___x_3082_);
return v___x_3083_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6(void){
_start:
{
lean_object* v___x_3084_; 
v___x_3084_ = lean_mk_string_unchecked("replaceRecApps:", 15, 15);
return v___x_3084_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7(void){
_start:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3085_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__6);
v___x_3086_ = l_Lean_stringToMessageData(v___x_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(lean_object* v_recFnName_3087_, lean_object* v_fixedPrefixSize_3088_, lean_object* v_F_3089_, lean_object* v_e_3090_, lean_object* v_a_3091_, lean_object* v_a_3092_, lean_object* v_a_3093_, lean_object* v_a_3094_, lean_object* v_a_3095_, lean_object* v_a_3096_){
_start:
{
lean_object* v___y_3099_; lean_object* v___y_3100_; lean_object* v___y_3101_; lean_object* v___y_3102_; lean_object* v___y_3103_; lean_object* v___y_3104_; lean_object* v_options_3123_; uint8_t v_hasTrace_3124_; 
v_options_3123_ = lean_ctor_get(v_a_3095_, 2);
v_hasTrace_3124_ = lean_ctor_get_uint8(v_options_3123_, sizeof(void*)*1);
if (v_hasTrace_3124_ == 0)
{
v___y_3099_ = v_a_3091_;
v___y_3100_ = v_a_3092_;
v___y_3101_ = v_a_3093_;
v___y_3102_ = v_a_3094_;
v___y_3103_ = v_a_3095_;
v___y_3104_ = v_a_3096_;
goto v___jp_3098_;
}
else
{
lean_object* v_inheritedTraceOptions_3125_; lean_object* v_cls_3126_; lean_object* v___y_3128_; lean_object* v___y_3129_; lean_object* v___y_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v_options_3133_; lean_object* v_inheritedTraceOptions_3134_; lean_object* v___y_3135_; lean_object* v___x_3156_; uint8_t v___x_3157_; 
v_inheritedTraceOptions_3125_ = lean_ctor_get(v_a_3095_, 13);
v_cls_3126_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__1);
v___x_3156_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3157_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3125_, v_options_3123_, v___x_3156_);
if (v___x_3157_ == 0)
{
v___y_3128_ = v_a_3091_;
v___y_3129_ = v_a_3092_;
v___y_3130_ = v_a_3093_;
v___y_3131_ = v_a_3094_;
v___y_3132_ = v_a_3095_;
v_options_3133_ = v_options_3123_;
v_inheritedTraceOptions_3134_ = v_inheritedTraceOptions_3125_;
v___y_3135_ = v_a_3096_;
goto v___jp_3127_;
}
else
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; 
v___x_3158_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__7);
lean_inc_ref(v_e_3090_);
v___x_3159_ = l_Lean_indentExpr(v_e_3090_);
v___x_3160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3158_);
lean_ctor_set(v___x_3160_, 1, v___x_3159_);
v___x_3161_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3126_, v___x_3160_, v_a_3093_, v_a_3094_, v_a_3095_, v_a_3096_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_dec_ref(v___x_3161_);
v___y_3128_ = v_a_3091_;
v___y_3129_ = v_a_3092_;
v___y_3130_ = v_a_3093_;
v___y_3131_ = v_a_3094_;
v___y_3132_ = v_a_3095_;
v_options_3133_ = v_options_3123_;
v_inheritedTraceOptions_3134_ = v_inheritedTraceOptions_3125_;
v___y_3135_ = v_a_3096_;
goto v___jp_3127_;
}
else
{
lean_object* v_a_3162_; lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3169_; 
lean_dec_ref(v_e_3090_);
lean_dec_ref(v_F_3089_);
lean_dec(v_fixedPrefixSize_3088_);
lean_dec(v_recFnName_3087_);
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3161_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3164_ = v___x_3161_;
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
else
{
lean_inc(v_a_3162_);
lean_dec(v___x_3161_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3169_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_a_3162_);
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
v___jp_3127_:
{
lean_object* v___x_3136_; uint8_t v___x_3137_; 
v___x_3136_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__4);
v___x_3137_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3134_, v_options_3133_, v___x_3136_);
if (v___x_3137_ == 0)
{
v___y_3099_ = v___y_3128_;
v___y_3100_ = v___y_3129_;
v___y_3101_ = v___y_3130_;
v___y_3102_ = v___y_3131_;
v___y_3103_ = v___y_3132_;
v___y_3104_ = v___y_3135_;
goto v___jp_3098_;
}
else
{
lean_object* v___x_3138_; 
lean_inc(v___y_3135_);
lean_inc_ref(v___y_3132_);
lean_inc(v___y_3131_);
lean_inc_ref(v___y_3130_);
lean_inc_ref(v_F_3089_);
v___x_3138_ = lean_infer_type(v_F_3089_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3135_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v_a_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
lean_inc(v_a_3139_);
lean_dec_ref(v___x_3138_);
v___x_3140_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__3);
lean_inc_ref(v_F_3089_);
v___x_3141_ = l_Lean_MessageData_ofExpr(v_F_3089_);
v___x_3142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3142_, 0, v___x_3140_);
lean_ctor_set(v___x_3142_, 1, v___x_3141_);
v___x_3143_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__5);
v___x_3144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3144_, 0, v___x_3142_);
lean_ctor_set(v___x_3144_, 1, v___x_3143_);
v___x_3145_ = l_Lean_indentExpr(v_a_3139_);
v___x_3146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3144_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3126_, v___x_3146_, v___y_3130_, v___y_3131_, v___y_3132_, v___y_3135_);
if (lean_obj_tag(v___x_3147_) == 0)
{
lean_dec_ref(v___x_3147_);
v___y_3099_ = v___y_3128_;
v___y_3100_ = v___y_3129_;
v___y_3101_ = v___y_3130_;
v___y_3102_ = v___y_3131_;
v___y_3103_ = v___y_3132_;
v___y_3104_ = v___y_3135_;
goto v___jp_3098_;
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
lean_dec_ref(v_e_3090_);
lean_dec_ref(v_F_3089_);
lean_dec(v_fixedPrefixSize_3088_);
lean_dec(v_recFnName_3087_);
v_a_3148_ = lean_ctor_get(v___x_3147_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3147_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3147_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3147_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
else
{
lean_dec_ref(v_e_3090_);
lean_dec_ref(v_F_3089_);
lean_dec(v_fixedPrefixSize_3088_);
lean_dec(v_recFnName_3087_);
return v___x_3138_;
}
}
}
}
v___jp_3098_:
{
lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; 
v___x_3105_ = lean_st_ref_get(v___y_3104_);
lean_dec(v___x_3105_);
v___x_3106_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___closed__1);
v___x_3107_ = lean_st_mk_ref(v___x_3106_);
v___x_3108_ = lean_st_ref_get(v___y_3104_);
lean_dec(v___x_3108_);
v___x_3109_ = lean_st_mk_ref(v___x_3106_);
v___x_3110_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop(v_recFnName_3087_, v_fixedPrefixSize_3088_, v_F_3089_, v_e_3090_, v___x_3109_, v___x_3107_, v___y_3099_, v___y_3100_, v___y_3101_, v___y_3102_, v___y_3103_, v___y_3104_);
if (lean_obj_tag(v___x_3110_) == 0)
{
lean_object* v_a_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3122_; 
v_a_3111_ = lean_ctor_get(v___x_3110_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_3110_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3113_ = v___x_3110_;
v_isShared_3114_ = v_isSharedCheck_3122_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_a_3111_);
lean_dec(v___x_3110_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3122_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3120_; 
v___x_3115_ = lean_st_ref_get(v___y_3104_);
lean_dec(v___x_3115_);
v___x_3116_ = lean_st_ref_get(v___x_3109_);
lean_dec(v___x_3109_);
lean_dec(v___x_3116_);
v___x_3117_ = lean_st_ref_get(v___y_3104_);
lean_dec(v___x_3117_);
v___x_3118_ = lean_st_ref_get(v___x_3107_);
lean_dec(v___x_3107_);
lean_dec(v___x_3118_);
if (v_isShared_3114_ == 0)
{
v___x_3120_ = v___x_3113_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3111_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
else
{
lean_dec(v___x_3109_);
lean_dec(v___x_3107_);
return v___x_3110_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed(lean_object* v_recFnName_3170_, lean_object* v_fixedPrefixSize_3171_, lean_object* v_F_3172_, lean_object* v_e_3173_, lean_object* v_a_3174_, lean_object* v_a_3175_, lean_object* v_a_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v_res_3181_; 
v_res_3181_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps(v_recFnName_3170_, v_fixedPrefixSize_3171_, v_F_3172_, v_e_3173_, v_a_3174_, v_a_3175_, v_a_3176_, v_a_3177_, v_a_3178_, v_a_3179_);
lean_dec(v_a_3179_);
lean_dec_ref(v_a_3178_);
lean_dec(v_a_3177_);
lean_dec_ref(v_a_3176_);
lean_dec(v_a_3175_);
lean_dec_ref(v_a_3174_);
return v_res_3181_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(lean_object* v_cls_3182_, lean_object* v_msg_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_){
_start:
{
lean_object* v___x_3191_; 
v___x_3191_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___redArg(v_cls_3182_, v_msg_3183_, v___y_3186_, v___y_3187_, v___y_3188_, v___y_3189_);
return v___x_3191_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0___boxed(lean_object* v_cls_3192_, lean_object* v_msg_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_){
_start:
{
lean_object* v_res_3201_; 
v_res_3201_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_spec__0(v_cls_3192_, v_msg_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_);
lean_dec(v___y_3199_);
lean_dec_ref(v___y_3198_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
return v_res_3201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0(lean_object* v_k_3202_, lean_object* v___y_3203_, lean_object* v___y_3204_, lean_object* v_b_3205_, lean_object* v_c_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_){
_start:
{
lean_object* v___x_3212_; 
lean_inc(v___y_3210_);
lean_inc_ref(v___y_3209_);
lean_inc(v___y_3208_);
lean_inc_ref(v___y_3207_);
lean_inc(v___y_3204_);
lean_inc_ref(v___y_3203_);
v___x_3212_ = lean_apply_9(v_k_3202_, v_b_3205_, v_c_3206_, v___y_3203_, v___y_3204_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_, lean_box(0));
return v___x_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0___boxed(lean_object* v_k_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v_b_3216_, lean_object* v_c_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_, lean_object* v___y_3222_){
_start:
{
lean_object* v_res_3223_; 
v_res_3223_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0(v_k_3213_, v___y_3214_, v___y_3215_, v_b_3216_, v_c_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_);
lean_dec(v___y_3221_);
lean_dec_ref(v___y_3220_);
lean_dec(v___y_3219_);
lean_dec_ref(v___y_3218_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
return v_res_3223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(lean_object* v_e_3224_, lean_object* v_k_3225_, uint8_t v_cleanupAnnotations_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_){
_start:
{
lean_object* v___f_3234_; uint8_t v___x_3235_; uint8_t v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; 
lean_inc(v___y_3228_);
lean_inc_ref(v___y_3227_);
v___f_3234_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3234_, 0, v_k_3225_);
lean_closure_set(v___f_3234_, 1, v___y_3227_);
lean_closure_set(v___f_3234_, 2, v___y_3228_);
v___x_3235_ = 1;
v___x_3236_ = 0;
v___x_3237_ = lean_box(0);
v___x_3238_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3224_, v___x_3235_, v___x_3236_, v___x_3235_, v___x_3236_, v___x_3237_, v___f_3234_, v_cleanupAnnotations_3226_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_);
if (lean_obj_tag(v___x_3238_) == 0)
{
return v___x_3238_;
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
v_a_3239_ = lean_ctor_get(v___x_3238_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3238_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3238_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3238_);
v___x_3241_ = lean_box(0);
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
v_resetjp_3240_:
{
lean_object* v___x_3244_; 
if (v_isShared_3242_ == 0)
{
v___x_3244_ = v___x_3241_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_a_3239_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___boxed(lean_object* v_e_3247_, lean_object* v_k_3248_, lean_object* v_cleanupAnnotations_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_, lean_object* v___y_3255_, lean_object* v___y_3256_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3257_; lean_object* v_res_3258_; 
v_cleanupAnnotations_boxed_3257_ = lean_unbox(v_cleanupAnnotations_3249_);
v_res_3258_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_e_3247_, v_k_3248_, v_cleanupAnnotations_boxed_3257_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_, v___y_3255_);
lean_dec(v___y_3255_);
lean_dec_ref(v___y_3254_);
lean_dec(v___y_3253_);
lean_dec_ref(v___y_3252_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
return v_res_3258_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(lean_object* v_00_u03b1_3259_, lean_object* v_e_3260_, lean_object* v_k_3261_, uint8_t v_cleanupAnnotations_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v___x_3270_; 
v___x_3270_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v_e_3260_, v_k_3261_, v_cleanupAnnotations_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
return v___x_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___boxed(lean_object* v_00_u03b1_3271_, lean_object* v_e_3272_, lean_object* v_k_3273_, lean_object* v_cleanupAnnotations_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_, lean_object* v___y_3277_, lean_object* v___y_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3282_; lean_object* v_res_3283_; 
v_cleanupAnnotations_boxed_3282_ = lean_unbox(v_cleanupAnnotations_3274_);
v_res_3283_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0(v_00_u03b1_3271_, v_e_3272_, v_k_3273_, v_cleanupAnnotations_boxed_3282_, v___y_3275_, v___y_3276_, v___y_3277_, v___y_3278_, v___y_3279_, v___y_3280_);
lean_dec(v___y_3280_);
lean_dec_ref(v___y_3279_);
lean_dec(v___y_3278_);
lean_dec_ref(v___y_3277_);
lean_dec(v___y_3276_);
lean_dec_ref(v___y_3275_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(lean_object* v_e_3284_, lean_object* v_maxFVars_3285_, lean_object* v_k_3286_, uint8_t v_cleanupAnnotations_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_){
_start:
{
lean_object* v___f_3295_; uint8_t v___x_3296_; uint8_t v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
lean_inc(v___y_3289_);
lean_inc_ref(v___y_3288_);
v___f_3295_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3295_, 0, v_k_3286_);
lean_closure_set(v___f_3295_, 1, v___y_3288_);
lean_closure_set(v___f_3295_, 2, v___y_3289_);
v___x_3296_ = 1;
v___x_3297_ = 0;
v___x_3298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3298_, 0, v_maxFVars_3285_);
v___x_3299_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_3284_, v___x_3296_, v___x_3297_, v___x_3296_, v___x_3297_, v___x_3298_, v___f_3295_, v_cleanupAnnotations_3287_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec_ref(v___x_3298_);
if (lean_obj_tag(v___x_3299_) == 0)
{
return v___x_3299_;
}
else
{
lean_object* v_a_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3307_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3307_ == 0)
{
v___x_3302_ = v___x_3299_;
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_a_3300_);
lean_dec(v___x_3299_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3307_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3305_; 
if (v_isShared_3303_ == 0)
{
v___x_3305_ = v___x_3302_;
goto v_reusejp_3304_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_a_3300_);
v___x_3305_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3304_;
}
v_reusejp_3304_:
{
return v___x_3305_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg___boxed(lean_object* v_e_3308_, lean_object* v_maxFVars_3309_, lean_object* v_k_3310_, lean_object* v_cleanupAnnotations_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3319_; lean_object* v_res_3320_; 
v_cleanupAnnotations_boxed_3319_ = lean_unbox(v_cleanupAnnotations_3311_);
v_res_3320_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3308_, v_maxFVars_3309_, v_k_3310_, v_cleanupAnnotations_boxed_3319_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_);
lean_dec(v___y_3317_);
lean_dec_ref(v___y_3316_);
lean_dec(v___y_3315_);
lean_dec_ref(v___y_3314_);
lean_dec(v___y_3313_);
lean_dec_ref(v___y_3312_);
return v_res_3320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(lean_object* v_00_u03b1_3321_, lean_object* v_e_3322_, lean_object* v_maxFVars_3323_, lean_object* v_k_3324_, uint8_t v_cleanupAnnotations_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_){
_start:
{
lean_object* v___x_3333_; 
v___x_3333_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_e_3322_, v_maxFVars_3323_, v_k_3324_, v_cleanupAnnotations_3325_, v___y_3326_, v___y_3327_, v___y_3328_, v___y_3329_, v___y_3330_, v___y_3331_);
return v___x_3333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___boxed(lean_object* v_00_u03b1_3334_, lean_object* v_e_3335_, lean_object* v_maxFVars_3336_, lean_object* v_k_3337_, lean_object* v_cleanupAnnotations_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_3346_; lean_object* v_res_3347_; 
v_cleanupAnnotations_boxed_3346_ = lean_unbox(v_cleanupAnnotations_3338_);
v_res_3347_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2(v_00_u03b1_3334_, v_e_3335_, v_maxFVars_3336_, v_k_3337_, v_cleanupAnnotations_boxed_3346_, v___y_3339_, v___y_3340_, v___y_3341_, v___y_3342_, v___y_3343_, v___y_3344_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
lean_dec_ref(v___y_3341_);
lean_dec(v___y_3340_);
lean_dec_ref(v___y_3339_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(lean_object* v_a_3348_, lean_object* v___x_3349_, lean_object* v___x_3350_, lean_object* v_x_3351_, uint8_t v___x_3352_, lean_object* v_xs_3353_, lean_object* v_type_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_){
_start:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v___x_3362_ = l_Lean_LocalDecl_type(v_a_3348_);
v___x_3363_ = lean_array_get_borrowed(v___x_3349_, v_xs_3353_, v___x_3350_);
v___x_3364_ = l_Lean_Expr_replaceFVar(v___x_3362_, v_x_3351_, v___x_3363_);
lean_dec_ref(v___x_3362_);
v___x_3365_ = l_Lean_mkArrow(v___x_3364_, v_type_3354_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; uint8_t v___x_3367_; uint8_t v___x_3368_; lean_object* v___x_3369_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc_n(v_a_3366_, 2);
lean_dec_ref(v___x_3365_);
v___x_3367_ = 0;
v___x_3368_ = 1;
v___x_3369_ = l_Lean_Meta_mkLambdaFVars(v_xs_3353_, v_a_3366_, v___x_3367_, v___x_3352_, v___x_3367_, v___x_3352_, v___x_3368_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3369_) == 0)
{
lean_object* v_a_3370_; lean_object* v___x_3371_; 
v_a_3370_ = lean_ctor_get(v___x_3369_, 0);
lean_inc(v_a_3370_);
lean_dec_ref(v___x_3369_);
v___x_3371_ = l_Lean_Meta_getLevel(v_a_3366_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
if (lean_obj_tag(v___x_3371_) == 0)
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3380_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3380_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3380_ == 0)
{
v___x_3374_ = v___x_3371_;
v_isShared_3375_ = v_isSharedCheck_3380_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3371_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3380_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3376_; lean_object* v___x_3378_; 
v___x_3376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3376_, 0, v_a_3370_);
lean_ctor_set(v___x_3376_, 1, v_a_3372_);
if (v_isShared_3375_ == 0)
{
lean_ctor_set(v___x_3374_, 0, v___x_3376_);
v___x_3378_ = v___x_3374_;
goto v_reusejp_3377_;
}
else
{
lean_object* v_reuseFailAlloc_3379_; 
v_reuseFailAlloc_3379_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3379_, 0, v___x_3376_);
v___x_3378_ = v_reuseFailAlloc_3379_;
goto v_reusejp_3377_;
}
v_reusejp_3377_:
{
return v___x_3378_;
}
}
}
else
{
lean_object* v_a_3381_; lean_object* v___x_3383_; uint8_t v_isShared_3384_; uint8_t v_isSharedCheck_3388_; 
lean_dec(v_a_3370_);
v_a_3381_ = lean_ctor_get(v___x_3371_, 0);
v_isSharedCheck_3388_ = !lean_is_exclusive(v___x_3371_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3383_ = v___x_3371_;
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
else
{
lean_inc(v_a_3381_);
lean_dec(v___x_3371_);
v___x_3383_ = lean_box(0);
v_isShared_3384_ = v_isSharedCheck_3388_;
goto v_resetjp_3382_;
}
v_resetjp_3382_:
{
lean_object* v___x_3386_; 
if (v_isShared_3384_ == 0)
{
v___x_3386_ = v___x_3383_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3387_; 
v_reuseFailAlloc_3387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3387_, 0, v_a_3381_);
v___x_3386_ = v_reuseFailAlloc_3387_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
return v___x_3386_;
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec(v_a_3366_);
v_a_3389_ = lean_ctor_get(v___x_3369_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3369_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3369_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3369_);
v___x_3391_ = lean_box(0);
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
v_resetjp_3390_:
{
lean_object* v___x_3394_; 
if (v_isShared_3392_ == 0)
{
v___x_3394_ = v___x_3391_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3395_; 
v_reuseFailAlloc_3395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3395_, 0, v_a_3389_);
v___x_3394_ = v_reuseFailAlloc_3395_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
return v___x_3394_;
}
}
}
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
v_a_3397_ = lean_ctor_get(v___x_3365_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3365_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3365_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3365_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed(lean_object* v_a_3405_, lean_object* v___x_3406_, lean_object* v___x_3407_, lean_object* v_x_3408_, lean_object* v___x_3409_, lean_object* v_xs_3410_, lean_object* v_type_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
uint8_t v___x_6703__boxed_3419_; lean_object* v_res_3420_; 
v___x_6703__boxed_3419_ = lean_unbox(v___x_3409_);
v_res_3420_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0(v_a_3405_, v___x_3406_, v___x_3407_, v_x_3408_, v___x_6703__boxed_3419_, v_xs_3410_, v_type_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
lean_dec(v___y_3415_);
lean_dec_ref(v___y_3414_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
lean_dec_ref(v_xs_3410_);
lean_dec(v___x_3407_);
lean_dec_ref(v___x_3406_);
lean_dec_ref(v_a_3405_);
return v_res_3420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___lam__0(lean_object* v_k_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v_b_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_){
_start:
{
lean_object* v___x_3430_; 
lean_inc(v___y_3428_);
lean_inc_ref(v___y_3427_);
lean_inc(v___y_3426_);
lean_inc_ref(v___y_3425_);
lean_inc(v___y_3423_);
lean_inc_ref(v___y_3422_);
v___x_3430_ = lean_apply_8(v_k_3421_, v_b_3424_, v___y_3422_, v___y_3423_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, lean_box(0));
return v___x_3430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v_k_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v_b_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_){
_start:
{
lean_object* v_res_3440_; 
v_res_3440_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___lam__0(v_k_3431_, v___y_3432_, v___y_3433_, v_b_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
lean_dec(v___y_3438_);
lean_dec_ref(v___y_3437_);
lean_dec(v___y_3436_);
lean_dec_ref(v___y_3435_);
lean_dec(v___y_3433_);
lean_dec_ref(v___y_3432_);
return v_res_3440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg(lean_object* v_name_3441_, uint8_t v_bi_3442_, lean_object* v_type_3443_, lean_object* v_k_3444_, uint8_t v_kind_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_, lean_object* v___y_3450_, lean_object* v___y_3451_){
_start:
{
lean_object* v___f_3453_; lean_object* v___x_3454_; 
lean_inc(v___y_3447_);
lean_inc_ref(v___y_3446_);
v___f_3453_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3453_, 0, v_k_3444_);
lean_closure_set(v___f_3453_, 1, v___y_3446_);
lean_closure_set(v___f_3453_, 2, v___y_3447_);
v___x_3454_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3441_, v_bi_3442_, v_type_3443_, v___f_3453_, v_kind_3445_, v___y_3448_, v___y_3449_, v___y_3450_, v___y_3451_);
if (lean_obj_tag(v___x_3454_) == 0)
{
return v___x_3454_;
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
v_a_3455_ = lean_ctor_get(v___x_3454_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3454_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3454_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3454_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3455_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg___boxed(lean_object* v_name_3463_, lean_object* v_bi_3464_, lean_object* v_type_3465_, lean_object* v_k_3466_, lean_object* v_kind_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_){
_start:
{
uint8_t v_bi_boxed_3475_; uint8_t v_kind_boxed_3476_; lean_object* v_res_3477_; 
v_bi_boxed_3475_ = lean_unbox(v_bi_3464_);
v_kind_boxed_3476_ = lean_unbox(v_kind_3467_);
v_res_3477_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg(v_name_3463_, v_bi_boxed_3475_, v_type_3465_, v_k_3466_, v_kind_boxed_3476_, v___y_3468_, v___y_3469_, v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
lean_dec(v___y_3469_);
lean_dec_ref(v___y_3468_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(lean_object* v_name_3478_, lean_object* v_type_3479_, lean_object* v_k_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_){
_start:
{
uint8_t v___x_3488_; uint8_t v___x_3489_; lean_object* v___x_3490_; 
v___x_3488_ = 0;
v___x_3489_ = 0;
v___x_3490_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg(v_name_3478_, v___x_3488_, v_type_3479_, v_k_3480_, v___x_3489_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg___boxed(lean_object* v_name_3491_, lean_object* v_type_3492_, lean_object* v_k_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_){
_start:
{
lean_object* v_res_3501_; 
v_res_3501_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_name_3491_, v_type_3492_, v_k_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
lean_dec(v___y_3499_);
lean_dec_ref(v___y_3498_);
lean_dec(v___y_3497_);
lean_dec_ref(v___y_3496_);
lean_dec(v___y_3495_);
lean_dec_ref(v___y_3494_);
return v_res_3501_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1(void){
_start:
{
lean_object* v___x_3502_; 
v___x_3502_ = lean_mk_string_unchecked("inl", 3, 3);
return v___x_3502_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0(void){
_start:
{
lean_object* v___x_3503_; 
v___x_3503_ = lean_mk_string_unchecked("PSum", 4, 4);
return v___x_3503_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2(void){
_start:
{
lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; 
v___x_3504_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__1);
v___x_3505_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0);
v___x_3506_ = l_Lean_Name_mkStr2(v___x_3505_, v___x_3504_);
return v___x_3506_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3(void){
_start:
{
lean_object* v___x_3507_; 
v___x_3507_ = lean_mk_string_unchecked("inr", 3, 3);
return v___x_3507_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4(void){
_start:
{
lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3508_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__3);
v___x_3509_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0);
v___x_3510_ = l_Lean_Name_mkStr2(v___x_3509_, v___x_3508_);
return v___x_3510_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5(void){
_start:
{
lean_object* v___x_3511_; 
v___x_3511_ = lean_mk_string_unchecked("casesOn", 7, 7);
return v___x_3511_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6(void){
_start:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; 
v___x_3512_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5);
v___x_3513_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__0);
v___x_3514_ = l_Lean_Name_mkStr2(v___x_3513_, v___x_3512_);
return v___x_3514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(lean_object* v_x_3515_, lean_object* v_F_3516_, lean_object* v_val_3517_, lean_object* v_k_3518_, lean_object* v_a_3519_, lean_object* v_a_3520_, lean_object* v_a_3521_, lean_object* v_a_3522_, lean_object* v_a_3523_, lean_object* v_a_3524_){
_start:
{
uint8_t v___y_3527_; uint8_t v___x_3642_; 
v___x_3642_ = l_Lean_Expr_isFVar(v_x_3515_);
if (v___x_3642_ == 0)
{
v___y_3527_ = v___x_3642_;
goto v___jp_3526_;
}
else
{
lean_object* v___x_3643_; lean_object* v___x_3644_; uint8_t v___x_3645_; 
v___x_3643_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6);
v___x_3644_ = lean_unsigned_to_nat(6u);
v___x_3645_ = l_Lean_Expr_isAppOfArity(v_val_3517_, v___x_3643_, v___x_3644_);
v___y_3527_ = v___x_3645_;
goto v___jp_3526_;
}
v___jp_3526_:
{
if (v___y_3527_ == 0)
{
lean_object* v___x_3528_; 
lean_inc(v_a_3524_);
lean_inc_ref(v_a_3523_);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v_a_3519_);
v___x_3528_ = lean_apply_10(v_k_3518_, v_x_3515_, v_F_3516_, v_val_3517_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_, lean_box(0));
return v___x_3528_;
}
else
{
lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; uint8_t v___x_3535_; 
v___x_3529_ = lean_unsigned_to_nat(3u);
v___x_3530_ = l_Lean_Expr_getAppNumArgs(v_val_3517_);
v___x_3531_ = lean_nat_sub(v___x_3530_, v___x_3529_);
v___x_3532_ = lean_unsigned_to_nat(1u);
v___x_3533_ = lean_nat_sub(v___x_3531_, v___x_3532_);
lean_dec(v___x_3531_);
v___x_3534_ = l_Lean_Expr_getRevArg_x21(v_val_3517_, v___x_3533_);
v___x_3535_ = lean_expr_eqv(v___x_3534_, v_x_3515_);
lean_dec_ref(v___x_3534_);
if (v___x_3535_ == 0)
{
lean_object* v___x_3536_; 
lean_dec(v___x_3530_);
lean_inc(v_a_3524_);
lean_inc_ref(v_a_3523_);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v_a_3519_);
v___x_3536_ = lean_apply_10(v_k_3518_, v_x_3515_, v_F_3516_, v_val_3517_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_, lean_box(0));
return v___x_3536_;
}
else
{
lean_object* v___x_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; uint8_t v___x_3541_; 
v___x_3537_ = lean_unsigned_to_nat(4u);
v___x_3538_ = lean_nat_sub(v___x_3530_, v___x_3537_);
v___x_3539_ = lean_nat_sub(v___x_3538_, v___x_3532_);
lean_dec(v___x_3538_);
v___x_3540_ = l_Lean_Expr_getRevArg_x21(v_val_3517_, v___x_3539_);
v___x_3541_ = l_Lean_Expr_isLambda(v___x_3540_);
lean_dec_ref(v___x_3540_);
if (v___x_3541_ == 0)
{
lean_object* v___x_3542_; 
lean_dec(v___x_3530_);
lean_inc(v_a_3524_);
lean_inc_ref(v_a_3523_);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v_a_3519_);
v___x_3542_ = lean_apply_10(v_k_3518_, v_x_3515_, v_F_3516_, v_val_3517_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_, lean_box(0));
return v___x_3542_;
}
else
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; uint8_t v___x_3547_; 
v___x_3543_ = lean_unsigned_to_nat(5u);
v___x_3544_ = lean_nat_sub(v___x_3530_, v___x_3543_);
v___x_3545_ = lean_nat_sub(v___x_3544_, v___x_3532_);
lean_dec(v___x_3544_);
v___x_3546_ = l_Lean_Expr_getRevArg_x21(v_val_3517_, v___x_3545_);
v___x_3547_ = l_Lean_Expr_isLambda(v___x_3546_);
lean_dec_ref(v___x_3546_);
if (v___x_3547_ == 0)
{
lean_object* v___x_3548_; 
lean_dec(v___x_3530_);
lean_inc(v_a_3524_);
lean_inc_ref(v_a_3523_);
lean_inc(v_a_3522_);
lean_inc_ref(v_a_3521_);
lean_inc(v_a_3520_);
lean_inc_ref(v_a_3519_);
v___x_3548_ = lean_apply_10(v_k_3518_, v_x_3515_, v_F_3516_, v_val_3517_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_, lean_box(0));
return v___x_3548_;
}
else
{
lean_object* v___x_3549_; lean_object* v___x_3550_; 
v___x_3549_ = l_Lean_Expr_fvarId_x21(v_F_3516_);
v___x_3550_ = l_Lean_FVarId_getDecl___redArg(v___x_3549_, v_a_3521_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; lean_object* v___x_3552_; lean_object* v_dummy_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v_args_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___f_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; uint8_t v___x_3562_; lean_object* v___x_3563_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc_n(v_a_3551_, 2);
lean_dec_ref(v___x_3550_);
v___x_3552_ = l_Lean_instInhabitedExpr;
v_dummy_3553_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_3530_);
v___x_3554_ = lean_mk_array(v___x_3530_, v_dummy_3553_);
v___x_3555_ = lean_nat_sub(v___x_3530_, v___x_3532_);
lean_dec(v___x_3530_);
v_args_3556_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_3517_, v___x_3554_, v___x_3555_);
v___x_3557_ = lean_unsigned_to_nat(0u);
v___x_3558_ = lean_box(v___x_3541_);
lean_inc_ref(v_x_3515_);
v___f_3559_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_3559_, 0, v_a_3551_);
lean_closure_set(v___f_3559_, 1, v___x_3552_);
lean_closure_set(v___f_3559_, 2, v___x_3557_);
lean_closure_set(v___f_3559_, 3, v_x_3515_);
lean_closure_set(v___f_3559_, 4, v___x_3558_);
v___x_3560_ = lean_unsigned_to_nat(2u);
v___x_3561_ = lean_array_get(v___x_3552_, v_args_3556_, v___x_3560_);
v___x_3562_ = 0;
v___x_3563_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_3561_, v___f_3559_, v___x_3562_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3563_) == 0)
{
lean_object* v_a_3564_; lean_object* v_fst_3565_; lean_object* v_snd_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3625_; 
v_a_3564_ = lean_ctor_get(v___x_3563_, 0);
lean_inc(v_a_3564_);
lean_dec_ref(v___x_3563_);
v_fst_3565_ = lean_ctor_get(v_a_3564_, 0);
v_snd_3566_ = lean_ctor_get(v_a_3564_, 1);
v_isSharedCheck_3625_ = !lean_is_exclusive(v_a_3564_);
if (v_isSharedCheck_3625_ == 0)
{
v___x_3568_ = v_a_3564_;
v_isShared_3569_ = v_isSharedCheck_3625_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_snd_3566_);
lean_inc(v_fst_3565_);
lean_dec(v_a_3564_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3625_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v_00_u03b1_3570_; lean_object* v_00_u03b2_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; 
v_00_u03b1_3570_ = lean_array_get(v___x_3552_, v_args_3556_, v___x_3557_);
v_00_u03b2_3571_ = lean_array_get(v___x_3552_, v_args_3556_, v___x_3532_);
v___x_3572_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__2);
v___x_3573_ = lean_array_get(v___x_3552_, v_args_3556_, v___x_3537_);
lean_inc_ref(v_x_3515_);
lean_inc(v_a_3551_);
lean_inc_ref(v_k_3518_);
lean_inc(v_00_u03b2_3571_);
lean_inc(v_00_u03b1_3570_);
v___x_3574_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3552_, v___x_3557_, v_00_u03b1_3570_, v_00_u03b2_3571_, v___x_3529_, v_k_3518_, v___x_3560_, v___x_3562_, v___x_3541_, v_a_3551_, v_x_3515_, v___x_3532_, v___x_3572_, v___x_3573_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v_a_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; 
v_a_3575_ = lean_ctor_get(v___x_3574_, 0);
lean_inc(v_a_3575_);
lean_dec_ref(v___x_3574_);
v___x_3576_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__4);
v___x_3577_ = lean_array_get(v___x_3552_, v_args_3556_, v___x_3543_);
lean_dec_ref(v_args_3556_);
lean_inc_ref(v_x_3515_);
lean_inc(v_00_u03b2_3571_);
lean_inc(v_00_u03b1_3570_);
v___x_3578_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3552_, v___x_3557_, v_00_u03b1_3570_, v_00_u03b2_3571_, v___x_3529_, v_k_3518_, v___x_3560_, v___x_3562_, v___x_3541_, v_a_3551_, v_x_3515_, v___x_3532_, v___x_3576_, v___x_3577_, v_a_3519_, v_a_3520_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3580_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
lean_inc(v_a_3579_);
lean_dec_ref(v___x_3578_);
lean_inc(v_00_u03b1_3570_);
v___x_3580_ = l_Lean_Meta_getLevel(v_00_u03b1_3570_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3580_) == 0)
{
lean_object* v_a_3581_; lean_object* v___x_3582_; 
v_a_3581_ = lean_ctor_get(v___x_3580_, 0);
lean_inc(v_a_3581_);
lean_dec_ref(v___x_3580_);
lean_inc(v_00_u03b2_3571_);
v___x_3582_ = l_Lean_Meta_getLevel(v_00_u03b2_3571_, v_a_3521_, v_a_3522_, v_a_3523_, v_a_3524_);
if (lean_obj_tag(v___x_3582_) == 0)
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3608_; 
v_a_3583_ = lean_ctor_get(v___x_3582_, 0);
v_isSharedCheck_3608_ = !lean_is_exclusive(v___x_3582_);
if (v_isSharedCheck_3608_ == 0)
{
v___x_3585_ = v___x_3582_;
v_isShared_3586_ = v_isSharedCheck_3608_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3582_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3608_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3590_; 
v___x_3587_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__6);
v___x_3588_ = lean_box(0);
if (v_isShared_3569_ == 0)
{
lean_ctor_set_tag(v___x_3568_, 1);
lean_ctor_set(v___x_3568_, 1, v___x_3588_);
lean_ctor_set(v___x_3568_, 0, v_a_3583_);
v___x_3590_ = v___x_3568_;
goto v_reusejp_3589_;
}
else
{
lean_object* v_reuseFailAlloc_3607_; 
v_reuseFailAlloc_3607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3607_, 0, v_a_3583_);
lean_ctor_set(v_reuseFailAlloc_3607_, 1, v___x_3588_);
v___x_3590_ = v_reuseFailAlloc_3607_;
goto v_reusejp_3589_;
}
v_reusejp_3589_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3605_; 
v___x_3591_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3591_, 0, v_a_3581_);
lean_ctor_set(v___x_3591_, 1, v___x_3590_);
v___x_3592_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3592_, 0, v_snd_3566_);
lean_ctor_set(v___x_3592_, 1, v___x_3591_);
v___x_3593_ = l_Lean_mkConst(v___x_3587_, v___x_3592_);
v___x_3594_ = lean_unsigned_to_nat(7u);
v___x_3595_ = lean_mk_empty_array_with_capacity(v___x_3594_);
v___x_3596_ = lean_array_push(v___x_3595_, v_00_u03b1_3570_);
v___x_3597_ = lean_array_push(v___x_3596_, v_00_u03b2_3571_);
v___x_3598_ = lean_array_push(v___x_3597_, v_fst_3565_);
v___x_3599_ = lean_array_push(v___x_3598_, v_x_3515_);
v___x_3600_ = lean_array_push(v___x_3599_, v_a_3575_);
v___x_3601_ = lean_array_push(v___x_3600_, v_a_3579_);
v___x_3602_ = lean_array_push(v___x_3601_, v_F_3516_);
v___x_3603_ = l_Lean_mkAppN(v___x_3593_, v___x_3602_);
lean_dec_ref(v___x_3602_);
if (v_isShared_3586_ == 0)
{
lean_ctor_set(v___x_3585_, 0, v___x_3603_);
v___x_3605_ = v___x_3585_;
goto v_reusejp_3604_;
}
else
{
lean_object* v_reuseFailAlloc_3606_; 
v_reuseFailAlloc_3606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3606_, 0, v___x_3603_);
v___x_3605_ = v_reuseFailAlloc_3606_;
goto v_reusejp_3604_;
}
v_reusejp_3604_:
{
return v___x_3605_;
}
}
}
}
else
{
lean_object* v_a_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3616_; 
lean_dec(v_a_3581_);
lean_dec(v_a_3579_);
lean_dec(v_a_3575_);
lean_dec(v_00_u03b2_3571_);
lean_dec(v_00_u03b1_3570_);
lean_del_object(v___x_3568_);
lean_dec(v_snd_3566_);
lean_dec(v_fst_3565_);
lean_dec_ref(v_F_3516_);
lean_dec_ref(v_x_3515_);
v_a_3609_ = lean_ctor_get(v___x_3582_, 0);
v_isSharedCheck_3616_ = !lean_is_exclusive(v___x_3582_);
if (v_isSharedCheck_3616_ == 0)
{
v___x_3611_ = v___x_3582_;
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_a_3609_);
lean_dec(v___x_3582_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3616_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
lean_object* v___x_3614_; 
if (v_isShared_3612_ == 0)
{
v___x_3614_ = v___x_3611_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3615_; 
v_reuseFailAlloc_3615_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3615_, 0, v_a_3609_);
v___x_3614_ = v_reuseFailAlloc_3615_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
return v___x_3614_;
}
}
}
}
else
{
lean_object* v_a_3617_; lean_object* v___x_3619_; uint8_t v_isShared_3620_; uint8_t v_isSharedCheck_3624_; 
lean_dec(v_a_3579_);
lean_dec(v_a_3575_);
lean_dec(v_00_u03b2_3571_);
lean_dec(v_00_u03b1_3570_);
lean_del_object(v___x_3568_);
lean_dec(v_snd_3566_);
lean_dec(v_fst_3565_);
lean_dec_ref(v_F_3516_);
lean_dec_ref(v_x_3515_);
v_a_3617_ = lean_ctor_get(v___x_3580_, 0);
v_isSharedCheck_3624_ = !lean_is_exclusive(v___x_3580_);
if (v_isSharedCheck_3624_ == 0)
{
v___x_3619_ = v___x_3580_;
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
else
{
lean_inc(v_a_3617_);
lean_dec(v___x_3580_);
v___x_3619_ = lean_box(0);
v_isShared_3620_ = v_isSharedCheck_3624_;
goto v_resetjp_3618_;
}
v_resetjp_3618_:
{
lean_object* v___x_3622_; 
if (v_isShared_3620_ == 0)
{
v___x_3622_ = v___x_3619_;
goto v_reusejp_3621_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v_a_3617_);
v___x_3622_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3621_;
}
v_reusejp_3621_:
{
return v___x_3622_;
}
}
}
}
else
{
lean_dec(v_a_3575_);
lean_dec(v_00_u03b2_3571_);
lean_dec(v_00_u03b1_3570_);
lean_del_object(v___x_3568_);
lean_dec(v_snd_3566_);
lean_dec(v_fst_3565_);
lean_dec_ref(v_F_3516_);
lean_dec_ref(v_x_3515_);
return v___x_3578_;
}
}
else
{
lean_dec(v_00_u03b2_3571_);
lean_dec(v_00_u03b1_3570_);
lean_del_object(v___x_3568_);
lean_dec(v_snd_3566_);
lean_dec(v_fst_3565_);
lean_dec_ref(v_args_3556_);
lean_dec(v_a_3551_);
lean_dec_ref(v_k_3518_);
lean_dec_ref(v_F_3516_);
lean_dec_ref(v_x_3515_);
return v___x_3574_;
}
}
}
else
{
lean_object* v_a_3626_; lean_object* v___x_3628_; uint8_t v_isShared_3629_; uint8_t v_isSharedCheck_3633_; 
lean_dec_ref(v_args_3556_);
lean_dec(v_a_3551_);
lean_dec_ref(v_k_3518_);
lean_dec_ref(v_F_3516_);
lean_dec_ref(v_x_3515_);
v_a_3626_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3633_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3633_ == 0)
{
v___x_3628_ = v___x_3563_;
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
else
{
lean_inc(v_a_3626_);
lean_dec(v___x_3563_);
v___x_3628_ = lean_box(0);
v_isShared_3629_ = v_isSharedCheck_3633_;
goto v_resetjp_3627_;
}
v_resetjp_3627_:
{
lean_object* v___x_3631_; 
if (v_isShared_3629_ == 0)
{
v___x_3631_ = v___x_3628_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v_a_3626_);
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
else
{
lean_object* v_a_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3641_; 
lean_dec(v___x_3530_);
lean_dec_ref(v_k_3518_);
lean_dec_ref(v_val_3517_);
lean_dec_ref(v_F_3516_);
lean_dec_ref(v_x_3515_);
v_a_3634_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3641_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3641_ == 0)
{
v___x_3636_ = v___x_3550_;
v_isShared_3637_ = v_isSharedCheck_3641_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_a_3634_);
lean_dec(v___x_3550_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(lean_object* v___x_3646_, lean_object* v_body_3647_, lean_object* v_k_3648_, lean_object* v___x_3649_, uint8_t v___x_3650_, uint8_t v___x_3651_, lean_object* v_FNew_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_){
_start:
{
lean_object* v___x_3660_; 
lean_inc_ref(v_FNew_3652_);
lean_inc_ref(v___x_3646_);
v___x_3660_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_3646_, v_FNew_3652_, v_body_3647_, v_k_3648_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
if (lean_obj_tag(v___x_3660_) == 0)
{
lean_object* v_a_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; uint8_t v___x_3665_; lean_object* v___x_3666_; 
v_a_3661_ = lean_ctor_get(v___x_3660_, 0);
lean_inc(v_a_3661_);
lean_dec_ref(v___x_3660_);
v___x_3662_ = lean_mk_empty_array_with_capacity(v___x_3649_);
v___x_3663_ = lean_array_push(v___x_3662_, v___x_3646_);
v___x_3664_ = lean_array_push(v___x_3663_, v_FNew_3652_);
v___x_3665_ = 1;
v___x_3666_ = l_Lean_Meta_mkLambdaFVars(v___x_3664_, v_a_3661_, v___x_3650_, v___x_3651_, v___x_3650_, v___x_3651_, v___x_3665_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
lean_dec_ref(v___x_3664_);
return v___x_3666_;
}
else
{
lean_dec_ref(v_FNew_3652_);
lean_dec_ref(v___x_3646_);
return v___x_3660_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed(lean_object* v___x_3667_, lean_object* v_body_3668_, lean_object* v_k_3669_, lean_object* v___x_3670_, lean_object* v___x_3671_, lean_object* v___x_3672_, lean_object* v_FNew_3673_, lean_object* v___y_3674_, lean_object* v___y_3675_, lean_object* v___y_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_){
_start:
{
uint8_t v___x_6949__boxed_3681_; uint8_t v___x_6950__boxed_3682_; lean_object* v_res_3683_; 
v___x_6949__boxed_3681_ = lean_unbox(v___x_3671_);
v___x_6950__boxed_3682_ = lean_unbox(v___x_3672_);
v_res_3683_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1(v___x_3667_, v_body_3668_, v_k_3669_, v___x_3670_, v___x_6949__boxed_3681_, v___x_6950__boxed_3682_, v_FNew_3673_, v___y_3674_, v___y_3675_, v___y_3676_, v___y_3677_, v___y_3678_, v___y_3679_);
lean_dec(v___y_3679_);
lean_dec_ref(v___y_3678_);
lean_dec(v___y_3677_);
lean_dec_ref(v___y_3676_);
lean_dec(v___y_3675_);
lean_dec_ref(v___y_3674_);
lean_dec(v___x_3670_);
return v_res_3683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(lean_object* v___x_3684_, lean_object* v___x_3685_, lean_object* v_00_u03b1_3686_, lean_object* v_00_u03b2_3687_, lean_object* v___x_3688_, lean_object* v_ctorName_3689_, lean_object* v_k_3690_, lean_object* v___x_3691_, uint8_t v___x_3692_, uint8_t v___x_3693_, lean_object* v_a_3694_, lean_object* v_x_3695_, lean_object* v_xs_3696_, lean_object* v_body_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_){
_start:
{
lean_object* v___x_3705_; lean_object* v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3710_; lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3705_ = lean_array_get_borrowed(v___x_3684_, v_xs_3696_, v___x_3685_);
v___x_3706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3706_, 0, v_00_u03b1_3686_);
v___x_3707_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3707_, 0, v_00_u03b2_3687_);
lean_inc(v___x_3705_);
v___x_3708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3705_);
v___x_3709_ = lean_mk_empty_array_with_capacity(v___x_3688_);
v___x_3710_ = lean_array_push(v___x_3709_, v___x_3706_);
v___x_3711_ = lean_array_push(v___x_3710_, v___x_3707_);
v___x_3712_ = lean_array_push(v___x_3711_, v___x_3708_);
v___x_3713_ = l_Lean_Meta_mkAppOptM(v_ctorName_3689_, v___x_3712_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_);
if (lean_obj_tag(v___x_3713_) == 0)
{
lean_object* v_a_3714_; lean_object* v___x_3715_; lean_object* v___x_3716_; lean_object* v___f_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; 
v_a_3714_ = lean_ctor_get(v___x_3713_, 0);
lean_inc(v_a_3714_);
lean_dec_ref(v___x_3713_);
v___x_3715_ = lean_box(v___x_3692_);
v___x_3716_ = lean_box(v___x_3693_);
lean_inc(v___x_3705_);
v___f_3717_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__1___boxed), 14, 6);
lean_closure_set(v___f_3717_, 0, v___x_3705_);
lean_closure_set(v___f_3717_, 1, v_body_3697_);
lean_closure_set(v___f_3717_, 2, v_k_3690_);
lean_closure_set(v___f_3717_, 3, v___x_3691_);
lean_closure_set(v___f_3717_, 4, v___x_3715_);
lean_closure_set(v___f_3717_, 5, v___x_3716_);
v___x_3718_ = l_Lean_LocalDecl_type(v_a_3694_);
v___x_3719_ = l_Lean_Expr_replaceFVar(v___x_3718_, v_x_3695_, v_a_3714_);
lean_dec(v_a_3714_);
lean_dec_ref(v___x_3718_);
v___x_3720_ = l_Lean_LocalDecl_userName(v_a_3694_);
v___x_3721_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v___x_3720_, v___x_3719_, v___f_3717_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_);
return v___x_3721_;
}
else
{
lean_dec_ref(v_body_3697_);
lean_dec_ref(v_x_3695_);
lean_dec(v___x_3691_);
lean_dec_ref(v_k_3690_);
return v___x_3713_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed(lean_object** _args){
lean_object* v___x_3722_ = _args[0];
lean_object* v___x_3723_ = _args[1];
lean_object* v_00_u03b1_3724_ = _args[2];
lean_object* v_00_u03b2_3725_ = _args[3];
lean_object* v___x_3726_ = _args[4];
lean_object* v_ctorName_3727_ = _args[5];
lean_object* v_k_3728_ = _args[6];
lean_object* v___x_3729_ = _args[7];
lean_object* v___x_3730_ = _args[8];
lean_object* v___x_3731_ = _args[9];
lean_object* v_a_3732_ = _args[10];
lean_object* v_x_3733_ = _args[11];
lean_object* v_xs_3734_ = _args[12];
lean_object* v_body_3735_ = _args[13];
lean_object* v___y_3736_ = _args[14];
lean_object* v___y_3737_ = _args[15];
lean_object* v___y_3738_ = _args[16];
lean_object* v___y_3739_ = _args[17];
lean_object* v___y_3740_ = _args[18];
lean_object* v___y_3741_ = _args[19];
lean_object* v___y_3742_ = _args[20];
_start:
{
uint8_t v___x_6970__boxed_3743_; uint8_t v___x_6971__boxed_3744_; lean_object* v_res_3745_; 
v___x_6970__boxed_3743_ = lean_unbox(v___x_3730_);
v___x_6971__boxed_3744_ = lean_unbox(v___x_3731_);
v_res_3745_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2(v___x_3722_, v___x_3723_, v_00_u03b1_3724_, v_00_u03b2_3725_, v___x_3726_, v_ctorName_3727_, v_k_3728_, v___x_3729_, v___x_6970__boxed_3743_, v___x_6971__boxed_3744_, v_a_3732_, v_x_3733_, v_xs_3734_, v_body_3735_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
lean_dec(v___y_3741_);
lean_dec_ref(v___y_3740_);
lean_dec(v___y_3739_);
lean_dec_ref(v___y_3738_);
lean_dec(v___y_3737_);
lean_dec_ref(v___y_3736_);
lean_dec_ref(v_xs_3734_);
lean_dec_ref(v_a_3732_);
lean_dec(v___x_3726_);
lean_dec(v___x_3723_);
lean_dec_ref(v___x_3722_);
return v_res_3745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(lean_object* v___x_3746_, lean_object* v___x_3747_, lean_object* v_00_u03b1_3748_, lean_object* v_00_u03b2_3749_, lean_object* v___x_3750_, lean_object* v_k_3751_, lean_object* v___x_3752_, uint8_t v___x_3753_, uint8_t v___x_3754_, lean_object* v_a_3755_, lean_object* v_x_3756_, lean_object* v___x_3757_, lean_object* v_ctorName_3758_, lean_object* v_minor_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_){
_start:
{
lean_object* v___x_3767_; lean_object* v___x_3768_; lean_object* v___f_3769_; lean_object* v___x_3770_; 
v___x_3767_ = lean_box(v___x_3753_);
v___x_3768_ = lean_box(v___x_3754_);
v___f_3769_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__2___boxed), 21, 12);
lean_closure_set(v___f_3769_, 0, v___x_3746_);
lean_closure_set(v___f_3769_, 1, v___x_3747_);
lean_closure_set(v___f_3769_, 2, v_00_u03b1_3748_);
lean_closure_set(v___f_3769_, 3, v_00_u03b2_3749_);
lean_closure_set(v___f_3769_, 4, v___x_3750_);
lean_closure_set(v___f_3769_, 5, v_ctorName_3758_);
lean_closure_set(v___f_3769_, 6, v_k_3751_);
lean_closure_set(v___f_3769_, 7, v___x_3752_);
lean_closure_set(v___f_3769_, 8, v___x_3767_);
lean_closure_set(v___f_3769_, 9, v___x_3768_);
lean_closure_set(v___f_3769_, 10, v_a_3755_);
lean_closure_set(v___f_3769_, 11, v_x_3756_);
v___x_3770_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__2___redArg(v_minor_3759_, v___x_3757_, v___f_3769_, v___x_3753_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_, v___y_3765_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3___boxed(lean_object** _args){
lean_object* v___x_3771_ = _args[0];
lean_object* v___x_3772_ = _args[1];
lean_object* v_00_u03b1_3773_ = _args[2];
lean_object* v_00_u03b2_3774_ = _args[3];
lean_object* v___x_3775_ = _args[4];
lean_object* v_k_3776_ = _args[5];
lean_object* v___x_3777_ = _args[6];
lean_object* v___x_3778_ = _args[7];
lean_object* v___x_3779_ = _args[8];
lean_object* v_a_3780_ = _args[9];
lean_object* v_x_3781_ = _args[10];
lean_object* v___x_3782_ = _args[11];
lean_object* v_ctorName_3783_ = _args[12];
lean_object* v_minor_3784_ = _args[13];
lean_object* v___y_3785_ = _args[14];
lean_object* v___y_3786_ = _args[15];
lean_object* v___y_3787_ = _args[16];
lean_object* v___y_3788_ = _args[17];
lean_object* v___y_3789_ = _args[18];
lean_object* v___y_3790_ = _args[19];
lean_object* v___y_3791_ = _args[20];
_start:
{
uint8_t v___x_6934__boxed_3792_; uint8_t v___x_6935__boxed_3793_; lean_object* v_res_3794_; 
v___x_6934__boxed_3792_ = lean_unbox(v___x_3778_);
v___x_6935__boxed_3793_ = lean_unbox(v___x_3779_);
v_res_3794_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__3(v___x_3771_, v___x_3772_, v_00_u03b1_3773_, v_00_u03b2_3774_, v___x_3775_, v_k_3776_, v___x_3777_, v___x_6934__boxed_3792_, v___x_6935__boxed_3793_, v_a_3780_, v_x_3781_, v___x_3782_, v_ctorName_3783_, v_minor_3784_, v___y_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_, v___y_3790_);
lean_dec(v___y_3790_);
lean_dec_ref(v___y_3789_);
lean_dec(v___y_3788_);
lean_dec_ref(v___y_3787_);
lean_dec(v___y_3786_);
lean_dec_ref(v___y_3785_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___boxed(lean_object* v_x_3795_, lean_object* v_F_3796_, lean_object* v_val_3797_, lean_object* v_k_3798_, lean_object* v_a_3799_, lean_object* v_a_3800_, lean_object* v_a_3801_, lean_object* v_a_3802_, lean_object* v_a_3803_, lean_object* v_a_3804_, lean_object* v_a_3805_){
_start:
{
lean_object* v_res_3806_; 
v_res_3806_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v_x_3795_, v_F_3796_, v_val_3797_, v_k_3798_, v_a_3799_, v_a_3800_, v_a_3801_, v_a_3802_, v_a_3803_, v_a_3804_);
lean_dec(v_a_3804_);
lean_dec_ref(v_a_3803_);
lean_dec(v_a_3802_);
lean_dec_ref(v_a_3801_);
lean_dec(v_a_3800_);
lean_dec_ref(v_a_3799_);
return v_res_3806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1(lean_object* v_00_u03b1_3807_, lean_object* v_name_3808_, uint8_t v_bi_3809_, lean_object* v_type_3810_, lean_object* v_k_3811_, uint8_t v_kind_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_, lean_object* v___y_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_){
_start:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___redArg(v_name_3808_, v_bi_3809_, v_type_3810_, v_k_3811_, v_kind_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1___boxed(lean_object* v_00_u03b1_3821_, lean_object* v_name_3822_, lean_object* v_bi_3823_, lean_object* v_type_3824_, lean_object* v_k_3825_, lean_object* v_kind_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_){
_start:
{
uint8_t v_bi_boxed_3834_; uint8_t v_kind_boxed_3835_; lean_object* v_res_3836_; 
v_bi_boxed_3834_ = lean_unbox(v_bi_3823_);
v_kind_boxed_3835_ = lean_unbox(v_kind_3826_);
v_res_3836_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1_spec__1(v_00_u03b1_3821_, v_name_3822_, v_bi_boxed_3834_, v_type_3824_, v_k_3825_, v_kind_boxed_3835_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_);
lean_dec(v___y_3832_);
lean_dec_ref(v___y_3831_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
return v_res_3836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(lean_object* v_00_u03b1_3837_, lean_object* v_name_3838_, lean_object* v_type_3839_, lean_object* v_k_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_){
_start:
{
lean_object* v___x_3848_; 
v___x_3848_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v_name_3838_, v_type_3839_, v_k_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_, v___y_3846_);
return v___x_3848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___boxed(lean_object* v_00_u03b1_3849_, lean_object* v_name_3850_, lean_object* v_type_3851_, lean_object* v_k_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_){
_start:
{
lean_object* v_res_3860_; 
v_res_3860_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1(v_00_u03b1_3849_, v_name_3850_, v_type_3851_, v_k_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, v___y_3857_, v___y_3858_);
lean_dec(v___y_3858_);
lean_dec_ref(v___y_3857_);
lean_dec(v___y_3856_);
lean_dec_ref(v___y_3855_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
return v_res_3860_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3861_; 
v___x_3861_ = l_Lean_Elab_Term_instInhabitedTermElabM(lean_box(0));
return v___x_3861_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(lean_object* v_msg_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3874__overap_3871_; lean_object* v___x_3872_; 
v___x_3870_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___closed__0);
v___x_3874__overap_3871_ = lean_panic_fn_borrowed(v___x_3870_, v_msg_3862_);
lean_inc(v___y_3868_);
lean_inc_ref(v___y_3867_);
lean_inc(v___y_3866_);
lean_inc_ref(v___y_3865_);
lean_inc(v___y_3864_);
lean_inc_ref(v___y_3863_);
v___x_3872_ = lean_apply_7(v___x_3874__overap_3871_, v___y_3863_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_, v___y_3868_, lean_box(0));
return v___x_3872_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0___boxed(lean_object* v_msg_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_, lean_object* v___y_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_){
_start:
{
lean_object* v_res_3881_; 
v_res_3881_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v_msg_3873_, v___y_3874_, v___y_3875_, v___y_3876_, v___y_3877_, v___y_3878_, v___y_3879_);
lean_dec(v___y_3879_);
lean_dec_ref(v___y_3878_);
lean_dec(v___y_3877_);
lean_dec_ref(v___y_3876_);
lean_dec(v___y_3875_);
lean_dec_ref(v___y_3874_);
return v_res_3881_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2(void){
_start:
{
lean_object* v___x_3882_; 
v___x_3882_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_3882_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1(void){
_start:
{
lean_object* v___x_3883_; 
v___x_3883_ = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.WF.Fix.0.Lean.Elab.WF.processPSigmaCasesOn", 75, 75);
return v___x_3883_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0(void){
_start:
{
lean_object* v___x_3884_; 
v___x_3884_ = lean_mk_string_unchecked("Lean.Elab.PreDefinition.WF.Fix", 30, 30);
return v___x_3884_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3(void){
_start:
{
lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
v___x_3885_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__2);
v___x_3886_ = lean_unsigned_to_nat(49u);
v___x_3887_ = lean_unsigned_to_nat(186u);
v___x_3888_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__1);
v___x_3889_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__0);
v___x_3890_ = l_mkPanicMessageWithDecl(v___x_3889_, v___x_3888_, v___x_3887_, v___x_3886_, v___x_3885_);
return v___x_3890_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3891_; 
v___x_3891_ = lean_mk_string_unchecked("mk", 2, 2);
return v___x_3891_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3892_; 
v___x_3892_ = lean_mk_string_unchecked("PSigma", 6, 6);
return v___x_3892_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
v___x_3893_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__1);
v___x_3894_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0);
v___x_3895_ = l_Lean_Name_mkStr2(v___x_3894_, v___x_3893_);
return v___x_3895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed(lean_object* v___x_3896_, lean_object* v_a_3897_, lean_object* v_k_3898_, lean_object* v___x_3899_, lean_object* v___x_3900_, lean_object* v___x_3901_, lean_object* v___x_3902_, lean_object* v___x_3903_, lean_object* v_FNew_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_, lean_object* v___y_3910_, lean_object* v___y_3911_){
_start:
{
uint8_t v___x_4042__boxed_3912_; uint8_t v___x_4043__boxed_3913_; uint8_t v___x_4044__boxed_3914_; lean_object* v_res_3915_; 
v___x_4042__boxed_3912_ = lean_unbox(v___x_3901_);
v___x_4043__boxed_3913_ = lean_unbox(v___x_3902_);
v___x_4044__boxed_3914_ = lean_unbox(v___x_3903_);
v_res_3915_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(v___x_3896_, v_a_3897_, v_k_3898_, v___x_3899_, v___x_3900_, v___x_4042__boxed_3912_, v___x_4043__boxed_3913_, v___x_4044__boxed_3914_, v_FNew_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_, v___y_3909_, v___y_3910_);
lean_dec(v___y_3910_);
lean_dec_ref(v___y_3909_);
lean_dec(v___y_3908_);
lean_dec_ref(v___y_3907_);
lean_dec(v___y_3906_);
lean_dec_ref(v___y_3905_);
lean_dec(v___x_3899_);
return v_res_3915_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(lean_object* v___x_3916_, lean_object* v___x_3917_, lean_object* v___x_3918_, lean_object* v___x_3919_, uint8_t v___x_3920_, uint8_t v___x_3921_, lean_object* v_00_u03b1_3922_, lean_object* v_00_u03b2_3923_, lean_object* v___x_3924_, lean_object* v_k_3925_, lean_object* v___x_3926_, lean_object* v_a_3927_, lean_object* v_x_3928_, lean_object* v_xs_3929_, lean_object* v_body_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_){
_start:
{
lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; uint8_t v___x_3943_; lean_object* v___x_3944_; 
v___x_3938_ = lean_array_get(v___x_3916_, v_xs_3929_, v___x_3917_);
v___x_3939_ = lean_array_get(v___x_3916_, v_xs_3929_, v___x_3918_);
v___x_3940_ = lean_array_get_size(v_xs_3929_);
v___x_3941_ = l_Array_toSubarray___redArg(v_xs_3929_, v___x_3919_, v___x_3940_);
v___x_3942_ = l_Subarray_copy___redArg(v___x_3941_);
v___x_3943_ = 1;
v___x_3944_ = l_Lean_Meta_mkLambdaFVars(v___x_3942_, v_body_3930_, v___x_3920_, v___x_3921_, v___x_3920_, v___x_3921_, v___x_3943_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
lean_dec_ref(v___x_3942_);
if (lean_obj_tag(v___x_3944_) == 0)
{
lean_object* v_a_3945_; lean_object* v___x_3947_; uint8_t v_isShared_3948_; uint8_t v_isSharedCheck_3971_; 
v_a_3945_ = lean_ctor_get(v___x_3944_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3944_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3947_ = v___x_3944_;
v_isShared_3948_ = v_isSharedCheck_3971_;
goto v_resetjp_3946_;
}
else
{
lean_inc(v_a_3945_);
lean_dec(v___x_3944_);
v___x_3947_ = lean_box(0);
v_isShared_3948_ = v_isSharedCheck_3971_;
goto v_resetjp_3946_;
}
v_resetjp_3946_:
{
lean_object* v___x_3949_; lean_object* v___x_3951_; 
v___x_3949_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__2);
if (v_isShared_3948_ == 0)
{
lean_ctor_set_tag(v___x_3947_, 1);
lean_ctor_set(v___x_3947_, 0, v_00_u03b1_3922_);
v___x_3951_ = v___x_3947_;
goto v_reusejp_3950_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v_00_u03b1_3922_);
v___x_3951_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3950_;
}
v_reusejp_3950_:
{
lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; 
v___x_3952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3952_, 0, v_00_u03b2_3923_);
lean_inc(v___x_3938_);
v___x_3953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3953_, 0, v___x_3938_);
lean_inc(v___x_3939_);
v___x_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3939_);
v___x_3955_ = lean_mk_empty_array_with_capacity(v___x_3924_);
v___x_3956_ = lean_array_push(v___x_3955_, v___x_3951_);
v___x_3957_ = lean_array_push(v___x_3956_, v___x_3952_);
v___x_3958_ = lean_array_push(v___x_3957_, v___x_3953_);
v___x_3959_ = lean_array_push(v___x_3958_, v___x_3954_);
v___x_3960_ = l_Lean_Meta_mkAppOptM(v___x_3949_, v___x_3959_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
if (lean_obj_tag(v___x_3960_) == 0)
{
lean_object* v_a_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___f_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v_a_3961_ = lean_ctor_get(v___x_3960_, 0);
lean_inc(v_a_3961_);
lean_dec_ref(v___x_3960_);
v___x_3962_ = lean_box(v___x_3920_);
v___x_3963_ = lean_box(v___x_3921_);
v___x_3964_ = lean_box(v___x_3943_);
v___f_3965_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1___boxed), 16, 8);
lean_closure_set(v___f_3965_, 0, v___x_3939_);
lean_closure_set(v___f_3965_, 1, v_a_3945_);
lean_closure_set(v___f_3965_, 2, v_k_3925_);
lean_closure_set(v___f_3965_, 3, v___x_3926_);
lean_closure_set(v___f_3965_, 4, v___x_3938_);
lean_closure_set(v___f_3965_, 5, v___x_3962_);
lean_closure_set(v___f_3965_, 6, v___x_3963_);
lean_closure_set(v___f_3965_, 7, v___x_3964_);
v___x_3966_ = l_Lean_LocalDecl_type(v_a_3927_);
v___x_3967_ = l_Lean_Expr_replaceFVar(v___x_3966_, v_x_3928_, v_a_3961_);
lean_dec(v_a_3961_);
lean_dec_ref(v___x_3966_);
v___x_3968_ = l_Lean_LocalDecl_userName(v_a_3927_);
v___x_3969_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__1___redArg(v___x_3968_, v___x_3967_, v___f_3965_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_);
return v___x_3969_;
}
else
{
lean_dec(v_a_3945_);
lean_dec(v___x_3939_);
lean_dec(v___x_3938_);
lean_dec_ref(v_x_3928_);
lean_dec(v___x_3926_);
lean_dec_ref(v_k_3925_);
return v___x_3960_;
}
}
}
}
else
{
lean_dec(v___x_3939_);
lean_dec(v___x_3938_);
lean_dec_ref(v_x_3928_);
lean_dec(v___x_3926_);
lean_dec_ref(v_k_3925_);
lean_dec_ref(v_00_u03b2_3923_);
lean_dec_ref(v_00_u03b1_3922_);
return v___x_3944_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed(lean_object** _args){
lean_object* v___x_3972_ = _args[0];
lean_object* v___x_3973_ = _args[1];
lean_object* v___x_3974_ = _args[2];
lean_object* v___x_3975_ = _args[3];
lean_object* v___x_3976_ = _args[4];
lean_object* v___x_3977_ = _args[5];
lean_object* v_00_u03b1_3978_ = _args[6];
lean_object* v_00_u03b2_3979_ = _args[7];
lean_object* v___x_3980_ = _args[8];
lean_object* v_k_3981_ = _args[9];
lean_object* v___x_3982_ = _args[10];
lean_object* v_a_3983_ = _args[11];
lean_object* v_x_3984_ = _args[12];
lean_object* v_xs_3985_ = _args[13];
lean_object* v_body_3986_ = _args[14];
lean_object* v___y_3987_ = _args[15];
lean_object* v___y_3988_ = _args[16];
lean_object* v___y_3989_ = _args[17];
lean_object* v___y_3990_ = _args[18];
lean_object* v___y_3991_ = _args[19];
lean_object* v___y_3992_ = _args[20];
lean_object* v___y_3993_ = _args[21];
_start:
{
uint8_t v___x_4069__boxed_3994_; uint8_t v___x_4070__boxed_3995_; lean_object* v_res_3996_; 
v___x_4069__boxed_3994_ = lean_unbox(v___x_3976_);
v___x_4070__boxed_3995_ = lean_unbox(v___x_3977_);
v_res_3996_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0(v___x_3972_, v___x_3973_, v___x_3974_, v___x_3975_, v___x_4069__boxed_3994_, v___x_4070__boxed_3995_, v_00_u03b1_3978_, v_00_u03b2_3979_, v___x_3980_, v_k_3981_, v___x_3982_, v_a_3983_, v_x_3984_, v_xs_3985_, v_body_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_);
lean_dec(v___y_3992_);
lean_dec_ref(v___y_3991_);
lean_dec(v___y_3990_);
lean_dec_ref(v___y_3989_);
lean_dec(v___y_3988_);
lean_dec_ref(v___y_3987_);
lean_dec_ref(v_a_3983_);
lean_dec(v___x_3980_);
lean_dec(v___x_3974_);
lean_dec(v___x_3973_);
lean_dec_ref(v___x_3972_);
return v_res_3996_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4(void){
_start:
{
lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; 
v___x_3997_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___closed__5);
v___x_3998_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___closed__0);
v___x_3999_ = l_Lean_Name_mkStr2(v___x_3998_, v___x_3997_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(lean_object* v_x_4000_, lean_object* v_F_4001_, lean_object* v_val_4002_, lean_object* v_k_4003_, lean_object* v_a_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_){
_start:
{
lean_object* v___y_4012_; lean_object* v___y_4013_; lean_object* v___y_4014_; lean_object* v___y_4015_; lean_object* v___y_4016_; lean_object* v___y_4017_; uint8_t v___y_4021_; uint8_t v___x_4113_; 
v___x_4113_ = l_Lean_Expr_isFVar(v_x_4000_);
if (v___x_4113_ == 0)
{
v___y_4021_ = v___x_4113_;
goto v___jp_4020_;
}
else
{
lean_object* v___x_4114_; lean_object* v___x_4115_; uint8_t v___x_4116_; 
v___x_4114_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4);
v___x_4115_ = lean_unsigned_to_nat(5u);
v___x_4116_ = l_Lean_Expr_isAppOfArity(v_val_4002_, v___x_4114_, v___x_4115_);
v___y_4021_ = v___x_4116_;
goto v___jp_4020_;
}
v___jp_4011_:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; 
v___x_4018_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__3);
v___x_4019_ = l_panic___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn_spec__0(v___x_4018_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_);
return v___x_4019_;
}
v___jp_4020_:
{
if (v___y_4021_ == 0)
{
lean_object* v___x_4022_; 
lean_dec_ref(v_x_4000_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
v___x_4022_ = lean_apply_9(v_k_4003_, v_F_4001_, v_val_4002_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, lean_box(0));
return v___x_4022_;
}
else
{
lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; uint8_t v___x_4029_; 
v___x_4023_ = lean_unsigned_to_nat(3u);
v___x_4024_ = l_Lean_Expr_getAppNumArgs(v_val_4002_);
v___x_4025_ = lean_nat_sub(v___x_4024_, v___x_4023_);
v___x_4026_ = lean_unsigned_to_nat(1u);
v___x_4027_ = lean_nat_sub(v___x_4025_, v___x_4026_);
lean_dec(v___x_4025_);
v___x_4028_ = l_Lean_Expr_getRevArg_x21(v_val_4002_, v___x_4027_);
v___x_4029_ = lean_expr_eqv(v___x_4028_, v_x_4000_);
lean_dec_ref(v___x_4028_);
if (v___x_4029_ == 0)
{
lean_object* v___x_4030_; 
lean_dec(v___x_4024_);
lean_dec_ref(v_x_4000_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
v___x_4030_ = lean_apply_9(v_k_4003_, v_F_4001_, v_val_4002_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, lean_box(0));
return v___x_4030_;
}
else
{
lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; uint8_t v___x_4035_; 
v___x_4031_ = lean_unsigned_to_nat(4u);
v___x_4032_ = lean_nat_sub(v___x_4024_, v___x_4031_);
v___x_4033_ = lean_nat_sub(v___x_4032_, v___x_4026_);
lean_dec(v___x_4032_);
v___x_4034_ = l_Lean_Expr_getRevArg_x21(v_val_4002_, v___x_4033_);
v___x_4035_ = l_Lean_Expr_isLambda(v___x_4034_);
if (v___x_4035_ == 0)
{
lean_object* v___x_4036_; 
lean_dec_ref(v___x_4034_);
lean_dec(v___x_4024_);
lean_dec_ref(v_x_4000_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
v___x_4036_ = lean_apply_9(v_k_4003_, v_F_4001_, v_val_4002_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, lean_box(0));
return v___x_4036_;
}
else
{
lean_object* v___x_4037_; uint8_t v___x_4038_; 
v___x_4037_ = l_Lean_Expr_bindingBody_x21(v___x_4034_);
lean_dec_ref(v___x_4034_);
v___x_4038_ = l_Lean_Expr_isLambda(v___x_4037_);
lean_dec_ref(v___x_4037_);
if (v___x_4038_ == 0)
{
lean_object* v___x_4039_; 
lean_dec(v___x_4024_);
lean_dec_ref(v_x_4000_);
lean_inc(v_a_4009_);
lean_inc_ref(v_a_4008_);
lean_inc(v_a_4007_);
lean_inc_ref(v_a_4006_);
lean_inc(v_a_4005_);
lean_inc_ref(v_a_4004_);
v___x_4039_ = lean_apply_9(v_k_4003_, v_F_4001_, v_val_4002_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, lean_box(0));
return v___x_4039_;
}
else
{
lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4040_ = l_Lean_Expr_getAppFn(v_val_4002_);
v___x_4041_ = l_Lean_Expr_constLevels_x21(v___x_4040_);
lean_dec_ref(v___x_4040_);
if (lean_obj_tag(v___x_4041_) == 1)
{
lean_object* v_tail_4042_; 
v_tail_4042_ = lean_ctor_get(v___x_4041_, 1);
lean_inc(v_tail_4042_);
lean_dec_ref(v___x_4041_);
if (lean_obj_tag(v_tail_4042_) == 1)
{
lean_object* v_tail_4043_; 
v_tail_4043_ = lean_ctor_get(v_tail_4042_, 1);
lean_inc(v_tail_4043_);
if (lean_obj_tag(v_tail_4043_) == 1)
{
lean_object* v_tail_4044_; lean_object* v___x_4046_; uint8_t v_isShared_4047_; uint8_t v_isSharedCheck_4111_; 
v_tail_4044_ = lean_ctor_get(v_tail_4043_, 1);
v_isSharedCheck_4111_ = !lean_is_exclusive(v_tail_4043_);
if (v_isSharedCheck_4111_ == 0)
{
lean_object* v_unused_4112_; 
v_unused_4112_ = lean_ctor_get(v_tail_4043_, 0);
lean_dec(v_unused_4112_);
v___x_4046_ = v_tail_4043_;
v_isShared_4047_ = v_isSharedCheck_4111_;
goto v_resetjp_4045_;
}
else
{
lean_inc(v_tail_4044_);
lean_dec(v_tail_4043_);
v___x_4046_ = lean_box(0);
v_isShared_4047_ = v_isSharedCheck_4111_;
goto v_resetjp_4045_;
}
v_resetjp_4045_:
{
if (lean_obj_tag(v_tail_4044_) == 0)
{
lean_object* v___x_4048_; lean_object* v___x_4049_; 
v___x_4048_ = l_Lean_Expr_fvarId_x21(v_F_4001_);
v___x_4049_ = l_Lean_FVarId_getDecl___redArg(v___x_4048_, v_a_4006_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4049_) == 0)
{
lean_object* v_a_4050_; lean_object* v___x_4051_; lean_object* v_dummy_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v_args_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___f_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; uint8_t v___x_4061_; lean_object* v___x_4062_; 
v_a_4050_ = lean_ctor_get(v___x_4049_, 0);
lean_inc_n(v_a_4050_, 2);
lean_dec_ref(v___x_4049_);
v___x_4051_ = l_Lean_instInhabitedExpr;
v_dummy_4052_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loopGo_spec__13___closed__0);
lean_inc(v___x_4024_);
v___x_4053_ = lean_mk_array(v___x_4024_, v_dummy_4052_);
v___x_4054_ = lean_nat_sub(v___x_4024_, v___x_4026_);
lean_dec(v___x_4024_);
v_args_4055_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_val_4002_, v___x_4053_, v___x_4054_);
v___x_4056_ = lean_unsigned_to_nat(0u);
v___x_4057_ = lean_box(v___x_4035_);
lean_inc_ref(v_x_4000_);
v___f_4058_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn___lam__0___boxed), 14, 5);
lean_closure_set(v___f_4058_, 0, v_a_4050_);
lean_closure_set(v___f_4058_, 1, v___x_4051_);
lean_closure_set(v___f_4058_, 2, v___x_4056_);
lean_closure_set(v___f_4058_, 3, v_x_4000_);
lean_closure_set(v___f_4058_, 4, v___x_4057_);
v___x_4059_ = lean_unsigned_to_nat(2u);
v___x_4060_ = lean_array_get(v___x_4051_, v_args_4055_, v___x_4059_);
v___x_4061_ = 0;
v___x_4062_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_4060_, v___f_4058_, v___x_4061_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; lean_object* v_fst_4064_; lean_object* v_snd_4065_; lean_object* v_00_u03b1_4066_; lean_object* v_00_u03b2_4067_; lean_object* v___x_4068_; lean_object* v___x_4069_; lean_object* v___f_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref(v___x_4062_);
v_fst_4064_ = lean_ctor_get(v_a_4063_, 0);
lean_inc(v_fst_4064_);
v_snd_4065_ = lean_ctor_get(v_a_4063_, 1);
lean_inc(v_snd_4065_);
lean_dec(v_a_4063_);
v_00_u03b1_4066_ = lean_array_get(v___x_4051_, v_args_4055_, v___x_4056_);
v_00_u03b2_4067_ = lean_array_get(v___x_4051_, v_args_4055_, v___x_4026_);
v___x_4068_ = lean_box(v___x_4061_);
v___x_4069_ = lean_box(v___x_4035_);
lean_inc_ref(v_x_4000_);
lean_inc(v_00_u03b2_4067_);
lean_inc(v_00_u03b1_4066_);
v___f_4070_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__0___boxed), 22, 13);
lean_closure_set(v___f_4070_, 0, v___x_4051_);
lean_closure_set(v___f_4070_, 1, v___x_4056_);
lean_closure_set(v___f_4070_, 2, v___x_4026_);
lean_closure_set(v___f_4070_, 3, v___x_4059_);
lean_closure_set(v___f_4070_, 4, v___x_4068_);
lean_closure_set(v___f_4070_, 5, v___x_4069_);
lean_closure_set(v___f_4070_, 6, v_00_u03b1_4066_);
lean_closure_set(v___f_4070_, 7, v_00_u03b2_4067_);
lean_closure_set(v___f_4070_, 8, v___x_4031_);
lean_closure_set(v___f_4070_, 9, v_k_4003_);
lean_closure_set(v___f_4070_, 10, v___x_4023_);
lean_closure_set(v___f_4070_, 11, v_a_4050_);
lean_closure_set(v___f_4070_, 12, v_x_4000_);
v___x_4071_ = lean_array_get(v___x_4051_, v_args_4055_, v___x_4031_);
lean_dec_ref(v_args_4055_);
v___x_4072_ = l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg(v___x_4071_, v___f_4070_, v___x_4061_, v_a_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
if (lean_obj_tag(v___x_4072_) == 0)
{
lean_object* v_a_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4094_; 
v_a_4073_ = lean_ctor_get(v___x_4072_, 0);
v_isSharedCheck_4094_ = !lean_is_exclusive(v___x_4072_);
if (v_isSharedCheck_4094_ == 0)
{
v___x_4075_ = v___x_4072_;
v_isShared_4076_ = v_isSharedCheck_4094_;
goto v_resetjp_4074_;
}
else
{
lean_inc(v_a_4073_);
lean_dec(v___x_4072_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4094_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
lean_object* v___x_4077_; lean_object* v___x_4079_; 
v___x_4077_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___closed__4);
if (v_isShared_4047_ == 0)
{
lean_ctor_set(v___x_4046_, 1, v_tail_4042_);
lean_ctor_set(v___x_4046_, 0, v_snd_4065_);
v___x_4079_ = v___x_4046_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4093_; 
v_reuseFailAlloc_4093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4093_, 0, v_snd_4065_);
lean_ctor_set(v_reuseFailAlloc_4093_, 1, v_tail_4042_);
v___x_4079_ = v_reuseFailAlloc_4093_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4091_; 
v___x_4080_ = l_Lean_mkConst(v___x_4077_, v___x_4079_);
v___x_4081_ = lean_unsigned_to_nat(6u);
v___x_4082_ = lean_mk_empty_array_with_capacity(v___x_4081_);
v___x_4083_ = lean_array_push(v___x_4082_, v_00_u03b1_4066_);
v___x_4084_ = lean_array_push(v___x_4083_, v_00_u03b2_4067_);
v___x_4085_ = lean_array_push(v___x_4084_, v_fst_4064_);
v___x_4086_ = lean_array_push(v___x_4085_, v_x_4000_);
v___x_4087_ = lean_array_push(v___x_4086_, v_a_4073_);
v___x_4088_ = lean_array_push(v___x_4087_, v_F_4001_);
v___x_4089_ = l_Lean_mkAppN(v___x_4080_, v___x_4088_);
lean_dec_ref(v___x_4088_);
if (v_isShared_4076_ == 0)
{
lean_ctor_set(v___x_4075_, 0, v___x_4089_);
v___x_4091_ = v___x_4075_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
}
}
else
{
lean_dec(v_00_u03b2_4067_);
lean_dec(v_00_u03b1_4066_);
lean_dec(v_snd_4065_);
lean_dec(v_fst_4064_);
lean_del_object(v___x_4046_);
lean_dec_ref(v_tail_4042_);
lean_dec_ref(v_F_4001_);
lean_dec_ref(v_x_4000_);
return v___x_4072_;
}
}
else
{
lean_object* v_a_4095_; lean_object* v___x_4097_; uint8_t v_isShared_4098_; uint8_t v_isSharedCheck_4102_; 
lean_dec_ref(v_args_4055_);
lean_dec(v_a_4050_);
lean_del_object(v___x_4046_);
lean_dec_ref(v_tail_4042_);
lean_dec_ref(v_k_4003_);
lean_dec_ref(v_F_4001_);
lean_dec_ref(v_x_4000_);
v_a_4095_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4097_ = v___x_4062_;
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
else
{
lean_inc(v_a_4095_);
lean_dec(v___x_4062_);
v___x_4097_ = lean_box(0);
v_isShared_4098_ = v_isSharedCheck_4102_;
goto v_resetjp_4096_;
}
v_resetjp_4096_:
{
lean_object* v___x_4100_; 
if (v_isShared_4098_ == 0)
{
v___x_4100_ = v___x_4097_;
goto v_reusejp_4099_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4095_);
v___x_4100_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4099_;
}
v_reusejp_4099_:
{
return v___x_4100_;
}
}
}
}
else
{
lean_object* v_a_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4110_; 
lean_del_object(v___x_4046_);
lean_dec_ref(v_tail_4042_);
lean_dec(v___x_4024_);
lean_dec_ref(v_k_4003_);
lean_dec_ref(v_val_4002_);
lean_dec_ref(v_F_4001_);
lean_dec_ref(v_x_4000_);
v_a_4103_ = lean_ctor_get(v___x_4049_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4049_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4105_ = v___x_4049_;
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_a_4103_);
lean_dec(v___x_4049_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4108_; 
if (v_isShared_4106_ == 0)
{
v___x_4108_ = v___x_4105_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_a_4103_);
v___x_4108_ = v_reuseFailAlloc_4109_;
goto v_reusejp_4107_;
}
v_reusejp_4107_:
{
return v___x_4108_;
}
}
}
}
else
{
lean_del_object(v___x_4046_);
lean_dec(v_tail_4044_);
lean_dec_ref(v_tail_4042_);
lean_dec(v___x_4024_);
lean_dec_ref(v_k_4003_);
lean_dec_ref(v_val_4002_);
lean_dec_ref(v_F_4001_);
lean_dec_ref(v_x_4000_);
v___y_4012_ = v_a_4004_;
v___y_4013_ = v_a_4005_;
v___y_4014_ = v_a_4006_;
v___y_4015_ = v_a_4007_;
v___y_4016_ = v_a_4008_;
v___y_4017_ = v_a_4009_;
goto v___jp_4011_;
}
}
}
else
{
lean_dec_ref(v_tail_4042_);
lean_dec(v_tail_4043_);
lean_dec(v___x_4024_);
lean_dec_ref(v_k_4003_);
lean_dec_ref(v_val_4002_);
lean_dec_ref(v_F_4001_);
lean_dec_ref(v_x_4000_);
v___y_4012_ = v_a_4004_;
v___y_4013_ = v_a_4005_;
v___y_4014_ = v_a_4006_;
v___y_4015_ = v_a_4007_;
v___y_4016_ = v_a_4008_;
v___y_4017_ = v_a_4009_;
goto v___jp_4011_;
}
}
else
{
lean_dec(v_tail_4042_);
lean_dec(v___x_4024_);
lean_dec_ref(v_k_4003_);
lean_dec_ref(v_val_4002_);
lean_dec_ref(v_F_4001_);
lean_dec_ref(v_x_4000_);
v___y_4012_ = v_a_4004_;
v___y_4013_ = v_a_4005_;
v___y_4014_ = v_a_4006_;
v___y_4015_ = v_a_4007_;
v___y_4016_ = v_a_4008_;
v___y_4017_ = v_a_4009_;
goto v___jp_4011_;
}
}
else
{
lean_dec(v___x_4041_);
lean_dec(v___x_4024_);
lean_dec_ref(v_k_4003_);
lean_dec_ref(v_val_4002_);
lean_dec_ref(v_F_4001_);
lean_dec_ref(v_x_4000_);
v___y_4012_ = v_a_4004_;
v___y_4013_ = v_a_4005_;
v___y_4014_ = v_a_4006_;
v___y_4015_ = v_a_4007_;
v___y_4016_ = v_a_4008_;
v___y_4017_ = v_a_4009_;
goto v___jp_4011_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___lam__1(lean_object* v___x_4117_, lean_object* v_a_4118_, lean_object* v_k_4119_, lean_object* v___x_4120_, lean_object* v___x_4121_, uint8_t v___x_4122_, uint8_t v___x_4123_, uint8_t v___x_4124_, lean_object* v_FNew_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_){
_start:
{
lean_object* v___x_4133_; 
lean_inc_ref(v_FNew_4125_);
lean_inc_ref(v___x_4117_);
v___x_4133_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v___x_4117_, v_FNew_4125_, v_a_4118_, v_k_4119_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_);
if (lean_obj_tag(v___x_4133_) == 0)
{
lean_object* v_a_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; 
v_a_4134_ = lean_ctor_get(v___x_4133_, 0);
lean_inc(v_a_4134_);
lean_dec_ref(v___x_4133_);
v___x_4135_ = lean_mk_empty_array_with_capacity(v___x_4120_);
v___x_4136_ = lean_array_push(v___x_4135_, v___x_4121_);
v___x_4137_ = lean_array_push(v___x_4136_, v___x_4117_);
v___x_4138_ = lean_array_push(v___x_4137_, v_FNew_4125_);
v___x_4139_ = l_Lean_Meta_mkLambdaFVars(v___x_4138_, v_a_4134_, v___x_4122_, v___x_4123_, v___x_4122_, v___x_4123_, v___x_4124_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_);
lean_dec_ref(v___x_4138_);
return v___x_4139_;
}
else
{
lean_dec_ref(v_FNew_4125_);
lean_dec_ref(v___x_4121_);
lean_dec_ref(v___x_4117_);
return v___x_4133_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn___boxed(lean_object* v_x_4140_, lean_object* v_F_4141_, lean_object* v_val_4142_, lean_object* v_k_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_4140_, v_F_4141_, v_val_4142_, v_k_4143_, v_a_4144_, v_a_4145_, v_a_4146_, v_a_4147_, v_a_4148_, v_a_4149_);
lean_dec(v_a_4149_);
lean_dec_ref(v_a_4148_);
lean_dec(v_a_4147_);
lean_dec_ref(v_a_4146_);
lean_dec(v_a_4145_);
lean_dec_ref(v_a_4144_);
return v_res_4151_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4152_; 
v___x_4152_ = lean_mk_string_unchecked("tacticDecreasing_tactic", 23, 23);
return v___x_4152_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4153_; lean_object* v___x_4154_; 
v___x_4153_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__0);
v___x_4154_ = l_Lean_Name_mkStr1(v___x_4153_);
return v___x_4154_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4155_; 
v___x_4155_ = lean_mk_string_unchecked("decreasing_tactic", 17, 17);
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_){
_start:
{
lean_object* v___x_4165_; 
v___x_4165_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_);
if (lean_obj_tag(v___x_4165_) == 0)
{
lean_object* v_ref_4166_; uint8_t v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; 
lean_dec_ref(v___x_4165_);
v_ref_4166_ = lean_ctor_get(v___y_4162_, 5);
v___x_4167_ = 0;
v___x_4168_ = l_Lean_SourceInfo_fromRef(v_ref_4166_, v___x_4167_);
v___x_4169_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__1);
v___x_4170_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___closed__2);
lean_inc(v___x_4168_);
v___x_4171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4168_);
lean_ctor_set(v___x_4171_, 1, v___x_4170_);
v___x_4172_ = l_Lean_Syntax_node1(v___x_4168_, v___x_4169_, v___x_4171_);
v___x_4173_ = l_Lean_Elab_Tactic_evalTactic(v___x_4172_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_);
return v___x_4173_;
}
else
{
return v___x_4165_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed(lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_){
_start:
{
lean_object* v_res_4183_; 
v_res_4183_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0(v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_);
lean_dec(v___y_4181_);
lean_dec_ref(v___y_4180_);
lean_dec(v___y_4179_);
lean_dec_ref(v___y_4178_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
return v_res_4183_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0(void){
_start:
{
lean_object* v___f_4184_; 
v___f_4184_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___lam__0___boxed), 9, 0);
return v___f_4184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(lean_object* v_mvarId_4185_, lean_object* v_a_4186_, lean_object* v_a_4187_, lean_object* v_a_4188_, lean_object* v_a_4189_, lean_object* v_a_4190_, lean_object* v_a_4191_){
_start:
{
lean_object* v___f_4193_; lean_object* v___x_4194_; 
v___f_4193_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___closed__0);
v___x_4194_ = l_Lean_Elab_Tactic_run(v_mvarId_4185_, v___f_4193_, v_a_4186_, v_a_4187_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_);
if (lean_obj_tag(v___x_4194_) == 0)
{
lean_object* v_a_4195_; lean_object* v___x_4197_; uint8_t v_isShared_4198_; uint8_t v_isSharedCheck_4205_; 
v_a_4195_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4197_ = v___x_4194_;
v_isShared_4198_ = v_isSharedCheck_4205_;
goto v_resetjp_4196_;
}
else
{
lean_inc(v_a_4195_);
lean_dec(v___x_4194_);
v___x_4197_ = lean_box(0);
v_isShared_4198_ = v_isSharedCheck_4205_;
goto v_resetjp_4196_;
}
v_resetjp_4196_:
{
uint8_t v___x_4199_; 
v___x_4199_ = l_List_isEmpty___redArg(v_a_4195_);
if (v___x_4199_ == 0)
{
lean_object* v___x_4200_; 
lean_del_object(v___x_4197_);
v___x_4200_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_4195_, v_a_4188_, v_a_4189_, v_a_4190_, v_a_4191_);
return v___x_4200_;
}
else
{
lean_object* v___x_4201_; lean_object* v___x_4203_; 
lean_dec(v_a_4195_);
v___x_4201_ = lean_box(0);
if (v_isShared_4198_ == 0)
{
lean_ctor_set(v___x_4197_, 0, v___x_4201_);
v___x_4203_ = v___x_4197_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v___x_4201_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
return v___x_4203_;
}
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4213_; 
v_a_4206_ = lean_ctor_get(v___x_4194_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4194_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4208_ = v___x_4194_;
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4194_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4211_; 
if (v_isShared_4209_ == 0)
{
v___x_4211_ = v___x_4208_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4206_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
return v___x_4211_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic___boxed(lean_object* v_mvarId_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_, lean_object* v_a_4218_, lean_object* v_a_4219_, lean_object* v_a_4220_, lean_object* v_a_4221_){
_start:
{
lean_object* v_res_4222_; 
v_res_4222_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_mvarId_4214_, v_a_4215_, v_a_4216_, v_a_4217_, v_a_4218_, v_a_4219_, v_a_4220_);
lean_dec(v_a_4220_);
lean_dec_ref(v_a_4219_);
lean_dec(v_a_4218_);
lean_dec_ref(v_a_4217_);
lean_dec(v_a_4216_);
lean_dec_ref(v_a_4215_);
return v_res_4222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(lean_object* v_x_4223_, lean_object* v_x_4224_, lean_object* v_x_4225_, lean_object* v_x_4226_){
_start:
{
lean_object* v_ks_4227_; lean_object* v_vs_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4252_; 
v_ks_4227_ = lean_ctor_get(v_x_4223_, 0);
v_vs_4228_ = lean_ctor_get(v_x_4223_, 1);
v_isSharedCheck_4252_ = !lean_is_exclusive(v_x_4223_);
if (v_isSharedCheck_4252_ == 0)
{
v___x_4230_ = v_x_4223_;
v_isShared_4231_ = v_isSharedCheck_4252_;
goto v_resetjp_4229_;
}
else
{
lean_inc(v_vs_4228_);
lean_inc(v_ks_4227_);
lean_dec(v_x_4223_);
v___x_4230_ = lean_box(0);
v_isShared_4231_ = v_isSharedCheck_4252_;
goto v_resetjp_4229_;
}
v_resetjp_4229_:
{
lean_object* v___x_4232_; uint8_t v___x_4233_; 
v___x_4232_ = lean_array_get_size(v_ks_4227_);
v___x_4233_ = lean_nat_dec_lt(v_x_4224_, v___x_4232_);
if (v___x_4233_ == 0)
{
lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4237_; 
lean_dec(v_x_4224_);
v___x_4234_ = lean_array_push(v_ks_4227_, v_x_4225_);
v___x_4235_ = lean_array_push(v_vs_4228_, v_x_4226_);
if (v_isShared_4231_ == 0)
{
lean_ctor_set(v___x_4230_, 1, v___x_4235_);
lean_ctor_set(v___x_4230_, 0, v___x_4234_);
v___x_4237_ = v___x_4230_;
goto v_reusejp_4236_;
}
else
{
lean_object* v_reuseFailAlloc_4238_; 
v_reuseFailAlloc_4238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4238_, 0, v___x_4234_);
lean_ctor_set(v_reuseFailAlloc_4238_, 1, v___x_4235_);
v___x_4237_ = v_reuseFailAlloc_4238_;
goto v_reusejp_4236_;
}
v_reusejp_4236_:
{
return v___x_4237_;
}
}
else
{
lean_object* v_k_x27_4239_; uint8_t v___x_4240_; 
v_k_x27_4239_ = lean_array_fget_borrowed(v_ks_4227_, v_x_4224_);
v___x_4240_ = l_Lean_instBEqMVarId_beq(v_x_4225_, v_k_x27_4239_);
if (v___x_4240_ == 0)
{
lean_object* v___x_4242_; 
if (v_isShared_4231_ == 0)
{
v___x_4242_ = v___x_4230_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_ks_4227_);
lean_ctor_set(v_reuseFailAlloc_4246_, 1, v_vs_4228_);
v___x_4242_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
lean_object* v___x_4243_; lean_object* v___x_4244_; 
v___x_4243_ = lean_unsigned_to_nat(1u);
v___x_4244_ = lean_nat_add(v_x_4224_, v___x_4243_);
lean_dec(v_x_4224_);
v_x_4223_ = v___x_4242_;
v_x_4224_ = v___x_4244_;
goto _start;
}
}
else
{
lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4250_; 
v___x_4247_ = lean_array_fset(v_ks_4227_, v_x_4224_, v_x_4225_);
v___x_4248_ = lean_array_fset(v_vs_4228_, v_x_4224_, v_x_4226_);
lean_dec(v_x_4224_);
if (v_isShared_4231_ == 0)
{
lean_ctor_set(v___x_4230_, 1, v___x_4248_);
lean_ctor_set(v___x_4230_, 0, v___x_4247_);
v___x_4250_ = v___x_4230_;
goto v_reusejp_4249_;
}
else
{
lean_object* v_reuseFailAlloc_4251_; 
v_reuseFailAlloc_4251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4251_, 0, v___x_4247_);
lean_ctor_set(v_reuseFailAlloc_4251_, 1, v___x_4248_);
v___x_4250_ = v_reuseFailAlloc_4251_;
goto v_reusejp_4249_;
}
v_reusejp_4249_:
{
return v___x_4250_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_n_4253_, lean_object* v_k_4254_, lean_object* v_v_4255_){
_start:
{
lean_object* v___x_4256_; lean_object* v___x_4257_; 
v___x_4256_ = lean_unsigned_to_nat(0u);
v___x_4257_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_n_4253_, v___x_4256_, v_k_4254_, v_v_4255_);
return v___x_4257_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_4258_; size_t v___x_4259_; size_t v___x_4260_; 
v___x_4258_ = ((size_t)5ULL);
v___x_4259_ = ((size_t)1ULL);
v___x_4260_ = lean_usize_shift_left(v___x_4259_, v___x_4258_);
return v___x_4260_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_4261_; size_t v___x_4262_; size_t v___x_4263_; 
v___x_4261_ = ((size_t)1ULL);
v___x_4262_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_4263_ = lean_usize_sub(v___x_4262_, v___x_4261_);
return v___x_4263_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_4264_; 
v___x_4264_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_4264_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(lean_object* v_x_4265_, size_t v_x_4266_, size_t v_x_4267_, lean_object* v_x_4268_, lean_object* v_x_4269_){
_start:
{
if (lean_obj_tag(v_x_4265_) == 0)
{
lean_object* v_es_4270_; size_t v___x_4271_; size_t v___x_4272_; size_t v___x_4273_; size_t v___x_4274_; lean_object* v_j_4275_; lean_object* v___x_4276_; uint8_t v___x_4277_; 
v_es_4270_ = lean_ctor_get(v_x_4265_, 0);
v___x_4271_ = ((size_t)5ULL);
v___x_4272_ = ((size_t)1ULL);
v___x_4273_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_4274_ = lean_usize_land(v_x_4266_, v___x_4273_);
v_j_4275_ = lean_usize_to_nat(v___x_4274_);
v___x_4276_ = lean_array_get_size(v_es_4270_);
v___x_4277_ = lean_nat_dec_lt(v_j_4275_, v___x_4276_);
if (v___x_4277_ == 0)
{
lean_dec(v_j_4275_);
lean_dec(v_x_4269_);
lean_dec(v_x_4268_);
return v_x_4265_;
}
else
{
lean_object* v___x_4279_; uint8_t v_isShared_4280_; uint8_t v_isSharedCheck_4314_; 
lean_inc_ref(v_es_4270_);
v_isSharedCheck_4314_ = !lean_is_exclusive(v_x_4265_);
if (v_isSharedCheck_4314_ == 0)
{
lean_object* v_unused_4315_; 
v_unused_4315_ = lean_ctor_get(v_x_4265_, 0);
lean_dec(v_unused_4315_);
v___x_4279_ = v_x_4265_;
v_isShared_4280_ = v_isSharedCheck_4314_;
goto v_resetjp_4278_;
}
else
{
lean_dec(v_x_4265_);
v___x_4279_ = lean_box(0);
v_isShared_4280_ = v_isSharedCheck_4314_;
goto v_resetjp_4278_;
}
v_resetjp_4278_:
{
lean_object* v_v_4281_; lean_object* v___x_4282_; lean_object* v_xs_x27_4283_; lean_object* v___y_4285_; 
v_v_4281_ = lean_array_fget(v_es_4270_, v_j_4275_);
v___x_4282_ = lean_box(0);
v_xs_x27_4283_ = lean_array_fset(v_es_4270_, v_j_4275_, v___x_4282_);
switch(lean_obj_tag(v_v_4281_))
{
case 0:
{
lean_object* v_key_4290_; lean_object* v_val_4291_; lean_object* v___x_4293_; uint8_t v_isShared_4294_; uint8_t v_isSharedCheck_4301_; 
v_key_4290_ = lean_ctor_get(v_v_4281_, 0);
v_val_4291_ = lean_ctor_get(v_v_4281_, 1);
v_isSharedCheck_4301_ = !lean_is_exclusive(v_v_4281_);
if (v_isSharedCheck_4301_ == 0)
{
v___x_4293_ = v_v_4281_;
v_isShared_4294_ = v_isSharedCheck_4301_;
goto v_resetjp_4292_;
}
else
{
lean_inc(v_val_4291_);
lean_inc(v_key_4290_);
lean_dec(v_v_4281_);
v___x_4293_ = lean_box(0);
v_isShared_4294_ = v_isSharedCheck_4301_;
goto v_resetjp_4292_;
}
v_resetjp_4292_:
{
uint8_t v___x_4295_; 
v___x_4295_ = l_Lean_instBEqMVarId_beq(v_x_4268_, v_key_4290_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; lean_object* v___x_4297_; 
lean_del_object(v___x_4293_);
v___x_4296_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_4290_, v_val_4291_, v_x_4268_, v_x_4269_);
v___x_4297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4297_, 0, v___x_4296_);
v___y_4285_ = v___x_4297_;
goto v___jp_4284_;
}
else
{
lean_object* v___x_4299_; 
lean_dec(v_val_4291_);
lean_dec(v_key_4290_);
if (v_isShared_4294_ == 0)
{
lean_ctor_set(v___x_4293_, 1, v_x_4269_);
lean_ctor_set(v___x_4293_, 0, v_x_4268_);
v___x_4299_ = v___x_4293_;
goto v_reusejp_4298_;
}
else
{
lean_object* v_reuseFailAlloc_4300_; 
v_reuseFailAlloc_4300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4300_, 0, v_x_4268_);
lean_ctor_set(v_reuseFailAlloc_4300_, 1, v_x_4269_);
v___x_4299_ = v_reuseFailAlloc_4300_;
goto v_reusejp_4298_;
}
v_reusejp_4298_:
{
v___y_4285_ = v___x_4299_;
goto v___jp_4284_;
}
}
}
}
case 1:
{
lean_object* v_node_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4312_; 
v_node_4302_ = lean_ctor_get(v_v_4281_, 0);
v_isSharedCheck_4312_ = !lean_is_exclusive(v_v_4281_);
if (v_isSharedCheck_4312_ == 0)
{
v___x_4304_ = v_v_4281_;
v_isShared_4305_ = v_isSharedCheck_4312_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_node_4302_);
lean_dec(v_v_4281_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4312_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
size_t v___x_4306_; size_t v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4310_; 
v___x_4306_ = lean_usize_shift_right(v_x_4266_, v___x_4271_);
v___x_4307_ = lean_usize_add(v_x_4267_, v___x_4272_);
v___x_4308_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_node_4302_, v___x_4306_, v___x_4307_, v_x_4268_, v_x_4269_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set(v___x_4304_, 0, v___x_4308_);
v___x_4310_ = v___x_4304_;
goto v_reusejp_4309_;
}
else
{
lean_object* v_reuseFailAlloc_4311_; 
v_reuseFailAlloc_4311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4311_, 0, v___x_4308_);
v___x_4310_ = v_reuseFailAlloc_4311_;
goto v_reusejp_4309_;
}
v_reusejp_4309_:
{
v___y_4285_ = v___x_4310_;
goto v___jp_4284_;
}
}
}
default: 
{
lean_object* v___x_4313_; 
v___x_4313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4313_, 0, v_x_4268_);
lean_ctor_set(v___x_4313_, 1, v_x_4269_);
v___y_4285_ = v___x_4313_;
goto v___jp_4284_;
}
}
v___jp_4284_:
{
lean_object* v___x_4286_; lean_object* v___x_4288_; 
v___x_4286_ = lean_array_fset(v_xs_x27_4283_, v_j_4275_, v___y_4285_);
lean_dec(v_j_4275_);
if (v_isShared_4280_ == 0)
{
lean_ctor_set(v___x_4279_, 0, v___x_4286_);
v___x_4288_ = v___x_4279_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v___x_4286_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
}
else
{
lean_object* v_ks_4316_; lean_object* v_vs_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4337_; 
v_ks_4316_ = lean_ctor_get(v_x_4265_, 0);
v_vs_4317_ = lean_ctor_get(v_x_4265_, 1);
v_isSharedCheck_4337_ = !lean_is_exclusive(v_x_4265_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4319_ = v_x_4265_;
v_isShared_4320_ = v_isSharedCheck_4337_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_vs_4317_);
lean_inc(v_ks_4316_);
lean_dec(v_x_4265_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4337_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4322_; 
if (v_isShared_4320_ == 0)
{
v___x_4322_ = v___x_4319_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4336_; 
v_reuseFailAlloc_4336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4336_, 0, v_ks_4316_);
lean_ctor_set(v_reuseFailAlloc_4336_, 1, v_vs_4317_);
v___x_4322_ = v_reuseFailAlloc_4336_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
lean_object* v_newNode_4323_; uint8_t v___y_4325_; size_t v___x_4331_; uint8_t v___x_4332_; 
v_newNode_4323_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v___x_4322_, v_x_4268_, v_x_4269_);
v___x_4331_ = ((size_t)7ULL);
v___x_4332_ = lean_usize_dec_le(v___x_4331_, v_x_4267_);
if (v___x_4332_ == 0)
{
lean_object* v___x_4333_; lean_object* v___x_4334_; uint8_t v___x_4335_; 
v___x_4333_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_4323_);
v___x_4334_ = lean_unsigned_to_nat(4u);
v___x_4335_ = lean_nat_dec_lt(v___x_4333_, v___x_4334_);
lean_dec(v___x_4333_);
v___y_4325_ = v___x_4335_;
goto v___jp_4324_;
}
else
{
v___y_4325_ = v___x_4332_;
goto v___jp_4324_;
}
v___jp_4324_:
{
if (v___y_4325_ == 0)
{
lean_object* v_ks_4326_; lean_object* v_vs_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; 
v_ks_4326_ = lean_ctor_get(v_newNode_4323_, 0);
lean_inc_ref(v_ks_4326_);
v_vs_4327_ = lean_ctor_get(v_newNode_4323_, 1);
lean_inc_ref(v_vs_4327_);
lean_dec_ref(v_newNode_4323_);
v___x_4328_ = lean_unsigned_to_nat(0u);
v___x_4329_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_4330_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_x_4267_, v_ks_4326_, v_vs_4327_, v___x_4328_, v___x_4329_);
lean_dec_ref(v_vs_4327_);
lean_dec_ref(v_ks_4326_);
return v___x_4330_;
}
else
{
return v_newNode_4323_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(size_t v_depth_4338_, lean_object* v_keys_4339_, lean_object* v_vals_4340_, lean_object* v_i_4341_, lean_object* v_entries_4342_){
_start:
{
lean_object* v___x_4343_; uint8_t v___x_4344_; 
v___x_4343_ = lean_array_get_size(v_keys_4339_);
v___x_4344_ = lean_nat_dec_lt(v_i_4341_, v___x_4343_);
if (v___x_4344_ == 0)
{
lean_dec(v_i_4341_);
return v_entries_4342_;
}
else
{
lean_object* v_k_4345_; lean_object* v_v_4346_; uint64_t v___x_4347_; size_t v_h_4348_; size_t v___x_4349_; lean_object* v___x_4350_; size_t v___x_4351_; size_t v___x_4352_; size_t v___x_4353_; size_t v_h_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; 
v_k_4345_ = lean_array_fget_borrowed(v_keys_4339_, v_i_4341_);
v_v_4346_ = lean_array_fget_borrowed(v_vals_4340_, v_i_4341_);
v___x_4347_ = l_Lean_instHashableMVarId_hash(v_k_4345_);
v_h_4348_ = lean_uint64_to_usize(v___x_4347_);
v___x_4349_ = ((size_t)5ULL);
v___x_4350_ = lean_unsigned_to_nat(1u);
v___x_4351_ = ((size_t)1ULL);
v___x_4352_ = lean_usize_sub(v_depth_4338_, v___x_4351_);
v___x_4353_ = lean_usize_mul(v___x_4349_, v___x_4352_);
v_h_4354_ = lean_usize_shift_right(v_h_4348_, v___x_4353_);
v___x_4355_ = lean_nat_add(v_i_4341_, v___x_4350_);
lean_dec(v_i_4341_);
lean_inc(v_v_4346_);
lean_inc(v_k_4345_);
v___x_4356_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_entries_4342_, v_h_4354_, v_depth_4338_, v_k_4345_, v_v_4346_);
v_i_4341_ = v___x_4355_;
v_entries_4342_ = v___x_4356_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_depth_4358_, lean_object* v_keys_4359_, lean_object* v_vals_4360_, lean_object* v_i_4361_, lean_object* v_entries_4362_){
_start:
{
size_t v_depth_boxed_4363_; lean_object* v_res_4364_; 
v_depth_boxed_4363_ = lean_unbox_usize(v_depth_4358_);
lean_dec(v_depth_4358_);
v_res_4364_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_boxed_4363_, v_keys_4359_, v_vals_4360_, v_i_4361_, v_entries_4362_);
lean_dec_ref(v_vals_4360_);
lean_dec_ref(v_keys_4359_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_4365_, lean_object* v_x_4366_, lean_object* v_x_4367_, lean_object* v_x_4368_, lean_object* v_x_4369_){
_start:
{
size_t v_x_4275__boxed_4370_; size_t v_x_4276__boxed_4371_; lean_object* v_res_4372_; 
v_x_4275__boxed_4370_ = lean_unbox_usize(v_x_4366_);
lean_dec(v_x_4366_);
v_x_4276__boxed_4371_ = lean_unbox_usize(v_x_4367_);
lean_dec(v_x_4367_);
v_res_4372_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4365_, v_x_4275__boxed_4370_, v_x_4276__boxed_4371_, v_x_4368_, v_x_4369_);
return v_res_4372_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(lean_object* v_x_4373_, lean_object* v_x_4374_, lean_object* v_x_4375_){
_start:
{
uint64_t v___x_4376_; size_t v___x_4377_; size_t v___x_4378_; lean_object* v___x_4379_; 
v___x_4376_ = l_Lean_instHashableMVarId_hash(v_x_4374_);
v___x_4377_ = lean_uint64_to_usize(v___x_4376_);
v___x_4378_ = ((size_t)1ULL);
v___x_4379_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4373_, v___x_4377_, v___x_4378_, v_x_4374_, v_x_4375_);
return v___x_4379_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(lean_object* v_mvarId_4380_, lean_object* v_val_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_){
_start:
{
lean_object* v___x_4385_; lean_object* v___x_4386_; lean_object* v_mctx_4387_; lean_object* v_cache_4388_; lean_object* v_zetaDeltaFVarIds_4389_; lean_object* v_postponed_4390_; lean_object* v_diag_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4419_; 
v___x_4385_ = lean_st_ref_get(v___y_4383_);
lean_dec(v___x_4385_);
v___x_4386_ = lean_st_ref_take(v___y_4382_);
v_mctx_4387_ = lean_ctor_get(v___x_4386_, 0);
v_cache_4388_ = lean_ctor_get(v___x_4386_, 1);
v_zetaDeltaFVarIds_4389_ = lean_ctor_get(v___x_4386_, 2);
v_postponed_4390_ = lean_ctor_get(v___x_4386_, 3);
v_diag_4391_ = lean_ctor_get(v___x_4386_, 4);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4386_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4393_ = v___x_4386_;
v_isShared_4394_ = v_isSharedCheck_4419_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_diag_4391_);
lean_inc(v_postponed_4390_);
lean_inc(v_zetaDeltaFVarIds_4389_);
lean_inc(v_cache_4388_);
lean_inc(v_mctx_4387_);
lean_dec(v___x_4386_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4419_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v_depth_4395_; lean_object* v_levelAssignDepth_4396_; lean_object* v_lmvarCounter_4397_; lean_object* v_mvarCounter_4398_; lean_object* v_lDecls_4399_; lean_object* v_decls_4400_; lean_object* v_userNames_4401_; lean_object* v_lAssignment_4402_; lean_object* v_eAssignment_4403_; lean_object* v_dAssignment_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4418_; 
v_depth_4395_ = lean_ctor_get(v_mctx_4387_, 0);
v_levelAssignDepth_4396_ = lean_ctor_get(v_mctx_4387_, 1);
v_lmvarCounter_4397_ = lean_ctor_get(v_mctx_4387_, 2);
v_mvarCounter_4398_ = lean_ctor_get(v_mctx_4387_, 3);
v_lDecls_4399_ = lean_ctor_get(v_mctx_4387_, 4);
v_decls_4400_ = lean_ctor_get(v_mctx_4387_, 5);
v_userNames_4401_ = lean_ctor_get(v_mctx_4387_, 6);
v_lAssignment_4402_ = lean_ctor_get(v_mctx_4387_, 7);
v_eAssignment_4403_ = lean_ctor_get(v_mctx_4387_, 8);
v_dAssignment_4404_ = lean_ctor_get(v_mctx_4387_, 9);
v_isSharedCheck_4418_ = !lean_is_exclusive(v_mctx_4387_);
if (v_isSharedCheck_4418_ == 0)
{
v___x_4406_ = v_mctx_4387_;
v_isShared_4407_ = v_isSharedCheck_4418_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_dAssignment_4404_);
lean_inc(v_eAssignment_4403_);
lean_inc(v_lAssignment_4402_);
lean_inc(v_userNames_4401_);
lean_inc(v_decls_4400_);
lean_inc(v_lDecls_4399_);
lean_inc(v_mvarCounter_4398_);
lean_inc(v_lmvarCounter_4397_);
lean_inc(v_levelAssignDepth_4396_);
lean_inc(v_depth_4395_);
lean_dec(v_mctx_4387_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4418_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4408_; lean_object* v___x_4410_; 
v___x_4408_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_eAssignment_4403_, v_mvarId_4380_, v_val_4381_);
if (v_isShared_4407_ == 0)
{
lean_ctor_set(v___x_4406_, 8, v___x_4408_);
v___x_4410_ = v___x_4406_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4417_; 
v_reuseFailAlloc_4417_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4417_, 0, v_depth_4395_);
lean_ctor_set(v_reuseFailAlloc_4417_, 1, v_levelAssignDepth_4396_);
lean_ctor_set(v_reuseFailAlloc_4417_, 2, v_lmvarCounter_4397_);
lean_ctor_set(v_reuseFailAlloc_4417_, 3, v_mvarCounter_4398_);
lean_ctor_set(v_reuseFailAlloc_4417_, 4, v_lDecls_4399_);
lean_ctor_set(v_reuseFailAlloc_4417_, 5, v_decls_4400_);
lean_ctor_set(v_reuseFailAlloc_4417_, 6, v_userNames_4401_);
lean_ctor_set(v_reuseFailAlloc_4417_, 7, v_lAssignment_4402_);
lean_ctor_set(v_reuseFailAlloc_4417_, 8, v___x_4408_);
lean_ctor_set(v_reuseFailAlloc_4417_, 9, v_dAssignment_4404_);
v___x_4410_ = v_reuseFailAlloc_4417_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
lean_object* v___x_4412_; 
if (v_isShared_4394_ == 0)
{
lean_ctor_set(v___x_4393_, 0, v___x_4410_);
v___x_4412_ = v___x_4393_;
goto v_reusejp_4411_;
}
else
{
lean_object* v_reuseFailAlloc_4416_; 
v_reuseFailAlloc_4416_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4416_, 0, v___x_4410_);
lean_ctor_set(v_reuseFailAlloc_4416_, 1, v_cache_4388_);
lean_ctor_set(v_reuseFailAlloc_4416_, 2, v_zetaDeltaFVarIds_4389_);
lean_ctor_set(v_reuseFailAlloc_4416_, 3, v_postponed_4390_);
lean_ctor_set(v_reuseFailAlloc_4416_, 4, v_diag_4391_);
v___x_4412_ = v_reuseFailAlloc_4416_;
goto v_reusejp_4411_;
}
v_reusejp_4411_:
{
lean_object* v___x_4413_; lean_object* v___x_4414_; lean_object* v___x_4415_; 
v___x_4413_ = lean_st_ref_set(v___y_4382_, v___x_4412_);
v___x_4414_ = lean_box(0);
v___x_4415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4415_, 0, v___x_4414_);
return v___x_4415_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg___boxed(lean_object* v_mvarId_4420_, lean_object* v_val_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_){
_start:
{
lean_object* v_res_4425_; 
v_res_4425_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4420_, v_val_4421_, v___y_4422_, v___y_4423_);
lean_dec(v___y_4423_);
lean_dec(v___y_4422_);
return v_res_4425_;
}
}
static lean_object* _init_l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0(void){
_start:
{
uint8_t v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; 
v___x_4426_ = 1;
v___x_4427_ = lean_box(v___x_4426_);
v___x_4428_ = lean_box(v___x_4426_);
v___x_4429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4429_, 0, v___x_4427_);
lean_ctor_set(v___x_4429_, 1, v___x_4428_);
return v___x_4429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0(lean_object* v_mv_u2081_4430_, lean_object* v_mv_u2082_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4440_; 
lean_inc(v_mv_u2081_4430_);
v___x_4440_ = l_Lean_MVarId_getDecl(v_mv_u2081_4430_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; lean_object* v___x_4442_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
lean_inc(v_a_4441_);
lean_dec_ref(v___x_4440_);
lean_inc(v_mv_u2082_4431_);
v___x_4442_ = l_Lean_MVarId_getDecl(v_mv_u2082_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
if (lean_obj_tag(v___x_4442_) == 0)
{
lean_object* v_a_4443_; lean_object* v_lctx_4444_; lean_object* v_type_4445_; lean_object* v_lctx_4446_; lean_object* v_type_4447_; uint8_t v___x_4448_; 
v_a_4443_ = lean_ctor_get(v___x_4442_, 0);
lean_inc(v_a_4443_);
lean_dec_ref(v___x_4442_);
v_lctx_4444_ = lean_ctor_get(v_a_4441_, 1);
lean_inc_ref(v_lctx_4444_);
v_type_4445_ = lean_ctor_get(v_a_4441_, 2);
lean_inc_ref(v_type_4445_);
lean_dec(v_a_4441_);
v_lctx_4446_ = lean_ctor_get(v_a_4443_, 1);
lean_inc_ref(v_lctx_4446_);
v_type_4447_ = lean_ctor_get(v_a_4443_, 2);
lean_inc_ref(v_type_4447_);
lean_dec(v_a_4443_);
v___x_4448_ = lean_expr_eqv(v_type_4445_, v_type_4447_);
lean_dec_ref(v_type_4447_);
lean_dec_ref(v_type_4445_);
if (v___x_4448_ == 0)
{
lean_dec_ref(v_lctx_4446_);
lean_dec_ref(v_lctx_4444_);
lean_dec(v_mv_u2082_4431_);
lean_dec(v_mv_u2081_4430_);
goto v___jp_4437_;
}
else
{
lean_object* v___x_4449_; uint8_t v___x_4450_; 
v___x_4449_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_processRec___closed__0);
v___x_4450_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4444_, v_lctx_4446_, v___x_4449_);
if (v___x_4450_ == 0)
{
uint8_t v___x_4451_; 
v___x_4451_ = l_Lean_LocalContext_isSubPrefixOf(v_lctx_4446_, v_lctx_4444_, v___x_4449_);
lean_dec_ref(v_lctx_4444_);
lean_dec_ref(v_lctx_4446_);
if (v___x_4451_ == 0)
{
lean_dec(v_mv_u2082_4431_);
lean_dec(v_mv_u2081_4430_);
goto v___jp_4437_;
}
else
{
lean_object* v___x_4452_; lean_object* v___x_4453_; lean_object* v___x_4455_; uint8_t v_isShared_4456_; uint8_t v_isSharedCheck_4463_; 
v___x_4452_ = l_Lean_Expr_mvar___override(v_mv_u2082_4431_);
v___x_4453_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2081_4430_, v___x_4452_, v___y_4433_, v___y_4435_);
v_isSharedCheck_4463_ = !lean_is_exclusive(v___x_4453_);
if (v_isSharedCheck_4463_ == 0)
{
lean_object* v_unused_4464_; 
v_unused_4464_ = lean_ctor_get(v___x_4453_, 0);
lean_dec(v_unused_4464_);
v___x_4455_ = v___x_4453_;
v_isShared_4456_ = v_isSharedCheck_4463_;
goto v_resetjp_4454_;
}
else
{
lean_dec(v___x_4453_);
v___x_4455_ = lean_box(0);
v_isShared_4456_ = v_isSharedCheck_4463_;
goto v_resetjp_4454_;
}
v_resetjp_4454_:
{
lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4461_; 
v___x_4457_ = lean_box(v___x_4450_);
v___x_4458_ = lean_box(v___x_4448_);
v___x_4459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4459_, 0, v___x_4457_);
lean_ctor_set(v___x_4459_, 1, v___x_4458_);
if (v_isShared_4456_ == 0)
{
lean_ctor_set(v___x_4455_, 0, v___x_4459_);
v___x_4461_ = v___x_4455_;
goto v_reusejp_4460_;
}
else
{
lean_object* v_reuseFailAlloc_4462_; 
v_reuseFailAlloc_4462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4462_, 0, v___x_4459_);
v___x_4461_ = v_reuseFailAlloc_4462_;
goto v_reusejp_4460_;
}
v_reusejp_4460_:
{
return v___x_4461_;
}
}
}
}
else
{
lean_object* v___x_4465_; lean_object* v___x_4466_; lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4477_; 
lean_dec_ref(v_lctx_4446_);
lean_dec_ref(v_lctx_4444_);
v___x_4465_ = l_Lean_Expr_mvar___override(v_mv_u2081_4430_);
v___x_4466_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mv_u2082_4431_, v___x_4465_, v___y_4433_, v___y_4435_);
v_isSharedCheck_4477_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4477_ == 0)
{
lean_object* v_unused_4478_; 
v_unused_4478_ = lean_ctor_get(v___x_4466_, 0);
lean_dec(v_unused_4478_);
v___x_4468_ = v___x_4466_;
v_isShared_4469_ = v_isSharedCheck_4477_;
goto v_resetjp_4467_;
}
else
{
lean_dec(v___x_4466_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4477_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
uint8_t v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4475_; 
v___x_4470_ = 0;
v___x_4471_ = lean_box(v___x_4448_);
v___x_4472_ = lean_box(v___x_4470_);
v___x_4473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4473_, 0, v___x_4471_);
lean_ctor_set(v___x_4473_, 1, v___x_4472_);
if (v_isShared_4469_ == 0)
{
lean_ctor_set(v___x_4468_, 0, v___x_4473_);
v___x_4475_ = v___x_4468_;
goto v_reusejp_4474_;
}
else
{
lean_object* v_reuseFailAlloc_4476_; 
v_reuseFailAlloc_4476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4476_, 0, v___x_4473_);
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
else
{
lean_object* v_a_4479_; lean_object* v___x_4481_; uint8_t v_isShared_4482_; uint8_t v_isSharedCheck_4486_; 
lean_dec(v_a_4441_);
lean_dec(v_mv_u2082_4431_);
lean_dec(v_mv_u2081_4430_);
v_a_4479_ = lean_ctor_get(v___x_4442_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v___x_4442_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4481_ = v___x_4442_;
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
else
{
lean_inc(v_a_4479_);
lean_dec(v___x_4442_);
v___x_4481_ = lean_box(0);
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
v_resetjp_4480_:
{
lean_object* v___x_4484_; 
if (v_isShared_4482_ == 0)
{
v___x_4484_ = v___x_4481_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_a_4479_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
}
}
else
{
lean_object* v_a_4487_; lean_object* v___x_4489_; uint8_t v_isShared_4490_; uint8_t v_isSharedCheck_4494_; 
lean_dec(v_mv_u2082_4431_);
lean_dec(v_mv_u2081_4430_);
v_a_4487_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4494_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4494_ == 0)
{
v___x_4489_ = v___x_4440_;
v_isShared_4490_ = v_isSharedCheck_4494_;
goto v_resetjp_4488_;
}
else
{
lean_inc(v_a_4487_);
lean_dec(v___x_4440_);
v___x_4489_ = lean_box(0);
v_isShared_4490_ = v_isSharedCheck_4494_;
goto v_resetjp_4488_;
}
v_resetjp_4488_:
{
lean_object* v___x_4492_; 
if (v_isShared_4490_ == 0)
{
v___x_4492_ = v___x_4489_;
goto v_reusejp_4491_;
}
else
{
lean_object* v_reuseFailAlloc_4493_; 
v_reuseFailAlloc_4493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4493_, 0, v_a_4487_);
v___x_4492_ = v_reuseFailAlloc_4493_;
goto v_reusejp_4491_;
}
v_reusejp_4491_:
{
return v___x_4492_;
}
}
}
v___jp_4437_:
{
lean_object* v___x_4438_; lean_object* v___x_4439_; 
v___x_4438_ = lean_obj_once(&l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0, &l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0_once, _init_l_Lean_Elab_WF_assignSubsumed___lam__0___closed__0);
v___x_4439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4439_, 0, v___x_4438_);
return v___x_4439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___lam__0___boxed(lean_object* v_mv_u2081_4495_, lean_object* v_mv_u2082_4496_, lean_object* v___y_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_){
_start:
{
lean_object* v_res_4502_; 
v_res_4502_ = l_Lean_Elab_WF_assignSubsumed___lam__0(v_mv_u2081_4495_, v_mv_u2082_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_);
lean_dec(v___y_4500_);
lean_dec_ref(v___y_4499_);
lean_dec(v___y_4498_);
lean_dec_ref(v___y_4497_);
return v_res_4502_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(lean_object* v___x_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_){
_start:
{
lean_object* v___x_4509_; 
v___x_4509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4509_, 0, v___x_4503_);
return v___x_4509_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed(lean_object* v___x_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_, lean_object* v___y_4513_, lean_object* v___y_4514_, lean_object* v___y_4515_){
_start:
{
lean_object* v_res_4516_; 
v_res_4516_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1(v___x_4510_, v___y_4511_, v___y_4512_, v___y_4513_, v___y_4514_);
lean_dec(v___y_4514_);
lean_dec_ref(v___y_4513_);
lean_dec(v___y_4512_);
lean_dec_ref(v___y_4511_);
return v_res_4516_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(lean_object* v_f_4517_, lean_object* v___x_4518_, lean_object* v___x_4519_, lean_object* v___x_4520_, lean_object* v_a_4521_, uint8_t v___x_4522_, lean_object* v_snd_4523_, lean_object* v_fst_4524_, lean_object* v_next_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_){
_start:
{
lean_object* v___x_4531_; 
v___x_4531_ = lean_apply_7(v_f_4517_, v___x_4518_, v___x_4519_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_, lean_box(0));
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v_a_4532_; lean_object* v___x_4534_; uint8_t v_isShared_4535_; uint8_t v_isSharedCheck_4567_; 
v_a_4532_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4567_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4567_ == 0)
{
v___x_4534_ = v___x_4531_;
v_isShared_4535_ = v_isSharedCheck_4567_;
goto v_resetjp_4533_;
}
else
{
lean_inc(v_a_4532_);
lean_dec(v___x_4531_);
v___x_4534_ = lean_box(0);
v_isShared_4535_ = v_isSharedCheck_4567_;
goto v_resetjp_4533_;
}
v_resetjp_4533_:
{
lean_object* v_fst_4536_; lean_object* v_snd_4537_; lean_object* v___x_4539_; uint8_t v_isShared_4540_; uint8_t v_isSharedCheck_4566_; 
v_fst_4536_ = lean_ctor_get(v_a_4532_, 0);
v_snd_4537_ = lean_ctor_get(v_a_4532_, 1);
v_isSharedCheck_4566_ = !lean_is_exclusive(v_a_4532_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4539_ = v_a_4532_;
v_isShared_4540_ = v_isSharedCheck_4566_;
goto v_resetjp_4538_;
}
else
{
lean_inc(v_snd_4537_);
lean_inc(v_fst_4536_);
lean_dec(v_a_4532_);
v___x_4539_ = lean_box(0);
v_isShared_4540_ = v_isSharedCheck_4566_;
goto v_resetjp_4538_;
}
v_resetjp_4538_:
{
lean_object* v_removed_4542_; lean_object* v_numRemoved_4543_; uint8_t v___x_4562_; 
v___x_4562_ = lean_unbox(v_fst_4536_);
lean_dec(v_fst_4536_);
if (v___x_4562_ == 0)
{
lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4563_ = lean_nat_add(v_snd_4523_, v___x_4520_);
lean_dec(v_snd_4523_);
v___x_4564_ = lean_box(v___x_4522_);
v___x_4565_ = lean_array_set(v_fst_4524_, v_next_4525_, v___x_4564_);
v_removed_4542_ = v___x_4565_;
v_numRemoved_4543_ = v___x_4563_;
goto v___jp_4541_;
}
else
{
v_removed_4542_ = v_fst_4524_;
v_numRemoved_4543_ = v_snd_4523_;
goto v___jp_4541_;
}
v___jp_4541_:
{
uint8_t v___x_4544_; 
v___x_4544_ = lean_unbox(v_snd_4537_);
lean_dec(v_snd_4537_);
if (v___x_4544_ == 0)
{
lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4549_; 
v___x_4545_ = lean_nat_add(v_numRemoved_4543_, v___x_4520_);
lean_dec(v_numRemoved_4543_);
v___x_4546_ = lean_box(v___x_4522_);
v___x_4547_ = lean_array_set(v_removed_4542_, v_a_4521_, v___x_4546_);
if (v_isShared_4540_ == 0)
{
lean_ctor_set(v___x_4539_, 1, v___x_4545_);
lean_ctor_set(v___x_4539_, 0, v___x_4547_);
v___x_4549_ = v___x_4539_;
goto v_reusejp_4548_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v___x_4547_);
lean_ctor_set(v_reuseFailAlloc_4554_, 1, v___x_4545_);
v___x_4549_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4548_;
}
v_reusejp_4548_:
{
lean_object* v___x_4550_; lean_object* v___x_4552_; 
v___x_4550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4549_);
if (v_isShared_4535_ == 0)
{
lean_ctor_set(v___x_4534_, 0, v___x_4550_);
v___x_4552_ = v___x_4534_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v___x_4550_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
return v___x_4552_;
}
}
}
else
{
lean_object* v___x_4556_; 
if (v_isShared_4540_ == 0)
{
lean_ctor_set(v___x_4539_, 1, v_numRemoved_4543_);
lean_ctor_set(v___x_4539_, 0, v_removed_4542_);
v___x_4556_ = v___x_4539_;
goto v_reusejp_4555_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v_removed_4542_);
lean_ctor_set(v_reuseFailAlloc_4561_, 1, v_numRemoved_4543_);
v___x_4556_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4555_;
}
v_reusejp_4555_:
{
lean_object* v___x_4557_; lean_object* v___x_4559_; 
v___x_4557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4557_, 0, v___x_4556_);
if (v_isShared_4535_ == 0)
{
lean_ctor_set(v___x_4534_, 0, v___x_4557_);
v___x_4559_ = v___x_4534_;
goto v_reusejp_4558_;
}
else
{
lean_object* v_reuseFailAlloc_4560_; 
v_reuseFailAlloc_4560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4560_, 0, v___x_4557_);
v___x_4559_ = v_reuseFailAlloc_4560_;
goto v_reusejp_4558_;
}
v_reusejp_4558_:
{
return v___x_4559_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4575_; 
lean_dec(v_fst_4524_);
lean_dec(v_snd_4523_);
v_a_4568_ = lean_ctor_get(v___x_4531_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v___x_4531_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4570_ = v___x_4531_;
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_a_4568_);
lean_dec(v___x_4531_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4575_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v___x_4573_; 
if (v_isShared_4571_ == 0)
{
v___x_4573_ = v___x_4570_;
goto v_reusejp_4572_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_a_4568_);
v___x_4573_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4572_;
}
v_reusejp_4572_:
{
return v___x_4573_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_f_4576_, lean_object* v___x_4577_, lean_object* v___x_4578_, lean_object* v___x_4579_, lean_object* v_a_4580_, lean_object* v___x_4581_, lean_object* v_snd_4582_, lean_object* v_fst_4583_, lean_object* v_next_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_){
_start:
{
uint8_t v___x_4663__boxed_4590_; lean_object* v_res_4591_; 
v___x_4663__boxed_4590_ = lean_unbox(v___x_4581_);
v_res_4591_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0(v_f_4576_, v___x_4577_, v___x_4578_, v___x_4579_, v_a_4580_, v___x_4663__boxed_4590_, v_snd_4582_, v_fst_4583_, v_next_4584_, v___y_4585_, v___y_4586_, v___y_4587_, v___y_4588_);
lean_dec(v_next_4584_);
lean_dec(v_a_4580_);
lean_dec(v___x_4579_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(lean_object* v_upperBound_4592_, lean_object* v_a_4593_, lean_object* v_next_4594_, lean_object* v_f_4595_, lean_object* v_a_4596_, lean_object* v_b_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_){
_start:
{
uint8_t v___x_4603_; 
v___x_4603_ = lean_nat_dec_lt(v_a_4596_, v_upperBound_4592_);
if (v___x_4603_ == 0)
{
lean_object* v___x_4604_; 
lean_dec(v_a_4596_);
lean_dec_ref(v_f_4595_);
lean_dec(v_next_4594_);
v___x_4604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4604_, 0, v_b_4597_);
return v___x_4604_;
}
else
{
lean_object* v_fst_4605_; lean_object* v_snd_4606_; lean_object* v___x_4608_; uint8_t v_isShared_4609_; uint8_t v_isSharedCheck_4653_; 
v_fst_4605_ = lean_ctor_get(v_b_4597_, 0);
v_snd_4606_ = lean_ctor_get(v_b_4597_, 1);
v_isSharedCheck_4653_ = !lean_is_exclusive(v_b_4597_);
if (v_isSharedCheck_4653_ == 0)
{
v___x_4608_ = v_b_4597_;
v_isShared_4609_ = v_isSharedCheck_4653_;
goto v_resetjp_4607_;
}
else
{
lean_inc(v_snd_4606_);
lean_inc(v_fst_4605_);
lean_dec(v_b_4597_);
v___x_4608_ = lean_box(0);
v_isShared_4609_ = v_isSharedCheck_4653_;
goto v_resetjp_4607_;
}
v_resetjp_4607_:
{
lean_object* v___x_4610_; lean_object* v___y_4612_; uint8_t v___y_4635_; uint8_t v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; uint8_t v___x_4648_; 
v___x_4610_ = lean_unsigned_to_nat(1u);
v___x_4645_ = 0;
v___x_4646_ = lean_box(v___x_4645_);
v___x_4647_ = lean_array_get(v___x_4646_, v_fst_4605_, v_next_4594_);
lean_dec(v___x_4646_);
v___x_4648_ = lean_unbox(v___x_4647_);
if (v___x_4648_ == 0)
{
lean_object* v___x_4649_; lean_object* v___x_4650_; uint8_t v___x_4651_; 
lean_dec(v___x_4647_);
v___x_4649_ = lean_box(v___x_4645_);
v___x_4650_ = lean_array_get(v___x_4649_, v_fst_4605_, v_a_4596_);
lean_dec(v___x_4649_);
v___x_4651_ = lean_unbox(v___x_4650_);
lean_dec(v___x_4650_);
v___y_4635_ = v___x_4651_;
goto v___jp_4634_;
}
else
{
uint8_t v___x_4652_; 
v___x_4652_ = lean_unbox(v___x_4647_);
lean_dec(v___x_4647_);
v___y_4635_ = v___x_4652_;
goto v___jp_4634_;
}
v___jp_4611_:
{
lean_object* v___x_4613_; 
lean_inc(v___y_4601_);
lean_inc_ref(v___y_4600_);
lean_inc(v___y_4599_);
lean_inc_ref(v___y_4598_);
v___x_4613_ = lean_apply_5(v___y_4612_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_, lean_box(0));
if (lean_obj_tag(v___x_4613_) == 0)
{
lean_object* v_a_4614_; lean_object* v___x_4616_; uint8_t v_isShared_4617_; uint8_t v_isSharedCheck_4625_; 
v_a_4614_ = lean_ctor_get(v___x_4613_, 0);
v_isSharedCheck_4625_ = !lean_is_exclusive(v___x_4613_);
if (v_isSharedCheck_4625_ == 0)
{
v___x_4616_ = v___x_4613_;
v_isShared_4617_ = v_isSharedCheck_4625_;
goto v_resetjp_4615_;
}
else
{
lean_inc(v_a_4614_);
lean_dec(v___x_4613_);
v___x_4616_ = lean_box(0);
v_isShared_4617_ = v_isSharedCheck_4625_;
goto v_resetjp_4615_;
}
v_resetjp_4615_:
{
if (lean_obj_tag(v_a_4614_) == 0)
{
lean_object* v_a_4618_; lean_object* v___x_4620_; 
lean_dec(v_a_4596_);
lean_dec_ref(v_f_4595_);
lean_dec(v_next_4594_);
v_a_4618_ = lean_ctor_get(v_a_4614_, 0);
lean_inc(v_a_4618_);
lean_dec_ref(v_a_4614_);
if (v_isShared_4617_ == 0)
{
lean_ctor_set(v___x_4616_, 0, v_a_4618_);
v___x_4620_ = v___x_4616_;
goto v_reusejp_4619_;
}
else
{
lean_object* v_reuseFailAlloc_4621_; 
v_reuseFailAlloc_4621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4621_, 0, v_a_4618_);
v___x_4620_ = v_reuseFailAlloc_4621_;
goto v_reusejp_4619_;
}
v_reusejp_4619_:
{
return v___x_4620_;
}
}
else
{
lean_object* v_a_4622_; lean_object* v___x_4623_; 
lean_del_object(v___x_4616_);
v_a_4622_ = lean_ctor_get(v_a_4614_, 0);
lean_inc(v_a_4622_);
lean_dec_ref(v_a_4614_);
v___x_4623_ = lean_nat_add(v_a_4596_, v___x_4610_);
lean_dec(v_a_4596_);
v_a_4596_ = v___x_4623_;
v_b_4597_ = v_a_4622_;
goto _start;
}
}
}
else
{
lean_object* v_a_4626_; lean_object* v___x_4628_; uint8_t v_isShared_4629_; uint8_t v_isSharedCheck_4633_; 
lean_dec(v_a_4596_);
lean_dec_ref(v_f_4595_);
lean_dec(v_next_4594_);
v_a_4626_ = lean_ctor_get(v___x_4613_, 0);
v_isSharedCheck_4633_ = !lean_is_exclusive(v___x_4613_);
if (v_isSharedCheck_4633_ == 0)
{
v___x_4628_ = v___x_4613_;
v_isShared_4629_ = v_isSharedCheck_4633_;
goto v_resetjp_4627_;
}
else
{
lean_inc(v_a_4626_);
lean_dec(v___x_4613_);
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
v___jp_4634_:
{
if (v___y_4635_ == 0)
{
lean_object* v___x_4636_; lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___f_4639_; 
lean_del_object(v___x_4608_);
v___x_4636_ = lean_array_fget_borrowed(v_a_4593_, v_next_4594_);
v___x_4637_ = lean_array_fget_borrowed(v_a_4593_, v_a_4596_);
v___x_4638_ = lean_box(v___x_4603_);
lean_inc(v_next_4594_);
lean_inc(v_a_4596_);
lean_inc(v___x_4637_);
lean_inc(v___x_4636_);
lean_inc_ref(v_f_4595_);
v___f_4639_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_4639_, 0, v_f_4595_);
lean_closure_set(v___f_4639_, 1, v___x_4636_);
lean_closure_set(v___f_4639_, 2, v___x_4637_);
lean_closure_set(v___f_4639_, 3, v___x_4610_);
lean_closure_set(v___f_4639_, 4, v_a_4596_);
lean_closure_set(v___f_4639_, 5, v___x_4638_);
lean_closure_set(v___f_4639_, 6, v_snd_4606_);
lean_closure_set(v___f_4639_, 7, v_fst_4605_);
lean_closure_set(v___f_4639_, 8, v_next_4594_);
v___y_4612_ = v___f_4639_;
goto v___jp_4611_;
}
else
{
lean_object* v___x_4641_; 
if (v_isShared_4609_ == 0)
{
v___x_4641_ = v___x_4608_;
goto v_reusejp_4640_;
}
else
{
lean_object* v_reuseFailAlloc_4644_; 
v_reuseFailAlloc_4644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4644_, 0, v_fst_4605_);
lean_ctor_set(v_reuseFailAlloc_4644_, 1, v_snd_4606_);
v___x_4641_ = v_reuseFailAlloc_4644_;
goto v_reusejp_4640_;
}
v_reusejp_4640_:
{
lean_object* v___x_4642_; lean_object* v___f_4643_; 
v___x_4642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4642_, 0, v___x_4641_);
v___f_4643_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4643_, 0, v___x_4642_);
v___y_4612_ = v___f_4643_;
goto v___jp_4611_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg___boxed(lean_object* v_upperBound_4654_, lean_object* v_a_4655_, lean_object* v_next_4656_, lean_object* v_f_4657_, lean_object* v_a_4658_, lean_object* v_b_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_, lean_object* v___y_4664_){
_start:
{
lean_object* v_res_4665_; 
v_res_4665_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4654_, v_a_4655_, v_next_4656_, v_f_4657_, v_a_4658_, v_b_4659_, v___y_4660_, v___y_4661_, v___y_4662_, v___y_4663_);
lean_dec(v___y_4663_);
lean_dec_ref(v___y_4662_);
lean_dec(v___y_4661_);
lean_dec_ref(v___y_4660_);
lean_dec_ref(v_a_4655_);
lean_dec(v_upperBound_4654_);
return v_res_4665_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(lean_object* v_upperBound_4666_, lean_object* v___x_4667_, lean_object* v_a_4668_, lean_object* v_f_4669_, lean_object* v_a_4670_, lean_object* v_b_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_){
_start:
{
uint8_t v___x_4677_; 
v___x_4677_ = lean_nat_dec_lt(v_a_4670_, v_upperBound_4666_);
if (v___x_4677_ == 0)
{
lean_object* v___x_4678_; 
lean_dec(v_a_4670_);
lean_dec_ref(v_f_4669_);
v___x_4678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4678_, 0, v_b_4671_);
return v___x_4678_;
}
else
{
lean_object* v_fst_4679_; lean_object* v_snd_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4701_; 
v_fst_4679_ = lean_ctor_get(v_b_4671_, 0);
v_snd_4680_ = lean_ctor_get(v_b_4671_, 1);
v_isSharedCheck_4701_ = !lean_is_exclusive(v_b_4671_);
if (v_isSharedCheck_4701_ == 0)
{
v___x_4682_ = v_b_4671_;
v_isShared_4683_ = v_isSharedCheck_4701_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_snd_4680_);
lean_inc(v_fst_4679_);
lean_dec(v_b_4671_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4701_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4687_; 
v___x_4684_ = lean_unsigned_to_nat(1u);
v___x_4685_ = lean_nat_add(v_a_4670_, v___x_4684_);
if (v_isShared_4683_ == 0)
{
v___x_4687_ = v___x_4682_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4700_; 
v_reuseFailAlloc_4700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4700_, 0, v_fst_4679_);
lean_ctor_set(v_reuseFailAlloc_4700_, 1, v_snd_4680_);
v___x_4687_ = v_reuseFailAlloc_4700_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
lean_object* v___x_4688_; 
lean_inc(v___x_4685_);
lean_inc_ref(v_f_4669_);
v___x_4688_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v___x_4667_, v_a_4668_, v_a_4670_, v_f_4669_, v___x_4685_, v___x_4687_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_);
if (lean_obj_tag(v___x_4688_) == 0)
{
lean_object* v_a_4689_; lean_object* v_fst_4690_; lean_object* v_snd_4691_; lean_object* v___x_4693_; uint8_t v_isShared_4694_; uint8_t v_isSharedCheck_4699_; 
v_a_4689_ = lean_ctor_get(v___x_4688_, 0);
lean_inc(v_a_4689_);
lean_dec_ref(v___x_4688_);
v_fst_4690_ = lean_ctor_get(v_a_4689_, 0);
v_snd_4691_ = lean_ctor_get(v_a_4689_, 1);
v_isSharedCheck_4699_ = !lean_is_exclusive(v_a_4689_);
if (v_isSharedCheck_4699_ == 0)
{
v___x_4693_ = v_a_4689_;
v_isShared_4694_ = v_isSharedCheck_4699_;
goto v_resetjp_4692_;
}
else
{
lean_inc(v_snd_4691_);
lean_inc(v_fst_4690_);
lean_dec(v_a_4689_);
v___x_4693_ = lean_box(0);
v_isShared_4694_ = v_isSharedCheck_4699_;
goto v_resetjp_4692_;
}
v_resetjp_4692_:
{
lean_object* v___x_4696_; 
if (v_isShared_4694_ == 0)
{
v___x_4696_ = v___x_4693_;
goto v_reusejp_4695_;
}
else
{
lean_object* v_reuseFailAlloc_4698_; 
v_reuseFailAlloc_4698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4698_, 0, v_fst_4690_);
lean_ctor_set(v_reuseFailAlloc_4698_, 1, v_snd_4691_);
v___x_4696_ = v_reuseFailAlloc_4698_;
goto v_reusejp_4695_;
}
v_reusejp_4695_:
{
v_a_4670_ = v___x_4685_;
v_b_4671_ = v___x_4696_;
goto _start;
}
}
}
else
{
lean_dec(v___x_4685_);
lean_dec_ref(v_f_4669_);
return v___x_4688_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4702_, lean_object* v___x_4703_, lean_object* v_a_4704_, lean_object* v_f_4705_, lean_object* v_a_4706_, lean_object* v_b_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_){
_start:
{
lean_object* v_res_4713_; 
v_res_4713_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4702_, v___x_4703_, v_a_4704_, v_f_4705_, v_a_4706_, v_b_4707_, v___y_4708_, v___y_4709_, v___y_4710_, v___y_4711_);
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
lean_dec(v___y_4709_);
lean_dec_ref(v___y_4708_);
lean_dec_ref(v_a_4704_);
lean_dec(v___x_4703_);
lean_dec(v_upperBound_4702_);
return v_res_4713_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(lean_object* v___x_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_){
_start:
{
lean_object* v___x_4720_; 
v___x_4720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4720_, 0, v___x_4714_);
return v___x_4720_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed(lean_object* v___x_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_){
_start:
{
lean_object* v_res_4727_; 
v_res_4727_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0(v___x_4721_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_);
lean_dec(v___y_4725_);
lean_dec_ref(v___y_4724_);
lean_dec(v___y_4723_);
lean_dec_ref(v___y_4722_);
return v_res_4727_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(lean_object* v_upperBound_4728_, lean_object* v_removed_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_b_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_){
_start:
{
lean_object* v___y_4739_; uint8_t v___x_4762_; 
v___x_4762_ = lean_nat_dec_lt(v_a_4731_, v_upperBound_4728_);
if (v___x_4762_ == 0)
{
lean_object* v___x_4763_; 
lean_dec(v_a_4731_);
v___x_4763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4763_, 0, v_b_4732_);
return v___x_4763_;
}
else
{
uint8_t v___x_4764_; lean_object* v___x_4765_; lean_object* v___x_4766_; uint8_t v___x_4767_; 
v___x_4764_ = 0;
v___x_4765_ = lean_box(v___x_4764_);
v___x_4766_ = lean_array_get(v___x_4765_, v_removed_4729_, v_a_4731_);
lean_dec(v___x_4765_);
v___x_4767_ = lean_unbox(v___x_4766_);
lean_dec(v___x_4766_);
if (v___x_4767_ == 0)
{
lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; lean_object* v___f_4771_; 
v___x_4768_ = lean_array_fget_borrowed(v_a_4730_, v_a_4731_);
lean_inc(v___x_4768_);
v___x_4769_ = lean_array_push(v_b_4732_, v___x_4768_);
v___x_4770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4770_, 0, v___x_4769_);
v___f_4771_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4771_, 0, v___x_4770_);
v___y_4739_ = v___f_4771_;
goto v___jp_4738_;
}
else
{
lean_object* v___x_4772_; lean_object* v___f_4773_; 
v___x_4772_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4772_, 0, v_b_4732_);
v___f_4773_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4773_, 0, v___x_4772_);
v___y_4739_ = v___f_4773_;
goto v___jp_4738_;
}
}
v___jp_4738_:
{
lean_object* v___x_4740_; 
lean_inc(v___y_4736_);
lean_inc_ref(v___y_4735_);
lean_inc(v___y_4734_);
lean_inc_ref(v___y_4733_);
v___x_4740_ = lean_apply_5(v___y_4739_, v___y_4733_, v___y_4734_, v___y_4735_, v___y_4736_, lean_box(0));
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_object* v_a_4741_; lean_object* v___x_4743_; uint8_t v_isShared_4744_; uint8_t v_isSharedCheck_4753_; 
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4753_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4753_ == 0)
{
v___x_4743_ = v___x_4740_;
v_isShared_4744_ = v_isSharedCheck_4753_;
goto v_resetjp_4742_;
}
else
{
lean_inc(v_a_4741_);
lean_dec(v___x_4740_);
v___x_4743_ = lean_box(0);
v_isShared_4744_ = v_isSharedCheck_4753_;
goto v_resetjp_4742_;
}
v_resetjp_4742_:
{
if (lean_obj_tag(v_a_4741_) == 0)
{
lean_object* v_a_4745_; lean_object* v___x_4747_; 
lean_dec(v_a_4731_);
v_a_4745_ = lean_ctor_get(v_a_4741_, 0);
lean_inc(v_a_4745_);
lean_dec_ref(v_a_4741_);
if (v_isShared_4744_ == 0)
{
lean_ctor_set(v___x_4743_, 0, v_a_4745_);
v___x_4747_ = v___x_4743_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4748_; 
v_reuseFailAlloc_4748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4748_, 0, v_a_4745_);
v___x_4747_ = v_reuseFailAlloc_4748_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
return v___x_4747_;
}
}
else
{
lean_object* v_a_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; 
lean_del_object(v___x_4743_);
v_a_4749_ = lean_ctor_get(v_a_4741_, 0);
lean_inc(v_a_4749_);
lean_dec_ref(v_a_4741_);
v___x_4750_ = lean_unsigned_to_nat(1u);
v___x_4751_ = lean_nat_add(v_a_4731_, v___x_4750_);
lean_dec(v_a_4731_);
v_a_4731_ = v___x_4751_;
v_b_4732_ = v_a_4749_;
goto _start;
}
}
}
else
{
lean_object* v_a_4754_; lean_object* v___x_4756_; uint8_t v_isShared_4757_; uint8_t v_isSharedCheck_4761_; 
lean_dec(v_a_4731_);
v_a_4754_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4761_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4761_ == 0)
{
v___x_4756_ = v___x_4740_;
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
else
{
lean_inc(v_a_4754_);
lean_dec(v___x_4740_);
v___x_4756_ = lean_box(0);
v_isShared_4757_ = v_isSharedCheck_4761_;
goto v_resetjp_4755_;
}
v_resetjp_4755_:
{
lean_object* v___x_4759_; 
if (v_isShared_4757_ == 0)
{
v___x_4759_ = v___x_4756_;
goto v_reusejp_4758_;
}
else
{
lean_object* v_reuseFailAlloc_4760_; 
v_reuseFailAlloc_4760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4760_, 0, v_a_4754_);
v___x_4759_ = v_reuseFailAlloc_4760_;
goto v_reusejp_4758_;
}
v_reusejp_4758_:
{
return v___x_4759_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg___boxed(lean_object* v_upperBound_4774_, lean_object* v_removed_4775_, lean_object* v_a_4776_, lean_object* v_a_4777_, lean_object* v_b_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_, lean_object* v___y_4783_){
_start:
{
lean_object* v_res_4784_; 
v_res_4784_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4774_, v_removed_4775_, v_a_4776_, v_a_4777_, v_b_4778_, v___y_4779_, v___y_4780_, v___y_4781_, v___y_4782_);
lean_dec(v___y_4782_);
lean_dec_ref(v___y_4781_);
lean_dec(v___y_4780_);
lean_dec_ref(v___y_4779_);
lean_dec_ref(v_a_4776_);
lean_dec_ref(v_removed_4775_);
lean_dec(v_upperBound_4774_);
return v_res_4784_;
}
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(lean_object* v_a_4785_, lean_object* v_f_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_){
_start:
{
lean_object* v___x_4792_; uint8_t v___x_4793_; lean_object* v___x_4794_; lean_object* v_removed_4795_; lean_object* v_numRemoved_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; 
v___x_4792_ = lean_array_get_size(v_a_4785_);
v___x_4793_ = 0;
v___x_4794_ = lean_box(v___x_4793_);
v_removed_4795_ = lean_mk_array(v___x_4792_, v___x_4794_);
v_numRemoved_4796_ = lean_unsigned_to_nat(0u);
v___x_4797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4797_, 0, v_removed_4795_);
lean_ctor_set(v___x_4797_, 1, v_numRemoved_4796_);
v___x_4798_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v___x_4792_, v___x_4792_, v_a_4785_, v_f_4786_, v_numRemoved_4796_, v___x_4797_, v___y_4787_, v___y_4788_, v___y_4789_, v___y_4790_);
if (lean_obj_tag(v___x_4798_) == 0)
{
lean_object* v_a_4799_; lean_object* v_fst_4800_; lean_object* v_snd_4801_; lean_object* v_a_x27_4802_; lean_object* v___x_4803_; 
v_a_4799_ = lean_ctor_get(v___x_4798_, 0);
lean_inc(v_a_4799_);
lean_dec_ref(v___x_4798_);
v_fst_4800_ = lean_ctor_get(v_a_4799_, 0);
lean_inc(v_fst_4800_);
v_snd_4801_ = lean_ctor_get(v_a_4799_, 1);
lean_inc(v_snd_4801_);
lean_dec(v_a_4799_);
v_a_x27_4802_ = lean_mk_empty_array_with_capacity(v_snd_4801_);
lean_dec(v_snd_4801_);
v___x_4803_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v___x_4792_, v_fst_4800_, v_a_4785_, v_numRemoved_4796_, v_a_x27_4802_, v___y_4787_, v___y_4788_, v___y_4789_, v___y_4790_);
lean_dec(v_fst_4800_);
return v___x_4803_;
}
else
{
lean_object* v_a_4804_; lean_object* v___x_4806_; uint8_t v_isShared_4807_; uint8_t v_isSharedCheck_4811_; 
v_a_4804_ = lean_ctor_get(v___x_4798_, 0);
v_isSharedCheck_4811_ = !lean_is_exclusive(v___x_4798_);
if (v_isSharedCheck_4811_ == 0)
{
v___x_4806_ = v___x_4798_;
v_isShared_4807_ = v_isSharedCheck_4811_;
goto v_resetjp_4805_;
}
else
{
lean_inc(v_a_4804_);
lean_dec(v___x_4798_);
v___x_4806_ = lean_box(0);
v_isShared_4807_ = v_isSharedCheck_4811_;
goto v_resetjp_4805_;
}
v_resetjp_4805_:
{
lean_object* v___x_4809_; 
if (v_isShared_4807_ == 0)
{
v___x_4809_ = v___x_4806_;
goto v_reusejp_4808_;
}
else
{
lean_object* v_reuseFailAlloc_4810_; 
v_reuseFailAlloc_4810_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4810_, 0, v_a_4804_);
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
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg___boxed(lean_object* v_a_4812_, lean_object* v_f_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_, lean_object* v___y_4818_){
_start:
{
lean_object* v_res_4819_; 
v_res_4819_ = l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4812_, v_f_4813_, v___y_4814_, v___y_4815_, v___y_4816_, v___y_4817_);
lean_dec(v___y_4817_);
lean_dec_ref(v___y_4816_);
lean_dec(v___y_4815_);
lean_dec_ref(v___y_4814_);
lean_dec_ref(v_a_4812_);
return v_res_4819_;
}
}
static lean_object* _init_l_Lean_Elab_WF_assignSubsumed___closed__0(void){
_start:
{
lean_object* v___f_4820_; 
v___f_4820_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_assignSubsumed___lam__0___boxed), 7, 0);
return v___f_4820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed(lean_object* v_mvars_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_){
_start:
{
lean_object* v___f_4827_; lean_object* v___x_4828_; 
v___f_4827_ = lean_obj_once(&l_Lean_Elab_WF_assignSubsumed___closed__0, &l_Lean_Elab_WF_assignSubsumed___closed__0_once, _init_l_Lean_Elab_WF_assignSubsumed___closed__0);
v___x_4828_ = l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_mvars_4821_, v___f_4827_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_);
return v___x_4828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_assignSubsumed___boxed(lean_object* v_mvars_4829_, lean_object* v_a_4830_, lean_object* v_a_4831_, lean_object* v_a_4832_, lean_object* v_a_4833_, lean_object* v_a_4834_){
_start:
{
lean_object* v_res_4835_; 
v_res_4835_ = l_Lean_Elab_WF_assignSubsumed(v_mvars_4829_, v_a_4830_, v_a_4831_, v_a_4832_, v_a_4833_);
lean_dec(v_a_4833_);
lean_dec_ref(v_a_4832_);
lean_dec(v_a_4831_);
lean_dec_ref(v_a_4830_);
lean_dec_ref(v_mvars_4829_);
return v_res_4835_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(lean_object* v_mvarId_4836_, lean_object* v_val_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_){
_start:
{
lean_object* v___x_4843_; 
v___x_4843_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___redArg(v_mvarId_4836_, v_val_4837_, v___y_4839_, v___y_4841_);
return v___x_4843_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0___boxed(lean_object* v_mvarId_4844_, lean_object* v_val_4845_, lean_object* v___y_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_){
_start:
{
lean_object* v_res_4851_; 
v_res_4851_ = l_Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0(v_mvarId_4844_, v_val_4845_, v___y_4846_, v___y_4847_, v___y_4848_, v___y_4849_);
lean_dec(v___y_4849_);
lean_dec_ref(v___y_4848_);
lean_dec(v___y_4847_);
lean_dec_ref(v___y_4846_);
return v_res_4851_;
}
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(lean_object* v_00_u03b1_4852_, lean_object* v_a_4853_, lean_object* v_f_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_){
_start:
{
lean_object* v___x_4860_; 
v___x_4860_ = l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___redArg(v_a_4853_, v_f_4854_, v___y_4855_, v___y_4856_, v___y_4857_, v___y_4858_);
return v___x_4860_;
}
}
LEAN_EXPORT lean_object* l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1___boxed(lean_object* v_00_u03b1_4861_, lean_object* v_a_4862_, lean_object* v_f_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_){
_start:
{
lean_object* v_res_4869_; 
v_res_4869_ = l_Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1(v_00_u03b1_4861_, v_a_4862_, v_f_4863_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_);
lean_dec(v___y_4867_);
lean_dec_ref(v___y_4866_);
lean_dec(v___y_4865_);
lean_dec_ref(v___y_4864_);
lean_dec_ref(v_a_4862_);
return v_res_4869_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0(lean_object* v_00_u03b2_4870_, lean_object* v_x_4871_, lean_object* v_x_4872_, lean_object* v_x_4873_){
_start:
{
lean_object* v___x_4874_; 
v___x_4874_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0___redArg(v_x_4871_, v_x_4872_, v_x_4873_);
return v___x_4874_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(lean_object* v_upperBound_4875_, lean_object* v_00_u03b1_4876_, lean_object* v_a_4877_, lean_object* v_next_4878_, lean_object* v_f_4879_, lean_object* v_inst_4880_, lean_object* v_R_4881_, lean_object* v_a_4882_, lean_object* v_b_4883_, lean_object* v_c_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_){
_start:
{
lean_object* v___x_4890_; 
v___x_4890_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___redArg(v_upperBound_4875_, v_a_4877_, v_next_4878_, v_f_4879_, v_a_4882_, v_b_4883_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_);
return v___x_4890_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2___boxed(lean_object* v_upperBound_4891_, lean_object* v_00_u03b1_4892_, lean_object* v_a_4893_, lean_object* v_next_4894_, lean_object* v_f_4895_, lean_object* v_inst_4896_, lean_object* v_R_4897_, lean_object* v_a_4898_, lean_object* v_b_4899_, lean_object* v_c_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_){
_start:
{
lean_object* v_res_4906_; 
v_res_4906_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__2(v_upperBound_4891_, v_00_u03b1_4892_, v_a_4893_, v_next_4894_, v_f_4895_, v_inst_4896_, v_R_4897_, v_a_4898_, v_b_4899_, v_c_4900_, v___y_4901_, v___y_4902_, v___y_4903_, v___y_4904_);
lean_dec(v___y_4904_);
lean_dec_ref(v___y_4903_);
lean_dec(v___y_4902_);
lean_dec_ref(v___y_4901_);
lean_dec_ref(v_a_4893_);
lean_dec(v_upperBound_4891_);
return v_res_4906_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(lean_object* v_00_u03b1_4907_, lean_object* v_upperBound_4908_, lean_object* v_removed_4909_, lean_object* v_a_4910_, lean_object* v_inst_4911_, lean_object* v_R_4912_, lean_object* v_a_4913_, lean_object* v_b_4914_, lean_object* v_c_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_){
_start:
{
lean_object* v___x_4921_; 
v___x_4921_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___redArg(v_upperBound_4908_, v_removed_4909_, v_a_4910_, v_a_4913_, v_b_4914_, v___y_4916_, v___y_4917_, v___y_4918_, v___y_4919_);
return v___x_4921_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3___boxed(lean_object* v_00_u03b1_4922_, lean_object* v_upperBound_4923_, lean_object* v_removed_4924_, lean_object* v_a_4925_, lean_object* v_inst_4926_, lean_object* v_R_4927_, lean_object* v_a_4928_, lean_object* v_b_4929_, lean_object* v_c_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_, lean_object* v___y_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_){
_start:
{
lean_object* v_res_4936_; 
v_res_4936_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__3(v_00_u03b1_4922_, v_upperBound_4923_, v_removed_4924_, v_a_4925_, v_inst_4926_, v_R_4927_, v_a_4928_, v_b_4929_, v_c_4930_, v___y_4931_, v___y_4932_, v___y_4933_, v___y_4934_);
lean_dec(v___y_4934_);
lean_dec_ref(v___y_4933_);
lean_dec(v___y_4932_);
lean_dec_ref(v___y_4931_);
lean_dec_ref(v_a_4925_);
lean_dec_ref(v_removed_4924_);
lean_dec(v_upperBound_4923_);
return v_res_4936_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(lean_object* v_upperBound_4937_, lean_object* v___x_4938_, lean_object* v_00_u03b1_4939_, lean_object* v_a_4940_, lean_object* v_f_4941_, lean_object* v_inst_4942_, lean_object* v_R_4943_, lean_object* v_a_4944_, lean_object* v_b_4945_, lean_object* v_c_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_){
_start:
{
lean_object* v___x_4952_; 
v___x_4952_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___redArg(v_upperBound_4937_, v___x_4938_, v_a_4940_, v_f_4941_, v_a_4944_, v_b_4945_, v___y_4947_, v___y_4948_, v___y_4949_, v___y_4950_);
return v___x_4952_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4___boxed(lean_object* v_upperBound_4953_, lean_object* v___x_4954_, lean_object* v_00_u03b1_4955_, lean_object* v_a_4956_, lean_object* v_f_4957_, lean_object* v_inst_4958_, lean_object* v_R_4959_, lean_object* v_a_4960_, lean_object* v_b_4961_, lean_object* v_c_4962_, lean_object* v___y_4963_, lean_object* v___y_4964_, lean_object* v___y_4965_, lean_object* v___y_4966_, lean_object* v___y_4967_){
_start:
{
lean_object* v_res_4968_; 
v_res_4968_ = l_WellFounded_opaqueFix_u2083___at___00Array_filterPairsM___at___00Lean_Elab_WF_assignSubsumed_spec__1_spec__4(v_upperBound_4953_, v___x_4954_, v_00_u03b1_4955_, v_a_4956_, v_f_4957_, v_inst_4958_, v_R_4959_, v_a_4960_, v_b_4961_, v_c_4962_, v___y_4963_, v___y_4964_, v___y_4965_, v___y_4966_);
lean_dec(v___y_4966_);
lean_dec_ref(v___y_4965_);
lean_dec(v___y_4964_);
lean_dec_ref(v___y_4963_);
lean_dec_ref(v_a_4956_);
lean_dec(v___x_4954_);
lean_dec(v_upperBound_4953_);
return v_res_4968_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4969_, lean_object* v_x_4970_, size_t v_x_4971_, size_t v_x_4972_, lean_object* v_x_4973_, lean_object* v_x_4974_){
_start:
{
lean_object* v___x_4975_; 
v___x_4975_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___redArg(v_x_4970_, v_x_4971_, v_x_4972_, v_x_4973_, v_x_4974_);
return v___x_4975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4976_, lean_object* v_x_4977_, lean_object* v_x_4978_, lean_object* v_x_4979_, lean_object* v_x_4980_, lean_object* v_x_4981_){
_start:
{
size_t v_x_5233__boxed_4982_; size_t v_x_5234__boxed_4983_; lean_object* v_res_4984_; 
v_x_5233__boxed_4982_ = lean_unbox_usize(v_x_4978_);
lean_dec(v_x_4978_);
v_x_5234__boxed_4983_ = lean_unbox_usize(v_x_4979_);
lean_dec(v_x_4979_);
v_res_4984_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1(v_00_u03b2_4976_, v_x_4977_, v_x_5233__boxed_4982_, v_x_5234__boxed_4983_, v_x_4980_, v_x_4981_);
return v_res_4984_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_4985_, lean_object* v_n_4986_, lean_object* v_k_4987_, lean_object* v_v_4988_){
_start:
{
lean_object* v___x_4989_; 
v___x_4989_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3___redArg(v_n_4986_, v_k_4987_, v_v_4988_);
return v___x_4989_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_4990_, size_t v_depth_4991_, lean_object* v_keys_4992_, lean_object* v_vals_4993_, lean_object* v_heq_4994_, lean_object* v_i_4995_, lean_object* v_entries_4996_){
_start:
{
lean_object* v___x_4997_; 
v___x_4997_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___redArg(v_depth_4991_, v_keys_4992_, v_vals_4993_, v_i_4995_, v_entries_4996_);
return v___x_4997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4998_, lean_object* v_depth_4999_, lean_object* v_keys_5000_, lean_object* v_vals_5001_, lean_object* v_heq_5002_, lean_object* v_i_5003_, lean_object* v_entries_5004_){
_start:
{
size_t v_depth_boxed_5005_; lean_object* v_res_5006_; 
v_depth_boxed_5005_ = lean_unbox_usize(v_depth_4999_);
lean_dec(v_depth_4999_);
v_res_5006_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_4998_, v_depth_boxed_5005_, v_keys_5000_, v_vals_5001_, v_heq_5002_, v_i_5003_, v_entries_5004_);
lean_dec_ref(v_vals_5001_);
lean_dec_ref(v_keys_5000_);
return v_res_5006_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7(lean_object* v_00_u03b2_5007_, lean_object* v_x_5008_, lean_object* v_x_5009_, lean_object* v_x_5010_, lean_object* v_x_5011_){
_start:
{
lean_object* v___x_5012_; 
v___x_5012_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_WF_assignSubsumed_spec__0_spec__0_spec__1_spec__3_spec__7___redArg(v_x_5008_, v_x_5009_, v_x_5010_, v_x_5011_);
return v___x_5012_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = lean_mk_string_unchecked("MVar does not look like a recursive call:", 41, 41);
return v___x_5013_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1(void){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; 
v___x_5014_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__0);
v___x_5015_ = l_Lean_stringToMessageData(v___x_5014_);
return v___x_5015_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2(void){
_start:
{
lean_object* v___x_5016_; 
v___x_5016_ = lean_mk_string_unchecked("Cannot unpack param, unexpected expression:", 43, 43);
return v___x_5016_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3(void){
_start:
{
lean_object* v___x_5017_; lean_object* v___x_5018_; 
v___x_5017_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__2);
v___x_5018_ = l_Lean_stringToMessageData(v___x_5017_);
return v___x_5018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(lean_object* v_argsPacker_5019_, lean_object* v_as_5020_, size_t v_sz_5021_, size_t v_i_5022_, lean_object* v_b_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_){
_start:
{
lean_object* v_a_5030_; uint8_t v___x_5034_; 
v___x_5034_ = lean_usize_dec_lt(v_i_5022_, v_sz_5021_);
if (v___x_5034_ == 0)
{
lean_object* v___x_5035_; 
v___x_5035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5035_, 0, v_b_5023_);
return v___x_5035_;
}
else
{
lean_object* v_a_5036_; lean_object* v___x_5037_; 
v_a_5036_ = lean_array_uget_borrowed(v_as_5020_, v_i_5022_);
lean_inc(v_a_5036_);
v___x_5037_ = l_Lean_MVarId_getType(v_a_5036_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_);
if (lean_obj_tag(v___x_5037_) == 0)
{
lean_object* v_a_5038_; lean_object* v___y_5040_; lean_object* v___y_5041_; lean_object* v___y_5042_; lean_object* v___y_5043_; 
v_a_5038_ = lean_ctor_get(v___x_5037_, 0);
lean_inc(v_a_5038_);
lean_dec_ref(v___x_5037_);
if (lean_obj_tag(v_a_5038_) == 10)
{
lean_object* v_expr_5056_; 
v_expr_5056_ = lean_ctor_get(v_a_5038_, 1);
if (lean_obj_tag(v_expr_5056_) == 5)
{
lean_object* v_arg_5057_; lean_object* v___x_5058_; 
lean_inc_ref(v_expr_5056_);
lean_dec_ref(v_a_5038_);
v_arg_5057_ = lean_ctor_get(v_expr_5056_, 1);
lean_inc_ref_n(v_arg_5057_, 2);
lean_dec_ref(v_expr_5056_);
v___x_5058_ = l_Lean_Meta_ArgsPacker_unpack(v_argsPacker_5019_, v_arg_5057_);
if (lean_obj_tag(v___x_5058_) == 1)
{
lean_object* v_val_5059_; lean_object* v_fst_5060_; lean_object* v___x_5061_; uint8_t v___x_5062_; 
lean_dec_ref(v_arg_5057_);
v_val_5059_ = lean_ctor_get(v___x_5058_, 0);
lean_inc(v_val_5059_);
lean_dec_ref(v___x_5058_);
v_fst_5060_ = lean_ctor_get(v_val_5059_, 0);
lean_inc(v_fst_5060_);
lean_dec(v_val_5059_);
v___x_5061_ = lean_array_get_size(v_b_5023_);
v___x_5062_ = lean_nat_dec_lt(v_fst_5060_, v___x_5061_);
if (v___x_5062_ == 0)
{
lean_dec(v_fst_5060_);
v_a_5030_ = v_b_5023_;
goto v___jp_5029_;
}
else
{
lean_object* v_v_5063_; lean_object* v___x_5064_; lean_object* v_xs_x27_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; 
v_v_5063_ = lean_array_fget(v_b_5023_, v_fst_5060_);
v___x_5064_ = lean_box(0);
v_xs_x27_5065_ = lean_array_fset(v_b_5023_, v_fst_5060_, v___x_5064_);
lean_inc(v_a_5036_);
v___x_5066_ = lean_array_push(v_v_5063_, v_a_5036_);
v___x_5067_ = lean_array_fset(v_xs_x27_5065_, v_fst_5060_, v___x_5066_);
lean_dec(v_fst_5060_);
v_a_5030_ = v___x_5067_;
goto v___jp_5029_;
}
}
else
{
lean_object* v___x_5068_; lean_object* v___x_5069_; lean_object* v___x_5070_; lean_object* v___x_5071_; 
lean_dec(v___x_5058_);
v___x_5068_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__3);
v___x_5069_ = l_Lean_indentExpr(v_arg_5057_);
v___x_5070_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5070_, 0, v___x_5068_);
lean_ctor_set(v___x_5070_, 1, v___x_5069_);
v___x_5071_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_5070_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_);
if (lean_obj_tag(v___x_5071_) == 0)
{
lean_dec_ref(v___x_5071_);
v_a_5030_ = v_b_5023_;
goto v___jp_5029_;
}
else
{
lean_object* v_a_5072_; lean_object* v___x_5074_; uint8_t v_isShared_5075_; uint8_t v_isSharedCheck_5079_; 
lean_dec_ref(v_b_5023_);
v_a_5072_ = lean_ctor_get(v___x_5071_, 0);
v_isSharedCheck_5079_ = !lean_is_exclusive(v___x_5071_);
if (v_isSharedCheck_5079_ == 0)
{
v___x_5074_ = v___x_5071_;
v_isShared_5075_ = v_isSharedCheck_5079_;
goto v_resetjp_5073_;
}
else
{
lean_inc(v_a_5072_);
lean_dec(v___x_5071_);
v___x_5074_ = lean_box(0);
v_isShared_5075_ = v_isSharedCheck_5079_;
goto v_resetjp_5073_;
}
v_resetjp_5073_:
{
lean_object* v___x_5077_; 
if (v_isShared_5075_ == 0)
{
v___x_5077_ = v___x_5074_;
goto v_reusejp_5076_;
}
else
{
lean_object* v_reuseFailAlloc_5078_; 
v_reuseFailAlloc_5078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5078_, 0, v_a_5072_);
v___x_5077_ = v_reuseFailAlloc_5078_;
goto v_reusejp_5076_;
}
v_reusejp_5076_:
{
return v___x_5077_;
}
}
}
}
}
else
{
v___y_5040_ = v___y_5024_;
v___y_5041_ = v___y_5025_;
v___y_5042_ = v___y_5026_;
v___y_5043_ = v___y_5027_;
goto v___jp_5039_;
}
}
else
{
v___y_5040_ = v___y_5024_;
v___y_5041_ = v___y_5025_;
v___y_5042_ = v___y_5026_;
v___y_5043_ = v___y_5027_;
goto v___jp_5039_;
}
v___jp_5039_:
{
lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; lean_object* v___x_5047_; 
v___x_5044_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___closed__1);
v___x_5045_ = l_Lean_indentExpr(v_a_5038_);
v___x_5046_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5046_, 0, v___x_5044_);
lean_ctor_set(v___x_5046_, 1, v___x_5045_);
v___x_5047_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1___redArg(v___x_5046_, v___y_5040_, v___y_5041_, v___y_5042_, v___y_5043_);
if (lean_obj_tag(v___x_5047_) == 0)
{
lean_dec_ref(v___x_5047_);
v_a_5030_ = v_b_5023_;
goto v___jp_5029_;
}
else
{
lean_object* v_a_5048_; lean_object* v___x_5050_; uint8_t v_isShared_5051_; uint8_t v_isSharedCheck_5055_; 
lean_dec_ref(v_b_5023_);
v_a_5048_ = lean_ctor_get(v___x_5047_, 0);
v_isSharedCheck_5055_ = !lean_is_exclusive(v___x_5047_);
if (v_isSharedCheck_5055_ == 0)
{
v___x_5050_ = v___x_5047_;
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
else
{
lean_inc(v_a_5048_);
lean_dec(v___x_5047_);
v___x_5050_ = lean_box(0);
v_isShared_5051_ = v_isSharedCheck_5055_;
goto v_resetjp_5049_;
}
v_resetjp_5049_:
{
lean_object* v___x_5053_; 
if (v_isShared_5051_ == 0)
{
v___x_5053_ = v___x_5050_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5054_; 
v_reuseFailAlloc_5054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5054_, 0, v_a_5048_);
v___x_5053_ = v_reuseFailAlloc_5054_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
return v___x_5053_;
}
}
}
}
}
else
{
lean_object* v_a_5080_; lean_object* v___x_5082_; uint8_t v_isShared_5083_; uint8_t v_isSharedCheck_5087_; 
lean_dec_ref(v_b_5023_);
v_a_5080_ = lean_ctor_get(v___x_5037_, 0);
v_isSharedCheck_5087_ = !lean_is_exclusive(v___x_5037_);
if (v_isSharedCheck_5087_ == 0)
{
v___x_5082_ = v___x_5037_;
v_isShared_5083_ = v_isSharedCheck_5087_;
goto v_resetjp_5081_;
}
else
{
lean_inc(v_a_5080_);
lean_dec(v___x_5037_);
v___x_5082_ = lean_box(0);
v_isShared_5083_ = v_isSharedCheck_5087_;
goto v_resetjp_5081_;
}
v_resetjp_5081_:
{
lean_object* v___x_5085_; 
if (v_isShared_5083_ == 0)
{
v___x_5085_ = v___x_5082_;
goto v_reusejp_5084_;
}
else
{
lean_object* v_reuseFailAlloc_5086_; 
v_reuseFailAlloc_5086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5086_, 0, v_a_5080_);
v___x_5085_ = v_reuseFailAlloc_5086_;
goto v_reusejp_5084_;
}
v_reusejp_5084_:
{
return v___x_5085_;
}
}
}
}
v___jp_5029_:
{
size_t v___x_5031_; size_t v___x_5032_; 
v___x_5031_ = ((size_t)1ULL);
v___x_5032_ = lean_usize_add(v_i_5022_, v___x_5031_);
v_i_5022_ = v___x_5032_;
v_b_5023_ = v_a_5030_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0___boxed(lean_object* v_argsPacker_5088_, lean_object* v_as_5089_, lean_object* v_sz_5090_, lean_object* v_i_5091_, lean_object* v_b_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_){
_start:
{
size_t v_sz_boxed_5098_; size_t v_i_boxed_5099_; lean_object* v_res_5100_; 
v_sz_boxed_5098_ = lean_unbox_usize(v_sz_5090_);
lean_dec(v_sz_5090_);
v_i_boxed_5099_ = lean_unbox_usize(v_i_5091_);
lean_dec(v_i_5091_);
v_res_5100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5088_, v_as_5089_, v_sz_boxed_5098_, v_i_boxed_5099_, v_b_5092_, v___y_5093_, v___y_5094_, v___y_5095_, v___y_5096_);
lean_dec(v___y_5096_);
lean_dec_ref(v___y_5095_);
lean_dec(v___y_5094_);
lean_dec_ref(v___y_5093_);
lean_dec_ref(v_as_5089_);
lean_dec_ref(v_argsPacker_5088_);
return v_res_5100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction(lean_object* v_argsPacker_5101_, lean_object* v_numFuncs_5102_, lean_object* v_goals_5103_, lean_object* v_a_5104_, lean_object* v_a_5105_, lean_object* v_a_5106_, lean_object* v_a_5107_){
_start:
{
lean_object* v___x_5109_; lean_object* v_r_5110_; size_t v_sz_5111_; size_t v___x_5112_; lean_object* v___x_5113_; 
v___x_5109_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_mkDecreasingProof___redArg___closed__0);
v_r_5110_ = lean_mk_array(v_numFuncs_5102_, v___x_5109_);
v_sz_5111_ = lean_array_size(v_goals_5103_);
v___x_5112_ = ((size_t)0ULL);
v___x_5113_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_groupGoalsByFunction_spec__0(v_argsPacker_5101_, v_goals_5103_, v_sz_5111_, v___x_5112_, v_r_5110_, v_a_5104_, v_a_5105_, v_a_5106_, v_a_5107_);
return v___x_5113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_groupGoalsByFunction___boxed(lean_object* v_argsPacker_5114_, lean_object* v_numFuncs_5115_, lean_object* v_goals_5116_, lean_object* v_a_5117_, lean_object* v_a_5118_, lean_object* v_a_5119_, lean_object* v_a_5120_, lean_object* v_a_5121_){
_start:
{
lean_object* v_res_5122_; 
v_res_5122_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5114_, v_numFuncs_5115_, v_goals_5116_, v_a_5117_, v_a_5118_, v_a_5119_, v_a_5120_);
lean_dec(v_a_5120_);
lean_dec_ref(v_a_5119_);
lean_dec(v_a_5118_);
lean_dec_ref(v_a_5117_);
lean_dec_ref(v_goals_5116_);
lean_dec_ref(v_argsPacker_5114_);
return v_res_5122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(lean_object* v_t_5123_, lean_object* v___y_5124_){
_start:
{
lean_object* v___x_5126_; lean_object* v_infoState_5127_; uint8_t v_enabled_5128_; 
v___x_5126_ = lean_st_ref_get(v___y_5124_);
v_infoState_5127_ = lean_ctor_get(v___x_5126_, 7);
lean_inc_ref(v_infoState_5127_);
lean_dec(v___x_5126_);
v_enabled_5128_ = lean_ctor_get_uint8(v_infoState_5127_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5127_);
if (v_enabled_5128_ == 0)
{
lean_object* v___x_5129_; lean_object* v___x_5130_; 
lean_dec_ref(v_t_5123_);
v___x_5129_ = lean_box(0);
v___x_5130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5130_, 0, v___x_5129_);
return v___x_5130_;
}
else
{
lean_object* v___x_5131_; lean_object* v_infoState_5132_; lean_object* v_env_5133_; lean_object* v_nextMacroScope_5134_; lean_object* v_ngen_5135_; lean_object* v_auxDeclNGen_5136_; lean_object* v_traceState_5137_; lean_object* v_cache_5138_; lean_object* v_messages_5139_; lean_object* v_snapshotTasks_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5162_; 
v___x_5131_ = lean_st_ref_take(v___y_5124_);
v_infoState_5132_ = lean_ctor_get(v___x_5131_, 7);
v_env_5133_ = lean_ctor_get(v___x_5131_, 0);
v_nextMacroScope_5134_ = lean_ctor_get(v___x_5131_, 1);
v_ngen_5135_ = lean_ctor_get(v___x_5131_, 2);
v_auxDeclNGen_5136_ = lean_ctor_get(v___x_5131_, 3);
v_traceState_5137_ = lean_ctor_get(v___x_5131_, 4);
v_cache_5138_ = lean_ctor_get(v___x_5131_, 5);
v_messages_5139_ = lean_ctor_get(v___x_5131_, 6);
v_snapshotTasks_5140_ = lean_ctor_get(v___x_5131_, 8);
v_isSharedCheck_5162_ = !lean_is_exclusive(v___x_5131_);
if (v_isSharedCheck_5162_ == 0)
{
v___x_5142_ = v___x_5131_;
v_isShared_5143_ = v_isSharedCheck_5162_;
goto v_resetjp_5141_;
}
else
{
lean_inc(v_snapshotTasks_5140_);
lean_inc(v_infoState_5132_);
lean_inc(v_messages_5139_);
lean_inc(v_cache_5138_);
lean_inc(v_traceState_5137_);
lean_inc(v_auxDeclNGen_5136_);
lean_inc(v_ngen_5135_);
lean_inc(v_nextMacroScope_5134_);
lean_inc(v_env_5133_);
lean_dec(v___x_5131_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5162_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
uint8_t v_enabled_5144_; lean_object* v_assignment_5145_; lean_object* v_lazyAssignment_5146_; lean_object* v_trees_5147_; lean_object* v___x_5149_; uint8_t v_isShared_5150_; uint8_t v_isSharedCheck_5161_; 
v_enabled_5144_ = lean_ctor_get_uint8(v_infoState_5132_, sizeof(void*)*3);
v_assignment_5145_ = lean_ctor_get(v_infoState_5132_, 0);
v_lazyAssignment_5146_ = lean_ctor_get(v_infoState_5132_, 1);
v_trees_5147_ = lean_ctor_get(v_infoState_5132_, 2);
v_isSharedCheck_5161_ = !lean_is_exclusive(v_infoState_5132_);
if (v_isSharedCheck_5161_ == 0)
{
v___x_5149_ = v_infoState_5132_;
v_isShared_5150_ = v_isSharedCheck_5161_;
goto v_resetjp_5148_;
}
else
{
lean_inc(v_trees_5147_);
lean_inc(v_lazyAssignment_5146_);
lean_inc(v_assignment_5145_);
lean_dec(v_infoState_5132_);
v___x_5149_ = lean_box(0);
v_isShared_5150_ = v_isSharedCheck_5161_;
goto v_resetjp_5148_;
}
v_resetjp_5148_:
{
lean_object* v___x_5151_; lean_object* v___x_5153_; 
v___x_5151_ = l_Lean_PersistentArray_push___redArg(v_trees_5147_, v_t_5123_);
if (v_isShared_5150_ == 0)
{
lean_ctor_set(v___x_5149_, 2, v___x_5151_);
v___x_5153_ = v___x_5149_;
goto v_reusejp_5152_;
}
else
{
lean_object* v_reuseFailAlloc_5160_; 
v_reuseFailAlloc_5160_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5160_, 0, v_assignment_5145_);
lean_ctor_set(v_reuseFailAlloc_5160_, 1, v_lazyAssignment_5146_);
lean_ctor_set(v_reuseFailAlloc_5160_, 2, v___x_5151_);
lean_ctor_set_uint8(v_reuseFailAlloc_5160_, sizeof(void*)*3, v_enabled_5144_);
v___x_5153_ = v_reuseFailAlloc_5160_;
goto v_reusejp_5152_;
}
v_reusejp_5152_:
{
lean_object* v___x_5155_; 
if (v_isShared_5143_ == 0)
{
lean_ctor_set(v___x_5142_, 7, v___x_5153_);
v___x_5155_ = v___x_5142_;
goto v_reusejp_5154_;
}
else
{
lean_object* v_reuseFailAlloc_5159_; 
v_reuseFailAlloc_5159_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5159_, 0, v_env_5133_);
lean_ctor_set(v_reuseFailAlloc_5159_, 1, v_nextMacroScope_5134_);
lean_ctor_set(v_reuseFailAlloc_5159_, 2, v_ngen_5135_);
lean_ctor_set(v_reuseFailAlloc_5159_, 3, v_auxDeclNGen_5136_);
lean_ctor_set(v_reuseFailAlloc_5159_, 4, v_traceState_5137_);
lean_ctor_set(v_reuseFailAlloc_5159_, 5, v_cache_5138_);
lean_ctor_set(v_reuseFailAlloc_5159_, 6, v_messages_5139_);
lean_ctor_set(v_reuseFailAlloc_5159_, 7, v___x_5153_);
lean_ctor_set(v_reuseFailAlloc_5159_, 8, v_snapshotTasks_5140_);
v___x_5155_ = v_reuseFailAlloc_5159_;
goto v_reusejp_5154_;
}
v_reusejp_5154_:
{
lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; 
v___x_5156_ = lean_st_ref_set(v___y_5124_, v___x_5155_);
v___x_5157_ = lean_box(0);
v___x_5158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5158_, 0, v___x_5157_);
return v___x_5158_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg___boxed(lean_object* v_t_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_){
_start:
{
lean_object* v_res_5166_; 
v_res_5166_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5163_, v___y_5164_);
lean_dec(v___y_5164_);
return v_res_5166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(lean_object* v_t_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_){
_start:
{
lean_object* v___x_5175_; 
v___x_5175_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v_t_5167_, v___y_5173_);
return v___x_5175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___boxed(lean_object* v_t_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v___y_5183_){
_start:
{
lean_object* v_res_5184_; 
v_res_5184_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0(v_t_5176_, v___y_5177_, v___y_5178_, v___y_5179_, v___y_5180_, v___y_5181_, v___y_5182_);
lean_dec(v___y_5182_);
lean_dec_ref(v___y_5181_);
lean_dec(v___y_5180_);
lean_dec_ref(v___y_5179_);
lean_dec(v___y_5178_);
lean_dec_ref(v___y_5177_);
return v_res_5184_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(lean_object* v_e_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_){
_start:
{
uint8_t v___x_5189_; 
v___x_5189_ = l_Lean_Expr_hasMVar(v_e_5185_);
if (v___x_5189_ == 0)
{
lean_object* v___x_5190_; 
v___x_5190_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5190_, 0, v_e_5185_);
return v___x_5190_;
}
else
{
lean_object* v___x_5191_; lean_object* v___x_5192_; lean_object* v_mctx_5193_; lean_object* v___x_5194_; lean_object* v_fst_5195_; lean_object* v_snd_5196_; lean_object* v___x_5197_; lean_object* v___x_5198_; lean_object* v_cache_5199_; lean_object* v_zetaDeltaFVarIds_5200_; lean_object* v_postponed_5201_; lean_object* v_diag_5202_; lean_object* v___x_5204_; uint8_t v_isShared_5205_; uint8_t v_isSharedCheck_5211_; 
v___x_5191_ = lean_st_ref_get(v___y_5187_);
lean_dec(v___x_5191_);
v___x_5192_ = lean_st_ref_get(v___y_5186_);
v_mctx_5193_ = lean_ctor_get(v___x_5192_, 0);
lean_inc_ref(v_mctx_5193_);
lean_dec(v___x_5192_);
v___x_5194_ = l_Lean_instantiateMVarsCore(v_mctx_5193_, v_e_5185_);
v_fst_5195_ = lean_ctor_get(v___x_5194_, 0);
lean_inc(v_fst_5195_);
v_snd_5196_ = lean_ctor_get(v___x_5194_, 1);
lean_inc(v_snd_5196_);
lean_dec_ref(v___x_5194_);
v___x_5197_ = lean_st_ref_get(v___y_5187_);
lean_dec(v___x_5197_);
v___x_5198_ = lean_st_ref_take(v___y_5186_);
v_cache_5199_ = lean_ctor_get(v___x_5198_, 1);
v_zetaDeltaFVarIds_5200_ = lean_ctor_get(v___x_5198_, 2);
v_postponed_5201_ = lean_ctor_get(v___x_5198_, 3);
v_diag_5202_ = lean_ctor_get(v___x_5198_, 4);
v_isSharedCheck_5211_ = !lean_is_exclusive(v___x_5198_);
if (v_isSharedCheck_5211_ == 0)
{
lean_object* v_unused_5212_; 
v_unused_5212_ = lean_ctor_get(v___x_5198_, 0);
lean_dec(v_unused_5212_);
v___x_5204_ = v___x_5198_;
v_isShared_5205_ = v_isSharedCheck_5211_;
goto v_resetjp_5203_;
}
else
{
lean_inc(v_diag_5202_);
lean_inc(v_postponed_5201_);
lean_inc(v_zetaDeltaFVarIds_5200_);
lean_inc(v_cache_5199_);
lean_dec(v___x_5198_);
v___x_5204_ = lean_box(0);
v_isShared_5205_ = v_isSharedCheck_5211_;
goto v_resetjp_5203_;
}
v_resetjp_5203_:
{
lean_object* v___x_5207_; 
if (v_isShared_5205_ == 0)
{
lean_ctor_set(v___x_5204_, 0, v_snd_5196_);
v___x_5207_ = v___x_5204_;
goto v_reusejp_5206_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v_snd_5196_);
lean_ctor_set(v_reuseFailAlloc_5210_, 1, v_cache_5199_);
lean_ctor_set(v_reuseFailAlloc_5210_, 2, v_zetaDeltaFVarIds_5200_);
lean_ctor_set(v_reuseFailAlloc_5210_, 3, v_postponed_5201_);
lean_ctor_set(v_reuseFailAlloc_5210_, 4, v_diag_5202_);
v___x_5207_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5206_;
}
v_reusejp_5206_:
{
lean_object* v___x_5208_; lean_object* v___x_5209_; 
v___x_5208_ = lean_st_ref_set(v___y_5186_, v___x_5207_);
v___x_5209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5209_, 0, v_fst_5195_);
return v___x_5209_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg___boxed(lean_object* v_e_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_){
_start:
{
lean_object* v_res_5217_; 
v_res_5217_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5213_, v___y_5214_, v___y_5215_);
lean_dec(v___y_5215_);
lean_dec(v___y_5214_);
return v_res_5217_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(lean_object* v_e_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_){
_start:
{
lean_object* v___x_5224_; 
v___x_5224_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_e_5218_, v___y_5220_, v___y_5222_);
return v___x_5224_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___boxed(lean_object* v_e_5225_, lean_object* v___y_5226_, lean_object* v___y_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_){
_start:
{
lean_object* v_res_5231_; 
v_res_5231_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7(v_e_5225_, v___y_5226_, v___y_5227_, v___y_5228_, v___y_5229_);
lean_dec(v___y_5229_);
lean_dec_ref(v___y_5228_);
lean_dec(v___y_5227_);
lean_dec_ref(v___y_5226_);
return v_res_5231_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(lean_object* v_x_5232_){
_start:
{
uint8_t v___x_5233_; 
v___x_5233_ = 0;
return v___x_5233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed(lean_object* v_x_5234_){
_start:
{
uint8_t v_res_5235_; lean_object* v_r_5236_; 
v_res_5235_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0(v_x_5234_);
lean_dec(v_x_5234_);
v_r_5236_ = lean_box(v_res_5235_);
return v_r_5236_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(lean_object* v_as_5237_, size_t v_i_5238_, size_t v_stop_5239_, lean_object* v_b_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_){
_start:
{
uint8_t v___x_5248_; 
v___x_5248_ = lean_usize_dec_eq(v_i_5238_, v_stop_5239_);
if (v___x_5248_ == 0)
{
lean_object* v___x_5249_; lean_object* v___x_5250_; lean_object* v___x_5251_; 
v___x_5249_ = lean_array_uget_borrowed(v_as_5237_, v_i_5238_);
lean_inc(v___x_5249_);
v___x_5250_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5250_, 0, v___x_5249_);
v___x_5251_ = l_Lean_Elab_pushInfoTree___at___00Lean_Elab_WF_solveDecreasingGoals_spec__0___redArg(v___x_5250_, v___y_5246_);
if (lean_obj_tag(v___x_5251_) == 0)
{
lean_object* v_a_5252_; size_t v___x_5253_; size_t v___x_5254_; 
v_a_5252_ = lean_ctor_get(v___x_5251_, 0);
lean_inc(v_a_5252_);
lean_dec_ref(v___x_5251_);
v___x_5253_ = ((size_t)1ULL);
v___x_5254_ = lean_usize_add(v_i_5238_, v___x_5253_);
v_i_5238_ = v___x_5254_;
v_b_5240_ = v_a_5252_;
goto _start;
}
else
{
return v___x_5251_;
}
}
else
{
lean_object* v___x_5256_; 
v___x_5256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5256_, 0, v_b_5240_);
return v___x_5256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4___boxed(lean_object* v_as_5257_, lean_object* v_i_5258_, lean_object* v_stop_5259_, lean_object* v_b_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_){
_start:
{
size_t v_i_boxed_5268_; size_t v_stop_boxed_5269_; lean_object* v_res_5270_; 
v_i_boxed_5268_ = lean_unbox_usize(v_i_5258_);
lean_dec(v_i_5258_);
v_stop_boxed_5269_ = lean_unbox_usize(v_stop_5259_);
lean_dec(v_stop_5259_);
v_res_5270_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v_as_5257_, v_i_boxed_5268_, v_stop_boxed_5269_, v_b_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_, v___y_5266_);
lean_dec(v___y_5266_);
lean_dec_ref(v___y_5265_);
lean_dec(v___y_5264_);
lean_dec_ref(v___y_5263_);
lean_dec(v___y_5262_);
lean_dec_ref(v___y_5261_);
lean_dec_ref(v_as_5257_);
return v_res_5270_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5271_; lean_object* v___x_5272_; 
v___x_5271_ = lean_box(1);
v___x_5272_ = l_Lean_MessageData_ofFormat(v___x_5271_);
return v___x_5272_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_5273_; 
v___x_5273_ = lean_mk_string_unchecked("while expanding", 15, 15);
return v___x_5273_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2(void){
_start:
{
lean_object* v___x_5274_; lean_object* v___x_5275_; 
v___x_5274_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__1);
v___x_5275_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5275_, 0, v___x_5274_);
return v___x_5275_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_5276_; lean_object* v___x_5277_; 
v___x_5276_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__2);
v___x_5277_ = l_Lean_MessageData_ofFormat(v___x_5276_);
return v___x_5277_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(lean_object* v_x_5278_, lean_object* v_x_5279_){
_start:
{
if (lean_obj_tag(v_x_5279_) == 0)
{
return v_x_5278_;
}
else
{
lean_object* v_head_5280_; lean_object* v_tail_5281_; lean_object* v___x_5283_; uint8_t v_isShared_5284_; uint8_t v_isSharedCheck_5303_; 
v_head_5280_ = lean_ctor_get(v_x_5279_, 0);
v_tail_5281_ = lean_ctor_get(v_x_5279_, 1);
v_isSharedCheck_5303_ = !lean_is_exclusive(v_x_5279_);
if (v_isSharedCheck_5303_ == 0)
{
v___x_5283_ = v_x_5279_;
v_isShared_5284_ = v_isSharedCheck_5303_;
goto v_resetjp_5282_;
}
else
{
lean_inc(v_tail_5281_);
lean_inc(v_head_5280_);
lean_dec(v_x_5279_);
v___x_5283_ = lean_box(0);
v_isShared_5284_ = v_isSharedCheck_5303_;
goto v_resetjp_5282_;
}
v_resetjp_5282_:
{
lean_object* v_before_5285_; lean_object* v___x_5287_; uint8_t v_isShared_5288_; uint8_t v_isSharedCheck_5301_; 
v_before_5285_ = lean_ctor_get(v_head_5280_, 0);
v_isSharedCheck_5301_ = !lean_is_exclusive(v_head_5280_);
if (v_isSharedCheck_5301_ == 0)
{
lean_object* v_unused_5302_; 
v_unused_5302_ = lean_ctor_get(v_head_5280_, 1);
lean_dec(v_unused_5302_);
v___x_5287_ = v_head_5280_;
v_isShared_5288_ = v_isSharedCheck_5301_;
goto v_resetjp_5286_;
}
else
{
lean_inc(v_before_5285_);
lean_dec(v_head_5280_);
v___x_5287_ = lean_box(0);
v_isShared_5288_ = v_isSharedCheck_5301_;
goto v_resetjp_5286_;
}
v_resetjp_5286_:
{
lean_object* v___x_5289_; lean_object* v___x_5291_; 
v___x_5289_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5288_ == 0)
{
lean_ctor_set_tag(v___x_5287_, 7);
lean_ctor_set(v___x_5287_, 1, v___x_5289_);
lean_ctor_set(v___x_5287_, 0, v_x_5278_);
v___x_5291_ = v___x_5287_;
goto v_reusejp_5290_;
}
else
{
lean_object* v_reuseFailAlloc_5300_; 
v_reuseFailAlloc_5300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5300_, 0, v_x_5278_);
lean_ctor_set(v_reuseFailAlloc_5300_, 1, v___x_5289_);
v___x_5291_ = v_reuseFailAlloc_5300_;
goto v_reusejp_5290_;
}
v_reusejp_5290_:
{
lean_object* v___x_5292_; lean_object* v___x_5294_; 
v___x_5292_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__3);
if (v_isShared_5284_ == 0)
{
lean_ctor_set_tag(v___x_5283_, 7);
lean_ctor_set(v___x_5283_, 1, v___x_5292_);
lean_ctor_set(v___x_5283_, 0, v___x_5291_);
v___x_5294_ = v___x_5283_;
goto v_reusejp_5293_;
}
else
{
lean_object* v_reuseFailAlloc_5299_; 
v_reuseFailAlloc_5299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5299_, 0, v___x_5291_);
lean_ctor_set(v_reuseFailAlloc_5299_, 1, v___x_5292_);
v___x_5294_ = v_reuseFailAlloc_5299_;
goto v_reusejp_5293_;
}
v_reusejp_5293_:
{
lean_object* v___x_5295_; lean_object* v___x_5296_; lean_object* v___x_5297_; 
v___x_5295_ = l_Lean_MessageData_ofSyntax(v_before_5285_);
v___x_5296_ = l_Lean_indentD(v___x_5295_);
v___x_5297_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5297_, 0, v___x_5294_);
lean_ctor_set(v___x_5297_, 1, v___x_5296_);
v_x_5278_ = v___x_5297_;
v_x_5279_ = v_tail_5281_;
goto _start;
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_5304_; 
v___x_5304_ = lean_mk_string_unchecked("with resulting expansion", 24, 24);
return v___x_5304_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_5305_; lean_object* v___x_5306_; 
v___x_5305_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__0);
v___x_5306_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5306_, 0, v___x_5305_);
return v___x_5306_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_5307_; lean_object* v___x_5308_; 
v___x_5307_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__1);
v___x_5308_ = l_Lean_MessageData_ofFormat(v___x_5307_);
return v___x_5308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(lean_object* v_msgData_5309_, lean_object* v_macroStack_5310_, lean_object* v___y_5311_){
_start:
{
lean_object* v_options_5313_; lean_object* v___x_5314_; uint8_t v___x_5315_; 
v_options_5313_ = lean_ctor_get(v___y_5311_, 2);
v___x_5314_ = l_Lean_Elab_pp_macroStack;
v___x_5315_ = l_Lean_Option_get___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps_loop_spec__5(v_options_5313_, v___x_5314_);
if (v___x_5315_ == 0)
{
lean_object* v___x_5316_; 
lean_dec(v_macroStack_5310_);
v___x_5316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5316_, 0, v_msgData_5309_);
return v___x_5316_;
}
else
{
if (lean_obj_tag(v_macroStack_5310_) == 0)
{
lean_object* v___x_5317_; 
v___x_5317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5317_, 0, v_msgData_5309_);
return v___x_5317_;
}
else
{
lean_object* v_head_5318_; lean_object* v_after_5319_; lean_object* v___x_5321_; uint8_t v_isShared_5322_; uint8_t v_isSharedCheck_5334_; 
v_head_5318_ = lean_ctor_get(v_macroStack_5310_, 0);
lean_inc(v_head_5318_);
v_after_5319_ = lean_ctor_get(v_head_5318_, 1);
v_isSharedCheck_5334_ = !lean_is_exclusive(v_head_5318_);
if (v_isSharedCheck_5334_ == 0)
{
lean_object* v_unused_5335_; 
v_unused_5335_ = lean_ctor_get(v_head_5318_, 0);
lean_dec(v_unused_5335_);
v___x_5321_ = v_head_5318_;
v_isShared_5322_ = v_isSharedCheck_5334_;
goto v_resetjp_5320_;
}
else
{
lean_inc(v_after_5319_);
lean_dec(v_head_5318_);
v___x_5321_ = lean_box(0);
v_isShared_5322_ = v_isSharedCheck_5334_;
goto v_resetjp_5320_;
}
v_resetjp_5320_:
{
lean_object* v___x_5323_; lean_object* v___x_5325_; 
v___x_5323_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3___closed__0);
if (v_isShared_5322_ == 0)
{
lean_ctor_set_tag(v___x_5321_, 7);
lean_ctor_set(v___x_5321_, 1, v___x_5323_);
lean_ctor_set(v___x_5321_, 0, v_msgData_5309_);
v___x_5325_ = v___x_5321_;
goto v_reusejp_5324_;
}
else
{
lean_object* v_reuseFailAlloc_5333_; 
v_reuseFailAlloc_5333_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5333_, 0, v_msgData_5309_);
lean_ctor_set(v_reuseFailAlloc_5333_, 1, v___x_5323_);
v___x_5325_ = v_reuseFailAlloc_5333_;
goto v_reusejp_5324_;
}
v_reusejp_5324_:
{
lean_object* v___x_5326_; lean_object* v___x_5327_; lean_object* v___x_5328_; lean_object* v___x_5329_; lean_object* v_msgData_5330_; lean_object* v___x_5331_; lean_object* v___x_5332_; 
v___x_5326_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___closed__2);
v___x_5327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5327_, 0, v___x_5325_);
lean_ctor_set(v___x_5327_, 1, v___x_5326_);
v___x_5328_ = l_Lean_MessageData_ofSyntax(v_after_5319_);
v___x_5329_ = l_Lean_indentD(v___x_5328_);
v_msgData_5330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_5330_, 0, v___x_5327_);
lean_ctor_set(v_msgData_5330_, 1, v___x_5329_);
v___x_5331_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1_spec__3(v_msgData_5330_, v_macroStack_5310_);
v___x_5332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5332_, 0, v___x_5331_);
return v___x_5332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg___boxed(lean_object* v_msgData_5336_, lean_object* v_macroStack_5337_, lean_object* v___y_5338_, lean_object* v___y_5339_){
_start:
{
lean_object* v_res_5340_; 
v_res_5340_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_5336_, v_macroStack_5337_, v___y_5338_);
lean_dec_ref(v___y_5338_);
return v_res_5340_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(lean_object* v_msg_5341_, lean_object* v___y_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_){
_start:
{
lean_object* v_ref_5349_; lean_object* v___x_5350_; lean_object* v_a_5351_; lean_object* v_macroStack_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v_a_5355_; lean_object* v___x_5357_; uint8_t v_isShared_5358_; uint8_t v_isSharedCheck_5363_; 
v_ref_5349_ = lean_ctor_get(v___y_5346_, 5);
v___x_5350_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_getLCtxId_spec__1_spec__1(v_msg_5341_, v___y_5344_, v___y_5345_, v___y_5346_, v___y_5347_);
v_a_5351_ = lean_ctor_get(v___x_5350_, 0);
lean_inc(v_a_5351_);
lean_dec_ref(v___x_5350_);
v_macroStack_5352_ = lean_ctor_get(v___y_5342_, 1);
v___x_5353_ = l_Lean_Elab_getBetterRef(v_ref_5349_, v_macroStack_5352_);
lean_inc(v_macroStack_5352_);
v___x_5354_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_a_5351_, v_macroStack_5352_, v___y_5346_);
v_a_5355_ = lean_ctor_get(v___x_5354_, 0);
v_isSharedCheck_5363_ = !lean_is_exclusive(v___x_5354_);
if (v_isSharedCheck_5363_ == 0)
{
v___x_5357_ = v___x_5354_;
v_isShared_5358_ = v_isSharedCheck_5363_;
goto v_resetjp_5356_;
}
else
{
lean_inc(v_a_5355_);
lean_dec(v___x_5354_);
v___x_5357_ = lean_box(0);
v_isShared_5358_ = v_isSharedCheck_5363_;
goto v_resetjp_5356_;
}
v_resetjp_5356_:
{
lean_object* v___x_5359_; lean_object* v___x_5361_; 
v___x_5359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5359_, 0, v___x_5353_);
lean_ctor_set(v___x_5359_, 1, v_a_5355_);
if (v_isShared_5358_ == 0)
{
lean_ctor_set_tag(v___x_5357_, 1);
lean_ctor_set(v___x_5357_, 0, v___x_5359_);
v___x_5361_ = v___x_5357_;
goto v_reusejp_5360_;
}
else
{
lean_object* v_reuseFailAlloc_5362_; 
v_reuseFailAlloc_5362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5362_, 0, v___x_5359_);
v___x_5361_ = v_reuseFailAlloc_5362_;
goto v_reusejp_5360_;
}
v_reusejp_5360_:
{
return v___x_5361_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg___boxed(lean_object* v_msg_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_){
_start:
{
lean_object* v_res_5372_; 
v_res_5372_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_5364_, v___y_5365_, v___y_5366_, v___y_5367_, v___y_5368_, v___y_5369_, v___y_5370_);
lean_dec(v___y_5370_);
lean_dec_ref(v___y_5369_);
lean_dec(v___y_5368_);
lean_dec_ref(v___y_5367_);
lean_dec(v___y_5366_);
lean_dec_ref(v___y_5365_);
return v_res_5372_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0(void){
_start:
{
lean_object* v___x_5373_; 
v___x_5373_ = lean_mk_string_unchecked("MVar not annotated as a recursive call:", 39, 39);
return v___x_5373_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1(void){
_start:
{
lean_object* v___x_5374_; lean_object* v___x_5375_; 
v___x_5374_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__0);
v___x_5375_ = l_Lean_stringToMessageData(v___x_5374_);
return v___x_5375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(lean_object* v_as_5376_, size_t v_sz_5377_, size_t v_i_5378_, lean_object* v_b_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_){
_start:
{
lean_object* v_a_5388_; uint8_t v___x_5392_; 
v___x_5392_ = lean_usize_dec_lt(v_i_5378_, v_sz_5377_);
if (v___x_5392_ == 0)
{
lean_object* v___x_5393_; 
v___x_5393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5393_, 0, v_b_5379_);
return v___x_5393_;
}
else
{
lean_object* v_a_5394_; lean_object* v___x_5395_; 
v_a_5394_ = lean_array_uget_borrowed(v_as_5376_, v_i_5378_);
lean_inc(v_a_5394_);
v___x_5395_ = l_Lean_MVarId_getType(v_a_5394_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
if (lean_obj_tag(v___x_5395_) == 0)
{
lean_object* v_a_5396_; lean_object* v___x_5397_; 
v_a_5396_ = lean_ctor_get(v___x_5395_, 0);
lean_inc(v_a_5396_);
lean_dec_ref(v___x_5395_);
lean_inc(v_a_5394_);
v___x_5397_ = l_Lean_MVarId_getType(v_a_5394_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
if (lean_obj_tag(v___x_5397_) == 0)
{
lean_object* v_a_5398_; lean_object* v___x_5399_; lean_object* v___x_5400_; 
v_a_5398_ = lean_ctor_get(v___x_5397_, 0);
lean_inc(v_a_5398_);
lean_dec_ref(v___x_5397_);
v___x_5399_ = lean_box(0);
v___x_5400_ = l_Lean_getRecAppSyntax_x3f(v_a_5398_);
lean_dec(v_a_5398_);
if (lean_obj_tag(v___x_5400_) == 1)
{
lean_object* v_val_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; 
v_val_5401_ = lean_ctor_get(v___x_5400_, 0);
lean_inc(v_val_5401_);
lean_dec_ref(v___x_5400_);
v___x_5402_ = l_Lean_Expr_mdataExpr_x21(v_a_5396_);
lean_dec(v_a_5396_);
lean_inc(v_a_5394_);
v___x_5403_ = l_Lean_MVarId_setType___redArg(v_a_5394_, v___x_5402_, v___y_5383_, v___y_5385_);
if (lean_obj_tag(v___x_5403_) == 0)
{
lean_object* v_fileName_5404_; lean_object* v_fileMap_5405_; lean_object* v_options_5406_; lean_object* v_currRecDepth_5407_; lean_object* v_maxRecDepth_5408_; lean_object* v_ref_5409_; lean_object* v_currNamespace_5410_; lean_object* v_openDecls_5411_; lean_object* v_initHeartbeats_5412_; lean_object* v_maxHeartbeats_5413_; lean_object* v_quotContext_5414_; lean_object* v_currMacroScope_5415_; uint8_t v_diag_5416_; lean_object* v_cancelTk_x3f_5417_; uint8_t v_suppressElabErrors_5418_; lean_object* v_inheritedTraceOptions_5419_; lean_object* v_ref_5420_; lean_object* v___x_5421_; lean_object* v___x_5422_; 
lean_dec_ref(v___x_5403_);
v_fileName_5404_ = lean_ctor_get(v___y_5384_, 0);
v_fileMap_5405_ = lean_ctor_get(v___y_5384_, 1);
v_options_5406_ = lean_ctor_get(v___y_5384_, 2);
v_currRecDepth_5407_ = lean_ctor_get(v___y_5384_, 3);
v_maxRecDepth_5408_ = lean_ctor_get(v___y_5384_, 4);
v_ref_5409_ = lean_ctor_get(v___y_5384_, 5);
v_currNamespace_5410_ = lean_ctor_get(v___y_5384_, 6);
v_openDecls_5411_ = lean_ctor_get(v___y_5384_, 7);
v_initHeartbeats_5412_ = lean_ctor_get(v___y_5384_, 8);
v_maxHeartbeats_5413_ = lean_ctor_get(v___y_5384_, 9);
v_quotContext_5414_ = lean_ctor_get(v___y_5384_, 10);
v_currMacroScope_5415_ = lean_ctor_get(v___y_5384_, 11);
v_diag_5416_ = lean_ctor_get_uint8(v___y_5384_, sizeof(void*)*14);
v_cancelTk_x3f_5417_ = lean_ctor_get(v___y_5384_, 12);
v_suppressElabErrors_5418_ = lean_ctor_get_uint8(v___y_5384_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_5419_ = lean_ctor_get(v___y_5384_, 13);
v_ref_5420_ = l_Lean_replaceRef(v_val_5401_, v_ref_5409_);
lean_dec(v_val_5401_);
lean_inc_ref(v_inheritedTraceOptions_5419_);
lean_inc(v_cancelTk_x3f_5417_);
lean_inc(v_currMacroScope_5415_);
lean_inc(v_quotContext_5414_);
lean_inc(v_maxHeartbeats_5413_);
lean_inc(v_initHeartbeats_5412_);
lean_inc(v_openDecls_5411_);
lean_inc(v_currNamespace_5410_);
lean_inc(v_maxRecDepth_5408_);
lean_inc(v_currRecDepth_5407_);
lean_inc_ref(v_options_5406_);
lean_inc_ref(v_fileMap_5405_);
lean_inc_ref(v_fileName_5404_);
v___x_5421_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_5421_, 0, v_fileName_5404_);
lean_ctor_set(v___x_5421_, 1, v_fileMap_5405_);
lean_ctor_set(v___x_5421_, 2, v_options_5406_);
lean_ctor_set(v___x_5421_, 3, v_currRecDepth_5407_);
lean_ctor_set(v___x_5421_, 4, v_maxRecDepth_5408_);
lean_ctor_set(v___x_5421_, 5, v_ref_5420_);
lean_ctor_set(v___x_5421_, 6, v_currNamespace_5410_);
lean_ctor_set(v___x_5421_, 7, v_openDecls_5411_);
lean_ctor_set(v___x_5421_, 8, v_initHeartbeats_5412_);
lean_ctor_set(v___x_5421_, 9, v_maxHeartbeats_5413_);
lean_ctor_set(v___x_5421_, 10, v_quotContext_5414_);
lean_ctor_set(v___x_5421_, 11, v_currMacroScope_5415_);
lean_ctor_set(v___x_5421_, 12, v_cancelTk_x3f_5417_);
lean_ctor_set(v___x_5421_, 13, v_inheritedTraceOptions_5419_);
lean_ctor_set_uint8(v___x_5421_, sizeof(void*)*14, v_diag_5416_);
lean_ctor_set_uint8(v___x_5421_, sizeof(void*)*14 + 1, v_suppressElabErrors_5418_);
lean_inc(v_a_5394_);
v___x_5422_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_applyDefaultDecrTactic(v_a_5394_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_, v___x_5421_, v___y_5385_);
lean_dec_ref(v___x_5421_);
if (lean_obj_tag(v___x_5422_) == 0)
{
lean_dec_ref(v___x_5422_);
v_a_5388_ = v___x_5399_;
goto v___jp_5387_;
}
else
{
return v___x_5422_;
}
}
else
{
lean_dec(v_val_5401_);
return v___x_5403_;
}
}
else
{
lean_object* v___x_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; 
lean_dec(v___x_5400_);
v___x_5423_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___closed__1);
v___x_5424_ = l_Lean_indentExpr(v_a_5396_);
v___x_5425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5425_, 0, v___x_5423_);
lean_ctor_set(v___x_5425_, 1, v___x_5424_);
v___x_5426_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v___x_5425_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
if (lean_obj_tag(v___x_5426_) == 0)
{
lean_dec_ref(v___x_5426_);
v_a_5388_ = v___x_5399_;
goto v___jp_5387_;
}
else
{
return v___x_5426_;
}
}
}
else
{
lean_object* v_a_5427_; lean_object* v___x_5429_; uint8_t v_isShared_5430_; uint8_t v_isSharedCheck_5434_; 
lean_dec(v_a_5396_);
v_a_5427_ = lean_ctor_get(v___x_5397_, 0);
v_isSharedCheck_5434_ = !lean_is_exclusive(v___x_5397_);
if (v_isSharedCheck_5434_ == 0)
{
v___x_5429_ = v___x_5397_;
v_isShared_5430_ = v_isSharedCheck_5434_;
goto v_resetjp_5428_;
}
else
{
lean_inc(v_a_5427_);
lean_dec(v___x_5397_);
v___x_5429_ = lean_box(0);
v_isShared_5430_ = v_isSharedCheck_5434_;
goto v_resetjp_5428_;
}
v_resetjp_5428_:
{
lean_object* v___x_5432_; 
if (v_isShared_5430_ == 0)
{
v___x_5432_ = v___x_5429_;
goto v_reusejp_5431_;
}
else
{
lean_object* v_reuseFailAlloc_5433_; 
v_reuseFailAlloc_5433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5433_, 0, v_a_5427_);
v___x_5432_ = v_reuseFailAlloc_5433_;
goto v_reusejp_5431_;
}
v_reusejp_5431_:
{
return v___x_5432_;
}
}
}
}
else
{
lean_object* v_a_5435_; lean_object* v___x_5437_; uint8_t v_isShared_5438_; uint8_t v_isSharedCheck_5442_; 
v_a_5435_ = lean_ctor_get(v___x_5395_, 0);
v_isSharedCheck_5442_ = !lean_is_exclusive(v___x_5395_);
if (v_isSharedCheck_5442_ == 0)
{
v___x_5437_ = v___x_5395_;
v_isShared_5438_ = v_isSharedCheck_5442_;
goto v_resetjp_5436_;
}
else
{
lean_inc(v_a_5435_);
lean_dec(v___x_5395_);
v___x_5437_ = lean_box(0);
v_isShared_5438_ = v_isSharedCheck_5442_;
goto v_resetjp_5436_;
}
v_resetjp_5436_:
{
lean_object* v___x_5440_; 
if (v_isShared_5438_ == 0)
{
v___x_5440_ = v___x_5437_;
goto v_reusejp_5439_;
}
else
{
lean_object* v_reuseFailAlloc_5441_; 
v_reuseFailAlloc_5441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5441_, 0, v_a_5435_);
v___x_5440_ = v_reuseFailAlloc_5441_;
goto v_reusejp_5439_;
}
v_reusejp_5439_:
{
return v___x_5440_;
}
}
}
}
v___jp_5387_:
{
size_t v___x_5389_; size_t v___x_5390_; 
v___x_5389_ = ((size_t)1ULL);
v___x_5390_ = lean_usize_add(v_i_5378_, v___x_5389_);
v_i_5378_ = v___x_5390_;
v_b_5379_ = v_a_5388_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2___boxed(lean_object* v_as_5443_, lean_object* v_sz_5444_, lean_object* v_i_5445_, lean_object* v_b_5446_, lean_object* v___y_5447_, lean_object* v___y_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_){
_start:
{
size_t v_sz_boxed_5454_; size_t v_i_boxed_5455_; lean_object* v_res_5456_; 
v_sz_boxed_5454_ = lean_unbox_usize(v_sz_5444_);
lean_dec(v_sz_5444_);
v_i_boxed_5455_ = lean_unbox_usize(v_i_5445_);
lean_dec(v_i_5445_);
v_res_5456_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v_as_5443_, v_sz_boxed_5454_, v_i_boxed_5455_, v_b_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_, v___y_5451_, v___y_5452_);
lean_dec(v___y_5452_);
lean_dec_ref(v___y_5451_);
lean_dec(v___y_5450_);
lean_dec_ref(v___y_5449_);
lean_dec(v___y_5448_);
lean_dec_ref(v___y_5447_);
lean_dec_ref(v_as_5443_);
return v_res_5456_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(lean_object* v_a_5457_, lean_object* v_trees_5458_, lean_object* v___y_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v___x_5468_; 
lean_inc(v___y_5466_);
lean_inc_ref(v___y_5465_);
lean_inc(v___y_5464_);
lean_inc_ref(v___y_5463_);
lean_inc(v___y_5462_);
lean_inc_ref(v___y_5461_);
lean_inc(v___y_5460_);
lean_inc_ref(v___y_5459_);
v___x_5468_ = lean_apply_9(v_a_5457_, v___y_5459_, v___y_5460_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_, lean_box(0));
if (lean_obj_tag(v___x_5468_) == 0)
{
lean_object* v_a_5469_; lean_object* v___x_5471_; uint8_t v_isShared_5472_; uint8_t v_isSharedCheck_5477_; 
v_a_5469_ = lean_ctor_get(v___x_5468_, 0);
v_isSharedCheck_5477_ = !lean_is_exclusive(v___x_5468_);
if (v_isSharedCheck_5477_ == 0)
{
v___x_5471_ = v___x_5468_;
v_isShared_5472_ = v_isSharedCheck_5477_;
goto v_resetjp_5470_;
}
else
{
lean_inc(v_a_5469_);
lean_dec(v___x_5468_);
v___x_5471_ = lean_box(0);
v_isShared_5472_ = v_isSharedCheck_5477_;
goto v_resetjp_5470_;
}
v_resetjp_5470_:
{
lean_object* v___x_5473_; lean_object* v___x_5475_; 
v___x_5473_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_5473_, 0, v_a_5469_);
lean_ctor_set(v___x_5473_, 1, v_trees_5458_);
if (v_isShared_5472_ == 0)
{
lean_ctor_set(v___x_5471_, 0, v___x_5473_);
v___x_5475_ = v___x_5471_;
goto v_reusejp_5474_;
}
else
{
lean_object* v_reuseFailAlloc_5476_; 
v_reuseFailAlloc_5476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5476_, 0, v___x_5473_);
v___x_5475_ = v_reuseFailAlloc_5476_;
goto v_reusejp_5474_;
}
v_reusejp_5474_:
{
return v___x_5475_;
}
}
}
else
{
lean_object* v_a_5478_; lean_object* v___x_5480_; uint8_t v_isShared_5481_; uint8_t v_isSharedCheck_5485_; 
lean_dec_ref(v_trees_5458_);
v_a_5478_ = lean_ctor_get(v___x_5468_, 0);
v_isSharedCheck_5485_ = !lean_is_exclusive(v___x_5468_);
if (v_isSharedCheck_5485_ == 0)
{
v___x_5480_ = v___x_5468_;
v_isShared_5481_ = v_isSharedCheck_5485_;
goto v_resetjp_5479_;
}
else
{
lean_inc(v_a_5478_);
lean_dec(v___x_5468_);
v___x_5480_ = lean_box(0);
v_isShared_5481_ = v_isSharedCheck_5485_;
goto v_resetjp_5479_;
}
v_resetjp_5479_:
{
lean_object* v___x_5483_; 
if (v_isShared_5481_ == 0)
{
v___x_5483_ = v___x_5480_;
goto v_reusejp_5482_;
}
else
{
lean_object* v_reuseFailAlloc_5484_; 
v_reuseFailAlloc_5484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5484_, 0, v_a_5478_);
v___x_5483_ = v_reuseFailAlloc_5484_;
goto v_reusejp_5482_;
}
v_reusejp_5482_:
{
return v___x_5483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed(lean_object* v_a_5486_, lean_object* v_trees_5487_, lean_object* v___y_5488_, lean_object* v___y_5489_, lean_object* v___y_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_, lean_object* v___y_5496_){
_start:
{
lean_object* v_res_5497_; 
v_res_5497_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1(v_a_5486_, v_trees_5487_, v___y_5488_, v___y_5489_, v___y_5490_, v___y_5491_, v___y_5492_, v___y_5493_, v___y_5494_, v___y_5495_);
lean_dec(v___y_5495_);
lean_dec_ref(v___y_5494_);
lean_dec(v___y_5493_);
lean_dec_ref(v___y_5492_);
lean_dec(v___y_5491_);
lean_dec_ref(v___y_5490_);
lean_dec(v___y_5489_);
lean_dec_ref(v___y_5488_);
return v_res_5497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(lean_object* v___y_5498_, lean_object* v_mkInfoTree_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_, lean_object* v_a_5507_, lean_object* v_a_x3f_5508_){
_start:
{
lean_object* v___x_5510_; lean_object* v_infoState_5511_; lean_object* v_trees_5512_; lean_object* v___x_5513_; 
v___x_5510_ = lean_st_ref_get(v___y_5498_);
v_infoState_5511_ = lean_ctor_get(v___x_5510_, 7);
lean_inc_ref(v_infoState_5511_);
lean_dec(v___x_5510_);
v_trees_5512_ = lean_ctor_get(v_infoState_5511_, 2);
lean_inc_ref(v_trees_5512_);
lean_dec_ref(v_infoState_5511_);
lean_inc(v___y_5498_);
lean_inc_ref(v___y_5506_);
lean_inc(v___y_5505_);
lean_inc_ref(v___y_5504_);
lean_inc(v___y_5503_);
lean_inc_ref(v___y_5502_);
lean_inc(v___y_5501_);
lean_inc_ref(v___y_5500_);
v___x_5513_ = lean_apply_10(v_mkInfoTree_5499_, v_trees_5512_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_, v___y_5506_, v___y_5498_, lean_box(0));
if (lean_obj_tag(v___x_5513_) == 0)
{
lean_object* v_a_5514_; lean_object* v___x_5516_; uint8_t v_isShared_5517_; uint8_t v_isSharedCheck_5552_; 
v_a_5514_ = lean_ctor_get(v___x_5513_, 0);
v_isSharedCheck_5552_ = !lean_is_exclusive(v___x_5513_);
if (v_isSharedCheck_5552_ == 0)
{
v___x_5516_ = v___x_5513_;
v_isShared_5517_ = v_isSharedCheck_5552_;
goto v_resetjp_5515_;
}
else
{
lean_inc(v_a_5514_);
lean_dec(v___x_5513_);
v___x_5516_ = lean_box(0);
v_isShared_5517_ = v_isSharedCheck_5552_;
goto v_resetjp_5515_;
}
v_resetjp_5515_:
{
lean_object* v___x_5518_; lean_object* v_infoState_5519_; lean_object* v_env_5520_; lean_object* v_nextMacroScope_5521_; lean_object* v_ngen_5522_; lean_object* v_auxDeclNGen_5523_; lean_object* v_traceState_5524_; lean_object* v_cache_5525_; lean_object* v_messages_5526_; lean_object* v_snapshotTasks_5527_; lean_object* v___x_5529_; uint8_t v_isShared_5530_; uint8_t v_isSharedCheck_5551_; 
v___x_5518_ = lean_st_ref_take(v___y_5498_);
v_infoState_5519_ = lean_ctor_get(v___x_5518_, 7);
v_env_5520_ = lean_ctor_get(v___x_5518_, 0);
v_nextMacroScope_5521_ = lean_ctor_get(v___x_5518_, 1);
v_ngen_5522_ = lean_ctor_get(v___x_5518_, 2);
v_auxDeclNGen_5523_ = lean_ctor_get(v___x_5518_, 3);
v_traceState_5524_ = lean_ctor_get(v___x_5518_, 4);
v_cache_5525_ = lean_ctor_get(v___x_5518_, 5);
v_messages_5526_ = lean_ctor_get(v___x_5518_, 6);
v_snapshotTasks_5527_ = lean_ctor_get(v___x_5518_, 8);
v_isSharedCheck_5551_ = !lean_is_exclusive(v___x_5518_);
if (v_isSharedCheck_5551_ == 0)
{
v___x_5529_ = v___x_5518_;
v_isShared_5530_ = v_isSharedCheck_5551_;
goto v_resetjp_5528_;
}
else
{
lean_inc(v_snapshotTasks_5527_);
lean_inc(v_infoState_5519_);
lean_inc(v_messages_5526_);
lean_inc(v_cache_5525_);
lean_inc(v_traceState_5524_);
lean_inc(v_auxDeclNGen_5523_);
lean_inc(v_ngen_5522_);
lean_inc(v_nextMacroScope_5521_);
lean_inc(v_env_5520_);
lean_dec(v___x_5518_);
v___x_5529_ = lean_box(0);
v_isShared_5530_ = v_isSharedCheck_5551_;
goto v_resetjp_5528_;
}
v_resetjp_5528_:
{
uint8_t v_enabled_5531_; lean_object* v_assignment_5532_; lean_object* v_lazyAssignment_5533_; lean_object* v___x_5535_; uint8_t v_isShared_5536_; uint8_t v_isSharedCheck_5549_; 
v_enabled_5531_ = lean_ctor_get_uint8(v_infoState_5519_, sizeof(void*)*3);
v_assignment_5532_ = lean_ctor_get(v_infoState_5519_, 0);
v_lazyAssignment_5533_ = lean_ctor_get(v_infoState_5519_, 1);
v_isSharedCheck_5549_ = !lean_is_exclusive(v_infoState_5519_);
if (v_isSharedCheck_5549_ == 0)
{
lean_object* v_unused_5550_; 
v_unused_5550_ = lean_ctor_get(v_infoState_5519_, 2);
lean_dec(v_unused_5550_);
v___x_5535_ = v_infoState_5519_;
v_isShared_5536_ = v_isSharedCheck_5549_;
goto v_resetjp_5534_;
}
else
{
lean_inc(v_lazyAssignment_5533_);
lean_inc(v_assignment_5532_);
lean_dec(v_infoState_5519_);
v___x_5535_ = lean_box(0);
v_isShared_5536_ = v_isSharedCheck_5549_;
goto v_resetjp_5534_;
}
v_resetjp_5534_:
{
lean_object* v___x_5537_; lean_object* v___x_5539_; 
v___x_5537_ = l_Lean_PersistentArray_push___redArg(v_a_5507_, v_a_5514_);
if (v_isShared_5536_ == 0)
{
lean_ctor_set(v___x_5535_, 2, v___x_5537_);
v___x_5539_ = v___x_5535_;
goto v_reusejp_5538_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_assignment_5532_);
lean_ctor_set(v_reuseFailAlloc_5548_, 1, v_lazyAssignment_5533_);
lean_ctor_set(v_reuseFailAlloc_5548_, 2, v___x_5537_);
lean_ctor_set_uint8(v_reuseFailAlloc_5548_, sizeof(void*)*3, v_enabled_5531_);
v___x_5539_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5538_;
}
v_reusejp_5538_:
{
lean_object* v___x_5541_; 
if (v_isShared_5530_ == 0)
{
lean_ctor_set(v___x_5529_, 7, v___x_5539_);
v___x_5541_ = v___x_5529_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v_env_5520_);
lean_ctor_set(v_reuseFailAlloc_5547_, 1, v_nextMacroScope_5521_);
lean_ctor_set(v_reuseFailAlloc_5547_, 2, v_ngen_5522_);
lean_ctor_set(v_reuseFailAlloc_5547_, 3, v_auxDeclNGen_5523_);
lean_ctor_set(v_reuseFailAlloc_5547_, 4, v_traceState_5524_);
lean_ctor_set(v_reuseFailAlloc_5547_, 5, v_cache_5525_);
lean_ctor_set(v_reuseFailAlloc_5547_, 6, v_messages_5526_);
lean_ctor_set(v_reuseFailAlloc_5547_, 7, v___x_5539_);
lean_ctor_set(v_reuseFailAlloc_5547_, 8, v_snapshotTasks_5527_);
v___x_5541_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
lean_object* v___x_5542_; lean_object* v___x_5543_; lean_object* v___x_5545_; 
v___x_5542_ = lean_st_ref_set(v___y_5498_, v___x_5541_);
v___x_5543_ = lean_box(0);
if (v_isShared_5517_ == 0)
{
lean_ctor_set(v___x_5516_, 0, v___x_5543_);
v___x_5545_ = v___x_5516_;
goto v_reusejp_5544_;
}
else
{
lean_object* v_reuseFailAlloc_5546_; 
v_reuseFailAlloc_5546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5546_, 0, v___x_5543_);
v___x_5545_ = v_reuseFailAlloc_5546_;
goto v_reusejp_5544_;
}
v_reusejp_5544_:
{
return v___x_5545_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5553_; lean_object* v___x_5555_; uint8_t v_isShared_5556_; uint8_t v_isSharedCheck_5560_; 
lean_dec_ref(v_a_5507_);
v_a_5553_ = lean_ctor_get(v___x_5513_, 0);
v_isSharedCheck_5560_ = !lean_is_exclusive(v___x_5513_);
if (v_isSharedCheck_5560_ == 0)
{
v___x_5555_ = v___x_5513_;
v_isShared_5556_ = v_isSharedCheck_5560_;
goto v_resetjp_5554_;
}
else
{
lean_inc(v_a_5553_);
lean_dec(v___x_5513_);
v___x_5555_ = lean_box(0);
v_isShared_5556_ = v_isSharedCheck_5560_;
goto v_resetjp_5554_;
}
v_resetjp_5554_:
{
lean_object* v___x_5558_; 
if (v_isShared_5556_ == 0)
{
v___x_5558_ = v___x_5555_;
goto v_reusejp_5557_;
}
else
{
lean_object* v_reuseFailAlloc_5559_; 
v_reuseFailAlloc_5559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5559_, 0, v_a_5553_);
v___x_5558_ = v_reuseFailAlloc_5559_;
goto v_reusejp_5557_;
}
v_reusejp_5557_:
{
return v___x_5558_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0___boxed(lean_object* v___y_5561_, lean_object* v_mkInfoTree_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_, lean_object* v___y_5569_, lean_object* v_a_5570_, lean_object* v_a_x3f_5571_, lean_object* v___y_5572_){
_start:
{
lean_object* v_res_5573_; 
v_res_5573_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5561_, v_mkInfoTree_5562_, v___y_5563_, v___y_5564_, v___y_5565_, v___y_5566_, v___y_5567_, v___y_5568_, v___y_5569_, v_a_5570_, v_a_x3f_5571_);
lean_dec(v_a_x3f_5571_);
lean_dec_ref(v___y_5569_);
lean_dec(v___y_5568_);
lean_dec_ref(v___y_5567_);
lean_dec(v___y_5566_);
lean_dec_ref(v___y_5565_);
lean_dec(v___y_5564_);
lean_dec_ref(v___y_5563_);
lean_dec(v___y_5561_);
return v_res_5573_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_5574_; lean_object* v___x_5575_; lean_object* v___x_5576_; 
v___x_5574_ = lean_unsigned_to_nat(32u);
v___x_5575_ = lean_mk_empty_array_with_capacity(v___x_5574_);
v___x_5576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5576_, 0, v___x_5575_);
return v___x_5576_;
}
}
static lean_object* _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5582_; 
v___x_5577_ = ((size_t)5ULL);
v___x_5578_ = lean_unsigned_to_nat(0u);
v___x_5579_ = lean_unsigned_to_nat(32u);
v___x_5580_ = lean_mk_empty_array_with_capacity(v___x_5579_);
v___x_5581_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__0);
v___x_5582_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_5582_, 0, v___x_5581_);
lean_ctor_set(v___x_5582_, 1, v___x_5580_);
lean_ctor_set(v___x_5582_, 2, v___x_5578_);
lean_ctor_set(v___x_5582_, 3, v___x_5578_);
lean_ctor_set_usize(v___x_5582_, 4, v___x_5577_);
return v___x_5582_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(lean_object* v___y_5583_){
_start:
{
lean_object* v___x_5585_; lean_object* v_infoState_5586_; lean_object* v_trees_5587_; lean_object* v___x_5588_; lean_object* v_infoState_5589_; lean_object* v_env_5590_; lean_object* v_nextMacroScope_5591_; lean_object* v_ngen_5592_; lean_object* v_auxDeclNGen_5593_; lean_object* v_traceState_5594_; lean_object* v_cache_5595_; lean_object* v_messages_5596_; lean_object* v_snapshotTasks_5597_; lean_object* v___x_5599_; uint8_t v_isShared_5600_; uint8_t v_isSharedCheck_5618_; 
v___x_5585_ = lean_st_ref_get(v___y_5583_);
v_infoState_5586_ = lean_ctor_get(v___x_5585_, 7);
lean_inc_ref(v_infoState_5586_);
lean_dec(v___x_5585_);
v_trees_5587_ = lean_ctor_get(v_infoState_5586_, 2);
lean_inc_ref(v_trees_5587_);
lean_dec_ref(v_infoState_5586_);
v___x_5588_ = lean_st_ref_take(v___y_5583_);
v_infoState_5589_ = lean_ctor_get(v___x_5588_, 7);
v_env_5590_ = lean_ctor_get(v___x_5588_, 0);
v_nextMacroScope_5591_ = lean_ctor_get(v___x_5588_, 1);
v_ngen_5592_ = lean_ctor_get(v___x_5588_, 2);
v_auxDeclNGen_5593_ = lean_ctor_get(v___x_5588_, 3);
v_traceState_5594_ = lean_ctor_get(v___x_5588_, 4);
v_cache_5595_ = lean_ctor_get(v___x_5588_, 5);
v_messages_5596_ = lean_ctor_get(v___x_5588_, 6);
v_snapshotTasks_5597_ = lean_ctor_get(v___x_5588_, 8);
v_isSharedCheck_5618_ = !lean_is_exclusive(v___x_5588_);
if (v_isSharedCheck_5618_ == 0)
{
v___x_5599_ = v___x_5588_;
v_isShared_5600_ = v_isSharedCheck_5618_;
goto v_resetjp_5598_;
}
else
{
lean_inc(v_snapshotTasks_5597_);
lean_inc(v_infoState_5589_);
lean_inc(v_messages_5596_);
lean_inc(v_cache_5595_);
lean_inc(v_traceState_5594_);
lean_inc(v_auxDeclNGen_5593_);
lean_inc(v_ngen_5592_);
lean_inc(v_nextMacroScope_5591_);
lean_inc(v_env_5590_);
lean_dec(v___x_5588_);
v___x_5599_ = lean_box(0);
v_isShared_5600_ = v_isSharedCheck_5618_;
goto v_resetjp_5598_;
}
v_resetjp_5598_:
{
uint8_t v_enabled_5601_; lean_object* v_assignment_5602_; lean_object* v_lazyAssignment_5603_; lean_object* v___x_5605_; uint8_t v_isShared_5606_; uint8_t v_isSharedCheck_5616_; 
v_enabled_5601_ = lean_ctor_get_uint8(v_infoState_5589_, sizeof(void*)*3);
v_assignment_5602_ = lean_ctor_get(v_infoState_5589_, 0);
v_lazyAssignment_5603_ = lean_ctor_get(v_infoState_5589_, 1);
v_isSharedCheck_5616_ = !lean_is_exclusive(v_infoState_5589_);
if (v_isSharedCheck_5616_ == 0)
{
lean_object* v_unused_5617_; 
v_unused_5617_ = lean_ctor_get(v_infoState_5589_, 2);
lean_dec(v_unused_5617_);
v___x_5605_ = v_infoState_5589_;
v_isShared_5606_ = v_isSharedCheck_5616_;
goto v_resetjp_5604_;
}
else
{
lean_inc(v_lazyAssignment_5603_);
lean_inc(v_assignment_5602_);
lean_dec(v_infoState_5589_);
v___x_5605_ = lean_box(0);
v_isShared_5606_ = v_isSharedCheck_5616_;
goto v_resetjp_5604_;
}
v_resetjp_5604_:
{
lean_object* v___x_5607_; lean_object* v___x_5609_; 
v___x_5607_ = lean_obj_once(&l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1, &l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___closed__1);
if (v_isShared_5606_ == 0)
{
lean_ctor_set(v___x_5605_, 2, v___x_5607_);
v___x_5609_ = v___x_5605_;
goto v_reusejp_5608_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v_assignment_5602_);
lean_ctor_set(v_reuseFailAlloc_5615_, 1, v_lazyAssignment_5603_);
lean_ctor_set(v_reuseFailAlloc_5615_, 2, v___x_5607_);
lean_ctor_set_uint8(v_reuseFailAlloc_5615_, sizeof(void*)*3, v_enabled_5601_);
v___x_5609_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5608_;
}
v_reusejp_5608_:
{
lean_object* v___x_5611_; 
if (v_isShared_5600_ == 0)
{
lean_ctor_set(v___x_5599_, 7, v___x_5609_);
v___x_5611_ = v___x_5599_;
goto v_reusejp_5610_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_env_5590_);
lean_ctor_set(v_reuseFailAlloc_5614_, 1, v_nextMacroScope_5591_);
lean_ctor_set(v_reuseFailAlloc_5614_, 2, v_ngen_5592_);
lean_ctor_set(v_reuseFailAlloc_5614_, 3, v_auxDeclNGen_5593_);
lean_ctor_set(v_reuseFailAlloc_5614_, 4, v_traceState_5594_);
lean_ctor_set(v_reuseFailAlloc_5614_, 5, v_cache_5595_);
lean_ctor_set(v_reuseFailAlloc_5614_, 6, v_messages_5596_);
lean_ctor_set(v_reuseFailAlloc_5614_, 7, v___x_5609_);
lean_ctor_set(v_reuseFailAlloc_5614_, 8, v_snapshotTasks_5597_);
v___x_5611_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5610_;
}
v_reusejp_5610_:
{
lean_object* v___x_5612_; lean_object* v___x_5613_; 
v___x_5612_ = lean_st_ref_set(v___y_5583_, v___x_5611_);
v___x_5613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5613_, 0, v_trees_5587_);
return v___x_5613_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg___boxed(lean_object* v___y_5619_, lean_object* v___y_5620_){
_start:
{
lean_object* v_res_5621_; 
v_res_5621_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5619_);
lean_dec(v___y_5619_);
return v_res_5621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(lean_object* v_x_5622_, lean_object* v_mkInfoTree_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_, lean_object* v___y_5627_, lean_object* v___y_5628_, lean_object* v___y_5629_, lean_object* v___y_5630_, lean_object* v___y_5631_){
_start:
{
lean_object* v___x_5633_; lean_object* v_infoState_5634_; uint8_t v_enabled_5635_; 
v___x_5633_ = lean_st_ref_get(v___y_5631_);
v_infoState_5634_ = lean_ctor_get(v___x_5633_, 7);
lean_inc_ref(v_infoState_5634_);
lean_dec(v___x_5633_);
v_enabled_5635_ = lean_ctor_get_uint8(v_infoState_5634_, sizeof(void*)*3);
lean_dec_ref(v_infoState_5634_);
if (v_enabled_5635_ == 0)
{
lean_object* v___x_5636_; 
lean_dec_ref(v_mkInfoTree_5623_);
lean_inc(v___y_5631_);
lean_inc_ref(v___y_5630_);
lean_inc(v___y_5629_);
lean_inc_ref(v___y_5628_);
lean_inc(v___y_5627_);
lean_inc_ref(v___y_5626_);
lean_inc(v___y_5625_);
lean_inc_ref(v___y_5624_);
v___x_5636_ = lean_apply_9(v_x_5622_, v___y_5624_, v___y_5625_, v___y_5626_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_, v___y_5631_, lean_box(0));
return v___x_5636_;
}
else
{
lean_object* v___x_5637_; lean_object* v_a_5638_; lean_object* v_r_5639_; 
v___x_5637_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_5631_);
v_a_5638_ = lean_ctor_get(v___x_5637_, 0);
lean_inc(v_a_5638_);
lean_dec_ref(v___x_5637_);
lean_inc(v___y_5631_);
lean_inc_ref(v___y_5630_);
lean_inc(v___y_5629_);
lean_inc_ref(v___y_5628_);
lean_inc(v___y_5627_);
lean_inc_ref(v___y_5626_);
lean_inc(v___y_5625_);
lean_inc_ref(v___y_5624_);
v_r_5639_ = lean_apply_9(v_x_5622_, v___y_5624_, v___y_5625_, v___y_5626_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_, v___y_5631_, lean_box(0));
if (lean_obj_tag(v_r_5639_) == 0)
{
lean_object* v_a_5640_; lean_object* v___x_5642_; uint8_t v_isShared_5643_; uint8_t v_isSharedCheck_5664_; 
v_a_5640_ = lean_ctor_get(v_r_5639_, 0);
v_isSharedCheck_5664_ = !lean_is_exclusive(v_r_5639_);
if (v_isSharedCheck_5664_ == 0)
{
v___x_5642_ = v_r_5639_;
v_isShared_5643_ = v_isSharedCheck_5664_;
goto v_resetjp_5641_;
}
else
{
lean_inc(v_a_5640_);
lean_dec(v_r_5639_);
v___x_5642_ = lean_box(0);
v_isShared_5643_ = v_isSharedCheck_5664_;
goto v_resetjp_5641_;
}
v_resetjp_5641_:
{
lean_object* v___x_5645_; 
lean_inc(v_a_5640_);
if (v_isShared_5643_ == 0)
{
lean_ctor_set_tag(v___x_5642_, 1);
v___x_5645_ = v___x_5642_;
goto v_reusejp_5644_;
}
else
{
lean_object* v_reuseFailAlloc_5663_; 
v_reuseFailAlloc_5663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5663_, 0, v_a_5640_);
v___x_5645_ = v_reuseFailAlloc_5663_;
goto v_reusejp_5644_;
}
v_reusejp_5644_:
{
lean_object* v___x_5646_; 
v___x_5646_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5631_, v_mkInfoTree_5623_, v___y_5624_, v___y_5625_, v___y_5626_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_, v_a_5638_, v___x_5645_);
lean_dec_ref(v___x_5645_);
if (lean_obj_tag(v___x_5646_) == 0)
{
lean_object* v___x_5648_; uint8_t v_isShared_5649_; uint8_t v_isSharedCheck_5653_; 
v_isSharedCheck_5653_ = !lean_is_exclusive(v___x_5646_);
if (v_isSharedCheck_5653_ == 0)
{
lean_object* v_unused_5654_; 
v_unused_5654_ = lean_ctor_get(v___x_5646_, 0);
lean_dec(v_unused_5654_);
v___x_5648_ = v___x_5646_;
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
else
{
lean_dec(v___x_5646_);
v___x_5648_ = lean_box(0);
v_isShared_5649_ = v_isSharedCheck_5653_;
goto v_resetjp_5647_;
}
v_resetjp_5647_:
{
lean_object* v___x_5651_; 
if (v_isShared_5649_ == 0)
{
lean_ctor_set(v___x_5648_, 0, v_a_5640_);
v___x_5651_ = v___x_5648_;
goto v_reusejp_5650_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v_a_5640_);
v___x_5651_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5650_;
}
v_reusejp_5650_:
{
return v___x_5651_;
}
}
}
else
{
lean_object* v_a_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5662_; 
lean_dec(v_a_5640_);
v_a_5655_ = lean_ctor_get(v___x_5646_, 0);
v_isSharedCheck_5662_ = !lean_is_exclusive(v___x_5646_);
if (v_isSharedCheck_5662_ == 0)
{
v___x_5657_ = v___x_5646_;
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_a_5655_);
lean_dec(v___x_5646_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5662_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
lean_object* v___x_5660_; 
if (v_isShared_5658_ == 0)
{
v___x_5660_ = v___x_5657_;
goto v_reusejp_5659_;
}
else
{
lean_object* v_reuseFailAlloc_5661_; 
v_reuseFailAlloc_5661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5661_, 0, v_a_5655_);
v___x_5660_ = v_reuseFailAlloc_5661_;
goto v_reusejp_5659_;
}
v_reusejp_5659_:
{
return v___x_5660_;
}
}
}
}
}
}
else
{
lean_object* v_a_5665_; lean_object* v___x_5666_; lean_object* v___x_5667_; 
v_a_5665_ = lean_ctor_get(v_r_5639_, 0);
lean_inc(v_a_5665_);
lean_dec_ref(v_r_5639_);
v___x_5666_ = lean_box(0);
v___x_5667_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___lam__0(v___y_5631_, v_mkInfoTree_5623_, v___y_5624_, v___y_5625_, v___y_5626_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_, v_a_5638_, v___x_5666_);
if (lean_obj_tag(v___x_5667_) == 0)
{
lean_object* v___x_5669_; uint8_t v_isShared_5670_; uint8_t v_isSharedCheck_5674_; 
v_isSharedCheck_5674_ = !lean_is_exclusive(v___x_5667_);
if (v_isSharedCheck_5674_ == 0)
{
lean_object* v_unused_5675_; 
v_unused_5675_ = lean_ctor_get(v___x_5667_, 0);
lean_dec(v_unused_5675_);
v___x_5669_ = v___x_5667_;
v_isShared_5670_ = v_isSharedCheck_5674_;
goto v_resetjp_5668_;
}
else
{
lean_dec(v___x_5667_);
v___x_5669_ = lean_box(0);
v_isShared_5670_ = v_isSharedCheck_5674_;
goto v_resetjp_5668_;
}
v_resetjp_5668_:
{
lean_object* v___x_5672_; 
if (v_isShared_5670_ == 0)
{
lean_ctor_set_tag(v___x_5669_, 1);
lean_ctor_set(v___x_5669_, 0, v_a_5665_);
v___x_5672_ = v___x_5669_;
goto v_reusejp_5671_;
}
else
{
lean_object* v_reuseFailAlloc_5673_; 
v_reuseFailAlloc_5673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5673_, 0, v_a_5665_);
v___x_5672_ = v_reuseFailAlloc_5673_;
goto v_reusejp_5671_;
}
v_reusejp_5671_:
{
return v___x_5672_;
}
}
}
else
{
lean_object* v_a_5676_; lean_object* v___x_5678_; uint8_t v_isShared_5679_; uint8_t v_isSharedCheck_5683_; 
lean_dec(v_a_5665_);
v_a_5676_ = lean_ctor_get(v___x_5667_, 0);
v_isSharedCheck_5683_ = !lean_is_exclusive(v___x_5667_);
if (v_isSharedCheck_5683_ == 0)
{
v___x_5678_ = v___x_5667_;
v_isShared_5679_ = v_isSharedCheck_5683_;
goto v_resetjp_5677_;
}
else
{
lean_inc(v_a_5676_);
lean_dec(v___x_5667_);
v___x_5678_ = lean_box(0);
v_isShared_5679_ = v_isSharedCheck_5683_;
goto v_resetjp_5677_;
}
v_resetjp_5677_:
{
lean_object* v___x_5681_; 
if (v_isShared_5679_ == 0)
{
v___x_5681_ = v___x_5678_;
goto v_reusejp_5680_;
}
else
{
lean_object* v_reuseFailAlloc_5682_; 
v_reuseFailAlloc_5682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5682_, 0, v_a_5676_);
v___x_5681_ = v_reuseFailAlloc_5682_;
goto v_reusejp_5680_;
}
v_reusejp_5680_:
{
return v___x_5681_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg___boxed(lean_object* v_x_5684_, lean_object* v_mkInfoTree_5685_, lean_object* v___y_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_, lean_object* v___y_5693_, lean_object* v___y_5694_){
_start:
{
lean_object* v_res_5695_; 
v_res_5695_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_5684_, v_mkInfoTree_5685_, v___y_5686_, v___y_5687_, v___y_5688_, v___y_5689_, v___y_5690_, v___y_5691_, v___y_5692_, v___y_5693_);
lean_dec(v___y_5693_);
lean_dec_ref(v___y_5692_);
lean_dec(v___y_5691_);
lean_dec_ref(v___y_5690_);
lean_dec(v___y_5689_);
lean_dec_ref(v___y_5688_);
lean_dec(v___y_5687_);
lean_dec_ref(v___y_5686_);
return v_res_5695_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(lean_object* v___x_5696_, lean_object* v_ref_5697_, lean_object* v_tactic_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_, lean_object* v___y_5703_, lean_object* v___y_5704_, lean_object* v___y_5705_, lean_object* v___y_5706_){
_start:
{
lean_object* v___x_5708_; 
v___x_5708_ = l_Lean_Elab_Tactic_setGoals___redArg(v___x_5696_, v___y_5700_, v___y_5706_);
if (lean_obj_tag(v___x_5708_) == 0)
{
lean_object* v___x_5709_; 
lean_dec_ref(v___x_5708_);
v___x_5709_ = l_Lean_Elab_WF_applyCleanWfTactic(v___y_5699_, v___y_5700_, v___y_5701_, v___y_5702_, v___y_5703_, v___y_5704_, v___y_5705_, v___y_5706_);
if (lean_obj_tag(v___x_5709_) == 0)
{
lean_object* v___x_5710_; 
lean_dec_ref(v___x_5709_);
v___x_5710_ = l_Lean_Elab_Tactic_mkInitialTacticInfo(v_ref_5697_, v___y_5699_, v___y_5700_, v___y_5701_, v___y_5702_, v___y_5703_, v___y_5704_, v___y_5705_, v___y_5706_);
if (lean_obj_tag(v___x_5710_) == 0)
{
lean_object* v_a_5711_; lean_object* v___f_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; 
v_a_5711_ = lean_ctor_get(v___x_5710_, 0);
lean_inc(v_a_5711_);
lean_dec_ref(v___x_5710_);
v___f_5712_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__1___boxed), 11, 1);
lean_closure_set(v___f_5712_, 0, v_a_5711_);
v___x_5713_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_evalTactic___boxed), 10, 1);
lean_closure_set(v___x_5713_, 0, v_tactic_5698_);
v___x_5714_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v___x_5713_, v___f_5712_, v___y_5699_, v___y_5700_, v___y_5701_, v___y_5702_, v___y_5703_, v___y_5704_, v___y_5705_, v___y_5706_);
return v___x_5714_;
}
else
{
lean_object* v_a_5715_; lean_object* v___x_5717_; uint8_t v_isShared_5718_; uint8_t v_isSharedCheck_5722_; 
lean_dec(v_tactic_5698_);
v_a_5715_ = lean_ctor_get(v___x_5710_, 0);
v_isSharedCheck_5722_ = !lean_is_exclusive(v___x_5710_);
if (v_isSharedCheck_5722_ == 0)
{
v___x_5717_ = v___x_5710_;
v_isShared_5718_ = v_isSharedCheck_5722_;
goto v_resetjp_5716_;
}
else
{
lean_inc(v_a_5715_);
lean_dec(v___x_5710_);
v___x_5717_ = lean_box(0);
v_isShared_5718_ = v_isSharedCheck_5722_;
goto v_resetjp_5716_;
}
v_resetjp_5716_:
{
lean_object* v___x_5720_; 
if (v_isShared_5718_ == 0)
{
v___x_5720_ = v___x_5717_;
goto v_reusejp_5719_;
}
else
{
lean_object* v_reuseFailAlloc_5721_; 
v_reuseFailAlloc_5721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5721_, 0, v_a_5715_);
v___x_5720_ = v_reuseFailAlloc_5721_;
goto v_reusejp_5719_;
}
v_reusejp_5719_:
{
return v___x_5720_;
}
}
}
}
else
{
lean_dec(v_tactic_5698_);
lean_dec(v_ref_5697_);
return v___x_5709_;
}
}
else
{
lean_dec(v_tactic_5698_);
lean_dec(v_ref_5697_);
return v___x_5708_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed(lean_object* v___x_5723_, lean_object* v_ref_5724_, lean_object* v_tactic_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_, lean_object* v___y_5731_, lean_object* v___y_5732_, lean_object* v___y_5733_, lean_object* v___y_5734_){
_start:
{
lean_object* v_res_5735_; 
v_res_5735_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2(v___x_5723_, v_ref_5724_, v_tactic_5725_, v___y_5726_, v___y_5727_, v___y_5728_, v___y_5729_, v___y_5730_, v___y_5731_, v___y_5732_, v___y_5733_);
lean_dec(v___y_5733_);
lean_dec_ref(v___y_5732_);
lean_dec(v___y_5731_);
lean_dec_ref(v___y_5730_);
lean_dec(v___y_5729_);
lean_dec_ref(v___y_5728_);
lean_dec(v___y_5727_);
lean_dec_ref(v___y_5726_);
return v_res_5735_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(lean_object* v_as_5736_, size_t v_i_5737_, size_t v_stop_5738_, lean_object* v_b_5739_, lean_object* v___y_5740_, lean_object* v___y_5741_, lean_object* v___y_5742_, lean_object* v___y_5743_){
_start:
{
uint8_t v___x_5745_; 
v___x_5745_ = lean_usize_dec_eq(v_i_5737_, v_stop_5738_);
if (v___x_5745_ == 0)
{
lean_object* v___x_5746_; lean_object* v___x_5747_; 
v___x_5746_ = lean_array_uget_borrowed(v_as_5736_, v_i_5737_);
lean_inc(v___x_5746_);
v___x_5747_ = l_Lean_MVarId_getType(v___x_5746_, v___y_5740_, v___y_5741_, v___y_5742_, v___y_5743_);
if (lean_obj_tag(v___x_5747_) == 0)
{
lean_object* v_a_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; 
v_a_5748_ = lean_ctor_get(v___x_5747_, 0);
lean_inc(v_a_5748_);
lean_dec_ref(v___x_5747_);
v___x_5749_ = l_Lean_Expr_mdataExpr_x21(v_a_5748_);
lean_dec(v_a_5748_);
lean_inc(v___x_5746_);
v___x_5750_ = l_Lean_MVarId_setType___redArg(v___x_5746_, v___x_5749_, v___y_5741_, v___y_5743_);
if (lean_obj_tag(v___x_5750_) == 0)
{
lean_object* v_a_5751_; size_t v___x_5752_; size_t v___x_5753_; 
v_a_5751_ = lean_ctor_get(v___x_5750_, 0);
lean_inc(v_a_5751_);
lean_dec_ref(v___x_5750_);
v___x_5752_ = ((size_t)1ULL);
v___x_5753_ = lean_usize_add(v_i_5737_, v___x_5752_);
v_i_5737_ = v___x_5753_;
v_b_5739_ = v_a_5751_;
goto _start;
}
else
{
return v___x_5750_;
}
}
else
{
lean_object* v_a_5755_; lean_object* v___x_5757_; uint8_t v_isShared_5758_; uint8_t v_isSharedCheck_5762_; 
v_a_5755_ = lean_ctor_get(v___x_5747_, 0);
v_isSharedCheck_5762_ = !lean_is_exclusive(v___x_5747_);
if (v_isSharedCheck_5762_ == 0)
{
v___x_5757_ = v___x_5747_;
v_isShared_5758_ = v_isSharedCheck_5762_;
goto v_resetjp_5756_;
}
else
{
lean_inc(v_a_5755_);
lean_dec(v___x_5747_);
v___x_5757_ = lean_box(0);
v_isShared_5758_ = v_isSharedCheck_5762_;
goto v_resetjp_5756_;
}
v_resetjp_5756_:
{
lean_object* v___x_5760_; 
if (v_isShared_5758_ == 0)
{
v___x_5760_ = v___x_5757_;
goto v_reusejp_5759_;
}
else
{
lean_object* v_reuseFailAlloc_5761_; 
v_reuseFailAlloc_5761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5761_, 0, v_a_5755_);
v___x_5760_ = v_reuseFailAlloc_5761_;
goto v_reusejp_5759_;
}
v_reusejp_5759_:
{
return v___x_5760_;
}
}
}
}
else
{
lean_object* v___x_5763_; 
v___x_5763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5763_, 0, v_b_5739_);
return v___x_5763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg___boxed(lean_object* v_as_5764_, lean_object* v_i_5765_, lean_object* v_stop_5766_, lean_object* v_b_5767_, lean_object* v___y_5768_, lean_object* v___y_5769_, lean_object* v___y_5770_, lean_object* v___y_5771_, lean_object* v___y_5772_){
_start:
{
size_t v_i_boxed_5773_; size_t v_stop_boxed_5774_; lean_object* v_res_5775_; 
v_i_boxed_5773_ = lean_unbox_usize(v_i_5765_);
lean_dec(v_i_5765_);
v_stop_boxed_5774_ = lean_unbox_usize(v_stop_5766_);
lean_dec(v_stop_5766_);
v_res_5775_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_5764_, v_i_boxed_5773_, v_stop_boxed_5774_, v_b_5767_, v___y_5768_, v___y_5769_, v___y_5770_, v___y_5771_);
lean_dec(v___y_5771_);
lean_dec_ref(v___y_5770_);
lean_dec(v___y_5769_);
lean_dec_ref(v___y_5768_);
lean_dec_ref(v_as_5764_);
return v_res_5775_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(lean_object* v___x_5776_, lean_object* v___x_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_, lean_object* v___y_5780_, lean_object* v___y_5781_, lean_object* v___y_5782_, lean_object* v___y_5783_){
_start:
{
if (lean_obj_tag(v___x_5776_) == 0)
{
lean_object* v___x_5785_; size_t v_sz_5786_; size_t v___x_5787_; lean_object* v___x_5788_; 
v___x_5785_ = lean_box(0);
v_sz_5786_ = lean_array_size(v___x_5777_);
v___x_5787_ = ((size_t)0ULL);
v___x_5788_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__2(v___x_5777_, v_sz_5786_, v___x_5787_, v___x_5785_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_, v___y_5782_, v___y_5783_);
lean_dec_ref(v___x_5777_);
if (lean_obj_tag(v___x_5788_) == 0)
{
lean_object* v___x_5790_; uint8_t v_isShared_5791_; uint8_t v_isSharedCheck_5795_; 
v_isSharedCheck_5795_ = !lean_is_exclusive(v___x_5788_);
if (v_isSharedCheck_5795_ == 0)
{
lean_object* v_unused_5796_; 
v_unused_5796_ = lean_ctor_get(v___x_5788_, 0);
lean_dec(v_unused_5796_);
v___x_5790_ = v___x_5788_;
v_isShared_5791_ = v_isSharedCheck_5795_;
goto v_resetjp_5789_;
}
else
{
lean_dec(v___x_5788_);
v___x_5790_ = lean_box(0);
v_isShared_5791_ = v_isSharedCheck_5795_;
goto v_resetjp_5789_;
}
v_resetjp_5789_:
{
lean_object* v___x_5793_; 
if (v_isShared_5791_ == 0)
{
lean_ctor_set(v___x_5790_, 0, v___x_5785_);
v___x_5793_ = v___x_5790_;
goto v_reusejp_5792_;
}
else
{
lean_object* v_reuseFailAlloc_5794_; 
v_reuseFailAlloc_5794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5794_, 0, v___x_5785_);
v___x_5793_ = v_reuseFailAlloc_5794_;
goto v_reusejp_5792_;
}
v_reusejp_5792_:
{
return v___x_5793_;
}
}
}
else
{
return v___x_5788_;
}
}
else
{
lean_object* v_val_5797_; lean_object* v___x_5799_; uint8_t v_isShared_5800_; uint8_t v_isSharedCheck_5876_; 
v_val_5797_ = lean_ctor_get(v___x_5776_, 0);
v_isSharedCheck_5876_ = !lean_is_exclusive(v___x_5776_);
if (v_isSharedCheck_5876_ == 0)
{
v___x_5799_ = v___x_5776_;
v_isShared_5800_ = v_isSharedCheck_5876_;
goto v_resetjp_5798_;
}
else
{
lean_inc(v_val_5797_);
lean_dec(v___x_5776_);
v___x_5799_ = lean_box(0);
v_isShared_5800_ = v_isSharedCheck_5876_;
goto v_resetjp_5798_;
}
v_resetjp_5798_:
{
lean_object* v_ref_5801_; lean_object* v_tactic_5802_; lean_object* v_fileName_5803_; lean_object* v_fileMap_5804_; lean_object* v_options_5805_; lean_object* v_currRecDepth_5806_; lean_object* v_maxRecDepth_5807_; lean_object* v_ref_5808_; lean_object* v_currNamespace_5809_; lean_object* v_openDecls_5810_; lean_object* v_initHeartbeats_5811_; lean_object* v_maxHeartbeats_5812_; lean_object* v_quotContext_5813_; lean_object* v_currMacroScope_5814_; uint8_t v_diag_5815_; lean_object* v_cancelTk_x3f_5816_; uint8_t v_suppressElabErrors_5817_; lean_object* v_inheritedTraceOptions_5818_; lean_object* v___x_5819_; lean_object* v___x_5820_; lean_object* v_ref_5821_; lean_object* v___x_5822_; lean_object* v___y_5849_; lean_object* v___y_5866_; uint8_t v___x_5867_; 
v_ref_5801_ = lean_ctor_get(v_val_5797_, 0);
lean_inc(v_ref_5801_);
v_tactic_5802_ = lean_ctor_get(v_val_5797_, 1);
lean_inc(v_tactic_5802_);
lean_dec(v_val_5797_);
v_fileName_5803_ = lean_ctor_get(v___y_5782_, 0);
v_fileMap_5804_ = lean_ctor_get(v___y_5782_, 1);
v_options_5805_ = lean_ctor_get(v___y_5782_, 2);
v_currRecDepth_5806_ = lean_ctor_get(v___y_5782_, 3);
v_maxRecDepth_5807_ = lean_ctor_get(v___y_5782_, 4);
v_ref_5808_ = lean_ctor_get(v___y_5782_, 5);
v_currNamespace_5809_ = lean_ctor_get(v___y_5782_, 6);
v_openDecls_5810_ = lean_ctor_get(v___y_5782_, 7);
v_initHeartbeats_5811_ = lean_ctor_get(v___y_5782_, 8);
v_maxHeartbeats_5812_ = lean_ctor_get(v___y_5782_, 9);
v_quotContext_5813_ = lean_ctor_get(v___y_5782_, 10);
v_currMacroScope_5814_ = lean_ctor_get(v___y_5782_, 11);
v_diag_5815_ = lean_ctor_get_uint8(v___y_5782_, sizeof(void*)*14);
v_cancelTk_x3f_5816_ = lean_ctor_get(v___y_5782_, 12);
v_suppressElabErrors_5817_ = lean_ctor_get_uint8(v___y_5782_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_5818_ = lean_ctor_get(v___y_5782_, 13);
v___x_5819_ = lean_unsigned_to_nat(0u);
v___x_5820_ = lean_array_get_size(v___x_5777_);
v_ref_5821_ = l_Lean_replaceRef(v_ref_5801_, v_ref_5808_);
lean_inc_ref(v_inheritedTraceOptions_5818_);
lean_inc(v_cancelTk_x3f_5816_);
lean_inc(v_currMacroScope_5814_);
lean_inc(v_quotContext_5813_);
lean_inc(v_maxHeartbeats_5812_);
lean_inc(v_initHeartbeats_5811_);
lean_inc(v_openDecls_5810_);
lean_inc(v_currNamespace_5809_);
lean_inc(v_maxRecDepth_5807_);
lean_inc(v_currRecDepth_5806_);
lean_inc_ref(v_options_5805_);
lean_inc_ref(v_fileMap_5804_);
lean_inc_ref(v_fileName_5803_);
v___x_5822_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_5822_, 0, v_fileName_5803_);
lean_ctor_set(v___x_5822_, 1, v_fileMap_5804_);
lean_ctor_set(v___x_5822_, 2, v_options_5805_);
lean_ctor_set(v___x_5822_, 3, v_currRecDepth_5806_);
lean_ctor_set(v___x_5822_, 4, v_maxRecDepth_5807_);
lean_ctor_set(v___x_5822_, 5, v_ref_5821_);
lean_ctor_set(v___x_5822_, 6, v_currNamespace_5809_);
lean_ctor_set(v___x_5822_, 7, v_openDecls_5810_);
lean_ctor_set(v___x_5822_, 8, v_initHeartbeats_5811_);
lean_ctor_set(v___x_5822_, 9, v_maxHeartbeats_5812_);
lean_ctor_set(v___x_5822_, 10, v_quotContext_5813_);
lean_ctor_set(v___x_5822_, 11, v_currMacroScope_5814_);
lean_ctor_set(v___x_5822_, 12, v_cancelTk_x3f_5816_);
lean_ctor_set(v___x_5822_, 13, v_inheritedTraceOptions_5818_);
lean_ctor_set_uint8(v___x_5822_, sizeof(void*)*14, v_diag_5815_);
lean_ctor_set_uint8(v___x_5822_, sizeof(void*)*14 + 1, v_suppressElabErrors_5817_);
v___x_5867_ = lean_nat_dec_lt(v___x_5819_, v___x_5820_);
if (v___x_5867_ == 0)
{
goto v___jp_5850_;
}
else
{
lean_object* v___x_5868_; uint8_t v___x_5869_; 
v___x_5868_ = lean_box(0);
v___x_5869_ = lean_nat_dec_le(v___x_5820_, v___x_5820_);
if (v___x_5869_ == 0)
{
if (v___x_5867_ == 0)
{
goto v___jp_5850_;
}
else
{
size_t v___x_5870_; size_t v___x_5871_; lean_object* v___x_5872_; 
v___x_5870_ = ((size_t)0ULL);
v___x_5871_ = lean_usize_of_nat(v___x_5820_);
v___x_5872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v___x_5777_, v___x_5870_, v___x_5871_, v___x_5868_, v___y_5780_, v___y_5781_, v___x_5822_, v___y_5783_);
v___y_5866_ = v___x_5872_;
goto v___jp_5865_;
}
}
else
{
size_t v___x_5873_; size_t v___x_5874_; lean_object* v___x_5875_; 
v___x_5873_ = ((size_t)0ULL);
v___x_5874_ = lean_usize_of_nat(v___x_5820_);
v___x_5875_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v___x_5777_, v___x_5873_, v___x_5874_, v___x_5868_, v___y_5780_, v___y_5781_, v___x_5822_, v___y_5783_);
v___y_5866_ = v___x_5875_;
goto v___jp_5865_;
}
}
v___jp_5823_:
{
lean_object* v___x_5824_; lean_object* v___x_5825_; lean_object* v___x_5826_; lean_object* v___f_5827_; lean_object* v___x_5828_; 
v___x_5824_ = lean_box(0);
v___x_5825_ = lean_array_get(v___x_5824_, v___x_5777_, v___x_5819_);
v___x_5826_ = lean_array_to_list(v___x_5777_);
v___f_5827_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__2___boxed), 12, 3);
lean_closure_set(v___f_5827_, 0, v___x_5826_);
lean_closure_set(v___f_5827_, 1, v_ref_5801_);
lean_closure_set(v___f_5827_, 2, v_tactic_5802_);
v___x_5828_ = l_Lean_Elab_Tactic_run(v___x_5825_, v___f_5827_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_, v___x_5822_, v___y_5783_);
if (lean_obj_tag(v___x_5828_) == 0)
{
lean_object* v_a_5829_; lean_object* v___x_5831_; uint8_t v_isShared_5832_; uint8_t v_isSharedCheck_5839_; 
v_a_5829_ = lean_ctor_get(v___x_5828_, 0);
v_isSharedCheck_5839_ = !lean_is_exclusive(v___x_5828_);
if (v_isSharedCheck_5839_ == 0)
{
v___x_5831_ = v___x_5828_;
v_isShared_5832_ = v_isSharedCheck_5839_;
goto v_resetjp_5830_;
}
else
{
lean_inc(v_a_5829_);
lean_dec(v___x_5828_);
v___x_5831_ = lean_box(0);
v_isShared_5832_ = v_isSharedCheck_5839_;
goto v_resetjp_5830_;
}
v_resetjp_5830_:
{
uint8_t v___x_5833_; 
v___x_5833_ = l_List_isEmpty___redArg(v_a_5829_);
if (v___x_5833_ == 0)
{
lean_object* v___x_5834_; 
lean_del_object(v___x_5831_);
v___x_5834_ = l_Lean_Elab_Term_reportUnsolvedGoals(v_a_5829_, v___y_5780_, v___y_5781_, v___x_5822_, v___y_5783_);
lean_dec_ref(v___x_5822_);
return v___x_5834_;
}
else
{
lean_object* v___x_5835_; lean_object* v___x_5837_; 
lean_dec(v_a_5829_);
lean_dec_ref(v___x_5822_);
v___x_5835_ = lean_box(0);
if (v_isShared_5832_ == 0)
{
lean_ctor_set(v___x_5831_, 0, v___x_5835_);
v___x_5837_ = v___x_5831_;
goto v_reusejp_5836_;
}
else
{
lean_object* v_reuseFailAlloc_5838_; 
v_reuseFailAlloc_5838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5838_, 0, v___x_5835_);
v___x_5837_ = v_reuseFailAlloc_5838_;
goto v_reusejp_5836_;
}
v_reusejp_5836_:
{
return v___x_5837_;
}
}
}
}
else
{
lean_object* v_a_5840_; lean_object* v___x_5842_; uint8_t v_isShared_5843_; uint8_t v_isSharedCheck_5847_; 
lean_dec_ref(v___x_5822_);
v_a_5840_ = lean_ctor_get(v___x_5828_, 0);
v_isSharedCheck_5847_ = !lean_is_exclusive(v___x_5828_);
if (v_isSharedCheck_5847_ == 0)
{
v___x_5842_ = v___x_5828_;
v_isShared_5843_ = v_isSharedCheck_5847_;
goto v_resetjp_5841_;
}
else
{
lean_inc(v_a_5840_);
lean_dec(v___x_5828_);
v___x_5842_ = lean_box(0);
v_isShared_5843_ = v_isSharedCheck_5847_;
goto v_resetjp_5841_;
}
v_resetjp_5841_:
{
lean_object* v___x_5845_; 
if (v_isShared_5843_ == 0)
{
v___x_5845_ = v___x_5842_;
goto v_reusejp_5844_;
}
else
{
lean_object* v_reuseFailAlloc_5846_; 
v_reuseFailAlloc_5846_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5846_, 0, v_a_5840_);
v___x_5845_ = v_reuseFailAlloc_5846_;
goto v_reusejp_5844_;
}
v_reusejp_5844_:
{
return v___x_5845_;
}
}
}
}
v___jp_5848_:
{
if (lean_obj_tag(v___y_5849_) == 0)
{
lean_dec_ref(v___y_5849_);
goto v___jp_5823_;
}
else
{
lean_dec_ref(v___x_5822_);
lean_dec(v_tactic_5802_);
lean_dec(v_ref_5801_);
lean_dec_ref(v___x_5777_);
return v___y_5849_;
}
}
v___jp_5850_:
{
uint8_t v___x_5851_; 
v___x_5851_ = lean_nat_dec_eq(v___x_5820_, v___x_5819_);
if (v___x_5851_ == 0)
{
uint8_t v___x_5852_; 
lean_del_object(v___x_5799_);
v___x_5852_ = lean_nat_dec_lt(v___x_5819_, v___x_5820_);
if (v___x_5852_ == 0)
{
goto v___jp_5823_;
}
else
{
lean_object* v___x_5853_; uint8_t v___x_5854_; 
v___x_5853_ = lean_box(0);
v___x_5854_ = lean_nat_dec_le(v___x_5820_, v___x_5820_);
if (v___x_5854_ == 0)
{
if (v___x_5852_ == 0)
{
goto v___jp_5823_;
}
else
{
size_t v___x_5855_; size_t v___x_5856_; lean_object* v___x_5857_; 
v___x_5855_ = ((size_t)0ULL);
v___x_5856_ = lean_usize_of_nat(v___x_5820_);
v___x_5857_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v___x_5777_, v___x_5855_, v___x_5856_, v___x_5853_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_, v___x_5822_, v___y_5783_);
v___y_5849_ = v___x_5857_;
goto v___jp_5848_;
}
}
else
{
size_t v___x_5858_; size_t v___x_5859_; lean_object* v___x_5860_; 
v___x_5858_ = ((size_t)0ULL);
v___x_5859_ = lean_usize_of_nat(v___x_5820_);
v___x_5860_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__4(v___x_5777_, v___x_5858_, v___x_5859_, v___x_5853_, v___y_5778_, v___y_5779_, v___y_5780_, v___y_5781_, v___x_5822_, v___y_5783_);
v___y_5849_ = v___x_5860_;
goto v___jp_5848_;
}
}
}
else
{
lean_object* v___x_5861_; lean_object* v___x_5863_; 
lean_dec_ref(v___x_5822_);
lean_dec(v_tactic_5802_);
lean_dec(v_ref_5801_);
lean_dec_ref(v___x_5777_);
v___x_5861_ = lean_box(0);
if (v_isShared_5800_ == 0)
{
lean_ctor_set_tag(v___x_5799_, 0);
lean_ctor_set(v___x_5799_, 0, v___x_5861_);
v___x_5863_ = v___x_5799_;
goto v_reusejp_5862_;
}
else
{
lean_object* v_reuseFailAlloc_5864_; 
v_reuseFailAlloc_5864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5864_, 0, v___x_5861_);
v___x_5863_ = v_reuseFailAlloc_5864_;
goto v_reusejp_5862_;
}
v_reusejp_5862_:
{
return v___x_5863_;
}
}
}
v___jp_5865_:
{
if (lean_obj_tag(v___y_5866_) == 0)
{
lean_dec_ref(v___y_5866_);
goto v___jp_5850_;
}
else
{
lean_dec_ref(v___x_5822_);
lean_dec(v_tactic_5802_);
lean_dec(v_ref_5801_);
lean_del_object(v___x_5799_);
lean_dec_ref(v___x_5777_);
return v___y_5866_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed(lean_object* v___x_5877_, lean_object* v___x_5878_, lean_object* v___y_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_, lean_object* v___y_5882_, lean_object* v___y_5883_, lean_object* v___y_5884_, lean_object* v___y_5885_){
_start:
{
lean_object* v_res_5886_; 
v_res_5886_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3(v___x_5877_, v___x_5878_, v___y_5879_, v___y_5880_, v___y_5881_, v___y_5882_, v___y_5883_, v___y_5884_);
lean_dec(v___y_5884_);
lean_dec_ref(v___y_5883_);
lean_dec(v___y_5882_);
lean_dec_ref(v___y_5881_);
lean_dec(v___y_5880_);
lean_dec_ref(v___y_5879_);
return v_res_5886_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0(void){
_start:
{
lean_object* v___f_5887_; 
v___f_5887_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__0___boxed), 1, 0);
return v___f_5887_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1(void){
_start:
{
lean_object* v___x_5888_; lean_object* v___x_5889_; 
v___x_5888_ = lean_unsigned_to_nat(0u);
v___x_5889_ = lean_mk_empty_array_with_capacity(v___x_5888_);
return v___x_5889_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2(void){
_start:
{
lean_object* v___x_5890_; lean_object* v___x_5891_; lean_object* v___x_5892_; 
v___x_5890_ = lean_box(1);
v___x_5891_ = lean_box(0);
v___x_5892_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_5892_, 0, v___x_5891_);
lean_ctor_set(v___x_5892_, 1, v___x_5890_);
lean_ctor_set(v___x_5892_, 2, v___x_5891_);
lean_ctor_set(v___x_5892_, 3, v___x_5891_);
lean_ctor_set(v___x_5892_, 4, v___x_5891_);
lean_ctor_set(v___x_5892_, 5, v___x_5890_);
lean_ctor_set(v___x_5892_, 6, v___x_5891_);
return v___x_5892_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(lean_object* v_as_5893_, size_t v_sz_5894_, size_t v_i_5895_, lean_object* v_b_5896_, lean_object* v___y_5897_, lean_object* v___y_5898_, lean_object* v___y_5899_, lean_object* v___y_5900_){
_start:
{
uint8_t v___x_5902_; 
v___x_5902_ = lean_usize_dec_lt(v_i_5895_, v_sz_5894_);
if (v___x_5902_ == 0)
{
lean_object* v___x_5903_; 
v___x_5903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5903_, 0, v_b_5896_);
return v___x_5903_;
}
else
{
lean_object* v_snd_5904_; lean_object* v_fst_5905_; lean_object* v___x_5907_; uint8_t v_isShared_5908_; uint8_t v_isSharedCheck_5976_; 
v_snd_5904_ = lean_ctor_get(v_b_5896_, 1);
v_fst_5905_ = lean_ctor_get(v_b_5896_, 0);
v_isSharedCheck_5976_ = !lean_is_exclusive(v_b_5896_);
if (v_isSharedCheck_5976_ == 0)
{
v___x_5907_ = v_b_5896_;
v_isShared_5908_ = v_isSharedCheck_5976_;
goto v_resetjp_5906_;
}
else
{
lean_inc(v_snd_5904_);
lean_inc(v_fst_5905_);
lean_dec(v_b_5896_);
v___x_5907_ = lean_box(0);
v_isShared_5908_ = v_isSharedCheck_5976_;
goto v_resetjp_5906_;
}
v_resetjp_5906_:
{
lean_object* v_array_5909_; lean_object* v_start_5910_; lean_object* v_stop_5911_; uint8_t v___x_5912_; 
v_array_5909_ = lean_ctor_get(v_snd_5904_, 0);
v_start_5910_ = lean_ctor_get(v_snd_5904_, 1);
v_stop_5911_ = lean_ctor_get(v_snd_5904_, 2);
v___x_5912_ = lean_nat_dec_lt(v_start_5910_, v_stop_5911_);
if (v___x_5912_ == 0)
{
lean_object* v___x_5914_; 
if (v_isShared_5908_ == 0)
{
v___x_5914_ = v___x_5907_;
goto v_reusejp_5913_;
}
else
{
lean_object* v_reuseFailAlloc_5916_; 
v_reuseFailAlloc_5916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5916_, 0, v_fst_5905_);
lean_ctor_set(v_reuseFailAlloc_5916_, 1, v_snd_5904_);
v___x_5914_ = v_reuseFailAlloc_5916_;
goto v_reusejp_5913_;
}
v_reusejp_5913_:
{
lean_object* v___x_5915_; 
v___x_5915_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5915_, 0, v___x_5914_);
return v___x_5915_;
}
}
else
{
lean_object* v___x_5918_; uint8_t v_isShared_5919_; uint8_t v_isSharedCheck_5972_; 
lean_inc(v_stop_5911_);
lean_inc(v_start_5910_);
lean_inc_ref(v_array_5909_);
v_isSharedCheck_5972_ = !lean_is_exclusive(v_snd_5904_);
if (v_isSharedCheck_5972_ == 0)
{
lean_object* v_unused_5973_; lean_object* v_unused_5974_; lean_object* v_unused_5975_; 
v_unused_5973_ = lean_ctor_get(v_snd_5904_, 2);
lean_dec(v_unused_5973_);
v_unused_5974_ = lean_ctor_get(v_snd_5904_, 1);
lean_dec(v_unused_5974_);
v_unused_5975_ = lean_ctor_get(v_snd_5904_, 0);
lean_dec(v_unused_5975_);
v___x_5918_ = v_snd_5904_;
v_isShared_5919_ = v_isSharedCheck_5972_;
goto v_resetjp_5917_;
}
else
{
lean_dec(v_snd_5904_);
v___x_5918_ = lean_box(0);
v_isShared_5919_ = v_isSharedCheck_5972_;
goto v_resetjp_5917_;
}
v_resetjp_5917_:
{
lean_object* v_array_5920_; lean_object* v_start_5921_; lean_object* v_stop_5922_; lean_object* v___x_5923_; lean_object* v___x_5924_; lean_object* v___x_5925_; lean_object* v___x_5927_; 
v_array_5920_ = lean_ctor_get(v_fst_5905_, 0);
v_start_5921_ = lean_ctor_get(v_fst_5905_, 1);
v_stop_5922_ = lean_ctor_get(v_fst_5905_, 2);
v___x_5923_ = lean_array_fget(v_array_5909_, v_start_5910_);
v___x_5924_ = lean_unsigned_to_nat(1u);
v___x_5925_ = lean_nat_add(v_start_5910_, v___x_5924_);
lean_dec(v_start_5910_);
if (v_isShared_5919_ == 0)
{
lean_ctor_set(v___x_5918_, 1, v___x_5925_);
v___x_5927_ = v___x_5918_;
goto v_reusejp_5926_;
}
else
{
lean_object* v_reuseFailAlloc_5971_; 
v_reuseFailAlloc_5971_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5971_, 0, v_array_5909_);
lean_ctor_set(v_reuseFailAlloc_5971_, 1, v___x_5925_);
lean_ctor_set(v_reuseFailAlloc_5971_, 2, v_stop_5911_);
v___x_5927_ = v_reuseFailAlloc_5971_;
goto v_reusejp_5926_;
}
v_reusejp_5926_:
{
uint8_t v___x_5928_; 
v___x_5928_ = lean_nat_dec_lt(v_start_5921_, v_stop_5922_);
if (v___x_5928_ == 0)
{
lean_object* v___x_5930_; 
lean_dec(v___x_5923_);
if (v_isShared_5908_ == 0)
{
lean_ctor_set(v___x_5907_, 1, v___x_5927_);
v___x_5930_ = v___x_5907_;
goto v_reusejp_5929_;
}
else
{
lean_object* v_reuseFailAlloc_5932_; 
v_reuseFailAlloc_5932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5932_, 0, v_fst_5905_);
lean_ctor_set(v_reuseFailAlloc_5932_, 1, v___x_5927_);
v___x_5930_ = v_reuseFailAlloc_5932_;
goto v_reusejp_5929_;
}
v_reusejp_5929_:
{
lean_object* v___x_5931_; 
v___x_5931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5931_, 0, v___x_5930_);
return v___x_5931_;
}
}
else
{
lean_object* v___x_5934_; uint8_t v_isShared_5935_; uint8_t v_isSharedCheck_5967_; 
lean_inc(v_stop_5922_);
lean_inc(v_start_5921_);
lean_inc_ref(v_array_5920_);
v_isSharedCheck_5967_ = !lean_is_exclusive(v_fst_5905_);
if (v_isSharedCheck_5967_ == 0)
{
lean_object* v_unused_5968_; lean_object* v_unused_5969_; lean_object* v_unused_5970_; 
v_unused_5968_ = lean_ctor_get(v_fst_5905_, 2);
lean_dec(v_unused_5968_);
v_unused_5969_ = lean_ctor_get(v_fst_5905_, 1);
lean_dec(v_unused_5969_);
v_unused_5970_ = lean_ctor_get(v_fst_5905_, 0);
lean_dec(v_unused_5970_);
v___x_5934_ = v_fst_5905_;
v_isShared_5935_ = v_isSharedCheck_5967_;
goto v_resetjp_5933_;
}
else
{
lean_dec(v_fst_5905_);
v___x_5934_ = lean_box(0);
v_isShared_5935_ = v_isSharedCheck_5967_;
goto v_resetjp_5933_;
}
v_resetjp_5933_:
{
lean_object* v___f_5936_; lean_object* v_a_5937_; lean_object* v___x_5938_; lean_object* v___y_5939_; lean_object* v___x_5940_; lean_object* v___x_5941_; lean_object* v___x_5942_; lean_object* v___x_5943_; uint8_t v___x_5944_; lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5948_; 
v___f_5936_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__0);
v_a_5937_ = lean_array_uget_borrowed(v_as_5893_, v_i_5895_);
v___x_5938_ = lean_array_fget_borrowed(v_array_5920_, v_start_5921_);
lean_inc(v___x_5938_);
v___y_5939_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___lam__3___boxed), 9, 2);
lean_closure_set(v___y_5939_, 0, v___x_5923_);
lean_closure_set(v___y_5939_, 1, v___x_5938_);
lean_inc(v_a_5937_);
v___x_5940_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withDeclName___boxed), 10, 3);
lean_closure_set(v___x_5940_, 0, lean_box(0));
lean_closure_set(v___x_5940_, 1, v_a_5937_);
lean_closure_set(v___x_5940_, 2, v___y_5939_);
v___x_5941_ = lean_box(0);
v___x_5942_ = lean_box(0);
v___x_5943_ = lean_box(1);
v___x_5944_ = 0;
v___x_5945_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__1);
v___x_5946_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_5946_, 0, v___x_5941_);
lean_ctor_set(v___x_5946_, 1, v___x_5942_);
lean_ctor_set(v___x_5946_, 2, v___x_5941_);
lean_ctor_set(v___x_5946_, 3, v___f_5936_);
lean_ctor_set(v___x_5946_, 4, v___x_5943_);
lean_ctor_set(v___x_5946_, 5, v___x_5943_);
lean_ctor_set(v___x_5946_, 6, v___x_5941_);
lean_ctor_set(v___x_5946_, 7, v___x_5945_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8, v___x_5928_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 1, v___x_5928_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 2, v___x_5928_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 3, v___x_5928_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 4, v___x_5944_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 5, v___x_5944_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 6, v___x_5944_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 7, v___x_5944_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 8, v___x_5928_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 9, v___x_5944_);
lean_ctor_set_uint8(v___x_5946_, sizeof(void*)*8 + 10, v___x_5928_);
v___x_5947_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___closed__2);
v___x_5948_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_5940_, v___x_5946_, v___x_5947_, v___y_5897_, v___y_5898_, v___y_5899_, v___y_5900_);
if (lean_obj_tag(v___x_5948_) == 0)
{
lean_object* v___x_5949_; lean_object* v___x_5951_; 
lean_dec_ref(v___x_5948_);
v___x_5949_ = lean_nat_add(v_start_5921_, v___x_5924_);
lean_dec(v_start_5921_);
if (v_isShared_5935_ == 0)
{
lean_ctor_set(v___x_5934_, 1, v___x_5949_);
v___x_5951_ = v___x_5934_;
goto v_reusejp_5950_;
}
else
{
lean_object* v_reuseFailAlloc_5958_; 
v_reuseFailAlloc_5958_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5958_, 0, v_array_5920_);
lean_ctor_set(v_reuseFailAlloc_5958_, 1, v___x_5949_);
lean_ctor_set(v_reuseFailAlloc_5958_, 2, v_stop_5922_);
v___x_5951_ = v_reuseFailAlloc_5958_;
goto v_reusejp_5950_;
}
v_reusejp_5950_:
{
lean_object* v___x_5953_; 
if (v_isShared_5908_ == 0)
{
lean_ctor_set(v___x_5907_, 1, v___x_5927_);
lean_ctor_set(v___x_5907_, 0, v___x_5951_);
v___x_5953_ = v___x_5907_;
goto v_reusejp_5952_;
}
else
{
lean_object* v_reuseFailAlloc_5957_; 
v_reuseFailAlloc_5957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5957_, 0, v___x_5951_);
lean_ctor_set(v_reuseFailAlloc_5957_, 1, v___x_5927_);
v___x_5953_ = v_reuseFailAlloc_5957_;
goto v_reusejp_5952_;
}
v_reusejp_5952_:
{
size_t v___x_5954_; size_t v___x_5955_; 
v___x_5954_ = ((size_t)1ULL);
v___x_5955_ = lean_usize_add(v_i_5895_, v___x_5954_);
v_i_5895_ = v___x_5955_;
v_b_5896_ = v___x_5953_;
goto _start;
}
}
}
else
{
lean_object* v_a_5959_; lean_object* v___x_5961_; uint8_t v_isShared_5962_; uint8_t v_isSharedCheck_5966_; 
lean_del_object(v___x_5934_);
lean_dec_ref(v___x_5927_);
lean_dec(v_stop_5922_);
lean_dec(v_start_5921_);
lean_dec_ref(v_array_5920_);
lean_del_object(v___x_5907_);
v_a_5959_ = lean_ctor_get(v___x_5948_, 0);
v_isSharedCheck_5966_ = !lean_is_exclusive(v___x_5948_);
if (v_isSharedCheck_5966_ == 0)
{
v___x_5961_ = v___x_5948_;
v_isShared_5962_ = v_isSharedCheck_5966_;
goto v_resetjp_5960_;
}
else
{
lean_inc(v_a_5959_);
lean_dec(v___x_5948_);
v___x_5961_ = lean_box(0);
v_isShared_5962_ = v_isSharedCheck_5966_;
goto v_resetjp_5960_;
}
v_resetjp_5960_:
{
lean_object* v___x_5964_; 
if (v_isShared_5962_ == 0)
{
v___x_5964_ = v___x_5961_;
goto v_reusejp_5963_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v_a_5959_);
v___x_5964_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5963_;
}
v_reusejp_5963_:
{
return v___x_5964_;
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6___boxed(lean_object* v_as_5977_, lean_object* v_sz_5978_, lean_object* v_i_5979_, lean_object* v_b_5980_, lean_object* v___y_5981_, lean_object* v___y_5982_, lean_object* v___y_5983_, lean_object* v___y_5984_, lean_object* v___y_5985_){
_start:
{
size_t v_sz_boxed_5986_; size_t v_i_boxed_5987_; lean_object* v_res_5988_; 
v_sz_boxed_5986_ = lean_unbox_usize(v_sz_5978_);
lean_dec(v_sz_5978_);
v_i_boxed_5987_ = lean_unbox_usize(v_i_5979_);
lean_dec(v_i_5979_);
v_res_5988_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_as_5977_, v_sz_boxed_5986_, v_i_boxed_5987_, v_b_5980_, v___y_5981_, v___y_5982_, v___y_5983_, v___y_5984_);
lean_dec(v___y_5984_);
lean_dec_ref(v___y_5983_);
lean_dec(v___y_5982_);
lean_dec_ref(v___y_5981_);
lean_dec_ref(v_as_5977_);
return v_res_5988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0(lean_object* v_value_5989_, lean_object* v_decrTactics_5990_, lean_object* v_argsPacker_5991_, lean_object* v_funNames_5992_, lean_object* v___y_5993_, lean_object* v___y_5994_, lean_object* v___y_5995_, lean_object* v___y_5996_){
_start:
{
lean_object* v___x_5998_; 
lean_inc_ref(v_value_5989_);
v___x_5998_ = l_Lean_Meta_getMVarsNoDelayed(v_value_5989_, v___y_5993_, v___y_5994_, v___y_5995_, v___y_5996_);
if (lean_obj_tag(v___x_5998_) == 0)
{
lean_object* v_a_5999_; lean_object* v___x_6000_; 
v_a_5999_ = lean_ctor_get(v___x_5998_, 0);
lean_inc(v_a_5999_);
lean_dec_ref(v___x_5998_);
v___x_6000_ = l_Lean_Elab_WF_assignSubsumed(v_a_5999_, v___y_5993_, v___y_5994_, v___y_5995_, v___y_5996_);
lean_dec(v_a_5999_);
if (lean_obj_tag(v___x_6000_) == 0)
{
lean_object* v_a_6001_; lean_object* v___x_6002_; lean_object* v___x_6003_; 
v_a_6001_ = lean_ctor_get(v___x_6000_, 0);
lean_inc(v_a_6001_);
lean_dec_ref(v___x_6000_);
v___x_6002_ = lean_array_get_size(v_decrTactics_5990_);
v___x_6003_ = l_Lean_Elab_WF_groupGoalsByFunction(v_argsPacker_5991_, v___x_6002_, v_a_6001_, v___y_5993_, v___y_5994_, v___y_5995_, v___y_5996_);
lean_dec(v_a_6001_);
if (lean_obj_tag(v___x_6003_) == 0)
{
lean_object* v_a_6004_; lean_object* v___x_6005_; lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; size_t v_sz_6010_; size_t v___x_6011_; lean_object* v___x_6012_; 
v_a_6004_ = lean_ctor_get(v___x_6003_, 0);
lean_inc(v_a_6004_);
lean_dec_ref(v___x_6003_);
v___x_6005_ = lean_unsigned_to_nat(0u);
v___x_6006_ = lean_array_get_size(v_a_6004_);
v___x_6007_ = l_Array_toSubarray___redArg(v_a_6004_, v___x_6005_, v___x_6006_);
v___x_6008_ = l_Array_toSubarray___redArg(v_decrTactics_5990_, v___x_6005_, v___x_6002_);
v___x_6009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6009_, 0, v___x_6007_);
lean_ctor_set(v___x_6009_, 1, v___x_6008_);
v_sz_6010_ = lean_array_size(v_funNames_5992_);
v___x_6011_ = ((size_t)0ULL);
v___x_6012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_WF_solveDecreasingGoals_spec__6(v_funNames_5992_, v_sz_6010_, v___x_6011_, v___x_6009_, v___y_5993_, v___y_5994_, v___y_5995_, v___y_5996_);
if (lean_obj_tag(v___x_6012_) == 0)
{
lean_object* v___x_6013_; 
lean_dec_ref(v___x_6012_);
v___x_6013_ = l_Lean_instantiateMVars___at___00Lean_Elab_WF_solveDecreasingGoals_spec__7___redArg(v_value_5989_, v___y_5994_, v___y_5996_);
return v___x_6013_;
}
else
{
lean_object* v_a_6014_; lean_object* v___x_6016_; uint8_t v_isShared_6017_; uint8_t v_isSharedCheck_6021_; 
lean_dec_ref(v_value_5989_);
v_a_6014_ = lean_ctor_get(v___x_6012_, 0);
v_isSharedCheck_6021_ = !lean_is_exclusive(v___x_6012_);
if (v_isSharedCheck_6021_ == 0)
{
v___x_6016_ = v___x_6012_;
v_isShared_6017_ = v_isSharedCheck_6021_;
goto v_resetjp_6015_;
}
else
{
lean_inc(v_a_6014_);
lean_dec(v___x_6012_);
v___x_6016_ = lean_box(0);
v_isShared_6017_ = v_isSharedCheck_6021_;
goto v_resetjp_6015_;
}
v_resetjp_6015_:
{
lean_object* v___x_6019_; 
if (v_isShared_6017_ == 0)
{
v___x_6019_ = v___x_6016_;
goto v_reusejp_6018_;
}
else
{
lean_object* v_reuseFailAlloc_6020_; 
v_reuseFailAlloc_6020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6020_, 0, v_a_6014_);
v___x_6019_ = v_reuseFailAlloc_6020_;
goto v_reusejp_6018_;
}
v_reusejp_6018_:
{
return v___x_6019_;
}
}
}
}
else
{
lean_object* v_a_6022_; lean_object* v___x_6024_; uint8_t v_isShared_6025_; uint8_t v_isSharedCheck_6029_; 
lean_dec_ref(v_decrTactics_5990_);
lean_dec_ref(v_value_5989_);
v_a_6022_ = lean_ctor_get(v___x_6003_, 0);
v_isSharedCheck_6029_ = !lean_is_exclusive(v___x_6003_);
if (v_isSharedCheck_6029_ == 0)
{
v___x_6024_ = v___x_6003_;
v_isShared_6025_ = v_isSharedCheck_6029_;
goto v_resetjp_6023_;
}
else
{
lean_inc(v_a_6022_);
lean_dec(v___x_6003_);
v___x_6024_ = lean_box(0);
v_isShared_6025_ = v_isSharedCheck_6029_;
goto v_resetjp_6023_;
}
v_resetjp_6023_:
{
lean_object* v___x_6027_; 
if (v_isShared_6025_ == 0)
{
v___x_6027_ = v___x_6024_;
goto v_reusejp_6026_;
}
else
{
lean_object* v_reuseFailAlloc_6028_; 
v_reuseFailAlloc_6028_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6028_, 0, v_a_6022_);
v___x_6027_ = v_reuseFailAlloc_6028_;
goto v_reusejp_6026_;
}
v_reusejp_6026_:
{
return v___x_6027_;
}
}
}
}
else
{
lean_object* v_a_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6037_; 
lean_dec_ref(v_decrTactics_5990_);
lean_dec_ref(v_value_5989_);
v_a_6030_ = lean_ctor_get(v___x_6000_, 0);
v_isSharedCheck_6037_ = !lean_is_exclusive(v___x_6000_);
if (v_isSharedCheck_6037_ == 0)
{
v___x_6032_ = v___x_6000_;
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_a_6030_);
lean_dec(v___x_6000_);
v___x_6032_ = lean_box(0);
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
v_resetjp_6031_:
{
lean_object* v___x_6035_; 
if (v_isShared_6033_ == 0)
{
v___x_6035_ = v___x_6032_;
goto v_reusejp_6034_;
}
else
{
lean_object* v_reuseFailAlloc_6036_; 
v_reuseFailAlloc_6036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6036_, 0, v_a_6030_);
v___x_6035_ = v_reuseFailAlloc_6036_;
goto v_reusejp_6034_;
}
v_reusejp_6034_:
{
return v___x_6035_;
}
}
}
}
else
{
lean_object* v_a_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6045_; 
lean_dec_ref(v_decrTactics_5990_);
lean_dec_ref(v_value_5989_);
v_a_6038_ = lean_ctor_get(v___x_5998_, 0);
v_isSharedCheck_6045_ = !lean_is_exclusive(v___x_5998_);
if (v_isSharedCheck_6045_ == 0)
{
v___x_6040_ = v___x_5998_;
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_a_6038_);
lean_dec(v___x_5998_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6045_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6043_; 
if (v_isShared_6041_ == 0)
{
v___x_6043_ = v___x_6040_;
goto v_reusejp_6042_;
}
else
{
lean_object* v_reuseFailAlloc_6044_; 
v_reuseFailAlloc_6044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6044_, 0, v_a_6038_);
v___x_6043_ = v_reuseFailAlloc_6044_;
goto v_reusejp_6042_;
}
v_reusejp_6042_:
{
return v___x_6043_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed(lean_object* v_value_6046_, lean_object* v_decrTactics_6047_, lean_object* v_argsPacker_6048_, lean_object* v_funNames_6049_, lean_object* v___y_6050_, lean_object* v___y_6051_, lean_object* v___y_6052_, lean_object* v___y_6053_, lean_object* v___y_6054_){
_start:
{
lean_object* v_res_6055_; 
v_res_6055_ = l_Lean_Elab_WF_solveDecreasingGoals___lam__0(v_value_6046_, v_decrTactics_6047_, v_argsPacker_6048_, v_funNames_6049_, v___y_6050_, v___y_6051_, v___y_6052_, v___y_6053_);
lean_dec(v___y_6053_);
lean_dec_ref(v___y_6052_);
lean_dec(v___y_6051_);
lean_dec_ref(v___y_6050_);
lean_dec_ref(v_funNames_6049_);
lean_dec_ref(v_argsPacker_6048_);
return v_res_6055_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(lean_object* v___y_6056_, uint8_t v_isExporting_6057_, lean_object* v___x_6058_, lean_object* v___y_6059_, lean_object* v___x_6060_, lean_object* v_a_x3f_6061_){
_start:
{
lean_object* v___x_6063_; lean_object* v_env_6064_; lean_object* v_nextMacroScope_6065_; lean_object* v_ngen_6066_; lean_object* v_auxDeclNGen_6067_; lean_object* v_traceState_6068_; lean_object* v_messages_6069_; lean_object* v_infoState_6070_; lean_object* v_snapshotTasks_6071_; lean_object* v___x_6073_; uint8_t v_isShared_6074_; uint8_t v_isSharedCheck_6097_; 
v___x_6063_ = lean_st_ref_take(v___y_6056_);
v_env_6064_ = lean_ctor_get(v___x_6063_, 0);
v_nextMacroScope_6065_ = lean_ctor_get(v___x_6063_, 1);
v_ngen_6066_ = lean_ctor_get(v___x_6063_, 2);
v_auxDeclNGen_6067_ = lean_ctor_get(v___x_6063_, 3);
v_traceState_6068_ = lean_ctor_get(v___x_6063_, 4);
v_messages_6069_ = lean_ctor_get(v___x_6063_, 6);
v_infoState_6070_ = lean_ctor_get(v___x_6063_, 7);
v_snapshotTasks_6071_ = lean_ctor_get(v___x_6063_, 8);
v_isSharedCheck_6097_ = !lean_is_exclusive(v___x_6063_);
if (v_isSharedCheck_6097_ == 0)
{
lean_object* v_unused_6098_; 
v_unused_6098_ = lean_ctor_get(v___x_6063_, 5);
lean_dec(v_unused_6098_);
v___x_6073_ = v___x_6063_;
v_isShared_6074_ = v_isSharedCheck_6097_;
goto v_resetjp_6072_;
}
else
{
lean_inc(v_snapshotTasks_6071_);
lean_inc(v_infoState_6070_);
lean_inc(v_messages_6069_);
lean_inc(v_traceState_6068_);
lean_inc(v_auxDeclNGen_6067_);
lean_inc(v_ngen_6066_);
lean_inc(v_nextMacroScope_6065_);
lean_inc(v_env_6064_);
lean_dec(v___x_6063_);
v___x_6073_ = lean_box(0);
v_isShared_6074_ = v_isSharedCheck_6097_;
goto v_resetjp_6072_;
}
v_resetjp_6072_:
{
lean_object* v___x_6075_; lean_object* v___x_6077_; 
v___x_6075_ = l_Lean_Environment_setExporting(v_env_6064_, v_isExporting_6057_);
if (v_isShared_6074_ == 0)
{
lean_ctor_set(v___x_6073_, 5, v___x_6058_);
lean_ctor_set(v___x_6073_, 0, v___x_6075_);
v___x_6077_ = v___x_6073_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6096_; 
v_reuseFailAlloc_6096_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6096_, 0, v___x_6075_);
lean_ctor_set(v_reuseFailAlloc_6096_, 1, v_nextMacroScope_6065_);
lean_ctor_set(v_reuseFailAlloc_6096_, 2, v_ngen_6066_);
lean_ctor_set(v_reuseFailAlloc_6096_, 3, v_auxDeclNGen_6067_);
lean_ctor_set(v_reuseFailAlloc_6096_, 4, v_traceState_6068_);
lean_ctor_set(v_reuseFailAlloc_6096_, 5, v___x_6058_);
lean_ctor_set(v_reuseFailAlloc_6096_, 6, v_messages_6069_);
lean_ctor_set(v_reuseFailAlloc_6096_, 7, v_infoState_6070_);
lean_ctor_set(v_reuseFailAlloc_6096_, 8, v_snapshotTasks_6071_);
v___x_6077_ = v_reuseFailAlloc_6096_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
lean_object* v___x_6078_; lean_object* v___x_6079_; lean_object* v___x_6080_; lean_object* v_mctx_6081_; lean_object* v_zetaDeltaFVarIds_6082_; lean_object* v_postponed_6083_; lean_object* v_diag_6084_; lean_object* v___x_6086_; uint8_t v_isShared_6087_; uint8_t v_isSharedCheck_6094_; 
v___x_6078_ = lean_st_ref_set(v___y_6056_, v___x_6077_);
v___x_6079_ = lean_st_ref_get(v___y_6056_);
lean_dec(v___x_6079_);
v___x_6080_ = lean_st_ref_take(v___y_6059_);
v_mctx_6081_ = lean_ctor_get(v___x_6080_, 0);
v_zetaDeltaFVarIds_6082_ = lean_ctor_get(v___x_6080_, 2);
v_postponed_6083_ = lean_ctor_get(v___x_6080_, 3);
v_diag_6084_ = lean_ctor_get(v___x_6080_, 4);
v_isSharedCheck_6094_ = !lean_is_exclusive(v___x_6080_);
if (v_isSharedCheck_6094_ == 0)
{
lean_object* v_unused_6095_; 
v_unused_6095_ = lean_ctor_get(v___x_6080_, 1);
lean_dec(v_unused_6095_);
v___x_6086_ = v___x_6080_;
v_isShared_6087_ = v_isSharedCheck_6094_;
goto v_resetjp_6085_;
}
else
{
lean_inc(v_diag_6084_);
lean_inc(v_postponed_6083_);
lean_inc(v_zetaDeltaFVarIds_6082_);
lean_inc(v_mctx_6081_);
lean_dec(v___x_6080_);
v___x_6086_ = lean_box(0);
v_isShared_6087_ = v_isSharedCheck_6094_;
goto v_resetjp_6085_;
}
v_resetjp_6085_:
{
lean_object* v___x_6089_; 
if (v_isShared_6087_ == 0)
{
lean_ctor_set(v___x_6086_, 1, v___x_6060_);
v___x_6089_ = v___x_6086_;
goto v_reusejp_6088_;
}
else
{
lean_object* v_reuseFailAlloc_6093_; 
v_reuseFailAlloc_6093_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6093_, 0, v_mctx_6081_);
lean_ctor_set(v_reuseFailAlloc_6093_, 1, v___x_6060_);
lean_ctor_set(v_reuseFailAlloc_6093_, 2, v_zetaDeltaFVarIds_6082_);
lean_ctor_set(v_reuseFailAlloc_6093_, 3, v_postponed_6083_);
lean_ctor_set(v_reuseFailAlloc_6093_, 4, v_diag_6084_);
v___x_6089_ = v_reuseFailAlloc_6093_;
goto v_reusejp_6088_;
}
v_reusejp_6088_:
{
lean_object* v___x_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; 
v___x_6090_ = lean_st_ref_set(v___y_6059_, v___x_6089_);
v___x_6091_ = lean_box(0);
v___x_6092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6092_, 0, v___x_6091_);
return v___x_6092_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0___boxed(lean_object* v___y_6099_, lean_object* v_isExporting_6100_, lean_object* v___x_6101_, lean_object* v___y_6102_, lean_object* v___x_6103_, lean_object* v_a_x3f_6104_, lean_object* v___y_6105_){
_start:
{
uint8_t v_isExporting_boxed_6106_; lean_object* v_res_6107_; 
v_isExporting_boxed_6106_ = lean_unbox(v_isExporting_6100_);
v_res_6107_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6099_, v_isExporting_boxed_6106_, v___x_6101_, v___y_6102_, v___x_6103_, v_a_x3f_6104_);
lean_dec(v_a_x3f_6104_);
lean_dec(v___y_6102_);
lean_dec(v___y_6099_);
return v_res_6107_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___x_6108_; 
v___x_6108_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_6108_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1(void){
_start:
{
lean_object* v___x_6109_; lean_object* v___x_6110_; 
v___x_6109_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__0);
v___x_6110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6110_, 0, v___x_6109_);
return v___x_6110_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2(void){
_start:
{
lean_object* v___x_6111_; lean_object* v___x_6112_; 
v___x_6111_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1);
v___x_6112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6112_, 0, v___x_6111_);
lean_ctor_set(v___x_6112_, 1, v___x_6111_);
return v___x_6112_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3(void){
_start:
{
lean_object* v___x_6113_; lean_object* v___x_6114_; 
v___x_6113_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__1);
v___x_6114_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_6114_, 0, v___x_6113_);
lean_ctor_set(v___x_6114_, 1, v___x_6113_);
lean_ctor_set(v___x_6114_, 2, v___x_6113_);
lean_ctor_set(v___x_6114_, 3, v___x_6113_);
lean_ctor_set(v___x_6114_, 4, v___x_6113_);
lean_ctor_set(v___x_6114_, 5, v___x_6113_);
return v___x_6114_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(lean_object* v_x_6115_, uint8_t v_isExporting_6116_, lean_object* v___y_6117_, lean_object* v___y_6118_, lean_object* v___y_6119_, lean_object* v___y_6120_){
_start:
{
lean_object* v___x_6122_; lean_object* v_env_6123_; uint8_t v_isExporting_6124_; lean_object* v___x_6125_; lean_object* v_env_6126_; lean_object* v_nextMacroScope_6127_; lean_object* v_ngen_6128_; lean_object* v_auxDeclNGen_6129_; lean_object* v_traceState_6130_; lean_object* v_messages_6131_; lean_object* v_infoState_6132_; lean_object* v_snapshotTasks_6133_; lean_object* v___x_6135_; uint8_t v_isShared_6136_; uint8_t v_isSharedCheck_6188_; 
v___x_6122_ = lean_st_ref_get(v___y_6120_);
v_env_6123_ = lean_ctor_get(v___x_6122_, 0);
lean_inc_ref(v_env_6123_);
lean_dec(v___x_6122_);
v_isExporting_6124_ = lean_ctor_get_uint8(v_env_6123_, sizeof(void*)*8);
lean_dec_ref(v_env_6123_);
v___x_6125_ = lean_st_ref_take(v___y_6120_);
v_env_6126_ = lean_ctor_get(v___x_6125_, 0);
v_nextMacroScope_6127_ = lean_ctor_get(v___x_6125_, 1);
v_ngen_6128_ = lean_ctor_get(v___x_6125_, 2);
v_auxDeclNGen_6129_ = lean_ctor_get(v___x_6125_, 3);
v_traceState_6130_ = lean_ctor_get(v___x_6125_, 4);
v_messages_6131_ = lean_ctor_get(v___x_6125_, 6);
v_infoState_6132_ = lean_ctor_get(v___x_6125_, 7);
v_snapshotTasks_6133_ = lean_ctor_get(v___x_6125_, 8);
v_isSharedCheck_6188_ = !lean_is_exclusive(v___x_6125_);
if (v_isSharedCheck_6188_ == 0)
{
lean_object* v_unused_6189_; 
v_unused_6189_ = lean_ctor_get(v___x_6125_, 5);
lean_dec(v_unused_6189_);
v___x_6135_ = v___x_6125_;
v_isShared_6136_ = v_isSharedCheck_6188_;
goto v_resetjp_6134_;
}
else
{
lean_inc(v_snapshotTasks_6133_);
lean_inc(v_infoState_6132_);
lean_inc(v_messages_6131_);
lean_inc(v_traceState_6130_);
lean_inc(v_auxDeclNGen_6129_);
lean_inc(v_ngen_6128_);
lean_inc(v_nextMacroScope_6127_);
lean_inc(v_env_6126_);
lean_dec(v___x_6125_);
v___x_6135_ = lean_box(0);
v_isShared_6136_ = v_isSharedCheck_6188_;
goto v_resetjp_6134_;
}
v_resetjp_6134_:
{
lean_object* v___x_6137_; lean_object* v___x_6138_; lean_object* v___x_6140_; 
v___x_6137_ = l_Lean_Environment_setExporting(v_env_6126_, v_isExporting_6116_);
v___x_6138_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__2);
if (v_isShared_6136_ == 0)
{
lean_ctor_set(v___x_6135_, 5, v___x_6138_);
lean_ctor_set(v___x_6135_, 0, v___x_6137_);
v___x_6140_ = v___x_6135_;
goto v_reusejp_6139_;
}
else
{
lean_object* v_reuseFailAlloc_6187_; 
v_reuseFailAlloc_6187_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6187_, 0, v___x_6137_);
lean_ctor_set(v_reuseFailAlloc_6187_, 1, v_nextMacroScope_6127_);
lean_ctor_set(v_reuseFailAlloc_6187_, 2, v_ngen_6128_);
lean_ctor_set(v_reuseFailAlloc_6187_, 3, v_auxDeclNGen_6129_);
lean_ctor_set(v_reuseFailAlloc_6187_, 4, v_traceState_6130_);
lean_ctor_set(v_reuseFailAlloc_6187_, 5, v___x_6138_);
lean_ctor_set(v_reuseFailAlloc_6187_, 6, v_messages_6131_);
lean_ctor_set(v_reuseFailAlloc_6187_, 7, v_infoState_6132_);
lean_ctor_set(v_reuseFailAlloc_6187_, 8, v_snapshotTasks_6133_);
v___x_6140_ = v_reuseFailAlloc_6187_;
goto v_reusejp_6139_;
}
v_reusejp_6139_:
{
lean_object* v___x_6141_; lean_object* v___x_6142_; lean_object* v___x_6143_; lean_object* v_mctx_6144_; lean_object* v_zetaDeltaFVarIds_6145_; lean_object* v_postponed_6146_; lean_object* v_diag_6147_; lean_object* v___x_6149_; uint8_t v_isShared_6150_; uint8_t v_isSharedCheck_6185_; 
v___x_6141_ = lean_st_ref_set(v___y_6120_, v___x_6140_);
v___x_6142_ = lean_st_ref_get(v___y_6120_);
lean_dec(v___x_6142_);
v___x_6143_ = lean_st_ref_take(v___y_6118_);
v_mctx_6144_ = lean_ctor_get(v___x_6143_, 0);
v_zetaDeltaFVarIds_6145_ = lean_ctor_get(v___x_6143_, 2);
v_postponed_6146_ = lean_ctor_get(v___x_6143_, 3);
v_diag_6147_ = lean_ctor_get(v___x_6143_, 4);
v_isSharedCheck_6185_ = !lean_is_exclusive(v___x_6143_);
if (v_isSharedCheck_6185_ == 0)
{
lean_object* v_unused_6186_; 
v_unused_6186_ = lean_ctor_get(v___x_6143_, 1);
lean_dec(v_unused_6186_);
v___x_6149_ = v___x_6143_;
v_isShared_6150_ = v_isSharedCheck_6185_;
goto v_resetjp_6148_;
}
else
{
lean_inc(v_diag_6147_);
lean_inc(v_postponed_6146_);
lean_inc(v_zetaDeltaFVarIds_6145_);
lean_inc(v_mctx_6144_);
lean_dec(v___x_6143_);
v___x_6149_ = lean_box(0);
v_isShared_6150_ = v_isSharedCheck_6185_;
goto v_resetjp_6148_;
}
v_resetjp_6148_:
{
lean_object* v___x_6151_; lean_object* v___x_6153_; 
v___x_6151_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___closed__3);
if (v_isShared_6150_ == 0)
{
lean_ctor_set(v___x_6149_, 1, v___x_6151_);
v___x_6153_ = v___x_6149_;
goto v_reusejp_6152_;
}
else
{
lean_object* v_reuseFailAlloc_6184_; 
v_reuseFailAlloc_6184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_6184_, 0, v_mctx_6144_);
lean_ctor_set(v_reuseFailAlloc_6184_, 1, v___x_6151_);
lean_ctor_set(v_reuseFailAlloc_6184_, 2, v_zetaDeltaFVarIds_6145_);
lean_ctor_set(v_reuseFailAlloc_6184_, 3, v_postponed_6146_);
lean_ctor_set(v_reuseFailAlloc_6184_, 4, v_diag_6147_);
v___x_6153_ = v_reuseFailAlloc_6184_;
goto v_reusejp_6152_;
}
v_reusejp_6152_:
{
lean_object* v___x_6154_; lean_object* v_r_6155_; 
v___x_6154_ = lean_st_ref_set(v___y_6118_, v___x_6153_);
lean_inc(v___y_6120_);
lean_inc_ref(v___y_6119_);
lean_inc(v___y_6118_);
lean_inc_ref(v___y_6117_);
v_r_6155_ = lean_apply_5(v_x_6115_, v___y_6117_, v___y_6118_, v___y_6119_, v___y_6120_, lean_box(0));
if (lean_obj_tag(v_r_6155_) == 0)
{
lean_object* v_a_6156_; lean_object* v___x_6158_; uint8_t v_isShared_6159_; uint8_t v_isSharedCheck_6172_; 
v_a_6156_ = lean_ctor_get(v_r_6155_, 0);
v_isSharedCheck_6172_ = !lean_is_exclusive(v_r_6155_);
if (v_isSharedCheck_6172_ == 0)
{
v___x_6158_ = v_r_6155_;
v_isShared_6159_ = v_isSharedCheck_6172_;
goto v_resetjp_6157_;
}
else
{
lean_inc(v_a_6156_);
lean_dec(v_r_6155_);
v___x_6158_ = lean_box(0);
v_isShared_6159_ = v_isSharedCheck_6172_;
goto v_resetjp_6157_;
}
v_resetjp_6157_:
{
lean_object* v___x_6161_; 
lean_inc(v_a_6156_);
if (v_isShared_6159_ == 0)
{
lean_ctor_set_tag(v___x_6158_, 1);
v___x_6161_ = v___x_6158_;
goto v_reusejp_6160_;
}
else
{
lean_object* v_reuseFailAlloc_6171_; 
v_reuseFailAlloc_6171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6171_, 0, v_a_6156_);
v___x_6161_ = v_reuseFailAlloc_6171_;
goto v_reusejp_6160_;
}
v_reusejp_6160_:
{
lean_object* v___x_6162_; lean_object* v___x_6164_; uint8_t v_isShared_6165_; uint8_t v_isSharedCheck_6169_; 
v___x_6162_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6120_, v_isExporting_6124_, v___x_6138_, v___y_6118_, v___x_6151_, v___x_6161_);
lean_dec_ref(v___x_6161_);
v_isSharedCheck_6169_ = !lean_is_exclusive(v___x_6162_);
if (v_isSharedCheck_6169_ == 0)
{
lean_object* v_unused_6170_; 
v_unused_6170_ = lean_ctor_get(v___x_6162_, 0);
lean_dec(v_unused_6170_);
v___x_6164_ = v___x_6162_;
v_isShared_6165_ = v_isSharedCheck_6169_;
goto v_resetjp_6163_;
}
else
{
lean_dec(v___x_6162_);
v___x_6164_ = lean_box(0);
v_isShared_6165_ = v_isSharedCheck_6169_;
goto v_resetjp_6163_;
}
v_resetjp_6163_:
{
lean_object* v___x_6167_; 
if (v_isShared_6165_ == 0)
{
lean_ctor_set(v___x_6164_, 0, v_a_6156_);
v___x_6167_ = v___x_6164_;
goto v_reusejp_6166_;
}
else
{
lean_object* v_reuseFailAlloc_6168_; 
v_reuseFailAlloc_6168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6168_, 0, v_a_6156_);
v___x_6167_ = v_reuseFailAlloc_6168_;
goto v_reusejp_6166_;
}
v_reusejp_6166_:
{
return v___x_6167_;
}
}
}
}
}
else
{
lean_object* v_a_6173_; lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6177_; uint8_t v_isShared_6178_; uint8_t v_isSharedCheck_6182_; 
v_a_6173_ = lean_ctor_get(v_r_6155_, 0);
lean_inc(v_a_6173_);
lean_dec_ref(v_r_6155_);
v___x_6174_ = lean_box(0);
v___x_6175_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___lam__0(v___y_6120_, v_isExporting_6124_, v___x_6138_, v___y_6118_, v___x_6151_, v___x_6174_);
v_isSharedCheck_6182_ = !lean_is_exclusive(v___x_6175_);
if (v_isSharedCheck_6182_ == 0)
{
lean_object* v_unused_6183_; 
v_unused_6183_ = lean_ctor_get(v___x_6175_, 0);
lean_dec(v_unused_6183_);
v___x_6177_ = v___x_6175_;
v_isShared_6178_ = v_isSharedCheck_6182_;
goto v_resetjp_6176_;
}
else
{
lean_dec(v___x_6175_);
v___x_6177_ = lean_box(0);
v_isShared_6178_ = v_isSharedCheck_6182_;
goto v_resetjp_6176_;
}
v_resetjp_6176_:
{
lean_object* v___x_6180_; 
if (v_isShared_6178_ == 0)
{
lean_ctor_set_tag(v___x_6177_, 1);
lean_ctor_set(v___x_6177_, 0, v_a_6173_);
v___x_6180_ = v___x_6177_;
goto v_reusejp_6179_;
}
else
{
lean_object* v_reuseFailAlloc_6181_; 
v_reuseFailAlloc_6181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6181_, 0, v_a_6173_);
v___x_6180_ = v_reuseFailAlloc_6181_;
goto v_reusejp_6179_;
}
v_reusejp_6179_:
{
return v___x_6180_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg___boxed(lean_object* v_x_6190_, lean_object* v_isExporting_6191_, lean_object* v___y_6192_, lean_object* v___y_6193_, lean_object* v___y_6194_, lean_object* v___y_6195_, lean_object* v___y_6196_){
_start:
{
uint8_t v_isExporting_boxed_6197_; lean_object* v_res_6198_; 
v_isExporting_boxed_6197_ = lean_unbox(v_isExporting_6191_);
v_res_6198_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6190_, v_isExporting_boxed_6197_, v___y_6192_, v___y_6193_, v___y_6194_, v___y_6195_);
lean_dec(v___y_6195_);
lean_dec_ref(v___y_6194_);
lean_dec(v___y_6193_);
lean_dec_ref(v___y_6192_);
return v_res_6198_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(lean_object* v_x_6199_, uint8_t v_when_6200_, lean_object* v___y_6201_, lean_object* v___y_6202_, lean_object* v___y_6203_, lean_object* v___y_6204_){
_start:
{
if (v_when_6200_ == 0)
{
lean_object* v___x_6206_; 
lean_inc(v___y_6204_);
lean_inc_ref(v___y_6203_);
lean_inc(v___y_6202_);
lean_inc_ref(v___y_6201_);
v___x_6206_ = lean_apply_5(v_x_6199_, v___y_6201_, v___y_6202_, v___y_6203_, v___y_6204_, lean_box(0));
return v___x_6206_;
}
else
{
uint8_t v___x_6207_; lean_object* v___x_6208_; 
v___x_6207_ = 0;
v___x_6208_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6199_, v___x_6207_, v___y_6201_, v___y_6202_, v___y_6203_, v___y_6204_);
return v___x_6208_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg___boxed(lean_object* v_x_6209_, lean_object* v_when_6210_, lean_object* v___y_6211_, lean_object* v___y_6212_, lean_object* v___y_6213_, lean_object* v___y_6214_, lean_object* v___y_6215_){
_start:
{
uint8_t v_when_boxed_6216_; lean_object* v_res_6217_; 
v_when_boxed_6216_ = lean_unbox(v_when_6210_);
v_res_6217_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6209_, v_when_boxed_6216_, v___y_6211_, v___y_6212_, v___y_6213_, v___y_6214_);
lean_dec(v___y_6214_);
lean_dec_ref(v___y_6213_);
lean_dec(v___y_6212_);
lean_dec_ref(v___y_6211_);
return v_res_6217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals(lean_object* v_funNames_6218_, lean_object* v_argsPacker_6219_, lean_object* v_decrTactics_6220_, lean_object* v_value_6221_, lean_object* v_a_6222_, lean_object* v_a_6223_, lean_object* v_a_6224_, lean_object* v_a_6225_){
_start:
{
lean_object* v___f_6227_; uint8_t v___x_6228_; lean_object* v___x_6229_; 
v___f_6227_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_solveDecreasingGoals___lam__0___boxed), 9, 4);
lean_closure_set(v___f_6227_, 0, v_value_6221_);
lean_closure_set(v___f_6227_, 1, v_decrTactics_6220_);
lean_closure_set(v___f_6227_, 2, v_argsPacker_6219_);
lean_closure_set(v___f_6227_, 3, v_funNames_6218_);
v___x_6228_ = 1;
v___x_6229_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v___f_6227_, v___x_6228_, v_a_6222_, v_a_6223_, v_a_6224_, v_a_6225_);
return v___x_6229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_solveDecreasingGoals___boxed(lean_object* v_funNames_6230_, lean_object* v_argsPacker_6231_, lean_object* v_decrTactics_6232_, lean_object* v_value_6233_, lean_object* v_a_6234_, lean_object* v_a_6235_, lean_object* v_a_6236_, lean_object* v_a_6237_, lean_object* v_a_6238_){
_start:
{
lean_object* v_res_6239_; 
v_res_6239_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6230_, v_argsPacker_6231_, v_decrTactics_6232_, v_value_6233_, v_a_6234_, v_a_6235_, v_a_6236_, v_a_6237_);
lean_dec(v_a_6237_);
lean_dec_ref(v_a_6236_);
lean_dec(v_a_6235_);
lean_dec_ref(v_a_6234_);
return v_res_6239_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(lean_object* v_00_u03b1_6240_, lean_object* v_msg_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_, lean_object* v___y_6247_){
_start:
{
lean_object* v___x_6249_; 
v___x_6249_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___redArg(v_msg_6241_, v___y_6242_, v___y_6243_, v___y_6244_, v___y_6245_, v___y_6246_, v___y_6247_);
return v___x_6249_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1___boxed(lean_object* v_00_u03b1_6250_, lean_object* v_msg_6251_, lean_object* v___y_6252_, lean_object* v___y_6253_, lean_object* v___y_6254_, lean_object* v___y_6255_, lean_object* v___y_6256_, lean_object* v___y_6257_, lean_object* v___y_6258_){
_start:
{
lean_object* v_res_6259_; 
v_res_6259_ = l_Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1(v_00_u03b1_6250_, v_msg_6251_, v___y_6252_, v___y_6253_, v___y_6254_, v___y_6255_, v___y_6256_, v___y_6257_);
lean_dec(v___y_6257_);
lean_dec_ref(v___y_6256_);
lean_dec(v___y_6255_);
lean_dec_ref(v___y_6254_);
lean_dec(v___y_6253_);
lean_dec_ref(v___y_6252_);
return v_res_6259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(lean_object* v___y_6260_, lean_object* v___y_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_){
_start:
{
lean_object* v___x_6269_; 
v___x_6269_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___redArg(v___y_6267_);
return v___x_6269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4___boxed(lean_object* v___y_6270_, lean_object* v___y_6271_, lean_object* v___y_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_, lean_object* v___y_6277_, lean_object* v___y_6278_){
_start:
{
lean_object* v_res_6279_; 
v_res_6279_ = l_Lean_Elab_getResetInfoTrees___at___00Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3_spec__4(v___y_6270_, v___y_6271_, v___y_6272_, v___y_6273_, v___y_6274_, v___y_6275_, v___y_6276_, v___y_6277_);
lean_dec(v___y_6277_);
lean_dec_ref(v___y_6276_);
lean_dec(v___y_6275_);
lean_dec_ref(v___y_6274_);
lean_dec(v___y_6273_);
lean_dec_ref(v___y_6272_);
lean_dec(v___y_6271_);
lean_dec_ref(v___y_6270_);
return v_res_6279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(lean_object* v_00_u03b1_6280_, lean_object* v_x_6281_, lean_object* v_mkInfoTree_6282_, lean_object* v___y_6283_, lean_object* v___y_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_){
_start:
{
lean_object* v___x_6292_; 
v___x_6292_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___redArg(v_x_6281_, v_mkInfoTree_6282_, v___y_6283_, v___y_6284_, v___y_6285_, v___y_6286_, v___y_6287_, v___y_6288_, v___y_6289_, v___y_6290_);
return v___x_6292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3___boxed(lean_object* v_00_u03b1_6293_, lean_object* v_x_6294_, lean_object* v_mkInfoTree_6295_, lean_object* v___y_6296_, lean_object* v___y_6297_, lean_object* v___y_6298_, lean_object* v___y_6299_, lean_object* v___y_6300_, lean_object* v___y_6301_, lean_object* v___y_6302_, lean_object* v___y_6303_, lean_object* v___y_6304_){
_start:
{
lean_object* v_res_6305_; 
v_res_6305_ = l_Lean_Elab_withInfoTreeContext___at___00Lean_Elab_WF_solveDecreasingGoals_spec__3(v_00_u03b1_6293_, v_x_6294_, v_mkInfoTree_6295_, v___y_6296_, v___y_6297_, v___y_6298_, v___y_6299_, v___y_6300_, v___y_6301_, v___y_6302_, v___y_6303_);
lean_dec(v___y_6303_);
lean_dec_ref(v___y_6302_);
lean_dec(v___y_6301_);
lean_dec_ref(v___y_6300_);
lean_dec(v___y_6299_);
lean_dec_ref(v___y_6298_);
lean_dec(v___y_6297_);
lean_dec_ref(v___y_6296_);
return v_res_6305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(lean_object* v_as_6306_, size_t v_i_6307_, size_t v_stop_6308_, lean_object* v_b_6309_, lean_object* v___y_6310_, lean_object* v___y_6311_, lean_object* v___y_6312_, lean_object* v___y_6313_, lean_object* v___y_6314_, lean_object* v___y_6315_){
_start:
{
lean_object* v___x_6317_; 
v___x_6317_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___redArg(v_as_6306_, v_i_6307_, v_stop_6308_, v_b_6309_, v___y_6312_, v___y_6313_, v___y_6314_, v___y_6315_);
return v___x_6317_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5___boxed(lean_object* v_as_6318_, lean_object* v_i_6319_, lean_object* v_stop_6320_, lean_object* v_b_6321_, lean_object* v___y_6322_, lean_object* v___y_6323_, lean_object* v___y_6324_, lean_object* v___y_6325_, lean_object* v___y_6326_, lean_object* v___y_6327_, lean_object* v___y_6328_){
_start:
{
size_t v_i_boxed_6329_; size_t v_stop_boxed_6330_; lean_object* v_res_6331_; 
v_i_boxed_6329_ = lean_unbox_usize(v_i_6319_);
lean_dec(v_i_6319_);
v_stop_boxed_6330_ = lean_unbox_usize(v_stop_6320_);
lean_dec(v_stop_6320_);
v_res_6331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_WF_solveDecreasingGoals_spec__5(v_as_6318_, v_i_boxed_6329_, v_stop_boxed_6330_, v_b_6321_, v___y_6322_, v___y_6323_, v___y_6324_, v___y_6325_, v___y_6326_, v___y_6327_);
lean_dec(v___y_6327_);
lean_dec_ref(v___y_6326_);
lean_dec(v___y_6325_);
lean_dec_ref(v___y_6324_);
lean_dec(v___y_6323_);
lean_dec_ref(v___y_6322_);
lean_dec_ref(v_as_6318_);
return v_res_6331_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(lean_object* v_00_u03b1_6332_, lean_object* v_x_6333_, uint8_t v_isExporting_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_, lean_object* v___y_6337_, lean_object* v___y_6338_){
_start:
{
lean_object* v___x_6340_; 
v___x_6340_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___redArg(v_x_6333_, v_isExporting_6334_, v___y_6335_, v___y_6336_, v___y_6337_, v___y_6338_);
return v___x_6340_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10___boxed(lean_object* v_00_u03b1_6341_, lean_object* v_x_6342_, lean_object* v_isExporting_6343_, lean_object* v___y_6344_, lean_object* v___y_6345_, lean_object* v___y_6346_, lean_object* v___y_6347_, lean_object* v___y_6348_){
_start:
{
uint8_t v_isExporting_boxed_6349_; lean_object* v_res_6350_; 
v_isExporting_boxed_6349_ = lean_unbox(v_isExporting_6343_);
v_res_6350_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8_spec__10(v_00_u03b1_6341_, v_x_6342_, v_isExporting_boxed_6349_, v___y_6344_, v___y_6345_, v___y_6346_, v___y_6347_);
lean_dec(v___y_6347_);
lean_dec_ref(v___y_6346_);
lean_dec(v___y_6345_);
lean_dec_ref(v___y_6344_);
return v_res_6350_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(lean_object* v_00_u03b1_6351_, lean_object* v_x_6352_, uint8_t v_when_6353_, lean_object* v___y_6354_, lean_object* v___y_6355_, lean_object* v___y_6356_, lean_object* v___y_6357_){
_start:
{
lean_object* v___x_6359_; 
v___x_6359_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___redArg(v_x_6352_, v_when_6353_, v___y_6354_, v___y_6355_, v___y_6356_, v___y_6357_);
return v___x_6359_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8___boxed(lean_object* v_00_u03b1_6360_, lean_object* v_x_6361_, lean_object* v_when_6362_, lean_object* v___y_6363_, lean_object* v___y_6364_, lean_object* v___y_6365_, lean_object* v___y_6366_, lean_object* v___y_6367_){
_start:
{
uint8_t v_when_boxed_6368_; lean_object* v_res_6369_; 
v_when_boxed_6368_ = lean_unbox(v_when_6362_);
v_res_6369_ = l_Lean_withoutExporting___at___00Lean_Elab_WF_solveDecreasingGoals_spec__8(v_00_u03b1_6360_, v_x_6361_, v_when_boxed_6368_, v___y_6363_, v___y_6364_, v___y_6365_, v___y_6366_);
lean_dec(v___y_6366_);
lean_dec_ref(v___y_6365_);
lean_dec(v___y_6364_);
lean_dec_ref(v___y_6363_);
return v_res_6369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(lean_object* v_msgData_6370_, lean_object* v_macroStack_6371_, lean_object* v___y_6372_, lean_object* v___y_6373_, lean_object* v___y_6374_, lean_object* v___y_6375_, lean_object* v___y_6376_, lean_object* v___y_6377_){
_start:
{
lean_object* v___x_6379_; 
v___x_6379_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___redArg(v_msgData_6370_, v_macroStack_6371_, v___y_6376_);
return v___x_6379_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1___boxed(lean_object* v_msgData_6380_, lean_object* v_macroStack_6381_, lean_object* v___y_6382_, lean_object* v___y_6383_, lean_object* v___y_6384_, lean_object* v___y_6385_, lean_object* v___y_6386_, lean_object* v___y_6387_, lean_object* v___y_6388_){
_start:
{
lean_object* v_res_6389_; 
v_res_6389_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_WF_solveDecreasingGoals_spec__1_spec__1(v_msgData_6380_, v_macroStack_6381_, v___y_6382_, v___y_6383_, v___y_6384_, v___y_6385_, v___y_6386_, v___y_6387_);
lean_dec(v___y_6387_);
lean_dec_ref(v___y_6386_);
lean_dec(v___y_6385_);
lean_dec_ref(v___y_6384_);
lean_dec(v___y_6383_);
lean_dec_ref(v___y_6382_);
return v_res_6389_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__0(void){
_start:
{
lean_object* v___x_6390_; 
v___x_6390_ = lean_mk_string_unchecked("invImage", 8, 8);
return v___x_6390_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__1(void){
_start:
{
lean_object* v___x_6391_; lean_object* v___x_6392_; 
v___x_6391_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__0, &l_Lean_Elab_WF_isNatLtWF___closed__0_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__0);
v___x_6392_ = l_Lean_Name_mkStr1(v___x_6391_);
return v___x_6392_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__2(void){
_start:
{
lean_object* v___x_6393_; 
v___x_6393_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_6393_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__3(void){
_start:
{
lean_object* v___x_6394_; lean_object* v___x_6395_; 
v___x_6394_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__2, &l_Lean_Elab_WF_isNatLtWF___closed__2_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__2);
v___x_6395_ = l_Lean_Name_mkStr1(v___x_6394_);
return v___x_6395_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__4(void){
_start:
{
lean_object* v___x_6396_; lean_object* v___x_6397_; lean_object* v___x_6398_; 
v___x_6396_ = lean_box(0);
v___x_6397_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__3, &l_Lean_Elab_WF_isNatLtWF___closed__3_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__3);
v___x_6398_ = l_Lean_mkConst(v___x_6397_, v___x_6396_);
return v___x_6398_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__5(void){
_start:
{
lean_object* v___x_6399_; 
v___x_6399_ = lean_mk_string_unchecked("lt_wfRel", 8, 8);
return v___x_6399_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__6(void){
_start:
{
lean_object* v___x_6400_; lean_object* v___x_6401_; lean_object* v___x_6402_; 
v___x_6400_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__5, &l_Lean_Elab_WF_isNatLtWF___closed__5_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__5);
v___x_6401_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__2, &l_Lean_Elab_WF_isNatLtWF___closed__2_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__2);
v___x_6402_ = l_Lean_Name_mkStr2(v___x_6401_, v___x_6400_);
return v___x_6402_;
}
}
static lean_object* _init_l_Lean_Elab_WF_isNatLtWF___closed__7(void){
_start:
{
lean_object* v___x_6403_; lean_object* v___x_6404_; lean_object* v___x_6405_; 
v___x_6403_ = lean_box(0);
v___x_6404_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__6, &l_Lean_Elab_WF_isNatLtWF___closed__6_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__6);
v___x_6405_ = l_Lean_mkConst(v___x_6404_, v___x_6403_);
return v___x_6405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF(lean_object* v_wfRel_6406_, lean_object* v_a_6407_, lean_object* v_a_6408_, lean_object* v_a_6409_, lean_object* v_a_6410_){
_start:
{
lean_object* v___x_6412_; 
v___x_6412_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_wfRel_6406_, v_a_6408_, v_a_6410_);
if (lean_obj_tag(v___x_6412_) == 0)
{
lean_object* v_a_6413_; lean_object* v___x_6415_; uint8_t v_isShared_6416_; uint8_t v_isSharedCheck_6480_; 
v_a_6413_ = lean_ctor_get(v___x_6412_, 0);
v_isSharedCheck_6480_ = !lean_is_exclusive(v___x_6412_);
if (v_isSharedCheck_6480_ == 0)
{
v___x_6415_ = v___x_6412_;
v_isShared_6416_ = v_isSharedCheck_6480_;
goto v_resetjp_6414_;
}
else
{
lean_inc(v_a_6413_);
lean_dec(v___x_6412_);
v___x_6415_ = lean_box(0);
v_isShared_6416_ = v_isSharedCheck_6480_;
goto v_resetjp_6414_;
}
v_resetjp_6414_:
{
lean_object* v___x_6422_; uint8_t v___x_6423_; 
v___x_6422_ = l_Lean_Expr_cleanupAnnotations(v_a_6413_);
v___x_6423_ = l_Lean_Expr_isApp(v___x_6422_);
if (v___x_6423_ == 0)
{
lean_dec_ref(v___x_6422_);
goto v___jp_6417_;
}
else
{
lean_object* v_arg_6424_; lean_object* v___x_6425_; uint8_t v___x_6426_; 
v_arg_6424_ = lean_ctor_get(v___x_6422_, 1);
lean_inc_ref(v_arg_6424_);
v___x_6425_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6422_);
v___x_6426_ = l_Lean_Expr_isApp(v___x_6425_);
if (v___x_6426_ == 0)
{
lean_dec_ref(v___x_6425_);
lean_dec_ref(v_arg_6424_);
goto v___jp_6417_;
}
else
{
lean_object* v_arg_6427_; lean_object* v___x_6428_; uint8_t v___x_6429_; 
v_arg_6427_ = lean_ctor_get(v___x_6425_, 1);
lean_inc_ref(v_arg_6427_);
v___x_6428_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6425_);
v___x_6429_ = l_Lean_Expr_isApp(v___x_6428_);
if (v___x_6429_ == 0)
{
lean_dec_ref(v___x_6428_);
lean_dec_ref(v_arg_6427_);
lean_dec_ref(v_arg_6424_);
goto v___jp_6417_;
}
else
{
lean_object* v_arg_6430_; lean_object* v___x_6431_; uint8_t v___x_6432_; 
v_arg_6430_ = lean_ctor_get(v___x_6428_, 1);
lean_inc_ref(v_arg_6430_);
v___x_6431_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6428_);
v___x_6432_ = l_Lean_Expr_isApp(v___x_6431_);
if (v___x_6432_ == 0)
{
lean_dec_ref(v___x_6431_);
lean_dec_ref(v_arg_6430_);
lean_dec_ref(v_arg_6427_);
lean_dec_ref(v_arg_6424_);
goto v___jp_6417_;
}
else
{
lean_object* v___x_6433_; lean_object* v___x_6434_; uint8_t v___x_6435_; 
v___x_6433_ = l_Lean_Expr_appFnCleanup___redArg(v___x_6431_);
v___x_6434_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__1, &l_Lean_Elab_WF_isNatLtWF___closed__1_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__1);
v___x_6435_ = l_Lean_Expr_isConstOf(v___x_6433_, v___x_6434_);
lean_dec_ref(v___x_6433_);
if (v___x_6435_ == 0)
{
lean_dec_ref(v_arg_6430_);
lean_dec_ref(v_arg_6427_);
lean_dec_ref(v_arg_6424_);
goto v___jp_6417_;
}
else
{
lean_object* v___x_6436_; lean_object* v___x_6437_; 
lean_del_object(v___x_6415_);
v___x_6436_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__4, &l_Lean_Elab_WF_isNatLtWF___closed__4_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__4);
v___x_6437_ = l_Lean_Meta_isExprDefEq(v_arg_6430_, v___x_6436_, v_a_6407_, v_a_6408_, v_a_6409_, v_a_6410_);
if (lean_obj_tag(v___x_6437_) == 0)
{
lean_object* v_a_6438_; lean_object* v___x_6440_; uint8_t v_isShared_6441_; uint8_t v_isSharedCheck_6471_; 
v_a_6438_ = lean_ctor_get(v___x_6437_, 0);
v_isSharedCheck_6471_ = !lean_is_exclusive(v___x_6437_);
if (v_isSharedCheck_6471_ == 0)
{
v___x_6440_ = v___x_6437_;
v_isShared_6441_ = v_isSharedCheck_6471_;
goto v_resetjp_6439_;
}
else
{
lean_inc(v_a_6438_);
lean_dec(v___x_6437_);
v___x_6440_ = lean_box(0);
v_isShared_6441_ = v_isSharedCheck_6471_;
goto v_resetjp_6439_;
}
v_resetjp_6439_:
{
uint8_t v___x_6442_; 
v___x_6442_ = lean_unbox(v_a_6438_);
lean_dec(v_a_6438_);
if (v___x_6442_ == 0)
{
lean_object* v___x_6443_; lean_object* v___x_6445_; 
lean_dec_ref(v_arg_6427_);
lean_dec_ref(v_arg_6424_);
v___x_6443_ = lean_box(0);
if (v_isShared_6441_ == 0)
{
lean_ctor_set(v___x_6440_, 0, v___x_6443_);
v___x_6445_ = v___x_6440_;
goto v_reusejp_6444_;
}
else
{
lean_object* v_reuseFailAlloc_6446_; 
v_reuseFailAlloc_6446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6446_, 0, v___x_6443_);
v___x_6445_ = v_reuseFailAlloc_6446_;
goto v_reusejp_6444_;
}
v_reusejp_6444_:
{
return v___x_6445_;
}
}
else
{
lean_object* v___x_6447_; lean_object* v___x_6448_; 
lean_del_object(v___x_6440_);
v___x_6447_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__7, &l_Lean_Elab_WF_isNatLtWF___closed__7_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__7);
v___x_6448_ = l_Lean_Meta_isExprDefEq(v_arg_6424_, v___x_6447_, v_a_6407_, v_a_6408_, v_a_6409_, v_a_6410_);
if (lean_obj_tag(v___x_6448_) == 0)
{
lean_object* v_a_6449_; lean_object* v___x_6451_; uint8_t v_isShared_6452_; uint8_t v_isSharedCheck_6462_; 
v_a_6449_ = lean_ctor_get(v___x_6448_, 0);
v_isSharedCheck_6462_ = !lean_is_exclusive(v___x_6448_);
if (v_isSharedCheck_6462_ == 0)
{
v___x_6451_ = v___x_6448_;
v_isShared_6452_ = v_isSharedCheck_6462_;
goto v_resetjp_6450_;
}
else
{
lean_inc(v_a_6449_);
lean_dec(v___x_6448_);
v___x_6451_ = lean_box(0);
v_isShared_6452_ = v_isSharedCheck_6462_;
goto v_resetjp_6450_;
}
v_resetjp_6450_:
{
uint8_t v___x_6453_; 
v___x_6453_ = lean_unbox(v_a_6449_);
lean_dec(v_a_6449_);
if (v___x_6453_ == 0)
{
lean_object* v___x_6454_; lean_object* v___x_6456_; 
lean_dec_ref(v_arg_6427_);
v___x_6454_ = lean_box(0);
if (v_isShared_6452_ == 0)
{
lean_ctor_set(v___x_6451_, 0, v___x_6454_);
v___x_6456_ = v___x_6451_;
goto v_reusejp_6455_;
}
else
{
lean_object* v_reuseFailAlloc_6457_; 
v_reuseFailAlloc_6457_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6457_, 0, v___x_6454_);
v___x_6456_ = v_reuseFailAlloc_6457_;
goto v_reusejp_6455_;
}
v_reusejp_6455_:
{
return v___x_6456_;
}
}
else
{
lean_object* v___x_6458_; lean_object* v___x_6460_; 
v___x_6458_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6458_, 0, v_arg_6427_);
if (v_isShared_6452_ == 0)
{
lean_ctor_set(v___x_6451_, 0, v___x_6458_);
v___x_6460_ = v___x_6451_;
goto v_reusejp_6459_;
}
else
{
lean_object* v_reuseFailAlloc_6461_; 
v_reuseFailAlloc_6461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6461_, 0, v___x_6458_);
v___x_6460_ = v_reuseFailAlloc_6461_;
goto v_reusejp_6459_;
}
v_reusejp_6459_:
{
return v___x_6460_;
}
}
}
}
else
{
lean_object* v_a_6463_; lean_object* v___x_6465_; uint8_t v_isShared_6466_; uint8_t v_isSharedCheck_6470_; 
lean_dec_ref(v_arg_6427_);
v_a_6463_ = lean_ctor_get(v___x_6448_, 0);
v_isSharedCheck_6470_ = !lean_is_exclusive(v___x_6448_);
if (v_isSharedCheck_6470_ == 0)
{
v___x_6465_ = v___x_6448_;
v_isShared_6466_ = v_isSharedCheck_6470_;
goto v_resetjp_6464_;
}
else
{
lean_inc(v_a_6463_);
lean_dec(v___x_6448_);
v___x_6465_ = lean_box(0);
v_isShared_6466_ = v_isSharedCheck_6470_;
goto v_resetjp_6464_;
}
v_resetjp_6464_:
{
lean_object* v___x_6468_; 
if (v_isShared_6466_ == 0)
{
v___x_6468_ = v___x_6465_;
goto v_reusejp_6467_;
}
else
{
lean_object* v_reuseFailAlloc_6469_; 
v_reuseFailAlloc_6469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6469_, 0, v_a_6463_);
v___x_6468_ = v_reuseFailAlloc_6469_;
goto v_reusejp_6467_;
}
v_reusejp_6467_:
{
return v___x_6468_;
}
}
}
}
}
}
else
{
lean_object* v_a_6472_; lean_object* v___x_6474_; uint8_t v_isShared_6475_; uint8_t v_isSharedCheck_6479_; 
lean_dec_ref(v_arg_6427_);
lean_dec_ref(v_arg_6424_);
v_a_6472_ = lean_ctor_get(v___x_6437_, 0);
v_isSharedCheck_6479_ = !lean_is_exclusive(v___x_6437_);
if (v_isSharedCheck_6479_ == 0)
{
v___x_6474_ = v___x_6437_;
v_isShared_6475_ = v_isSharedCheck_6479_;
goto v_resetjp_6473_;
}
else
{
lean_inc(v_a_6472_);
lean_dec(v___x_6437_);
v___x_6474_ = lean_box(0);
v_isShared_6475_ = v_isSharedCheck_6479_;
goto v_resetjp_6473_;
}
v_resetjp_6473_:
{
lean_object* v___x_6477_; 
if (v_isShared_6475_ == 0)
{
v___x_6477_ = v___x_6474_;
goto v_reusejp_6476_;
}
else
{
lean_object* v_reuseFailAlloc_6478_; 
v_reuseFailAlloc_6478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6478_, 0, v_a_6472_);
v___x_6477_ = v_reuseFailAlloc_6478_;
goto v_reusejp_6476_;
}
v_reusejp_6476_:
{
return v___x_6477_;
}
}
}
}
}
}
}
}
v___jp_6417_:
{
lean_object* v___x_6418_; lean_object* v___x_6420_; 
v___x_6418_ = lean_box(0);
if (v_isShared_6416_ == 0)
{
lean_ctor_set(v___x_6415_, 0, v___x_6418_);
v___x_6420_ = v___x_6415_;
goto v_reusejp_6419_;
}
else
{
lean_object* v_reuseFailAlloc_6421_; 
v_reuseFailAlloc_6421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6421_, 0, v___x_6418_);
v___x_6420_ = v_reuseFailAlloc_6421_;
goto v_reusejp_6419_;
}
v_reusejp_6419_:
{
return v___x_6420_;
}
}
}
}
else
{
lean_object* v_a_6481_; lean_object* v___x_6483_; uint8_t v_isShared_6484_; uint8_t v_isSharedCheck_6488_; 
v_a_6481_ = lean_ctor_get(v___x_6412_, 0);
v_isSharedCheck_6488_ = !lean_is_exclusive(v___x_6412_);
if (v_isSharedCheck_6488_ == 0)
{
v___x_6483_ = v___x_6412_;
v_isShared_6484_ = v_isSharedCheck_6488_;
goto v_resetjp_6482_;
}
else
{
lean_inc(v_a_6481_);
lean_dec(v___x_6412_);
v___x_6483_ = lean_box(0);
v_isShared_6484_ = v_isSharedCheck_6488_;
goto v_resetjp_6482_;
}
v_resetjp_6482_:
{
lean_object* v___x_6486_; 
if (v_isShared_6484_ == 0)
{
v___x_6486_ = v___x_6483_;
goto v_reusejp_6485_;
}
else
{
lean_object* v_reuseFailAlloc_6487_; 
v_reuseFailAlloc_6487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6487_, 0, v_a_6481_);
v___x_6486_ = v_reuseFailAlloc_6487_;
goto v_reusejp_6485_;
}
v_reusejp_6485_:
{
return v___x_6486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_isNatLtWF___boxed(lean_object* v_wfRel_6489_, lean_object* v_a_6490_, lean_object* v_a_6491_, lean_object* v_a_6492_, lean_object* v_a_6493_, lean_object* v_a_6494_){
_start:
{
lean_object* v_res_6495_; 
v_res_6495_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6489_, v_a_6490_, v_a_6491_, v_a_6492_, v_a_6493_);
lean_dec(v_a_6493_);
lean_dec_ref(v_a_6492_);
lean_dec(v_a_6491_);
lean_dec_ref(v_a_6490_);
return v_res_6495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(lean_object* v_type_6496_, lean_object* v_maxFVars_x3f_6497_, lean_object* v_k_6498_, uint8_t v_cleanupAnnotations_6499_, uint8_t v_whnfType_6500_, lean_object* v___y_6501_, lean_object* v___y_6502_, lean_object* v___y_6503_, lean_object* v___y_6504_, lean_object* v___y_6505_, lean_object* v___y_6506_){
_start:
{
lean_object* v___f_6508_; lean_object* v___x_6509_; 
lean_inc(v___y_6502_);
lean_inc_ref(v___y_6501_);
v___f_6508_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00__private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn_spec__0___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_6508_, 0, v_k_6498_);
lean_closure_set(v___f_6508_, 1, v___y_6501_);
lean_closure_set(v___f_6508_, 2, v___y_6502_);
v___x_6509_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_6496_, v_maxFVars_x3f_6497_, v___f_6508_, v_cleanupAnnotations_6499_, v_whnfType_6500_, v___y_6503_, v___y_6504_, v___y_6505_, v___y_6506_);
if (lean_obj_tag(v___x_6509_) == 0)
{
return v___x_6509_;
}
else
{
lean_object* v_a_6510_; lean_object* v___x_6512_; uint8_t v_isShared_6513_; uint8_t v_isSharedCheck_6517_; 
v_a_6510_ = lean_ctor_get(v___x_6509_, 0);
v_isSharedCheck_6517_ = !lean_is_exclusive(v___x_6509_);
if (v_isSharedCheck_6517_ == 0)
{
v___x_6512_ = v___x_6509_;
v_isShared_6513_ = v_isSharedCheck_6517_;
goto v_resetjp_6511_;
}
else
{
lean_inc(v_a_6510_);
lean_dec(v___x_6509_);
v___x_6512_ = lean_box(0);
v_isShared_6513_ = v_isSharedCheck_6517_;
goto v_resetjp_6511_;
}
v_resetjp_6511_:
{
lean_object* v___x_6515_; 
if (v_isShared_6513_ == 0)
{
v___x_6515_ = v___x_6512_;
goto v_reusejp_6514_;
}
else
{
lean_object* v_reuseFailAlloc_6516_; 
v_reuseFailAlloc_6516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6516_, 0, v_a_6510_);
v___x_6515_ = v_reuseFailAlloc_6516_;
goto v_reusejp_6514_;
}
v_reusejp_6514_:
{
return v___x_6515_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg___boxed(lean_object* v_type_6518_, lean_object* v_maxFVars_x3f_6519_, lean_object* v_k_6520_, lean_object* v_cleanupAnnotations_6521_, lean_object* v_whnfType_6522_, lean_object* v___y_6523_, lean_object* v___y_6524_, lean_object* v___y_6525_, lean_object* v___y_6526_, lean_object* v___y_6527_, lean_object* v___y_6528_, lean_object* v___y_6529_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6530_; uint8_t v_whnfType_boxed_6531_; lean_object* v_res_6532_; 
v_cleanupAnnotations_boxed_6530_ = lean_unbox(v_cleanupAnnotations_6521_);
v_whnfType_boxed_6531_ = lean_unbox(v_whnfType_6522_);
v_res_6532_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6518_, v_maxFVars_x3f_6519_, v_k_6520_, v_cleanupAnnotations_boxed_6530_, v_whnfType_boxed_6531_, v___y_6523_, v___y_6524_, v___y_6525_, v___y_6526_, v___y_6527_, v___y_6528_);
lean_dec(v___y_6528_);
lean_dec_ref(v___y_6527_);
lean_dec(v___y_6526_);
lean_dec_ref(v___y_6525_);
lean_dec(v___y_6524_);
lean_dec_ref(v___y_6523_);
return v_res_6532_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(lean_object* v_00_u03b1_6533_, lean_object* v_type_6534_, lean_object* v_maxFVars_x3f_6535_, lean_object* v_k_6536_, uint8_t v_cleanupAnnotations_6537_, uint8_t v_whnfType_6538_, lean_object* v___y_6539_, lean_object* v___y_6540_, lean_object* v___y_6541_, lean_object* v___y_6542_, lean_object* v___y_6543_, lean_object* v___y_6544_){
_start:
{
lean_object* v___x_6546_; 
v___x_6546_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_type_6534_, v_maxFVars_x3f_6535_, v_k_6536_, v_cleanupAnnotations_6537_, v_whnfType_6538_, v___y_6539_, v___y_6540_, v___y_6541_, v___y_6542_, v___y_6543_, v___y_6544_);
return v___x_6546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___boxed(lean_object* v_00_u03b1_6547_, lean_object* v_type_6548_, lean_object* v_maxFVars_x3f_6549_, lean_object* v_k_6550_, lean_object* v_cleanupAnnotations_6551_, lean_object* v_whnfType_6552_, lean_object* v___y_6553_, lean_object* v___y_6554_, lean_object* v___y_6555_, lean_object* v___y_6556_, lean_object* v___y_6557_, lean_object* v___y_6558_, lean_object* v___y_6559_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_6560_; uint8_t v_whnfType_boxed_6561_; lean_object* v_res_6562_; 
v_cleanupAnnotations_boxed_6560_ = lean_unbox(v_cleanupAnnotations_6551_);
v_whnfType_boxed_6561_ = lean_unbox(v_whnfType_6552_);
v_res_6562_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0(v_00_u03b1_6547_, v_type_6548_, v_maxFVars_x3f_6549_, v_k_6550_, v_cleanupAnnotations_boxed_6560_, v_whnfType_boxed_6561_, v___y_6553_, v___y_6554_, v___y_6555_, v___y_6556_, v___y_6557_, v___y_6558_);
lean_dec(v___y_6558_);
lean_dec_ref(v___y_6557_);
lean_dec(v___y_6556_);
lean_dec_ref(v___y_6555_);
lean_dec(v___y_6554_);
lean_dec_ref(v___y_6553_);
return v_res_6562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(lean_object* v_lctx_6563_, lean_object* v_x_6564_, lean_object* v___y_6565_, lean_object* v___y_6566_, lean_object* v___y_6567_, lean_object* v___y_6568_, lean_object* v___y_6569_, lean_object* v___y_6570_){
_start:
{
lean_object* v_keyedConfig_6572_; uint8_t v_trackZetaDelta_6573_; lean_object* v_zetaDeltaSet_6574_; lean_object* v_localInstances_6575_; lean_object* v_defEqCtx_x3f_6576_; lean_object* v_synthPendingDepth_6577_; lean_object* v_canUnfold_x3f_6578_; uint8_t v_univApprox_6579_; uint8_t v_inTypeClassResolution_6580_; uint8_t v_cacheInferType_6581_; lean_object* v___x_6582_; lean_object* v___x_6583_; 
v_keyedConfig_6572_ = lean_ctor_get(v___y_6567_, 0);
v_trackZetaDelta_6573_ = lean_ctor_get_uint8(v___y_6567_, sizeof(void*)*7);
v_zetaDeltaSet_6574_ = lean_ctor_get(v___y_6567_, 1);
v_localInstances_6575_ = lean_ctor_get(v___y_6567_, 3);
v_defEqCtx_x3f_6576_ = lean_ctor_get(v___y_6567_, 4);
v_synthPendingDepth_6577_ = lean_ctor_get(v___y_6567_, 5);
v_canUnfold_x3f_6578_ = lean_ctor_get(v___y_6567_, 6);
v_univApprox_6579_ = lean_ctor_get_uint8(v___y_6567_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_6580_ = lean_ctor_get_uint8(v___y_6567_, sizeof(void*)*7 + 2);
v_cacheInferType_6581_ = lean_ctor_get_uint8(v___y_6567_, sizeof(void*)*7 + 3);
lean_inc(v_canUnfold_x3f_6578_);
lean_inc(v_synthPendingDepth_6577_);
lean_inc(v_defEqCtx_x3f_6576_);
lean_inc_ref(v_localInstances_6575_);
lean_inc(v_zetaDeltaSet_6574_);
lean_inc_ref(v_keyedConfig_6572_);
v___x_6582_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_6582_, 0, v_keyedConfig_6572_);
lean_ctor_set(v___x_6582_, 1, v_zetaDeltaSet_6574_);
lean_ctor_set(v___x_6582_, 2, v_lctx_6563_);
lean_ctor_set(v___x_6582_, 3, v_localInstances_6575_);
lean_ctor_set(v___x_6582_, 4, v_defEqCtx_x3f_6576_);
lean_ctor_set(v___x_6582_, 5, v_synthPendingDepth_6577_);
lean_ctor_set(v___x_6582_, 6, v_canUnfold_x3f_6578_);
lean_ctor_set_uint8(v___x_6582_, sizeof(void*)*7, v_trackZetaDelta_6573_);
lean_ctor_set_uint8(v___x_6582_, sizeof(void*)*7 + 1, v_univApprox_6579_);
lean_ctor_set_uint8(v___x_6582_, sizeof(void*)*7 + 2, v_inTypeClassResolution_6580_);
lean_ctor_set_uint8(v___x_6582_, sizeof(void*)*7 + 3, v_cacheInferType_6581_);
lean_inc(v___y_6570_);
lean_inc_ref(v___y_6569_);
lean_inc(v___y_6568_);
lean_inc(v___y_6566_);
lean_inc_ref(v___y_6565_);
v___x_6583_ = lean_apply_7(v_x_6564_, v___y_6565_, v___y_6566_, v___x_6582_, v___y_6568_, v___y_6569_, v___y_6570_, lean_box(0));
if (lean_obj_tag(v___x_6583_) == 0)
{
lean_object* v_a_6584_; lean_object* v___x_6586_; uint8_t v_isShared_6587_; uint8_t v_isSharedCheck_6591_; 
v_a_6584_ = lean_ctor_get(v___x_6583_, 0);
v_isSharedCheck_6591_ = !lean_is_exclusive(v___x_6583_);
if (v_isSharedCheck_6591_ == 0)
{
v___x_6586_ = v___x_6583_;
v_isShared_6587_ = v_isSharedCheck_6591_;
goto v_resetjp_6585_;
}
else
{
lean_inc(v_a_6584_);
lean_dec(v___x_6583_);
v___x_6586_ = lean_box(0);
v_isShared_6587_ = v_isSharedCheck_6591_;
goto v_resetjp_6585_;
}
v_resetjp_6585_:
{
lean_object* v___x_6589_; 
if (v_isShared_6587_ == 0)
{
v___x_6589_ = v___x_6586_;
goto v_reusejp_6588_;
}
else
{
lean_object* v_reuseFailAlloc_6590_; 
v_reuseFailAlloc_6590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6590_, 0, v_a_6584_);
v___x_6589_ = v_reuseFailAlloc_6590_;
goto v_reusejp_6588_;
}
v_reusejp_6588_:
{
return v___x_6589_;
}
}
}
else
{
return v___x_6583_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg___boxed(lean_object* v_lctx_6592_, lean_object* v_x_6593_, lean_object* v___y_6594_, lean_object* v___y_6595_, lean_object* v___y_6596_, lean_object* v___y_6597_, lean_object* v___y_6598_, lean_object* v___y_6599_, lean_object* v___y_6600_){
_start:
{
lean_object* v_res_6601_; 
v_res_6601_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6592_, v_x_6593_, v___y_6594_, v___y_6595_, v___y_6596_, v___y_6597_, v___y_6598_, v___y_6599_);
lean_dec(v___y_6599_);
lean_dec_ref(v___y_6598_);
lean_dec(v___y_6597_);
lean_dec_ref(v___y_6596_);
lean_dec(v___y_6595_);
lean_dec_ref(v___y_6594_);
return v_res_6601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(lean_object* v_00_u03b1_6602_, lean_object* v_lctx_6603_, lean_object* v_x_6604_, lean_object* v___y_6605_, lean_object* v___y_6606_, lean_object* v___y_6607_, lean_object* v___y_6608_, lean_object* v___y_6609_, lean_object* v___y_6610_){
_start:
{
lean_object* v___x_6612_; 
v___x_6612_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v_lctx_6603_, v_x_6604_, v___y_6605_, v___y_6606_, v___y_6607_, v___y_6608_, v___y_6609_, v___y_6610_);
return v___x_6612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___boxed(lean_object* v_00_u03b1_6613_, lean_object* v_lctx_6614_, lean_object* v_x_6615_, lean_object* v___y_6616_, lean_object* v___y_6617_, lean_object* v___y_6618_, lean_object* v___y_6619_, lean_object* v___y_6620_, lean_object* v___y_6621_, lean_object* v___y_6622_){
_start:
{
lean_object* v_res_6623_; 
v_res_6623_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1(v_00_u03b1_6613_, v_lctx_6614_, v_x_6615_, v___y_6616_, v___y_6617_, v___y_6618_, v___y_6619_, v___y_6620_, v___y_6621_);
lean_dec(v___y_6621_);
lean_dec_ref(v___y_6620_);
lean_dec(v___y_6619_);
lean_dec_ref(v___y_6618_);
lean_dec(v___y_6617_);
lean_dec_ref(v___y_6616_);
return v_res_6623_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__0(void){
_start:
{
lean_object* v___x_6624_; 
v___x_6624_ = lean_mk_string_unchecked("WellFounded", 11, 11);
return v___x_6624_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__1(void){
_start:
{
lean_object* v___x_6625_; 
v___x_6625_ = lean_mk_string_unchecked("fix", 3, 3);
return v___x_6625_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__2(void){
_start:
{
lean_object* v___x_6626_; lean_object* v___x_6627_; lean_object* v___x_6628_; lean_object* v___x_6629_; 
v___x_6626_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__1, &l_Lean_Elab_WF_mkFix___lam__0___closed__1_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__1);
v___x_6627_ = lean_obj_once(&l_Lean_Elab_WF_isNatLtWF___closed__2, &l_Lean_Elab_WF_isNatLtWF___closed__2_once, _init_l_Lean_Elab_WF_isNatLtWF___closed__2);
v___x_6628_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__0, &l_Lean_Elab_WF_mkFix___lam__0___closed__0_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__0);
v___x_6629_ = l_Lean_Name_mkStr3(v___x_6628_, v___x_6627_, v___x_6626_);
return v___x_6629_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__3(void){
_start:
{
lean_object* v___x_6630_; 
v___x_6630_ = lean_mk_string_unchecked("WellFoundedRelation", 19, 19);
return v___x_6630_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__4(void){
_start:
{
lean_object* v___x_6631_; lean_object* v___x_6632_; 
v___x_6631_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__3, &l_Lean_Elab_WF_mkFix___lam__0___closed__3_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__3);
v___x_6632_ = l_Lean_Name_mkStr1(v___x_6631_);
return v___x_6632_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__5(void){
_start:
{
lean_object* v___x_6633_; 
v___x_6633_ = lean_mk_string_unchecked("opaqueId", 8, 8);
return v___x_6633_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__6(void){
_start:
{
lean_object* v___x_6634_; lean_object* v___x_6635_; lean_object* v___x_6636_; 
v___x_6634_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__5, &l_Lean_Elab_WF_mkFix___lam__0___closed__5_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__5);
v___x_6635_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_, &l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4__once, _init_l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn___closed__7_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_);
v___x_6636_ = l_Lean_Name_mkStr2(v___x_6635_, v___x_6634_);
return v___x_6636_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___lam__0___closed__7(void){
_start:
{
lean_object* v___x_6637_; lean_object* v___x_6638_; lean_object* v___x_6639_; 
v___x_6637_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__1, &l_Lean_Elab_WF_mkFix___lam__0___closed__1_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__1);
v___x_6638_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__0, &l_Lean_Elab_WF_mkFix___lam__0___closed__0_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__0);
v___x_6639_ = l_Lean_Name_mkStr2(v___x_6638_, v___x_6637_);
return v___x_6639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0(lean_object* v___x_6640_, lean_object* v___x_6641_, lean_object* v_wfRel_6642_, lean_object* v_x_6643_, lean_object* v_type_6644_, lean_object* v___y_6645_, lean_object* v___y_6646_, lean_object* v___y_6647_, lean_object* v___y_6648_, lean_object* v___y_6649_, lean_object* v___y_6650_){
_start:
{
lean_object* v___x_6652_; lean_object* v___x_6653_; lean_object* v___x_6654_; lean_object* v___x_6655_; 
v___x_6652_ = lean_unsigned_to_nat(0u);
v___x_6653_ = lean_array_get_borrowed(v___x_6640_, v_x_6643_, v___x_6652_);
v___x_6654_ = l_Lean_Expr_fvarId_x21(v___x_6653_);
v___x_6655_ = l_Lean_FVarId_getUserName___redArg(v___x_6654_, v___y_6647_, v___y_6649_, v___y_6650_);
if (lean_obj_tag(v___x_6655_) == 0)
{
lean_object* v_a_6656_; lean_object* v___x_6657_; 
v_a_6656_ = lean_ctor_get(v___x_6655_, 0);
lean_inc(v_a_6656_);
lean_dec_ref(v___x_6655_);
lean_inc(v___y_6650_);
lean_inc_ref(v___y_6649_);
lean_inc(v___y_6648_);
lean_inc_ref(v___y_6647_);
lean_inc(v___x_6653_);
v___x_6657_ = lean_infer_type(v___x_6653_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_);
if (lean_obj_tag(v___x_6657_) == 0)
{
lean_object* v_a_6658_; lean_object* v___x_6659_; 
v_a_6658_ = lean_ctor_get(v___x_6657_, 0);
lean_inc_n(v_a_6658_, 2);
lean_dec_ref(v___x_6657_);
v___x_6659_ = l_Lean_Meta_getLevel(v_a_6658_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_);
if (lean_obj_tag(v___x_6659_) == 0)
{
lean_object* v_a_6660_; lean_object* v___x_6661_; 
v_a_6660_ = lean_ctor_get(v___x_6659_, 0);
lean_inc(v_a_6660_);
lean_dec_ref(v___x_6659_);
lean_inc_ref(v_type_6644_);
v___x_6661_ = l_Lean_Meta_getLevel(v_type_6644_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_);
if (lean_obj_tag(v___x_6661_) == 0)
{
lean_object* v_a_6662_; lean_object* v___x_6663_; lean_object* v___x_6664_; uint8_t v___x_6665_; uint8_t v___x_6666_; uint8_t v___x_6667_; lean_object* v___x_6668_; 
v_a_6662_ = lean_ctor_get(v___x_6661_, 0);
lean_inc(v_a_6662_);
lean_dec_ref(v___x_6661_);
v___x_6663_ = lean_mk_empty_array_with_capacity(v___x_6641_);
lean_inc(v___x_6653_);
lean_inc_ref(v___x_6663_);
v___x_6664_ = lean_array_push(v___x_6663_, v___x_6653_);
v___x_6665_ = 0;
v___x_6666_ = 1;
v___x_6667_ = 1;
v___x_6668_ = l_Lean_Meta_mkLambdaFVars(v___x_6664_, v_type_6644_, v___x_6665_, v___x_6666_, v___x_6665_, v___x_6666_, v___x_6667_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_);
lean_dec_ref(v___x_6664_);
if (lean_obj_tag(v___x_6668_) == 0)
{
lean_object* v_a_6669_; lean_object* v___x_6670_; 
v_a_6669_ = lean_ctor_get(v___x_6668_, 0);
lean_inc(v_a_6669_);
lean_dec_ref(v___x_6668_);
lean_inc_ref(v_wfRel_6642_);
v___x_6670_ = l_Lean_Elab_WF_isNatLtWF(v_wfRel_6642_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_);
if (lean_obj_tag(v___x_6670_) == 0)
{
lean_object* v_a_6671_; lean_object* v___x_6673_; uint8_t v_isShared_6674_; uint8_t v_isSharedCheck_6715_; 
v_a_6671_ = lean_ctor_get(v___x_6670_, 0);
v_isSharedCheck_6715_ = !lean_is_exclusive(v___x_6670_);
if (v_isSharedCheck_6715_ == 0)
{
v___x_6673_ = v___x_6670_;
v_isShared_6674_ = v_isSharedCheck_6715_;
goto v_resetjp_6672_;
}
else
{
lean_inc(v_a_6671_);
lean_dec(v___x_6670_);
v___x_6673_ = lean_box(0);
v_isShared_6674_ = v_isSharedCheck_6715_;
goto v_resetjp_6672_;
}
v_resetjp_6672_:
{
if (lean_obj_tag(v_a_6671_) == 1)
{
lean_object* v_val_6675_; lean_object* v___x_6676_; lean_object* v___x_6677_; lean_object* v___x_6678_; lean_object* v___x_6679_; lean_object* v___x_6680_; lean_object* v___x_6681_; lean_object* v___x_6682_; lean_object* v___x_6684_; 
lean_dec_ref(v___x_6663_);
lean_dec_ref(v_wfRel_6642_);
lean_dec(v___x_6641_);
v_val_6675_ = lean_ctor_get(v_a_6671_, 0);
lean_inc(v_val_6675_);
lean_dec_ref(v_a_6671_);
v___x_6676_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__2, &l_Lean_Elab_WF_mkFix___lam__0___closed__2_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__2);
v___x_6677_ = lean_box(0);
v___x_6678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6678_, 0, v_a_6662_);
lean_ctor_set(v___x_6678_, 1, v___x_6677_);
v___x_6679_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6679_, 0, v_a_6660_);
lean_ctor_set(v___x_6679_, 1, v___x_6678_);
v___x_6680_ = l_Lean_mkConst(v___x_6676_, v___x_6679_);
v___x_6681_ = l_Lean_mkApp3(v___x_6680_, v_a_6658_, v_a_6669_, v_val_6675_);
v___x_6682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6682_, 0, v___x_6681_);
lean_ctor_set(v___x_6682_, 1, v_a_6656_);
if (v_isShared_6674_ == 0)
{
lean_ctor_set(v___x_6673_, 0, v___x_6682_);
v___x_6684_ = v___x_6673_;
goto v_reusejp_6683_;
}
else
{
lean_object* v_reuseFailAlloc_6685_; 
v_reuseFailAlloc_6685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6685_, 0, v___x_6682_);
v___x_6684_ = v_reuseFailAlloc_6685_;
goto v_reusejp_6683_;
}
v_reusejp_6683_:
{
return v___x_6684_;
}
}
else
{
lean_object* v___x_6686_; lean_object* v___x_6687_; lean_object* v___x_6688_; lean_object* v___x_6689_; lean_object* v___x_6690_; lean_object* v___x_6691_; 
lean_del_object(v___x_6673_);
lean_dec(v_a_6671_);
v___x_6686_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__4, &l_Lean_Elab_WF_mkFix___lam__0___closed__4_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__4);
lean_inc_ref(v_wfRel_6642_);
v___x_6687_ = l_Lean_mkProj(v___x_6686_, v___x_6652_, v_wfRel_6642_);
v___x_6688_ = l_Lean_mkProj(v___x_6686_, v___x_6641_, v_wfRel_6642_);
v___x_6689_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__6, &l_Lean_Elab_WF_mkFix___lam__0___closed__6_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__6);
v___x_6690_ = lean_array_push(v___x_6663_, v___x_6688_);
v___x_6691_ = l_Lean_Meta_mkAppM(v___x_6689_, v___x_6690_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_);
if (lean_obj_tag(v___x_6691_) == 0)
{
lean_object* v_a_6692_; lean_object* v___x_6694_; uint8_t v_isShared_6695_; uint8_t v_isSharedCheck_6706_; 
v_a_6692_ = lean_ctor_get(v___x_6691_, 0);
v_isSharedCheck_6706_ = !lean_is_exclusive(v___x_6691_);
if (v_isSharedCheck_6706_ == 0)
{
v___x_6694_ = v___x_6691_;
v_isShared_6695_ = v_isSharedCheck_6706_;
goto v_resetjp_6693_;
}
else
{
lean_inc(v_a_6692_);
lean_dec(v___x_6691_);
v___x_6694_ = lean_box(0);
v_isShared_6695_ = v_isSharedCheck_6706_;
goto v_resetjp_6693_;
}
v_resetjp_6693_:
{
lean_object* v___x_6696_; lean_object* v___x_6697_; lean_object* v___x_6698_; lean_object* v___x_6699_; lean_object* v___x_6700_; lean_object* v___x_6701_; lean_object* v___x_6702_; lean_object* v___x_6704_; 
v___x_6696_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___lam__0___closed__7, &l_Lean_Elab_WF_mkFix___lam__0___closed__7_once, _init_l_Lean_Elab_WF_mkFix___lam__0___closed__7);
v___x_6697_ = lean_box(0);
v___x_6698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6698_, 0, v_a_6662_);
lean_ctor_set(v___x_6698_, 1, v___x_6697_);
v___x_6699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_6699_, 0, v_a_6660_);
lean_ctor_set(v___x_6699_, 1, v___x_6698_);
v___x_6700_ = l_Lean_mkConst(v___x_6696_, v___x_6699_);
v___x_6701_ = l_Lean_mkApp4(v___x_6700_, v_a_6658_, v_a_6669_, v___x_6687_, v_a_6692_);
v___x_6702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6702_, 0, v___x_6701_);
lean_ctor_set(v___x_6702_, 1, v_a_6656_);
if (v_isShared_6695_ == 0)
{
lean_ctor_set(v___x_6694_, 0, v___x_6702_);
v___x_6704_ = v___x_6694_;
goto v_reusejp_6703_;
}
else
{
lean_object* v_reuseFailAlloc_6705_; 
v_reuseFailAlloc_6705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6705_, 0, v___x_6702_);
v___x_6704_ = v_reuseFailAlloc_6705_;
goto v_reusejp_6703_;
}
v_reusejp_6703_:
{
return v___x_6704_;
}
}
}
else
{
lean_object* v_a_6707_; lean_object* v___x_6709_; uint8_t v_isShared_6710_; uint8_t v_isSharedCheck_6714_; 
lean_dec_ref(v___x_6687_);
lean_dec(v_a_6669_);
lean_dec(v_a_6662_);
lean_dec(v_a_6660_);
lean_dec(v_a_6658_);
lean_dec(v_a_6656_);
v_a_6707_ = lean_ctor_get(v___x_6691_, 0);
v_isSharedCheck_6714_ = !lean_is_exclusive(v___x_6691_);
if (v_isSharedCheck_6714_ == 0)
{
v___x_6709_ = v___x_6691_;
v_isShared_6710_ = v_isSharedCheck_6714_;
goto v_resetjp_6708_;
}
else
{
lean_inc(v_a_6707_);
lean_dec(v___x_6691_);
v___x_6709_ = lean_box(0);
v_isShared_6710_ = v_isSharedCheck_6714_;
goto v_resetjp_6708_;
}
v_resetjp_6708_:
{
lean_object* v___x_6712_; 
if (v_isShared_6710_ == 0)
{
v___x_6712_ = v___x_6709_;
goto v_reusejp_6711_;
}
else
{
lean_object* v_reuseFailAlloc_6713_; 
v_reuseFailAlloc_6713_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6713_, 0, v_a_6707_);
v___x_6712_ = v_reuseFailAlloc_6713_;
goto v_reusejp_6711_;
}
v_reusejp_6711_:
{
return v___x_6712_;
}
}
}
}
}
}
else
{
lean_object* v_a_6716_; lean_object* v___x_6718_; uint8_t v_isShared_6719_; uint8_t v_isSharedCheck_6723_; 
lean_dec(v_a_6669_);
lean_dec_ref(v___x_6663_);
lean_dec(v_a_6662_);
lean_dec(v_a_6660_);
lean_dec(v_a_6658_);
lean_dec(v_a_6656_);
lean_dec_ref(v_wfRel_6642_);
lean_dec(v___x_6641_);
v_a_6716_ = lean_ctor_get(v___x_6670_, 0);
v_isSharedCheck_6723_ = !lean_is_exclusive(v___x_6670_);
if (v_isSharedCheck_6723_ == 0)
{
v___x_6718_ = v___x_6670_;
v_isShared_6719_ = v_isSharedCheck_6723_;
goto v_resetjp_6717_;
}
else
{
lean_inc(v_a_6716_);
lean_dec(v___x_6670_);
v___x_6718_ = lean_box(0);
v_isShared_6719_ = v_isSharedCheck_6723_;
goto v_resetjp_6717_;
}
v_resetjp_6717_:
{
lean_object* v___x_6721_; 
if (v_isShared_6719_ == 0)
{
v___x_6721_ = v___x_6718_;
goto v_reusejp_6720_;
}
else
{
lean_object* v_reuseFailAlloc_6722_; 
v_reuseFailAlloc_6722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6722_, 0, v_a_6716_);
v___x_6721_ = v_reuseFailAlloc_6722_;
goto v_reusejp_6720_;
}
v_reusejp_6720_:
{
return v___x_6721_;
}
}
}
}
else
{
lean_object* v_a_6724_; lean_object* v___x_6726_; uint8_t v_isShared_6727_; uint8_t v_isSharedCheck_6731_; 
lean_dec_ref(v___x_6663_);
lean_dec(v_a_6662_);
lean_dec(v_a_6660_);
lean_dec(v_a_6658_);
lean_dec(v_a_6656_);
lean_dec_ref(v_wfRel_6642_);
lean_dec(v___x_6641_);
v_a_6724_ = lean_ctor_get(v___x_6668_, 0);
v_isSharedCheck_6731_ = !lean_is_exclusive(v___x_6668_);
if (v_isSharedCheck_6731_ == 0)
{
v___x_6726_ = v___x_6668_;
v_isShared_6727_ = v_isSharedCheck_6731_;
goto v_resetjp_6725_;
}
else
{
lean_inc(v_a_6724_);
lean_dec(v___x_6668_);
v___x_6726_ = lean_box(0);
v_isShared_6727_ = v_isSharedCheck_6731_;
goto v_resetjp_6725_;
}
v_resetjp_6725_:
{
lean_object* v___x_6729_; 
if (v_isShared_6727_ == 0)
{
v___x_6729_ = v___x_6726_;
goto v_reusejp_6728_;
}
else
{
lean_object* v_reuseFailAlloc_6730_; 
v_reuseFailAlloc_6730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6730_, 0, v_a_6724_);
v___x_6729_ = v_reuseFailAlloc_6730_;
goto v_reusejp_6728_;
}
v_reusejp_6728_:
{
return v___x_6729_;
}
}
}
}
else
{
lean_object* v_a_6732_; lean_object* v___x_6734_; uint8_t v_isShared_6735_; uint8_t v_isSharedCheck_6739_; 
lean_dec(v_a_6660_);
lean_dec(v_a_6658_);
lean_dec(v_a_6656_);
lean_dec_ref(v_type_6644_);
lean_dec_ref(v_wfRel_6642_);
lean_dec(v___x_6641_);
v_a_6732_ = lean_ctor_get(v___x_6661_, 0);
v_isSharedCheck_6739_ = !lean_is_exclusive(v___x_6661_);
if (v_isSharedCheck_6739_ == 0)
{
v___x_6734_ = v___x_6661_;
v_isShared_6735_ = v_isSharedCheck_6739_;
goto v_resetjp_6733_;
}
else
{
lean_inc(v_a_6732_);
lean_dec(v___x_6661_);
v___x_6734_ = lean_box(0);
v_isShared_6735_ = v_isSharedCheck_6739_;
goto v_resetjp_6733_;
}
v_resetjp_6733_:
{
lean_object* v___x_6737_; 
if (v_isShared_6735_ == 0)
{
v___x_6737_ = v___x_6734_;
goto v_reusejp_6736_;
}
else
{
lean_object* v_reuseFailAlloc_6738_; 
v_reuseFailAlloc_6738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6738_, 0, v_a_6732_);
v___x_6737_ = v_reuseFailAlloc_6738_;
goto v_reusejp_6736_;
}
v_reusejp_6736_:
{
return v___x_6737_;
}
}
}
}
else
{
lean_object* v_a_6740_; lean_object* v___x_6742_; uint8_t v_isShared_6743_; uint8_t v_isSharedCheck_6747_; 
lean_dec(v_a_6658_);
lean_dec(v_a_6656_);
lean_dec_ref(v_type_6644_);
lean_dec_ref(v_wfRel_6642_);
lean_dec(v___x_6641_);
v_a_6740_ = lean_ctor_get(v___x_6659_, 0);
v_isSharedCheck_6747_ = !lean_is_exclusive(v___x_6659_);
if (v_isSharedCheck_6747_ == 0)
{
v___x_6742_ = v___x_6659_;
v_isShared_6743_ = v_isSharedCheck_6747_;
goto v_resetjp_6741_;
}
else
{
lean_inc(v_a_6740_);
lean_dec(v___x_6659_);
v___x_6742_ = lean_box(0);
v_isShared_6743_ = v_isSharedCheck_6747_;
goto v_resetjp_6741_;
}
v_resetjp_6741_:
{
lean_object* v___x_6745_; 
if (v_isShared_6743_ == 0)
{
v___x_6745_ = v___x_6742_;
goto v_reusejp_6744_;
}
else
{
lean_object* v_reuseFailAlloc_6746_; 
v_reuseFailAlloc_6746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6746_, 0, v_a_6740_);
v___x_6745_ = v_reuseFailAlloc_6746_;
goto v_reusejp_6744_;
}
v_reusejp_6744_:
{
return v___x_6745_;
}
}
}
}
else
{
lean_object* v_a_6748_; lean_object* v___x_6750_; uint8_t v_isShared_6751_; uint8_t v_isSharedCheck_6755_; 
lean_dec(v_a_6656_);
lean_dec_ref(v_type_6644_);
lean_dec_ref(v_wfRel_6642_);
lean_dec(v___x_6641_);
v_a_6748_ = lean_ctor_get(v___x_6657_, 0);
v_isSharedCheck_6755_ = !lean_is_exclusive(v___x_6657_);
if (v_isSharedCheck_6755_ == 0)
{
v___x_6750_ = v___x_6657_;
v_isShared_6751_ = v_isSharedCheck_6755_;
goto v_resetjp_6749_;
}
else
{
lean_inc(v_a_6748_);
lean_dec(v___x_6657_);
v___x_6750_ = lean_box(0);
v_isShared_6751_ = v_isSharedCheck_6755_;
goto v_resetjp_6749_;
}
v_resetjp_6749_:
{
lean_object* v___x_6753_; 
if (v_isShared_6751_ == 0)
{
v___x_6753_ = v___x_6750_;
goto v_reusejp_6752_;
}
else
{
lean_object* v_reuseFailAlloc_6754_; 
v_reuseFailAlloc_6754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6754_, 0, v_a_6748_);
v___x_6753_ = v_reuseFailAlloc_6754_;
goto v_reusejp_6752_;
}
v_reusejp_6752_:
{
return v___x_6753_;
}
}
}
}
else
{
lean_object* v_a_6756_; lean_object* v___x_6758_; uint8_t v_isShared_6759_; uint8_t v_isSharedCheck_6763_; 
lean_dec_ref(v_type_6644_);
lean_dec_ref(v_wfRel_6642_);
lean_dec(v___x_6641_);
v_a_6756_ = lean_ctor_get(v___x_6655_, 0);
v_isSharedCheck_6763_ = !lean_is_exclusive(v___x_6655_);
if (v_isSharedCheck_6763_ == 0)
{
v___x_6758_ = v___x_6655_;
v_isShared_6759_ = v_isSharedCheck_6763_;
goto v_resetjp_6757_;
}
else
{
lean_inc(v_a_6756_);
lean_dec(v___x_6655_);
v___x_6758_ = lean_box(0);
v_isShared_6759_ = v_isSharedCheck_6763_;
goto v_resetjp_6757_;
}
v_resetjp_6757_:
{
lean_object* v___x_6761_; 
if (v_isShared_6759_ == 0)
{
v___x_6761_ = v___x_6758_;
goto v_reusejp_6760_;
}
else
{
lean_object* v_reuseFailAlloc_6762_; 
v_reuseFailAlloc_6762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6762_, 0, v_a_6756_);
v___x_6761_ = v_reuseFailAlloc_6762_;
goto v_reusejp_6760_;
}
v_reusejp_6760_:
{
return v___x_6761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__0___boxed(lean_object* v___x_6764_, lean_object* v___x_6765_, lean_object* v_wfRel_6766_, lean_object* v_x_6767_, lean_object* v_type_6768_, lean_object* v___y_6769_, lean_object* v___y_6770_, lean_object* v___y_6771_, lean_object* v___y_6772_, lean_object* v___y_6773_, lean_object* v___y_6774_, lean_object* v___y_6775_){
_start:
{
lean_object* v_res_6776_; 
v_res_6776_ = l_Lean_Elab_WF_mkFix___lam__0(v___x_6764_, v___x_6765_, v_wfRel_6766_, v_x_6767_, v_type_6768_, v___y_6769_, v___y_6770_, v___y_6771_, v___y_6772_, v___y_6773_, v___y_6774_);
lean_dec(v___y_6774_);
lean_dec_ref(v___y_6773_);
lean_dec(v___y_6772_);
lean_dec_ref(v___y_6771_);
lean_dec(v___y_6770_);
lean_dec_ref(v___y_6769_);
lean_dec_ref(v_x_6767_);
lean_dec_ref(v___x_6764_);
return v_res_6776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1(lean_object* v_prefixArgs_6777_, lean_object* v_declName_6778_, lean_object* v_x_6779_, lean_object* v_F_6780_, lean_object* v_val_6781_, lean_object* v___y_6782_, lean_object* v___y_6783_, lean_object* v___y_6784_, lean_object* v___y_6785_, lean_object* v___y_6786_, lean_object* v___y_6787_){
_start:
{
lean_object* v___x_6789_; lean_object* v___x_6790_; lean_object* v___x_6791_; 
v___x_6789_ = lean_array_get_size(v_prefixArgs_6777_);
v___x_6790_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_replaceRecApps___boxed), 11, 2);
lean_closure_set(v___x_6790_, 0, v_declName_6778_);
lean_closure_set(v___x_6790_, 1, v___x_6789_);
v___x_6791_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processPSigmaCasesOn(v_x_6779_, v_F_6780_, v_val_6781_, v___x_6790_, v___y_6782_, v___y_6783_, v___y_6784_, v___y_6785_, v___y_6786_, v___y_6787_);
return v___x_6791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__1___boxed(lean_object* v_prefixArgs_6792_, lean_object* v_declName_6793_, lean_object* v_x_6794_, lean_object* v_F_6795_, lean_object* v_val_6796_, lean_object* v___y_6797_, lean_object* v___y_6798_, lean_object* v___y_6799_, lean_object* v___y_6800_, lean_object* v___y_6801_, lean_object* v___y_6802_, lean_object* v___y_6803_){
_start:
{
lean_object* v_res_6804_; 
v_res_6804_ = l_Lean_Elab_WF_mkFix___lam__1(v_prefixArgs_6792_, v_declName_6793_, v_x_6794_, v_F_6795_, v_val_6796_, v___y_6797_, v___y_6798_, v___y_6799_, v___y_6800_, v___y_6801_, v___y_6802_);
lean_dec(v___y_6802_);
lean_dec_ref(v___y_6801_);
lean_dec(v___y_6800_);
lean_dec_ref(v___y_6799_);
lean_dec(v___y_6798_);
lean_dec_ref(v___y_6797_);
lean_dec_ref(v_prefixArgs_6792_);
return v_res_6804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2(lean_object* v___x_6805_, lean_object* v___x_6806_, lean_object* v___x_6807_, lean_object* v___f_6808_, lean_object* v_funNames_6809_, lean_object* v_argsPacker_6810_, lean_object* v_decrTactics_6811_, uint8_t v___x_6812_, lean_object* v_fst_6813_, lean_object* v_prefixArgs_6814_, lean_object* v___y_6815_, lean_object* v___y_6816_, lean_object* v___y_6817_, lean_object* v___y_6818_, lean_object* v___y_6819_, lean_object* v___y_6820_){
_start:
{
lean_object* v___x_6822_; 
lean_inc_ref(v___x_6806_);
lean_inc_ref(v___x_6805_);
v___x_6822_ = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_processSumCasesOn(v___x_6805_, v___x_6806_, v___x_6807_, v___f_6808_, v___y_6815_, v___y_6816_, v___y_6817_, v___y_6818_, v___y_6819_, v___y_6820_);
if (lean_obj_tag(v___x_6822_) == 0)
{
lean_object* v_a_6823_; lean_object* v___x_6824_; 
v_a_6823_ = lean_ctor_get(v___x_6822_, 0);
lean_inc(v_a_6823_);
lean_dec_ref(v___x_6822_);
v___x_6824_ = l_Lean_Elab_WF_solveDecreasingGoals(v_funNames_6809_, v_argsPacker_6810_, v_decrTactics_6811_, v_a_6823_, v___y_6817_, v___y_6818_, v___y_6819_, v___y_6820_);
if (lean_obj_tag(v___x_6824_) == 0)
{
lean_object* v_a_6825_; lean_object* v___x_6826_; lean_object* v___x_6827_; lean_object* v___x_6828_; lean_object* v___x_6829_; uint8_t v___x_6830_; uint8_t v___x_6831_; lean_object* v___x_6832_; 
v_a_6825_ = lean_ctor_get(v___x_6824_, 0);
lean_inc(v_a_6825_);
lean_dec_ref(v___x_6824_);
v___x_6826_ = lean_unsigned_to_nat(2u);
v___x_6827_ = lean_mk_empty_array_with_capacity(v___x_6826_);
v___x_6828_ = lean_array_push(v___x_6827_, v___x_6805_);
v___x_6829_ = lean_array_push(v___x_6828_, v___x_6806_);
v___x_6830_ = 1;
v___x_6831_ = 1;
v___x_6832_ = l_Lean_Meta_mkLambdaFVars(v___x_6829_, v_a_6825_, v___x_6812_, v___x_6830_, v___x_6812_, v___x_6830_, v___x_6831_, v___y_6817_, v___y_6818_, v___y_6819_, v___y_6820_);
lean_dec_ref(v___x_6829_);
if (lean_obj_tag(v___x_6832_) == 0)
{
lean_object* v_a_6833_; lean_object* v___x_6834_; lean_object* v___x_6835_; 
v_a_6833_ = lean_ctor_get(v___x_6832_, 0);
lean_inc(v_a_6833_);
lean_dec_ref(v___x_6832_);
v___x_6834_ = l_Lean_Expr_app___override(v_fst_6813_, v_a_6833_);
v___x_6835_ = l_Lean_Meta_mkLambdaFVars(v_prefixArgs_6814_, v___x_6834_, v___x_6812_, v___x_6830_, v___x_6812_, v___x_6830_, v___x_6831_, v___y_6817_, v___y_6818_, v___y_6819_, v___y_6820_);
return v___x_6835_;
}
else
{
lean_dec_ref(v_fst_6813_);
return v___x_6832_;
}
}
else
{
lean_dec_ref(v_fst_6813_);
lean_dec_ref(v___x_6806_);
lean_dec_ref(v___x_6805_);
return v___x_6824_;
}
}
else
{
lean_dec_ref(v_fst_6813_);
lean_dec_ref(v_decrTactics_6811_);
lean_dec_ref(v_argsPacker_6810_);
lean_dec_ref(v_funNames_6809_);
lean_dec_ref(v___x_6806_);
lean_dec_ref(v___x_6805_);
return v___x_6822_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__2___boxed(lean_object** _args){
lean_object* v___x_6836_ = _args[0];
lean_object* v___x_6837_ = _args[1];
lean_object* v___x_6838_ = _args[2];
lean_object* v___f_6839_ = _args[3];
lean_object* v_funNames_6840_ = _args[4];
lean_object* v_argsPacker_6841_ = _args[5];
lean_object* v_decrTactics_6842_ = _args[6];
lean_object* v___x_6843_ = _args[7];
lean_object* v_fst_6844_ = _args[8];
lean_object* v_prefixArgs_6845_ = _args[9];
lean_object* v___y_6846_ = _args[10];
lean_object* v___y_6847_ = _args[11];
lean_object* v___y_6848_ = _args[12];
lean_object* v___y_6849_ = _args[13];
lean_object* v___y_6850_ = _args[14];
lean_object* v___y_6851_ = _args[15];
lean_object* v___y_6852_ = _args[16];
_start:
{
uint8_t v___x_5940__boxed_6853_; lean_object* v_res_6854_; 
v___x_5940__boxed_6853_ = lean_unbox(v___x_6843_);
v_res_6854_ = l_Lean_Elab_WF_mkFix___lam__2(v___x_6836_, v___x_6837_, v___x_6838_, v___f_6839_, v_funNames_6840_, v_argsPacker_6841_, v_decrTactics_6842_, v___x_5940__boxed_6853_, v_fst_6844_, v_prefixArgs_6845_, v___y_6846_, v___y_6847_, v___y_6848_, v___y_6849_, v___y_6850_, v___y_6851_);
lean_dec(v___y_6851_);
lean_dec_ref(v___y_6850_);
lean_dec(v___y_6849_);
lean_dec_ref(v___y_6848_);
lean_dec(v___y_6847_);
lean_dec_ref(v___y_6846_);
lean_dec_ref(v_prefixArgs_6845_);
return v_res_6854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3(lean_object* v___x_6855_, lean_object* v_snd_6856_, lean_object* v___x_6857_, lean_object* v_prefixArgs_6858_, lean_object* v_value_6859_, lean_object* v___f_6860_, lean_object* v_funNames_6861_, lean_object* v_argsPacker_6862_, lean_object* v_decrTactics_6863_, uint8_t v___x_6864_, lean_object* v_fst_6865_, lean_object* v_xs_6866_, lean_object* v_x_6867_, lean_object* v___y_6868_, lean_object* v___y_6869_, lean_object* v___y_6870_, lean_object* v___y_6871_, lean_object* v___y_6872_, lean_object* v___y_6873_){
_start:
{
lean_object* v_lctx_6875_; lean_object* v___x_6876_; lean_object* v___x_6877_; lean_object* v___x_6878_; lean_object* v___x_6879_; lean_object* v___x_6880_; lean_object* v___x_6881_; lean_object* v___x_6882_; lean_object* v___x_6883_; lean_object* v___f_6884_; lean_object* v___x_6885_; 
v_lctx_6875_ = lean_ctor_get(v___y_6870_, 2);
v___x_6876_ = lean_unsigned_to_nat(0u);
v___x_6877_ = lean_array_get_borrowed(v___x_6855_, v_xs_6866_, v___x_6876_);
v___x_6878_ = l_Lean_Expr_fvarId_x21(v___x_6877_);
lean_inc_ref(v_lctx_6875_);
v___x_6879_ = l_Lean_LocalContext_setUserName(v_lctx_6875_, v___x_6878_, v_snd_6856_);
v___x_6880_ = lean_array_get_borrowed(v___x_6855_, v_xs_6866_, v___x_6857_);
lean_inc_n(v___x_6877_, 2);
lean_inc_ref(v_prefixArgs_6858_);
v___x_6881_ = lean_array_push(v_prefixArgs_6858_, v___x_6877_);
v___x_6882_ = l_Lean_Expr_beta(v_value_6859_, v___x_6881_);
v___x_6883_ = lean_box(v___x_6864_);
lean_inc(v___x_6880_);
v___f_6884_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__2___boxed), 17, 10);
lean_closure_set(v___f_6884_, 0, v___x_6877_);
lean_closure_set(v___f_6884_, 1, v___x_6880_);
lean_closure_set(v___f_6884_, 2, v___x_6882_);
lean_closure_set(v___f_6884_, 3, v___f_6860_);
lean_closure_set(v___f_6884_, 4, v_funNames_6861_);
lean_closure_set(v___f_6884_, 5, v_argsPacker_6862_);
lean_closure_set(v___f_6884_, 6, v_decrTactics_6863_);
lean_closure_set(v___f_6884_, 7, v___x_6883_);
lean_closure_set(v___f_6884_, 8, v_fst_6865_);
lean_closure_set(v___f_6884_, 9, v_prefixArgs_6858_);
v___x_6885_ = l_Lean_Meta_withLCtx_x27___at___00Lean_Elab_WF_mkFix_spec__1___redArg(v___x_6879_, v___f_6884_, v___y_6868_, v___y_6869_, v___y_6870_, v___y_6871_, v___y_6872_, v___y_6873_);
return v___x_6885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___lam__3___boxed(lean_object** _args){
lean_object* v___x_6886_ = _args[0];
lean_object* v_snd_6887_ = _args[1];
lean_object* v___x_6888_ = _args[2];
lean_object* v_prefixArgs_6889_ = _args[3];
lean_object* v_value_6890_ = _args[4];
lean_object* v___f_6891_ = _args[5];
lean_object* v_funNames_6892_ = _args[6];
lean_object* v_argsPacker_6893_ = _args[7];
lean_object* v_decrTactics_6894_ = _args[8];
lean_object* v___x_6895_ = _args[9];
lean_object* v_fst_6896_ = _args[10];
lean_object* v_xs_6897_ = _args[11];
lean_object* v_x_6898_ = _args[12];
lean_object* v___y_6899_ = _args[13];
lean_object* v___y_6900_ = _args[14];
lean_object* v___y_6901_ = _args[15];
lean_object* v___y_6902_ = _args[16];
lean_object* v___y_6903_ = _args[17];
lean_object* v___y_6904_ = _args[18];
lean_object* v___y_6905_ = _args[19];
_start:
{
uint8_t v___x_6010__boxed_6906_; lean_object* v_res_6907_; 
v___x_6010__boxed_6906_ = lean_unbox(v___x_6895_);
v_res_6907_ = l_Lean_Elab_WF_mkFix___lam__3(v___x_6886_, v_snd_6887_, v___x_6888_, v_prefixArgs_6889_, v_value_6890_, v___f_6891_, v_funNames_6892_, v_argsPacker_6893_, v_decrTactics_6894_, v___x_6010__boxed_6906_, v_fst_6896_, v_xs_6897_, v_x_6898_, v___y_6899_, v___y_6900_, v___y_6901_, v___y_6902_, v___y_6903_, v___y_6904_);
lean_dec(v___y_6904_);
lean_dec_ref(v___y_6903_);
lean_dec(v___y_6902_);
lean_dec_ref(v___y_6901_);
lean_dec(v___y_6900_);
lean_dec_ref(v___y_6899_);
lean_dec_ref(v_x_6898_);
lean_dec_ref(v_xs_6897_);
lean_dec(v___x_6888_);
lean_dec_ref(v___x_6886_);
return v_res_6907_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___closed__0(void){
_start:
{
lean_object* v___x_6908_; lean_object* v___x_6909_; 
v___x_6908_ = lean_unsigned_to_nat(1u);
v___x_6909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6909_, 0, v___x_6908_);
return v___x_6909_;
}
}
static lean_object* _init_l_Lean_Elab_WF_mkFix___closed__1(void){
_start:
{
lean_object* v___x_6910_; lean_object* v___x_6911_; 
v___x_6910_ = lean_unsigned_to_nat(2u);
v___x_6911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6911_, 0, v___x_6910_);
return v___x_6911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix(lean_object* v_preDef_6912_, lean_object* v_prefixArgs_6913_, lean_object* v_argsPacker_6914_, lean_object* v_wfRel_6915_, lean_object* v_funNames_6916_, lean_object* v_decrTactics_6917_, lean_object* v_a_6918_, lean_object* v_a_6919_, lean_object* v_a_6920_, lean_object* v_a_6921_, lean_object* v_a_6922_, lean_object* v_a_6923_){
_start:
{
lean_object* v_declName_6925_; lean_object* v_type_6926_; lean_object* v_value_6927_; lean_object* v___x_6928_; 
v_declName_6925_ = lean_ctor_get(v_preDef_6912_, 3);
lean_inc(v_declName_6925_);
v_type_6926_ = lean_ctor_get(v_preDef_6912_, 6);
lean_inc_ref(v_type_6926_);
v_value_6927_ = lean_ctor_get(v_preDef_6912_, 7);
lean_inc_ref(v_value_6927_);
lean_dec_ref(v_preDef_6912_);
v___x_6928_ = l_Lean_Meta_instantiateForall(v_type_6926_, v_prefixArgs_6913_, v_a_6920_, v_a_6921_, v_a_6922_, v_a_6923_);
if (lean_obj_tag(v___x_6928_) == 0)
{
lean_object* v_a_6929_; lean_object* v___x_6930_; lean_object* v___x_6931_; lean_object* v___f_6932_; lean_object* v___x_6933_; uint8_t v___x_6934_; lean_object* v___x_6935_; 
v_a_6929_ = lean_ctor_get(v___x_6928_, 0);
lean_inc(v_a_6929_);
lean_dec_ref(v___x_6928_);
v___x_6930_ = l_Lean_instInhabitedExpr;
v___x_6931_ = lean_unsigned_to_nat(1u);
v___f_6932_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__0___boxed), 12, 3);
lean_closure_set(v___f_6932_, 0, v___x_6930_);
lean_closure_set(v___f_6932_, 1, v___x_6931_);
lean_closure_set(v___f_6932_, 2, v_wfRel_6915_);
v___x_6933_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___closed__0, &l_Lean_Elab_WF_mkFix___closed__0_once, _init_l_Lean_Elab_WF_mkFix___closed__0);
v___x_6934_ = 0;
v___x_6935_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v_a_6929_, v___x_6933_, v___f_6932_, v___x_6934_, v___x_6934_, v_a_6918_, v_a_6919_, v_a_6920_, v_a_6921_, v_a_6922_, v_a_6923_);
if (lean_obj_tag(v___x_6935_) == 0)
{
lean_object* v_a_6936_; lean_object* v_fst_6937_; lean_object* v_snd_6938_; lean_object* v___x_6939_; 
v_a_6936_ = lean_ctor_get(v___x_6935_, 0);
lean_inc(v_a_6936_);
lean_dec_ref(v___x_6935_);
v_fst_6937_ = lean_ctor_get(v_a_6936_, 0);
lean_inc_n(v_fst_6937_, 2);
v_snd_6938_ = lean_ctor_get(v_a_6936_, 1);
lean_inc(v_snd_6938_);
lean_dec(v_a_6936_);
lean_inc(v_a_6923_);
lean_inc_ref(v_a_6922_);
lean_inc(v_a_6921_);
lean_inc_ref(v_a_6920_);
v___x_6939_ = lean_infer_type(v_fst_6937_, v_a_6920_, v_a_6921_, v_a_6922_, v_a_6923_);
if (lean_obj_tag(v___x_6939_) == 0)
{
lean_object* v_a_6940_; lean_object* v___x_6941_; 
v_a_6940_ = lean_ctor_get(v___x_6939_, 0);
lean_inc(v_a_6940_);
lean_dec_ref(v___x_6939_);
lean_inc(v_a_6923_);
lean_inc_ref(v_a_6922_);
lean_inc(v_a_6921_);
lean_inc_ref(v_a_6920_);
v___x_6941_ = lean_whnf(v_a_6940_, v_a_6920_, v_a_6921_, v_a_6922_, v_a_6923_);
if (lean_obj_tag(v___x_6941_) == 0)
{
lean_object* v_a_6942_; lean_object* v___f_6943_; lean_object* v___x_6944_; lean_object* v___f_6945_; lean_object* v___x_6946_; lean_object* v___x_6947_; lean_object* v___x_6948_; 
v_a_6942_ = lean_ctor_get(v___x_6941_, 0);
lean_inc(v_a_6942_);
lean_dec_ref(v___x_6941_);
lean_inc_ref(v_prefixArgs_6913_);
v___f_6943_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__1___boxed), 12, 2);
lean_closure_set(v___f_6943_, 0, v_prefixArgs_6913_);
lean_closure_set(v___f_6943_, 1, v_declName_6925_);
v___x_6944_ = lean_box(v___x_6934_);
v___f_6945_ = lean_alloc_closure((void*)(l_Lean_Elab_WF_mkFix___lam__3___boxed), 20, 11);
lean_closure_set(v___f_6945_, 0, v___x_6930_);
lean_closure_set(v___f_6945_, 1, v_snd_6938_);
lean_closure_set(v___f_6945_, 2, v___x_6931_);
lean_closure_set(v___f_6945_, 3, v_prefixArgs_6913_);
lean_closure_set(v___f_6945_, 4, v_value_6927_);
lean_closure_set(v___f_6945_, 5, v___f_6943_);
lean_closure_set(v___f_6945_, 6, v_funNames_6916_);
lean_closure_set(v___f_6945_, 7, v_argsPacker_6914_);
lean_closure_set(v___f_6945_, 8, v_decrTactics_6917_);
lean_closure_set(v___f_6945_, 9, v___x_6944_);
lean_closure_set(v___f_6945_, 10, v_fst_6937_);
v___x_6946_ = l_Lean_Expr_bindingDomain_x21(v_a_6942_);
lean_dec(v_a_6942_);
v___x_6947_ = lean_obj_once(&l_Lean_Elab_WF_mkFix___closed__1, &l_Lean_Elab_WF_mkFix___closed__1_once, _init_l_Lean_Elab_WF_mkFix___closed__1);
v___x_6948_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_WF_mkFix_spec__0___redArg(v___x_6946_, v___x_6947_, v___f_6945_, v___x_6934_, v___x_6934_, v_a_6918_, v_a_6919_, v_a_6920_, v_a_6921_, v_a_6922_, v_a_6923_);
return v___x_6948_;
}
else
{
lean_dec(v_snd_6938_);
lean_dec(v_fst_6937_);
lean_dec_ref(v_value_6927_);
lean_dec(v_declName_6925_);
lean_dec_ref(v_decrTactics_6917_);
lean_dec_ref(v_funNames_6916_);
lean_dec_ref(v_argsPacker_6914_);
lean_dec_ref(v_prefixArgs_6913_);
return v___x_6941_;
}
}
else
{
lean_dec(v_snd_6938_);
lean_dec(v_fst_6937_);
lean_dec_ref(v_value_6927_);
lean_dec(v_declName_6925_);
lean_dec_ref(v_decrTactics_6917_);
lean_dec_ref(v_funNames_6916_);
lean_dec_ref(v_argsPacker_6914_);
lean_dec_ref(v_prefixArgs_6913_);
return v___x_6939_;
}
}
else
{
lean_object* v_a_6949_; lean_object* v___x_6951_; uint8_t v_isShared_6952_; uint8_t v_isSharedCheck_6956_; 
lean_dec_ref(v_value_6927_);
lean_dec(v_declName_6925_);
lean_dec_ref(v_decrTactics_6917_);
lean_dec_ref(v_funNames_6916_);
lean_dec_ref(v_argsPacker_6914_);
lean_dec_ref(v_prefixArgs_6913_);
v_a_6949_ = lean_ctor_get(v___x_6935_, 0);
v_isSharedCheck_6956_ = !lean_is_exclusive(v___x_6935_);
if (v_isSharedCheck_6956_ == 0)
{
v___x_6951_ = v___x_6935_;
v_isShared_6952_ = v_isSharedCheck_6956_;
goto v_resetjp_6950_;
}
else
{
lean_inc(v_a_6949_);
lean_dec(v___x_6935_);
v___x_6951_ = lean_box(0);
v_isShared_6952_ = v_isSharedCheck_6956_;
goto v_resetjp_6950_;
}
v_resetjp_6950_:
{
lean_object* v___x_6954_; 
if (v_isShared_6952_ == 0)
{
v___x_6954_ = v___x_6951_;
goto v_reusejp_6953_;
}
else
{
lean_object* v_reuseFailAlloc_6955_; 
v_reuseFailAlloc_6955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6955_, 0, v_a_6949_);
v___x_6954_ = v_reuseFailAlloc_6955_;
goto v_reusejp_6953_;
}
v_reusejp_6953_:
{
return v___x_6954_;
}
}
}
}
else
{
lean_dec_ref(v_value_6927_);
lean_dec(v_declName_6925_);
lean_dec_ref(v_decrTactics_6917_);
lean_dec_ref(v_funNames_6916_);
lean_dec_ref(v_wfRel_6915_);
lean_dec_ref(v_argsPacker_6914_);
lean_dec_ref(v_prefixArgs_6913_);
return v___x_6928_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_WF_mkFix___boxed(lean_object* v_preDef_6957_, lean_object* v_prefixArgs_6958_, lean_object* v_argsPacker_6959_, lean_object* v_wfRel_6960_, lean_object* v_funNames_6961_, lean_object* v_decrTactics_6962_, lean_object* v_a_6963_, lean_object* v_a_6964_, lean_object* v_a_6965_, lean_object* v_a_6966_, lean_object* v_a_6967_, lean_object* v_a_6968_, lean_object* v_a_6969_){
_start:
{
lean_object* v_res_6970_; 
v_res_6970_ = l_Lean_Elab_WF_mkFix(v_preDef_6957_, v_prefixArgs_6958_, v_argsPacker_6959_, v_wfRel_6960_, v_funNames_6961_, v_decrTactics_6962_, v_a_6963_, v_a_6964_, v_a_6965_, v_a_6966_, v_a_6967_, v_a_6968_);
lean_dec(v_a_6968_);
lean_dec_ref(v_a_6967_);
lean_dec(v_a_6966_);
lean_dec_ref(v_a_6965_);
lean_dec(v_a_6964_);
lean_dec_ref(v_a_6963_);
return v_res_6970_;
}
}
lean_object* runtime_initialize_Lean_Data_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_HasConstCache(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_PreDefinition_WF_Fix_0__Lean_Elab_WF_initFn_00___x40_Lean_Elab_PreDefinition_WF_Fix_3889896488____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Elab_WF_debug_definition_wf_replaceRecApps = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Elab_WF_debug_definition_wf_replaceRecApps);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Array(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_WF_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_ArgsPacker(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Cleanup(uint8_t builtin);
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_WF_Fix(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_WF_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ArgsPacker(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Cleanup(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_WF_Fix(builtin);
}
#ifdef __cplusplus
}
#endif
