// Lean compiler output
// Module: Lean.Elab.PreDefinition.Structural.BRecOn
// Imports: public import Lean.Util.HasConstCache public import Lean.Meta.PProdN public import Lean.Meta.Match.MatcherApp.Transform public import Lean.Elab.PreDefinition.Structural.Basic public import Lean.Elab.PreDefinition.Structural.RecArgInfo import Init.Data.Nat.Order import Init.Data.Order.Lemmas
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_HasConstCache_containsUnsafe(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_pure___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfPure___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_packLambdas___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_mapMwith___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Elab_Structural_Positions_numIndices(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getRecAppSyntax_x3f(lean_object*);
lean_object* l_Lean_mkMData(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_arity(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Name_getPrefix(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_Elab_Structural_recArgHasLooseBVarsAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_Elab_ensureNoRecFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
lean_object* l_Lean_Elab_Structural_IndGroupInfo_brecOnName(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Structural_IndGroupInfo_numMotives(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_PProdN_projM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_searchPProd___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_searchPProd___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_searchPProd___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_searchPProd___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Structural_searchPProd___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_Structural_searchPProd___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_searchPProd___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_toBelow___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_toBelow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_Elab_Structural_toBelow___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1;
static lean_once_cell_t l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6;
static lean_once_cell_t l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnConst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnConst___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnConst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2;
static lean_once_cell_t l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v_mctx_11_; lean_object* v_lctx_12_; lean_object* v_options_13_; lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = lean_st_ref_get(v___y_5_);
lean_dec(v___x_9_);
v___x_10_ = lean_st_ref_get(v___y_3_);
v_mctx_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc_ref(v_mctx_11_);
lean_dec(v___x_10_);
v_lctx_12_ = lean_ctor_get(v___y_2_, 2);
v_options_13_ = lean_ctor_get(v___y_4_, 2);
lean_inc_ref(v_options_13_);
lean_inc_ref(v_lctx_12_);
v___x_14_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_14_, 0, v_env_8_);
lean_ctor_set(v___x_14_, 1, v_mctx_11_);
lean_ctor_set(v___x_14_, 2, v_lctx_12_);
lean_ctor_set(v___x_14_, 3, v_options_13_);
v___x_15_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v_msgData_1_);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 5);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
v_a_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_40_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_40_ == 0)
{
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_a_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_40_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v___x_36_; lean_object* v___x_38_; 
lean_inc(v_ref_30_);
v___x_36_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_36_, 0, v_ref_30_);
lean_ctor_set(v___x_36_, 1, v_a_32_);
if (v_isShared_35_ == 0)
{
lean_ctor_set_tag(v___x_34_, 1);
lean_ctor_set(v___x_34_, 0, v___x_36_);
v___x_38_ = v___x_34_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_39_; 
v_reuseFailAlloc_39_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_39_, 0, v___x_36_);
v___x_38_ = v_reuseFailAlloc_39_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("toBelow failed", 14, 14);
return v___x_48_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__0);
v___x_50_ = l_Lean_stringToMessageData(v___x_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___closed__1);
v___x_57_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v___x_56_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg___boxed(lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v_res_63_; 
v_res_63_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_58_, v_a_59_, v_a_60_, v_a_61_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
lean_dec(v_a_59_);
lean_dec_ref(v_a_58_);
return v_res_63_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(lean_object* v_00_u03b1_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_65_, v_a_66_, v_a_67_, v_a_68_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___boxed(lean_object* v_00_u03b1_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_, lean_object* v_a_76_){
_start:
{
lean_object* v_res_77_; 
v_res_77_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed(v_00_u03b1_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
lean_dec(v_a_75_);
lean_dec_ref(v_a_74_);
lean_dec(v_a_73_);
lean_dec_ref(v_a_72_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(lean_object* v_00_u03b1_78_, lean_object* v_msg_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v_msg_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___boxed(lean_object* v_00_u03b1_86_, lean_object* v_msg_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0(v_00_u03b1_86_, v_msg_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__0(void){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_mk_string_unchecked("PProd", 5, 5);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__1(void){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_mk_string_unchecked("And", 3, 3);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__2(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__1, &l_Lean_Elab_Structural_searchPProd___redArg___closed__1_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__1);
v___x_97_ = l_Lean_Name_mkStr1(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__3(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__0, &l_Lean_Elab_Structural_searchPProd___redArg___closed__0_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__0);
v___x_99_ = l_Lean_Name_mkStr1(v___x_98_);
return v___x_99_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__4(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_mk_string_unchecked("PUnit", 5, 5);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__5(void){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lean_mk_string_unchecked("True", 4, 4);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg(lean_object* v_e_102_, lean_object* v_F_103_, lean_object* v_k_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_110_; 
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
lean_inc_ref(v_e_102_);
v___x_110_ = lean_whnf(v_e_102_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref(v___x_110_);
switch(lean_obj_tag(v_a_111_))
{
case 5:
{
lean_object* v_fn_112_; 
v_fn_112_ = lean_ctor_get(v_a_111_, 0);
lean_inc_ref(v_fn_112_);
if (lean_obj_tag(v_fn_112_) == 5)
{
lean_object* v_fn_113_; 
v_fn_113_ = lean_ctor_get(v_fn_112_, 0);
if (lean_obj_tag(v_fn_113_) == 4)
{
lean_object* v_declName_114_; 
v_declName_114_ = lean_ctor_get(v_fn_113_, 0);
lean_inc(v_declName_114_);
if (lean_obj_tag(v_declName_114_) == 1)
{
lean_object* v_pre_115_; 
v_pre_115_ = lean_ctor_get(v_declName_114_, 0);
if (lean_obj_tag(v_pre_115_) == 0)
{
lean_object* v_arg_116_; lean_object* v_arg_117_; lean_object* v_str_118_; lean_object* v___x_119_; uint8_t v___x_120_; 
v_arg_116_ = lean_ctor_get(v_a_111_, 1);
lean_inc_ref(v_arg_116_);
lean_dec_ref(v_a_111_);
v_arg_117_ = lean_ctor_get(v_fn_112_, 1);
lean_inc_ref(v_arg_117_);
lean_dec_ref(v_fn_112_);
v_str_118_ = lean_ctor_get(v_declName_114_, 1);
lean_inc_ref(v_str_118_);
lean_dec_ref(v_declName_114_);
v___x_119_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__0, &l_Lean_Elab_Structural_searchPProd___redArg___closed__0_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__0);
v___x_120_ = lean_string_dec_eq(v_str_118_, v___x_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_121_; uint8_t v___x_122_; 
v___x_121_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__1, &l_Lean_Elab_Structural_searchPProd___redArg___closed__1_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__1);
v___x_122_ = lean_string_dec_eq(v_str_118_, v___x_121_);
lean_dec_ref(v_str_118_);
if (v___x_122_ == 0)
{
lean_object* v___x_123_; 
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_123_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_123_;
}
else
{
lean_object* v___x_124_; 
lean_dec_ref(v_e_102_);
v___x_124_ = l_Lean_Meta_saveState___redArg(v_a_106_, v_a_108_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
lean_inc(v_a_125_);
lean_dec_ref(v___x_124_);
v___x_126_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__2, &l_Lean_Elab_Structural_searchPProd___redArg___closed__2_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__2);
v___x_127_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_F_103_);
v___x_128_ = l_Lean_Expr_proj___override(v___x_126_, v___x_127_, v_F_103_);
lean_inc_ref(v_k_104_);
v___x_129_ = l_Lean_Elab_Structural_searchPProd___redArg(v_arg_117_, v___x_128_, v_k_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_129_) == 0)
{
lean_dec(v_a_125_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_129_;
}
else
{
lean_object* v_a_130_; uint8_t v___y_132_; uint8_t v___x_145_; 
v_a_130_ = lean_ctor_get(v___x_129_, 0);
lean_inc(v_a_130_);
v___x_145_ = l_Lean_Exception_isInterrupt(v_a_130_);
if (v___x_145_ == 0)
{
uint8_t v___x_146_; 
v___x_146_ = l_Lean_Exception_isRuntime(v_a_130_);
v___y_132_ = v___x_146_;
goto v___jp_131_;
}
else
{
lean_dec(v_a_130_);
v___y_132_ = v___x_145_;
goto v___jp_131_;
}
v___jp_131_:
{
if (v___y_132_ == 0)
{
lean_object* v___x_133_; 
lean_dec_ref(v___x_129_);
v___x_133_ = l_Lean_Meta_SavedState_restore___redArg(v_a_125_, v_a_106_, v_a_108_);
lean_dec(v_a_125_);
if (lean_obj_tag(v___x_133_) == 0)
{
lean_object* v___x_134_; lean_object* v___x_135_; 
lean_dec_ref(v___x_133_);
v___x_134_ = lean_unsigned_to_nat(1u);
v___x_135_ = l_Lean_Expr_proj___override(v___x_126_, v___x_134_, v_F_103_);
v_e_102_ = v_arg_116_;
v_F_103_ = v___x_135_;
goto _start;
}
else
{
lean_object* v_a_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_144_; 
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_137_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_144_ == 0)
{
v___x_139_ = v___x_133_;
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_a_137_);
lean_dec(v___x_133_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_144_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_142_; 
if (v_isShared_140_ == 0)
{
v___x_142_ = v___x_139_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_137_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
else
{
lean_dec(v_a_125_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_129_;
}
}
}
}
else
{
lean_object* v_a_147_; lean_object* v___x_149_; uint8_t v_isShared_150_; uint8_t v_isSharedCheck_154_; 
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_147_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_154_ == 0)
{
v___x_149_ = v___x_124_;
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
else
{
lean_inc(v_a_147_);
lean_dec(v___x_124_);
v___x_149_ = lean_box(0);
v_isShared_150_ = v_isSharedCheck_154_;
goto v_resetjp_148_;
}
v_resetjp_148_:
{
lean_object* v___x_152_; 
if (v_isShared_150_ == 0)
{
v___x_152_ = v___x_149_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_153_; 
v_reuseFailAlloc_153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_153_, 0, v_a_147_);
v___x_152_ = v_reuseFailAlloc_153_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
return v___x_152_;
}
}
}
}
}
else
{
lean_object* v___x_155_; 
lean_dec_ref(v_str_118_);
lean_dec_ref(v_e_102_);
v___x_155_ = l_Lean_Meta_saveState___redArg(v_a_106_, v_a_108_);
if (lean_obj_tag(v___x_155_) == 0)
{
lean_object* v_a_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; 
v_a_156_ = lean_ctor_get(v___x_155_, 0);
lean_inc(v_a_156_);
lean_dec_ref(v___x_155_);
v___x_157_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__3, &l_Lean_Elab_Structural_searchPProd___redArg___closed__3_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__3);
v___x_158_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_F_103_);
v___x_159_ = l_Lean_Expr_proj___override(v___x_157_, v___x_158_, v_F_103_);
lean_inc_ref(v_k_104_);
v___x_160_ = l_Lean_Elab_Structural_searchPProd___redArg(v_arg_117_, v___x_159_, v_k_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_160_) == 0)
{
lean_dec(v_a_156_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_160_;
}
else
{
lean_object* v_a_161_; uint8_t v___y_163_; uint8_t v___x_176_; 
v_a_161_ = lean_ctor_get(v___x_160_, 0);
lean_inc(v_a_161_);
v___x_176_ = l_Lean_Exception_isInterrupt(v_a_161_);
if (v___x_176_ == 0)
{
uint8_t v___x_177_; 
v___x_177_ = l_Lean_Exception_isRuntime(v_a_161_);
v___y_163_ = v___x_177_;
goto v___jp_162_;
}
else
{
lean_dec(v_a_161_);
v___y_163_ = v___x_176_;
goto v___jp_162_;
}
v___jp_162_:
{
if (v___y_163_ == 0)
{
lean_object* v___x_164_; 
lean_dec_ref(v___x_160_);
v___x_164_ = l_Lean_Meta_SavedState_restore___redArg(v_a_156_, v_a_106_, v_a_108_);
lean_dec(v_a_156_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
lean_dec_ref(v___x_164_);
v___x_165_ = lean_unsigned_to_nat(1u);
v___x_166_ = l_Lean_Expr_proj___override(v___x_157_, v___x_165_, v_F_103_);
v_e_102_ = v_arg_116_;
v_F_103_ = v___x_166_;
goto _start;
}
else
{
lean_object* v_a_168_; lean_object* v___x_170_; uint8_t v_isShared_171_; uint8_t v_isSharedCheck_175_; 
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_168_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_175_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_175_ == 0)
{
v___x_170_ = v___x_164_;
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
else
{
lean_inc(v_a_168_);
lean_dec(v___x_164_);
v___x_170_ = lean_box(0);
v_isShared_171_ = v_isSharedCheck_175_;
goto v_resetjp_169_;
}
v_resetjp_169_:
{
lean_object* v___x_173_; 
if (v_isShared_171_ == 0)
{
v___x_173_ = v___x_170_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_a_168_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
return v___x_173_;
}
}
}
}
else
{
lean_dec(v_a_156_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
return v___x_160_;
}
}
}
}
else
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_185_; 
lean_dec_ref(v_arg_117_);
lean_dec_ref(v_arg_116_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
v_a_178_ = lean_ctor_get(v___x_155_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_155_);
if (v_isSharedCheck_185_ == 0)
{
v___x_180_ = v___x_155_;
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_155_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_185_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v___x_183_; 
if (v_isShared_181_ == 0)
{
v___x_183_ = v___x_180_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v_a_178_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
}
else
{
lean_object* v___x_186_; 
lean_dec_ref(v_declName_114_);
lean_dec_ref(v_fn_112_);
lean_dec_ref(v_a_111_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_186_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_186_;
}
}
else
{
lean_object* v___x_187_; 
lean_dec(v_declName_114_);
lean_dec_ref(v_fn_112_);
lean_dec_ref(v_a_111_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_187_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_187_;
}
}
else
{
lean_object* v___x_188_; 
lean_dec_ref(v_fn_112_);
lean_dec_ref(v_a_111_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_188_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_188_;
}
}
else
{
lean_object* v___x_189_; 
lean_dec_ref(v_a_111_);
lean_dec_ref(v_fn_112_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_189_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_189_;
}
}
case 4:
{
lean_object* v_declName_190_; 
v_declName_190_ = lean_ctor_get(v_a_111_, 0);
lean_inc(v_declName_190_);
lean_dec_ref(v_a_111_);
if (lean_obj_tag(v_declName_190_) == 1)
{
lean_object* v_pre_191_; 
v_pre_191_ = lean_ctor_get(v_declName_190_, 0);
if (lean_obj_tag(v_pre_191_) == 0)
{
lean_object* v_str_192_; lean_object* v___x_193_; uint8_t v___x_194_; 
v_str_192_ = lean_ctor_get(v_declName_190_, 1);
lean_inc_ref(v_str_192_);
lean_dec_ref(v_declName_190_);
v___x_193_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__4, &l_Lean_Elab_Structural_searchPProd___redArg___closed__4_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__4);
v___x_194_ = lean_string_dec_eq(v_str_192_, v___x_193_);
if (v___x_194_ == 0)
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = lean_obj_once(&l_Lean_Elab_Structural_searchPProd___redArg___closed__5, &l_Lean_Elab_Structural_searchPProd___redArg___closed__5_once, _init_l_Lean_Elab_Structural_searchPProd___redArg___closed__5);
v___x_196_ = lean_string_dec_eq(v_str_192_, v___x_195_);
lean_dec_ref(v_str_192_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; 
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_197_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_197_;
}
else
{
lean_object* v___x_198_; 
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
lean_dec_ref(v_e_102_);
v___x_198_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_198_;
}
}
else
{
lean_object* v___x_199_; 
lean_dec_ref(v_str_192_);
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
lean_dec_ref(v_e_102_);
v___x_199_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_199_;
}
}
else
{
lean_object* v___x_200_; 
lean_dec_ref(v_declName_190_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_200_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_200_;
}
}
else
{
lean_object* v___x_201_; 
lean_dec(v_declName_190_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_201_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_201_;
}
}
default: 
{
lean_object* v___x_202_; 
lean_dec(v_a_111_);
lean_inc(v_a_108_);
lean_inc_ref(v_a_107_);
lean_inc(v_a_106_);
lean_inc_ref(v_a_105_);
v___x_202_ = lean_apply_7(v_k_104_, v_e_102_, v_F_103_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, lean_box(0));
return v___x_202_;
}
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec_ref(v_k_104_);
lean_dec_ref(v_F_103_);
lean_dec_ref(v_e_102_);
v_a_203_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_110_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_110_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___redArg___boxed(lean_object* v_e_211_, lean_object* v_F_212_, lean_object* v_k_213_, lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_Elab_Structural_searchPProd___redArg(v_e_211_, v_F_212_, v_k_213_, v_a_214_, v_a_215_, v_a_216_, v_a_217_);
lean_dec(v_a_217_);
lean_dec_ref(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd(lean_object* v_00_u03b1_220_, lean_object* v_e_221_, lean_object* v_F_222_, lean_object* v_k_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v_a_227_){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = l_Lean_Elab_Structural_searchPProd___redArg(v_e_221_, v_F_222_, v_k_223_, v_a_224_, v_a_225_, v_a_226_, v_a_227_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_searchPProd___boxed(lean_object* v_00_u03b1_230_, lean_object* v_e_231_, lean_object* v_F_232_, lean_object* v_k_233_, lean_object* v_a_234_, lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l_Lean_Elab_Structural_searchPProd(v_00_u03b1_230_, v_e_231_, v_F_232_, v_k_233_, v_a_234_, v_a_235_, v_a_236_, v_a_237_);
lean_dec(v_a_237_);
lean_dec_ref(v_a_236_);
lean_dec(v_a_235_);
lean_dec_ref(v_a_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0(lean_object* v_k_240_, lean_object* v_b_241_, lean_object* v_c_242_, lean_object* v___y_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v___x_248_; 
lean_inc(v___y_246_);
lean_inc_ref(v___y_245_);
lean_inc(v___y_244_);
lean_inc_ref(v___y_243_);
v___x_248_ = lean_apply_7(v_k_240_, v_b_241_, v_c_242_, v___y_243_, v___y_244_, v___y_245_, v___y_246_, lean_box(0));
return v___x_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed(lean_object* v_k_249_, lean_object* v_b_250_, lean_object* v_c_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0(v_k_249_, v_b_250_, v_c_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(lean_object* v_type_258_, lean_object* v_k_259_, uint8_t v_cleanupAnnotations_260_, uint8_t v_whnfType_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___f_267_; lean_object* v___x_268_; 
v___f_267_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_267_, 0, v_k_259_);
v___x_268_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_258_, v___f_267_, v_cleanupAnnotations_260_, v_whnfType_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
if (lean_obj_tag(v___x_268_) == 0)
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
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
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_268_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_268_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___boxed(lean_object* v_type_285_, lean_object* v_k_286_, lean_object* v_cleanupAnnotations_287_, lean_object* v_whnfType_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_294_; uint8_t v_whnfType_boxed_295_; lean_object* v_res_296_; 
v_cleanupAnnotations_boxed_294_ = lean_unbox(v_cleanupAnnotations_287_);
v_whnfType_boxed_295_ = lean_unbox(v_whnfType_288_);
v_res_296_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(v_type_285_, v_k_286_, v_cleanupAnnotations_boxed_294_, v_whnfType_boxed_295_, v___y_289_, v___y_290_, v___y_291_, v___y_292_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_291_);
lean_dec(v___y_290_);
lean_dec_ref(v___y_289_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(lean_object* v_00_u03b1_297_, lean_object* v_type_298_, lean_object* v_k_299_, uint8_t v_cleanupAnnotations_300_, uint8_t v_whnfType_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_){
_start:
{
lean_object* v___x_307_; 
v___x_307_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(v_type_298_, v_k_299_, v_cleanupAnnotations_300_, v_whnfType_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___boxed(lean_object* v_00_u03b1_308_, lean_object* v_type_309_, lean_object* v_k_310_, lean_object* v_cleanupAnnotations_311_, lean_object* v_whnfType_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_318_; uint8_t v_whnfType_boxed_319_; lean_object* v_res_320_; 
v_cleanupAnnotations_boxed_318_ = lean_unbox(v_cleanupAnnotations_311_);
v_whnfType_boxed_319_ = lean_unbox(v_whnfType_312_);
v_res_320_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1(v_00_u03b1_308_, v_type_309_, v_k_310_, v_cleanupAnnotations_boxed_318_, v_whnfType_boxed_319_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
lean_dec(v___y_314_);
lean_dec_ref(v___y_313_);
return v_res_320_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0(void){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_321_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_322_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__0);
v___x_323_ = l_Lean_Name_mkStr1(v___x_322_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(lean_object* v_cls_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_options_330_; uint8_t v_hasTrace_331_; 
v_options_330_ = lean_ctor_get(v___y_327_, 2);
v_hasTrace_331_ = lean_ctor_get_uint8(v_options_330_, sizeof(void*)*1);
if (v_hasTrace_331_ == 0)
{
lean_object* v___x_332_; lean_object* v___x_333_; 
lean_dec(v_cls_324_);
v___x_332_ = lean_box(v_hasTrace_331_);
v___x_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_333_, 0, v___x_332_);
return v___x_333_;
}
else
{
lean_object* v_inheritedTraceOptions_334_; lean_object* v___x_335_; lean_object* v___x_336_; uint8_t v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v_inheritedTraceOptions_334_ = lean_ctor_get(v___y_327_, 13);
v___x_335_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
v___x_336_ = l_Lean_Name_append(v___x_335_, v_cls_324_);
v___x_337_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_334_, v_options_330_, v___x_336_);
lean_dec(v___x_336_);
v___x_338_ = lean_box(v___x_337_);
v___x_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
return v___x_339_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed(lean_object* v_cls_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_){
_start:
{
lean_object* v_res_346_; 
v_res_346_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(v_cls_340_, v___y_341_, v___y_342_, v___y_343_, v___y_344_);
lean_dec(v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
return v_res_346_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0(void){
_start:
{
lean_object* v___x_347_; double v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(0u);
v___x_348_ = lean_float_of_nat(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1(void){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = lean_mk_string_unchecked("", 0, 0);
return v___x_349_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2(void){
_start:
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(0u);
v___x_351_ = lean_mk_empty_array_with_capacity(v___x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(lean_object* v_cls_352_, lean_object* v_msg_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_ref_359_; lean_object* v___x_360_; lean_object* v_a_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_405_; 
v_ref_359_ = lean_ctor_get(v___y_356_, 5);
v___x_360_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_353_, v___y_354_, v___y_355_, v___y_356_, v___y_357_);
v_a_361_ = lean_ctor_get(v___x_360_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_405_ == 0)
{
v___x_363_ = v___x_360_;
v_isShared_364_ = v_isSharedCheck_405_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_a_361_);
lean_dec(v___x_360_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_405_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; lean_object* v_traceState_366_; lean_object* v_env_367_; lean_object* v_nextMacroScope_368_; lean_object* v_ngen_369_; lean_object* v_auxDeclNGen_370_; lean_object* v_cache_371_; lean_object* v_messages_372_; lean_object* v_infoState_373_; lean_object* v_snapshotTasks_374_; lean_object* v___x_376_; uint8_t v_isShared_377_; uint8_t v_isSharedCheck_404_; 
v___x_365_ = lean_st_ref_take(v___y_357_);
v_traceState_366_ = lean_ctor_get(v___x_365_, 4);
v_env_367_ = lean_ctor_get(v___x_365_, 0);
v_nextMacroScope_368_ = lean_ctor_get(v___x_365_, 1);
v_ngen_369_ = lean_ctor_get(v___x_365_, 2);
v_auxDeclNGen_370_ = lean_ctor_get(v___x_365_, 3);
v_cache_371_ = lean_ctor_get(v___x_365_, 5);
v_messages_372_ = lean_ctor_get(v___x_365_, 6);
v_infoState_373_ = lean_ctor_get(v___x_365_, 7);
v_snapshotTasks_374_ = lean_ctor_get(v___x_365_, 8);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_365_);
if (v_isSharedCheck_404_ == 0)
{
v___x_376_ = v___x_365_;
v_isShared_377_ = v_isSharedCheck_404_;
goto v_resetjp_375_;
}
else
{
lean_inc(v_snapshotTasks_374_);
lean_inc(v_infoState_373_);
lean_inc(v_messages_372_);
lean_inc(v_cache_371_);
lean_inc(v_traceState_366_);
lean_inc(v_auxDeclNGen_370_);
lean_inc(v_ngen_369_);
lean_inc(v_nextMacroScope_368_);
lean_inc(v_env_367_);
lean_dec(v___x_365_);
v___x_376_ = lean_box(0);
v_isShared_377_ = v_isSharedCheck_404_;
goto v_resetjp_375_;
}
v_resetjp_375_:
{
uint64_t v_tid_378_; lean_object* v_traces_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_403_; 
v_tid_378_ = lean_ctor_get_uint64(v_traceState_366_, sizeof(void*)*1);
v_traces_379_ = lean_ctor_get(v_traceState_366_, 0);
v_isSharedCheck_403_ = !lean_is_exclusive(v_traceState_366_);
if (v_isSharedCheck_403_ == 0)
{
v___x_381_ = v_traceState_366_;
v_isShared_382_ = v_isSharedCheck_403_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_traces_379_);
lean_dec(v_traceState_366_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_403_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v___x_383_; double v___x_384_; uint8_t v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0);
v___x_385_ = 0;
v___x_386_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1);
v___x_387_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_387_, 0, v_cls_352_);
lean_ctor_set(v___x_387_, 1, v___x_383_);
lean_ctor_set(v___x_387_, 2, v___x_386_);
lean_ctor_set_float(v___x_387_, sizeof(void*)*3, v___x_384_);
lean_ctor_set_float(v___x_387_, sizeof(void*)*3 + 8, v___x_384_);
lean_ctor_set_uint8(v___x_387_, sizeof(void*)*3 + 16, v___x_385_);
v___x_388_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2);
v___x_389_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_389_, 0, v___x_387_);
lean_ctor_set(v___x_389_, 1, v_a_361_);
lean_ctor_set(v___x_389_, 2, v___x_388_);
lean_inc(v_ref_359_);
v___x_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_390_, 0, v_ref_359_);
lean_ctor_set(v___x_390_, 1, v___x_389_);
v___x_391_ = l_Lean_PersistentArray_push___redArg(v_traces_379_, v___x_390_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 0, v___x_391_);
v___x_393_ = v___x_381_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_402_; 
v_reuseFailAlloc_402_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_402_, 0, v___x_391_);
lean_ctor_set_uint64(v_reuseFailAlloc_402_, sizeof(void*)*1, v_tid_378_);
v___x_393_ = v_reuseFailAlloc_402_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
lean_object* v___x_395_; 
if (v_isShared_377_ == 0)
{
lean_ctor_set(v___x_376_, 4, v___x_393_);
v___x_395_ = v___x_376_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_env_367_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v_nextMacroScope_368_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v_ngen_369_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v_auxDeclNGen_370_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v___x_393_);
lean_ctor_set(v_reuseFailAlloc_401_, 5, v_cache_371_);
lean_ctor_set(v_reuseFailAlloc_401_, 6, v_messages_372_);
lean_ctor_set(v_reuseFailAlloc_401_, 7, v_infoState_373_);
lean_ctor_set(v_reuseFailAlloc_401_, 8, v_snapshotTasks_374_);
v___x_395_ = v_reuseFailAlloc_401_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_396_ = lean_st_ref_set(v___y_357_, v___x_395_);
v___x_397_ = lean_box(0);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 0, v___x_397_);
v___x_399_ = v___x_363_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___boxed(lean_object* v_cls_406_, lean_object* v_msg_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_406_, v_msg_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
return v_res_413_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0(void){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lean_mk_string_unchecked("belowDict not an app:", 21, 21);
return v___x_414_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_415_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__0);
v___x_416_ = l_Lean_stringToMessageData(v___x_415_);
return v___x_416_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = lean_mk_string_unchecked("belowDict step 2:", 17, 17);
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__2);
v___x_419_ = l_Lean_stringToMessageData(v___x_418_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(lean_object* v___f_420_, lean_object* v_a_421_, lean_object* v_C_422_, lean_object* v_cls_423_, lean_object* v_belowDict_424_, lean_object* v_F_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v___y_432_; lean_object* v___y_433_; lean_object* v___y_434_; lean_object* v___y_435_; lean_object* v___y_436_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___x_503_; 
lean_inc(v___y_429_);
lean_inc_ref(v___y_428_);
lean_inc(v___y_427_);
lean_inc_ref(v___y_426_);
v___x_503_ = lean_apply_5(v___f_420_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, lean_box(0));
if (lean_obj_tag(v___x_503_) == 0)
{
lean_object* v_a_504_; uint8_t v___x_505_; 
v_a_504_ = lean_ctor_get(v___x_503_, 0);
lean_inc(v_a_504_);
lean_dec_ref(v___x_503_);
v___x_505_ = lean_unbox(v_a_504_);
lean_dec(v_a_504_);
if (v___x_505_ == 0)
{
v___y_465_ = v___y_426_;
v___y_466_ = v___y_427_;
v___y_467_ = v___y_428_;
v___y_468_ = v___y_429_;
goto v___jp_464_;
}
else
{
lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_506_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__3);
lean_inc_ref(v_belowDict_424_);
v___x_507_ = l_Lean_indentExpr(v_belowDict_424_);
v___x_508_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_508_, 0, v___x_506_);
lean_ctor_set(v___x_508_, 1, v___x_507_);
lean_inc(v_cls_423_);
v___x_509_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_423_, v___x_508_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
if (lean_obj_tag(v___x_509_) == 0)
{
lean_dec_ref(v___x_509_);
v___y_465_ = v___y_426_;
v___y_466_ = v___y_427_;
v___y_467_ = v___y_428_;
v___y_468_ = v___y_429_;
goto v___jp_464_;
}
else
{
lean_object* v_a_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_517_; 
lean_dec_ref(v_F_425_);
lean_dec_ref(v_belowDict_424_);
lean_dec(v_cls_423_);
lean_dec_ref(v_a_421_);
v_a_510_ = lean_ctor_get(v___x_509_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v___x_509_);
if (v_isSharedCheck_517_ == 0)
{
v___x_512_ = v___x_509_;
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_a_510_);
lean_dec(v___x_509_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_517_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_515_; 
if (v_isShared_513_ == 0)
{
v___x_515_ = v___x_512_;
goto v_reusejp_514_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_a_510_);
v___x_515_ = v_reuseFailAlloc_516_;
goto v_reusejp_514_;
}
v_reusejp_514_:
{
return v___x_515_;
}
}
}
}
}
else
{
lean_object* v_a_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_525_; 
lean_dec_ref(v_F_425_);
lean_dec_ref(v_belowDict_424_);
lean_dec(v_cls_423_);
lean_dec_ref(v_a_421_);
v_a_518_ = lean_ctor_get(v___x_503_, 0);
v_isSharedCheck_525_ = !lean_is_exclusive(v___x_503_);
if (v_isSharedCheck_525_ == 0)
{
v___x_520_ = v___x_503_;
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_a_518_);
lean_dec(v___x_503_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_525_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_523_; 
if (v_isShared_521_ == 0)
{
v___x_523_ = v___x_520_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v_a_518_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
v___jp_431_:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_Meta_isExprDefEq(v___y_432_, v_a_421_, v___y_433_, v___y_434_, v___y_435_, v___y_436_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_object* v_a_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_455_; 
v_a_438_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_455_ == 0)
{
v___x_440_ = v___x_437_;
v_isShared_441_ = v_isSharedCheck_455_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_a_438_);
lean_dec(v___x_437_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_455_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
uint8_t v___x_442_; 
v___x_442_ = lean_unbox(v_a_438_);
lean_dec(v_a_438_);
if (v___x_442_ == 0)
{
lean_object* v___x_443_; lean_object* v_a_444_; lean_object* v___x_446_; uint8_t v_isShared_447_; uint8_t v_isSharedCheck_451_; 
lean_del_object(v___x_440_);
lean_dec_ref(v_F_425_);
v___x_443_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_433_, v___y_434_, v___y_435_, v___y_436_);
v_a_444_ = lean_ctor_get(v___x_443_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_443_);
if (v_isSharedCheck_451_ == 0)
{
v___x_446_ = v___x_443_;
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
else
{
lean_inc(v_a_444_);
lean_dec(v___x_443_);
v___x_446_ = lean_box(0);
v_isShared_447_ = v_isSharedCheck_451_;
goto v_resetjp_445_;
}
v_resetjp_445_:
{
lean_object* v___x_449_; 
if (v_isShared_447_ == 0)
{
v___x_449_ = v___x_446_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v_a_444_);
v___x_449_ = v_reuseFailAlloc_450_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
return v___x_449_;
}
}
}
else
{
lean_object* v___x_453_; 
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v_F_425_);
v___x_453_ = v___x_440_;
goto v_reusejp_452_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v_F_425_);
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
lean_dec_ref(v_F_425_);
v_a_456_ = lean_ctor_get(v___x_437_, 0);
v_isSharedCheck_463_ = !lean_is_exclusive(v___x_437_);
if (v_isSharedCheck_463_ == 0)
{
v___x_458_ = v___x_437_;
v_isShared_459_ = v_isSharedCheck_463_;
goto v_resetjp_457_;
}
else
{
lean_inc(v_a_456_);
lean_dec(v___x_437_);
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
v___jp_464_:
{
if (lean_obj_tag(v_belowDict_424_) == 5)
{
lean_object* v_fn_469_; lean_object* v_arg_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
lean_dec(v_cls_423_);
v_fn_469_ = lean_ctor_get(v_belowDict_424_, 0);
lean_inc_ref(v_fn_469_);
v_arg_470_ = lean_ctor_get(v_belowDict_424_, 1);
lean_inc_ref(v_arg_470_);
lean_dec_ref(v_belowDict_424_);
v___x_471_ = l_Lean_Expr_getAppFn(v_fn_469_);
lean_dec_ref(v_fn_469_);
v___x_472_ = lean_expr_eqv(v___x_471_, v_C_422_);
lean_dec_ref(v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
lean_dec_ref(v_arg_470_);
lean_dec_ref(v_F_425_);
lean_dec_ref(v_a_421_);
v___x_473_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_465_, v___y_466_, v___y_467_, v___y_468_);
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_479_; 
if (v_isShared_477_ == 0)
{
v___x_479_ = v___x_476_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_a_474_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
else
{
v___y_432_ = v_arg_470_;
v___y_433_ = v___y_465_;
v___y_434_ = v___y_466_;
v___y_435_ = v___y_467_;
v___y_436_ = v___y_468_;
goto v___jp_431_;
}
}
else
{
lean_object* v_options_482_; uint8_t v_hasTrace_483_; 
lean_dec_ref(v_F_425_);
lean_dec_ref(v_a_421_);
v_options_482_ = lean_ctor_get(v___y_467_, 2);
v_hasTrace_483_ = lean_ctor_get_uint8(v_options_482_, sizeof(void*)*1);
if (v_hasTrace_483_ == 0)
{
lean_object* v___x_484_; 
lean_dec_ref(v_belowDict_424_);
lean_dec(v_cls_423_);
v___x_484_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_465_, v___y_466_, v___y_467_, v___y_468_);
return v___x_484_;
}
else
{
lean_object* v_inheritedTraceOptions_485_; lean_object* v___x_486_; lean_object* v___x_487_; uint8_t v___x_488_; 
v_inheritedTraceOptions_485_ = lean_ctor_get(v___y_467_, 13);
v___x_486_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
lean_inc(v_cls_423_);
v___x_487_ = l_Lean_Name_append(v___x_486_, v_cls_423_);
v___x_488_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_485_, v_options_482_, v___x_487_);
lean_dec(v___x_487_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; 
lean_dec_ref(v_belowDict_424_);
lean_dec(v_cls_423_);
v___x_489_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_465_, v___y_466_, v___y_467_, v___y_468_);
return v___x_489_;
}
else
{
lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_490_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___closed__1);
v___x_491_ = l_Lean_indentExpr(v_belowDict_424_);
v___x_492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_492_, 0, v___x_490_);
lean_ctor_set(v___x_492_, 1, v___x_491_);
v___x_493_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_423_, v___x_492_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
if (lean_obj_tag(v___x_493_) == 0)
{
lean_object* v___x_494_; 
lean_dec_ref(v___x_493_);
v___x_494_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_465_, v___y_466_, v___y_467_, v___y_468_);
return v___x_494_;
}
else
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
v_a_495_ = lean_ctor_get(v___x_493_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___x_493_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___x_493_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___x_493_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed(lean_object* v___f_526_, lean_object* v_a_527_, lean_object* v_C_528_, lean_object* v_cls_529_, lean_object* v_belowDict_530_, lean_object* v_F_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1(v___f_526_, v_a_527_, v_C_528_, v_cls_529_, v_belowDict_530_, v_F_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec(v___y_535_);
lean_dec_ref(v___y_534_);
lean_dec(v___y_533_);
lean_dec_ref(v___y_532_);
lean_dec_ref(v_C_528_);
return v_res_537_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0(void){
_start:
{
lean_object* v___x_538_; lean_object* v_dummy_539_; 
v___x_538_ = lean_box(0);
v_dummy_539_ = l_Lean_Expr_sort___override(v___x_538_);
return v_dummy_539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(lean_object* v_arg_540_, lean_object* v___f_541_, lean_object* v_C_542_, lean_object* v_cls_543_, lean_object* v_F_544_, lean_object* v_xs_545_, lean_object* v_belowDict_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_){
_start:
{
uint8_t v___x_552_; lean_object* v___x_553_; 
v___x_552_ = 1;
v___x_553_ = l_Lean_Meta_zetaReduce(v_arg_540_, v___x_552_, v___x_552_, v___x_552_, v___y_547_, v___y_548_, v___y_549_, v___y_550_);
if (lean_obj_tag(v___x_553_) == 0)
{
lean_object* v_a_554_; lean_object* v___f_555_; lean_object* v_dummy_556_; lean_object* v_nargs_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___y_563_; lean_object* v___y_564_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___x_574_; lean_object* v___x_575_; uint8_t v___x_576_; 
v_a_554_ = lean_ctor_get(v___x_553_, 0);
lean_inc_n(v_a_554_, 2);
lean_dec_ref(v___x_553_);
v___f_555_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__1___boxed), 11, 4);
lean_closure_set(v___f_555_, 0, v___f_541_);
lean_closure_set(v___f_555_, 1, v_a_554_);
lean_closure_set(v___f_555_, 2, v_C_542_);
lean_closure_set(v___f_555_, 3, v_cls_543_);
v_dummy_556_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0);
v_nargs_557_ = l_Lean_Expr_getAppNumArgs(v_a_554_);
lean_inc(v_nargs_557_);
v___x_558_ = lean_mk_array(v_nargs_557_, v_dummy_556_);
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_sub(v_nargs_557_, v___x_559_);
lean_dec(v_nargs_557_);
v___x_561_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_554_, v___x_558_, v___x_560_);
v___x_574_ = lean_array_get_size(v_xs_545_);
v___x_575_ = lean_array_get_size(v___x_561_);
v___x_576_ = lean_nat_dec_le(v___x_574_, v___x_575_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; lean_object* v_a_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_585_; 
lean_dec_ref(v___x_561_);
lean_dec_ref(v___f_555_);
lean_dec_ref(v_F_544_);
v___x_577_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_547_, v___y_548_, v___y_549_, v___y_550_);
v_a_578_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_585_ == 0)
{
v___x_580_ = v___x_577_;
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_a_578_);
lean_dec(v___x_577_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_585_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
lean_object* v___x_583_; 
if (v_isShared_581_ == 0)
{
v___x_583_ = v___x_580_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v_a_578_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
else
{
v___y_563_ = v___y_547_;
v___y_564_ = v___y_548_;
v___y_565_ = v___y_549_;
v___y_566_ = v___y_550_;
goto v___jp_562_;
}
v___jp_562_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_567_ = lean_array_get_size(v___x_561_);
v___x_568_ = lean_array_get_size(v_xs_545_);
v___x_569_ = lean_nat_sub(v___x_567_, v___x_568_);
v___x_570_ = l_Array_extract___redArg(v___x_561_, v___x_569_, v___x_567_);
lean_dec_ref(v___x_561_);
v___x_571_ = l_Lean_Expr_replaceFVars(v_belowDict_546_, v_xs_545_, v___x_570_);
v___x_572_ = l_Lean_mkAppN(v_F_544_, v___x_570_);
lean_dec_ref(v___x_570_);
v___x_573_ = l_Lean_Elab_Structural_searchPProd___redArg(v___x_571_, v___x_572_, v___f_555_, v___y_563_, v___y_564_, v___y_565_, v___y_566_);
return v___x_573_;
}
}
else
{
lean_dec_ref(v_F_544_);
lean_dec(v_cls_543_);
lean_dec_ref(v_C_542_);
lean_dec_ref(v___f_541_);
return v___x_553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed(lean_object* v_arg_586_, lean_object* v___f_587_, lean_object* v_C_588_, lean_object* v_cls_589_, lean_object* v_F_590_, lean_object* v_xs_591_, lean_object* v_belowDict_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2(v_arg_586_, v___f_587_, v_C_588_, v_cls_589_, v_F_590_, v_xs_591_, v_belowDict_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
lean_dec(v___y_596_);
lean_dec_ref(v___y_595_);
lean_dec(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec_ref(v_belowDict_592_);
lean_dec_ref(v_xs_591_);
return v_res_598_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0(void){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = lean_mk_string_unchecked("belowDict step 1:", 17, 17);
return v___x_599_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1(void){
_start:
{
lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_600_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__0);
v___x_601_ = l_Lean_stringToMessageData(v___x_600_);
return v___x_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3(lean_object* v___f_602_, lean_object* v_arg_603_, lean_object* v_C_604_, lean_object* v_cls_605_, lean_object* v_belowDict_606_, lean_object* v_F_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v___x_613_; 
lean_inc_ref(v___f_602_);
lean_inc(v___y_611_);
lean_inc_ref(v___y_610_);
lean_inc(v___y_609_);
lean_inc_ref(v___y_608_);
v___x_613_ = lean_apply_5(v___f_602_, v___y_608_, v___y_609_, v___y_610_, v___y_611_, lean_box(0));
if (lean_obj_tag(v___x_613_) == 0)
{
lean_object* v_a_614_; lean_object* v___f_615_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_619_; lean_object* v___y_620_; uint8_t v___x_623_; 
v_a_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc(v_a_614_);
lean_dec_ref(v___x_613_);
lean_inc(v_cls_605_);
v___f_615_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___boxed), 12, 5);
lean_closure_set(v___f_615_, 0, v_arg_603_);
lean_closure_set(v___f_615_, 1, v___f_602_);
lean_closure_set(v___f_615_, 2, v_C_604_);
lean_closure_set(v___f_615_, 3, v_cls_605_);
lean_closure_set(v___f_615_, 4, v_F_607_);
v___x_623_ = lean_unbox(v_a_614_);
lean_dec(v_a_614_);
if (v___x_623_ == 0)
{
lean_dec(v_cls_605_);
v___y_617_ = v___y_608_;
v___y_618_ = v___y_609_;
v___y_619_ = v___y_610_;
v___y_620_ = v___y_611_;
goto v___jp_616_;
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_624_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___closed__1);
lean_inc_ref(v_belowDict_606_);
v___x_625_ = l_Lean_indentExpr(v_belowDict_606_);
v___x_626_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_626_, 0, v___x_624_);
lean_ctor_set(v___x_626_, 1, v___x_625_);
v___x_627_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_605_, v___x_626_, v___y_608_, v___y_609_, v___y_610_, v___y_611_);
if (lean_obj_tag(v___x_627_) == 0)
{
lean_dec_ref(v___x_627_);
v___y_617_ = v___y_608_;
v___y_618_ = v___y_609_;
v___y_619_ = v___y_610_;
v___y_620_ = v___y_611_;
goto v___jp_616_;
}
else
{
lean_object* v_a_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_635_; 
lean_dec_ref(v___f_615_);
lean_dec_ref(v_belowDict_606_);
v_a_628_ = lean_ctor_get(v___x_627_, 0);
v_isSharedCheck_635_ = !lean_is_exclusive(v___x_627_);
if (v_isSharedCheck_635_ == 0)
{
v___x_630_ = v___x_627_;
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_a_628_);
lean_dec(v___x_627_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_635_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___x_633_; 
if (v_isShared_631_ == 0)
{
v___x_633_ = v___x_630_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_634_; 
v_reuseFailAlloc_634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_634_, 0, v_a_628_);
v___x_633_ = v_reuseFailAlloc_634_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
return v___x_633_;
}
}
}
}
v___jp_616_:
{
uint8_t v___x_621_; lean_object* v___x_622_; 
v___x_621_ = 0;
v___x_622_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg(v_belowDict_606_, v___f_615_, v___x_621_, v___x_621_, v___y_617_, v___y_618_, v___y_619_, v___y_620_);
return v___x_622_;
}
}
else
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_643_; 
lean_dec_ref(v_F_607_);
lean_dec_ref(v_belowDict_606_);
lean_dec(v_cls_605_);
lean_dec_ref(v_C_604_);
lean_dec_ref(v_arg_603_);
lean_dec_ref(v___f_602_);
v_a_636_ = lean_ctor_get(v___x_613_, 0);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_613_);
if (v_isSharedCheck_643_ == 0)
{
v___x_638_ = v___x_613_;
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_613_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_643_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v___x_641_; 
if (v_isShared_639_ == 0)
{
v___x_641_ = v___x_638_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v_a_636_);
v___x_641_ = v_reuseFailAlloc_642_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
return v___x_641_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___boxed(lean_object* v___f_644_, lean_object* v_arg_645_, lean_object* v_C_646_, lean_object* v_cls_647_, lean_object* v_belowDict_648_, lean_object* v_F_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v_res_655_; 
v_res_655_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3(v___f_644_, v_arg_645_, v_C_646_, v_cls_647_, v_belowDict_648_, v_F_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_);
lean_dec(v___y_653_);
lean_dec_ref(v___y_652_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
return v_res_655_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0(void){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_656_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1(void){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_mk_string_unchecked("definition", 10, 10);
return v___x_657_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2(void){
_start:
{
lean_object* v___x_658_; 
v___x_658_ = lean_mk_string_unchecked("structural", 10, 10);
return v___x_658_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3(void){
_start:
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v_cls_662_; 
v___x_659_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__2);
v___x_660_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__1);
v___x_661_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__0);
v_cls_662_ = l_Lean_Name_mkStr3(v___x_661_, v___x_660_, v___x_659_);
return v_cls_662_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4(void){
_start:
{
lean_object* v_cls_663_; lean_object* v___f_664_; 
v_cls_663_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v___f_664_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___boxed), 6, 1);
lean_closure_set(v___f_664_, 0, v_cls_663_);
return v___f_664_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5(void){
_start:
{
lean_object* v___x_665_; 
v___x_665_ = lean_mk_string_unchecked("belowDict start:", 16, 16);
return v___x_665_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; 
v___x_666_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__5);
v___x_667_ = l_Lean_stringToMessageData(v___x_666_);
return v___x_667_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7(void){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lean_mk_string_unchecked("\narg:", 5, 5);
return v___x_668_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8(void){
_start:
{
lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_669_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__7);
v___x_670_ = l_Lean_stringToMessageData(v___x_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(lean_object* v_C_671_, lean_object* v_belowDict_672_, lean_object* v_arg_673_, lean_object* v_F_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_){
_start:
{
lean_object* v_cls_680_; lean_object* v___f_681_; lean_object* v___x_682_; lean_object* v_a_683_; lean_object* v___f_684_; uint8_t v___x_685_; 
v_cls_680_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v___f_681_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__4);
v___x_682_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0(v_cls_680_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
lean_dec_ref(v___x_682_);
lean_inc_ref(v_arg_673_);
v___f_684_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__3___boxed), 11, 4);
lean_closure_set(v___f_684_, 0, v___f_681_);
lean_closure_set(v___f_684_, 1, v_arg_673_);
lean_closure_set(v___f_684_, 2, v_C_671_);
lean_closure_set(v___f_684_, 3, v_cls_680_);
v___x_685_ = lean_unbox(v_a_683_);
lean_dec(v_a_683_);
if (v___x_685_ == 0)
{
lean_object* v___x_686_; 
lean_dec_ref(v_arg_673_);
v___x_686_ = l_Lean_Elab_Structural_searchPProd___redArg(v_belowDict_672_, v_F_674_, v___f_684_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
return v___x_686_;
}
else
{
lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
v___x_687_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__6);
lean_inc_ref(v_belowDict_672_);
v___x_688_ = l_Lean_indentExpr(v_belowDict_672_);
v___x_689_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_689_, 0, v___x_687_);
lean_ctor_set(v___x_689_, 1, v___x_688_);
v___x_690_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__8);
v___x_691_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_691_, 0, v___x_689_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
v___x_692_ = l_Lean_indentExpr(v_arg_673_);
v___x_693_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_693_, 0, v___x_691_);
lean_ctor_set(v___x_693_, 1, v___x_692_);
v___x_694_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0(v_cls_680_, v___x_693_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v___x_695_; 
lean_dec_ref(v___x_694_);
v___x_695_ = l_Lean_Elab_Structural_searchPProd___redArg(v_belowDict_672_, v_F_674_, v___f_684_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
return v___x_695_;
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref(v___f_684_);
lean_dec_ref(v_F_674_);
lean_dec_ref(v_belowDict_672_);
v_a_696_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_694_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_694_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___boxed(lean_object* v_C_704_, lean_object* v_belowDict_705_, lean_object* v_arg_706_, lean_object* v_F_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(v_C_704_, v_belowDict_705_, v_arg_706_, v_F_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(lean_object* v___x_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
lean_object* v_options_720_; uint8_t v_hasTrace_721_; 
v_options_720_ = lean_ctor_get(v___y_717_, 2);
v_hasTrace_721_ = lean_ctor_get_uint8(v_options_720_, sizeof(void*)*1);
if (v_hasTrace_721_ == 0)
{
lean_object* v___x_722_; lean_object* v___x_723_; 
lean_dec(v___x_714_);
v___x_722_ = lean_box(v_hasTrace_721_);
v___x_723_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_723_, 0, v___x_722_);
return v___x_723_;
}
else
{
lean_object* v_inheritedTraceOptions_724_; lean_object* v___x_725_; lean_object* v___x_726_; uint8_t v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; 
v_inheritedTraceOptions_724_ = lean_ctor_get(v___y_717_, 13);
v___x_725_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
v___x_726_ = l_Lean_Name_append(v___x_725_, v___x_714_);
v___x_727_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_724_, v_options_720_, v___x_726_);
lean_dec(v___x_726_);
v___x_728_ = lean_box(v___x_727_);
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
return v___x_729_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed(lean_object* v___x_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_){
_start:
{
lean_object* v_res_736_; 
v_res_736_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(v___x_730_, v___y_731_, v___y_732_, v___y_733_, v___y_734_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
lean_dec(v___y_732_);
lean_dec_ref(v___y_731_);
return v_res_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(lean_object* v_t_737_, lean_object* v_x_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v___x_744_; 
v___x_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_744_, 0, v_t_737_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed(lean_object* v_t_745_, lean_object* v_x_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1(v_t_745_, v_x_746_, v___y_747_, v___y_748_, v___y_749_, v___y_750_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
lean_dec(v___y_748_);
lean_dec_ref(v___y_747_);
lean_dec_ref(v_x_746_);
return v_res_752_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = lean_mk_string_unchecked("C", 1, 1);
return v___x_753_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__0);
v___x_755_ = l_Lean_Name_mkStr1(v___x_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(lean_object* v_t_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_762_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___closed__1);
v___x_763_ = l_Lean_Core_mkFreshUserName(v___x_762_, v___y_759_, v___y_760_);
if (lean_obj_tag(v___x_763_) == 0)
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_773_; 
v_a_764_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_773_ == 0)
{
v___x_766_ = v___x_763_;
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_763_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_773_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___f_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v___f_768_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__1___boxed), 7, 1);
lean_closure_set(v___f_768_, 0, v_t_756_);
v___x_769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_769_, 0, v_a_764_);
lean_ctor_set(v___x_769_, 1, v___f_768_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 0, v___x_769_);
v___x_771_ = v___x_766_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_772_; 
v_reuseFailAlloc_772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_772_, 0, v___x_769_);
v___x_771_ = v_reuseFailAlloc_772_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
return v___x_771_;
}
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_dec_ref(v_t_756_);
v_a_774_ = lean_ctor_get(v___x_763_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_763_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_763_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_763_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_779_; 
if (v_isShared_777_ == 0)
{
v___x_779_ = v___x_776_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v_a_774_);
v___x_779_ = v_reuseFailAlloc_780_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
return v___x_779_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed(lean_object* v_t_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2(v_t_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(lean_object* v___x_789_, lean_object* v_a_790_, lean_object* v_x_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = lean_array_set(v___y_792_, v_a_790_, v___x_789_);
v___x_799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_799_, 0, v___x_798_);
v___x_800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_800_, 0, v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed(lean_object* v___x_801_, lean_object* v_a_802_, lean_object* v_x_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
lean_object* v_res_810_; 
v_res_810_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3(v___x_801_, v_a_802_, v_x_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_, v___y_808_);
lean_dec(v___y_808_);
lean_dec_ref(v___y_807_);
lean_dec(v___y_806_);
lean_dec_ref(v___y_805_);
lean_dec(v_a_802_);
return v_res_810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(lean_object* v___x_811_, lean_object* v_a_812_, lean_object* v_x_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_){
_start:
{
lean_object* v_snd_820_; lean_object* v_fst_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_872_; 
v_snd_820_ = lean_ctor_get(v___y_814_, 1);
v_fst_821_ = lean_ctor_get(v___y_814_, 0);
v_isSharedCheck_872_ = !lean_is_exclusive(v___y_814_);
if (v_isSharedCheck_872_ == 0)
{
v___x_823_ = v___y_814_;
v_isShared_824_ = v_isSharedCheck_872_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_snd_820_);
lean_inc(v_fst_821_);
lean_dec(v___y_814_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_872_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v_array_825_; lean_object* v_start_826_; lean_object* v_stop_827_; uint8_t v___x_828_; 
v_array_825_ = lean_ctor_get(v_snd_820_, 0);
v_start_826_ = lean_ctor_get(v_snd_820_, 1);
v_stop_827_ = lean_ctor_get(v_snd_820_, 2);
v___x_828_ = lean_nat_dec_lt(v_start_826_, v_stop_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_830_; 
lean_dec_ref(v_a_812_);
lean_dec_ref(v___x_811_);
if (v_isShared_824_ == 0)
{
v___x_830_ = v___x_823_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_fst_821_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_snd_820_);
v___x_830_ = v_reuseFailAlloc_833_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_830_);
v___x_832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_832_, 0, v___x_831_);
return v___x_832_;
}
}
else
{
lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_868_; 
lean_inc(v_stop_827_);
lean_inc(v_start_826_);
lean_inc_ref(v_array_825_);
v_isSharedCheck_868_ = !lean_is_exclusive(v_snd_820_);
if (v_isSharedCheck_868_ == 0)
{
lean_object* v_unused_869_; lean_object* v_unused_870_; lean_object* v_unused_871_; 
v_unused_869_ = lean_ctor_get(v_snd_820_, 2);
lean_dec(v_unused_869_);
v_unused_870_ = lean_ctor_get(v_snd_820_, 1);
lean_dec(v_unused_870_);
v_unused_871_ = lean_ctor_get(v_snd_820_, 0);
lean_dec(v_unused_871_);
v___x_835_ = v_snd_820_;
v_isShared_836_ = v_isSharedCheck_868_;
goto v_resetjp_834_;
}
else
{
lean_dec(v_snd_820_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_868_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_837_; lean_object* v___f_838_; size_t v_sz_839_; size_t v___x_840_; lean_object* v___x_8719__overap_841_; lean_object* v___x_842_; 
v___x_837_ = lean_array_fget_borrowed(v_array_825_, v_start_826_);
lean_inc(v___x_837_);
v___f_838_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__3___boxed), 9, 1);
lean_closure_set(v___f_838_, 0, v___x_837_);
v_sz_839_ = lean_array_size(v_a_812_);
v___x_840_ = ((size_t)0ULL);
v___x_8719__overap_841_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_811_, v_a_812_, v___f_838_, v_sz_839_, v___x_840_, v_fst_821_);
lean_inc(v___y_818_);
lean_inc_ref(v___y_817_);
lean_inc(v___y_816_);
lean_inc_ref(v___y_815_);
v___x_842_ = lean_apply_5(v___x_8719__overap_841_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, lean_box(0));
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_859_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_859_ == 0)
{
v___x_845_ = v___x_842_;
v_isShared_846_ = v_isSharedCheck_859_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_a_843_);
lean_dec(v___x_842_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_859_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_847_ = lean_unsigned_to_nat(1u);
v___x_848_ = lean_nat_add(v_start_826_, v___x_847_);
lean_dec(v_start_826_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 1, v___x_848_);
v___x_850_ = v___x_835_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_array_825_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v___x_848_);
lean_ctor_set(v_reuseFailAlloc_858_, 2, v_stop_827_);
v___x_850_ = v_reuseFailAlloc_858_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
lean_object* v___x_852_; 
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 1, v___x_850_);
lean_ctor_set(v___x_823_, 0, v_a_843_);
v___x_852_ = v___x_823_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v_a_843_);
lean_ctor_set(v_reuseFailAlloc_857_, 1, v___x_850_);
v___x_852_ = v_reuseFailAlloc_857_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_855_; 
v___x_853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 0, v___x_853_);
v___x_855_ = v___x_845_;
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
}
}
}
else
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
lean_del_object(v___x_835_);
lean_dec(v_stop_827_);
lean_dec(v_start_826_);
lean_dec_ref(v_array_825_);
lean_del_object(v___x_823_);
v_a_860_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_842_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_842_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_a_860_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed(lean_object* v___x_873_, lean_object* v_a_874_, lean_object* v_x_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4(v___x_873_, v_a_874_, v_x_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
return v_res_882_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0(void){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = lean_alloc_closure((void*)(l_Lean_Meta_PProdN_packLambdas___boxed), 7, 0);
return v___x_883_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___f_884_; 
v___f_884_ = lean_alloc_closure((void*)(l_ReaderT_instMonadFunctor___lam__0), 4, 0);
return v___f_884_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2(void){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadFunctor___aux__1___boxed), 7, 3);
lean_closure_set(v___x_885_, 0, lean_box(0));
lean_closure_set(v___x_885_, 1, lean_box(0));
lean_closure_set(v___x_885_, 2, lean_box(0));
return v___x_885_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3(void){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = lean_mk_string_unchecked("not type correct!", 17, 17);
return v___x_886_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4(void){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_887_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__3);
v___x_888_ = l_Lean_stringToMessageData(v___x_887_);
return v___x_888_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5(void){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = lean_mk_string_unchecked("initial belowDict for ", 22, 22);
return v___x_889_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__5);
v___x_891_ = l_Lean_stringToMessageData(v___x_890_);
return v___x_891_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7(void){
_start:
{
lean_object* v___x_892_; 
v___x_892_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr), 1, 0);
return v___x_892_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__8(void){
_start:
{
lean_object* v___x_893_; 
v___x_893_ = lean_mk_string_unchecked(":", 1, 1);
return v___x_893_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__9(void){
_start:
{
lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_894_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__8);
v___x_895_ = l_Lean_stringToMessageData(v___x_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(lean_object* v___x_896_, lean_object* v___x_897_, lean_object* v_positions_898_, lean_object* v_a_899_, lean_object* v___f_900_, lean_object* v___x_901_, lean_object* v___x_902_, lean_object* v_k_903_, lean_object* v___x_904_, lean_object* v___x_905_, lean_object* v___f_906_, lean_object* v___x_907_, lean_object* v_Cs_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; lean_object* v___x_8747__overap_915_; lean_object* v___x_916_; 
v___x_914_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0);
lean_inc_ref(v_Cs_908_);
lean_inc_ref(v___x_896_);
v___x_8747__overap_915_ = l_Lean_Elab_Structural_Positions_mapMwith___redArg(v___x_896_, v___x_897_, v___x_914_, v_positions_898_, v_a_899_, v_Cs_908_);
lean_inc(v___y_912_);
lean_inc_ref(v___y_911_);
lean_inc(v___y_910_);
lean_inc_ref(v___y_909_);
v___x_916_ = lean_apply_5(v___x_8747__overap_915_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, lean_box(0));
if (lean_obj_tag(v___x_916_) == 0)
{
lean_object* v_a_917_; lean_object* v___x_918_; 
v_a_917_ = lean_ctor_get(v___x_916_, 0);
lean_inc(v_a_917_);
lean_dec_ref(v___x_916_);
lean_inc(v___y_912_);
lean_inc_ref(v___y_911_);
lean_inc(v___y_910_);
lean_inc_ref(v___y_909_);
v___x_918_ = lean_apply_5(v___f_900_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, lean_box(0));
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___y_924_; lean_object* v___y_925_; lean_object* v___y_926_; lean_object* v___y_927_; uint8_t v___x_967_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_919_);
lean_dec_ref(v___x_918_);
v___x_920_ = l_Lean_mkAppN(v___x_901_, v_a_917_);
lean_dec(v_a_917_);
v___x_921_ = l_Subarray_copy___redArg(v___x_902_);
v___x_922_ = l_Lean_mkAppN(v___x_920_, v___x_921_);
lean_dec_ref(v___x_921_);
v___x_967_ = lean_unbox(v_a_919_);
lean_dec(v_a_919_);
if (v___x_967_ == 0)
{
v___y_924_ = v___y_909_;
v___y_925_ = v___y_910_;
v___y_926_ = v___y_911_;
v___y_927_ = v___y_912_;
goto v___jp_923_;
}
else
{
lean_object* v___f_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v_toMonadRef_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_8809__overap_986_; lean_object* v___x_987_; 
v___f_968_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1);
v___x_969_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2);
v___x_970_ = l_Lean_Core_instMonadQuotationCoreM;
lean_inc(v___x_905_);
v___x_971_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_969_, v___x_905_, v___x_970_);
lean_inc(v___f_906_);
v___x_972_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_968_, v___f_906_, v___x_971_);
v_toMonadRef_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc_ref(v_toMonadRef_973_);
lean_dec_ref(v___x_972_);
v___x_974_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_975_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__6);
lean_inc_ref(v_Cs_908_);
v___x_976_ = lean_array_to_list(v_Cs_908_);
v___x_977_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__7);
v___x_978_ = lean_box(0);
v___x_979_ = l_List_mapTR_loop___redArg(v___x_977_, v___x_976_, v___x_978_);
v___x_980_ = l_Lean_MessageData_ofList(v___x_979_);
v___x_981_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_981_, 0, v___x_975_);
lean_ctor_set(v___x_981_, 1, v___x_980_);
v___x_982_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__9);
v___x_983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_981_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
lean_inc_ref(v___x_922_);
v___x_984_ = l_Lean_indentExpr(v___x_922_);
v___x_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
lean_inc(v___x_904_);
lean_inc_ref(v___x_907_);
lean_inc_ref(v___x_896_);
v___x_8809__overap_986_ = l_Lean_addTrace___redArg(v___x_896_, v___x_907_, v_toMonadRef_973_, v___x_974_, v___x_904_, v___x_985_);
lean_inc(v___y_912_);
lean_inc_ref(v___y_911_);
lean_inc(v___y_910_);
lean_inc_ref(v___y_909_);
v___x_987_ = lean_apply_5(v___x_8809__overap_986_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, lean_box(0));
if (lean_obj_tag(v___x_987_) == 0)
{
lean_dec_ref(v___x_987_);
v___y_924_ = v___y_909_;
v___y_925_ = v___y_910_;
v___y_926_ = v___y_911_;
v___y_927_ = v___y_912_;
goto v___jp_923_;
}
else
{
lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_995_; 
lean_dec_ref(v___x_922_);
lean_dec_ref(v_Cs_908_);
lean_dec_ref(v___x_907_);
lean_dec(v___f_906_);
lean_dec(v___x_905_);
lean_dec(v___x_904_);
lean_dec_ref(v_k_903_);
lean_dec_ref(v___x_896_);
v_a_988_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_995_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_995_ == 0)
{
v___x_990_ = v___x_987_;
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_987_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_995_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
lean_object* v___x_993_; 
if (v_isShared_991_ == 0)
{
v___x_993_ = v___x_990_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_a_988_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
v___jp_923_:
{
lean_object* v___x_928_; 
lean_inc_ref(v___x_922_);
v___x_928_ = l_Lean_Meta_isTypeCorrect(v___x_922_, v___y_924_, v___y_925_, v___y_926_, v___y_927_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; uint8_t v___x_930_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
lean_dec_ref(v___x_928_);
v___x_930_ = lean_unbox(v_a_929_);
lean_dec(v_a_929_);
if (v___x_930_ == 0)
{
lean_object* v_options_931_; uint8_t v_hasTrace_932_; 
v_options_931_ = lean_ctor_get(v___y_926_, 2);
v_hasTrace_932_ = lean_ctor_get_uint8(v_options_931_, sizeof(void*)*1);
if (v_hasTrace_932_ == 0)
{
lean_object* v___x_933_; 
lean_dec_ref(v___x_907_);
lean_dec(v___f_906_);
lean_dec(v___x_905_);
lean_dec(v___x_904_);
lean_dec_ref(v___x_896_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
v___x_933_ = lean_apply_7(v_k_903_, v_Cs_908_, v___x_922_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, lean_box(0));
return v___x_933_;
}
else
{
lean_object* v_inheritedTraceOptions_934_; lean_object* v___x_935_; lean_object* v___x_936_; uint8_t v___x_937_; 
v_inheritedTraceOptions_934_ = lean_ctor_get(v___y_926_, 13);
v___x_935_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
lean_inc(v___x_904_);
v___x_936_ = l_Lean_Name_append(v___x_935_, v___x_904_);
v___x_937_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_934_, v_options_931_, v___x_936_);
lean_dec(v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
lean_dec_ref(v___x_907_);
lean_dec(v___f_906_);
lean_dec(v___x_905_);
lean_dec(v___x_904_);
lean_dec_ref(v___x_896_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
v___x_938_ = lean_apply_7(v_k_903_, v_Cs_908_, v___x_922_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, lean_box(0));
return v___x_938_;
}
else
{
lean_object* v___f_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v_toMonadRef_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_8779__overap_947_; lean_object* v___x_948_; 
v___f_939_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1);
v___x_940_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2);
v___x_941_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_942_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_940_, v___x_905_, v___x_941_);
v___x_943_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_939_, v___f_906_, v___x_942_);
v_toMonadRef_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc_ref(v_toMonadRef_944_);
lean_dec_ref(v___x_943_);
v___x_945_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_946_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4);
v___x_8779__overap_947_ = l_Lean_addTrace___redArg(v___x_896_, v___x_907_, v_toMonadRef_944_, v___x_945_, v___x_904_, v___x_946_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
v___x_948_ = lean_apply_5(v___x_8779__overap_947_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, lean_box(0));
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v___x_949_; 
lean_dec_ref(v___x_948_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
v___x_949_ = lean_apply_7(v_k_903_, v_Cs_908_, v___x_922_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, lean_box(0));
return v___x_949_;
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec_ref(v___x_922_);
lean_dec_ref(v_Cs_908_);
lean_dec_ref(v_k_903_);
v_a_950_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_948_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_948_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
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
}
}
else
{
lean_object* v___x_958_; 
lean_dec_ref(v___x_907_);
lean_dec(v___f_906_);
lean_dec(v___x_905_);
lean_dec(v___x_904_);
lean_dec_ref(v___x_896_);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
v___x_958_ = lean_apply_7(v_k_903_, v_Cs_908_, v___x_922_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, lean_box(0));
return v___x_958_;
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec_ref(v___x_922_);
lean_dec_ref(v_Cs_908_);
lean_dec_ref(v___x_907_);
lean_dec(v___f_906_);
lean_dec(v___x_905_);
lean_dec(v___x_904_);
lean_dec_ref(v_k_903_);
lean_dec_ref(v___x_896_);
v_a_959_ = lean_ctor_get(v___x_928_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_928_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_928_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
else
{
lean_object* v_a_996_; lean_object* v___x_998_; uint8_t v_isShared_999_; uint8_t v_isSharedCheck_1003_; 
lean_dec(v_a_917_);
lean_dec_ref(v_Cs_908_);
lean_dec_ref(v___x_907_);
lean_dec(v___f_906_);
lean_dec(v___x_905_);
lean_dec(v___x_904_);
lean_dec_ref(v_k_903_);
lean_dec_ref(v___x_902_);
lean_dec_ref(v___x_901_);
lean_dec_ref(v___x_896_);
v_a_996_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_1003_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_1003_ == 0)
{
v___x_998_ = v___x_918_;
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
else
{
lean_inc(v_a_996_);
lean_dec(v___x_918_);
v___x_998_ = lean_box(0);
v_isShared_999_ = v_isSharedCheck_1003_;
goto v_resetjp_997_;
}
v_resetjp_997_:
{
lean_object* v___x_1001_; 
if (v_isShared_999_ == 0)
{
v___x_1001_ = v___x_998_;
goto v_reusejp_1000_;
}
else
{
lean_object* v_reuseFailAlloc_1002_; 
v_reuseFailAlloc_1002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1002_, 0, v_a_996_);
v___x_1001_ = v_reuseFailAlloc_1002_;
goto v_reusejp_1000_;
}
v_reusejp_1000_:
{
return v___x_1001_;
}
}
}
}
else
{
lean_object* v_a_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1011_; 
lean_dec_ref(v_Cs_908_);
lean_dec_ref(v___x_907_);
lean_dec(v___f_906_);
lean_dec(v___x_905_);
lean_dec(v___x_904_);
lean_dec_ref(v_k_903_);
lean_dec_ref(v___x_902_);
lean_dec_ref(v___x_901_);
lean_dec_ref(v___f_900_);
lean_dec_ref(v___x_896_);
v_a_1004_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_1011_ == 0)
{
v___x_1006_ = v___x_916_;
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_a_1004_);
lean_dec(v___x_916_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1011_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v___x_1009_; 
if (v_isShared_1007_ == 0)
{
v___x_1009_ = v___x_1006_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v_a_1004_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed(lean_object** _args){
lean_object* v___x_1012_ = _args[0];
lean_object* v___x_1013_ = _args[1];
lean_object* v_positions_1014_ = _args[2];
lean_object* v_a_1015_ = _args[3];
lean_object* v___f_1016_ = _args[4];
lean_object* v___x_1017_ = _args[5];
lean_object* v___x_1018_ = _args[6];
lean_object* v_k_1019_ = _args[7];
lean_object* v___x_1020_ = _args[8];
lean_object* v___x_1021_ = _args[9];
lean_object* v___f_1022_ = _args[10];
lean_object* v___x_1023_ = _args[11];
lean_object* v_Cs_1024_ = _args[12];
lean_object* v___y_1025_ = _args[13];
lean_object* v___y_1026_ = _args[14];
lean_object* v___y_1027_ = _args[15];
lean_object* v___y_1028_ = _args[16];
lean_object* v___y_1029_ = _args[17];
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5(v___x_1012_, v___x_1013_, v_positions_1014_, v_a_1015_, v___f_1016_, v___x_1017_, v___x_1018_, v_k_1019_, v___x_1020_, v___x_1021_, v___f_1022_, v___x_1023_, v_Cs_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v___y_1026_);
lean_dec_ref(v___y_1025_);
return v_res_1030_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = lean_unsigned_to_nat(37u);
v___x_1032_ = l_Lean_Level_ofNat(v___x_1031_);
return v___x_1032_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__0);
v___x_1034_ = l_Lean_Expr_sort___override(v___x_1033_);
return v___x_1034_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2(void){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = lean_mk_string_unchecked("numMotives: ", 12, 12);
return v___x_1035_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3(void){
_start:
{
lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1036_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__2);
v___x_1037_ = l_Lean_stringToMessageData(v___x_1036_);
return v___x_1037_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4(void){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = lean_mk_string_unchecked("unexpected 'below' type", 23, 23);
return v___x_1038_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5(void){
_start:
{
lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1039_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__4);
v___x_1040_ = l_Lean_stringToMessageData(v___x_1039_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6(lean_object* v_positions_1041_, lean_object* v___x_1042_, lean_object* v___f_1043_, lean_object* v___f_1044_, lean_object* v___x_1045_, lean_object* v_numTypeFormers_1046_, lean_object* v___f_1047_, lean_object* v___x_1048_, lean_object* v_k_1049_, lean_object* v___x_1050_, lean_object* v___x_1051_, lean_object* v___f_1052_, lean_object* v___x_1053_, lean_object* v_numIndParams_1054_, lean_object* v_a_1055_, lean_object* v_f_1056_, lean_object* v_args_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v___y_1064_; lean_object* v___y_1065_; lean_object* v___y_1066_; lean_object* v___y_1067_; lean_object* v___y_1068_; lean_object* v___y_1069_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1107_; lean_object* v___y_1108_; lean_object* v___y_1109_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v___y_1113_; lean_object* v___y_1171_; lean_object* v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; 
v___x_1196_ = lean_nat_add(v_numIndParams_1054_, v_numTypeFormers_1046_);
v___x_1197_ = lean_array_get_size(v_args_1057_);
v___x_1198_ = lean_nat_dec_lt(v___x_1196_, v___x_1197_);
lean_dec(v___x_1196_);
if (v___x_1198_ == 0)
{
lean_object* v___x_1199_; 
lean_dec_ref(v_args_1057_);
lean_dec_ref(v_f_1056_);
lean_dec(v_numIndParams_1054_);
lean_dec_ref(v_k_1049_);
lean_dec_ref(v___x_1048_);
lean_dec(v_numTypeFormers_1046_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___f_1044_);
lean_dec_ref(v___f_1043_);
lean_dec_ref(v_positions_1041_);
lean_inc(v___y_1061_);
lean_inc_ref(v___y_1060_);
lean_inc(v___y_1059_);
lean_inc_ref(v___y_1058_);
v___x_1199_ = lean_apply_5(v___f_1047_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, lean_box(0));
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; uint8_t v___x_1201_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref(v___x_1199_);
v___x_1201_ = lean_unbox(v_a_1200_);
lean_dec(v_a_1200_);
if (v___x_1201_ == 0)
{
lean_dec_ref(v_a_1055_);
lean_dec_ref(v___x_1053_);
lean_dec(v___f_1052_);
lean_dec(v___x_1051_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1042_);
v___y_1183_ = v___y_1058_;
v___y_1184_ = v___y_1059_;
v___y_1185_ = v___y_1060_;
v___y_1186_ = v___y_1061_;
goto v___jp_1182_;
}
else
{
lean_object* v___f_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v_toMonadRef_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_8954__overap_1212_; lean_object* v___x_1213_; 
v___f_1202_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1);
v___x_1203_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2);
v___x_1204_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1205_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1203_, v___x_1051_, v___x_1204_);
v___x_1206_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1202_, v___f_1052_, v___x_1205_);
v_toMonadRef_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc_ref(v_toMonadRef_1207_);
lean_dec_ref(v___x_1206_);
v___x_1208_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1209_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__5);
v___x_1210_ = l_Lean_indentExpr(v_a_1055_);
v___x_1211_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1209_);
lean_ctor_set(v___x_1211_, 1, v___x_1210_);
v___x_8954__overap_1212_ = l_Lean_addTrace___redArg(v___x_1042_, v___x_1053_, v_toMonadRef_1207_, v___x_1208_, v___x_1050_, v___x_1211_);
lean_inc(v___y_1061_);
lean_inc_ref(v___y_1060_);
lean_inc(v___y_1059_);
lean_inc_ref(v___y_1058_);
v___x_1213_ = lean_apply_5(v___x_8954__overap_1212_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, lean_box(0));
if (lean_obj_tag(v___x_1213_) == 0)
{
lean_dec_ref(v___x_1213_);
v___y_1183_ = v___y_1058_;
v___y_1184_ = v___y_1059_;
v___y_1185_ = v___y_1060_;
v___y_1186_ = v___y_1061_;
goto v___jp_1182_;
}
else
{
lean_object* v_a_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1221_; 
v_a_1214_ = lean_ctor_get(v___x_1213_, 0);
v_isSharedCheck_1221_ = !lean_is_exclusive(v___x_1213_);
if (v_isSharedCheck_1221_ == 0)
{
v___x_1216_ = v___x_1213_;
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_a_1214_);
lean_dec(v___x_1213_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1221_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___x_1219_; 
if (v_isShared_1217_ == 0)
{
v___x_1219_ = v___x_1216_;
goto v_reusejp_1218_;
}
else
{
lean_object* v_reuseFailAlloc_1220_; 
v_reuseFailAlloc_1220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1220_, 0, v_a_1214_);
v___x_1219_ = v_reuseFailAlloc_1220_;
goto v_reusejp_1218_;
}
v_reusejp_1218_:
{
return v___x_1219_;
}
}
}
}
}
else
{
lean_object* v_a_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1229_; 
lean_dec_ref(v_a_1055_);
lean_dec_ref(v___x_1053_);
lean_dec(v___f_1052_);
lean_dec(v___x_1051_);
lean_dec(v___x_1050_);
lean_dec_ref(v___x_1042_);
v_a_1222_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1229_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1229_ == 0)
{
v___x_1224_ = v___x_1199_;
v_isShared_1225_ = v_isSharedCheck_1229_;
goto v_resetjp_1223_;
}
else
{
lean_inc(v_a_1222_);
lean_dec(v___x_1199_);
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
lean_dec_ref(v_a_1055_);
v___y_1171_ = v___y_1058_;
v___y_1172_ = v___y_1059_;
v___y_1173_ = v___y_1060_;
v___y_1174_ = v___y_1061_;
goto v___jp_1170_;
}
v___jp_1063_:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; size_t v_sz_1077_; size_t v___x_1078_; lean_object* v___x_8855__overap_1079_; lean_object* v___x_1080_; 
v___x_1072_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__1);
v___x_1073_ = lean_mk_array(v___y_1066_, v___x_1072_);
v___x_1074_ = lean_array_get_size(v___y_1065_);
v___x_1075_ = l_Array_toSubarray___redArg(v___y_1065_, v___y_1067_, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1073_);
lean_ctor_set(v___x_1076_, 1, v___x_1075_);
v_sz_1077_ = lean_array_size(v_positions_1041_);
v___x_1078_ = ((size_t)0ULL);
lean_inc_ref(v___x_1042_);
v___x_8855__overap_1079_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1042_, v_positions_1041_, v___f_1043_, v_sz_1077_, v___x_1078_, v___x_1076_);
lean_inc(v___y_1071_);
lean_inc_ref(v___y_1070_);
lean_inc(v___y_1069_);
lean_inc_ref(v___y_1068_);
v___x_1080_ = lean_apply_5(v___x_8855__overap_1079_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, lean_box(0));
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v_fst_1082_; size_t v_sz_1083_; lean_object* v___x_8858__overap_1084_; lean_object* v___x_1085_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref(v___x_1080_);
v_fst_1082_ = lean_ctor_get(v_a_1081_, 0);
lean_inc(v_fst_1082_);
lean_dec(v_a_1081_);
v_sz_1083_ = lean_array_size(v_fst_1082_);
lean_inc_ref(v___x_1042_);
v___x_8858__overap_1084_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1042_, v___f_1044_, v_sz_1083_, v___x_1078_, v_fst_1082_);
lean_inc(v___y_1071_);
lean_inc_ref(v___y_1070_);
lean_inc(v___y_1069_);
lean_inc_ref(v___y_1068_);
v___x_1085_ = lean_apply_5(v___x_8858__overap_1084_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, lean_box(0));
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v_a_1086_; uint8_t v___x_1087_; lean_object* v___x_8862__overap_1088_; lean_object* v___x_1089_; 
v_a_1086_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_a_1086_);
lean_dec_ref(v___x_1085_);
v___x_1087_ = 0;
v___x_8862__overap_1088_ = l_Lean_Meta_withLocalDeclsD___redArg(v___x_1045_, v___x_1042_, v_a_1086_, v___y_1064_, v___x_1087_);
lean_inc(v___y_1071_);
lean_inc_ref(v___y_1070_);
lean_inc(v___y_1069_);
lean_inc_ref(v___y_1068_);
v___x_1089_ = lean_apply_5(v___x_8862__overap_1088_, v___y_1068_, v___y_1069_, v___y_1070_, v___y_1071_, lean_box(0));
return v___x_1089_;
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
lean_dec_ref(v___y_1064_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___x_1042_);
v_a_1090_ = lean_ctor_get(v___x_1085_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1085_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1085_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1085_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1095_; 
if (v_isShared_1093_ == 0)
{
v___x_1095_ = v___x_1092_;
goto v_reusejp_1094_;
}
else
{
lean_object* v_reuseFailAlloc_1096_; 
v_reuseFailAlloc_1096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1096_, 0, v_a_1090_);
v___x_1095_ = v_reuseFailAlloc_1096_;
goto v_reusejp_1094_;
}
v_reusejp_1094_:
{
return v___x_1095_;
}
}
}
}
else
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1105_; 
lean_dec_ref(v___y_1064_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___f_1044_);
lean_dec_ref(v___x_1042_);
v_a_1098_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1080_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1080_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
if (v_isShared_1101_ == 0)
{
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
}
v___jp_1106_:
{
lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v___x_1114_ = l_Subarray_copy___redArg(v___y_1112_);
v___x_1115_ = l_Lean_mkAppN(v_f_1056_, v___x_1114_);
lean_dec_ref(v___x_1114_);
lean_inc_ref(v___x_1115_);
v___x_1116_ = l_Lean_Meta_inferArgumentTypesN(v_numTypeFormers_1046_, v___x_1115_, v___y_1111_, v___y_1108_, v___y_1109_, v___y_1107_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref(v___x_1116_);
lean_inc_ref(v___f_1047_);
lean_inc(v___y_1107_);
lean_inc_ref(v___y_1109_);
lean_inc(v___y_1108_);
lean_inc_ref(v___y_1111_);
v___x_1118_ = lean_apply_5(v___f_1047_, v___y_1111_, v___y_1108_, v___y_1109_, v___y_1107_, lean_box(0));
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v_a_1119_; lean_object* v_lower_1120_; lean_object* v_upper_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1153_; 
v_a_1119_ = lean_ctor_get(v___x_1118_, 0);
lean_inc(v_a_1119_);
lean_dec_ref(v___x_1118_);
v_lower_1120_ = lean_ctor_get(v___y_1113_, 0);
v_upper_1121_ = lean_ctor_get(v___y_1113_, 1);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___y_1113_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1123_ = v___y_1113_;
v_isShared_1124_ = v_isSharedCheck_1153_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_upper_1121_);
lean_inc(v_lower_1120_);
lean_dec(v___y_1113_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1153_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1125_; lean_object* v___f_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v___x_1125_ = l_Array_toSubarray___redArg(v_args_1057_, v_lower_1120_, v_upper_1121_);
lean_inc_ref(v___x_1053_);
lean_inc(v___f_1052_);
lean_inc(v___x_1051_);
lean_inc(v___x_1050_);
lean_inc(v_a_1117_);
lean_inc_ref(v_positions_1041_);
lean_inc_ref(v___x_1042_);
v___f_1126_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___boxed), 18, 12);
lean_closure_set(v___f_1126_, 0, v___x_1042_);
lean_closure_set(v___f_1126_, 1, v___x_1048_);
lean_closure_set(v___f_1126_, 2, v_positions_1041_);
lean_closure_set(v___f_1126_, 3, v_a_1117_);
lean_closure_set(v___f_1126_, 4, v___f_1047_);
lean_closure_set(v___f_1126_, 5, v___x_1115_);
lean_closure_set(v___f_1126_, 6, v___x_1125_);
lean_closure_set(v___f_1126_, 7, v_k_1049_);
lean_closure_set(v___f_1126_, 8, v___x_1050_);
lean_closure_set(v___f_1126_, 9, v___x_1051_);
lean_closure_set(v___f_1126_, 10, v___f_1052_);
lean_closure_set(v___f_1126_, 11, v___x_1053_);
v___x_1127_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_1041_);
v___x_1128_ = lean_unbox(v_a_1119_);
lean_dec(v_a_1119_);
if (v___x_1128_ == 0)
{
lean_del_object(v___x_1123_);
lean_dec_ref(v___x_1053_);
lean_dec(v___f_1052_);
lean_dec(v___x_1051_);
lean_dec(v___x_1050_);
v___y_1064_ = v___f_1126_;
v___y_1065_ = v_a_1117_;
v___y_1066_ = v___x_1127_;
v___y_1067_ = v___y_1110_;
v___y_1068_ = v___y_1111_;
v___y_1069_ = v___y_1108_;
v___y_1070_ = v___y_1109_;
v___y_1071_ = v___y_1107_;
goto v___jp_1063_;
}
else
{
lean_object* v___f_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v_toMonadRef_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1141_; 
v___f_1129_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1);
v___x_1130_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2);
v___x_1131_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1132_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1130_, v___x_1051_, v___x_1131_);
v___x_1133_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1129_, v___f_1052_, v___x_1132_);
v_toMonadRef_1134_ = lean_ctor_get(v___x_1133_, 0);
lean_inc_ref(v_toMonadRef_1134_);
lean_dec_ref(v___x_1133_);
v___x_1135_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1136_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___closed__3);
lean_inc(v___x_1127_);
v___x_1137_ = l_Nat_reprFast(v___x_1127_);
v___x_1138_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1137_);
v___x_1139_ = l_Lean_MessageData_ofFormat(v___x_1138_);
if (v_isShared_1124_ == 0)
{
lean_ctor_set_tag(v___x_1123_, 7);
lean_ctor_set(v___x_1123_, 1, v___x_1139_);
lean_ctor_set(v___x_1123_, 0, v___x_1136_);
v___x_1141_ = v___x_1123_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v___x_1136_);
lean_ctor_set(v_reuseFailAlloc_1152_, 1, v___x_1139_);
v___x_1141_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
lean_object* v___x_8901__overap_1142_; lean_object* v___x_1143_; 
lean_inc_ref(v___x_1042_);
v___x_8901__overap_1142_ = l_Lean_addTrace___redArg(v___x_1042_, v___x_1053_, v_toMonadRef_1134_, v___x_1135_, v___x_1050_, v___x_1141_);
lean_inc(v___y_1107_);
lean_inc_ref(v___y_1109_);
lean_inc(v___y_1108_);
lean_inc_ref(v___y_1111_);
v___x_1143_ = lean_apply_5(v___x_8901__overap_1142_, v___y_1111_, v___y_1108_, v___y_1109_, v___y_1107_, lean_box(0));
if (lean_obj_tag(v___x_1143_) == 0)
{
lean_dec_ref(v___x_1143_);
v___y_1064_ = v___f_1126_;
v___y_1065_ = v_a_1117_;
v___y_1066_ = v___x_1127_;
v___y_1067_ = v___y_1110_;
v___y_1068_ = v___y_1111_;
v___y_1069_ = v___y_1108_;
v___y_1070_ = v___y_1109_;
v___y_1071_ = v___y_1107_;
goto v___jp_1063_;
}
else
{
lean_object* v_a_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1151_; 
lean_dec(v___x_1127_);
lean_dec_ref(v___f_1126_);
lean_dec(v_a_1117_);
lean_dec(v___y_1110_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___f_1044_);
lean_dec_ref(v___f_1043_);
lean_dec_ref(v___x_1042_);
lean_dec_ref(v_positions_1041_);
v_a_1144_ = lean_ctor_get(v___x_1143_, 0);
v_isSharedCheck_1151_ = !lean_is_exclusive(v___x_1143_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1146_ = v___x_1143_;
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_a_1144_);
lean_dec(v___x_1143_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1151_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
lean_object* v___x_1149_; 
if (v_isShared_1147_ == 0)
{
v___x_1149_ = v___x_1146_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_a_1144_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1161_; 
lean_dec(v_a_1117_);
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1110_);
lean_dec_ref(v_args_1057_);
lean_dec_ref(v___x_1053_);
lean_dec(v___f_1052_);
lean_dec(v___x_1051_);
lean_dec(v___x_1050_);
lean_dec_ref(v_k_1049_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v___f_1047_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___f_1044_);
lean_dec_ref(v___f_1043_);
lean_dec_ref(v___x_1042_);
lean_dec_ref(v_positions_1041_);
v_a_1154_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1156_ = v___x_1118_;
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_a_1154_);
lean_dec(v___x_1118_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1161_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v___x_1159_; 
if (v_isShared_1157_ == 0)
{
v___x_1159_ = v___x_1156_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_a_1154_);
v___x_1159_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
return v___x_1159_;
}
}
}
}
else
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1169_; 
lean_dec_ref(v___x_1115_);
lean_dec_ref(v___y_1113_);
lean_dec(v___y_1110_);
lean_dec_ref(v_args_1057_);
lean_dec_ref(v___x_1053_);
lean_dec(v___f_1052_);
lean_dec(v___x_1051_);
lean_dec(v___x_1050_);
lean_dec_ref(v_k_1049_);
lean_dec_ref(v___x_1048_);
lean_dec_ref(v___f_1047_);
lean_dec_ref(v___x_1045_);
lean_dec_ref(v___f_1044_);
lean_dec_ref(v___f_1043_);
lean_dec_ref(v___x_1042_);
lean_dec_ref(v_positions_1041_);
v_a_1162_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1169_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1164_ = v___x_1116_;
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1116_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1169_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v___x_1167_; 
if (v_isShared_1165_ == 0)
{
v___x_1167_ = v___x_1164_;
goto v_reusejp_1166_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_a_1162_);
v___x_1167_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1166_;
}
v_reusejp_1166_:
{
return v___x_1167_;
}
}
}
}
v___jp_1170_:
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1175_ = lean_unsigned_to_nat(0u);
lean_inc(v_numIndParams_1054_);
lean_inc_ref(v_args_1057_);
v___x_1176_ = l_Array_toSubarray___redArg(v_args_1057_, v___x_1175_, v_numIndParams_1054_);
v___x_1177_ = lean_nat_add(v_numIndParams_1054_, v_numTypeFormers_1046_);
lean_dec(v_numIndParams_1054_);
v___x_1178_ = lean_array_get_size(v_args_1057_);
v___x_1179_ = lean_nat_dec_le(v___x_1177_, v___x_1175_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; 
v___x_1180_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1177_);
lean_ctor_set(v___x_1180_, 1, v___x_1178_);
v___y_1107_ = v___y_1174_;
v___y_1108_ = v___y_1172_;
v___y_1109_ = v___y_1173_;
v___y_1110_ = v___x_1175_;
v___y_1111_ = v___y_1171_;
v___y_1112_ = v___x_1176_;
v___y_1113_ = v___x_1180_;
goto v___jp_1106_;
}
else
{
lean_object* v___x_1181_; 
lean_dec(v___x_1177_);
v___x_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1175_);
lean_ctor_set(v___x_1181_, 1, v___x_1178_);
v___y_1107_ = v___y_1174_;
v___y_1108_ = v___y_1172_;
v___y_1109_ = v___y_1173_;
v___y_1110_ = v___x_1175_;
v___y_1111_ = v___y_1171_;
v___y_1112_ = v___x_1176_;
v___y_1113_ = v___x_1181_;
goto v___jp_1106_;
}
}
v___jp_1182_:
{
lean_object* v___x_1187_; lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
v___x_1187_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed___redArg(v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_);
v_a_1188_ = lean_ctor_get(v___x_1187_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1187_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1187_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1187_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_positions_1230_ = _args[0];
lean_object* v___x_1231_ = _args[1];
lean_object* v___f_1232_ = _args[2];
lean_object* v___f_1233_ = _args[3];
lean_object* v___x_1234_ = _args[4];
lean_object* v_numTypeFormers_1235_ = _args[5];
lean_object* v___f_1236_ = _args[6];
lean_object* v___x_1237_ = _args[7];
lean_object* v_k_1238_ = _args[8];
lean_object* v___x_1239_ = _args[9];
lean_object* v___x_1240_ = _args[10];
lean_object* v___f_1241_ = _args[11];
lean_object* v___x_1242_ = _args[12];
lean_object* v_numIndParams_1243_ = _args[13];
lean_object* v_a_1244_ = _args[14];
lean_object* v_f_1245_ = _args[15];
lean_object* v_args_1246_ = _args[16];
lean_object* v___y_1247_ = _args[17];
lean_object* v___y_1248_ = _args[18];
lean_object* v___y_1249_ = _args[19];
lean_object* v___y_1250_ = _args[20];
lean_object* v___y_1251_ = _args[21];
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6(v_positions_1230_, v___x_1231_, v___f_1232_, v___f_1233_, v___x_1234_, v_numTypeFormers_1235_, v___f_1236_, v___x_1237_, v_k_1238_, v___x_1239_, v___x_1240_, v___f_1241_, v___x_1242_, v_numIndParams_1243_, v_a_1244_, v_f_1245_, v_args_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
return v_res_1252_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0(void){
_start:
{
lean_object* v___x_1253_; 
v___x_1253_ = l_instMonadEIO(lean_box(0));
return v___x_1253_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__0);
v___x_1255_ = l_StateRefT_x27_instMonad___redArg(v___x_1254_);
return v___x_1255_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2(void){
_start:
{
lean_object* v___f_1256_; 
v___f_1256_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1256_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3(void){
_start:
{
lean_object* v___f_1257_; 
v___f_1257_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1257_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4(void){
_start:
{
lean_object* v___f_1258_; 
v___f_1258_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_1258_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5(void){
_start:
{
lean_object* v___f_1259_; 
v___f_1259_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_1259_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6(void){
_start:
{
lean_object* v___f_1260_; 
v___f_1260_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 0);
return v___f_1260_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7(void){
_start:
{
lean_object* v___x_1261_; 
v___x_1261_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 3);
lean_closure_set(v___x_1261_, 0, lean_box(0));
lean_closure_set(v___x_1261_, 1, lean_box(0));
lean_closure_set(v___x_1261_, 2, lean_box(0));
return v___x_1261_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8(void){
_start:
{
lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1262_ = l_Lean_Core_instMonadTraceCoreM;
v___x_1263_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7);
v___x_1264_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_1263_, v___x_1262_);
return v___x_1264_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9(void){
_start:
{
lean_object* v___x_1265_; lean_object* v___f_1266_; lean_object* v___x_1267_; 
v___x_1265_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__8);
v___f_1266_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6);
v___x_1267_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_1266_, v___x_1265_);
return v___x_1267_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10(void){
_start:
{
lean_object* v___x_1268_; lean_object* v___f_1269_; 
v___x_1268_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v___f_1269_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1269_, 0, v___x_1268_);
return v___f_1269_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11(void){
_start:
{
lean_object* v___f_1270_; 
v___f_1270_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__2___boxed), 6, 0);
return v___f_1270_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12(void){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1271_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_1272_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7);
v___x_1273_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__2);
v___x_1274_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_1273_, v___x_1272_, v___x_1271_);
return v___x_1274_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13(void){
_start:
{
lean_object* v___x_1275_; lean_object* v___f_1276_; lean_object* v___f_1277_; lean_object* v___x_1278_; 
v___x_1275_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__12);
v___f_1276_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6);
v___f_1277_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__1);
v___x_1278_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_1277_, v___f_1276_, v___x_1275_);
return v___x_1278_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14(void){
_start:
{
lean_object* v___x_1279_; 
v___x_1279_ = lean_mk_string_unchecked("belowType: ", 11, 11);
return v___x_1279_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15(void){
_start:
{
lean_object* v___x_1280_; lean_object* v___x_1281_; 
v___x_1280_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__14);
v___x_1281_ = l_Lean_stringToMessageData(v___x_1280_);
return v___x_1281_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(lean_object* v_below_1282_, lean_object* v_numIndParams_1283_, lean_object* v_positions_1284_, lean_object* v_k_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_){
_start:
{
lean_object* v___x_1291_; lean_object* v_toApplicative_1292_; lean_object* v_toFunctor_1293_; lean_object* v_toSeq_1294_; lean_object* v_toSeqLeft_1295_; lean_object* v_toSeqRight_1296_; lean_object* v___f_1297_; lean_object* v___f_1298_; lean_object* v___f_1299_; lean_object* v___f_1300_; lean_object* v___x_1301_; lean_object* v___f_1302_; lean_object* v___f_1303_; lean_object* v___f_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v_toApplicative_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1435_; 
v___x_1291_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_1292_ = lean_ctor_get(v___x_1291_, 0);
v_toFunctor_1293_ = lean_ctor_get(v_toApplicative_1292_, 0);
v_toSeq_1294_ = lean_ctor_get(v_toApplicative_1292_, 2);
v_toSeqLeft_1295_ = lean_ctor_get(v_toApplicative_1292_, 3);
v_toSeqRight_1296_ = lean_ctor_get(v_toApplicative_1292_, 4);
v___f_1297_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2);
v___f_1298_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_1293_, 2);
v___f_1299_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1299_, 0, v_toFunctor_1293_);
v___f_1300_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1300_, 0, v_toFunctor_1293_);
v___x_1301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___f_1299_);
lean_ctor_set(v___x_1301_, 1, v___f_1300_);
lean_inc(v_toSeqRight_1296_);
v___f_1302_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1302_, 0, v_toSeqRight_1296_);
lean_inc(v_toSeqLeft_1295_);
v___f_1303_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1303_, 0, v_toSeqLeft_1295_);
lean_inc(v_toSeq_1294_);
v___f_1304_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1304_, 0, v_toSeq_1294_);
v___x_1305_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1301_);
lean_ctor_set(v___x_1305_, 1, v___f_1297_);
lean_ctor_set(v___x_1305_, 2, v___f_1304_);
lean_ctor_set(v___x_1305_, 3, v___f_1303_);
lean_ctor_set(v___x_1305_, 4, v___f_1302_);
v___x_1306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
lean_ctor_set(v___x_1306_, 1, v___f_1298_);
v___x_1307_ = l_StateRefT_x27_instMonad___redArg(v___x_1306_);
v_toApplicative_1308_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v___x_1307_, 1);
lean_dec(v_unused_1436_);
v___x_1310_ = v___x_1307_;
v_isShared_1311_ = v_isSharedCheck_1435_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_toApplicative_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1435_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v_toFunctor_1312_; lean_object* v_toSeq_1313_; lean_object* v_toSeqLeft_1314_; lean_object* v_toSeqRight_1315_; lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1433_; 
v_toFunctor_1312_ = lean_ctor_get(v_toApplicative_1308_, 0);
v_toSeq_1313_ = lean_ctor_get(v_toApplicative_1308_, 2);
v_toSeqLeft_1314_ = lean_ctor_get(v_toApplicative_1308_, 3);
v_toSeqRight_1315_ = lean_ctor_get(v_toApplicative_1308_, 4);
v_isSharedCheck_1433_ = !lean_is_exclusive(v_toApplicative_1308_);
if (v_isSharedCheck_1433_ == 0)
{
lean_object* v_unused_1434_; 
v_unused_1434_ = lean_ctor_get(v_toApplicative_1308_, 1);
lean_dec(v_unused_1434_);
v___x_1317_ = v_toApplicative_1308_;
v_isShared_1318_ = v_isSharedCheck_1433_;
goto v_resetjp_1316_;
}
else
{
lean_inc(v_toSeqRight_1315_);
lean_inc(v_toSeqLeft_1314_);
lean_inc(v_toSeq_1313_);
lean_inc(v_toFunctor_1312_);
lean_dec(v_toApplicative_1308_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1433_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___f_1319_; lean_object* v___f_1320_; lean_object* v___f_1321_; lean_object* v___f_1322_; lean_object* v___x_1323_; lean_object* v___f_1324_; lean_object* v___f_1325_; lean_object* v___f_1326_; lean_object* v___x_1328_; 
v___f_1319_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4);
v___f_1320_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5);
lean_inc_ref(v_toFunctor_1312_);
v___f_1321_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1321_, 0, v_toFunctor_1312_);
v___f_1322_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1322_, 0, v_toFunctor_1312_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v___f_1321_);
lean_ctor_set(v___x_1323_, 1, v___f_1322_);
v___f_1324_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1324_, 0, v_toSeqRight_1315_);
v___f_1325_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1325_, 0, v_toSeqLeft_1314_);
v___f_1326_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1326_, 0, v_toSeq_1313_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 4, v___f_1324_);
lean_ctor_set(v___x_1317_, 3, v___f_1325_);
lean_ctor_set(v___x_1317_, 2, v___f_1326_);
lean_ctor_set(v___x_1317_, 1, v___f_1319_);
lean_ctor_set(v___x_1317_, 0, v___x_1323_);
v___x_1328_ = v___x_1317_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v___x_1323_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v___f_1319_);
lean_ctor_set(v_reuseFailAlloc_1432_, 2, v___f_1326_);
lean_ctor_set(v_reuseFailAlloc_1432_, 3, v___f_1325_);
lean_ctor_set(v_reuseFailAlloc_1432_, 4, v___f_1324_);
v___x_1328_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1330_; 
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 1, v___f_1320_);
lean_ctor_set(v___x_1310_, 0, v___x_1328_);
v___x_1330_ = v___x_1310_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1328_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v___f_1320_);
v___x_1330_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
lean_object* v___f_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v_toApplicative_1334_; lean_object* v_toFunctor_1335_; lean_object* v_toSeq_1336_; lean_object* v_toSeqLeft_1337_; lean_object* v_toSeqRight_1338_; lean_object* v___f_1339_; lean_object* v___f_1340_; lean_object* v___x_1341_; lean_object* v___f_1342_; lean_object* v___f_1343_; lean_object* v___f_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___f_1331_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__6);
v___x_1332_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__7);
v___x_1333_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__9);
v_toApplicative_1334_ = lean_ctor_get(v___x_1291_, 0);
v_toFunctor_1335_ = lean_ctor_get(v_toApplicative_1334_, 0);
v_toSeq_1336_ = lean_ctor_get(v_toApplicative_1334_, 2);
v_toSeqLeft_1337_ = lean_ctor_get(v_toApplicative_1334_, 3);
v_toSeqRight_1338_ = lean_ctor_get(v_toApplicative_1334_, 4);
lean_inc_ref_n(v_toFunctor_1335_, 2);
v___f_1339_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1339_, 0, v_toFunctor_1335_);
v___f_1340_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1340_, 0, v_toFunctor_1335_);
v___x_1341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1341_, 0, v___f_1339_);
lean_ctor_set(v___x_1341_, 1, v___f_1340_);
lean_inc(v_toSeqRight_1338_);
v___f_1342_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1342_, 0, v_toSeqRight_1338_);
lean_inc(v_toSeqLeft_1337_);
v___f_1343_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1343_, 0, v_toSeqLeft_1337_);
lean_inc(v_toSeq_1336_);
v___f_1344_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1344_, 0, v_toSeq_1336_);
v___x_1345_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1345_, 0, v___x_1341_);
lean_ctor_set(v___x_1345_, 1, v___f_1297_);
lean_ctor_set(v___x_1345_, 2, v___f_1344_);
lean_ctor_set(v___x_1345_, 3, v___f_1343_);
lean_ctor_set(v___x_1345_, 4, v___f_1342_);
v___x_1346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1345_);
lean_ctor_set(v___x_1346_, 1, v___f_1298_);
v___x_1347_ = l_StateRefT_x27_instMonad___redArg(v___x_1346_);
v___x_1348_ = lean_alloc_closure((void*)(l_ReaderT_pure___boxed), 6, 3);
lean_closure_set(v___x_1348_, 0, lean_box(0));
lean_closure_set(v___x_1348_, 1, lean_box(0));
lean_closure_set(v___x_1348_, 2, v___x_1347_);
v___x_1349_ = l_instMonadControlTOfPure___redArg(v___x_1348_);
lean_inc(v_a_1289_);
lean_inc_ref(v_a_1288_);
lean_inc(v_a_1287_);
lean_inc_ref(v_a_1286_);
lean_inc_ref(v_below_1282_);
v___x_1350_ = lean_infer_type(v_below_1282_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
if (lean_obj_tag(v___x_1350_) == 0)
{
lean_object* v_a_1351_; lean_object* v___x_1352_; lean_object* v___f_1353_; lean_object* v___x_1354_; lean_object* v_a_1355_; lean_object* v___f_1356_; lean_object* v___f_1357_; lean_object* v___x_1358_; lean_object* v_numTypeFormers_1359_; lean_object* v___f_1360_; lean_object* v___y_1362_; lean_object* v___y_1363_; lean_object* v___y_1364_; lean_object* v___y_1365_; lean_object* v___y_1374_; lean_object* v___y_1375_; lean_object* v___y_1376_; lean_object* v___y_1377_; uint8_t v___x_1406_; 
v_a_1351_ = lean_ctor_get(v___x_1350_, 0);
lean_inc_n(v_a_1351_, 2);
lean_dec_ref(v___x_1350_);
v___x_1352_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v___f_1353_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__10);
v___x_1354_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(v___x_1352_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_);
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
lean_inc(v_a_1355_);
lean_dec_ref(v___x_1354_);
v___f_1356_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__11);
lean_inc_ref_n(v___x_1330_, 2);
v___f_1357_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__4___boxed), 9, 1);
lean_closure_set(v___f_1357_, 0, v___x_1330_);
v___x_1358_ = l_Lean_instInhabitedExpr;
v_numTypeFormers_1359_ = lean_array_get_size(v_positions_1284_);
v___f_1360_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__6___boxed), 22, 15);
lean_closure_set(v___f_1360_, 0, v_positions_1284_);
lean_closure_set(v___f_1360_, 1, v___x_1330_);
lean_closure_set(v___f_1360_, 2, v___f_1357_);
lean_closure_set(v___f_1360_, 3, v___f_1356_);
lean_closure_set(v___f_1360_, 4, v___x_1349_);
lean_closure_set(v___f_1360_, 5, v_numTypeFormers_1359_);
lean_closure_set(v___f_1360_, 6, v___f_1353_);
lean_closure_set(v___f_1360_, 7, v___x_1358_);
lean_closure_set(v___f_1360_, 8, v_k_1285_);
lean_closure_set(v___f_1360_, 9, v___x_1352_);
lean_closure_set(v___f_1360_, 10, v___x_1332_);
lean_closure_set(v___f_1360_, 11, v___f_1331_);
lean_closure_set(v___f_1360_, 12, v___x_1333_);
lean_closure_set(v___f_1360_, 13, v_numIndParams_1283_);
lean_closure_set(v___f_1360_, 14, v_a_1351_);
v___x_1406_ = lean_unbox(v_a_1355_);
lean_dec(v_a_1355_);
if (v___x_1406_ == 0)
{
v___y_1374_ = v_a_1286_;
v___y_1375_ = v_a_1287_;
v___y_1376_ = v_a_1288_;
v___y_1377_ = v_a_1289_;
goto v___jp_1373_;
}
else
{
lean_object* v___x_1407_; lean_object* v_toMonadRef_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_8528__overap_1413_; lean_object* v___x_1414_; 
v___x_1407_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13);
v_toMonadRef_1408_ = lean_ctor_get(v___x_1407_, 0);
v___x_1409_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1410_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__15);
lean_inc(v_a_1351_);
v___x_1411_ = l_Lean_MessageData_ofExpr(v_a_1351_);
v___x_1412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1412_, 0, v___x_1410_);
lean_ctor_set(v___x_1412_, 1, v___x_1411_);
lean_inc_ref(v_toMonadRef_1408_);
lean_inc_ref(v___x_1330_);
v___x_8528__overap_1413_ = l_Lean_addTrace___redArg(v___x_1330_, v___x_1333_, v_toMonadRef_1408_, v___x_1409_, v___x_1352_, v___x_1412_);
lean_inc(v_a_1289_);
lean_inc_ref(v_a_1288_);
lean_inc(v_a_1287_);
lean_inc_ref(v_a_1286_);
v___x_1414_ = lean_apply_5(v___x_8528__overap_1413_, v_a_1286_, v_a_1287_, v_a_1288_, v_a_1289_, lean_box(0));
if (lean_obj_tag(v___x_1414_) == 0)
{
lean_dec_ref(v___x_1414_);
v___y_1374_ = v_a_1286_;
v___y_1375_ = v_a_1287_;
v___y_1376_ = v_a_1288_;
v___y_1377_ = v_a_1289_;
goto v___jp_1373_;
}
else
{
lean_object* v_a_1415_; lean_object* v___x_1417_; uint8_t v_isShared_1418_; uint8_t v_isSharedCheck_1422_; 
lean_dec_ref(v___f_1360_);
lean_dec(v_a_1351_);
lean_dec_ref(v___x_1330_);
lean_dec_ref(v_below_1282_);
v_a_1415_ = lean_ctor_get(v___x_1414_, 0);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1414_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1417_ = v___x_1414_;
v_isShared_1418_ = v_isSharedCheck_1422_;
goto v_resetjp_1416_;
}
else
{
lean_inc(v_a_1415_);
lean_dec(v___x_1414_);
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
v___jp_1361_:
{
lean_object* v_dummy_1366_; lean_object* v_nargs_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_8194__overap_1371_; lean_object* v___x_1372_; 
v_dummy_1366_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0);
v_nargs_1367_ = l_Lean_Expr_getAppNumArgs(v_a_1351_);
lean_inc(v_nargs_1367_);
v___x_1368_ = lean_mk_array(v_nargs_1367_, v_dummy_1366_);
v___x_1369_ = lean_unsigned_to_nat(1u);
v___x_1370_ = lean_nat_sub(v_nargs_1367_, v___x_1369_);
lean_dec(v_nargs_1367_);
v___x_8194__overap_1371_ = l_Lean_Expr_withAppAux___redArg(v___f_1360_, v_a_1351_, v___x_1368_, v___x_1370_);
lean_inc(v___y_1365_);
lean_inc_ref(v___y_1364_);
lean_inc(v___y_1363_);
lean_inc_ref(v___y_1362_);
v___x_1372_ = lean_apply_5(v___x_8194__overap_1371_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_, lean_box(0));
return v___x_1372_;
}
v___jp_1373_:
{
lean_object* v___x_1378_; 
v___x_1378_ = l_Lean_Meta_isTypeCorrect(v_below_1282_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; uint8_t v___x_1380_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref(v___x_1378_);
v___x_1380_ = lean_unbox(v_a_1379_);
lean_dec(v_a_1379_);
if (v___x_1380_ == 0)
{
lean_object* v___x_1381_; lean_object* v_a_1382_; uint8_t v___x_1383_; 
v___x_1381_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__0(v___x_1352_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
v_a_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc(v_a_1382_);
lean_dec_ref(v___x_1381_);
v___x_1383_ = lean_unbox(v_a_1382_);
lean_dec(v_a_1382_);
if (v___x_1383_ == 0)
{
lean_dec_ref(v___x_1330_);
v___y_1362_ = v___y_1374_;
v___y_1363_ = v___y_1375_;
v___y_1364_ = v___y_1376_;
v___y_1365_ = v___y_1377_;
goto v___jp_1361_;
}
else
{
lean_object* v___x_1384_; lean_object* v_toMonadRef_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_8506__overap_1388_; lean_object* v___x_1389_; 
v___x_1384_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__13);
v_toMonadRef_1385_ = lean_ctor_get(v___x_1384_, 0);
v___x_1386_ = l_Lean_Meta_instAddMessageContextMetaM;
v___x_1387_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__4);
lean_inc_ref(v_toMonadRef_1385_);
v___x_8506__overap_1388_ = l_Lean_addTrace___redArg(v___x_1330_, v___x_1333_, v_toMonadRef_1385_, v___x_1386_, v___x_1352_, v___x_1387_);
lean_inc(v___y_1377_);
lean_inc_ref(v___y_1376_);
lean_inc(v___y_1375_);
lean_inc_ref(v___y_1374_);
v___x_1389_ = lean_apply_5(v___x_8506__overap_1388_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, lean_box(0));
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_dec_ref(v___x_1389_);
v___y_1362_ = v___y_1374_;
v___y_1363_ = v___y_1375_;
v___y_1364_ = v___y_1376_;
v___y_1365_ = v___y_1377_;
goto v___jp_1361_;
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
lean_dec_ref(v___f_1360_);
lean_dec(v_a_1351_);
v_a_1390_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1389_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1389_);
v___x_1392_ = lean_box(0);
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
v_resetjp_1391_:
{
lean_object* v___x_1395_; 
if (v_isShared_1393_ == 0)
{
v___x_1395_ = v___x_1392_;
goto v_reusejp_1394_;
}
else
{
lean_object* v_reuseFailAlloc_1396_; 
v_reuseFailAlloc_1396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1396_, 0, v_a_1390_);
v___x_1395_ = v_reuseFailAlloc_1396_;
goto v_reusejp_1394_;
}
v_reusejp_1394_:
{
return v___x_1395_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1330_);
v___y_1362_ = v___y_1374_;
v___y_1363_ = v___y_1375_;
v___y_1364_ = v___y_1376_;
v___y_1365_ = v___y_1377_;
goto v___jp_1361_;
}
}
else
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1405_; 
lean_dec_ref(v___f_1360_);
lean_dec(v_a_1351_);
lean_dec_ref(v___x_1330_);
v_a_1398_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1400_ = v___x_1378_;
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1378_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1405_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1403_; 
if (v_isShared_1401_ == 0)
{
v___x_1403_ = v___x_1400_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1404_; 
v_reuseFailAlloc_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1404_, 0, v_a_1398_);
v___x_1403_ = v_reuseFailAlloc_1404_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
return v___x_1403_;
}
}
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1430_; 
lean_dec_ref(v___x_1349_);
lean_dec_ref(v___x_1330_);
lean_dec_ref(v_k_1285_);
lean_dec_ref(v_positions_1284_);
lean_dec(v_numIndParams_1283_);
lean_dec_ref(v_below_1282_);
v_a_1423_ = lean_ctor_get(v___x_1350_, 0);
v_isSharedCheck_1430_ = !lean_is_exclusive(v___x_1350_);
if (v_isSharedCheck_1430_ == 0)
{
v___x_1425_ = v___x_1350_;
v_isShared_1426_ = v_isSharedCheck_1430_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_a_1423_);
lean_dec(v___x_1350_);
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
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___boxed(lean_object* v_below_1437_, lean_object* v_numIndParams_1438_, lean_object* v_positions_1439_, lean_object* v_k_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_){
_start:
{
lean_object* v_res_1446_; 
v_res_1446_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1437_, v_numIndParams_1438_, v_positions_1439_, v_k_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
lean_dec(v_a_1444_);
lean_dec_ref(v_a_1443_);
lean_dec(v_a_1442_);
lean_dec_ref(v_a_1441_);
return v_res_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(lean_object* v_00_u03b1_1447_, lean_object* v_inst_1448_, lean_object* v_below_1449_, lean_object* v_numIndParams_1450_, lean_object* v_positions_1451_, lean_object* v_k_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
lean_object* v___x_1458_; 
v___x_1458_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1449_, v_numIndParams_1450_, v_positions_1451_, v_k_1452_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_);
return v___x_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___boxed(lean_object* v_00_u03b1_1459_, lean_object* v_inst_1460_, lean_object* v_below_1461_, lean_object* v_numIndParams_1462_, lean_object* v_positions_1463_, lean_object* v_k_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict(v_00_u03b1_1459_, v_inst_1460_, v_below_1461_, v_numIndParams_1462_, v_positions_1463_, v_k_1464_, v_a_1465_, v_a_1466_, v_a_1467_, v_a_1468_);
lean_dec(v_a_1468_);
lean_dec_ref(v_a_1467_);
lean_dec(v_a_1466_);
lean_dec_ref(v_a_1465_);
lean_dec(v_inst_1460_);
return v_res_1470_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1471_ = lean_unsigned_to_nat(32u);
v___x_1472_ = lean_mk_empty_array_with_capacity(v___x_1471_);
v___x_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1472_);
return v___x_1473_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1474_ = ((size_t)5ULL);
v___x_1475_ = lean_unsigned_to_nat(0u);
v___x_1476_ = lean_unsigned_to_nat(32u);
v___x_1477_ = lean_mk_empty_array_with_capacity(v___x_1476_);
v___x_1478_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__0);
v___x_1479_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
lean_ctor_set(v___x_1479_, 1, v___x_1477_);
lean_ctor_set(v___x_1479_, 2, v___x_1475_);
lean_ctor_set(v___x_1479_, 3, v___x_1475_);
lean_ctor_set_usize(v___x_1479_, 4, v___x_1474_);
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(lean_object* v___y_1480_){
_start:
{
lean_object* v___x_1482_; lean_object* v_traceState_1483_; lean_object* v_traces_1484_; lean_object* v___x_1485_; lean_object* v_traceState_1486_; lean_object* v_env_1487_; lean_object* v_nextMacroScope_1488_; lean_object* v_ngen_1489_; lean_object* v_auxDeclNGen_1490_; lean_object* v_cache_1491_; lean_object* v_messages_1492_; lean_object* v_infoState_1493_; lean_object* v_snapshotTasks_1494_; lean_object* v___x_1496_; uint8_t v_isShared_1497_; uint8_t v_isSharedCheck_1513_; 
v___x_1482_ = lean_st_ref_get(v___y_1480_);
v_traceState_1483_ = lean_ctor_get(v___x_1482_, 4);
lean_inc_ref(v_traceState_1483_);
lean_dec(v___x_1482_);
v_traces_1484_ = lean_ctor_get(v_traceState_1483_, 0);
lean_inc_ref(v_traces_1484_);
lean_dec_ref(v_traceState_1483_);
v___x_1485_ = lean_st_ref_take(v___y_1480_);
v_traceState_1486_ = lean_ctor_get(v___x_1485_, 4);
v_env_1487_ = lean_ctor_get(v___x_1485_, 0);
v_nextMacroScope_1488_ = lean_ctor_get(v___x_1485_, 1);
v_ngen_1489_ = lean_ctor_get(v___x_1485_, 2);
v_auxDeclNGen_1490_ = lean_ctor_get(v___x_1485_, 3);
v_cache_1491_ = lean_ctor_get(v___x_1485_, 5);
v_messages_1492_ = lean_ctor_get(v___x_1485_, 6);
v_infoState_1493_ = lean_ctor_get(v___x_1485_, 7);
v_snapshotTasks_1494_ = lean_ctor_get(v___x_1485_, 8);
v_isSharedCheck_1513_ = !lean_is_exclusive(v___x_1485_);
if (v_isSharedCheck_1513_ == 0)
{
v___x_1496_ = v___x_1485_;
v_isShared_1497_ = v_isSharedCheck_1513_;
goto v_resetjp_1495_;
}
else
{
lean_inc(v_snapshotTasks_1494_);
lean_inc(v_infoState_1493_);
lean_inc(v_messages_1492_);
lean_inc(v_cache_1491_);
lean_inc(v_traceState_1486_);
lean_inc(v_auxDeclNGen_1490_);
lean_inc(v_ngen_1489_);
lean_inc(v_nextMacroScope_1488_);
lean_inc(v_env_1487_);
lean_dec(v___x_1485_);
v___x_1496_ = lean_box(0);
v_isShared_1497_ = v_isSharedCheck_1513_;
goto v_resetjp_1495_;
}
v_resetjp_1495_:
{
uint64_t v_tid_1498_; lean_object* v___x_1500_; uint8_t v_isShared_1501_; uint8_t v_isSharedCheck_1511_; 
v_tid_1498_ = lean_ctor_get_uint64(v_traceState_1486_, sizeof(void*)*1);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_traceState_1486_);
if (v_isSharedCheck_1511_ == 0)
{
lean_object* v_unused_1512_; 
v_unused_1512_ = lean_ctor_get(v_traceState_1486_, 0);
lean_dec(v_unused_1512_);
v___x_1500_ = v_traceState_1486_;
v_isShared_1501_ = v_isSharedCheck_1511_;
goto v_resetjp_1499_;
}
else
{
lean_dec(v_traceState_1486_);
v___x_1500_ = lean_box(0);
v_isShared_1501_ = v_isSharedCheck_1511_;
goto v_resetjp_1499_;
}
v_resetjp_1499_:
{
lean_object* v___x_1502_; lean_object* v___x_1504_; 
v___x_1502_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___closed__1);
if (v_isShared_1501_ == 0)
{
lean_ctor_set(v___x_1500_, 0, v___x_1502_);
v___x_1504_ = v___x_1500_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1510_; 
v_reuseFailAlloc_1510_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1510_, 0, v___x_1502_);
lean_ctor_set_uint64(v_reuseFailAlloc_1510_, sizeof(void*)*1, v_tid_1498_);
v___x_1504_ = v_reuseFailAlloc_1510_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1506_; 
if (v_isShared_1497_ == 0)
{
lean_ctor_set(v___x_1496_, 4, v___x_1504_);
v___x_1506_ = v___x_1496_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v_env_1487_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_nextMacroScope_1488_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_ngen_1489_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_auxDeclNGen_1490_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v___x_1504_);
lean_ctor_set(v_reuseFailAlloc_1509_, 5, v_cache_1491_);
lean_ctor_set(v_reuseFailAlloc_1509_, 6, v_messages_1492_);
lean_ctor_set(v_reuseFailAlloc_1509_, 7, v_infoState_1493_);
lean_ctor_set(v_reuseFailAlloc_1509_, 8, v_snapshotTasks_1494_);
v___x_1506_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_st_ref_set(v___y_1480_, v___x_1506_);
v___x_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1508_, 0, v_traces_1484_);
return v___x_1508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg___boxed(lean_object* v___y_1514_, lean_object* v___y_1515_){
_start:
{
lean_object* v_res_1516_; 
v_res_1516_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1514_);
lean_dec(v___y_1514_);
return v_res_1516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_){
_start:
{
lean_object* v___x_1522_; 
v___x_1522_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v___y_1520_);
return v___x_1522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___boxed(lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v_res_1528_; 
v_res_1528_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0(v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_);
lean_dec(v___y_1526_);
lean_dec_ref(v___y_1525_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
return v_res_1528_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(lean_object* v_opts_1529_, lean_object* v_opt_1530_){
_start:
{
lean_object* v_name_1531_; lean_object* v_defValue_1532_; lean_object* v_map_1533_; lean_object* v___x_1534_; 
v_name_1531_ = lean_ctor_get(v_opt_1530_, 0);
v_defValue_1532_ = lean_ctor_get(v_opt_1530_, 1);
v_map_1533_ = lean_ctor_get(v_opts_1529_, 0);
v___x_1534_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1533_, v_name_1531_);
if (lean_obj_tag(v___x_1534_) == 0)
{
uint8_t v___x_1535_; 
v___x_1535_ = lean_unbox(v_defValue_1532_);
return v___x_1535_;
}
else
{
lean_object* v_val_1536_; 
v_val_1536_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_val_1536_);
lean_dec_ref(v___x_1534_);
if (lean_obj_tag(v_val_1536_) == 1)
{
uint8_t v_v_1537_; 
v_v_1537_ = lean_ctor_get_uint8(v_val_1536_, 0);
lean_dec_ref(v_val_1536_);
return v_v_1537_;
}
else
{
uint8_t v___x_1538_; 
lean_dec(v_val_1536_);
v___x_1538_ = lean_unbox(v_defValue_1532_);
return v___x_1538_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1___boxed(lean_object* v_opts_1539_, lean_object* v_opt_1540_){
_start:
{
uint8_t v_res_1541_; lean_object* v_r_1542_; 
v_res_1541_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1539_, v_opt_1540_);
lean_dec_ref(v_opt_1540_);
lean_dec_ref(v_opts_1539_);
v_r_1542_ = lean_box(v_res_1541_);
return v_r_1542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0(lean_object* v___x_1543_, lean_object* v_fnIndex_1544_, lean_object* v_recArg_1545_, lean_object* v_below_1546_, lean_object* v_Cs_1547_, lean_object* v_belowDict_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = lean_array_get_borrowed(v___x_1543_, v_Cs_1547_, v_fnIndex_1544_);
lean_inc(v___x_1554_);
v___x_1555_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux(v___x_1554_, v_belowDict_1548_, v_recArg_1545_, v_below_1546_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_);
return v___x_1555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__0___boxed(lean_object* v___x_1556_, lean_object* v_fnIndex_1557_, lean_object* v_recArg_1558_, lean_object* v_below_1559_, lean_object* v_Cs_1560_, lean_object* v_belowDict_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
lean_object* v_res_1567_; 
v_res_1567_ = l_Lean_Elab_Structural_toBelow___lam__0(v___x_1556_, v_fnIndex_1557_, v_recArg_1558_, v_below_1559_, v_Cs_1560_, v_belowDict_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
lean_dec(v___y_1565_);
lean_dec_ref(v___y_1564_);
lean_dec(v___y_1563_);
lean_dec_ref(v___y_1562_);
lean_dec_ref(v_Cs_1560_);
lean_dec(v_fnIndex_1557_);
lean_dec_ref(v___x_1556_);
return v_res_1567_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_mk_string_unchecked("searching IH for ", 17, 17);
return v___x_1568_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__0, &l_Lean_Elab_Structural_toBelow___lam__1___closed__0_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__0);
v___x_1570_ = l_Lean_stringToMessageData(v___x_1569_);
return v___x_1570_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1571_; 
v___x_1571_ = lean_mk_string_unchecked(" in ", 4, 4);
return v___x_1571_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1572_; lean_object* v___x_1573_; 
v___x_1572_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__2, &l_Lean_Elab_Structural_toBelow___lam__1___closed__2_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__2);
v___x_1573_ = l_Lean_stringToMessageData(v___x_1572_);
return v___x_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1(lean_object* v_below_1574_, lean_object* v_recArg_1575_, lean_object* v_x_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_){
_start:
{
lean_object* v___x_1582_; 
lean_inc(v___y_1580_);
lean_inc_ref(v___y_1579_);
lean_inc(v___y_1578_);
lean_inc_ref(v___y_1577_);
v___x_1582_ = lean_infer_type(v_below_1574_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1597_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1597_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1597_ == 0)
{
v___x_1585_ = v___x_1582_;
v_isShared_1586_ = v_isSharedCheck_1597_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1582_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1597_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1595_; 
v___x_1587_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__1, &l_Lean_Elab_Structural_toBelow___lam__1___closed__1_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__1);
v___x_1588_ = l_Lean_MessageData_ofExpr(v_recArg_1575_);
v___x_1589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1587_);
lean_ctor_set(v___x_1589_, 1, v___x_1588_);
v___x_1590_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_1591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1591_, 0, v___x_1589_);
lean_ctor_set(v___x_1591_, 1, v___x_1590_);
v___x_1592_ = l_Lean_MessageData_ofExpr(v_a_1583_);
v___x_1593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
if (v_isShared_1586_ == 0)
{
lean_ctor_set(v___x_1585_, 0, v___x_1593_);
v___x_1595_ = v___x_1585_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1596_; 
v_reuseFailAlloc_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1596_, 0, v___x_1593_);
v___x_1595_ = v_reuseFailAlloc_1596_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
return v___x_1595_;
}
}
}
else
{
lean_object* v_a_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1605_; 
lean_dec_ref(v_recArg_1575_);
v_a_1598_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1605_ == 0)
{
v___x_1600_ = v___x_1582_;
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_a_1598_);
lean_dec(v___x_1582_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1605_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1603_; 
if (v_isShared_1601_ == 0)
{
v___x_1603_ = v___x_1600_;
goto v_reusejp_1602_;
}
else
{
lean_object* v_reuseFailAlloc_1604_; 
v_reuseFailAlloc_1604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1604_, 0, v_a_1598_);
v___x_1603_ = v_reuseFailAlloc_1604_;
goto v_reusejp_1602_;
}
v_reusejp_1602_:
{
return v___x_1603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___lam__1___boxed(lean_object* v_below_1606_, lean_object* v_recArg_1607_, lean_object* v_x_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_){
_start:
{
lean_object* v_res_1614_; 
v_res_1614_ = l_Lean_Elab_Structural_toBelow___lam__1(v_below_1606_, v_recArg_1607_, v_x_1608_, v___y_1609_, v___y_1610_, v___y_1611_, v___y_1612_);
lean_dec(v___y_1612_);
lean_dec_ref(v___y_1611_);
lean_dec(v___y_1610_);
lean_dec_ref(v___y_1609_);
lean_dec_ref(v_x_1608_);
return v_res_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(lean_object* v_opts_1615_, lean_object* v_opt_1616_){
_start:
{
lean_object* v_name_1617_; lean_object* v_defValue_1618_; lean_object* v_map_1619_; lean_object* v___x_1620_; 
v_name_1617_ = lean_ctor_get(v_opt_1616_, 0);
v_defValue_1618_ = lean_ctor_get(v_opt_1616_, 1);
v_map_1619_ = lean_ctor_get(v_opts_1615_, 0);
v___x_1620_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1619_, v_name_1617_);
if (lean_obj_tag(v___x_1620_) == 0)
{
lean_inc(v_defValue_1618_);
return v_defValue_1618_;
}
else
{
lean_object* v_val_1621_; 
v_val_1621_ = lean_ctor_get(v___x_1620_, 0);
lean_inc(v_val_1621_);
lean_dec_ref(v___x_1620_);
if (lean_obj_tag(v_val_1621_) == 3)
{
lean_object* v_v_1622_; 
v_v_1622_ = lean_ctor_get(v_val_1621_, 0);
lean_inc(v_v_1622_);
lean_dec_ref(v_val_1621_);
return v_v_1622_;
}
else
{
lean_dec(v_val_1621_);
lean_inc(v_defValue_1618_);
return v_defValue_1618_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5___boxed(lean_object* v_opts_1623_, lean_object* v_opt_1624_){
_start:
{
lean_object* v_res_1625_; 
v_res_1625_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1623_, v_opt_1624_);
lean_dec_ref(v_opt_1624_);
lean_dec_ref(v_opts_1623_);
return v_res_1625_;
}
}
LEAN_EXPORT uint8_t l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(lean_object* v_e_1626_){
_start:
{
if (lean_obj_tag(v_e_1626_) == 0)
{
uint8_t v___x_1627_; 
v___x_1627_ = 2;
return v___x_1627_;
}
else
{
uint8_t v___x_1628_; 
v___x_1628_ = 0;
return v___x_1628_;
}
}
}
LEAN_EXPORT lean_object* l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2___boxed(lean_object* v_e_1629_){
_start:
{
uint8_t v_res_1630_; lean_object* v_r_1631_; 
v_res_1630_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_e_1629_);
lean_dec_ref(v_e_1629_);
v_r_1631_ = lean_box(v_res_1630_);
return v_r_1631_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(size_t v_sz_1632_, size_t v_i_1633_, lean_object* v_bs_1634_){
_start:
{
uint8_t v___x_1635_; 
v___x_1635_ = lean_usize_dec_lt(v_i_1633_, v_sz_1632_);
if (v___x_1635_ == 0)
{
return v_bs_1634_;
}
else
{
lean_object* v_v_1636_; lean_object* v_msg_1637_; lean_object* v___x_1638_; lean_object* v_bs_x27_1639_; size_t v___x_1640_; size_t v___x_1641_; lean_object* v___x_1642_; 
v_v_1636_ = lean_array_uget_borrowed(v_bs_1634_, v_i_1633_);
v_msg_1637_ = lean_ctor_get(v_v_1636_, 1);
lean_inc_ref(v_msg_1637_);
v___x_1638_ = lean_unsigned_to_nat(0u);
v_bs_x27_1639_ = lean_array_uset(v_bs_1634_, v_i_1633_, v___x_1638_);
v___x_1640_ = ((size_t)1ULL);
v___x_1641_ = lean_usize_add(v_i_1633_, v___x_1640_);
v___x_1642_ = lean_array_uset(v_bs_x27_1639_, v_i_1633_, v_msg_1637_);
v_i_1633_ = v___x_1641_;
v_bs_1634_ = v___x_1642_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4___boxed(lean_object* v_sz_1644_, lean_object* v_i_1645_, lean_object* v_bs_1646_){
_start:
{
size_t v_sz_boxed_1647_; size_t v_i_boxed_1648_; lean_object* v_res_1649_; 
v_sz_boxed_1647_ = lean_unbox_usize(v_sz_1644_);
lean_dec(v_sz_1644_);
v_i_boxed_1648_ = lean_unbox_usize(v_i_1645_);
lean_dec(v_i_1645_);
v_res_1649_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(v_sz_boxed_1647_, v_i_boxed_1648_, v_bs_1646_);
return v_res_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(lean_object* v_oldTraces_1650_, lean_object* v_data_1651_, lean_object* v_ref_1652_, lean_object* v_msg_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
lean_object* v_fileName_1659_; lean_object* v_fileMap_1660_; lean_object* v_options_1661_; lean_object* v_currRecDepth_1662_; lean_object* v_maxRecDepth_1663_; lean_object* v_ref_1664_; lean_object* v_currNamespace_1665_; lean_object* v_openDecls_1666_; lean_object* v_initHeartbeats_1667_; lean_object* v_maxHeartbeats_1668_; lean_object* v_quotContext_1669_; lean_object* v_currMacroScope_1670_; uint8_t v_diag_1671_; lean_object* v_cancelTk_x3f_1672_; uint8_t v_suppressElabErrors_1673_; lean_object* v_inheritedTraceOptions_1674_; lean_object* v___x_1675_; lean_object* v_traceState_1676_; lean_object* v_traces_1677_; lean_object* v_ref_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; size_t v_sz_1681_; size_t v___x_1682_; lean_object* v___x_1683_; lean_object* v_msg_1684_; lean_object* v___x_1685_; lean_object* v_a_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1723_; 
v_fileName_1659_ = lean_ctor_get(v___y_1656_, 0);
v_fileMap_1660_ = lean_ctor_get(v___y_1656_, 1);
v_options_1661_ = lean_ctor_get(v___y_1656_, 2);
v_currRecDepth_1662_ = lean_ctor_get(v___y_1656_, 3);
v_maxRecDepth_1663_ = lean_ctor_get(v___y_1656_, 4);
v_ref_1664_ = lean_ctor_get(v___y_1656_, 5);
v_currNamespace_1665_ = lean_ctor_get(v___y_1656_, 6);
v_openDecls_1666_ = lean_ctor_get(v___y_1656_, 7);
v_initHeartbeats_1667_ = lean_ctor_get(v___y_1656_, 8);
v_maxHeartbeats_1668_ = lean_ctor_get(v___y_1656_, 9);
v_quotContext_1669_ = lean_ctor_get(v___y_1656_, 10);
v_currMacroScope_1670_ = lean_ctor_get(v___y_1656_, 11);
v_diag_1671_ = lean_ctor_get_uint8(v___y_1656_, sizeof(void*)*14);
v_cancelTk_x3f_1672_ = lean_ctor_get(v___y_1656_, 12);
v_suppressElabErrors_1673_ = lean_ctor_get_uint8(v___y_1656_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1674_ = lean_ctor_get(v___y_1656_, 13);
v___x_1675_ = lean_st_ref_get(v___y_1657_);
v_traceState_1676_ = lean_ctor_get(v___x_1675_, 4);
lean_inc_ref(v_traceState_1676_);
lean_dec(v___x_1675_);
v_traces_1677_ = lean_ctor_get(v_traceState_1676_, 0);
lean_inc_ref(v_traces_1677_);
lean_dec_ref(v_traceState_1676_);
v_ref_1678_ = l_Lean_replaceRef(v_ref_1652_, v_ref_1664_);
lean_inc_ref(v_inheritedTraceOptions_1674_);
lean_inc(v_cancelTk_x3f_1672_);
lean_inc(v_currMacroScope_1670_);
lean_inc(v_quotContext_1669_);
lean_inc(v_maxHeartbeats_1668_);
lean_inc(v_initHeartbeats_1667_);
lean_inc(v_openDecls_1666_);
lean_inc(v_currNamespace_1665_);
lean_inc(v_maxRecDepth_1663_);
lean_inc(v_currRecDepth_1662_);
lean_inc_ref(v_options_1661_);
lean_inc_ref(v_fileMap_1660_);
lean_inc_ref(v_fileName_1659_);
v___x_1679_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1679_, 0, v_fileName_1659_);
lean_ctor_set(v___x_1679_, 1, v_fileMap_1660_);
lean_ctor_set(v___x_1679_, 2, v_options_1661_);
lean_ctor_set(v___x_1679_, 3, v_currRecDepth_1662_);
lean_ctor_set(v___x_1679_, 4, v_maxRecDepth_1663_);
lean_ctor_set(v___x_1679_, 5, v_ref_1678_);
lean_ctor_set(v___x_1679_, 6, v_currNamespace_1665_);
lean_ctor_set(v___x_1679_, 7, v_openDecls_1666_);
lean_ctor_set(v___x_1679_, 8, v_initHeartbeats_1667_);
lean_ctor_set(v___x_1679_, 9, v_maxHeartbeats_1668_);
lean_ctor_set(v___x_1679_, 10, v_quotContext_1669_);
lean_ctor_set(v___x_1679_, 11, v_currMacroScope_1670_);
lean_ctor_set(v___x_1679_, 12, v_cancelTk_x3f_1672_);
lean_ctor_set(v___x_1679_, 13, v_inheritedTraceOptions_1674_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*14, v_diag_1671_);
lean_ctor_set_uint8(v___x_1679_, sizeof(void*)*14 + 1, v_suppressElabErrors_1673_);
v___x_1680_ = l_Lean_PersistentArray_toArray___redArg(v_traces_1677_);
lean_dec_ref(v_traces_1677_);
v_sz_1681_ = lean_array_size(v___x_1680_);
v___x_1682_ = ((size_t)0ULL);
v___x_1683_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3_spec__4(v_sz_1681_, v___x_1682_, v___x_1680_);
v_msg_1684_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_1684_, 0, v_data_1651_);
lean_ctor_set(v_msg_1684_, 1, v_msg_1653_);
lean_ctor_set(v_msg_1684_, 2, v___x_1683_);
v___x_1685_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_1684_, v___y_1654_, v___y_1655_, v___x_1679_, v___y_1657_);
lean_dec_ref(v___x_1679_);
v_a_1686_ = lean_ctor_get(v___x_1685_, 0);
v_isSharedCheck_1723_ = !lean_is_exclusive(v___x_1685_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1688_ = v___x_1685_;
v_isShared_1689_ = v_isSharedCheck_1723_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_a_1686_);
lean_dec(v___x_1685_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1723_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v___x_1690_; lean_object* v_traceState_1691_; lean_object* v_env_1692_; lean_object* v_nextMacroScope_1693_; lean_object* v_ngen_1694_; lean_object* v_auxDeclNGen_1695_; lean_object* v_cache_1696_; lean_object* v_messages_1697_; lean_object* v_infoState_1698_; lean_object* v_snapshotTasks_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1722_; 
v___x_1690_ = lean_st_ref_take(v___y_1657_);
v_traceState_1691_ = lean_ctor_get(v___x_1690_, 4);
v_env_1692_ = lean_ctor_get(v___x_1690_, 0);
v_nextMacroScope_1693_ = lean_ctor_get(v___x_1690_, 1);
v_ngen_1694_ = lean_ctor_get(v___x_1690_, 2);
v_auxDeclNGen_1695_ = lean_ctor_get(v___x_1690_, 3);
v_cache_1696_ = lean_ctor_get(v___x_1690_, 5);
v_messages_1697_ = lean_ctor_get(v___x_1690_, 6);
v_infoState_1698_ = lean_ctor_get(v___x_1690_, 7);
v_snapshotTasks_1699_ = lean_ctor_get(v___x_1690_, 8);
v_isSharedCheck_1722_ = !lean_is_exclusive(v___x_1690_);
if (v_isSharedCheck_1722_ == 0)
{
v___x_1701_ = v___x_1690_;
v_isShared_1702_ = v_isSharedCheck_1722_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_snapshotTasks_1699_);
lean_inc(v_infoState_1698_);
lean_inc(v_messages_1697_);
lean_inc(v_cache_1696_);
lean_inc(v_traceState_1691_);
lean_inc(v_auxDeclNGen_1695_);
lean_inc(v_ngen_1694_);
lean_inc(v_nextMacroScope_1693_);
lean_inc(v_env_1692_);
lean_dec(v___x_1690_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1722_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
uint64_t v_tid_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1720_; 
v_tid_1703_ = lean_ctor_get_uint64(v_traceState_1691_, sizeof(void*)*1);
v_isSharedCheck_1720_ = !lean_is_exclusive(v_traceState_1691_);
if (v_isSharedCheck_1720_ == 0)
{
lean_object* v_unused_1721_; 
v_unused_1721_ = lean_ctor_get(v_traceState_1691_, 0);
lean_dec(v_unused_1721_);
v___x_1705_ = v_traceState_1691_;
v_isShared_1706_ = v_isSharedCheck_1720_;
goto v_resetjp_1704_;
}
else
{
lean_dec(v_traceState_1691_);
v___x_1705_ = lean_box(0);
v_isShared_1706_ = v_isSharedCheck_1720_;
goto v_resetjp_1704_;
}
v_resetjp_1704_:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1710_; 
v___x_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1707_, 0, v_ref_1652_);
lean_ctor_set(v___x_1707_, 1, v_a_1686_);
v___x_1708_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_1650_, v___x_1707_);
if (v_isShared_1706_ == 0)
{
lean_ctor_set(v___x_1705_, 0, v___x_1708_);
v___x_1710_ = v___x_1705_;
goto v_reusejp_1709_;
}
else
{
lean_object* v_reuseFailAlloc_1719_; 
v_reuseFailAlloc_1719_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1719_, 0, v___x_1708_);
lean_ctor_set_uint64(v_reuseFailAlloc_1719_, sizeof(void*)*1, v_tid_1703_);
v___x_1710_ = v_reuseFailAlloc_1719_;
goto v_reusejp_1709_;
}
v_reusejp_1709_:
{
lean_object* v___x_1712_; 
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 4, v___x_1710_);
v___x_1712_ = v___x_1701_;
goto v_reusejp_1711_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_env_1692_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v_nextMacroScope_1693_);
lean_ctor_set(v_reuseFailAlloc_1718_, 2, v_ngen_1694_);
lean_ctor_set(v_reuseFailAlloc_1718_, 3, v_auxDeclNGen_1695_);
lean_ctor_set(v_reuseFailAlloc_1718_, 4, v___x_1710_);
lean_ctor_set(v_reuseFailAlloc_1718_, 5, v_cache_1696_);
lean_ctor_set(v_reuseFailAlloc_1718_, 6, v_messages_1697_);
lean_ctor_set(v_reuseFailAlloc_1718_, 7, v_infoState_1698_);
lean_ctor_set(v_reuseFailAlloc_1718_, 8, v_snapshotTasks_1699_);
v___x_1712_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1711_;
}
v_reusejp_1711_:
{
lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1716_; 
v___x_1713_ = lean_st_ref_set(v___y_1657_, v___x_1712_);
v___x_1714_ = lean_box(0);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 0, v___x_1714_);
v___x_1716_ = v___x_1688_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v___x_1714_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3___boxed(lean_object* v_oldTraces_1724_, lean_object* v_data_1725_, lean_object* v_ref_1726_, lean_object* v_msg_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
lean_object* v_res_1733_; 
v_res_1733_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(v_oldTraces_1724_, v_data_1725_, v_ref_1726_, v_msg_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
lean_dec(v___y_1731_);
lean_dec_ref(v___y_1730_);
lean_dec(v___y_1729_);
lean_dec_ref(v___y_1728_);
return v_res_1733_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(lean_object* v_x_1734_){
_start:
{
if (lean_obj_tag(v_x_1734_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1743_; 
v_a_1736_ = lean_ctor_get(v_x_1734_, 0);
v_isSharedCheck_1743_ = !lean_is_exclusive(v_x_1734_);
if (v_isSharedCheck_1743_ == 0)
{
v___x_1738_ = v_x_1734_;
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
else
{
lean_inc(v_a_1736_);
lean_dec(v_x_1734_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1743_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; 
if (v_isShared_1739_ == 0)
{
lean_ctor_set_tag(v___x_1738_, 1);
v___x_1741_ = v___x_1738_;
goto v_reusejp_1740_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v_a_1736_);
v___x_1741_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1740_;
}
v_reusejp_1740_:
{
return v___x_1741_;
}
}
}
else
{
lean_object* v_a_1744_; lean_object* v___x_1746_; uint8_t v_isShared_1747_; uint8_t v_isSharedCheck_1751_; 
v_a_1744_ = lean_ctor_get(v_x_1734_, 0);
v_isSharedCheck_1751_ = !lean_is_exclusive(v_x_1734_);
if (v_isSharedCheck_1751_ == 0)
{
v___x_1746_ = v_x_1734_;
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
else
{
lean_inc(v_a_1744_);
lean_dec(v_x_1734_);
v___x_1746_ = lean_box(0);
v_isShared_1747_ = v_isSharedCheck_1751_;
goto v_resetjp_1745_;
}
v_resetjp_1745_:
{
lean_object* v___x_1749_; 
if (v_isShared_1747_ == 0)
{
lean_ctor_set_tag(v___x_1746_, 0);
v___x_1749_ = v___x_1746_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1750_; 
v_reuseFailAlloc_1750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1750_, 0, v_a_1744_);
v___x_1749_ = v_reuseFailAlloc_1750_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
return v___x_1749_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg___boxed(lean_object* v_x_1752_, lean_object* v___y_1753_){
_start:
{
lean_object* v_res_1754_; 
v_res_1754_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_x_1752_);
return v_res_1754_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_1755_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__0);
v___x_1757_ = l_Lean_stringToMessageData(v___x_1756_);
return v___x_1757_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1758_; 
v___x_1758_ = lean_mk_string_unchecked("<exception thrown while producing trace node message>", 53, 53);
return v___x_1758_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1759_; lean_object* v___x_1760_; 
v___x_1759_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__2);
v___x_1760_ = l_Lean_stringToMessageData(v___x_1759_);
return v___x_1760_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4(void){
_start:
{
lean_object* v___x_1761_; double v___x_1762_; 
v___x_1761_ = lean_unsigned_to_nat(1000u);
v___x_1762_ = lean_float_of_nat(v___x_1761_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(lean_object* v_cls_1763_, uint8_t v_collapsed_1764_, lean_object* v_tag_1765_, lean_object* v_opts_1766_, uint8_t v_clsEnabled_1767_, lean_object* v_oldTraces_1768_, lean_object* v_msg_1769_, lean_object* v_resStartStop_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_fst_1776_; lean_object* v_snd_1777_; lean_object* v___x_1779_; uint8_t v_isShared_1780_; uint8_t v_isSharedCheck_1875_; 
v_fst_1776_ = lean_ctor_get(v_resStartStop_1770_, 0);
v_snd_1777_ = lean_ctor_get(v_resStartStop_1770_, 1);
v_isSharedCheck_1875_ = !lean_is_exclusive(v_resStartStop_1770_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1779_ = v_resStartStop_1770_;
v_isShared_1780_ = v_isSharedCheck_1875_;
goto v_resetjp_1778_;
}
else
{
lean_inc(v_snd_1777_);
lean_inc(v_fst_1776_);
lean_dec(v_resStartStop_1770_);
v___x_1779_ = lean_box(0);
v_isShared_1780_ = v_isSharedCheck_1875_;
goto v_resetjp_1778_;
}
v_resetjp_1778_:
{
lean_object* v___y_1782_; lean_object* v___y_1783_; lean_object* v_data_1784_; lean_object* v_fst_1795_; lean_object* v_snd_1796_; lean_object* v___x_1798_; uint8_t v_isShared_1799_; uint8_t v_isSharedCheck_1874_; 
v_fst_1795_ = lean_ctor_get(v_snd_1777_, 0);
v_snd_1796_ = lean_ctor_get(v_snd_1777_, 1);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_snd_1777_);
if (v_isSharedCheck_1874_ == 0)
{
v___x_1798_ = v_snd_1777_;
v_isShared_1799_ = v_isSharedCheck_1874_;
goto v_resetjp_1797_;
}
else
{
lean_inc(v_snd_1796_);
lean_inc(v_fst_1795_);
lean_dec(v_snd_1777_);
v___x_1798_ = lean_box(0);
v_isShared_1799_ = v_isSharedCheck_1874_;
goto v_resetjp_1797_;
}
v___jp_1781_:
{
lean_object* v___x_1785_; 
lean_inc(v___y_1783_);
v___x_1785_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__3(v_oldTraces_1768_, v_data_1784_, v___y_1783_, v___y_1782_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v___x_1786_; 
lean_dec_ref(v___x_1785_);
v___x_1786_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_fst_1776_);
return v___x_1786_;
}
else
{
lean_object* v_a_1787_; lean_object* v___x_1789_; uint8_t v_isShared_1790_; uint8_t v_isSharedCheck_1794_; 
lean_dec(v_fst_1776_);
v_a_1787_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1794_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1794_ == 0)
{
v___x_1789_ = v___x_1785_;
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
else
{
lean_inc(v_a_1787_);
lean_dec(v___x_1785_);
v___x_1789_ = lean_box(0);
v_isShared_1790_ = v_isSharedCheck_1794_;
goto v_resetjp_1788_;
}
v_resetjp_1788_:
{
lean_object* v___x_1792_; 
if (v_isShared_1790_ == 0)
{
v___x_1792_ = v___x_1789_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_a_1787_);
v___x_1792_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
return v___x_1792_;
}
}
}
}
v_resetjp_1797_:
{
lean_object* v___x_1800_; uint8_t v___x_1801_; lean_object* v___y_1803_; lean_object* v_a_1804_; uint8_t v___y_1828_; double v___y_1859_; 
v___x_1800_ = l_Lean_trace_profiler;
v___x_1801_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1766_, v___x_1800_);
if (v___x_1801_ == 0)
{
v___y_1828_ = v___x_1801_;
goto v___jp_1827_;
}
else
{
lean_object* v___x_1864_; uint8_t v___x_1865_; 
v___x_1864_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1865_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_opts_1766_, v___x_1864_);
if (v___x_1865_ == 0)
{
lean_object* v___x_1866_; lean_object* v___x_1867_; double v___x_1868_; double v___x_1869_; double v___x_1870_; 
v___x_1866_ = l_Lean_trace_profiler_threshold;
v___x_1867_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1766_, v___x_1866_);
v___x_1868_ = lean_float_of_nat(v___x_1867_);
v___x_1869_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__4);
v___x_1870_ = lean_float_div(v___x_1868_, v___x_1869_);
v___y_1859_ = v___x_1870_;
goto v___jp_1858_;
}
else
{
lean_object* v___x_1871_; lean_object* v___x_1872_; double v___x_1873_; 
v___x_1871_ = l_Lean_trace_profiler_threshold;
v___x_1872_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__5(v_opts_1766_, v___x_1871_);
v___x_1873_ = lean_float_of_nat(v___x_1872_);
v___y_1859_ = v___x_1873_;
goto v___jp_1858_;
}
}
v___jp_1802_:
{
uint8_t v_result_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1810_; 
v_result_1805_ = l_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__2(v_fst_1776_);
v___x_1806_ = l_Lean_TraceResult_toEmoji(v_result_1805_);
v___x_1807_ = l_Lean_stringToMessageData(v___x_1806_);
v___x_1808_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__1);
if (v_isShared_1799_ == 0)
{
lean_ctor_set_tag(v___x_1798_, 7);
lean_ctor_set(v___x_1798_, 1, v___x_1808_);
lean_ctor_set(v___x_1798_, 0, v___x_1807_);
v___x_1810_ = v___x_1798_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v___x_1807_);
lean_ctor_set(v_reuseFailAlloc_1821_, 1, v___x_1808_);
v___x_1810_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
lean_object* v_m_1812_; 
if (v_isShared_1780_ == 0)
{
lean_ctor_set_tag(v___x_1779_, 7);
lean_ctor_set(v___x_1779_, 1, v_a_1804_);
lean_ctor_set(v___x_1779_, 0, v___x_1810_);
v_m_1812_ = v___x_1779_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1810_);
lean_ctor_set(v_reuseFailAlloc_1820_, 1, v_a_1804_);
v_m_1812_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; double v___x_1815_; lean_object* v_data_1816_; 
v___x_1813_ = lean_box(v_result_1805_);
v___x_1814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
v___x_1815_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0);
lean_inc_ref(v_tag_1765_);
lean_inc_ref(v___x_1814_);
lean_inc(v_cls_1763_);
v_data_1816_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1816_, 0, v_cls_1763_);
lean_ctor_set(v_data_1816_, 1, v___x_1814_);
lean_ctor_set(v_data_1816_, 2, v_tag_1765_);
lean_ctor_set_float(v_data_1816_, sizeof(void*)*3, v___x_1815_);
lean_ctor_set_float(v_data_1816_, sizeof(void*)*3 + 8, v___x_1815_);
lean_ctor_set_uint8(v_data_1816_, sizeof(void*)*3 + 16, v_collapsed_1764_);
if (v___x_1801_ == 0)
{
lean_dec_ref(v___x_1814_);
lean_dec(v_snd_1796_);
lean_dec(v_fst_1795_);
lean_dec_ref(v_tag_1765_);
lean_dec(v_cls_1763_);
v___y_1782_ = v_m_1812_;
v___y_1783_ = v___y_1803_;
v_data_1784_ = v_data_1816_;
goto v___jp_1781_;
}
else
{
lean_object* v_data_1817_; double v___x_1818_; double v___x_1819_; 
lean_dec_ref(v_data_1816_);
v_data_1817_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_1817_, 0, v_cls_1763_);
lean_ctor_set(v_data_1817_, 1, v___x_1814_);
lean_ctor_set(v_data_1817_, 2, v_tag_1765_);
v___x_1818_ = lean_unbox_float(v_fst_1795_);
lean_dec(v_fst_1795_);
lean_ctor_set_float(v_data_1817_, sizeof(void*)*3, v___x_1818_);
v___x_1819_ = lean_unbox_float(v_snd_1796_);
lean_dec(v_snd_1796_);
lean_ctor_set_float(v_data_1817_, sizeof(void*)*3 + 8, v___x_1819_);
lean_ctor_set_uint8(v_data_1817_, sizeof(void*)*3 + 16, v_collapsed_1764_);
v___y_1782_ = v_m_1812_;
v___y_1783_ = v___y_1803_;
v_data_1784_ = v_data_1817_;
goto v___jp_1781_;
}
}
}
}
v___jp_1822_:
{
lean_object* v_ref_1823_; lean_object* v___x_1824_; 
v_ref_1823_ = lean_ctor_get(v___y_1773_, 5);
lean_inc(v___y_1774_);
lean_inc_ref(v___y_1773_);
lean_inc(v___y_1772_);
lean_inc_ref(v___y_1771_);
lean_inc(v_fst_1776_);
v___x_1824_ = lean_apply_6(v_msg_1769_, v_fst_1776_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, lean_box(0));
if (lean_obj_tag(v___x_1824_) == 0)
{
lean_object* v_a_1825_; 
v_a_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_a_1825_);
lean_dec_ref(v___x_1824_);
v___y_1803_ = v_ref_1823_;
v_a_1804_ = v_a_1825_;
goto v___jp_1802_;
}
else
{
lean_object* v___x_1826_; 
lean_dec_ref(v___x_1824_);
v___x_1826_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___closed__3);
v___y_1803_ = v_ref_1823_;
v_a_1804_ = v___x_1826_;
goto v___jp_1802_;
}
}
v___jp_1827_:
{
if (v_clsEnabled_1767_ == 0)
{
if (v___y_1828_ == 0)
{
lean_object* v___x_1829_; lean_object* v_traceState_1830_; lean_object* v_env_1831_; lean_object* v_nextMacroScope_1832_; lean_object* v_ngen_1833_; lean_object* v_auxDeclNGen_1834_; lean_object* v_cache_1835_; lean_object* v_messages_1836_; lean_object* v_infoState_1837_; lean_object* v_snapshotTasks_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1857_; 
lean_del_object(v___x_1798_);
lean_dec(v_snd_1796_);
lean_dec(v_fst_1795_);
lean_del_object(v___x_1779_);
lean_dec_ref(v_msg_1769_);
lean_dec_ref(v_tag_1765_);
lean_dec(v_cls_1763_);
v___x_1829_ = lean_st_ref_take(v___y_1774_);
v_traceState_1830_ = lean_ctor_get(v___x_1829_, 4);
v_env_1831_ = lean_ctor_get(v___x_1829_, 0);
v_nextMacroScope_1832_ = lean_ctor_get(v___x_1829_, 1);
v_ngen_1833_ = lean_ctor_get(v___x_1829_, 2);
v_auxDeclNGen_1834_ = lean_ctor_get(v___x_1829_, 3);
v_cache_1835_ = lean_ctor_get(v___x_1829_, 5);
v_messages_1836_ = lean_ctor_get(v___x_1829_, 6);
v_infoState_1837_ = lean_ctor_get(v___x_1829_, 7);
v_snapshotTasks_1838_ = lean_ctor_get(v___x_1829_, 8);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1840_ = v___x_1829_;
v_isShared_1841_ = v_isSharedCheck_1857_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_snapshotTasks_1838_);
lean_inc(v_infoState_1837_);
lean_inc(v_messages_1836_);
lean_inc(v_cache_1835_);
lean_inc(v_traceState_1830_);
lean_inc(v_auxDeclNGen_1834_);
lean_inc(v_ngen_1833_);
lean_inc(v_nextMacroScope_1832_);
lean_inc(v_env_1831_);
lean_dec(v___x_1829_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1857_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
uint64_t v_tid_1842_; lean_object* v_traces_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1856_; 
v_tid_1842_ = lean_ctor_get_uint64(v_traceState_1830_, sizeof(void*)*1);
v_traces_1843_ = lean_ctor_get(v_traceState_1830_, 0);
v_isSharedCheck_1856_ = !lean_is_exclusive(v_traceState_1830_);
if (v_isSharedCheck_1856_ == 0)
{
v___x_1845_ = v_traceState_1830_;
v_isShared_1846_ = v_isSharedCheck_1856_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_traces_1843_);
lean_dec(v_traceState_1830_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1856_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1847_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_1768_, v_traces_1843_);
lean_dec_ref(v_traces_1843_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1847_);
v___x_1849_ = v___x_1845_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1855_; 
v_reuseFailAlloc_1855_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1855_, 0, v___x_1847_);
lean_ctor_set_uint64(v_reuseFailAlloc_1855_, sizeof(void*)*1, v_tid_1842_);
v___x_1849_ = v_reuseFailAlloc_1855_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
lean_object* v___x_1851_; 
if (v_isShared_1841_ == 0)
{
lean_ctor_set(v___x_1840_, 4, v___x_1849_);
v___x_1851_ = v___x_1840_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1854_; 
v_reuseFailAlloc_1854_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1854_, 0, v_env_1831_);
lean_ctor_set(v_reuseFailAlloc_1854_, 1, v_nextMacroScope_1832_);
lean_ctor_set(v_reuseFailAlloc_1854_, 2, v_ngen_1833_);
lean_ctor_set(v_reuseFailAlloc_1854_, 3, v_auxDeclNGen_1834_);
lean_ctor_set(v_reuseFailAlloc_1854_, 4, v___x_1849_);
lean_ctor_set(v_reuseFailAlloc_1854_, 5, v_cache_1835_);
lean_ctor_set(v_reuseFailAlloc_1854_, 6, v_messages_1836_);
lean_ctor_set(v_reuseFailAlloc_1854_, 7, v_infoState_1837_);
lean_ctor_set(v_reuseFailAlloc_1854_, 8, v_snapshotTasks_1838_);
v___x_1851_ = v_reuseFailAlloc_1854_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; 
v___x_1852_ = lean_st_ref_set(v___y_1774_, v___x_1851_);
v___x_1853_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_fst_1776_);
return v___x_1853_;
}
}
}
}
}
else
{
goto v___jp_1822_;
}
}
else
{
goto v___jp_1822_;
}
}
v___jp_1858_:
{
double v___x_1860_; double v___x_1861_; double v___x_1862_; uint8_t v___x_1863_; 
v___x_1860_ = lean_unbox_float(v_snd_1796_);
v___x_1861_ = lean_unbox_float(v_fst_1795_);
v___x_1862_ = lean_float_sub(v___x_1860_, v___x_1861_);
v___x_1863_ = lean_float_decLt(v___y_1859_, v___x_1862_);
v___y_1828_ = v___x_1863_;
goto v___jp_1827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2___boxed(lean_object* v_cls_1876_, lean_object* v_collapsed_1877_, lean_object* v_tag_1878_, lean_object* v_opts_1879_, lean_object* v_clsEnabled_1880_, lean_object* v_oldTraces_1881_, lean_object* v_msg_1882_, lean_object* v_resStartStop_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_){
_start:
{
uint8_t v_collapsed_boxed_1889_; uint8_t v_clsEnabled_boxed_1890_; lean_object* v_res_1891_; 
v_collapsed_boxed_1889_ = lean_unbox(v_collapsed_1877_);
v_clsEnabled_boxed_1890_ = lean_unbox(v_clsEnabled_1880_);
v_res_1891_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v_cls_1876_, v_collapsed_boxed_1889_, v_tag_1878_, v_opts_1879_, v_clsEnabled_boxed_1890_, v_oldTraces_1881_, v_msg_1882_, v_resStartStop_1883_, v___y_1884_, v___y_1885_, v___y_1886_, v___y_1887_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v___y_1885_);
lean_dec_ref(v___y_1884_);
lean_dec_ref(v_opts_1879_);
return v_res_1891_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_toBelow___closed__0(void){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1892_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v___x_1893_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
v___x_1894_ = l_Lean_Name_append(v___x_1893_, v___x_1892_);
return v___x_1894_;
}
}
static double _init_l_Lean_Elab_Structural_toBelow___closed__1(void){
_start:
{
lean_object* v___x_1895_; double v___x_1896_; 
v___x_1895_ = lean_unsigned_to_nat(1000000000u);
v___x_1896_ = lean_float_of_nat(v___x_1895_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow(lean_object* v_below_1897_, lean_object* v_numIndParams_1898_, lean_object* v_positions_1899_, lean_object* v_fnIndex_1900_, lean_object* v_recArg_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_){
_start:
{
lean_object* v_options_1907_; lean_object* v_inheritedTraceOptions_1908_; uint8_t v_hasTrace_1909_; lean_object* v___x_1910_; lean_object* v___f_1911_; 
v_options_1907_ = lean_ctor_get(v_a_1904_, 2);
v_inheritedTraceOptions_1908_ = lean_ctor_get(v_a_1904_, 13);
v_hasTrace_1909_ = lean_ctor_get_uint8(v_options_1907_, sizeof(void*)*1);
v___x_1910_ = l_Lean_instInhabitedExpr;
lean_inc_ref(v_below_1897_);
lean_inc_ref(v_recArg_1901_);
v___f_1911_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1911_, 0, v___x_1910_);
lean_closure_set(v___f_1911_, 1, v_fnIndex_1900_);
lean_closure_set(v___f_1911_, 2, v_recArg_1901_);
lean_closure_set(v___f_1911_, 3, v_below_1897_);
if (v_hasTrace_1909_ == 0)
{
lean_object* v___x_1912_; 
lean_dec_ref(v_recArg_1901_);
v___x_1912_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1897_, v_numIndParams_1898_, v_positions_1899_, v___f_1911_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
return v___x_1912_;
}
else
{
lean_object* v___f_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; uint8_t v___x_1917_; lean_object* v___y_1919_; lean_object* v___y_1920_; lean_object* v_a_1921_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v_a_1937_; 
lean_inc_ref(v_below_1897_);
v___f_1913_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_toBelow___lam__1___boxed), 8, 2);
lean_closure_set(v___f_1913_, 0, v_below_1897_);
lean_closure_set(v___f_1913_, 1, v_recArg_1901_);
v___x_1914_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v___x_1915_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1);
v___x_1916_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___closed__0, &l_Lean_Elab_Structural_toBelow___closed__0_once, _init_l_Lean_Elab_Structural_toBelow___closed__0);
v___x_1917_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1908_, v_options_1907_, v___x_1916_);
if (v___x_1917_ == 0)
{
lean_object* v___x_1990_; uint8_t v___x_1991_; 
v___x_1990_ = l_Lean_trace_profiler;
v___x_1991_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1907_, v___x_1990_);
if (v___x_1991_ == 0)
{
lean_object* v___x_1992_; 
lean_dec_ref(v___f_1913_);
v___x_1992_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1897_, v_numIndParams_1898_, v_positions_1899_, v___f_1911_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
return v___x_1992_;
}
else
{
goto v___jp_1947_;
}
}
else
{
goto v___jp_1947_;
}
v___jp_1918_:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; double v___x_1924_; double v___x_1925_; double v___x_1926_; double v___x_1927_; double v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1922_ = lean_st_ref_get(v_a_1905_);
lean_dec(v___x_1922_);
v___x_1923_ = lean_io_mono_nanos_now();
v___x_1924_ = lean_float_of_nat(v___y_1919_);
v___x_1925_ = lean_float_once(&l_Lean_Elab_Structural_toBelow___closed__1, &l_Lean_Elab_Structural_toBelow___closed__1_once, _init_l_Lean_Elab_Structural_toBelow___closed__1);
v___x_1926_ = lean_float_div(v___x_1924_, v___x_1925_);
v___x_1927_ = lean_float_of_nat(v___x_1923_);
v___x_1928_ = lean_float_div(v___x_1927_, v___x_1925_);
v___x_1929_ = lean_box_float(v___x_1926_);
v___x_1930_ = lean_box_float(v___x_1928_);
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v___x_1929_);
lean_ctor_set(v___x_1931_, 1, v___x_1930_);
v___x_1932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1932_, 0, v_a_1921_);
lean_ctor_set(v___x_1932_, 1, v___x_1931_);
v___x_1933_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1914_, v_hasTrace_1909_, v___x_1915_, v_options_1907_, v___x_1917_, v___y_1920_, v___f_1913_, v___x_1932_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
return v___x_1933_;
}
v___jp_1934_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; double v___x_1940_; double v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1938_ = lean_st_ref_get(v_a_1905_);
lean_dec(v___x_1938_);
v___x_1939_ = lean_io_get_num_heartbeats();
v___x_1940_ = lean_float_of_nat(v___y_1935_);
v___x_1941_ = lean_float_of_nat(v___x_1939_);
v___x_1942_ = lean_box_float(v___x_1940_);
v___x_1943_ = lean_box_float(v___x_1941_);
v___x_1944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1944_, 0, v___x_1942_);
lean_ctor_set(v___x_1944_, 1, v___x_1943_);
v___x_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1945_, 0, v_a_1937_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2(v___x_1914_, v_hasTrace_1909_, v___x_1915_, v_options_1907_, v___x_1917_, v___y_1936_, v___f_1913_, v___x_1945_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
return v___x_1946_;
}
v___jp_1947_:
{
lean_object* v___x_1948_; lean_object* v_a_1949_; lean_object* v___x_1950_; uint8_t v___x_1951_; 
v___x_1948_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00Lean_Elab_Structural_toBelow_spec__0___redArg(v_a_1905_);
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
lean_dec_ref(v___x_1948_);
v___x_1950_ = l_Lean_trace_profiler_useHeartbeats;
v___x_1951_ = l_Lean_Option_get___at___00Lean_Elab_Structural_toBelow_spec__1(v_options_1907_, v___x_1950_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1952_ = lean_st_ref_get(v_a_1905_);
lean_dec(v___x_1952_);
v___x_1953_ = lean_io_mono_nanos_now();
v___x_1954_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1897_, v_numIndParams_1898_, v_positions_1899_, v___f_1911_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
if (lean_obj_tag(v___x_1954_) == 0)
{
lean_object* v_a_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1962_; 
v_a_1955_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1962_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1957_ = v___x_1954_;
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_a_1955_);
lean_dec(v___x_1954_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1962_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1960_; 
if (v_isShared_1958_ == 0)
{
lean_ctor_set_tag(v___x_1957_, 1);
v___x_1960_ = v___x_1957_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_a_1955_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
v___y_1919_ = v___x_1953_;
v___y_1920_ = v_a_1949_;
v_a_1921_ = v___x_1960_;
goto v___jp_1918_;
}
}
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
v_a_1963_ = lean_ctor_get(v___x_1954_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1954_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1954_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1954_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
lean_ctor_set_tag(v___x_1965_, 0);
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
v___y_1919_ = v___x_1953_;
v___y_1920_ = v_a_1949_;
v_a_1921_ = v___x_1968_;
goto v___jp_1918_;
}
}
}
}
else
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1971_ = lean_st_ref_get(v_a_1905_);
lean_dec(v___x_1971_);
v___x_1972_ = lean_io_get_num_heartbeats();
v___x_1973_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg(v_below_1897_, v_numIndParams_1898_, v_positions_1899_, v___f_1911_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_);
if (lean_obj_tag(v___x_1973_) == 0)
{
lean_object* v_a_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1981_; 
v_a_1974_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1976_ = v___x_1973_;
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_a_1974_);
lean_dec(v___x_1973_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1981_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set_tag(v___x_1976_, 1);
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
v___y_1935_ = v___x_1972_;
v___y_1936_ = v_a_1949_;
v_a_1937_ = v___x_1979_;
goto v___jp_1934_;
}
}
}
else
{
lean_object* v_a_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_1989_; 
v_a_1982_ = lean_ctor_get(v___x_1973_, 0);
v_isSharedCheck_1989_ = !lean_is_exclusive(v___x_1973_);
if (v_isSharedCheck_1989_ == 0)
{
v___x_1984_ = v___x_1973_;
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_a_1982_);
lean_dec(v___x_1973_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_1989_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v___x_1987_; 
if (v_isShared_1985_ == 0)
{
lean_ctor_set_tag(v___x_1984_, 0);
v___x_1987_ = v___x_1984_;
goto v_reusejp_1986_;
}
else
{
lean_object* v_reuseFailAlloc_1988_; 
v_reuseFailAlloc_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1988_, 0, v_a_1982_);
v___x_1987_ = v_reuseFailAlloc_1988_;
goto v_reusejp_1986_;
}
v_reusejp_1986_:
{
v___y_1935_ = v___x_1972_;
v___y_1936_ = v_a_1949_;
v_a_1937_ = v___x_1987_;
goto v___jp_1934_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_toBelow___boxed(lean_object* v_below_1993_, lean_object* v_numIndParams_1994_, lean_object* v_positions_1995_, lean_object* v_fnIndex_1996_, lean_object* v_recArg_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_){
_start:
{
lean_object* v_res_2003_; 
v_res_2003_ = l_Lean_Elab_Structural_toBelow(v_below_1993_, v_numIndParams_1994_, v_positions_1995_, v_fnIndex_1996_, v_recArg_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_);
lean_dec(v_a_2001_);
lean_dec_ref(v_a_2000_);
lean_dec(v_a_1999_);
lean_dec_ref(v_a_1998_);
return v_res_2003_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(lean_object* v_00_u03b1_2004_, lean_object* v_x_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___redArg(v_x_2005_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4___boxed(lean_object* v_00_u03b1_2012_, lean_object* v_x_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_){
_start:
{
lean_object* v_res_2019_; 
v_res_2019_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00Lean_Elab_Structural_toBelow_spec__2_spec__4(v_00_u03b1_2012_, v_x_2013_, v___y_2014_, v___y_2015_, v___y_2016_, v___y_2017_);
lean_dec(v___y_2017_);
lean_dec_ref(v___y_2016_);
lean_dec(v___y_2015_);
lean_dec_ref(v___y_2014_);
return v_res_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(lean_object* v_k_2020_, lean_object* v___y_2021_, lean_object* v_b_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_){
_start:
{
lean_object* v___x_2028_; 
lean_inc(v___y_2026_);
lean_inc_ref(v___y_2025_);
lean_inc(v___y_2024_);
lean_inc_ref(v___y_2023_);
lean_inc(v___y_2021_);
v___x_2028_ = lean_apply_7(v_k_2020_, v_b_2022_, v___y_2021_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, lean_box(0));
return v___x_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed(lean_object* v_k_2029_, lean_object* v___y_2030_, lean_object* v_b_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0(v_k_2029_, v___y_2030_, v_b_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_);
lean_dec(v___y_2035_);
lean_dec_ref(v___y_2034_);
lean_dec(v___y_2033_);
lean_dec_ref(v___y_2032_);
lean_dec(v___y_2030_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(lean_object* v_name_2038_, uint8_t v_bi_2039_, lean_object* v_type_2040_, lean_object* v_k_2041_, uint8_t v_kind_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_){
_start:
{
lean_object* v___f_2049_; lean_object* v___x_2050_; 
lean_inc(v___y_2043_);
v___f_2049_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2049_, 0, v_k_2041_);
lean_closure_set(v___f_2049_, 1, v___y_2043_);
v___x_2050_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2038_, v_bi_2039_, v_type_2040_, v___f_2049_, v_kind_2042_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_);
if (lean_obj_tag(v___x_2050_) == 0)
{
return v___x_2050_;
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
v_a_2051_ = lean_ctor_get(v___x_2050_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2050_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2050_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2050_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___boxed(lean_object* v_name_2059_, lean_object* v_bi_2060_, lean_object* v_type_2061_, lean_object* v_k_2062_, lean_object* v_kind_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_){
_start:
{
uint8_t v_bi_boxed_2070_; uint8_t v_kind_boxed_2071_; lean_object* v_res_2072_; 
v_bi_boxed_2070_ = lean_unbox(v_bi_2060_);
v_kind_boxed_2071_ = lean_unbox(v_kind_2063_);
v_res_2072_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_2059_, v_bi_boxed_2070_, v_type_2061_, v_k_2062_, v_kind_boxed_2071_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, v___y_2068_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
return v_res_2072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(lean_object* v_00_u03b1_2073_, lean_object* v_name_2074_, uint8_t v_bi_2075_, lean_object* v_type_2076_, lean_object* v_k_2077_, uint8_t v_kind_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v___x_2085_; 
v___x_2085_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_name_2074_, v_bi_2075_, v_type_2076_, v_k_2077_, v_kind_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___boxed(lean_object* v_00_u03b1_2086_, lean_object* v_name_2087_, lean_object* v_bi_2088_, lean_object* v_type_2089_, lean_object* v_k_2090_, lean_object* v_kind_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_){
_start:
{
uint8_t v_bi_boxed_2098_; uint8_t v_kind_boxed_2099_; lean_object* v_res_2100_; 
v_bi_boxed_2098_ = lean_unbox(v_bi_2088_);
v_kind_boxed_2099_ = lean_unbox(v_kind_2091_);
v_res_2100_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3(v_00_u03b1_2086_, v_name_2087_, v_bi_boxed_2098_, v_type_2089_, v_k_2090_, v_kind_boxed_2099_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_);
lean_dec(v___y_2096_);
lean_dec_ref(v___y_2095_);
lean_dec(v___y_2094_);
lean_dec_ref(v___y_2093_);
lean_dec(v___y_2092_);
return v_res_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0(lean_object* v_k_2101_, lean_object* v___y_2102_, lean_object* v_b_2103_, lean_object* v_c_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_){
_start:
{
lean_object* v___x_2110_; 
lean_inc(v___y_2108_);
lean_inc_ref(v___y_2107_);
lean_inc(v___y_2106_);
lean_inc_ref(v___y_2105_);
lean_inc(v___y_2102_);
v___x_2110_ = lean_apply_8(v_k_2101_, v_b_2103_, v_c_2104_, v___y_2102_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_, lean_box(0));
return v___x_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0___boxed(lean_object* v_k_2111_, lean_object* v___y_2112_, lean_object* v_b_2113_, lean_object* v_c_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_){
_start:
{
lean_object* v_res_2120_; 
v_res_2120_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0(v_k_2111_, v___y_2112_, v_b_2113_, v_c_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_);
lean_dec(v___y_2118_);
lean_dec_ref(v___y_2117_);
lean_dec(v___y_2116_);
lean_dec_ref(v___y_2115_);
lean_dec(v___y_2112_);
return v_res_2120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(lean_object* v_e_2121_, lean_object* v_maxFVars_2122_, lean_object* v_k_2123_, uint8_t v_cleanupAnnotations_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_){
_start:
{
lean_object* v___f_2131_; uint8_t v___x_2132_; uint8_t v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; 
lean_inc(v___y_2125_);
v___f_2131_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2131_, 0, v_k_2123_);
lean_closure_set(v___f_2131_, 1, v___y_2125_);
v___x_2132_ = 1;
v___x_2133_ = 0;
v___x_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2134_, 0, v_maxFVars_2122_);
v___x_2135_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2121_, v___x_2132_, v___x_2133_, v___x_2132_, v___x_2133_, v___x_2134_, v___f_2131_, v_cleanupAnnotations_2124_, v___y_2126_, v___y_2127_, v___y_2128_, v___y_2129_);
lean_dec_ref(v___x_2134_);
if (lean_obj_tag(v___x_2135_) == 0)
{
return v___x_2135_;
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2143_; 
v_a_2136_ = lean_ctor_get(v___x_2135_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2135_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2135_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2135_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v___x_2141_; 
if (v_isShared_2139_ == 0)
{
v___x_2141_ = v___x_2138_;
goto v_reusejp_2140_;
}
else
{
lean_object* v_reuseFailAlloc_2142_; 
v_reuseFailAlloc_2142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2142_, 0, v_a_2136_);
v___x_2141_ = v_reuseFailAlloc_2142_;
goto v_reusejp_2140_;
}
v_reusejp_2140_:
{
return v___x_2141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg___boxed(lean_object* v_e_2144_, lean_object* v_maxFVars_2145_, lean_object* v_k_2146_, lean_object* v_cleanupAnnotations_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2154_; lean_object* v_res_2155_; 
v_cleanupAnnotations_boxed_2154_ = lean_unbox(v_cleanupAnnotations_2147_);
v_res_2155_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_e_2144_, v_maxFVars_2145_, v_k_2146_, v_cleanupAnnotations_boxed_2154_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(lean_object* v_00_u03b1_2156_, lean_object* v_e_2157_, lean_object* v_maxFVars_2158_, lean_object* v_k_2159_, uint8_t v_cleanupAnnotations_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_e_2157_, v_maxFVars_2158_, v_k_2159_, v_cleanupAnnotations_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___boxed(lean_object* v_00_u03b1_2168_, lean_object* v_e_2169_, lean_object* v_maxFVars_2170_, lean_object* v_k_2171_, lean_object* v_cleanupAnnotations_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2179_; lean_object* v_res_2180_; 
v_cleanupAnnotations_boxed_2179_ = lean_unbox(v_cleanupAnnotations_2172_);
v_res_2180_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9(v_00_u03b1_2168_, v_e_2169_, v_maxFVars_2170_, v_k_2171_, v_cleanupAnnotations_boxed_2179_, v___y_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec(v___y_2173_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(lean_object* v___x_2181_, lean_object* v_____do__lift_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v_options_2189_; uint8_t v_hasTrace_2190_; 
v_options_2189_ = lean_ctor_get(v___y_2186_, 2);
v_hasTrace_2190_ = lean_ctor_get_uint8(v_options_2189_, sizeof(void*)*1);
if (v_hasTrace_2190_ == 0)
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
lean_dec(v___x_2181_);
v___x_2191_ = lean_box(v_hasTrace_2190_);
v___x_2192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2191_);
return v___x_2192_;
}
else
{
lean_object* v___x_2193_; lean_object* v___x_2194_; uint8_t v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2193_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
v___x_2194_ = l_Lean_Name_append(v___x_2193_, v___x_2181_);
v___x_2195_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2182_, v_options_2189_, v___x_2194_);
lean_dec(v___x_2194_);
v___x_2196_ = lean_box(v___x_2195_);
v___x_2197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
return v___x_2197_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3___boxed(lean_object* v___x_2198_, lean_object* v_____do__lift_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_){
_start:
{
lean_object* v_res_2206_; 
v_res_2206_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(v___x_2198_, v_____do__lift_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec_ref(v_____do__lift_2199_);
return v_res_2206_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(lean_object* v_msg_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v_ref_2213_; lean_object* v___x_2214_; lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2223_; 
v_ref_2213_ = lean_ctor_get(v___y_2210_, 5);
v___x_2214_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2207_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
v_a_2215_ = lean_ctor_get(v___x_2214_, 0);
v_isSharedCheck_2223_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2223_ == 0)
{
v___x_2217_ = v___x_2214_;
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2214_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2223_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2219_; lean_object* v___x_2221_; 
lean_inc(v_ref_2213_);
v___x_2219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2219_, 0, v_ref_2213_);
lean_ctor_set(v___x_2219_, 1, v_a_2215_);
if (v_isShared_2218_ == 0)
{
lean_ctor_set_tag(v___x_2217_, 1);
lean_ctor_set(v___x_2217_, 0, v___x_2219_);
v___x_2221_ = v___x_2217_;
goto v_reusejp_2220_;
}
else
{
lean_object* v_reuseFailAlloc_2222_; 
v_reuseFailAlloc_2222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2222_, 0, v___x_2219_);
v___x_2221_ = v_reuseFailAlloc_2222_;
goto v_reusejp_2220_;
}
v_reusejp_2220_:
{
return v___x_2221_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg___boxed(lean_object* v_msg_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
lean_object* v_res_2230_; 
v_res_2230_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2224_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
return v_res_2230_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(lean_object* v_x_2231_, lean_object* v_x_2232_){
_start:
{
lean_object* v_fnName_2233_; uint8_t v___x_2234_; 
v_fnName_2233_ = lean_ctor_get(v_x_2232_, 0);
v___x_2234_ = l_Lean_Expr_isConstOf(v_x_2231_, v_fnName_2233_);
return v___x_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed(lean_object* v_x_2235_, lean_object* v_x_2236_){
_start:
{
uint8_t v_res_2237_; lean_object* v_r_2238_; 
v_res_2237_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0(v_x_2235_, v_x_2236_);
lean_dec_ref(v_x_2236_);
lean_dec_ref(v_x_2235_);
v_r_2238_ = lean_box(v_res_2237_);
return v_r_2238_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(lean_object* v_cls_2239_, lean_object* v_msg_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_ref_2246_; lean_object* v___x_2247_; lean_object* v_a_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2292_; 
v_ref_2246_ = lean_ctor_get(v___y_2243_, 5);
v___x_2247_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0_spec__0(v_msg_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
v_a_2248_ = lean_ctor_get(v___x_2247_, 0);
v_isSharedCheck_2292_ = !lean_is_exclusive(v___x_2247_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2250_ = v___x_2247_;
v_isShared_2251_ = v_isSharedCheck_2292_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_a_2248_);
lean_dec(v___x_2247_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2292_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; lean_object* v_traceState_2253_; lean_object* v_env_2254_; lean_object* v_nextMacroScope_2255_; lean_object* v_ngen_2256_; lean_object* v_auxDeclNGen_2257_; lean_object* v_cache_2258_; lean_object* v_messages_2259_; lean_object* v_infoState_2260_; lean_object* v_snapshotTasks_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2291_; 
v___x_2252_ = lean_st_ref_take(v___y_2244_);
v_traceState_2253_ = lean_ctor_get(v___x_2252_, 4);
v_env_2254_ = lean_ctor_get(v___x_2252_, 0);
v_nextMacroScope_2255_ = lean_ctor_get(v___x_2252_, 1);
v_ngen_2256_ = lean_ctor_get(v___x_2252_, 2);
v_auxDeclNGen_2257_ = lean_ctor_get(v___x_2252_, 3);
v_cache_2258_ = lean_ctor_get(v___x_2252_, 5);
v_messages_2259_ = lean_ctor_get(v___x_2252_, 6);
v_infoState_2260_ = lean_ctor_get(v___x_2252_, 7);
v_snapshotTasks_2261_ = lean_ctor_get(v___x_2252_, 8);
v_isSharedCheck_2291_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2291_ == 0)
{
v___x_2263_ = v___x_2252_;
v_isShared_2264_ = v_isSharedCheck_2291_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_snapshotTasks_2261_);
lean_inc(v_infoState_2260_);
lean_inc(v_messages_2259_);
lean_inc(v_cache_2258_);
lean_inc(v_traceState_2253_);
lean_inc(v_auxDeclNGen_2257_);
lean_inc(v_ngen_2256_);
lean_inc(v_nextMacroScope_2255_);
lean_inc(v_env_2254_);
lean_dec(v___x_2252_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2291_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
uint64_t v_tid_2265_; lean_object* v_traces_2266_; lean_object* v___x_2268_; uint8_t v_isShared_2269_; uint8_t v_isSharedCheck_2290_; 
v_tid_2265_ = lean_ctor_get_uint64(v_traceState_2253_, sizeof(void*)*1);
v_traces_2266_ = lean_ctor_get(v_traceState_2253_, 0);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_traceState_2253_);
if (v_isSharedCheck_2290_ == 0)
{
v___x_2268_ = v_traceState_2253_;
v_isShared_2269_ = v_isSharedCheck_2290_;
goto v_resetjp_2267_;
}
else
{
lean_inc(v_traces_2266_);
lean_dec(v_traceState_2253_);
v___x_2268_ = lean_box(0);
v_isShared_2269_ = v_isSharedCheck_2290_;
goto v_resetjp_2267_;
}
v_resetjp_2267_:
{
lean_object* v___x_2270_; double v___x_2271_; uint8_t v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2280_; 
v___x_2270_ = lean_box(0);
v___x_2271_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__0);
v___x_2272_ = 0;
v___x_2273_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__1);
v___x_2274_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2274_, 0, v_cls_2239_);
lean_ctor_set(v___x_2274_, 1, v___x_2270_);
lean_ctor_set(v___x_2274_, 2, v___x_2273_);
lean_ctor_set_float(v___x_2274_, sizeof(void*)*3, v___x_2271_);
lean_ctor_set_float(v___x_2274_, sizeof(void*)*3 + 8, v___x_2271_);
lean_ctor_set_uint8(v___x_2274_, sizeof(void*)*3 + 16, v___x_2272_);
v___x_2275_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2, &l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__0___closed__2);
v___x_2276_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2274_);
lean_ctor_set(v___x_2276_, 1, v_a_2248_);
lean_ctor_set(v___x_2276_, 2, v___x_2275_);
lean_inc(v_ref_2246_);
v___x_2277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2277_, 0, v_ref_2246_);
lean_ctor_set(v___x_2277_, 1, v___x_2276_);
v___x_2278_ = l_Lean_PersistentArray_push___redArg(v_traces_2266_, v___x_2277_);
if (v_isShared_2269_ == 0)
{
lean_ctor_set(v___x_2268_, 0, v___x_2278_);
v___x_2280_ = v___x_2268_;
goto v_reusejp_2279_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v___x_2278_);
lean_ctor_set_uint64(v_reuseFailAlloc_2289_, sizeof(void*)*1, v_tid_2265_);
v___x_2280_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2279_;
}
v_reusejp_2279_:
{
lean_object* v___x_2282_; 
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 4, v___x_2280_);
v___x_2282_ = v___x_2263_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_env_2254_);
lean_ctor_set(v_reuseFailAlloc_2288_, 1, v_nextMacroScope_2255_);
lean_ctor_set(v_reuseFailAlloc_2288_, 2, v_ngen_2256_);
lean_ctor_set(v_reuseFailAlloc_2288_, 3, v_auxDeclNGen_2257_);
lean_ctor_set(v_reuseFailAlloc_2288_, 4, v___x_2280_);
lean_ctor_set(v_reuseFailAlloc_2288_, 5, v_cache_2258_);
lean_ctor_set(v_reuseFailAlloc_2288_, 6, v_messages_2259_);
lean_ctor_set(v_reuseFailAlloc_2288_, 7, v_infoState_2260_);
lean_ctor_set(v_reuseFailAlloc_2288_, 8, v_snapshotTasks_2261_);
v___x_2282_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2286_; 
v___x_2283_ = lean_st_ref_set(v___y_2244_, v___x_2282_);
v___x_2284_ = lean_box(0);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v___x_2284_);
v___x_2286_ = v___x_2250_;
goto v_reusejp_2285_;
}
else
{
lean_object* v_reuseFailAlloc_2287_; 
v_reuseFailAlloc_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2287_, 0, v___x_2284_);
v___x_2286_ = v_reuseFailAlloc_2287_;
goto v_reusejp_2285_;
}
v_reusejp_2285_:
{
return v___x_2286_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg___boxed(lean_object* v_cls_2293_, lean_object* v_msg_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v_cls_2293_, v_msg_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
lean_dec(v___y_2298_);
lean_dec_ref(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec_ref(v___y_2295_);
return v_res_2300_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(lean_object* v_e_2301_, lean_object* v_as_2302_, size_t v_i_2303_, size_t v_stop_2304_){
_start:
{
uint8_t v___x_2305_; 
v___x_2305_ = lean_usize_dec_eq(v_i_2303_, v_stop_2304_);
if (v___x_2305_ == 0)
{
lean_object* v___x_2306_; lean_object* v_fnName_2307_; lean_object* v_recArgPos_2308_; uint8_t v___x_2309_; 
v___x_2306_ = lean_array_uget_borrowed(v_as_2302_, v_i_2303_);
v_fnName_2307_ = lean_ctor_get(v___x_2306_, 0);
v_recArgPos_2308_ = lean_ctor_get(v___x_2306_, 2);
lean_inc(v_recArgPos_2308_);
lean_inc(v_fnName_2307_);
v___x_2309_ = l_Lean_Elab_Structural_recArgHasLooseBVarsAt(v_fnName_2307_, v_recArgPos_2308_, v_e_2301_);
if (v___x_2309_ == 0)
{
size_t v___x_2310_; size_t v___x_2311_; 
v___x_2310_ = ((size_t)1ULL);
v___x_2311_ = lean_usize_add(v_i_2303_, v___x_2310_);
v_i_2303_ = v___x_2311_;
goto _start;
}
else
{
return v___x_2309_;
}
}
else
{
uint8_t v___x_2313_; 
v___x_2313_ = 0;
return v___x_2313_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6___boxed(lean_object* v_e_2314_, lean_object* v_as_2315_, lean_object* v_i_2316_, lean_object* v_stop_2317_){
_start:
{
size_t v_i_boxed_2318_; size_t v_stop_boxed_2319_; uint8_t v_res_2320_; lean_object* v_r_2321_; 
v_i_boxed_2318_ = lean_unbox_usize(v_i_2316_);
lean_dec(v_i_2316_);
v_stop_boxed_2319_ = lean_unbox_usize(v_stop_2317_);
lean_dec(v_stop_2317_);
v_res_2320_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_2314_, v_as_2315_, v_i_boxed_2318_, v_stop_boxed_2319_);
lean_dec_ref(v_as_2315_);
lean_dec_ref(v_e_2314_);
v_r_2321_ = lean_box(v_res_2320_);
return v_r_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(lean_object* v_name_2322_, lean_object* v_type_2323_, lean_object* v_val_2324_, lean_object* v_k_2325_, uint8_t v_nondep_2326_, uint8_t v_kind_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
lean_object* v___f_2334_; lean_object* v___x_2335_; 
lean_inc(v___y_2328_);
v___f_2334_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2334_, 0, v_k_2325_);
lean_closure_set(v___f_2334_, 1, v___y_2328_);
v___x_2335_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2322_, v_type_2323_, v_val_2324_, v___f_2334_, v_nondep_2326_, v_kind_2327_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_);
if (lean_obj_tag(v___x_2335_) == 0)
{
return v___x_2335_;
}
else
{
lean_object* v_a_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2343_; 
v_a_2336_ = lean_ctor_get(v___x_2335_, 0);
v_isSharedCheck_2343_ = !lean_is_exclusive(v___x_2335_);
if (v_isSharedCheck_2343_ == 0)
{
v___x_2338_ = v___x_2335_;
v_isShared_2339_ = v_isSharedCheck_2343_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_a_2336_);
lean_dec(v___x_2335_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg___boxed(lean_object* v_name_2344_, lean_object* v_type_2345_, lean_object* v_val_2346_, lean_object* v_k_2347_, lean_object* v_nondep_2348_, lean_object* v_kind_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
uint8_t v_nondep_boxed_2356_; uint8_t v_kind_boxed_2357_; lean_object* v_res_2358_; 
v_nondep_boxed_2356_ = lean_unbox(v_nondep_2348_);
v_kind_boxed_2357_ = lean_unbox(v_kind_2349_);
v_res_2358_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_2344_, v_type_2345_, v_val_2346_, v_k_2347_, v_nondep_boxed_2356_, v_kind_boxed_2357_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_, v___y_2354_);
lean_dec(v___y_2354_);
lean_dec_ref(v___y_2353_);
lean_dec(v___y_2352_);
lean_dec_ref(v___y_2351_);
lean_dec(v___y_2350_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(lean_object* v_k_2359_, uint8_t v_usedLetOnly_2360_, lean_object* v_x_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_){
_start:
{
lean_object* v___x_2368_; 
lean_inc(v___y_2366_);
lean_inc_ref(v___y_2365_);
lean_inc(v___y_2364_);
lean_inc_ref(v___y_2363_);
lean_inc(v___y_2362_);
lean_inc_ref(v_x_2361_);
v___x_2368_ = lean_apply_7(v_k_2359_, v_x_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, lean_box(0));
if (lean_obj_tag(v___x_2368_) == 0)
{
lean_object* v_a_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; uint8_t v___x_2373_; uint8_t v___x_2374_; lean_object* v___x_2375_; 
v_a_2369_ = lean_ctor_get(v___x_2368_, 0);
lean_inc(v_a_2369_);
lean_dec_ref(v___x_2368_);
v___x_2370_ = lean_unsigned_to_nat(1u);
v___x_2371_ = lean_mk_empty_array_with_capacity(v___x_2370_);
v___x_2372_ = lean_array_push(v___x_2371_, v_x_2361_);
v___x_2373_ = 0;
v___x_2374_ = 1;
v___x_2375_ = l_Lean_Meta_mkLetFVars(v___x_2372_, v_a_2369_, v_usedLetOnly_2360_, v___x_2373_, v___x_2374_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_);
lean_dec_ref(v___x_2372_);
return v___x_2375_;
}
else
{
lean_dec_ref(v_x_2361_);
return v___x_2368_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed(lean_object* v_k_2376_, lean_object* v_usedLetOnly_2377_, lean_object* v_x_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_){
_start:
{
uint8_t v_usedLetOnly_boxed_2385_; lean_object* v_res_2386_; 
v_usedLetOnly_boxed_2385_ = lean_unbox(v_usedLetOnly_2377_);
v_res_2386_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0(v_k_2376_, v_usedLetOnly_boxed_2385_, v_x_2378_, v___y_2379_, v___y_2380_, v___y_2381_, v___y_2382_, v___y_2383_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_dec(v___y_2381_);
lean_dec_ref(v___y_2380_);
lean_dec(v___y_2379_);
return v_res_2386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(lean_object* v_name_2387_, lean_object* v_type_2388_, lean_object* v_val_2389_, lean_object* v_k_2390_, uint8_t v_nondep_2391_, uint8_t v_kind_2392_, uint8_t v_usedLetOnly_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v___x_2400_; lean_object* v___f_2401_; lean_object* v___x_2402_; 
v___x_2400_ = lean_box(v_usedLetOnly_2393_);
v___f_2401_ = lean_alloc_closure((void*)(l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___lam__0___boxed), 9, 2);
lean_closure_set(v___f_2401_, 0, v_k_2390_);
lean_closure_set(v___f_2401_, 1, v___x_2400_);
v___x_2402_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_2387_, v_type_2388_, v_val_2389_, v___f_2401_, v_nondep_2391_, v_kind_2392_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
return v___x_2402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4___boxed(lean_object* v_name_2403_, lean_object* v_type_2404_, lean_object* v_val_2405_, lean_object* v_k_2406_, lean_object* v_nondep_2407_, lean_object* v_kind_2408_, lean_object* v_usedLetOnly_2409_, lean_object* v___y_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_){
_start:
{
uint8_t v_nondep_boxed_2416_; uint8_t v_kind_boxed_2417_; uint8_t v_usedLetOnly_boxed_2418_; lean_object* v_res_2419_; 
v_nondep_boxed_2416_ = lean_unbox(v_nondep_2407_);
v_kind_boxed_2417_ = lean_unbox(v_kind_2408_);
v_usedLetOnly_boxed_2418_ = lean_unbox(v_usedLetOnly_2409_);
v_res_2419_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_name_2403_, v_type_2404_, v_val_2405_, v_k_2406_, v_nondep_boxed_2416_, v_kind_boxed_2417_, v_usedLetOnly_boxed_2418_, v___y_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v___y_2410_);
return v_res_2419_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(lean_object* v_a_2420_, lean_object* v_a_2421_){
_start:
{
if (lean_obj_tag(v_a_2420_) == 0)
{
lean_object* v___x_2422_; 
v___x_2422_ = l_List_reverse___redArg(v_a_2421_);
return v___x_2422_;
}
else
{
lean_object* v_head_2423_; lean_object* v_tail_2424_; lean_object* v___x_2426_; uint8_t v_isShared_2427_; uint8_t v_isSharedCheck_2433_; 
v_head_2423_ = lean_ctor_get(v_a_2420_, 0);
v_tail_2424_ = lean_ctor_get(v_a_2420_, 1);
v_isSharedCheck_2433_ = !lean_is_exclusive(v_a_2420_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2426_ = v_a_2420_;
v_isShared_2427_ = v_isSharedCheck_2433_;
goto v_resetjp_2425_;
}
else
{
lean_inc(v_tail_2424_);
lean_inc(v_head_2423_);
lean_dec(v_a_2420_);
v___x_2426_ = lean_box(0);
v_isShared_2427_ = v_isSharedCheck_2433_;
goto v_resetjp_2425_;
}
v_resetjp_2425_:
{
lean_object* v___x_2428_; lean_object* v___x_2430_; 
v___x_2428_ = l_Lean_MessageData_ofExpr(v_head_2423_);
if (v_isShared_2427_ == 0)
{
lean_ctor_set(v___x_2426_, 1, v_a_2421_);
lean_ctor_set(v___x_2426_, 0, v___x_2428_);
v___x_2430_ = v___x_2426_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v___x_2428_);
lean_ctor_set(v_reuseFailAlloc_2432_, 1, v_a_2421_);
v___x_2430_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
v_a_2420_ = v_tail_2424_;
v_a_2421_ = v___x_2430_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(lean_object* v_msg_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v___x_2441_; lean_object* v_toApplicative_2442_; lean_object* v_toFunctor_2443_; lean_object* v_toSeq_2444_; lean_object* v_toSeqLeft_2445_; lean_object* v_toSeqRight_2446_; lean_object* v___f_2447_; lean_object* v___f_2448_; lean_object* v___f_2449_; lean_object* v___f_2450_; lean_object* v___x_2451_; lean_object* v___f_2452_; lean_object* v___f_2453_; lean_object* v___f_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2457_; lean_object* v_toApplicative_2458_; lean_object* v___x_2460_; uint8_t v_isShared_2461_; uint8_t v_isSharedCheck_2490_; 
v___x_2441_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_2442_ = lean_ctor_get(v___x_2441_, 0);
v_toFunctor_2443_ = lean_ctor_get(v_toApplicative_2442_, 0);
v_toSeq_2444_ = lean_ctor_get(v_toApplicative_2442_, 2);
v_toSeqLeft_2445_ = lean_ctor_get(v_toApplicative_2442_, 3);
v_toSeqRight_2446_ = lean_ctor_get(v_toApplicative_2442_, 4);
v___f_2447_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2);
v___f_2448_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_2443_, 2);
v___f_2449_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2449_, 0, v_toFunctor_2443_);
v___f_2450_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2450_, 0, v_toFunctor_2443_);
v___x_2451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2451_, 0, v___f_2449_);
lean_ctor_set(v___x_2451_, 1, v___f_2450_);
lean_inc(v_toSeqRight_2446_);
v___f_2452_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2452_, 0, v_toSeqRight_2446_);
lean_inc(v_toSeqLeft_2445_);
v___f_2453_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2453_, 0, v_toSeqLeft_2445_);
lean_inc(v_toSeq_2444_);
v___f_2454_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2454_, 0, v_toSeq_2444_);
v___x_2455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2455_, 0, v___x_2451_);
lean_ctor_set(v___x_2455_, 1, v___f_2447_);
lean_ctor_set(v___x_2455_, 2, v___f_2454_);
lean_ctor_set(v___x_2455_, 3, v___f_2453_);
lean_ctor_set(v___x_2455_, 4, v___f_2452_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
lean_ctor_set(v___x_2456_, 1, v___f_2448_);
v___x_2457_ = l_StateRefT_x27_instMonad___redArg(v___x_2456_);
v_toApplicative_2458_ = lean_ctor_get(v___x_2457_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2457_);
if (v_isSharedCheck_2490_ == 0)
{
lean_object* v_unused_2491_; 
v_unused_2491_ = lean_ctor_get(v___x_2457_, 1);
lean_dec(v_unused_2491_);
v___x_2460_ = v___x_2457_;
v_isShared_2461_ = v_isSharedCheck_2490_;
goto v_resetjp_2459_;
}
else
{
lean_inc(v_toApplicative_2458_);
lean_dec(v___x_2457_);
v___x_2460_ = lean_box(0);
v_isShared_2461_ = v_isSharedCheck_2490_;
goto v_resetjp_2459_;
}
v_resetjp_2459_:
{
lean_object* v_toFunctor_2462_; lean_object* v_toSeq_2463_; lean_object* v_toSeqLeft_2464_; lean_object* v_toSeqRight_2465_; lean_object* v___x_2467_; uint8_t v_isShared_2468_; uint8_t v_isSharedCheck_2488_; 
v_toFunctor_2462_ = lean_ctor_get(v_toApplicative_2458_, 0);
v_toSeq_2463_ = lean_ctor_get(v_toApplicative_2458_, 2);
v_toSeqLeft_2464_ = lean_ctor_get(v_toApplicative_2458_, 3);
v_toSeqRight_2465_ = lean_ctor_get(v_toApplicative_2458_, 4);
v_isSharedCheck_2488_ = !lean_is_exclusive(v_toApplicative_2458_);
if (v_isSharedCheck_2488_ == 0)
{
lean_object* v_unused_2489_; 
v_unused_2489_ = lean_ctor_get(v_toApplicative_2458_, 1);
lean_dec(v_unused_2489_);
v___x_2467_ = v_toApplicative_2458_;
v_isShared_2468_ = v_isSharedCheck_2488_;
goto v_resetjp_2466_;
}
else
{
lean_inc(v_toSeqRight_2465_);
lean_inc(v_toSeqLeft_2464_);
lean_inc(v_toSeq_2463_);
lean_inc(v_toFunctor_2462_);
lean_dec(v_toApplicative_2458_);
v___x_2467_ = lean_box(0);
v_isShared_2468_ = v_isSharedCheck_2488_;
goto v_resetjp_2466_;
}
v_resetjp_2466_:
{
lean_object* v___f_2469_; lean_object* v___f_2470_; lean_object* v___f_2471_; lean_object* v___f_2472_; lean_object* v___x_2473_; lean_object* v___f_2474_; lean_object* v___f_2475_; lean_object* v___f_2476_; lean_object* v___x_2478_; 
v___f_2469_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4);
v___f_2470_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5);
lean_inc_ref(v_toFunctor_2462_);
v___f_2471_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2471_, 0, v_toFunctor_2462_);
v___f_2472_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2472_, 0, v_toFunctor_2462_);
v___x_2473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___f_2471_);
lean_ctor_set(v___x_2473_, 1, v___f_2472_);
v___f_2474_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2474_, 0, v_toSeqRight_2465_);
v___f_2475_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2475_, 0, v_toSeqLeft_2464_);
v___f_2476_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2476_, 0, v_toSeq_2463_);
if (v_isShared_2468_ == 0)
{
lean_ctor_set(v___x_2467_, 4, v___f_2474_);
lean_ctor_set(v___x_2467_, 3, v___f_2475_);
lean_ctor_set(v___x_2467_, 2, v___f_2476_);
lean_ctor_set(v___x_2467_, 1, v___f_2469_);
lean_ctor_set(v___x_2467_, 0, v___x_2473_);
v___x_2478_ = v___x_2467_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2473_);
lean_ctor_set(v_reuseFailAlloc_2487_, 1, v___f_2469_);
lean_ctor_set(v_reuseFailAlloc_2487_, 2, v___f_2476_);
lean_ctor_set(v_reuseFailAlloc_2487_, 3, v___f_2475_);
lean_ctor_set(v_reuseFailAlloc_2487_, 4, v___f_2474_);
v___x_2478_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
lean_object* v___x_2480_; 
if (v_isShared_2461_ == 0)
{
lean_ctor_set(v___x_2460_, 1, v___f_2470_);
lean_ctor_set(v___x_2460_, 0, v___x_2478_);
v___x_2480_ = v___x_2460_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v___x_2478_);
lean_ctor_set(v_reuseFailAlloc_2486_, 1, v___f_2470_);
v___x_2480_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_27618__overap_2484_; lean_object* v___x_2485_; 
v___x_2481_ = l_StateRefT_x27_instMonad___redArg(v___x_2480_);
v___x_2482_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_2483_ = l_instInhabitedOfMonad___redArg(v___x_2481_, v___x_2482_);
v___x_27618__overap_2484_ = lean_panic_fn_borrowed(v___x_2483_, v_msg_2434_);
lean_dec(v___x_2483_);
lean_inc(v___y_2439_);
lean_inc_ref(v___y_2438_);
lean_inc(v___y_2437_);
lean_inc_ref(v___y_2436_);
lean_inc(v___y_2435_);
v___x_2485_ = lean_apply_6(v___x_27618__overap_2484_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_, v___y_2439_, lean_box(0));
return v___x_2485_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7___boxed(lean_object* v_msg_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_){
_start:
{
lean_object* v_res_2499_; 
v_res_2499_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v_msg_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec(v___y_2493_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(lean_object* v_ref_2500_, lean_object* v_msg_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v_fileName_2508_; lean_object* v_fileMap_2509_; lean_object* v_options_2510_; lean_object* v_currRecDepth_2511_; lean_object* v_maxRecDepth_2512_; lean_object* v_ref_2513_; lean_object* v_currNamespace_2514_; lean_object* v_openDecls_2515_; lean_object* v_initHeartbeats_2516_; lean_object* v_maxHeartbeats_2517_; lean_object* v_quotContext_2518_; lean_object* v_currMacroScope_2519_; uint8_t v_diag_2520_; lean_object* v_cancelTk_x3f_2521_; uint8_t v_suppressElabErrors_2522_; lean_object* v_inheritedTraceOptions_2523_; lean_object* v_ref_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v_fileName_2508_ = lean_ctor_get(v___y_2505_, 0);
v_fileMap_2509_ = lean_ctor_get(v___y_2505_, 1);
v_options_2510_ = lean_ctor_get(v___y_2505_, 2);
v_currRecDepth_2511_ = lean_ctor_get(v___y_2505_, 3);
v_maxRecDepth_2512_ = lean_ctor_get(v___y_2505_, 4);
v_ref_2513_ = lean_ctor_get(v___y_2505_, 5);
v_currNamespace_2514_ = lean_ctor_get(v___y_2505_, 6);
v_openDecls_2515_ = lean_ctor_get(v___y_2505_, 7);
v_initHeartbeats_2516_ = lean_ctor_get(v___y_2505_, 8);
v_maxHeartbeats_2517_ = lean_ctor_get(v___y_2505_, 9);
v_quotContext_2518_ = lean_ctor_get(v___y_2505_, 10);
v_currMacroScope_2519_ = lean_ctor_get(v___y_2505_, 11);
v_diag_2520_ = lean_ctor_get_uint8(v___y_2505_, sizeof(void*)*14);
v_cancelTk_x3f_2521_ = lean_ctor_get(v___y_2505_, 12);
v_suppressElabErrors_2522_ = lean_ctor_get_uint8(v___y_2505_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2523_ = lean_ctor_get(v___y_2505_, 13);
v_ref_2524_ = l_Lean_replaceRef(v_ref_2500_, v_ref_2513_);
lean_inc_ref(v_inheritedTraceOptions_2523_);
lean_inc(v_cancelTk_x3f_2521_);
lean_inc(v_currMacroScope_2519_);
lean_inc(v_quotContext_2518_);
lean_inc(v_maxHeartbeats_2517_);
lean_inc(v_initHeartbeats_2516_);
lean_inc(v_openDecls_2515_);
lean_inc(v_currNamespace_2514_);
lean_inc(v_maxRecDepth_2512_);
lean_inc(v_currRecDepth_2511_);
lean_inc_ref(v_options_2510_);
lean_inc_ref(v_fileMap_2509_);
lean_inc_ref(v_fileName_2508_);
v___x_2525_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2525_, 0, v_fileName_2508_);
lean_ctor_set(v___x_2525_, 1, v_fileMap_2509_);
lean_ctor_set(v___x_2525_, 2, v_options_2510_);
lean_ctor_set(v___x_2525_, 3, v_currRecDepth_2511_);
lean_ctor_set(v___x_2525_, 4, v_maxRecDepth_2512_);
lean_ctor_set(v___x_2525_, 5, v_ref_2524_);
lean_ctor_set(v___x_2525_, 6, v_currNamespace_2514_);
lean_ctor_set(v___x_2525_, 7, v_openDecls_2515_);
lean_ctor_set(v___x_2525_, 8, v_initHeartbeats_2516_);
lean_ctor_set(v___x_2525_, 9, v_maxHeartbeats_2517_);
lean_ctor_set(v___x_2525_, 10, v_quotContext_2518_);
lean_ctor_set(v___x_2525_, 11, v_currMacroScope_2519_);
lean_ctor_set(v___x_2525_, 12, v_cancelTk_x3f_2521_);
lean_ctor_set(v___x_2525_, 13, v_inheritedTraceOptions_2523_);
lean_ctor_set_uint8(v___x_2525_, sizeof(void*)*14, v_diag_2520_);
lean_ctor_set_uint8(v___x_2525_, sizeof(void*)*14 + 1, v_suppressElabErrors_2522_);
v___x_2526_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_2501_, v___y_2503_, v___y_2504_, v___x_2525_, v___y_2506_);
lean_dec_ref(v___x_2525_);
return v___x_2526_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg___boxed(lean_object* v_ref_2527_, lean_object* v_msg_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v_res_2535_; 
v_res_2535_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(v_ref_2527_, v_msg_2528_, v___y_2529_, v___y_2530_, v___y_2531_, v___y_2532_, v___y_2533_);
lean_dec(v___y_2533_);
lean_dec_ref(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec(v___y_2529_);
lean_dec(v_ref_2527_);
return v_res_2535_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0(void){
_start:
{
lean_object* v___x_2536_; 
v___x_2536_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2536_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1(void){
_start:
{
lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2537_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__0);
v___x_2538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
return v___x_2538_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2539_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1);
v___x_2540_ = lean_unsigned_to_nat(0u);
v___x_2541_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2541_, 0, v___x_2540_);
lean_ctor_set(v___x_2541_, 1, v___x_2540_);
lean_ctor_set(v___x_2541_, 2, v___x_2540_);
lean_ctor_set(v___x_2541_, 3, v___x_2540_);
lean_ctor_set(v___x_2541_, 4, v___x_2539_);
lean_ctor_set(v___x_2541_, 5, v___x_2539_);
lean_ctor_set(v___x_2541_, 6, v___x_2539_);
lean_ctor_set(v___x_2541_, 7, v___x_2539_);
lean_ctor_set(v___x_2541_, 8, v___x_2539_);
lean_ctor_set(v___x_2541_, 9, v___x_2539_);
return v___x_2541_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2542_ = lean_unsigned_to_nat(32u);
v___x_2543_ = lean_mk_empty_array_with_capacity(v___x_2542_);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4(void){
_start:
{
size_t v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; 
v___x_2545_ = ((size_t)5ULL);
v___x_2546_ = lean_unsigned_to_nat(0u);
v___x_2547_ = lean_unsigned_to_nat(32u);
v___x_2548_ = lean_mk_empty_array_with_capacity(v___x_2547_);
v___x_2549_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__3);
v___x_2550_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
lean_ctor_set(v___x_2550_, 1, v___x_2548_);
lean_ctor_set(v___x_2550_, 2, v___x_2546_);
lean_ctor_set(v___x_2550_, 3, v___x_2546_);
lean_ctor_set_usize(v___x_2550_, 4, v___x_2545_);
return v___x_2550_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5(void){
_start:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2551_ = lean_box(1);
v___x_2552_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__4);
v___x_2553_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__1);
v___x_2554_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2553_);
lean_ctor_set(v___x_2554_, 1, v___x_2552_);
lean_ctor_set(v___x_2554_, 2, v___x_2551_);
return v___x_2554_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6(void){
_start:
{
lean_object* v___x_2555_; 
v___x_2555_ = lean_mk_string_unchecked("A private declaration `", 23, 23);
return v___x_2555_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7(void){
_start:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__6);
v___x_2557_ = l_Lean_stringToMessageData(v___x_2556_);
return v___x_2557_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8(void){
_start:
{
lean_object* v___x_2558_; 
v___x_2558_ = lean_mk_string_unchecked("` (from the current module) exists but would need to be public to access here.", 78, 78);
return v___x_2558_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__8);
v___x_2560_ = l_Lean_stringToMessageData(v___x_2559_);
return v___x_2560_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10(void){
_start:
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_mk_string_unchecked("A public declaration `", 22, 22);
return v___x_2561_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11(void){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__10);
v___x_2563_ = l_Lean_stringToMessageData(v___x_2562_);
return v___x_2563_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12(void){
_start:
{
lean_object* v___x_2564_; 
v___x_2564_ = lean_mk_string_unchecked("` exists but is imported privately; consider adding `public import ", 67, 67);
return v___x_2564_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__12);
v___x_2566_ = l_Lean_stringToMessageData(v___x_2565_);
return v___x_2566_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14(void){
_start:
{
lean_object* v___x_2567_; 
v___x_2567_ = lean_mk_string_unchecked("`.", 2, 2);
return v___x_2567_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15(void){
_start:
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2568_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__14);
v___x_2569_ = l_Lean_stringToMessageData(v___x_2568_);
return v___x_2569_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16(void){
_start:
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_mk_string_unchecked("` (from `", 9, 9);
return v___x_2570_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17(void){
_start:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2571_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__16);
v___x_2572_ = l_Lean_stringToMessageData(v___x_2571_);
return v___x_2572_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18(void){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = lean_mk_string_unchecked("`) exists but would need to be public to access here.", 53, 53);
return v___x_2573_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2574_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__18);
v___x_2575_ = l_Lean_stringToMessageData(v___x_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(lean_object* v_msg_2576_, lean_object* v_declHint_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v___x_2580_; lean_object* v_env_2581_; uint8_t v___x_2582_; 
v___x_2580_ = lean_st_ref_get(v___y_2578_);
v_env_2581_ = lean_ctor_get(v___x_2580_, 0);
lean_inc_ref(v_env_2581_);
lean_dec(v___x_2580_);
v___x_2582_ = l_Lean_Name_isAnonymous(v_declHint_2577_);
if (v___x_2582_ == 0)
{
uint8_t v_isExporting_2583_; 
v_isExporting_2583_ = lean_ctor_get_uint8(v_env_2581_, sizeof(void*)*8);
if (v_isExporting_2583_ == 0)
{
lean_object* v___x_2584_; 
lean_dec_ref(v_env_2581_);
lean_dec(v_declHint_2577_);
v___x_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2584_, 0, v_msg_2576_);
return v___x_2584_;
}
else
{
lean_object* v___x_2585_; uint8_t v___x_2586_; 
lean_inc_ref(v_env_2581_);
v___x_2585_ = l_Lean_Environment_setExporting(v_env_2581_, v___x_2582_);
lean_inc(v_declHint_2577_);
lean_inc_ref(v___x_2585_);
v___x_2586_ = l_Lean_Environment_contains(v___x_2585_, v_declHint_2577_, v_isExporting_2583_);
if (v___x_2586_ == 0)
{
lean_object* v___x_2587_; 
lean_dec_ref(v___x_2585_);
lean_dec_ref(v_env_2581_);
lean_dec(v_declHint_2577_);
v___x_2587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2587_, 0, v_msg_2576_);
return v___x_2587_;
}
else
{
lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v_c_2593_; lean_object* v___x_2594_; 
v___x_2588_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__2);
v___x_2589_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__5);
v___x_2590_ = l_Lean_Options_empty;
v___x_2591_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2585_);
lean_ctor_set(v___x_2591_, 1, v___x_2588_);
lean_ctor_set(v___x_2591_, 2, v___x_2589_);
lean_ctor_set(v___x_2591_, 3, v___x_2590_);
lean_inc(v_declHint_2577_);
v___x_2592_ = l_Lean_MessageData_ofConstName(v_declHint_2577_, v___x_2582_);
v_c_2593_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_2593_, 0, v___x_2591_);
lean_ctor_set(v_c_2593_, 1, v___x_2592_);
v___x_2594_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2581_, v_declHint_2577_);
if (lean_obj_tag(v___x_2594_) == 0)
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_dec_ref(v_env_2581_);
lean_dec(v_declHint_2577_);
v___x_2595_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7);
v___x_2596_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2596_, 0, v___x_2595_);
lean_ctor_set(v___x_2596_, 1, v_c_2593_);
v___x_2597_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__9);
v___x_2598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2598_, 0, v___x_2596_);
lean_ctor_set(v___x_2598_, 1, v___x_2597_);
v___x_2599_ = l_Lean_MessageData_note(v___x_2598_);
v___x_2600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2600_, 0, v_msg_2576_);
lean_ctor_set(v___x_2600_, 1, v___x_2599_);
v___x_2601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
return v___x_2601_;
}
else
{
lean_object* v_val_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2637_; 
v_val_2602_ = lean_ctor_get(v___x_2594_, 0);
v_isSharedCheck_2637_ = !lean_is_exclusive(v___x_2594_);
if (v_isSharedCheck_2637_ == 0)
{
v___x_2604_ = v___x_2594_;
v_isShared_2605_ = v_isSharedCheck_2637_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_val_2602_);
lean_dec(v___x_2594_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2637_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v_mod_2609_; uint8_t v___x_2610_; 
v___x_2606_ = lean_box(0);
v___x_2607_ = l_Lean_Environment_header(v_env_2581_);
lean_dec_ref(v_env_2581_);
v___x_2608_ = l_Lean_EnvironmentHeader_moduleNames(v___x_2607_);
v_mod_2609_ = lean_array_get(v___x_2606_, v___x_2608_, v_val_2602_);
lean_dec(v_val_2602_);
lean_dec_ref(v___x_2608_);
v___x_2610_ = l_Lean_isPrivateName(v_declHint_2577_);
lean_dec(v_declHint_2577_);
if (v___x_2610_ == 0)
{
lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2622_; 
v___x_2611_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__11);
v___x_2612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2611_);
lean_ctor_set(v___x_2612_, 1, v_c_2593_);
v___x_2613_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__13);
v___x_2614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2612_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = l_Lean_MessageData_ofName(v_mod_2609_);
v___x_2616_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2614_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__15);
v___x_2618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2616_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = l_Lean_MessageData_note(v___x_2618_);
v___x_2620_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2620_, 0, v_msg_2576_);
lean_ctor_set(v___x_2620_, 1, v___x_2619_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set_tag(v___x_2604_, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2620_);
v___x_2622_ = v___x_2604_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2620_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
else
{
lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2635_; 
v___x_2624_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__7);
v___x_2625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
lean_ctor_set(v___x_2625_, 1, v_c_2593_);
v___x_2626_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__17);
v___x_2627_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2627_, 0, v___x_2625_);
lean_ctor_set(v___x_2627_, 1, v___x_2626_);
v___x_2628_ = l_Lean_MessageData_ofName(v_mod_2609_);
v___x_2629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2627_);
lean_ctor_set(v___x_2629_, 1, v___x_2628_);
v___x_2630_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___closed__19);
v___x_2631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2631_, 0, v___x_2629_);
lean_ctor_set(v___x_2631_, 1, v___x_2630_);
v___x_2632_ = l_Lean_MessageData_note(v___x_2631_);
v___x_2633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2633_, 0, v_msg_2576_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set_tag(v___x_2604_, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2633_);
v___x_2635_ = v___x_2604_;
goto v_reusejp_2634_;
}
else
{
lean_object* v_reuseFailAlloc_2636_; 
v_reuseFailAlloc_2636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2636_, 0, v___x_2633_);
v___x_2635_ = v_reuseFailAlloc_2636_;
goto v_reusejp_2634_;
}
v_reusejp_2634_:
{
return v___x_2635_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2638_; 
lean_dec_ref(v_env_2581_);
lean_dec(v_declHint_2577_);
v___x_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2638_, 0, v_msg_2576_);
return v___x_2638_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg___boxed(lean_object* v_msg_2639_, lean_object* v_declHint_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v_res_2643_; 
v_res_2643_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(v_msg_2639_, v_declHint_2640_, v___y_2641_);
lean_dec(v___y_2641_);
return v_res_2643_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(lean_object* v_msg_2644_, lean_object* v_declHint_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_){
_start:
{
lean_object* v___x_2652_; lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2662_; 
v___x_2652_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(v_msg_2644_, v_declHint_2645_, v___y_2650_);
v_a_2653_ = lean_ctor_get(v___x_2652_, 0);
v_isSharedCheck_2662_ = !lean_is_exclusive(v___x_2652_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2655_ = v___x_2652_;
v_isShared_2656_ = v_isSharedCheck_2662_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2652_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2662_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2660_; 
v___x_2657_ = l_Lean_unknownIdentifierMessageTag;
v___x_2658_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
lean_ctor_set(v___x_2658_, 1, v_a_2653_);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 0, v___x_2658_);
v___x_2660_ = v___x_2655_;
goto v_reusejp_2659_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v___x_2658_);
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
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18___boxed(lean_object* v_msg_2663_, lean_object* v_declHint_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_){
_start:
{
lean_object* v_res_2671_; 
v_res_2671_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(v_msg_2663_, v_declHint_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(lean_object* v_ref_2672_, lean_object* v_msg_2673_, lean_object* v_declHint_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v___x_2681_; lean_object* v_a_2682_; lean_object* v___x_2683_; 
v___x_2681_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18(v_msg_2673_, v_declHint_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
v_a_2682_ = lean_ctor_get(v___x_2681_, 0);
lean_inc(v_a_2682_);
lean_dec_ref(v___x_2681_);
v___x_2683_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(v_ref_2672_, v_a_2682_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_, v___y_2679_);
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg___boxed(lean_object* v_ref_2684_, lean_object* v_msg_2685_, lean_object* v_declHint_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_){
_start:
{
lean_object* v_res_2693_; 
v_res_2693_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(v_ref_2684_, v_msg_2685_, v_declHint_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_);
lean_dec(v___y_2691_);
lean_dec_ref(v___y_2690_);
lean_dec(v___y_2689_);
lean_dec_ref(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec(v_ref_2684_);
return v_res_2693_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_2694_; 
v___x_2694_ = lean_mk_string_unchecked("Unknown constant `", 18, 18);
return v___x_2694_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; 
v___x_2695_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__0);
v___x_2696_ = l_Lean_stringToMessageData(v___x_2695_);
return v___x_2696_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2(void){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_2697_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2698_; lean_object* v___x_2699_; 
v___x_2698_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__2);
v___x_2699_ = l_Lean_stringToMessageData(v___x_2698_);
return v___x_2699_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(lean_object* v_ref_2700_, lean_object* v_constName_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2708_; uint8_t v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; 
v___x_2708_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__1);
v___x_2709_ = 0;
lean_inc(v_constName_2701_);
v___x_2710_ = l_Lean_MessageData_ofConstName(v_constName_2701_, v___x_2709_);
v___x_2711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2708_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___closed__3);
v___x_2713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2713_, 0, v___x_2711_);
lean_ctor_set(v___x_2713_, 1, v___x_2712_);
v___x_2714_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(v_ref_2700_, v___x_2713_, v_constName_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
return v___x_2714_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg___boxed(lean_object* v_ref_2715_, lean_object* v_constName_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_, lean_object* v___y_2722_){
_start:
{
lean_object* v_res_2723_; 
v_res_2723_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(v_ref_2715_, v_constName_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
lean_dec(v___y_2721_);
lean_dec_ref(v___y_2720_);
lean_dec(v___y_2719_);
lean_dec_ref(v___y_2718_);
lean_dec(v___y_2717_);
lean_dec(v_ref_2715_);
return v_res_2723_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(lean_object* v_constName_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_){
_start:
{
lean_object* v_ref_2731_; lean_object* v___x_2732_; 
v_ref_2731_ = lean_ctor_get(v___y_2728_, 5);
v___x_2732_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(v_ref_2731_, v_constName_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_, v___y_2729_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg___boxed(lean_object* v_constName_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(v_constName_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v___y_2736_);
lean_dec_ref(v___y_2735_);
lean_dec(v___y_2734_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(lean_object* v_constName_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v___x_2748_; lean_object* v_env_2749_; uint8_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2748_ = lean_st_ref_get(v___y_2746_);
v_env_2749_ = lean_ctor_get(v___x_2748_, 0);
lean_inc_ref(v_env_2749_);
lean_dec(v___x_2748_);
v___x_2750_ = 0;
lean_inc(v_constName_2741_);
v___x_2751_ = l_Lean_Environment_find_x3f(v_env_2749_, v_constName_2741_, v___x_2750_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v___x_2752_; 
v___x_2752_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(v_constName_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_);
return v___x_2752_;
}
else
{
lean_object* v_val_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2760_; 
lean_dec(v_constName_2741_);
v_val_2753_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2760_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2760_ == 0)
{
v___x_2755_ = v___x_2751_;
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
else
{
lean_inc(v_val_2753_);
lean_dec(v___x_2751_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2760_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2758_; 
if (v_isShared_2756_ == 0)
{
lean_ctor_set_tag(v___x_2755_, 0);
v___x_2758_ = v___x_2755_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_val_2753_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6___boxed(lean_object* v_constName_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_constName_2761_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v___y_2764_);
lean_dec_ref(v___y_2763_);
lean_dec(v___y_2762_);
return v_res_2768_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = lean_mk_string_unchecked("Lean.Meta.Match.MatcherApp.Basic", 32, 32);
return v___x_2769_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1(void){
_start:
{
lean_object* v___x_2770_; 
v___x_2770_ = lean_mk_string_unchecked("Lean.Meta.matchMatcherApp\?", 26, 26);
return v___x_2770_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2(void){
_start:
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_mk_string_unchecked("expected constructor", 20, 20);
return v___x_2771_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3(void){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; 
v___x_2772_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__2);
v___x_2773_ = lean_unsigned_to_nat(53u);
v___x_2774_ = lean_unsigned_to_nat(62u);
v___x_2775_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__1);
v___x_2776_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__0);
v___x_2777_ = l_mkPanicMessageWithDecl(v___x_2776_, v___x_2775_, v___x_2774_, v___x_2773_, v___x_2772_);
return v___x_2777_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(size_t v_sz_2778_, size_t v_i_2779_, lean_object* v_bs_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_){
_start:
{
uint8_t v___x_2787_; 
v___x_2787_ = lean_usize_dec_lt(v_i_2779_, v_sz_2778_);
if (v___x_2787_ == 0)
{
lean_object* v___x_2788_; 
v___x_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2788_, 0, v_bs_2780_);
return v___x_2788_;
}
else
{
lean_object* v_v_2789_; lean_object* v___x_2790_; 
v_v_2789_ = lean_array_uget_borrowed(v_bs_2780_, v_i_2779_);
lean_inc(v_v_2789_);
v___x_2790_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_v_2789_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_);
if (lean_obj_tag(v___x_2790_) == 0)
{
lean_object* v_a_2791_; lean_object* v___x_2792_; lean_object* v_bs_x27_2793_; lean_object* v_a_2795_; 
v_a_2791_ = lean_ctor_get(v___x_2790_, 0);
lean_inc(v_a_2791_);
lean_dec_ref(v___x_2790_);
v___x_2792_ = lean_unsigned_to_nat(0u);
v_bs_x27_2793_ = lean_array_uset(v_bs_2780_, v_i_2779_, v___x_2792_);
if (lean_obj_tag(v_a_2791_) == 6)
{
lean_object* v_val_2800_; lean_object* v_numFields_2801_; uint8_t v___x_2802_; lean_object* v___x_2803_; 
v_val_2800_ = lean_ctor_get(v_a_2791_, 0);
lean_inc_ref(v_val_2800_);
lean_dec_ref(v_a_2791_);
v_numFields_2801_ = lean_ctor_get(v_val_2800_, 4);
lean_inc(v_numFields_2801_);
lean_dec_ref(v_val_2800_);
v___x_2802_ = 0;
v___x_2803_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_2803_, 0, v_numFields_2801_);
lean_ctor_set(v___x_2803_, 1, v___x_2792_);
lean_ctor_set_uint8(v___x_2803_, sizeof(void*)*2, v___x_2802_);
v_a_2795_ = v___x_2803_;
goto v___jp_2794_;
}
else
{
lean_object* v___x_2804_; lean_object* v___x_2805_; 
lean_dec(v_a_2791_);
v___x_2804_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___closed__3);
v___x_2805_ = l_panic___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__7(v___x_2804_, v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref(v___x_2805_);
v_a_2795_ = v_a_2806_;
goto v___jp_2794_;
}
else
{
lean_object* v_a_2807_; lean_object* v___x_2809_; uint8_t v_isShared_2810_; uint8_t v_isSharedCheck_2814_; 
lean_dec_ref(v_bs_x27_2793_);
v_a_2807_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2814_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2814_ == 0)
{
v___x_2809_ = v___x_2805_;
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
else
{
lean_inc(v_a_2807_);
lean_dec(v___x_2805_);
v___x_2809_ = lean_box(0);
v_isShared_2810_ = v_isSharedCheck_2814_;
goto v_resetjp_2808_;
}
v_resetjp_2808_:
{
lean_object* v___x_2812_; 
if (v_isShared_2810_ == 0)
{
v___x_2812_ = v___x_2809_;
goto v_reusejp_2811_;
}
else
{
lean_object* v_reuseFailAlloc_2813_; 
v_reuseFailAlloc_2813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2813_, 0, v_a_2807_);
v___x_2812_ = v_reuseFailAlloc_2813_;
goto v_reusejp_2811_;
}
v_reusejp_2811_:
{
return v___x_2812_;
}
}
}
}
v___jp_2794_:
{
size_t v___x_2796_; size_t v___x_2797_; lean_object* v___x_2798_; 
v___x_2796_ = ((size_t)1ULL);
v___x_2797_ = lean_usize_add(v_i_2779_, v___x_2796_);
v___x_2798_ = lean_array_uset(v_bs_x27_2793_, v_i_2779_, v_a_2795_);
v_i_2779_ = v___x_2797_;
v_bs_2780_ = v___x_2798_;
goto _start;
}
}
else
{
lean_object* v_a_2815_; lean_object* v___x_2817_; uint8_t v_isShared_2818_; uint8_t v_isSharedCheck_2822_; 
lean_dec_ref(v_bs_2780_);
v_a_2815_ = lean_ctor_get(v___x_2790_, 0);
v_isSharedCheck_2822_ = !lean_is_exclusive(v___x_2790_);
if (v_isSharedCheck_2822_ == 0)
{
v___x_2817_ = v___x_2790_;
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
else
{
lean_inc(v_a_2815_);
lean_dec(v___x_2790_);
v___x_2817_ = lean_box(0);
v_isShared_2818_ = v_isSharedCheck_2822_;
goto v_resetjp_2816_;
}
v_resetjp_2816_:
{
lean_object* v___x_2820_; 
if (v_isShared_2818_ == 0)
{
v___x_2820_ = v___x_2817_;
goto v_reusejp_2819_;
}
else
{
lean_object* v_reuseFailAlloc_2821_; 
v_reuseFailAlloc_2821_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2821_, 0, v_a_2815_);
v___x_2820_ = v_reuseFailAlloc_2821_;
goto v_reusejp_2819_;
}
v_reusejp_2819_:
{
return v___x_2820_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9___boxed(lean_object* v_sz_2823_, lean_object* v_i_2824_, lean_object* v_bs_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
size_t v_sz_boxed_2832_; size_t v_i_boxed_2833_; lean_object* v_res_2834_; 
v_sz_boxed_2832_ = lean_unbox_usize(v_sz_2823_);
lean_dec(v_sz_2823_);
v_i_boxed_2833_ = lean_unbox_usize(v_i_2824_);
lean_dec(v_i_2824_);
v_res_2834_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(v_sz_boxed_2832_, v_i_boxed_2833_, v_bs_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_dec(v___y_2826_);
return v_res_2834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(lean_object* v_declName_2835_, lean_object* v___y_2836_){
_start:
{
lean_object* v___x_2838_; lean_object* v_env_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2838_ = lean_st_ref_get(v___y_2836_);
v_env_2839_ = lean_ctor_get(v___x_2838_, 0);
lean_inc_ref(v_env_2839_);
lean_dec(v___x_2838_);
v___x_2840_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2839_, v_declName_2835_);
v___x_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2840_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg___boxed(lean_object* v_declName_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_){
_start:
{
lean_object* v_res_2845_; 
v_res_2845_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2842_, v___y_2843_);
lean_dec(v___y_2843_);
return v_res_2845_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0(void){
_start:
{
lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2846_ = lean_box(0);
v___x_2847_ = lean_unsigned_to_nat(16u);
v___x_2848_ = lean_mk_array(v___x_2847_, v___x_2846_);
return v___x_2848_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1(void){
_start:
{
lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2849_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__0);
v___x_2850_ = lean_unsigned_to_nat(0u);
v___x_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
lean_ctor_set(v___x_2851_, 1, v___x_2849_);
return v___x_2851_;
}
}
static lean_object* _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2(void){
_start:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; 
v___x_2852_ = lean_unsigned_to_nat(0u);
v___x_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2853_, 0, v___x_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(lean_object* v_e_2854_, uint8_t v_alsoCasesOn_2855_, lean_object* v___y_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_){
_start:
{
uint8_t v___x_2865_; 
v___x_2865_ = l_Lean_Expr_isApp(v_e_2854_);
if (v___x_2865_ == 0)
{
lean_object* v___x_2866_; lean_object* v___x_2867_; 
lean_dec_ref(v_e_2854_);
v___x_2866_ = lean_box(0);
v___x_2867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2867_, 0, v___x_2866_);
return v___x_2867_;
}
else
{
lean_object* v___x_2868_; 
v___x_2868_ = l_Lean_Expr_getAppFn(v_e_2854_);
if (lean_obj_tag(v___x_2868_) == 4)
{
lean_object* v_declName_2869_; lean_object* v_us_2870_; lean_object* v___x_2871_; lean_object* v_a_2872_; lean_object* v___x_2874_; uint8_t v_isShared_2875_; uint8_t v_isSharedCheck_3026_; 
v_declName_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc_n(v_declName_2869_, 2);
v_us_2870_ = lean_ctor_get(v___x_2868_, 1);
lean_inc(v_us_2870_);
lean_dec_ref(v___x_2868_);
v___x_2871_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_2869_, v___y_2860_);
v_a_2872_ = lean_ctor_get(v___x_2871_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_2871_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_2874_ = v___x_2871_;
v_isShared_2875_ = v_isSharedCheck_3026_;
goto v_resetjp_2873_;
}
else
{
lean_inc(v_a_2872_);
lean_dec(v___x_2871_);
v___x_2874_ = lean_box(0);
v_isShared_2875_ = v_isSharedCheck_3026_;
goto v_resetjp_2873_;
}
v_resetjp_2873_:
{
if (lean_obj_tag(v_a_2872_) == 1)
{
lean_object* v_val_2876_; lean_object* v___x_2878_; uint8_t v_isShared_2879_; uint8_t v_isSharedCheck_2918_; 
v_val_2876_ = lean_ctor_get(v_a_2872_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v_a_2872_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2878_ = v_a_2872_;
v_isShared_2879_ = v_isSharedCheck_2918_;
goto v_resetjp_2877_;
}
else
{
lean_inc(v_val_2876_);
lean_dec(v_a_2872_);
v___x_2878_ = lean_box(0);
v_isShared_2879_ = v_isSharedCheck_2918_;
goto v_resetjp_2877_;
}
v_resetjp_2877_:
{
lean_object* v_dummy_2880_; lean_object* v_nargs_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v_args_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; uint8_t v___x_2888_; 
v_dummy_2880_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0);
v_nargs_2881_ = l_Lean_Expr_getAppNumArgs(v_e_2854_);
lean_inc(v_nargs_2881_);
v___x_2882_ = lean_mk_array(v_nargs_2881_, v_dummy_2880_);
v___x_2883_ = lean_unsigned_to_nat(1u);
v___x_2884_ = lean_nat_sub(v_nargs_2881_, v___x_2883_);
lean_dec(v_nargs_2881_);
v_args_2885_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2854_, v___x_2882_, v___x_2884_);
v___x_2886_ = lean_array_get_size(v_args_2885_);
v___x_2887_ = l_Lean_Meta_Match_MatcherInfo_arity(v_val_2876_);
v___x_2888_ = lean_nat_dec_lt(v___x_2886_, v___x_2887_);
lean_dec(v___x_2887_);
if (v___x_2888_ == 0)
{
lean_object* v_numParams_2889_; lean_object* v_numDiscrs_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2909_; 
v_numParams_2889_ = lean_ctor_get(v_val_2876_, 0);
v_numDiscrs_2890_ = lean_ctor_get(v_val_2876_, 1);
v___x_2891_ = lean_array_mk(v_us_2870_);
v___x_2892_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2889_);
v___x_2893_ = l_Array_extract___redArg(v_args_2885_, v___x_2892_, v_numParams_2889_);
v___x_2894_ = l_Lean_instInhabitedExpr;
v___x_2895_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_2876_);
v___x_2896_ = lean_array_get(v___x_2894_, v_args_2885_, v___x_2895_);
lean_dec(v___x_2895_);
v___x_2897_ = lean_nat_add(v_numParams_2889_, v___x_2883_);
v___x_2898_ = lean_nat_add(v___x_2897_, v_numDiscrs_2890_);
lean_inc(v___x_2898_);
lean_inc_ref_n(v_args_2885_, 2);
v___x_2899_ = l_Array_toSubarray___redArg(v_args_2885_, v___x_2897_, v___x_2898_);
v___x_2900_ = l_Subarray_copy___redArg(v___x_2899_);
v___x_2901_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_2876_);
v___x_2902_ = lean_nat_add(v___x_2898_, v___x_2901_);
lean_dec(v___x_2901_);
lean_inc(v___x_2902_);
v___x_2903_ = l_Array_toSubarray___redArg(v_args_2885_, v___x_2898_, v___x_2902_);
v___x_2904_ = l_Subarray_copy___redArg(v___x_2903_);
v___x_2905_ = l_Array_toSubarray___redArg(v_args_2885_, v___x_2902_, v___x_2886_);
v___x_2906_ = l_Subarray_copy___redArg(v___x_2905_);
v___x_2907_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2907_, 0, v_val_2876_);
lean_ctor_set(v___x_2907_, 1, v_declName_2869_);
lean_ctor_set(v___x_2907_, 2, v___x_2891_);
lean_ctor_set(v___x_2907_, 3, v___x_2893_);
lean_ctor_set(v___x_2907_, 4, v___x_2896_);
lean_ctor_set(v___x_2907_, 5, v___x_2900_);
lean_ctor_set(v___x_2907_, 6, v___x_2904_);
lean_ctor_set(v___x_2907_, 7, v___x_2906_);
if (v_isShared_2879_ == 0)
{
lean_ctor_set(v___x_2878_, 0, v___x_2907_);
v___x_2909_ = v___x_2878_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2913_; 
v_reuseFailAlloc_2913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2913_, 0, v___x_2907_);
v___x_2909_ = v_reuseFailAlloc_2913_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
lean_object* v___x_2911_; 
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v___x_2909_);
v___x_2911_ = v___x_2874_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v___x_2909_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
else
{
lean_object* v___x_2914_; lean_object* v___x_2916_; 
lean_dec_ref(v_args_2885_);
lean_del_object(v___x_2878_);
lean_dec(v_val_2876_);
lean_dec(v_us_2870_);
lean_dec(v_declName_2869_);
v___x_2914_ = lean_box(0);
if (v_isShared_2875_ == 0)
{
lean_ctor_set(v___x_2874_, 0, v___x_2914_);
v___x_2916_ = v___x_2874_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v___x_2914_);
v___x_2916_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
return v___x_2916_;
}
}
}
}
else
{
lean_object* v___x_2919_; 
lean_del_object(v___x_2874_);
lean_dec(v_a_2872_);
v___x_2919_ = lean_st_ref_get(v___y_2860_);
if (v_alsoCasesOn_2855_ == 0)
{
lean_dec(v___x_2919_);
lean_dec(v_us_2870_);
lean_dec(v_declName_2869_);
lean_dec_ref(v_e_2854_);
goto v___jp_2862_;
}
else
{
lean_object* v_env_2920_; uint8_t v___x_2921_; 
v_env_2920_ = lean_ctor_get(v___x_2919_, 0);
lean_inc_ref(v_env_2920_);
lean_dec(v___x_2919_);
lean_inc(v_declName_2869_);
v___x_2921_ = l_Lean_isCasesOnRecursor(v_env_2920_, v_declName_2869_);
if (v___x_2921_ == 0)
{
lean_dec(v_us_2870_);
lean_dec(v_declName_2869_);
lean_dec_ref(v_e_2854_);
goto v___jp_2862_;
}
else
{
lean_object* v_indName_2922_; lean_object* v___x_2923_; 
v_indName_2922_ = l_Lean_Name_getPrefix(v_declName_2869_);
v___x_2923_ = l_Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6(v_indName_2922_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_3017_; 
v_a_2924_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_2926_ = v___x_2923_;
v_isShared_2927_ = v_isSharedCheck_3017_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___x_2923_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_3017_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
if (lean_obj_tag(v_a_2924_) == 5)
{
lean_object* v_val_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_3012_; 
v_val_2928_ = lean_ctor_get(v_a_2924_, 0);
v_isSharedCheck_3012_ = !lean_is_exclusive(v_a_2924_);
if (v_isSharedCheck_3012_ == 0)
{
v___x_2930_ = v_a_2924_;
v_isShared_2931_ = v_isSharedCheck_3012_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_val_2928_);
lean_dec(v_a_2924_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_3012_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v_toConstantVal_2932_; lean_object* v_numParams_2933_; lean_object* v_numIndices_2934_; lean_object* v_ctors_2935_; lean_object* v_nargs_2936_; lean_object* v_dummy_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v_args_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; uint8_t v___x_2948_; 
v_toConstantVal_2932_ = lean_ctor_get(v_val_2928_, 0);
lean_inc_ref(v_toConstantVal_2932_);
v_numParams_2933_ = lean_ctor_get(v_val_2928_, 1);
lean_inc(v_numParams_2933_);
v_numIndices_2934_ = lean_ctor_get(v_val_2928_, 2);
lean_inc(v_numIndices_2934_);
v_ctors_2935_ = lean_ctor_get(v_val_2928_, 4);
lean_inc(v_ctors_2935_);
v_nargs_2936_ = l_Lean_Expr_getAppNumArgs(v_e_2854_);
v_dummy_2937_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0);
lean_inc(v_nargs_2936_);
v___x_2938_ = lean_mk_array(v_nargs_2936_, v_dummy_2937_);
v___x_2939_ = lean_unsigned_to_nat(1u);
v___x_2940_ = lean_nat_sub(v_nargs_2936_, v___x_2939_);
lean_dec(v_nargs_2936_);
v_args_2941_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2854_, v___x_2938_, v___x_2940_);
v___x_2942_ = lean_nat_add(v_numParams_2933_, v___x_2939_);
v___x_2943_ = lean_nat_add(v___x_2942_, v_numIndices_2934_);
v___x_2944_ = lean_nat_add(v___x_2943_, v___x_2939_);
lean_dec(v___x_2943_);
v___x_2945_ = l_Lean_InductiveVal_numCtors(v_val_2928_);
lean_dec_ref(v_val_2928_);
v___x_2946_ = lean_nat_add(v___x_2944_, v___x_2945_);
lean_dec(v___x_2945_);
v___x_2947_ = lean_array_get_size(v_args_2941_);
v___x_2948_ = lean_nat_dec_le(v___x_2946_, v___x_2947_);
if (v___x_2948_ == 0)
{
lean_object* v___x_2949_; lean_object* v___x_2951_; 
lean_dec(v___x_2946_);
lean_dec(v___x_2944_);
lean_dec(v___x_2942_);
lean_dec_ref(v_args_2941_);
lean_dec(v_ctors_2935_);
lean_dec(v_numIndices_2934_);
lean_dec(v_numParams_2933_);
lean_dec_ref(v_toConstantVal_2932_);
lean_del_object(v___x_2930_);
lean_dec(v_us_2870_);
lean_dec(v_declName_2869_);
v___x_2949_ = lean_box(0);
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 0, v___x_2949_);
v___x_2951_ = v___x_2926_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v___x_2949_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
else
{
lean_object* v___x_2953_; lean_object* v_params_2954_; lean_object* v___x_2955_; lean_object* v_motive_2956_; lean_object* v_discrs_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v_discrInfos_2960_; lean_object* v_alts_2961_; lean_object* v___y_2963_; lean_object* v___y_2964_; lean_object* v_lower_3003_; lean_object* v_upper_3004_; uint8_t v___x_3011_; 
lean_del_object(v___x_2926_);
v___x_2953_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_2933_);
lean_inc_ref_n(v_args_2941_, 3);
v_params_2954_ = l_Array_toSubarray___redArg(v_args_2941_, v___x_2953_, v_numParams_2933_);
v___x_2955_ = l_Lean_instInhabitedExpr;
v_motive_2956_ = lean_array_get(v___x_2955_, v_args_2941_, v_numParams_2933_);
lean_dec(v_numParams_2933_);
lean_inc(v___x_2944_);
v_discrs_2957_ = l_Array_toSubarray___redArg(v_args_2941_, v___x_2942_, v___x_2944_);
v___x_2958_ = lean_nat_add(v_numIndices_2934_, v___x_2939_);
lean_dec(v_numIndices_2934_);
v___x_2959_ = lean_box(0);
v_discrInfos_2960_ = lean_mk_array(v___x_2958_, v___x_2959_);
lean_inc(v___x_2946_);
v_alts_2961_ = l_Array_toSubarray___redArg(v_args_2941_, v___x_2944_, v___x_2946_);
v___x_3011_ = lean_nat_dec_le(v___x_2946_, v___x_2953_);
if (v___x_3011_ == 0)
{
v_lower_3003_ = v___x_2946_;
v_upper_3004_ = v___x_2947_;
goto v___jp_3002_;
}
else
{
lean_dec(v___x_2946_);
v_lower_3003_ = v___x_2953_;
v_upper_3004_ = v___x_2947_;
goto v___jp_3002_;
}
v___jp_2962_:
{
lean_object* v___x_2965_; size_t v_sz_2966_; size_t v___x_2967_; lean_object* v___x_2968_; 
v___x_2965_ = lean_array_mk(v_ctors_2935_);
v_sz_2966_ = lean_array_size(v___x_2965_);
v___x_2967_ = ((size_t)0ULL);
v___x_2968_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__9(v_sz_2966_, v___x_2967_, v___x_2965_, v___y_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_);
if (lean_obj_tag(v___x_2968_) == 0)
{
lean_object* v_a_2969_; lean_object* v___x_2971_; uint8_t v_isShared_2972_; uint8_t v_isSharedCheck_2993_; 
v_a_2969_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2971_ = v___x_2968_;
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
else
{
lean_inc(v_a_2969_);
lean_dec(v___x_2968_);
v___x_2971_ = lean_box(0);
v_isShared_2972_ = v_isSharedCheck_2993_;
goto v_resetjp_2970_;
}
v_resetjp_2970_:
{
lean_object* v_start_2973_; lean_object* v_stop_2974_; lean_object* v_start_2975_; lean_object* v_stop_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; lean_object* v___x_2988_; 
v_start_2973_ = lean_ctor_get(v_params_2954_, 1);
lean_inc(v_start_2973_);
v_stop_2974_ = lean_ctor_get(v_params_2954_, 2);
lean_inc(v_stop_2974_);
v_start_2975_ = lean_ctor_get(v_discrs_2957_, 1);
lean_inc(v_start_2975_);
v_stop_2976_ = lean_ctor_get(v_discrs_2957_, 2);
lean_inc(v_stop_2976_);
v___x_2977_ = lean_nat_sub(v_stop_2974_, v_start_2973_);
lean_dec(v_start_2973_);
lean_dec(v_stop_2974_);
v___x_2978_ = lean_nat_sub(v_stop_2976_, v_start_2975_);
lean_dec(v_start_2975_);
lean_dec(v_stop_2976_);
v___x_2979_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__1);
v___x_2980_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2977_);
lean_ctor_set(v___x_2980_, 1, v___x_2978_);
lean_ctor_set(v___x_2980_, 2, v_a_2969_);
lean_ctor_set(v___x_2980_, 3, v___y_2964_);
lean_ctor_set(v___x_2980_, 4, v_discrInfos_2960_);
lean_ctor_set(v___x_2980_, 5, v___x_2979_);
v___x_2981_ = lean_array_mk(v_us_2870_);
v___x_2982_ = l_Subarray_copy___redArg(v_params_2954_);
v___x_2983_ = l_Subarray_copy___redArg(v_discrs_2957_);
v___x_2984_ = l_Subarray_copy___redArg(v_alts_2961_);
v___x_2985_ = l_Subarray_copy___redArg(v___y_2963_);
v___x_2986_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2986_, 0, v___x_2980_);
lean_ctor_set(v___x_2986_, 1, v_declName_2869_);
lean_ctor_set(v___x_2986_, 2, v___x_2981_);
lean_ctor_set(v___x_2986_, 3, v___x_2982_);
lean_ctor_set(v___x_2986_, 4, v_motive_2956_);
lean_ctor_set(v___x_2986_, 5, v___x_2983_);
lean_ctor_set(v___x_2986_, 6, v___x_2984_);
lean_ctor_set(v___x_2986_, 7, v___x_2985_);
if (v_isShared_2931_ == 0)
{
lean_ctor_set_tag(v___x_2930_, 1);
lean_ctor_set(v___x_2930_, 0, v___x_2986_);
v___x_2988_ = v___x_2930_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2986_);
v___x_2988_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
lean_object* v___x_2990_; 
if (v_isShared_2972_ == 0)
{
lean_ctor_set(v___x_2971_, 0, v___x_2988_);
v___x_2990_ = v___x_2971_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2988_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
}
else
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3001_; 
lean_dec(v___y_2964_);
lean_dec_ref(v___y_2963_);
lean_dec_ref(v_alts_2961_);
lean_dec_ref(v_discrInfos_2960_);
lean_dec_ref(v_discrs_2957_);
lean_dec(v_motive_2956_);
lean_dec_ref(v_params_2954_);
lean_del_object(v___x_2930_);
lean_dec(v_us_2870_);
lean_dec(v_declName_2869_);
v_a_2994_ = lean_ctor_get(v___x_2968_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2968_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2996_ = v___x_2968_;
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2968_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2999_; 
if (v_isShared_2997_ == 0)
{
v___x_2999_ = v___x_2996_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v_a_2994_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
}
}
v___jp_3002_:
{
lean_object* v_levelParams_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; uint8_t v___x_3009_; 
v_levelParams_3005_ = lean_ctor_get(v_toConstantVal_2932_, 1);
lean_inc(v_levelParams_3005_);
lean_dec_ref(v_toConstantVal_2932_);
v___x_3006_ = l_Array_toSubarray___redArg(v_args_2941_, v_lower_3003_, v_upper_3004_);
v___x_3007_ = l_List_lengthTR___redArg(v_levelParams_3005_);
lean_dec(v_levelParams_3005_);
v___x_3008_ = l_List_lengthTR___redArg(v_us_2870_);
v___x_3009_ = lean_nat_dec_eq(v___x_3007_, v___x_3008_);
lean_dec(v___x_3008_);
lean_dec(v___x_3007_);
if (v___x_3009_ == 0)
{
lean_object* v___x_3010_; 
v___x_3010_ = lean_obj_once(&l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2, &l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2_once, _init_l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___closed__2);
v___y_2963_ = v___x_3006_;
v___y_2964_ = v___x_3010_;
goto v___jp_2962_;
}
else
{
v___y_2963_ = v___x_3006_;
v___y_2964_ = v___x_2959_;
goto v___jp_2962_;
}
}
}
}
}
else
{
lean_object* v___x_3013_; lean_object* v___x_3015_; 
lean_dec(v_a_2924_);
lean_dec(v_us_2870_);
lean_dec(v_declName_2869_);
lean_dec_ref(v_e_2854_);
v___x_3013_ = lean_box(0);
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 0, v___x_3013_);
v___x_3015_ = v___x_2926_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
else
{
lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3025_; 
lean_dec(v_us_2870_);
lean_dec(v_declName_2869_);
lean_dec_ref(v_e_2854_);
v_a_3018_ = lean_ctor_get(v___x_2923_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v___x_2923_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3020_ = v___x_2923_;
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v___x_2923_);
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
}
}
}
}
}
else
{
lean_dec_ref(v___x_2868_);
lean_dec_ref(v_e_2854_);
goto v___jp_2862_;
}
}
v___jp_2862_:
{
lean_object* v___x_2863_; lean_object* v___x_2864_; 
v___x_2863_ = lean_box(0);
v___x_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2864_, 0, v___x_2863_);
return v___x_2864_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5___boxed(lean_object* v_e_3027_, lean_object* v_alsoCasesOn_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_){
_start:
{
uint8_t v_alsoCasesOn_boxed_3035_; lean_object* v_res_3036_; 
v_alsoCasesOn_boxed_3035_ = lean_unbox(v_alsoCasesOn_3028_);
v_res_3036_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_3027_, v_alsoCasesOn_boxed_3035_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_, v___y_3033_);
lean_dec(v___y_3033_);
lean_dec_ref(v___y_3032_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec(v___y_3029_);
return v_res_3036_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(lean_object* v_recArgInfos_3037_, lean_object* v_positions_3038_, lean_object* v_recFnNames_3039_, lean_object* v_containsRecFn_3040_, lean_object* v_below_3041_, size_t v_sz_3042_, size_t v_i_3043_, lean_object* v_bs_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
uint8_t v___x_3051_; 
v___x_3051_ = lean_usize_dec_lt(v_i_3043_, v_sz_3042_);
if (v___x_3051_ == 0)
{
lean_object* v___x_3052_; 
lean_dec_ref(v_below_3041_);
lean_dec_ref(v_containsRecFn_3040_);
lean_dec_ref(v_recFnNames_3039_);
lean_dec_ref(v_positions_3038_);
lean_dec_ref(v_recArgInfos_3037_);
v___x_3052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3052_, 0, v_bs_3044_);
return v___x_3052_;
}
else
{
lean_object* v_v_3053_; lean_object* v___x_3054_; 
v_v_3053_ = lean_array_uget_borrowed(v_bs_3044_, v_i_3043_);
lean_inc_ref(v___y_3048_);
lean_inc(v_v_3053_);
lean_inc_ref(v_below_3041_);
lean_inc_ref(v_containsRecFn_3040_);
lean_inc_ref(v_recFnNames_3039_);
lean_inc_ref(v_positions_3038_);
lean_inc_ref(v_recArgInfos_3037_);
v___x_3054_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3037_, v_positions_3038_, v_recFnNames_3039_, v_containsRecFn_3040_, v_below_3041_, v_v_3053_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_);
if (lean_obj_tag(v___x_3054_) == 0)
{
lean_object* v_a_3055_; lean_object* v___x_3056_; lean_object* v_bs_x27_3057_; size_t v___x_3058_; size_t v___x_3059_; lean_object* v___x_3060_; 
v_a_3055_ = lean_ctor_get(v___x_3054_, 0);
lean_inc(v_a_3055_);
lean_dec_ref(v___x_3054_);
v___x_3056_ = lean_unsigned_to_nat(0u);
v_bs_x27_3057_ = lean_array_uset(v_bs_3044_, v_i_3043_, v___x_3056_);
v___x_3058_ = ((size_t)1ULL);
v___x_3059_ = lean_usize_add(v_i_3043_, v___x_3058_);
v___x_3060_ = lean_array_uset(v_bs_x27_3057_, v_i_3043_, v_a_3055_);
v_i_3043_ = v___x_3059_;
v_bs_3044_ = v___x_3060_;
goto _start;
}
else
{
lean_object* v_a_3062_; lean_object* v___x_3064_; uint8_t v_isShared_3065_; uint8_t v_isSharedCheck_3069_; 
lean_dec_ref(v_bs_3044_);
lean_dec_ref(v_below_3041_);
lean_dec_ref(v_containsRecFn_3040_);
lean_dec_ref(v_recFnNames_3039_);
lean_dec_ref(v_positions_3038_);
lean_dec_ref(v_recArgInfos_3037_);
v_a_3062_ = lean_ctor_get(v___x_3054_, 0);
v_isSharedCheck_3069_ = !lean_is_exclusive(v___x_3054_);
if (v_isSharedCheck_3069_ == 0)
{
v___x_3064_ = v___x_3054_;
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
else
{
lean_inc(v_a_3062_);
lean_dec(v___x_3054_);
v___x_3064_ = lean_box(0);
v_isShared_3065_ = v_isSharedCheck_3069_;
goto v_resetjp_3063_;
}
v_resetjp_3063_:
{
lean_object* v___x_3067_; 
if (v_isShared_3065_ == 0)
{
v___x_3067_ = v___x_3064_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_a_3062_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
return v___x_3067_;
}
}
}
}
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3070_; 
v___x_3070_ = lean_mk_string_unchecked("insufficient number of parameters at recursive application ", 59, 59);
return v___x_3070_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3071_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__0);
v___x_3072_ = l_Lean_stringToMessageData(v___x_3071_);
return v___x_3072_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2(void){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_mk_string_unchecked("failed to eliminate recursive application", 41, 41);
return v___x_3073_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3074_; lean_object* v___x_3075_; 
v___x_3074_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__2);
v___x_3075_ = l_Lean_stringToMessageData(v___x_3074_);
return v___x_3075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(lean_object* v_recArgInfos_3076_, lean_object* v_positions_3077_, lean_object* v_recFnNames_3078_, lean_object* v_containsRecFn_3079_, lean_object* v_below_3080_, lean_object* v_e_3081_, lean_object* v_x_3082_, lean_object* v_x_3083_, lean_object* v_x_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_, lean_object* v___y_3089_){
_start:
{
if (lean_obj_tag(v_x_3082_) == 5)
{
lean_object* v_fn_3091_; lean_object* v_arg_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v_fn_3091_ = lean_ctor_get(v_x_3082_, 0);
lean_inc_ref(v_fn_3091_);
v_arg_3092_ = lean_ctor_get(v_x_3082_, 1);
lean_inc_ref(v_arg_3092_);
lean_dec_ref(v_x_3082_);
v___x_3093_ = lean_array_set(v_x_3083_, v_x_3084_, v_arg_3092_);
v___x_3094_ = lean_unsigned_to_nat(1u);
v___x_3095_ = lean_nat_sub(v_x_3084_, v___x_3094_);
lean_dec(v_x_3084_);
v_x_3082_ = v_fn_3091_;
v_x_3083_ = v___x_3093_;
v_x_3084_ = v___x_3095_;
goto _start;
}
else
{
lean_object* v___f_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; 
lean_dec(v_x_3084_);
lean_inc_ref(v_x_3082_);
v___f_3097_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3097_, 0, v_x_3082_);
v___x_3098_ = lean_unsigned_to_nat(0u);
v___x_3099_ = l___private_Init_Data_Array_Basic_0__Array_findFinIdx_x3f_loop(lean_box(0), v___f_3097_, v_recArgInfos_3076_, v___x_3098_);
if (lean_obj_tag(v___x_3099_) == 1)
{
lean_object* v_val_3100_; lean_object* v___x_3101_; lean_object* v___y_3103_; lean_object* v_recArgPos_3129_; lean_object* v_indGroupInst_3130_; lean_object* v___x_3131_; uint8_t v___x_3132_; 
lean_dec_ref(v_x_3082_);
v_val_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_val_3100_);
lean_dec_ref(v___x_3099_);
v___x_3101_ = lean_array_fget_borrowed(v_recArgInfos_3076_, v_val_3100_);
v_recArgPos_3129_ = lean_ctor_get(v___x_3101_, 2);
v_indGroupInst_3130_ = lean_ctor_get(v___x_3101_, 4);
v___x_3131_ = lean_array_get_size(v_x_3083_);
v___x_3132_ = lean_nat_dec_lt(v_recArgPos_3129_, v___x_3131_);
if (v___x_3132_ == 0)
{
lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; 
lean_dec(v_val_3100_);
lean_dec_ref(v_x_3083_);
lean_dec_ref(v_below_3080_);
lean_dec_ref(v_containsRecFn_3079_);
lean_dec_ref(v_recFnNames_3078_);
lean_dec_ref(v_positions_3077_);
lean_dec_ref(v_recArgInfos_3076_);
v___x_3133_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__1);
v___x_3134_ = l_Lean_indentExpr(v_e_3081_);
v___x_3135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3133_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3135_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
return v___x_3136_;
}
else
{
lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3137_ = lean_array_fget_borrowed(v_x_3083_, v_recArgPos_3129_);
lean_inc_ref(v___y_3088_);
lean_inc(v___x_3137_);
lean_inc_ref(v_below_3080_);
lean_inc_ref(v_containsRecFn_3079_);
lean_inc_ref(v_recFnNames_3078_);
lean_inc_ref(v_positions_3077_);
lean_inc_ref(v_recArgInfos_3076_);
v___x_3138_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3076_, v_positions_3077_, v_recFnNames_3078_, v_containsRecFn_3079_, v_below_3080_, v___x_3137_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
if (lean_obj_tag(v___x_3138_) == 0)
{
lean_object* v_a_3139_; lean_object* v_params_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; 
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
lean_inc(v_a_3139_);
lean_dec_ref(v___x_3138_);
v_params_3140_ = lean_ctor_get(v_indGroupInst_3130_, 2);
v___x_3141_ = lean_array_get_size(v_params_3140_);
lean_inc_ref(v_positions_3077_);
lean_inc_ref(v_below_3080_);
v___x_3142_ = l_Lean_Elab_Structural_toBelow(v_below_3080_, v___x_3141_, v_positions_3077_, v_val_3100_, v_a_3139_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
if (lean_obj_tag(v___x_3142_) == 0)
{
lean_dec_ref(v_e_3081_);
v___y_3103_ = v___x_3142_;
goto v___jp_3102_;
}
else
{
lean_object* v_a_3143_; uint8_t v___y_3145_; uint8_t v___x_3150_; 
v_a_3143_ = lean_ctor_get(v___x_3142_, 0);
lean_inc(v_a_3143_);
v___x_3150_ = l_Lean_Exception_isInterrupt(v_a_3143_);
if (v___x_3150_ == 0)
{
uint8_t v___x_3151_; 
v___x_3151_ = l_Lean_Exception_isRuntime(v_a_3143_);
v___y_3145_ = v___x_3151_;
goto v___jp_3144_;
}
else
{
lean_dec(v_a_3143_);
v___y_3145_ = v___x_3150_;
goto v___jp_3144_;
}
v___jp_3144_:
{
if (v___y_3145_ == 0)
{
lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; 
lean_dec_ref(v___x_3142_);
v___x_3146_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3, &l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3_once, _init_l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___closed__3);
v___x_3147_ = l_Lean_indentExpr(v_e_3081_);
v___x_3148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3148_, 0, v___x_3146_);
lean_ctor_set(v___x_3148_, 1, v___x_3147_);
v___x_3149_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3148_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
v___y_3103_ = v___x_3149_;
goto v___jp_3102_;
}
else
{
lean_dec_ref(v_e_3081_);
v___y_3103_ = v___x_3142_;
goto v___jp_3102_;
}
}
}
}
else
{
lean_dec(v_val_3100_);
lean_dec_ref(v_x_3083_);
lean_dec_ref(v_e_3081_);
lean_dec_ref(v_below_3080_);
lean_dec_ref(v_containsRecFn_3079_);
lean_dec_ref(v_recFnNames_3078_);
lean_dec_ref(v_positions_3077_);
lean_dec_ref(v_recArgInfos_3076_);
return v___x_3138_;
}
}
v___jp_3102_:
{
if (lean_obj_tag(v___y_3103_) == 0)
{
lean_object* v_a_3104_; lean_object* v_fixedParamPerm_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v_snd_3108_; size_t v_sz_3109_; size_t v___x_3110_; lean_object* v___x_3111_; 
v_a_3104_ = lean_ctor_get(v___y_3103_, 0);
lean_inc(v_a_3104_);
lean_dec_ref(v___y_3103_);
v_fixedParamPerm_3105_ = lean_ctor_get(v___x_3101_, 1);
v___x_3106_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_fixedParamPerm_3105_, v_x_3083_);
lean_dec_ref(v_x_3083_);
lean_inc(v___x_3101_);
v___x_3107_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v___x_3101_, v___x_3106_);
v_snd_3108_ = lean_ctor_get(v___x_3107_, 1);
lean_inc(v_snd_3108_);
lean_dec_ref(v___x_3107_);
v_sz_3109_ = lean_array_size(v_snd_3108_);
v___x_3110_ = ((size_t)0ULL);
v___x_3111_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3076_, v_positions_3077_, v_recFnNames_3078_, v_containsRecFn_3079_, v_below_3080_, v_sz_3109_, v___x_3110_, v_snd_3108_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
if (lean_obj_tag(v___x_3111_) == 0)
{
lean_object* v_a_3112_; lean_object* v___x_3114_; uint8_t v_isShared_3115_; uint8_t v_isSharedCheck_3120_; 
v_a_3112_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3114_ = v___x_3111_;
v_isShared_3115_ = v_isSharedCheck_3120_;
goto v_resetjp_3113_;
}
else
{
lean_inc(v_a_3112_);
lean_dec(v___x_3111_);
v___x_3114_ = lean_box(0);
v_isShared_3115_ = v_isSharedCheck_3120_;
goto v_resetjp_3113_;
}
v_resetjp_3113_:
{
lean_object* v___x_3116_; lean_object* v___x_3118_; 
v___x_3116_ = l_Lean_mkAppN(v_a_3104_, v_a_3112_);
lean_dec(v_a_3112_);
if (v_isShared_3115_ == 0)
{
lean_ctor_set(v___x_3114_, 0, v___x_3116_);
v___x_3118_ = v___x_3114_;
goto v_reusejp_3117_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v___x_3116_);
v___x_3118_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3117_;
}
v_reusejp_3117_:
{
return v___x_3118_;
}
}
}
else
{
lean_object* v_a_3121_; lean_object* v___x_3123_; uint8_t v_isShared_3124_; uint8_t v_isSharedCheck_3128_; 
lean_dec(v_a_3104_);
v_a_3121_ = lean_ctor_get(v___x_3111_, 0);
v_isSharedCheck_3128_ = !lean_is_exclusive(v___x_3111_);
if (v_isSharedCheck_3128_ == 0)
{
v___x_3123_ = v___x_3111_;
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
else
{
lean_inc(v_a_3121_);
lean_dec(v___x_3111_);
v___x_3123_ = lean_box(0);
v_isShared_3124_ = v_isSharedCheck_3128_;
goto v_resetjp_3122_;
}
v_resetjp_3122_:
{
lean_object* v___x_3126_; 
if (v_isShared_3124_ == 0)
{
v___x_3126_ = v___x_3123_;
goto v_reusejp_3125_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v_a_3121_);
v___x_3126_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3125_;
}
v_reusejp_3125_:
{
return v___x_3126_;
}
}
}
}
else
{
lean_dec_ref(v_x_3083_);
lean_dec_ref(v_below_3080_);
lean_dec_ref(v_containsRecFn_3079_);
lean_dec_ref(v_recFnNames_3078_);
lean_dec_ref(v_positions_3077_);
lean_dec_ref(v_recArgInfos_3076_);
return v___y_3103_;
}
}
}
else
{
lean_object* v___x_3152_; 
lean_dec(v___x_3099_);
lean_dec_ref(v_e_3081_);
lean_inc_ref(v___y_3088_);
lean_inc_ref(v_below_3080_);
lean_inc_ref(v_containsRecFn_3079_);
lean_inc_ref(v_recFnNames_3078_);
lean_inc_ref(v_positions_3077_);
lean_inc_ref(v_recArgInfos_3076_);
v___x_3152_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3076_, v_positions_3077_, v_recFnNames_3078_, v_containsRecFn_3079_, v_below_3080_, v_x_3082_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
if (lean_obj_tag(v___x_3152_) == 0)
{
lean_object* v_a_3153_; size_t v_sz_3154_; size_t v___x_3155_; lean_object* v___x_3156_; 
v_a_3153_ = lean_ctor_get(v___x_3152_, 0);
lean_inc(v_a_3153_);
lean_dec_ref(v___x_3152_);
v_sz_3154_ = lean_array_size(v_x_3083_);
v___x_3155_ = ((size_t)0ULL);
v___x_3156_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3076_, v_positions_3077_, v_recFnNames_3078_, v_containsRecFn_3079_, v_below_3080_, v_sz_3154_, v___x_3155_, v_x_3083_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, v___y_3089_);
if (lean_obj_tag(v___x_3156_) == 0)
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3165_; 
v_a_3157_ = lean_ctor_get(v___x_3156_, 0);
v_isSharedCheck_3165_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3165_ == 0)
{
v___x_3159_ = v___x_3156_;
v_isShared_3160_ = v_isSharedCheck_3165_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3156_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3165_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3161_; lean_object* v___x_3163_; 
v___x_3161_ = l_Lean_mkAppN(v_a_3153_, v_a_3157_);
lean_dec(v_a_3157_);
if (v_isShared_3160_ == 0)
{
lean_ctor_set(v___x_3159_, 0, v___x_3161_);
v___x_3163_ = v___x_3159_;
goto v_reusejp_3162_;
}
else
{
lean_object* v_reuseFailAlloc_3164_; 
v_reuseFailAlloc_3164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3164_, 0, v___x_3161_);
v___x_3163_ = v_reuseFailAlloc_3164_;
goto v_reusejp_3162_;
}
v_reusejp_3162_:
{
return v___x_3163_;
}
}
}
else
{
lean_object* v_a_3166_; lean_object* v___x_3168_; uint8_t v_isShared_3169_; uint8_t v_isSharedCheck_3173_; 
lean_dec(v_a_3153_);
v_a_3166_ = lean_ctor_get(v___x_3156_, 0);
v_isSharedCheck_3173_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3173_ == 0)
{
v___x_3168_ = v___x_3156_;
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
else
{
lean_inc(v_a_3166_);
lean_dec(v___x_3156_);
v___x_3168_ = lean_box(0);
v_isShared_3169_ = v_isSharedCheck_3173_;
goto v_resetjp_3167_;
}
v_resetjp_3167_:
{
lean_object* v___x_3171_; 
if (v_isShared_3169_ == 0)
{
v___x_3171_ = v___x_3168_;
goto v_reusejp_3170_;
}
else
{
lean_object* v_reuseFailAlloc_3172_; 
v_reuseFailAlloc_3172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3172_, 0, v_a_3166_);
v___x_3171_ = v_reuseFailAlloc_3172_;
goto v_reusejp_3170_;
}
v_reusejp_3170_:
{
return v___x_3171_;
}
}
}
}
else
{
lean_dec_ref(v_x_3083_);
lean_dec_ref(v_below_3080_);
lean_dec_ref(v_containsRecFn_3079_);
lean_dec_ref(v_recFnNames_3078_);
lean_dec_ref(v_positions_3077_);
lean_dec_ref(v_recArgInfos_3076_);
return v___x_3152_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(lean_object* v_body_3174_, lean_object* v_recArgInfos_3175_, lean_object* v_positions_3176_, lean_object* v_recFnNames_3177_, lean_object* v_containsRecFn_3178_, lean_object* v_below_3179_, uint8_t v___x_3180_, uint8_t v_a_3181_, lean_object* v_x_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_){
_start:
{
lean_object* v___x_3189_; lean_object* v___x_3190_; 
v___x_3189_ = lean_expr_instantiate1(v_body_3174_, v_x_3182_);
lean_inc_ref(v___y_3186_);
v___x_3190_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3175_, v_positions_3176_, v_recFnNames_3177_, v_containsRecFn_3178_, v_below_3179_, v___x_3189_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
if (lean_obj_tag(v___x_3190_) == 0)
{
lean_object* v_a_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; uint8_t v___x_3195_; lean_object* v___x_3196_; 
v_a_3191_ = lean_ctor_get(v___x_3190_, 0);
lean_inc(v_a_3191_);
lean_dec_ref(v___x_3190_);
v___x_3192_ = lean_unsigned_to_nat(1u);
v___x_3193_ = lean_mk_empty_array_with_capacity(v___x_3192_);
v___x_3194_ = lean_array_push(v___x_3193_, v_x_3182_);
v___x_3195_ = 1;
v___x_3196_ = l_Lean_Meta_mkLambdaFVars(v___x_3194_, v_a_3191_, v___x_3180_, v_a_3181_, v___x_3180_, v_a_3181_, v___x_3195_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
lean_dec_ref(v___x_3194_);
return v___x_3196_;
}
else
{
lean_dec_ref(v_x_3182_);
return v___x_3190_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed(lean_object* v_body_3197_, lean_object* v_recArgInfos_3198_, lean_object* v_positions_3199_, lean_object* v_recFnNames_3200_, lean_object* v_containsRecFn_3201_, lean_object* v_below_3202_, lean_object* v___x_3203_, lean_object* v_a_3204_, lean_object* v_x_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_, lean_object* v___y_3210_, lean_object* v___y_3211_){
_start:
{
uint8_t v___x_32824__boxed_3212_; uint8_t v_a_32825__boxed_3213_; lean_object* v_res_3214_; 
v___x_32824__boxed_3212_ = lean_unbox(v___x_3203_);
v_a_32825__boxed_3213_ = lean_unbox(v_a_3204_);
v_res_3214_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0(v_body_3197_, v_recArgInfos_3198_, v_positions_3199_, v_recFnNames_3200_, v_containsRecFn_3201_, v_below_3202_, v___x_32824__boxed_3212_, v_a_32825__boxed_3213_, v_x_3205_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, v___y_3210_);
lean_dec(v___y_3210_);
lean_dec_ref(v___y_3209_);
lean_dec(v___y_3208_);
lean_dec_ref(v___y_3207_);
lean_dec(v___y_3206_);
lean_dec_ref(v_body_3197_);
return v_res_3214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(lean_object* v_body_3215_, lean_object* v_recArgInfos_3216_, lean_object* v_positions_3217_, lean_object* v_recFnNames_3218_, lean_object* v_containsRecFn_3219_, lean_object* v_below_3220_, uint8_t v___x_3221_, uint8_t v_a_3222_, lean_object* v_x_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_){
_start:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3230_ = lean_expr_instantiate1(v_body_3215_, v_x_3223_);
lean_inc_ref(v___y_3227_);
v___x_3231_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3216_, v_positions_3217_, v_recFnNames_3218_, v_containsRecFn_3219_, v_below_3220_, v___x_3230_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_a_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; uint8_t v___x_3236_; lean_object* v___x_3237_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_a_3232_);
lean_dec_ref(v___x_3231_);
v___x_3233_ = lean_unsigned_to_nat(1u);
v___x_3234_ = lean_mk_empty_array_with_capacity(v___x_3233_);
v___x_3235_ = lean_array_push(v___x_3234_, v_x_3223_);
v___x_3236_ = 1;
v___x_3237_ = l_Lean_Meta_mkForallFVars(v___x_3235_, v_a_3232_, v___x_3221_, v_a_3222_, v_a_3222_, v___x_3236_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_);
lean_dec_ref(v___x_3235_);
return v___x_3237_;
}
else
{
lean_dec_ref(v_x_3223_);
return v___x_3231_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed(lean_object* v_body_3238_, lean_object* v_recArgInfos_3239_, lean_object* v_positions_3240_, lean_object* v_recFnNames_3241_, lean_object* v_containsRecFn_3242_, lean_object* v_below_3243_, lean_object* v___x_3244_, lean_object* v_a_3245_, lean_object* v_x_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_){
_start:
{
uint8_t v___x_32842__boxed_3253_; uint8_t v_a_32843__boxed_3254_; lean_object* v_res_3255_; 
v___x_32842__boxed_3253_ = lean_unbox(v___x_3244_);
v_a_32843__boxed_3254_ = lean_unbox(v_a_3245_);
v_res_3255_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1(v_body_3238_, v_recArgInfos_3239_, v_positions_3240_, v_recFnNames_3241_, v_containsRecFn_3242_, v_below_3243_, v___x_32842__boxed_3253_, v_a_32843__boxed_3254_, v_x_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
lean_dec(v___y_3249_);
lean_dec_ref(v___y_3248_);
lean_dec(v___y_3247_);
lean_dec_ref(v_body_3238_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed(lean_object* v_body_3256_, lean_object* v_recArgInfos_3257_, lean_object* v_positions_3258_, lean_object* v_recFnNames_3259_, lean_object* v_containsRecFn_3260_, lean_object* v_below_3261_, lean_object* v_x_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v_res_3269_; 
v_res_3269_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(v_body_3256_, v_recArgInfos_3257_, v_positions_3258_, v_recFnNames_3259_, v_containsRecFn_3260_, v_below_3261_, v_x_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec_ref(v_x_3262_);
lean_dec_ref(v_body_3256_);
return v_res_3269_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0(void){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3270_ = lean_unsigned_to_nat(0u);
v___x_3271_ = lean_mk_empty_array_with_capacity(v___x_3270_);
return v___x_3271_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = lean_mk_string_unchecked("unexpected matcher application alternative", 42, 42);
return v___x_3272_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3273_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__0);
v___x_3274_ = l_Lean_stringToMessageData(v___x_3273_);
return v___x_3274_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3275_; 
v___x_3275_ = lean_mk_string_unchecked("\nat application", 15, 15);
return v___x_3275_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3276_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__2);
v___x_3277_ = l_Lean_stringToMessageData(v___x_3276_);
return v___x_3277_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3278_; 
v___x_3278_ = lean_mk_string_unchecked("altNumParams: ", 14, 14);
return v___x_3278_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3279_; lean_object* v___x_3280_; 
v___x_3279_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__4);
v___x_3280_ = l_Lean_stringToMessageData(v___x_3279_);
return v___x_3280_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3281_; 
v___x_3281_ = lean_mk_string_unchecked(", xs: ", 6, 6);
return v___x_3281_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__6);
v___x_3283_ = l_Lean_stringToMessageData(v___x_3282_);
return v___x_3283_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0(lean_object* v_b_3284_, lean_object* v_recArgInfos_3285_, lean_object* v_positions_3286_, lean_object* v_recFnNames_3287_, lean_object* v_containsRecFn_3288_, uint8_t v___x_3289_, uint8_t v_a_3290_, lean_object* v___x_3291_, lean_object* v_a_3292_, lean_object* v_e_3293_, lean_object* v___x_3294_, lean_object* v_xs_3295_, lean_object* v_altBody_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_){
_start:
{
lean_object* v___y_3304_; lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3307_; lean_object* v___y_3308_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v_options_3339_; uint8_t v_hasTrace_3340_; 
v_options_3339_ = lean_ctor_get(v___y_3300_, 2);
v_hasTrace_3340_ = lean_ctor_get_uint8(v_options_3339_, sizeof(void*)*1);
if (v_hasTrace_3340_ == 0)
{
lean_dec(v___x_3294_);
v___y_3316_ = v___y_3297_;
v___y_3317_ = v___y_3298_;
v___y_3318_ = v___y_3299_;
v___y_3319_ = v___y_3300_;
v___y_3320_ = v___y_3301_;
goto v___jp_3315_;
}
else
{
lean_object* v_inheritedTraceOptions_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; uint8_t v___x_3344_; 
v_inheritedTraceOptions_3341_ = lean_ctor_get(v___y_3300_, 13);
v___x_3342_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__0___closed__1);
lean_inc(v___x_3294_);
v___x_3343_ = l_Lean_Name_append(v___x_3342_, v___x_3294_);
v___x_3344_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3341_, v_options_3339_, v___x_3343_);
lean_dec(v___x_3343_);
if (v___x_3344_ == 0)
{
lean_dec(v___x_3294_);
v___y_3316_ = v___y_3297_;
v___y_3317_ = v___y_3298_;
v___y_3318_ = v___y_3299_;
v___y_3319_ = v___y_3300_;
v___y_3320_ = v___y_3301_;
goto v___jp_3315_;
}
else
{
lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3345_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__5);
lean_inc(v_b_3284_);
v___x_3346_ = l_Nat_reprFast(v_b_3284_);
v___x_3347_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3347_, 0, v___x_3346_);
v___x_3348_ = l_Lean_MessageData_ofFormat(v___x_3347_);
v___x_3349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3349_, 0, v___x_3345_);
lean_ctor_set(v___x_3349_, 1, v___x_3348_);
v___x_3350_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__7);
v___x_3351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3351_, 0, v___x_3349_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
lean_inc_ref(v_xs_3295_);
v___x_3352_ = lean_array_to_list(v_xs_3295_);
v___x_3353_ = lean_box(0);
v___x_3354_ = l_List_mapTR_loop___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__7(v___x_3352_, v___x_3353_);
v___x_3355_ = l_Lean_MessageData_ofList(v___x_3354_);
v___x_3356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3356_, 0, v___x_3351_);
lean_ctor_set(v___x_3356_, 1, v___x_3355_);
v___x_3357_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v___x_3294_, v___x_3356_, v___y_3298_, v___y_3299_, v___y_3300_, v___y_3301_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_dec_ref(v___x_3357_);
v___y_3316_ = v___y_3297_;
v___y_3317_ = v___y_3298_;
v___y_3318_ = v___y_3299_;
v___y_3319_ = v___y_3300_;
v___y_3320_ = v___y_3301_;
goto v___jp_3315_;
}
else
{
lean_object* v_a_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3365_; 
lean_dec_ref(v_altBody_3296_);
lean_dec_ref(v_xs_3295_);
lean_dec_ref(v_e_3293_);
lean_dec_ref(v_a_3292_);
lean_dec_ref(v_containsRecFn_3288_);
lean_dec_ref(v_recFnNames_3287_);
lean_dec_ref(v_positions_3286_);
lean_dec_ref(v_recArgInfos_3285_);
lean_dec(v_b_3284_);
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3365_ == 0)
{
v___x_3360_ = v___x_3357_;
v_isShared_3361_ = v_isSharedCheck_3365_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_a_3358_);
lean_dec(v___x_3357_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3365_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3363_; 
if (v_isShared_3361_ == 0)
{
v___x_3363_ = v___x_3360_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v_a_3358_);
v___x_3363_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
return v___x_3363_;
}
}
}
}
}
v___jp_3303_:
{
lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; 
v___x_3309_ = l_Lean_instInhabitedExpr;
v___x_3310_ = lean_array_get_borrowed(v___x_3309_, v_xs_3295_, v_b_3284_);
lean_dec(v_b_3284_);
lean_inc_ref(v___y_3307_);
lean_inc(v___x_3310_);
v___x_3311_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3285_, v_positions_3286_, v_recFnNames_3287_, v_containsRecFn_3288_, v___x_3310_, v_altBody_3296_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
if (lean_obj_tag(v___x_3311_) == 0)
{
lean_object* v_a_3312_; uint8_t v___x_3313_; lean_object* v___x_3314_; 
v_a_3312_ = lean_ctor_get(v___x_3311_, 0);
lean_inc(v_a_3312_);
lean_dec_ref(v___x_3311_);
v___x_3313_ = 1;
v___x_3314_ = l_Lean_Meta_mkLambdaFVars(v_xs_3295_, v_a_3312_, v___x_3289_, v_a_3290_, v___x_3289_, v_a_3290_, v___x_3313_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_);
lean_dec_ref(v_xs_3295_);
return v___x_3314_;
}
else
{
lean_dec_ref(v_xs_3295_);
return v___x_3311_;
}
}
v___jp_3315_:
{
lean_object* v___x_3321_; uint8_t v___x_3322_; 
v___x_3321_ = lean_array_get_size(v_xs_3295_);
v___x_3322_ = lean_nat_dec_eq(v___x_3321_, v___x_3291_);
if (v___x_3322_ == 0)
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v_a_3331_; lean_object* v___x_3333_; uint8_t v_isShared_3334_; uint8_t v_isSharedCheck_3338_; 
lean_dec_ref(v_altBody_3296_);
lean_dec_ref(v_xs_3295_);
lean_dec_ref(v_containsRecFn_3288_);
lean_dec_ref(v_recFnNames_3287_);
lean_dec_ref(v_positions_3286_);
lean_dec_ref(v_recArgInfos_3285_);
lean_dec(v_b_3284_);
v___x_3323_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__1);
v___x_3324_ = l_Lean_indentExpr(v_a_3292_);
v___x_3325_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3325_, 0, v___x_3323_);
lean_ctor_set(v___x_3325_, 1, v___x_3324_);
v___x_3326_ = lean_obj_once(&l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3, &l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3_once, _init_l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___closed__3);
v___x_3327_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3327_, 0, v___x_3325_);
lean_ctor_set(v___x_3327_, 1, v___x_3326_);
v___x_3328_ = l_Lean_indentExpr(v_e_3293_);
v___x_3329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3329_, 0, v___x_3327_);
lean_ctor_set(v___x_3329_, 1, v___x_3328_);
v___x_3330_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v___x_3329_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3333_ = v___x_3330_;
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
else
{
lean_inc(v_a_3331_);
lean_dec(v___x_3330_);
v___x_3333_ = lean_box(0);
v_isShared_3334_ = v_isSharedCheck_3338_;
goto v_resetjp_3332_;
}
v_resetjp_3332_:
{
lean_object* v___x_3336_; 
if (v_isShared_3334_ == 0)
{
v___x_3336_ = v___x_3333_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_a_3331_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
else
{
lean_dec_ref(v_e_3293_);
lean_dec_ref(v_a_3292_);
v___y_3304_ = v___y_3316_;
v___y_3305_ = v___y_3317_;
v___y_3306_ = v___y_3318_;
v___y_3307_ = v___y_3319_;
v___y_3308_ = v___y_3320_;
goto v___jp_3303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___boxed(lean_object** _args){
lean_object* v_b_3366_ = _args[0];
lean_object* v_recArgInfos_3367_ = _args[1];
lean_object* v_positions_3368_ = _args[2];
lean_object* v_recFnNames_3369_ = _args[3];
lean_object* v_containsRecFn_3370_ = _args[4];
lean_object* v___x_3371_ = _args[5];
lean_object* v_a_3372_ = _args[6];
lean_object* v___x_3373_ = _args[7];
lean_object* v_a_3374_ = _args[8];
lean_object* v_e_3375_ = _args[9];
lean_object* v___x_3376_ = _args[10];
lean_object* v_xs_3377_ = _args[11];
lean_object* v_altBody_3378_ = _args[12];
lean_object* v___y_3379_ = _args[13];
lean_object* v___y_3380_ = _args[14];
lean_object* v___y_3381_ = _args[15];
lean_object* v___y_3382_ = _args[16];
lean_object* v___y_3383_ = _args[17];
lean_object* v___y_3384_ = _args[18];
_start:
{
uint8_t v___x_32916__boxed_3385_; uint8_t v_a_32917__boxed_3386_; lean_object* v_res_3387_; 
v___x_32916__boxed_3385_ = lean_unbox(v___x_3371_);
v_a_32917__boxed_3386_ = lean_unbox(v_a_3372_);
v_res_3387_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0(v_b_3366_, v_recArgInfos_3367_, v_positions_3368_, v_recFnNames_3369_, v_containsRecFn_3370_, v___x_32916__boxed_3385_, v_a_32917__boxed_3386_, v___x_3373_, v_a_3374_, v_e_3375_, v___x_3376_, v_xs_3377_, v_altBody_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec(v___x_3373_);
return v_res_3387_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(lean_object* v_recArgInfos_3388_, lean_object* v_positions_3389_, lean_object* v_recFnNames_3390_, lean_object* v_containsRecFn_3391_, uint8_t v_a_3392_, lean_object* v_e_3393_, lean_object* v_as_3394_, lean_object* v_bs_3395_, lean_object* v_i_3396_, lean_object* v_cs_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_){
_start:
{
lean_object* v___x_3404_; uint8_t v___x_3405_; 
v___x_3404_ = lean_array_get_size(v_as_3394_);
v___x_3405_ = lean_nat_dec_lt(v_i_3396_, v___x_3404_);
if (v___x_3405_ == 0)
{
lean_object* v___x_3406_; 
lean_dec(v_i_3396_);
lean_dec_ref(v_e_3393_);
lean_dec_ref(v_containsRecFn_3391_);
lean_dec_ref(v_recFnNames_3390_);
lean_dec_ref(v_positions_3389_);
lean_dec_ref(v_recArgInfos_3388_);
v___x_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3406_, 0, v_cs_3397_);
return v___x_3406_;
}
else
{
lean_object* v___x_3407_; uint8_t v___x_3408_; 
v___x_3407_ = lean_array_get_size(v_bs_3395_);
v___x_3408_ = lean_nat_dec_lt(v_i_3396_, v___x_3407_);
if (v___x_3408_ == 0)
{
lean_object* v___x_3409_; 
lean_dec(v_i_3396_);
lean_dec_ref(v_e_3393_);
lean_dec_ref(v_containsRecFn_3391_);
lean_dec_ref(v_recFnNames_3390_);
lean_dec_ref(v_positions_3389_);
lean_dec_ref(v_recArgInfos_3388_);
v___x_3409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3409_, 0, v_cs_3397_);
return v___x_3409_;
}
else
{
uint8_t v___x_3410_; lean_object* v___x_3411_; lean_object* v_a_3412_; lean_object* v_b_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___f_3418_; lean_object* v___x_3419_; 
v___x_3410_ = 0;
v___x_3411_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v_a_3412_ = lean_array_fget_borrowed(v_as_3394_, v_i_3396_);
v_b_3413_ = lean_array_fget_borrowed(v_bs_3395_, v_i_3396_);
v___x_3414_ = lean_unsigned_to_nat(1u);
v___x_3415_ = lean_nat_add(v_b_3413_, v___x_3414_);
v___x_3416_ = lean_box(v___x_3410_);
v___x_3417_ = lean_box(v_a_3392_);
lean_inc_ref(v_e_3393_);
lean_inc_n(v_a_3412_, 2);
lean_inc(v___x_3415_);
lean_inc_ref(v_containsRecFn_3391_);
lean_inc_ref(v_recFnNames_3390_);
lean_inc_ref(v_positions_3389_);
lean_inc_ref(v_recArgInfos_3388_);
lean_inc(v_b_3413_);
v___f_3418_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___lam__0___boxed), 19, 11);
lean_closure_set(v___f_3418_, 0, v_b_3413_);
lean_closure_set(v___f_3418_, 1, v_recArgInfos_3388_);
lean_closure_set(v___f_3418_, 2, v_positions_3389_);
lean_closure_set(v___f_3418_, 3, v_recFnNames_3390_);
lean_closure_set(v___f_3418_, 4, v_containsRecFn_3391_);
lean_closure_set(v___f_3418_, 5, v___x_3416_);
lean_closure_set(v___f_3418_, 6, v___x_3417_);
lean_closure_set(v___f_3418_, 7, v___x_3415_);
lean_closure_set(v___f_3418_, 8, v_a_3412_);
lean_closure_set(v___f_3418_, 9, v_e_3393_);
lean_closure_set(v___f_3418_, 10, v___x_3411_);
v___x_3419_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__9___redArg(v_a_3412_, v___x_3415_, v___f_3418_, v___x_3410_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_);
if (lean_obj_tag(v___x_3419_) == 0)
{
lean_object* v_a_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v_a_3420_ = lean_ctor_get(v___x_3419_, 0);
lean_inc(v_a_3420_);
lean_dec_ref(v___x_3419_);
v___x_3421_ = lean_nat_add(v_i_3396_, v___x_3414_);
lean_dec(v_i_3396_);
v___x_3422_ = lean_array_push(v_cs_3397_, v_a_3420_);
v_i_3396_ = v___x_3421_;
v_cs_3397_ = v___x_3422_;
goto _start;
}
else
{
lean_object* v_a_3424_; lean_object* v___x_3426_; uint8_t v_isShared_3427_; uint8_t v_isSharedCheck_3431_; 
lean_dec_ref(v_cs_3397_);
lean_dec(v_i_3396_);
lean_dec_ref(v_e_3393_);
lean_dec_ref(v_containsRecFn_3391_);
lean_dec_ref(v_recFnNames_3390_);
lean_dec_ref(v_positions_3389_);
lean_dec_ref(v_recArgInfos_3388_);
v_a_3424_ = lean_ctor_get(v___x_3419_, 0);
v_isSharedCheck_3431_ = !lean_is_exclusive(v___x_3419_);
if (v_isSharedCheck_3431_ == 0)
{
v___x_3426_ = v___x_3419_;
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
else
{
lean_inc(v_a_3424_);
lean_dec(v___x_3419_);
v___x_3426_ = lean_box(0);
v_isShared_3427_ = v_isSharedCheck_3431_;
goto v_resetjp_3425_;
}
v_resetjp_3425_:
{
lean_object* v___x_3429_; 
if (v_isShared_3427_ == 0)
{
v___x_3429_ = v___x_3426_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3430_; 
v_reuseFailAlloc_3430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3430_, 0, v_a_3424_);
v___x_3429_ = v_reuseFailAlloc_3430_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
return v___x_3429_;
}
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1(void){
_start:
{
lean_object* v___x_3432_; 
v___x_3432_ = lean_mk_string_unchecked("`matcherApp.addArg\?` failed", 27, 27);
return v___x_3432_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2(void){
_start:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; 
v___x_3433_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__1);
v___x_3434_ = l_Lean_stringToMessageData(v___x_3433_);
return v___x_3434_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3(void){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = lean_mk_string_unchecked("below before matcherApp.addArg: ", 32, 32);
return v___x_3435_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4(void){
_start:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; 
v___x_3436_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__3);
v___x_3437_ = l_Lean_stringToMessageData(v___x_3436_);
return v___x_3437_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5(void){
_start:
{
lean_object* v___x_3438_; 
v___x_3438_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_3438_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6(void){
_start:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3439_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__5);
v___x_3440_ = l_Lean_stringToMessageData(v___x_3439_);
return v___x_3440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(lean_object* v_recArgInfos_3441_, lean_object* v_positions_3442_, lean_object* v_recFnNames_3443_, lean_object* v_containsRecFn_3444_, lean_object* v_below_3445_, lean_object* v_e_3446_, lean_object* v_a_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v_e_3454_; lean_object* v___y_3455_; lean_object* v___y_3456_; lean_object* v___y_3457_; lean_object* v___y_3458_; lean_object* v___y_3459_; lean_object* v___x_3466_; 
lean_inc_ref(v_containsRecFn_3444_);
lean_inc(v_a_3451_);
lean_inc_ref(v_a_3450_);
lean_inc(v_a_3449_);
lean_inc_ref(v_a_3448_);
lean_inc(v_a_3447_);
lean_inc_ref(v_e_3446_);
v___x_3466_ = lean_apply_7(v_containsRecFn_3444_, v_e_3446_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_, lean_box(0));
if (lean_obj_tag(v___x_3466_) == 0)
{
lean_object* v_a_3467_; lean_object* v___x_3469_; uint8_t v_isShared_3470_; uint8_t v_isSharedCheck_3689_; 
v_a_3467_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3469_ = v___x_3466_;
v_isShared_3470_ = v_isSharedCheck_3689_;
goto v_resetjp_3468_;
}
else
{
lean_inc(v_a_3467_);
lean_dec(v___x_3466_);
v___x_3469_ = lean_box(0);
v_isShared_3470_ = v_isSharedCheck_3689_;
goto v_resetjp_3468_;
}
v_resetjp_3468_:
{
uint8_t v___x_3471_; 
v___x_3471_ = lean_unbox(v_a_3467_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3473_; 
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
if (v_isShared_3470_ == 0)
{
lean_ctor_set(v___x_3469_, 0, v_e_3446_);
v___x_3473_ = v___x_3469_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_e_3446_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
else
{
uint8_t v___x_3475_; 
lean_del_object(v___x_3469_);
v___x_3475_ = 0;
switch(lean_obj_tag(v_e_3446_))
{
case 6:
{
lean_object* v_binderName_3476_; lean_object* v_binderType_3477_; lean_object* v_body_3478_; uint8_t v_binderInfo_3479_; lean_object* v___x_3480_; 
v_binderName_3476_ = lean_ctor_get(v_e_3446_, 0);
lean_inc(v_binderName_3476_);
v_binderType_3477_ = lean_ctor_get(v_e_3446_, 1);
lean_inc_ref(v_binderType_3477_);
v_body_3478_ = lean_ctor_get(v_e_3446_, 2);
lean_inc_ref(v_body_3478_);
v_binderInfo_3479_ = lean_ctor_get_uint8(v_e_3446_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3446_);
lean_inc_ref(v_a_3450_);
lean_inc_ref(v_below_3445_);
lean_inc_ref(v_containsRecFn_3444_);
lean_inc_ref(v_recFnNames_3443_);
lean_inc_ref(v_positions_3442_);
lean_inc_ref(v_recArgInfos_3441_);
v___x_3480_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v_below_3445_, v_binderType_3477_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3482_; lean_object* v___f_3483_; uint8_t v___x_3484_; lean_object* v___x_3485_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_a_3481_);
lean_dec_ref(v___x_3480_);
v___x_3482_ = lean_box(v___x_3475_);
v___f_3483_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__0___boxed), 15, 8);
lean_closure_set(v___f_3483_, 0, v_body_3478_);
lean_closure_set(v___f_3483_, 1, v_recArgInfos_3441_);
lean_closure_set(v___f_3483_, 2, v_positions_3442_);
lean_closure_set(v___f_3483_, 3, v_recFnNames_3443_);
lean_closure_set(v___f_3483_, 4, v_containsRecFn_3444_);
lean_closure_set(v___f_3483_, 5, v_below_3445_);
lean_closure_set(v___f_3483_, 6, v___x_3482_);
lean_closure_set(v___f_3483_, 7, v_a_3467_);
v___x_3484_ = 0;
v___x_3485_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3476_, v_binderInfo_3479_, v_a_3481_, v___f_3483_, v___x_3484_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
lean_dec_ref(v_a_3450_);
return v___x_3485_;
}
else
{
lean_dec_ref(v_body_3478_);
lean_dec(v_binderName_3476_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
return v___x_3480_;
}
}
case 7:
{
lean_object* v_binderName_3486_; lean_object* v_binderType_3487_; lean_object* v_body_3488_; uint8_t v_binderInfo_3489_; lean_object* v___x_3490_; 
v_binderName_3486_ = lean_ctor_get(v_e_3446_, 0);
lean_inc(v_binderName_3486_);
v_binderType_3487_ = lean_ctor_get(v_e_3446_, 1);
lean_inc_ref(v_binderType_3487_);
v_body_3488_ = lean_ctor_get(v_e_3446_, 2);
lean_inc_ref(v_body_3488_);
v_binderInfo_3489_ = lean_ctor_get_uint8(v_e_3446_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3446_);
lean_inc_ref(v_a_3450_);
lean_inc_ref(v_below_3445_);
lean_inc_ref(v_containsRecFn_3444_);
lean_inc_ref(v_recFnNames_3443_);
lean_inc_ref(v_positions_3442_);
lean_inc_ref(v_recArgInfos_3441_);
v___x_3490_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v_below_3445_, v_binderType_3487_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3490_) == 0)
{
lean_object* v_a_3491_; lean_object* v___x_3492_; lean_object* v___f_3493_; uint8_t v___x_3494_; lean_object* v___x_3495_; 
v_a_3491_ = lean_ctor_get(v___x_3490_, 0);
lean_inc(v_a_3491_);
lean_dec_ref(v___x_3490_);
v___x_3492_ = lean_box(v___x_3475_);
v___f_3493_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__1___boxed), 15, 8);
lean_closure_set(v___f_3493_, 0, v_body_3488_);
lean_closure_set(v___f_3493_, 1, v_recArgInfos_3441_);
lean_closure_set(v___f_3493_, 2, v_positions_3442_);
lean_closure_set(v___f_3493_, 3, v_recFnNames_3443_);
lean_closure_set(v___f_3493_, 4, v_containsRecFn_3444_);
lean_closure_set(v___f_3493_, 5, v_below_3445_);
lean_closure_set(v___f_3493_, 6, v___x_3492_);
lean_closure_set(v___f_3493_, 7, v_a_3467_);
v___x_3494_ = 0;
v___x_3495_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__3___redArg(v_binderName_3486_, v_binderInfo_3489_, v_a_3491_, v___f_3493_, v___x_3494_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
lean_dec_ref(v_a_3450_);
return v___x_3495_;
}
else
{
lean_dec_ref(v_body_3488_);
lean_dec(v_binderName_3486_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
return v___x_3490_;
}
}
case 8:
{
lean_object* v_declName_3496_; lean_object* v_type_3497_; lean_object* v_value_3498_; lean_object* v_body_3499_; uint8_t v_nondep_3500_; lean_object* v___x_3501_; 
lean_dec(v_a_3467_);
v_declName_3496_ = lean_ctor_get(v_e_3446_, 0);
lean_inc(v_declName_3496_);
v_type_3497_ = lean_ctor_get(v_e_3446_, 1);
lean_inc_ref(v_type_3497_);
v_value_3498_ = lean_ctor_get(v_e_3446_, 2);
lean_inc_ref(v_value_3498_);
v_body_3499_ = lean_ctor_get(v_e_3446_, 3);
lean_inc_ref(v_body_3499_);
v_nondep_3500_ = lean_ctor_get_uint8(v_e_3446_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_3446_);
lean_inc_ref(v_a_3450_);
lean_inc_ref(v_below_3445_);
lean_inc_ref(v_containsRecFn_3444_);
lean_inc_ref(v_recFnNames_3443_);
lean_inc_ref(v_positions_3442_);
lean_inc_ref(v_recArgInfos_3441_);
v___x_3501_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v_below_3445_, v_type_3497_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3501_) == 0)
{
lean_object* v_a_3502_; lean_object* v___x_3503_; 
v_a_3502_ = lean_ctor_get(v___x_3501_, 0);
lean_inc(v_a_3502_);
lean_dec_ref(v___x_3501_);
lean_inc_ref(v_a_3450_);
lean_inc_ref(v_below_3445_);
lean_inc_ref(v_containsRecFn_3444_);
lean_inc_ref(v_recFnNames_3443_);
lean_inc_ref(v_positions_3442_);
lean_inc_ref(v_recArgInfos_3441_);
v___x_3503_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v_below_3445_, v_value_3498_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3503_) == 0)
{
lean_object* v_a_3504_; lean_object* v___f_3505_; uint8_t v___x_3506_; lean_object* v___x_3507_; 
v_a_3504_ = lean_ctor_get(v___x_3503_, 0);
lean_inc(v_a_3504_);
lean_dec_ref(v___x_3503_);
v___f_3505_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2___boxed), 13, 6);
lean_closure_set(v___f_3505_, 0, v_body_3499_);
lean_closure_set(v___f_3505_, 1, v_recArgInfos_3441_);
lean_closure_set(v___f_3505_, 2, v_positions_3442_);
lean_closure_set(v___f_3505_, 3, v_recFnNames_3443_);
lean_closure_set(v___f_3505_, 4, v_containsRecFn_3444_);
lean_closure_set(v___f_3505_, 5, v_below_3445_);
v___x_3506_ = 0;
v___x_3507_ = l_Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4(v_declName_3496_, v_a_3502_, v_a_3504_, v___f_3505_, v_nondep_3500_, v___x_3506_, v___x_3475_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
lean_dec_ref(v_a_3450_);
return v___x_3507_;
}
else
{
lean_dec(v_a_3502_);
lean_dec_ref(v_body_3499_);
lean_dec(v_declName_3496_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
return v___x_3503_;
}
}
else
{
lean_dec_ref(v_body_3499_);
lean_dec_ref(v_value_3498_);
lean_dec(v_declName_3496_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
return v___x_3501_;
}
}
case 10:
{
lean_object* v_data_3508_; lean_object* v_expr_3509_; lean_object* v___x_3510_; 
lean_dec(v_a_3467_);
v_data_3508_ = lean_ctor_get(v_e_3446_, 0);
lean_inc(v_data_3508_);
v_expr_3509_ = lean_ctor_get(v_e_3446_, 1);
lean_inc_ref(v_expr_3509_);
v___x_3510_ = l_Lean_getRecAppSyntax_x3f(v_e_3446_);
lean_dec_ref(v_e_3446_);
if (lean_obj_tag(v___x_3510_) == 1)
{
lean_object* v_val_3511_; lean_object* v_fileName_3512_; lean_object* v_fileMap_3513_; lean_object* v_options_3514_; lean_object* v_currRecDepth_3515_; lean_object* v_maxRecDepth_3516_; lean_object* v_ref_3517_; lean_object* v_currNamespace_3518_; lean_object* v_openDecls_3519_; lean_object* v_initHeartbeats_3520_; lean_object* v_maxHeartbeats_3521_; lean_object* v_quotContext_3522_; lean_object* v_currMacroScope_3523_; uint8_t v_diag_3524_; lean_object* v_cancelTk_x3f_3525_; uint8_t v_suppressElabErrors_3526_; lean_object* v_inheritedTraceOptions_3527_; lean_object* v_ref_3528_; lean_object* v___x_3529_; 
lean_dec(v_data_3508_);
v_val_3511_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_val_3511_);
lean_dec_ref(v___x_3510_);
v_fileName_3512_ = lean_ctor_get(v_a_3450_, 0);
lean_inc_ref(v_fileName_3512_);
v_fileMap_3513_ = lean_ctor_get(v_a_3450_, 1);
lean_inc_ref(v_fileMap_3513_);
v_options_3514_ = lean_ctor_get(v_a_3450_, 2);
lean_inc_ref(v_options_3514_);
v_currRecDepth_3515_ = lean_ctor_get(v_a_3450_, 3);
lean_inc(v_currRecDepth_3515_);
v_maxRecDepth_3516_ = lean_ctor_get(v_a_3450_, 4);
lean_inc(v_maxRecDepth_3516_);
v_ref_3517_ = lean_ctor_get(v_a_3450_, 5);
lean_inc(v_ref_3517_);
v_currNamespace_3518_ = lean_ctor_get(v_a_3450_, 6);
lean_inc(v_currNamespace_3518_);
v_openDecls_3519_ = lean_ctor_get(v_a_3450_, 7);
lean_inc(v_openDecls_3519_);
v_initHeartbeats_3520_ = lean_ctor_get(v_a_3450_, 8);
lean_inc(v_initHeartbeats_3520_);
v_maxHeartbeats_3521_ = lean_ctor_get(v_a_3450_, 9);
lean_inc(v_maxHeartbeats_3521_);
v_quotContext_3522_ = lean_ctor_get(v_a_3450_, 10);
lean_inc(v_quotContext_3522_);
v_currMacroScope_3523_ = lean_ctor_get(v_a_3450_, 11);
lean_inc(v_currMacroScope_3523_);
v_diag_3524_ = lean_ctor_get_uint8(v_a_3450_, sizeof(void*)*14);
v_cancelTk_x3f_3525_ = lean_ctor_get(v_a_3450_, 12);
lean_inc(v_cancelTk_x3f_3525_);
v_suppressElabErrors_3526_ = lean_ctor_get_uint8(v_a_3450_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3527_ = lean_ctor_get(v_a_3450_, 13);
lean_inc_ref(v_inheritedTraceOptions_3527_);
lean_dec_ref(v_a_3450_);
v_ref_3528_ = l_Lean_replaceRef(v_val_3511_, v_ref_3517_);
lean_dec(v_ref_3517_);
lean_dec(v_val_3511_);
v___x_3529_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3529_, 0, v_fileName_3512_);
lean_ctor_set(v___x_3529_, 1, v_fileMap_3513_);
lean_ctor_set(v___x_3529_, 2, v_options_3514_);
lean_ctor_set(v___x_3529_, 3, v_currRecDepth_3515_);
lean_ctor_set(v___x_3529_, 4, v_maxRecDepth_3516_);
lean_ctor_set(v___x_3529_, 5, v_ref_3528_);
lean_ctor_set(v___x_3529_, 6, v_currNamespace_3518_);
lean_ctor_set(v___x_3529_, 7, v_openDecls_3519_);
lean_ctor_set(v___x_3529_, 8, v_initHeartbeats_3520_);
lean_ctor_set(v___x_3529_, 9, v_maxHeartbeats_3521_);
lean_ctor_set(v___x_3529_, 10, v_quotContext_3522_);
lean_ctor_set(v___x_3529_, 11, v_currMacroScope_3523_);
lean_ctor_set(v___x_3529_, 12, v_cancelTk_x3f_3525_);
lean_ctor_set(v___x_3529_, 13, v_inheritedTraceOptions_3527_);
lean_ctor_set_uint8(v___x_3529_, sizeof(void*)*14, v_diag_3524_);
lean_ctor_set_uint8(v___x_3529_, sizeof(void*)*14 + 1, v_suppressElabErrors_3526_);
v_e_3446_ = v_expr_3509_;
v_a_3450_ = v___x_3529_;
goto _start;
}
else
{
lean_object* v___x_3531_; 
lean_dec(v___x_3510_);
v___x_3531_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v_below_3445_, v_expr_3509_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3531_) == 0)
{
lean_object* v_a_3532_; lean_object* v___x_3534_; uint8_t v_isShared_3535_; uint8_t v_isSharedCheck_3540_; 
v_a_3532_ = lean_ctor_get(v___x_3531_, 0);
v_isSharedCheck_3540_ = !lean_is_exclusive(v___x_3531_);
if (v_isSharedCheck_3540_ == 0)
{
v___x_3534_ = v___x_3531_;
v_isShared_3535_ = v_isSharedCheck_3540_;
goto v_resetjp_3533_;
}
else
{
lean_inc(v_a_3532_);
lean_dec(v___x_3531_);
v___x_3534_ = lean_box(0);
v_isShared_3535_ = v_isSharedCheck_3540_;
goto v_resetjp_3533_;
}
v_resetjp_3533_:
{
lean_object* v___x_3536_; lean_object* v___x_3538_; 
v___x_3536_ = l_Lean_mkMData(v_data_3508_, v_a_3532_);
if (v_isShared_3535_ == 0)
{
lean_ctor_set(v___x_3534_, 0, v___x_3536_);
v___x_3538_ = v___x_3534_;
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
lean_dec(v_data_3508_);
return v___x_3531_;
}
}
}
case 11:
{
lean_object* v_typeName_3541_; lean_object* v_idx_3542_; lean_object* v_struct_3543_; lean_object* v___x_3544_; 
lean_dec(v_a_3467_);
v_typeName_3541_ = lean_ctor_get(v_e_3446_, 0);
lean_inc(v_typeName_3541_);
v_idx_3542_ = lean_ctor_get(v_e_3446_, 1);
lean_inc(v_idx_3542_);
v_struct_3543_ = lean_ctor_get(v_e_3446_, 2);
lean_inc_ref(v_struct_3543_);
lean_dec_ref(v_e_3446_);
v___x_3544_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v_below_3445_, v_struct_3543_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v_a_3545_; lean_object* v___x_3547_; uint8_t v_isShared_3548_; uint8_t v_isSharedCheck_3553_; 
v_a_3545_ = lean_ctor_get(v___x_3544_, 0);
v_isSharedCheck_3553_ = !lean_is_exclusive(v___x_3544_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3547_ = v___x_3544_;
v_isShared_3548_ = v_isSharedCheck_3553_;
goto v_resetjp_3546_;
}
else
{
lean_inc(v_a_3545_);
lean_dec(v___x_3544_);
v___x_3547_ = lean_box(0);
v_isShared_3548_ = v_isSharedCheck_3553_;
goto v_resetjp_3546_;
}
v_resetjp_3546_:
{
lean_object* v___x_3549_; lean_object* v___x_3551_; 
v___x_3549_ = l_Lean_mkProj(v_typeName_3541_, v_idx_3542_, v_a_3545_);
if (v_isShared_3548_ == 0)
{
lean_ctor_set(v___x_3547_, 0, v___x_3549_);
v___x_3551_ = v___x_3547_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3549_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
else
{
lean_dec(v_idx_3542_);
lean_dec(v_typeName_3541_);
return v___x_3544_;
}
}
case 5:
{
uint8_t v___x_3554_; lean_object* v___x_3555_; 
v___x_3554_ = lean_unbox(v_a_3467_);
lean_inc_ref(v_e_3446_);
v___x_3555_ = l_Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5(v_e_3446_, v___x_3554_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v_a_3556_; 
v_a_3556_ = lean_ctor_get(v___x_3555_, 0);
lean_inc(v_a_3556_);
lean_dec_ref(v___x_3555_);
if (lean_obj_tag(v_a_3556_) == 0)
{
lean_dec(v_a_3467_);
v_e_3454_ = v_e_3446_;
v___y_3455_ = v_a_3447_;
v___y_3456_ = v_a_3448_;
v___y_3457_ = v_a_3449_;
v___y_3458_ = v_a_3450_;
v___y_3459_ = v_a_3451_;
goto v___jp_3453_;
}
else
{
lean_object* v_val_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; uint8_t v___x_3560_; 
v_val_3557_ = lean_ctor_get(v_a_3556_, 0);
lean_inc(v_val_3557_);
lean_dec_ref(v_a_3556_);
v___x_3558_ = lean_unsigned_to_nat(0u);
v___x_3559_ = lean_array_get_size(v_recArgInfos_3441_);
v___x_3560_ = lean_nat_dec_lt(v___x_3558_, v___x_3559_);
if (v___x_3560_ == 0)
{
lean_dec(v_val_3557_);
lean_dec(v_a_3467_);
v_e_3454_ = v_e_3446_;
v___y_3455_ = v_a_3447_;
v___y_3456_ = v_a_3448_;
v___y_3457_ = v_a_3449_;
v___y_3458_ = v_a_3450_;
v___y_3459_ = v_a_3451_;
goto v___jp_3453_;
}
else
{
if (v___x_3560_ == 0)
{
lean_dec(v_val_3557_);
lean_dec(v_a_3467_);
v_e_3454_ = v_e_3446_;
v___y_3455_ = v_a_3447_;
v___y_3456_ = v_a_3448_;
v___y_3457_ = v_a_3449_;
v___y_3458_ = v_a_3450_;
v___y_3459_ = v_a_3451_;
goto v___jp_3453_;
}
else
{
size_t v___x_3561_; size_t v___x_3562_; uint8_t v___x_3563_; 
v___x_3561_ = ((size_t)0ULL);
v___x_3562_ = lean_usize_of_nat(v___x_3559_);
v___x_3563_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__6(v_e_3446_, v_recArgInfos_3441_, v___x_3561_, v___x_3562_);
if (v___x_3563_ == 0)
{
lean_dec(v_val_3557_);
lean_dec(v_a_3467_);
v_e_3454_ = v_e_3446_;
v___y_3455_ = v_a_3447_;
v___y_3456_ = v_a_3448_;
v___y_3457_ = v_a_3449_;
v___y_3458_ = v_a_3450_;
v___y_3459_ = v_a_3451_;
goto v___jp_3453_;
}
else
{
lean_object* v_inheritedTraceOptions_3564_; lean_object* v___x_3565_; lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3569_; lean_object* v___y_3570_; lean_object* v___y_3571_; lean_object* v___x_3635_; 
v_inheritedTraceOptions_3564_ = lean_ctor_get(v_a_3450_, 13);
v___x_3565_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___closed__3);
v___x_3635_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(v___x_3565_, v_inheritedTraceOptions_3564_, v_a_3447_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v_a_3636_; uint8_t v___x_3637_; 
v_a_3636_ = lean_ctor_get(v___x_3635_, 0);
lean_inc(v_a_3636_);
lean_dec_ref(v___x_3635_);
v___x_3637_ = lean_unbox(v_a_3636_);
lean_dec(v_a_3636_);
if (v___x_3637_ == 0)
{
v___y_3567_ = v_a_3447_;
v___y_3568_ = v_a_3448_;
v___y_3569_ = v_a_3449_;
v___y_3570_ = v_a_3450_;
v___y_3571_ = v_a_3451_;
goto v___jp_3566_;
}
else
{
lean_object* v___x_3638_; 
lean_inc(v_a_3451_);
lean_inc_ref(v_a_3450_);
lean_inc(v_a_3449_);
lean_inc_ref(v_a_3448_);
lean_inc_ref(v_below_3445_);
v___x_3638_ = lean_infer_type(v_below_3445_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
lean_inc(v_a_3639_);
lean_dec_ref(v___x_3638_);
v___x_3640_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__4);
lean_inc_ref(v_below_3445_);
v___x_3641_ = l_Lean_MessageData_ofExpr(v_below_3445_);
v___x_3642_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3640_);
lean_ctor_set(v___x_3642_, 1, v___x_3641_);
v___x_3643_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__6);
v___x_3644_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3642_);
lean_ctor_set(v___x_3644_, 1, v___x_3643_);
v___x_3645_ = l_Lean_MessageData_ofExpr(v_a_3639_);
v___x_3646_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3644_);
lean_ctor_set(v___x_3646_, 1, v___x_3645_);
v___x_3647_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v___x_3565_, v___x_3646_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
if (lean_obj_tag(v___x_3647_) == 0)
{
lean_dec_ref(v___x_3647_);
v___y_3567_ = v_a_3447_;
v___y_3568_ = v_a_3448_;
v___y_3569_ = v_a_3449_;
v___y_3570_ = v_a_3450_;
v___y_3571_ = v_a_3451_;
goto v___jp_3566_;
}
else
{
lean_object* v_a_3648_; lean_object* v___x_3650_; uint8_t v_isShared_3651_; uint8_t v_isSharedCheck_3655_; 
lean_dec(v_val_3557_);
lean_dec_ref(v_e_3446_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
v_a_3648_ = lean_ctor_get(v___x_3647_, 0);
v_isSharedCheck_3655_ = !lean_is_exclusive(v___x_3647_);
if (v_isSharedCheck_3655_ == 0)
{
v___x_3650_ = v___x_3647_;
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
else
{
lean_inc(v_a_3648_);
lean_dec(v___x_3647_);
v___x_3650_ = lean_box(0);
v_isShared_3651_ = v_isSharedCheck_3655_;
goto v_resetjp_3649_;
}
v_resetjp_3649_:
{
lean_object* v___x_3653_; 
if (v_isShared_3651_ == 0)
{
v___x_3653_ = v___x_3650_;
goto v_reusejp_3652_;
}
else
{
lean_object* v_reuseFailAlloc_3654_; 
v_reuseFailAlloc_3654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3654_, 0, v_a_3648_);
v___x_3653_ = v_reuseFailAlloc_3654_;
goto v_reusejp_3652_;
}
v_reusejp_3652_:
{
return v___x_3653_;
}
}
}
}
else
{
lean_dec(v_val_3557_);
lean_dec_ref(v_e_3446_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
return v___x_3638_;
}
}
}
else
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
lean_dec(v_val_3557_);
lean_dec_ref(v_e_3446_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
v_a_3656_ = lean_ctor_get(v___x_3635_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3635_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3658_ = v___x_3635_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3635_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
v___jp_3566_:
{
lean_object* v___x_3572_; 
lean_inc_ref(v_below_3445_);
v___x_3572_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_val_3557_, v_below_3445_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_);
if (lean_obj_tag(v___x_3572_) == 0)
{
lean_object* v_a_3573_; 
v_a_3573_ = lean_ctor_get(v___x_3572_, 0);
lean_inc(v_a_3573_);
lean_dec_ref(v___x_3572_);
if (lean_obj_tag(v_a_3573_) == 1)
{
lean_object* v_val_3574_; lean_object* v_toMatcherInfo_3575_; lean_object* v_matcherName_3576_; lean_object* v_matcherLevels_3577_; lean_object* v_params_3578_; lean_object* v_motive_3579_; lean_object* v_discrs_3580_; lean_object* v_alts_3581_; lean_object* v_remaining_3582_; lean_object* v___x_3583_; lean_object* v___x_3584_; uint8_t v___x_3585_; lean_object* v___x_3586_; 
lean_dec_ref(v_below_3445_);
v_val_3574_ = lean_ctor_get(v_a_3573_, 0);
lean_inc(v_val_3574_);
lean_dec_ref(v_a_3573_);
v_toMatcherInfo_3575_ = lean_ctor_get(v_val_3574_, 0);
lean_inc_ref(v_toMatcherInfo_3575_);
v_matcherName_3576_ = lean_ctor_get(v_val_3574_, 1);
lean_inc(v_matcherName_3576_);
v_matcherLevels_3577_ = lean_ctor_get(v_val_3574_, 2);
lean_inc_ref(v_matcherLevels_3577_);
v_params_3578_ = lean_ctor_get(v_val_3574_, 3);
lean_inc_ref(v_params_3578_);
v_motive_3579_ = lean_ctor_get(v_val_3574_, 4);
lean_inc_ref(v_motive_3579_);
v_discrs_3580_ = lean_ctor_get(v_val_3574_, 5);
lean_inc_ref(v_discrs_3580_);
v_alts_3581_ = lean_ctor_get(v_val_3574_, 6);
lean_inc_ref(v_alts_3581_);
v_remaining_3582_ = lean_ctor_get(v_val_3574_, 7);
lean_inc_ref(v_remaining_3582_);
v___x_3583_ = l_Lean_Meta_MatcherApp_altNumParams(v_val_3574_);
v___x_3584_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__0);
v___x_3585_ = lean_unbox(v_a_3467_);
lean_dec(v_a_3467_);
v___x_3586_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v___x_3585_, v_e_3446_, v_alts_3581_, v___x_3583_, v___x_3558_, v___x_3584_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_);
lean_dec_ref(v___y_3570_);
lean_dec_ref(v___x_3583_);
lean_dec_ref(v_alts_3581_);
if (lean_obj_tag(v___x_3586_) == 0)
{
lean_object* v_a_3587_; lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3596_; 
v_a_3587_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3589_ = v___x_3586_;
v_isShared_3590_ = v_isSharedCheck_3596_;
goto v_resetjp_3588_;
}
else
{
lean_inc(v_a_3587_);
lean_dec(v___x_3586_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3596_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3594_; 
v___x_3591_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3591_, 0, v_toMatcherInfo_3575_);
lean_ctor_set(v___x_3591_, 1, v_matcherName_3576_);
lean_ctor_set(v___x_3591_, 2, v_matcherLevels_3577_);
lean_ctor_set(v___x_3591_, 3, v_params_3578_);
lean_ctor_set(v___x_3591_, 4, v_motive_3579_);
lean_ctor_set(v___x_3591_, 5, v_discrs_3580_);
lean_ctor_set(v___x_3591_, 6, v_a_3587_);
lean_ctor_set(v___x_3591_, 7, v_remaining_3582_);
v___x_3592_ = l_Lean_Meta_MatcherApp_toExpr(v___x_3591_);
if (v_isShared_3590_ == 0)
{
lean_ctor_set(v___x_3589_, 0, v___x_3592_);
v___x_3594_ = v___x_3589_;
goto v_reusejp_3593_;
}
else
{
lean_object* v_reuseFailAlloc_3595_; 
v_reuseFailAlloc_3595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3595_, 0, v___x_3592_);
v___x_3594_ = v_reuseFailAlloc_3595_;
goto v_reusejp_3593_;
}
v_reusejp_3593_:
{
return v___x_3594_;
}
}
}
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3604_; 
lean_dec_ref(v_remaining_3582_);
lean_dec_ref(v_discrs_3580_);
lean_dec_ref(v_motive_3579_);
lean_dec_ref(v_params_3578_);
lean_dec_ref(v_matcherLevels_3577_);
lean_dec(v_matcherName_3576_);
lean_dec_ref(v_toMatcherInfo_3575_);
v_a_3597_ = lean_ctor_get(v___x_3586_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3599_ = v___x_3586_;
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3586_);
v___x_3599_ = lean_box(0);
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
v_resetjp_3598_:
{
lean_object* v___x_3602_; 
if (v_isShared_3600_ == 0)
{
v___x_3602_ = v___x_3599_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v_a_3597_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
else
{
lean_object* v_inheritedTraceOptions_3605_; lean_object* v___x_3606_; 
lean_dec(v_a_3573_);
lean_dec(v_a_3467_);
v_inheritedTraceOptions_3605_ = lean_ctor_get(v___y_3570_, 13);
v___x_3606_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__3(v___x_3565_, v_inheritedTraceOptions_3605_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_);
if (lean_obj_tag(v___x_3606_) == 0)
{
lean_object* v_a_3607_; uint8_t v___x_3608_; 
v_a_3607_ = lean_ctor_get(v___x_3606_, 0);
lean_inc(v_a_3607_);
lean_dec_ref(v___x_3606_);
v___x_3608_ = lean_unbox(v_a_3607_);
lean_dec(v_a_3607_);
if (v___x_3608_ == 0)
{
v_e_3454_ = v_e_3446_;
v___y_3455_ = v___y_3567_;
v___y_3456_ = v___y_3568_;
v___y_3457_ = v___y_3569_;
v___y_3458_ = v___y_3570_;
v___y_3459_ = v___y_3571_;
goto v___jp_3453_;
}
else
{
lean_object* v___x_3609_; lean_object* v___x_3610_; 
v___x_3609_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___closed__2);
v___x_3610_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v___x_3565_, v___x_3609_, v___y_3568_, v___y_3569_, v___y_3570_, v___y_3571_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_dec_ref(v___x_3610_);
v_e_3454_ = v_e_3446_;
v___y_3455_ = v___y_3567_;
v___y_3456_ = v___y_3568_;
v___y_3457_ = v___y_3569_;
v___y_3458_ = v___y_3570_;
v___y_3459_ = v___y_3571_;
goto v___jp_3453_;
}
else
{
lean_object* v_a_3611_; lean_object* v___x_3613_; uint8_t v_isShared_3614_; uint8_t v_isSharedCheck_3618_; 
lean_dec_ref(v___y_3570_);
lean_dec_ref(v_e_3446_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
v_a_3611_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3618_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3618_ == 0)
{
v___x_3613_ = v___x_3610_;
v_isShared_3614_ = v_isSharedCheck_3618_;
goto v_resetjp_3612_;
}
else
{
lean_inc(v_a_3611_);
lean_dec(v___x_3610_);
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
}
else
{
lean_object* v_a_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3626_; 
lean_dec_ref(v___y_3570_);
lean_dec_ref(v_e_3446_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
v_a_3619_ = lean_ctor_get(v___x_3606_, 0);
v_isSharedCheck_3626_ = !lean_is_exclusive(v___x_3606_);
if (v_isSharedCheck_3626_ == 0)
{
v___x_3621_ = v___x_3606_;
v_isShared_3622_ = v_isSharedCheck_3626_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_a_3619_);
lean_dec(v___x_3606_);
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
}
else
{
lean_object* v_a_3627_; lean_object* v___x_3629_; uint8_t v_isShared_3630_; uint8_t v_isSharedCheck_3634_; 
lean_dec_ref(v___y_3570_);
lean_dec_ref(v_e_3446_);
lean_dec(v_a_3467_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
v_a_3627_ = lean_ctor_get(v___x_3572_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3572_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3629_ = v___x_3572_;
v_isShared_3630_ = v_isSharedCheck_3634_;
goto v_resetjp_3628_;
}
else
{
lean_inc(v_a_3627_);
lean_dec(v___x_3572_);
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
}
}
}
}
}
else
{
lean_object* v_a_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3671_; 
lean_dec_ref(v_e_3446_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
v_a_3664_ = lean_ctor_get(v___x_3555_, 0);
v_isSharedCheck_3671_ = !lean_is_exclusive(v___x_3555_);
if (v_isSharedCheck_3671_ == 0)
{
v___x_3666_ = v___x_3555_;
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_a_3664_);
lean_dec(v___x_3555_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3671_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3669_; 
if (v_isShared_3667_ == 0)
{
v___x_3669_ = v___x_3666_;
goto v_reusejp_3668_;
}
else
{
lean_object* v_reuseFailAlloc_3670_; 
v_reuseFailAlloc_3670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3670_, 0, v_a_3664_);
v___x_3669_ = v_reuseFailAlloc_3670_;
goto v_reusejp_3668_;
}
v_reusejp_3668_:
{
return v___x_3669_;
}
}
}
}
default: 
{
lean_object* v___x_3672_; 
lean_dec(v_a_3467_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
lean_inc_ref(v_e_3446_);
v___x_3672_ = l_Lean_Elab_ensureNoRecFn(v_recFnNames_3443_, v_e_3446_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
lean_dec_ref(v_a_3450_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_object* v___x_3674_; uint8_t v_isShared_3675_; uint8_t v_isSharedCheck_3679_; 
v_isSharedCheck_3679_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3679_ == 0)
{
lean_object* v_unused_3680_; 
v_unused_3680_ = lean_ctor_get(v___x_3672_, 0);
lean_dec(v_unused_3680_);
v___x_3674_ = v___x_3672_;
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
else
{
lean_dec(v___x_3672_);
v___x_3674_ = lean_box(0);
v_isShared_3675_ = v_isSharedCheck_3679_;
goto v_resetjp_3673_;
}
v_resetjp_3673_:
{
lean_object* v___x_3677_; 
if (v_isShared_3675_ == 0)
{
lean_ctor_set(v___x_3674_, 0, v_e_3446_);
v___x_3677_ = v___x_3674_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_e_3446_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
else
{
lean_object* v_a_3681_; lean_object* v___x_3683_; uint8_t v_isShared_3684_; uint8_t v_isSharedCheck_3688_; 
lean_dec_ref(v_e_3446_);
v_a_3681_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3688_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3683_ = v___x_3672_;
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
else
{
lean_inc(v_a_3681_);
lean_dec(v___x_3672_);
v___x_3683_ = lean_box(0);
v_isShared_3684_ = v_isSharedCheck_3688_;
goto v_resetjp_3682_;
}
v_resetjp_3682_:
{
lean_object* v___x_3686_; 
if (v_isShared_3684_ == 0)
{
v___x_3686_ = v___x_3683_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_a_3681_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
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
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3697_; 
lean_dec_ref(v_a_3450_);
lean_dec_ref(v_e_3446_);
lean_dec_ref(v_below_3445_);
lean_dec_ref(v_containsRecFn_3444_);
lean_dec_ref(v_recFnNames_3443_);
lean_dec_ref(v_positions_3442_);
lean_dec_ref(v_recArgInfos_3441_);
v_a_3690_ = lean_ctor_get(v___x_3466_, 0);
v_isSharedCheck_3697_ = !lean_is_exclusive(v___x_3466_);
if (v_isSharedCheck_3697_ == 0)
{
v___x_3692_ = v___x_3466_;
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3466_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3697_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v___x_3695_; 
if (v_isShared_3693_ == 0)
{
v___x_3695_ = v___x_3692_;
goto v_reusejp_3694_;
}
else
{
lean_object* v_reuseFailAlloc_3696_; 
v_reuseFailAlloc_3696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3696_, 0, v_a_3690_);
v___x_3695_ = v_reuseFailAlloc_3696_;
goto v_reusejp_3694_;
}
v_reusejp_3694_:
{
return v___x_3695_;
}
}
}
v___jp_3453_:
{
lean_object* v_dummy_3460_; lean_object* v_nargs_3461_; lean_object* v___x_3462_; lean_object* v___x_3463_; lean_object* v___x_3464_; lean_object* v___x_3465_; 
v_dummy_3460_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux___lam__2___closed__0);
v_nargs_3461_ = l_Lean_Expr_getAppNumArgs(v_e_3454_);
lean_inc(v_nargs_3461_);
v___x_3462_ = lean_mk_array(v_nargs_3461_, v_dummy_3460_);
v___x_3463_ = lean_unsigned_to_nat(1u);
v___x_3464_ = lean_nat_sub(v_nargs_3461_, v___x_3463_);
lean_dec(v_nargs_3461_);
lean_inc_ref(v_e_3454_);
v___x_3465_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3441_, v_positions_3442_, v_recFnNames_3443_, v_containsRecFn_3444_, v_below_3445_, v_e_3454_, v_e_3454_, v___x_3462_, v___x_3464_, v___y_3455_, v___y_3456_, v___y_3457_, v___y_3458_, v___y_3459_);
lean_dec_ref(v___y_3458_);
return v___x_3465_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___lam__2(lean_object* v_body_3698_, lean_object* v_recArgInfos_3699_, lean_object* v_positions_3700_, lean_object* v_recFnNames_3701_, lean_object* v_containsRecFn_3702_, lean_object* v_below_3703_, lean_object* v_x_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; 
v___x_3711_ = lean_expr_instantiate1(v_body_3698_, v_x_3704_);
lean_inc_ref(v___y_3708_);
v___x_3712_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3699_, v_positions_3700_, v_recFnNames_3701_, v_containsRecFn_3702_, v_below_3703_, v___x_3711_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_, v___y_3709_);
return v___x_3712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0___boxed(lean_object* v_recArgInfos_3713_, lean_object* v_positions_3714_, lean_object* v_recFnNames_3715_, lean_object* v_containsRecFn_3716_, lean_object* v_below_3717_, lean_object* v_sz_3718_, lean_object* v_i_3719_, lean_object* v_bs_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_){
_start:
{
size_t v_sz_boxed_3727_; size_t v_i_boxed_3728_; lean_object* v_res_3729_; 
v_sz_boxed_3727_ = lean_unbox_usize(v_sz_3718_);
lean_dec(v_sz_3718_);
v_i_boxed_3728_ = lean_unbox_usize(v_i_3719_);
lean_dec(v_i_3719_);
v_res_3729_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__0(v_recArgInfos_3713_, v_positions_3714_, v_recFnNames_3715_, v_containsRecFn_3716_, v_below_3717_, v_sz_boxed_3727_, v_i_boxed_3728_, v_bs_3720_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_, v___y_3725_);
lean_dec(v___y_3725_);
lean_dec_ref(v___y_3724_);
lean_dec(v___y_3723_);
lean_dec_ref(v___y_3722_);
lean_dec(v___y_3721_);
return v_res_3729_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10___boxed(lean_object* v_recArgInfos_3730_, lean_object* v_positions_3731_, lean_object* v_recFnNames_3732_, lean_object* v_containsRecFn_3733_, lean_object* v_a_3734_, lean_object* v_e_3735_, lean_object* v_as_3736_, lean_object* v_bs_3737_, lean_object* v_i_3738_, lean_object* v_cs_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_){
_start:
{
uint8_t v_a_32876__boxed_3746_; lean_object* v_res_3747_; 
v_a_32876__boxed_3746_ = lean_unbox(v_a_3734_);
v_res_3747_ = l_Array_zipWithMAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__10(v_recArgInfos_3730_, v_positions_3731_, v_recFnNames_3732_, v_containsRecFn_3733_, v_a_32876__boxed_3746_, v_e_3735_, v_as_3736_, v_bs_3737_, v_i_3738_, v_cs_3739_, v___y_3740_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_);
lean_dec(v___y_3744_);
lean_dec_ref(v___y_3743_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec(v___y_3740_);
lean_dec_ref(v_bs_3737_);
lean_dec_ref(v_as_3736_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2___boxed(lean_object* v_recArgInfos_3748_, lean_object* v_positions_3749_, lean_object* v_recFnNames_3750_, lean_object* v_containsRecFn_3751_, lean_object* v_below_3752_, lean_object* v_e_3753_, lean_object* v_x_3754_, lean_object* v_x_3755_, lean_object* v_x_3756_, lean_object* v___y_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_){
_start:
{
lean_object* v_res_3763_; 
v_res_3763_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__2(v_recArgInfos_3748_, v_positions_3749_, v_recFnNames_3750_, v_containsRecFn_3751_, v_below_3752_, v_e_3753_, v_x_3754_, v_x_3755_, v_x_3756_, v___y_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_);
lean_dec(v___y_3761_);
lean_dec_ref(v___y_3760_);
lean_dec(v___y_3759_);
lean_dec_ref(v___y_3758_);
lean_dec(v___y_3757_);
return v_res_3763_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop___boxed(lean_object* v_recArgInfos_3764_, lean_object* v_positions_3765_, lean_object* v_recFnNames_3766_, lean_object* v_containsRecFn_3767_, lean_object* v_below_3768_, lean_object* v_e_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_, lean_object* v_a_3772_, lean_object* v_a_3773_, lean_object* v_a_3774_, lean_object* v_a_3775_){
_start:
{
lean_object* v_res_3776_; 
v_res_3776_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_3764_, v_positions_3765_, v_recFnNames_3766_, v_containsRecFn_3767_, v_below_3768_, v_e_3769_, v_a_3770_, v_a_3771_, v_a_3772_, v_a_3773_, v_a_3774_);
lean_dec(v_a_3774_);
lean_dec(v_a_3772_);
lean_dec_ref(v_a_3771_);
lean_dec(v_a_3770_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(lean_object* v_00_u03b1_3777_, lean_object* v_msg_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_){
_start:
{
lean_object* v___x_3785_; 
v___x_3785_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___redArg(v_msg_3778_, v___y_3780_, v___y_3781_, v___y_3782_, v___y_3783_);
return v___x_3785_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1___boxed(lean_object* v_00_u03b1_3786_, lean_object* v_msg_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_){
_start:
{
lean_object* v_res_3794_; 
v_res_3794_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__1(v_00_u03b1_3786_, v_msg_3787_, v___y_3788_, v___y_3789_, v___y_3790_, v___y_3791_, v___y_3792_);
lean_dec(v___y_3792_);
lean_dec_ref(v___y_3791_);
lean_dec(v___y_3790_);
lean_dec_ref(v___y_3789_);
lean_dec(v___y_3788_);
return v_res_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(lean_object* v_00_u03b1_3795_, lean_object* v_name_3796_, lean_object* v_type_3797_, lean_object* v_val_3798_, lean_object* v_k_3799_, uint8_t v_nondep_3800_, uint8_t v_kind_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v___x_3808_; 
v___x_3808_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___redArg(v_name_3796_, v_type_3797_, v_val_3798_, v_k_3799_, v_nondep_3800_, v_kind_3801_, v___y_3802_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4___boxed(lean_object* v_00_u03b1_3809_, lean_object* v_name_3810_, lean_object* v_type_3811_, lean_object* v_val_3812_, lean_object* v_k_3813_, lean_object* v_nondep_3814_, lean_object* v_kind_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_){
_start:
{
uint8_t v_nondep_boxed_3822_; uint8_t v_kind_boxed_3823_; lean_object* v_res_3824_; 
v_nondep_boxed_3822_ = lean_unbox(v_nondep_3814_);
v_kind_boxed_3823_ = lean_unbox(v_kind_3815_);
v_res_3824_ = l_Lean_Meta_withLetDecl___at___00Lean_Meta_mapLetDecl___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__4_spec__4(v_00_u03b1_3809_, v_name_3810_, v_type_3811_, v_val_3812_, v_k_3813_, v_nondep_boxed_3822_, v_kind_boxed_3823_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_, v___y_3820_);
lean_dec(v___y_3820_);
lean_dec_ref(v___y_3819_);
lean_dec(v___y_3818_);
lean_dec_ref(v___y_3817_);
lean_dec(v___y_3816_);
return v_res_3824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(lean_object* v_declName_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_){
_start:
{
lean_object* v___x_3832_; 
v___x_3832_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___redArg(v_declName_3825_, v___y_3830_);
return v___x_3832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8___boxed(lean_object* v_declName_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__8(v_declName_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(lean_object* v_cls_3841_, lean_object* v_msg_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_){
_start:
{
lean_object* v___x_3849_; 
v___x_3849_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___redArg(v_cls_3841_, v_msg_3842_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_);
return v___x_3849_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8___boxed(lean_object* v_cls_3850_, lean_object* v_msg_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_){
_start:
{
lean_object* v_res_3858_; 
v_res_3858_ = l_Lean_addTrace___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__8(v_cls_3850_, v_msg_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_);
lean_dec(v___y_3856_);
lean_dec_ref(v___y_3855_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8(lean_object* v_00_u03b1_3859_, lean_object* v_constName_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_){
_start:
{
lean_object* v___x_3867_; 
v___x_3867_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___redArg(v_constName_3860_, v___y_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3868_, lean_object* v_constName_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_, lean_object* v___y_3874_, lean_object* v___y_3875_){
_start:
{
lean_object* v_res_3876_; 
v_res_3876_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8(v_00_u03b1_3868_, v_constName_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_, v___y_3874_);
lean_dec(v___y_3874_);
lean_dec_ref(v___y_3873_);
lean_dec(v___y_3872_);
lean_dec_ref(v___y_3871_);
lean_dec(v___y_3870_);
return v_res_3876_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15(lean_object* v_00_u03b1_3877_, lean_object* v_ref_3878_, lean_object* v_constName_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_){
_start:
{
lean_object* v___x_3886_; 
v___x_3886_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___redArg(v_ref_3878_, v_constName_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_);
return v___x_3886_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15___boxed(lean_object* v_00_u03b1_3887_, lean_object* v_ref_3888_, lean_object* v_constName_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_){
_start:
{
lean_object* v_res_3896_; 
v_res_3896_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15(v_00_u03b1_3887_, v_ref_3888_, v_constName_3889_, v___y_3890_, v___y_3891_, v___y_3892_, v___y_3893_, v___y_3894_);
lean_dec(v___y_3894_);
lean_dec_ref(v___y_3893_);
lean_dec(v___y_3892_);
lean_dec_ref(v___y_3891_);
lean_dec(v___y_3890_);
lean_dec(v_ref_3888_);
return v_res_3896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17(lean_object* v_00_u03b1_3897_, lean_object* v_ref_3898_, lean_object* v_msg_3899_, lean_object* v_declHint_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
lean_object* v___x_3907_; 
v___x_3907_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___redArg(v_ref_3898_, v_msg_3899_, v_declHint_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
return v___x_3907_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17___boxed(lean_object* v_00_u03b1_3908_, lean_object* v_ref_3909_, lean_object* v_msg_3910_, lean_object* v_declHint_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_){
_start:
{
lean_object* v_res_3918_; 
v_res_3918_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17(v_00_u03b1_3908_, v_ref_3909_, v_msg_3910_, v_declHint_3911_, v___y_3912_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_);
lean_dec(v___y_3916_);
lean_dec_ref(v___y_3915_);
lean_dec(v___y_3914_);
lean_dec_ref(v___y_3913_);
lean_dec(v___y_3912_);
lean_dec(v_ref_3909_);
return v_res_3918_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19(lean_object* v_msg_3919_, lean_object* v_declHint_3920_, lean_object* v___y_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_){
_start:
{
lean_object* v___x_3927_; 
v___x_3927_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___redArg(v_msg_3919_, v_declHint_3920_, v___y_3925_);
return v___x_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19___boxed(lean_object* v_msg_3928_, lean_object* v_declHint_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v_res_3936_; 
v_res_3936_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__18_spec__19(v_msg_3928_, v_declHint_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_);
lean_dec(v___y_3934_);
lean_dec_ref(v___y_3933_);
lean_dec(v___y_3932_);
lean_dec_ref(v___y_3931_);
lean_dec(v___y_3930_);
return v_res_3936_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19(lean_object* v_00_u03b1_3937_, lean_object* v_ref_3938_, lean_object* v_msg_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_){
_start:
{
lean_object* v___x_3946_; 
v___x_3946_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___redArg(v_ref_3938_, v_msg_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
return v___x_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19___boxed(lean_object* v_00_u03b1_3947_, lean_object* v_ref_3948_, lean_object* v_msg_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_Meta_matchMatcherApp_x3f___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop_spec__5_spec__6_spec__8_spec__15_spec__17_spec__19(v_00_u03b1_3947_, v_ref_3948_, v_msg_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
lean_dec(v___y_3950_);
lean_dec(v_ref_3948_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(lean_object* v_recFnNames_3957_, lean_object* v_e_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v_fst_3968_; lean_object* v_snd_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; 
v___x_3965_ = lean_st_ref_get(v___y_3963_);
lean_dec(v___x_3965_);
v___x_3966_ = lean_st_ref_take(v___y_3959_);
v___x_3967_ = l_Lean_HasConstCache_containsUnsafe(v_recFnNames_3957_, v_e_3958_, v___x_3966_);
v_fst_3968_ = lean_ctor_get(v___x_3967_, 0);
lean_inc(v_fst_3968_);
v_snd_3969_ = lean_ctor_get(v___x_3967_, 1);
lean_inc(v_snd_3969_);
lean_dec_ref(v___x_3967_);
v___x_3970_ = lean_st_ref_set(v___y_3959_, v_snd_3969_);
v___x_3971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3971_, 0, v_fst_3968_);
return v___x_3971_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed(lean_object* v_recFnNames_3972_, lean_object* v_e_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_){
_start:
{
lean_object* v_res_3980_; 
v_res_3980_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0(v_recFnNames_3972_, v_e_3973_, v___y_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_);
lean_dec(v___y_3978_);
lean_dec_ref(v___y_3977_);
lean_dec(v___y_3976_);
lean_dec_ref(v___y_3975_);
lean_dec(v___y_3974_);
lean_dec_ref(v_recFnNames_3972_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(size_t v_sz_3981_, size_t v_i_3982_, lean_object* v_bs_3983_){
_start:
{
uint8_t v___x_3984_; 
v___x_3984_ = lean_usize_dec_lt(v_i_3982_, v_sz_3981_);
if (v___x_3984_ == 0)
{
return v_bs_3983_;
}
else
{
lean_object* v_v_3985_; lean_object* v_fnName_3986_; lean_object* v___x_3987_; lean_object* v_bs_x27_3988_; size_t v___x_3989_; size_t v___x_3990_; lean_object* v___x_3991_; 
v_v_3985_ = lean_array_uget_borrowed(v_bs_3983_, v_i_3982_);
v_fnName_3986_ = lean_ctor_get(v_v_3985_, 0);
lean_inc(v_fnName_3986_);
v___x_3987_ = lean_unsigned_to_nat(0u);
v_bs_x27_3988_ = lean_array_uset(v_bs_3983_, v_i_3982_, v___x_3987_);
v___x_3989_ = ((size_t)1ULL);
v___x_3990_ = lean_usize_add(v_i_3982_, v___x_3989_);
v___x_3991_ = lean_array_uset(v_bs_x27_3988_, v_i_3982_, v_fnName_3986_);
v_i_3982_ = v___x_3990_;
v_bs_3983_ = v___x_3991_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0___boxed(lean_object* v_sz_3993_, lean_object* v_i_3994_, lean_object* v_bs_3995_){
_start:
{
size_t v_sz_boxed_3996_; size_t v_i_boxed_3997_; lean_object* v_res_3998_; 
v_sz_boxed_3996_ = lean_unbox_usize(v_sz_3993_);
lean_dec(v_sz_3993_);
v_i_boxed_3997_ = lean_unbox_usize(v_i_3994_);
lean_dec(v_i_3994_);
v_res_3998_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_boxed_3996_, v_i_boxed_3997_, v_bs_3995_);
return v_res_3998_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0(void){
_start:
{
lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; 
v___x_3999_ = lean_box(0);
v___x_4000_ = lean_unsigned_to_nat(16u);
v___x_4001_ = lean_mk_array(v___x_4000_, v___x_3999_);
return v___x_4001_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1(void){
_start:
{
lean_object* v___x_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v___x_4002_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__0);
v___x_4003_ = lean_unsigned_to_nat(0u);
v___x_4004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4004_, 0, v___x_4003_);
lean_ctor_set(v___x_4004_, 1, v___x_4002_);
return v___x_4004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(lean_object* v_recArgInfos_4005_, lean_object* v_positions_4006_, lean_object* v_below_4007_, lean_object* v_e_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_, lean_object* v_a_4012_){
_start:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; size_t v_sz_4017_; size_t v___x_4018_; lean_object* v_recFnNames_4019_; lean_object* v_containsRecFn_4020_; lean_object* v___x_4021_; 
v___x_4014_ = lean_st_ref_get(v_a_4012_);
lean_dec(v___x_4014_);
v___x_4015_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___closed__1);
v___x_4016_ = lean_st_mk_ref(v___x_4015_);
v_sz_4017_ = lean_array_size(v_recArgInfos_4005_);
v___x_4018_ = ((size_t)0ULL);
lean_inc_ref(v_recArgInfos_4005_);
v_recFnNames_4019_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_spec__0(v_sz_4017_, v___x_4018_, v_recArgInfos_4005_);
lean_inc_ref(v_recFnNames_4019_);
v_containsRecFn_4020_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___lam__0___boxed), 8, 1);
lean_closure_set(v_containsRecFn_4020_, 0, v_recFnNames_4019_);
lean_inc_ref(v_a_4011_);
v___x_4021_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps_loop(v_recArgInfos_4005_, v_positions_4006_, v_recFnNames_4019_, v_containsRecFn_4020_, v_below_4007_, v_e_4008_, v___x_4016_, v_a_4009_, v_a_4010_, v_a_4011_, v_a_4012_);
if (lean_obj_tag(v___x_4021_) == 0)
{
lean_object* v_a_4022_; lean_object* v___x_4024_; uint8_t v_isShared_4025_; uint8_t v_isSharedCheck_4031_; 
v_a_4022_ = lean_ctor_get(v___x_4021_, 0);
v_isSharedCheck_4031_ = !lean_is_exclusive(v___x_4021_);
if (v_isSharedCheck_4031_ == 0)
{
v___x_4024_ = v___x_4021_;
v_isShared_4025_ = v_isSharedCheck_4031_;
goto v_resetjp_4023_;
}
else
{
lean_inc(v_a_4022_);
lean_dec(v___x_4021_);
v___x_4024_ = lean_box(0);
v_isShared_4025_ = v_isSharedCheck_4031_;
goto v_resetjp_4023_;
}
v_resetjp_4023_:
{
lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4029_; 
v___x_4026_ = lean_st_ref_get(v_a_4012_);
lean_dec(v___x_4026_);
v___x_4027_ = lean_st_ref_get(v___x_4016_);
lean_dec(v___x_4016_);
lean_dec(v___x_4027_);
if (v_isShared_4025_ == 0)
{
v___x_4029_ = v___x_4024_;
goto v_reusejp_4028_;
}
else
{
lean_object* v_reuseFailAlloc_4030_; 
v_reuseFailAlloc_4030_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4030_, 0, v_a_4022_);
v___x_4029_ = v_reuseFailAlloc_4030_;
goto v_reusejp_4028_;
}
v_reusejp_4028_:
{
return v___x_4029_;
}
}
}
else
{
lean_dec(v___x_4016_);
return v___x_4021_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps___boxed(lean_object* v_recArgInfos_4032_, lean_object* v_positions_4033_, lean_object* v_below_4034_, lean_object* v_e_4035_, lean_object* v_a_4036_, lean_object* v_a_4037_, lean_object* v_a_4038_, lean_object* v_a_4039_, lean_object* v_a_4040_){
_start:
{
lean_object* v_res_4041_; 
v_res_4041_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_4032_, v_positions_4033_, v_below_4034_, v_e_4035_, v_a_4036_, v_a_4037_, v_a_4038_, v_a_4039_);
lean_dec(v_a_4039_);
lean_dec_ref(v_a_4038_);
lean_dec(v_a_4037_);
lean_dec_ref(v_a_4036_);
return v_res_4041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(lean_object* v_e_4042_, lean_object* v_k_4043_, uint8_t v_cleanupAnnotations_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_){
_start:
{
lean_object* v___f_4050_; uint8_t v___x_4051_; uint8_t v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v___f_4050_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4050_, 0, v_k_4043_);
v___x_4051_ = 1;
v___x_4052_ = 0;
v___x_4053_ = lean_box(0);
v___x_4054_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4042_, v___x_4051_, v___x_4052_, v___x_4051_, v___x_4052_, v___x_4053_, v___f_4050_, v_cleanupAnnotations_4044_, v___y_4045_, v___y_4046_, v___y_4047_, v___y_4048_);
if (lean_obj_tag(v___x_4054_) == 0)
{
lean_object* v_a_4055_; lean_object* v___x_4057_; uint8_t v_isShared_4058_; uint8_t v_isSharedCheck_4062_; 
v_a_4055_ = lean_ctor_get(v___x_4054_, 0);
v_isSharedCheck_4062_ = !lean_is_exclusive(v___x_4054_);
if (v_isSharedCheck_4062_ == 0)
{
v___x_4057_ = v___x_4054_;
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
else
{
lean_inc(v_a_4055_);
lean_dec(v___x_4054_);
v___x_4057_ = lean_box(0);
v_isShared_4058_ = v_isSharedCheck_4062_;
goto v_resetjp_4056_;
}
v_resetjp_4056_:
{
lean_object* v___x_4060_; 
if (v_isShared_4058_ == 0)
{
v___x_4060_ = v___x_4057_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4061_; 
v_reuseFailAlloc_4061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4061_, 0, v_a_4055_);
v___x_4060_ = v_reuseFailAlloc_4061_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
return v___x_4060_;
}
}
}
else
{
lean_object* v_a_4063_; lean_object* v___x_4065_; uint8_t v_isShared_4066_; uint8_t v_isSharedCheck_4070_; 
v_a_4063_ = lean_ctor_get(v___x_4054_, 0);
v_isSharedCheck_4070_ = !lean_is_exclusive(v___x_4054_);
if (v_isSharedCheck_4070_ == 0)
{
v___x_4065_ = v___x_4054_;
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
else
{
lean_inc(v_a_4063_);
lean_dec(v___x_4054_);
v___x_4065_ = lean_box(0);
v_isShared_4066_ = v_isSharedCheck_4070_;
goto v_resetjp_4064_;
}
v_resetjp_4064_:
{
lean_object* v___x_4068_; 
if (v_isShared_4066_ == 0)
{
v___x_4068_ = v___x_4065_;
goto v_reusejp_4067_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_a_4063_);
v___x_4068_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4067_;
}
v_reusejp_4067_:
{
return v___x_4068_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg___boxed(lean_object* v_e_4071_, lean_object* v_k_4072_, lean_object* v_cleanupAnnotations_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4079_; lean_object* v_res_4080_; 
v_cleanupAnnotations_boxed_4079_ = lean_unbox(v_cleanupAnnotations_4073_);
v_res_4080_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4071_, v_k_4072_, v_cleanupAnnotations_boxed_4079_, v___y_4074_, v___y_4075_, v___y_4076_, v___y_4077_);
lean_dec(v___y_4077_);
lean_dec_ref(v___y_4076_);
lean_dec(v___y_4075_);
lean_dec_ref(v___y_4074_);
return v_res_4080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(lean_object* v_00_u03b1_4081_, lean_object* v_e_4082_, lean_object* v_k_4083_, uint8_t v_cleanupAnnotations_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
lean_object* v___x_4090_; 
v___x_4090_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_e_4082_, v_k_4083_, v_cleanupAnnotations_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___boxed(lean_object* v_00_u03b1_4091_, lean_object* v_e_4092_, lean_object* v_k_4093_, lean_object* v_cleanupAnnotations_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4100_; lean_object* v_res_4101_; 
v_cleanupAnnotations_boxed_4100_ = lean_unbox(v_cleanupAnnotations_4094_);
v_res_4101_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0(v_00_u03b1_4091_, v_e_4092_, v_k_4093_, v_cleanupAnnotations_boxed_4100_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
return v_res_4101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(lean_object* v_type_4102_, lean_object* v_recArgInfo_4103_, lean_object* v_xs_4104_, lean_object* v___value_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_){
_start:
{
lean_object* v___x_4111_; 
v___x_4111_ = l_Lean_Meta_instantiateForall(v_type_4102_, v_xs_4104_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
if (lean_obj_tag(v___x_4111_) == 0)
{
lean_object* v_a_4112_; lean_object* v___x_4113_; lean_object* v_fst_4114_; lean_object* v_snd_4115_; uint8_t v___x_4116_; uint8_t v___x_4117_; uint8_t v___x_4118_; lean_object* v___x_4119_; 
v_a_4112_ = lean_ctor_get(v___x_4111_, 0);
lean_inc(v_a_4112_);
lean_dec_ref(v___x_4111_);
v___x_4113_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4103_, v_xs_4104_);
v_fst_4114_ = lean_ctor_get(v___x_4113_, 0);
lean_inc(v_fst_4114_);
v_snd_4115_ = lean_ctor_get(v___x_4113_, 1);
lean_inc(v_snd_4115_);
lean_dec_ref(v___x_4113_);
v___x_4116_ = 0;
v___x_4117_ = 1;
v___x_4118_ = 1;
v___x_4119_ = l_Lean_Meta_mkForallFVars(v_snd_4115_, v_a_4112_, v___x_4116_, v___x_4117_, v___x_4117_, v___x_4118_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
lean_dec(v_snd_4115_);
if (lean_obj_tag(v___x_4119_) == 0)
{
lean_object* v_a_4120_; lean_object* v___x_4121_; 
v_a_4120_ = lean_ctor_get(v___x_4119_, 0);
lean_inc(v_a_4120_);
lean_dec_ref(v___x_4119_);
v___x_4121_ = l_Lean_Meta_mkLambdaFVars(v_fst_4114_, v_a_4120_, v___x_4116_, v___x_4117_, v___x_4116_, v___x_4117_, v___x_4118_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
lean_dec(v_fst_4114_);
return v___x_4121_;
}
else
{
lean_dec(v_fst_4114_);
return v___x_4119_;
}
}
else
{
lean_dec_ref(v_xs_4104_);
lean_dec_ref(v_recArgInfo_4103_);
return v___x_4111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed(lean_object* v_type_4122_, lean_object* v_recArgInfo_4123_, lean_object* v_xs_4124_, lean_object* v___value_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_){
_start:
{
lean_object* v_res_4131_; 
v_res_4131_ = l_Lean_Elab_Structural_mkBRecOnMotive___lam__0(v_type_4122_, v_recArgInfo_4123_, v_xs_4124_, v___value_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_);
lean_dec(v___y_4129_);
lean_dec_ref(v___y_4128_);
lean_dec(v___y_4127_);
lean_dec_ref(v___y_4126_);
lean_dec_ref(v___value_4125_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive(lean_object* v_recArgInfo_4132_, lean_object* v_value_4133_, lean_object* v_type_4134_, lean_object* v_a_4135_, lean_object* v_a_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_){
_start:
{
lean_object* v___f_4140_; uint8_t v___x_4141_; lean_object* v___x_4142_; 
v___f_4140_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnMotive___lam__0___boxed), 9, 2);
lean_closure_set(v___f_4140_, 0, v_type_4134_);
lean_closure_set(v___f_4140_, 1, v_recArgInfo_4132_);
v___x_4141_ = 0;
v___x_4142_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4133_, v___f_4140_, v___x_4141_, v_a_4135_, v_a_4136_, v_a_4137_, v_a_4138_);
return v___x_4142_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnMotive___boxed(lean_object* v_recArgInfo_4143_, lean_object* v_value_4144_, lean_object* v_type_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_){
_start:
{
lean_object* v_res_4151_; 
v_res_4151_ = l_Lean_Elab_Structural_mkBRecOnMotive(v_recArgInfo_4143_, v_value_4144_, v_type_4145_, v_a_4146_, v_a_4147_, v_a_4148_, v_a_4149_);
lean_dec(v_a_4149_);
lean_dec_ref(v_a_4148_);
lean_dec(v_a_4147_);
lean_dec_ref(v_a_4146_);
return v_res_4151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(lean_object* v_type_4152_, lean_object* v_maxFVars_x3f_4153_, lean_object* v_k_4154_, uint8_t v_cleanupAnnotations_4155_, uint8_t v_whnfType_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_){
_start:
{
lean_object* v___f_4162_; lean_object* v___x_4163_; 
v___f_4162_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_toBelowAux_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4162_, 0, v_k_4154_);
v___x_4163_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4152_, v_maxFVars_x3f_4153_, v___f_4162_, v_cleanupAnnotations_4155_, v_whnfType_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
if (lean_obj_tag(v___x_4163_) == 0)
{
lean_object* v_a_4164_; lean_object* v___x_4166_; uint8_t v_isShared_4167_; uint8_t v_isSharedCheck_4171_; 
v_a_4164_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4171_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4171_ == 0)
{
v___x_4166_ = v___x_4163_;
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
else
{
lean_inc(v_a_4164_);
lean_dec(v___x_4163_);
v___x_4166_ = lean_box(0);
v_isShared_4167_ = v_isSharedCheck_4171_;
goto v_resetjp_4165_;
}
v_resetjp_4165_:
{
lean_object* v___x_4169_; 
if (v_isShared_4167_ == 0)
{
v___x_4169_ = v___x_4166_;
goto v_reusejp_4168_;
}
else
{
lean_object* v_reuseFailAlloc_4170_; 
v_reuseFailAlloc_4170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4170_, 0, v_a_4164_);
v___x_4169_ = v_reuseFailAlloc_4170_;
goto v_reusejp_4168_;
}
v_reusejp_4168_:
{
return v___x_4169_;
}
}
}
else
{
lean_object* v_a_4172_; lean_object* v___x_4174_; uint8_t v_isShared_4175_; uint8_t v_isSharedCheck_4179_; 
v_a_4172_ = lean_ctor_get(v___x_4163_, 0);
v_isSharedCheck_4179_ = !lean_is_exclusive(v___x_4163_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4174_ = v___x_4163_;
v_isShared_4175_ = v_isSharedCheck_4179_;
goto v_resetjp_4173_;
}
else
{
lean_inc(v_a_4172_);
lean_dec(v___x_4163_);
v___x_4174_ = lean_box(0);
v_isShared_4175_ = v_isSharedCheck_4179_;
goto v_resetjp_4173_;
}
v_resetjp_4173_:
{
lean_object* v___x_4177_; 
if (v_isShared_4175_ == 0)
{
v___x_4177_ = v___x_4174_;
goto v_reusejp_4176_;
}
else
{
lean_object* v_reuseFailAlloc_4178_; 
v_reuseFailAlloc_4178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4178_, 0, v_a_4172_);
v___x_4177_ = v_reuseFailAlloc_4178_;
goto v_reusejp_4176_;
}
v_reusejp_4176_:
{
return v___x_4177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg___boxed(lean_object* v_type_4180_, lean_object* v_maxFVars_x3f_4181_, lean_object* v_k_4182_, lean_object* v_cleanupAnnotations_4183_, lean_object* v_whnfType_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4190_; uint8_t v_whnfType_boxed_4191_; lean_object* v_res_4192_; 
v_cleanupAnnotations_boxed_4190_ = lean_unbox(v_cleanupAnnotations_4183_);
v_whnfType_boxed_4191_ = lean_unbox(v_whnfType_4184_);
v_res_4192_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4180_, v_maxFVars_x3f_4181_, v_k_4182_, v_cleanupAnnotations_boxed_4190_, v_whnfType_boxed_4191_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_);
lean_dec(v___y_4188_);
lean_dec_ref(v___y_4187_);
lean_dec(v___y_4186_);
lean_dec_ref(v___y_4185_);
return v_res_4192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(lean_object* v_00_u03b1_4193_, lean_object* v_type_4194_, lean_object* v_maxFVars_x3f_4195_, lean_object* v_k_4196_, uint8_t v_cleanupAnnotations_4197_, uint8_t v_whnfType_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_){
_start:
{
lean_object* v___x_4204_; 
v___x_4204_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_type_4194_, v_maxFVars_x3f_4195_, v_k_4196_, v_cleanupAnnotations_4197_, v_whnfType_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
return v___x_4204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___boxed(lean_object* v_00_u03b1_4205_, lean_object* v_type_4206_, lean_object* v_maxFVars_x3f_4207_, lean_object* v_k_4208_, lean_object* v_cleanupAnnotations_4209_, lean_object* v_whnfType_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_, lean_object* v___y_4215_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4216_; uint8_t v_whnfType_boxed_4217_; lean_object* v_res_4218_; 
v_cleanupAnnotations_boxed_4216_ = lean_unbox(v_cleanupAnnotations_4209_);
v_whnfType_boxed_4217_ = lean_unbox(v_whnfType_4210_);
v_res_4218_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0(v_00_u03b1_4205_, v_type_4206_, v_maxFVars_x3f_4207_, v_k_4208_, v_cleanupAnnotations_boxed_4216_, v_whnfType_boxed_4217_, v___y_4211_, v___y_4212_, v___y_4213_, v___y_4214_);
lean_dec(v___y_4214_);
lean_dec_ref(v___y_4213_);
lean_dec(v___y_4212_);
lean_dec_ref(v___y_4211_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0(lean_object* v___x_4219_, lean_object* v_recArgInfos_4220_, lean_object* v_positions_4221_, lean_object* v_value_4222_, lean_object* v_fst_4223_, lean_object* v_snd_4224_, lean_object* v_below_4225_, lean_object* v_x_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_){
_start:
{
lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; 
v___x_4232_ = lean_unsigned_to_nat(0u);
v___x_4233_ = lean_array_get_borrowed(v___x_4219_, v_below_4225_, v___x_4232_);
lean_inc(v___x_4233_);
v___x_4234_ = l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_replaceRecApps(v_recArgInfos_4220_, v_positions_4221_, v___x_4233_, v_value_4222_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_);
if (lean_obj_tag(v___x_4234_) == 0)
{
lean_object* v_a_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; uint8_t v___x_4241_; uint8_t v___x_4242_; uint8_t v___x_4243_; lean_object* v___x_4244_; 
v_a_4235_ = lean_ctor_get(v___x_4234_, 0);
lean_inc(v_a_4235_);
lean_dec_ref(v___x_4234_);
v___x_4236_ = lean_unsigned_to_nat(1u);
v___x_4237_ = lean_mk_empty_array_with_capacity(v___x_4236_);
lean_inc(v___x_4233_);
v___x_4238_ = lean_array_push(v___x_4237_, v___x_4233_);
v___x_4239_ = l_Array_append___redArg(v_fst_4223_, v___x_4238_);
lean_dec_ref(v___x_4238_);
v___x_4240_ = l_Array_append___redArg(v___x_4239_, v_snd_4224_);
v___x_4241_ = 0;
v___x_4242_ = 1;
v___x_4243_ = 1;
v___x_4244_ = l_Lean_Meta_mkLambdaFVars(v___x_4240_, v_a_4235_, v___x_4241_, v___x_4242_, v___x_4241_, v___x_4242_, v___x_4243_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_);
lean_dec_ref(v___x_4240_);
return v___x_4244_;
}
else
{
lean_dec_ref(v_fst_4223_);
return v___x_4234_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed(lean_object* v___x_4245_, lean_object* v_recArgInfos_4246_, lean_object* v_positions_4247_, lean_object* v_value_4248_, lean_object* v_fst_4249_, lean_object* v_snd_4250_, lean_object* v_below_4251_, lean_object* v_x_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_){
_start:
{
lean_object* v_res_4258_; 
v_res_4258_ = l_Lean_Elab_Structural_mkBRecOnF___lam__0(v___x_4245_, v_recArgInfos_4246_, v_positions_4247_, v_value_4248_, v_fst_4249_, v_snd_4250_, v_below_4251_, v_x_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_);
lean_dec(v___y_4256_);
lean_dec_ref(v___y_4255_);
lean_dec(v___y_4254_);
lean_dec_ref(v___y_4253_);
lean_dec_ref(v_x_4252_);
lean_dec_ref(v_below_4251_);
lean_dec_ref(v_snd_4250_);
lean_dec_ref(v___x_4245_);
return v_res_4258_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0(void){
_start:
{
lean_object* v___x_4259_; lean_object* v___x_4260_; 
v___x_4259_ = lean_unsigned_to_nat(1u);
v___x_4260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4259_);
return v___x_4260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1(lean_object* v_recArgInfo_4261_, lean_object* v_FType_4262_, lean_object* v___x_4263_, lean_object* v_recArgInfos_4264_, lean_object* v_positions_4265_, lean_object* v_xs_4266_, lean_object* v_value_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_){
_start:
{
lean_object* v___x_4273_; lean_object* v_fst_4274_; lean_object* v_snd_4275_; lean_object* v___x_4276_; 
v___x_4273_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_4261_, v_xs_4266_);
v_fst_4274_ = lean_ctor_get(v___x_4273_, 0);
lean_inc(v_fst_4274_);
v_snd_4275_ = lean_ctor_get(v___x_4273_, 1);
lean_inc(v_snd_4275_);
lean_dec_ref(v___x_4273_);
v___x_4276_ = l_Lean_Meta_instantiateForall(v_FType_4262_, v_fst_4274_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
if (lean_obj_tag(v___x_4276_) == 0)
{
lean_object* v_a_4277_; lean_object* v___f_4278_; lean_object* v___x_4279_; uint8_t v___x_4280_; lean_object* v___x_4281_; 
v_a_4277_ = lean_ctor_get(v___x_4276_, 0);
lean_inc(v_a_4277_);
lean_dec_ref(v___x_4276_);
v___f_4278_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__0___boxed), 13, 6);
lean_closure_set(v___f_4278_, 0, v___x_4263_);
lean_closure_set(v___f_4278_, 1, v_recArgInfos_4264_);
lean_closure_set(v___f_4278_, 2, v_positions_4265_);
lean_closure_set(v___f_4278_, 3, v_value_4267_);
lean_closure_set(v___f_4278_, 4, v_fst_4274_);
lean_closure_set(v___f_4278_, 5, v_snd_4275_);
v___x_4279_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0, &l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0_once, _init_l_Lean_Elab_Structural_mkBRecOnF___lam__1___closed__0);
v___x_4280_ = 0;
v___x_4281_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4277_, v___x_4279_, v___f_4278_, v___x_4280_, v___x_4280_, v___y_4268_, v___y_4269_, v___y_4270_, v___y_4271_);
return v___x_4281_;
}
else
{
lean_dec(v_snd_4275_);
lean_dec(v_fst_4274_);
lean_dec_ref(v_value_4267_);
lean_dec_ref(v_positions_4265_);
lean_dec_ref(v_recArgInfos_4264_);
lean_dec_ref(v___x_4263_);
return v___x_4276_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed(lean_object* v_recArgInfo_4282_, lean_object* v_FType_4283_, lean_object* v___x_4284_, lean_object* v_recArgInfos_4285_, lean_object* v_positions_4286_, lean_object* v_xs_4287_, lean_object* v_value_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
lean_object* v_res_4294_; 
v_res_4294_ = l_Lean_Elab_Structural_mkBRecOnF___lam__1(v_recArgInfo_4282_, v_FType_4283_, v___x_4284_, v_recArgInfos_4285_, v_positions_4286_, v_xs_4287_, v_value_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
return v_res_4294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF(lean_object* v_recArgInfos_4295_, lean_object* v_positions_4296_, lean_object* v_recArgInfo_4297_, lean_object* v_value_4298_, lean_object* v_FType_4299_, lean_object* v_a_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_){
_start:
{
lean_object* v___x_4305_; lean_object* v___f_4306_; uint8_t v___x_4307_; lean_object* v___x_4308_; 
v___x_4305_ = l_Lean_instInhabitedExpr;
v___f_4306_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnF___lam__1___boxed), 12, 5);
lean_closure_set(v___f_4306_, 0, v_recArgInfo_4297_);
lean_closure_set(v___f_4306_, 1, v_FType_4299_);
lean_closure_set(v___f_4306_, 2, v___x_4305_);
lean_closure_set(v___f_4306_, 3, v_recArgInfos_4295_);
lean_closure_set(v___f_4306_, 4, v_positions_4296_);
v___x_4307_ = 0;
v___x_4308_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_4298_, v___f_4306_, v___x_4307_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnF___boxed(lean_object* v_recArgInfos_4309_, lean_object* v_positions_4310_, lean_object* v_recArgInfo_4311_, lean_object* v_value_4312_, lean_object* v_FType_4313_, lean_object* v_a_4314_, lean_object* v_a_4315_, lean_object* v_a_4316_, lean_object* v_a_4317_, lean_object* v_a_4318_){
_start:
{
lean_object* v_res_4319_; 
v_res_4319_ = l_Lean_Elab_Structural_mkBRecOnF(v_recArgInfos_4309_, v_positions_4310_, v_recArgInfo_4311_, v_value_4312_, v_FType_4313_, v_a_4314_, v_a_4315_, v_a_4316_, v_a_4317_);
lean_dec(v_a_4317_);
lean_dec_ref(v_a_4316_);
lean_dec(v_a_4315_);
lean_dec_ref(v_a_4314_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0(lean_object* v_toIndGroupInfo_4320_, lean_object* v_params_4321_, uint8_t v_isIndPred_4322_, lean_object* v_brecOnUniv_4323_, lean_object* v_levels_4324_, lean_object* v_idx_4325_){
_start:
{
lean_object* v_n_4326_; lean_object* v___y_4328_; 
v_n_4326_ = l_Lean_Elab_Structural_IndGroupInfo_brecOnName(v_toIndGroupInfo_4320_, v_idx_4325_);
if (v_isIndPred_4322_ == 0)
{
lean_object* v___x_4331_; 
v___x_4331_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4331_, 0, v_brecOnUniv_4323_);
lean_ctor_set(v___x_4331_, 1, v_levels_4324_);
v___y_4328_ = v___x_4331_;
goto v___jp_4327_;
}
else
{
lean_dec(v_brecOnUniv_4323_);
v___y_4328_ = v_levels_4324_;
goto v___jp_4327_;
}
v___jp_4327_:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; 
v___x_4329_ = l_Lean_Expr_const___override(v_n_4326_, v___y_4328_);
v___x_4330_ = l_Lean_mkAppN(v___x_4329_, v_params_4321_);
return v___x_4330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed(lean_object* v_toIndGroupInfo_4332_, lean_object* v_params_4333_, lean_object* v_isIndPred_4334_, lean_object* v_brecOnUniv_4335_, lean_object* v_levels_4336_, lean_object* v_idx_4337_){
_start:
{
uint8_t v_isIndPred_boxed_4338_; lean_object* v_res_4339_; 
v_isIndPred_boxed_4338_ = lean_unbox(v_isIndPred_4334_);
v_res_4339_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4332_, v_params_4333_, v_isIndPred_boxed_4338_, v_brecOnUniv_4335_, v_levels_4336_, v_idx_4337_);
lean_dec(v_idx_4337_);
lean_dec_ref(v_params_4333_);
lean_dec_ref(v_toIndGroupInfo_4332_);
return v_res_4339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1(lean_object* v_brecOnCons_4340_, lean_object* v_a_4341_, lean_object* v_n_4342_){
_start:
{
lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4343_ = lean_apply_1(v_brecOnCons_4340_, v_n_4342_);
v___x_4344_ = l_Lean_mkAppN(v___x_4343_, v_a_4341_);
return v___x_4344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed(lean_object* v_brecOnCons_4345_, lean_object* v_a_4346_, lean_object* v_n_4347_){
_start:
{
lean_object* v_res_4348_; 
v_res_4348_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__1(v_brecOnCons_4345_, v_a_4346_, v_n_4347_);
lean_dec_ref(v_a_4346_);
return v_res_4348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2(lean_object* v_x_4349_, lean_object* v_type_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v___x_4356_; 
v___x_4356_ = l_Lean_Meta_getLevel(v_type_4350_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
return v___x_4356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed(lean_object* v_x_4357_, lean_object* v_type_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v_res_4364_; 
v_res_4364_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__2(v_x_4357_, v_type_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_);
lean_dec(v___y_4362_);
lean_dec_ref(v___y_4361_);
lean_dec(v___y_4360_);
lean_dec_ref(v___y_4359_);
lean_dec_ref(v_x_4357_);
return v_res_4364_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(lean_object* v_xs_4365_, size_t v_sz_4366_, size_t v_i_4367_, lean_object* v_bs_4368_){
_start:
{
uint8_t v___x_4369_; 
v___x_4369_ = lean_usize_dec_lt(v_i_4367_, v_sz_4366_);
if (v___x_4369_ == 0)
{
return v_bs_4368_;
}
else
{
lean_object* v___x_4370_; lean_object* v_v_4371_; lean_object* v___x_4372_; lean_object* v_bs_x27_4373_; lean_object* v___x_4374_; size_t v___x_4375_; size_t v___x_4376_; lean_object* v___x_4377_; 
v___x_4370_ = l_Lean_instInhabitedExpr;
v_v_4371_ = lean_array_uget(v_bs_4368_, v_i_4367_);
v___x_4372_ = lean_unsigned_to_nat(0u);
v_bs_x27_4373_ = lean_array_uset(v_bs_4368_, v_i_4367_, v___x_4372_);
v___x_4374_ = lean_array_get_borrowed(v___x_4370_, v_xs_4365_, v_v_4371_);
lean_dec(v_v_4371_);
v___x_4375_ = ((size_t)1ULL);
v___x_4376_ = lean_usize_add(v_i_4367_, v___x_4375_);
lean_inc(v___x_4374_);
v___x_4377_ = lean_array_uset(v_bs_x27_4373_, v_i_4367_, v___x_4374_);
v_i_4367_ = v___x_4376_;
v_bs_4368_ = v___x_4377_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0___boxed(lean_object* v_xs_4379_, lean_object* v_sz_4380_, lean_object* v_i_4381_, lean_object* v_bs_4382_){
_start:
{
size_t v_sz_boxed_4383_; size_t v_i_boxed_4384_; lean_object* v_res_4385_; 
v_sz_boxed_4383_ = lean_unbox_usize(v_sz_4380_);
lean_dec(v_sz_4380_);
v_i_boxed_4384_ = lean_unbox_usize(v_i_4381_);
lean_dec(v_i_4381_);
v_res_4385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(v_xs_4379_, v_sz_boxed_4383_, v_i_boxed_4384_, v_bs_4382_);
lean_dec_ref(v_xs_4379_);
return v_res_4385_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(lean_object* v_xs_4386_, lean_object* v_f_4387_, lean_object* v_as_4388_, lean_object* v_bs_4389_, lean_object* v_i_4390_, lean_object* v_cs_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_){
_start:
{
lean_object* v___x_4397_; uint8_t v___x_4398_; 
v___x_4397_ = lean_array_get_size(v_as_4388_);
v___x_4398_ = lean_nat_dec_lt(v_i_4390_, v___x_4397_);
if (v___x_4398_ == 0)
{
lean_object* v___x_4399_; 
lean_dec(v_i_4390_);
lean_dec_ref(v_f_4387_);
v___x_4399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4399_, 0, v_cs_4391_);
return v___x_4399_;
}
else
{
lean_object* v___x_4400_; uint8_t v___x_4401_; 
v___x_4400_ = lean_array_get_size(v_bs_4389_);
v___x_4401_ = lean_nat_dec_lt(v_i_4390_, v___x_4400_);
if (v___x_4401_ == 0)
{
lean_object* v___x_4402_; 
lean_dec(v_i_4390_);
lean_dec_ref(v_f_4387_);
v___x_4402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4402_, 0, v_cs_4391_);
return v___x_4402_;
}
else
{
lean_object* v_a_4403_; lean_object* v_b_4404_; size_t v_sz_4405_; size_t v___x_4406_; lean_object* v___x_4407_; lean_object* v___x_4408_; 
v_a_4403_ = lean_array_fget_borrowed(v_as_4388_, v_i_4390_);
v_b_4404_ = lean_array_fget_borrowed(v_bs_4389_, v_i_4390_);
v_sz_4405_ = lean_array_size(v_b_4404_);
v___x_4406_ = ((size_t)0ULL);
lean_inc(v_b_4404_);
v___x_4407_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__0(v_xs_4386_, v_sz_4405_, v___x_4406_, v_b_4404_);
lean_inc_ref(v_f_4387_);
lean_inc(v___y_4395_);
lean_inc_ref(v___y_4394_);
lean_inc(v___y_4393_);
lean_inc_ref(v___y_4392_);
lean_inc(v_a_4403_);
v___x_4408_ = lean_apply_7(v_f_4387_, v_a_4403_, v___x_4407_, v___y_4392_, v___y_4393_, v___y_4394_, v___y_4395_, lean_box(0));
if (lean_obj_tag(v___x_4408_) == 0)
{
lean_object* v_a_4409_; lean_object* v___x_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; 
v_a_4409_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_a_4409_);
lean_dec_ref(v___x_4408_);
v___x_4410_ = lean_unsigned_to_nat(1u);
v___x_4411_ = lean_nat_add(v_i_4390_, v___x_4410_);
lean_dec(v_i_4390_);
v___x_4412_ = lean_array_push(v_cs_4391_, v_a_4409_);
v_i_4390_ = v___x_4411_;
v_cs_4391_ = v___x_4412_;
goto _start;
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_dec_ref(v_cs_4391_);
lean_dec(v_i_4390_);
lean_dec_ref(v_f_4387_);
v_a_4414_ = lean_ctor_get(v___x_4408_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4408_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4408_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4408_);
v___x_4416_ = lean_box(0);
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
v_resetjp_4415_:
{
lean_object* v___x_4419_; 
if (v_isShared_4417_ == 0)
{
v___x_4419_ = v___x_4416_;
goto v_reusejp_4418_;
}
else
{
lean_object* v_reuseFailAlloc_4420_; 
v_reuseFailAlloc_4420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4420_, 0, v_a_4414_);
v___x_4419_ = v_reuseFailAlloc_4420_;
goto v_reusejp_4418_;
}
v_reusejp_4418_:
{
return v___x_4419_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg___boxed(lean_object* v_xs_4422_, lean_object* v_f_4423_, lean_object* v_as_4424_, lean_object* v_bs_4425_, lean_object* v_i_4426_, lean_object* v_cs_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_xs_4422_, v_f_4423_, v_as_4424_, v_bs_4425_, v_i_4426_, v_cs_4427_, v___y_4428_, v___y_4429_, v___y_4430_, v___y_4431_);
lean_dec(v___y_4431_);
lean_dec_ref(v___y_4430_);
lean_dec(v___y_4429_);
lean_dec_ref(v___y_4428_);
lean_dec_ref(v_bs_4425_);
lean_dec_ref(v_as_4424_);
lean_dec_ref(v_xs_4422_);
return v_res_4433_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_4434_; 
v___x_4434_ = l_Array_instInhabited(lean_box(0));
return v___x_4434_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(lean_object* v_msg_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_, lean_object* v___y_4439_){
_start:
{
lean_object* v___x_4441_; lean_object* v_toApplicative_4442_; lean_object* v_toFunctor_4443_; lean_object* v_toSeq_4444_; lean_object* v_toSeqLeft_4445_; lean_object* v_toSeqRight_4446_; lean_object* v___f_4447_; lean_object* v___f_4448_; lean_object* v___f_4449_; lean_object* v___f_4450_; lean_object* v___x_4451_; lean_object* v___f_4452_; lean_object* v___f_4453_; lean_object* v___f_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v_toApplicative_4458_; lean_object* v___x_4460_; uint8_t v_isShared_4461_; uint8_t v_isSharedCheck_4489_; 
v___x_4441_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__1);
v_toApplicative_4442_ = lean_ctor_get(v___x_4441_, 0);
v_toFunctor_4443_ = lean_ctor_get(v_toApplicative_4442_, 0);
v_toSeq_4444_ = lean_ctor_get(v_toApplicative_4442_, 2);
v_toSeqLeft_4445_ = lean_ctor_get(v_toApplicative_4442_, 3);
v_toSeqRight_4446_ = lean_ctor_get(v_toApplicative_4442_, 4);
v___f_4447_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__2);
v___f_4448_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__3);
lean_inc_ref_n(v_toFunctor_4443_, 2);
v___f_4449_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4449_, 0, v_toFunctor_4443_);
v___f_4450_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4450_, 0, v_toFunctor_4443_);
v___x_4451_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4451_, 0, v___f_4449_);
lean_ctor_set(v___x_4451_, 1, v___f_4450_);
lean_inc(v_toSeqRight_4446_);
v___f_4452_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4452_, 0, v_toSeqRight_4446_);
lean_inc(v_toSeqLeft_4445_);
v___f_4453_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4453_, 0, v_toSeqLeft_4445_);
lean_inc(v_toSeq_4444_);
v___f_4454_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4454_, 0, v_toSeq_4444_);
v___x_4455_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4455_, 0, v___x_4451_);
lean_ctor_set(v___x_4455_, 1, v___f_4447_);
lean_ctor_set(v___x_4455_, 2, v___f_4454_);
lean_ctor_set(v___x_4455_, 3, v___f_4453_);
lean_ctor_set(v___x_4455_, 4, v___f_4452_);
v___x_4456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4456_, 0, v___x_4455_);
lean_ctor_set(v___x_4456_, 1, v___f_4448_);
v___x_4457_ = l_StateRefT_x27_instMonad___redArg(v___x_4456_);
v_toApplicative_4458_ = lean_ctor_get(v___x_4457_, 0);
v_isSharedCheck_4489_ = !lean_is_exclusive(v___x_4457_);
if (v_isSharedCheck_4489_ == 0)
{
lean_object* v_unused_4490_; 
v_unused_4490_ = lean_ctor_get(v___x_4457_, 1);
lean_dec(v_unused_4490_);
v___x_4460_ = v___x_4457_;
v_isShared_4461_ = v_isSharedCheck_4489_;
goto v_resetjp_4459_;
}
else
{
lean_inc(v_toApplicative_4458_);
lean_dec(v___x_4457_);
v___x_4460_ = lean_box(0);
v_isShared_4461_ = v_isSharedCheck_4489_;
goto v_resetjp_4459_;
}
v_resetjp_4459_:
{
lean_object* v_toFunctor_4462_; lean_object* v_toSeq_4463_; lean_object* v_toSeqLeft_4464_; lean_object* v_toSeqRight_4465_; lean_object* v___x_4467_; uint8_t v_isShared_4468_; uint8_t v_isSharedCheck_4487_; 
v_toFunctor_4462_ = lean_ctor_get(v_toApplicative_4458_, 0);
v_toSeq_4463_ = lean_ctor_get(v_toApplicative_4458_, 2);
v_toSeqLeft_4464_ = lean_ctor_get(v_toApplicative_4458_, 3);
v_toSeqRight_4465_ = lean_ctor_get(v_toApplicative_4458_, 4);
v_isSharedCheck_4487_ = !lean_is_exclusive(v_toApplicative_4458_);
if (v_isSharedCheck_4487_ == 0)
{
lean_object* v_unused_4488_; 
v_unused_4488_ = lean_ctor_get(v_toApplicative_4458_, 1);
lean_dec(v_unused_4488_);
v___x_4467_ = v_toApplicative_4458_;
v_isShared_4468_ = v_isSharedCheck_4487_;
goto v_resetjp_4466_;
}
else
{
lean_inc(v_toSeqRight_4465_);
lean_inc(v_toSeqLeft_4464_);
lean_inc(v_toSeq_4463_);
lean_inc(v_toFunctor_4462_);
lean_dec(v_toApplicative_4458_);
v___x_4467_ = lean_box(0);
v_isShared_4468_ = v_isSharedCheck_4487_;
goto v_resetjp_4466_;
}
v_resetjp_4466_:
{
lean_object* v___f_4469_; lean_object* v___f_4470_; lean_object* v___f_4471_; lean_object* v___f_4472_; lean_object* v___x_4473_; lean_object* v___f_4474_; lean_object* v___f_4475_; lean_object* v___f_4476_; lean_object* v___x_4478_; 
v___f_4469_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__4);
v___f_4470_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___closed__5);
lean_inc_ref(v_toFunctor_4462_);
v___f_4471_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4471_, 0, v_toFunctor_4462_);
v___f_4472_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4472_, 0, v_toFunctor_4462_);
v___x_4473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4473_, 0, v___f_4471_);
lean_ctor_set(v___x_4473_, 1, v___f_4472_);
v___f_4474_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4474_, 0, v_toSeqRight_4465_);
v___f_4475_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4475_, 0, v_toSeqLeft_4464_);
v___f_4476_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4476_, 0, v_toSeq_4463_);
if (v_isShared_4468_ == 0)
{
lean_ctor_set(v___x_4467_, 4, v___f_4474_);
lean_ctor_set(v___x_4467_, 3, v___f_4475_);
lean_ctor_set(v___x_4467_, 2, v___f_4476_);
lean_ctor_set(v___x_4467_, 1, v___f_4469_);
lean_ctor_set(v___x_4467_, 0, v___x_4473_);
v___x_4478_ = v___x_4467_;
goto v_reusejp_4477_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v___x_4473_);
lean_ctor_set(v_reuseFailAlloc_4486_, 1, v___f_4469_);
lean_ctor_set(v_reuseFailAlloc_4486_, 2, v___f_4476_);
lean_ctor_set(v_reuseFailAlloc_4486_, 3, v___f_4475_);
lean_ctor_set(v_reuseFailAlloc_4486_, 4, v___f_4474_);
v___x_4478_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4477_;
}
v_reusejp_4477_:
{
lean_object* v___x_4480_; 
if (v_isShared_4461_ == 0)
{
lean_ctor_set(v___x_4460_, 1, v___f_4470_);
lean_ctor_set(v___x_4460_, 0, v___x_4478_);
v___x_4480_ = v___x_4460_;
goto v_reusejp_4479_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v___x_4478_);
lean_ctor_set(v_reuseFailAlloc_4485_, 1, v___f_4470_);
v___x_4480_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4479_;
}
v_reusejp_4479_:
{
lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_940__overap_4483_; lean_object* v___x_4484_; 
v___x_4481_ = lean_obj_once(&l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0, &l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0_once, _init_l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___closed__0);
v___x_4482_ = l_instInhabitedOfMonad___redArg(v___x_4480_, v___x_4481_);
v___x_940__overap_4483_ = lean_panic_fn_borrowed(v___x_4482_, v_msg_4435_);
lean_dec(v___x_4482_);
lean_inc(v___y_4439_);
lean_inc_ref(v___y_4438_);
lean_inc(v___y_4437_);
lean_inc_ref(v___y_4436_);
v___x_4484_ = lean_apply_5(v___x_940__overap_4483_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_, lean_box(0));
return v___x_4484_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg___boxed(lean_object* v_msg_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_){
_start:
{
lean_object* v_res_4497_; 
v_res_4497_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4491_, v___y_4492_, v___y_4493_, v___y_4494_, v___y_4495_);
lean_dec(v___y_4495_);
lean_dec_ref(v___y_4494_);
lean_dec(v___y_4493_);
lean_dec_ref(v___y_4492_);
return v_res_4497_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4498_; 
v___x_4498_ = lean_mk_string_unchecked("Lean.Elab.PreDefinition.Structural.Basic", 40, 40);
return v___x_4498_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4499_; 
v___x_4499_ = lean_mk_string_unchecked("Lean.Elab.Structural.Positions.mapMwith", 39, 39);
return v___x_4499_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4500_; 
v___x_4500_ = lean_mk_string_unchecked("assertion violation: positions.size = ys.size\n  ", 48, 48);
return v___x_4500_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; lean_object* v___x_4505_; lean_object* v___x_4506_; 
v___x_4501_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__2);
v___x_4502_ = lean_unsigned_to_nat(2u);
v___x_4503_ = lean_unsigned_to_nat(73u);
v___x_4504_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1);
v___x_4505_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0);
v___x_4506_ = l_mkPanicMessageWithDecl(v___x_4505_, v___x_4504_, v___x_4503_, v___x_4502_, v___x_4501_);
return v___x_4506_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_4507_; 
v___x_4507_ = lean_mk_string_unchecked("assertion violation: positions.numIndices = xs.size\n  ", 54, 54);
return v___x_4507_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; 
v___x_4508_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__4);
v___x_4509_ = lean_unsigned_to_nat(2u);
v___x_4510_ = lean_unsigned_to_nat(74u);
v___x_4511_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__1);
v___x_4512_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__0);
v___x_4513_ = l_mkPanicMessageWithDecl(v___x_4512_, v___x_4511_, v___x_4510_, v___x_4509_, v___x_4508_);
return v___x_4513_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___x_4514_; lean_object* v___x_4515_; 
v___x_4514_ = lean_unsigned_to_nat(0u);
v___x_4515_ = lean_mk_empty_array_with_capacity(v___x_4514_);
return v___x_4515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(lean_object* v_f_4516_, lean_object* v_positions_4517_, lean_object* v_ys_4518_, lean_object* v_xs_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_, lean_object* v___y_4523_){
_start:
{
lean_object* v___x_4525_; lean_object* v___x_4526_; uint8_t v___x_4527_; 
v___x_4525_ = lean_array_get_size(v_positions_4517_);
v___x_4526_ = lean_array_get_size(v_ys_4518_);
v___x_4527_ = lean_nat_dec_eq(v___x_4525_, v___x_4526_);
if (v___x_4527_ == 0)
{
lean_object* v___x_4528_; lean_object* v___x_4529_; 
lean_dec_ref(v_f_4516_);
v___x_4528_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__3);
v___x_4529_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4528_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
return v___x_4529_;
}
else
{
lean_object* v___x_4530_; lean_object* v___x_4531_; uint8_t v___x_4532_; 
v___x_4530_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4517_);
v___x_4531_ = lean_array_get_size(v_xs_4519_);
v___x_4532_ = lean_nat_dec_eq(v___x_4530_, v___x_4531_);
lean_dec(v___x_4530_);
if (v___x_4532_ == 0)
{
lean_object* v___x_4533_; lean_object* v___x_4534_; 
lean_dec_ref(v_f_4516_);
v___x_4533_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__5);
v___x_4534_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v___x_4533_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
return v___x_4534_;
}
else
{
lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; 
v___x_4535_ = lean_unsigned_to_nat(0u);
v___x_4536_ = lean_obj_once(&l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6, &l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6_once, _init_l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___closed__6);
v___x_4537_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_xs_4519_, v_f_4516_, v_ys_4518_, v_positions_4517_, v___x_4535_, v___x_4536_, v___y_4520_, v___y_4521_, v___y_4522_, v___y_4523_);
return v___x_4537_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg___boxed(lean_object* v_f_4538_, lean_object* v_positions_4539_, lean_object* v_ys_4540_, lean_object* v_xs_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
lean_object* v_res_4547_; 
v_res_4547_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_f_4538_, v_positions_4539_, v_ys_4540_, v_xs_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
lean_dec(v___y_4545_);
lean_dec_ref(v___y_4544_);
lean_dec(v___y_4543_);
lean_dec_ref(v___y_4542_);
lean_dec_ref(v_xs_4541_);
lean_dec_ref(v_ys_4540_);
lean_dec_ref(v_positions_4539_);
return v_res_4547_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__0(void){
_start:
{
lean_object* v___f_4548_; 
v___f_4548_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__2___boxed), 7, 0);
return v___f_4548_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1(void){
_start:
{
lean_object* v___x_4549_; lean_object* v___x_4550_; 
v___x_4549_ = lean_unsigned_to_nat(0u);
v___x_4550_ = l_Lean_Level_ofNat(v___x_4549_);
return v___x_4550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst(lean_object* v_recArgInfos_4551_, lean_object* v_positions_4552_, lean_object* v_motives_4553_, uint8_t v_isIndPred_4554_, lean_object* v_a_4555_, lean_object* v_a_4556_, lean_object* v_a_4557_, lean_object* v_a_4558_){
_start:
{
lean_object* v___x_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v_indGroupInst_4563_; lean_object* v_brecOnUniv_4565_; lean_object* v___y_4566_; lean_object* v___y_4567_; lean_object* v___y_4568_; lean_object* v___y_4569_; 
v___x_4560_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4561_ = lean_unsigned_to_nat(0u);
v___x_4562_ = lean_array_get_borrowed(v___x_4560_, v_recArgInfos_4551_, v___x_4561_);
v_indGroupInst_4563_ = lean_ctor_get(v___x_4562_, 4);
if (v_isIndPred_4554_ == 0)
{
lean_object* v___f_4606_; lean_object* v___x_4607_; lean_object* v_motive_4608_; lean_object* v___x_4609_; 
v___f_4606_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__0, &l_Lean_Elab_Structural_mkBRecOnConst___closed__0_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__0);
v___x_4607_ = l_Lean_instInhabitedExpr;
v_motive_4608_ = lean_array_get_borrowed(v___x_4607_, v_motives_4553_, v___x_4561_);
lean_inc(v_motive_4608_);
v___x_4609_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_motive_4608_, v___f_4606_, v_isIndPred_4554_, v_a_4555_, v_a_4556_, v_a_4557_, v_a_4558_);
if (lean_obj_tag(v___x_4609_) == 0)
{
lean_object* v_a_4610_; 
v_a_4610_ = lean_ctor_get(v___x_4609_, 0);
lean_inc(v_a_4610_);
lean_dec_ref(v___x_4609_);
v_brecOnUniv_4565_ = v_a_4610_;
v___y_4566_ = v_a_4555_;
v___y_4567_ = v_a_4556_;
v___y_4568_ = v_a_4557_;
v___y_4569_ = v_a_4558_;
goto v___jp_4564_;
}
else
{
lean_object* v_a_4611_; lean_object* v___x_4613_; uint8_t v_isShared_4614_; uint8_t v_isSharedCheck_4618_; 
v_a_4611_ = lean_ctor_get(v___x_4609_, 0);
v_isSharedCheck_4618_ = !lean_is_exclusive(v___x_4609_);
if (v_isSharedCheck_4618_ == 0)
{
v___x_4613_ = v___x_4609_;
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
else
{
lean_inc(v_a_4611_);
lean_dec(v___x_4609_);
v___x_4613_ = lean_box(0);
v_isShared_4614_ = v_isSharedCheck_4618_;
goto v_resetjp_4612_;
}
v_resetjp_4612_:
{
lean_object* v___x_4616_; 
if (v_isShared_4614_ == 0)
{
v___x_4616_ = v___x_4613_;
goto v_reusejp_4615_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v_a_4611_);
v___x_4616_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4615_;
}
v_reusejp_4615_:
{
return v___x_4616_;
}
}
}
}
else
{
lean_object* v___x_4619_; 
v___x_4619_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v_brecOnUniv_4565_ = v___x_4619_;
v___y_4566_ = v_a_4555_;
v___y_4567_ = v_a_4556_;
v___y_4568_ = v_a_4557_;
v___y_4569_ = v_a_4558_;
goto v___jp_4564_;
}
v___jp_4564_:
{
lean_object* v_toIndGroupInfo_4570_; lean_object* v_levels_4571_; lean_object* v_params_4572_; lean_object* v___x_4573_; lean_object* v_brecOnCons_4574_; lean_object* v_brecOnAux_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
v_toIndGroupInfo_4570_ = lean_ctor_get(v_indGroupInst_4563_, 0);
v_levels_4571_ = lean_ctor_get(v_indGroupInst_4563_, 1);
v_params_4572_ = lean_ctor_get(v_indGroupInst_4563_, 2);
v___x_4573_ = lean_box(v_isIndPred_4554_);
lean_inc_n(v_levels_4571_, 2);
lean_inc(v_brecOnUniv_4565_);
lean_inc_ref(v_params_4572_);
lean_inc_ref(v_toIndGroupInfo_4570_);
v_brecOnCons_4574_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__0___boxed), 6, 5);
lean_closure_set(v_brecOnCons_4574_, 0, v_toIndGroupInfo_4570_);
lean_closure_set(v_brecOnCons_4574_, 1, v_params_4572_);
lean_closure_set(v_brecOnCons_4574_, 2, v___x_4573_);
lean_closure_set(v_brecOnCons_4574_, 3, v_brecOnUniv_4565_);
lean_closure_set(v_brecOnCons_4574_, 4, v_levels_4571_);
v_brecOnAux_4575_ = l_Lean_Elab_Structural_mkBRecOnConst___lam__0(v_toIndGroupInfo_4570_, v_params_4572_, v_isIndPred_4554_, v_brecOnUniv_4565_, v_levels_4571_, v___x_4561_);
v___x_4576_ = l_Lean_Elab_Structural_IndGroupInfo_numMotives(v_toIndGroupInfo_4570_);
v___x_4577_ = l_Lean_Meta_inferArgumentTypesN(v___x_4576_, v_brecOnAux_4575_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_);
if (lean_obj_tag(v___x_4577_) == 0)
{
lean_object* v_a_4578_; lean_object* v___x_4579_; lean_object* v___x_4580_; 
v_a_4578_ = lean_ctor_get(v___x_4577_, 0);
lean_inc(v_a_4578_);
lean_dec_ref(v___x_4577_);
v___x_4579_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0, &l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_withBelowDict___redArg___lam__5___closed__0);
v___x_4580_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v___x_4579_, v_positions_4552_, v_a_4578_, v_motives_4553_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_);
lean_dec(v_a_4578_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v_a_4581_; lean_object* v___x_4583_; uint8_t v_isShared_4584_; uint8_t v_isSharedCheck_4589_; 
v_a_4581_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4583_ = v___x_4580_;
v_isShared_4584_ = v_isSharedCheck_4589_;
goto v_resetjp_4582_;
}
else
{
lean_inc(v_a_4581_);
lean_dec(v___x_4580_);
v___x_4583_ = lean_box(0);
v_isShared_4584_ = v_isSharedCheck_4589_;
goto v_resetjp_4582_;
}
v_resetjp_4582_:
{
lean_object* v___f_4585_; lean_object* v___x_4587_; 
v___f_4585_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnConst___lam__1___boxed), 3, 2);
lean_closure_set(v___f_4585_, 0, v_brecOnCons_4574_);
lean_closure_set(v___f_4585_, 1, v_a_4581_);
if (v_isShared_4584_ == 0)
{
lean_ctor_set(v___x_4583_, 0, v___f_4585_);
v___x_4587_ = v___x_4583_;
goto v_reusejp_4586_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v___f_4585_);
v___x_4587_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4586_;
}
v_reusejp_4586_:
{
return v___x_4587_;
}
}
}
else
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4597_; 
lean_dec_ref(v_brecOnCons_4574_);
v_a_4590_ = lean_ctor_get(v___x_4580_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4580_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4592_ = v___x_4580_;
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v___x_4580_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
return v___x_4595_;
}
}
}
}
else
{
lean_object* v_a_4598_; lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4605_; 
lean_dec_ref(v_brecOnCons_4574_);
v_a_4598_ = lean_ctor_get(v___x_4577_, 0);
v_isSharedCheck_4605_ = !lean_is_exclusive(v___x_4577_);
if (v_isSharedCheck_4605_ == 0)
{
v___x_4600_ = v___x_4577_;
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
else
{
lean_inc(v_a_4598_);
lean_dec(v___x_4577_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v___x_4603_; 
if (v_isShared_4601_ == 0)
{
v___x_4603_ = v___x_4600_;
goto v_reusejp_4602_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v_a_4598_);
v___x_4603_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4602_;
}
v_reusejp_4602_:
{
return v___x_4603_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnConst___boxed(lean_object* v_recArgInfos_4620_, lean_object* v_positions_4621_, lean_object* v_motives_4622_, lean_object* v_isIndPred_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_){
_start:
{
uint8_t v_isIndPred_boxed_4629_; lean_object* v_res_4630_; 
v_isIndPred_boxed_4629_ = lean_unbox(v_isIndPred_4623_);
v_res_4630_ = l_Lean_Elab_Structural_mkBRecOnConst(v_recArgInfos_4620_, v_positions_4621_, v_motives_4622_, v_isIndPred_boxed_4629_, v_a_4624_, v_a_4625_, v_a_4626_, v_a_4627_);
lean_dec(v_a_4627_);
lean_dec_ref(v_a_4626_);
lean_dec(v_a_4625_);
lean_dec_ref(v_a_4624_);
lean_dec_ref(v_motives_4622_);
lean_dec_ref(v_positions_4621_);
lean_dec_ref(v_recArgInfos_4620_);
return v_res_4630_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(lean_object* v_00_u03b3_4631_, lean_object* v_msg_4632_, lean_object* v___y_4633_, lean_object* v___y_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_){
_start:
{
lean_object* v___x_4638_; 
v___x_4638_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___redArg(v_msg_4632_, v___y_4633_, v___y_4634_, v___y_4635_, v___y_4636_);
return v___x_4638_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1___boxed(lean_object* v_00_u03b3_4639_, lean_object* v_msg_4640_, lean_object* v___y_4641_, lean_object* v___y_4642_, lean_object* v___y_4643_, lean_object* v___y_4644_, lean_object* v___y_4645_){
_start:
{
lean_object* v_res_4646_; 
v_res_4646_ = l_panic___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__1(v_00_u03b3_4639_, v_msg_4640_, v___y_4641_, v___y_4642_, v___y_4643_, v___y_4644_);
lean_dec(v___y_4644_);
lean_dec_ref(v___y_4643_);
lean_dec(v___y_4642_);
lean_dec_ref(v___y_4641_);
return v_res_4646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(lean_object* v_00_u03b3_4647_, lean_object* v_00_u03b1_4648_, lean_object* v_f_4649_, lean_object* v_positions_4650_, lean_object* v_ys_4651_, lean_object* v_xs_4652_, lean_object* v___y_4653_, lean_object* v___y_4654_, lean_object* v___y_4655_, lean_object* v___y_4656_){
_start:
{
lean_object* v___x_4658_; 
v___x_4658_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___redArg(v_f_4649_, v_positions_4650_, v_ys_4651_, v_xs_4652_, v___y_4653_, v___y_4654_, v___y_4655_, v___y_4656_);
return v___x_4658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0___boxed(lean_object* v_00_u03b3_4659_, lean_object* v_00_u03b1_4660_, lean_object* v_f_4661_, lean_object* v_positions_4662_, lean_object* v_ys_4663_, lean_object* v_xs_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_, lean_object* v___y_4669_){
_start:
{
lean_object* v_res_4670_; 
v_res_4670_ = l_Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0(v_00_u03b3_4659_, v_00_u03b1_4660_, v_f_4661_, v_positions_4662_, v_ys_4663_, v_xs_4664_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_);
lean_dec(v___y_4668_);
lean_dec_ref(v___y_4667_);
lean_dec(v___y_4666_);
lean_dec_ref(v___y_4665_);
lean_dec_ref(v_xs_4664_);
lean_dec_ref(v_ys_4663_);
lean_dec_ref(v_positions_4662_);
return v_res_4670_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(lean_object* v_00_u03b1_4671_, lean_object* v_00_u03b3_4672_, lean_object* v_xs_4673_, lean_object* v_f_4674_, lean_object* v_as_4675_, lean_object* v_bs_4676_, lean_object* v_i_4677_, lean_object* v_cs_4678_, lean_object* v___y_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_){
_start:
{
lean_object* v___x_4684_; 
v___x_4684_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___redArg(v_xs_4673_, v_f_4674_, v_as_4675_, v_bs_4676_, v_i_4677_, v_cs_4678_, v___y_4679_, v___y_4680_, v___y_4681_, v___y_4682_);
return v___x_4684_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4685_, lean_object* v_00_u03b3_4686_, lean_object* v_xs_4687_, lean_object* v_f_4688_, lean_object* v_as_4689_, lean_object* v_bs_4690_, lean_object* v_i_4691_, lean_object* v_cs_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = l_Array_zipWithMAux___at___00Lean_Elab_Structural_Positions_mapMwith___at___00Lean_Elab_Structural_mkBRecOnConst_spec__0_spec__2(v_00_u03b1_4685_, v_00_u03b3_4686_, v_xs_4687_, v_f_4688_, v_as_4689_, v_bs_4690_, v_i_4691_, v_cs_4692_, v___y_4693_, v___y_4694_, v___y_4695_, v___y_4696_);
lean_dec(v___y_4696_);
lean_dec_ref(v___y_4695_);
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4693_);
lean_dec_ref(v_bs_4690_);
lean_dec_ref(v_as_4689_);
lean_dec_ref(v_xs_4687_);
return v_res_4698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0(lean_object* v___x_4699_, lean_object* v_e_4700_){
_start:
{
lean_object* v___x_4701_; lean_object* v___x_4702_; 
v___x_4701_ = l_Lean_indentD(v_e_4700_);
v___x_4702_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4699_);
lean_ctor_set(v___x_4702_, 1, v___x_4701_);
return v___x_4702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(lean_object* v_numTypeFormers_4703_, lean_object* v_x_4704_, lean_object* v_brecOnType_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_){
_start:
{
lean_object* v___x_4711_; 
v___x_4711_ = l_Lean_Meta_arrowDomainsN(v_numTypeFormers_4703_, v_brecOnType_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_);
return v___x_4711_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed(lean_object* v_numTypeFormers_4712_, lean_object* v_x_4713_, lean_object* v_brecOnType_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_, lean_object* v___y_4718_, lean_object* v___y_4719_){
_start:
{
lean_object* v_res_4720_; 
v_res_4720_ = l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1(v_numTypeFormers_4712_, v_x_4713_, v_brecOnType_4714_, v___y_4715_, v___y_4716_, v___y_4717_, v___y_4718_);
lean_dec(v___y_4718_);
lean_dec_ref(v___y_4717_);
lean_dec(v___y_4716_);
lean_dec_ref(v___y_4715_);
lean_dec_ref(v_x_4713_);
return v_res_4720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(lean_object* v_a_4721_, lean_object* v_as_4722_, size_t v_sz_4723_, size_t v_i_4724_, lean_object* v_b_4725_){
_start:
{
uint8_t v___x_4727_; 
v___x_4727_ = lean_usize_dec_lt(v_i_4724_, v_sz_4723_);
if (v___x_4727_ == 0)
{
lean_object* v___x_4728_; 
lean_dec_ref(v_a_4721_);
v___x_4728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4728_, 0, v_b_4725_);
return v___x_4728_;
}
else
{
lean_object* v_a_4729_; lean_object* v___x_4730_; size_t v___x_4731_; size_t v___x_4732_; 
v_a_4729_ = lean_array_uget_borrowed(v_as_4722_, v_i_4724_);
lean_inc_ref(v_a_4721_);
v___x_4730_ = lean_array_set(v_b_4725_, v_a_4729_, v_a_4721_);
v___x_4731_ = ((size_t)1ULL);
v___x_4732_ = lean_usize_add(v_i_4724_, v___x_4731_);
v_i_4724_ = v___x_4732_;
v_b_4725_ = v___x_4730_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg___boxed(lean_object* v_a_4734_, lean_object* v_as_4735_, lean_object* v_sz_4736_, lean_object* v_i_4737_, lean_object* v_b_4738_, lean_object* v___y_4739_){
_start:
{
size_t v_sz_boxed_4740_; size_t v_i_boxed_4741_; lean_object* v_res_4742_; 
v_sz_boxed_4740_ = lean_unbox_usize(v_sz_4736_);
lean_dec(v_sz_4736_);
v_i_boxed_4741_ = lean_unbox_usize(v_i_4737_);
lean_dec(v_i_4737_);
v_res_4742_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4734_, v_as_4735_, v_sz_boxed_4740_, v_i_boxed_4741_, v_b_4738_);
lean_dec_ref(v_as_4735_);
return v_res_4742_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(lean_object* v_as_4743_, size_t v_sz_4744_, size_t v_i_4745_, lean_object* v_b_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_){
_start:
{
uint8_t v___x_4752_; 
v___x_4752_ = lean_usize_dec_lt(v_i_4745_, v_sz_4744_);
if (v___x_4752_ == 0)
{
lean_object* v___x_4753_; 
v___x_4753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4753_, 0, v_b_4746_);
return v___x_4753_;
}
else
{
lean_object* v_snd_4754_; lean_object* v_fst_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4799_; 
v_snd_4754_ = lean_ctor_get(v_b_4746_, 1);
v_fst_4755_ = lean_ctor_get(v_b_4746_, 0);
v_isSharedCheck_4799_ = !lean_is_exclusive(v_b_4746_);
if (v_isSharedCheck_4799_ == 0)
{
v___x_4757_ = v_b_4746_;
v_isShared_4758_ = v_isSharedCheck_4799_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_snd_4754_);
lean_inc(v_fst_4755_);
lean_dec(v_b_4746_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4799_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v_array_4759_; lean_object* v_start_4760_; lean_object* v_stop_4761_; uint8_t v___x_4762_; 
v_array_4759_ = lean_ctor_get(v_snd_4754_, 0);
v_start_4760_ = lean_ctor_get(v_snd_4754_, 1);
v_stop_4761_ = lean_ctor_get(v_snd_4754_, 2);
v___x_4762_ = lean_nat_dec_lt(v_start_4760_, v_stop_4761_);
if (v___x_4762_ == 0)
{
lean_object* v___x_4764_; 
if (v_isShared_4758_ == 0)
{
v___x_4764_ = v___x_4757_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4766_; 
v_reuseFailAlloc_4766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4766_, 0, v_fst_4755_);
lean_ctor_set(v_reuseFailAlloc_4766_, 1, v_snd_4754_);
v___x_4764_ = v_reuseFailAlloc_4766_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
lean_object* v___x_4765_; 
v___x_4765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4765_, 0, v___x_4764_);
return v___x_4765_;
}
}
else
{
lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4795_; 
lean_inc(v_stop_4761_);
lean_inc(v_start_4760_);
lean_inc_ref(v_array_4759_);
v_isSharedCheck_4795_ = !lean_is_exclusive(v_snd_4754_);
if (v_isSharedCheck_4795_ == 0)
{
lean_object* v_unused_4796_; lean_object* v_unused_4797_; lean_object* v_unused_4798_; 
v_unused_4796_ = lean_ctor_get(v_snd_4754_, 2);
lean_dec(v_unused_4796_);
v_unused_4797_ = lean_ctor_get(v_snd_4754_, 1);
lean_dec(v_unused_4797_);
v_unused_4798_ = lean_ctor_get(v_snd_4754_, 0);
lean_dec(v_unused_4798_);
v___x_4768_ = v_snd_4754_;
v_isShared_4769_ = v_isSharedCheck_4795_;
goto v_resetjp_4767_;
}
else
{
lean_dec(v_snd_4754_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4795_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v_a_4770_; lean_object* v___x_4771_; size_t v_sz_4772_; size_t v___x_4773_; lean_object* v___x_4774_; 
v_a_4770_ = lean_array_uget_borrowed(v_as_4743_, v_i_4745_);
v___x_4771_ = lean_array_fget_borrowed(v_array_4759_, v_start_4760_);
v_sz_4772_ = lean_array_size(v___x_4771_);
v___x_4773_ = ((size_t)0ULL);
lean_inc(v_a_4770_);
v___x_4774_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4770_, v___x_4771_, v_sz_4772_, v___x_4773_, v_fst_4755_);
if (lean_obj_tag(v___x_4774_) == 0)
{
lean_object* v_a_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4779_; 
v_a_4775_ = lean_ctor_get(v___x_4774_, 0);
lean_inc(v_a_4775_);
lean_dec_ref(v___x_4774_);
v___x_4776_ = lean_unsigned_to_nat(1u);
v___x_4777_ = lean_nat_add(v_start_4760_, v___x_4776_);
lean_dec(v_start_4760_);
if (v_isShared_4769_ == 0)
{
lean_ctor_set(v___x_4768_, 1, v___x_4777_);
v___x_4779_ = v___x_4768_;
goto v_reusejp_4778_;
}
else
{
lean_object* v_reuseFailAlloc_4786_; 
v_reuseFailAlloc_4786_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4786_, 0, v_array_4759_);
lean_ctor_set(v_reuseFailAlloc_4786_, 1, v___x_4777_);
lean_ctor_set(v_reuseFailAlloc_4786_, 2, v_stop_4761_);
v___x_4779_ = v_reuseFailAlloc_4786_;
goto v_reusejp_4778_;
}
v_reusejp_4778_:
{
lean_object* v___x_4781_; 
if (v_isShared_4758_ == 0)
{
lean_ctor_set(v___x_4757_, 1, v___x_4779_);
lean_ctor_set(v___x_4757_, 0, v_a_4775_);
v___x_4781_ = v___x_4757_;
goto v_reusejp_4780_;
}
else
{
lean_object* v_reuseFailAlloc_4785_; 
v_reuseFailAlloc_4785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4785_, 0, v_a_4775_);
lean_ctor_set(v_reuseFailAlloc_4785_, 1, v___x_4779_);
v___x_4781_ = v_reuseFailAlloc_4785_;
goto v_reusejp_4780_;
}
v_reusejp_4780_:
{
size_t v___x_4782_; size_t v___x_4783_; 
v___x_4782_ = ((size_t)1ULL);
v___x_4783_ = lean_usize_add(v_i_4745_, v___x_4782_);
v_i_4745_ = v___x_4783_;
v_b_4746_ = v___x_4781_;
goto _start;
}
}
}
else
{
lean_object* v_a_4787_; lean_object* v___x_4789_; uint8_t v_isShared_4790_; uint8_t v_isSharedCheck_4794_; 
lean_del_object(v___x_4768_);
lean_dec(v_stop_4761_);
lean_dec(v_start_4760_);
lean_dec_ref(v_array_4759_);
lean_del_object(v___x_4757_);
v_a_4787_ = lean_ctor_get(v___x_4774_, 0);
v_isSharedCheck_4794_ = !lean_is_exclusive(v___x_4774_);
if (v_isSharedCheck_4794_ == 0)
{
v___x_4789_ = v___x_4774_;
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
else
{
lean_inc(v_a_4787_);
lean_dec(v___x_4774_);
v___x_4789_ = lean_box(0);
v_isShared_4790_ = v_isSharedCheck_4794_;
goto v_resetjp_4788_;
}
v_resetjp_4788_:
{
lean_object* v___x_4792_; 
if (v_isShared_4790_ == 0)
{
v___x_4792_ = v___x_4789_;
goto v_reusejp_4791_;
}
else
{
lean_object* v_reuseFailAlloc_4793_; 
v_reuseFailAlloc_4793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4793_, 0, v_a_4787_);
v___x_4792_ = v_reuseFailAlloc_4793_;
goto v_reusejp_4791_;
}
v_reusejp_4791_:
{
return v___x_4792_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1___boxed(lean_object* v_as_4800_, lean_object* v_sz_4801_, lean_object* v_i_4802_, lean_object* v_b_4803_, lean_object* v___y_4804_, lean_object* v___y_4805_, lean_object* v___y_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_){
_start:
{
size_t v_sz_boxed_4809_; size_t v_i_boxed_4810_; lean_object* v_res_4811_; 
v_sz_boxed_4809_ = lean_unbox_usize(v_sz_4801_);
lean_dec(v_sz_4801_);
v_i_boxed_4810_ = lean_unbox_usize(v_i_4802_);
lean_dec(v_i_4802_);
v_res_4811_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_as_4800_, v_sz_boxed_4809_, v_i_boxed_4810_, v_b_4803_, v___y_4804_, v___y_4805_, v___y_4806_, v___y_4807_);
lean_dec(v___y_4807_);
lean_dec_ref(v___y_4806_);
lean_dec(v___y_4805_);
lean_dec_ref(v___y_4804_);
lean_dec_ref(v_as_4800_);
return v_res_4811_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0(void){
_start:
{
lean_object* v___x_4812_; 
v___x_4812_ = lean_mk_string_unchecked("brecOn is type incorrect", 24, 24);
return v___x_4812_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1(void){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; 
v___x_4813_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__0);
v___x_4814_ = l_Lean_stringToMessageData(v___x_4813_);
return v___x_4814_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2(void){
_start:
{
lean_object* v___x_4815_; lean_object* v___f_4816_; 
v___x_4815_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__1);
v___f_4816_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__0), 2, 1);
lean_closure_set(v___f_4816_, 0, v___x_4815_);
return v___f_4816_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3(void){
_start:
{
lean_object* v___x_4817_; lean_object* v___x_4818_; 
v___x_4817_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnConst___closed__1, &l_Lean_Elab_Structural_mkBRecOnConst___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnConst___closed__1);
v___x_4818_ = l_Lean_Expr_sort___override(v___x_4817_);
return v___x_4818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes(lean_object* v_recArgInfos_4819_, lean_object* v_positions_4820_, lean_object* v_brecOnConst_4821_, lean_object* v_a_4822_, lean_object* v_a_4823_, lean_object* v_a_4824_, lean_object* v_a_4825_){
_start:
{
lean_object* v___x_4827_; lean_object* v___x_4828_; lean_object* v_recArgInfo_4829_; lean_object* v_indicesPos_4830_; lean_object* v_indIdx_4831_; lean_object* v_brecOn_4832_; lean_object* v___f_4833_; lean_object* v___x_4834_; lean_object* v___x_4835_; 
v___x_4827_ = l_Lean_Elab_Structural_instInhabitedRecArgInfo_default;
v___x_4828_ = lean_unsigned_to_nat(0u);
v_recArgInfo_4829_ = lean_array_get_borrowed(v___x_4827_, v_recArgInfos_4819_, v___x_4828_);
v_indicesPos_4830_ = lean_ctor_get(v_recArgInfo_4829_, 3);
v_indIdx_4831_ = lean_ctor_get(v_recArgInfo_4829_, 5);
lean_inc(v_indIdx_4831_);
v_brecOn_4832_ = lean_apply_1(v_brecOnConst_4821_, v_indIdx_4831_);
v___f_4833_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__2);
lean_inc_ref(v_brecOn_4832_);
v___x_4834_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_4834_, 0, v_brecOn_4832_);
v___x_4835_ = l_Lean_Meta_mapErrorImp___redArg(v___x_4834_, v___f_4833_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_);
if (lean_obj_tag(v___x_4835_) == 0)
{
lean_object* v___x_4836_; 
lean_dec_ref(v___x_4835_);
lean_inc(v_a_4825_);
lean_inc_ref(v_a_4824_);
lean_inc(v_a_4823_);
lean_inc_ref(v_a_4822_);
v___x_4836_ = lean_infer_type(v_brecOn_4832_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_);
if (lean_obj_tag(v___x_4836_) == 0)
{
lean_object* v_a_4837_; lean_object* v_numTypeFormers_4838_; lean_object* v___f_4839_; lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; uint8_t v___x_4844_; lean_object* v___x_4845_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
lean_inc(v_a_4837_);
lean_dec_ref(v___x_4836_);
v_numTypeFormers_4838_ = lean_array_get_size(v_positions_4820_);
v___f_4839_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_inferBRecOnFTypes___lam__1___boxed), 8, 1);
lean_closure_set(v___f_4839_, 0, v_numTypeFormers_4838_);
v___x_4840_ = lean_array_get_size(v_indicesPos_4830_);
v___x_4841_ = lean_unsigned_to_nat(1u);
v___x_4842_ = lean_nat_add(v___x_4840_, v___x_4841_);
v___x_4843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4843_, 0, v___x_4842_);
v___x_4844_ = 0;
v___x_4845_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Elab_Structural_mkBRecOnF_spec__0___redArg(v_a_4837_, v___x_4843_, v___f_4839_, v___x_4844_, v___x_4844_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_);
if (lean_obj_tag(v___x_4845_) == 0)
{
lean_object* v_a_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; size_t v_sz_4852_; size_t v___x_4853_; lean_object* v___x_4854_; 
v_a_4846_ = lean_ctor_get(v___x_4845_, 0);
lean_inc(v_a_4846_);
lean_dec_ref(v___x_4845_);
v___x_4847_ = l_Lean_Elab_Structural_Positions_numIndices(v_positions_4820_);
v___x_4848_ = lean_obj_once(&l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3, &l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3_once, _init_l_Lean_Elab_Structural_inferBRecOnFTypes___closed__3);
v___x_4849_ = lean_mk_array(v___x_4847_, v___x_4848_);
v___x_4850_ = l_Array_toSubarray___redArg(v_positions_4820_, v___x_4828_, v_numTypeFormers_4838_);
v___x_4851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4851_, 0, v___x_4849_);
lean_ctor_set(v___x_4851_, 1, v___x_4850_);
v_sz_4852_ = lean_array_size(v_a_4846_);
v___x_4853_ = ((size_t)0ULL);
v___x_4854_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__1(v_a_4846_, v_sz_4852_, v___x_4853_, v___x_4851_, v_a_4822_, v_a_4823_, v_a_4824_, v_a_4825_);
lean_dec(v_a_4846_);
if (lean_obj_tag(v___x_4854_) == 0)
{
lean_object* v_a_4855_; lean_object* v___x_4857_; uint8_t v_isShared_4858_; uint8_t v_isSharedCheck_4863_; 
v_a_4855_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4863_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4863_ == 0)
{
v___x_4857_ = v___x_4854_;
v_isShared_4858_ = v_isSharedCheck_4863_;
goto v_resetjp_4856_;
}
else
{
lean_inc(v_a_4855_);
lean_dec(v___x_4854_);
v___x_4857_ = lean_box(0);
v_isShared_4858_ = v_isSharedCheck_4863_;
goto v_resetjp_4856_;
}
v_resetjp_4856_:
{
lean_object* v_fst_4859_; lean_object* v___x_4861_; 
v_fst_4859_ = lean_ctor_get(v_a_4855_, 0);
lean_inc(v_fst_4859_);
lean_dec(v_a_4855_);
if (v_isShared_4858_ == 0)
{
lean_ctor_set(v___x_4857_, 0, v_fst_4859_);
v___x_4861_ = v___x_4857_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4862_; 
v_reuseFailAlloc_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4862_, 0, v_fst_4859_);
v___x_4861_ = v_reuseFailAlloc_4862_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
return v___x_4861_;
}
}
}
else
{
lean_object* v_a_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4871_; 
v_a_4864_ = lean_ctor_get(v___x_4854_, 0);
v_isSharedCheck_4871_ = !lean_is_exclusive(v___x_4854_);
if (v_isSharedCheck_4871_ == 0)
{
v___x_4866_ = v___x_4854_;
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_a_4864_);
lean_dec(v___x_4854_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4871_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v___x_4869_; 
if (v_isShared_4867_ == 0)
{
v___x_4869_ = v___x_4866_;
goto v_reusejp_4868_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_a_4864_);
v___x_4869_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4868_;
}
v_reusejp_4868_:
{
return v___x_4869_;
}
}
}
}
else
{
lean_dec_ref(v_positions_4820_);
return v___x_4845_;
}
}
else
{
lean_object* v_a_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4879_; 
lean_dec_ref(v_positions_4820_);
v_a_4872_ = lean_ctor_get(v___x_4836_, 0);
v_isSharedCheck_4879_ = !lean_is_exclusive(v___x_4836_);
if (v_isSharedCheck_4879_ == 0)
{
v___x_4874_ = v___x_4836_;
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_a_4872_);
lean_dec(v___x_4836_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4879_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v___x_4877_; 
if (v_isShared_4875_ == 0)
{
v___x_4877_ = v___x_4874_;
goto v_reusejp_4876_;
}
else
{
lean_object* v_reuseFailAlloc_4878_; 
v_reuseFailAlloc_4878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4878_, 0, v_a_4872_);
v___x_4877_ = v_reuseFailAlloc_4878_;
goto v_reusejp_4876_;
}
v_reusejp_4876_:
{
return v___x_4877_;
}
}
}
}
else
{
lean_object* v_a_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4887_; 
lean_dec_ref(v_brecOn_4832_);
lean_dec_ref(v_positions_4820_);
v_a_4880_ = lean_ctor_get(v___x_4835_, 0);
v_isSharedCheck_4887_ = !lean_is_exclusive(v___x_4835_);
if (v_isSharedCheck_4887_ == 0)
{
v___x_4882_ = v___x_4835_;
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_a_4880_);
lean_dec(v___x_4835_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4887_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v___x_4885_; 
if (v_isShared_4883_ == 0)
{
v___x_4885_ = v___x_4882_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4886_; 
v_reuseFailAlloc_4886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4886_, 0, v_a_4880_);
v___x_4885_ = v_reuseFailAlloc_4886_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
return v___x_4885_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_inferBRecOnFTypes___boxed(lean_object* v_recArgInfos_4888_, lean_object* v_positions_4889_, lean_object* v_brecOnConst_4890_, lean_object* v_a_4891_, lean_object* v_a_4892_, lean_object* v_a_4893_, lean_object* v_a_4894_, lean_object* v_a_4895_){
_start:
{
lean_object* v_res_4896_; 
v_res_4896_ = l_Lean_Elab_Structural_inferBRecOnFTypes(v_recArgInfos_4888_, v_positions_4889_, v_brecOnConst_4890_, v_a_4891_, v_a_4892_, v_a_4893_, v_a_4894_);
lean_dec(v_a_4894_);
lean_dec_ref(v_a_4893_);
lean_dec(v_a_4892_);
lean_dec_ref(v_a_4891_);
lean_dec_ref(v_recArgInfos_4888_);
return v_res_4896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(lean_object* v_a_4897_, lean_object* v_as_4898_, size_t v_sz_4899_, size_t v_i_4900_, lean_object* v_b_4901_, lean_object* v___y_4902_, lean_object* v___y_4903_, lean_object* v___y_4904_, lean_object* v___y_4905_){
_start:
{
lean_object* v___x_4907_; 
v___x_4907_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___redArg(v_a_4897_, v_as_4898_, v_sz_4899_, v_i_4900_, v_b_4901_);
return v___x_4907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0___boxed(lean_object* v_a_4908_, lean_object* v_as_4909_, lean_object* v_sz_4910_, lean_object* v_i_4911_, lean_object* v_b_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_){
_start:
{
size_t v_sz_boxed_4918_; size_t v_i_boxed_4919_; lean_object* v_res_4920_; 
v_sz_boxed_4918_ = lean_unbox_usize(v_sz_4910_);
lean_dec(v_sz_4910_);
v_i_boxed_4919_ = lean_unbox_usize(v_i_4911_);
lean_dec(v_i_4911_);
v_res_4920_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_inferBRecOnFTypes_spec__0(v_a_4908_, v_as_4909_, v_sz_boxed_4918_, v_i_boxed_4919_, v_b_4912_, v___y_4913_, v___y_4914_, v___y_4915_, v___y_4916_);
lean_dec(v___y_4916_);
lean_dec_ref(v___y_4915_);
lean_dec(v___y_4914_);
lean_dec_ref(v___y_4913_);
lean_dec_ref(v_as_4909_);
return v_res_4920_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(lean_object* v_a_4921_, lean_object* v_a_4922_){
_start:
{
if (lean_obj_tag(v_a_4921_) == 0)
{
lean_object* v___x_4923_; 
v___x_4923_ = l_List_reverse___redArg(v_a_4922_);
return v___x_4923_;
}
else
{
lean_object* v_head_4924_; lean_object* v_tail_4925_; lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_4936_; 
v_head_4924_ = lean_ctor_get(v_a_4921_, 0);
v_tail_4925_ = lean_ctor_get(v_a_4921_, 1);
v_isSharedCheck_4936_ = !lean_is_exclusive(v_a_4921_);
if (v_isSharedCheck_4936_ == 0)
{
v___x_4927_ = v_a_4921_;
v_isShared_4928_ = v_isSharedCheck_4936_;
goto v_resetjp_4926_;
}
else
{
lean_inc(v_tail_4925_);
lean_inc(v_head_4924_);
lean_dec(v_a_4921_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_4936_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4933_; 
v___x_4929_ = l_Nat_reprFast(v_head_4924_);
v___x_4930_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4930_, 0, v___x_4929_);
v___x_4931_ = l_Lean_MessageData_ofFormat(v___x_4930_);
if (v_isShared_4928_ == 0)
{
lean_ctor_set(v___x_4927_, 1, v_a_4922_);
lean_ctor_set(v___x_4927_, 0, v___x_4931_);
v___x_4933_ = v___x_4927_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4935_; 
v_reuseFailAlloc_4935_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4935_, 0, v___x_4931_);
lean_ctor_set(v_reuseFailAlloc_4935_, 1, v_a_4922_);
v___x_4933_ = v_reuseFailAlloc_4935_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
v_a_4921_ = v_tail_4925_;
v_a_4922_ = v___x_4933_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(lean_object* v_a_4937_, lean_object* v_a_4938_){
_start:
{
if (lean_obj_tag(v_a_4937_) == 0)
{
lean_object* v___x_4939_; 
v___x_4939_ = l_List_reverse___redArg(v_a_4938_);
return v___x_4939_;
}
else
{
lean_object* v_head_4940_; lean_object* v_tail_4941_; lean_object* v___x_4943_; uint8_t v_isShared_4944_; uint8_t v_isSharedCheck_4953_; 
v_head_4940_ = lean_ctor_get(v_a_4937_, 0);
v_tail_4941_ = lean_ctor_get(v_a_4937_, 1);
v_isSharedCheck_4953_ = !lean_is_exclusive(v_a_4937_);
if (v_isSharedCheck_4953_ == 0)
{
v___x_4943_ = v_a_4937_;
v_isShared_4944_ = v_isSharedCheck_4953_;
goto v_resetjp_4942_;
}
else
{
lean_inc(v_tail_4941_);
lean_inc(v_head_4940_);
lean_dec(v_a_4937_);
v___x_4943_ = lean_box(0);
v_isShared_4944_ = v_isSharedCheck_4953_;
goto v_resetjp_4942_;
}
v_resetjp_4942_:
{
lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4950_; 
v___x_4945_ = lean_array_to_list(v_head_4940_);
v___x_4946_ = lean_box(0);
v___x_4947_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__0(v___x_4945_, v___x_4946_);
v___x_4948_ = l_Lean_MessageData_ofList(v___x_4947_);
if (v_isShared_4944_ == 0)
{
lean_ctor_set(v___x_4943_, 1, v_a_4938_);
lean_ctor_set(v___x_4943_, 0, v___x_4948_);
v___x_4950_ = v___x_4943_;
goto v_reusejp_4949_;
}
else
{
lean_object* v_reuseFailAlloc_4952_; 
v_reuseFailAlloc_4952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4952_, 0, v___x_4948_);
lean_ctor_set(v_reuseFailAlloc_4952_, 1, v_a_4938_);
v___x_4950_ = v_reuseFailAlloc_4952_;
goto v_reusejp_4949_;
}
v_reusejp_4949_:
{
v_a_4937_ = v_tail_4941_;
v_a_4938_ = v___x_4950_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(lean_object* v_xs_4954_, lean_object* v_v_4955_, lean_object* v_i_4956_){
_start:
{
lean_object* v___x_4957_; uint8_t v___x_4958_; 
v___x_4957_ = lean_array_get_size(v_xs_4954_);
v___x_4958_ = lean_nat_dec_lt(v_i_4956_, v___x_4957_);
if (v___x_4958_ == 0)
{
lean_object* v___x_4959_; 
lean_dec(v_i_4956_);
v___x_4959_ = lean_box(0);
return v___x_4959_;
}
else
{
lean_object* v___x_4960_; uint8_t v___x_4961_; 
v___x_4960_ = lean_array_fget_borrowed(v_xs_4954_, v_i_4956_);
v___x_4961_ = lean_nat_dec_eq(v___x_4960_, v_v_4955_);
if (v___x_4961_ == 0)
{
lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4962_ = lean_unsigned_to_nat(1u);
v___x_4963_ = lean_nat_add(v_i_4956_, v___x_4962_);
lean_dec(v_i_4956_);
v_i_4956_ = v___x_4963_;
goto _start;
}
else
{
lean_object* v___x_4965_; 
v___x_4965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4965_, 0, v_i_4956_);
return v___x_4965_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2___boxed(lean_object* v_xs_4966_, lean_object* v_v_4967_, lean_object* v_i_4968_){
_start:
{
lean_object* v_res_4969_; 
v_res_4969_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_4966_, v_v_4967_, v_i_4968_);
lean_dec(v_v_4967_);
lean_dec_ref(v_xs_4966_);
return v_res_4969_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(lean_object* v_xs_4970_, lean_object* v_v_4971_){
_start:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; 
v___x_4972_ = lean_unsigned_to_nat(0u);
v___x_4973_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2_spec__2(v_xs_4970_, v_v_4971_, v___x_4972_);
return v___x_4973_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2___boxed(lean_object* v_xs_4974_, lean_object* v_v_4975_){
_start:
{
lean_object* v_res_4976_; 
v_res_4976_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_xs_4974_, v_v_4975_);
lean_dec(v_v_4975_);
lean_dec_ref(v_xs_4974_);
return v_res_4976_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0(void){
_start:
{
lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4977_ = lean_box(0);
v___x_4978_ = lean_box(0);
v___x_4979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4978_);
lean_ctor_set(v___x_4979_, 1, v___x_4977_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(lean_object* v_fnIdx_4980_, lean_object* v_as_4981_, size_t v_sz_4982_, size_t v_i_4983_, lean_object* v_b_4984_){
_start:
{
uint8_t v___x_4985_; 
v___x_4985_ = lean_usize_dec_lt(v_i_4983_, v_sz_4982_);
if (v___x_4985_ == 0)
{
lean_inc_ref(v_b_4984_);
return v_b_4984_;
}
else
{
lean_object* v___x_4986_; lean_object* v_a_4987_; lean_object* v___x_4988_; 
v___x_4986_ = lean_box(0);
v_a_4987_ = lean_array_uget_borrowed(v_as_4981_, v_i_4983_);
v___x_4988_ = l_Array_finIdxOf_x3f___at___00Lean_Elab_Structural_mkBRecOnApp_spec__2(v_a_4987_, v_fnIdx_4980_);
if (lean_obj_tag(v___x_4988_) == 0)
{
lean_object* v___x_4989_; size_t v___x_4990_; size_t v___x_4991_; 
v___x_4989_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0);
v___x_4990_ = ((size_t)1ULL);
v___x_4991_ = lean_usize_add(v_i_4983_, v___x_4990_);
v_i_4983_ = v___x_4991_;
v_b_4984_ = v___x_4989_;
goto _start;
}
else
{
lean_object* v_val_4993_; lean_object* v___x_4995_; uint8_t v_isShared_4996_; uint8_t v_isSharedCheck_5004_; 
v_val_4993_ = lean_ctor_get(v___x_4988_, 0);
v_isSharedCheck_5004_ = !lean_is_exclusive(v___x_4988_);
if (v_isSharedCheck_5004_ == 0)
{
v___x_4995_ = v___x_4988_;
v_isShared_4996_ = v_isSharedCheck_5004_;
goto v_resetjp_4994_;
}
else
{
lean_inc(v_val_4993_);
lean_dec(v___x_4988_);
v___x_4995_ = lean_box(0);
v_isShared_4996_ = v_isSharedCheck_5004_;
goto v_resetjp_4994_;
}
v_resetjp_4994_:
{
lean_object* v___x_4997_; lean_object* v___x_4998_; lean_object* v___x_5000_; 
v___x_4997_ = lean_array_get_size(v_a_4987_);
v___x_4998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4998_, 0, v___x_4997_);
lean_ctor_set(v___x_4998_, 1, v_val_4993_);
if (v_isShared_4996_ == 0)
{
lean_ctor_set(v___x_4995_, 0, v___x_4998_);
v___x_5000_ = v___x_4995_;
goto v_reusejp_4999_;
}
else
{
lean_object* v_reuseFailAlloc_5003_; 
v_reuseFailAlloc_5003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5003_, 0, v___x_4998_);
v___x_5000_ = v_reuseFailAlloc_5003_;
goto v_reusejp_4999_;
}
v_reusejp_4999_:
{
lean_object* v___x_5001_; lean_object* v___x_5002_; 
v___x_5001_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5001_, 0, v___x_5000_);
v___x_5002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5002_, 0, v___x_5001_);
lean_ctor_set(v___x_5002_, 1, v___x_4986_);
return v___x_5002_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___boxed(lean_object* v_fnIdx_5005_, lean_object* v_as_5006_, lean_object* v_sz_5007_, lean_object* v_i_5008_, lean_object* v_b_5009_){
_start:
{
size_t v_sz_boxed_5010_; size_t v_i_boxed_5011_; lean_object* v_res_5012_; 
v_sz_boxed_5010_ = lean_unbox_usize(v_sz_5007_);
lean_dec(v_sz_5007_);
v_i_boxed_5011_ = lean_unbox_usize(v_i_5008_);
lean_dec(v_i_5008_);
v_res_5012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_5005_, v_as_5006_, v_sz_boxed_5010_, v_i_boxed_5011_, v_b_5009_);
lean_dec_ref(v_b_5009_);
lean_dec_ref(v_as_5006_);
lean_dec(v_fnIdx_5005_);
return v_res_5012_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0(void){
_start:
{
lean_object* v___x_5013_; 
v___x_5013_ = lean_mk_string_unchecked("mkBRecOnApp: Could not find ", 28, 28);
return v___x_5013_;
}
}
static lean_object* _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1(void){
_start:
{
lean_object* v___x_5014_; lean_object* v___x_5015_; 
v___x_5014_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0, &l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0_once, _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__0);
v___x_5015_ = l_Lean_stringToMessageData(v___x_5014_);
return v___x_5015_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0(lean_object* v_recArgInfo_5016_, lean_object* v_positions_5017_, lean_object* v_fnIdx_5018_, lean_object* v_brecOnConst_5019_, lean_object* v_packedFArgs_5020_, lean_object* v_funTypes_5021_, lean_object* v_ys_5022_, lean_object* v___value_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_){
_start:
{
lean_object* v___y_5030_; lean_object* v___y_5031_; lean_object* v___y_5032_; lean_object* v___y_5033_; lean_object* v___x_5047_; lean_object* v_fst_5048_; lean_object* v_snd_5049_; lean_object* v___x_5050_; size_t v_sz_5051_; size_t v___x_5052_; lean_object* v___x_5053_; lean_object* v_fst_5054_; 
lean_inc_ref(v_ys_5022_);
lean_inc_ref(v_recArgInfo_5016_);
v___x_5047_ = l_Lean_Elab_Structural_RecArgInfo_pickIndicesMajor(v_recArgInfo_5016_, v_ys_5022_);
v_fst_5048_ = lean_ctor_get(v___x_5047_, 0);
lean_inc(v_fst_5048_);
v_snd_5049_ = lean_ctor_get(v___x_5047_, 1);
lean_inc(v_snd_5049_);
lean_dec_ref(v___x_5047_);
v___x_5050_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3___closed__0);
v_sz_5051_ = lean_array_size(v_positions_5017_);
v___x_5052_ = ((size_t)0ULL);
v___x_5053_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__3(v_fnIdx_5018_, v_positions_5017_, v_sz_5051_, v___x_5052_, v___x_5050_);
v_fst_5054_ = lean_ctor_get(v___x_5053_, 0);
lean_inc(v_fst_5054_);
lean_dec_ref(v___x_5053_);
if (lean_obj_tag(v_fst_5054_) == 0)
{
lean_dec(v_snd_5049_);
lean_dec(v_fst_5048_);
lean_dec_ref(v_ys_5022_);
lean_dec_ref(v_brecOnConst_5019_);
lean_dec_ref(v_recArgInfo_5016_);
v___y_5030_ = v___y_5024_;
v___y_5031_ = v___y_5025_;
v___y_5032_ = v___y_5026_;
v___y_5033_ = v___y_5027_;
goto v___jp_5029_;
}
else
{
lean_object* v_val_5055_; 
v_val_5055_ = lean_ctor_get(v_fst_5054_, 0);
lean_inc(v_val_5055_);
lean_dec_ref(v_fst_5054_);
if (lean_obj_tag(v_val_5055_) == 1)
{
lean_object* v_val_5056_; lean_object* v_fst_5057_; lean_object* v_snd_5058_; lean_object* v_indIdx_5059_; lean_object* v_brecOn_5060_; lean_object* v_brecOn_5061_; lean_object* v_brecOn_5062_; lean_object* v___x_5063_; 
lean_dec(v_fnIdx_5018_);
lean_dec_ref(v_positions_5017_);
v_val_5056_ = lean_ctor_get(v_val_5055_, 0);
lean_inc(v_val_5056_);
lean_dec_ref(v_val_5055_);
v_fst_5057_ = lean_ctor_get(v_val_5056_, 0);
lean_inc(v_fst_5057_);
v_snd_5058_ = lean_ctor_get(v_val_5056_, 1);
lean_inc(v_snd_5058_);
lean_dec(v_val_5056_);
v_indIdx_5059_ = lean_ctor_get(v_recArgInfo_5016_, 5);
lean_inc(v_indIdx_5059_);
lean_dec_ref(v_recArgInfo_5016_);
v_brecOn_5060_ = lean_apply_1(v_brecOnConst_5019_, v_indIdx_5059_);
v_brecOn_5061_ = l_Lean_mkAppN(v_brecOn_5060_, v_fst_5048_);
lean_dec(v_fst_5048_);
v_brecOn_5062_ = l_Lean_mkAppN(v_brecOn_5061_, v_packedFArgs_5020_);
v___x_5063_ = l_Lean_Meta_PProdN_projM(v_fst_5057_, v_snd_5058_, v_brecOn_5062_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_);
lean_dec(v_snd_5058_);
lean_dec(v_fst_5057_);
if (lean_obj_tag(v___x_5063_) == 0)
{
lean_object* v_a_5064_; lean_object* v___x_5065_; uint8_t v___x_5066_; uint8_t v___x_5067_; lean_object* v___x_5068_; 
v_a_5064_ = lean_ctor_get(v___x_5063_, 0);
lean_inc(v_a_5064_);
lean_dec_ref(v___x_5063_);
v___x_5065_ = l_Lean_mkAppN(v_a_5064_, v_snd_5049_);
lean_dec(v_snd_5049_);
v___x_5066_ = 1;
v___x_5067_ = 1;
v___x_5068_ = l_Lean_Meta_mkLetFVars(v_funTypes_5021_, v___x_5065_, v___x_5066_, v___x_5066_, v___x_5067_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_);
if (lean_obj_tag(v___x_5068_) == 0)
{
lean_object* v_a_5069_; uint8_t v___x_5070_; lean_object* v___x_5071_; 
v_a_5069_ = lean_ctor_get(v___x_5068_, 0);
lean_inc(v_a_5069_);
lean_dec_ref(v___x_5068_);
v___x_5070_ = 0;
v___x_5071_ = l_Lean_Meta_mkLambdaFVars(v_ys_5022_, v_a_5069_, v___x_5070_, v___x_5066_, v___x_5070_, v___x_5066_, v___x_5067_, v___y_5024_, v___y_5025_, v___y_5026_, v___y_5027_);
lean_dec_ref(v_ys_5022_);
return v___x_5071_;
}
else
{
lean_dec_ref(v_ys_5022_);
return v___x_5068_;
}
}
else
{
lean_dec(v_snd_5049_);
lean_dec_ref(v_ys_5022_);
return v___x_5063_;
}
}
else
{
lean_dec(v_val_5055_);
lean_dec(v_snd_5049_);
lean_dec(v_fst_5048_);
lean_dec_ref(v_ys_5022_);
lean_dec_ref(v_brecOnConst_5019_);
lean_dec_ref(v_recArgInfo_5016_);
v___y_5030_ = v___y_5024_;
v___y_5031_ = v___y_5025_;
v___y_5032_ = v___y_5026_;
v___y_5033_ = v___y_5027_;
goto v___jp_5029_;
}
}
v___jp_5029_:
{
lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5046_; 
v___x_5034_ = lean_obj_once(&l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1, &l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1_once, _init_l_Lean_Elab_Structural_mkBRecOnApp___lam__0___closed__1);
v___x_5035_ = l_Nat_reprFast(v_fnIdx_5018_);
v___x_5036_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5036_, 0, v___x_5035_);
v___x_5037_ = l_Lean_MessageData_ofFormat(v___x_5036_);
v___x_5038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5038_, 0, v___x_5034_);
lean_ctor_set(v___x_5038_, 1, v___x_5037_);
v___x_5039_ = lean_obj_once(&l_Lean_Elab_Structural_toBelow___lam__1___closed__3, &l_Lean_Elab_Structural_toBelow___lam__1___closed__3_once, _init_l_Lean_Elab_Structural_toBelow___lam__1___closed__3);
v___x_5040_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5040_, 0, v___x_5038_);
lean_ctor_set(v___x_5040_, 1, v___x_5039_);
v___x_5041_ = lean_array_to_list(v_positions_5017_);
v___x_5042_ = lean_box(0);
v___x_5043_ = l_List_mapTR_loop___at___00Lean_Elab_Structural_mkBRecOnApp_spec__1(v___x_5041_, v___x_5042_);
v___x_5044_ = l_Lean_MessageData_ofList(v___x_5043_);
v___x_5045_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5045_, 0, v___x_5040_);
lean_ctor_set(v___x_5045_, 1, v___x_5044_);
v___x_5046_ = l_Lean_throwError___at___00__private_Lean_Elab_PreDefinition_Structural_BRecOn_0__Lean_Elab_Structural_throwToBelowFailed_spec__0___redArg(v___x_5045_, v___y_5030_, v___y_5031_, v___y_5032_, v___y_5033_);
return v___x_5046_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed(lean_object* v_recArgInfo_5072_, lean_object* v_positions_5073_, lean_object* v_fnIdx_5074_, lean_object* v_brecOnConst_5075_, lean_object* v_packedFArgs_5076_, lean_object* v_funTypes_5077_, lean_object* v_ys_5078_, lean_object* v___value_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_, lean_object* v___y_5084_){
_start:
{
lean_object* v_res_5085_; 
v_res_5085_ = l_Lean_Elab_Structural_mkBRecOnApp___lam__0(v_recArgInfo_5072_, v_positions_5073_, v_fnIdx_5074_, v_brecOnConst_5075_, v_packedFArgs_5076_, v_funTypes_5077_, v_ys_5078_, v___value_5079_, v___y_5080_, v___y_5081_, v___y_5082_, v___y_5083_);
lean_dec(v___y_5083_);
lean_dec_ref(v___y_5082_);
lean_dec(v___y_5081_);
lean_dec_ref(v___y_5080_);
lean_dec_ref(v___value_5079_);
lean_dec_ref(v_funTypes_5077_);
lean_dec_ref(v_packedFArgs_5076_);
return v_res_5085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp(lean_object* v_positions_5086_, lean_object* v_fnIdx_5087_, lean_object* v_brecOnConst_5088_, lean_object* v_packedFArgs_5089_, lean_object* v_funTypes_5090_, lean_object* v_recArgInfo_5091_, lean_object* v_value_5092_, lean_object* v_a_5093_, lean_object* v_a_5094_, lean_object* v_a_5095_, lean_object* v_a_5096_){
_start:
{
lean_object* v___f_5098_; uint8_t v___x_5099_; lean_object* v___x_5100_; 
v___f_5098_ = lean_alloc_closure((void*)(l_Lean_Elab_Structural_mkBRecOnApp___lam__0___boxed), 13, 6);
lean_closure_set(v___f_5098_, 0, v_recArgInfo_5091_);
lean_closure_set(v___f_5098_, 1, v_positions_5086_);
lean_closure_set(v___f_5098_, 2, v_fnIdx_5087_);
lean_closure_set(v___f_5098_, 3, v_brecOnConst_5088_);
lean_closure_set(v___f_5098_, 4, v_packedFArgs_5089_);
lean_closure_set(v___f_5098_, 5, v_funTypes_5090_);
v___x_5099_ = 0;
v___x_5100_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Structural_mkBRecOnMotive_spec__0___redArg(v_value_5092_, v___f_5098_, v___x_5099_, v_a_5093_, v_a_5094_, v_a_5095_, v_a_5096_);
return v___x_5100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Structural_mkBRecOnApp___boxed(lean_object* v_positions_5101_, lean_object* v_fnIdx_5102_, lean_object* v_brecOnConst_5103_, lean_object* v_packedFArgs_5104_, lean_object* v_funTypes_5105_, lean_object* v_recArgInfo_5106_, lean_object* v_value_5107_, lean_object* v_a_5108_, lean_object* v_a_5109_, lean_object* v_a_5110_, lean_object* v_a_5111_, lean_object* v_a_5112_){
_start:
{
lean_object* v_res_5113_; 
v_res_5113_ = l_Lean_Elab_Structural_mkBRecOnApp(v_positions_5101_, v_fnIdx_5102_, v_brecOnConst_5103_, v_packedFArgs_5104_, v_funTypes_5105_, v_recArgInfo_5106_, v_value_5107_, v_a_5108_, v_a_5109_, v_a_5110_, v_a_5111_);
lean_dec(v_a_5111_);
lean_dec_ref(v_a_5110_);
lean_dec(v_a_5109_);
lean_dec_ref(v_a_5108_);
return v_res_5113_;
}
}
lean_object* runtime_initialize_Lean_Util_HasConstCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Util_HasConstCache(uint8_t builtin);
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_Basic(uint8_t builtin);
lean_object* initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Order(uint8_t builtin);
lean_object* initialize_Init_Data_Order_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_Structural_BRecOn(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Util_HasConstCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_PreDefinition_Structural_RecArgInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Order_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_Structural_BRecOn(builtin);
}
#ifdef __cplusplus
}
#endif
