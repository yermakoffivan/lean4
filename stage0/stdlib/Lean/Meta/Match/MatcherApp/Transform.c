// Lean compiler output
// Module: Lean.Meta.Match.MatcherApp.Transform
// Imports: public import Lean.Meta.Match.MatcherApp.Basic public import Lean.Meta.Match.MatchEqsExt public import Lean.Meta.Match.AltTelescopes public import Lean.Meta.AppBuilder import Lean.Meta.Tactic.Split import Lean.Meta.Tactic.Refl
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Subarray_empty(lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallBoundedTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_Split_simpMatchTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MVarId_admit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalContext_setUserName(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_lambdaTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getEquationsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* l_Lean_Meta_getMatcherInfo_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_isProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isTypeCorrect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_kabstract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_arrowDomainsN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0;
static lean_once_cell_t l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__5;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__6;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__8;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__4;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0;
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1;
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2;
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3;
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4;
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5;
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6;
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1;
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2;
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3;
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__0;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__1;
static lean_once_cell_t l_Lean_Meta_MatcherApp_inferMatchType___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_inferMatchType___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(lean_object* v_type_19_, lean_object* v_maxFVars_x3f_20_, lean_object* v_k_21_, uint8_t v_cleanupAnnotations_22_, uint8_t v_whnfType_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_){
_start:
{
lean_object* v___f_29_; lean_object* v___x_30_; 
v___f_29_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_29_, 0, v_k_21_);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_19_, v_maxFVars_x3f_20_, v___f_29_, v_cleanupAnnotations_22_, v_whnfType_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_38_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_38_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_38_ == 0)
{
v___x_33_ = v___x_30_;
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_a_31_);
lean_dec(v___x_30_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_38_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_36_; 
if (v_isShared_34_ == 0)
{
v___x_36_ = v___x_33_;
goto v_reusejp_35_;
}
else
{
lean_object* v_reuseFailAlloc_37_; 
v_reuseFailAlloc_37_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_37_, 0, v_a_31_);
v___x_36_ = v_reuseFailAlloc_37_;
goto v_reusejp_35_;
}
v_reusejp_35_:
{
return v___x_36_;
}
}
}
else
{
lean_object* v_a_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_46_; 
v_a_39_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_46_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_46_ == 0)
{
v___x_41_ = v___x_30_;
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_a_39_);
lean_dec(v___x_30_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_46_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___x_44_; 
if (v_isShared_42_ == 0)
{
v___x_44_ = v___x_41_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v_a_39_);
v___x_44_ = v_reuseFailAlloc_45_;
goto v_reusejp_43_;
}
v_reusejp_43_:
{
return v___x_44_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___boxed(lean_object* v_type_47_, lean_object* v_maxFVars_x3f_48_, lean_object* v_k_49_, lean_object* v_cleanupAnnotations_50_, lean_object* v_whnfType_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_57_; uint8_t v_whnfType_boxed_58_; lean_object* v_res_59_; 
v_cleanupAnnotations_boxed_57_ = lean_unbox(v_cleanupAnnotations_50_);
v_whnfType_boxed_58_ = lean_unbox(v_whnfType_51_);
v_res_59_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_type_47_, v_maxFVars_x3f_48_, v_k_49_, v_cleanupAnnotations_boxed_57_, v_whnfType_boxed_58_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(lean_object* v_00_u03b1_60_, lean_object* v_type_61_, lean_object* v_maxFVars_x3f_62_, lean_object* v_k_63_, uint8_t v_cleanupAnnotations_64_, uint8_t v_whnfType_65_, lean_object* v___y_66_, lean_object* v___y_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_type_61_, v_maxFVars_x3f_62_, v_k_63_, v_cleanupAnnotations_64_, v_whnfType_65_, v___y_66_, v___y_67_, v___y_68_, v___y_69_);
return v___x_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___boxed(lean_object* v_00_u03b1_72_, lean_object* v_type_73_, lean_object* v_maxFVars_x3f_74_, lean_object* v_k_75_, lean_object* v_cleanupAnnotations_76_, lean_object* v_whnfType_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_83_; uint8_t v_whnfType_boxed_84_; lean_object* v_res_85_; 
v_cleanupAnnotations_boxed_83_ = lean_unbox(v_cleanupAnnotations_76_);
v_whnfType_boxed_84_ = lean_unbox(v_whnfType_77_);
v_res_85_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1(v_00_u03b1_72_, v_type_73_, v_maxFVars_x3f_74_, v_k_75_, v_cleanupAnnotations_boxed_83_, v_whnfType_boxed_84_, v___y_78_, v___y_79_, v___y_80_, v___y_81_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(lean_object* v_e_86_, lean_object* v_maxFVars_87_, lean_object* v_k_88_, uint8_t v_cleanupAnnotations_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v___f_95_; uint8_t v___x_96_; uint8_t v___x_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_95_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_95_, 0, v_k_88_);
v___x_96_ = 1;
v___x_97_ = 0;
v___x_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_98_, 0, v_maxFVars_87_);
v___x_99_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_86_, v___x_96_, v___x_97_, v___x_96_, v___x_97_, v___x_98_, v___f_95_, v_cleanupAnnotations_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec_ref(v___x_98_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_107_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_107_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_107_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v___x_105_; 
if (v_isShared_103_ == 0)
{
v___x_105_ = v___x_102_;
goto v_reusejp_104_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_a_100_);
v___x_105_ = v_reuseFailAlloc_106_;
goto v_reusejp_104_;
}
v_reusejp_104_:
{
return v___x_105_;
}
}
}
else
{
lean_object* v_a_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_115_; 
v_a_108_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_115_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_115_ == 0)
{
v___x_110_ = v___x_99_;
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_a_108_);
lean_dec(v___x_99_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_115_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_114_; 
v_reuseFailAlloc_114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_114_, 0, v_a_108_);
v___x_113_ = v_reuseFailAlloc_114_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
return v___x_113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg___boxed(lean_object* v_e_116_, lean_object* v_maxFVars_117_, lean_object* v_k_118_, lean_object* v_cleanupAnnotations_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_125_; lean_object* v_res_126_; 
v_cleanupAnnotations_boxed_125_ = lean_unbox(v_cleanupAnnotations_119_);
v_res_126_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_e_116_, v_maxFVars_117_, v_k_118_, v_cleanupAnnotations_boxed_125_, v___y_120_, v___y_121_, v___y_122_, v___y_123_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
lean_dec(v___y_121_);
lean_dec_ref(v___y_120_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(lean_object* v_00_u03b1_127_, lean_object* v_e_128_, lean_object* v_maxFVars_129_, lean_object* v_k_130_, uint8_t v_cleanupAnnotations_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v___x_137_; 
v___x_137_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_e_128_, v_maxFVars_129_, v_k_130_, v_cleanupAnnotations_131_, v___y_132_, v___y_133_, v___y_134_, v___y_135_);
return v___x_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___boxed(lean_object* v_00_u03b1_138_, lean_object* v_e_139_, lean_object* v_maxFVars_140_, lean_object* v_k_141_, lean_object* v_cleanupAnnotations_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_148_; lean_object* v_res_149_; 
v_cleanupAnnotations_boxed_148_ = lean_unbox(v_cleanupAnnotations_142_);
v_res_149_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2(v_00_u03b1_138_, v_e_139_, v_maxFVars_140_, v_k_141_, v_cleanupAnnotations_boxed_148_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
return v_res_149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(lean_object* v_alt_150_, uint8_t v___x_151_, lean_object* v_xs_152_, uint8_t v_refined_153_, lean_object* v_unrefinedArgType_154_, lean_object* v_x_155_, lean_object* v_x_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_){
_start:
{
uint8_t v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; 
v___x_162_ = 0;
v___x_163_ = 1;
v___x_164_ = l_Lean_Meta_mkLambdaFVars(v_x_155_, v_alt_150_, v___x_162_, v___x_151_, v___x_162_, v___x_151_, v___x_163_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; uint8_t v_refined_167_; lean_object* v___y_168_; lean_object* v___y_169_; lean_object* v___y_170_; lean_object* v___y_171_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc(v_a_165_);
lean_dec_ref(v___x_164_);
if (v_refined_153_ == 0)
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_191_ = l_Lean_instInhabitedExpr;
v___x_192_ = lean_unsigned_to_nat(0u);
v___x_193_ = lean_array_get_borrowed(v___x_191_, v_x_155_, v___x_192_);
lean_inc(v___y_160_);
lean_inc_ref(v___y_159_);
lean_inc(v___y_158_);
lean_inc_ref(v___y_157_);
lean_inc(v___x_193_);
v___x_194_ = lean_infer_type(v___x_193_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_196_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
lean_dec_ref(v___x_194_);
v___x_196_ = l_Lean_Meta_isExprDefEq(v_unrefinedArgType_154_, v_a_195_, v___y_157_, v___y_158_, v___y_159_, v___y_160_);
if (lean_obj_tag(v___x_196_) == 0)
{
lean_object* v_a_197_; uint8_t v___x_198_; 
v_a_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc(v_a_197_);
lean_dec_ref(v___x_196_);
v___x_198_ = lean_unbox(v_a_197_);
lean_dec(v_a_197_);
if (v___x_198_ == 0)
{
v_refined_167_ = v___x_151_;
v___y_168_ = v___y_157_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
goto v___jp_166_;
}
else
{
v_refined_167_ = v_refined_153_;
v___y_168_ = v___y_157_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
goto v___jp_166_;
}
}
else
{
lean_object* v_a_199_; lean_object* v___x_201_; uint8_t v_isShared_202_; uint8_t v_isSharedCheck_206_; 
lean_dec(v_a_165_);
v_a_199_ = lean_ctor_get(v___x_196_, 0);
v_isSharedCheck_206_ = !lean_is_exclusive(v___x_196_);
if (v_isSharedCheck_206_ == 0)
{
v___x_201_ = v___x_196_;
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
else
{
lean_inc(v_a_199_);
lean_dec(v___x_196_);
v___x_201_ = lean_box(0);
v_isShared_202_ = v_isSharedCheck_206_;
goto v_resetjp_200_;
}
v_resetjp_200_:
{
lean_object* v___x_204_; 
if (v_isShared_202_ == 0)
{
v___x_204_ = v___x_201_;
goto v_reusejp_203_;
}
else
{
lean_object* v_reuseFailAlloc_205_; 
v_reuseFailAlloc_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_205_, 0, v_a_199_);
v___x_204_ = v_reuseFailAlloc_205_;
goto v_reusejp_203_;
}
v_reusejp_203_:
{
return v___x_204_;
}
}
}
}
else
{
lean_object* v_a_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_214_; 
lean_dec(v_a_165_);
lean_dec_ref(v_unrefinedArgType_154_);
v_a_207_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_214_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_214_ == 0)
{
v___x_209_ = v___x_194_;
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_a_207_);
lean_dec(v___x_194_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_214_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v___x_212_; 
if (v_isShared_210_ == 0)
{
v___x_212_ = v___x_209_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v_a_207_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
else
{
lean_dec_ref(v_unrefinedArgType_154_);
v_refined_167_ = v_refined_153_;
v___y_168_ = v___y_157_;
v___y_169_ = v___y_158_;
v___y_170_ = v___y_159_;
v___y_171_ = v___y_160_;
goto v___jp_166_;
}
v___jp_166_:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lean_Meta_mkLambdaFVars(v_xs_152_, v_a_165_, v___x_162_, v___x_151_, v___x_162_, v___x_151_, v___x_163_, v___y_168_, v___y_169_, v___y_170_, v___y_171_);
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_182_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_182_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_182_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_182_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_180_; 
v___x_177_ = lean_box(v_refined_167_);
v___x_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_178_, 0, v_a_173_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_178_);
v___x_180_ = v___x_175_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v___x_178_);
v___x_180_ = v_reuseFailAlloc_181_;
goto v_reusejp_179_;
}
v_reusejp_179_:
{
return v___x_180_;
}
}
}
else
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_190_; 
v_a_183_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_172_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_172_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___x_188_; 
if (v_isShared_186_ == 0)
{
v___x_188_ = v___x_185_;
goto v_reusejp_187_;
}
else
{
lean_object* v_reuseFailAlloc_189_; 
v_reuseFailAlloc_189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_189_, 0, v_a_183_);
v___x_188_ = v_reuseFailAlloc_189_;
goto v_reusejp_187_;
}
v_reusejp_187_:
{
return v___x_188_;
}
}
}
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec_ref(v_unrefinedArgType_154_);
v_a_215_ = lean_ctor_get(v___x_164_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_164_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_164_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed(lean_object* v_alt_223_, lean_object* v___x_224_, lean_object* v_xs_225_, lean_object* v_refined_226_, lean_object* v_unrefinedArgType_227_, lean_object* v_x_228_, lean_object* v_x_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v___x_4727__boxed_235_; uint8_t v_refined_boxed_236_; lean_object* v_res_237_; 
v___x_4727__boxed_235_ = lean_unbox(v___x_224_);
v_refined_boxed_236_ = lean_unbox(v_refined_226_);
v_res_237_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0(v_alt_223_, v___x_4727__boxed_235_, v_xs_225_, v_refined_boxed_236_, v_unrefinedArgType_227_, v_x_228_, v_x_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec_ref(v_x_229_);
lean_dec_ref(v_x_228_);
lean_dec_ref(v_xs_225_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(lean_object* v_msgData_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_244_; lean_object* v_env_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v_mctx_248_; lean_object* v_lctx_249_; lean_object* v_options_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_244_ = lean_st_ref_get(v___y_242_);
v_env_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc_ref(v_env_245_);
lean_dec(v___x_244_);
v___x_246_ = lean_st_ref_get(v___y_242_);
lean_dec(v___x_246_);
v___x_247_ = lean_st_ref_get(v___y_240_);
v_mctx_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc_ref(v_mctx_248_);
lean_dec(v___x_247_);
v_lctx_249_ = lean_ctor_get(v___y_239_, 2);
v_options_250_ = lean_ctor_get(v___y_241_, 2);
lean_inc_ref(v_options_250_);
lean_inc_ref(v_lctx_249_);
v___x_251_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_251_, 0, v_env_245_);
lean_ctor_set(v___x_251_, 1, v_mctx_248_);
lean_ctor_set(v___x_251_, 2, v_lctx_249_);
lean_ctor_set(v___x_251_, 3, v_options_250_);
v___x_252_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_251_);
lean_ctor_set(v___x_252_, 1, v_msgData_238_);
v___x_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0___boxed(lean_object* v_msgData_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msgData_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(lean_object* v_msg_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_ref_267_; lean_object* v___x_268_; lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_277_; 
v_ref_267_ = lean_ctor_get(v___y_264_, 5);
v___x_268_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v_msg_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
v_a_269_ = lean_ctor_get(v___x_268_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_268_);
if (v_isSharedCheck_277_ == 0)
{
v___x_271_ = v___x_268_;
v_isShared_272_ = v_isSharedCheck_277_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_268_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_277_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_273_; lean_object* v___x_275_; 
lean_inc(v_ref_267_);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v_ref_267_);
lean_ctor_set(v___x_273_, 1, v_a_269_);
if (v_isShared_272_ == 0)
{
lean_ctor_set_tag(v___x_271_, 1);
lean_ctor_set(v___x_271_, 0, v___x_273_);
v___x_275_ = v___x_271_;
goto v_reusejp_274_;
}
else
{
lean_object* v_reuseFailAlloc_276_; 
v_reuseFailAlloc_276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_276_, 0, v___x_273_);
v___x_275_ = v_reuseFailAlloc_276_;
goto v_reusejp_274_;
}
v_reusejp_274_:
{
return v___x_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg___boxed(lean_object* v_msg_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
return v_res_284_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0(void){
_start:
{
lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_285_ = lean_unsigned_to_nat(1u);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
return v___x_286_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1(void){
_start:
{
lean_object* v___x_287_; 
v___x_287_ = lean_mk_string_unchecked("unexpected matcher application, insufficient number of parameters in alternative", 80, 80);
return v___x_287_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2(void){
_start:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__1);
v___x_289_ = l_Lean_stringToMessageData(v___x_288_);
return v___x_289_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_mk_string_unchecked("unexpected matcher application, alternative must have ", 54, 54);
return v___x_290_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__3);
v___x_292_ = l_Lean_stringToMessageData(v___x_291_);
return v___x_292_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5(void){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = lean_mk_string_unchecked(" parameters", 11, 11);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__5);
v___x_295_ = l_Lean_stringToMessageData(v___x_294_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(uint8_t v___x_296_, uint8_t v_refined_297_, lean_object* v_unrefinedArgType_298_, lean_object* v_binderType_299_, lean_object* v_numParams_300_, lean_object* v_xs_301_, lean_object* v_alt_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___f_310_; lean_object* v___y_312_; lean_object* v___y_313_; lean_object* v___y_314_; lean_object* v___y_315_; lean_object* v___y_316_; lean_object* v___y_330_; lean_object* v___y_331_; lean_object* v___y_332_; lean_object* v___y_333_; lean_object* v___y_334_; uint8_t v___y_335_; lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_308_ = lean_box(v___x_296_);
v___x_309_ = lean_box(v_refined_297_);
lean_inc_ref(v_xs_301_);
v___f_310_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__0___boxed), 12, 5);
lean_closure_set(v___f_310_, 0, v_alt_302_);
lean_closure_set(v___f_310_, 1, v___x_308_);
lean_closure_set(v___f_310_, 2, v_xs_301_);
lean_closure_set(v___f_310_, 3, v___x_309_);
lean_closure_set(v___f_310_, 4, v_unrefinedArgType_298_);
v___x_343_ = lean_array_get_size(v_xs_301_);
v___x_344_ = lean_nat_dec_eq(v___x_343_, v_numParams_300_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_345_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__4);
v___x_346_ = l_Nat_reprFast(v_numParams_300_);
v___x_347_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
v___x_348_ = l_Lean_MessageData_ofFormat(v___x_347_);
v___x_349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_345_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
v___x_350_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__6);
v___x_351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_351_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_dec_ref(v___x_352_);
goto v___jp_338_;
}
else
{
lean_object* v_a_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_360_; 
lean_dec_ref(v___f_310_);
lean_dec_ref(v_xs_301_);
lean_dec_ref(v_binderType_299_);
v_a_353_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_360_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_360_ == 0)
{
v___x_355_ = v___x_352_;
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_a_353_);
lean_dec(v___x_352_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_360_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_358_; 
if (v_isShared_356_ == 0)
{
v___x_358_ = v___x_355_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v_a_353_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
}
}
else
{
lean_dec(v_numParams_300_);
goto v___jp_338_;
}
v___jp_311_:
{
if (lean_obj_tag(v___y_316_) == 0)
{
lean_object* v_a_317_; lean_object* v___x_318_; uint8_t v___x_319_; lean_object* v___x_320_; 
v_a_317_ = lean_ctor_get(v___y_316_, 0);
lean_inc(v_a_317_);
lean_dec_ref(v___y_316_);
v___x_318_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__0);
v___x_319_ = 0;
v___x_320_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_a_317_, v___x_318_, v___f_310_, v___x_319_, v___x_319_, v___y_312_, v___y_313_, v___y_314_, v___y_315_);
return v___x_320_;
}
else
{
lean_object* v_a_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_328_; 
lean_dec_ref(v___f_310_);
v_a_321_ = lean_ctor_get(v___y_316_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v___y_316_);
if (v_isSharedCheck_328_ == 0)
{
v___x_323_ = v___y_316_;
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_a_321_);
lean_dec(v___y_316_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_328_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_326_; 
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
return v___x_326_;
}
}
}
}
v___jp_329_:
{
if (v___y_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec_ref(v___y_333_);
v___x_336_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_337_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_336_, v___y_330_, v___y_331_, v___y_332_, v___y_334_);
v___y_312_ = v___y_330_;
v___y_313_ = v___y_331_;
v___y_314_ = v___y_332_;
v___y_315_ = v___y_334_;
v___y_316_ = v___x_337_;
goto v___jp_311_;
}
else
{
v___y_312_ = v___y_330_;
v___y_313_ = v___y_331_;
v___y_314_ = v___y_332_;
v___y_315_ = v___y_334_;
v___y_316_ = v___y_333_;
goto v___jp_311_;
}
}
v___jp_338_:
{
lean_object* v___x_339_; 
v___x_339_ = l_Lean_Meta_instantiateForall(v_binderType_299_, v_xs_301_, v___y_303_, v___y_304_, v___y_305_, v___y_306_);
lean_dec_ref(v_xs_301_);
if (lean_obj_tag(v___x_339_) == 0)
{
v___y_312_ = v___y_303_;
v___y_313_ = v___y_304_;
v___y_314_ = v___y_305_;
v___y_315_ = v___y_306_;
v___y_316_ = v___x_339_;
goto v___jp_311_;
}
else
{
lean_object* v_a_340_; uint8_t v___x_341_; 
v_a_340_ = lean_ctor_get(v___x_339_, 0);
lean_inc(v_a_340_);
v___x_341_ = l_Lean_Exception_isInterrupt(v_a_340_);
if (v___x_341_ == 0)
{
uint8_t v___x_342_; 
v___x_342_ = l_Lean_Exception_isRuntime(v_a_340_);
v___y_330_ = v___y_303_;
v___y_331_ = v___y_304_;
v___y_332_ = v___y_305_;
v___y_333_ = v___x_339_;
v___y_334_ = v___y_306_;
v___y_335_ = v___x_342_;
goto v___jp_329_;
}
else
{
lean_dec(v_a_340_);
v___y_330_ = v___y_303_;
v___y_331_ = v___y_304_;
v___y_332_ = v___y_305_;
v___y_333_ = v___x_339_;
v___y_334_ = v___y_306_;
v___y_335_ = v___x_341_;
goto v___jp_329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed(lean_object* v___x_361_, lean_object* v_refined_362_, lean_object* v_unrefinedArgType_363_, lean_object* v_binderType_364_, lean_object* v_numParams_365_, lean_object* v_xs_366_, lean_object* v_alt_367_, lean_object* v___y_368_, lean_object* v___y_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
uint8_t v___x_4953__boxed_373_; uint8_t v_refined_boxed_374_; lean_object* v_res_375_; 
v___x_4953__boxed_373_ = lean_unbox(v___x_361_);
v_refined_boxed_374_ = lean_unbox(v_refined_362_);
v_res_375_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1(v___x_4953__boxed_373_, v_refined_boxed_374_, v_unrefinedArgType_363_, v_binderType_364_, v_numParams_365_, v_xs_366_, v_alt_367_, v___y_368_, v___y_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
lean_dec(v___y_369_);
lean_dec_ref(v___y_368_);
return v_res_375_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0(void){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = lean_mk_string_unchecked("failed to add argument to matcher application, argument type was not refined by `casesOn`", 89, 89);
return v___x_376_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1(void){
_start:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__0);
v___x_378_ = l_Lean_stringToMessageData(v___x_377_);
return v___x_378_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_mk_string_unchecked("unexpected type at MatcherApp.addArg", 36, 36);
return v___x_379_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__2);
v___x_381_ = l_Lean_stringToMessageData(v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(lean_object* v_unrefinedArgType_382_, lean_object* v_typeNew_383_, lean_object* v_altNumParams_384_, lean_object* v_alts_385_, uint8_t v_refined_386_, lean_object* v_i_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_393_ = lean_array_get_size(v_alts_385_);
v___x_394_ = lean_nat_dec_lt(v_i_387_, v___x_393_);
if (v___x_394_ == 0)
{
lean_dec(v_i_387_);
lean_dec_ref(v_typeNew_383_);
lean_dec_ref(v_unrefinedArgType_382_);
if (v_refined_386_ == 0)
{
lean_object* v___x_395_; lean_object* v___x_396_; 
lean_dec_ref(v_alts_385_);
v___x_395_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__1);
v___x_396_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_395_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
return v___x_396_;
}
else
{
lean_object* v___x_397_; 
v___x_397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_397_, 0, v_alts_385_);
return v___x_397_;
}
}
else
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_Meta_whnfD(v_typeNew_383_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
if (lean_obj_tag(v___x_398_) == 0)
{
lean_object* v_a_399_; 
v_a_399_ = lean_ctor_get(v___x_398_, 0);
lean_inc(v_a_399_);
lean_dec_ref(v___x_398_);
if (lean_obj_tag(v_a_399_) == 7)
{
lean_object* v_binderType_400_; lean_object* v_body_401_; lean_object* v___x_402_; lean_object* v_alt_403_; lean_object* v_numParams_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___f_407_; uint8_t v___x_408_; lean_object* v___x_409_; 
v_binderType_400_ = lean_ctor_get(v_a_399_, 1);
lean_inc_ref(v_binderType_400_);
v_body_401_ = lean_ctor_get(v_a_399_, 2);
lean_inc_ref(v_body_401_);
lean_dec_ref(v_a_399_);
v___x_402_ = lean_unsigned_to_nat(0u);
v_alt_403_ = lean_array_fget_borrowed(v_alts_385_, v_i_387_);
v_numParams_404_ = lean_array_get_borrowed(v___x_402_, v_altNumParams_384_, v_i_387_);
v___x_405_ = lean_box(v___x_394_);
v___x_406_ = lean_box(v_refined_386_);
lean_inc_n(v_numParams_404_, 2);
lean_inc_ref(v_unrefinedArgType_382_);
v___f_407_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___boxed), 12, 5);
lean_closure_set(v___f_407_, 0, v___x_405_);
lean_closure_set(v___f_407_, 1, v___x_406_);
lean_closure_set(v___f_407_, 2, v_unrefinedArgType_382_);
lean_closure_set(v___f_407_, 3, v_binderType_400_);
lean_closure_set(v___f_407_, 4, v_numParams_404_);
v___x_408_ = 0;
lean_inc(v_alt_403_);
v___x_409_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__2___redArg(v_alt_403_, v_numParams_404_, v___f_407_, v___x_408_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
if (lean_obj_tag(v___x_409_) == 0)
{
lean_object* v_a_410_; lean_object* v_fst_411_; lean_object* v_snd_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v_a_410_ = lean_ctor_get(v___x_409_, 0);
lean_inc(v_a_410_);
lean_dec_ref(v___x_409_);
v_fst_411_ = lean_ctor_get(v_a_410_, 0);
lean_inc(v_fst_411_);
v_snd_412_ = lean_ctor_get(v_a_410_, 1);
lean_inc(v_snd_412_);
lean_dec(v_a_410_);
v___x_413_ = lean_expr_instantiate1(v_body_401_, v_fst_411_);
lean_dec_ref(v_body_401_);
v___x_414_ = lean_array_fset(v_alts_385_, v_i_387_, v_fst_411_);
v___x_415_ = lean_unsigned_to_nat(1u);
v___x_416_ = lean_nat_add(v_i_387_, v___x_415_);
lean_dec(v_i_387_);
v___x_417_ = lean_unbox(v_snd_412_);
lean_dec(v_snd_412_);
v_typeNew_383_ = v___x_413_;
v_alts_385_ = v___x_414_;
v_refined_386_ = v___x_417_;
v_i_387_ = v___x_416_;
goto _start;
}
else
{
lean_object* v_a_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_426_; 
lean_dec_ref(v_body_401_);
lean_dec(v_i_387_);
lean_dec_ref(v_alts_385_);
lean_dec_ref(v_unrefinedArgType_382_);
v_a_419_ = lean_ctor_get(v___x_409_, 0);
v_isSharedCheck_426_ = !lean_is_exclusive(v___x_409_);
if (v_isSharedCheck_426_ == 0)
{
v___x_421_ = v___x_409_;
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_a_419_);
lean_dec(v___x_409_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_426_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_424_; 
if (v_isShared_422_ == 0)
{
v___x_424_ = v___x_421_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_425_; 
v_reuseFailAlloc_425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_425_, 0, v_a_419_);
v___x_424_ = v_reuseFailAlloc_425_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
return v___x_424_;
}
}
}
}
else
{
lean_object* v___x_427_; lean_object* v___x_428_; 
lean_dec(v_a_399_);
lean_dec(v_i_387_);
lean_dec_ref(v_alts_385_);
lean_dec_ref(v_unrefinedArgType_382_);
v___x_427_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___closed__3);
v___x_428_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_427_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
return v___x_428_;
}
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec(v_i_387_);
lean_dec_ref(v_alts_385_);
lean_dec_ref(v_unrefinedArgType_382_);
v_a_429_ = lean_ctor_get(v___x_398_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_398_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_398_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_398_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___boxed(lean_object* v_unrefinedArgType_437_, lean_object* v_typeNew_438_, lean_object* v_altNumParams_439_, lean_object* v_alts_440_, lean_object* v_refined_441_, lean_object* v_i_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
uint8_t v_refined_boxed_448_; lean_object* v_res_449_; 
v_refined_boxed_448_ = lean_unbox(v_refined_441_);
v_res_449_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v_unrefinedArgType_437_, v_typeNew_438_, v_altNumParams_439_, v_alts_440_, v_refined_boxed_448_, v_i_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_);
lean_dec(v_a_446_);
lean_dec_ref(v_a_445_);
lean_dec(v_a_444_);
lean_dec_ref(v_a_443_);
lean_dec_ref(v_altNumParams_439_);
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(lean_object* v_00_u03b1_450_, lean_object* v_msg_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
lean_object* v___x_457_; 
v___x_457_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v_msg_451_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
return v___x_457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___boxed(lean_object* v_00_u03b1_458_, lean_object* v_msg_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0(v_00_u03b1_458_, v_msg_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(lean_object* v_e_466_, lean_object* v_k_467_, uint8_t v_cleanupAnnotations_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v___f_474_; uint8_t v___x_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v___f_474_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_474_, 0, v_k_467_);
v___x_475_ = 1;
v___x_476_ = 0;
v___x_477_ = lean_box(0);
v___x_478_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_466_, v___x_475_, v___x_476_, v___x_475_, v___x_476_, v___x_477_, v___f_474_, v_cleanupAnnotations_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_478_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_478_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
else
{
lean_object* v_a_487_; lean_object* v___x_489_; uint8_t v_isShared_490_; uint8_t v_isSharedCheck_494_; 
v_a_487_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_494_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_494_ == 0)
{
v___x_489_ = v___x_478_;
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
else
{
lean_inc(v_a_487_);
lean_dec(v___x_478_);
v___x_489_ = lean_box(0);
v_isShared_490_ = v_isSharedCheck_494_;
goto v_resetjp_488_;
}
v_resetjp_488_:
{
lean_object* v___x_492_; 
if (v_isShared_490_ == 0)
{
v___x_492_ = v___x_489_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_a_487_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
return v___x_492_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg___boxed(lean_object* v_e_495_, lean_object* v_k_496_, lean_object* v_cleanupAnnotations_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_503_; lean_object* v_res_504_; 
v_cleanupAnnotations_boxed_503_ = lean_unbox(v_cleanupAnnotations_497_);
v_res_504_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_495_, v_k_496_, v_cleanupAnnotations_boxed_503_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(lean_object* v_00_u03b1_505_, lean_object* v_e_506_, lean_object* v_k_507_, uint8_t v_cleanupAnnotations_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_e_506_, v_k_507_, v_cleanupAnnotations_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___boxed(lean_object* v_00_u03b1_515_, lean_object* v_e_516_, lean_object* v_k_517_, lean_object* v_cleanupAnnotations_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_524_; lean_object* v_res_525_; 
v_cleanupAnnotations_boxed_524_ = lean_unbox(v_cleanupAnnotations_518_);
v_res_525_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1(v_00_u03b1_515_, v_e_516_, v_k_517_, v_cleanupAnnotations_boxed_524_, v___y_519_, v___y_520_, v___y_521_, v___y_522_);
lean_dec(v___y_522_);
lean_dec_ref(v___y_521_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
return v_res_525_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(lean_object* v___x_526_, lean_object* v_motiveArgs_527_, lean_object* v_x_528_, lean_object* v_x_529_){
_start:
{
lean_object* v_zero_530_; uint8_t v_isZero_531_; 
v_zero_530_ = lean_unsigned_to_nat(0u);
v_isZero_531_ = lean_nat_dec_eq(v_x_528_, v_zero_530_);
if (v_isZero_531_ == 1)
{
lean_dec(v_x_528_);
return v_x_529_;
}
else
{
lean_object* v_one_532_; lean_object* v_n_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v_one_532_ = lean_unsigned_to_nat(1u);
v_n_533_ = lean_nat_sub(v_x_528_, v_one_532_);
lean_dec(v_x_528_);
v___x_534_ = lean_array_fget_borrowed(v___x_526_, v_n_533_);
v___x_535_ = l_Lean_Expr_isFVar(v___x_534_);
if (v___x_535_ == 0)
{
v_x_528_ = v_n_533_;
goto _start;
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = l_Lean_instInhabitedExpr;
v___x_538_ = lean_array_get_borrowed(v___x_537_, v_motiveArgs_527_, v_n_533_);
lean_inc(v___x_534_);
v___x_539_ = l_Lean_Expr_replaceFVar(v_x_529_, v___x_534_, v___x_538_);
lean_dec_ref(v_x_529_);
v_x_528_ = v_n_533_;
v_x_529_ = v___x_539_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0___boxed(lean_object* v___x_541_, lean_object* v_motiveArgs_542_, lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_541_, v_motiveArgs_542_, v_x_543_, v_x_544_);
lean_dec_ref(v_motiveArgs_542_);
lean_dec_ref(v___x_541_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(lean_object* v___x_546_, lean_object* v_motiveArgs_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
lean_object* v_zero_550_; uint8_t v_isZero_551_; 
v_zero_550_ = lean_unsigned_to_nat(0u);
v_isZero_551_ = lean_nat_dec_eq(v_x_548_, v_zero_550_);
if (v_isZero_551_ == 1)
{
return v_x_549_;
}
else
{
lean_object* v_one_552_; lean_object* v_n_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_one_552_ = lean_unsigned_to_nat(1u);
v_n_553_ = lean_nat_sub(v_x_548_, v_one_552_);
v___x_554_ = lean_array_fget_borrowed(v___x_546_, v_n_553_);
v___x_555_ = l_Lean_Expr_isFVar(v___x_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; 
v___x_556_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_546_, v_motiveArgs_547_, v_n_553_, v_x_549_);
return v___x_556_;
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_557_ = l_Lean_instInhabitedExpr;
v___x_558_ = lean_array_get_borrowed(v___x_557_, v_motiveArgs_547_, v_n_553_);
lean_inc(v___x_554_);
v___x_559_ = l_Lean_Expr_replaceFVar(v_x_549_, v___x_554_, v___x_558_);
lean_dec_ref(v_x_549_);
v___x_560_ = l_Nat_foldRev___at___00Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0_spec__0(v___x_546_, v_motiveArgs_547_, v_n_553_, v___x_559_);
return v___x_560_;
}
}
}
}
LEAN_EXPORT lean_object* l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0___boxed(lean_object* v___x_561_, lean_object* v_motiveArgs_562_, lean_object* v_x_563_, lean_object* v_x_564_){
_start:
{
lean_object* v_res_565_; 
v_res_565_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v___x_561_, v_motiveArgs_562_, v_x_563_, v_x_564_);
lean_dec(v_x_563_);
lean_dec_ref(v_motiveArgs_562_);
lean_dec_ref(v___x_561_);
return v_res_565_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = lean_mk_string_unchecked("failed to add argument to matcher application, type error when constructing the new motive", 90, 90);
return v___x_566_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_567_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__0);
v___x_568_ = l_Lean_stringToMessageData(v___x_567_);
return v___x_568_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = lean_mk_string_unchecked("unexpected matcher application, motive must be lambda expression with #", 71, 71);
return v___x_569_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__2);
v___x_571_ = l_Lean_stringToMessageData(v___x_570_);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = lean_mk_string_unchecked(" arguments", 10, 10);
return v___x_572_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__4);
v___x_574_ = l_Lean_stringToMessageData(v___x_573_);
return v___x_574_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0(lean_object* v_matcherApp_575_, lean_object* v_e_576_, lean_object* v_discrs_577_, lean_object* v_toMatcherInfo_578_, lean_object* v_matcherName_579_, lean_object* v_alts_580_, lean_object* v_remaining_581_, lean_object* v_params_582_, lean_object* v_matcherLevels_583_, lean_object* v_motiveArgs_584_, lean_object* v_motiveBody_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_){
_start:
{
lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; uint8_t v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v_matcherLevels_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; lean_object* v___x_735_; lean_object* v___x_736_; uint8_t v___x_737_; 
v___x_735_ = lean_array_get_size(v_motiveArgs_584_);
v___x_736_ = lean_array_get_size(v_discrs_577_);
v___x_737_ = lean_nat_dec_eq(v___x_735_, v___x_736_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v_a_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_753_; 
lean_dec_ref(v_motiveBody_585_);
lean_dec_ref(v_matcherLevels_583_);
lean_dec_ref(v_params_582_);
lean_dec_ref(v_alts_580_);
lean_dec(v_matcherName_579_);
lean_dec_ref(v_toMatcherInfo_578_);
lean_dec_ref(v_discrs_577_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v___x_738_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_739_ = l_Nat_reprFast(v___x_736_);
v___x_740_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_740_, 0, v___x_739_);
v___x_741_ = l_Lean_MessageData_ofFormat(v___x_740_);
v___x_742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_738_);
lean_ctor_set(v___x_742_, 1, v___x_741_);
v___x_743_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
v___x_745_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_744_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
v_a_746_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_753_ == 0)
{
v___x_748_ = v___x_745_;
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_a_746_);
lean_dec(v___x_745_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_753_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_751_; 
if (v_isShared_749_ == 0)
{
v___x_751_ = v___x_748_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_a_746_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
else
{
v___y_695_ = v___y_586_;
v___y_696_ = v___y_587_;
v___y_697_ = v___y_588_;
v___y_698_ = v___y_589_;
goto v___jp_694_;
}
v___jp_591_:
{
lean_object* v___x_607_; 
lean_inc(v___y_606_);
lean_inc_ref(v___y_605_);
lean_inc(v___y_604_);
lean_inc_ref(v___y_603_);
v___x_607_ = lean_infer_type(v___y_596_, v___y_603_, v___y_604_, v___y_605_, v___y_606_);
if (lean_obj_tag(v___x_607_) == 0)
{
lean_object* v_a_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v_a_608_ = lean_ctor_get(v___x_607_, 0);
lean_inc(v_a_608_);
lean_dec_ref(v___x_607_);
v___x_609_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_575_);
v___x_610_ = lean_unsigned_to_nat(0u);
v___x_611_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts(v___y_598_, v_a_608_, v___x_609_, v___y_594_, v___y_602_, v___x_610_, v___y_603_, v___y_604_, v___y_605_, v___y_606_);
lean_dec_ref(v___x_609_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_624_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_624_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_624_ == 0)
{
v___x_614_ = v___x_611_;
v_isShared_615_ = v_isSharedCheck_624_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_611_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_624_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_616_ = lean_unsigned_to_nat(1u);
v___x_617_ = lean_mk_empty_array_with_capacity(v___x_616_);
v___x_618_ = lean_array_push(v___x_617_, v_e_576_);
v___x_619_ = l_Array_append___redArg(v___x_618_, v___y_595_);
v___x_620_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_620_, 0, v___y_593_);
lean_ctor_set(v___x_620_, 1, v___y_592_);
lean_ctor_set(v___x_620_, 2, v___y_597_);
lean_ctor_set(v___x_620_, 3, v___y_600_);
lean_ctor_set(v___x_620_, 4, v___y_601_);
lean_ctor_set(v___x_620_, 5, v___y_599_);
lean_ctor_set(v___x_620_, 6, v_a_612_);
lean_ctor_set(v___x_620_, 7, v___x_619_);
if (v_isShared_615_ == 0)
{
lean_ctor_set(v___x_614_, 0, v___x_620_);
v___x_622_ = v___x_614_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v___x_620_);
v___x_622_ = v_reuseFailAlloc_623_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
return v___x_622_;
}
}
}
else
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_632_; 
lean_dec_ref(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec_ref(v___y_597_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v_e_576_);
v_a_625_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_632_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_632_ == 0)
{
v___x_627_ = v___x_611_;
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_611_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_632_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v___x_630_; 
if (v_isShared_628_ == 0)
{
v___x_630_ = v___x_627_;
goto v_reusejp_629_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_a_625_);
v___x_630_ = v_reuseFailAlloc_631_;
goto v_reusejp_629_;
}
v_reusejp_629_:
{
return v___x_630_;
}
}
}
}
else
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_640_; 
lean_dec_ref(v___y_601_);
lean_dec_ref(v___y_600_);
lean_dec_ref(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec_ref(v___y_597_);
lean_dec_ref(v___y_594_);
lean_dec_ref(v___y_593_);
lean_dec(v___y_592_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v_a_633_ = lean_ctor_get(v___x_607_, 0);
v_isSharedCheck_640_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_640_ == 0)
{
v___x_635_ = v___x_607_;
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v___x_607_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_640_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
}
}
v___jp_641_:
{
uint8_t v___x_655_; uint8_t v___x_656_; uint8_t v___x_657_; lean_object* v___x_658_; 
v___x_655_ = 0;
v___x_656_ = 1;
v___x_657_ = 1;
v___x_658_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_584_, v___y_646_, v___x_655_, v___x_656_, v___x_655_, v___x_656_, v___x_657_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc_n(v_a_659_, 2);
lean_dec_ref(v___x_658_);
lean_inc_ref(v_matcherLevels_650_);
v___x_660_ = lean_array_to_list(v_matcherLevels_650_);
lean_inc(v___y_643_);
v___x_661_ = l_Lean_mkConst(v___y_643_, v___x_660_);
v___x_662_ = l_Lean_mkAppN(v___x_661_, v___y_649_);
v___x_663_ = l_Lean_Expr_app___override(v___x_662_, v_a_659_);
v___x_664_ = l_Lean_mkAppN(v___x_663_, v___y_648_);
lean_inc_ref(v___x_664_);
v___x_665_ = l_Lean_Meta_isTypeCorrect(v___x_664_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; uint8_t v___x_667_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
lean_inc(v_a_666_);
lean_dec_ref(v___x_665_);
v___x_667_ = lean_unbox(v_a_666_);
lean_dec(v_a_666_);
if (v___x_667_ == 0)
{
lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v_a_670_; lean_object* v___x_672_; uint8_t v_isShared_673_; uint8_t v_isSharedCheck_677_; 
lean_dec_ref(v___x_664_);
lean_dec(v_a_659_);
lean_dec_ref(v_matcherLevels_650_);
lean_dec_ref(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v___x_668_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__1);
v___x_669_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_668_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
v_a_670_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_677_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_677_ == 0)
{
v___x_672_ = v___x_669_;
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
else
{
lean_inc(v_a_670_);
lean_dec(v___x_669_);
v___x_672_ = lean_box(0);
v_isShared_673_ = v_isSharedCheck_677_;
goto v_resetjp_671_;
}
v_resetjp_671_:
{
lean_object* v___x_675_; 
if (v_isShared_673_ == 0)
{
v___x_675_ = v___x_672_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_a_670_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
else
{
v___y_592_ = v___y_643_;
v___y_593_ = v___y_642_;
v___y_594_ = v___y_644_;
v___y_595_ = v___y_645_;
v___y_596_ = v___x_664_;
v___y_597_ = v_matcherLevels_650_;
v___y_598_ = v___y_647_;
v___y_599_ = v___y_648_;
v___y_600_ = v___y_649_;
v___y_601_ = v_a_659_;
v___y_602_ = v___x_655_;
v___y_603_ = v___y_651_;
v___y_604_ = v___y_652_;
v___y_605_ = v___y_653_;
v___y_606_ = v___y_654_;
goto v___jp_591_;
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec_ref(v___x_664_);
lean_dec(v_a_659_);
lean_dec_ref(v_matcherLevels_650_);
lean_dec_ref(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v_a_678_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_665_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_665_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
else
{
lean_object* v_a_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_693_; 
lean_dec_ref(v_matcherLevels_650_);
lean_dec_ref(v___y_649_);
lean_dec_ref(v___y_648_);
lean_dec_ref(v___y_647_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v_a_686_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_693_ == 0)
{
v___x_688_ = v___x_658_;
v_isShared_689_ = v_isSharedCheck_693_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_a_686_);
lean_dec(v___x_658_);
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
v___jp_694_:
{
lean_object* v___x_699_; 
lean_inc(v___y_698_);
lean_inc_ref(v___y_697_);
lean_inc(v___y_696_);
lean_inc_ref(v___y_695_);
lean_inc_ref(v_e_576_);
v___x_699_ = lean_infer_type(v_e_576_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
if (lean_obj_tag(v___x_699_) == 0)
{
lean_object* v_a_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_a_700_ = lean_ctor_get(v___x_699_, 0);
lean_inc_n(v_a_700_, 2);
lean_dec_ref(v___x_699_);
v___x_701_ = lean_array_get_size(v_discrs_577_);
v___x_702_ = l_Nat_foldRev___at___00Lean_Meta_MatcherApp_addArg_spec__0(v_discrs_577_, v_motiveArgs_584_, v___x_701_, v_a_700_);
v___x_703_ = l_Lean_mkArrow(v___x_702_, v_motiveBody_585_, v___y_697_, v___y_698_);
if (lean_obj_tag(v___x_703_) == 0)
{
lean_object* v_uElimPos_x3f_704_; 
v_uElimPos_x3f_704_ = lean_ctor_get(v_toMatcherInfo_578_, 3);
if (lean_obj_tag(v_uElimPos_x3f_704_) == 0)
{
lean_object* v_a_705_; 
v_a_705_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_a_705_);
lean_dec_ref(v___x_703_);
v___y_642_ = v_toMatcherInfo_578_;
v___y_643_ = v_matcherName_579_;
v___y_644_ = v_alts_580_;
v___y_645_ = v_remaining_581_;
v___y_646_ = v_a_705_;
v___y_647_ = v_a_700_;
v___y_648_ = v_discrs_577_;
v___y_649_ = v_params_582_;
v_matcherLevels_650_ = v_matcherLevels_583_;
v___y_651_ = v___y_695_;
v___y_652_ = v___y_696_;
v___y_653_ = v___y_697_;
v___y_654_ = v___y_698_;
goto v___jp_641_;
}
else
{
lean_object* v_a_706_; lean_object* v_val_707_; lean_object* v___x_708_; 
v_a_706_ = lean_ctor_get(v___x_703_, 0);
lean_inc_n(v_a_706_, 2);
lean_dec_ref(v___x_703_);
v_val_707_ = lean_ctor_get(v_uElimPos_x3f_704_, 0);
v___x_708_ = l_Lean_Meta_getLevel(v_a_706_, v___y_695_, v___y_696_, v___y_697_, v___y_698_);
if (lean_obj_tag(v___x_708_) == 0)
{
lean_object* v_a_709_; lean_object* v___x_710_; 
v_a_709_ = lean_ctor_get(v___x_708_, 0);
lean_inc(v_a_709_);
lean_dec_ref(v___x_708_);
v___x_710_ = lean_array_set(v_matcherLevels_583_, v_val_707_, v_a_709_);
v___y_642_ = v_toMatcherInfo_578_;
v___y_643_ = v_matcherName_579_;
v___y_644_ = v_alts_580_;
v___y_645_ = v_remaining_581_;
v___y_646_ = v_a_706_;
v___y_647_ = v_a_700_;
v___y_648_ = v_discrs_577_;
v___y_649_ = v_params_582_;
v_matcherLevels_650_ = v___x_710_;
v___y_651_ = v___y_695_;
v___y_652_ = v___y_696_;
v___y_653_ = v___y_697_;
v___y_654_ = v___y_698_;
goto v___jp_641_;
}
else
{
lean_object* v_a_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_718_; 
lean_dec(v_a_706_);
lean_dec(v_a_700_);
lean_dec_ref(v_matcherLevels_583_);
lean_dec_ref(v_params_582_);
lean_dec_ref(v_alts_580_);
lean_dec(v_matcherName_579_);
lean_dec_ref(v_toMatcherInfo_578_);
lean_dec_ref(v_discrs_577_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v_a_711_ = lean_ctor_get(v___x_708_, 0);
v_isSharedCheck_718_ = !lean_is_exclusive(v___x_708_);
if (v_isSharedCheck_718_ == 0)
{
v___x_713_ = v___x_708_;
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_a_711_);
lean_dec(v___x_708_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_718_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_716_; 
if (v_isShared_714_ == 0)
{
v___x_716_ = v___x_713_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_a_711_);
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
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_726_; 
lean_dec(v_a_700_);
lean_dec_ref(v_matcherLevels_583_);
lean_dec_ref(v_params_582_);
lean_dec_ref(v_alts_580_);
lean_dec(v_matcherName_579_);
lean_dec_ref(v_toMatcherInfo_578_);
lean_dec_ref(v_discrs_577_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v_a_719_ = lean_ctor_get(v___x_703_, 0);
v_isSharedCheck_726_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_726_ == 0)
{
v___x_721_ = v___x_703_;
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_703_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_726_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
lean_object* v___x_724_; 
if (v_isShared_722_ == 0)
{
v___x_724_ = v___x_721_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v_a_719_);
v___x_724_ = v_reuseFailAlloc_725_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
return v___x_724_;
}
}
}
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec_ref(v_motiveBody_585_);
lean_dec_ref(v_matcherLevels_583_);
lean_dec_ref(v_params_582_);
lean_dec_ref(v_alts_580_);
lean_dec(v_matcherName_579_);
lean_dec_ref(v_toMatcherInfo_578_);
lean_dec_ref(v_discrs_577_);
lean_dec_ref(v_e_576_);
lean_dec_ref(v_matcherApp_575_);
v_a_727_ = lean_ctor_get(v___x_699_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_699_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_699_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_699_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___lam__0___boxed(lean_object* v_matcherApp_754_, lean_object* v_e_755_, lean_object* v_discrs_756_, lean_object* v_toMatcherInfo_757_, lean_object* v_matcherName_758_, lean_object* v_alts_759_, lean_object* v_remaining_760_, lean_object* v_params_761_, lean_object* v_matcherLevels_762_, lean_object* v_motiveArgs_763_, lean_object* v_motiveBody_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l_Lean_Meta_MatcherApp_addArg___lam__0(v_matcherApp_754_, v_e_755_, v_discrs_756_, v_toMatcherInfo_757_, v_matcherName_758_, v_alts_759_, v_remaining_760_, v_params_761_, v_matcherLevels_762_, v_motiveArgs_763_, v_motiveBody_764_, v___y_765_, v___y_766_, v___y_767_, v___y_768_);
lean_dec(v___y_768_);
lean_dec_ref(v___y_767_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec_ref(v_motiveArgs_763_);
lean_dec_ref(v_remaining_760_);
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg(lean_object* v_matcherApp_771_, lean_object* v_e_772_, lean_object* v_a_773_, lean_object* v_a_774_, lean_object* v_a_775_, lean_object* v_a_776_){
_start:
{
lean_object* v_toMatcherInfo_778_; lean_object* v_matcherName_779_; lean_object* v_matcherLevels_780_; lean_object* v_params_781_; lean_object* v_motive_782_; lean_object* v_discrs_783_; lean_object* v_alts_784_; lean_object* v_remaining_785_; lean_object* v___f_786_; uint8_t v___x_787_; lean_object* v___x_788_; 
v_toMatcherInfo_778_ = lean_ctor_get(v_matcherApp_771_, 0);
lean_inc_ref(v_toMatcherInfo_778_);
v_matcherName_779_ = lean_ctor_get(v_matcherApp_771_, 1);
lean_inc(v_matcherName_779_);
v_matcherLevels_780_ = lean_ctor_get(v_matcherApp_771_, 2);
lean_inc_ref(v_matcherLevels_780_);
v_params_781_ = lean_ctor_get(v_matcherApp_771_, 3);
lean_inc_ref(v_params_781_);
v_motive_782_ = lean_ctor_get(v_matcherApp_771_, 4);
lean_inc_ref(v_motive_782_);
v_discrs_783_ = lean_ctor_get(v_matcherApp_771_, 5);
lean_inc_ref(v_discrs_783_);
v_alts_784_ = lean_ctor_get(v_matcherApp_771_, 6);
lean_inc_ref(v_alts_784_);
v_remaining_785_ = lean_ctor_get(v_matcherApp_771_, 7);
lean_inc_ref(v_remaining_785_);
v___f_786_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_addArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_786_, 0, v_matcherApp_771_);
lean_closure_set(v___f_786_, 1, v_e_772_);
lean_closure_set(v___f_786_, 2, v_discrs_783_);
lean_closure_set(v___f_786_, 3, v_toMatcherInfo_778_);
lean_closure_set(v___f_786_, 4, v_matcherName_779_);
lean_closure_set(v___f_786_, 5, v_alts_784_);
lean_closure_set(v___f_786_, 6, v_remaining_785_);
lean_closure_set(v___f_786_, 7, v_params_781_);
lean_closure_set(v___f_786_, 8, v_matcherLevels_780_);
v___x_787_ = 0;
v___x_788_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_782_, v___f_786_, v___x_787_, v_a_773_, v_a_774_, v_a_775_, v_a_776_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg___boxed(lean_object* v_matcherApp_789_, lean_object* v_e_790_, lean_object* v_a_791_, lean_object* v_a_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_){
_start:
{
lean_object* v_res_796_; 
v_res_796_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_789_, v_e_790_, v_a_791_, v_a_792_, v_a_793_, v_a_794_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
lean_dec(v_a_792_);
lean_dec_ref(v_a_791_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f(lean_object* v_matcherApp_797_, lean_object* v_e_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_Meta_MatcherApp_addArg(v_matcherApp_797_, v_e_798_, v_a_799_, v_a_800_, v_a_801_, v_a_802_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_813_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_813_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_813_ == 0)
{
v___x_807_ = v___x_804_;
v_isShared_808_ = v_isSharedCheck_813_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_804_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_813_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_809_; lean_object* v___x_811_; 
v___x_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_809_, 0, v_a_805_);
if (v_isShared_808_ == 0)
{
lean_ctor_set(v___x_807_, 0, v___x_809_);
v___x_811_ = v___x_807_;
goto v_reusejp_810_;
}
else
{
lean_object* v_reuseFailAlloc_812_; 
v_reuseFailAlloc_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_812_, 0, v___x_809_);
v___x_811_ = v_reuseFailAlloc_812_;
goto v_reusejp_810_;
}
v_reusejp_810_:
{
return v___x_811_;
}
}
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_829_; 
v_a_814_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_829_ == 0)
{
v___x_816_ = v___x_804_;
v_isShared_817_ = v_isSharedCheck_829_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_804_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_829_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
uint8_t v___y_819_; uint8_t v___x_827_; 
v___x_827_ = l_Lean_Exception_isInterrupt(v_a_814_);
if (v___x_827_ == 0)
{
uint8_t v___x_828_; 
lean_inc(v_a_814_);
v___x_828_ = l_Lean_Exception_isRuntime(v_a_814_);
v___y_819_ = v___x_828_;
goto v___jp_818_;
}
else
{
v___y_819_ = v___x_827_;
goto v___jp_818_;
}
v___jp_818_:
{
if (v___y_819_ == 0)
{
lean_object* v___x_820_; lean_object* v___x_822_; 
lean_dec(v_a_814_);
v___x_820_ = lean_box(0);
if (v_isShared_817_ == 0)
{
lean_ctor_set_tag(v___x_816_, 0);
lean_ctor_set(v___x_816_, 0, v___x_820_);
v___x_822_ = v___x_816_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
else
{
lean_object* v___x_825_; 
if (v_isShared_817_ == 0)
{
v___x_825_ = v___x_816_;
goto v_reusejp_824_;
}
else
{
lean_object* v_reuseFailAlloc_826_; 
v_reuseFailAlloc_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_826_, 0, v_a_814_);
v___x_825_ = v_reuseFailAlloc_826_;
goto v_reusejp_824_;
}
v_reusejp_824_:
{
return v___x_825_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_addArg_x3f___boxed(lean_object* v_matcherApp_830_, lean_object* v_e_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_){
_start:
{
lean_object* v_res_837_; 
v_res_837_ = l_Lean_Meta_MatcherApp_addArg_x3f(v_matcherApp_830_, v_e_831_, v_a_832_, v_a_833_, v_a_834_, v_a_835_);
lean_dec(v_a_835_);
lean_dec_ref(v_a_834_);
lean_dec(v_a_833_);
lean_dec_ref(v_a_832_);
return v_res_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(lean_object* v_type_838_, lean_object* v_k_839_, uint8_t v_cleanupAnnotations_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v___f_846_; uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___f_846_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_846_, 0, v_k_839_);
v___x_847_ = 0;
v___x_848_ = lean_box(0);
v___x_849_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_847_, v___x_848_, v_type_838_, v___f_846_, v_cleanupAnnotations_840_, v___x_847_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
if (lean_obj_tag(v___x_849_) == 0)
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
v_a_850_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_849_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_849_);
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
v_reuseFailAlloc_856_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_865_; 
v_a_858_ = lean_ctor_get(v___x_849_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_849_);
if (v_isSharedCheck_865_ == 0)
{
v___x_860_ = v___x_849_;
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_849_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_865_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_863_; 
if (v_isShared_861_ == 0)
{
v___x_863_ = v___x_860_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_858_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg___boxed(lean_object* v_type_866_, lean_object* v_k_867_, lean_object* v_cleanupAnnotations_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_874_; lean_object* v_res_875_; 
v_cleanupAnnotations_boxed_874_ = lean_unbox(v_cleanupAnnotations_868_);
v_res_875_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_type_866_, v_k_867_, v_cleanupAnnotations_boxed_874_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
return v_res_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(lean_object* v_00_u03b1_876_, lean_object* v_type_877_, lean_object* v_k_878_, uint8_t v_cleanupAnnotations_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v___x_885_; 
v___x_885_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_type_877_, v_k_878_, v_cleanupAnnotations_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___boxed(lean_object* v_00_u03b1_886_, lean_object* v_type_887_, lean_object* v_k_888_, lean_object* v_cleanupAnnotations_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_895_; lean_object* v_res_896_; 
v_cleanupAnnotations_boxed_895_ = lean_unbox(v_cleanupAnnotations_889_);
v_res_896_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3(v_00_u03b1_886_, v_type_887_, v_k_888_, v_cleanupAnnotations_boxed_895_, v___y_890_, v___y_891_, v___y_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(size_t v_sz_897_, size_t v_i_898_, lean_object* v_bs_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
uint8_t v___x_905_; 
v___x_905_ = lean_usize_dec_lt(v_i_898_, v_sz_897_);
if (v___x_905_ == 0)
{
lean_object* v___x_906_; 
v___x_906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_906_, 0, v_bs_899_);
return v___x_906_;
}
else
{
lean_object* v_v_907_; lean_object* v___x_908_; 
v_v_907_ = lean_array_uget_borrowed(v_bs_899_, v_i_898_);
lean_inc(v___y_903_);
lean_inc_ref(v___y_902_);
lean_inc(v___y_901_);
lean_inc_ref(v___y_900_);
lean_inc(v_v_907_);
v___x_908_ = lean_infer_type(v_v_907_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v___x_910_; lean_object* v_bs_x27_911_; size_t v___x_912_; size_t v___x_913_; lean_object* v___x_914_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
lean_inc(v_a_909_);
lean_dec_ref(v___x_908_);
v___x_910_ = lean_unsigned_to_nat(0u);
v_bs_x27_911_ = lean_array_uset(v_bs_899_, v_i_898_, v___x_910_);
v___x_912_ = ((size_t)1ULL);
v___x_913_ = lean_usize_add(v_i_898_, v___x_912_);
v___x_914_ = lean_array_uset(v_bs_x27_911_, v_i_898_, v_a_909_);
v_i_898_ = v___x_913_;
v_bs_899_ = v___x_914_;
goto _start;
}
else
{
lean_object* v_a_916_; lean_object* v___x_918_; uint8_t v_isShared_919_; uint8_t v_isSharedCheck_923_; 
lean_dec_ref(v_bs_899_);
v_a_916_ = lean_ctor_get(v___x_908_, 0);
v_isSharedCheck_923_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_923_ == 0)
{
v___x_918_ = v___x_908_;
v_isShared_919_ = v_isSharedCheck_923_;
goto v_resetjp_917_;
}
else
{
lean_inc(v_a_916_);
lean_dec(v___x_908_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1___boxed(lean_object* v_sz_924_, lean_object* v_i_925_, lean_object* v_bs_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_){
_start:
{
size_t v_sz_boxed_932_; size_t v_i_boxed_933_; lean_object* v_res_934_; 
v_sz_boxed_932_ = lean_unbox_usize(v_sz_924_);
lean_dec(v_sz_924_);
v_i_boxed_933_ = lean_unbox_usize(v_i_925_);
lean_dec(v_i_925_);
v_res_934_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(v_sz_boxed_932_, v_i_boxed_933_, v_bs_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
return v_res_934_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0(void){
_start:
{
lean_object* v___x_935_; 
v___x_935_ = lean_mk_string_unchecked("failed to transfer argument through matcher application, alt type must be telescope with #", 90, 90);
return v___x_935_;
}
}
static lean_object* _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1(void){
_start:
{
lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_936_ = lean_obj_once(&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0, &l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0_once, _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__0);
v___x_937_ = l_Lean_stringToMessageData(v___x_936_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(uint8_t v___x_938_, uint8_t v___x_939_, uint8_t v___x_940_, lean_object* v_a_941_, lean_object* v_fvs_942_, lean_object* v_body_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v___x_957_; uint8_t v___x_958_; 
v___x_957_ = lean_array_get_size(v_fvs_942_);
v___x_958_ = lean_nat_dec_eq(v___x_957_, v_a_941_);
if (v___x_958_ == 0)
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v___x_959_ = lean_obj_once(&l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1, &l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1_once, _init_l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___closed__1);
v___x_960_ = l_Nat_reprFast(v_a_941_);
v___x_961_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
v___x_962_ = l_Lean_MessageData_ofFormat(v___x_961_);
v___x_963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_963_, 0, v___x_959_);
lean_ctor_set(v___x_963_, 1, v___x_962_);
v___x_964_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_965_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
v_a_967_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_966_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_966_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
else
{
lean_dec(v_a_941_);
goto v___jp_949_;
}
v___jp_949_:
{
lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; 
v___x_950_ = lean_unsigned_to_nat(2u);
v___x_951_ = l_Lean_Expr_getAppNumArgs(v_body_943_);
v___x_952_ = lean_nat_sub(v___x_951_, v___x_950_);
lean_dec(v___x_951_);
v___x_953_ = lean_unsigned_to_nat(1u);
v___x_954_ = lean_nat_sub(v___x_952_, v___x_953_);
lean_dec(v___x_952_);
v___x_955_ = l_Lean_Expr_getRevArg_x21(v_body_943_, v___x_954_);
v___x_956_ = l_Lean_Meta_mkLambdaFVars(v_fvs_942_, v___x_955_, v___x_938_, v___x_939_, v___x_938_, v___x_939_, v___x_940_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
return v___x_956_;
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed(lean_object* v___x_975_, lean_object* v___x_976_, lean_object* v___x_977_, lean_object* v_a_978_, lean_object* v_fvs_979_, lean_object* v_body_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
uint8_t v___x_4262__boxed_986_; uint8_t v___x_4263__boxed_987_; uint8_t v___x_4264__boxed_988_; lean_object* v_res_989_; 
v___x_4262__boxed_986_ = lean_unbox(v___x_975_);
v___x_4263__boxed_987_ = lean_unbox(v___x_976_);
v___x_4264__boxed_988_ = lean_unbox(v___x_977_);
v_res_989_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0(v___x_4262__boxed_986_, v___x_4263__boxed_987_, v___x_4264__boxed_988_, v_a_978_, v_fvs_979_, v_body_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
lean_dec_ref(v_body_980_);
lean_dec_ref(v_fvs_979_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(lean_object* v_as_990_, lean_object* v_bs_991_, lean_object* v_i_992_, lean_object* v_cs_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_){
_start:
{
lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_999_ = lean_array_get_size(v_as_990_);
v___x_1000_ = lean_nat_dec_lt(v_i_992_, v___x_999_);
if (v___x_1000_ == 0)
{
lean_object* v___x_1001_; 
lean_dec(v_i_992_);
v___x_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1001_, 0, v_cs_993_);
return v___x_1001_;
}
else
{
lean_object* v___x_1002_; uint8_t v___x_1003_; 
v___x_1002_ = lean_array_get_size(v_bs_991_);
v___x_1003_ = lean_nat_dec_lt(v_i_992_, v___x_1002_);
if (v___x_1003_ == 0)
{
lean_object* v___x_1004_; 
lean_dec(v_i_992_);
v___x_1004_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1004_, 0, v_cs_993_);
return v___x_1004_;
}
else
{
uint8_t v___x_1005_; uint8_t v___x_1006_; lean_object* v_a_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___f_1011_; lean_object* v_b_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1005_ = 0;
v___x_1006_ = 1;
v_a_1007_ = lean_array_fget_borrowed(v_as_990_, v_i_992_);
v___x_1008_ = lean_box(v___x_1005_);
v___x_1009_ = lean_box(v___x_1003_);
v___x_1010_ = lean_box(v___x_1006_);
lean_inc_n(v_a_1007_, 2);
v___f_1011_ = lean_alloc_closure((void*)(l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___lam__0___boxed), 11, 4);
lean_closure_set(v___f_1011_, 0, v___x_1008_);
lean_closure_set(v___f_1011_, 1, v___x_1009_);
lean_closure_set(v___f_1011_, 2, v___x_1010_);
lean_closure_set(v___f_1011_, 3, v_a_1007_);
v_b_1012_ = lean_array_fget_borrowed(v_bs_991_, v_i_992_);
v___x_1013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1013_, 0, v_a_1007_);
lean_inc(v_b_1012_);
v___x_1014_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_b_1012_, v___x_1013_, v___f_1011_, v___x_1005_, v___x_1005_, v___y_994_, v___y_995_, v___y_996_, v___y_997_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc(v_a_1015_);
lean_dec_ref(v___x_1014_);
v___x_1016_ = lean_unsigned_to_nat(1u);
v___x_1017_ = lean_nat_add(v_i_992_, v___x_1016_);
lean_dec(v_i_992_);
v___x_1018_ = lean_array_push(v_cs_993_, v_a_1015_);
v_i_992_ = v___x_1017_;
v_cs_993_ = v___x_1018_;
goto _start;
}
else
{
lean_object* v_a_1020_; lean_object* v___x_1022_; uint8_t v_isShared_1023_; uint8_t v_isSharedCheck_1027_; 
lean_dec_ref(v_cs_993_);
lean_dec(v_i_992_);
v_a_1020_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1027_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1027_ == 0)
{
v___x_1022_ = v___x_1014_;
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
else
{
lean_inc(v_a_1020_);
lean_dec(v___x_1014_);
v___x_1022_ = lean_box(0);
v_isShared_1023_ = v_isSharedCheck_1027_;
goto v_resetjp_1021_;
}
v_resetjp_1021_:
{
lean_object* v___x_1025_; 
if (v_isShared_1023_ == 0)
{
v___x_1025_ = v___x_1022_;
goto v_reusejp_1024_;
}
else
{
lean_object* v_reuseFailAlloc_1026_; 
v_reuseFailAlloc_1026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1026_, 0, v_a_1020_);
v___x_1025_ = v_reuseFailAlloc_1026_;
goto v_reusejp_1024_;
}
v_reusejp_1024_:
{
return v___x_1025_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2___boxed(lean_object* v_as_1028_, lean_object* v_bs_1029_, lean_object* v_i_1030_, lean_object* v_cs_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v_as_1028_, v_bs_1029_, v_i_1030_, v_cs_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
lean_dec(v___y_1035_);
lean_dec_ref(v___y_1034_);
lean_dec(v___y_1033_);
lean_dec_ref(v___y_1032_);
lean_dec_ref(v_bs_1029_);
lean_dec_ref(v_as_1028_);
return v_res_1037_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = lean_mk_empty_array_with_capacity(v___x_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0(lean_object* v_matcherApp_1040_, lean_object* v_altAuxs_1041_, lean_object* v_x_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_){
_start:
{
size_t v_sz_1048_; size_t v___x_1049_; lean_object* v___x_1050_; 
v_sz_1048_ = lean_array_size(v_altAuxs_1041_);
v___x_1049_ = ((size_t)0ULL);
v___x_1050_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_refineThrough_spec__1(v_sz_1048_, v___x_1049_, v_altAuxs_1041_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
if (lean_obj_tag(v___x_1050_) == 0)
{
lean_object* v_a_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; 
v_a_1051_ = lean_ctor_get(v___x_1050_, 0);
lean_inc(v_a_1051_);
lean_dec_ref(v___x_1050_);
v___x_1052_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_1040_);
v___x_1053_ = lean_unsigned_to_nat(0u);
v___x_1054_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0, &l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0);
v___x_1055_ = l_Array_zipWithMAux___at___00Lean_Meta_MatcherApp_refineThrough_spec__2(v___x_1052_, v_a_1051_, v___x_1053_, v___x_1054_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_);
lean_dec(v_a_1051_);
lean_dec_ref(v___x_1052_);
return v___x_1055_;
}
else
{
lean_dec_ref(v_matcherApp_1040_);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed(lean_object* v_matcherApp_1056_, lean_object* v_altAuxs_1057_, lean_object* v_x_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Meta_MatcherApp_refineThrough___lam__0(v_matcherApp_1056_, v_altAuxs_1057_, v_x_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec_ref(v_x_1058_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(lean_object* v___x_1065_, lean_object* v_motiveArgs_1066_, lean_object* v_i_1067_, lean_object* v_a_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v_zero_1074_; uint8_t v_isZero_1075_; 
v_zero_1074_ = lean_unsigned_to_nat(0u);
v_isZero_1075_ = lean_nat_dec_eq(v_i_1067_, v_zero_1074_);
if (v_isZero_1075_ == 1)
{
lean_object* v___x_1076_; 
lean_dec(v_i_1067_);
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v_a_1068_);
return v___x_1076_;
}
else
{
lean_object* v_one_1077_; lean_object* v_n_1078_; lean_object* v_discr_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; 
v_one_1077_ = lean_unsigned_to_nat(1u);
v_n_1078_ = lean_nat_sub(v_i_1067_, v_one_1077_);
lean_dec(v_i_1067_);
v_discr_1079_ = lean_array_fget_borrowed(v___x_1065_, v_n_1078_);
v___x_1080_ = lean_box(0);
lean_inc(v_discr_1079_);
v___x_1081_ = l_Lean_Meta_kabstract(v_a_1068_, v_discr_1079_, v___x_1080_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1083_; lean_object* v_motiveArg_1084_; lean_object* v___x_1085_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1082_);
lean_dec_ref(v___x_1081_);
v___x_1083_ = l_Lean_instInhabitedExpr;
v_motiveArg_1084_ = lean_array_get_borrowed(v___x_1083_, v_motiveArgs_1066_, v_n_1078_);
v___x_1085_ = lean_expr_instantiate1(v_a_1082_, v_motiveArg_1084_);
lean_dec(v_a_1082_);
v_i_1067_ = v_n_1078_;
v_a_1068_ = v___x_1085_;
goto _start;
}
else
{
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1087_; 
v_a_1087_ = lean_ctor_get(v___x_1081_, 0);
lean_inc(v_a_1087_);
lean_dec_ref(v___x_1081_);
v_i_1067_ = v_n_1078_;
v_a_1068_ = v_a_1087_;
goto _start;
}
else
{
lean_dec(v_n_1078_);
return v___x_1081_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg___boxed(lean_object* v___x_1089_, lean_object* v_motiveArgs_1090_, lean_object* v_i_1091_, lean_object* v_a_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v___x_1089_, v_motiveArgs_1090_, v_i_1091_, v_a_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
lean_dec_ref(v_motiveArgs_1090_);
lean_dec_ref(v___x_1089_);
return v_res_1098_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_mk_string_unchecked("failed to transfer argument through matcher application, type error when constructing the new motive", 100, 100);
return v___x_1099_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1100_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__0);
v___x_1101_ = l_Lean_stringToMessageData(v___x_1100_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = lean_mk_string_unchecked("failed to transfer argument through matcher application, motive must be lambda expression with #", 96, 96);
return v___x_1102_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__2);
v___x_1104_ = l_Lean_stringToMessageData(v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1(lean_object* v___f_1105_, lean_object* v_discrs_1106_, lean_object* v_e_1107_, lean_object* v_toMatcherInfo_1108_, lean_object* v_params_1109_, lean_object* v_matcherName_1110_, lean_object* v_matcherLevels_1111_, lean_object* v_motiveArgs_1112_, lean_object* v___motiveBody_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v___y_1120_; uint8_t v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1123_; lean_object* v___y_1124_; lean_object* v___y_1125_; lean_object* v___y_1126_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v_matcherLevels_1143_; lean_object* v___y_1144_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___x_1218_; lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1218_ = lean_array_get_size(v_motiveArgs_1112_);
v___x_1219_ = lean_array_get_size(v_discrs_1106_);
v___x_1220_ = lean_nat_dec_eq(v___x_1218_, v___x_1219_);
if (v___x_1220_ == 0)
{
lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_a_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1236_; 
lean_dec_ref(v_matcherLevels_1111_);
lean_dec(v_matcherName_1110_);
lean_dec_ref(v_e_1107_);
lean_dec_ref(v___f_1105_);
v___x_1221_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__3);
v___x_1222_ = l_Nat_reprFast(v___x_1219_);
v___x_1223_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1223_, 0, v___x_1222_);
v___x_1224_ = l_Lean_MessageData_ofFormat(v___x_1223_);
v___x_1225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1221_);
lean_ctor_set(v___x_1225_, 1, v___x_1224_);
v___x_1226_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_1227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1225_);
lean_ctor_set(v___x_1227_, 1, v___x_1226_);
v___x_1228_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1227_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
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
else
{
v___y_1188_ = v___y_1114_;
v___y_1189_ = v___y_1115_;
v___y_1190_ = v___y_1116_;
v___y_1191_ = v___y_1117_;
goto v___jp_1187_;
}
v___jp_1119_:
{
lean_object* v___x_1127_; 
lean_inc(v___y_1126_);
lean_inc_ref(v___y_1125_);
lean_inc(v___y_1124_);
lean_inc_ref(v___y_1123_);
v___x_1127_ = lean_infer_type(v___y_1120_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; lean_object* v___x_1129_; 
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref(v___x_1127_);
v___x_1129_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_MatcherApp_refineThrough_spec__3___redArg(v_a_1128_, v___y_1122_, v___y_1121_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
return v___x_1129_;
}
else
{
lean_object* v_a_1130_; lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
lean_dec_ref(v___y_1122_);
v_a_1130_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1137_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1137_ == 0)
{
v___x_1132_ = v___x_1127_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_inc(v_a_1130_);
lean_dec(v___x_1127_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_a_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
v___jp_1138_:
{
uint8_t v___x_1148_; uint8_t v___x_1149_; uint8_t v___x_1150_; lean_object* v___x_1151_; 
v___x_1148_ = 0;
v___x_1149_ = 1;
v___x_1150_ = 1;
v___x_1151_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_1112_, v___y_1139_, v___x_1148_, v___x_1149_, v___x_1148_, v___x_1149_, v___x_1150_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref(v___x_1151_);
v___x_1153_ = lean_array_to_list(v_matcherLevels_1143_);
v___x_1154_ = l_Lean_mkConst(v___y_1141_, v___x_1153_);
v___x_1155_ = l_Lean_mkAppN(v___x_1154_, v___y_1140_);
v___x_1156_ = l_Lean_Expr_app___override(v___x_1155_, v_a_1152_);
v___x_1157_ = l_Lean_mkAppN(v___x_1156_, v___y_1142_);
lean_inc_ref(v___x_1157_);
v___x_1158_ = l_Lean_Meta_isTypeCorrect(v___x_1157_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
if (lean_obj_tag(v___x_1158_) == 0)
{
lean_object* v_a_1159_; uint8_t v___x_1160_; 
v_a_1159_ = lean_ctor_get(v___x_1158_, 0);
lean_inc(v_a_1159_);
lean_dec_ref(v___x_1158_);
v___x_1160_ = lean_unbox(v_a_1159_);
lean_dec(v_a_1159_);
if (v___x_1160_ == 0)
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1170_; 
lean_dec_ref(v___x_1157_);
lean_dec_ref(v___f_1105_);
v___x_1161_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1, &l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__1___closed__1);
v___x_1162_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_1161_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1170_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1170_ == 0)
{
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1170_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1162_);
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
else
{
v___y_1120_ = v___x_1157_;
v___y_1121_ = v___x_1148_;
v___y_1122_ = v___f_1105_;
v___y_1123_ = v___y_1144_;
v___y_1124_ = v___y_1145_;
v___y_1125_ = v___y_1146_;
v___y_1126_ = v___y_1147_;
goto v___jp_1119_;
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
lean_dec_ref(v___x_1157_);
lean_dec_ref(v___f_1105_);
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
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v_matcherLevels_1143_);
lean_dec(v___y_1141_);
lean_dec_ref(v___f_1105_);
v_a_1179_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1151_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1151_);
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
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
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
}
v___jp_1187_:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1192_ = lean_array_get_size(v_discrs_1106_);
v___x_1193_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v_discrs_1106_, v_motiveArgs_1112_, v___x_1192_, v_e_1107_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
if (lean_obj_tag(v___x_1193_) == 0)
{
lean_object* v_a_1194_; lean_object* v___x_1195_; 
v_a_1194_ = lean_ctor_get(v___x_1193_, 0);
lean_inc_n(v_a_1194_, 2);
lean_dec_ref(v___x_1193_);
v___x_1195_ = l_Lean_Meta_mkEq(v_a_1194_, v_a_1194_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_);
if (lean_obj_tag(v___x_1195_) == 0)
{
lean_object* v_uElimPos_x3f_1196_; 
v_uElimPos_x3f_1196_ = lean_ctor_get(v_toMatcherInfo_1108_, 3);
if (lean_obj_tag(v_uElimPos_x3f_1196_) == 0)
{
lean_object* v_a_1197_; 
v_a_1197_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1197_);
lean_dec_ref(v___x_1195_);
v___y_1139_ = v_a_1197_;
v___y_1140_ = v_params_1109_;
v___y_1141_ = v_matcherName_1110_;
v___y_1142_ = v_discrs_1106_;
v_matcherLevels_1143_ = v_matcherLevels_1111_;
v___y_1144_ = v___y_1188_;
v___y_1145_ = v___y_1189_;
v___y_1146_ = v___y_1190_;
v___y_1147_ = v___y_1191_;
goto v___jp_1138_;
}
else
{
lean_object* v_a_1198_; lean_object* v_val_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; 
v_a_1198_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_a_1198_);
lean_dec_ref(v___x_1195_);
v_val_1199_ = lean_ctor_get(v_uElimPos_x3f_1196_, 0);
v___x_1200_ = lean_box(0);
v___x_1201_ = lean_array_set(v_matcherLevels_1111_, v_val_1199_, v___x_1200_);
v___y_1139_ = v_a_1198_;
v___y_1140_ = v_params_1109_;
v___y_1141_ = v_matcherName_1110_;
v___y_1142_ = v_discrs_1106_;
v_matcherLevels_1143_ = v___x_1201_;
v___y_1144_ = v___y_1188_;
v___y_1145_ = v___y_1189_;
v___y_1146_ = v___y_1190_;
v___y_1147_ = v___y_1191_;
goto v___jp_1138_;
}
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v_matcherLevels_1111_);
lean_dec(v_matcherName_1110_);
lean_dec_ref(v___f_1105_);
v_a_1202_ = lean_ctor_get(v___x_1195_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1195_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1195_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1195_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec_ref(v_matcherLevels_1111_);
lean_dec(v_matcherName_1110_);
lean_dec_ref(v___f_1105_);
v_a_1210_ = lean_ctor_get(v___x_1193_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1193_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1193_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1193_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1215_; 
if (v_isShared_1213_ == 0)
{
v___x_1215_ = v___x_1212_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v_a_1210_);
v___x_1215_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
return v___x_1215_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed(lean_object* v___f_1237_, lean_object* v_discrs_1238_, lean_object* v_e_1239_, lean_object* v_toMatcherInfo_1240_, lean_object* v_params_1241_, lean_object* v_matcherName_1242_, lean_object* v_matcherLevels_1243_, lean_object* v_motiveArgs_1244_, lean_object* v___motiveBody_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
lean_object* v_res_1251_; 
v_res_1251_ = l_Lean_Meta_MatcherApp_refineThrough___lam__1(v___f_1237_, v_discrs_1238_, v_e_1239_, v_toMatcherInfo_1240_, v_params_1241_, v_matcherName_1242_, v_matcherLevels_1243_, v_motiveArgs_1244_, v___motiveBody_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec_ref(v___motiveBody_1245_);
lean_dec_ref(v_motiveArgs_1244_);
lean_dec_ref(v_params_1241_);
lean_dec_ref(v_toMatcherInfo_1240_);
lean_dec_ref(v_discrs_1238_);
return v_res_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough(lean_object* v_matcherApp_1252_, lean_object* v_e_1253_, lean_object* v_a_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
lean_object* v_toMatcherInfo_1259_; lean_object* v_matcherName_1260_; lean_object* v_matcherLevels_1261_; lean_object* v_params_1262_; lean_object* v_motive_1263_; lean_object* v_discrs_1264_; lean_object* v___f_1265_; lean_object* v___f_1266_; uint8_t v___x_1267_; lean_object* v___x_1268_; 
v_toMatcherInfo_1259_ = lean_ctor_get(v_matcherApp_1252_, 0);
lean_inc_ref(v_toMatcherInfo_1259_);
v_matcherName_1260_ = lean_ctor_get(v_matcherApp_1252_, 1);
lean_inc(v_matcherName_1260_);
v_matcherLevels_1261_ = lean_ctor_get(v_matcherApp_1252_, 2);
lean_inc_ref(v_matcherLevels_1261_);
v_params_1262_ = lean_ctor_get(v_matcherApp_1252_, 3);
lean_inc_ref(v_params_1262_);
v_motive_1263_ = lean_ctor_get(v_matcherApp_1252_, 4);
lean_inc_ref(v_motive_1263_);
v_discrs_1264_ = lean_ctor_get(v_matcherApp_1252_, 5);
lean_inc_ref(v_discrs_1264_);
v___f_1265_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1265_, 0, v_matcherApp_1252_);
v___f_1266_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_refineThrough___lam__1___boxed), 14, 7);
lean_closure_set(v___f_1266_, 0, v___f_1265_);
lean_closure_set(v___f_1266_, 1, v_discrs_1264_);
lean_closure_set(v___f_1266_, 2, v_e_1253_);
lean_closure_set(v___f_1266_, 3, v_toMatcherInfo_1259_);
lean_closure_set(v___f_1266_, 4, v_params_1262_);
lean_closure_set(v___f_1266_, 5, v_matcherName_1260_);
lean_closure_set(v___f_1266_, 6, v_matcherLevels_1261_);
v___x_1267_ = 0;
v___x_1268_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_1263_, v___f_1266_, v___x_1267_, v_a_1254_, v_a_1255_, v_a_1256_, v_a_1257_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough___boxed(lean_object* v_matcherApp_1269_, lean_object* v_e_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_, lean_object* v_a_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1269_, v_e_1270_, v_a_1271_, v_a_1272_, v_a_1273_, v_a_1274_);
lean_dec(v_a_1274_);
lean_dec_ref(v_a_1273_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(lean_object* v___x_1277_, lean_object* v_motiveArgs_1278_, lean_object* v_n_1279_, lean_object* v_i_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___redArg(v___x_1277_, v_motiveArgs_1278_, v_i_1280_, v_a_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0___boxed(lean_object* v___x_1289_, lean_object* v_motiveArgs_1290_, lean_object* v_n_1291_, lean_object* v_i_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
lean_object* v_res_1300_; 
v_res_1300_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00Lean_Meta_MatcherApp_refineThrough_spec__0(v___x_1289_, v_motiveArgs_1290_, v_n_1291_, v_i_1292_, v_a_1293_, v_a_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
lean_dec(v_n_1291_);
lean_dec_ref(v_motiveArgs_1290_);
lean_dec_ref(v___x_1289_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f(lean_object* v_matcherApp_1301_, lean_object* v_e_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_){
_start:
{
lean_object* v___x_1308_; 
v___x_1308_ = l_Lean_Meta_MatcherApp_refineThrough(v_matcherApp_1301_, v_e_1302_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1317_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1311_ = v___x_1308_;
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_a_1309_);
lean_dec(v___x_1308_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1317_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1313_; lean_object* v___x_1315_; 
v___x_1313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1313_, 0, v_a_1309_);
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 0, v___x_1313_);
v___x_1315_ = v___x_1311_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v___x_1313_);
v___x_1315_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1314_;
}
v_reusejp_1314_:
{
return v___x_1315_;
}
}
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1333_; 
v_a_1318_ = lean_ctor_get(v___x_1308_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1308_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1320_ = v___x_1308_;
v_isShared_1321_ = v_isSharedCheck_1333_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1308_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1333_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
uint8_t v___y_1323_; uint8_t v___x_1331_; 
v___x_1331_ = l_Lean_Exception_isInterrupt(v_a_1318_);
if (v___x_1331_ == 0)
{
uint8_t v___x_1332_; 
lean_inc(v_a_1318_);
v___x_1332_ = l_Lean_Exception_isRuntime(v_a_1318_);
v___y_1323_ = v___x_1332_;
goto v___jp_1322_;
}
else
{
v___y_1323_ = v___x_1331_;
goto v___jp_1322_;
}
v___jp_1322_:
{
if (v___y_1323_ == 0)
{
lean_object* v___x_1324_; lean_object* v___x_1326_; 
lean_dec(v_a_1318_);
v___x_1324_ = lean_box(0);
if (v_isShared_1321_ == 0)
{
lean_ctor_set_tag(v___x_1320_, 0);
lean_ctor_set(v___x_1320_, 0, v___x_1324_);
v___x_1326_ = v___x_1320_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
else
{
lean_object* v___x_1329_; 
if (v_isShared_1321_ == 0)
{
v___x_1329_ = v___x_1320_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_a_1318_);
v___x_1329_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
return v___x_1329_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_refineThrough_x3f___boxed(lean_object* v_matcherApp_1334_, lean_object* v_e_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_, lean_object* v_a_1338_, lean_object* v_a_1339_, lean_object* v_a_1340_){
_start:
{
lean_object* v_res_1341_; 
v_res_1341_ = l_Lean_Meta_MatcherApp_refineThrough_x3f(v_matcherApp_1334_, v_e_1335_, v_a_1336_, v_a_1337_, v_a_1338_, v_a_1339_);
lean_dec(v_a_1339_);
lean_dec_ref(v_a_1338_);
lean_dec(v_a_1337_);
lean_dec_ref(v_a_1336_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(lean_object* v_lctx_1342_, lean_object* v_x_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_){
_start:
{
lean_object* v_keyedConfig_1349_; uint8_t v_trackZetaDelta_1350_; lean_object* v_zetaDeltaSet_1351_; lean_object* v_localInstances_1352_; lean_object* v_defEqCtx_x3f_1353_; lean_object* v_synthPendingDepth_1354_; lean_object* v_canUnfold_x3f_1355_; uint8_t v_univApprox_1356_; uint8_t v_inTypeClassResolution_1357_; uint8_t v_cacheInferType_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; 
v_keyedConfig_1349_ = lean_ctor_get(v___y_1344_, 0);
v_trackZetaDelta_1350_ = lean_ctor_get_uint8(v___y_1344_, sizeof(void*)*7);
v_zetaDeltaSet_1351_ = lean_ctor_get(v___y_1344_, 1);
v_localInstances_1352_ = lean_ctor_get(v___y_1344_, 3);
v_defEqCtx_x3f_1353_ = lean_ctor_get(v___y_1344_, 4);
v_synthPendingDepth_1354_ = lean_ctor_get(v___y_1344_, 5);
v_canUnfold_x3f_1355_ = lean_ctor_get(v___y_1344_, 6);
v_univApprox_1356_ = lean_ctor_get_uint8(v___y_1344_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1357_ = lean_ctor_get_uint8(v___y_1344_, sizeof(void*)*7 + 2);
v_cacheInferType_1358_ = lean_ctor_get_uint8(v___y_1344_, sizeof(void*)*7 + 3);
lean_inc(v_canUnfold_x3f_1355_);
lean_inc(v_synthPendingDepth_1354_);
lean_inc(v_defEqCtx_x3f_1353_);
lean_inc_ref(v_localInstances_1352_);
lean_inc(v_zetaDeltaSet_1351_);
lean_inc_ref(v_keyedConfig_1349_);
v___x_1359_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1359_, 0, v_keyedConfig_1349_);
lean_ctor_set(v___x_1359_, 1, v_zetaDeltaSet_1351_);
lean_ctor_set(v___x_1359_, 2, v_lctx_1342_);
lean_ctor_set(v___x_1359_, 3, v_localInstances_1352_);
lean_ctor_set(v___x_1359_, 4, v_defEqCtx_x3f_1353_);
lean_ctor_set(v___x_1359_, 5, v_synthPendingDepth_1354_);
lean_ctor_set(v___x_1359_, 6, v_canUnfold_x3f_1355_);
lean_ctor_set_uint8(v___x_1359_, sizeof(void*)*7, v_trackZetaDelta_1350_);
lean_ctor_set_uint8(v___x_1359_, sizeof(void*)*7 + 1, v_univApprox_1356_);
lean_ctor_set_uint8(v___x_1359_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1357_);
lean_ctor_set_uint8(v___x_1359_, sizeof(void*)*7 + 3, v_cacheInferType_1358_);
lean_inc(v___y_1347_);
lean_inc_ref(v___y_1346_);
lean_inc(v___y_1345_);
v___x_1360_ = lean_apply_5(v_x_1343_, v___x_1359_, v___y_1345_, v___y_1346_, v___y_1347_, lean_box(0));
return v___x_1360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg___boxed(lean_object* v_lctx_1361_, lean_object* v_x_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_){
_start:
{
lean_object* v_res_1368_; 
v_res_1368_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1361_, v_x_1362_, v___y_1363_, v___y_1364_, v___y_1365_, v___y_1366_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
lean_dec(v___y_1364_);
lean_dec_ref(v___y_1363_);
return v_res_1368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(lean_object* v_00_u03b1_1369_, lean_object* v_lctx_1370_, lean_object* v_x_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1370_, v_x_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___boxed(lean_object* v_00_u03b1_1378_, lean_object* v_lctx_1379_, lean_object* v_x_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_){
_start:
{
lean_object* v_res_1386_; 
v_res_1386_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0(v_00_u03b1_1378_, v_lctx_1379_, v_x_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(lean_object* v_as_1387_, size_t v_i_1388_, size_t v_stop_1389_, lean_object* v_b_1390_){
_start:
{
uint8_t v___x_1391_; 
v___x_1391_ = lean_usize_dec_eq(v_i_1388_, v_stop_1389_);
if (v___x_1391_ == 0)
{
lean_object* v___x_1392_; lean_object* v_fst_1393_; lean_object* v_snd_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; size_t v___x_1397_; size_t v___x_1398_; 
v___x_1392_ = lean_array_uget_borrowed(v_as_1387_, v_i_1388_);
v_fst_1393_ = lean_ctor_get(v___x_1392_, 0);
v_snd_1394_ = lean_ctor_get(v___x_1392_, 1);
v___x_1395_ = l_Lean_Expr_fvarId_x21(v_fst_1393_);
lean_inc(v_snd_1394_);
v___x_1396_ = l_Lean_LocalContext_setUserName(v_b_1390_, v___x_1395_, v_snd_1394_);
v___x_1397_ = ((size_t)1ULL);
v___x_1398_ = lean_usize_add(v_i_1388_, v___x_1397_);
v_i_1388_ = v___x_1398_;
v_b_1390_ = v___x_1396_;
goto _start;
}
else
{
return v_b_1390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1___boxed(lean_object* v_as_1400_, lean_object* v_i_1401_, lean_object* v_stop_1402_, lean_object* v_b_1403_){
_start:
{
size_t v_i_boxed_1404_; size_t v_stop_boxed_1405_; lean_object* v_res_1406_; 
v_i_boxed_1404_ = lean_unbox_usize(v_i_1401_);
lean_dec(v_i_1401_);
v_stop_boxed_1405_ = lean_unbox_usize(v_stop_1402_);
lean_dec(v_stop_1402_);
v_res_1406_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v_as_1400_, v_i_boxed_1404_, v_stop_boxed_1405_, v_b_1403_);
lean_dec_ref(v_as_1400_);
return v_res_1406_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(lean_object* v_fvars_1407_, lean_object* v_names_1408_, lean_object* v_k_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_){
_start:
{
lean_object* v_lctx_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; uint8_t v___x_1419_; 
v_lctx_1415_ = lean_ctor_get(v_a_1410_, 2);
v___x_1416_ = l_Array_zip___redArg(v_fvars_1407_, v_names_1408_);
v___x_1417_ = lean_unsigned_to_nat(0u);
v___x_1418_ = lean_array_get_size(v___x_1416_);
v___x_1419_ = lean_nat_dec_lt(v___x_1417_, v___x_1418_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; 
lean_dec_ref(v___x_1416_);
lean_inc_ref(v_lctx_1415_);
v___x_1420_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1415_, v_k_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
return v___x_1420_;
}
else
{
uint8_t v___x_1421_; 
v___x_1421_ = lean_nat_dec_le(v___x_1418_, v___x_1418_);
if (v___x_1421_ == 0)
{
if (v___x_1419_ == 0)
{
lean_object* v___x_1422_; 
lean_dec_ref(v___x_1416_);
lean_inc_ref(v_lctx_1415_);
v___x_1422_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v_lctx_1415_, v_k_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
return v___x_1422_;
}
else
{
size_t v___x_1423_; size_t v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1423_ = ((size_t)0ULL);
v___x_1424_ = lean_usize_of_nat(v___x_1418_);
lean_inc_ref(v_lctx_1415_);
v___x_1425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1416_, v___x_1423_, v___x_1424_, v_lctx_1415_);
lean_dec_ref(v___x_1416_);
v___x_1426_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1425_, v_k_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
return v___x_1426_;
}
}
else
{
size_t v___x_1427_; size_t v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1427_ = ((size_t)0ULL);
v___x_1428_ = lean_usize_of_nat(v___x_1418_);
lean_inc_ref(v_lctx_1415_);
v___x_1429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__1(v___x_1416_, v___x_1427_, v___x_1428_, v_lctx_1415_);
lean_dec_ref(v___x_1416_);
v___x_1430_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl_spec__0___redArg(v___x_1429_, v_k_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_);
return v___x_1430_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg___boxed(lean_object* v_fvars_1431_, lean_object* v_names_1432_, lean_object* v_k_1433_, lean_object* v_a_1434_, lean_object* v_a_1435_, lean_object* v_a_1436_, lean_object* v_a_1437_, lean_object* v_a_1438_){
_start:
{
lean_object* v_res_1439_; 
v_res_1439_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1431_, v_names_1432_, v_k_1433_, v_a_1434_, v_a_1435_, v_a_1436_, v_a_1437_);
lean_dec(v_a_1437_);
lean_dec_ref(v_a_1436_);
lean_dec(v_a_1435_);
lean_dec_ref(v_a_1434_);
lean_dec_ref(v_names_1432_);
lean_dec_ref(v_fvars_1431_);
return v_res_1439_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object* v_00_u03b1_1440_, lean_object* v_fvars_1441_, lean_object* v_names_1442_, lean_object* v_k_1443_, lean_object* v_a_1444_, lean_object* v_a_1445_, lean_object* v_a_1446_, lean_object* v_a_1447_){
_start:
{
lean_object* v___x_1449_; 
v___x_1449_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1441_, v_names_1442_, v_k_1443_, v_a_1444_, v_a_1445_, v_a_1446_, v_a_1447_);
return v___x_1449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___boxed(lean_object* v_00_u03b1_1450_, lean_object* v_fvars_1451_, lean_object* v_names_1452_, lean_object* v_k_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_){
_start:
{
lean_object* v_res_1459_; 
v_res_1459_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(v_00_u03b1_1450_, v_fvars_1451_, v_names_1452_, v_k_1453_, v_a_1454_, v_a_1455_, v_a_1456_, v_a_1457_);
lean_dec(v_a_1457_);
lean_dec_ref(v_a_1456_);
lean_dec(v_a_1455_);
lean_dec_ref(v_a_1454_);
lean_dec_ref(v_names_1452_);
lean_dec_ref(v_fvars_1451_);
return v_res_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(lean_object* v_k_1460_, lean_object* v_fvars_1461_, lean_object* v_names_1462_, lean_object* v_runInBase_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_){
_start:
{
lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1469_ = lean_apply_2(v_runInBase_1463_, lean_box(0), v_k_1460_);
v___x_1470_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_1461_, v_names_1462_, v___x_1469_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed(lean_object* v_k_1471_, lean_object* v_fvars_1472_, lean_object* v_names_1473_, lean_object* v_runInBase_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0(v_k_1471_, v_fvars_1472_, v_names_1473_, v_runInBase_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec_ref(v_names_1473_);
lean_dec_ref(v_fvars_1472_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___redArg(lean_object* v_inst_1481_, lean_object* v_inst_1482_, lean_object* v_fvars_1483_, lean_object* v_names_1484_, lean_object* v_k_1485_){
_start:
{
lean_object* v_toBind_1486_; lean_object* v_liftWith_1487_; lean_object* v_restoreM_1488_; lean_object* v___f_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v_toBind_1486_ = lean_ctor_get(v_inst_1482_, 1);
lean_inc(v_toBind_1486_);
lean_dec_ref(v_inst_1482_);
v_liftWith_1487_ = lean_ctor_get(v_inst_1481_, 0);
lean_inc(v_liftWith_1487_);
v_restoreM_1488_ = lean_ctor_get(v_inst_1481_, 1);
lean_inc(v_restoreM_1488_);
lean_dec_ref(v_inst_1481_);
v___f_1489_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_withUserNames___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1489_, 0, v_k_1485_);
lean_closure_set(v___f_1489_, 1, v_fvars_1483_);
lean_closure_set(v___f_1489_, 2, v_names_1484_);
v___x_1490_ = lean_apply_2(v_liftWith_1487_, lean_box(0), v___f_1489_);
v___x_1491_ = lean_apply_1(v_restoreM_1488_, lean_box(0));
v___x_1492_ = lean_apply_4(v_toBind_1486_, lean_box(0), lean_box(0), v___x_1490_, v___x_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames(lean_object* v_n_1493_, lean_object* v_inst_1494_, lean_object* v_inst_1495_, lean_object* v_00_u03b1_1496_, lean_object* v_fvars_1497_, lean_object* v_names_1498_, lean_object* v_k_1499_){
_start:
{
lean_object* v___x_1500_; 
v___x_1500_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_1494_, v_inst_1495_, v_fvars_1497_, v_names_1498_, v_k_1499_);
return v___x_1500_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(lean_object* v_k_1501_, lean_object* v_runInBase_1502_, lean_object* v_ys_1503_, lean_object* v_args_1504_, lean_object* v___mask_1505_, lean_object* v___bodyType_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_apply_2(v_k_1501_, v_ys_1503_, v_args_1504_);
lean_inc(v___y_1510_);
lean_inc_ref(v___y_1509_);
lean_inc(v___y_1508_);
lean_inc_ref(v___y_1507_);
v___x_1513_ = lean_apply_7(v_runInBase_1502_, lean_box(0), v___x_1512_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, lean_box(0));
return v___x_1513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed(lean_object* v_k_1514_, lean_object* v_runInBase_1515_, lean_object* v_ys_1516_, lean_object* v_args_1517_, lean_object* v___mask_1518_, lean_object* v___bodyType_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_){
_start:
{
lean_object* v_res_1525_; 
v_res_1525_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0(v_k_1514_, v_runInBase_1515_, v_ys_1516_, v_args_1517_, v___mask_1518_, v___bodyType_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec_ref(v___bodyType_1519_);
lean_dec_ref(v___mask_1518_);
return v_res_1525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(lean_object* v_k_1526_, lean_object* v_origAltType_1527_, lean_object* v_altInfo_1528_, lean_object* v_runInBase_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v___f_1535_; lean_object* v___x_1536_; 
v___f_1535_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__0___boxed), 11, 2);
lean_closure_set(v___f_1535_, 0, v_k_1526_);
lean_closure_set(v___f_1535_, 1, v_runInBase_1529_);
v___x_1536_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_1527_, v_altInfo_1528_, v___f_1535_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed(lean_object* v_k_1537_, lean_object* v_origAltType_1538_, lean_object* v_altInfo_1539_, lean_object* v_runInBase_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1(v_k_1537_, v_origAltType_1538_, v_altInfo_1539_, v_runInBase_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(lean_object* v_inst_1547_, lean_object* v_inst_1548_, lean_object* v_origAltType_1549_, lean_object* v_altInfo_1550_, lean_object* v_k_1551_){
_start:
{
lean_object* v_toBind_1552_; lean_object* v_liftWith_1553_; lean_object* v_restoreM_1554_; lean_object* v___f_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; 
v_toBind_1552_ = lean_ctor_get(v_inst_1547_, 1);
lean_inc(v_toBind_1552_);
lean_dec_ref(v_inst_1547_);
v_liftWith_1553_ = lean_ctor_get(v_inst_1548_, 0);
lean_inc(v_liftWith_1553_);
v_restoreM_1554_ = lean_ctor_get(v_inst_1548_, 1);
lean_inc(v_restoreM_1554_);
lean_dec_ref(v_inst_1548_);
v___f_1555_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_1555_, 0, v_k_1551_);
lean_closure_set(v___f_1555_, 1, v_origAltType_1549_);
lean_closure_set(v___f_1555_, 2, v_altInfo_1550_);
v___x_1556_ = lean_apply_2(v_liftWith_1553_, lean_box(0), v___f_1555_);
v___x_1557_ = lean_apply_1(v_restoreM_1554_, lean_box(0));
v___x_1558_ = lean_apply_4(v_toBind_1552_, lean_box(0), lean_box(0), v___x_1556_, v___x_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27(lean_object* v_n_1559_, lean_object* v_inst_1560_, lean_object* v_inst_1561_, lean_object* v_00_u03b1_1562_, lean_object* v_origAltType_1563_, lean_object* v_altInfo_1564_, lean_object* v_k_1565_){
_start:
{
lean_object* v___x_1566_; 
v___x_1566_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_1560_, v_inst_1561_, v_origAltType_1563_, v_altInfo_1564_, v_k_1565_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_altParams(lean_object* v_fvars_1567_){
_start:
{
lean_object* v_args_1568_; lean_object* v_discrEqs_1569_; lean_object* v___x_1570_; 
v_args_1568_ = lean_ctor_get(v_fvars_1567_, 0);
lean_inc_ref(v_args_1568_);
v_discrEqs_1569_ = lean_ctor_get(v_fvars_1567_, 3);
lean_inc_ref(v_discrEqs_1569_);
lean_dec_ref(v_fvars_1567_);
v___x_1570_ = l_Array_append___redArg(v_args_1568_, v_discrEqs_1569_);
lean_dec_ref(v_discrEqs_1569_);
return v___x_1570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object* v_fvars_1571_){
_start:
{
lean_object* v_fields_1572_; lean_object* v_overlaps_1573_; lean_object* v_discrEqs_1574_; lean_object* v_extraEqs_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; 
v_fields_1572_ = lean_ctor_get(v_fvars_1571_, 1);
lean_inc_ref(v_fields_1572_);
v_overlaps_1573_ = lean_ctor_get(v_fvars_1571_, 2);
lean_inc_ref(v_overlaps_1573_);
v_discrEqs_1574_ = lean_ctor_get(v_fvars_1571_, 3);
lean_inc_ref(v_discrEqs_1574_);
v_extraEqs_1575_ = lean_ctor_get(v_fvars_1571_, 4);
lean_inc_ref(v_extraEqs_1575_);
lean_dec_ref(v_fvars_1571_);
v___x_1576_ = l_Array_append___redArg(v_fields_1572_, v_overlaps_1573_);
lean_dec_ref(v_overlaps_1573_);
v___x_1577_ = l_Array_append___redArg(v___x_1576_, v_discrEqs_1574_);
lean_dec_ref(v_discrEqs_1574_);
v___x_1578_ = l_Array_append___redArg(v___x_1577_, v_extraEqs_1575_);
lean_dec_ref(v_extraEqs_1575_);
return v___x_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0(lean_object* v_inst_1579_, lean_object* v_inst_1580_, lean_object* v_x_1581_){
_start:
{
lean_object* v___x_1582_; lean_object* v___x_1583_; 
v___x_1582_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_1583_ = l_Lean_throwError___redArg(v_inst_1579_, v_inst_1580_, v___x_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed(lean_object* v_inst_1584_, lean_object* v_inst_1585_, lean_object* v_x_1586_){
_start:
{
lean_object* v_res_1587_; 
v_res_1587_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__0(v_inst_1584_, v_inst_1585_, v_x_1586_);
lean_dec_ref(v_x_1586_);
return v_res_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1(lean_object* v_inst_1588_, lean_object* v_x_1589_){
_start:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; 
v___x_1590_ = l_Lean_Expr_fvarId_x21(v_x_1589_);
v___x_1591_ = lean_alloc_closure((void*)(l_Lean_FVarId_getUserName___boxed), 6, 1);
lean_closure_set(v___x_1591_, 0, v___x_1590_);
v___x_1592_ = lean_apply_2(v_inst_1588_, lean_box(0), v___x_1591_);
return v___x_1592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed(lean_object* v_inst_1593_, lean_object* v_x_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__1(v_inst_1593_, v_x_1594_);
lean_dec_ref(v_x_1594_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2(lean_object* v_inst_1596_, lean_object* v___f_1597_, lean_object* v_xs_1598_, lean_object* v_x_1599_){
_start:
{
size_t v_sz_1600_; size_t v___x_1601_; lean_object* v___x_1602_; 
v_sz_1600_ = lean_array_size(v_xs_1598_);
v___x_1601_ = ((size_t)0ULL);
v___x_1602_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_1596_, v___f_1597_, v_sz_1600_, v___x_1601_, v_xs_1598_);
return v___x_1602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed(lean_object* v_inst_1603_, lean_object* v___f_1604_, lean_object* v_xs_1605_, lean_object* v_x_1606_){
_start:
{
lean_object* v_res_1607_; 
v_res_1607_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__2(v_inst_1603_, v___f_1604_, v_xs_1605_, v_x_1606_);
lean_dec_ref(v_x_1606_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__3(lean_object* v_toPure_1608_, lean_object* v_____do__lift_1609_){
_start:
{
lean_object* v___x_1610_; 
v___x_1610_ = lean_apply_2(v_toPure_1608_, lean_box(0), v_____do__lift_1609_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__4(lean_object* v_toPure_1611_, lean_object* v_____do__lift_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = lean_apply_2(v_toPure_1611_, lean_box(0), v_____do__lift_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5(lean_object* v_fst_1614_, lean_object* v_fst_1615_, lean_object* v___x_1616_, lean_object* v___x_1617_, lean_object* v_toPure_1618_, lean_object* v_____do__lift_1619_){
_start:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1620_ = lean_array_push(v_fst_1614_, v_____do__lift_1619_);
v___x_1621_ = lean_nat_add(v_fst_1615_, v___x_1616_);
v___x_1622_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1622_, 0, v___x_1621_);
lean_ctor_set(v___x_1622_, 1, v___x_1617_);
v___x_1623_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1620_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
v___x_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
v___x_1625_ = lean_apply_2(v_toPure_1618_, lean_box(0), v___x_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__5___boxed(lean_object* v_fst_1626_, lean_object* v_fst_1627_, lean_object* v___x_1628_, lean_object* v___x_1629_, lean_object* v_toPure_1630_, lean_object* v_____do__lift_1631_){
_start:
{
lean_object* v_res_1632_; 
v_res_1632_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__5(v_fst_1626_, v_fst_1627_, v___x_1628_, v___x_1629_, v_toPure_1630_, v_____do__lift_1631_);
lean_dec(v___x_1628_);
lean_dec(v_fst_1627_);
return v_res_1632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6(uint8_t v_val_1633_, lean_object* v_a_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
if (v_val_1633_ == 0)
{
lean_object* v___x_1640_; 
v___x_1640_ = l_Lean_Meta_mkEqRefl(v_a_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v___x_1640_;
}
else
{
lean_object* v___x_1641_; 
v___x_1641_ = l_Lean_Meta_mkHEqRefl(v_a_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v___x_1641_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed(lean_object* v_val_1642_, lean_object* v_a_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
uint8_t v_val_14309__boxed_1649_; lean_object* v_res_1650_; 
v_val_14309__boxed_1649_ = lean_unbox(v_val_1642_);
v_res_1650_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__6(v_val_14309__boxed_1649_, v_a_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__7(lean_object* v_toPure_1651_, lean_object* v_inst_1652_, lean_object* v_toBind_1653_, lean_object* v_a_1654_, lean_object* v_x_1655_, lean_object* v___y_1656_){
_start:
{
lean_object* v_snd_1657_; lean_object* v_snd_1658_; lean_object* v_fst_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1707_; 
v_snd_1657_ = lean_ctor_get(v___y_1656_, 1);
lean_inc(v_snd_1657_);
v_snd_1658_ = lean_ctor_get(v_snd_1657_, 1);
lean_inc(v_snd_1658_);
v_fst_1659_ = lean_ctor_get(v___y_1656_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___y_1656_);
if (v_isSharedCheck_1707_ == 0)
{
lean_object* v_unused_1708_; 
v_unused_1708_ = lean_ctor_get(v___y_1656_, 1);
lean_dec(v_unused_1708_);
v___x_1661_ = v___y_1656_;
v_isShared_1662_ = v_isSharedCheck_1707_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_fst_1659_);
lean_dec(v___y_1656_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1707_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v_fst_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1705_; 
v_fst_1663_ = lean_ctor_get(v_snd_1657_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v_snd_1657_);
if (v_isSharedCheck_1705_ == 0)
{
lean_object* v_unused_1706_; 
v_unused_1706_ = lean_ctor_get(v_snd_1657_, 1);
lean_dec(v_unused_1706_);
v___x_1665_ = v_snd_1657_;
v_isShared_1666_ = v_isSharedCheck_1705_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_fst_1663_);
lean_dec(v_snd_1657_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1705_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
lean_object* v_array_1667_; lean_object* v_start_1668_; lean_object* v_stop_1669_; uint8_t v___x_1670_; 
v_array_1667_ = lean_ctor_get(v_snd_1658_, 0);
v_start_1668_ = lean_ctor_get(v_snd_1658_, 1);
v_stop_1669_ = lean_ctor_get(v_snd_1658_, 2);
v___x_1670_ = lean_nat_dec_lt(v_start_1668_, v_stop_1669_);
if (v___x_1670_ == 0)
{
lean_object* v___x_1672_; 
lean_dec_ref(v_a_1654_);
lean_dec(v_toBind_1653_);
lean_dec(v_inst_1652_);
if (v_isShared_1666_ == 0)
{
v___x_1672_ = v___x_1665_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_fst_1663_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v_snd_1658_);
v___x_1672_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1674_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v___x_1672_);
v___x_1674_ = v___x_1661_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v_fst_1659_);
lean_ctor_set(v_reuseFailAlloc_1677_, 1, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
v___x_1676_ = lean_apply_2(v_toPure_1651_, lean_box(0), v___x_1675_);
return v___x_1676_;
}
}
}
else
{
lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1701_; 
lean_inc(v_stop_1669_);
lean_inc(v_start_1668_);
lean_inc_ref(v_array_1667_);
v_isSharedCheck_1701_ = !lean_is_exclusive(v_snd_1658_);
if (v_isSharedCheck_1701_ == 0)
{
lean_object* v_unused_1702_; lean_object* v_unused_1703_; lean_object* v_unused_1704_; 
v_unused_1702_ = lean_ctor_get(v_snd_1658_, 2);
lean_dec(v_unused_1702_);
v_unused_1703_ = lean_ctor_get(v_snd_1658_, 1);
lean_dec(v_unused_1703_);
v_unused_1704_ = lean_ctor_get(v_snd_1658_, 0);
lean_dec(v_unused_1704_);
v___x_1680_ = v_snd_1658_;
v_isShared_1681_ = v_isSharedCheck_1701_;
goto v_resetjp_1679_;
}
else
{
lean_dec(v_snd_1658_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1701_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1682_ = lean_array_fget(v_array_1667_, v_start_1668_);
v___x_1683_ = lean_unsigned_to_nat(1u);
v___x_1684_ = lean_nat_add(v_start_1668_, v___x_1683_);
lean_dec(v_start_1668_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1684_);
v___x_1686_ = v___x_1680_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1700_; 
v_reuseFailAlloc_1700_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1700_, 0, v_array_1667_);
lean_ctor_set(v_reuseFailAlloc_1700_, 1, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1700_, 2, v_stop_1669_);
v___x_1686_ = v_reuseFailAlloc_1700_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
if (lean_obj_tag(v___x_1682_) == 0)
{
lean_object* v___x_1688_; 
lean_dec_ref(v_a_1654_);
lean_dec(v_toBind_1653_);
lean_dec(v_inst_1652_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 1, v___x_1686_);
v___x_1688_ = v___x_1665_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1694_; 
v_reuseFailAlloc_1694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1694_, 0, v_fst_1663_);
lean_ctor_set(v_reuseFailAlloc_1694_, 1, v___x_1686_);
v___x_1688_ = v_reuseFailAlloc_1694_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
lean_object* v___x_1690_; 
if (v_isShared_1662_ == 0)
{
lean_ctor_set(v___x_1661_, 1, v___x_1688_);
v___x_1690_ = v___x_1661_;
goto v_reusejp_1689_;
}
else
{
lean_object* v_reuseFailAlloc_1693_; 
v_reuseFailAlloc_1693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1693_, 0, v_fst_1659_);
lean_ctor_set(v_reuseFailAlloc_1693_, 1, v___x_1688_);
v___x_1690_ = v_reuseFailAlloc_1693_;
goto v_reusejp_1689_;
}
v_reusejp_1689_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1690_);
v___x_1692_ = lean_apply_2(v_toPure_1651_, lean_box(0), v___x_1691_);
return v___x_1692_;
}
}
}
else
{
lean_object* v_val_1695_; lean_object* v___f_1696_; lean_object* v___f_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
lean_del_object(v___x_1665_);
lean_del_object(v___x_1661_);
v_val_1695_ = lean_ctor_get(v___x_1682_, 0);
lean_inc(v_val_1695_);
lean_dec_ref(v___x_1682_);
v___f_1696_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__5___boxed), 6, 5);
lean_closure_set(v___f_1696_, 0, v_fst_1659_);
lean_closure_set(v___f_1696_, 1, v_fst_1663_);
lean_closure_set(v___f_1696_, 2, v___x_1683_);
lean_closure_set(v___f_1696_, 3, v___x_1686_);
lean_closure_set(v___f_1696_, 4, v_toPure_1651_);
v___f_1697_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1697_, 0, v_val_1695_);
lean_closure_set(v___f_1697_, 1, v_a_1654_);
v___x_1698_ = lean_apply_2(v_inst_1652_, lean_box(0), v___f_1697_);
v___x_1699_ = lean_apply_4(v_toBind_1653_, lean_box(0), lean_box(0), v___x_1698_, v___f_1696_);
return v___x_1699_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8(lean_object* v_heq_1709_, lean_object* v_fst_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = l_Lean_mkArrow(v_heq_1709_, v_fst_1710_, v___y_1713_, v___y_1714_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__8___boxed(lean_object* v_heq_1717_, lean_object* v_fst_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__8(v_heq_1717_, v_fst_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
return v_res_1724_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0(void){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = lean_box(0);
v___x_1726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9(lean_object* v_heq_1727_, lean_object* v_fst_1728_, lean_object* v_fst_1729_, lean_object* v___x_1730_, lean_object* v___x_1731_, lean_object* v_toPure_1732_, lean_object* v_motiveBody_x27_1733_){
_start:
{
uint8_t v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1734_ = l_Lean_Expr_isHEq(v_heq_1727_);
v___x_1735_ = lean_box(v___x_1734_);
v___x_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
v___x_1737_ = lean_array_push(v_fst_1728_, v___x_1736_);
v___x_1738_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0);
v___x_1739_ = lean_array_push(v_fst_1729_, v___x_1738_);
v___x_1740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1740_, 0, v___x_1730_);
lean_ctor_set(v___x_1740_, 1, v___x_1731_);
v___x_1741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1739_);
lean_ctor_set(v___x_1741_, 1, v___x_1740_);
v___x_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1742_, 0, v___x_1737_);
lean_ctor_set(v___x_1742_, 1, v___x_1741_);
v___x_1743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1743_, 0, v_motiveBody_x27_1733_);
lean_ctor_set(v___x_1743_, 1, v___x_1742_);
v___x_1744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1744_, 0, v___x_1743_);
v___x_1745_ = lean_apply_2(v_toPure_1732_, lean_box(0), v___x_1744_);
return v___x_1745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed(lean_object* v_heq_1746_, lean_object* v_fst_1747_, lean_object* v_fst_1748_, lean_object* v___x_1749_, lean_object* v___x_1750_, lean_object* v_toPure_1751_, lean_object* v_motiveBody_x27_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__9(v_heq_1746_, v_fst_1747_, v_fst_1748_, v___x_1749_, v___x_1750_, v_toPure_1751_, v_motiveBody_x27_1752_);
lean_dec_ref(v_heq_1746_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__10(lean_object* v_fst_1754_, lean_object* v_fst_1755_, lean_object* v_fst_1756_, lean_object* v___x_1757_, lean_object* v___x_1758_, lean_object* v_toPure_1759_, lean_object* v_inst_1760_, lean_object* v_toBind_1761_, lean_object* v_heq_1762_){
_start:
{
lean_object* v___f_1763_; lean_object* v___f_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
lean_inc_ref(v_heq_1762_);
v___f_1763_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__8___boxed), 7, 2);
lean_closure_set(v___f_1763_, 0, v_heq_1762_);
lean_closure_set(v___f_1763_, 1, v_fst_1754_);
v___f_1764_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__9___boxed), 7, 6);
lean_closure_set(v___f_1764_, 0, v_heq_1762_);
lean_closure_set(v___f_1764_, 1, v_fst_1755_);
lean_closure_set(v___f_1764_, 2, v_fst_1756_);
lean_closure_set(v___f_1764_, 3, v___x_1757_);
lean_closure_set(v___f_1764_, 4, v___x_1758_);
lean_closure_set(v___f_1764_, 5, v_toPure_1759_);
v___x_1765_ = lean_apply_2(v_inst_1760_, lean_box(0), v___f_1763_);
v___x_1766_ = lean_apply_4(v_toBind_1761_, lean_box(0), lean_box(0), v___x_1765_, v___f_1764_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11(lean_object* v___x_1767_, lean_object* v_a_1768_, lean_object* v_inst_1769_, lean_object* v_toBind_1770_, lean_object* v___f_1771_, lean_object* v_fst_1772_, lean_object* v_fst_1773_, lean_object* v___x_1774_, lean_object* v___x_1775_, lean_object* v___x_1776_, lean_object* v_fst_1777_, lean_object* v_toPure_1778_, uint8_t v_____do__lift_1779_){
_start:
{
if (v_____do__lift_1779_ == 0)
{
lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; 
lean_dec(v_toPure_1778_);
lean_dec(v_fst_1777_);
lean_dec_ref(v___x_1776_);
lean_dec_ref(v___x_1775_);
lean_dec(v___x_1774_);
lean_dec(v_fst_1773_);
lean_dec(v_fst_1772_);
v___x_1780_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEqHEq___boxed), 7, 2);
lean_closure_set(v___x_1780_, 0, v___x_1767_);
lean_closure_set(v___x_1780_, 1, v_a_1768_);
v___x_1781_ = lean_apply_2(v_inst_1769_, lean_box(0), v___x_1780_);
v___x_1782_ = lean_apply_4(v_toBind_1770_, lean_box(0), lean_box(0), v___x_1781_, v___f_1771_);
return v___x_1782_;
}
else
{
lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; 
lean_dec(v___f_1771_);
lean_dec(v_toBind_1770_);
lean_dec(v_inst_1769_);
lean_dec_ref(v_a_1768_);
lean_dec_ref(v___x_1767_);
v___x_1783_ = lean_box(0);
v___x_1784_ = lean_array_push(v_fst_1772_, v___x_1783_);
v___x_1785_ = lean_array_push(v_fst_1773_, v___x_1774_);
v___x_1786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1775_);
lean_ctor_set(v___x_1786_, 1, v___x_1776_);
v___x_1787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1787_, 0, v___x_1785_);
lean_ctor_set(v___x_1787_, 1, v___x_1786_);
v___x_1788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1788_, 0, v___x_1784_);
lean_ctor_set(v___x_1788_, 1, v___x_1787_);
v___x_1789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1789_, 0, v_fst_1777_);
lean_ctor_set(v___x_1789_, 1, v___x_1788_);
v___x_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1790_, 0, v___x_1789_);
v___x_1791_ = lean_apply_2(v_toPure_1778_, lean_box(0), v___x_1790_);
return v___x_1791_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__11___boxed(lean_object* v___x_1792_, lean_object* v_a_1793_, lean_object* v_inst_1794_, lean_object* v_toBind_1795_, lean_object* v___f_1796_, lean_object* v_fst_1797_, lean_object* v_fst_1798_, lean_object* v___x_1799_, lean_object* v___x_1800_, lean_object* v___x_1801_, lean_object* v_fst_1802_, lean_object* v_toPure_1803_, lean_object* v_____do__lift_1804_){
_start:
{
uint8_t v_____do__lift_14500__boxed_1805_; lean_object* v_res_1806_; 
v_____do__lift_14500__boxed_1805_ = lean_unbox(v_____do__lift_1804_);
v_res_1806_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__11(v___x_1792_, v_a_1793_, v_inst_1794_, v_toBind_1795_, v___f_1796_, v_fst_1797_, v_fst_1798_, v___x_1799_, v___x_1800_, v___x_1801_, v_fst_1802_, v_toPure_1803_, v_____do__lift_14500__boxed_1805_);
return v_res_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12(lean_object* v_toPure_1807_, uint8_t v_addEqualities_1808_, lean_object* v_inst_1809_, lean_object* v_toBind_1810_, lean_object* v_a_1811_, lean_object* v_x_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v_snd_1814_; lean_object* v_snd_1815_; lean_object* v_snd_1816_; lean_object* v_snd_1817_; lean_object* v_fst_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1924_; 
v_snd_1814_ = lean_ctor_get(v___y_1813_, 1);
lean_inc(v_snd_1814_);
v_snd_1815_ = lean_ctor_get(v_snd_1814_, 1);
lean_inc(v_snd_1815_);
v_snd_1816_ = lean_ctor_get(v_snd_1815_, 1);
lean_inc(v_snd_1816_);
v_snd_1817_ = lean_ctor_get(v_snd_1816_, 1);
lean_inc(v_snd_1817_);
v_fst_1818_ = lean_ctor_get(v___y_1813_, 0);
v_isSharedCheck_1924_ = !lean_is_exclusive(v___y_1813_);
if (v_isSharedCheck_1924_ == 0)
{
lean_object* v_unused_1925_; 
v_unused_1925_ = lean_ctor_get(v___y_1813_, 1);
lean_dec(v_unused_1925_);
v___x_1820_ = v___y_1813_;
v_isShared_1821_ = v_isSharedCheck_1924_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_fst_1818_);
lean_dec(v___y_1813_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1924_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v_fst_1822_; lean_object* v___x_1824_; uint8_t v_isShared_1825_; uint8_t v_isSharedCheck_1922_; 
v_fst_1822_ = lean_ctor_get(v_snd_1814_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_snd_1814_);
if (v_isSharedCheck_1922_ == 0)
{
lean_object* v_unused_1923_; 
v_unused_1923_ = lean_ctor_get(v_snd_1814_, 1);
lean_dec(v_unused_1923_);
v___x_1824_ = v_snd_1814_;
v_isShared_1825_ = v_isSharedCheck_1922_;
goto v_resetjp_1823_;
}
else
{
lean_inc(v_fst_1822_);
lean_dec(v_snd_1814_);
v___x_1824_ = lean_box(0);
v_isShared_1825_ = v_isSharedCheck_1922_;
goto v_resetjp_1823_;
}
v_resetjp_1823_:
{
lean_object* v_fst_1826_; lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1920_; 
v_fst_1826_ = lean_ctor_get(v_snd_1815_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_snd_1815_);
if (v_isSharedCheck_1920_ == 0)
{
lean_object* v_unused_1921_; 
v_unused_1921_ = lean_ctor_get(v_snd_1815_, 1);
lean_dec(v_unused_1921_);
v___x_1828_ = v_snd_1815_;
v_isShared_1829_ = v_isSharedCheck_1920_;
goto v_resetjp_1827_;
}
else
{
lean_inc(v_fst_1826_);
lean_dec(v_snd_1815_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1920_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v_fst_1830_; lean_object* v___x_1832_; uint8_t v_isShared_1833_; uint8_t v_isSharedCheck_1918_; 
v_fst_1830_ = lean_ctor_get(v_snd_1816_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v_snd_1816_);
if (v_isSharedCheck_1918_ == 0)
{
lean_object* v_unused_1919_; 
v_unused_1919_ = lean_ctor_get(v_snd_1816_, 1);
lean_dec(v_unused_1919_);
v___x_1832_ = v_snd_1816_;
v_isShared_1833_ = v_isSharedCheck_1918_;
goto v_resetjp_1831_;
}
else
{
lean_inc(v_fst_1830_);
lean_dec(v_snd_1816_);
v___x_1832_ = lean_box(0);
v_isShared_1833_ = v_isSharedCheck_1918_;
goto v_resetjp_1831_;
}
v_resetjp_1831_:
{
lean_object* v_array_1834_; lean_object* v_start_1835_; lean_object* v_stop_1836_; uint8_t v___x_1837_; 
v_array_1834_ = lean_ctor_get(v_snd_1817_, 0);
v_start_1835_ = lean_ctor_get(v_snd_1817_, 1);
v_stop_1836_ = lean_ctor_get(v_snd_1817_, 2);
v___x_1837_ = lean_nat_dec_lt(v_start_1835_, v_stop_1836_);
if (v___x_1837_ == 0)
{
lean_object* v___x_1839_; 
lean_dec_ref(v_a_1811_);
lean_dec(v_toBind_1810_);
lean_dec(v_inst_1809_);
if (v_isShared_1833_ == 0)
{
v___x_1839_ = v___x_1832_;
goto v_reusejp_1838_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_fst_1830_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_snd_1817_);
v___x_1839_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1838_;
}
v_reusejp_1838_:
{
lean_object* v___x_1841_; 
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 1, v___x_1839_);
v___x_1841_ = v___x_1828_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v_fst_1826_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___x_1843_; 
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 1, v___x_1841_);
v___x_1843_ = v___x_1824_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_fst_1822_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v___x_1841_);
v___x_1843_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
lean_object* v___x_1845_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v___x_1843_);
v___x_1845_ = v___x_1820_;
goto v_reusejp_1844_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_fst_1818_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1843_);
v___x_1845_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1844_;
}
v_reusejp_1844_:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; 
v___x_1846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1845_);
v___x_1847_ = lean_apply_2(v_toPure_1807_, lean_box(0), v___x_1846_);
return v___x_1847_;
}
}
}
}
}
else
{
lean_object* v___x_1853_; uint8_t v_isShared_1854_; uint8_t v_isSharedCheck_1914_; 
lean_inc(v_stop_1836_);
lean_inc(v_start_1835_);
lean_inc_ref(v_array_1834_);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_snd_1817_);
if (v_isSharedCheck_1914_ == 0)
{
lean_object* v_unused_1915_; lean_object* v_unused_1916_; lean_object* v_unused_1917_; 
v_unused_1915_ = lean_ctor_get(v_snd_1817_, 2);
lean_dec(v_unused_1915_);
v_unused_1916_ = lean_ctor_get(v_snd_1817_, 1);
lean_dec(v_unused_1916_);
v_unused_1917_ = lean_ctor_get(v_snd_1817_, 0);
lean_dec(v_unused_1917_);
v___x_1853_ = v_snd_1817_;
v_isShared_1854_ = v_isSharedCheck_1914_;
goto v_resetjp_1852_;
}
else
{
lean_dec(v_snd_1817_);
v___x_1853_ = lean_box(0);
v_isShared_1854_ = v_isSharedCheck_1914_;
goto v_resetjp_1852_;
}
v_resetjp_1852_:
{
lean_object* v_array_1855_; lean_object* v_start_1856_; lean_object* v_stop_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1862_; 
v_array_1855_ = lean_ctor_get(v_fst_1830_, 0);
v_start_1856_ = lean_ctor_get(v_fst_1830_, 1);
v_stop_1857_ = lean_ctor_get(v_fst_1830_, 2);
v___x_1858_ = lean_array_fget(v_array_1834_, v_start_1835_);
v___x_1859_ = lean_unsigned_to_nat(1u);
v___x_1860_ = lean_nat_add(v_start_1835_, v___x_1859_);
lean_dec(v_start_1835_);
if (v_isShared_1854_ == 0)
{
lean_ctor_set(v___x_1853_, 1, v___x_1860_);
v___x_1862_ = v___x_1853_;
goto v_reusejp_1861_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_array_1834_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v___x_1860_);
lean_ctor_set(v_reuseFailAlloc_1913_, 2, v_stop_1836_);
v___x_1862_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1861_;
}
v_reusejp_1861_:
{
uint8_t v___x_1863_; 
v___x_1863_ = lean_nat_dec_lt(v_start_1856_, v_stop_1857_);
if (v___x_1863_ == 0)
{
lean_object* v___x_1865_; 
lean_dec(v___x_1858_);
lean_dec_ref(v_a_1811_);
lean_dec(v_toBind_1810_);
lean_dec(v_inst_1809_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 1, v___x_1862_);
v___x_1865_ = v___x_1832_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1877_; 
v_reuseFailAlloc_1877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1877_, 0, v_fst_1830_);
lean_ctor_set(v_reuseFailAlloc_1877_, 1, v___x_1862_);
v___x_1865_ = v_reuseFailAlloc_1877_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
lean_object* v___x_1867_; 
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 1, v___x_1865_);
v___x_1867_ = v___x_1828_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_fst_1826_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v___x_1865_);
v___x_1867_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1869_; 
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 1, v___x_1867_);
v___x_1869_ = v___x_1824_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v_fst_1822_);
lean_ctor_set(v_reuseFailAlloc_1875_, 1, v___x_1867_);
v___x_1869_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
lean_object* v___x_1871_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v___x_1869_);
v___x_1871_ = v___x_1820_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_fst_1818_);
lean_ctor_set(v_reuseFailAlloc_1874_, 1, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
lean_object* v___x_1872_; lean_object* v___x_1873_; 
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
v___x_1873_ = lean_apply_2(v_toPure_1807_, lean_box(0), v___x_1872_);
return v___x_1873_;
}
}
}
}
}
else
{
lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1909_; 
lean_inc(v_stop_1857_);
lean_inc(v_start_1856_);
lean_inc_ref(v_array_1855_);
v_isSharedCheck_1909_ = !lean_is_exclusive(v_fst_1830_);
if (v_isSharedCheck_1909_ == 0)
{
lean_object* v_unused_1910_; lean_object* v_unused_1911_; lean_object* v_unused_1912_; 
v_unused_1910_ = lean_ctor_get(v_fst_1830_, 2);
lean_dec(v_unused_1910_);
v_unused_1911_ = lean_ctor_get(v_fst_1830_, 1);
lean_dec(v_unused_1911_);
v_unused_1912_ = lean_ctor_get(v_fst_1830_, 0);
lean_dec(v_unused_1912_);
v___x_1879_ = v_fst_1830_;
v_isShared_1880_ = v_isSharedCheck_1909_;
goto v_resetjp_1878_;
}
else
{
lean_dec(v_fst_1830_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1909_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1884_; 
v___x_1881_ = lean_array_fget(v_array_1855_, v_start_1856_);
v___x_1882_ = lean_nat_add(v_start_1856_, v___x_1859_);
lean_dec(v_start_1856_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 1, v___x_1882_);
v___x_1884_ = v___x_1879_;
goto v_reusejp_1883_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_array_1855_);
lean_ctor_set(v_reuseFailAlloc_1908_, 1, v___x_1882_);
lean_ctor_set(v_reuseFailAlloc_1908_, 2, v_stop_1857_);
v___x_1884_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1883_;
}
v_reusejp_1883_:
{
if (v_addEqualities_1808_ == 0)
{
lean_dec(v___x_1881_);
lean_dec_ref(v_a_1811_);
lean_dec(v_toBind_1810_);
lean_dec(v_inst_1809_);
goto v___jp_1885_;
}
else
{
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v___f_1903_; lean_object* v___f_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; 
lean_del_object(v___x_1832_);
lean_del_object(v___x_1828_);
lean_del_object(v___x_1824_);
lean_del_object(v___x_1820_);
lean_inc_n(v_toBind_1810_, 2);
lean_inc_n(v_inst_1809_, 2);
lean_inc(v_toPure_1807_);
lean_inc_ref(v___x_1862_);
lean_inc_ref(v___x_1884_);
lean_inc(v_fst_1826_);
lean_inc(v_fst_1822_);
lean_inc(v_fst_1818_);
v___f_1903_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__10), 9, 8);
lean_closure_set(v___f_1903_, 0, v_fst_1818_);
lean_closure_set(v___f_1903_, 1, v_fst_1822_);
lean_closure_set(v___f_1903_, 2, v_fst_1826_);
lean_closure_set(v___f_1903_, 3, v___x_1884_);
lean_closure_set(v___f_1903_, 4, v___x_1862_);
lean_closure_set(v___f_1903_, 5, v_toPure_1807_);
lean_closure_set(v___f_1903_, 6, v_inst_1809_);
lean_closure_set(v___f_1903_, 7, v_toBind_1810_);
lean_inc_ref(v_a_1811_);
v___f_1904_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__11___boxed), 13, 12);
lean_closure_set(v___f_1904_, 0, v___x_1881_);
lean_closure_set(v___f_1904_, 1, v_a_1811_);
lean_closure_set(v___f_1904_, 2, v_inst_1809_);
lean_closure_set(v___f_1904_, 3, v_toBind_1810_);
lean_closure_set(v___f_1904_, 4, v___f_1903_);
lean_closure_set(v___f_1904_, 5, v_fst_1822_);
lean_closure_set(v___f_1904_, 6, v_fst_1826_);
lean_closure_set(v___f_1904_, 7, v___x_1858_);
lean_closure_set(v___f_1904_, 8, v___x_1884_);
lean_closure_set(v___f_1904_, 9, v___x_1862_);
lean_closure_set(v___f_1904_, 10, v_fst_1818_);
lean_closure_set(v___f_1904_, 11, v_toPure_1807_);
v___x_1905_ = lean_alloc_closure((void*)(l_Lean_Meta_isProof___boxed), 6, 1);
lean_closure_set(v___x_1905_, 0, v_a_1811_);
v___x_1906_ = lean_apply_2(v_inst_1809_, lean_box(0), v___x_1905_);
v___x_1907_ = lean_apply_4(v_toBind_1810_, lean_box(0), lean_box(0), v___x_1906_, v___f_1904_);
return v___x_1907_;
}
else
{
lean_dec(v___x_1881_);
lean_dec_ref(v_a_1811_);
lean_dec(v_toBind_1810_);
lean_dec(v_inst_1809_);
goto v___jp_1885_;
}
}
v___jp_1885_:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1890_; 
v___x_1886_ = lean_box(0);
v___x_1887_ = lean_array_push(v_fst_1822_, v___x_1886_);
v___x_1888_ = lean_array_push(v_fst_1826_, v___x_1858_);
if (v_isShared_1833_ == 0)
{
lean_ctor_set(v___x_1832_, 1, v___x_1862_);
lean_ctor_set(v___x_1832_, 0, v___x_1884_);
v___x_1890_ = v___x_1832_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1902_; 
v_reuseFailAlloc_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1902_, 0, v___x_1884_);
lean_ctor_set(v_reuseFailAlloc_1902_, 1, v___x_1862_);
v___x_1890_ = v_reuseFailAlloc_1902_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1892_; 
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 1, v___x_1890_);
lean_ctor_set(v___x_1828_, 0, v___x_1888_);
v___x_1892_ = v___x_1828_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v___x_1888_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
lean_object* v___x_1894_; 
if (v_isShared_1825_ == 0)
{
lean_ctor_set(v___x_1824_, 1, v___x_1892_);
lean_ctor_set(v___x_1824_, 0, v___x_1887_);
v___x_1894_ = v___x_1824_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1900_; 
v_reuseFailAlloc_1900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1900_, 0, v___x_1887_);
lean_ctor_set(v_reuseFailAlloc_1900_, 1, v___x_1892_);
v___x_1894_ = v_reuseFailAlloc_1900_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
lean_object* v___x_1896_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v___x_1894_);
v___x_1896_ = v___x_1820_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v_fst_1818_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v___x_1894_);
v___x_1896_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1896_);
v___x_1898_ = lean_apply_2(v_toPure_1807_, lean_box(0), v___x_1897_);
return v___x_1898_;
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__12___boxed(lean_object* v_toPure_1926_, lean_object* v_addEqualities_1927_, lean_object* v_inst_1928_, lean_object* v_toBind_1929_, lean_object* v_a_1930_, lean_object* v_x_1931_, lean_object* v___y_1932_){
_start:
{
uint8_t v_addEqualities_boxed_1933_; lean_object* v_res_1934_; 
v_addEqualities_boxed_1933_ = lean_unbox(v_addEqualities_1927_);
v_res_1934_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__12(v_toPure_1926_, v_addEqualities_boxed_1933_, v_inst_1928_, v_toBind_1929_, v_a_1930_, v_x_1931_, v___y_1932_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__13(lean_object* v_fst_1935_, lean_object* v_fst_1936_, lean_object* v_____do__lift_1937_, lean_object* v_toPure_1938_, lean_object* v_____do__lift_1939_){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; 
v___x_1940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1940_, 0, v_fst_1935_);
lean_ctor_set(v___x_1940_, 1, v_fst_1936_);
v___x_1941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1941_, 0, v_____do__lift_1939_);
lean_ctor_set(v___x_1941_, 1, v___x_1940_);
v___x_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1942_, 0, v_____do__lift_1937_);
lean_ctor_set(v___x_1942_, 1, v___x_1941_);
v___x_1943_ = lean_apply_2(v_toPure_1938_, lean_box(0), v___x_1942_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__14(lean_object* v_fst_1944_, lean_object* v_fst_1945_, lean_object* v_toPure_1946_, lean_object* v_fst_1947_, lean_object* v_inst_1948_, lean_object* v_toBind_1949_, lean_object* v_____do__lift_1950_){
_start:
{
lean_object* v___f_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___f_1951_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__13), 5, 4);
lean_closure_set(v___f_1951_, 0, v_fst_1944_);
lean_closure_set(v___f_1951_, 1, v_fst_1945_);
lean_closure_set(v___f_1951_, 2, v_____do__lift_1950_);
lean_closure_set(v___f_1951_, 3, v_toPure_1946_);
v___x_1952_ = lean_alloc_closure((void*)(l_Lean_Meta_getLevel___boxed), 6, 1);
lean_closure_set(v___x_1952_, 0, v_fst_1947_);
v___x_1953_ = lean_apply_2(v_inst_1948_, lean_box(0), v___x_1952_);
v___x_1954_ = lean_apply_4(v_toBind_1949_, lean_box(0), lean_box(0), v___x_1953_, v___f_1951_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__15(lean_object* v_toPure_1955_, lean_object* v_inst_1956_, lean_object* v_toBind_1957_, lean_object* v_motiveArgs_1958_, lean_object* v_____s_1959_){
_start:
{
lean_object* v_snd_1960_; lean_object* v_snd_1961_; lean_object* v_fst_1962_; lean_object* v_fst_1963_; lean_object* v_fst_1964_; lean_object* v___f_1965_; uint8_t v___x_1966_; uint8_t v___x_1967_; uint8_t v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; 
v_snd_1960_ = lean_ctor_get(v_____s_1959_, 1);
lean_inc(v_snd_1960_);
v_snd_1961_ = lean_ctor_get(v_snd_1960_, 1);
lean_inc(v_snd_1961_);
v_fst_1962_ = lean_ctor_get(v_____s_1959_, 0);
lean_inc_n(v_fst_1962_, 2);
lean_dec_ref(v_____s_1959_);
v_fst_1963_ = lean_ctor_get(v_snd_1960_, 0);
lean_inc(v_fst_1963_);
lean_dec(v_snd_1960_);
v_fst_1964_ = lean_ctor_get(v_snd_1961_, 0);
lean_inc(v_fst_1964_);
lean_dec(v_snd_1961_);
lean_inc(v_toBind_1957_);
lean_inc(v_inst_1956_);
v___f_1965_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__14), 7, 6);
lean_closure_set(v___f_1965_, 0, v_fst_1963_);
lean_closure_set(v___f_1965_, 1, v_fst_1964_);
lean_closure_set(v___f_1965_, 2, v_toPure_1955_);
lean_closure_set(v___f_1965_, 3, v_fst_1962_);
lean_closure_set(v___f_1965_, 4, v_inst_1956_);
lean_closure_set(v___f_1965_, 5, v_toBind_1957_);
v___x_1966_ = 0;
v___x_1967_ = 1;
v___x_1968_ = 1;
v___x_1969_ = lean_box(v___x_1966_);
v___x_1970_ = lean_box(v___x_1967_);
v___x_1971_ = lean_box(v___x_1966_);
v___x_1972_ = lean_box(v___x_1967_);
v___x_1973_ = lean_box(v___x_1968_);
v___x_1974_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1974_, 0, v_motiveArgs_1958_);
lean_closure_set(v___x_1974_, 1, v_fst_1962_);
lean_closure_set(v___x_1974_, 2, v___x_1969_);
lean_closure_set(v___x_1974_, 3, v___x_1970_);
lean_closure_set(v___x_1974_, 4, v___x_1971_);
lean_closure_set(v___x_1974_, 5, v___x_1972_);
lean_closure_set(v___x_1974_, 6, v___x_1973_);
v___x_1975_ = lean_apply_2(v_inst_1956_, lean_box(0), v___x_1974_);
v___x_1976_ = lean_apply_4(v_toBind_1957_, lean_box(0), lean_box(0), v___x_1975_, v___f_1965_);
return v___x_1976_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0(void){
_start:
{
lean_object* v___x_1977_; lean_object* v_addHEqualities_1978_; 
v___x_1977_ = lean_unsigned_to_nat(0u);
v_addHEqualities_1978_ = lean_mk_empty_array_with_capacity(v___x_1977_);
return v_addHEqualities_1978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__16(lean_object* v_toMatcherInfo_1979_, lean_object* v_discrs_x27_1980_, lean_object* v_motiveArgs_1981_, lean_object* v_inst_1982_, lean_object* v___f_1983_, lean_object* v_toBind_1984_, lean_object* v___f_1985_, lean_object* v_motiveBody_x27_1986_){
_start:
{
lean_object* v_discrInfos_1987_; lean_object* v___x_1988_; lean_object* v_addHEqualities_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; size_t v_sz_1998_; size_t v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; 
v_discrInfos_1987_ = lean_ctor_get(v_toMatcherInfo_1979_, 4);
lean_inc_ref(v_discrInfos_1987_);
lean_dec_ref(v_toMatcherInfo_1979_);
v___x_1988_ = lean_unsigned_to_nat(0u);
v_addHEqualities_1989_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0);
v___x_1990_ = lean_array_get_size(v_discrs_x27_1980_);
v___x_1991_ = l_Array_toSubarray___redArg(v_discrs_x27_1980_, v___x_1988_, v___x_1990_);
v___x_1992_ = lean_array_get_size(v_discrInfos_1987_);
v___x_1993_ = l_Array_toSubarray___redArg(v_discrInfos_1987_, v___x_1988_, v___x_1992_);
v___x_1994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1994_, 0, v___x_1991_);
lean_ctor_set(v___x_1994_, 1, v___x_1993_);
v___x_1995_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1995_, 0, v_addHEqualities_1989_);
lean_ctor_set(v___x_1995_, 1, v___x_1994_);
v___x_1996_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1996_, 0, v_addHEqualities_1989_);
lean_ctor_set(v___x_1996_, 1, v___x_1995_);
v___x_1997_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1997_, 0, v_motiveBody_x27_1986_);
lean_ctor_set(v___x_1997_, 1, v___x_1996_);
v_sz_1998_ = lean_array_size(v_motiveArgs_1981_);
v___x_1999_ = ((size_t)0ULL);
v___x_2000_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1982_, v_motiveArgs_1981_, v___f_1983_, v_sz_1998_, v___x_1999_, v___x_1997_);
v___x_2001_ = lean_apply_4(v_toBind_1984_, lean_box(0), lean_box(0), v___x_2000_, v___f_1985_);
return v___x_2001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__17(lean_object* v_onMotive_2002_, lean_object* v_motiveArgs_2003_, lean_object* v_motiveBody_2004_, lean_object* v_toBind_2005_, lean_object* v___f_2006_, lean_object* v_____r_2007_){
_start:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2008_ = lean_apply_2(v_onMotive_2002_, v_motiveArgs_2003_, v_motiveBody_2004_);
v___x_2009_ = lean_apply_4(v_toBind_2005_, lean_box(0), lean_box(0), v___x_2008_, v___f_2006_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__18(lean_object* v___f_2010_, lean_object* v_____r_2011_){
_start:
{
lean_object* v___x_2012_; 
v___x_2012_ = lean_apply_1(v___f_2010_, v_____r_2011_);
return v___x_2012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19(lean_object* v_toPure_2013_, lean_object* v_inst_2014_, lean_object* v_toBind_2015_, lean_object* v_toMatcherInfo_2016_, lean_object* v_discrs_x27_2017_, lean_object* v_inst_2018_, lean_object* v___f_2019_, lean_object* v_onMotive_2020_, lean_object* v_discrs_2021_, lean_object* v_inst_2022_, lean_object* v_motiveArgs_2023_, lean_object* v_motiveBody_2024_){
_start:
{
lean_object* v___f_2025_; lean_object* v___f_2026_; lean_object* v___f_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; uint8_t v___x_2030_; 
lean_inc_ref_n(v_motiveArgs_2023_, 3);
lean_inc_n(v_toBind_2015_, 3);
v___f_2025_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__15), 5, 4);
lean_closure_set(v___f_2025_, 0, v_toPure_2013_);
lean_closure_set(v___f_2025_, 1, v_inst_2014_);
lean_closure_set(v___f_2025_, 2, v_toBind_2015_);
lean_closure_set(v___f_2025_, 3, v_motiveArgs_2023_);
lean_inc_ref(v_inst_2018_);
v___f_2026_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__16), 8, 7);
lean_closure_set(v___f_2026_, 0, v_toMatcherInfo_2016_);
lean_closure_set(v___f_2026_, 1, v_discrs_x27_2017_);
lean_closure_set(v___f_2026_, 2, v_motiveArgs_2023_);
lean_closure_set(v___f_2026_, 3, v_inst_2018_);
lean_closure_set(v___f_2026_, 4, v___f_2019_);
lean_closure_set(v___f_2026_, 5, v_toBind_2015_);
lean_closure_set(v___f_2026_, 6, v___f_2025_);
lean_inc_ref(v___f_2026_);
lean_inc_ref(v_motiveBody_2024_);
lean_inc(v_onMotive_2020_);
v___f_2027_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__17), 6, 5);
lean_closure_set(v___f_2027_, 0, v_onMotive_2020_);
lean_closure_set(v___f_2027_, 1, v_motiveArgs_2023_);
lean_closure_set(v___f_2027_, 2, v_motiveBody_2024_);
lean_closure_set(v___f_2027_, 3, v_toBind_2015_);
lean_closure_set(v___f_2027_, 4, v___f_2026_);
v___x_2028_ = lean_array_get_size(v_motiveArgs_2023_);
v___x_2029_ = lean_array_get_size(v_discrs_2021_);
v___x_2030_ = lean_nat_dec_eq(v___x_2028_, v___x_2029_);
if (v___x_2030_ == 0)
{
lean_object* v___f_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; 
lean_dec_ref(v___f_2026_);
lean_dec_ref(v_motiveBody_2024_);
lean_dec_ref(v_motiveArgs_2023_);
lean_dec(v_onMotive_2020_);
v___f_2031_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__18), 2, 1);
lean_closure_set(v___f_2031_, 0, v___f_2027_);
v___x_2032_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_2033_ = l_Nat_reprFast(v___x_2029_);
v___x_2034_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
v___x_2035_ = l_Lean_MessageData_ofFormat(v___x_2034_);
v___x_2036_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2036_, 0, v___x_2032_);
lean_ctor_set(v___x_2036_, 1, v___x_2035_);
v___x_2037_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_2038_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2038_, 0, v___x_2036_);
lean_ctor_set(v___x_2038_, 1, v___x_2037_);
v___x_2039_ = l_Lean_throwError___redArg(v_inst_2018_, v_inst_2022_, v___x_2038_);
v___x_2040_ = lean_apply_4(v_toBind_2015_, lean_box(0), lean_box(0), v___x_2039_, v___f_2031_);
return v___x_2040_;
}
else
{
lean_object* v___x_2041_; lean_object* v___x_2042_; 
lean_dec_ref(v___f_2027_);
lean_dec_ref(v_inst_2022_);
lean_dec_ref(v_inst_2018_);
v___x_2041_ = lean_box(0);
v___x_2042_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__17(v_onMotive_2020_, v_motiveArgs_2023_, v_motiveBody_2024_, v_toBind_2015_, v___f_2026_, v___x_2041_);
return v___x_2042_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed(lean_object* v_toPure_2043_, lean_object* v_inst_2044_, lean_object* v_toBind_2045_, lean_object* v_toMatcherInfo_2046_, lean_object* v_discrs_x27_2047_, lean_object* v_inst_2048_, lean_object* v___f_2049_, lean_object* v_onMotive_2050_, lean_object* v_discrs_2051_, lean_object* v_inst_2052_, lean_object* v_motiveArgs_2053_, lean_object* v_motiveBody_2054_){
_start:
{
lean_object* v_res_2055_; 
v_res_2055_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__19(v_toPure_2043_, v_inst_2044_, v_toBind_2045_, v_toMatcherInfo_2046_, v_discrs_x27_2047_, v_inst_2048_, v___f_2049_, v_onMotive_2050_, v_discrs_2051_, v_inst_2052_, v_motiveArgs_2053_, v_motiveBody_2054_);
lean_dec_ref(v_discrs_2051_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20(lean_object* v_fst_2056_, lean_object* v_numParams_2057_, lean_object* v_numDiscrs_2058_, lean_object* v_altInfos_2059_, lean_object* v_uElimPos_x3f_2060_, lean_object* v_snd_2061_, lean_object* v_overlaps_2062_, lean_object* v_matcherName_2063_, lean_object* v_matcherLevels_2064_, lean_object* v_params_x27_2065_, lean_object* v_fst_2066_, lean_object* v_discrs_x27_2067_, lean_object* v_fst_2068_, lean_object* v_toPure_2069_, lean_object* v_____do__lift_2070_){
_start:
{
lean_object* v_remaining_x27_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v_remaining_x27_2071_ = l_Array_append___redArg(v_fst_2056_, v_____do__lift_2070_);
v___x_2072_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_2072_, 0, v_numParams_2057_);
lean_ctor_set(v___x_2072_, 1, v_numDiscrs_2058_);
lean_ctor_set(v___x_2072_, 2, v_altInfos_2059_);
lean_ctor_set(v___x_2072_, 3, v_uElimPos_x3f_2060_);
lean_ctor_set(v___x_2072_, 4, v_snd_2061_);
lean_ctor_set(v___x_2072_, 5, v_overlaps_2062_);
v___x_2073_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
lean_ctor_set(v___x_2073_, 1, v_matcherName_2063_);
lean_ctor_set(v___x_2073_, 2, v_matcherLevels_2064_);
lean_ctor_set(v___x_2073_, 3, v_params_x27_2065_);
lean_ctor_set(v___x_2073_, 4, v_fst_2066_);
lean_ctor_set(v___x_2073_, 5, v_discrs_x27_2067_);
lean_ctor_set(v___x_2073_, 6, v_fst_2068_);
lean_ctor_set(v___x_2073_, 7, v_remaining_x27_2071_);
v___x_2074_ = lean_apply_2(v_toPure_2069_, lean_box(0), v___x_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed(lean_object* v_fst_2075_, lean_object* v_numParams_2076_, lean_object* v_numDiscrs_2077_, lean_object* v_altInfos_2078_, lean_object* v_uElimPos_x3f_2079_, lean_object* v_snd_2080_, lean_object* v_overlaps_2081_, lean_object* v_matcherName_2082_, lean_object* v_matcherLevels_2083_, lean_object* v_params_x27_2084_, lean_object* v_fst_2085_, lean_object* v_discrs_x27_2086_, lean_object* v_fst_2087_, lean_object* v_toPure_2088_, lean_object* v_____do__lift_2089_){
_start:
{
lean_object* v_res_2090_; 
v_res_2090_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__20(v_fst_2075_, v_numParams_2076_, v_numDiscrs_2077_, v_altInfos_2078_, v_uElimPos_x3f_2079_, v_snd_2080_, v_overlaps_2081_, v_matcherName_2082_, v_matcherLevels_2083_, v_params_x27_2084_, v_fst_2085_, v_discrs_x27_2086_, v_fst_2087_, v_toPure_2088_, v_____do__lift_2089_);
lean_dec_ref(v_____do__lift_2089_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21(lean_object* v_fst_2091_, lean_object* v_numParams_2092_, lean_object* v_numDiscrs_2093_, lean_object* v_altInfos_2094_, lean_object* v_uElimPos_x3f_2095_, lean_object* v_snd_2096_, lean_object* v_overlaps_2097_, lean_object* v_matcherName_2098_, lean_object* v_matcherLevels_2099_, lean_object* v_params_x27_2100_, lean_object* v_fst_2101_, lean_object* v_discrs_x27_2102_, lean_object* v_toPure_2103_, lean_object* v_onRemaining_2104_, lean_object* v_remaining_2105_, lean_object* v_toBind_2106_, lean_object* v_____s_2107_){
_start:
{
lean_object* v_fst_2108_; lean_object* v___f_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v_fst_2108_ = lean_ctor_get(v_____s_2107_, 0);
lean_inc(v_fst_2108_);
lean_dec_ref(v_____s_2107_);
v___f_2109_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__20___boxed), 15, 14);
lean_closure_set(v___f_2109_, 0, v_fst_2091_);
lean_closure_set(v___f_2109_, 1, v_numParams_2092_);
lean_closure_set(v___f_2109_, 2, v_numDiscrs_2093_);
lean_closure_set(v___f_2109_, 3, v_altInfos_2094_);
lean_closure_set(v___f_2109_, 4, v_uElimPos_x3f_2095_);
lean_closure_set(v___f_2109_, 5, v_snd_2096_);
lean_closure_set(v___f_2109_, 6, v_overlaps_2097_);
lean_closure_set(v___f_2109_, 7, v_matcherName_2098_);
lean_closure_set(v___f_2109_, 8, v_matcherLevels_2099_);
lean_closure_set(v___f_2109_, 9, v_params_x27_2100_);
lean_closure_set(v___f_2109_, 10, v_fst_2101_);
lean_closure_set(v___f_2109_, 11, v_discrs_x27_2102_);
lean_closure_set(v___f_2109_, 12, v_fst_2108_);
lean_closure_set(v___f_2109_, 13, v_toPure_2103_);
v___x_2110_ = lean_apply_1(v_onRemaining_2104_, v_remaining_2105_);
v___x_2111_ = lean_apply_4(v_toBind_2106_, lean_box(0), lean_box(0), v___x_2110_, v___f_2109_);
return v___x_2111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed(lean_object** _args){
lean_object* v_fst_2112_ = _args[0];
lean_object* v_numParams_2113_ = _args[1];
lean_object* v_numDiscrs_2114_ = _args[2];
lean_object* v_altInfos_2115_ = _args[3];
lean_object* v_uElimPos_x3f_2116_ = _args[4];
lean_object* v_snd_2117_ = _args[5];
lean_object* v_overlaps_2118_ = _args[6];
lean_object* v_matcherName_2119_ = _args[7];
lean_object* v_matcherLevels_2120_ = _args[8];
lean_object* v_params_x27_2121_ = _args[9];
lean_object* v_fst_2122_ = _args[10];
lean_object* v_discrs_x27_2123_ = _args[11];
lean_object* v_toPure_2124_ = _args[12];
lean_object* v_onRemaining_2125_ = _args[13];
lean_object* v_remaining_2126_ = _args[14];
lean_object* v_toBind_2127_ = _args[15];
lean_object* v_____s_2128_ = _args[16];
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__21(v_fst_2112_, v_numParams_2113_, v_numDiscrs_2114_, v_altInfos_2115_, v_uElimPos_x3f_2116_, v_snd_2117_, v_overlaps_2118_, v_matcherName_2119_, v_matcherLevels_2120_, v_params_x27_2121_, v_fst_2122_, v_discrs_x27_2123_, v_toPure_2124_, v_onRemaining_2125_, v_remaining_2126_, v_toBind_2127_, v_____s_2128_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22(lean_object* v_toPure_2130_, lean_object* v_next_2131_, lean_object* v_G_2132_, lean_object* v_____do__lift_2133_){
_start:
{
if (lean_obj_tag(v_____do__lift_2133_) == 0)
{
lean_object* v_a_2134_; lean_object* v___x_2135_; 
lean_dec(v_G_2132_);
v_a_2134_ = lean_ctor_get(v_____do__lift_2133_, 0);
lean_inc(v_a_2134_);
lean_dec_ref(v_____do__lift_2133_);
v___x_2135_ = lean_apply_2(v_toPure_2130_, lean_box(0), v_a_2134_);
return v___x_2135_;
}
else
{
lean_object* v_a_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
lean_dec(v_toPure_2130_);
v_a_2136_ = lean_ctor_get(v_____do__lift_2133_, 0);
lean_inc(v_a_2136_);
lean_dec_ref(v_____do__lift_2133_);
v___x_2137_ = lean_unsigned_to_nat(1u);
v___x_2138_ = lean_nat_add(v_next_2131_, v___x_2137_);
v___x_2139_ = lean_apply_4(v_G_2132_, v___x_2138_, v_a_2136_, lean_box(0), lean_box(0));
return v___x_2139_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed(lean_object* v_toPure_2140_, lean_object* v_next_2141_, lean_object* v_G_2142_, lean_object* v_____do__lift_2143_){
_start:
{
lean_object* v_res_2144_; 
v_res_2144_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__22(v_toPure_2140_, v_next_2141_, v_G_2142_, v_____do__lift_2143_);
lean_dec(v_next_2141_);
return v_res_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23(lean_object* v_xs_2145_, lean_object* v_ys4_2146_, uint8_t v___x_2147_, uint8_t v___x_2148_, lean_object* v_inst_2149_, lean_object* v_alt_x27_2150_){
_start:
{
lean_object* v___x_2151_; uint8_t v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2151_ = l_Array_append___redArg(v_xs_2145_, v_ys4_2146_);
v___x_2152_ = 1;
v___x_2153_ = lean_box(v___x_2147_);
v___x_2154_ = lean_box(v___x_2148_);
v___x_2155_ = lean_box(v___x_2147_);
v___x_2156_ = lean_box(v___x_2148_);
v___x_2157_ = lean_box(v___x_2152_);
v___x_2158_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2158_, 0, v___x_2151_);
lean_closure_set(v___x_2158_, 1, v_alt_x27_2150_);
lean_closure_set(v___x_2158_, 2, v___x_2153_);
lean_closure_set(v___x_2158_, 3, v___x_2154_);
lean_closure_set(v___x_2158_, 4, v___x_2155_);
lean_closure_set(v___x_2158_, 5, v___x_2156_);
lean_closure_set(v___x_2158_, 6, v___x_2157_);
v___x_2159_ = lean_apply_2(v_inst_2149_, lean_box(0), v___x_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed(lean_object* v_xs_2160_, lean_object* v_ys4_2161_, lean_object* v___x_2162_, lean_object* v___x_2163_, lean_object* v_inst_2164_, lean_object* v_alt_x27_2165_){
_start:
{
uint8_t v___x_14945__boxed_2166_; uint8_t v___x_14946__boxed_2167_; lean_object* v_res_2168_; 
v___x_14945__boxed_2166_ = lean_unbox(v___x_2162_);
v___x_14946__boxed_2167_ = lean_unbox(v___x_2163_);
v_res_2168_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__23(v_xs_2160_, v_ys4_2161_, v___x_14945__boxed_2166_, v___x_14946__boxed_2167_, v_inst_2164_, v_alt_x27_2165_);
lean_dec_ref(v_ys4_2161_);
return v_res_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__24(lean_object* v_xs_2169_, lean_object* v_remaining_x27_2170_, lean_object* v_ys4_2171_, lean_object* v_onAlt_2172_, lean_object* v_next_2173_, lean_object* v_altType_2174_, lean_object* v_toBind_2175_, lean_object* v___f_2176_, lean_object* v_alt_2177_){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
lean_inc_ref(v_remaining_x27_2170_);
lean_inc_ref(v_xs_2169_);
v___x_2178_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2178_, 0, v_xs_2169_);
lean_ctor_set(v___x_2178_, 1, v_xs_2169_);
lean_ctor_set(v___x_2178_, 2, v_remaining_x27_2170_);
lean_ctor_set(v___x_2178_, 3, v_remaining_x27_2170_);
lean_ctor_set(v___x_2178_, 4, v_ys4_2171_);
v___x_2179_ = lean_apply_4(v_onAlt_2172_, v_next_2173_, v_altType_2174_, v___x_2178_, v_alt_2177_);
v___x_2180_ = lean_apply_4(v_toBind_2175_, lean_box(0), lean_box(0), v___x_2179_, v___f_2176_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__25(lean_object* v___x_2181_, lean_object* v_xs_2182_, lean_object* v_inst_2183_, lean_object* v_toBind_2184_, lean_object* v___f_2185_, lean_object* v_inst_2186_, lean_object* v_inst_2187_, lean_object* v_names_2188_){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
lean_inc_ref(v_xs_2182_);
v___x_2189_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2189_, 0, v___x_2181_);
lean_closure_set(v___x_2189_, 1, v_xs_2182_);
v___x_2190_ = lean_apply_2(v_inst_2183_, lean_box(0), v___x_2189_);
v___x_2191_ = lean_apply_4(v_toBind_2184_, lean_box(0), lean_box(0), v___x_2190_, v___f_2185_);
v___x_2192_ = l_Lean_Meta_MatcherApp_withUserNames___redArg(v_inst_2186_, v_inst_2187_, v_xs_2182_, v_names_2188_, v___x_2191_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26(lean_object* v_xs_2193_, uint8_t v___x_2194_, uint8_t v___x_2195_, lean_object* v_inst_2196_, lean_object* v_remaining_x27_2197_, lean_object* v_onAlt_2198_, lean_object* v_next_2199_, lean_object* v_toBind_2200_, lean_object* v___x_2201_, lean_object* v_inst_2202_, lean_object* v_inst_2203_, lean_object* v___f_2204_, lean_object* v_ys4_2205_, lean_object* v_altType_2206_){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___f_2209_; lean_object* v___f_2210_; lean_object* v___f_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2207_ = lean_box(v___x_2194_);
v___x_2208_ = lean_box(v___x_2195_);
lean_inc(v_inst_2196_);
lean_inc_ref(v_ys4_2205_);
lean_inc_ref_n(v_xs_2193_, 2);
v___f_2209_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__23___boxed), 6, 5);
lean_closure_set(v___f_2209_, 0, v_xs_2193_);
lean_closure_set(v___f_2209_, 1, v_ys4_2205_);
lean_closure_set(v___f_2209_, 2, v___x_2207_);
lean_closure_set(v___f_2209_, 3, v___x_2208_);
lean_closure_set(v___f_2209_, 4, v_inst_2196_);
lean_inc_n(v_toBind_2200_, 2);
v___f_2210_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__24), 9, 8);
lean_closure_set(v___f_2210_, 0, v_xs_2193_);
lean_closure_set(v___f_2210_, 1, v_remaining_x27_2197_);
lean_closure_set(v___f_2210_, 2, v_ys4_2205_);
lean_closure_set(v___f_2210_, 3, v_onAlt_2198_);
lean_closure_set(v___f_2210_, 4, v_next_2199_);
lean_closure_set(v___f_2210_, 5, v_altType_2206_);
lean_closure_set(v___f_2210_, 6, v_toBind_2200_);
lean_closure_set(v___f_2210_, 7, v___f_2209_);
lean_inc_ref(v_inst_2203_);
lean_inc_ref(v_inst_2202_);
lean_inc_ref(v___x_2201_);
v___f_2211_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__25), 8, 7);
lean_closure_set(v___f_2211_, 0, v___x_2201_);
lean_closure_set(v___f_2211_, 1, v_xs_2193_);
lean_closure_set(v___f_2211_, 2, v_inst_2196_);
lean_closure_set(v___f_2211_, 3, v_toBind_2200_);
lean_closure_set(v___f_2211_, 4, v___f_2210_);
lean_closure_set(v___f_2211_, 5, v_inst_2202_);
lean_closure_set(v___f_2211_, 6, v_inst_2203_);
v___x_2212_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_2202_, v_inst_2203_, v___x_2201_, v___f_2204_, v___x_2194_);
v___x_2213_ = lean_apply_4(v_toBind_2200_, lean_box(0), lean_box(0), v___x_2212_, v___f_2211_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed(lean_object* v_xs_2214_, lean_object* v___x_2215_, lean_object* v___x_2216_, lean_object* v_inst_2217_, lean_object* v_remaining_x27_2218_, lean_object* v_onAlt_2219_, lean_object* v_next_2220_, lean_object* v_toBind_2221_, lean_object* v___x_2222_, lean_object* v_inst_2223_, lean_object* v_inst_2224_, lean_object* v___f_2225_, lean_object* v_ys4_2226_, lean_object* v_altType_2227_){
_start:
{
uint8_t v___x_14998__boxed_2228_; uint8_t v___x_14999__boxed_2229_; lean_object* v_res_2230_; 
v___x_14998__boxed_2228_ = lean_unbox(v___x_2215_);
v___x_14999__boxed_2229_ = lean_unbox(v___x_2216_);
v_res_2230_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__26(v_xs_2214_, v___x_14998__boxed_2228_, v___x_14999__boxed_2229_, v_inst_2217_, v_remaining_x27_2218_, v_onAlt_2219_, v_next_2220_, v_toBind_2221_, v___x_2222_, v_inst_2223_, v_inst_2224_, v___f_2225_, v_ys4_2226_, v_altType_2227_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27(uint8_t v___x_2231_, uint8_t v___x_2232_, lean_object* v_inst_2233_, lean_object* v_remaining_x27_2234_, lean_object* v_onAlt_2235_, lean_object* v_next_2236_, lean_object* v_toBind_2237_, lean_object* v___x_2238_, lean_object* v_inst_2239_, lean_object* v_inst_2240_, lean_object* v___f_2241_, lean_object* v_fst_2242_, lean_object* v_xs_2243_, lean_object* v_altType_2244_){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___f_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2245_ = lean_box(v___x_2231_);
v___x_2246_ = lean_box(v___x_2232_);
lean_inc_ref(v_inst_2240_);
lean_inc_ref(v_inst_2239_);
v___f_2247_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__26___boxed), 14, 12);
lean_closure_set(v___f_2247_, 0, v_xs_2243_);
lean_closure_set(v___f_2247_, 1, v___x_2245_);
lean_closure_set(v___f_2247_, 2, v___x_2246_);
lean_closure_set(v___f_2247_, 3, v_inst_2233_);
lean_closure_set(v___f_2247_, 4, v_remaining_x27_2234_);
lean_closure_set(v___f_2247_, 5, v_onAlt_2235_);
lean_closure_set(v___f_2247_, 6, v_next_2236_);
lean_closure_set(v___f_2247_, 7, v_toBind_2237_);
lean_closure_set(v___f_2247_, 8, v___x_2238_);
lean_closure_set(v___f_2247_, 9, v_inst_2239_);
lean_closure_set(v___f_2247_, 10, v_inst_2240_);
lean_closure_set(v___f_2247_, 11, v___f_2241_);
v___x_2248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2248_, 0, v_fst_2242_);
v___x_2249_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2239_, v_inst_2240_, v_altType_2244_, v___x_2248_, v___f_2247_, v___x_2231_, v___x_2231_);
return v___x_2249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed(lean_object* v___x_2250_, lean_object* v___x_2251_, lean_object* v_inst_2252_, lean_object* v_remaining_x27_2253_, lean_object* v_onAlt_2254_, lean_object* v_next_2255_, lean_object* v_toBind_2256_, lean_object* v___x_2257_, lean_object* v_inst_2258_, lean_object* v_inst_2259_, lean_object* v___f_2260_, lean_object* v_fst_2261_, lean_object* v_xs_2262_, lean_object* v_altType_2263_){
_start:
{
uint8_t v___x_15033__boxed_2264_; uint8_t v___x_15034__boxed_2265_; lean_object* v_res_2266_; 
v___x_15033__boxed_2264_ = lean_unbox(v___x_2250_);
v___x_15034__boxed_2265_ = lean_unbox(v___x_2251_);
v_res_2266_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__27(v___x_15033__boxed_2264_, v___x_15034__boxed_2265_, v_inst_2252_, v_remaining_x27_2253_, v_onAlt_2254_, v_next_2255_, v_toBind_2256_, v___x_2257_, v_inst_2258_, v_inst_2259_, v___f_2260_, v_fst_2261_, v_xs_2262_, v_altType_2263_);
return v_res_2266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__28(lean_object* v_fst_2267_, lean_object* v___x_2268_, lean_object* v___x_2269_, lean_object* v___x_2270_, lean_object* v_toPure_2271_, lean_object* v_alt_x27_2272_){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; 
v___x_2273_ = lean_array_push(v_fst_2267_, v_alt_x27_2272_);
v___x_2274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2274_, 0, v___x_2268_);
lean_ctor_set(v___x_2274_, 1, v___x_2269_);
v___x_2275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2275_, 0, v___x_2270_);
lean_ctor_set(v___x_2275_, 1, v___x_2274_);
v___x_2276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2273_);
lean_ctor_set(v___x_2276_, 1, v___x_2275_);
v___x_2277_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2276_);
v___x_2278_ = lean_apply_2(v_toPure_2271_, lean_box(0), v___x_2277_);
return v___x_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29(lean_object* v___x_2279_, lean_object* v_toPure_2280_, lean_object* v_toBind_2281_, lean_object* v___f_2282_, uint8_t v___x_2283_, uint8_t v___x_2284_, lean_object* v_inst_2285_, lean_object* v_remaining_x27_2286_, lean_object* v_onAlt_2287_, lean_object* v_inst_2288_, lean_object* v_inst_2289_, lean_object* v___f_2290_, lean_object* v_fst_2291_, lean_object* v_next_2292_, lean_object* v_acc_2293_, lean_object* v_h_2294_, lean_object* v_G_2295_){
_start:
{
uint8_t v___x_2296_; 
v___x_2296_ = lean_nat_dec_lt(v_next_2292_, v___x_2279_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; 
lean_dec(v_G_2295_);
lean_dec(v_next_2292_);
lean_dec(v_fst_2291_);
lean_dec(v___f_2290_);
lean_dec_ref(v_inst_2289_);
lean_dec_ref(v_inst_2288_);
lean_dec(v_onAlt_2287_);
lean_dec_ref(v_remaining_x27_2286_);
lean_dec(v_inst_2285_);
lean_dec(v___f_2282_);
lean_dec(v_toBind_2281_);
v___x_2297_ = lean_apply_2(v_toPure_2280_, lean_box(0), v_acc_2293_);
return v___x_2297_;
}
else
{
lean_object* v_snd_2298_; lean_object* v_snd_2299_; lean_object* v_snd_2300_; lean_object* v_fst_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2411_; 
v_snd_2298_ = lean_ctor_get(v_acc_2293_, 1);
lean_inc(v_snd_2298_);
v_snd_2299_ = lean_ctor_get(v_snd_2298_, 1);
lean_inc(v_snd_2299_);
v_snd_2300_ = lean_ctor_get(v_snd_2299_, 1);
lean_inc(v_snd_2300_);
v_fst_2301_ = lean_ctor_get(v_acc_2293_, 0);
v_isSharedCheck_2411_ = !lean_is_exclusive(v_acc_2293_);
if (v_isSharedCheck_2411_ == 0)
{
lean_object* v_unused_2412_; 
v_unused_2412_ = lean_ctor_get(v_acc_2293_, 1);
lean_dec(v_unused_2412_);
v___x_2303_ = v_acc_2293_;
v_isShared_2304_ = v_isSharedCheck_2411_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_fst_2301_);
lean_dec(v_acc_2293_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2411_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v_fst_2305_; lean_object* v___x_2307_; uint8_t v_isShared_2308_; uint8_t v_isSharedCheck_2409_; 
v_fst_2305_ = lean_ctor_get(v_snd_2298_, 0);
v_isSharedCheck_2409_ = !lean_is_exclusive(v_snd_2298_);
if (v_isSharedCheck_2409_ == 0)
{
lean_object* v_unused_2410_; 
v_unused_2410_ = lean_ctor_get(v_snd_2298_, 1);
lean_dec(v_unused_2410_);
v___x_2307_ = v_snd_2298_;
v_isShared_2308_ = v_isSharedCheck_2409_;
goto v_resetjp_2306_;
}
else
{
lean_inc(v_fst_2305_);
lean_dec(v_snd_2298_);
v___x_2307_ = lean_box(0);
v_isShared_2308_ = v_isSharedCheck_2409_;
goto v_resetjp_2306_;
}
v_resetjp_2306_:
{
lean_object* v_fst_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2407_; 
v_fst_2309_ = lean_ctor_get(v_snd_2299_, 0);
v_isSharedCheck_2407_ = !lean_is_exclusive(v_snd_2299_);
if (v_isSharedCheck_2407_ == 0)
{
lean_object* v_unused_2408_; 
v_unused_2408_ = lean_ctor_get(v_snd_2299_, 1);
lean_dec(v_unused_2408_);
v___x_2311_ = v_snd_2299_;
v_isShared_2312_ = v_isSharedCheck_2407_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_fst_2309_);
lean_dec(v_snd_2299_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2407_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v_array_2313_; lean_object* v_start_2314_; lean_object* v_stop_2315_; lean_object* v___f_2316_; lean_object* v___y_2318_; uint8_t v___x_2321_; 
v_array_2313_ = lean_ctor_get(v_snd_2300_, 0);
v_start_2314_ = lean_ctor_get(v_snd_2300_, 1);
v_stop_2315_ = lean_ctor_get(v_snd_2300_, 2);
lean_inc(v_next_2292_);
lean_inc(v_toPure_2280_);
v___f_2316_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__22___boxed), 4, 3);
lean_closure_set(v___f_2316_, 0, v_toPure_2280_);
lean_closure_set(v___f_2316_, 1, v_next_2292_);
lean_closure_set(v___f_2316_, 2, v_G_2295_);
v___x_2321_ = lean_nat_dec_lt(v_start_2314_, v_stop_2315_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2323_; 
lean_dec(v_next_2292_);
lean_dec(v_fst_2291_);
lean_dec(v___f_2290_);
lean_dec_ref(v_inst_2289_);
lean_dec_ref(v_inst_2288_);
lean_dec(v_onAlt_2287_);
lean_dec_ref(v_remaining_x27_2286_);
lean_dec(v_inst_2285_);
if (v_isShared_2312_ == 0)
{
v___x_2323_ = v___x_2311_;
goto v_reusejp_2322_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_fst_2309_);
lean_ctor_set(v_reuseFailAlloc_2332_, 1, v_snd_2300_);
v___x_2323_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2322_;
}
v_reusejp_2322_:
{
lean_object* v___x_2325_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 1, v___x_2323_);
v___x_2325_ = v___x_2307_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_fst_2305_);
lean_ctor_set(v_reuseFailAlloc_2331_, 1, v___x_2323_);
v___x_2325_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
lean_object* v___x_2327_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 1, v___x_2325_);
v___x_2327_ = v___x_2303_;
goto v_reusejp_2326_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_fst_2301_);
lean_ctor_set(v_reuseFailAlloc_2330_, 1, v___x_2325_);
v___x_2327_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2326_;
}
v_reusejp_2326_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2328_, 0, v___x_2327_);
v___x_2329_ = lean_apply_2(v_toPure_2280_, lean_box(0), v___x_2328_);
v___y_2318_ = v___x_2329_;
goto v___jp_2317_;
}
}
}
}
else
{
lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2403_; 
lean_inc(v_stop_2315_);
lean_inc(v_start_2314_);
lean_inc_ref(v_array_2313_);
v_isSharedCheck_2403_ = !lean_is_exclusive(v_snd_2300_);
if (v_isSharedCheck_2403_ == 0)
{
lean_object* v_unused_2404_; lean_object* v_unused_2405_; lean_object* v_unused_2406_; 
v_unused_2404_ = lean_ctor_get(v_snd_2300_, 2);
lean_dec(v_unused_2404_);
v_unused_2405_ = lean_ctor_get(v_snd_2300_, 1);
lean_dec(v_unused_2405_);
v_unused_2406_ = lean_ctor_get(v_snd_2300_, 0);
lean_dec(v_unused_2406_);
v___x_2334_ = v_snd_2300_;
v_isShared_2335_ = v_isSharedCheck_2403_;
goto v_resetjp_2333_;
}
else
{
lean_dec(v_snd_2300_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2403_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v_array_2336_; lean_object* v_start_2337_; lean_object* v_stop_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2343_; 
v_array_2336_ = lean_ctor_get(v_fst_2309_, 0);
v_start_2337_ = lean_ctor_get(v_fst_2309_, 1);
v_stop_2338_ = lean_ctor_get(v_fst_2309_, 2);
v___x_2339_ = lean_array_fget(v_array_2313_, v_start_2314_);
v___x_2340_ = lean_unsigned_to_nat(1u);
v___x_2341_ = lean_nat_add(v_start_2314_, v___x_2340_);
lean_dec(v_start_2314_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v___x_2341_);
v___x_2343_ = v___x_2334_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2402_; 
v_reuseFailAlloc_2402_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2402_, 0, v_array_2313_);
lean_ctor_set(v_reuseFailAlloc_2402_, 1, v___x_2341_);
lean_ctor_set(v_reuseFailAlloc_2402_, 2, v_stop_2315_);
v___x_2343_ = v_reuseFailAlloc_2402_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
uint8_t v___x_2344_; 
v___x_2344_ = lean_nat_dec_lt(v_start_2337_, v_stop_2338_);
if (v___x_2344_ == 0)
{
lean_object* v___x_2346_; 
lean_dec(v___x_2339_);
lean_dec(v_next_2292_);
lean_dec(v_fst_2291_);
lean_dec(v___f_2290_);
lean_dec_ref(v_inst_2289_);
lean_dec_ref(v_inst_2288_);
lean_dec(v_onAlt_2287_);
lean_dec_ref(v_remaining_x27_2286_);
lean_dec(v_inst_2285_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 1, v___x_2343_);
v___x_2346_ = v___x_2311_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_fst_2309_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v___x_2343_);
v___x_2346_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2348_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 1, v___x_2346_);
v___x_2348_ = v___x_2307_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2354_; 
v_reuseFailAlloc_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2354_, 0, v_fst_2305_);
lean_ctor_set(v_reuseFailAlloc_2354_, 1, v___x_2346_);
v___x_2348_ = v_reuseFailAlloc_2354_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
lean_object* v___x_2350_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 1, v___x_2348_);
v___x_2350_ = v___x_2303_;
goto v_reusejp_2349_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_fst_2301_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v___x_2348_);
v___x_2350_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2349_;
}
v_reusejp_2349_:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
v___x_2352_ = lean_apply_2(v_toPure_2280_, lean_box(0), v___x_2351_);
v___y_2318_ = v___x_2352_;
goto v___jp_2317_;
}
}
}
}
else
{
lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2398_; 
lean_inc(v_stop_2338_);
lean_inc(v_start_2337_);
lean_inc_ref(v_array_2336_);
v_isSharedCheck_2398_ = !lean_is_exclusive(v_fst_2309_);
if (v_isSharedCheck_2398_ == 0)
{
lean_object* v_unused_2399_; lean_object* v_unused_2400_; lean_object* v_unused_2401_; 
v_unused_2399_ = lean_ctor_get(v_fst_2309_, 2);
lean_dec(v_unused_2399_);
v_unused_2400_ = lean_ctor_get(v_fst_2309_, 1);
lean_dec(v_unused_2400_);
v_unused_2401_ = lean_ctor_get(v_fst_2309_, 0);
lean_dec(v_unused_2401_);
v___x_2357_ = v_fst_2309_;
v_isShared_2358_ = v_isSharedCheck_2398_;
goto v_resetjp_2356_;
}
else
{
lean_dec(v_fst_2309_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2398_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v_array_2359_; lean_object* v_start_2360_; lean_object* v_stop_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2365_; 
v_array_2359_ = lean_ctor_get(v_fst_2305_, 0);
v_start_2360_ = lean_ctor_get(v_fst_2305_, 1);
v_stop_2361_ = lean_ctor_get(v_fst_2305_, 2);
v___x_2362_ = lean_array_fget(v_array_2336_, v_start_2337_);
v___x_2363_ = lean_nat_add(v_start_2337_, v___x_2340_);
lean_dec(v_start_2337_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 1, v___x_2363_);
v___x_2365_ = v___x_2357_;
goto v_reusejp_2364_;
}
else
{
lean_object* v_reuseFailAlloc_2397_; 
v_reuseFailAlloc_2397_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2397_, 0, v_array_2336_);
lean_ctor_set(v_reuseFailAlloc_2397_, 1, v___x_2363_);
lean_ctor_set(v_reuseFailAlloc_2397_, 2, v_stop_2338_);
v___x_2365_ = v_reuseFailAlloc_2397_;
goto v_reusejp_2364_;
}
v_reusejp_2364_:
{
uint8_t v___x_2366_; 
v___x_2366_ = lean_nat_dec_lt(v_start_2360_, v_stop_2361_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2368_; 
lean_dec(v___x_2362_);
lean_dec(v___x_2339_);
lean_dec(v_next_2292_);
lean_dec(v_fst_2291_);
lean_dec(v___f_2290_);
lean_dec_ref(v_inst_2289_);
lean_dec_ref(v_inst_2288_);
lean_dec(v_onAlt_2287_);
lean_dec_ref(v_remaining_x27_2286_);
lean_dec(v_inst_2285_);
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 1, v___x_2343_);
lean_ctor_set(v___x_2311_, 0, v___x_2365_);
v___x_2368_ = v___x_2311_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2365_);
lean_ctor_set(v_reuseFailAlloc_2377_, 1, v___x_2343_);
v___x_2368_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
lean_object* v___x_2370_; 
if (v_isShared_2308_ == 0)
{
lean_ctor_set(v___x_2307_, 1, v___x_2368_);
v___x_2370_ = v___x_2307_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v_fst_2305_);
lean_ctor_set(v_reuseFailAlloc_2376_, 1, v___x_2368_);
v___x_2370_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
lean_object* v___x_2372_; 
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 1, v___x_2370_);
v___x_2372_ = v___x_2303_;
goto v_reusejp_2371_;
}
else
{
lean_object* v_reuseFailAlloc_2375_; 
v_reuseFailAlloc_2375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2375_, 0, v_fst_2301_);
lean_ctor_set(v_reuseFailAlloc_2375_, 1, v___x_2370_);
v___x_2372_ = v_reuseFailAlloc_2375_;
goto v_reusejp_2371_;
}
v_reusejp_2371_:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; 
v___x_2373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2373_, 0, v___x_2372_);
v___x_2374_ = lean_apply_2(v_toPure_2280_, lean_box(0), v___x_2373_);
v___y_2318_ = v___x_2374_;
goto v___jp_2317_;
}
}
}
}
else
{
lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2393_; 
lean_inc(v_stop_2361_);
lean_inc(v_start_2360_);
lean_inc_ref(v_array_2359_);
lean_del_object(v___x_2311_);
lean_del_object(v___x_2307_);
lean_del_object(v___x_2303_);
v_isSharedCheck_2393_ = !lean_is_exclusive(v_fst_2305_);
if (v_isSharedCheck_2393_ == 0)
{
lean_object* v_unused_2394_; lean_object* v_unused_2395_; lean_object* v_unused_2396_; 
v_unused_2394_ = lean_ctor_get(v_fst_2305_, 2);
lean_dec(v_unused_2394_);
v_unused_2395_ = lean_ctor_get(v_fst_2305_, 1);
lean_dec(v_unused_2395_);
v_unused_2396_ = lean_ctor_get(v_fst_2305_, 0);
lean_dec(v_unused_2396_);
v___x_2379_ = v_fst_2305_;
v_isShared_2380_ = v_isSharedCheck_2393_;
goto v_resetjp_2378_;
}
else
{
lean_dec(v_fst_2305_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2393_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___f_2384_; lean_object* v___x_2385_; lean_object* v___x_2387_; 
v___x_2381_ = lean_array_fget_borrowed(v_array_2359_, v_start_2360_);
v___x_2382_ = lean_box(v___x_2283_);
v___x_2383_ = lean_box(v___x_2284_);
lean_inc_ref(v_inst_2289_);
lean_inc_ref(v_inst_2288_);
lean_inc(v___x_2381_);
lean_inc(v_toBind_2281_);
v___f_2384_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__27___boxed), 14, 12);
lean_closure_set(v___f_2384_, 0, v___x_2382_);
lean_closure_set(v___f_2384_, 1, v___x_2383_);
lean_closure_set(v___f_2384_, 2, v_inst_2285_);
lean_closure_set(v___f_2384_, 3, v_remaining_x27_2286_);
lean_closure_set(v___f_2384_, 4, v_onAlt_2287_);
lean_closure_set(v___f_2384_, 5, v_next_2292_);
lean_closure_set(v___f_2384_, 6, v_toBind_2281_);
lean_closure_set(v___f_2384_, 7, v___x_2381_);
lean_closure_set(v___f_2384_, 8, v_inst_2288_);
lean_closure_set(v___f_2384_, 9, v_inst_2289_);
lean_closure_set(v___f_2384_, 10, v___f_2290_);
lean_closure_set(v___f_2384_, 11, v_fst_2291_);
v___x_2385_ = lean_nat_add(v_start_2360_, v___x_2340_);
lean_dec(v_start_2360_);
if (v_isShared_2380_ == 0)
{
lean_ctor_set(v___x_2379_, 1, v___x_2385_);
v___x_2387_ = v___x_2379_;
goto v_reusejp_2386_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_array_2359_);
lean_ctor_set(v_reuseFailAlloc_2392_, 1, v___x_2385_);
lean_ctor_set(v_reuseFailAlloc_2392_, 2, v_stop_2361_);
v___x_2387_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2386_;
}
v_reusejp_2386_:
{
lean_object* v___f_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___f_2388_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__28), 6, 5);
lean_closure_set(v___f_2388_, 0, v_fst_2301_);
lean_closure_set(v___f_2388_, 1, v___x_2365_);
lean_closure_set(v___f_2388_, 2, v___x_2343_);
lean_closure_set(v___f_2388_, 3, v___x_2387_);
lean_closure_set(v___f_2388_, 4, v_toPure_2280_);
v___x_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2389_, 0, v___x_2362_);
v___x_2390_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2288_, v_inst_2289_, v___x_2339_, v___x_2389_, v___f_2384_, v___x_2283_, v___x_2283_);
lean_inc(v_toBind_2281_);
v___x_2391_ = lean_apply_4(v_toBind_2281_, lean_box(0), lean_box(0), v___x_2390_, v___f_2388_);
v___y_2318_ = v___x_2391_;
goto v___jp_2317_;
}
}
}
}
}
}
}
}
}
v___jp_2317_:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
lean_inc(v_toBind_2281_);
v___x_2319_ = lean_apply_4(v_toBind_2281_, lean_box(0), lean_box(0), v___y_2318_, v___f_2282_);
v___x_2320_ = lean_apply_4(v_toBind_2281_, lean_box(0), lean_box(0), v___x_2319_, v___f_2316_);
return v___x_2320_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed(lean_object** _args){
lean_object* v___x_2413_ = _args[0];
lean_object* v_toPure_2414_ = _args[1];
lean_object* v_toBind_2415_ = _args[2];
lean_object* v___f_2416_ = _args[3];
lean_object* v___x_2417_ = _args[4];
lean_object* v___x_2418_ = _args[5];
lean_object* v_inst_2419_ = _args[6];
lean_object* v_remaining_x27_2420_ = _args[7];
lean_object* v_onAlt_2421_ = _args[8];
lean_object* v_inst_2422_ = _args[9];
lean_object* v_inst_2423_ = _args[10];
lean_object* v___f_2424_ = _args[11];
lean_object* v_fst_2425_ = _args[12];
lean_object* v_next_2426_ = _args[13];
lean_object* v_acc_2427_ = _args[14];
lean_object* v_h_2428_ = _args[15];
lean_object* v_G_2429_ = _args[16];
_start:
{
uint8_t v___x_15084__boxed_2430_; uint8_t v___x_15085__boxed_2431_; lean_object* v_res_2432_; 
v___x_15084__boxed_2430_ = lean_unbox(v___x_2417_);
v___x_15085__boxed_2431_ = lean_unbox(v___x_2418_);
v_res_2432_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__29(v___x_2413_, v_toPure_2414_, v_toBind_2415_, v___f_2416_, v___x_15084__boxed_2430_, v___x_15085__boxed_2431_, v_inst_2419_, v_remaining_x27_2420_, v_onAlt_2421_, v_inst_2422_, v_inst_2423_, v___f_2424_, v_fst_2425_, v_next_2426_, v_acc_2427_, v_h_2428_, v_G_2429_);
lean_dec(v___x_2413_);
return v_res_2432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__30(lean_object* v_matcherApp_2433_, lean_object* v_alts_2434_, lean_object* v___x_2435_, lean_object* v___x_2436_, lean_object* v_remaining_x27_2437_, lean_object* v___f_2438_, lean_object* v_toBind_2439_, lean_object* v___f_2440_, lean_object* v_altTypes_2441_){
_start:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2442_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_2433_);
v___x_2443_ = lean_array_get_size(v___x_2442_);
v___x_2444_ = lean_array_get_size(v_altTypes_2441_);
lean_inc_n(v___x_2435_, 3);
v___x_2445_ = l_Array_toSubarray___redArg(v_alts_2434_, v___x_2435_, v___x_2436_);
v___x_2446_ = l_Array_toSubarray___redArg(v___x_2442_, v___x_2435_, v___x_2443_);
v___x_2447_ = l_Array_toSubarray___redArg(v_altTypes_2441_, v___x_2435_, v___x_2444_);
v___x_2448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2448_, 0, v___x_2446_);
lean_ctor_set(v___x_2448_, 1, v___x_2447_);
v___x_2449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2449_, 0, v___x_2445_);
lean_ctor_set(v___x_2449_, 1, v___x_2448_);
v___x_2450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2450_, 0, v_remaining_x27_2437_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2438_, v___x_2435_, v___x_2450_, lean_box(0));
v___x_2452_ = lean_apply_4(v_toBind_2439_, lean_box(0), lean_box(0), v___x_2451_, v___f_2440_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31(lean_object* v_alts_2453_, lean_object* v_toPure_2454_, lean_object* v_toBind_2455_, lean_object* v___f_2456_, uint8_t v___x_2457_, uint8_t v___x_2458_, lean_object* v_inst_2459_, lean_object* v_remaining_x27_2460_, lean_object* v_onAlt_2461_, lean_object* v_inst_2462_, lean_object* v_inst_2463_, lean_object* v___f_2464_, lean_object* v_fst_2465_, lean_object* v_matcherApp_2466_, lean_object* v___x_2467_, lean_object* v___f_2468_, lean_object* v_aux_2469_, lean_object* v_____r_2470_){
_start:
{
lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___f_2474_; lean_object* v___f_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2471_ = lean_array_get_size(v_alts_2453_);
v___x_2472_ = lean_box(v___x_2457_);
v___x_2473_ = lean_box(v___x_2458_);
lean_inc_ref(v_remaining_x27_2460_);
lean_inc(v_inst_2459_);
lean_inc_n(v_toBind_2455_, 2);
v___f_2474_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__29___boxed), 17, 13);
lean_closure_set(v___f_2474_, 0, v___x_2471_);
lean_closure_set(v___f_2474_, 1, v_toPure_2454_);
lean_closure_set(v___f_2474_, 2, v_toBind_2455_);
lean_closure_set(v___f_2474_, 3, v___f_2456_);
lean_closure_set(v___f_2474_, 4, v___x_2472_);
lean_closure_set(v___f_2474_, 5, v___x_2473_);
lean_closure_set(v___f_2474_, 6, v_inst_2459_);
lean_closure_set(v___f_2474_, 7, v_remaining_x27_2460_);
lean_closure_set(v___f_2474_, 8, v_onAlt_2461_);
lean_closure_set(v___f_2474_, 9, v_inst_2462_);
lean_closure_set(v___f_2474_, 10, v_inst_2463_);
lean_closure_set(v___f_2474_, 11, v___f_2464_);
lean_closure_set(v___f_2474_, 12, v_fst_2465_);
v___f_2475_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__30), 9, 8);
lean_closure_set(v___f_2475_, 0, v_matcherApp_2466_);
lean_closure_set(v___f_2475_, 1, v_alts_2453_);
lean_closure_set(v___f_2475_, 2, v___x_2467_);
lean_closure_set(v___f_2475_, 3, v___x_2471_);
lean_closure_set(v___f_2475_, 4, v_remaining_x27_2460_);
lean_closure_set(v___f_2475_, 5, v___f_2474_);
lean_closure_set(v___f_2475_, 6, v_toBind_2455_);
lean_closure_set(v___f_2475_, 7, v___f_2468_);
v___x_2476_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_2476_, 0, v___x_2471_);
lean_closure_set(v___x_2476_, 1, v_aux_2469_);
v___x_2477_ = lean_apply_2(v_inst_2459_, lean_box(0), v___x_2476_);
v___x_2478_ = lean_apply_4(v_toBind_2455_, lean_box(0), lean_box(0), v___x_2477_, v___f_2475_);
return v___x_2478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed(lean_object** _args){
lean_object* v_alts_2479_ = _args[0];
lean_object* v_toPure_2480_ = _args[1];
lean_object* v_toBind_2481_ = _args[2];
lean_object* v___f_2482_ = _args[3];
lean_object* v___x_2483_ = _args[4];
lean_object* v___x_2484_ = _args[5];
lean_object* v_inst_2485_ = _args[6];
lean_object* v_remaining_x27_2486_ = _args[7];
lean_object* v_onAlt_2487_ = _args[8];
lean_object* v_inst_2488_ = _args[9];
lean_object* v_inst_2489_ = _args[10];
lean_object* v___f_2490_ = _args[11];
lean_object* v_fst_2491_ = _args[12];
lean_object* v_matcherApp_2492_ = _args[13];
lean_object* v___x_2493_ = _args[14];
lean_object* v___f_2494_ = _args[15];
lean_object* v_aux_2495_ = _args[16];
lean_object* v_____r_2496_ = _args[17];
_start:
{
uint8_t v___x_15341__boxed_2497_; uint8_t v___x_15342__boxed_2498_; lean_object* v_res_2499_; 
v___x_15341__boxed_2497_ = lean_unbox(v___x_2483_);
v___x_15342__boxed_2498_ = lean_unbox(v___x_2484_);
v_res_2499_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__31(v_alts_2479_, v_toPure_2480_, v_toBind_2481_, v___f_2482_, v___x_15341__boxed_2497_, v___x_15342__boxed_2498_, v_inst_2485_, v_remaining_x27_2486_, v_onAlt_2487_, v_inst_2488_, v_inst_2489_, v___f_2490_, v_fst_2491_, v_matcherApp_2492_, v___x_2493_, v___f_2494_, v_aux_2495_, v_____r_2496_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__32(lean_object* v___x_2500_, lean_object* v_e_2501_){
_start:
{
lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2502_ = l_Lean_indentD(v_e_2501_);
v___x_2503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2500_);
lean_ctor_set(v___x_2503_, 1, v___x_2502_);
return v___x_2503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33(lean_object* v___x_2504_, lean_object* v___f_2505_, lean_object* v_runInBase_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = lean_apply_2(v_runInBase_2506_, lean_box(0), v___x_2504_);
v___x_2513_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2512_, v___f_2505_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_);
return v___x_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed(lean_object* v___x_2514_, lean_object* v___f_2515_, lean_object* v_runInBase_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__33(v___x_2514_, v___f_2515_, v_runInBase_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_);
lean_dec(v___y_2520_);
lean_dec_ref(v___y_2519_);
lean_dec(v___y_2518_);
lean_dec_ref(v___y_2517_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34(lean_object* v_toPure_2523_, lean_object* v_next_2524_, lean_object* v_G_2525_, lean_object* v_____do__lift_2526_){
_start:
{
if (lean_obj_tag(v_____do__lift_2526_) == 0)
{
lean_object* v_a_2527_; lean_object* v___x_2528_; 
lean_dec(v_G_2525_);
v_a_2527_ = lean_ctor_get(v_____do__lift_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref(v_____do__lift_2526_);
v___x_2528_ = lean_apply_2(v_toPure_2523_, lean_box(0), v_a_2527_);
return v___x_2528_;
}
else
{
lean_object* v_a_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
lean_dec(v_toPure_2523_);
v_a_2529_ = lean_ctor_get(v_____do__lift_2526_, 0);
lean_inc(v_a_2529_);
lean_dec_ref(v_____do__lift_2526_);
v___x_2530_ = lean_unsigned_to_nat(1u);
v___x_2531_ = lean_nat_add(v_next_2524_, v___x_2530_);
v___x_2532_ = lean_apply_4(v_G_2525_, v___x_2531_, v_a_2529_, lean_box(0), lean_box(0));
return v___x_2532_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed(lean_object* v_toPure_2533_, lean_object* v_next_2534_, lean_object* v_G_2535_, lean_object* v_____do__lift_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__34(v_toPure_2533_, v_next_2534_, v_G_2535_, v_____do__lift_2536_);
lean_dec(v_next_2534_);
return v_res_2537_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__0(void){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_mk_string_unchecked("Function", 8, 8);
return v___x_2538_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__1(void){
_start:
{
lean_object* v___x_2539_; 
v___x_2539_ = lean_mk_string_unchecked("const", 5, 5);
return v___x_2539_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2(void){
_start:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2540_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__1);
v___x_2541_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__0);
v___x_2542_ = l_Lean_Name_mkStr2(v___x_2541_, v___x_2540_);
return v___x_2542_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3(void){
_start:
{
lean_object* v___x_2543_; 
v___x_2543_ = lean_mk_string_unchecked("Unit", 4, 4);
return v___x_2543_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__4(void){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2544_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3);
v___x_2545_ = l_Lean_Name_mkStr1(v___x_2544_);
return v___x_2545_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__5(void){
_start:
{
lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; 
v___x_2546_ = lean_box(0);
v___x_2547_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__4, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__4);
v___x_2548_ = l_Lean_mkConst(v___x_2547_, v___x_2546_);
return v___x_2548_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6(void){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; 
v___x_2549_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__5);
v___x_2550_ = lean_unsigned_to_nat(2u);
v___x_2551_ = lean_mk_empty_array_with_capacity(v___x_2550_);
v___x_2552_ = lean_array_push(v___x_2551_, v___x_2549_);
return v___x_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35(lean_object* v___x_2553_, lean_object* v_toPure_2554_, lean_object* v_inst_2555_, lean_object* v_alt_x27_2556_){
_start:
{
uint8_t v_hasUnitThunk_2557_; 
v_hasUnitThunk_2557_ = lean_ctor_get_uint8(v___x_2553_, sizeof(void*)*2);
if (v_hasUnitThunk_2557_ == 0)
{
lean_object* v___x_2558_; 
lean_dec(v_inst_2555_);
v___x_2558_ = lean_apply_2(v_toPure_2554_, lean_box(0), v_alt_x27_2556_);
return v___x_2558_;
}
else
{
lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
lean_dec(v_toPure_2554_);
v___x_2559_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2);
v___x_2560_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6);
v___x_2561_ = lean_array_push(v___x_2560_, v_alt_x27_2556_);
v___x_2562_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAppM___boxed), 7, 2);
lean_closure_set(v___x_2562_, 0, v___x_2559_);
lean_closure_set(v___x_2562_, 1, v___x_2561_);
v___x_2563_ = lean_apply_2(v_inst_2555_, lean_box(0), v___x_2562_);
return v___x_2563_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed(lean_object* v___x_2564_, lean_object* v_toPure_2565_, lean_object* v_inst_2566_, lean_object* v_alt_x27_2567_){
_start:
{
lean_object* v_res_2568_; 
v_res_2568_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__35(v___x_2564_, v_toPure_2565_, v_inst_2566_, v_alt_x27_2567_);
lean_dec_ref(v___x_2564_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36(lean_object* v_ys_2569_, lean_object* v_ys2_2570_, lean_object* v_ys3_2571_, lean_object* v_ys4_2572_, uint8_t v___x_2573_, uint8_t v_useSplitter_2574_, lean_object* v_inst_2575_, lean_object* v_alt_x27_2576_){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; uint8_t v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; 
v___x_2577_ = l_Array_append___redArg(v_ys_2569_, v_ys2_2570_);
v___x_2578_ = l_Array_append___redArg(v___x_2577_, v_ys3_2571_);
v___x_2579_ = l_Array_append___redArg(v___x_2578_, v_ys4_2572_);
v___x_2580_ = 1;
v___x_2581_ = lean_box(v___x_2573_);
v___x_2582_ = lean_box(v_useSplitter_2574_);
v___x_2583_ = lean_box(v___x_2573_);
v___x_2584_ = lean_box(v_useSplitter_2574_);
v___x_2585_ = lean_box(v___x_2580_);
v___x_2586_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2586_, 0, v___x_2579_);
lean_closure_set(v___x_2586_, 1, v_alt_x27_2576_);
lean_closure_set(v___x_2586_, 2, v___x_2581_);
lean_closure_set(v___x_2586_, 3, v___x_2582_);
lean_closure_set(v___x_2586_, 4, v___x_2583_);
lean_closure_set(v___x_2586_, 5, v___x_2584_);
lean_closure_set(v___x_2586_, 6, v___x_2585_);
v___x_2587_ = lean_apply_2(v_inst_2575_, lean_box(0), v___x_2586_);
return v___x_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed(lean_object* v_ys_2588_, lean_object* v_ys2_2589_, lean_object* v_ys3_2590_, lean_object* v_ys4_2591_, lean_object* v___x_2592_, lean_object* v_useSplitter_2593_, lean_object* v_inst_2594_, lean_object* v_alt_x27_2595_){
_start:
{
uint8_t v___x_15495__boxed_2596_; uint8_t v_useSplitter_boxed_2597_; lean_object* v_res_2598_; 
v___x_15495__boxed_2596_ = lean_unbox(v___x_2592_);
v_useSplitter_boxed_2597_ = lean_unbox(v_useSplitter_2593_);
v_res_2598_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__36(v_ys_2588_, v_ys2_2589_, v_ys3_2590_, v_ys4_2591_, v___x_15495__boxed_2596_, v_useSplitter_boxed_2597_, v_inst_2594_, v_alt_x27_2595_);
lean_dec_ref(v_ys4_2591_);
lean_dec_ref(v_ys3_2590_);
lean_dec_ref(v_ys2_2589_);
return v_res_2598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__37(lean_object* v_args_2599_, lean_object* v_ys_2600_, lean_object* v_ys2_2601_, lean_object* v_ys3_2602_, lean_object* v_ys4_2603_, lean_object* v_onAlt_2604_, lean_object* v_next_2605_, lean_object* v_altType_2606_, lean_object* v_toBind_2607_, lean_object* v___f_2608_, lean_object* v_alt_2609_){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2610_, 0, v_args_2599_);
lean_ctor_set(v___x_2610_, 1, v_ys_2600_);
lean_ctor_set(v___x_2610_, 2, v_ys2_2601_);
lean_ctor_set(v___x_2610_, 3, v_ys3_2602_);
lean_ctor_set(v___x_2610_, 4, v_ys4_2603_);
v___x_2611_ = lean_apply_4(v_onAlt_2604_, v_next_2605_, v_altType_2606_, v___x_2610_, v_alt_2609_);
v___x_2612_ = lean_apply_4(v_toBind_2607_, lean_box(0), lean_box(0), v___x_2611_, v___f_2608_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38(lean_object* v_inst_2613_, lean_object* v_ys_2614_, lean_object* v_ys2_2615_, lean_object* v_ys3_2616_, uint8_t v___x_2617_, uint8_t v_useSplitter_2618_, lean_object* v_inst_2619_, lean_object* v_args_2620_, lean_object* v_onAlt_2621_, lean_object* v_next_2622_, lean_object* v_toBind_2623_, lean_object* v___x_2624_, lean_object* v___f_2625_, lean_object* v_ys4_2626_, lean_object* v_altType_2627_){
_start:
{
lean_object* v_toMonadExceptOf_2628_; lean_object* v_tryCatch_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___f_2632_; lean_object* v___f_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; 
v_toMonadExceptOf_2628_ = lean_ctor_get(v_inst_2613_, 0);
lean_inc_ref(v_toMonadExceptOf_2628_);
lean_dec_ref(v_inst_2613_);
v_tryCatch_2629_ = lean_ctor_get(v_toMonadExceptOf_2628_, 1);
lean_inc(v_tryCatch_2629_);
lean_dec_ref(v_toMonadExceptOf_2628_);
v___x_2630_ = lean_box(v___x_2617_);
v___x_2631_ = lean_box(v_useSplitter_2618_);
lean_inc(v_inst_2619_);
lean_inc_ref(v_ys4_2626_);
lean_inc_ref_n(v_ys3_2616_, 2);
lean_inc_ref(v_ys2_2615_);
lean_inc_ref(v_ys_2614_);
v___f_2632_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__36___boxed), 8, 7);
lean_closure_set(v___f_2632_, 0, v_ys_2614_);
lean_closure_set(v___f_2632_, 1, v_ys2_2615_);
lean_closure_set(v___f_2632_, 2, v_ys3_2616_);
lean_closure_set(v___f_2632_, 3, v_ys4_2626_);
lean_closure_set(v___f_2632_, 4, v___x_2630_);
lean_closure_set(v___f_2632_, 5, v___x_2631_);
lean_closure_set(v___f_2632_, 6, v_inst_2619_);
lean_inc(v_toBind_2623_);
lean_inc_ref(v_args_2620_);
v___f_2633_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__37), 11, 10);
lean_closure_set(v___f_2633_, 0, v_args_2620_);
lean_closure_set(v___f_2633_, 1, v_ys_2614_);
lean_closure_set(v___f_2633_, 2, v_ys2_2615_);
lean_closure_set(v___f_2633_, 3, v_ys3_2616_);
lean_closure_set(v___f_2633_, 4, v_ys4_2626_);
lean_closure_set(v___f_2633_, 5, v_onAlt_2621_);
lean_closure_set(v___f_2633_, 6, v_next_2622_);
lean_closure_set(v___f_2633_, 7, v_altType_2627_);
lean_closure_set(v___f_2633_, 8, v_toBind_2623_);
lean_closure_set(v___f_2633_, 9, v___f_2632_);
v___x_2634_ = l_Array_append___redArg(v_args_2620_, v_ys3_2616_);
lean_dec_ref(v_ys3_2616_);
v___x_2635_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateLambda___boxed), 7, 2);
lean_closure_set(v___x_2635_, 0, v___x_2624_);
lean_closure_set(v___x_2635_, 1, v___x_2634_);
v___x_2636_ = lean_apply_2(v_inst_2619_, lean_box(0), v___x_2635_);
v___x_2637_ = lean_apply_3(v_tryCatch_2629_, lean_box(0), v___x_2636_, v___f_2625_);
v___x_2638_ = lean_apply_4(v_toBind_2623_, lean_box(0), lean_box(0), v___x_2637_, v___f_2633_);
return v___x_2638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed(lean_object* v_inst_2639_, lean_object* v_ys_2640_, lean_object* v_ys2_2641_, lean_object* v_ys3_2642_, lean_object* v___x_2643_, lean_object* v_useSplitter_2644_, lean_object* v_inst_2645_, lean_object* v_args_2646_, lean_object* v_onAlt_2647_, lean_object* v_next_2648_, lean_object* v_toBind_2649_, lean_object* v___x_2650_, lean_object* v___f_2651_, lean_object* v_ys4_2652_, lean_object* v_altType_2653_){
_start:
{
uint8_t v___x_15532__boxed_2654_; uint8_t v_useSplitter_boxed_2655_; lean_object* v_res_2656_; 
v___x_15532__boxed_2654_ = lean_unbox(v___x_2643_);
v_useSplitter_boxed_2655_ = lean_unbox(v_useSplitter_2644_);
v_res_2656_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__38(v_inst_2639_, v_ys_2640_, v_ys2_2641_, v_ys3_2642_, v___x_15532__boxed_2654_, v_useSplitter_boxed_2655_, v_inst_2645_, v_args_2646_, v_onAlt_2647_, v_next_2648_, v_toBind_2649_, v___x_2650_, v___f_2651_, v_ys4_2652_, v_altType_2653_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39(lean_object* v_inst_2657_, lean_object* v_ys_2658_, lean_object* v_ys2_2659_, uint8_t v___x_2660_, uint8_t v_useSplitter_2661_, lean_object* v_inst_2662_, lean_object* v_args_2663_, lean_object* v_onAlt_2664_, lean_object* v_next_2665_, lean_object* v_toBind_2666_, lean_object* v___x_2667_, lean_object* v___f_2668_, lean_object* v_fst_2669_, lean_object* v_inst_2670_, lean_object* v_inst_2671_, lean_object* v_ys3_2672_, lean_object* v_altType_2673_){
_start:
{
lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___f_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; 
v___x_2674_ = lean_box(v___x_2660_);
v___x_2675_ = lean_box(v_useSplitter_2661_);
v___f_2676_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__38___boxed), 15, 13);
lean_closure_set(v___f_2676_, 0, v_inst_2657_);
lean_closure_set(v___f_2676_, 1, v_ys_2658_);
lean_closure_set(v___f_2676_, 2, v_ys2_2659_);
lean_closure_set(v___f_2676_, 3, v_ys3_2672_);
lean_closure_set(v___f_2676_, 4, v___x_2674_);
lean_closure_set(v___f_2676_, 5, v___x_2675_);
lean_closure_set(v___f_2676_, 6, v_inst_2662_);
lean_closure_set(v___f_2676_, 7, v_args_2663_);
lean_closure_set(v___f_2676_, 8, v_onAlt_2664_);
lean_closure_set(v___f_2676_, 9, v_next_2665_);
lean_closure_set(v___f_2676_, 10, v_toBind_2666_);
lean_closure_set(v___f_2676_, 11, v___x_2667_);
lean_closure_set(v___f_2676_, 12, v___f_2668_);
v___x_2677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2677_, 0, v_fst_2669_);
v___x_2678_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2670_, v_inst_2671_, v_altType_2673_, v___x_2677_, v___f_2676_, v___x_2660_, v___x_2660_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed(lean_object** _args){
lean_object* v_inst_2679_ = _args[0];
lean_object* v_ys_2680_ = _args[1];
lean_object* v_ys2_2681_ = _args[2];
lean_object* v___x_2682_ = _args[3];
lean_object* v_useSplitter_2683_ = _args[4];
lean_object* v_inst_2684_ = _args[5];
lean_object* v_args_2685_ = _args[6];
lean_object* v_onAlt_2686_ = _args[7];
lean_object* v_next_2687_ = _args[8];
lean_object* v_toBind_2688_ = _args[9];
lean_object* v___x_2689_ = _args[10];
lean_object* v___f_2690_ = _args[11];
lean_object* v_fst_2691_ = _args[12];
lean_object* v_inst_2692_ = _args[13];
lean_object* v_inst_2693_ = _args[14];
lean_object* v_ys3_2694_ = _args[15];
lean_object* v_altType_2695_ = _args[16];
_start:
{
uint8_t v___x_15565__boxed_2696_; uint8_t v_useSplitter_boxed_2697_; lean_object* v_res_2698_; 
v___x_15565__boxed_2696_ = lean_unbox(v___x_2682_);
v_useSplitter_boxed_2697_ = lean_unbox(v_useSplitter_2683_);
v_res_2698_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__39(v_inst_2679_, v_ys_2680_, v_ys2_2681_, v___x_15565__boxed_2696_, v_useSplitter_boxed_2697_, v_inst_2684_, v_args_2685_, v_onAlt_2686_, v_next_2687_, v_toBind_2688_, v___x_2689_, v___f_2690_, v_fst_2691_, v_inst_2692_, v_inst_2693_, v_ys3_2694_, v_altType_2695_);
return v_res_2698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40(lean_object* v_inst_2699_, lean_object* v_ys_2700_, uint8_t v___x_2701_, uint8_t v_useSplitter_2702_, lean_object* v_inst_2703_, lean_object* v_args_2704_, lean_object* v_onAlt_2705_, lean_object* v_next_2706_, lean_object* v_toBind_2707_, lean_object* v___x_2708_, lean_object* v___f_2709_, lean_object* v_fst_2710_, lean_object* v_inst_2711_, lean_object* v_inst_2712_, lean_object* v_numDiscrEqs_2713_, lean_object* v_ys2_2714_, lean_object* v_altType_2715_){
_start:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___f_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v___x_2716_ = lean_box(v___x_2701_);
v___x_2717_ = lean_box(v_useSplitter_2702_);
lean_inc_ref(v_inst_2712_);
lean_inc_ref(v_inst_2711_);
v___f_2718_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__39___boxed), 17, 15);
lean_closure_set(v___f_2718_, 0, v_inst_2699_);
lean_closure_set(v___f_2718_, 1, v_ys_2700_);
lean_closure_set(v___f_2718_, 2, v_ys2_2714_);
lean_closure_set(v___f_2718_, 3, v___x_2716_);
lean_closure_set(v___f_2718_, 4, v___x_2717_);
lean_closure_set(v___f_2718_, 5, v_inst_2703_);
lean_closure_set(v___f_2718_, 6, v_args_2704_);
lean_closure_set(v___f_2718_, 7, v_onAlt_2705_);
lean_closure_set(v___f_2718_, 8, v_next_2706_);
lean_closure_set(v___f_2718_, 9, v_toBind_2707_);
lean_closure_set(v___f_2718_, 10, v___x_2708_);
lean_closure_set(v___f_2718_, 11, v___f_2709_);
lean_closure_set(v___f_2718_, 12, v_fst_2710_);
lean_closure_set(v___f_2718_, 13, v_inst_2711_);
lean_closure_set(v___f_2718_, 14, v_inst_2712_);
v___x_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2719_, 0, v_numDiscrEqs_2713_);
v___x_2720_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2711_, v_inst_2712_, v_altType_2715_, v___x_2719_, v___f_2718_, v___x_2701_, v___x_2701_);
return v___x_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed(lean_object** _args){
lean_object* v_inst_2721_ = _args[0];
lean_object* v_ys_2722_ = _args[1];
lean_object* v___x_2723_ = _args[2];
lean_object* v_useSplitter_2724_ = _args[3];
lean_object* v_inst_2725_ = _args[4];
lean_object* v_args_2726_ = _args[5];
lean_object* v_onAlt_2727_ = _args[6];
lean_object* v_next_2728_ = _args[7];
lean_object* v_toBind_2729_ = _args[8];
lean_object* v___x_2730_ = _args[9];
lean_object* v___f_2731_ = _args[10];
lean_object* v_fst_2732_ = _args[11];
lean_object* v_inst_2733_ = _args[12];
lean_object* v_inst_2734_ = _args[13];
lean_object* v_numDiscrEqs_2735_ = _args[14];
lean_object* v_ys2_2736_ = _args[15];
lean_object* v_altType_2737_ = _args[16];
_start:
{
uint8_t v___x_15596__boxed_2738_; uint8_t v_useSplitter_boxed_2739_; lean_object* v_res_2740_; 
v___x_15596__boxed_2738_ = lean_unbox(v___x_2723_);
v_useSplitter_boxed_2739_ = lean_unbox(v_useSplitter_2724_);
v_res_2740_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__40(v_inst_2721_, v_ys_2722_, v___x_15596__boxed_2738_, v_useSplitter_boxed_2739_, v_inst_2725_, v_args_2726_, v_onAlt_2727_, v_next_2728_, v_toBind_2729_, v___x_2730_, v___f_2731_, v_fst_2732_, v_inst_2733_, v_inst_2734_, v_numDiscrEqs_2735_, v_ys2_2736_, v_altType_2737_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41(lean_object* v___x_2741_, lean_object* v_inst_2742_, lean_object* v_inst_2743_, lean_object* v___f_2744_, uint8_t v___x_2745_, lean_object* v_toBind_2746_, lean_object* v___f_2747_, lean_object* v_altType_2748_){
_start:
{
lean_object* v_numOverlaps_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v_numOverlaps_2749_ = lean_ctor_get(v___x_2741_, 1);
lean_inc(v_numOverlaps_2749_);
v___x_2750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2750_, 0, v_numOverlaps_2749_);
v___x_2751_ = l_Lean_Meta_forallBoundedTelescope___redArg(v_inst_2742_, v_inst_2743_, v_altType_2748_, v___x_2750_, v___f_2744_, v___x_2745_, v___x_2745_);
v___x_2752_ = lean_apply_4(v_toBind_2746_, lean_box(0), lean_box(0), v___x_2751_, v___f_2747_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed(lean_object* v___x_2753_, lean_object* v_inst_2754_, lean_object* v_inst_2755_, lean_object* v___f_2756_, lean_object* v___x_2757_, lean_object* v_toBind_2758_, lean_object* v___f_2759_, lean_object* v_altType_2760_){
_start:
{
uint8_t v___x_15630__boxed_2761_; lean_object* v_res_2762_; 
v___x_15630__boxed_2761_ = lean_unbox(v___x_2757_);
v_res_2762_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__41(v___x_2753_, v_inst_2754_, v_inst_2755_, v___f_2756_, v___x_15630__boxed_2761_, v_toBind_2758_, v___f_2759_, v_altType_2760_);
lean_dec_ref(v___x_2753_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__42(lean_object* v___f_2763_, lean_object* v_altType_2764_){
_start:
{
lean_object* v___x_2765_; 
v___x_2765_ = lean_apply_1(v___f_2763_, v_altType_2764_);
return v___x_2765_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0(void){
_start:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_mk_string_unchecked("unit", 4, 4);
return v___x_2766_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1(void){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2767_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__0);
v___x_2768_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__3);
v___x_2769_ = l_Lean_Name_mkStr2(v___x_2768_, v___x_2767_);
return v___x_2769_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2(void){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2770_ = lean_box(0);
v___x_2771_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__1);
v___x_2772_ = l_Lean_mkConst(v___x_2771_, v___x_2770_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44(uint8_t v_hasUnitThunk_2773_, lean_object* v_toPure_2774_, lean_object* v_toBind_2775_, lean_object* v___f_2776_, lean_object* v___x_2777_, lean_object* v_inst_2778_, lean_object* v___f_2779_, lean_object* v_altType_2780_){
_start:
{
if (v_hasUnitThunk_2773_ == 0)
{
lean_object* v___x_2781_; lean_object* v___x_2782_; 
lean_dec(v___f_2779_);
lean_dec(v_inst_2778_);
v___x_2781_ = lean_apply_2(v_toPure_2774_, lean_box(0), v_altType_2780_);
v___x_2782_ = lean_apply_4(v_toBind_2775_, lean_box(0), lean_box(0), v___x_2781_, v___f_2776_);
return v___x_2782_;
}
else
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
lean_dec(v___f_2776_);
lean_dec(v_toPure_2774_);
v___x_2783_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_2784_ = lean_mk_empty_array_with_capacity(v___x_2777_);
v___x_2785_ = lean_array_push(v___x_2784_, v___x_2783_);
v___x_2786_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2786_, 0, v_altType_2780_);
lean_closure_set(v___x_2786_, 1, v___x_2785_);
v___x_2787_ = lean_apply_2(v_inst_2778_, lean_box(0), v___x_2786_);
v___x_2788_ = lean_apply_4(v_toBind_2775_, lean_box(0), lean_box(0), v___x_2787_, v___f_2779_);
return v___x_2788_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed(lean_object* v_hasUnitThunk_2789_, lean_object* v_toPure_2790_, lean_object* v_toBind_2791_, lean_object* v___f_2792_, lean_object* v___x_2793_, lean_object* v_inst_2794_, lean_object* v___f_2795_, lean_object* v_altType_2796_){
_start:
{
uint8_t v_hasUnitThunk_boxed_2797_; lean_object* v_res_2798_; 
v_hasUnitThunk_boxed_2797_ = lean_unbox(v_hasUnitThunk_2789_);
v_res_2798_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__44(v_hasUnitThunk_boxed_2797_, v_toPure_2790_, v_toBind_2791_, v___f_2792_, v___x_2793_, v_inst_2794_, v___f_2795_, v_altType_2796_);
lean_dec(v___x_2793_);
return v_res_2798_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0(void){
_start:
{
lean_object* v___x_2799_; 
v___x_2799_ = lean_mk_string_unchecked("Lean.Meta.Match.MatcherApp.Transform", 36, 36);
return v___x_2799_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1(void){
_start:
{
lean_object* v___x_2800_; 
v___x_2800_ = lean_mk_string_unchecked("Lean.Meta.MatcherApp.transform", 30, 30);
return v___x_2800_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2(void){
_start:
{
lean_object* v___x_2801_; 
v___x_2801_ = lean_mk_string_unchecked("assertion violation: ys.size == splitterAltInfo.numFields\n        ", 66, 66);
return v___x_2801_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3(void){
_start:
{
lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2802_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__2);
v___x_2803_ = lean_unsigned_to_nat(8u);
v___x_2804_ = lean_unsigned_to_nat(360u);
v___x_2805_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1);
v___x_2806_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0);
v___x_2807_ = l_mkPanicMessageWithDecl(v___x_2806_, v___x_2805_, v___x_2804_, v___x_2803_, v___x_2802_);
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43(lean_object* v___x_2808_, lean_object* v_inst_2809_, lean_object* v_inst_2810_, uint8_t v___x_2811_, uint8_t v_useSplitter_2812_, lean_object* v_inst_2813_, lean_object* v_onAlt_2814_, lean_object* v_next_2815_, lean_object* v_toBind_2816_, lean_object* v___x_2817_, lean_object* v___f_2818_, lean_object* v_fst_2819_, lean_object* v_inst_2820_, lean_object* v_numDiscrEqs_2821_, lean_object* v___f_2822_, uint8_t v_hasUnitThunk_2823_, lean_object* v_toPure_2824_, lean_object* v___x_2825_, lean_object* v___x_2826_, lean_object* v_ys_2827_, lean_object* v_args_2828_){
_start:
{
lean_object* v_numFields_2829_; lean_object* v___x_2830_; uint8_t v___x_2831_; 
v_numFields_2829_ = lean_ctor_get(v___x_2808_, 0);
v___x_2830_ = lean_array_get_size(v_ys_2827_);
v___x_2831_ = lean_nat_dec_eq(v___x_2830_, v_numFields_2829_);
if (v___x_2831_ == 0)
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
lean_dec_ref(v_args_2828_);
lean_dec_ref(v_ys_2827_);
lean_dec_ref(v___x_2826_);
lean_dec(v___x_2825_);
lean_dec(v_toPure_2824_);
lean_dec(v___f_2822_);
lean_dec(v_numDiscrEqs_2821_);
lean_dec_ref(v_inst_2820_);
lean_dec(v_fst_2819_);
lean_dec(v___f_2818_);
lean_dec_ref(v___x_2817_);
lean_dec(v_toBind_2816_);
lean_dec(v_next_2815_);
lean_dec(v_onAlt_2814_);
lean_dec(v_inst_2813_);
lean_dec_ref(v_inst_2810_);
lean_dec_ref(v___x_2808_);
v___x_2832_ = l_Lean_instInhabitedExpr;
v___x_2833_ = l_instInhabitedOfMonad___redArg(v_inst_2809_, v___x_2832_);
v___x_2834_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_2835_ = l_panic___redArg(v___x_2833_, v___x_2834_);
lean_dec(v___x_2833_);
return v___x_2835_;
}
else
{
lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___f_2838_; lean_object* v___x_2839_; lean_object* v___f_2840_; lean_object* v___f_2841_; lean_object* v___x_2842_; lean_object* v___f_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
v___x_2836_ = lean_box(v___x_2811_);
v___x_2837_ = lean_box(v_useSplitter_2812_);
lean_inc_ref(v_inst_2809_);
lean_inc_ref(v_inst_2820_);
lean_inc_n(v_toBind_2816_, 3);
lean_inc_n(v_inst_2813_, 2);
lean_inc_ref(v_ys_2827_);
v___f_2838_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__40___boxed), 17, 15);
lean_closure_set(v___f_2838_, 0, v_inst_2810_);
lean_closure_set(v___f_2838_, 1, v_ys_2827_);
lean_closure_set(v___f_2838_, 2, v___x_2836_);
lean_closure_set(v___f_2838_, 3, v___x_2837_);
lean_closure_set(v___f_2838_, 4, v_inst_2813_);
lean_closure_set(v___f_2838_, 5, v_args_2828_);
lean_closure_set(v___f_2838_, 6, v_onAlt_2814_);
lean_closure_set(v___f_2838_, 7, v_next_2815_);
lean_closure_set(v___f_2838_, 8, v_toBind_2816_);
lean_closure_set(v___f_2838_, 9, v___x_2817_);
lean_closure_set(v___f_2838_, 10, v___f_2818_);
lean_closure_set(v___f_2838_, 11, v_fst_2819_);
lean_closure_set(v___f_2838_, 12, v_inst_2820_);
lean_closure_set(v___f_2838_, 13, v_inst_2809_);
lean_closure_set(v___f_2838_, 14, v_numDiscrEqs_2821_);
v___x_2839_ = lean_box(v___x_2811_);
v___f_2840_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__41___boxed), 8, 7);
lean_closure_set(v___f_2840_, 0, v___x_2808_);
lean_closure_set(v___f_2840_, 1, v_inst_2820_);
lean_closure_set(v___f_2840_, 2, v_inst_2809_);
lean_closure_set(v___f_2840_, 3, v___f_2838_);
lean_closure_set(v___f_2840_, 4, v___x_2839_);
lean_closure_set(v___f_2840_, 5, v_toBind_2816_);
lean_closure_set(v___f_2840_, 6, v___f_2822_);
v___f_2841_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__42), 2, 1);
lean_closure_set(v___f_2841_, 0, v___f_2840_);
v___x_2842_ = lean_box(v_hasUnitThunk_2823_);
lean_inc_ref(v___f_2841_);
v___f_2843_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__44___boxed), 8, 7);
lean_closure_set(v___f_2843_, 0, v___x_2842_);
lean_closure_set(v___f_2843_, 1, v_toPure_2824_);
lean_closure_set(v___f_2843_, 2, v_toBind_2816_);
lean_closure_set(v___f_2843_, 3, v___f_2841_);
lean_closure_set(v___f_2843_, 4, v___x_2825_);
lean_closure_set(v___f_2843_, 5, v_inst_2813_);
lean_closure_set(v___f_2843_, 6, v___f_2841_);
v___x_2844_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateForall___boxed), 7, 2);
lean_closure_set(v___x_2844_, 0, v___x_2826_);
lean_closure_set(v___x_2844_, 1, v_ys_2827_);
v___x_2845_ = lean_apply_2(v_inst_2813_, lean_box(0), v___x_2844_);
v___x_2846_ = lean_apply_4(v_toBind_2816_, lean_box(0), lean_box(0), v___x_2845_, v___f_2843_);
return v___x_2846_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed(lean_object** _args){
lean_object* v___x_2847_ = _args[0];
lean_object* v_inst_2848_ = _args[1];
lean_object* v_inst_2849_ = _args[2];
lean_object* v___x_2850_ = _args[3];
lean_object* v_useSplitter_2851_ = _args[4];
lean_object* v_inst_2852_ = _args[5];
lean_object* v_onAlt_2853_ = _args[6];
lean_object* v_next_2854_ = _args[7];
lean_object* v_toBind_2855_ = _args[8];
lean_object* v___x_2856_ = _args[9];
lean_object* v___f_2857_ = _args[10];
lean_object* v_fst_2858_ = _args[11];
lean_object* v_inst_2859_ = _args[12];
lean_object* v_numDiscrEqs_2860_ = _args[13];
lean_object* v___f_2861_ = _args[14];
lean_object* v_hasUnitThunk_2862_ = _args[15];
lean_object* v_toPure_2863_ = _args[16];
lean_object* v___x_2864_ = _args[17];
lean_object* v___x_2865_ = _args[18];
lean_object* v_ys_2866_ = _args[19];
lean_object* v_args_2867_ = _args[20];
_start:
{
uint8_t v___x_15725__boxed_2868_; uint8_t v_useSplitter_boxed_2869_; uint8_t v_hasUnitThunk_boxed_2870_; lean_object* v_res_2871_; 
v___x_15725__boxed_2868_ = lean_unbox(v___x_2850_);
v_useSplitter_boxed_2869_ = lean_unbox(v_useSplitter_2851_);
v_hasUnitThunk_boxed_2870_ = lean_unbox(v_hasUnitThunk_2862_);
v_res_2871_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__43(v___x_2847_, v_inst_2848_, v_inst_2849_, v___x_15725__boxed_2868_, v_useSplitter_boxed_2869_, v_inst_2852_, v_onAlt_2853_, v_next_2854_, v_toBind_2855_, v___x_2856_, v___f_2857_, v_fst_2858_, v_inst_2859_, v_numDiscrEqs_2860_, v___f_2861_, v_hasUnitThunk_boxed_2870_, v_toPure_2863_, v___x_2864_, v___x_2865_, v_ys_2866_, v_args_2867_);
return v_res_2871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__45(lean_object* v_fst_2872_, lean_object* v___x_2873_, lean_object* v___x_2874_, lean_object* v___x_2875_, lean_object* v___x_2876_, lean_object* v___x_2877_, lean_object* v_toPure_2878_, lean_object* v_alt_x27_2879_){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; 
v___x_2880_ = lean_array_push(v_fst_2872_, v_alt_x27_2879_);
v___x_2881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2881_, 0, v___x_2873_);
lean_ctor_set(v___x_2881_, 1, v___x_2874_);
v___x_2882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2875_);
lean_ctor_set(v___x_2882_, 1, v___x_2881_);
v___x_2883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2883_, 0, v___x_2876_);
lean_ctor_set(v___x_2883_, 1, v___x_2882_);
v___x_2884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2877_);
lean_ctor_set(v___x_2884_, 1, v___x_2883_);
v___x_2885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2885_, 0, v___x_2880_);
lean_ctor_set(v___x_2885_, 1, v___x_2884_);
v___x_2886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2886_, 0, v___x_2885_);
v___x_2887_ = lean_apply_2(v_toPure_2878_, lean_box(0), v___x_2886_);
return v___x_2887_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0(void){
_start:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Array_instInhabited(lean_box(0));
return v___x_2888_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1(void){
_start:
{
lean_object* v___x_2889_; 
v___x_2889_ = l_Subarray_empty(lean_box(0));
return v___x_2889_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__2(void){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_2891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2891_, 0, v___x_2890_);
lean_ctor_set(v___x_2891_, 1, v___x_2890_);
return v___x_2891_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__3(void){
_start:
{
lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; 
v___x_2892_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__2);
v___x_2893_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_2894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2894_, 0, v___x_2893_);
lean_ctor_set(v___x_2894_, 1, v___x_2892_);
return v___x_2894_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__4(void){
_start:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; 
v___x_2895_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__3);
v___x_2896_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v___x_2896_);
lean_ctor_set(v___x_2897_, 1, v___x_2895_);
return v___x_2897_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__5(void){
_start:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2898_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__4, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__4);
v___x_2899_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__1);
v___x_2900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2899_);
lean_ctor_set(v___x_2900_, 1, v___x_2898_);
return v___x_2900_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__6(void){
_start:
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v___x_2901_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__5);
v___x_2902_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__0);
v___x_2903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2903_, 0, v___x_2902_);
lean_ctor_set(v___x_2903_, 1, v___x_2901_);
return v___x_2903_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7(void){
_start:
{
lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2904_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__6);
v___x_2905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2904_);
return v___x_2905_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__8(void){
_start:
{
lean_object* v___x_2906_; 
v___x_2906_ = lean_mk_string_unchecked("assertion violation: altInfo.numOverlaps = 0\n      ", 51, 51);
return v___x_2906_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9(void){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; 
v___x_2907_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__8, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__8_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__8);
v___x_2908_ = lean_unsigned_to_nat(6u);
v___x_2909_ = lean_unsigned_to_nat(358u);
v___x_2910_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__1);
v___x_2911_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__0);
v___x_2912_ = l_mkPanicMessageWithDecl(v___x_2911_, v___x_2910_, v___x_2909_, v___x_2908_, v___x_2907_);
return v___x_2912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46(lean_object* v___x_2913_, lean_object* v_toPure_2914_, lean_object* v_toBind_2915_, lean_object* v___f_2916_, lean_object* v___x_2917_, lean_object* v_inst_2918_, lean_object* v_inst_2919_, lean_object* v_inst_2920_, uint8_t v___x_2921_, uint8_t v_useSplitter_2922_, lean_object* v_onAlt_2923_, lean_object* v___f_2924_, lean_object* v_fst_2925_, lean_object* v_inst_2926_, lean_object* v_numDiscrEqs_2927_, lean_object* v_next_2928_, lean_object* v_acc_2929_, lean_object* v_h_2930_, lean_object* v_G_2931_){
_start:
{
uint8_t v___x_2932_; 
v___x_2932_ = lean_nat_dec_lt(v_next_2928_, v___x_2913_);
if (v___x_2932_ == 0)
{
lean_object* v___x_2933_; 
lean_dec(v_G_2931_);
lean_dec(v_next_2928_);
lean_dec(v_numDiscrEqs_2927_);
lean_dec_ref(v_inst_2926_);
lean_dec(v_fst_2925_);
lean_dec(v___f_2924_);
lean_dec(v_onAlt_2923_);
lean_dec_ref(v_inst_2920_);
lean_dec(v_inst_2919_);
lean_dec_ref(v_inst_2918_);
lean_dec(v___f_2916_);
lean_dec(v_toBind_2915_);
v___x_2933_ = lean_apply_2(v_toPure_2914_, lean_box(0), v_acc_2929_);
return v___x_2933_;
}
else
{
lean_object* v_snd_2934_; lean_object* v_snd_2935_; lean_object* v_snd_2936_; lean_object* v_snd_2937_; lean_object* v_snd_2938_; lean_object* v_fst_2939_; lean_object* v___x_2941_; uint8_t v_isShared_2942_; uint8_t v_isSharedCheck_3153_; 
v_snd_2934_ = lean_ctor_get(v_acc_2929_, 1);
lean_inc(v_snd_2934_);
v_snd_2935_ = lean_ctor_get(v_snd_2934_, 1);
lean_inc(v_snd_2935_);
v_snd_2936_ = lean_ctor_get(v_snd_2935_, 1);
lean_inc(v_snd_2936_);
v_snd_2937_ = lean_ctor_get(v_snd_2936_, 1);
lean_inc(v_snd_2937_);
v_snd_2938_ = lean_ctor_get(v_snd_2937_, 1);
lean_inc(v_snd_2938_);
v_fst_2939_ = lean_ctor_get(v_acc_2929_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v_acc_2929_);
if (v_isSharedCheck_3153_ == 0)
{
lean_object* v_unused_3154_; 
v_unused_3154_ = lean_ctor_get(v_acc_2929_, 1);
lean_dec(v_unused_3154_);
v___x_2941_ = v_acc_2929_;
v_isShared_2942_ = v_isSharedCheck_3153_;
goto v_resetjp_2940_;
}
else
{
lean_inc(v_fst_2939_);
lean_dec(v_acc_2929_);
v___x_2941_ = lean_box(0);
v_isShared_2942_ = v_isSharedCheck_3153_;
goto v_resetjp_2940_;
}
v_resetjp_2940_:
{
lean_object* v_fst_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_3151_; 
v_fst_2943_ = lean_ctor_get(v_snd_2934_, 0);
v_isSharedCheck_3151_ = !lean_is_exclusive(v_snd_2934_);
if (v_isSharedCheck_3151_ == 0)
{
lean_object* v_unused_3152_; 
v_unused_3152_ = lean_ctor_get(v_snd_2934_, 1);
lean_dec(v_unused_3152_);
v___x_2945_ = v_snd_2934_;
v_isShared_2946_ = v_isSharedCheck_3151_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_fst_2943_);
lean_dec(v_snd_2934_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_3151_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v_fst_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_3149_; 
v_fst_2947_ = lean_ctor_get(v_snd_2935_, 0);
v_isSharedCheck_3149_ = !lean_is_exclusive(v_snd_2935_);
if (v_isSharedCheck_3149_ == 0)
{
lean_object* v_unused_3150_; 
v_unused_3150_ = lean_ctor_get(v_snd_2935_, 1);
lean_dec(v_unused_3150_);
v___x_2949_ = v_snd_2935_;
v_isShared_2950_ = v_isSharedCheck_3149_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_fst_2947_);
lean_dec(v_snd_2935_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_3149_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v_fst_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_3147_; 
v_fst_2951_ = lean_ctor_get(v_snd_2936_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v_snd_2936_);
if (v_isSharedCheck_3147_ == 0)
{
lean_object* v_unused_3148_; 
v_unused_3148_ = lean_ctor_get(v_snd_2936_, 1);
lean_dec(v_unused_3148_);
v___x_2953_ = v_snd_2936_;
v_isShared_2954_ = v_isSharedCheck_3147_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_fst_2951_);
lean_dec(v_snd_2936_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_3147_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v_fst_2955_; lean_object* v___x_2957_; uint8_t v_isShared_2958_; uint8_t v_isSharedCheck_3145_; 
v_fst_2955_ = lean_ctor_get(v_snd_2937_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v_snd_2937_);
if (v_isSharedCheck_3145_ == 0)
{
lean_object* v_unused_3146_; 
v_unused_3146_ = lean_ctor_get(v_snd_2937_, 1);
lean_dec(v_unused_3146_);
v___x_2957_ = v_snd_2937_;
v_isShared_2958_ = v_isSharedCheck_3145_;
goto v_resetjp_2956_;
}
else
{
lean_inc(v_fst_2955_);
lean_dec(v_snd_2937_);
v___x_2957_ = lean_box(0);
v_isShared_2958_ = v_isSharedCheck_3145_;
goto v_resetjp_2956_;
}
v_resetjp_2956_:
{
lean_object* v_array_2959_; lean_object* v_start_2960_; lean_object* v_stop_2961_; lean_object* v___f_2962_; lean_object* v___y_2964_; uint8_t v___x_2967_; 
v_array_2959_ = lean_ctor_get(v_snd_2938_, 0);
v_start_2960_ = lean_ctor_get(v_snd_2938_, 1);
v_stop_2961_ = lean_ctor_get(v_snd_2938_, 2);
lean_inc(v_next_2928_);
lean_inc(v_toPure_2914_);
v___f_2962_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__34___boxed), 4, 3);
lean_closure_set(v___f_2962_, 0, v_toPure_2914_);
lean_closure_set(v___f_2962_, 1, v_next_2928_);
lean_closure_set(v___f_2962_, 2, v_G_2931_);
v___x_2967_ = lean_nat_dec_lt(v_start_2960_, v_stop_2961_);
if (v___x_2967_ == 0)
{
lean_object* v___x_2969_; 
lean_dec(v_next_2928_);
lean_dec(v_numDiscrEqs_2927_);
lean_dec_ref(v_inst_2926_);
lean_dec(v_fst_2925_);
lean_dec(v___f_2924_);
lean_dec(v_onAlt_2923_);
lean_dec_ref(v_inst_2920_);
lean_dec(v_inst_2919_);
lean_dec_ref(v_inst_2918_);
if (v_isShared_2958_ == 0)
{
v___x_2969_ = v___x_2957_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v_fst_2955_);
lean_ctor_set(v_reuseFailAlloc_2984_, 1, v_snd_2938_);
v___x_2969_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2971_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 1, v___x_2969_);
v___x_2971_ = v___x_2953_;
goto v_reusejp_2970_;
}
else
{
lean_object* v_reuseFailAlloc_2983_; 
v_reuseFailAlloc_2983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2983_, 0, v_fst_2951_);
lean_ctor_set(v_reuseFailAlloc_2983_, 1, v___x_2969_);
v___x_2971_ = v_reuseFailAlloc_2983_;
goto v_reusejp_2970_;
}
v_reusejp_2970_:
{
lean_object* v___x_2973_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 1, v___x_2971_);
v___x_2973_ = v___x_2949_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2982_; 
v_reuseFailAlloc_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2982_, 0, v_fst_2947_);
lean_ctor_set(v_reuseFailAlloc_2982_, 1, v___x_2971_);
v___x_2973_ = v_reuseFailAlloc_2982_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
lean_object* v___x_2975_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 1, v___x_2973_);
v___x_2975_ = v___x_2945_;
goto v_reusejp_2974_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v_fst_2943_);
lean_ctor_set(v_reuseFailAlloc_2981_, 1, v___x_2973_);
v___x_2975_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2974_;
}
v_reusejp_2974_:
{
lean_object* v___x_2977_; 
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 1, v___x_2975_);
v___x_2977_ = v___x_2941_;
goto v_reusejp_2976_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_fst_2939_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v___x_2975_);
v___x_2977_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2976_;
}
v_reusejp_2976_:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; 
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
v___x_2979_ = lean_apply_2(v_toPure_2914_, lean_box(0), v___x_2978_);
v___y_2964_ = v___x_2979_;
goto v___jp_2963_;
}
}
}
}
}
}
else
{
lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_3141_; 
lean_inc(v_stop_2961_);
lean_inc(v_start_2960_);
lean_inc_ref(v_array_2959_);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_snd_2938_);
if (v_isSharedCheck_3141_ == 0)
{
lean_object* v_unused_3142_; lean_object* v_unused_3143_; lean_object* v_unused_3144_; 
v_unused_3142_ = lean_ctor_get(v_snd_2938_, 2);
lean_dec(v_unused_3142_);
v_unused_3143_ = lean_ctor_get(v_snd_2938_, 1);
lean_dec(v_unused_3143_);
v_unused_3144_ = lean_ctor_get(v_snd_2938_, 0);
lean_dec(v_unused_3144_);
v___x_2986_ = v_snd_2938_;
v_isShared_2987_ = v_isSharedCheck_3141_;
goto v_resetjp_2985_;
}
else
{
lean_dec(v_snd_2938_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_3141_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v_array_2988_; lean_object* v_start_2989_; lean_object* v_stop_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2995_; 
v_array_2988_ = lean_ctor_get(v_fst_2955_, 0);
v_start_2989_ = lean_ctor_get(v_fst_2955_, 1);
v_stop_2990_ = lean_ctor_get(v_fst_2955_, 2);
v___x_2991_ = lean_array_fget(v_array_2959_, v_start_2960_);
v___x_2992_ = lean_unsigned_to_nat(1u);
v___x_2993_ = lean_nat_add(v_start_2960_, v___x_2992_);
lean_dec(v_start_2960_);
if (v_isShared_2987_ == 0)
{
lean_ctor_set(v___x_2986_, 1, v___x_2993_);
v___x_2995_ = v___x_2986_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_array_2959_);
lean_ctor_set(v_reuseFailAlloc_3140_, 1, v___x_2993_);
lean_ctor_set(v_reuseFailAlloc_3140_, 2, v_stop_2961_);
v___x_2995_ = v_reuseFailAlloc_3140_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
uint8_t v___x_2996_; 
v___x_2996_ = lean_nat_dec_lt(v_start_2989_, v_stop_2990_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2998_; 
lean_dec(v___x_2991_);
lean_dec(v_next_2928_);
lean_dec(v_numDiscrEqs_2927_);
lean_dec_ref(v_inst_2926_);
lean_dec(v_fst_2925_);
lean_dec(v___f_2924_);
lean_dec(v_onAlt_2923_);
lean_dec_ref(v_inst_2920_);
lean_dec(v_inst_2919_);
lean_dec_ref(v_inst_2918_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 1, v___x_2995_);
v___x_2998_ = v___x_2957_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_3013_; 
v_reuseFailAlloc_3013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3013_, 0, v_fst_2955_);
lean_ctor_set(v_reuseFailAlloc_3013_, 1, v___x_2995_);
v___x_2998_ = v_reuseFailAlloc_3013_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
lean_object* v___x_3000_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 1, v___x_2998_);
v___x_3000_ = v___x_2953_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_fst_2951_);
lean_ctor_set(v_reuseFailAlloc_3012_, 1, v___x_2998_);
v___x_3000_ = v_reuseFailAlloc_3012_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
lean_object* v___x_3002_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 1, v___x_3000_);
v___x_3002_ = v___x_2949_;
goto v_reusejp_3001_;
}
else
{
lean_object* v_reuseFailAlloc_3011_; 
v_reuseFailAlloc_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3011_, 0, v_fst_2947_);
lean_ctor_set(v_reuseFailAlloc_3011_, 1, v___x_3000_);
v___x_3002_ = v_reuseFailAlloc_3011_;
goto v_reusejp_3001_;
}
v_reusejp_3001_:
{
lean_object* v___x_3004_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 1, v___x_3002_);
v___x_3004_ = v___x_2945_;
goto v_reusejp_3003_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_fst_2943_);
lean_ctor_set(v_reuseFailAlloc_3010_, 1, v___x_3002_);
v___x_3004_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3003_;
}
v_reusejp_3003_:
{
lean_object* v___x_3006_; 
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 1, v___x_3004_);
v___x_3006_ = v___x_2941_;
goto v_reusejp_3005_;
}
else
{
lean_object* v_reuseFailAlloc_3009_; 
v_reuseFailAlloc_3009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3009_, 0, v_fst_2939_);
lean_ctor_set(v_reuseFailAlloc_3009_, 1, v___x_3004_);
v___x_3006_ = v_reuseFailAlloc_3009_;
goto v_reusejp_3005_;
}
v_reusejp_3005_:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; 
v___x_3007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3007_, 0, v___x_3006_);
v___x_3008_ = lean_apply_2(v_toPure_2914_, lean_box(0), v___x_3007_);
v___y_2964_ = v___x_3008_;
goto v___jp_2963_;
}
}
}
}
}
}
else
{
lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3136_; 
lean_inc(v_stop_2990_);
lean_inc(v_start_2989_);
lean_inc_ref(v_array_2988_);
v_isSharedCheck_3136_ = !lean_is_exclusive(v_fst_2955_);
if (v_isSharedCheck_3136_ == 0)
{
lean_object* v_unused_3137_; lean_object* v_unused_3138_; lean_object* v_unused_3139_; 
v_unused_3137_ = lean_ctor_get(v_fst_2955_, 2);
lean_dec(v_unused_3137_);
v_unused_3138_ = lean_ctor_get(v_fst_2955_, 1);
lean_dec(v_unused_3138_);
v_unused_3139_ = lean_ctor_get(v_fst_2955_, 0);
lean_dec(v_unused_3139_);
v___x_3015_ = v_fst_2955_;
v_isShared_3016_ = v_isSharedCheck_3136_;
goto v_resetjp_3014_;
}
else
{
lean_dec(v_fst_2955_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3136_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v_array_3017_; lean_object* v_start_3018_; lean_object* v_stop_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3023_; 
v_array_3017_ = lean_ctor_get(v_fst_2951_, 0);
v_start_3018_ = lean_ctor_get(v_fst_2951_, 1);
v_stop_3019_ = lean_ctor_get(v_fst_2951_, 2);
v___x_3020_ = lean_array_fget(v_array_2988_, v_start_2989_);
v___x_3021_ = lean_nat_add(v_start_2989_, v___x_2992_);
lean_dec(v_start_2989_);
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 1, v___x_3021_);
v___x_3023_ = v___x_3015_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v_array_2988_);
lean_ctor_set(v_reuseFailAlloc_3135_, 1, v___x_3021_);
lean_ctor_set(v_reuseFailAlloc_3135_, 2, v_stop_2990_);
v___x_3023_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
uint8_t v___x_3024_; 
v___x_3024_ = lean_nat_dec_lt(v_start_3018_, v_stop_3019_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3026_; 
lean_dec(v___x_3020_);
lean_dec(v___x_2991_);
lean_dec(v_next_2928_);
lean_dec(v_numDiscrEqs_2927_);
lean_dec_ref(v_inst_2926_);
lean_dec(v_fst_2925_);
lean_dec(v___f_2924_);
lean_dec(v_onAlt_2923_);
lean_dec_ref(v_inst_2920_);
lean_dec(v_inst_2919_);
lean_dec_ref(v_inst_2918_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 1, v___x_2995_);
lean_ctor_set(v___x_2957_, 0, v___x_3023_);
v___x_3026_ = v___x_2957_;
goto v_reusejp_3025_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v___x_2995_);
v___x_3026_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3025_;
}
v_reusejp_3025_:
{
lean_object* v___x_3028_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 1, v___x_3026_);
v___x_3028_ = v___x_2953_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v_fst_2951_);
lean_ctor_set(v_reuseFailAlloc_3040_, 1, v___x_3026_);
v___x_3028_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
lean_object* v___x_3030_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 1, v___x_3028_);
v___x_3030_ = v___x_2949_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_fst_2947_);
lean_ctor_set(v_reuseFailAlloc_3039_, 1, v___x_3028_);
v___x_3030_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
lean_object* v___x_3032_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 1, v___x_3030_);
v___x_3032_ = v___x_2945_;
goto v_reusejp_3031_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v_fst_2943_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v___x_3030_);
v___x_3032_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3031_;
}
v_reusejp_3031_:
{
lean_object* v___x_3034_; 
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 1, v___x_3032_);
v___x_3034_ = v___x_2941_;
goto v_reusejp_3033_;
}
else
{
lean_object* v_reuseFailAlloc_3037_; 
v_reuseFailAlloc_3037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3037_, 0, v_fst_2939_);
lean_ctor_set(v_reuseFailAlloc_3037_, 1, v___x_3032_);
v___x_3034_ = v_reuseFailAlloc_3037_;
goto v_reusejp_3033_;
}
v_reusejp_3033_:
{
lean_object* v___x_3035_; lean_object* v___x_3036_; 
v___x_3035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3034_);
v___x_3036_ = lean_apply_2(v_toPure_2914_, lean_box(0), v___x_3035_);
v___y_2964_ = v___x_3036_;
goto v___jp_2963_;
}
}
}
}
}
}
else
{
lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3131_; 
lean_inc(v_stop_3019_);
lean_inc(v_start_3018_);
lean_inc_ref(v_array_3017_);
v_isSharedCheck_3131_ = !lean_is_exclusive(v_fst_2951_);
if (v_isSharedCheck_3131_ == 0)
{
lean_object* v_unused_3132_; lean_object* v_unused_3133_; lean_object* v_unused_3134_; 
v_unused_3132_ = lean_ctor_get(v_fst_2951_, 2);
lean_dec(v_unused_3132_);
v_unused_3133_ = lean_ctor_get(v_fst_2951_, 1);
lean_dec(v_unused_3133_);
v_unused_3134_ = lean_ctor_get(v_fst_2951_, 0);
lean_dec(v_unused_3134_);
v___x_3043_ = v_fst_2951_;
v_isShared_3044_ = v_isSharedCheck_3131_;
goto v_resetjp_3042_;
}
else
{
lean_dec(v_fst_2951_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3131_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v_array_3045_; lean_object* v_start_3046_; lean_object* v_stop_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3051_; 
v_array_3045_ = lean_ctor_get(v_fst_2947_, 0);
v_start_3046_ = lean_ctor_get(v_fst_2947_, 1);
v_stop_3047_ = lean_ctor_get(v_fst_2947_, 2);
v___x_3048_ = lean_array_fget(v_array_3017_, v_start_3018_);
v___x_3049_ = lean_nat_add(v_start_3018_, v___x_2992_);
lean_dec(v_start_3018_);
if (v_isShared_3044_ == 0)
{
lean_ctor_set(v___x_3043_, 1, v___x_3049_);
v___x_3051_ = v___x_3043_;
goto v_reusejp_3050_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_array_3017_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v___x_3049_);
lean_ctor_set(v_reuseFailAlloc_3130_, 2, v_stop_3019_);
v___x_3051_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3050_;
}
v_reusejp_3050_:
{
uint8_t v___x_3052_; 
v___x_3052_ = lean_nat_dec_lt(v_start_3046_, v_stop_3047_);
if (v___x_3052_ == 0)
{
lean_object* v___x_3054_; 
lean_dec(v___x_3048_);
lean_dec(v___x_3020_);
lean_dec(v___x_2991_);
lean_dec(v_next_2928_);
lean_dec(v_numDiscrEqs_2927_);
lean_dec_ref(v_inst_2926_);
lean_dec(v_fst_2925_);
lean_dec(v___f_2924_);
lean_dec(v_onAlt_2923_);
lean_dec_ref(v_inst_2920_);
lean_dec(v_inst_2919_);
lean_dec_ref(v_inst_2918_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 1, v___x_2995_);
lean_ctor_set(v___x_2957_, 0, v___x_3023_);
v___x_3054_ = v___x_2957_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3069_, 1, v___x_2995_);
v___x_3054_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
lean_object* v___x_3056_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 1, v___x_3054_);
lean_ctor_set(v___x_2953_, 0, v___x_3051_);
v___x_3056_ = v___x_2953_;
goto v_reusejp_3055_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v___x_3051_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v___x_3054_);
v___x_3056_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3055_;
}
v_reusejp_3055_:
{
lean_object* v___x_3058_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 1, v___x_3056_);
v___x_3058_ = v___x_2949_;
goto v_reusejp_3057_;
}
else
{
lean_object* v_reuseFailAlloc_3067_; 
v_reuseFailAlloc_3067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3067_, 0, v_fst_2947_);
lean_ctor_set(v_reuseFailAlloc_3067_, 1, v___x_3056_);
v___x_3058_ = v_reuseFailAlloc_3067_;
goto v_reusejp_3057_;
}
v_reusejp_3057_:
{
lean_object* v___x_3060_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 1, v___x_3058_);
v___x_3060_ = v___x_2945_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3066_; 
v_reuseFailAlloc_3066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3066_, 0, v_fst_2943_);
lean_ctor_set(v_reuseFailAlloc_3066_, 1, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3066_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
lean_object* v___x_3062_; 
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 1, v___x_3060_);
v___x_3062_ = v___x_2941_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3065_; 
v_reuseFailAlloc_3065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3065_, 0, v_fst_2939_);
lean_ctor_set(v_reuseFailAlloc_3065_, 1, v___x_3060_);
v___x_3062_ = v_reuseFailAlloc_3065_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
lean_object* v___x_3063_; lean_object* v___x_3064_; 
v___x_3063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3062_);
v___x_3064_ = lean_apply_2(v_toPure_2914_, lean_box(0), v___x_3063_);
v___y_2964_ = v___x_3064_;
goto v___jp_2963_;
}
}
}
}
}
}
else
{
lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3126_; 
lean_inc(v_stop_3047_);
lean_inc(v_start_3046_);
lean_inc_ref(v_array_3045_);
v_isSharedCheck_3126_ = !lean_is_exclusive(v_fst_2947_);
if (v_isSharedCheck_3126_ == 0)
{
lean_object* v_unused_3127_; lean_object* v_unused_3128_; lean_object* v_unused_3129_; 
v_unused_3127_ = lean_ctor_get(v_fst_2947_, 2);
lean_dec(v_unused_3127_);
v_unused_3128_ = lean_ctor_get(v_fst_2947_, 1);
lean_dec(v_unused_3128_);
v_unused_3129_ = lean_ctor_get(v_fst_2947_, 0);
lean_dec(v_unused_3129_);
v___x_3071_ = v_fst_2947_;
v_isShared_3072_ = v_isSharedCheck_3126_;
goto v_resetjp_3070_;
}
else
{
lean_dec(v_fst_2947_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3126_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v_array_3073_; lean_object* v_start_3074_; lean_object* v_stop_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v___x_3079_; 
v_array_3073_ = lean_ctor_get(v_fst_2943_, 0);
v_start_3074_ = lean_ctor_get(v_fst_2943_, 1);
v_stop_3075_ = lean_ctor_get(v_fst_2943_, 2);
v___x_3076_ = lean_array_fget(v_array_3045_, v_start_3046_);
v___x_3077_ = lean_nat_add(v_start_3046_, v___x_2992_);
lean_dec(v_start_3046_);
if (v_isShared_3072_ == 0)
{
lean_ctor_set(v___x_3071_, 1, v___x_3077_);
v___x_3079_ = v___x_3071_;
goto v_reusejp_3078_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v_array_3045_);
lean_ctor_set(v_reuseFailAlloc_3125_, 1, v___x_3077_);
lean_ctor_set(v_reuseFailAlloc_3125_, 2, v_stop_3047_);
v___x_3079_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3078_;
}
v_reusejp_3078_:
{
uint8_t v___x_3080_; 
v___x_3080_ = lean_nat_dec_lt(v_start_3074_, v_stop_3075_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3082_; 
lean_dec(v___x_3076_);
lean_dec(v___x_3048_);
lean_dec(v___x_3020_);
lean_dec(v___x_2991_);
lean_dec(v_next_2928_);
lean_dec(v_numDiscrEqs_2927_);
lean_dec_ref(v_inst_2926_);
lean_dec(v_fst_2925_);
lean_dec(v___f_2924_);
lean_dec(v_onAlt_2923_);
lean_dec_ref(v_inst_2920_);
lean_dec(v_inst_2919_);
lean_dec_ref(v_inst_2918_);
if (v_isShared_2958_ == 0)
{
lean_ctor_set(v___x_2957_, 1, v___x_2995_);
lean_ctor_set(v___x_2957_, 0, v___x_3023_);
v___x_3082_ = v___x_2957_;
goto v_reusejp_3081_;
}
else
{
lean_object* v_reuseFailAlloc_3097_; 
v_reuseFailAlloc_3097_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3097_, 0, v___x_3023_);
lean_ctor_set(v_reuseFailAlloc_3097_, 1, v___x_2995_);
v___x_3082_ = v_reuseFailAlloc_3097_;
goto v_reusejp_3081_;
}
v_reusejp_3081_:
{
lean_object* v___x_3084_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 1, v___x_3082_);
lean_ctor_set(v___x_2953_, 0, v___x_3051_);
v___x_3084_ = v___x_2953_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3051_);
lean_ctor_set(v_reuseFailAlloc_3096_, 1, v___x_3082_);
v___x_3084_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
lean_object* v___x_3086_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 1, v___x_3084_);
lean_ctor_set(v___x_2949_, 0, v___x_3079_);
v___x_3086_ = v___x_2949_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v___x_3079_);
lean_ctor_set(v_reuseFailAlloc_3095_, 1, v___x_3084_);
v___x_3086_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
lean_object* v___x_3088_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 1, v___x_3086_);
v___x_3088_ = v___x_2945_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v_fst_2943_);
lean_ctor_set(v_reuseFailAlloc_3094_, 1, v___x_3086_);
v___x_3088_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
lean_object* v___x_3090_; 
if (v_isShared_2942_ == 0)
{
lean_ctor_set(v___x_2941_, 1, v___x_3088_);
v___x_3090_ = v___x_2941_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_fst_2939_);
lean_ctor_set(v_reuseFailAlloc_3093_, 1, v___x_3088_);
v___x_3090_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3091_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3091_, 0, v___x_3090_);
v___x_3092_ = lean_apply_2(v_toPure_2914_, lean_box(0), v___x_3091_);
v___y_2964_ = v___x_3092_;
goto v___jp_2963_;
}
}
}
}
}
}
else
{
lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3121_; 
lean_inc(v_stop_3075_);
lean_inc(v_start_3074_);
lean_inc_ref(v_array_3073_);
lean_del_object(v___x_2957_);
lean_del_object(v___x_2953_);
lean_del_object(v___x_2949_);
lean_del_object(v___x_2945_);
lean_del_object(v___x_2941_);
v_isSharedCheck_3121_ = !lean_is_exclusive(v_fst_2943_);
if (v_isSharedCheck_3121_ == 0)
{
lean_object* v_unused_3122_; lean_object* v_unused_3123_; lean_object* v_unused_3124_; 
v_unused_3122_ = lean_ctor_get(v_fst_2943_, 2);
lean_dec(v_unused_3122_);
v_unused_3123_ = lean_ctor_get(v_fst_2943_, 1);
lean_dec(v_unused_3123_);
v_unused_3124_ = lean_ctor_get(v_fst_2943_, 0);
lean_dec(v_unused_3124_);
v___x_3099_ = v_fst_2943_;
v_isShared_3100_ = v_isSharedCheck_3121_;
goto v_resetjp_3098_;
}
else
{
lean_dec(v_fst_2943_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3121_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v_numOverlaps_3101_; uint8_t v_hasUnitThunk_3102_; uint8_t v___x_3103_; 
v_numOverlaps_3101_ = lean_ctor_get(v___x_3076_, 1);
v_hasUnitThunk_3102_ = lean_ctor_get_uint8(v___x_3076_, sizeof(void*)*2);
v___x_3103_ = lean_nat_dec_eq(v_numOverlaps_3101_, v___x_2917_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
lean_del_object(v___x_3099_);
lean_dec_ref(v___x_3079_);
lean_dec(v___x_3076_);
lean_dec(v_stop_3075_);
lean_dec(v_start_3074_);
lean_dec_ref(v_array_3073_);
lean_dec_ref(v___x_3051_);
lean_dec(v___x_3048_);
lean_dec_ref(v___x_3023_);
lean_dec(v___x_3020_);
lean_dec_ref(v___x_2995_);
lean_dec(v___x_2991_);
lean_dec(v_fst_2939_);
lean_dec(v_next_2928_);
lean_dec(v_numDiscrEqs_2927_);
lean_dec_ref(v_inst_2926_);
lean_dec(v_fst_2925_);
lean_dec(v___f_2924_);
lean_dec(v_onAlt_2923_);
lean_dec_ref(v_inst_2920_);
lean_dec(v_inst_2919_);
lean_dec(v_toPure_2914_);
v___x_3104_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7);
v___x_3105_ = l_instInhabitedOfMonad___redArg(v_inst_2918_, v___x_3104_);
v___x_3106_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9);
v___x_3107_ = l_panic___redArg(v___x_3105_, v___x_3106_);
lean_dec(v___x_3105_);
v___y_2964_ = v___x_3107_;
goto v___jp_2963_;
}
else
{
lean_object* v___f_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___f_3113_; lean_object* v___x_3114_; lean_object* v___x_3116_; 
lean_inc(v_inst_2919_);
lean_inc_n(v_toPure_2914_, 2);
lean_inc(v___x_3048_);
v___f_3108_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__35___boxed), 4, 3);
lean_closure_set(v___f_3108_, 0, v___x_3048_);
lean_closure_set(v___f_3108_, 1, v_toPure_2914_);
lean_closure_set(v___f_3108_, 2, v_inst_2919_);
v___x_3109_ = lean_array_fget_borrowed(v_array_3073_, v_start_3074_);
v___x_3110_ = lean_box(v___x_2921_);
v___x_3111_ = lean_box(v_useSplitter_2922_);
v___x_3112_ = lean_box(v_hasUnitThunk_3102_);
lean_inc_ref(v_inst_2926_);
lean_inc(v___x_3109_);
lean_inc(v_toBind_2915_);
lean_inc_ref(v_inst_2918_);
v___f_3113_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__43___boxed), 21, 19);
lean_closure_set(v___f_3113_, 0, v___x_3048_);
lean_closure_set(v___f_3113_, 1, v_inst_2918_);
lean_closure_set(v___f_3113_, 2, v_inst_2920_);
lean_closure_set(v___f_3113_, 3, v___x_3110_);
lean_closure_set(v___f_3113_, 4, v___x_3111_);
lean_closure_set(v___f_3113_, 5, v_inst_2919_);
lean_closure_set(v___f_3113_, 6, v_onAlt_2923_);
lean_closure_set(v___f_3113_, 7, v_next_2928_);
lean_closure_set(v___f_3113_, 8, v_toBind_2915_);
lean_closure_set(v___f_3113_, 9, v___x_3109_);
lean_closure_set(v___f_3113_, 10, v___f_2924_);
lean_closure_set(v___f_3113_, 11, v_fst_2925_);
lean_closure_set(v___f_3113_, 12, v_inst_2926_);
lean_closure_set(v___f_3113_, 13, v_numDiscrEqs_2927_);
lean_closure_set(v___f_3113_, 14, v___f_3108_);
lean_closure_set(v___f_3113_, 15, v___x_3112_);
lean_closure_set(v___f_3113_, 16, v_toPure_2914_);
lean_closure_set(v___f_3113_, 17, v___x_2992_);
lean_closure_set(v___f_3113_, 18, v___x_2991_);
v___x_3114_ = lean_nat_add(v_start_3074_, v___x_2992_);
lean_dec(v_start_3074_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 1, v___x_3114_);
v___x_3116_ = v___x_3099_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3120_; 
v_reuseFailAlloc_3120_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3120_, 0, v_array_3073_);
lean_ctor_set(v_reuseFailAlloc_3120_, 1, v___x_3114_);
lean_ctor_set(v_reuseFailAlloc_3120_, 2, v_stop_3075_);
v___x_3116_ = v_reuseFailAlloc_3120_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___f_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
v___f_3117_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__45), 8, 7);
lean_closure_set(v___f_3117_, 0, v_fst_2939_);
lean_closure_set(v___f_3117_, 1, v___x_3023_);
lean_closure_set(v___f_3117_, 2, v___x_2995_);
lean_closure_set(v___f_3117_, 3, v___x_3051_);
lean_closure_set(v___f_3117_, 4, v___x_3079_);
lean_closure_set(v___f_3117_, 5, v___x_3116_);
lean_closure_set(v___f_3117_, 6, v_toPure_2914_);
v___x_3118_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___redArg(v_inst_2918_, v_inst_2926_, v___x_3020_, v___x_3076_, v___f_3113_);
lean_inc(v_toBind_2915_);
v___x_3119_ = lean_apply_4(v_toBind_2915_, lean_box(0), lean_box(0), v___x_3118_, v___f_3117_);
v___y_2964_ = v___x_3119_;
goto v___jp_2963_;
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
}
v___jp_2963_:
{
lean_object* v___x_2965_; lean_object* v___x_2966_; 
lean_inc(v_toBind_2915_);
v___x_2965_ = lean_apply_4(v_toBind_2915_, lean_box(0), lean_box(0), v___y_2964_, v___f_2916_);
v___x_2966_ = lean_apply_4(v_toBind_2915_, lean_box(0), lean_box(0), v___x_2965_, v___f_2962_);
return v___x_2966_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed(lean_object** _args){
lean_object* v___x_3155_ = _args[0];
lean_object* v_toPure_3156_ = _args[1];
lean_object* v_toBind_3157_ = _args[2];
lean_object* v___f_3158_ = _args[3];
lean_object* v___x_3159_ = _args[4];
lean_object* v_inst_3160_ = _args[5];
lean_object* v_inst_3161_ = _args[6];
lean_object* v_inst_3162_ = _args[7];
lean_object* v___x_3163_ = _args[8];
lean_object* v_useSplitter_3164_ = _args[9];
lean_object* v_onAlt_3165_ = _args[10];
lean_object* v___f_3166_ = _args[11];
lean_object* v_fst_3167_ = _args[12];
lean_object* v_inst_3168_ = _args[13];
lean_object* v_numDiscrEqs_3169_ = _args[14];
lean_object* v_next_3170_ = _args[15];
lean_object* v_acc_3171_ = _args[16];
lean_object* v_h_3172_ = _args[17];
lean_object* v_G_3173_ = _args[18];
_start:
{
uint8_t v___x_15884__boxed_3174_; uint8_t v_useSplitter_boxed_3175_; lean_object* v_res_3176_; 
v___x_15884__boxed_3174_ = lean_unbox(v___x_3163_);
v_useSplitter_boxed_3175_ = lean_unbox(v_useSplitter_3164_);
v_res_3176_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__46(v___x_3155_, v_toPure_3156_, v_toBind_3157_, v___f_3158_, v___x_3159_, v_inst_3160_, v_inst_3161_, v_inst_3162_, v___x_15884__boxed_3174_, v_useSplitter_boxed_3175_, v_onAlt_3165_, v___f_3166_, v_fst_3167_, v_inst_3168_, v_numDiscrEqs_3169_, v_next_3170_, v_acc_3171_, v_h_3172_, v_G_3173_);
lean_dec(v___x_3159_);
lean_dec(v___x_3155_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47(lean_object* v_fst_3177_, lean_object* v_numParams_3178_, lean_object* v_numDiscrs_3179_, lean_object* v_altInfos_3180_, lean_object* v_uElimPos_x3f_3181_, lean_object* v_snd_3182_, lean_object* v_overlaps_3183_, lean_object* v_splitterName_3184_, lean_object* v_matcherLevels_3185_, lean_object* v_params_x27_3186_, lean_object* v_fst_3187_, lean_object* v_discrs_x27_3188_, lean_object* v_fst_3189_, lean_object* v_toPure_3190_, lean_object* v_____do__lift_3191_){
_start:
{
lean_object* v_remaining_x27_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; 
v_remaining_x27_3192_ = l_Array_append___redArg(v_fst_3177_, v_____do__lift_3191_);
v___x_3193_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3193_, 0, v_numParams_3178_);
lean_ctor_set(v___x_3193_, 1, v_numDiscrs_3179_);
lean_ctor_set(v___x_3193_, 2, v_altInfos_3180_);
lean_ctor_set(v___x_3193_, 3, v_uElimPos_x3f_3181_);
lean_ctor_set(v___x_3193_, 4, v_snd_3182_);
lean_ctor_set(v___x_3193_, 5, v_overlaps_3183_);
v___x_3194_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3193_);
lean_ctor_set(v___x_3194_, 1, v_splitterName_3184_);
lean_ctor_set(v___x_3194_, 2, v_matcherLevels_3185_);
lean_ctor_set(v___x_3194_, 3, v_params_x27_3186_);
lean_ctor_set(v___x_3194_, 4, v_fst_3187_);
lean_ctor_set(v___x_3194_, 5, v_discrs_x27_3188_);
lean_ctor_set(v___x_3194_, 6, v_fst_3189_);
lean_ctor_set(v___x_3194_, 7, v_remaining_x27_3192_);
v___x_3195_ = lean_apply_2(v_toPure_3190_, lean_box(0), v___x_3194_);
return v___x_3195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed(lean_object* v_fst_3196_, lean_object* v_numParams_3197_, lean_object* v_numDiscrs_3198_, lean_object* v_altInfos_3199_, lean_object* v_uElimPos_x3f_3200_, lean_object* v_snd_3201_, lean_object* v_overlaps_3202_, lean_object* v_splitterName_3203_, lean_object* v_matcherLevels_3204_, lean_object* v_params_x27_3205_, lean_object* v_fst_3206_, lean_object* v_discrs_x27_3207_, lean_object* v_fst_3208_, lean_object* v_toPure_3209_, lean_object* v_____do__lift_3210_){
_start:
{
lean_object* v_res_3211_; 
v_res_3211_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__47(v_fst_3196_, v_numParams_3197_, v_numDiscrs_3198_, v_altInfos_3199_, v_uElimPos_x3f_3200_, v_snd_3201_, v_overlaps_3202_, v_splitterName_3203_, v_matcherLevels_3204_, v_params_x27_3205_, v_fst_3206_, v_discrs_x27_3207_, v_fst_3208_, v_toPure_3209_, v_____do__lift_3210_);
lean_dec_ref(v_____do__lift_3210_);
return v_res_3211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48(lean_object* v_fst_3212_, lean_object* v_numParams_3213_, lean_object* v_numDiscrs_3214_, lean_object* v_altInfos_3215_, lean_object* v_uElimPos_x3f_3216_, lean_object* v_snd_3217_, lean_object* v_overlaps_3218_, lean_object* v_splitterName_3219_, lean_object* v_matcherLevels_3220_, lean_object* v_params_x27_3221_, lean_object* v_fst_3222_, lean_object* v_discrs_x27_3223_, lean_object* v_toPure_3224_, lean_object* v_onRemaining_3225_, lean_object* v_remaining_3226_, lean_object* v_toBind_3227_, lean_object* v_____s_3228_){
_start:
{
lean_object* v_fst_3229_; lean_object* v___f_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; 
v_fst_3229_ = lean_ctor_get(v_____s_3228_, 0);
lean_inc(v_fst_3229_);
lean_dec_ref(v_____s_3228_);
v___f_3230_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__47___boxed), 15, 14);
lean_closure_set(v___f_3230_, 0, v_fst_3212_);
lean_closure_set(v___f_3230_, 1, v_numParams_3213_);
lean_closure_set(v___f_3230_, 2, v_numDiscrs_3214_);
lean_closure_set(v___f_3230_, 3, v_altInfos_3215_);
lean_closure_set(v___f_3230_, 4, v_uElimPos_x3f_3216_);
lean_closure_set(v___f_3230_, 5, v_snd_3217_);
lean_closure_set(v___f_3230_, 6, v_overlaps_3218_);
lean_closure_set(v___f_3230_, 7, v_splitterName_3219_);
lean_closure_set(v___f_3230_, 8, v_matcherLevels_3220_);
lean_closure_set(v___f_3230_, 9, v_params_x27_3221_);
lean_closure_set(v___f_3230_, 10, v_fst_3222_);
lean_closure_set(v___f_3230_, 11, v_discrs_x27_3223_);
lean_closure_set(v___f_3230_, 12, v_fst_3229_);
lean_closure_set(v___f_3230_, 13, v_toPure_3224_);
v___x_3231_ = lean_apply_1(v_onRemaining_3225_, v_remaining_3226_);
v___x_3232_ = lean_apply_4(v_toBind_3227_, lean_box(0), lean_box(0), v___x_3231_, v___f_3230_);
return v___x_3232_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed(lean_object** _args){
lean_object* v_fst_3233_ = _args[0];
lean_object* v_numParams_3234_ = _args[1];
lean_object* v_numDiscrs_3235_ = _args[2];
lean_object* v_altInfos_3236_ = _args[3];
lean_object* v_uElimPos_x3f_3237_ = _args[4];
lean_object* v_snd_3238_ = _args[5];
lean_object* v_overlaps_3239_ = _args[6];
lean_object* v_splitterName_3240_ = _args[7];
lean_object* v_matcherLevels_3241_ = _args[8];
lean_object* v_params_x27_3242_ = _args[9];
lean_object* v_fst_3243_ = _args[10];
lean_object* v_discrs_x27_3244_ = _args[11];
lean_object* v_toPure_3245_ = _args[12];
lean_object* v_onRemaining_3246_ = _args[13];
lean_object* v_remaining_3247_ = _args[14];
lean_object* v_toBind_3248_ = _args[15];
lean_object* v_____s_3249_ = _args[16];
_start:
{
lean_object* v_res_3250_; 
v_res_3250_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__48(v_fst_3233_, v_numParams_3234_, v_numDiscrs_3235_, v_altInfos_3236_, v_uElimPos_x3f_3237_, v_snd_3238_, v_overlaps_3239_, v_splitterName_3240_, v_matcherLevels_3241_, v_params_x27_3242_, v_fst_3243_, v_discrs_x27_3244_, v_toPure_3245_, v_onRemaining_3246_, v_remaining_3247_, v_toBind_3248_, v_____s_3249_);
return v_res_3250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49(lean_object* v_splitterMatchInfo_3251_, lean_object* v_fst_3252_, lean_object* v_numParams_3253_, lean_object* v_numDiscrs_3254_, lean_object* v_altInfos_3255_, lean_object* v_uElimPos_x3f_3256_, lean_object* v_snd_3257_, lean_object* v_overlaps_3258_, lean_object* v_splitterName_3259_, lean_object* v_matcherLevels_3260_, lean_object* v_params_x27_3261_, lean_object* v_fst_3262_, lean_object* v_discrs_x27_3263_, lean_object* v_toPure_3264_, lean_object* v_onRemaining_3265_, lean_object* v_remaining_3266_, lean_object* v_toBind_3267_, lean_object* v_origAltTypes_3268_, lean_object* v_alts_3269_, lean_object* v___x_3270_, lean_object* v___x_3271_, lean_object* v_remaining_x27_3272_, lean_object* v___f_3273_, lean_object* v_altTypes_3274_){
_start:
{
lean_object* v_altInfos_3275_; lean_object* v___f_3276_; lean_object* v___x_3277_; lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___x_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v_altInfos_3275_ = lean_ctor_get(v_splitterMatchInfo_3251_, 2);
lean_inc_ref(v_altInfos_3275_);
lean_dec_ref(v_splitterMatchInfo_3251_);
lean_inc(v_toBind_3267_);
lean_inc_ref(v_altInfos_3255_);
v___f_3276_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__48___boxed), 17, 16);
lean_closure_set(v___f_3276_, 0, v_fst_3252_);
lean_closure_set(v___f_3276_, 1, v_numParams_3253_);
lean_closure_set(v___f_3276_, 2, v_numDiscrs_3254_);
lean_closure_set(v___f_3276_, 3, v_altInfos_3255_);
lean_closure_set(v___f_3276_, 4, v_uElimPos_x3f_3256_);
lean_closure_set(v___f_3276_, 5, v_snd_3257_);
lean_closure_set(v___f_3276_, 6, v_overlaps_3258_);
lean_closure_set(v___f_3276_, 7, v_splitterName_3259_);
lean_closure_set(v___f_3276_, 8, v_matcherLevels_3260_);
lean_closure_set(v___f_3276_, 9, v_params_x27_3261_);
lean_closure_set(v___f_3276_, 10, v_fst_3262_);
lean_closure_set(v___f_3276_, 11, v_discrs_x27_3263_);
lean_closure_set(v___f_3276_, 12, v_toPure_3264_);
lean_closure_set(v___f_3276_, 13, v_onRemaining_3265_);
lean_closure_set(v___f_3276_, 14, v_remaining_3266_);
lean_closure_set(v___f_3276_, 15, v_toBind_3267_);
v___x_3277_ = lean_array_get_size(v_altInfos_3255_);
v___x_3278_ = lean_array_get_size(v_altInfos_3275_);
v___x_3279_ = lean_array_get_size(v_origAltTypes_3268_);
v___x_3280_ = lean_array_get_size(v_altTypes_3274_);
lean_inc_n(v___x_3270_, 5);
v___x_3281_ = l_Array_toSubarray___redArg(v_alts_3269_, v___x_3270_, v___x_3271_);
v___x_3282_ = l_Array_toSubarray___redArg(v_altInfos_3255_, v___x_3270_, v___x_3277_);
v___x_3283_ = l_Array_toSubarray___redArg(v_altInfos_3275_, v___x_3270_, v___x_3278_);
v___x_3284_ = l_Array_toSubarray___redArg(v_origAltTypes_3268_, v___x_3270_, v___x_3279_);
v___x_3285_ = l_Array_toSubarray___redArg(v_altTypes_3274_, v___x_3270_, v___x_3280_);
v___x_3286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3286_, 0, v___x_3284_);
lean_ctor_set(v___x_3286_, 1, v___x_3285_);
v___x_3287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3287_, 0, v___x_3283_);
lean_ctor_set(v___x_3287_, 1, v___x_3286_);
v___x_3288_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3288_, 0, v___x_3282_);
lean_ctor_set(v___x_3288_, 1, v___x_3287_);
v___x_3289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3289_, 0, v___x_3281_);
lean_ctor_set(v___x_3289_, 1, v___x_3288_);
v___x_3290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3290_, 0, v_remaining_x27_3272_);
lean_ctor_set(v___x_3290_, 1, v___x_3289_);
v___x_3291_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_3273_, v___x_3270_, v___x_3290_, lean_box(0));
v___x_3292_ = lean_apply_4(v_toBind_3267_, lean_box(0), lean_box(0), v___x_3291_, v___f_3276_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed(lean_object** _args){
lean_object* v_splitterMatchInfo_3293_ = _args[0];
lean_object* v_fst_3294_ = _args[1];
lean_object* v_numParams_3295_ = _args[2];
lean_object* v_numDiscrs_3296_ = _args[3];
lean_object* v_altInfos_3297_ = _args[4];
lean_object* v_uElimPos_x3f_3298_ = _args[5];
lean_object* v_snd_3299_ = _args[6];
lean_object* v_overlaps_3300_ = _args[7];
lean_object* v_splitterName_3301_ = _args[8];
lean_object* v_matcherLevels_3302_ = _args[9];
lean_object* v_params_x27_3303_ = _args[10];
lean_object* v_fst_3304_ = _args[11];
lean_object* v_discrs_x27_3305_ = _args[12];
lean_object* v_toPure_3306_ = _args[13];
lean_object* v_onRemaining_3307_ = _args[14];
lean_object* v_remaining_3308_ = _args[15];
lean_object* v_toBind_3309_ = _args[16];
lean_object* v_origAltTypes_3310_ = _args[17];
lean_object* v_alts_3311_ = _args[18];
lean_object* v___x_3312_ = _args[19];
lean_object* v___x_3313_ = _args[20];
lean_object* v_remaining_x27_3314_ = _args[21];
lean_object* v___f_3315_ = _args[22];
lean_object* v_altTypes_3316_ = _args[23];
_start:
{
lean_object* v_res_3317_; 
v_res_3317_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__49(v_splitterMatchInfo_3293_, v_fst_3294_, v_numParams_3295_, v_numDiscrs_3296_, v_altInfos_3297_, v_uElimPos_x3f_3298_, v_snd_3299_, v_overlaps_3300_, v_splitterName_3301_, v_matcherLevels_3302_, v_params_x27_3303_, v_fst_3304_, v_discrs_x27_3305_, v_toPure_3306_, v_onRemaining_3307_, v_remaining_3308_, v_toBind_3309_, v_origAltTypes_3310_, v_alts_3311_, v___x_3312_, v___x_3313_, v_remaining_x27_3314_, v___f_3315_, v_altTypes_3316_);
return v_res_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__50(lean_object* v___x_3318_, lean_object* v_aux2_3319_, lean_object* v_inst_3320_, lean_object* v_toBind_3321_, lean_object* v___f_3322_, lean_object* v_____r_3323_){
_start:
{
lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; 
v___x_3324_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3324_, 0, v___x_3318_);
lean_closure_set(v___x_3324_, 1, v_aux2_3319_);
v___x_3325_ = lean_apply_2(v_inst_3320_, lean_box(0), v___x_3324_);
v___x_3326_ = lean_apply_4(v_toBind_3321_, lean_box(0), lean_box(0), v___x_3325_, v___f_3322_);
return v___x_3326_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0(void){
_start:
{
lean_object* v___x_3327_; 
v___x_3327_ = lean_mk_string_unchecked("failed to transform matcher, type error when constructing splitter motive:", 74, 74);
return v___x_3327_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1(void){
_start:
{
lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3328_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__0);
v___x_3329_ = l_Lean_stringToMessageData(v___x_3328_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53(lean_object* v___x_3330_, lean_object* v_params_x27_3331_, lean_object* v_fst_3332_, lean_object* v_discrs_x27_3333_, lean_object* v_fst_3334_, lean_object* v_numParams_3335_, lean_object* v_numDiscrs_3336_, lean_object* v_altInfos_3337_, lean_object* v_uElimPos_x3f_3338_, lean_object* v_snd_3339_, lean_object* v_overlaps_3340_, lean_object* v_matcherLevels_3341_, lean_object* v_toPure_3342_, lean_object* v_onRemaining_3343_, lean_object* v_remaining_3344_, lean_object* v_toBind_3345_, lean_object* v_origAltTypes_3346_, lean_object* v_alts_3347_, lean_object* v___x_3348_, lean_object* v___x_3349_, lean_object* v_remaining_x27_3350_, lean_object* v___f_3351_, lean_object* v_inst_3352_, lean_object* v___x_3353_, lean_object* v_liftWith_3354_, lean_object* v_restoreM_3355_, lean_object* v_matchEqns_3356_){
_start:
{
lean_object* v_splitterName_3357_; lean_object* v_splitterMatchInfo_3358_; lean_object* v___x_3359_; lean_object* v_aux2_3360_; lean_object* v_aux2_3361_; lean_object* v_aux2_3362_; lean_object* v___x_3363_; lean_object* v___f_3364_; lean_object* v___f_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___f_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___f_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; 
v_splitterName_3357_ = lean_ctor_get(v_matchEqns_3356_, 1);
lean_inc_n(v_splitterName_3357_, 2);
v_splitterMatchInfo_3358_ = lean_ctor_get(v_matchEqns_3356_, 2);
lean_inc_ref(v_splitterMatchInfo_3358_);
lean_dec_ref(v_matchEqns_3356_);
v___x_3359_ = l_Lean_mkConst(v_splitterName_3357_, v___x_3330_);
v_aux2_3360_ = l_Lean_mkAppN(v___x_3359_, v_params_x27_3331_);
lean_inc_ref(v_fst_3332_);
v_aux2_3361_ = l_Lean_Expr_app___override(v_aux2_3360_, v_fst_3332_);
v_aux2_3362_ = l_Lean_mkAppN(v_aux2_3361_, v_discrs_x27_3333_);
lean_inc_ref_n(v_aux2_3362_, 2);
v___x_3363_ = l_Lean_indentExpr(v_aux2_3362_);
lean_inc(v___x_3349_);
lean_inc_n(v_toBind_3345_, 3);
v___f_3364_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__49___boxed), 24, 23);
lean_closure_set(v___f_3364_, 0, v_splitterMatchInfo_3358_);
lean_closure_set(v___f_3364_, 1, v_fst_3334_);
lean_closure_set(v___f_3364_, 2, v_numParams_3335_);
lean_closure_set(v___f_3364_, 3, v_numDiscrs_3336_);
lean_closure_set(v___f_3364_, 4, v_altInfos_3337_);
lean_closure_set(v___f_3364_, 5, v_uElimPos_x3f_3338_);
lean_closure_set(v___f_3364_, 6, v_snd_3339_);
lean_closure_set(v___f_3364_, 7, v_overlaps_3340_);
lean_closure_set(v___f_3364_, 8, v_splitterName_3357_);
lean_closure_set(v___f_3364_, 9, v_matcherLevels_3341_);
lean_closure_set(v___f_3364_, 10, v_params_x27_3331_);
lean_closure_set(v___f_3364_, 11, v_fst_3332_);
lean_closure_set(v___f_3364_, 12, v_discrs_x27_3333_);
lean_closure_set(v___f_3364_, 13, v_toPure_3342_);
lean_closure_set(v___f_3364_, 14, v_onRemaining_3343_);
lean_closure_set(v___f_3364_, 15, v_remaining_3344_);
lean_closure_set(v___f_3364_, 16, v_toBind_3345_);
lean_closure_set(v___f_3364_, 17, v_origAltTypes_3346_);
lean_closure_set(v___f_3364_, 18, v_alts_3347_);
lean_closure_set(v___f_3364_, 19, v___x_3348_);
lean_closure_set(v___f_3364_, 20, v___x_3349_);
lean_closure_set(v___f_3364_, 21, v_remaining_x27_3350_);
lean_closure_set(v___f_3364_, 22, v___f_3351_);
lean_inc(v_inst_3352_);
v___f_3365_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__50), 6, 5);
lean_closure_set(v___f_3365_, 0, v___x_3349_);
lean_closure_set(v___f_3365_, 1, v_aux2_3362_);
lean_closure_set(v___f_3365_, 2, v_inst_3352_);
lean_closure_set(v___f_3365_, 3, v_toBind_3345_);
lean_closure_set(v___f_3365_, 4, v___f_3364_);
v___x_3366_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
v___x_3367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
lean_ctor_set(v___x_3367_, 1, v___x_3363_);
v___x_3368_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3367_);
lean_ctor_set(v___x_3368_, 1, v___x_3353_);
v___f_3369_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3369_, 0, v___x_3368_);
v___x_3370_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_3370_, 0, v_aux2_3362_);
v___x_3371_ = lean_apply_2(v_inst_3352_, lean_box(0), v___x_3370_);
v___f_3372_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3372_, 0, v___x_3371_);
lean_closure_set(v___f_3372_, 1, v___f_3369_);
v___x_3373_ = lean_apply_2(v_liftWith_3354_, lean_box(0), v___f_3372_);
v___x_3374_ = lean_apply_1(v_restoreM_3355_, lean_box(0));
v___x_3375_ = lean_apply_4(v_toBind_3345_, lean_box(0), lean_box(0), v___x_3373_, v___x_3374_);
v___x_3376_ = lean_apply_4(v_toBind_3345_, lean_box(0), lean_box(0), v___x_3375_, v___f_3365_);
return v___x_3376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed(lean_object** _args){
lean_object* v___x_3377_ = _args[0];
lean_object* v_params_x27_3378_ = _args[1];
lean_object* v_fst_3379_ = _args[2];
lean_object* v_discrs_x27_3380_ = _args[3];
lean_object* v_fst_3381_ = _args[4];
lean_object* v_numParams_3382_ = _args[5];
lean_object* v_numDiscrs_3383_ = _args[6];
lean_object* v_altInfos_3384_ = _args[7];
lean_object* v_uElimPos_x3f_3385_ = _args[8];
lean_object* v_snd_3386_ = _args[9];
lean_object* v_overlaps_3387_ = _args[10];
lean_object* v_matcherLevels_3388_ = _args[11];
lean_object* v_toPure_3389_ = _args[12];
lean_object* v_onRemaining_3390_ = _args[13];
lean_object* v_remaining_3391_ = _args[14];
lean_object* v_toBind_3392_ = _args[15];
lean_object* v_origAltTypes_3393_ = _args[16];
lean_object* v_alts_3394_ = _args[17];
lean_object* v___x_3395_ = _args[18];
lean_object* v___x_3396_ = _args[19];
lean_object* v_remaining_x27_3397_ = _args[20];
lean_object* v___f_3398_ = _args[21];
lean_object* v_inst_3399_ = _args[22];
lean_object* v___x_3400_ = _args[23];
lean_object* v_liftWith_3401_ = _args[24];
lean_object* v_restoreM_3402_ = _args[25];
lean_object* v_matchEqns_3403_ = _args[26];
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__53(v___x_3377_, v_params_x27_3378_, v_fst_3379_, v_discrs_x27_3380_, v_fst_3381_, v_numParams_3382_, v_numDiscrs_3383_, v_altInfos_3384_, v_uElimPos_x3f_3385_, v_snd_3386_, v_overlaps_3387_, v_matcherLevels_3388_, v_toPure_3389_, v_onRemaining_3390_, v_remaining_3391_, v_toBind_3392_, v_origAltTypes_3393_, v_alts_3394_, v___x_3395_, v___x_3396_, v_remaining_x27_3397_, v___f_3398_, v_inst_3399_, v___x_3400_, v_liftWith_3401_, v_restoreM_3402_, v_matchEqns_3403_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51(lean_object* v___x_3405_, lean_object* v_params_x27_3406_, lean_object* v_fst_3407_, lean_object* v_discrs_x27_3408_, lean_object* v_fst_3409_, lean_object* v_numParams_3410_, lean_object* v_numDiscrs_3411_, lean_object* v_altInfos_3412_, lean_object* v_uElimPos_x3f_3413_, lean_object* v_snd_3414_, lean_object* v_overlaps_3415_, lean_object* v_matcherLevels_3416_, lean_object* v_toPure_3417_, lean_object* v_onRemaining_3418_, lean_object* v_remaining_3419_, lean_object* v_toBind_3420_, lean_object* v_alts_3421_, lean_object* v___x_3422_, lean_object* v___x_3423_, lean_object* v_remaining_x27_3424_, lean_object* v___f_3425_, lean_object* v_inst_3426_, lean_object* v___x_3427_, lean_object* v_liftWith_3428_, lean_object* v_restoreM_3429_, lean_object* v_matcherName_3430_, lean_object* v_origAltTypes_3431_){
_start:
{
lean_object* v___f_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; 
lean_inc(v_inst_3426_);
lean_inc(v_toBind_3420_);
v___f_3432_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__53___boxed), 27, 26);
lean_closure_set(v___f_3432_, 0, v___x_3405_);
lean_closure_set(v___f_3432_, 1, v_params_x27_3406_);
lean_closure_set(v___f_3432_, 2, v_fst_3407_);
lean_closure_set(v___f_3432_, 3, v_discrs_x27_3408_);
lean_closure_set(v___f_3432_, 4, v_fst_3409_);
lean_closure_set(v___f_3432_, 5, v_numParams_3410_);
lean_closure_set(v___f_3432_, 6, v_numDiscrs_3411_);
lean_closure_set(v___f_3432_, 7, v_altInfos_3412_);
lean_closure_set(v___f_3432_, 8, v_uElimPos_x3f_3413_);
lean_closure_set(v___f_3432_, 9, v_snd_3414_);
lean_closure_set(v___f_3432_, 10, v_overlaps_3415_);
lean_closure_set(v___f_3432_, 11, v_matcherLevels_3416_);
lean_closure_set(v___f_3432_, 12, v_toPure_3417_);
lean_closure_set(v___f_3432_, 13, v_onRemaining_3418_);
lean_closure_set(v___f_3432_, 14, v_remaining_3419_);
lean_closure_set(v___f_3432_, 15, v_toBind_3420_);
lean_closure_set(v___f_3432_, 16, v_origAltTypes_3431_);
lean_closure_set(v___f_3432_, 17, v_alts_3421_);
lean_closure_set(v___f_3432_, 18, v___x_3422_);
lean_closure_set(v___f_3432_, 19, v___x_3423_);
lean_closure_set(v___f_3432_, 20, v_remaining_x27_3424_);
lean_closure_set(v___f_3432_, 21, v___f_3425_);
lean_closure_set(v___f_3432_, 22, v_inst_3426_);
lean_closure_set(v___f_3432_, 23, v___x_3427_);
lean_closure_set(v___f_3432_, 24, v_liftWith_3428_);
lean_closure_set(v___f_3432_, 25, v_restoreM_3429_);
v___x_3433_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_getEquationsFor___boxed), 6, 1);
lean_closure_set(v___x_3433_, 0, v_matcherName_3430_);
v___x_3434_ = lean_apply_2(v_inst_3426_, lean_box(0), v___x_3433_);
v___x_3435_ = lean_apply_4(v_toBind_3420_, lean_box(0), lean_box(0), v___x_3434_, v___f_3432_);
return v___x_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed(lean_object** _args){
lean_object* v___x_3436_ = _args[0];
lean_object* v_params_x27_3437_ = _args[1];
lean_object* v_fst_3438_ = _args[2];
lean_object* v_discrs_x27_3439_ = _args[3];
lean_object* v_fst_3440_ = _args[4];
lean_object* v_numParams_3441_ = _args[5];
lean_object* v_numDiscrs_3442_ = _args[6];
lean_object* v_altInfos_3443_ = _args[7];
lean_object* v_uElimPos_x3f_3444_ = _args[8];
lean_object* v_snd_3445_ = _args[9];
lean_object* v_overlaps_3446_ = _args[10];
lean_object* v_matcherLevels_3447_ = _args[11];
lean_object* v_toPure_3448_ = _args[12];
lean_object* v_onRemaining_3449_ = _args[13];
lean_object* v_remaining_3450_ = _args[14];
lean_object* v_toBind_3451_ = _args[15];
lean_object* v_alts_3452_ = _args[16];
lean_object* v___x_3453_ = _args[17];
lean_object* v___x_3454_ = _args[18];
lean_object* v_remaining_x27_3455_ = _args[19];
lean_object* v___f_3456_ = _args[20];
lean_object* v_inst_3457_ = _args[21];
lean_object* v___x_3458_ = _args[22];
lean_object* v_liftWith_3459_ = _args[23];
lean_object* v_restoreM_3460_ = _args[24];
lean_object* v_matcherName_3461_ = _args[25];
lean_object* v_origAltTypes_3462_ = _args[26];
_start:
{
lean_object* v_res_3463_; 
v_res_3463_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__51(v___x_3436_, v_params_x27_3437_, v_fst_3438_, v_discrs_x27_3439_, v_fst_3440_, v_numParams_3441_, v_numDiscrs_3442_, v_altInfos_3443_, v_uElimPos_x3f_3444_, v_snd_3445_, v_overlaps_3446_, v_matcherLevels_3447_, v_toPure_3448_, v_onRemaining_3449_, v_remaining_3450_, v_toBind_3451_, v_alts_3452_, v___x_3453_, v___x_3454_, v_remaining_x27_3455_, v___f_3456_, v_inst_3457_, v___x_3458_, v_liftWith_3459_, v_restoreM_3460_, v_matcherName_3461_, v_origAltTypes_3462_);
return v_res_3463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52(lean_object* v_alts_3464_, lean_object* v_toPure_3465_, lean_object* v_toBind_3466_, lean_object* v___f_3467_, lean_object* v___x_3468_, lean_object* v_inst_3469_, lean_object* v_inst_3470_, lean_object* v_inst_3471_, uint8_t v___x_3472_, uint8_t v_useSplitter_3473_, lean_object* v_onAlt_3474_, lean_object* v___f_3475_, lean_object* v_fst_3476_, lean_object* v_inst_3477_, lean_object* v_numDiscrEqs_3478_, lean_object* v___x_3479_, lean_object* v_params_x27_3480_, lean_object* v_fst_3481_, lean_object* v_discrs_x27_3482_, lean_object* v_fst_3483_, lean_object* v_numParams_3484_, lean_object* v_numDiscrs_3485_, lean_object* v_altInfos_3486_, lean_object* v_uElimPos_x3f_3487_, lean_object* v_snd_3488_, lean_object* v_overlaps_3489_, lean_object* v_matcherLevels_3490_, lean_object* v_onRemaining_3491_, lean_object* v_remaining_3492_, lean_object* v_remaining_x27_3493_, lean_object* v___x_3494_, lean_object* v_liftWith_3495_, lean_object* v_restoreM_3496_, lean_object* v_matcherName_3497_, lean_object* v_aux1_3498_, lean_object* v_____r_3499_){
_start:
{
lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___f_3503_; lean_object* v___f_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; 
v___x_3500_ = lean_array_get_size(v_alts_3464_);
v___x_3501_ = lean_box(v___x_3472_);
v___x_3502_ = lean_box(v_useSplitter_3473_);
lean_inc_n(v_inst_3470_, 2);
lean_inc(v___x_3468_);
lean_inc_n(v_toBind_3466_, 2);
lean_inc(v_toPure_3465_);
v___f_3503_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__46___boxed), 19, 15);
lean_closure_set(v___f_3503_, 0, v___x_3500_);
lean_closure_set(v___f_3503_, 1, v_toPure_3465_);
lean_closure_set(v___f_3503_, 2, v_toBind_3466_);
lean_closure_set(v___f_3503_, 3, v___f_3467_);
lean_closure_set(v___f_3503_, 4, v___x_3468_);
lean_closure_set(v___f_3503_, 5, v_inst_3469_);
lean_closure_set(v___f_3503_, 6, v_inst_3470_);
lean_closure_set(v___f_3503_, 7, v_inst_3471_);
lean_closure_set(v___f_3503_, 8, v___x_3501_);
lean_closure_set(v___f_3503_, 9, v___x_3502_);
lean_closure_set(v___f_3503_, 10, v_onAlt_3474_);
lean_closure_set(v___f_3503_, 11, v___f_3475_);
lean_closure_set(v___f_3503_, 12, v_fst_3476_);
lean_closure_set(v___f_3503_, 13, v_inst_3477_);
lean_closure_set(v___f_3503_, 14, v_numDiscrEqs_3478_);
v___f_3504_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__51___boxed), 27, 26);
lean_closure_set(v___f_3504_, 0, v___x_3479_);
lean_closure_set(v___f_3504_, 1, v_params_x27_3480_);
lean_closure_set(v___f_3504_, 2, v_fst_3481_);
lean_closure_set(v___f_3504_, 3, v_discrs_x27_3482_);
lean_closure_set(v___f_3504_, 4, v_fst_3483_);
lean_closure_set(v___f_3504_, 5, v_numParams_3484_);
lean_closure_set(v___f_3504_, 6, v_numDiscrs_3485_);
lean_closure_set(v___f_3504_, 7, v_altInfos_3486_);
lean_closure_set(v___f_3504_, 8, v_uElimPos_x3f_3487_);
lean_closure_set(v___f_3504_, 9, v_snd_3488_);
lean_closure_set(v___f_3504_, 10, v_overlaps_3489_);
lean_closure_set(v___f_3504_, 11, v_matcherLevels_3490_);
lean_closure_set(v___f_3504_, 12, v_toPure_3465_);
lean_closure_set(v___f_3504_, 13, v_onRemaining_3491_);
lean_closure_set(v___f_3504_, 14, v_remaining_3492_);
lean_closure_set(v___f_3504_, 15, v_toBind_3466_);
lean_closure_set(v___f_3504_, 16, v_alts_3464_);
lean_closure_set(v___f_3504_, 17, v___x_3468_);
lean_closure_set(v___f_3504_, 18, v___x_3500_);
lean_closure_set(v___f_3504_, 19, v_remaining_x27_3493_);
lean_closure_set(v___f_3504_, 20, v___f_3503_);
lean_closure_set(v___f_3504_, 21, v_inst_3470_);
lean_closure_set(v___f_3504_, 22, v___x_3494_);
lean_closure_set(v___f_3504_, 23, v_liftWith_3495_);
lean_closure_set(v___f_3504_, 24, v_restoreM_3496_);
lean_closure_set(v___f_3504_, 25, v_matcherName_3497_);
v___x_3505_ = lean_alloc_closure((void*)(l_Lean_Meta_inferArgumentTypesN___boxed), 7, 2);
lean_closure_set(v___x_3505_, 0, v___x_3500_);
lean_closure_set(v___x_3505_, 1, v_aux1_3498_);
v___x_3506_ = lean_apply_2(v_inst_3470_, lean_box(0), v___x_3505_);
v___x_3507_ = lean_apply_4(v_toBind_3466_, lean_box(0), lean_box(0), v___x_3506_, v___f_3504_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed(lean_object** _args){
lean_object* v_alts_3508_ = _args[0];
lean_object* v_toPure_3509_ = _args[1];
lean_object* v_toBind_3510_ = _args[2];
lean_object* v___f_3511_ = _args[3];
lean_object* v___x_3512_ = _args[4];
lean_object* v_inst_3513_ = _args[5];
lean_object* v_inst_3514_ = _args[6];
lean_object* v_inst_3515_ = _args[7];
lean_object* v___x_3516_ = _args[8];
lean_object* v_useSplitter_3517_ = _args[9];
lean_object* v_onAlt_3518_ = _args[10];
lean_object* v___f_3519_ = _args[11];
lean_object* v_fst_3520_ = _args[12];
lean_object* v_inst_3521_ = _args[13];
lean_object* v_numDiscrEqs_3522_ = _args[14];
lean_object* v___x_3523_ = _args[15];
lean_object* v_params_x27_3524_ = _args[16];
lean_object* v_fst_3525_ = _args[17];
lean_object* v_discrs_x27_3526_ = _args[18];
lean_object* v_fst_3527_ = _args[19];
lean_object* v_numParams_3528_ = _args[20];
lean_object* v_numDiscrs_3529_ = _args[21];
lean_object* v_altInfos_3530_ = _args[22];
lean_object* v_uElimPos_x3f_3531_ = _args[23];
lean_object* v_snd_3532_ = _args[24];
lean_object* v_overlaps_3533_ = _args[25];
lean_object* v_matcherLevels_3534_ = _args[26];
lean_object* v_onRemaining_3535_ = _args[27];
lean_object* v_remaining_3536_ = _args[28];
lean_object* v_remaining_x27_3537_ = _args[29];
lean_object* v___x_3538_ = _args[30];
lean_object* v_liftWith_3539_ = _args[31];
lean_object* v_restoreM_3540_ = _args[32];
lean_object* v_matcherName_3541_ = _args[33];
lean_object* v_aux1_3542_ = _args[34];
lean_object* v_____r_3543_ = _args[35];
_start:
{
uint8_t v___x_16515__boxed_3544_; uint8_t v_useSplitter_boxed_3545_; lean_object* v_res_3546_; 
v___x_16515__boxed_3544_ = lean_unbox(v___x_3516_);
v_useSplitter_boxed_3545_ = lean_unbox(v_useSplitter_3517_);
v_res_3546_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__52(v_alts_3508_, v_toPure_3509_, v_toBind_3510_, v___f_3511_, v___x_3512_, v_inst_3513_, v_inst_3514_, v_inst_3515_, v___x_16515__boxed_3544_, v_useSplitter_boxed_3545_, v_onAlt_3518_, v___f_3519_, v_fst_3520_, v_inst_3521_, v_numDiscrEqs_3522_, v___x_3523_, v_params_x27_3524_, v_fst_3525_, v_discrs_x27_3526_, v_fst_3527_, v_numParams_3528_, v_numDiscrs_3529_, v_altInfos_3530_, v_uElimPos_x3f_3531_, v_snd_3532_, v_overlaps_3533_, v_matcherLevels_3534_, v_onRemaining_3535_, v_remaining_3536_, v_remaining_x27_3537_, v___x_3538_, v_liftWith_3539_, v_restoreM_3540_, v_matcherName_3541_, v_aux1_3542_, v_____r_3543_);
return v_res_3546_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__0(void){
_start:
{
lean_object* v___x_3547_; 
v___x_3547_ = lean_mk_string_unchecked("failed to transform matcher, type error when constructing new motive:", 69, 69);
return v___x_3547_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1(void){
_start:
{
lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3548_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__0);
v___x_3549_ = l_Lean_stringToMessageData(v___x_3548_);
return v___x_3549_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__2(void){
_start:
{
lean_object* v___x_3550_; 
v___x_3550_ = lean_mk_string_unchecked("failed to transform matcher, type error when constructing new pre-splitter motive:", 82, 82);
return v___x_3550_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3(void){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3551_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__2);
v___x_3552_ = l_Lean_stringToMessageData(v___x_3551_);
return v___x_3552_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__4(void){
_start:
{
lean_object* v___x_3553_; 
v___x_3553_ = lean_mk_string_unchecked("\nfailed with", 12, 12);
return v___x_3553_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5(void){
_start:
{
lean_object* v___x_3554_; lean_object* v___x_3555_; 
v___x_3554_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__4, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__4);
v___x_3555_ = l_Lean_stringToMessageData(v___x_3554_);
return v___x_3555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56(lean_object* v_numParams_3556_, lean_object* v_numDiscrs_3557_, lean_object* v_altInfos_3558_, lean_object* v_uElimPos_x3f_3559_, lean_object* v_snd_3560_, lean_object* v_overlaps_3561_, lean_object* v_matcherName_3562_, lean_object* v_matcherLevels_3563_, lean_object* v_params_x27_3564_, lean_object* v_fst_3565_, lean_object* v_discrs_x27_3566_, lean_object* v_toPure_3567_, lean_object* v_onRemaining_3568_, lean_object* v_remaining_3569_, lean_object* v_toBind_3570_, lean_object* v_inst_3571_, lean_object* v_alts_3572_, lean_object* v___f_3573_, uint8_t v___x_3574_, lean_object* v_inst_3575_, lean_object* v_remaining_x27_3576_, lean_object* v_onAlt_3577_, lean_object* v_inst_3578_, lean_object* v___f_3579_, lean_object* v_matcherApp_3580_, lean_object* v___x_3581_, uint8_t v_useSplitter_3582_, uint8_t v_isCasesOn_3583_, lean_object* v___f_3584_, lean_object* v_inst_3585_, lean_object* v___f_3586_, lean_object* v_numDiscrEqs_3587_, lean_object* v_____s_3588_){
_start:
{
lean_object* v_snd_3589_; lean_object* v_fst_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3651_; 
v_snd_3589_ = lean_ctor_get(v_____s_3588_, 1);
v_fst_3590_ = lean_ctor_get(v_____s_3588_, 0);
v_isSharedCheck_3651_ = !lean_is_exclusive(v_____s_3588_);
if (v_isSharedCheck_3651_ == 0)
{
v___x_3592_ = v_____s_3588_;
v_isShared_3593_ = v_isSharedCheck_3651_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_snd_3589_);
lean_inc(v_fst_3590_);
lean_dec(v_____s_3588_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3651_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v_fst_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3649_; 
v_fst_3594_ = lean_ctor_get(v_snd_3589_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v_snd_3589_);
if (v_isSharedCheck_3649_ == 0)
{
lean_object* v_unused_3650_; 
v_unused_3650_ = lean_ctor_get(v_snd_3589_, 1);
lean_dec(v_unused_3650_);
v___x_3596_ = v_snd_3589_;
v_isShared_3597_ = v_isSharedCheck_3649_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_fst_3594_);
lean_dec(v_snd_3589_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3649_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___f_3598_; 
lean_inc(v_toBind_3570_);
lean_inc_ref(v_remaining_3569_);
lean_inc(v_onRemaining_3568_);
lean_inc(v_toPure_3567_);
lean_inc_ref(v_discrs_x27_3566_);
lean_inc_ref(v_fst_3565_);
lean_inc_ref(v_params_x27_3564_);
lean_inc_ref(v_matcherLevels_3563_);
lean_inc(v_matcherName_3562_);
lean_inc_ref(v_overlaps_3561_);
lean_inc_ref(v_snd_3560_);
lean_inc(v_uElimPos_x3f_3559_);
lean_inc_ref(v_altInfos_3558_);
lean_inc(v_numDiscrs_3557_);
lean_inc(v_numParams_3556_);
lean_inc(v_fst_3590_);
v___f_3598_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__21___boxed), 17, 16);
lean_closure_set(v___f_3598_, 0, v_fst_3590_);
lean_closure_set(v___f_3598_, 1, v_numParams_3556_);
lean_closure_set(v___f_3598_, 2, v_numDiscrs_3557_);
lean_closure_set(v___f_3598_, 3, v_altInfos_3558_);
lean_closure_set(v___f_3598_, 4, v_uElimPos_x3f_3559_);
lean_closure_set(v___f_3598_, 5, v_snd_3560_);
lean_closure_set(v___f_3598_, 6, v_overlaps_3561_);
lean_closure_set(v___f_3598_, 7, v_matcherName_3562_);
lean_closure_set(v___f_3598_, 8, v_matcherLevels_3563_);
lean_closure_set(v___f_3598_, 9, v_params_x27_3564_);
lean_closure_set(v___f_3598_, 10, v_fst_3565_);
lean_closure_set(v___f_3598_, 11, v_discrs_x27_3566_);
lean_closure_set(v___f_3598_, 12, v_toPure_3567_);
lean_closure_set(v___f_3598_, 13, v_onRemaining_3568_);
lean_closure_set(v___f_3598_, 14, v_remaining_3569_);
lean_closure_set(v___f_3598_, 15, v_toBind_3570_);
if (v_useSplitter_3582_ == 0)
{
lean_del_object(v___x_3592_);
lean_dec(v_fst_3590_);
lean_dec(v_numDiscrEqs_3587_);
lean_dec(v___f_3586_);
lean_dec_ref(v_inst_3585_);
lean_dec(v___f_3584_);
lean_dec_ref(v_remaining_3569_);
lean_dec(v_onRemaining_3568_);
lean_dec_ref(v_overlaps_3561_);
lean_dec_ref(v_snd_3560_);
lean_dec(v_uElimPos_x3f_3559_);
lean_dec_ref(v_altInfos_3558_);
lean_dec(v_numDiscrs_3557_);
lean_dec(v_numParams_3556_);
goto v___jp_3599_;
}
else
{
if (v_isCasesOn_3583_ == 0)
{
lean_object* v_liftWith_3624_; lean_object* v_restoreM_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v_aux1_3628_; lean_object* v_aux1_3629_; lean_object* v_aux1_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3634_; 
lean_dec_ref(v___f_3598_);
lean_del_object(v___x_3596_);
lean_dec_ref(v_matcherApp_3580_);
lean_dec(v___f_3579_);
lean_dec(v___f_3573_);
v_liftWith_3624_ = lean_ctor_get(v_inst_3571_, 0);
lean_inc(v_liftWith_3624_);
v_restoreM_3625_ = lean_ctor_get(v_inst_3571_, 1);
lean_inc(v_restoreM_3625_);
lean_inc_ref(v_matcherLevels_3563_);
v___x_3626_ = lean_array_to_list(v_matcherLevels_3563_);
lean_inc(v___x_3626_);
lean_inc(v_matcherName_3562_);
v___x_3627_ = l_Lean_mkConst(v_matcherName_3562_, v___x_3626_);
v_aux1_3628_ = l_Lean_mkAppN(v___x_3627_, v_params_x27_3564_);
lean_inc_ref(v_fst_3565_);
v_aux1_3629_ = l_Lean_Expr_app___override(v_aux1_3628_, v_fst_3565_);
v_aux1_3630_ = l_Lean_mkAppN(v_aux1_3629_, v_discrs_x27_3566_);
lean_inc_ref(v_aux1_3630_);
v___x_3631_ = l_Lean_indentExpr(v_aux1_3630_);
v___x_3632_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3);
if (v_isShared_3593_ == 0)
{
lean_ctor_set_tag(v___x_3592_, 7);
lean_ctor_set(v___x_3592_, 1, v___x_3631_);
lean_ctor_set(v___x_3592_, 0, v___x_3632_);
v___x_3634_ = v___x_3592_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v___x_3632_);
lean_ctor_set(v_reuseFailAlloc_3648_, 1, v___x_3631_);
v___x_3634_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___f_3638_; lean_object* v___x_3639_; lean_object* v___f_3640_; lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___f_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3635_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5);
v___x_3636_ = lean_box(v___x_3574_);
v___x_3637_ = lean_box(v_useSplitter_3582_);
lean_inc_ref(v_aux1_3630_);
lean_inc(v_restoreM_3625_);
lean_inc(v_liftWith_3624_);
lean_inc(v_inst_3575_);
lean_inc_n(v_toBind_3570_, 2);
v___f_3638_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__52___boxed), 36, 35);
lean_closure_set(v___f_3638_, 0, v_alts_3572_);
lean_closure_set(v___f_3638_, 1, v_toPure_3567_);
lean_closure_set(v___f_3638_, 2, v_toBind_3570_);
lean_closure_set(v___f_3638_, 3, v___f_3584_);
lean_closure_set(v___f_3638_, 4, v___x_3581_);
lean_closure_set(v___f_3638_, 5, v_inst_3578_);
lean_closure_set(v___f_3638_, 6, v_inst_3575_);
lean_closure_set(v___f_3638_, 7, v_inst_3585_);
lean_closure_set(v___f_3638_, 8, v___x_3636_);
lean_closure_set(v___f_3638_, 9, v___x_3637_);
lean_closure_set(v___f_3638_, 10, v_onAlt_3577_);
lean_closure_set(v___f_3638_, 11, v___f_3586_);
lean_closure_set(v___f_3638_, 12, v_fst_3594_);
lean_closure_set(v___f_3638_, 13, v_inst_3571_);
lean_closure_set(v___f_3638_, 14, v_numDiscrEqs_3587_);
lean_closure_set(v___f_3638_, 15, v___x_3626_);
lean_closure_set(v___f_3638_, 16, v_params_x27_3564_);
lean_closure_set(v___f_3638_, 17, v_fst_3565_);
lean_closure_set(v___f_3638_, 18, v_discrs_x27_3566_);
lean_closure_set(v___f_3638_, 19, v_fst_3590_);
lean_closure_set(v___f_3638_, 20, v_numParams_3556_);
lean_closure_set(v___f_3638_, 21, v_numDiscrs_3557_);
lean_closure_set(v___f_3638_, 22, v_altInfos_3558_);
lean_closure_set(v___f_3638_, 23, v_uElimPos_x3f_3559_);
lean_closure_set(v___f_3638_, 24, v_snd_3560_);
lean_closure_set(v___f_3638_, 25, v_overlaps_3561_);
lean_closure_set(v___f_3638_, 26, v_matcherLevels_3563_);
lean_closure_set(v___f_3638_, 27, v_onRemaining_3568_);
lean_closure_set(v___f_3638_, 28, v_remaining_3569_);
lean_closure_set(v___f_3638_, 29, v_remaining_x27_3576_);
lean_closure_set(v___f_3638_, 30, v___x_3635_);
lean_closure_set(v___f_3638_, 31, v_liftWith_3624_);
lean_closure_set(v___f_3638_, 32, v_restoreM_3625_);
lean_closure_set(v___f_3638_, 33, v_matcherName_3562_);
lean_closure_set(v___f_3638_, 34, v_aux1_3630_);
v___x_3639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3639_, 0, v___x_3634_);
lean_ctor_set(v___x_3639_, 1, v___x_3635_);
v___f_3640_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3640_, 0, v___x_3639_);
v___x_3641_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_3641_, 0, v_aux1_3630_);
v___x_3642_ = lean_apply_2(v_inst_3575_, lean_box(0), v___x_3641_);
v___f_3643_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3643_, 0, v___x_3642_);
lean_closure_set(v___f_3643_, 1, v___f_3640_);
v___x_3644_ = lean_apply_2(v_liftWith_3624_, lean_box(0), v___f_3643_);
v___x_3645_ = lean_apply_1(v_restoreM_3625_, lean_box(0));
v___x_3646_ = lean_apply_4(v_toBind_3570_, lean_box(0), lean_box(0), v___x_3644_, v___x_3645_);
v___x_3647_ = lean_apply_4(v_toBind_3570_, lean_box(0), lean_box(0), v___x_3646_, v___f_3638_);
return v___x_3647_;
}
}
else
{
lean_del_object(v___x_3592_);
lean_dec(v_fst_3590_);
lean_dec(v_numDiscrEqs_3587_);
lean_dec(v___f_3586_);
lean_dec_ref(v_inst_3585_);
lean_dec(v___f_3584_);
lean_dec_ref(v_remaining_3569_);
lean_dec(v_onRemaining_3568_);
lean_dec_ref(v_overlaps_3561_);
lean_dec_ref(v_snd_3560_);
lean_dec(v_uElimPos_x3f_3559_);
lean_dec_ref(v_altInfos_3558_);
lean_dec(v_numDiscrs_3557_);
lean_dec(v_numParams_3556_);
goto v___jp_3599_;
}
}
v___jp_3599_:
{
lean_object* v_liftWith_3600_; lean_object* v_restoreM_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v_aux_3604_; lean_object* v_aux_3605_; lean_object* v_aux_3606_; lean_object* v___x_3607_; uint8_t v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___f_3611_; lean_object* v___x_3612_; lean_object* v___x_3614_; 
v_liftWith_3600_ = lean_ctor_get(v_inst_3571_, 0);
lean_inc(v_liftWith_3600_);
v_restoreM_3601_ = lean_ctor_get(v_inst_3571_, 1);
lean_inc(v_restoreM_3601_);
v___x_3602_ = lean_array_to_list(v_matcherLevels_3563_);
v___x_3603_ = l_Lean_mkConst(v_matcherName_3562_, v___x_3602_);
v_aux_3604_ = l_Lean_mkAppN(v___x_3603_, v_params_x27_3564_);
lean_dec_ref(v_params_x27_3564_);
v_aux_3605_ = l_Lean_Expr_app___override(v_aux_3604_, v_fst_3565_);
v_aux_3606_ = l_Lean_mkAppN(v_aux_3605_, v_discrs_x27_3566_);
lean_dec_ref(v_discrs_x27_3566_);
lean_inc_ref_n(v_aux_3606_, 2);
v___x_3607_ = l_Lean_indentExpr(v_aux_3606_);
v___x_3608_ = 1;
v___x_3609_ = lean_box(v___x_3574_);
v___x_3610_ = lean_box(v___x_3608_);
lean_inc(v_inst_3575_);
lean_inc(v_toBind_3570_);
v___f_3611_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__31___boxed), 18, 17);
lean_closure_set(v___f_3611_, 0, v_alts_3572_);
lean_closure_set(v___f_3611_, 1, v_toPure_3567_);
lean_closure_set(v___f_3611_, 2, v_toBind_3570_);
lean_closure_set(v___f_3611_, 3, v___f_3573_);
lean_closure_set(v___f_3611_, 4, v___x_3609_);
lean_closure_set(v___f_3611_, 5, v___x_3610_);
lean_closure_set(v___f_3611_, 6, v_inst_3575_);
lean_closure_set(v___f_3611_, 7, v_remaining_x27_3576_);
lean_closure_set(v___f_3611_, 8, v_onAlt_3577_);
lean_closure_set(v___f_3611_, 9, v_inst_3571_);
lean_closure_set(v___f_3611_, 10, v_inst_3578_);
lean_closure_set(v___f_3611_, 11, v___f_3579_);
lean_closure_set(v___f_3611_, 12, v_fst_3594_);
lean_closure_set(v___f_3611_, 13, v_matcherApp_3580_);
lean_closure_set(v___f_3611_, 14, v___x_3581_);
lean_closure_set(v___f_3611_, 15, v___f_3598_);
lean_closure_set(v___f_3611_, 16, v_aux_3606_);
v___x_3612_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1);
if (v_isShared_3597_ == 0)
{
lean_ctor_set_tag(v___x_3596_, 7);
lean_ctor_set(v___x_3596_, 1, v___x_3607_);
lean_ctor_set(v___x_3596_, 0, v___x_3612_);
v___x_3614_ = v___x_3596_;
goto v_reusejp_3613_;
}
else
{
lean_object* v_reuseFailAlloc_3623_; 
v_reuseFailAlloc_3623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3623_, 0, v___x_3612_);
lean_ctor_set(v_reuseFailAlloc_3623_, 1, v___x_3607_);
v___x_3614_ = v_reuseFailAlloc_3623_;
goto v_reusejp_3613_;
}
v_reusejp_3613_:
{
lean_object* v___f_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___f_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___f_3615_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_3615_, 0, v___x_3614_);
v___x_3616_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_3616_, 0, v_aux_3606_);
v___x_3617_ = lean_apply_2(v_inst_3575_, lean_box(0), v___x_3616_);
v___f_3618_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__33___boxed), 8, 2);
lean_closure_set(v___f_3618_, 0, v___x_3617_);
lean_closure_set(v___f_3618_, 1, v___f_3615_);
v___x_3619_ = lean_apply_2(v_liftWith_3600_, lean_box(0), v___f_3618_);
v___x_3620_ = lean_apply_1(v_restoreM_3601_, lean_box(0));
lean_inc(v_toBind_3570_);
v___x_3621_ = lean_apply_4(v_toBind_3570_, lean_box(0), lean_box(0), v___x_3619_, v___x_3620_);
v___x_3622_ = lean_apply_4(v_toBind_3570_, lean_box(0), lean_box(0), v___x_3621_, v___f_3611_);
return v___x_3622_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__56___boxed(lean_object** _args){
lean_object* v_numParams_3652_ = _args[0];
lean_object* v_numDiscrs_3653_ = _args[1];
lean_object* v_altInfos_3654_ = _args[2];
lean_object* v_uElimPos_x3f_3655_ = _args[3];
lean_object* v_snd_3656_ = _args[4];
lean_object* v_overlaps_3657_ = _args[5];
lean_object* v_matcherName_3658_ = _args[6];
lean_object* v_matcherLevels_3659_ = _args[7];
lean_object* v_params_x27_3660_ = _args[8];
lean_object* v_fst_3661_ = _args[9];
lean_object* v_discrs_x27_3662_ = _args[10];
lean_object* v_toPure_3663_ = _args[11];
lean_object* v_onRemaining_3664_ = _args[12];
lean_object* v_remaining_3665_ = _args[13];
lean_object* v_toBind_3666_ = _args[14];
lean_object* v_inst_3667_ = _args[15];
lean_object* v_alts_3668_ = _args[16];
lean_object* v___f_3669_ = _args[17];
lean_object* v___x_3670_ = _args[18];
lean_object* v_inst_3671_ = _args[19];
lean_object* v_remaining_x27_3672_ = _args[20];
lean_object* v_onAlt_3673_ = _args[21];
lean_object* v_inst_3674_ = _args[22];
lean_object* v___f_3675_ = _args[23];
lean_object* v_matcherApp_3676_ = _args[24];
lean_object* v___x_3677_ = _args[25];
lean_object* v_useSplitter_3678_ = _args[26];
lean_object* v_isCasesOn_3679_ = _args[27];
lean_object* v___f_3680_ = _args[28];
lean_object* v_inst_3681_ = _args[29];
lean_object* v___f_3682_ = _args[30];
lean_object* v_numDiscrEqs_3683_ = _args[31];
lean_object* v_____s_3684_ = _args[32];
_start:
{
uint8_t v___x_16587__boxed_3685_; uint8_t v_useSplitter_boxed_3686_; uint8_t v_isCasesOn_boxed_3687_; lean_object* v_res_3688_; 
v___x_16587__boxed_3685_ = lean_unbox(v___x_3670_);
v_useSplitter_boxed_3686_ = lean_unbox(v_useSplitter_3678_);
v_isCasesOn_boxed_3687_ = lean_unbox(v_isCasesOn_3679_);
v_res_3688_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__56(v_numParams_3652_, v_numDiscrs_3653_, v_altInfos_3654_, v_uElimPos_x3f_3655_, v_snd_3656_, v_overlaps_3657_, v_matcherName_3658_, v_matcherLevels_3659_, v_params_x27_3660_, v_fst_3661_, v_discrs_x27_3662_, v_toPure_3663_, v_onRemaining_3664_, v_remaining_3665_, v_toBind_3666_, v_inst_3667_, v_alts_3668_, v___f_3669_, v___x_16587__boxed_3685_, v_inst_3671_, v_remaining_x27_3672_, v_onAlt_3673_, v_inst_3674_, v___f_3675_, v_matcherApp_3676_, v___x_3677_, v_useSplitter_boxed_3686_, v_isCasesOn_boxed_3687_, v___f_3680_, v_inst_3681_, v___f_3682_, v_numDiscrEqs_3683_, v_____s_3684_);
return v_res_3688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54(lean_object* v_numParams_3689_, lean_object* v_numDiscrs_3690_, lean_object* v_altInfos_3691_, lean_object* v_uElimPos_x3f_3692_, lean_object* v_snd_3693_, lean_object* v_overlaps_3694_, lean_object* v_matcherName_3695_, lean_object* v_params_x27_3696_, lean_object* v_fst_3697_, lean_object* v_discrs_x27_3698_, lean_object* v_toPure_3699_, lean_object* v_onRemaining_3700_, lean_object* v_remaining_3701_, lean_object* v_toBind_3702_, lean_object* v_inst_3703_, lean_object* v_alts_3704_, lean_object* v___f_3705_, uint8_t v___x_3706_, lean_object* v_inst_3707_, lean_object* v_onAlt_3708_, lean_object* v_inst_3709_, lean_object* v___f_3710_, lean_object* v_matcherApp_3711_, uint8_t v_useSplitter_3712_, uint8_t v_isCasesOn_3713_, lean_object* v___f_3714_, lean_object* v_inst_3715_, lean_object* v___f_3716_, lean_object* v_numDiscrEqs_3717_, lean_object* v_fst_3718_, lean_object* v___f_3719_, lean_object* v_matcherLevels_3720_){
_start:
{
lean_object* v___x_3721_; lean_object* v_remaining_x27_3722_; lean_object* v___x_3723_; lean_object* v___x_3724_; lean_object* v___x_3725_; lean_object* v___f_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; size_t v_sz_3733_; size_t v___x_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; 
v___x_3721_ = lean_unsigned_to_nat(0u);
v_remaining_x27_3722_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0, &l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0);
v___x_3723_ = lean_box(v___x_3706_);
v___x_3724_ = lean_box(v_useSplitter_3712_);
v___x_3725_ = lean_box(v_isCasesOn_3713_);
lean_inc_ref(v_inst_3709_);
lean_inc(v_toBind_3702_);
lean_inc_ref(v_discrs_x27_3698_);
v___f_3726_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__56___boxed), 33, 32);
lean_closure_set(v___f_3726_, 0, v_numParams_3689_);
lean_closure_set(v___f_3726_, 1, v_numDiscrs_3690_);
lean_closure_set(v___f_3726_, 2, v_altInfos_3691_);
lean_closure_set(v___f_3726_, 3, v_uElimPos_x3f_3692_);
lean_closure_set(v___f_3726_, 4, v_snd_3693_);
lean_closure_set(v___f_3726_, 5, v_overlaps_3694_);
lean_closure_set(v___f_3726_, 6, v_matcherName_3695_);
lean_closure_set(v___f_3726_, 7, v_matcherLevels_3720_);
lean_closure_set(v___f_3726_, 8, v_params_x27_3696_);
lean_closure_set(v___f_3726_, 9, v_fst_3697_);
lean_closure_set(v___f_3726_, 10, v_discrs_x27_3698_);
lean_closure_set(v___f_3726_, 11, v_toPure_3699_);
lean_closure_set(v___f_3726_, 12, v_onRemaining_3700_);
lean_closure_set(v___f_3726_, 13, v_remaining_3701_);
lean_closure_set(v___f_3726_, 14, v_toBind_3702_);
lean_closure_set(v___f_3726_, 15, v_inst_3703_);
lean_closure_set(v___f_3726_, 16, v_alts_3704_);
lean_closure_set(v___f_3726_, 17, v___f_3705_);
lean_closure_set(v___f_3726_, 18, v___x_3723_);
lean_closure_set(v___f_3726_, 19, v_inst_3707_);
lean_closure_set(v___f_3726_, 20, v_remaining_x27_3722_);
lean_closure_set(v___f_3726_, 21, v_onAlt_3708_);
lean_closure_set(v___f_3726_, 22, v_inst_3709_);
lean_closure_set(v___f_3726_, 23, v___f_3710_);
lean_closure_set(v___f_3726_, 24, v_matcherApp_3711_);
lean_closure_set(v___f_3726_, 25, v___x_3721_);
lean_closure_set(v___f_3726_, 26, v___x_3724_);
lean_closure_set(v___f_3726_, 27, v___x_3725_);
lean_closure_set(v___f_3726_, 28, v___f_3714_);
lean_closure_set(v___f_3726_, 29, v_inst_3715_);
lean_closure_set(v___f_3726_, 30, v___f_3716_);
lean_closure_set(v___f_3726_, 31, v_numDiscrEqs_3717_);
v___x_3727_ = l_Array_reverse___redArg(v_fst_3718_);
v___x_3728_ = lean_array_get_size(v___x_3727_);
v___x_3729_ = l_Array_toSubarray___redArg(v___x_3727_, v___x_3721_, v___x_3728_);
v___x_3730_ = l_Array_reverse___redArg(v_discrs_x27_3698_);
v___x_3731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3731_, 0, v___x_3721_);
lean_ctor_set(v___x_3731_, 1, v___x_3729_);
v___x_3732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3732_, 0, v_remaining_x27_3722_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
v_sz_3733_ = lean_array_size(v___x_3730_);
v___x_3734_ = ((size_t)0ULL);
v___x_3735_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3709_, v___x_3730_, v___f_3719_, v_sz_3733_, v___x_3734_, v___x_3732_);
v___x_3736_ = lean_apply_4(v_toBind_3702_, lean_box(0), lean_box(0), v___x_3735_, v___f_3726_);
return v___x_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed(lean_object** _args){
lean_object* v_numParams_3737_ = _args[0];
lean_object* v_numDiscrs_3738_ = _args[1];
lean_object* v_altInfos_3739_ = _args[2];
lean_object* v_uElimPos_x3f_3740_ = _args[3];
lean_object* v_snd_3741_ = _args[4];
lean_object* v_overlaps_3742_ = _args[5];
lean_object* v_matcherName_3743_ = _args[6];
lean_object* v_params_x27_3744_ = _args[7];
lean_object* v_fst_3745_ = _args[8];
lean_object* v_discrs_x27_3746_ = _args[9];
lean_object* v_toPure_3747_ = _args[10];
lean_object* v_onRemaining_3748_ = _args[11];
lean_object* v_remaining_3749_ = _args[12];
lean_object* v_toBind_3750_ = _args[13];
lean_object* v_inst_3751_ = _args[14];
lean_object* v_alts_3752_ = _args[15];
lean_object* v___f_3753_ = _args[16];
lean_object* v___x_3754_ = _args[17];
lean_object* v_inst_3755_ = _args[18];
lean_object* v_onAlt_3756_ = _args[19];
lean_object* v_inst_3757_ = _args[20];
lean_object* v___f_3758_ = _args[21];
lean_object* v_matcherApp_3759_ = _args[22];
lean_object* v_useSplitter_3760_ = _args[23];
lean_object* v_isCasesOn_3761_ = _args[24];
lean_object* v___f_3762_ = _args[25];
lean_object* v_inst_3763_ = _args[26];
lean_object* v___f_3764_ = _args[27];
lean_object* v_numDiscrEqs_3765_ = _args[28];
lean_object* v_fst_3766_ = _args[29];
lean_object* v___f_3767_ = _args[30];
lean_object* v_matcherLevels_3768_ = _args[31];
_start:
{
uint8_t v___x_16736__boxed_3769_; uint8_t v_useSplitter_boxed_3770_; uint8_t v_isCasesOn_boxed_3771_; lean_object* v_res_3772_; 
v___x_16736__boxed_3769_ = lean_unbox(v___x_3754_);
v_useSplitter_boxed_3770_ = lean_unbox(v_useSplitter_3760_);
v_isCasesOn_boxed_3771_ = lean_unbox(v_isCasesOn_3761_);
v_res_3772_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__54(v_numParams_3737_, v_numDiscrs_3738_, v_altInfos_3739_, v_uElimPos_x3f_3740_, v_snd_3741_, v_overlaps_3742_, v_matcherName_3743_, v_params_x27_3744_, v_fst_3745_, v_discrs_x27_3746_, v_toPure_3747_, v_onRemaining_3748_, v_remaining_3749_, v_toBind_3750_, v_inst_3751_, v_alts_3752_, v___f_3753_, v___x_16736__boxed_3769_, v_inst_3755_, v_onAlt_3756_, v_inst_3757_, v___f_3758_, v_matcherApp_3759_, v_useSplitter_boxed_3770_, v_isCasesOn_boxed_3771_, v___f_3762_, v_inst_3763_, v___f_3764_, v_numDiscrEqs_3765_, v_fst_3766_, v___f_3767_, v_matcherLevels_3768_);
return v_res_3772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__55(lean_object* v___f_3773_, lean_object* v_matcherLevels_3774_){
_start:
{
lean_object* v___x_3775_; 
v___x_3775_ = lean_apply_1(v___f_3773_, v_matcherLevels_3774_);
return v___x_3775_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58(lean_object* v_toMatcherInfo_3776_, lean_object* v_matcherName_3777_, lean_object* v_params_x27_3778_, lean_object* v_discrs_x27_3779_, lean_object* v_toPure_3780_, lean_object* v_onRemaining_3781_, lean_object* v_remaining_3782_, lean_object* v_toBind_3783_, lean_object* v_inst_3784_, lean_object* v_alts_3785_, lean_object* v___f_3786_, uint8_t v___x_3787_, lean_object* v_inst_3788_, lean_object* v_onAlt_3789_, lean_object* v_inst_3790_, lean_object* v___f_3791_, lean_object* v_matcherApp_3792_, uint8_t v_useSplitter_3793_, uint8_t v_isCasesOn_3794_, lean_object* v___f_3795_, lean_object* v_inst_3796_, lean_object* v___f_3797_, lean_object* v_numDiscrEqs_3798_, lean_object* v___f_3799_, lean_object* v_matcherLevels_3800_, lean_object* v_____x_3801_){
_start:
{
lean_object* v_snd_3802_; lean_object* v_snd_3803_; lean_object* v_fst_3804_; lean_object* v_fst_3805_; lean_object* v_fst_3806_; lean_object* v_snd_3807_; lean_object* v_numParams_3808_; lean_object* v_numDiscrs_3809_; lean_object* v_altInfos_3810_; lean_object* v_uElimPos_x3f_3811_; lean_object* v_overlaps_3812_; lean_object* v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; lean_object* v___f_3816_; 
v_snd_3802_ = lean_ctor_get(v_____x_3801_, 1);
lean_inc(v_snd_3802_);
v_snd_3803_ = lean_ctor_get(v_snd_3802_, 1);
lean_inc(v_snd_3803_);
v_fst_3804_ = lean_ctor_get(v_____x_3801_, 0);
lean_inc(v_fst_3804_);
lean_dec_ref(v_____x_3801_);
v_fst_3805_ = lean_ctor_get(v_snd_3802_, 0);
lean_inc(v_fst_3805_);
lean_dec(v_snd_3802_);
v_fst_3806_ = lean_ctor_get(v_snd_3803_, 0);
lean_inc(v_fst_3806_);
v_snd_3807_ = lean_ctor_get(v_snd_3803_, 1);
lean_inc(v_snd_3807_);
lean_dec(v_snd_3803_);
v_numParams_3808_ = lean_ctor_get(v_toMatcherInfo_3776_, 0);
lean_inc(v_numParams_3808_);
v_numDiscrs_3809_ = lean_ctor_get(v_toMatcherInfo_3776_, 1);
lean_inc(v_numDiscrs_3809_);
v_altInfos_3810_ = lean_ctor_get(v_toMatcherInfo_3776_, 2);
lean_inc_ref(v_altInfos_3810_);
v_uElimPos_x3f_3811_ = lean_ctor_get(v_toMatcherInfo_3776_, 3);
lean_inc_n(v_uElimPos_x3f_3811_, 2);
v_overlaps_3812_ = lean_ctor_get(v_toMatcherInfo_3776_, 5);
lean_inc_ref(v_overlaps_3812_);
lean_dec_ref(v_toMatcherInfo_3776_);
v___x_3813_ = lean_box(v___x_3787_);
v___x_3814_ = lean_box(v_useSplitter_3793_);
v___x_3815_ = lean_box(v_isCasesOn_3794_);
lean_inc(v_toBind_3783_);
lean_inc(v_toPure_3780_);
v___f_3816_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__54___boxed), 32, 31);
lean_closure_set(v___f_3816_, 0, v_numParams_3808_);
lean_closure_set(v___f_3816_, 1, v_numDiscrs_3809_);
lean_closure_set(v___f_3816_, 2, v_altInfos_3810_);
lean_closure_set(v___f_3816_, 3, v_uElimPos_x3f_3811_);
lean_closure_set(v___f_3816_, 4, v_snd_3807_);
lean_closure_set(v___f_3816_, 5, v_overlaps_3812_);
lean_closure_set(v___f_3816_, 6, v_matcherName_3777_);
lean_closure_set(v___f_3816_, 7, v_params_x27_3778_);
lean_closure_set(v___f_3816_, 8, v_fst_3804_);
lean_closure_set(v___f_3816_, 9, v_discrs_x27_3779_);
lean_closure_set(v___f_3816_, 10, v_toPure_3780_);
lean_closure_set(v___f_3816_, 11, v_onRemaining_3781_);
lean_closure_set(v___f_3816_, 12, v_remaining_3782_);
lean_closure_set(v___f_3816_, 13, v_toBind_3783_);
lean_closure_set(v___f_3816_, 14, v_inst_3784_);
lean_closure_set(v___f_3816_, 15, v_alts_3785_);
lean_closure_set(v___f_3816_, 16, v___f_3786_);
lean_closure_set(v___f_3816_, 17, v___x_3813_);
lean_closure_set(v___f_3816_, 18, v_inst_3788_);
lean_closure_set(v___f_3816_, 19, v_onAlt_3789_);
lean_closure_set(v___f_3816_, 20, v_inst_3790_);
lean_closure_set(v___f_3816_, 21, v___f_3791_);
lean_closure_set(v___f_3816_, 22, v_matcherApp_3792_);
lean_closure_set(v___f_3816_, 23, v___x_3814_);
lean_closure_set(v___f_3816_, 24, v___x_3815_);
lean_closure_set(v___f_3816_, 25, v___f_3795_);
lean_closure_set(v___f_3816_, 26, v_inst_3796_);
lean_closure_set(v___f_3816_, 27, v___f_3797_);
lean_closure_set(v___f_3816_, 28, v_numDiscrEqs_3798_);
lean_closure_set(v___f_3816_, 29, v_fst_3806_);
lean_closure_set(v___f_3816_, 30, v___f_3799_);
if (lean_obj_tag(v_uElimPos_x3f_3811_) == 0)
{
lean_object* v___f_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; 
lean_dec(v_fst_3805_);
v___f_3817_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55), 2, 1);
lean_closure_set(v___f_3817_, 0, v___f_3816_);
v___x_3818_ = lean_apply_2(v_toPure_3780_, lean_box(0), v_matcherLevels_3800_);
v___x_3819_ = lean_apply_4(v_toBind_3783_, lean_box(0), lean_box(0), v___x_3818_, v___f_3817_);
return v___x_3819_;
}
else
{
lean_object* v_val_3820_; lean_object* v___f_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
v_val_3820_ = lean_ctor_get(v_uElimPos_x3f_3811_, 0);
lean_inc(v_val_3820_);
lean_dec_ref(v_uElimPos_x3f_3811_);
v___f_3821_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__55), 2, 1);
lean_closure_set(v___f_3821_, 0, v___f_3816_);
v___x_3822_ = lean_array_set(v_matcherLevels_3800_, v_val_3820_, v_fst_3805_);
lean_dec(v_val_3820_);
v___x_3823_ = lean_apply_2(v_toPure_3780_, lean_box(0), v___x_3822_);
v___x_3824_ = lean_apply_4(v_toBind_3783_, lean_box(0), lean_box(0), v___x_3823_, v___f_3821_);
return v___x_3824_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed(lean_object** _args){
lean_object* v_toMatcherInfo_3825_ = _args[0];
lean_object* v_matcherName_3826_ = _args[1];
lean_object* v_params_x27_3827_ = _args[2];
lean_object* v_discrs_x27_3828_ = _args[3];
lean_object* v_toPure_3829_ = _args[4];
lean_object* v_onRemaining_3830_ = _args[5];
lean_object* v_remaining_3831_ = _args[6];
lean_object* v_toBind_3832_ = _args[7];
lean_object* v_inst_3833_ = _args[8];
lean_object* v_alts_3834_ = _args[9];
lean_object* v___f_3835_ = _args[10];
lean_object* v___x_3836_ = _args[11];
lean_object* v_inst_3837_ = _args[12];
lean_object* v_onAlt_3838_ = _args[13];
lean_object* v_inst_3839_ = _args[14];
lean_object* v___f_3840_ = _args[15];
lean_object* v_matcherApp_3841_ = _args[16];
lean_object* v_useSplitter_3842_ = _args[17];
lean_object* v_isCasesOn_3843_ = _args[18];
lean_object* v___f_3844_ = _args[19];
lean_object* v_inst_3845_ = _args[20];
lean_object* v___f_3846_ = _args[21];
lean_object* v_numDiscrEqs_3847_ = _args[22];
lean_object* v___f_3848_ = _args[23];
lean_object* v_matcherLevels_3849_ = _args[24];
lean_object* v_____x_3850_ = _args[25];
_start:
{
uint8_t v___x_16805__boxed_3851_; uint8_t v_useSplitter_boxed_3852_; uint8_t v_isCasesOn_boxed_3853_; lean_object* v_res_3854_; 
v___x_16805__boxed_3851_ = lean_unbox(v___x_3836_);
v_useSplitter_boxed_3852_ = lean_unbox(v_useSplitter_3842_);
v_isCasesOn_boxed_3853_ = lean_unbox(v_isCasesOn_3843_);
v_res_3854_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__58(v_toMatcherInfo_3825_, v_matcherName_3826_, v_params_x27_3827_, v_discrs_x27_3828_, v_toPure_3829_, v_onRemaining_3830_, v_remaining_3831_, v_toBind_3832_, v_inst_3833_, v_alts_3834_, v___f_3835_, v___x_16805__boxed_3851_, v_inst_3837_, v_onAlt_3838_, v_inst_3839_, v___f_3840_, v_matcherApp_3841_, v_useSplitter_boxed_3852_, v_isCasesOn_boxed_3853_, v___f_3844_, v_inst_3845_, v___f_3846_, v_numDiscrEqs_3847_, v___f_3848_, v_matcherLevels_3849_, v_____x_3850_);
return v_res_3854_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57(lean_object* v_toPure_3855_, lean_object* v_inst_3856_, lean_object* v_toBind_3857_, lean_object* v_toMatcherInfo_3858_, lean_object* v_inst_3859_, lean_object* v___f_3860_, lean_object* v_onMotive_3861_, lean_object* v_discrs_3862_, lean_object* v_inst_3863_, lean_object* v_matcherName_3864_, lean_object* v_params_x27_3865_, lean_object* v_onRemaining_3866_, lean_object* v_remaining_3867_, lean_object* v_inst_3868_, lean_object* v_alts_3869_, lean_object* v___f_3870_, lean_object* v_onAlt_3871_, lean_object* v___f_3872_, lean_object* v_matcherApp_3873_, uint8_t v_useSplitter_3874_, uint8_t v_isCasesOn_3875_, lean_object* v___f_3876_, lean_object* v___f_3877_, lean_object* v_numDiscrEqs_3878_, lean_object* v___f_3879_, lean_object* v_matcherLevels_3880_, lean_object* v_motive_3881_, lean_object* v_discrs_x27_3882_){
_start:
{
lean_object* v___f_3883_; uint8_t v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___f_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; 
lean_inc_ref(v_inst_3863_);
lean_inc_ref_n(v_inst_3859_, 2);
lean_inc_ref(v_discrs_x27_3882_);
lean_inc_ref(v_toMatcherInfo_3858_);
lean_inc_n(v_toBind_3857_, 2);
lean_inc(v_inst_3856_);
lean_inc(v_toPure_3855_);
v___f_3883_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__19___boxed), 12, 10);
lean_closure_set(v___f_3883_, 0, v_toPure_3855_);
lean_closure_set(v___f_3883_, 1, v_inst_3856_);
lean_closure_set(v___f_3883_, 2, v_toBind_3857_);
lean_closure_set(v___f_3883_, 3, v_toMatcherInfo_3858_);
lean_closure_set(v___f_3883_, 4, v_discrs_x27_3882_);
lean_closure_set(v___f_3883_, 5, v_inst_3859_);
lean_closure_set(v___f_3883_, 6, v___f_3860_);
lean_closure_set(v___f_3883_, 7, v_onMotive_3861_);
lean_closure_set(v___f_3883_, 8, v_discrs_3862_);
lean_closure_set(v___f_3883_, 9, v_inst_3863_);
v___x_3884_ = 0;
v___x_3885_ = lean_box(v___x_3884_);
v___x_3886_ = lean_box(v_useSplitter_3874_);
v___x_3887_ = lean_box(v_isCasesOn_3875_);
lean_inc_ref(v_inst_3868_);
v___f_3888_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__58___boxed), 26, 25);
lean_closure_set(v___f_3888_, 0, v_toMatcherInfo_3858_);
lean_closure_set(v___f_3888_, 1, v_matcherName_3864_);
lean_closure_set(v___f_3888_, 2, v_params_x27_3865_);
lean_closure_set(v___f_3888_, 3, v_discrs_x27_3882_);
lean_closure_set(v___f_3888_, 4, v_toPure_3855_);
lean_closure_set(v___f_3888_, 5, v_onRemaining_3866_);
lean_closure_set(v___f_3888_, 6, v_remaining_3867_);
lean_closure_set(v___f_3888_, 7, v_toBind_3857_);
lean_closure_set(v___f_3888_, 8, v_inst_3868_);
lean_closure_set(v___f_3888_, 9, v_alts_3869_);
lean_closure_set(v___f_3888_, 10, v___f_3870_);
lean_closure_set(v___f_3888_, 11, v___x_3885_);
lean_closure_set(v___f_3888_, 12, v_inst_3856_);
lean_closure_set(v___f_3888_, 13, v_onAlt_3871_);
lean_closure_set(v___f_3888_, 14, v_inst_3859_);
lean_closure_set(v___f_3888_, 15, v___f_3872_);
lean_closure_set(v___f_3888_, 16, v_matcherApp_3873_);
lean_closure_set(v___f_3888_, 17, v___x_3886_);
lean_closure_set(v___f_3888_, 18, v___x_3887_);
lean_closure_set(v___f_3888_, 19, v___f_3876_);
lean_closure_set(v___f_3888_, 20, v_inst_3863_);
lean_closure_set(v___f_3888_, 21, v___f_3877_);
lean_closure_set(v___f_3888_, 22, v_numDiscrEqs_3878_);
lean_closure_set(v___f_3888_, 23, v___f_3879_);
lean_closure_set(v___f_3888_, 24, v_matcherLevels_3880_);
v___x_3889_ = l_Lean_Meta_lambdaTelescope___redArg(v_inst_3868_, v_inst_3859_, v_motive_3881_, v___f_3883_, v___x_3884_);
v___x_3890_ = lean_apply_4(v_toBind_3857_, lean_box(0), lean_box(0), v___x_3889_, v___f_3888_);
return v___x_3890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed(lean_object** _args){
lean_object* v_toPure_3891_ = _args[0];
lean_object* v_inst_3892_ = _args[1];
lean_object* v_toBind_3893_ = _args[2];
lean_object* v_toMatcherInfo_3894_ = _args[3];
lean_object* v_inst_3895_ = _args[4];
lean_object* v___f_3896_ = _args[5];
lean_object* v_onMotive_3897_ = _args[6];
lean_object* v_discrs_3898_ = _args[7];
lean_object* v_inst_3899_ = _args[8];
lean_object* v_matcherName_3900_ = _args[9];
lean_object* v_params_x27_3901_ = _args[10];
lean_object* v_onRemaining_3902_ = _args[11];
lean_object* v_remaining_3903_ = _args[12];
lean_object* v_inst_3904_ = _args[13];
lean_object* v_alts_3905_ = _args[14];
lean_object* v___f_3906_ = _args[15];
lean_object* v_onAlt_3907_ = _args[16];
lean_object* v___f_3908_ = _args[17];
lean_object* v_matcherApp_3909_ = _args[18];
lean_object* v_useSplitter_3910_ = _args[19];
lean_object* v_isCasesOn_3911_ = _args[20];
lean_object* v___f_3912_ = _args[21];
lean_object* v___f_3913_ = _args[22];
lean_object* v_numDiscrEqs_3914_ = _args[23];
lean_object* v___f_3915_ = _args[24];
lean_object* v_matcherLevels_3916_ = _args[25];
lean_object* v_motive_3917_ = _args[26];
lean_object* v_discrs_x27_3918_ = _args[27];
_start:
{
uint8_t v_useSplitter_boxed_3919_; uint8_t v_isCasesOn_boxed_3920_; lean_object* v_res_3921_; 
v_useSplitter_boxed_3919_ = lean_unbox(v_useSplitter_3910_);
v_isCasesOn_boxed_3920_ = lean_unbox(v_isCasesOn_3911_);
v_res_3921_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__57(v_toPure_3891_, v_inst_3892_, v_toBind_3893_, v_toMatcherInfo_3894_, v_inst_3895_, v___f_3896_, v_onMotive_3897_, v_discrs_3898_, v_inst_3899_, v_matcherName_3900_, v_params_x27_3901_, v_onRemaining_3902_, v_remaining_3903_, v_inst_3904_, v_alts_3905_, v___f_3906_, v_onAlt_3907_, v___f_3908_, v_matcherApp_3909_, v_useSplitter_boxed_3919_, v_isCasesOn_boxed_3920_, v___f_3912_, v___f_3913_, v_numDiscrEqs_3914_, v___f_3915_, v_matcherLevels_3916_, v_motive_3917_, v_discrs_x27_3918_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59(lean_object* v_toPure_3922_, lean_object* v_inst_3923_, lean_object* v_toBind_3924_, lean_object* v_toMatcherInfo_3925_, lean_object* v_inst_3926_, lean_object* v___f_3927_, lean_object* v_onMotive_3928_, lean_object* v_discrs_3929_, lean_object* v_inst_3930_, lean_object* v_matcherName_3931_, lean_object* v_onRemaining_3932_, lean_object* v_remaining_3933_, lean_object* v_inst_3934_, lean_object* v_alts_3935_, lean_object* v___f_3936_, lean_object* v_onAlt_3937_, lean_object* v___f_3938_, lean_object* v_matcherApp_3939_, uint8_t v_useSplitter_3940_, uint8_t v_isCasesOn_3941_, lean_object* v___f_3942_, lean_object* v___f_3943_, lean_object* v_numDiscrEqs_3944_, lean_object* v___f_3945_, lean_object* v_matcherLevels_3946_, lean_object* v_motive_3947_, lean_object* v_onParams_3948_, lean_object* v_params_x27_3949_){
_start:
{
lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___f_3952_; size_t v_sz_3953_; size_t v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; 
v___x_3950_ = lean_box(v_useSplitter_3940_);
v___x_3951_ = lean_box(v_isCasesOn_3941_);
lean_inc_ref(v_discrs_3929_);
lean_inc_ref(v_inst_3926_);
lean_inc(v_toBind_3924_);
v___f_3952_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__57___boxed), 28, 27);
lean_closure_set(v___f_3952_, 0, v_toPure_3922_);
lean_closure_set(v___f_3952_, 1, v_inst_3923_);
lean_closure_set(v___f_3952_, 2, v_toBind_3924_);
lean_closure_set(v___f_3952_, 3, v_toMatcherInfo_3925_);
lean_closure_set(v___f_3952_, 4, v_inst_3926_);
lean_closure_set(v___f_3952_, 5, v___f_3927_);
lean_closure_set(v___f_3952_, 6, v_onMotive_3928_);
lean_closure_set(v___f_3952_, 7, v_discrs_3929_);
lean_closure_set(v___f_3952_, 8, v_inst_3930_);
lean_closure_set(v___f_3952_, 9, v_matcherName_3931_);
lean_closure_set(v___f_3952_, 10, v_params_x27_3949_);
lean_closure_set(v___f_3952_, 11, v_onRemaining_3932_);
lean_closure_set(v___f_3952_, 12, v_remaining_3933_);
lean_closure_set(v___f_3952_, 13, v_inst_3934_);
lean_closure_set(v___f_3952_, 14, v_alts_3935_);
lean_closure_set(v___f_3952_, 15, v___f_3936_);
lean_closure_set(v___f_3952_, 16, v_onAlt_3937_);
lean_closure_set(v___f_3952_, 17, v___f_3938_);
lean_closure_set(v___f_3952_, 18, v_matcherApp_3939_);
lean_closure_set(v___f_3952_, 19, v___x_3950_);
lean_closure_set(v___f_3952_, 20, v___x_3951_);
lean_closure_set(v___f_3952_, 21, v___f_3942_);
lean_closure_set(v___f_3952_, 22, v___f_3943_);
lean_closure_set(v___f_3952_, 23, v_numDiscrEqs_3944_);
lean_closure_set(v___f_3952_, 24, v___f_3945_);
lean_closure_set(v___f_3952_, 25, v_matcherLevels_3946_);
lean_closure_set(v___f_3952_, 26, v_motive_3947_);
v_sz_3953_ = lean_array_size(v_discrs_3929_);
v___x_3954_ = ((size_t)0ULL);
v___x_3955_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3926_, v_onParams_3948_, v_sz_3953_, v___x_3954_, v_discrs_3929_);
v___x_3956_ = lean_apply_4(v_toBind_3924_, lean_box(0), lean_box(0), v___x_3955_, v___f_3952_);
return v___x_3956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed(lean_object** _args){
lean_object* v_toPure_3957_ = _args[0];
lean_object* v_inst_3958_ = _args[1];
lean_object* v_toBind_3959_ = _args[2];
lean_object* v_toMatcherInfo_3960_ = _args[3];
lean_object* v_inst_3961_ = _args[4];
lean_object* v___f_3962_ = _args[5];
lean_object* v_onMotive_3963_ = _args[6];
lean_object* v_discrs_3964_ = _args[7];
lean_object* v_inst_3965_ = _args[8];
lean_object* v_matcherName_3966_ = _args[9];
lean_object* v_onRemaining_3967_ = _args[10];
lean_object* v_remaining_3968_ = _args[11];
lean_object* v_inst_3969_ = _args[12];
lean_object* v_alts_3970_ = _args[13];
lean_object* v___f_3971_ = _args[14];
lean_object* v_onAlt_3972_ = _args[15];
lean_object* v___f_3973_ = _args[16];
lean_object* v_matcherApp_3974_ = _args[17];
lean_object* v_useSplitter_3975_ = _args[18];
lean_object* v_isCasesOn_3976_ = _args[19];
lean_object* v___f_3977_ = _args[20];
lean_object* v___f_3978_ = _args[21];
lean_object* v_numDiscrEqs_3979_ = _args[22];
lean_object* v___f_3980_ = _args[23];
lean_object* v_matcherLevels_3981_ = _args[24];
lean_object* v_motive_3982_ = _args[25];
lean_object* v_onParams_3983_ = _args[26];
lean_object* v_params_x27_3984_ = _args[27];
_start:
{
uint8_t v_useSplitter_boxed_3985_; uint8_t v_isCasesOn_boxed_3986_; lean_object* v_res_3987_; 
v_useSplitter_boxed_3985_ = lean_unbox(v_useSplitter_3975_);
v_isCasesOn_boxed_3986_ = lean_unbox(v_isCasesOn_3976_);
v_res_3987_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__59(v_toPure_3957_, v_inst_3958_, v_toBind_3959_, v_toMatcherInfo_3960_, v_inst_3961_, v___f_3962_, v_onMotive_3963_, v_discrs_3964_, v_inst_3965_, v_matcherName_3966_, v_onRemaining_3967_, v_remaining_3968_, v_inst_3969_, v_alts_3970_, v___f_3971_, v_onAlt_3972_, v___f_3973_, v_matcherApp_3974_, v_useSplitter_boxed_3985_, v_isCasesOn_boxed_3986_, v___f_3977_, v___f_3978_, v_numDiscrEqs_3979_, v___f_3980_, v_matcherLevels_3981_, v_motive_3982_, v_onParams_3983_, v_params_x27_3984_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60(lean_object* v_toPure_3988_, lean_object* v_inst_3989_, lean_object* v_toBind_3990_, lean_object* v_toMatcherInfo_3991_, lean_object* v_inst_3992_, lean_object* v___f_3993_, lean_object* v_onMotive_3994_, lean_object* v_discrs_3995_, lean_object* v_inst_3996_, lean_object* v_matcherName_3997_, lean_object* v_onRemaining_3998_, lean_object* v_remaining_3999_, lean_object* v_inst_4000_, lean_object* v_alts_4001_, lean_object* v___f_4002_, lean_object* v_onAlt_4003_, lean_object* v___f_4004_, lean_object* v_matcherApp_4005_, uint8_t v_useSplitter_4006_, uint8_t v_isCasesOn_4007_, lean_object* v___f_4008_, lean_object* v___f_4009_, lean_object* v___f_4010_, lean_object* v_matcherLevels_4011_, lean_object* v_motive_4012_, lean_object* v_onParams_4013_, lean_object* v_params_4014_, lean_object* v_numDiscrEqs_4015_){
_start:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___f_4018_; size_t v_sz_4019_; size_t v___x_4020_; lean_object* v___x_4021_; lean_object* v___x_4022_; 
v___x_4016_ = lean_box(v_useSplitter_4006_);
v___x_4017_ = lean_box(v_isCasesOn_4007_);
lean_inc(v_onParams_4013_);
lean_inc_ref(v_inst_3992_);
lean_inc(v_toBind_3990_);
v___f_4018_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__59___boxed), 28, 27);
lean_closure_set(v___f_4018_, 0, v_toPure_3988_);
lean_closure_set(v___f_4018_, 1, v_inst_3989_);
lean_closure_set(v___f_4018_, 2, v_toBind_3990_);
lean_closure_set(v___f_4018_, 3, v_toMatcherInfo_3991_);
lean_closure_set(v___f_4018_, 4, v_inst_3992_);
lean_closure_set(v___f_4018_, 5, v___f_3993_);
lean_closure_set(v___f_4018_, 6, v_onMotive_3994_);
lean_closure_set(v___f_4018_, 7, v_discrs_3995_);
lean_closure_set(v___f_4018_, 8, v_inst_3996_);
lean_closure_set(v___f_4018_, 9, v_matcherName_3997_);
lean_closure_set(v___f_4018_, 10, v_onRemaining_3998_);
lean_closure_set(v___f_4018_, 11, v_remaining_3999_);
lean_closure_set(v___f_4018_, 12, v_inst_4000_);
lean_closure_set(v___f_4018_, 13, v_alts_4001_);
lean_closure_set(v___f_4018_, 14, v___f_4002_);
lean_closure_set(v___f_4018_, 15, v_onAlt_4003_);
lean_closure_set(v___f_4018_, 16, v___f_4004_);
lean_closure_set(v___f_4018_, 17, v_matcherApp_4005_);
lean_closure_set(v___f_4018_, 18, v___x_4016_);
lean_closure_set(v___f_4018_, 19, v___x_4017_);
lean_closure_set(v___f_4018_, 20, v___f_4008_);
lean_closure_set(v___f_4018_, 21, v___f_4009_);
lean_closure_set(v___f_4018_, 22, v_numDiscrEqs_4015_);
lean_closure_set(v___f_4018_, 23, v___f_4010_);
lean_closure_set(v___f_4018_, 24, v_matcherLevels_4011_);
lean_closure_set(v___f_4018_, 25, v_motive_4012_);
lean_closure_set(v___f_4018_, 26, v_onParams_4013_);
v_sz_4019_ = lean_array_size(v_params_4014_);
v___x_4020_ = ((size_t)0ULL);
v___x_4021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3992_, v_onParams_4013_, v_sz_4019_, v___x_4020_, v_params_4014_);
v___x_4022_ = lean_apply_4(v_toBind_3990_, lean_box(0), lean_box(0), v___x_4021_, v___f_4018_);
return v___x_4022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed(lean_object** _args){
lean_object* v_toPure_4023_ = _args[0];
lean_object* v_inst_4024_ = _args[1];
lean_object* v_toBind_4025_ = _args[2];
lean_object* v_toMatcherInfo_4026_ = _args[3];
lean_object* v_inst_4027_ = _args[4];
lean_object* v___f_4028_ = _args[5];
lean_object* v_onMotive_4029_ = _args[6];
lean_object* v_discrs_4030_ = _args[7];
lean_object* v_inst_4031_ = _args[8];
lean_object* v_matcherName_4032_ = _args[9];
lean_object* v_onRemaining_4033_ = _args[10];
lean_object* v_remaining_4034_ = _args[11];
lean_object* v_inst_4035_ = _args[12];
lean_object* v_alts_4036_ = _args[13];
lean_object* v___f_4037_ = _args[14];
lean_object* v_onAlt_4038_ = _args[15];
lean_object* v___f_4039_ = _args[16];
lean_object* v_matcherApp_4040_ = _args[17];
lean_object* v_useSplitter_4041_ = _args[18];
lean_object* v_isCasesOn_4042_ = _args[19];
lean_object* v___f_4043_ = _args[20];
lean_object* v___f_4044_ = _args[21];
lean_object* v___f_4045_ = _args[22];
lean_object* v_matcherLevels_4046_ = _args[23];
lean_object* v_motive_4047_ = _args[24];
lean_object* v_onParams_4048_ = _args[25];
lean_object* v_params_4049_ = _args[26];
lean_object* v_numDiscrEqs_4050_ = _args[27];
_start:
{
uint8_t v_useSplitter_boxed_4051_; uint8_t v_isCasesOn_boxed_4052_; lean_object* v_res_4053_; 
v_useSplitter_boxed_4051_ = lean_unbox(v_useSplitter_4041_);
v_isCasesOn_boxed_4052_ = lean_unbox(v_isCasesOn_4042_);
v_res_4053_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__60(v_toPure_4023_, v_inst_4024_, v_toBind_4025_, v_toMatcherInfo_4026_, v_inst_4027_, v___f_4028_, v_onMotive_4029_, v_discrs_4030_, v_inst_4031_, v_matcherName_4032_, v_onRemaining_4033_, v_remaining_4034_, v_inst_4035_, v_alts_4036_, v___f_4037_, v_onAlt_4038_, v___f_4039_, v_matcherApp_4040_, v_useSplitter_boxed_4051_, v_isCasesOn_boxed_4052_, v___f_4043_, v___f_4044_, v___f_4045_, v_matcherLevels_4046_, v_motive_4047_, v_onParams_4048_, v_params_4049_, v_numDiscrEqs_4050_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__61(lean_object* v___f_4054_, lean_object* v_numDiscrEqs_4055_){
_start:
{
lean_object* v___x_4056_; 
v___x_4056_ = lean_apply_1(v___f_4054_, v_numDiscrEqs_4055_);
return v___x_4056_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0(void){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = lean_mk_string_unchecked("matcher ", 8, 8);
return v___x_4057_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1(void){
_start:
{
lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4058_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__0);
v___x_4059_ = l_Lean_stringToMessageData(v___x_4058_);
return v___x_4059_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2(void){
_start:
{
lean_object* v___x_4060_; 
v___x_4060_ = lean_mk_string_unchecked(" has no MatchInfo found", 23, 23);
return v___x_4060_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3(void){
_start:
{
lean_object* v___x_4061_; lean_object* v___x_4062_; 
v___x_4061_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__2);
v___x_4062_ = l_Lean_stringToMessageData(v___x_4061_);
return v___x_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63(lean_object* v_matcherName_4063_, lean_object* v_inst_4064_, lean_object* v_inst_4065_, lean_object* v_toBind_4066_, lean_object* v___f_4067_, lean_object* v_toPure_4068_, lean_object* v___f_4069_, lean_object* v_____do__lift_4070_){
_start:
{
if (lean_obj_tag(v_____do__lift_4070_) == 0)
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; 
lean_dec(v___f_4069_);
lean_dec(v_toPure_4068_);
v___x_4071_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_4072_ = l_Lean_MessageData_ofName(v_matcherName_4063_);
v___x_4073_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4073_, 0, v___x_4071_);
lean_ctor_set(v___x_4073_, 1, v___x_4072_);
v___x_4074_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_4075_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4073_);
lean_ctor_set(v___x_4075_, 1, v___x_4074_);
v___x_4076_ = l_Lean_throwError___redArg(v_inst_4064_, v_inst_4065_, v___x_4075_);
v___x_4077_ = lean_apply_4(v_toBind_4066_, lean_box(0), lean_box(0), v___x_4076_, v___f_4067_);
return v___x_4077_;
}
else
{
lean_object* v_val_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; 
lean_dec(v___f_4067_);
lean_dec_ref(v_inst_4065_);
lean_dec_ref(v_inst_4064_);
lean_dec(v_matcherName_4063_);
v_val_4078_ = lean_ctor_get(v_____do__lift_4070_, 0);
v___x_4079_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_4078_);
v___x_4080_ = lean_apply_2(v_toPure_4068_, lean_box(0), v___x_4079_);
v___x_4081_ = lean_apply_4(v_toBind_4066_, lean_box(0), lean_box(0), v___x_4080_, v___f_4069_);
return v___x_4081_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed(lean_object* v_matcherName_4082_, lean_object* v_inst_4083_, lean_object* v_inst_4084_, lean_object* v_toBind_4085_, lean_object* v___f_4086_, lean_object* v_toPure_4087_, lean_object* v___f_4088_, lean_object* v_____do__lift_4089_){
_start:
{
lean_object* v_res_4090_; 
v_res_4090_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__63(v_matcherName_4082_, v_inst_4083_, v_inst_4084_, v_toBind_4085_, v___f_4086_, v_toPure_4087_, v___f_4088_, v_____do__lift_4089_);
lean_dec(v_____do__lift_4089_);
return v_res_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64(lean_object* v_matcherApp_4091_, lean_object* v_toPure_4092_, lean_object* v_inst_4093_, lean_object* v_toBind_4094_, lean_object* v_inst_4095_, lean_object* v___f_4096_, lean_object* v_onMotive_4097_, lean_object* v_inst_4098_, lean_object* v_onRemaining_4099_, lean_object* v_inst_4100_, lean_object* v___f_4101_, lean_object* v_onAlt_4102_, lean_object* v___f_4103_, uint8_t v_useSplitter_4104_, lean_object* v___f_4105_, lean_object* v___f_4106_, lean_object* v___f_4107_, lean_object* v_onParams_4108_, lean_object* v_inst_4109_, lean_object* v_____do__lift_4110_){
_start:
{
lean_object* v_toMatcherInfo_4111_; lean_object* v_matcherName_4112_; lean_object* v_matcherLevels_4113_; lean_object* v_params_4114_; lean_object* v_motive_4115_; lean_object* v_discrs_4116_; lean_object* v_alts_4117_; lean_object* v_remaining_4118_; uint8_t v_isCasesOn_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___f_4122_; 
v_toMatcherInfo_4111_ = lean_ctor_get(v_matcherApp_4091_, 0);
lean_inc_ref(v_toMatcherInfo_4111_);
v_matcherName_4112_ = lean_ctor_get(v_matcherApp_4091_, 1);
lean_inc_n(v_matcherName_4112_, 3);
v_matcherLevels_4113_ = lean_ctor_get(v_matcherApp_4091_, 2);
lean_inc_ref(v_matcherLevels_4113_);
v_params_4114_ = lean_ctor_get(v_matcherApp_4091_, 3);
lean_inc_ref(v_params_4114_);
v_motive_4115_ = lean_ctor_get(v_matcherApp_4091_, 4);
lean_inc_ref(v_motive_4115_);
v_discrs_4116_ = lean_ctor_get(v_matcherApp_4091_, 5);
lean_inc_ref(v_discrs_4116_);
v_alts_4117_ = lean_ctor_get(v_matcherApp_4091_, 6);
lean_inc_ref(v_alts_4117_);
v_remaining_4118_ = lean_ctor_get(v_matcherApp_4091_, 7);
lean_inc_ref(v_remaining_4118_);
v_isCasesOn_4119_ = l_Lean_isCasesOnRecursor(v_____do__lift_4110_, v_matcherName_4112_);
v___x_4120_ = lean_box(v_useSplitter_4104_);
v___x_4121_ = lean_box(v_isCasesOn_4119_);
lean_inc_ref(v_inst_4098_);
lean_inc_ref(v_inst_4095_);
lean_inc(v_toBind_4094_);
lean_inc(v_toPure_4092_);
v___f_4122_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__60___boxed), 28, 27);
lean_closure_set(v___f_4122_, 0, v_toPure_4092_);
lean_closure_set(v___f_4122_, 1, v_inst_4093_);
lean_closure_set(v___f_4122_, 2, v_toBind_4094_);
lean_closure_set(v___f_4122_, 3, v_toMatcherInfo_4111_);
lean_closure_set(v___f_4122_, 4, v_inst_4095_);
lean_closure_set(v___f_4122_, 5, v___f_4096_);
lean_closure_set(v___f_4122_, 6, v_onMotive_4097_);
lean_closure_set(v___f_4122_, 7, v_discrs_4116_);
lean_closure_set(v___f_4122_, 8, v_inst_4098_);
lean_closure_set(v___f_4122_, 9, v_matcherName_4112_);
lean_closure_set(v___f_4122_, 10, v_onRemaining_4099_);
lean_closure_set(v___f_4122_, 11, v_remaining_4118_);
lean_closure_set(v___f_4122_, 12, v_inst_4100_);
lean_closure_set(v___f_4122_, 13, v_alts_4117_);
lean_closure_set(v___f_4122_, 14, v___f_4101_);
lean_closure_set(v___f_4122_, 15, v_onAlt_4102_);
lean_closure_set(v___f_4122_, 16, v___f_4103_);
lean_closure_set(v___f_4122_, 17, v_matcherApp_4091_);
lean_closure_set(v___f_4122_, 18, v___x_4120_);
lean_closure_set(v___f_4122_, 19, v___x_4121_);
lean_closure_set(v___f_4122_, 20, v___f_4105_);
lean_closure_set(v___f_4122_, 21, v___f_4106_);
lean_closure_set(v___f_4122_, 22, v___f_4107_);
lean_closure_set(v___f_4122_, 23, v_matcherLevels_4113_);
lean_closure_set(v___f_4122_, 24, v_motive_4115_);
lean_closure_set(v___f_4122_, 25, v_onParams_4108_);
lean_closure_set(v___f_4122_, 26, v_params_4114_);
if (v_isCasesOn_4119_ == 0)
{
lean_object* v___f_4123_; lean_object* v___f_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; 
v___f_4123_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4123_, 0, v___f_4122_);
lean_inc_ref(v___f_4123_);
lean_inc(v_toBind_4094_);
lean_inc_ref(v_inst_4095_);
lean_inc(v_matcherName_4112_);
v___f_4124_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__63___boxed), 8, 7);
lean_closure_set(v___f_4124_, 0, v_matcherName_4112_);
lean_closure_set(v___f_4124_, 1, v_inst_4095_);
lean_closure_set(v___f_4124_, 2, v_inst_4098_);
lean_closure_set(v___f_4124_, 3, v_toBind_4094_);
lean_closure_set(v___f_4124_, 4, v___f_4123_);
lean_closure_set(v___f_4124_, 5, v_toPure_4092_);
lean_closure_set(v___f_4124_, 6, v___f_4123_);
v___x_4125_ = l_Lean_Meta_getMatcherInfo_x3f___redArg(v_inst_4095_, v_inst_4109_, v_matcherName_4112_);
v___x_4126_ = lean_apply_4(v_toBind_4094_, lean_box(0), lean_box(0), v___x_4125_, v___f_4124_);
return v___x_4126_;
}
else
{
lean_object* v___f_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; 
lean_dec(v_matcherName_4112_);
lean_dec_ref(v_inst_4109_);
lean_dec_ref(v_inst_4098_);
lean_dec_ref(v_inst_4095_);
v___f_4127_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__61), 2, 1);
lean_closure_set(v___f_4127_, 0, v___f_4122_);
v___x_4128_ = lean_unsigned_to_nat(0u);
v___x_4129_ = lean_apply_2(v_toPure_4092_, lean_box(0), v___x_4128_);
v___x_4130_ = lean_apply_4(v_toBind_4094_, lean_box(0), lean_box(0), v___x_4129_, v___f_4127_);
return v___x_4130_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed(lean_object** _args){
lean_object* v_matcherApp_4131_ = _args[0];
lean_object* v_toPure_4132_ = _args[1];
lean_object* v_inst_4133_ = _args[2];
lean_object* v_toBind_4134_ = _args[3];
lean_object* v_inst_4135_ = _args[4];
lean_object* v___f_4136_ = _args[5];
lean_object* v_onMotive_4137_ = _args[6];
lean_object* v_inst_4138_ = _args[7];
lean_object* v_onRemaining_4139_ = _args[8];
lean_object* v_inst_4140_ = _args[9];
lean_object* v___f_4141_ = _args[10];
lean_object* v_onAlt_4142_ = _args[11];
lean_object* v___f_4143_ = _args[12];
lean_object* v_useSplitter_4144_ = _args[13];
lean_object* v___f_4145_ = _args[14];
lean_object* v___f_4146_ = _args[15];
lean_object* v___f_4147_ = _args[16];
lean_object* v_onParams_4148_ = _args[17];
lean_object* v_inst_4149_ = _args[18];
lean_object* v_____do__lift_4150_ = _args[19];
_start:
{
uint8_t v_useSplitter_boxed_4151_; lean_object* v_res_4152_; 
v_useSplitter_boxed_4151_ = lean_unbox(v_useSplitter_4144_);
v_res_4152_ = l_Lean_Meta_MatcherApp_transform___redArg___lam__64(v_matcherApp_4131_, v_toPure_4132_, v_inst_4133_, v_toBind_4134_, v_inst_4135_, v___f_4136_, v_onMotive_4137_, v_inst_4138_, v_onRemaining_4139_, v_inst_4140_, v___f_4141_, v_onAlt_4142_, v___f_4143_, v_useSplitter_boxed_4151_, v___f_4145_, v___f_4146_, v___f_4147_, v_onParams_4148_, v_inst_4149_, v_____do__lift_4150_);
return v_res_4152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg(lean_object* v_inst_4153_, lean_object* v_inst_4154_, lean_object* v_inst_4155_, lean_object* v_inst_4156_, lean_object* v_inst_4157_, lean_object* v_matcherApp_4158_, uint8_t v_useSplitter_4159_, uint8_t v_addEqualities_4160_, lean_object* v_onParams_4161_, lean_object* v_onMotive_4162_, lean_object* v_onAlt_4163_, lean_object* v_onRemaining_4164_){
_start:
{
lean_object* v_toApplicative_4165_; lean_object* v_toBind_4166_; lean_object* v_getEnv_4167_; lean_object* v_toPure_4168_; lean_object* v___f_4169_; lean_object* v___f_4170_; lean_object* v___f_4171_; lean_object* v___f_4172_; lean_object* v___f_4173_; lean_object* v___f_4174_; lean_object* v___x_4175_; lean_object* v___f_4176_; lean_object* v___x_4177_; lean_object* v___f_4178_; lean_object* v___x_4179_; 
v_toApplicative_4165_ = lean_ctor_get(v_inst_4155_, 0);
v_toBind_4166_ = lean_ctor_get(v_inst_4155_, 1);
lean_inc_n(v_toBind_4166_, 4);
v_getEnv_4167_ = lean_ctor_get(v_inst_4157_, 0);
lean_inc(v_getEnv_4167_);
v_toPure_4168_ = lean_ctor_get(v_toApplicative_4165_, 1);
lean_inc_n(v_toPure_4168_, 5);
lean_inc_ref(v_inst_4156_);
lean_inc_ref_n(v_inst_4155_, 2);
v___f_4169_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4169_, 0, v_inst_4155_);
lean_closure_set(v___f_4169_, 1, v_inst_4156_);
lean_inc_n(v_inst_4153_, 3);
v___f_4170_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_4170_, 0, v_inst_4153_);
v___f_4171_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__2___boxed), 4, 2);
lean_closure_set(v___f_4171_, 0, v_inst_4155_);
lean_closure_set(v___f_4171_, 1, v___f_4170_);
v___f_4172_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__3), 2, 1);
lean_closure_set(v___f_4172_, 0, v_toPure_4168_);
v___f_4173_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__4), 2, 1);
lean_closure_set(v___f_4173_, 0, v_toPure_4168_);
v___f_4174_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__7), 6, 3);
lean_closure_set(v___f_4174_, 0, v_toPure_4168_);
lean_closure_set(v___f_4174_, 1, v_inst_4153_);
lean_closure_set(v___f_4174_, 2, v_toBind_4166_);
v___x_4175_ = lean_box(v_addEqualities_4160_);
v___f_4176_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__12___boxed), 7, 4);
lean_closure_set(v___f_4176_, 0, v_toPure_4168_);
lean_closure_set(v___f_4176_, 1, v___x_4175_);
lean_closure_set(v___f_4176_, 2, v_inst_4153_);
lean_closure_set(v___f_4176_, 3, v_toBind_4166_);
v___x_4177_ = lean_box(v_useSplitter_4159_);
v___f_4178_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__64___boxed), 20, 19);
lean_closure_set(v___f_4178_, 0, v_matcherApp_4158_);
lean_closure_set(v___f_4178_, 1, v_toPure_4168_);
lean_closure_set(v___f_4178_, 2, v_inst_4153_);
lean_closure_set(v___f_4178_, 3, v_toBind_4166_);
lean_closure_set(v___f_4178_, 4, v_inst_4155_);
lean_closure_set(v___f_4178_, 5, v___f_4176_);
lean_closure_set(v___f_4178_, 6, v_onMotive_4162_);
lean_closure_set(v___f_4178_, 7, v_inst_4156_);
lean_closure_set(v___f_4178_, 8, v_onRemaining_4164_);
lean_closure_set(v___f_4178_, 9, v_inst_4154_);
lean_closure_set(v___f_4178_, 10, v___f_4172_);
lean_closure_set(v___f_4178_, 11, v_onAlt_4163_);
lean_closure_set(v___f_4178_, 12, v___f_4171_);
lean_closure_set(v___f_4178_, 13, v___x_4177_);
lean_closure_set(v___f_4178_, 14, v___f_4173_);
lean_closure_set(v___f_4178_, 15, v___f_4169_);
lean_closure_set(v___f_4178_, 16, v___f_4174_);
lean_closure_set(v___f_4178_, 17, v_onParams_4161_);
lean_closure_set(v___f_4178_, 18, v_inst_4157_);
v___x_4179_ = lean_apply_4(v_toBind_4166_, lean_box(0), lean_box(0), v_getEnv_4167_, v___f_4178_);
return v___x_4179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___redArg___boxed(lean_object* v_inst_4180_, lean_object* v_inst_4181_, lean_object* v_inst_4182_, lean_object* v_inst_4183_, lean_object* v_inst_4184_, lean_object* v_matcherApp_4185_, lean_object* v_useSplitter_4186_, lean_object* v_addEqualities_4187_, lean_object* v_onParams_4188_, lean_object* v_onMotive_4189_, lean_object* v_onAlt_4190_, lean_object* v_onRemaining_4191_){
_start:
{
uint8_t v_useSplitter_boxed_4192_; uint8_t v_addEqualities_boxed_4193_; lean_object* v_res_4194_; 
v_useSplitter_boxed_4192_ = lean_unbox(v_useSplitter_4186_);
v_addEqualities_boxed_4193_ = lean_unbox(v_addEqualities_4187_);
v_res_4194_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4180_, v_inst_4181_, v_inst_4182_, v_inst_4183_, v_inst_4184_, v_matcherApp_4185_, v_useSplitter_boxed_4192_, v_addEqualities_boxed_4193_, v_onParams_4188_, v_onMotive_4189_, v_onAlt_4190_, v_onRemaining_4191_);
return v_res_4194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform(lean_object* v_n_4195_, lean_object* v_inst_4196_, lean_object* v_inst_4197_, lean_object* v_inst_4198_, lean_object* v_inst_4199_, lean_object* v_inst_4200_, lean_object* v_inst_4201_, lean_object* v_inst_4202_, lean_object* v_inst_4203_, lean_object* v_matcherApp_4204_, uint8_t v_useSplitter_4205_, uint8_t v_addEqualities_4206_, lean_object* v_onParams_4207_, lean_object* v_onMotive_4208_, lean_object* v_onAlt_4209_, lean_object* v_onRemaining_4210_){
_start:
{
lean_object* v___x_4211_; 
v___x_4211_ = l_Lean_Meta_MatcherApp_transform___redArg(v_inst_4196_, v_inst_4197_, v_inst_4198_, v_inst_4199_, v_inst_4200_, v_matcherApp_4204_, v_useSplitter_4205_, v_addEqualities_4206_, v_onParams_4207_, v_onMotive_4208_, v_onAlt_4209_, v_onRemaining_4210_);
return v___x_4211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___boxed(lean_object* v_n_4212_, lean_object* v_inst_4213_, lean_object* v_inst_4214_, lean_object* v_inst_4215_, lean_object* v_inst_4216_, lean_object* v_inst_4217_, lean_object* v_inst_4218_, lean_object* v_inst_4219_, lean_object* v_inst_4220_, lean_object* v_matcherApp_4221_, lean_object* v_useSplitter_4222_, lean_object* v_addEqualities_4223_, lean_object* v_onParams_4224_, lean_object* v_onMotive_4225_, lean_object* v_onAlt_4226_, lean_object* v_onRemaining_4227_){
_start:
{
uint8_t v_useSplitter_boxed_4228_; uint8_t v_addEqualities_boxed_4229_; lean_object* v_res_4230_; 
v_useSplitter_boxed_4228_ = lean_unbox(v_useSplitter_4222_);
v_addEqualities_boxed_4229_ = lean_unbox(v_addEqualities_4223_);
v_res_4230_ = l_Lean_Meta_MatcherApp_transform(v_n_4212_, v_inst_4213_, v_inst_4214_, v_inst_4215_, v_inst_4216_, v_inst_4217_, v_inst_4218_, v_inst_4219_, v_inst_4220_, v_matcherApp_4221_, v_useSplitter_boxed_4228_, v_addEqualities_boxed_4229_, v_onParams_4224_, v_onMotive_4225_, v_onAlt_4226_, v_onRemaining_4227_);
lean_dec(v_inst_4220_);
lean_dec(v_inst_4219_);
lean_dec_ref(v_inst_4218_);
return v_res_4230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0(lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_){
_start:
{
lean_object* v___x_4237_; 
v___x_4237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4237_, 0, v___y_4231_);
return v___x_4237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed(lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v_res_4244_; 
v_res_4244_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__0(v___y_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_);
lean_dec(v___y_4242_);
lean_dec_ref(v___y_4241_);
lean_dec(v___y_4240_);
lean_dec_ref(v___y_4239_);
return v_res_4244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1(lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_){
_start:
{
lean_object* v___x_4251_; 
v___x_4251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4251_, 0, v___y_4245_);
return v___x_4251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed(lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_){
_start:
{
lean_object* v_res_4258_; 
v_res_4258_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__1(v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_);
lean_dec(v___y_4256_);
lean_dec_ref(v___y_4255_);
lean_dec(v___y_4254_);
lean_dec_ref(v___y_4253_);
return v_res_4258_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4259_; 
v___x_4259_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_4259_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_4260_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4261_; 
v___x_4261_ = lean_mk_string_unchecked("unsolvedGoals", 13, 13);
return v___x_4261_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4262_; 
v___x_4262_ = lean_mk_string_unchecked("synthPlaceholder", 16, 16);
return v___x_4262_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4(void){
_start:
{
lean_object* v___x_4263_; 
v___x_4263_ = lean_mk_string_unchecked("lean", 4, 4);
return v___x_4263_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4264_; 
v___x_4264_ = lean_mk_string_unchecked("inductionWithNoAlts", 19, 19);
return v___x_4264_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6(void){
_start:
{
lean_object* v___x_4265_; 
v___x_4265_ = lean_mk_string_unchecked("_namedError", 11, 11);
return v___x_4265_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4266_; 
v___x_4266_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_4266_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(uint8_t v___y_4267_, uint8_t v_suppressElabErrors_4268_, lean_object* v_x_4269_){
_start:
{
if (lean_obj_tag(v_x_4269_) == 1)
{
lean_object* v_pre_4270_; 
v_pre_4270_ = lean_ctor_get(v_x_4269_, 0);
switch(lean_obj_tag(v_pre_4270_))
{
case 1:
{
lean_object* v_pre_4271_; 
v_pre_4271_ = lean_ctor_get(v_pre_4270_, 0);
switch(lean_obj_tag(v_pre_4271_))
{
case 0:
{
lean_object* v_str_4272_; lean_object* v_str_4273_; lean_object* v___x_4274_; uint8_t v___x_4275_; 
v_str_4272_ = lean_ctor_get(v_x_4269_, 1);
v_str_4273_ = lean_ctor_get(v_pre_4270_, 1);
v___x_4274_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__0);
v___x_4275_ = lean_string_dec_eq(v_str_4273_, v___x_4274_);
if (v___x_4275_ == 0)
{
lean_object* v___x_4276_; uint8_t v___x_4277_; 
v___x_4276_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__1);
v___x_4277_ = lean_string_dec_eq(v_str_4273_, v___x_4276_);
if (v___x_4277_ == 0)
{
return v___y_4267_;
}
else
{
lean_object* v___x_4278_; uint8_t v___x_4279_; 
v___x_4278_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__2);
v___x_4279_ = lean_string_dec_eq(v_str_4272_, v___x_4278_);
if (v___x_4279_ == 0)
{
return v___y_4267_;
}
else
{
return v_suppressElabErrors_4268_;
}
}
}
else
{
lean_object* v___x_4280_; uint8_t v___x_4281_; 
v___x_4280_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__3);
v___x_4281_ = lean_string_dec_eq(v_str_4272_, v___x_4280_);
if (v___x_4281_ == 0)
{
return v___y_4267_;
}
else
{
return v_suppressElabErrors_4268_;
}
}
}
case 1:
{
lean_object* v_pre_4282_; 
v_pre_4282_ = lean_ctor_get(v_pre_4271_, 0);
if (lean_obj_tag(v_pre_4282_) == 0)
{
lean_object* v_str_4283_; lean_object* v_str_4284_; lean_object* v_str_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; 
v_str_4283_ = lean_ctor_get(v_x_4269_, 1);
v_str_4284_ = lean_ctor_get(v_pre_4270_, 1);
v_str_4285_ = lean_ctor_get(v_pre_4271_, 1);
v___x_4286_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__4);
v___x_4287_ = lean_string_dec_eq(v_str_4285_, v___x_4286_);
if (v___x_4287_ == 0)
{
return v___y_4267_;
}
else
{
lean_object* v___x_4288_; uint8_t v___x_4289_; 
v___x_4288_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__5);
v___x_4289_ = lean_string_dec_eq(v_str_4284_, v___x_4288_);
if (v___x_4289_ == 0)
{
return v___y_4267_;
}
else
{
lean_object* v___x_4290_; uint8_t v___x_4291_; 
v___x_4290_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__6);
v___x_4291_ = lean_string_dec_eq(v_str_4283_, v___x_4290_);
if (v___x_4291_ == 0)
{
return v___y_4267_;
}
else
{
return v_suppressElabErrors_4268_;
}
}
}
}
else
{
return v___y_4267_;
}
}
default: 
{
return v___y_4267_;
}
}
}
case 0:
{
lean_object* v_str_4292_; lean_object* v___x_4293_; uint8_t v___x_4294_; 
v_str_4292_ = lean_ctor_get(v_x_4269_, 1);
v___x_4293_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___closed__7);
v___x_4294_ = lean_string_dec_eq(v_str_4292_, v___x_4293_);
if (v___x_4294_ == 0)
{
return v___y_4267_;
}
else
{
return v_suppressElabErrors_4268_;
}
}
default: 
{
return v___y_4267_;
}
}
}
else
{
return v___y_4267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___y_4295_, lean_object* v_suppressElabErrors_4296_, lean_object* v_x_4297_){
_start:
{
uint8_t v___y_31989__boxed_4298_; uint8_t v_suppressElabErrors_boxed_4299_; uint8_t v_res_4300_; lean_object* v_r_4301_; 
v___y_31989__boxed_4298_ = lean_unbox(v___y_4295_);
v_suppressElabErrors_boxed_4299_ = lean_unbox(v_suppressElabErrors_4296_);
v_res_4300_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0(v___y_31989__boxed_4298_, v_suppressElabErrors_boxed_4299_, v_x_4297_);
lean_dec(v_x_4297_);
v_r_4301_ = lean_box(v_res_4300_);
return v_r_4301_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(lean_object* v_opts_4302_, lean_object* v_opt_4303_){
_start:
{
lean_object* v_name_4304_; lean_object* v_defValue_4305_; lean_object* v_map_4306_; lean_object* v___x_4307_; 
v_name_4304_ = lean_ctor_get(v_opt_4303_, 0);
v_defValue_4305_ = lean_ctor_get(v_opt_4303_, 1);
v_map_4306_ = lean_ctor_get(v_opts_4302_, 0);
v___x_4307_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4306_, v_name_4304_);
if (lean_obj_tag(v___x_4307_) == 0)
{
uint8_t v___x_4308_; 
v___x_4308_ = lean_unbox(v_defValue_4305_);
return v___x_4308_;
}
else
{
lean_object* v_val_4309_; 
v_val_4309_ = lean_ctor_get(v___x_4307_, 0);
lean_inc(v_val_4309_);
lean_dec_ref(v___x_4307_);
if (lean_obj_tag(v_val_4309_) == 1)
{
uint8_t v_v_4310_; 
v_v_4310_ = lean_ctor_get_uint8(v_val_4309_, 0);
lean_dec_ref(v_val_4309_);
return v_v_4310_;
}
else
{
uint8_t v___x_4311_; 
lean_dec(v_val_4309_);
v___x_4311_ = lean_unbox(v_defValue_4305_);
return v___x_4311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11___boxed(lean_object* v_opts_4312_, lean_object* v_opt_4313_){
_start:
{
uint8_t v_res_4314_; lean_object* v_r_4315_; 
v_res_4314_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_opts_4312_, v_opt_4313_);
lean_dec_ref(v_opt_4313_);
lean_dec_ref(v_opts_4312_);
v_r_4315_ = lean_box(v_res_4314_);
return v_r_4315_;
}
}
static lean_object* _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4316_; 
v___x_4316_ = lean_mk_string_unchecked("", 0, 0);
return v___x_4316_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(lean_object* v_ref_4317_, lean_object* v_msgData_4318_, uint8_t v_severity_4319_, uint8_t v_isSilent_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v___y_4327_; lean_object* v___y_4328_; lean_object* v___y_4329_; lean_object* v___y_4330_; uint8_t v___y_4331_; lean_object* v___y_4332_; uint8_t v___y_4333_; lean_object* v___y_4334_; lean_object* v___y_4335_; lean_object* v___y_4363_; uint8_t v___y_4364_; lean_object* v___y_4365_; lean_object* v___y_4366_; uint8_t v___y_4367_; uint8_t v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4388_; uint8_t v___y_4389_; lean_object* v___y_4390_; lean_object* v___y_4391_; uint8_t v___y_4392_; lean_object* v___y_4393_; uint8_t v___y_4394_; lean_object* v___y_4395_; lean_object* v___y_4399_; uint8_t v___y_4400_; lean_object* v___y_4401_; lean_object* v___y_4402_; lean_object* v___y_4403_; uint8_t v___y_4404_; uint8_t v___y_4405_; uint8_t v___x_4410_; uint8_t v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4414_; lean_object* v___y_4415_; lean_object* v___y_4416_; uint8_t v___y_4417_; uint8_t v___y_4418_; uint8_t v___y_4420_; uint8_t v___x_4435_; 
v___x_4410_ = 2;
v___x_4435_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4319_, v___x_4410_);
if (v___x_4435_ == 0)
{
v___y_4420_ = v___x_4435_;
goto v___jp_4419_;
}
else
{
uint8_t v___x_4436_; 
lean_inc_ref(v_msgData_4318_);
v___x_4436_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4318_);
v___y_4420_ = v___x_4436_;
goto v___jp_4419_;
}
v___jp_4326_:
{
lean_object* v___x_4336_; lean_object* v_currNamespace_4337_; lean_object* v_openDecls_4338_; lean_object* v_env_4339_; lean_object* v_nextMacroScope_4340_; lean_object* v_ngen_4341_; lean_object* v_auxDeclNGen_4342_; lean_object* v_traceState_4343_; lean_object* v_cache_4344_; lean_object* v_messages_4345_; lean_object* v_infoState_4346_; lean_object* v_snapshotTasks_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4361_; 
v___x_4336_ = lean_st_ref_take(v___y_4335_);
v_currNamespace_4337_ = lean_ctor_get(v___y_4334_, 6);
v_openDecls_4338_ = lean_ctor_get(v___y_4334_, 7);
v_env_4339_ = lean_ctor_get(v___x_4336_, 0);
v_nextMacroScope_4340_ = lean_ctor_get(v___x_4336_, 1);
v_ngen_4341_ = lean_ctor_get(v___x_4336_, 2);
v_auxDeclNGen_4342_ = lean_ctor_get(v___x_4336_, 3);
v_traceState_4343_ = lean_ctor_get(v___x_4336_, 4);
v_cache_4344_ = lean_ctor_get(v___x_4336_, 5);
v_messages_4345_ = lean_ctor_get(v___x_4336_, 6);
v_infoState_4346_ = lean_ctor_get(v___x_4336_, 7);
v_snapshotTasks_4347_ = lean_ctor_get(v___x_4336_, 8);
v_isSharedCheck_4361_ = !lean_is_exclusive(v___x_4336_);
if (v_isSharedCheck_4361_ == 0)
{
v___x_4349_ = v___x_4336_;
v_isShared_4350_ = v_isSharedCheck_4361_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_snapshotTasks_4347_);
lean_inc(v_infoState_4346_);
lean_inc(v_messages_4345_);
lean_inc(v_cache_4344_);
lean_inc(v_traceState_4343_);
lean_inc(v_auxDeclNGen_4342_);
lean_inc(v_ngen_4341_);
lean_inc(v_nextMacroScope_4340_);
lean_inc(v_env_4339_);
lean_dec(v___x_4336_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4361_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; lean_object* v___x_4354_; lean_object* v___x_4356_; 
lean_inc(v_openDecls_4338_);
lean_inc(v_currNamespace_4337_);
v___x_4351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4351_, 0, v_currNamespace_4337_);
lean_ctor_set(v___x_4351_, 1, v_openDecls_4338_);
v___x_4352_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4352_, 0, v___x_4351_);
lean_ctor_set(v___x_4352_, 1, v___y_4327_);
lean_inc_ref(v___y_4330_);
lean_inc_ref(v___y_4329_);
v___x_4353_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4353_, 0, v___y_4329_);
lean_ctor_set(v___x_4353_, 1, v___y_4328_);
lean_ctor_set(v___x_4353_, 2, v___y_4332_);
lean_ctor_set(v___x_4353_, 3, v___y_4330_);
lean_ctor_set(v___x_4353_, 4, v___x_4352_);
lean_ctor_set_uint8(v___x_4353_, sizeof(void*)*5, v___y_4333_);
lean_ctor_set_uint8(v___x_4353_, sizeof(void*)*5 + 1, v___y_4331_);
lean_ctor_set_uint8(v___x_4353_, sizeof(void*)*5 + 2, v_isSilent_4320_);
v___x_4354_ = l_Lean_MessageLog_add(v___x_4353_, v_messages_4345_);
if (v_isShared_4350_ == 0)
{
lean_ctor_set(v___x_4349_, 6, v___x_4354_);
v___x_4356_ = v___x_4349_;
goto v_reusejp_4355_;
}
else
{
lean_object* v_reuseFailAlloc_4360_; 
v_reuseFailAlloc_4360_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4360_, 0, v_env_4339_);
lean_ctor_set(v_reuseFailAlloc_4360_, 1, v_nextMacroScope_4340_);
lean_ctor_set(v_reuseFailAlloc_4360_, 2, v_ngen_4341_);
lean_ctor_set(v_reuseFailAlloc_4360_, 3, v_auxDeclNGen_4342_);
lean_ctor_set(v_reuseFailAlloc_4360_, 4, v_traceState_4343_);
lean_ctor_set(v_reuseFailAlloc_4360_, 5, v_cache_4344_);
lean_ctor_set(v_reuseFailAlloc_4360_, 6, v___x_4354_);
lean_ctor_set(v_reuseFailAlloc_4360_, 7, v_infoState_4346_);
lean_ctor_set(v_reuseFailAlloc_4360_, 8, v_snapshotTasks_4347_);
v___x_4356_ = v_reuseFailAlloc_4360_;
goto v_reusejp_4355_;
}
v_reusejp_4355_:
{
lean_object* v___x_4357_; lean_object* v___x_4358_; lean_object* v___x_4359_; 
v___x_4357_ = lean_st_ref_set(v___y_4335_, v___x_4356_);
v___x_4358_ = lean_box(0);
v___x_4359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4359_, 0, v___x_4358_);
return v___x_4359_;
}
}
}
v___jp_4362_:
{
lean_object* v___x_4371_; lean_object* v___x_4372_; lean_object* v_a_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4386_; 
v___x_4371_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4318_);
v___x_4372_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0_spec__0(v___x_4371_, v___y_4321_, v___y_4322_, v___y_4323_, v___y_4324_);
v_a_4373_ = lean_ctor_get(v___x_4372_, 0);
v_isSharedCheck_4386_ = !lean_is_exclusive(v___x_4372_);
if (v_isSharedCheck_4386_ == 0)
{
v___x_4375_ = v___x_4372_;
v_isShared_4376_ = v_isSharedCheck_4386_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_a_4373_);
lean_dec(v___x_4372_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4386_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___x_4377_; lean_object* v___x_4378_; lean_object* v___x_4379_; lean_object* v___x_4380_; 
lean_inc_ref_n(v___y_4366_, 2);
v___x_4377_ = l_Lean_FileMap_toPosition(v___y_4366_, v___y_4369_);
lean_dec(v___y_4369_);
v___x_4378_ = l_Lean_FileMap_toPosition(v___y_4366_, v___y_4370_);
lean_dec(v___y_4370_);
v___x_4379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4379_, 0, v___x_4378_);
v___x_4380_ = lean_obj_once(&l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0, &l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0_once, _init_l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___closed__0);
if (v___y_4364_ == 0)
{
lean_del_object(v___x_4375_);
lean_dec_ref(v___y_4363_);
v___y_4327_ = v_a_4373_;
v___y_4328_ = v___x_4377_;
v___y_4329_ = v___y_4365_;
v___y_4330_ = v___x_4380_;
v___y_4331_ = v___y_4367_;
v___y_4332_ = v___x_4379_;
v___y_4333_ = v___y_4368_;
v___y_4334_ = v___y_4323_;
v___y_4335_ = v___y_4324_;
goto v___jp_4326_;
}
else
{
uint8_t v___x_4381_; 
lean_inc(v_a_4373_);
v___x_4381_ = l_Lean_MessageData_hasTag(v___y_4363_, v_a_4373_);
if (v___x_4381_ == 0)
{
lean_object* v___x_4382_; lean_object* v___x_4384_; 
lean_dec_ref(v___x_4379_);
lean_dec_ref(v___x_4377_);
lean_dec(v_a_4373_);
v___x_4382_ = lean_box(0);
if (v_isShared_4376_ == 0)
{
lean_ctor_set(v___x_4375_, 0, v___x_4382_);
v___x_4384_ = v___x_4375_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4385_; 
v_reuseFailAlloc_4385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4385_, 0, v___x_4382_);
v___x_4384_ = v_reuseFailAlloc_4385_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
return v___x_4384_;
}
}
else
{
lean_del_object(v___x_4375_);
v___y_4327_ = v_a_4373_;
v___y_4328_ = v___x_4377_;
v___y_4329_ = v___y_4365_;
v___y_4330_ = v___x_4380_;
v___y_4331_ = v___y_4367_;
v___y_4332_ = v___x_4379_;
v___y_4333_ = v___y_4368_;
v___y_4334_ = v___y_4323_;
v___y_4335_ = v___y_4324_;
goto v___jp_4326_;
}
}
}
}
v___jp_4387_:
{
lean_object* v___x_4396_; 
v___x_4396_ = l_Lean_Syntax_getTailPos_x3f(v___y_4393_, v___y_4394_);
lean_dec(v___y_4393_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_inc(v___y_4395_);
v___y_4363_ = v___y_4388_;
v___y_4364_ = v___y_4389_;
v___y_4365_ = v___y_4390_;
v___y_4366_ = v___y_4391_;
v___y_4367_ = v___y_4392_;
v___y_4368_ = v___y_4394_;
v___y_4369_ = v___y_4395_;
v___y_4370_ = v___y_4395_;
goto v___jp_4362_;
}
else
{
lean_object* v_val_4397_; 
v_val_4397_ = lean_ctor_get(v___x_4396_, 0);
lean_inc(v_val_4397_);
lean_dec_ref(v___x_4396_);
v___y_4363_ = v___y_4388_;
v___y_4364_ = v___y_4389_;
v___y_4365_ = v___y_4390_;
v___y_4366_ = v___y_4391_;
v___y_4367_ = v___y_4392_;
v___y_4368_ = v___y_4394_;
v___y_4369_ = v___y_4395_;
v___y_4370_ = v_val_4397_;
goto v___jp_4362_;
}
}
v___jp_4398_:
{
lean_object* v_ref_4406_; lean_object* v___x_4407_; 
v_ref_4406_ = l_Lean_replaceRef(v_ref_4317_, v___y_4403_);
v___x_4407_ = l_Lean_Syntax_getPos_x3f(v_ref_4406_, v___y_4404_);
if (lean_obj_tag(v___x_4407_) == 0)
{
lean_object* v___x_4408_; 
v___x_4408_ = lean_unsigned_to_nat(0u);
v___y_4388_ = v___y_4399_;
v___y_4389_ = v___y_4400_;
v___y_4390_ = v___y_4401_;
v___y_4391_ = v___y_4402_;
v___y_4392_ = v___y_4405_;
v___y_4393_ = v_ref_4406_;
v___y_4394_ = v___y_4404_;
v___y_4395_ = v___x_4408_;
goto v___jp_4387_;
}
else
{
lean_object* v_val_4409_; 
v_val_4409_ = lean_ctor_get(v___x_4407_, 0);
lean_inc(v_val_4409_);
lean_dec_ref(v___x_4407_);
v___y_4388_ = v___y_4399_;
v___y_4389_ = v___y_4400_;
v___y_4390_ = v___y_4401_;
v___y_4391_ = v___y_4402_;
v___y_4392_ = v___y_4405_;
v___y_4393_ = v_ref_4406_;
v___y_4394_ = v___y_4404_;
v___y_4395_ = v_val_4409_;
goto v___jp_4387_;
}
}
v___jp_4411_:
{
if (v___y_4418_ == 0)
{
v___y_4399_ = v___y_4413_;
v___y_4400_ = v___y_4412_;
v___y_4401_ = v___y_4414_;
v___y_4402_ = v___y_4416_;
v___y_4403_ = v___y_4415_;
v___y_4404_ = v___y_4417_;
v___y_4405_ = v_severity_4319_;
goto v___jp_4398_;
}
else
{
v___y_4399_ = v___y_4413_;
v___y_4400_ = v___y_4412_;
v___y_4401_ = v___y_4414_;
v___y_4402_ = v___y_4416_;
v___y_4403_ = v___y_4415_;
v___y_4404_ = v___y_4417_;
v___y_4405_ = v___x_4410_;
goto v___jp_4398_;
}
}
v___jp_4419_:
{
if (v___y_4420_ == 0)
{
lean_object* v_fileName_4421_; lean_object* v_fileMap_4422_; lean_object* v_options_4423_; lean_object* v_ref_4424_; uint8_t v_suppressElabErrors_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___f_4428_; uint8_t v___x_4429_; uint8_t v___x_4430_; 
v_fileName_4421_ = lean_ctor_get(v___y_4323_, 0);
v_fileMap_4422_ = lean_ctor_get(v___y_4323_, 1);
v_options_4423_ = lean_ctor_get(v___y_4323_, 2);
v_ref_4424_ = lean_ctor_get(v___y_4323_, 5);
v_suppressElabErrors_4425_ = lean_ctor_get_uint8(v___y_4323_, sizeof(void*)*14 + 1);
v___x_4426_ = lean_box(v___y_4420_);
v___x_4427_ = lean_box(v_suppressElabErrors_4425_);
v___f_4428_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4428_, 0, v___x_4426_);
lean_closure_set(v___f_4428_, 1, v___x_4427_);
v___x_4429_ = 1;
v___x_4430_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4319_, v___x_4429_);
if (v___x_4430_ == 0)
{
v___y_4412_ = v_suppressElabErrors_4425_;
v___y_4413_ = v___f_4428_;
v___y_4414_ = v_fileName_4421_;
v___y_4415_ = v_ref_4424_;
v___y_4416_ = v_fileMap_4422_;
v___y_4417_ = v___y_4420_;
v___y_4418_ = v___x_4430_;
goto v___jp_4411_;
}
else
{
lean_object* v___x_4431_; uint8_t v___x_4432_; 
v___x_4431_ = l_Lean_warningAsError;
v___x_4432_ = l_Lean_Option_get___at___00Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1_spec__11(v_options_4423_, v___x_4431_);
v___y_4412_ = v_suppressElabErrors_4425_;
v___y_4413_ = v___f_4428_;
v___y_4414_ = v_fileName_4421_;
v___y_4415_ = v_ref_4424_;
v___y_4416_ = v_fileMap_4422_;
v___y_4417_ = v___y_4420_;
v___y_4418_ = v___x_4432_;
goto v___jp_4411_;
}
}
else
{
lean_object* v___x_4433_; lean_object* v___x_4434_; 
lean_dec_ref(v_msgData_4318_);
v___x_4433_ = lean_box(0);
v___x_4434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4433_);
return v___x_4434_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_4437_, lean_object* v_msgData_4438_, lean_object* v_severity_4439_, lean_object* v_isSilent_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_){
_start:
{
uint8_t v_severity_boxed_4446_; uint8_t v_isSilent_boxed_4447_; lean_object* v_res_4448_; 
v_severity_boxed_4446_ = lean_unbox(v_severity_4439_);
v_isSilent_boxed_4447_ = lean_unbox(v_isSilent_4440_);
v_res_4448_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4437_, v_msgData_4438_, v_severity_boxed_4446_, v_isSilent_boxed_4447_, v___y_4441_, v___y_4442_, v___y_4443_, v___y_4444_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
lean_dec(v___y_4442_);
lean_dec_ref(v___y_4441_);
lean_dec(v_ref_4437_);
return v_res_4448_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(lean_object* v_msgData_4449_, uint8_t v_severity_4450_, uint8_t v_isSilent_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_){
_start:
{
lean_object* v_ref_4457_; lean_object* v___x_4458_; 
v_ref_4457_ = lean_ctor_get(v___y_4454_, 5);
v___x_4458_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0_spec__1(v_ref_4457_, v_msgData_4449_, v_severity_4450_, v_isSilent_4451_, v___y_4452_, v___y_4453_, v___y_4454_, v___y_4455_);
return v___x_4458_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0___boxed(lean_object* v_msgData_4459_, lean_object* v_severity_4460_, lean_object* v_isSilent_4461_, lean_object* v___y_4462_, lean_object* v___y_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_){
_start:
{
uint8_t v_severity_boxed_4467_; uint8_t v_isSilent_boxed_4468_; lean_object* v_res_4469_; 
v_severity_boxed_4467_ = lean_unbox(v_severity_4460_);
v_isSilent_boxed_4468_ = lean_unbox(v_isSilent_4461_);
v_res_4469_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4459_, v_severity_boxed_4467_, v_isSilent_boxed_4468_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_);
lean_dec(v___y_4465_);
lean_dec_ref(v___y_4464_);
lean_dec(v___y_4463_);
lean_dec_ref(v___y_4462_);
return v_res_4469_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(lean_object* v_msgData_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
uint8_t v___x_4476_; uint8_t v___x_4477_; lean_object* v___x_4478_; 
v___x_4476_ = 0;
v___x_4477_ = 0;
v___x_4478_ = l_Lean_log___at___00Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0_spec__0(v_msgData_4470_, v___x_4476_, v___x_4477_, v___y_4471_, v___y_4472_, v___y_4473_, v___y_4474_);
return v___x_4478_;
}
}
LEAN_EXPORT lean_object* l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0___boxed(lean_object* v_msgData_4479_, lean_object* v___y_4480_, lean_object* v___y_4481_, lean_object* v___y_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_){
_start:
{
lean_object* v_res_4485_; 
v_res_4485_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v_msgData_4479_, v___y_4480_, v___y_4481_, v___y_4482_, v___y_4483_);
lean_dec(v___y_4483_);
lean_dec_ref(v___y_4482_);
lean_dec(v___y_4481_);
lean_dec_ref(v___y_4480_);
return v_res_4485_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0(void){
_start:
{
lean_object* v___x_4486_; 
v___x_4486_ = lean_mk_string_unchecked("Cannot close goal after splitting: ", 35, 35);
return v___x_4486_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1(void){
_start:
{
lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4487_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0, &l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__0);
v___x_4488_ = l_Lean_stringToMessageData(v___x_4487_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2(uint8_t v___x_4489_, lean_object* v___altIdx_4490_, lean_object* v_expAltType_4491_, lean_object* v___altFVars_4492_, lean_object* v_alt_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_, lean_object* v___y_4496_, lean_object* v___y_4497_){
_start:
{
lean_object* v___x_4499_; 
lean_inc(v___y_4497_);
lean_inc_ref(v___y_4496_);
lean_inc(v___y_4495_);
lean_inc_ref(v___y_4494_);
lean_inc_ref(v_alt_4493_);
v___x_4499_ = lean_infer_type(v_alt_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4499_) == 0)
{
lean_object* v_a_4500_; lean_object* v___x_4501_; 
v_a_4500_ = lean_ctor_get(v___x_4499_, 0);
lean_inc(v_a_4500_);
lean_dec_ref(v___x_4499_);
v___x_4501_ = l_Lean_Meta_mkEq(v_expAltType_4491_, v_a_4500_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v_a_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; 
v_a_4502_ = lean_ctor_get(v___x_4501_, 0);
lean_inc(v_a_4502_);
lean_dec_ref(v___x_4501_);
v___x_4503_ = lean_box(0);
v___x_4504_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_4502_, v___x_4503_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4504_) == 0)
{
lean_object* v_a_4505_; lean_object* v___y_4507_; lean_object* v___x_4517_; lean_object* v___x_4518_; 
v_a_4505_ = lean_ctor_get(v___x_4504_, 0);
lean_inc(v_a_4505_);
lean_dec_ref(v___x_4504_);
v___x_4517_ = l_Lean_Expr_mvarId_x21(v_a_4505_);
v___x_4518_ = l_Lean_Meta_Split_simpMatchTarget(v___x_4517_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4518_) == 0)
{
lean_object* v_a_4519_; lean_object* v___x_4520_; 
v_a_4519_ = lean_ctor_get(v___x_4518_, 0);
lean_inc_n(v_a_4519_, 2);
lean_dec_ref(v___x_4518_);
v___x_4520_ = l_Lean_MVarId_refl(v_a_4519_, v___x_4489_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4520_) == 0)
{
lean_dec(v_a_4519_);
v___y_4507_ = v___x_4520_;
goto v___jp_4506_;
}
else
{
lean_object* v_a_4521_; uint8_t v___y_4523_; uint8_t v___x_4536_; 
v_a_4521_ = lean_ctor_get(v___x_4520_, 0);
lean_inc(v_a_4521_);
v___x_4536_ = l_Lean_Exception_isInterrupt(v_a_4521_);
if (v___x_4536_ == 0)
{
uint8_t v___x_4537_; 
v___x_4537_ = l_Lean_Exception_isRuntime(v_a_4521_);
v___y_4523_ = v___x_4537_;
goto v___jp_4522_;
}
else
{
lean_dec(v_a_4521_);
v___y_4523_ = v___x_4536_;
goto v___jp_4522_;
}
v___jp_4522_:
{
if (v___y_4523_ == 0)
{
lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4534_; 
v_isSharedCheck_4534_ = !lean_is_exclusive(v___x_4520_);
if (v_isSharedCheck_4534_ == 0)
{
lean_object* v_unused_4535_; 
v_unused_4535_ = lean_ctor_get(v___x_4520_, 0);
lean_dec(v_unused_4535_);
v___x_4525_ = v___x_4520_;
v_isShared_4526_ = v_isSharedCheck_4534_;
goto v_resetjp_4524_;
}
else
{
lean_dec(v___x_4520_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4534_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4527_; lean_object* v___x_4529_; 
v___x_4527_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__2___closed__1);
lean_inc(v_a_4519_);
if (v_isShared_4526_ == 0)
{
lean_ctor_set(v___x_4525_, 0, v_a_4519_);
v___x_4529_ = v___x_4525_;
goto v_reusejp_4528_;
}
else
{
lean_object* v_reuseFailAlloc_4533_; 
v_reuseFailAlloc_4533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4533_, 0, v_a_4519_);
v___x_4529_ = v_reuseFailAlloc_4533_;
goto v_reusejp_4528_;
}
v_reusejp_4528_:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4530_, 0, v___x_4527_);
lean_ctor_set(v___x_4530_, 1, v___x_4529_);
v___x_4531_ = l_Lean_logInfo___at___00Lean_Meta_MatcherApp_inferMatchType_spec__0(v___x_4530_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
if (lean_obj_tag(v___x_4531_) == 0)
{
lean_object* v___x_4532_; 
lean_dec_ref(v___x_4531_);
v___x_4532_ = l_Lean_MVarId_admit(v_a_4519_, v___x_4489_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
v___y_4507_ = v___x_4532_;
goto v___jp_4506_;
}
else
{
lean_dec(v_a_4519_);
v___y_4507_ = v___x_4531_;
goto v___jp_4506_;
}
}
}
}
else
{
lean_dec(v_a_4519_);
v___y_4507_ = v___x_4520_;
goto v___jp_4506_;
}
}
}
}
else
{
lean_object* v_a_4538_; lean_object* v___x_4540_; uint8_t v_isShared_4541_; uint8_t v_isSharedCheck_4545_; 
lean_dec(v_a_4505_);
lean_dec_ref(v_alt_4493_);
v_a_4538_ = lean_ctor_get(v___x_4518_, 0);
v_isSharedCheck_4545_ = !lean_is_exclusive(v___x_4518_);
if (v_isSharedCheck_4545_ == 0)
{
v___x_4540_ = v___x_4518_;
v_isShared_4541_ = v_isSharedCheck_4545_;
goto v_resetjp_4539_;
}
else
{
lean_inc(v_a_4538_);
lean_dec(v___x_4518_);
v___x_4540_ = lean_box(0);
v_isShared_4541_ = v_isSharedCheck_4545_;
goto v_resetjp_4539_;
}
v_resetjp_4539_:
{
lean_object* v___x_4543_; 
if (v_isShared_4541_ == 0)
{
v___x_4543_ = v___x_4540_;
goto v_reusejp_4542_;
}
else
{
lean_object* v_reuseFailAlloc_4544_; 
v_reuseFailAlloc_4544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4544_, 0, v_a_4538_);
v___x_4543_ = v_reuseFailAlloc_4544_;
goto v_reusejp_4542_;
}
v_reusejp_4542_:
{
return v___x_4543_;
}
}
}
v___jp_4506_:
{
if (lean_obj_tag(v___y_4507_) == 0)
{
lean_object* v___x_4508_; 
lean_dec_ref(v___y_4507_);
v___x_4508_ = l_Lean_Meta_mkEqMPR(v_a_4505_, v_alt_4493_, v___y_4494_, v___y_4495_, v___y_4496_, v___y_4497_);
return v___x_4508_;
}
else
{
lean_object* v_a_4509_; lean_object* v___x_4511_; uint8_t v_isShared_4512_; uint8_t v_isSharedCheck_4516_; 
lean_dec(v_a_4505_);
lean_dec_ref(v_alt_4493_);
v_a_4509_ = lean_ctor_get(v___y_4507_, 0);
v_isSharedCheck_4516_ = !lean_is_exclusive(v___y_4507_);
if (v_isSharedCheck_4516_ == 0)
{
v___x_4511_ = v___y_4507_;
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
else
{
lean_inc(v_a_4509_);
lean_dec(v___y_4507_);
v___x_4511_ = lean_box(0);
v_isShared_4512_ = v_isSharedCheck_4516_;
goto v_resetjp_4510_;
}
v_resetjp_4510_:
{
lean_object* v___x_4514_; 
if (v_isShared_4512_ == 0)
{
v___x_4514_ = v___x_4511_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4515_; 
v_reuseFailAlloc_4515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4515_, 0, v_a_4509_);
v___x_4514_ = v_reuseFailAlloc_4515_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
return v___x_4514_;
}
}
}
}
}
else
{
lean_dec_ref(v_alt_4493_);
return v___x_4504_;
}
}
else
{
lean_dec_ref(v_alt_4493_);
return v___x_4501_;
}
}
else
{
lean_dec_ref(v_alt_4493_);
lean_dec_ref(v_expAltType_4491_);
return v___x_4499_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed(lean_object* v___x_4546_, lean_object* v___altIdx_4547_, lean_object* v_expAltType_4548_, lean_object* v___altFVars_4549_, lean_object* v_alt_4550_, lean_object* v___y_4551_, lean_object* v___y_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_){
_start:
{
uint8_t v___x_32322__boxed_4556_; lean_object* v_res_4557_; 
v___x_32322__boxed_4556_ = lean_unbox(v___x_4546_);
v_res_4557_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__2(v___x_32322__boxed_4556_, v___altIdx_4547_, v_expAltType_4548_, v___altFVars_4549_, v_alt_4550_, v___y_4551_, v___y_4552_, v___y_4553_, v___y_4554_);
lean_dec(v___y_4554_);
lean_dec_ref(v___y_4553_);
lean_dec(v___y_4552_);
lean_dec_ref(v___y_4551_);
lean_dec_ref(v___altFVars_4549_);
lean_dec(v___altIdx_4547_);
return v_res_4557_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(lean_object* v___x_4558_, lean_object* v_e_4559_){
_start:
{
uint8_t v___x_4560_; lean_object* v_d_4562_; lean_object* v_b_4563_; 
v___x_4560_ = l_Lean_Expr_hasFVar(v_e_4559_);
if (v___x_4560_ == 0)
{
return v___x_4560_;
}
else
{
switch(lean_obj_tag(v_e_4559_))
{
case 7:
{
lean_object* v_binderType_4566_; lean_object* v_body_4567_; 
v_binderType_4566_ = lean_ctor_get(v_e_4559_, 1);
v_body_4567_ = lean_ctor_get(v_e_4559_, 2);
v_d_4562_ = v_binderType_4566_;
v_b_4563_ = v_body_4567_;
goto v___jp_4561_;
}
case 6:
{
lean_object* v_binderType_4568_; lean_object* v_body_4569_; 
v_binderType_4568_ = lean_ctor_get(v_e_4559_, 1);
v_body_4569_ = lean_ctor_get(v_e_4559_, 2);
v_d_4562_ = v_binderType_4568_;
v_b_4563_ = v_body_4569_;
goto v___jp_4561_;
}
case 10:
{
lean_object* v_expr_4570_; 
v_expr_4570_ = lean_ctor_get(v_e_4559_, 1);
v_e_4559_ = v_expr_4570_;
goto _start;
}
case 8:
{
lean_object* v_type_4572_; lean_object* v_value_4573_; lean_object* v_body_4574_; uint8_t v___x_4575_; 
v_type_4572_ = lean_ctor_get(v_e_4559_, 1);
v_value_4573_ = lean_ctor_get(v_e_4559_, 2);
v_body_4574_ = lean_ctor_get(v_e_4559_, 3);
v___x_4575_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4558_, v_type_4572_);
if (v___x_4575_ == 0)
{
uint8_t v___x_4576_; 
v___x_4576_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4558_, v_value_4573_);
if (v___x_4576_ == 0)
{
v_e_4559_ = v_body_4574_;
goto _start;
}
else
{
return v___x_4560_;
}
}
else
{
return v___x_4560_;
}
}
case 5:
{
lean_object* v_fn_4578_; lean_object* v_arg_4579_; uint8_t v___x_4580_; 
v_fn_4578_ = lean_ctor_get(v_e_4559_, 0);
v_arg_4579_ = lean_ctor_get(v_e_4559_, 1);
v___x_4580_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4558_, v_fn_4578_);
if (v___x_4580_ == 0)
{
v_e_4559_ = v_arg_4579_;
goto _start;
}
else
{
return v___x_4560_;
}
}
case 11:
{
lean_object* v_struct_4582_; 
v_struct_4582_ = lean_ctor_get(v_e_4559_, 2);
v_e_4559_ = v_struct_4582_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_4584_; lean_object* v___x_4585_; uint8_t v___x_4586_; 
v_fvarId_4584_ = lean_ctor_get(v_e_4559_, 0);
v___x_4585_ = l_Lean_Expr_fvarId_x21(v___x_4558_);
v___x_4586_ = l_Lean_instBEqFVarId_beq(v_fvarId_4584_, v___x_4585_);
lean_dec(v___x_4585_);
return v___x_4586_;
}
default: 
{
uint8_t v___x_4587_; 
v___x_4587_ = 0;
return v___x_4587_;
}
}
}
v___jp_4561_:
{
uint8_t v___x_4564_; 
v___x_4564_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4558_, v_d_4562_);
if (v___x_4564_ == 0)
{
v_e_4559_ = v_b_4563_;
goto _start;
}
else
{
return v___x_4560_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1___boxed(lean_object* v___x_4588_, lean_object* v_e_4589_){
_start:
{
uint8_t v_res_4590_; lean_object* v_r_4591_; 
v_res_4590_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4588_, v_e_4589_);
lean_dec_ref(v_e_4589_);
lean_dec_ref(v___x_4588_);
v_r_4591_ = lean_box(v_res_4590_);
return v_r_4591_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4592_; 
v___x_4592_ = lean_mk_string_unchecked("Type ", 5, 5);
return v___x_4592_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4593_; lean_object* v___x_4594_; 
v___x_4593_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__0);
v___x_4594_ = l_Lean_stringToMessageData(v___x_4593_);
return v___x_4594_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_4595_; 
v___x_4595_ = lean_mk_string_unchecked(" of alternative ", 16, 16);
return v___x_4595_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_4596_; lean_object* v___x_4597_; 
v___x_4596_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__2);
v___x_4597_ = l_Lean_stringToMessageData(v___x_4596_);
return v___x_4597_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_4598_; 
v___x_4598_ = lean_mk_string_unchecked(" still depends on ", 18, 18);
return v___x_4598_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_4599_; lean_object* v___x_4600_; 
v___x_4599_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__4);
v___x_4600_ = l_Lean_stringToMessageData(v___x_4599_);
return v___x_4600_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(lean_object* v_a_4601_, lean_object* v_termAlt_4602_, lean_object* v_a_4603_, lean_object* v_b_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_){
_start:
{
lean_object* v_array_4610_; lean_object* v_start_4611_; lean_object* v_stop_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4640_; 
v_array_4610_ = lean_ctor_get(v_a_4603_, 0);
v_start_4611_ = lean_ctor_get(v_a_4603_, 1);
v_stop_4612_ = lean_ctor_get(v_a_4603_, 2);
v_isSharedCheck_4640_ = !lean_is_exclusive(v_a_4603_);
if (v_isSharedCheck_4640_ == 0)
{
v___x_4614_ = v_a_4603_;
v_isShared_4615_ = v_isSharedCheck_4640_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_stop_4612_);
lean_inc(v_start_4611_);
lean_inc(v_array_4610_);
lean_dec(v_a_4603_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4640_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
uint8_t v___x_4616_; 
v___x_4616_ = lean_nat_dec_lt(v_start_4611_, v_stop_4612_);
if (v___x_4616_ == 0)
{
lean_object* v___x_4617_; 
lean_del_object(v___x_4614_);
lean_dec(v_stop_4612_);
lean_dec(v_start_4611_);
lean_dec_ref(v_array_4610_);
lean_dec_ref(v_termAlt_4602_);
lean_dec_ref(v_a_4601_);
v___x_4617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4617_, 0, v_b_4604_);
return v___x_4617_;
}
else
{
lean_object* v___x_4618_; lean_object* v___x_4619_; lean_object* v___x_4620_; lean_object* v___x_4622_; 
v___x_4618_ = lean_box(0);
v___x_4619_ = lean_unsigned_to_nat(1u);
v___x_4620_ = lean_nat_add(v_start_4611_, v___x_4619_);
lean_inc_ref(v_array_4610_);
if (v_isShared_4615_ == 0)
{
lean_ctor_set(v___x_4614_, 1, v___x_4620_);
v___x_4622_ = v___x_4614_;
goto v_reusejp_4621_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_array_4610_);
lean_ctor_set(v_reuseFailAlloc_4639_, 1, v___x_4620_);
lean_ctor_set(v_reuseFailAlloc_4639_, 2, v_stop_4612_);
v___x_4622_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4621_;
}
v_reusejp_4621_:
{
lean_object* v___x_4623_; uint8_t v___x_4624_; 
v___x_4623_ = lean_array_fget(v_array_4610_, v_start_4611_);
lean_dec(v_start_4611_);
lean_dec_ref(v_array_4610_);
v___x_4624_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_MatcherApp_inferMatchType_spec__1(v___x_4623_, v_a_4601_);
if (v___x_4624_ == 0)
{
lean_dec(v___x_4623_);
v_a_4603_ = v___x_4622_;
v_b_4604_ = v___x_4618_;
goto _start;
}
else
{
lean_object* v___x_4626_; lean_object* v___x_4627_; lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4626_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__1);
lean_inc_ref(v_a_4601_);
v___x_4627_ = l_Lean_MessageData_ofExpr(v_a_4601_);
v___x_4628_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4628_, 0, v___x_4626_);
lean_ctor_set(v___x_4628_, 1, v___x_4627_);
v___x_4629_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__3);
v___x_4630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4630_, 0, v___x_4628_);
lean_ctor_set(v___x_4630_, 1, v___x_4629_);
lean_inc_ref(v_termAlt_4602_);
v___x_4631_ = l_Lean_MessageData_ofExpr(v_termAlt_4602_);
v___x_4632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4632_, 0, v___x_4630_);
lean_ctor_set(v___x_4632_, 1, v___x_4631_);
v___x_4633_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___closed__5);
v___x_4634_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4634_, 0, v___x_4632_);
lean_ctor_set(v___x_4634_, 1, v___x_4633_);
v___x_4635_ = l_Lean_MessageData_ofExpr(v___x_4623_);
v___x_4636_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4636_, 0, v___x_4634_);
lean_ctor_set(v___x_4636_, 1, v___x_4635_);
v___x_4637_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_4636_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_);
if (lean_obj_tag(v___x_4637_) == 0)
{
lean_dec_ref(v___x_4637_);
v_a_4603_ = v___x_4622_;
v_b_4604_ = v___x_4618_;
goto _start;
}
else
{
lean_dec_ref(v___x_4622_);
lean_dec_ref(v_termAlt_4602_);
lean_dec_ref(v_a_4601_);
return v___x_4637_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg___boxed(lean_object* v_a_4641_, lean_object* v_termAlt_4642_, lean_object* v_a_4643_, lean_object* v_b_4644_, lean_object* v___y_4645_, lean_object* v___y_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_){
_start:
{
lean_object* v_res_4650_; 
v_res_4650_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4641_, v_termAlt_4642_, v_a_4643_, v_b_4644_, v___y_4645_, v___y_4646_, v___y_4647_, v___y_4648_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
lean_dec(v___y_4646_);
lean_dec_ref(v___y_4645_);
return v_res_4650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(lean_object* v_nExtra_4651_, lean_object* v_v_4652_, uint8_t v___x_4653_, uint8_t v___x_4654_, uint8_t v___x_4655_, lean_object* v_xs_4656_, lean_object* v_termAltBody_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v___x_4663_; 
lean_inc(v___y_4661_);
lean_inc_ref(v___y_4660_);
lean_inc(v___y_4659_);
lean_inc_ref(v___y_4658_);
v___x_4663_ = lean_infer_type(v_termAltBody_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4663_) == 0)
{
lean_object* v_a_4664_; lean_object* v___x_4665_; lean_object* v___x_4666_; lean_object* v___x_4667_; lean_object* v___x_4668_; lean_object* v___x_4669_; lean_object* v___x_4670_; lean_object* v___x_4671_; 
v_a_4664_ = lean_ctor_get(v___x_4663_, 0);
lean_inc_n(v_a_4664_, 2);
lean_dec_ref(v___x_4663_);
v___x_4665_ = lean_array_get_size(v_xs_4656_);
v___x_4666_ = lean_nat_sub(v___x_4665_, v_nExtra_4651_);
v___x_4667_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_4666_);
lean_inc_ref(v_xs_4656_);
v___x_4668_ = l_Array_toSubarray___redArg(v_xs_4656_, v___x_4667_, v___x_4666_);
v___x_4669_ = l_Array_toSubarray___redArg(v_xs_4656_, v___x_4666_, v___x_4665_);
v___x_4670_ = lean_box(0);
v___x_4671_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_4664_, v_v_4652_, v___x_4669_, v___x_4670_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4671_) == 0)
{
lean_object* v___x_4672_; lean_object* v___x_4673_; 
lean_dec_ref(v___x_4671_);
v___x_4672_ = l_Subarray_copy___redArg(v___x_4668_);
v___x_4673_ = l_Lean_Meta_mkLambdaFVars(v___x_4672_, v_a_4664_, v___x_4653_, v___x_4654_, v___x_4653_, v___x_4654_, v___x_4655_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
lean_dec_ref(v___x_4672_);
return v___x_4673_;
}
else
{
lean_object* v_a_4674_; lean_object* v___x_4676_; uint8_t v_isShared_4677_; uint8_t v_isSharedCheck_4681_; 
lean_dec_ref(v___x_4668_);
lean_dec(v_a_4664_);
v_a_4674_ = lean_ctor_get(v___x_4671_, 0);
v_isSharedCheck_4681_ = !lean_is_exclusive(v___x_4671_);
if (v_isSharedCheck_4681_ == 0)
{
v___x_4676_ = v___x_4671_;
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
else
{
lean_inc(v_a_4674_);
lean_dec(v___x_4671_);
v___x_4676_ = lean_box(0);
v_isShared_4677_ = v_isSharedCheck_4681_;
goto v_resetjp_4675_;
}
v_resetjp_4675_:
{
lean_object* v___x_4679_; 
if (v_isShared_4677_ == 0)
{
v___x_4679_ = v___x_4676_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4680_; 
v_reuseFailAlloc_4680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4680_, 0, v_a_4674_);
v___x_4679_ = v_reuseFailAlloc_4680_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
return v___x_4679_;
}
}
}
}
else
{
lean_dec_ref(v_xs_4656_);
lean_dec(v_v_4652_);
return v___x_4663_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed(lean_object* v_nExtra_4682_, lean_object* v_v_4683_, lean_object* v___x_4684_, lean_object* v___x_4685_, lean_object* v___x_4686_, lean_object* v_xs_4687_, lean_object* v_termAltBody_4688_, lean_object* v___y_4689_, lean_object* v___y_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_){
_start:
{
uint8_t v___x_32611__boxed_4694_; uint8_t v___x_32612__boxed_4695_; uint8_t v___x_32613__boxed_4696_; lean_object* v_res_4697_; 
v___x_32611__boxed_4694_ = lean_unbox(v___x_4684_);
v___x_32612__boxed_4695_ = lean_unbox(v___x_4685_);
v___x_32613__boxed_4696_ = lean_unbox(v___x_4686_);
v_res_4697_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0(v_nExtra_4682_, v_v_4683_, v___x_32611__boxed_4694_, v___x_32612__boxed_4695_, v___x_32613__boxed_4696_, v_xs_4687_, v_termAltBody_4688_, v___y_4689_, v___y_4690_, v___y_4691_, v___y_4692_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec(v___y_4690_);
lean_dec_ref(v___y_4689_);
lean_dec(v_nExtra_4682_);
return v_res_4697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(lean_object* v_nExtra_4698_, size_t v_sz_4699_, size_t v_i_4700_, lean_object* v_bs_4701_, lean_object* v___y_4702_, lean_object* v___y_4703_, lean_object* v___y_4704_, lean_object* v___y_4705_){
_start:
{
uint8_t v___x_4707_; 
v___x_4707_ = lean_usize_dec_lt(v_i_4700_, v_sz_4699_);
if (v___x_4707_ == 0)
{
lean_object* v___x_4708_; 
lean_dec(v_nExtra_4698_);
v___x_4708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4708_, 0, v_bs_4701_);
return v___x_4708_;
}
else
{
uint8_t v___x_4709_; uint8_t v___x_4710_; lean_object* v_v_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___f_4715_; lean_object* v___x_4716_; 
v___x_4709_ = 0;
v___x_4710_ = 1;
v_v_4711_ = lean_array_uget_borrowed(v_bs_4701_, v_i_4700_);
v___x_4712_ = lean_box(v___x_4709_);
v___x_4713_ = lean_box(v___x_4707_);
v___x_4714_ = lean_box(v___x_4710_);
lean_inc_n(v_v_4711_, 2);
lean_inc(v_nExtra_4698_);
v___f_4715_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4715_, 0, v_nExtra_4698_);
lean_closure_set(v___f_4715_, 1, v_v_4711_);
lean_closure_set(v___f_4715_, 2, v___x_4712_);
lean_closure_set(v___f_4715_, 3, v___x_4713_);
lean_closure_set(v___f_4715_, 4, v___x_4714_);
v___x_4716_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_v_4711_, v___f_4715_, v___x_4709_, v___y_4702_, v___y_4703_, v___y_4704_, v___y_4705_);
if (lean_obj_tag(v___x_4716_) == 0)
{
lean_object* v_a_4717_; lean_object* v___x_4718_; lean_object* v_bs_x27_4719_; size_t v___x_4720_; size_t v___x_4721_; lean_object* v___x_4722_; 
v_a_4717_ = lean_ctor_get(v___x_4716_, 0);
lean_inc(v_a_4717_);
lean_dec_ref(v___x_4716_);
v___x_4718_ = lean_unsigned_to_nat(0u);
v_bs_x27_4719_ = lean_array_uset(v_bs_4701_, v_i_4700_, v___x_4718_);
v___x_4720_ = ((size_t)1ULL);
v___x_4721_ = lean_usize_add(v_i_4700_, v___x_4720_);
v___x_4722_ = lean_array_uset(v_bs_x27_4719_, v_i_4700_, v_a_4717_);
v_i_4700_ = v___x_4721_;
v_bs_4701_ = v___x_4722_;
goto _start;
}
else
{
lean_object* v_a_4724_; lean_object* v___x_4726_; uint8_t v_isShared_4727_; uint8_t v_isSharedCheck_4731_; 
lean_dec_ref(v_bs_4701_);
lean_dec(v_nExtra_4698_);
v_a_4724_ = lean_ctor_get(v___x_4716_, 0);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___x_4716_);
if (v_isSharedCheck_4731_ == 0)
{
v___x_4726_ = v___x_4716_;
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
else
{
lean_inc(v_a_4724_);
lean_dec(v___x_4716_);
v___x_4726_ = lean_box(0);
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
v_resetjp_4725_:
{
lean_object* v___x_4729_; 
if (v_isShared_4727_ == 0)
{
v___x_4729_ = v___x_4726_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v_a_4724_);
v___x_4729_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
return v___x_4729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3___boxed(lean_object* v_nExtra_4732_, lean_object* v_sz_4733_, lean_object* v_i_4734_, lean_object* v_bs_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_){
_start:
{
size_t v_sz_boxed_4741_; size_t v_i_boxed_4742_; lean_object* v_res_4743_; 
v_sz_boxed_4741_ = lean_unbox_usize(v_sz_4733_);
lean_dec(v_sz_4733_);
v_i_boxed_4742_ = lean_unbox_usize(v_i_4734_);
lean_dec(v_i_4734_);
v_res_4743_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4732_, v_sz_boxed_4741_, v_i_boxed_4742_, v_bs_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_);
lean_dec(v___y_4739_);
lean_dec_ref(v___y_4738_);
lean_dec(v___y_4737_);
lean_dec_ref(v___y_4736_);
return v_res_4743_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0(void){
_start:
{
lean_object* v___x_4744_; lean_object* v___x_4745_; 
v___x_4744_ = lean_box(0);
v___x_4745_ = l_Lean_Expr_sort___override(v___x_4744_);
return v___x_4745_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4746_; lean_object* v___x_4747_; 
v___x_4746_ = lean_box(0);
v___x_4747_ = l_Lean_Level_succ___override(v___x_4746_);
return v___x_4747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3(lean_object* v_nExtra_4748_, uint8_t v___x_4749_, uint8_t v___x_4750_, lean_object* v_alts_4751_, lean_object* v_toMatcherInfo_4752_, lean_object* v_matcherName_4753_, lean_object* v_params_4754_, lean_object* v_matcherLevels_4755_, lean_object* v_motiveArgs_4756_, lean_object* v_body_4757_, lean_object* v___y_4758_, lean_object* v___y_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_){
_start:
{
lean_object* v___x_4763_; 
lean_inc(v_nExtra_4748_);
v___x_4763_ = l_Lean_Meta_arrowDomainsN(v_nExtra_4748_, v_body_4757_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_);
if (lean_obj_tag(v___x_4763_) == 0)
{
lean_object* v_a_4764_; lean_object* v___x_4765_; uint8_t v___x_4766_; lean_object* v___x_4767_; 
v_a_4764_ = lean_ctor_get(v___x_4763_, 0);
lean_inc(v_a_4764_);
lean_dec_ref(v___x_4763_);
v___x_4765_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__0);
v___x_4766_ = 1;
v___x_4767_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_4756_, v___x_4765_, v___x_4749_, v___x_4750_, v___x_4749_, v___x_4750_, v___x_4766_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_);
if (lean_obj_tag(v___x_4767_) == 0)
{
lean_object* v_a_4768_; size_t v_sz_4769_; size_t v___x_4770_; lean_object* v___x_4771_; 
v_a_4768_ = lean_ctor_get(v___x_4767_, 0);
lean_inc(v_a_4768_);
lean_dec_ref(v___x_4767_);
v_sz_4769_ = lean_array_size(v_alts_4751_);
v___x_4770_ = ((size_t)0ULL);
v___x_4771_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_inferMatchType_spec__3(v_nExtra_4748_, v_sz_4769_, v___x_4770_, v_alts_4751_, v___y_4758_, v___y_4759_, v___y_4760_, v___y_4761_);
if (lean_obj_tag(v___x_4771_) == 0)
{
lean_object* v_a_4772_; lean_object* v_matcherLevels_4774_; lean_object* v___y_4775_; lean_object* v___y_4776_; lean_object* v_uElimPos_x3f_4781_; 
v_a_4772_ = lean_ctor_get(v___x_4771_, 0);
lean_inc(v_a_4772_);
lean_dec_ref(v___x_4771_);
v_uElimPos_x3f_4781_ = lean_ctor_get(v_toMatcherInfo_4752_, 3);
if (lean_obj_tag(v_uElimPos_x3f_4781_) == 0)
{
v_matcherLevels_4774_ = v_matcherLevels_4755_;
v___y_4775_ = v___y_4760_;
v___y_4776_ = v___y_4761_;
goto v___jp_4773_;
}
else
{
lean_object* v_val_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; 
v_val_4782_ = lean_ctor_get(v_uElimPos_x3f_4781_, 0);
v___x_4783_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___lam__3___closed__1);
v___x_4784_ = lean_array_set(v_matcherLevels_4755_, v_val_4782_, v___x_4783_);
v_matcherLevels_4774_ = v___x_4784_;
v___y_4775_ = v___y_4760_;
v___y_4776_ = v___y_4761_;
goto v___jp_4773_;
}
v___jp_4773_:
{
lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; 
v___x_4777_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0, &l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0);
v___x_4778_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_4778_, 0, v_toMatcherInfo_4752_);
lean_ctor_set(v___x_4778_, 1, v_matcherName_4753_);
lean_ctor_set(v___x_4778_, 2, v_matcherLevels_4774_);
lean_ctor_set(v___x_4778_, 3, v_params_4754_);
lean_ctor_set(v___x_4778_, 4, v_a_4768_);
lean_ctor_set(v___x_4778_, 5, v_motiveArgs_4756_);
lean_ctor_set(v___x_4778_, 6, v_a_4772_);
lean_ctor_set(v___x_4778_, 7, v___x_4777_);
v___x_4779_ = l_Lean_Meta_MatcherApp_toExpr(v___x_4778_);
v___x_4780_ = l_Lean_mkArrowN(v_a_4764_, v___x_4779_, v___y_4775_, v___y_4776_);
lean_dec(v_a_4764_);
return v___x_4780_;
}
}
else
{
lean_object* v_a_4785_; lean_object* v___x_4787_; uint8_t v_isShared_4788_; uint8_t v_isSharedCheck_4792_; 
lean_dec(v_a_4768_);
lean_dec(v_a_4764_);
lean_dec_ref(v_motiveArgs_4756_);
lean_dec_ref(v_matcherLevels_4755_);
lean_dec_ref(v_params_4754_);
lean_dec(v_matcherName_4753_);
lean_dec_ref(v_toMatcherInfo_4752_);
v_a_4785_ = lean_ctor_get(v___x_4771_, 0);
v_isSharedCheck_4792_ = !lean_is_exclusive(v___x_4771_);
if (v_isSharedCheck_4792_ == 0)
{
v___x_4787_ = v___x_4771_;
v_isShared_4788_ = v_isSharedCheck_4792_;
goto v_resetjp_4786_;
}
else
{
lean_inc(v_a_4785_);
lean_dec(v___x_4771_);
v___x_4787_ = lean_box(0);
v_isShared_4788_ = v_isSharedCheck_4792_;
goto v_resetjp_4786_;
}
v_resetjp_4786_:
{
lean_object* v___x_4790_; 
if (v_isShared_4788_ == 0)
{
v___x_4790_ = v___x_4787_;
goto v_reusejp_4789_;
}
else
{
lean_object* v_reuseFailAlloc_4791_; 
v_reuseFailAlloc_4791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4791_, 0, v_a_4785_);
v___x_4790_ = v_reuseFailAlloc_4791_;
goto v_reusejp_4789_;
}
v_reusejp_4789_:
{
return v___x_4790_;
}
}
}
}
else
{
lean_dec(v_a_4764_);
lean_dec_ref(v_motiveArgs_4756_);
lean_dec_ref(v_matcherLevels_4755_);
lean_dec_ref(v_params_4754_);
lean_dec(v_matcherName_4753_);
lean_dec_ref(v_toMatcherInfo_4752_);
lean_dec_ref(v_alts_4751_);
lean_dec(v_nExtra_4748_);
return v___x_4767_;
}
}
else
{
lean_object* v_a_4793_; lean_object* v___x_4795_; uint8_t v_isShared_4796_; uint8_t v_isSharedCheck_4800_; 
lean_dec_ref(v_motiveArgs_4756_);
lean_dec_ref(v_matcherLevels_4755_);
lean_dec_ref(v_params_4754_);
lean_dec(v_matcherName_4753_);
lean_dec_ref(v_toMatcherInfo_4752_);
lean_dec_ref(v_alts_4751_);
lean_dec(v_nExtra_4748_);
v_a_4793_ = lean_ctor_get(v___x_4763_, 0);
v_isSharedCheck_4800_ = !lean_is_exclusive(v___x_4763_);
if (v_isSharedCheck_4800_ == 0)
{
v___x_4795_ = v___x_4763_;
v_isShared_4796_ = v_isSharedCheck_4800_;
goto v_resetjp_4794_;
}
else
{
lean_inc(v_a_4793_);
lean_dec(v___x_4763_);
v___x_4795_ = lean_box(0);
v_isShared_4796_ = v_isSharedCheck_4800_;
goto v_resetjp_4794_;
}
v_resetjp_4794_:
{
lean_object* v___x_4798_; 
if (v_isShared_4796_ == 0)
{
v___x_4798_ = v___x_4795_;
goto v_reusejp_4797_;
}
else
{
lean_object* v_reuseFailAlloc_4799_; 
v_reuseFailAlloc_4799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4799_, 0, v_a_4793_);
v___x_4798_ = v_reuseFailAlloc_4799_;
goto v_reusejp_4797_;
}
v_reusejp_4797_:
{
return v___x_4798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed(lean_object* v_nExtra_4801_, lean_object* v___x_4802_, lean_object* v___x_4803_, lean_object* v_alts_4804_, lean_object* v_toMatcherInfo_4805_, lean_object* v_matcherName_4806_, lean_object* v_params_4807_, lean_object* v_matcherLevels_4808_, lean_object* v_motiveArgs_4809_, lean_object* v_body_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_){
_start:
{
uint8_t v___x_32746__boxed_4816_; uint8_t v___x_32747__boxed_4817_; lean_object* v_res_4818_; 
v___x_32746__boxed_4816_ = lean_unbox(v___x_4802_);
v___x_32747__boxed_4817_ = lean_unbox(v___x_4803_);
v_res_4818_ = l_Lean_Meta_MatcherApp_inferMatchType___lam__3(v_nExtra_4801_, v___x_32746__boxed_4816_, v___x_32747__boxed_4817_, v_alts_4804_, v_toMatcherInfo_4805_, v_matcherName_4806_, v_params_4807_, v_matcherLevels_4808_, v_motiveArgs_4809_, v_body_4810_, v___y_4811_, v___y_4812_, v___y_4813_, v___y_4814_);
lean_dec(v___y_4814_);
lean_dec_ref(v___y_4813_);
lean_dec(v___y_4812_);
lean_dec_ref(v___y_4811_);
return v_res_4818_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(uint8_t v_addEqualities_4819_, lean_object* v_as_4820_, size_t v_sz_4821_, size_t v_i_4822_, lean_object* v_b_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_){
_start:
{
lean_object* v_a_4830_; uint8_t v___x_4834_; 
v___x_4834_ = lean_usize_dec_lt(v_i_4822_, v_sz_4821_);
if (v___x_4834_ == 0)
{
lean_object* v___x_4835_; 
v___x_4835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4835_, 0, v_b_4823_);
return v___x_4835_;
}
else
{
lean_object* v_snd_4836_; lean_object* v_snd_4837_; lean_object* v_snd_4838_; lean_object* v_snd_4839_; lean_object* v_fst_4840_; lean_object* v___x_4842_; uint8_t v_isShared_4843_; uint8_t v_isSharedCheck_4986_; 
v_snd_4836_ = lean_ctor_get(v_b_4823_, 1);
lean_inc(v_snd_4836_);
v_snd_4837_ = lean_ctor_get(v_snd_4836_, 1);
lean_inc(v_snd_4837_);
v_snd_4838_ = lean_ctor_get(v_snd_4837_, 1);
lean_inc(v_snd_4838_);
v_snd_4839_ = lean_ctor_get(v_snd_4838_, 1);
lean_inc(v_snd_4839_);
v_fst_4840_ = lean_ctor_get(v_b_4823_, 0);
v_isSharedCheck_4986_ = !lean_is_exclusive(v_b_4823_);
if (v_isSharedCheck_4986_ == 0)
{
lean_object* v_unused_4987_; 
v_unused_4987_ = lean_ctor_get(v_b_4823_, 1);
lean_dec(v_unused_4987_);
v___x_4842_ = v_b_4823_;
v_isShared_4843_ = v_isSharedCheck_4986_;
goto v_resetjp_4841_;
}
else
{
lean_inc(v_fst_4840_);
lean_dec(v_b_4823_);
v___x_4842_ = lean_box(0);
v_isShared_4843_ = v_isSharedCheck_4986_;
goto v_resetjp_4841_;
}
v_resetjp_4841_:
{
lean_object* v_fst_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4984_; 
v_fst_4844_ = lean_ctor_get(v_snd_4836_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v_snd_4836_);
if (v_isSharedCheck_4984_ == 0)
{
lean_object* v_unused_4985_; 
v_unused_4985_ = lean_ctor_get(v_snd_4836_, 1);
lean_dec(v_unused_4985_);
v___x_4846_ = v_snd_4836_;
v_isShared_4847_ = v_isSharedCheck_4984_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_fst_4844_);
lean_dec(v_snd_4836_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4984_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v_fst_4848_; lean_object* v___x_4850_; uint8_t v_isShared_4851_; uint8_t v_isSharedCheck_4982_; 
v_fst_4848_ = lean_ctor_get(v_snd_4837_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v_snd_4837_);
if (v_isSharedCheck_4982_ == 0)
{
lean_object* v_unused_4983_; 
v_unused_4983_ = lean_ctor_get(v_snd_4837_, 1);
lean_dec(v_unused_4983_);
v___x_4850_ = v_snd_4837_;
v_isShared_4851_ = v_isSharedCheck_4982_;
goto v_resetjp_4849_;
}
else
{
lean_inc(v_fst_4848_);
lean_dec(v_snd_4837_);
v___x_4850_ = lean_box(0);
v_isShared_4851_ = v_isSharedCheck_4982_;
goto v_resetjp_4849_;
}
v_resetjp_4849_:
{
lean_object* v_fst_4852_; lean_object* v___x_4854_; uint8_t v_isShared_4855_; uint8_t v_isSharedCheck_4980_; 
v_fst_4852_ = lean_ctor_get(v_snd_4838_, 0);
v_isSharedCheck_4980_ = !lean_is_exclusive(v_snd_4838_);
if (v_isSharedCheck_4980_ == 0)
{
lean_object* v_unused_4981_; 
v_unused_4981_ = lean_ctor_get(v_snd_4838_, 1);
lean_dec(v_unused_4981_);
v___x_4854_ = v_snd_4838_;
v_isShared_4855_ = v_isSharedCheck_4980_;
goto v_resetjp_4853_;
}
else
{
lean_inc(v_fst_4852_);
lean_dec(v_snd_4838_);
v___x_4854_ = lean_box(0);
v_isShared_4855_ = v_isSharedCheck_4980_;
goto v_resetjp_4853_;
}
v_resetjp_4853_:
{
lean_object* v_array_4856_; lean_object* v_start_4857_; lean_object* v_stop_4858_; uint8_t v___x_4859_; 
v_array_4856_ = lean_ctor_get(v_snd_4839_, 0);
v_start_4857_ = lean_ctor_get(v_snd_4839_, 1);
v_stop_4858_ = lean_ctor_get(v_snd_4839_, 2);
v___x_4859_ = lean_nat_dec_lt(v_start_4857_, v_stop_4858_);
if (v___x_4859_ == 0)
{
lean_object* v___x_4861_; 
if (v_isShared_4855_ == 0)
{
v___x_4861_ = v___x_4854_;
goto v_reusejp_4860_;
}
else
{
lean_object* v_reuseFailAlloc_4872_; 
v_reuseFailAlloc_4872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4872_, 0, v_fst_4852_);
lean_ctor_set(v_reuseFailAlloc_4872_, 1, v_snd_4839_);
v___x_4861_ = v_reuseFailAlloc_4872_;
goto v_reusejp_4860_;
}
v_reusejp_4860_:
{
lean_object* v___x_4863_; 
if (v_isShared_4851_ == 0)
{
lean_ctor_set(v___x_4850_, 1, v___x_4861_);
v___x_4863_ = v___x_4850_;
goto v_reusejp_4862_;
}
else
{
lean_object* v_reuseFailAlloc_4871_; 
v_reuseFailAlloc_4871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4871_, 0, v_fst_4848_);
lean_ctor_set(v_reuseFailAlloc_4871_, 1, v___x_4861_);
v___x_4863_ = v_reuseFailAlloc_4871_;
goto v_reusejp_4862_;
}
v_reusejp_4862_:
{
lean_object* v___x_4865_; 
if (v_isShared_4847_ == 0)
{
lean_ctor_set(v___x_4846_, 1, v___x_4863_);
v___x_4865_ = v___x_4846_;
goto v_reusejp_4864_;
}
else
{
lean_object* v_reuseFailAlloc_4870_; 
v_reuseFailAlloc_4870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4870_, 0, v_fst_4844_);
lean_ctor_set(v_reuseFailAlloc_4870_, 1, v___x_4863_);
v___x_4865_ = v_reuseFailAlloc_4870_;
goto v_reusejp_4864_;
}
v_reusejp_4864_:
{
lean_object* v___x_4867_; 
if (v_isShared_4843_ == 0)
{
lean_ctor_set(v___x_4842_, 1, v___x_4865_);
v___x_4867_ = v___x_4842_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v_fst_4840_);
lean_ctor_set(v_reuseFailAlloc_4869_, 1, v___x_4865_);
v___x_4867_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
lean_object* v___x_4868_; 
v___x_4868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4868_, 0, v___x_4867_);
return v___x_4868_;
}
}
}
}
}
else
{
lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4976_; 
lean_inc(v_stop_4858_);
lean_inc(v_start_4857_);
lean_inc_ref(v_array_4856_);
v_isSharedCheck_4976_ = !lean_is_exclusive(v_snd_4839_);
if (v_isSharedCheck_4976_ == 0)
{
lean_object* v_unused_4977_; lean_object* v_unused_4978_; lean_object* v_unused_4979_; 
v_unused_4977_ = lean_ctor_get(v_snd_4839_, 2);
lean_dec(v_unused_4977_);
v_unused_4978_ = lean_ctor_get(v_snd_4839_, 1);
lean_dec(v_unused_4978_);
v_unused_4979_ = lean_ctor_get(v_snd_4839_, 0);
lean_dec(v_unused_4979_);
v___x_4874_ = v_snd_4839_;
v_isShared_4875_ = v_isSharedCheck_4976_;
goto v_resetjp_4873_;
}
else
{
lean_dec(v_snd_4839_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4976_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v_array_4876_; lean_object* v_start_4877_; lean_object* v_stop_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; lean_object* v___x_4883_; 
v_array_4876_ = lean_ctor_get(v_fst_4852_, 0);
v_start_4877_ = lean_ctor_get(v_fst_4852_, 1);
v_stop_4878_ = lean_ctor_get(v_fst_4852_, 2);
v___x_4879_ = lean_array_fget(v_array_4856_, v_start_4857_);
v___x_4880_ = lean_unsigned_to_nat(1u);
v___x_4881_ = lean_nat_add(v_start_4857_, v___x_4880_);
lean_dec(v_start_4857_);
if (v_isShared_4875_ == 0)
{
lean_ctor_set(v___x_4874_, 1, v___x_4881_);
v___x_4883_ = v___x_4874_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4975_; 
v_reuseFailAlloc_4975_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4975_, 0, v_array_4856_);
lean_ctor_set(v_reuseFailAlloc_4975_, 1, v___x_4881_);
lean_ctor_set(v_reuseFailAlloc_4975_, 2, v_stop_4858_);
v___x_4883_ = v_reuseFailAlloc_4975_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
uint8_t v___x_4884_; 
v___x_4884_ = lean_nat_dec_lt(v_start_4877_, v_stop_4878_);
if (v___x_4884_ == 0)
{
lean_object* v___x_4886_; 
lean_dec(v___x_4879_);
if (v_isShared_4855_ == 0)
{
lean_ctor_set(v___x_4854_, 1, v___x_4883_);
v___x_4886_ = v___x_4854_;
goto v_reusejp_4885_;
}
else
{
lean_object* v_reuseFailAlloc_4897_; 
v_reuseFailAlloc_4897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4897_, 0, v_fst_4852_);
lean_ctor_set(v_reuseFailAlloc_4897_, 1, v___x_4883_);
v___x_4886_ = v_reuseFailAlloc_4897_;
goto v_reusejp_4885_;
}
v_reusejp_4885_:
{
lean_object* v___x_4888_; 
if (v_isShared_4851_ == 0)
{
lean_ctor_set(v___x_4850_, 1, v___x_4886_);
v___x_4888_ = v___x_4850_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4896_; 
v_reuseFailAlloc_4896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4896_, 0, v_fst_4848_);
lean_ctor_set(v_reuseFailAlloc_4896_, 1, v___x_4886_);
v___x_4888_ = v_reuseFailAlloc_4896_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
lean_object* v___x_4890_; 
if (v_isShared_4847_ == 0)
{
lean_ctor_set(v___x_4846_, 1, v___x_4888_);
v___x_4890_ = v___x_4846_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v_fst_4844_);
lean_ctor_set(v_reuseFailAlloc_4895_, 1, v___x_4888_);
v___x_4890_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
lean_object* v___x_4892_; 
if (v_isShared_4843_ == 0)
{
lean_ctor_set(v___x_4842_, 1, v___x_4890_);
v___x_4892_ = v___x_4842_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v_fst_4840_);
lean_ctor_set(v_reuseFailAlloc_4894_, 1, v___x_4890_);
v___x_4892_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
lean_object* v___x_4893_; 
v___x_4893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4893_, 0, v___x_4892_);
return v___x_4893_;
}
}
}
}
}
else
{
lean_object* v___x_4899_; uint8_t v_isShared_4900_; uint8_t v_isSharedCheck_4971_; 
lean_inc(v_stop_4878_);
lean_inc(v_start_4877_);
lean_inc_ref(v_array_4876_);
v_isSharedCheck_4971_ = !lean_is_exclusive(v_fst_4852_);
if (v_isSharedCheck_4971_ == 0)
{
lean_object* v_unused_4972_; lean_object* v_unused_4973_; lean_object* v_unused_4974_; 
v_unused_4972_ = lean_ctor_get(v_fst_4852_, 2);
lean_dec(v_unused_4972_);
v_unused_4973_ = lean_ctor_get(v_fst_4852_, 1);
lean_dec(v_unused_4973_);
v_unused_4974_ = lean_ctor_get(v_fst_4852_, 0);
lean_dec(v_unused_4974_);
v___x_4899_ = v_fst_4852_;
v_isShared_4900_ = v_isSharedCheck_4971_;
goto v_resetjp_4898_;
}
else
{
lean_dec(v_fst_4852_);
v___x_4899_ = lean_box(0);
v_isShared_4900_ = v_isSharedCheck_4971_;
goto v_resetjp_4898_;
}
v_resetjp_4898_:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4904_; 
v___x_4901_ = lean_array_fget(v_array_4876_, v_start_4877_);
v___x_4902_ = lean_nat_add(v_start_4877_, v___x_4880_);
lean_dec(v_start_4877_);
if (v_isShared_4900_ == 0)
{
lean_ctor_set(v___x_4899_, 1, v___x_4902_);
v___x_4904_ = v___x_4899_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4970_; 
v_reuseFailAlloc_4970_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4970_, 0, v_array_4876_);
lean_ctor_set(v_reuseFailAlloc_4970_, 1, v___x_4902_);
lean_ctor_set(v_reuseFailAlloc_4970_, 2, v_stop_4878_);
v___x_4904_ = v_reuseFailAlloc_4970_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
if (v_addEqualities_4819_ == 0)
{
lean_dec(v___x_4901_);
goto v___jp_4905_;
}
else
{
if (lean_obj_tag(v___x_4879_) == 0)
{
lean_object* v_a_4921_; lean_object* v___x_4922_; 
lean_del_object(v___x_4854_);
lean_del_object(v___x_4850_);
lean_del_object(v___x_4846_);
lean_del_object(v___x_4842_);
v_a_4921_ = lean_array_uget_borrowed(v_as_4820_, v_i_4822_);
lean_inc(v_a_4921_);
v___x_4922_ = l_Lean_Meta_isProof(v_a_4921_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_);
if (lean_obj_tag(v___x_4922_) == 0)
{
lean_object* v_a_4923_; uint8_t v___x_4924_; 
v_a_4923_ = lean_ctor_get(v___x_4922_, 0);
lean_inc(v_a_4923_);
lean_dec_ref(v___x_4922_);
v___x_4924_ = lean_unbox(v_a_4923_);
lean_dec(v_a_4923_);
if (v___x_4924_ == 0)
{
lean_object* v___x_4925_; 
lean_inc(v_a_4921_);
v___x_4925_ = l_Lean_Meta_mkEqHEq(v___x_4901_, v_a_4921_, v___y_4824_, v___y_4825_, v___y_4826_, v___y_4827_);
if (lean_obj_tag(v___x_4925_) == 0)
{
lean_object* v_a_4926_; lean_object* v___x_4927_; 
v_a_4926_ = lean_ctor_get(v___x_4925_, 0);
lean_inc_n(v_a_4926_, 2);
lean_dec_ref(v___x_4925_);
v___x_4927_ = l_Lean_mkArrow(v_a_4926_, v_fst_4840_, v___y_4826_, v___y_4827_);
if (lean_obj_tag(v___x_4927_) == 0)
{
lean_object* v_a_4928_; uint8_t v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; 
v_a_4928_ = lean_ctor_get(v___x_4927_, 0);
lean_inc(v_a_4928_);
lean_dec_ref(v___x_4927_);
v___x_4929_ = l_Lean_Expr_isHEq(v_a_4926_);
lean_dec(v_a_4926_);
v___x_4930_ = lean_box(v___x_4929_);
v___x_4931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4931_, 0, v___x_4930_);
v___x_4932_ = lean_array_push(v_fst_4844_, v___x_4931_);
v___x_4933_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__9___closed__0);
v___x_4934_ = lean_array_push(v_fst_4848_, v___x_4933_);
v___x_4935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4935_, 0, v___x_4904_);
lean_ctor_set(v___x_4935_, 1, v___x_4883_);
v___x_4936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4936_, 0, v___x_4934_);
lean_ctor_set(v___x_4936_, 1, v___x_4935_);
v___x_4937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4937_, 0, v___x_4932_);
lean_ctor_set(v___x_4937_, 1, v___x_4936_);
v___x_4938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4938_, 0, v_a_4928_);
lean_ctor_set(v___x_4938_, 1, v___x_4937_);
v_a_4830_ = v___x_4938_;
goto v___jp_4829_;
}
else
{
lean_object* v_a_4939_; lean_object* v___x_4941_; uint8_t v_isShared_4942_; uint8_t v_isSharedCheck_4946_; 
lean_dec(v_a_4926_);
lean_dec_ref(v___x_4904_);
lean_dec_ref(v___x_4883_);
lean_dec(v_fst_4848_);
lean_dec(v_fst_4844_);
v_a_4939_ = lean_ctor_get(v___x_4927_, 0);
v_isSharedCheck_4946_ = !lean_is_exclusive(v___x_4927_);
if (v_isSharedCheck_4946_ == 0)
{
v___x_4941_ = v___x_4927_;
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
else
{
lean_inc(v_a_4939_);
lean_dec(v___x_4927_);
v___x_4941_ = lean_box(0);
v_isShared_4942_ = v_isSharedCheck_4946_;
goto v_resetjp_4940_;
}
v_resetjp_4940_:
{
lean_object* v___x_4944_; 
if (v_isShared_4942_ == 0)
{
v___x_4944_ = v___x_4941_;
goto v_reusejp_4943_;
}
else
{
lean_object* v_reuseFailAlloc_4945_; 
v_reuseFailAlloc_4945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4945_, 0, v_a_4939_);
v___x_4944_ = v_reuseFailAlloc_4945_;
goto v_reusejp_4943_;
}
v_reusejp_4943_:
{
return v___x_4944_;
}
}
}
}
else
{
lean_object* v_a_4947_; lean_object* v___x_4949_; uint8_t v_isShared_4950_; uint8_t v_isSharedCheck_4954_; 
lean_dec_ref(v___x_4904_);
lean_dec_ref(v___x_4883_);
lean_dec(v_fst_4848_);
lean_dec(v_fst_4844_);
lean_dec(v_fst_4840_);
v_a_4947_ = lean_ctor_get(v___x_4925_, 0);
v_isSharedCheck_4954_ = !lean_is_exclusive(v___x_4925_);
if (v_isSharedCheck_4954_ == 0)
{
v___x_4949_ = v___x_4925_;
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
else
{
lean_inc(v_a_4947_);
lean_dec(v___x_4925_);
v___x_4949_ = lean_box(0);
v_isShared_4950_ = v_isSharedCheck_4954_;
goto v_resetjp_4948_;
}
v_resetjp_4948_:
{
lean_object* v___x_4952_; 
if (v_isShared_4950_ == 0)
{
v___x_4952_ = v___x_4949_;
goto v_reusejp_4951_;
}
else
{
lean_object* v_reuseFailAlloc_4953_; 
v_reuseFailAlloc_4953_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4953_, 0, v_a_4947_);
v___x_4952_ = v_reuseFailAlloc_4953_;
goto v_reusejp_4951_;
}
v_reusejp_4951_:
{
return v___x_4952_;
}
}
}
}
else
{
lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; 
lean_dec(v___x_4901_);
v___x_4955_ = lean_box(0);
v___x_4956_ = lean_array_push(v_fst_4844_, v___x_4955_);
v___x_4957_ = lean_array_push(v_fst_4848_, v___x_4879_);
v___x_4958_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4958_, 0, v___x_4904_);
lean_ctor_set(v___x_4958_, 1, v___x_4883_);
v___x_4959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4959_, 0, v___x_4957_);
lean_ctor_set(v___x_4959_, 1, v___x_4958_);
v___x_4960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4960_, 0, v___x_4956_);
lean_ctor_set(v___x_4960_, 1, v___x_4959_);
v___x_4961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4961_, 0, v_fst_4840_);
lean_ctor_set(v___x_4961_, 1, v___x_4960_);
v_a_4830_ = v___x_4961_;
goto v___jp_4829_;
}
}
else
{
lean_object* v_a_4962_; lean_object* v___x_4964_; uint8_t v_isShared_4965_; uint8_t v_isSharedCheck_4969_; 
lean_dec_ref(v___x_4904_);
lean_dec(v___x_4901_);
lean_dec_ref(v___x_4883_);
lean_dec(v_fst_4848_);
lean_dec(v_fst_4844_);
lean_dec(v_fst_4840_);
v_a_4962_ = lean_ctor_get(v___x_4922_, 0);
v_isSharedCheck_4969_ = !lean_is_exclusive(v___x_4922_);
if (v_isSharedCheck_4969_ == 0)
{
v___x_4964_ = v___x_4922_;
v_isShared_4965_ = v_isSharedCheck_4969_;
goto v_resetjp_4963_;
}
else
{
lean_inc(v_a_4962_);
lean_dec(v___x_4922_);
v___x_4964_ = lean_box(0);
v_isShared_4965_ = v_isSharedCheck_4969_;
goto v_resetjp_4963_;
}
v_resetjp_4963_:
{
lean_object* v___x_4967_; 
if (v_isShared_4965_ == 0)
{
v___x_4967_ = v___x_4964_;
goto v_reusejp_4966_;
}
else
{
lean_object* v_reuseFailAlloc_4968_; 
v_reuseFailAlloc_4968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4968_, 0, v_a_4962_);
v___x_4967_ = v_reuseFailAlloc_4968_;
goto v_reusejp_4966_;
}
v_reusejp_4966_:
{
return v___x_4967_;
}
}
}
}
else
{
lean_dec(v___x_4901_);
goto v___jp_4905_;
}
}
v___jp_4905_:
{
lean_object* v___x_4906_; lean_object* v___x_4907_; lean_object* v___x_4908_; lean_object* v___x_4910_; 
v___x_4906_ = lean_box(0);
v___x_4907_ = lean_array_push(v_fst_4844_, v___x_4906_);
v___x_4908_ = lean_array_push(v_fst_4848_, v___x_4879_);
if (v_isShared_4855_ == 0)
{
lean_ctor_set(v___x_4854_, 1, v___x_4883_);
lean_ctor_set(v___x_4854_, 0, v___x_4904_);
v___x_4910_ = v___x_4854_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4920_; 
v_reuseFailAlloc_4920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4920_, 0, v___x_4904_);
lean_ctor_set(v_reuseFailAlloc_4920_, 1, v___x_4883_);
v___x_4910_ = v_reuseFailAlloc_4920_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
lean_object* v___x_4912_; 
if (v_isShared_4851_ == 0)
{
lean_ctor_set(v___x_4850_, 1, v___x_4910_);
lean_ctor_set(v___x_4850_, 0, v___x_4908_);
v___x_4912_ = v___x_4850_;
goto v_reusejp_4911_;
}
else
{
lean_object* v_reuseFailAlloc_4919_; 
v_reuseFailAlloc_4919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4919_, 0, v___x_4908_);
lean_ctor_set(v_reuseFailAlloc_4919_, 1, v___x_4910_);
v___x_4912_ = v_reuseFailAlloc_4919_;
goto v_reusejp_4911_;
}
v_reusejp_4911_:
{
lean_object* v___x_4914_; 
if (v_isShared_4847_ == 0)
{
lean_ctor_set(v___x_4846_, 1, v___x_4912_);
lean_ctor_set(v___x_4846_, 0, v___x_4907_);
v___x_4914_ = v___x_4846_;
goto v_reusejp_4913_;
}
else
{
lean_object* v_reuseFailAlloc_4918_; 
v_reuseFailAlloc_4918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4918_, 0, v___x_4907_);
lean_ctor_set(v_reuseFailAlloc_4918_, 1, v___x_4912_);
v___x_4914_ = v_reuseFailAlloc_4918_;
goto v_reusejp_4913_;
}
v_reusejp_4913_:
{
lean_object* v___x_4916_; 
if (v_isShared_4843_ == 0)
{
lean_ctor_set(v___x_4842_, 1, v___x_4914_);
v___x_4916_ = v___x_4842_;
goto v_reusejp_4915_;
}
else
{
lean_object* v_reuseFailAlloc_4917_; 
v_reuseFailAlloc_4917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4917_, 0, v_fst_4840_);
lean_ctor_set(v_reuseFailAlloc_4917_, 1, v___x_4914_);
v___x_4916_ = v_reuseFailAlloc_4917_;
goto v_reusejp_4915_;
}
v_reusejp_4915_:
{
v_a_4830_ = v___x_4916_;
goto v___jp_4829_;
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
}
v___jp_4829_:
{
size_t v___x_4831_; size_t v___x_4832_; 
v___x_4831_ = ((size_t)1ULL);
v___x_4832_ = lean_usize_add(v_i_4822_, v___x_4831_);
v_i_4822_ = v___x_4832_;
v_b_4823_ = v_a_4830_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7___boxed(lean_object* v_addEqualities_4988_, lean_object* v_as_4989_, lean_object* v_sz_4990_, lean_object* v_i_4991_, lean_object* v_b_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
uint8_t v_addEqualities_boxed_4998_; size_t v_sz_boxed_4999_; size_t v_i_boxed_5000_; lean_object* v_res_5001_; 
v_addEqualities_boxed_4998_ = lean_unbox(v_addEqualities_4988_);
v_sz_boxed_4999_ = lean_unbox_usize(v_sz_4990_);
lean_dec(v_sz_4990_);
v_i_boxed_5000_ = lean_unbox_usize(v_i_4991_);
lean_dec(v_i_4991_);
v_res_5001_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_boxed_4998_, v_as_4989_, v_sz_boxed_4999_, v_i_boxed_5000_, v_b_4992_, v___y_4993_, v___y_4994_, v___y_4995_, v___y_4996_);
lean_dec(v___y_4996_);
lean_dec_ref(v___y_4995_);
lean_dec(v___y_4994_);
lean_dec_ref(v___y_4993_);
lean_dec_ref(v_as_4989_);
return v_res_5001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(lean_object* v_onMotive_5002_, lean_object* v_toMatcherInfo_5003_, lean_object* v_a_5004_, uint8_t v_addEqualities_5005_, size_t v___x_5006_, lean_object* v_discrs_5007_, lean_object* v_motiveArgs_5008_, lean_object* v_motiveBody_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_, lean_object* v___y_5013_){
_start:
{
lean_object* v___x_5107_; lean_object* v___x_5108_; uint8_t v___x_5109_; 
v___x_5107_ = lean_array_get_size(v_motiveArgs_5008_);
v___x_5108_ = lean_array_get_size(v_discrs_5007_);
v___x_5109_ = lean_nat_dec_eq(v___x_5107_, v___x_5108_);
if (v___x_5109_ == 0)
{
lean_object* v___x_5110_; lean_object* v___x_5111_; lean_object* v___x_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; lean_object* v___x_5115_; lean_object* v___x_5116_; lean_object* v___x_5117_; lean_object* v_a_5118_; lean_object* v___x_5120_; uint8_t v_isShared_5121_; uint8_t v_isSharedCheck_5125_; 
lean_dec_ref(v_motiveBody_5009_);
lean_dec_ref(v_motiveArgs_5008_);
lean_dec_ref(v_a_5004_);
lean_dec_ref(v_toMatcherInfo_5003_);
lean_dec_ref(v_onMotive_5002_);
v___x_5110_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__3);
v___x_5111_ = l_Nat_reprFast(v___x_5108_);
v___x_5112_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5112_, 0, v___x_5111_);
v___x_5113_ = l_Lean_MessageData_ofFormat(v___x_5112_);
v___x_5114_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5114_, 0, v___x_5110_);
lean_ctor_set(v___x_5114_, 1, v___x_5113_);
v___x_5115_ = lean_obj_once(&l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5, &l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5_once, _init_l_Lean_Meta_MatcherApp_addArg___lam__0___closed__5);
v___x_5116_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5116_, 0, v___x_5114_);
lean_ctor_set(v___x_5116_, 1, v___x_5115_);
v___x_5117_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5116_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_);
v_a_5118_ = lean_ctor_get(v___x_5117_, 0);
v_isSharedCheck_5125_ = !lean_is_exclusive(v___x_5117_);
if (v_isSharedCheck_5125_ == 0)
{
v___x_5120_ = v___x_5117_;
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
else
{
lean_inc(v_a_5118_);
lean_dec(v___x_5117_);
v___x_5120_ = lean_box(0);
v_isShared_5121_ = v_isSharedCheck_5125_;
goto v_resetjp_5119_;
}
v_resetjp_5119_:
{
lean_object* v___x_5123_; 
if (v_isShared_5121_ == 0)
{
v___x_5123_ = v___x_5120_;
goto v_reusejp_5122_;
}
else
{
lean_object* v_reuseFailAlloc_5124_; 
v_reuseFailAlloc_5124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5124_, 0, v_a_5118_);
v___x_5123_ = v_reuseFailAlloc_5124_;
goto v_reusejp_5122_;
}
v_reusejp_5122_:
{
return v___x_5123_;
}
}
}
else
{
goto v___jp_5015_;
}
v___jp_5015_:
{
lean_object* v___x_5016_; 
lean_inc(v___y_5013_);
lean_inc_ref(v___y_5012_);
lean_inc(v___y_5011_);
lean_inc_ref(v___y_5010_);
lean_inc_ref(v_motiveArgs_5008_);
v___x_5016_ = lean_apply_7(v_onMotive_5002_, v_motiveArgs_5008_, v_motiveBody_5009_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_, lean_box(0));
if (lean_obj_tag(v___x_5016_) == 0)
{
lean_object* v_a_5017_; lean_object* v_discrInfos_5018_; lean_object* v___x_5019_; lean_object* v_addHEqualities_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; size_t v_sz_5029_; lean_object* v___x_5030_; 
v_a_5017_ = lean_ctor_get(v___x_5016_, 0);
lean_inc(v_a_5017_);
lean_dec_ref(v___x_5016_);
v_discrInfos_5018_ = lean_ctor_get(v_toMatcherInfo_5003_, 4);
lean_inc_ref(v_discrInfos_5018_);
lean_dec_ref(v_toMatcherInfo_5003_);
v___x_5019_ = lean_unsigned_to_nat(0u);
v_addHEqualities_5020_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0, &l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__16___closed__0);
v___x_5021_ = lean_array_get_size(v_a_5004_);
v___x_5022_ = l_Array_toSubarray___redArg(v_a_5004_, v___x_5019_, v___x_5021_);
v___x_5023_ = lean_array_get_size(v_discrInfos_5018_);
v___x_5024_ = l_Array_toSubarray___redArg(v_discrInfos_5018_, v___x_5019_, v___x_5023_);
v___x_5025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5025_, 0, v___x_5022_);
lean_ctor_set(v___x_5025_, 1, v___x_5024_);
v___x_5026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5026_, 0, v_addHEqualities_5020_);
lean_ctor_set(v___x_5026_, 1, v___x_5025_);
v___x_5027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5027_, 0, v_addHEqualities_5020_);
lean_ctor_set(v___x_5027_, 1, v___x_5026_);
v___x_5028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5028_, 0, v_a_5017_);
lean_ctor_set(v___x_5028_, 1, v___x_5027_);
v_sz_5029_ = lean_array_size(v_motiveArgs_5008_);
v___x_5030_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__7(v_addEqualities_5005_, v_motiveArgs_5008_, v_sz_5029_, v___x_5006_, v___x_5028_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; lean_object* v_snd_5032_; lean_object* v_snd_5033_; lean_object* v_fst_5034_; lean_object* v___x_5036_; uint8_t v_isShared_5037_; uint8_t v_isSharedCheck_5089_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
lean_inc(v_a_5031_);
lean_dec_ref(v___x_5030_);
v_snd_5032_ = lean_ctor_get(v_a_5031_, 1);
lean_inc(v_snd_5032_);
v_snd_5033_ = lean_ctor_get(v_snd_5032_, 1);
lean_inc(v_snd_5033_);
v_fst_5034_ = lean_ctor_get(v_a_5031_, 0);
v_isSharedCheck_5089_ = !lean_is_exclusive(v_a_5031_);
if (v_isSharedCheck_5089_ == 0)
{
lean_object* v_unused_5090_; 
v_unused_5090_ = lean_ctor_get(v_a_5031_, 1);
lean_dec(v_unused_5090_);
v___x_5036_ = v_a_5031_;
v_isShared_5037_ = v_isSharedCheck_5089_;
goto v_resetjp_5035_;
}
else
{
lean_inc(v_fst_5034_);
lean_dec(v_a_5031_);
v___x_5036_ = lean_box(0);
v_isShared_5037_ = v_isSharedCheck_5089_;
goto v_resetjp_5035_;
}
v_resetjp_5035_:
{
lean_object* v_fst_5038_; lean_object* v___x_5040_; uint8_t v_isShared_5041_; uint8_t v_isSharedCheck_5087_; 
v_fst_5038_ = lean_ctor_get(v_snd_5032_, 0);
v_isSharedCheck_5087_ = !lean_is_exclusive(v_snd_5032_);
if (v_isSharedCheck_5087_ == 0)
{
lean_object* v_unused_5088_; 
v_unused_5088_ = lean_ctor_get(v_snd_5032_, 1);
lean_dec(v_unused_5088_);
v___x_5040_ = v_snd_5032_;
v_isShared_5041_ = v_isSharedCheck_5087_;
goto v_resetjp_5039_;
}
else
{
lean_inc(v_fst_5038_);
lean_dec(v_snd_5032_);
v___x_5040_ = lean_box(0);
v_isShared_5041_ = v_isSharedCheck_5087_;
goto v_resetjp_5039_;
}
v_resetjp_5039_:
{
lean_object* v_fst_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5085_; 
v_fst_5042_ = lean_ctor_get(v_snd_5033_, 0);
v_isSharedCheck_5085_ = !lean_is_exclusive(v_snd_5033_);
if (v_isSharedCheck_5085_ == 0)
{
lean_object* v_unused_5086_; 
v_unused_5086_ = lean_ctor_get(v_snd_5033_, 1);
lean_dec(v_unused_5086_);
v___x_5044_ = v_snd_5033_;
v_isShared_5045_ = v_isSharedCheck_5085_;
goto v_resetjp_5043_;
}
else
{
lean_inc(v_fst_5042_);
lean_dec(v_snd_5033_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5085_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
uint8_t v___x_5046_; uint8_t v___x_5047_; uint8_t v___x_5048_; lean_object* v___x_5049_; 
v___x_5046_ = 0;
v___x_5047_ = 1;
v___x_5048_ = 1;
lean_inc(v_fst_5034_);
v___x_5049_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_5008_, v_fst_5034_, v___x_5046_, v___x_5047_, v___x_5046_, v___x_5047_, v___x_5048_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_);
lean_dec_ref(v_motiveArgs_5008_);
if (lean_obj_tag(v___x_5049_) == 0)
{
lean_object* v_a_5050_; lean_object* v___x_5051_; 
v_a_5050_ = lean_ctor_get(v___x_5049_, 0);
lean_inc(v_a_5050_);
lean_dec_ref(v___x_5049_);
v___x_5051_ = l_Lean_Meta_getLevel(v_fst_5034_, v___y_5010_, v___y_5011_, v___y_5012_, v___y_5013_);
if (lean_obj_tag(v___x_5051_) == 0)
{
lean_object* v_a_5052_; lean_object* v___x_5054_; uint8_t v_isShared_5055_; uint8_t v_isSharedCheck_5068_; 
v_a_5052_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5068_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5068_ == 0)
{
v___x_5054_ = v___x_5051_;
v_isShared_5055_ = v_isSharedCheck_5068_;
goto v_resetjp_5053_;
}
else
{
lean_inc(v_a_5052_);
lean_dec(v___x_5051_);
v___x_5054_ = lean_box(0);
v_isShared_5055_ = v_isSharedCheck_5068_;
goto v_resetjp_5053_;
}
v_resetjp_5053_:
{
lean_object* v___x_5057_; 
if (v_isShared_5045_ == 0)
{
lean_ctor_set(v___x_5044_, 1, v_fst_5042_);
lean_ctor_set(v___x_5044_, 0, v_fst_5038_);
v___x_5057_ = v___x_5044_;
goto v_reusejp_5056_;
}
else
{
lean_object* v_reuseFailAlloc_5067_; 
v_reuseFailAlloc_5067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5067_, 0, v_fst_5038_);
lean_ctor_set(v_reuseFailAlloc_5067_, 1, v_fst_5042_);
v___x_5057_ = v_reuseFailAlloc_5067_;
goto v_reusejp_5056_;
}
v_reusejp_5056_:
{
lean_object* v___x_5059_; 
if (v_isShared_5041_ == 0)
{
lean_ctor_set(v___x_5040_, 1, v___x_5057_);
lean_ctor_set(v___x_5040_, 0, v_a_5052_);
v___x_5059_ = v___x_5040_;
goto v_reusejp_5058_;
}
else
{
lean_object* v_reuseFailAlloc_5066_; 
v_reuseFailAlloc_5066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5066_, 0, v_a_5052_);
lean_ctor_set(v_reuseFailAlloc_5066_, 1, v___x_5057_);
v___x_5059_ = v_reuseFailAlloc_5066_;
goto v_reusejp_5058_;
}
v_reusejp_5058_:
{
lean_object* v___x_5061_; 
if (v_isShared_5037_ == 0)
{
lean_ctor_set(v___x_5036_, 1, v___x_5059_);
lean_ctor_set(v___x_5036_, 0, v_a_5050_);
v___x_5061_ = v___x_5036_;
goto v_reusejp_5060_;
}
else
{
lean_object* v_reuseFailAlloc_5065_; 
v_reuseFailAlloc_5065_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5065_, 0, v_a_5050_);
lean_ctor_set(v_reuseFailAlloc_5065_, 1, v___x_5059_);
v___x_5061_ = v_reuseFailAlloc_5065_;
goto v_reusejp_5060_;
}
v_reusejp_5060_:
{
lean_object* v___x_5063_; 
if (v_isShared_5055_ == 0)
{
lean_ctor_set(v___x_5054_, 0, v___x_5061_);
v___x_5063_ = v___x_5054_;
goto v_reusejp_5062_;
}
else
{
lean_object* v_reuseFailAlloc_5064_; 
v_reuseFailAlloc_5064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5064_, 0, v___x_5061_);
v___x_5063_ = v_reuseFailAlloc_5064_;
goto v_reusejp_5062_;
}
v_reusejp_5062_:
{
return v___x_5063_;
}
}
}
}
}
}
else
{
lean_object* v_a_5069_; lean_object* v___x_5071_; uint8_t v_isShared_5072_; uint8_t v_isSharedCheck_5076_; 
lean_dec(v_a_5050_);
lean_del_object(v___x_5044_);
lean_dec(v_fst_5042_);
lean_del_object(v___x_5040_);
lean_dec(v_fst_5038_);
lean_del_object(v___x_5036_);
v_a_5069_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5076_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5076_ == 0)
{
v___x_5071_ = v___x_5051_;
v_isShared_5072_ = v_isSharedCheck_5076_;
goto v_resetjp_5070_;
}
else
{
lean_inc(v_a_5069_);
lean_dec(v___x_5051_);
v___x_5071_ = lean_box(0);
v_isShared_5072_ = v_isSharedCheck_5076_;
goto v_resetjp_5070_;
}
v_resetjp_5070_:
{
lean_object* v___x_5074_; 
if (v_isShared_5072_ == 0)
{
v___x_5074_ = v___x_5071_;
goto v_reusejp_5073_;
}
else
{
lean_object* v_reuseFailAlloc_5075_; 
v_reuseFailAlloc_5075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5075_, 0, v_a_5069_);
v___x_5074_ = v_reuseFailAlloc_5075_;
goto v_reusejp_5073_;
}
v_reusejp_5073_:
{
return v___x_5074_;
}
}
}
}
else
{
lean_object* v_a_5077_; lean_object* v___x_5079_; uint8_t v_isShared_5080_; uint8_t v_isSharedCheck_5084_; 
lean_del_object(v___x_5044_);
lean_dec(v_fst_5042_);
lean_del_object(v___x_5040_);
lean_dec(v_fst_5038_);
lean_del_object(v___x_5036_);
lean_dec(v_fst_5034_);
v_a_5077_ = lean_ctor_get(v___x_5049_, 0);
v_isSharedCheck_5084_ = !lean_is_exclusive(v___x_5049_);
if (v_isSharedCheck_5084_ == 0)
{
v___x_5079_ = v___x_5049_;
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
else
{
lean_inc(v_a_5077_);
lean_dec(v___x_5049_);
v___x_5079_ = lean_box(0);
v_isShared_5080_ = v_isSharedCheck_5084_;
goto v_resetjp_5078_;
}
v_resetjp_5078_:
{
lean_object* v___x_5082_; 
if (v_isShared_5080_ == 0)
{
v___x_5082_ = v___x_5079_;
goto v_reusejp_5081_;
}
else
{
lean_object* v_reuseFailAlloc_5083_; 
v_reuseFailAlloc_5083_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5083_, 0, v_a_5077_);
v___x_5082_ = v_reuseFailAlloc_5083_;
goto v_reusejp_5081_;
}
v_reusejp_5081_:
{
return v___x_5082_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_5091_; lean_object* v___x_5093_; uint8_t v_isShared_5094_; uint8_t v_isSharedCheck_5098_; 
lean_dec_ref(v_motiveArgs_5008_);
v_a_5091_ = lean_ctor_get(v___x_5030_, 0);
v_isSharedCheck_5098_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5098_ == 0)
{
v___x_5093_ = v___x_5030_;
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
else
{
lean_inc(v_a_5091_);
lean_dec(v___x_5030_);
v___x_5093_ = lean_box(0);
v_isShared_5094_ = v_isSharedCheck_5098_;
goto v_resetjp_5092_;
}
v_resetjp_5092_:
{
lean_object* v___x_5096_; 
if (v_isShared_5094_ == 0)
{
v___x_5096_ = v___x_5093_;
goto v_reusejp_5095_;
}
else
{
lean_object* v_reuseFailAlloc_5097_; 
v_reuseFailAlloc_5097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5097_, 0, v_a_5091_);
v___x_5096_ = v_reuseFailAlloc_5097_;
goto v_reusejp_5095_;
}
v_reusejp_5095_:
{
return v___x_5096_;
}
}
}
}
else
{
lean_object* v_a_5099_; lean_object* v___x_5101_; uint8_t v_isShared_5102_; uint8_t v_isSharedCheck_5106_; 
lean_dec_ref(v_motiveArgs_5008_);
lean_dec_ref(v_a_5004_);
lean_dec_ref(v_toMatcherInfo_5003_);
v_a_5099_ = lean_ctor_get(v___x_5016_, 0);
v_isSharedCheck_5106_ = !lean_is_exclusive(v___x_5016_);
if (v_isSharedCheck_5106_ == 0)
{
v___x_5101_ = v___x_5016_;
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
else
{
lean_inc(v_a_5099_);
lean_dec(v___x_5016_);
v___x_5101_ = lean_box(0);
v_isShared_5102_ = v_isSharedCheck_5106_;
goto v_resetjp_5100_;
}
v_resetjp_5100_:
{
lean_object* v___x_5104_; 
if (v_isShared_5102_ == 0)
{
v___x_5104_ = v___x_5101_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v_a_5099_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
return v___x_5104_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed(lean_object* v_onMotive_5126_, lean_object* v_toMatcherInfo_5127_, lean_object* v_a_5128_, lean_object* v_addEqualities_5129_, lean_object* v___x_5130_, lean_object* v_discrs_5131_, lean_object* v_motiveArgs_5132_, lean_object* v_motiveBody_5133_, lean_object* v___y_5134_, lean_object* v___y_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_){
_start:
{
uint8_t v_addEqualities_boxed_5139_; size_t v___x_33157__boxed_5140_; lean_object* v_res_5141_; 
v_addEqualities_boxed_5139_ = lean_unbox(v_addEqualities_5129_);
v___x_33157__boxed_5140_ = lean_unbox_usize(v___x_5130_);
lean_dec(v___x_5130_);
v_res_5141_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3(v_onMotive_5126_, v_toMatcherInfo_5127_, v_a_5128_, v_addEqualities_boxed_5139_, v___x_33157__boxed_5140_, v_discrs_5131_, v_motiveArgs_5132_, v_motiveBody_5133_, v___y_5134_, v___y_5135_, v___y_5136_, v___y_5137_);
lean_dec(v___y_5137_);
lean_dec_ref(v___y_5136_);
lean_dec(v___y_5135_);
lean_dec_ref(v___y_5134_);
lean_dec_ref(v_discrs_5131_);
return v_res_5141_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0(void){
_start:
{
lean_object* v___x_5142_; 
v___x_5142_ = l_instMonadEIO(lean_box(0));
return v___x_5142_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1(void){
_start:
{
lean_object* v___f_5143_; 
v___f_5143_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_5143_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2(void){
_start:
{
lean_object* v___f_5144_; 
v___f_5144_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_5144_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3(void){
_start:
{
lean_object* v___f_5145_; 
v___f_5145_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_5145_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4(void){
_start:
{
lean_object* v___f_5146_; 
v___f_5146_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_5146_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(lean_object* v_msg_5147_, lean_object* v___y_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_){
_start:
{
lean_object* v___x_5153_; lean_object* v___x_5154_; lean_object* v_toApplicative_5155_; lean_object* v___x_5157_; uint8_t v_isShared_5158_; uint8_t v_isSharedCheck_5216_; 
v___x_5153_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0);
v___x_5154_ = l_StateRefT_x27_instMonad___redArg(v___x_5153_);
v_toApplicative_5155_ = lean_ctor_get(v___x_5154_, 0);
v_isSharedCheck_5216_ = !lean_is_exclusive(v___x_5154_);
if (v_isSharedCheck_5216_ == 0)
{
lean_object* v_unused_5217_; 
v_unused_5217_ = lean_ctor_get(v___x_5154_, 1);
lean_dec(v_unused_5217_);
v___x_5157_ = v___x_5154_;
v_isShared_5158_ = v_isSharedCheck_5216_;
goto v_resetjp_5156_;
}
else
{
lean_inc(v_toApplicative_5155_);
lean_dec(v___x_5154_);
v___x_5157_ = lean_box(0);
v_isShared_5158_ = v_isSharedCheck_5216_;
goto v_resetjp_5156_;
}
v_resetjp_5156_:
{
lean_object* v_toFunctor_5159_; lean_object* v_toSeq_5160_; lean_object* v_toSeqLeft_5161_; lean_object* v_toSeqRight_5162_; lean_object* v___x_5164_; uint8_t v_isShared_5165_; uint8_t v_isSharedCheck_5214_; 
v_toFunctor_5159_ = lean_ctor_get(v_toApplicative_5155_, 0);
v_toSeq_5160_ = lean_ctor_get(v_toApplicative_5155_, 2);
v_toSeqLeft_5161_ = lean_ctor_get(v_toApplicative_5155_, 3);
v_toSeqRight_5162_ = lean_ctor_get(v_toApplicative_5155_, 4);
v_isSharedCheck_5214_ = !lean_is_exclusive(v_toApplicative_5155_);
if (v_isSharedCheck_5214_ == 0)
{
lean_object* v_unused_5215_; 
v_unused_5215_ = lean_ctor_get(v_toApplicative_5155_, 1);
lean_dec(v_unused_5215_);
v___x_5164_ = v_toApplicative_5155_;
v_isShared_5165_ = v_isSharedCheck_5214_;
goto v_resetjp_5163_;
}
else
{
lean_inc(v_toSeqRight_5162_);
lean_inc(v_toSeqLeft_5161_);
lean_inc(v_toSeq_5160_);
lean_inc(v_toFunctor_5159_);
lean_dec(v_toApplicative_5155_);
v___x_5164_ = lean_box(0);
v_isShared_5165_ = v_isSharedCheck_5214_;
goto v_resetjp_5163_;
}
v_resetjp_5163_:
{
lean_object* v___f_5166_; lean_object* v___f_5167_; lean_object* v___f_5168_; lean_object* v___f_5169_; lean_object* v___x_5170_; lean_object* v___f_5171_; lean_object* v___f_5172_; lean_object* v___f_5173_; lean_object* v___x_5175_; 
v___f_5166_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1);
v___f_5167_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2);
lean_inc_ref(v_toFunctor_5159_);
v___f_5168_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5168_, 0, v_toFunctor_5159_);
v___f_5169_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5169_, 0, v_toFunctor_5159_);
v___x_5170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5170_, 0, v___f_5168_);
lean_ctor_set(v___x_5170_, 1, v___f_5169_);
v___f_5171_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5171_, 0, v_toSeqRight_5162_);
v___f_5172_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5172_, 0, v_toSeqLeft_5161_);
v___f_5173_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5173_, 0, v_toSeq_5160_);
if (v_isShared_5165_ == 0)
{
lean_ctor_set(v___x_5164_, 4, v___f_5171_);
lean_ctor_set(v___x_5164_, 3, v___f_5172_);
lean_ctor_set(v___x_5164_, 2, v___f_5173_);
lean_ctor_set(v___x_5164_, 1, v___f_5166_);
lean_ctor_set(v___x_5164_, 0, v___x_5170_);
v___x_5175_ = v___x_5164_;
goto v_reusejp_5174_;
}
else
{
lean_object* v_reuseFailAlloc_5213_; 
v_reuseFailAlloc_5213_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5213_, 0, v___x_5170_);
lean_ctor_set(v_reuseFailAlloc_5213_, 1, v___f_5166_);
lean_ctor_set(v_reuseFailAlloc_5213_, 2, v___f_5173_);
lean_ctor_set(v_reuseFailAlloc_5213_, 3, v___f_5172_);
lean_ctor_set(v_reuseFailAlloc_5213_, 4, v___f_5171_);
v___x_5175_ = v_reuseFailAlloc_5213_;
goto v_reusejp_5174_;
}
v_reusejp_5174_:
{
lean_object* v___x_5177_; 
if (v_isShared_5158_ == 0)
{
lean_ctor_set(v___x_5157_, 1, v___f_5167_);
lean_ctor_set(v___x_5157_, 0, v___x_5175_);
v___x_5177_ = v___x_5157_;
goto v_reusejp_5176_;
}
else
{
lean_object* v_reuseFailAlloc_5212_; 
v_reuseFailAlloc_5212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5212_, 0, v___x_5175_);
lean_ctor_set(v_reuseFailAlloc_5212_, 1, v___f_5167_);
v___x_5177_ = v_reuseFailAlloc_5212_;
goto v_reusejp_5176_;
}
v_reusejp_5176_:
{
lean_object* v___x_5178_; lean_object* v_toApplicative_5179_; lean_object* v___x_5181_; uint8_t v_isShared_5182_; uint8_t v_isSharedCheck_5210_; 
v___x_5178_ = l_StateRefT_x27_instMonad___redArg(v___x_5177_);
v_toApplicative_5179_ = lean_ctor_get(v___x_5178_, 0);
v_isSharedCheck_5210_ = !lean_is_exclusive(v___x_5178_);
if (v_isSharedCheck_5210_ == 0)
{
lean_object* v_unused_5211_; 
v_unused_5211_ = lean_ctor_get(v___x_5178_, 1);
lean_dec(v_unused_5211_);
v___x_5181_ = v___x_5178_;
v_isShared_5182_ = v_isSharedCheck_5210_;
goto v_resetjp_5180_;
}
else
{
lean_inc(v_toApplicative_5179_);
lean_dec(v___x_5178_);
v___x_5181_ = lean_box(0);
v_isShared_5182_ = v_isSharedCheck_5210_;
goto v_resetjp_5180_;
}
v_resetjp_5180_:
{
lean_object* v_toFunctor_5183_; lean_object* v_toSeq_5184_; lean_object* v_toSeqLeft_5185_; lean_object* v_toSeqRight_5186_; lean_object* v___x_5188_; uint8_t v_isShared_5189_; uint8_t v_isSharedCheck_5208_; 
v_toFunctor_5183_ = lean_ctor_get(v_toApplicative_5179_, 0);
v_toSeq_5184_ = lean_ctor_get(v_toApplicative_5179_, 2);
v_toSeqLeft_5185_ = lean_ctor_get(v_toApplicative_5179_, 3);
v_toSeqRight_5186_ = lean_ctor_get(v_toApplicative_5179_, 4);
v_isSharedCheck_5208_ = !lean_is_exclusive(v_toApplicative_5179_);
if (v_isSharedCheck_5208_ == 0)
{
lean_object* v_unused_5209_; 
v_unused_5209_ = lean_ctor_get(v_toApplicative_5179_, 1);
lean_dec(v_unused_5209_);
v___x_5188_ = v_toApplicative_5179_;
v_isShared_5189_ = v_isSharedCheck_5208_;
goto v_resetjp_5187_;
}
else
{
lean_inc(v_toSeqRight_5186_);
lean_inc(v_toSeqLeft_5185_);
lean_inc(v_toSeq_5184_);
lean_inc(v_toFunctor_5183_);
lean_dec(v_toApplicative_5179_);
v___x_5188_ = lean_box(0);
v_isShared_5189_ = v_isSharedCheck_5208_;
goto v_resetjp_5187_;
}
v_resetjp_5187_:
{
lean_object* v___f_5190_; lean_object* v___f_5191_; lean_object* v___f_5192_; lean_object* v___f_5193_; lean_object* v___x_5194_; lean_object* v___f_5195_; lean_object* v___f_5196_; lean_object* v___f_5197_; lean_object* v___x_5199_; 
v___f_5190_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3);
v___f_5191_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4);
lean_inc_ref(v_toFunctor_5183_);
v___f_5192_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5192_, 0, v_toFunctor_5183_);
v___f_5193_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5193_, 0, v_toFunctor_5183_);
v___x_5194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5194_, 0, v___f_5192_);
lean_ctor_set(v___x_5194_, 1, v___f_5193_);
v___f_5195_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5195_, 0, v_toSeqRight_5186_);
v___f_5196_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5196_, 0, v_toSeqLeft_5185_);
v___f_5197_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5197_, 0, v_toSeq_5184_);
if (v_isShared_5189_ == 0)
{
lean_ctor_set(v___x_5188_, 4, v___f_5195_);
lean_ctor_set(v___x_5188_, 3, v___f_5196_);
lean_ctor_set(v___x_5188_, 2, v___f_5197_);
lean_ctor_set(v___x_5188_, 1, v___f_5190_);
lean_ctor_set(v___x_5188_, 0, v___x_5194_);
v___x_5199_ = v___x_5188_;
goto v_reusejp_5198_;
}
else
{
lean_object* v_reuseFailAlloc_5207_; 
v_reuseFailAlloc_5207_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5207_, 0, v___x_5194_);
lean_ctor_set(v_reuseFailAlloc_5207_, 1, v___f_5190_);
lean_ctor_set(v_reuseFailAlloc_5207_, 2, v___f_5197_);
lean_ctor_set(v_reuseFailAlloc_5207_, 3, v___f_5196_);
lean_ctor_set(v_reuseFailAlloc_5207_, 4, v___f_5195_);
v___x_5199_ = v_reuseFailAlloc_5207_;
goto v_reusejp_5198_;
}
v_reusejp_5198_:
{
lean_object* v___x_5201_; 
if (v_isShared_5182_ == 0)
{
lean_ctor_set(v___x_5181_, 1, v___f_5191_);
lean_ctor_set(v___x_5181_, 0, v___x_5199_);
v___x_5201_ = v___x_5181_;
goto v_reusejp_5200_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v___x_5199_);
lean_ctor_set(v_reuseFailAlloc_5206_, 1, v___f_5191_);
v___x_5201_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5200_;
}
v_reusejp_5200_:
{
lean_object* v___x_5202_; lean_object* v___x_5203_; lean_object* v___x_27494__overap_5204_; lean_object* v___x_5205_; 
v___x_5202_ = l_Lean_instInhabitedExpr;
v___x_5203_ = l_instInhabitedOfMonad___redArg(v___x_5201_, v___x_5202_);
v___x_27494__overap_5204_ = lean_panic_fn_borrowed(v___x_5203_, v_msg_5147_);
lean_dec(v___x_5203_);
lean_inc(v___y_5151_);
lean_inc_ref(v___y_5150_);
lean_inc(v___y_5149_);
lean_inc_ref(v___y_5148_);
v___x_5205_ = lean_apply_5(v___x_27494__overap_5204_, v___y_5148_, v___y_5149_, v___y_5150_, v___y_5151_, lean_box(0));
return v___x_5205_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___boxed(lean_object* v_msg_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_){
_start:
{
lean_object* v_res_5224_; 
v_res_5224_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(v_msg_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_);
lean_dec(v___y_5222_);
lean_dec_ref(v___y_5221_);
lean_dec(v___y_5220_);
lean_dec_ref(v___y_5219_);
return v_res_5224_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(lean_object* v_args_5225_, lean_object* v_ys_5226_, lean_object* v_ys2_5227_, lean_object* v_ys3_5228_, lean_object* v_onAlt_5229_, lean_object* v_a_5230_, uint8_t v___x_5231_, uint8_t v_useSplitter_5232_, lean_object* v___x_5233_, lean_object* v_ys4_5234_, lean_object* v_altType_5235_, lean_object* v___y_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_){
_start:
{
lean_object* v___y_5242_; lean_object* v___x_5252_; lean_object* v___x_5253_; 
lean_inc_ref(v_args_5225_);
v___x_5252_ = l_Array_append___redArg(v_args_5225_, v_ys3_5228_);
v___x_5253_ = l_Lean_Meta_instantiateLambda(v___x_5233_, v___x_5252_, v___y_5236_, v___y_5237_, v___y_5238_, v___y_5239_);
lean_dec_ref(v___x_5252_);
if (lean_obj_tag(v___x_5253_) == 0)
{
v___y_5242_ = v___x_5253_;
goto v___jp_5241_;
}
else
{
lean_object* v_a_5254_; uint8_t v___y_5256_; uint8_t v___x_5259_; 
v_a_5254_ = lean_ctor_get(v___x_5253_, 0);
lean_inc(v_a_5254_);
v___x_5259_ = l_Lean_Exception_isInterrupt(v_a_5254_);
if (v___x_5259_ == 0)
{
uint8_t v___x_5260_; 
v___x_5260_ = l_Lean_Exception_isRuntime(v_a_5254_);
v___y_5256_ = v___x_5260_;
goto v___jp_5255_;
}
else
{
lean_dec(v_a_5254_);
v___y_5256_ = v___x_5259_;
goto v___jp_5255_;
}
v___jp_5255_:
{
if (v___y_5256_ == 0)
{
lean_object* v___x_5257_; lean_object* v___x_5258_; 
lean_dec_ref(v___x_5253_);
v___x_5257_ = lean_obj_once(&l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2, &l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts___lam__1___closed__2);
v___x_5258_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_5257_, v___y_5236_, v___y_5237_, v___y_5238_, v___y_5239_);
v___y_5242_ = v___x_5258_;
goto v___jp_5241_;
}
else
{
v___y_5242_ = v___x_5253_;
goto v___jp_5241_;
}
}
}
v___jp_5241_:
{
if (lean_obj_tag(v___y_5242_) == 0)
{
lean_object* v_a_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; 
v_a_5243_ = lean_ctor_get(v___y_5242_, 0);
lean_inc(v_a_5243_);
lean_dec_ref(v___y_5242_);
lean_inc_ref(v_ys4_5234_);
lean_inc_ref(v_ys3_5228_);
lean_inc_ref(v_ys2_5227_);
lean_inc_ref(v_ys_5226_);
v___x_5244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5244_, 0, v_args_5225_);
lean_ctor_set(v___x_5244_, 1, v_ys_5226_);
lean_ctor_set(v___x_5244_, 2, v_ys2_5227_);
lean_ctor_set(v___x_5244_, 3, v_ys3_5228_);
lean_ctor_set(v___x_5244_, 4, v_ys4_5234_);
lean_inc(v___y_5239_);
lean_inc_ref(v___y_5238_);
lean_inc(v___y_5237_);
lean_inc_ref(v___y_5236_);
v___x_5245_ = lean_apply_9(v_onAlt_5229_, v_a_5230_, v_altType_5235_, v___x_5244_, v_a_5243_, v___y_5236_, v___y_5237_, v___y_5238_, v___y_5239_, lean_box(0));
if (lean_obj_tag(v___x_5245_) == 0)
{
lean_object* v_a_5246_; lean_object* v___x_5247_; lean_object* v___x_5248_; lean_object* v___x_5249_; uint8_t v___x_5250_; lean_object* v___x_5251_; 
v_a_5246_ = lean_ctor_get(v___x_5245_, 0);
lean_inc(v_a_5246_);
lean_dec_ref(v___x_5245_);
v___x_5247_ = l_Array_append___redArg(v_ys_5226_, v_ys2_5227_);
lean_dec_ref(v_ys2_5227_);
v___x_5248_ = l_Array_append___redArg(v___x_5247_, v_ys3_5228_);
lean_dec_ref(v_ys3_5228_);
v___x_5249_ = l_Array_append___redArg(v___x_5248_, v_ys4_5234_);
lean_dec_ref(v_ys4_5234_);
v___x_5250_ = 1;
v___x_5251_ = l_Lean_Meta_mkLambdaFVars(v___x_5249_, v_a_5246_, v___x_5231_, v_useSplitter_5232_, v___x_5231_, v_useSplitter_5232_, v___x_5250_, v___y_5236_, v___y_5237_, v___y_5238_, v___y_5239_);
lean_dec_ref(v___x_5249_);
return v___x_5251_;
}
else
{
lean_dec_ref(v_ys4_5234_);
lean_dec_ref(v_ys3_5228_);
lean_dec_ref(v_ys2_5227_);
lean_dec_ref(v_ys_5226_);
return v___x_5245_;
}
}
else
{
lean_dec_ref(v_altType_5235_);
lean_dec_ref(v_ys4_5234_);
lean_dec(v_a_5230_);
lean_dec_ref(v_onAlt_5229_);
lean_dec_ref(v_ys3_5228_);
lean_dec_ref(v_ys2_5227_);
lean_dec_ref(v_ys_5226_);
lean_dec_ref(v_args_5225_);
return v___y_5242_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed(lean_object* v_args_5261_, lean_object* v_ys_5262_, lean_object* v_ys2_5263_, lean_object* v_ys3_5264_, lean_object* v_onAlt_5265_, lean_object* v_a_5266_, lean_object* v___x_5267_, lean_object* v_useSplitter_5268_, lean_object* v___x_5269_, lean_object* v_ys4_5270_, lean_object* v_altType_5271_, lean_object* v___y_5272_, lean_object* v___y_5273_, lean_object* v___y_5274_, lean_object* v___y_5275_, lean_object* v___y_5276_){
_start:
{
uint8_t v___x_33527__boxed_5277_; uint8_t v_useSplitter_boxed_5278_; lean_object* v_res_5279_; 
v___x_33527__boxed_5277_ = lean_unbox(v___x_5267_);
v_useSplitter_boxed_5278_ = lean_unbox(v_useSplitter_5268_);
v_res_5279_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5(v_args_5261_, v_ys_5262_, v_ys2_5263_, v_ys3_5264_, v_onAlt_5265_, v_a_5266_, v___x_33527__boxed_5277_, v_useSplitter_boxed_5278_, v___x_5269_, v_ys4_5270_, v_altType_5271_, v___y_5272_, v___y_5273_, v___y_5274_, v___y_5275_);
lean_dec(v___y_5275_);
lean_dec_ref(v___y_5274_);
lean_dec(v___y_5273_);
lean_dec_ref(v___y_5272_);
return v_res_5279_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(lean_object* v_args_5280_, lean_object* v_ys_5281_, lean_object* v_ys2_5282_, lean_object* v_onAlt_5283_, lean_object* v_a_5284_, uint8_t v___x_5285_, uint8_t v_useSplitter_5286_, lean_object* v___x_5287_, lean_object* v_extraEqualities_5288_, lean_object* v_ys3_5289_, lean_object* v_altType_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_){
_start:
{
lean_object* v___x_5296_; lean_object* v___x_5297_; lean_object* v___f_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; 
v___x_5296_ = lean_box(v___x_5285_);
v___x_5297_ = lean_box(v_useSplitter_5286_);
v___f_5298_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__5___boxed), 16, 9);
lean_closure_set(v___f_5298_, 0, v_args_5280_);
lean_closure_set(v___f_5298_, 1, v_ys_5281_);
lean_closure_set(v___f_5298_, 2, v_ys2_5282_);
lean_closure_set(v___f_5298_, 3, v_ys3_5289_);
lean_closure_set(v___f_5298_, 4, v_onAlt_5283_);
lean_closure_set(v___f_5298_, 5, v_a_5284_);
lean_closure_set(v___f_5298_, 6, v___x_5296_);
lean_closure_set(v___f_5298_, 7, v___x_5297_);
lean_closure_set(v___f_5298_, 8, v___x_5287_);
v___x_5299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5299_, 0, v_extraEqualities_5288_);
v___x_5300_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5290_, v___x_5299_, v___f_5298_, v___x_5285_, v___x_5285_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_);
return v___x_5300_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed(lean_object* v_args_5301_, lean_object* v_ys_5302_, lean_object* v_ys2_5303_, lean_object* v_onAlt_5304_, lean_object* v_a_5305_, lean_object* v___x_5306_, lean_object* v_useSplitter_5307_, lean_object* v___x_5308_, lean_object* v_extraEqualities_5309_, lean_object* v_ys3_5310_, lean_object* v_altType_5311_, lean_object* v___y_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_, lean_object* v___y_5315_, lean_object* v___y_5316_){
_start:
{
uint8_t v___x_33592__boxed_5317_; uint8_t v_useSplitter_boxed_5318_; lean_object* v_res_5319_; 
v___x_33592__boxed_5317_ = lean_unbox(v___x_5306_);
v_useSplitter_boxed_5318_ = lean_unbox(v_useSplitter_5307_);
v_res_5319_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1(v_args_5301_, v_ys_5302_, v_ys2_5303_, v_onAlt_5304_, v_a_5305_, v___x_33592__boxed_5317_, v_useSplitter_boxed_5318_, v___x_5308_, v_extraEqualities_5309_, v_ys3_5310_, v_altType_5311_, v___y_5312_, v___y_5313_, v___y_5314_, v___y_5315_);
lean_dec(v___y_5315_);
lean_dec_ref(v___y_5314_);
lean_dec(v___y_5313_);
lean_dec_ref(v___y_5312_);
return v_res_5319_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(lean_object* v_args_5320_, lean_object* v_ys_5321_, lean_object* v_onAlt_5322_, lean_object* v_a_5323_, uint8_t v___x_5324_, uint8_t v_useSplitter_5325_, lean_object* v___x_5326_, lean_object* v_extraEqualities_5327_, lean_object* v_numDiscrEqs_5328_, lean_object* v_ys2_5329_, lean_object* v_altType_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_){
_start:
{
lean_object* v___x_5336_; lean_object* v___x_5337_; lean_object* v___f_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; 
v___x_5336_ = lean_box(v___x_5324_);
v___x_5337_ = lean_box(v_useSplitter_5325_);
v___f_5338_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_5338_, 0, v_args_5320_);
lean_closure_set(v___f_5338_, 1, v_ys_5321_);
lean_closure_set(v___f_5338_, 2, v_ys2_5329_);
lean_closure_set(v___f_5338_, 3, v_onAlt_5322_);
lean_closure_set(v___f_5338_, 4, v_a_5323_);
lean_closure_set(v___f_5338_, 5, v___x_5336_);
lean_closure_set(v___f_5338_, 6, v___x_5337_);
lean_closure_set(v___f_5338_, 7, v___x_5326_);
lean_closure_set(v___f_5338_, 8, v_extraEqualities_5327_);
v___x_5339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5339_, 0, v_numDiscrEqs_5328_);
v___x_5340_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5330_, v___x_5339_, v___f_5338_, v___x_5324_, v___x_5324_, v___y_5331_, v___y_5332_, v___y_5333_, v___y_5334_);
return v___x_5340_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed(lean_object* v_args_5341_, lean_object* v_ys_5342_, lean_object* v_onAlt_5343_, lean_object* v_a_5344_, lean_object* v___x_5345_, lean_object* v_useSplitter_5346_, lean_object* v___x_5347_, lean_object* v_extraEqualities_5348_, lean_object* v_numDiscrEqs_5349_, lean_object* v_ys2_5350_, lean_object* v_altType_5351_, lean_object* v___y_5352_, lean_object* v___y_5353_, lean_object* v___y_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_){
_start:
{
uint8_t v___x_33623__boxed_5357_; uint8_t v_useSplitter_boxed_5358_; lean_object* v_res_5359_; 
v___x_33623__boxed_5357_ = lean_unbox(v___x_5345_);
v_useSplitter_boxed_5358_ = lean_unbox(v_useSplitter_5346_);
v_res_5359_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2(v_args_5341_, v_ys_5342_, v_onAlt_5343_, v_a_5344_, v___x_33623__boxed_5357_, v_useSplitter_boxed_5358_, v___x_5347_, v_extraEqualities_5348_, v_numDiscrEqs_5349_, v_ys2_5350_, v_altType_5351_, v___y_5352_, v___y_5353_, v___y_5354_, v___y_5355_);
lean_dec(v___y_5355_);
lean_dec_ref(v___y_5354_);
lean_dec(v___y_5353_);
lean_dec_ref(v___y_5352_);
return v_res_5359_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(lean_object* v___x_5360_, lean_object* v___x_5361_, lean_object* v_onAlt_5362_, lean_object* v_a_5363_, uint8_t v___x_5364_, uint8_t v_useSplitter_5365_, lean_object* v___x_5366_, lean_object* v_extraEqualities_5367_, lean_object* v_numDiscrEqs_5368_, uint8_t v_hasUnitThunk_5369_, lean_object* v___x_5370_, lean_object* v_ys_5371_, lean_object* v_args_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_){
_start:
{
lean_object* v_numFields_5378_; lean_object* v_numOverlaps_5379_; uint8_t v_hasUnitThunk_5380_; lean_object* v___x_5381_; uint8_t v___x_5382_; 
v_numFields_5378_ = lean_ctor_get(v___x_5360_, 0);
v_numOverlaps_5379_ = lean_ctor_get(v___x_5360_, 1);
v_hasUnitThunk_5380_ = lean_ctor_get_uint8(v___x_5360_, sizeof(void*)*2);
v___x_5381_ = lean_array_get_size(v_ys_5371_);
v___x_5382_ = lean_nat_dec_eq(v___x_5381_, v_numFields_5378_);
if (v___x_5382_ == 0)
{
lean_object* v___x_5383_; lean_object* v___x_5384_; 
lean_dec_ref(v_args_5372_);
lean_dec_ref(v_ys_5371_);
lean_dec(v_numDiscrEqs_5368_);
lean_dec(v_extraEqualities_5367_);
lean_dec_ref(v___x_5366_);
lean_dec(v_a_5363_);
lean_dec_ref(v_onAlt_5362_);
lean_dec_ref(v___x_5361_);
v___x_5383_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__43___closed__3);
v___x_5384_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12(v___x_5383_, v___y_5373_, v___y_5374_, v___y_5375_, v___y_5376_);
return v___x_5384_;
}
else
{
lean_object* v___x_5385_; 
v___x_5385_ = l_Lean_Meta_instantiateForall(v___x_5361_, v_ys_5371_, v___y_5373_, v___y_5374_, v___y_5375_, v___y_5376_);
if (lean_obj_tag(v___x_5385_) == 0)
{
lean_object* v_a_5386_; lean_object* v___x_5388_; uint8_t v_isShared_5389_; uint8_t v_isSharedCheck_5415_; 
v_a_5386_ = lean_ctor_get(v___x_5385_, 0);
v_isSharedCheck_5415_ = !lean_is_exclusive(v___x_5385_);
if (v_isSharedCheck_5415_ == 0)
{
v___x_5388_ = v___x_5385_;
v_isShared_5389_ = v_isSharedCheck_5415_;
goto v_resetjp_5387_;
}
else
{
lean_inc(v_a_5386_);
lean_dec(v___x_5385_);
v___x_5388_ = lean_box(0);
v_isShared_5389_ = v_isSharedCheck_5415_;
goto v_resetjp_5387_;
}
v_resetjp_5387_:
{
lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___f_5392_; lean_object* v_altType_5394_; lean_object* v___y_5395_; lean_object* v___y_5396_; lean_object* v___y_5397_; lean_object* v___y_5398_; 
v___x_5390_ = lean_box(v___x_5364_);
v___x_5391_ = lean_box(v_useSplitter_5365_);
v___f_5392_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__2___boxed), 16, 9);
lean_closure_set(v___f_5392_, 0, v_args_5372_);
lean_closure_set(v___f_5392_, 1, v_ys_5371_);
lean_closure_set(v___f_5392_, 2, v_onAlt_5362_);
lean_closure_set(v___f_5392_, 3, v_a_5363_);
lean_closure_set(v___f_5392_, 4, v___x_5390_);
lean_closure_set(v___f_5392_, 5, v___x_5391_);
lean_closure_set(v___f_5392_, 6, v___x_5366_);
lean_closure_set(v___f_5392_, 7, v_extraEqualities_5367_);
lean_closure_set(v___f_5392_, 8, v_numDiscrEqs_5368_);
if (v_hasUnitThunk_5369_ == 0)
{
v_altType_5394_ = v_a_5386_;
v___y_5395_ = v___y_5373_;
v___y_5396_ = v___y_5374_;
v___y_5397_ = v___y_5375_;
v___y_5398_ = v___y_5376_;
goto v___jp_5393_;
}
else
{
lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; 
v___x_5410_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__44___closed__2);
v___x_5411_ = lean_mk_empty_array_with_capacity(v___x_5370_);
v___x_5412_ = lean_array_push(v___x_5411_, v___x_5410_);
v___x_5413_ = l_Lean_Meta_instantiateForall(v_a_5386_, v___x_5412_, v___y_5373_, v___y_5374_, v___y_5375_, v___y_5376_);
lean_dec_ref(v___x_5412_);
if (lean_obj_tag(v___x_5413_) == 0)
{
lean_object* v_a_5414_; 
v_a_5414_ = lean_ctor_get(v___x_5413_, 0);
lean_inc(v_a_5414_);
lean_dec_ref(v___x_5413_);
v_altType_5394_ = v_a_5414_;
v___y_5395_ = v___y_5373_;
v___y_5396_ = v___y_5374_;
v___y_5397_ = v___y_5375_;
v___y_5398_ = v___y_5376_;
goto v___jp_5393_;
}
else
{
lean_dec_ref(v___f_5392_);
lean_del_object(v___x_5388_);
return v___x_5413_;
}
}
v___jp_5393_:
{
lean_object* v___x_5400_; 
lean_inc(v_numOverlaps_5379_);
if (v_isShared_5389_ == 0)
{
lean_ctor_set_tag(v___x_5388_, 1);
lean_ctor_set(v___x_5388_, 0, v_numOverlaps_5379_);
v___x_5400_ = v___x_5388_;
goto v_reusejp_5399_;
}
else
{
lean_object* v_reuseFailAlloc_5409_; 
v_reuseFailAlloc_5409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5409_, 0, v_numOverlaps_5379_);
v___x_5400_ = v_reuseFailAlloc_5409_;
goto v_reusejp_5399_;
}
v_reusejp_5399_:
{
lean_object* v___x_5401_; 
v___x_5401_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_5394_, v___x_5400_, v___f_5392_, v___x_5364_, v___x_5364_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_);
if (lean_obj_tag(v___x_5401_) == 0)
{
if (v_hasUnitThunk_5380_ == 0)
{
return v___x_5401_;
}
else
{
lean_object* v_a_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; 
v_a_5402_ = lean_ctor_get(v___x_5401_, 0);
lean_inc(v_a_5402_);
lean_dec_ref(v___x_5401_);
v___x_5403_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__2);
v___x_5404_ = lean_unsigned_to_nat(2u);
v___x_5405_ = lean_mk_empty_array_with_capacity(v___x_5404_);
lean_dec_ref(v___x_5405_);
v___x_5406_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6, &l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__35___closed__6);
v___x_5407_ = lean_array_push(v___x_5406_, v_a_5402_);
v___x_5408_ = l_Lean_Meta_mkAppM(v___x_5403_, v___x_5407_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_);
return v___x_5408_;
}
}
else
{
return v___x_5401_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_5372_);
lean_dec_ref(v_ys_5371_);
lean_dec(v_numDiscrEqs_5368_);
lean_dec(v_extraEqualities_5367_);
lean_dec_ref(v___x_5366_);
lean_dec(v_a_5363_);
lean_dec_ref(v_onAlt_5362_);
return v___x_5385_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_5416_ = _args[0];
lean_object* v___x_5417_ = _args[1];
lean_object* v_onAlt_5418_ = _args[2];
lean_object* v_a_5419_ = _args[3];
lean_object* v___x_5420_ = _args[4];
lean_object* v_useSplitter_5421_ = _args[5];
lean_object* v___x_5422_ = _args[6];
lean_object* v_extraEqualities_5423_ = _args[7];
lean_object* v_numDiscrEqs_5424_ = _args[8];
lean_object* v_hasUnitThunk_5425_ = _args[9];
lean_object* v___x_5426_ = _args[10];
lean_object* v_ys_5427_ = _args[11];
lean_object* v_args_5428_ = _args[12];
lean_object* v___y_5429_ = _args[13];
lean_object* v___y_5430_ = _args[14];
lean_object* v___y_5431_ = _args[15];
lean_object* v___y_5432_ = _args[16];
lean_object* v___y_5433_ = _args[17];
_start:
{
uint8_t v___x_33688__boxed_5434_; uint8_t v_useSplitter_boxed_5435_; uint8_t v_hasUnitThunk_boxed_5436_; lean_object* v_res_5437_; 
v___x_33688__boxed_5434_ = lean_unbox(v___x_5420_);
v_useSplitter_boxed_5435_ = lean_unbox(v_useSplitter_5421_);
v_hasUnitThunk_boxed_5436_ = lean_unbox(v_hasUnitThunk_5425_);
v_res_5437_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3(v___x_5416_, v___x_5417_, v_onAlt_5418_, v_a_5419_, v___x_33688__boxed_5434_, v_useSplitter_boxed_5435_, v___x_5422_, v_extraEqualities_5423_, v_numDiscrEqs_5424_, v_hasUnitThunk_boxed_5436_, v___x_5426_, v_ys_5427_, v_args_5428_, v___y_5429_, v___y_5430_, v___y_5431_, v___y_5432_);
lean_dec(v___y_5432_);
lean_dec_ref(v___y_5431_);
lean_dec(v___y_5430_);
lean_dec_ref(v___y_5429_);
lean_dec(v___x_5426_);
lean_dec_ref(v___x_5416_);
return v_res_5437_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(lean_object* v_msg_5438_, lean_object* v___y_5439_, lean_object* v___y_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_){
_start:
{
lean_object* v___x_5444_; lean_object* v___x_5445_; lean_object* v_toApplicative_5446_; lean_object* v___x_5448_; uint8_t v_isShared_5449_; uint8_t v_isSharedCheck_5507_; 
v___x_5444_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__0);
v___x_5445_ = l_StateRefT_x27_instMonad___redArg(v___x_5444_);
v_toApplicative_5446_ = lean_ctor_get(v___x_5445_, 0);
v_isSharedCheck_5507_ = !lean_is_exclusive(v___x_5445_);
if (v_isSharedCheck_5507_ == 0)
{
lean_object* v_unused_5508_; 
v_unused_5508_ = lean_ctor_get(v___x_5445_, 1);
lean_dec(v_unused_5508_);
v___x_5448_ = v___x_5445_;
v_isShared_5449_ = v_isSharedCheck_5507_;
goto v_resetjp_5447_;
}
else
{
lean_inc(v_toApplicative_5446_);
lean_dec(v___x_5445_);
v___x_5448_ = lean_box(0);
v_isShared_5449_ = v_isSharedCheck_5507_;
goto v_resetjp_5447_;
}
v_resetjp_5447_:
{
lean_object* v_toFunctor_5450_; lean_object* v_toSeq_5451_; lean_object* v_toSeqLeft_5452_; lean_object* v_toSeqRight_5453_; lean_object* v___x_5455_; uint8_t v_isShared_5456_; uint8_t v_isSharedCheck_5505_; 
v_toFunctor_5450_ = lean_ctor_get(v_toApplicative_5446_, 0);
v_toSeq_5451_ = lean_ctor_get(v_toApplicative_5446_, 2);
v_toSeqLeft_5452_ = lean_ctor_get(v_toApplicative_5446_, 3);
v_toSeqRight_5453_ = lean_ctor_get(v_toApplicative_5446_, 4);
v_isSharedCheck_5505_ = !lean_is_exclusive(v_toApplicative_5446_);
if (v_isSharedCheck_5505_ == 0)
{
lean_object* v_unused_5506_; 
v_unused_5506_ = lean_ctor_get(v_toApplicative_5446_, 1);
lean_dec(v_unused_5506_);
v___x_5455_ = v_toApplicative_5446_;
v_isShared_5456_ = v_isSharedCheck_5505_;
goto v_resetjp_5454_;
}
else
{
lean_inc(v_toSeqRight_5453_);
lean_inc(v_toSeqLeft_5452_);
lean_inc(v_toSeq_5451_);
lean_inc(v_toFunctor_5450_);
lean_dec(v_toApplicative_5446_);
v___x_5455_ = lean_box(0);
v_isShared_5456_ = v_isSharedCheck_5505_;
goto v_resetjp_5454_;
}
v_resetjp_5454_:
{
lean_object* v___f_5457_; lean_object* v___f_5458_; lean_object* v___f_5459_; lean_object* v___f_5460_; lean_object* v___x_5461_; lean_object* v___f_5462_; lean_object* v___f_5463_; lean_object* v___f_5464_; lean_object* v___x_5466_; 
v___f_5457_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__1);
v___f_5458_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__2);
lean_inc_ref(v_toFunctor_5450_);
v___f_5459_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5459_, 0, v_toFunctor_5450_);
v___f_5460_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5460_, 0, v_toFunctor_5450_);
v___x_5461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5461_, 0, v___f_5459_);
lean_ctor_set(v___x_5461_, 1, v___f_5460_);
v___f_5462_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5462_, 0, v_toSeqRight_5453_);
v___f_5463_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5463_, 0, v_toSeqLeft_5452_);
v___f_5464_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5464_, 0, v_toSeq_5451_);
if (v_isShared_5456_ == 0)
{
lean_ctor_set(v___x_5455_, 4, v___f_5462_);
lean_ctor_set(v___x_5455_, 3, v___f_5463_);
lean_ctor_set(v___x_5455_, 2, v___f_5464_);
lean_ctor_set(v___x_5455_, 1, v___f_5457_);
lean_ctor_set(v___x_5455_, 0, v___x_5461_);
v___x_5466_ = v___x_5455_;
goto v_reusejp_5465_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v___x_5461_);
lean_ctor_set(v_reuseFailAlloc_5504_, 1, v___f_5457_);
lean_ctor_set(v_reuseFailAlloc_5504_, 2, v___f_5464_);
lean_ctor_set(v_reuseFailAlloc_5504_, 3, v___f_5463_);
lean_ctor_set(v_reuseFailAlloc_5504_, 4, v___f_5462_);
v___x_5466_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5465_;
}
v_reusejp_5465_:
{
lean_object* v___x_5468_; 
if (v_isShared_5449_ == 0)
{
lean_ctor_set(v___x_5448_, 1, v___f_5458_);
lean_ctor_set(v___x_5448_, 0, v___x_5466_);
v___x_5468_ = v___x_5448_;
goto v_reusejp_5467_;
}
else
{
lean_object* v_reuseFailAlloc_5503_; 
v_reuseFailAlloc_5503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5503_, 0, v___x_5466_);
lean_ctor_set(v_reuseFailAlloc_5503_, 1, v___f_5458_);
v___x_5468_ = v_reuseFailAlloc_5503_;
goto v_reusejp_5467_;
}
v_reusejp_5467_:
{
lean_object* v___x_5469_; lean_object* v_toApplicative_5470_; lean_object* v___x_5472_; uint8_t v_isShared_5473_; uint8_t v_isSharedCheck_5501_; 
v___x_5469_ = l_StateRefT_x27_instMonad___redArg(v___x_5468_);
v_toApplicative_5470_ = lean_ctor_get(v___x_5469_, 0);
v_isSharedCheck_5501_ = !lean_is_exclusive(v___x_5469_);
if (v_isSharedCheck_5501_ == 0)
{
lean_object* v_unused_5502_; 
v_unused_5502_ = lean_ctor_get(v___x_5469_, 1);
lean_dec(v_unused_5502_);
v___x_5472_ = v___x_5469_;
v_isShared_5473_ = v_isSharedCheck_5501_;
goto v_resetjp_5471_;
}
else
{
lean_inc(v_toApplicative_5470_);
lean_dec(v___x_5469_);
v___x_5472_ = lean_box(0);
v_isShared_5473_ = v_isSharedCheck_5501_;
goto v_resetjp_5471_;
}
v_resetjp_5471_:
{
lean_object* v_toFunctor_5474_; lean_object* v_toSeq_5475_; lean_object* v_toSeqLeft_5476_; lean_object* v_toSeqRight_5477_; lean_object* v___x_5479_; uint8_t v_isShared_5480_; uint8_t v_isSharedCheck_5499_; 
v_toFunctor_5474_ = lean_ctor_get(v_toApplicative_5470_, 0);
v_toSeq_5475_ = lean_ctor_get(v_toApplicative_5470_, 2);
v_toSeqLeft_5476_ = lean_ctor_get(v_toApplicative_5470_, 3);
v_toSeqRight_5477_ = lean_ctor_get(v_toApplicative_5470_, 4);
v_isSharedCheck_5499_ = !lean_is_exclusive(v_toApplicative_5470_);
if (v_isSharedCheck_5499_ == 0)
{
lean_object* v_unused_5500_; 
v_unused_5500_ = lean_ctor_get(v_toApplicative_5470_, 1);
lean_dec(v_unused_5500_);
v___x_5479_ = v_toApplicative_5470_;
v_isShared_5480_ = v_isSharedCheck_5499_;
goto v_resetjp_5478_;
}
else
{
lean_inc(v_toSeqRight_5477_);
lean_inc(v_toSeqLeft_5476_);
lean_inc(v_toSeq_5475_);
lean_inc(v_toFunctor_5474_);
lean_dec(v_toApplicative_5470_);
v___x_5479_ = lean_box(0);
v_isShared_5480_ = v_isSharedCheck_5499_;
goto v_resetjp_5478_;
}
v_resetjp_5478_:
{
lean_object* v___f_5481_; lean_object* v___f_5482_; lean_object* v___f_5483_; lean_object* v___f_5484_; lean_object* v___x_5485_; lean_object* v___f_5486_; lean_object* v___f_5487_; lean_object* v___f_5488_; lean_object* v___x_5490_; 
v___f_5481_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__3);
v___f_5482_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__12___closed__4);
lean_inc_ref(v_toFunctor_5474_);
v___f_5483_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_5483_, 0, v_toFunctor_5474_);
v___f_5484_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5484_, 0, v_toFunctor_5474_);
v___x_5485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5485_, 0, v___f_5483_);
lean_ctor_set(v___x_5485_, 1, v___f_5484_);
v___f_5486_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_5486_, 0, v_toSeqRight_5477_);
v___f_5487_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_5487_, 0, v_toSeqLeft_5476_);
v___f_5488_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_5488_, 0, v_toSeq_5475_);
if (v_isShared_5480_ == 0)
{
lean_ctor_set(v___x_5479_, 4, v___f_5486_);
lean_ctor_set(v___x_5479_, 3, v___f_5487_);
lean_ctor_set(v___x_5479_, 2, v___f_5488_);
lean_ctor_set(v___x_5479_, 1, v___f_5481_);
lean_ctor_set(v___x_5479_, 0, v___x_5485_);
v___x_5490_ = v___x_5479_;
goto v_reusejp_5489_;
}
else
{
lean_object* v_reuseFailAlloc_5498_; 
v_reuseFailAlloc_5498_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5498_, 0, v___x_5485_);
lean_ctor_set(v_reuseFailAlloc_5498_, 1, v___f_5481_);
lean_ctor_set(v_reuseFailAlloc_5498_, 2, v___f_5488_);
lean_ctor_set(v_reuseFailAlloc_5498_, 3, v___f_5487_);
lean_ctor_set(v_reuseFailAlloc_5498_, 4, v___f_5486_);
v___x_5490_ = v_reuseFailAlloc_5498_;
goto v_reusejp_5489_;
}
v_reusejp_5489_:
{
lean_object* v___x_5492_; 
if (v_isShared_5473_ == 0)
{
lean_ctor_set(v___x_5472_, 1, v___f_5482_);
lean_ctor_set(v___x_5472_, 0, v___x_5490_);
v___x_5492_ = v___x_5472_;
goto v_reusejp_5491_;
}
else
{
lean_object* v_reuseFailAlloc_5497_; 
v_reuseFailAlloc_5497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5497_, 0, v___x_5490_);
lean_ctor_set(v_reuseFailAlloc_5497_, 1, v___f_5482_);
v___x_5492_ = v_reuseFailAlloc_5497_;
goto v_reusejp_5491_;
}
v_reusejp_5491_:
{
lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_27482__overap_5495_; lean_object* v___x_5496_; 
v___x_5493_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__7);
v___x_5494_ = l_instInhabitedOfMonad___redArg(v___x_5492_, v___x_5493_);
v___x_27482__overap_5495_ = lean_panic_fn_borrowed(v___x_5494_, v_msg_5438_);
lean_dec(v___x_5494_);
lean_inc(v___y_5442_);
lean_inc_ref(v___y_5441_);
lean_inc(v___y_5440_);
lean_inc_ref(v___y_5439_);
v___x_5496_ = lean_apply_5(v___x_27482__overap_5495_, v___y_5439_, v___y_5440_, v___y_5441_, v___y_5442_, lean_box(0));
return v___x_5496_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed(lean_object* v_msg_5509_, lean_object* v___y_5510_, lean_object* v___y_5511_, lean_object* v___y_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_){
_start:
{
lean_object* v_res_5515_; 
v_res_5515_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11(v_msg_5509_, v___y_5510_, v___y_5511_, v___y_5512_, v___y_5513_);
lean_dec(v___y_5513_);
lean_dec_ref(v___y_5512_);
lean_dec(v___y_5511_);
lean_dec_ref(v___y_5510_);
return v_res_5515_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(lean_object* v___x_5516_, lean_object* v___y_5517_, lean_object* v___y_5518_, lean_object* v___y_5519_, lean_object* v___y_5520_){
_start:
{
lean_object* v___x_5522_; 
v___x_5522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5522_, 0, v___x_5516_);
return v___x_5522_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed(lean_object* v___x_5523_, lean_object* v___y_5524_, lean_object* v___y_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_){
_start:
{
lean_object* v_res_5529_; 
v_res_5529_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0(v___x_5523_, v___y_5524_, v___y_5525_, v___y_5526_, v___y_5527_);
lean_dec(v___y_5527_);
lean_dec_ref(v___y_5526_);
lean_dec(v___y_5525_);
lean_dec_ref(v___y_5524_);
return v_res_5529_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(lean_object* v_k_5530_, lean_object* v_ys_5531_, lean_object* v_args_5532_, lean_object* v___mask_5533_, lean_object* v___bodyType_5534_, lean_object* v___y_5535_, lean_object* v___y_5536_, lean_object* v___y_5537_, lean_object* v___y_5538_){
_start:
{
lean_object* v___x_5540_; 
lean_inc(v___y_5538_);
lean_inc_ref(v___y_5537_);
lean_inc(v___y_5536_);
lean_inc_ref(v___y_5535_);
v___x_5540_ = lean_apply_7(v_k_5530_, v_ys_5531_, v_args_5532_, v___y_5535_, v___y_5536_, v___y_5537_, v___y_5538_, lean_box(0));
return v___x_5540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed(lean_object* v_k_5541_, lean_object* v_ys_5542_, lean_object* v_args_5543_, lean_object* v___mask_5544_, lean_object* v___bodyType_5545_, lean_object* v___y_5546_, lean_object* v___y_5547_, lean_object* v___y_5548_, lean_object* v___y_5549_, lean_object* v___y_5550_){
_start:
{
lean_object* v_res_5551_; 
v_res_5551_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0(v_k_5541_, v_ys_5542_, v_args_5543_, v___mask_5544_, v___bodyType_5545_, v___y_5546_, v___y_5547_, v___y_5548_, v___y_5549_);
lean_dec(v___y_5549_);
lean_dec_ref(v___y_5548_);
lean_dec(v___y_5547_);
lean_dec_ref(v___y_5546_);
lean_dec_ref(v___bodyType_5545_);
lean_dec_ref(v___mask_5544_);
return v_res_5551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(lean_object* v_origAltType_5552_, lean_object* v_altInfo_5553_, lean_object* v_k_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_, lean_object* v___y_5558_){
_start:
{
lean_object* v___f_5560_; lean_object* v___x_5561_; 
v___f_5560_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_5560_, 0, v_k_5554_);
v___x_5561_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_5552_, v_altInfo_5553_, v___f_5560_, v___y_5555_, v___y_5556_, v___y_5557_, v___y_5558_);
if (lean_obj_tag(v___x_5561_) == 0)
{
lean_object* v_a_5562_; lean_object* v___x_5564_; uint8_t v_isShared_5565_; uint8_t v_isSharedCheck_5569_; 
v_a_5562_ = lean_ctor_get(v___x_5561_, 0);
v_isSharedCheck_5569_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5569_ == 0)
{
v___x_5564_ = v___x_5561_;
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
else
{
lean_inc(v_a_5562_);
lean_dec(v___x_5561_);
v___x_5564_ = lean_box(0);
v_isShared_5565_ = v_isSharedCheck_5569_;
goto v_resetjp_5563_;
}
v_resetjp_5563_:
{
lean_object* v___x_5567_; 
if (v_isShared_5565_ == 0)
{
v___x_5567_ = v___x_5564_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5568_; 
v_reuseFailAlloc_5568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5568_, 0, v_a_5562_);
v___x_5567_ = v_reuseFailAlloc_5568_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
return v___x_5567_;
}
}
}
else
{
lean_object* v_a_5570_; lean_object* v___x_5572_; uint8_t v_isShared_5573_; uint8_t v_isSharedCheck_5577_; 
v_a_5570_ = lean_ctor_get(v___x_5561_, 0);
v_isSharedCheck_5577_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5577_ == 0)
{
v___x_5572_ = v___x_5561_;
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
else
{
lean_inc(v_a_5570_);
lean_dec(v___x_5561_);
v___x_5572_ = lean_box(0);
v_isShared_5573_ = v_isSharedCheck_5577_;
goto v_resetjp_5571_;
}
v_resetjp_5571_:
{
lean_object* v___x_5575_; 
if (v_isShared_5573_ == 0)
{
v___x_5575_ = v___x_5572_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_a_5570_);
v___x_5575_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
return v___x_5575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg___boxed(lean_object* v_origAltType_5578_, lean_object* v_altInfo_5579_, lean_object* v_k_5580_, lean_object* v___y_5581_, lean_object* v___y_5582_, lean_object* v___y_5583_, lean_object* v___y_5584_, lean_object* v___y_5585_){
_start:
{
lean_object* v_res_5586_; 
v_res_5586_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_5578_, v_altInfo_5579_, v_k_5580_, v___y_5581_, v___y_5582_, v___y_5583_, v___y_5584_);
lean_dec(v___y_5584_);
lean_dec_ref(v___y_5583_);
lean_dec(v___y_5582_);
lean_dec_ref(v___y_5581_);
return v_res_5586_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(lean_object* v___x_5587_, lean_object* v___x_5588_, lean_object* v___f_5589_, lean_object* v_fst_5590_, lean_object* v___x_5591_, lean_object* v___x_5592_, lean_object* v___x_5593_, lean_object* v___x_5594_, lean_object* v___x_5595_, lean_object* v___y_5596_, lean_object* v___y_5597_, lean_object* v___y_5598_, lean_object* v___y_5599_){
_start:
{
lean_object* v___x_5601_; 
v___x_5601_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v___x_5587_, v___x_5588_, v___f_5589_, v___y_5596_, v___y_5597_, v___y_5598_, v___y_5599_);
if (lean_obj_tag(v___x_5601_) == 0)
{
lean_object* v_a_5602_; lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5616_; 
v_a_5602_ = lean_ctor_get(v___x_5601_, 0);
v_isSharedCheck_5616_ = !lean_is_exclusive(v___x_5601_);
if (v_isSharedCheck_5616_ == 0)
{
v___x_5604_ = v___x_5601_;
v_isShared_5605_ = v_isSharedCheck_5616_;
goto v_resetjp_5603_;
}
else
{
lean_inc(v_a_5602_);
lean_dec(v___x_5601_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5616_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___x_5606_; lean_object* v___x_5607_; lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v___x_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5614_; 
v___x_5606_ = lean_array_push(v_fst_5590_, v_a_5602_);
v___x_5607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5607_, 0, v___x_5591_);
lean_ctor_set(v___x_5607_, 1, v___x_5592_);
v___x_5608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5608_, 0, v___x_5593_);
lean_ctor_set(v___x_5608_, 1, v___x_5607_);
v___x_5609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5609_, 0, v___x_5594_);
lean_ctor_set(v___x_5609_, 1, v___x_5608_);
v___x_5610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5610_, 0, v___x_5595_);
lean_ctor_set(v___x_5610_, 1, v___x_5609_);
v___x_5611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5611_, 0, v___x_5606_);
lean_ctor_set(v___x_5611_, 1, v___x_5610_);
v___x_5612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5612_, 0, v___x_5611_);
if (v_isShared_5605_ == 0)
{
lean_ctor_set(v___x_5604_, 0, v___x_5612_);
v___x_5614_ = v___x_5604_;
goto v_reusejp_5613_;
}
else
{
lean_object* v_reuseFailAlloc_5615_; 
v_reuseFailAlloc_5615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5615_, 0, v___x_5612_);
v___x_5614_ = v_reuseFailAlloc_5615_;
goto v_reusejp_5613_;
}
v_reusejp_5613_:
{
return v___x_5614_;
}
}
}
else
{
lean_object* v_a_5617_; lean_object* v___x_5619_; uint8_t v_isShared_5620_; uint8_t v_isSharedCheck_5624_; 
lean_dec_ref(v___x_5595_);
lean_dec_ref(v___x_5594_);
lean_dec_ref(v___x_5593_);
lean_dec_ref(v___x_5592_);
lean_dec_ref(v___x_5591_);
lean_dec(v_fst_5590_);
v_a_5617_ = lean_ctor_get(v___x_5601_, 0);
v_isSharedCheck_5624_ = !lean_is_exclusive(v___x_5601_);
if (v_isSharedCheck_5624_ == 0)
{
v___x_5619_ = v___x_5601_;
v_isShared_5620_ = v_isSharedCheck_5624_;
goto v_resetjp_5618_;
}
else
{
lean_inc(v_a_5617_);
lean_dec(v___x_5601_);
v___x_5619_ = lean_box(0);
v_isShared_5620_ = v_isSharedCheck_5624_;
goto v_resetjp_5618_;
}
v_resetjp_5618_:
{
lean_object* v___x_5622_; 
if (v_isShared_5620_ == 0)
{
v___x_5622_ = v___x_5619_;
goto v_reusejp_5621_;
}
else
{
lean_object* v_reuseFailAlloc_5623_; 
v_reuseFailAlloc_5623_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5623_, 0, v_a_5617_);
v___x_5622_ = v_reuseFailAlloc_5623_;
goto v_reusejp_5621_;
}
v_reusejp_5621_:
{
return v___x_5622_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed(lean_object* v___x_5625_, lean_object* v___x_5626_, lean_object* v___f_5627_, lean_object* v_fst_5628_, lean_object* v___x_5629_, lean_object* v___x_5630_, lean_object* v___x_5631_, lean_object* v___x_5632_, lean_object* v___x_5633_, lean_object* v___y_5634_, lean_object* v___y_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_, lean_object* v___y_5638_){
_start:
{
lean_object* v_res_5639_; 
v_res_5639_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4(v___x_5625_, v___x_5626_, v___f_5627_, v_fst_5628_, v___x_5629_, v___x_5630_, v___x_5631_, v___x_5632_, v___x_5633_, v___y_5634_, v___y_5635_, v___y_5636_, v___y_5637_);
lean_dec(v___y_5637_);
lean_dec_ref(v___y_5636_);
lean_dec(v___y_5635_);
lean_dec_ref(v___y_5634_);
return v_res_5639_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(lean_object* v_upperBound_5640_, lean_object* v_onAlt_5641_, uint8_t v_useSplitter_5642_, lean_object* v_extraEqualities_5643_, lean_object* v_numDiscrEqs_5644_, lean_object* v_a_5645_, lean_object* v_b_5646_, lean_object* v___y_5647_, lean_object* v___y_5648_, lean_object* v___y_5649_, lean_object* v___y_5650_){
_start:
{
lean_object* v___y_5653_; uint8_t v___x_5676_; 
v___x_5676_ = lean_nat_dec_lt(v_a_5645_, v_upperBound_5640_);
if (v___x_5676_ == 0)
{
lean_object* v___x_5677_; 
lean_dec(v_a_5645_);
lean_dec(v_numDiscrEqs_5644_);
lean_dec(v_extraEqualities_5643_);
lean_dec_ref(v_onAlt_5641_);
v___x_5677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5677_, 0, v_b_5646_);
return v___x_5677_;
}
else
{
lean_object* v_snd_5678_; lean_object* v_snd_5679_; lean_object* v_snd_5680_; lean_object* v_snd_5681_; lean_object* v_snd_5682_; lean_object* v_fst_5683_; lean_object* v___x_5685_; uint8_t v_isShared_5686_; uint8_t v_isSharedCheck_5889_; 
v_snd_5678_ = lean_ctor_get(v_b_5646_, 1);
lean_inc(v_snd_5678_);
v_snd_5679_ = lean_ctor_get(v_snd_5678_, 1);
lean_inc(v_snd_5679_);
v_snd_5680_ = lean_ctor_get(v_snd_5679_, 1);
lean_inc(v_snd_5680_);
v_snd_5681_ = lean_ctor_get(v_snd_5680_, 1);
lean_inc(v_snd_5681_);
v_snd_5682_ = lean_ctor_get(v_snd_5681_, 1);
lean_inc(v_snd_5682_);
v_fst_5683_ = lean_ctor_get(v_b_5646_, 0);
v_isSharedCheck_5889_ = !lean_is_exclusive(v_b_5646_);
if (v_isSharedCheck_5889_ == 0)
{
lean_object* v_unused_5890_; 
v_unused_5890_ = lean_ctor_get(v_b_5646_, 1);
lean_dec(v_unused_5890_);
v___x_5685_ = v_b_5646_;
v_isShared_5686_ = v_isSharedCheck_5889_;
goto v_resetjp_5684_;
}
else
{
lean_inc(v_fst_5683_);
lean_dec(v_b_5646_);
v___x_5685_ = lean_box(0);
v_isShared_5686_ = v_isSharedCheck_5889_;
goto v_resetjp_5684_;
}
v_resetjp_5684_:
{
lean_object* v_fst_5687_; lean_object* v___x_5689_; uint8_t v_isShared_5690_; uint8_t v_isSharedCheck_5887_; 
v_fst_5687_ = lean_ctor_get(v_snd_5678_, 0);
v_isSharedCheck_5887_ = !lean_is_exclusive(v_snd_5678_);
if (v_isSharedCheck_5887_ == 0)
{
lean_object* v_unused_5888_; 
v_unused_5888_ = lean_ctor_get(v_snd_5678_, 1);
lean_dec(v_unused_5888_);
v___x_5689_ = v_snd_5678_;
v_isShared_5690_ = v_isSharedCheck_5887_;
goto v_resetjp_5688_;
}
else
{
lean_inc(v_fst_5687_);
lean_dec(v_snd_5678_);
v___x_5689_ = lean_box(0);
v_isShared_5690_ = v_isSharedCheck_5887_;
goto v_resetjp_5688_;
}
v_resetjp_5688_:
{
lean_object* v_fst_5691_; lean_object* v___x_5693_; uint8_t v_isShared_5694_; uint8_t v_isSharedCheck_5885_; 
v_fst_5691_ = lean_ctor_get(v_snd_5679_, 0);
v_isSharedCheck_5885_ = !lean_is_exclusive(v_snd_5679_);
if (v_isSharedCheck_5885_ == 0)
{
lean_object* v_unused_5886_; 
v_unused_5886_ = lean_ctor_get(v_snd_5679_, 1);
lean_dec(v_unused_5886_);
v___x_5693_ = v_snd_5679_;
v_isShared_5694_ = v_isSharedCheck_5885_;
goto v_resetjp_5692_;
}
else
{
lean_inc(v_fst_5691_);
lean_dec(v_snd_5679_);
v___x_5693_ = lean_box(0);
v_isShared_5694_ = v_isSharedCheck_5885_;
goto v_resetjp_5692_;
}
v_resetjp_5692_:
{
lean_object* v_fst_5695_; lean_object* v___x_5697_; uint8_t v_isShared_5698_; uint8_t v_isSharedCheck_5883_; 
v_fst_5695_ = lean_ctor_get(v_snd_5680_, 0);
v_isSharedCheck_5883_ = !lean_is_exclusive(v_snd_5680_);
if (v_isSharedCheck_5883_ == 0)
{
lean_object* v_unused_5884_; 
v_unused_5884_ = lean_ctor_get(v_snd_5680_, 1);
lean_dec(v_unused_5884_);
v___x_5697_ = v_snd_5680_;
v_isShared_5698_ = v_isSharedCheck_5883_;
goto v_resetjp_5696_;
}
else
{
lean_inc(v_fst_5695_);
lean_dec(v_snd_5680_);
v___x_5697_ = lean_box(0);
v_isShared_5698_ = v_isSharedCheck_5883_;
goto v_resetjp_5696_;
}
v_resetjp_5696_:
{
lean_object* v_fst_5699_; lean_object* v___x_5701_; uint8_t v_isShared_5702_; uint8_t v_isSharedCheck_5881_; 
v_fst_5699_ = lean_ctor_get(v_snd_5681_, 0);
v_isSharedCheck_5881_ = !lean_is_exclusive(v_snd_5681_);
if (v_isSharedCheck_5881_ == 0)
{
lean_object* v_unused_5882_; 
v_unused_5882_ = lean_ctor_get(v_snd_5681_, 1);
lean_dec(v_unused_5882_);
v___x_5701_ = v_snd_5681_;
v_isShared_5702_ = v_isSharedCheck_5881_;
goto v_resetjp_5700_;
}
else
{
lean_inc(v_fst_5699_);
lean_dec(v_snd_5681_);
v___x_5701_ = lean_box(0);
v_isShared_5702_ = v_isSharedCheck_5881_;
goto v_resetjp_5700_;
}
v_resetjp_5700_:
{
lean_object* v_array_5703_; lean_object* v_start_5704_; lean_object* v_stop_5705_; uint8_t v___x_5706_; 
v_array_5703_ = lean_ctor_get(v_snd_5682_, 0);
v_start_5704_ = lean_ctor_get(v_snd_5682_, 1);
v_stop_5705_ = lean_ctor_get(v_snd_5682_, 2);
v___x_5706_ = lean_nat_dec_lt(v_start_5704_, v_stop_5705_);
if (v___x_5706_ == 0)
{
lean_object* v___x_5708_; 
if (v_isShared_5702_ == 0)
{
v___x_5708_ = v___x_5701_;
goto v_reusejp_5707_;
}
else
{
lean_object* v_reuseFailAlloc_5723_; 
v_reuseFailAlloc_5723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5723_, 0, v_fst_5699_);
lean_ctor_set(v_reuseFailAlloc_5723_, 1, v_snd_5682_);
v___x_5708_ = v_reuseFailAlloc_5723_;
goto v_reusejp_5707_;
}
v_reusejp_5707_:
{
lean_object* v___x_5710_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5708_);
v___x_5710_ = v___x_5697_;
goto v_reusejp_5709_;
}
else
{
lean_object* v_reuseFailAlloc_5722_; 
v_reuseFailAlloc_5722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5722_, 0, v_fst_5695_);
lean_ctor_set(v_reuseFailAlloc_5722_, 1, v___x_5708_);
v___x_5710_ = v_reuseFailAlloc_5722_;
goto v_reusejp_5709_;
}
v_reusejp_5709_:
{
lean_object* v___x_5712_; 
if (v_isShared_5694_ == 0)
{
lean_ctor_set(v___x_5693_, 1, v___x_5710_);
v___x_5712_ = v___x_5693_;
goto v_reusejp_5711_;
}
else
{
lean_object* v_reuseFailAlloc_5721_; 
v_reuseFailAlloc_5721_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5721_, 0, v_fst_5691_);
lean_ctor_set(v_reuseFailAlloc_5721_, 1, v___x_5710_);
v___x_5712_ = v_reuseFailAlloc_5721_;
goto v_reusejp_5711_;
}
v_reusejp_5711_:
{
lean_object* v___x_5714_; 
if (v_isShared_5690_ == 0)
{
lean_ctor_set(v___x_5689_, 1, v___x_5712_);
v___x_5714_ = v___x_5689_;
goto v_reusejp_5713_;
}
else
{
lean_object* v_reuseFailAlloc_5720_; 
v_reuseFailAlloc_5720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5720_, 0, v_fst_5687_);
lean_ctor_set(v_reuseFailAlloc_5720_, 1, v___x_5712_);
v___x_5714_ = v_reuseFailAlloc_5720_;
goto v_reusejp_5713_;
}
v_reusejp_5713_:
{
lean_object* v___x_5716_; 
if (v_isShared_5686_ == 0)
{
lean_ctor_set(v___x_5685_, 1, v___x_5714_);
v___x_5716_ = v___x_5685_;
goto v_reusejp_5715_;
}
else
{
lean_object* v_reuseFailAlloc_5719_; 
v_reuseFailAlloc_5719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5719_, 0, v_fst_5683_);
lean_ctor_set(v_reuseFailAlloc_5719_, 1, v___x_5714_);
v___x_5716_ = v_reuseFailAlloc_5719_;
goto v_reusejp_5715_;
}
v_reusejp_5715_:
{
lean_object* v___x_5717_; lean_object* v___f_5718_; 
v___x_5717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
v___f_5718_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5718_, 0, v___x_5717_);
v___y_5653_ = v___f_5718_;
goto v___jp_5652_;
}
}
}
}
}
}
else
{
lean_object* v___x_5725_; uint8_t v_isShared_5726_; uint8_t v_isSharedCheck_5877_; 
lean_inc(v_stop_5705_);
lean_inc(v_start_5704_);
lean_inc_ref(v_array_5703_);
v_isSharedCheck_5877_ = !lean_is_exclusive(v_snd_5682_);
if (v_isSharedCheck_5877_ == 0)
{
lean_object* v_unused_5878_; lean_object* v_unused_5879_; lean_object* v_unused_5880_; 
v_unused_5878_ = lean_ctor_get(v_snd_5682_, 2);
lean_dec(v_unused_5878_);
v_unused_5879_ = lean_ctor_get(v_snd_5682_, 1);
lean_dec(v_unused_5879_);
v_unused_5880_ = lean_ctor_get(v_snd_5682_, 0);
lean_dec(v_unused_5880_);
v___x_5725_ = v_snd_5682_;
v_isShared_5726_ = v_isSharedCheck_5877_;
goto v_resetjp_5724_;
}
else
{
lean_dec(v_snd_5682_);
v___x_5725_ = lean_box(0);
v_isShared_5726_ = v_isSharedCheck_5877_;
goto v_resetjp_5724_;
}
v_resetjp_5724_:
{
lean_object* v_array_5727_; lean_object* v_start_5728_; lean_object* v_stop_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5734_; 
v_array_5727_ = lean_ctor_get(v_fst_5699_, 0);
v_start_5728_ = lean_ctor_get(v_fst_5699_, 1);
v_stop_5729_ = lean_ctor_get(v_fst_5699_, 2);
v___x_5730_ = lean_array_fget(v_array_5703_, v_start_5704_);
v___x_5731_ = lean_unsigned_to_nat(1u);
v___x_5732_ = lean_nat_add(v_start_5704_, v___x_5731_);
lean_dec(v_start_5704_);
if (v_isShared_5726_ == 0)
{
lean_ctor_set(v___x_5725_, 1, v___x_5732_);
v___x_5734_ = v___x_5725_;
goto v_reusejp_5733_;
}
else
{
lean_object* v_reuseFailAlloc_5876_; 
v_reuseFailAlloc_5876_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5876_, 0, v_array_5703_);
lean_ctor_set(v_reuseFailAlloc_5876_, 1, v___x_5732_);
lean_ctor_set(v_reuseFailAlloc_5876_, 2, v_stop_5705_);
v___x_5734_ = v_reuseFailAlloc_5876_;
goto v_reusejp_5733_;
}
v_reusejp_5733_:
{
uint8_t v___x_5735_; 
v___x_5735_ = lean_nat_dec_lt(v_start_5728_, v_stop_5729_);
if (v___x_5735_ == 0)
{
lean_object* v___x_5737_; 
lean_dec(v___x_5730_);
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 1, v___x_5734_);
v___x_5737_ = v___x_5701_;
goto v_reusejp_5736_;
}
else
{
lean_object* v_reuseFailAlloc_5752_; 
v_reuseFailAlloc_5752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5752_, 0, v_fst_5699_);
lean_ctor_set(v_reuseFailAlloc_5752_, 1, v___x_5734_);
v___x_5737_ = v_reuseFailAlloc_5752_;
goto v_reusejp_5736_;
}
v_reusejp_5736_:
{
lean_object* v___x_5739_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5737_);
v___x_5739_ = v___x_5697_;
goto v_reusejp_5738_;
}
else
{
lean_object* v_reuseFailAlloc_5751_; 
v_reuseFailAlloc_5751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5751_, 0, v_fst_5695_);
lean_ctor_set(v_reuseFailAlloc_5751_, 1, v___x_5737_);
v___x_5739_ = v_reuseFailAlloc_5751_;
goto v_reusejp_5738_;
}
v_reusejp_5738_:
{
lean_object* v___x_5741_; 
if (v_isShared_5694_ == 0)
{
lean_ctor_set(v___x_5693_, 1, v___x_5739_);
v___x_5741_ = v___x_5693_;
goto v_reusejp_5740_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_fst_5691_);
lean_ctor_set(v_reuseFailAlloc_5750_, 1, v___x_5739_);
v___x_5741_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5740_;
}
v_reusejp_5740_:
{
lean_object* v___x_5743_; 
if (v_isShared_5690_ == 0)
{
lean_ctor_set(v___x_5689_, 1, v___x_5741_);
v___x_5743_ = v___x_5689_;
goto v_reusejp_5742_;
}
else
{
lean_object* v_reuseFailAlloc_5749_; 
v_reuseFailAlloc_5749_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5749_, 0, v_fst_5687_);
lean_ctor_set(v_reuseFailAlloc_5749_, 1, v___x_5741_);
v___x_5743_ = v_reuseFailAlloc_5749_;
goto v_reusejp_5742_;
}
v_reusejp_5742_:
{
lean_object* v___x_5745_; 
if (v_isShared_5686_ == 0)
{
lean_ctor_set(v___x_5685_, 1, v___x_5743_);
v___x_5745_ = v___x_5685_;
goto v_reusejp_5744_;
}
else
{
lean_object* v_reuseFailAlloc_5748_; 
v_reuseFailAlloc_5748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5748_, 0, v_fst_5683_);
lean_ctor_set(v_reuseFailAlloc_5748_, 1, v___x_5743_);
v___x_5745_ = v_reuseFailAlloc_5748_;
goto v_reusejp_5744_;
}
v_reusejp_5744_:
{
lean_object* v___x_5746_; lean_object* v___f_5747_; 
v___x_5746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5746_, 0, v___x_5745_);
v___f_5747_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5747_, 0, v___x_5746_);
v___y_5653_ = v___f_5747_;
goto v___jp_5652_;
}
}
}
}
}
}
else
{
lean_object* v___x_5754_; uint8_t v_isShared_5755_; uint8_t v_isSharedCheck_5872_; 
lean_inc(v_stop_5729_);
lean_inc(v_start_5728_);
lean_inc_ref(v_array_5727_);
v_isSharedCheck_5872_ = !lean_is_exclusive(v_fst_5699_);
if (v_isSharedCheck_5872_ == 0)
{
lean_object* v_unused_5873_; lean_object* v_unused_5874_; lean_object* v_unused_5875_; 
v_unused_5873_ = lean_ctor_get(v_fst_5699_, 2);
lean_dec(v_unused_5873_);
v_unused_5874_ = lean_ctor_get(v_fst_5699_, 1);
lean_dec(v_unused_5874_);
v_unused_5875_ = lean_ctor_get(v_fst_5699_, 0);
lean_dec(v_unused_5875_);
v___x_5754_ = v_fst_5699_;
v_isShared_5755_ = v_isSharedCheck_5872_;
goto v_resetjp_5753_;
}
else
{
lean_dec(v_fst_5699_);
v___x_5754_ = lean_box(0);
v_isShared_5755_ = v_isSharedCheck_5872_;
goto v_resetjp_5753_;
}
v_resetjp_5753_:
{
lean_object* v_array_5756_; lean_object* v_start_5757_; lean_object* v_stop_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5762_; 
v_array_5756_ = lean_ctor_get(v_fst_5695_, 0);
v_start_5757_ = lean_ctor_get(v_fst_5695_, 1);
v_stop_5758_ = lean_ctor_get(v_fst_5695_, 2);
v___x_5759_ = lean_array_fget(v_array_5727_, v_start_5728_);
v___x_5760_ = lean_nat_add(v_start_5728_, v___x_5731_);
lean_dec(v_start_5728_);
if (v_isShared_5755_ == 0)
{
lean_ctor_set(v___x_5754_, 1, v___x_5760_);
v___x_5762_ = v___x_5754_;
goto v_reusejp_5761_;
}
else
{
lean_object* v_reuseFailAlloc_5871_; 
v_reuseFailAlloc_5871_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5871_, 0, v_array_5727_);
lean_ctor_set(v_reuseFailAlloc_5871_, 1, v___x_5760_);
lean_ctor_set(v_reuseFailAlloc_5871_, 2, v_stop_5729_);
v___x_5762_ = v_reuseFailAlloc_5871_;
goto v_reusejp_5761_;
}
v_reusejp_5761_:
{
uint8_t v___x_5763_; 
v___x_5763_ = lean_nat_dec_lt(v_start_5757_, v_stop_5758_);
if (v___x_5763_ == 0)
{
lean_object* v___x_5765_; 
lean_dec(v___x_5759_);
lean_dec(v___x_5730_);
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 1, v___x_5734_);
lean_ctor_set(v___x_5701_, 0, v___x_5762_);
v___x_5765_ = v___x_5701_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5780_; 
v_reuseFailAlloc_5780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5780_, 0, v___x_5762_);
lean_ctor_set(v_reuseFailAlloc_5780_, 1, v___x_5734_);
v___x_5765_ = v_reuseFailAlloc_5780_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
lean_object* v___x_5767_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5765_);
v___x_5767_ = v___x_5697_;
goto v_reusejp_5766_;
}
else
{
lean_object* v_reuseFailAlloc_5779_; 
v_reuseFailAlloc_5779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5779_, 0, v_fst_5695_);
lean_ctor_set(v_reuseFailAlloc_5779_, 1, v___x_5765_);
v___x_5767_ = v_reuseFailAlloc_5779_;
goto v_reusejp_5766_;
}
v_reusejp_5766_:
{
lean_object* v___x_5769_; 
if (v_isShared_5694_ == 0)
{
lean_ctor_set(v___x_5693_, 1, v___x_5767_);
v___x_5769_ = v___x_5693_;
goto v_reusejp_5768_;
}
else
{
lean_object* v_reuseFailAlloc_5778_; 
v_reuseFailAlloc_5778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5778_, 0, v_fst_5691_);
lean_ctor_set(v_reuseFailAlloc_5778_, 1, v___x_5767_);
v___x_5769_ = v_reuseFailAlloc_5778_;
goto v_reusejp_5768_;
}
v_reusejp_5768_:
{
lean_object* v___x_5771_; 
if (v_isShared_5690_ == 0)
{
lean_ctor_set(v___x_5689_, 1, v___x_5769_);
v___x_5771_ = v___x_5689_;
goto v_reusejp_5770_;
}
else
{
lean_object* v_reuseFailAlloc_5777_; 
v_reuseFailAlloc_5777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5777_, 0, v_fst_5687_);
lean_ctor_set(v_reuseFailAlloc_5777_, 1, v___x_5769_);
v___x_5771_ = v_reuseFailAlloc_5777_;
goto v_reusejp_5770_;
}
v_reusejp_5770_:
{
lean_object* v___x_5773_; 
if (v_isShared_5686_ == 0)
{
lean_ctor_set(v___x_5685_, 1, v___x_5771_);
v___x_5773_ = v___x_5685_;
goto v_reusejp_5772_;
}
else
{
lean_object* v_reuseFailAlloc_5776_; 
v_reuseFailAlloc_5776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5776_, 0, v_fst_5683_);
lean_ctor_set(v_reuseFailAlloc_5776_, 1, v___x_5771_);
v___x_5773_ = v_reuseFailAlloc_5776_;
goto v_reusejp_5772_;
}
v_reusejp_5772_:
{
lean_object* v___x_5774_; lean_object* v___f_5775_; 
v___x_5774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5774_, 0, v___x_5773_);
v___f_5775_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5775_, 0, v___x_5774_);
v___y_5653_ = v___f_5775_;
goto v___jp_5652_;
}
}
}
}
}
}
else
{
lean_object* v___x_5782_; uint8_t v_isShared_5783_; uint8_t v_isSharedCheck_5867_; 
lean_inc(v_stop_5758_);
lean_inc(v_start_5757_);
lean_inc_ref(v_array_5756_);
v_isSharedCheck_5867_ = !lean_is_exclusive(v_fst_5695_);
if (v_isSharedCheck_5867_ == 0)
{
lean_object* v_unused_5868_; lean_object* v_unused_5869_; lean_object* v_unused_5870_; 
v_unused_5868_ = lean_ctor_get(v_fst_5695_, 2);
lean_dec(v_unused_5868_);
v_unused_5869_ = lean_ctor_get(v_fst_5695_, 1);
lean_dec(v_unused_5869_);
v_unused_5870_ = lean_ctor_get(v_fst_5695_, 0);
lean_dec(v_unused_5870_);
v___x_5782_ = v_fst_5695_;
v_isShared_5783_ = v_isSharedCheck_5867_;
goto v_resetjp_5781_;
}
else
{
lean_dec(v_fst_5695_);
v___x_5782_ = lean_box(0);
v_isShared_5783_ = v_isSharedCheck_5867_;
goto v_resetjp_5781_;
}
v_resetjp_5781_:
{
lean_object* v_array_5784_; lean_object* v_start_5785_; lean_object* v_stop_5786_; lean_object* v___x_5787_; lean_object* v___x_5788_; lean_object* v___x_5790_; 
v_array_5784_ = lean_ctor_get(v_fst_5691_, 0);
v_start_5785_ = lean_ctor_get(v_fst_5691_, 1);
v_stop_5786_ = lean_ctor_get(v_fst_5691_, 2);
v___x_5787_ = lean_array_fget(v_array_5756_, v_start_5757_);
v___x_5788_ = lean_nat_add(v_start_5757_, v___x_5731_);
lean_dec(v_start_5757_);
if (v_isShared_5783_ == 0)
{
lean_ctor_set(v___x_5782_, 1, v___x_5788_);
v___x_5790_ = v___x_5782_;
goto v_reusejp_5789_;
}
else
{
lean_object* v_reuseFailAlloc_5866_; 
v_reuseFailAlloc_5866_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5866_, 0, v_array_5756_);
lean_ctor_set(v_reuseFailAlloc_5866_, 1, v___x_5788_);
lean_ctor_set(v_reuseFailAlloc_5866_, 2, v_stop_5758_);
v___x_5790_ = v_reuseFailAlloc_5866_;
goto v_reusejp_5789_;
}
v_reusejp_5789_:
{
uint8_t v___x_5791_; 
v___x_5791_ = lean_nat_dec_lt(v_start_5785_, v_stop_5786_);
if (v___x_5791_ == 0)
{
lean_object* v___x_5793_; 
lean_dec(v___x_5787_);
lean_dec(v___x_5759_);
lean_dec(v___x_5730_);
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 1, v___x_5734_);
lean_ctor_set(v___x_5701_, 0, v___x_5762_);
v___x_5793_ = v___x_5701_;
goto v_reusejp_5792_;
}
else
{
lean_object* v_reuseFailAlloc_5808_; 
v_reuseFailAlloc_5808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5808_, 0, v___x_5762_);
lean_ctor_set(v_reuseFailAlloc_5808_, 1, v___x_5734_);
v___x_5793_ = v_reuseFailAlloc_5808_;
goto v_reusejp_5792_;
}
v_reusejp_5792_:
{
lean_object* v___x_5795_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5793_);
lean_ctor_set(v___x_5697_, 0, v___x_5790_);
v___x_5795_ = v___x_5697_;
goto v_reusejp_5794_;
}
else
{
lean_object* v_reuseFailAlloc_5807_; 
v_reuseFailAlloc_5807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5807_, 0, v___x_5790_);
lean_ctor_set(v_reuseFailAlloc_5807_, 1, v___x_5793_);
v___x_5795_ = v_reuseFailAlloc_5807_;
goto v_reusejp_5794_;
}
v_reusejp_5794_:
{
lean_object* v___x_5797_; 
if (v_isShared_5694_ == 0)
{
lean_ctor_set(v___x_5693_, 1, v___x_5795_);
v___x_5797_ = v___x_5693_;
goto v_reusejp_5796_;
}
else
{
lean_object* v_reuseFailAlloc_5806_; 
v_reuseFailAlloc_5806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5806_, 0, v_fst_5691_);
lean_ctor_set(v_reuseFailAlloc_5806_, 1, v___x_5795_);
v___x_5797_ = v_reuseFailAlloc_5806_;
goto v_reusejp_5796_;
}
v_reusejp_5796_:
{
lean_object* v___x_5799_; 
if (v_isShared_5690_ == 0)
{
lean_ctor_set(v___x_5689_, 1, v___x_5797_);
v___x_5799_ = v___x_5689_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5805_; 
v_reuseFailAlloc_5805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5805_, 0, v_fst_5687_);
lean_ctor_set(v_reuseFailAlloc_5805_, 1, v___x_5797_);
v___x_5799_ = v_reuseFailAlloc_5805_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
lean_object* v___x_5801_; 
if (v_isShared_5686_ == 0)
{
lean_ctor_set(v___x_5685_, 1, v___x_5799_);
v___x_5801_ = v___x_5685_;
goto v_reusejp_5800_;
}
else
{
lean_object* v_reuseFailAlloc_5804_; 
v_reuseFailAlloc_5804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5804_, 0, v_fst_5683_);
lean_ctor_set(v_reuseFailAlloc_5804_, 1, v___x_5799_);
v___x_5801_ = v_reuseFailAlloc_5804_;
goto v_reusejp_5800_;
}
v_reusejp_5800_:
{
lean_object* v___x_5802_; lean_object* v___f_5803_; 
v___x_5802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5802_, 0, v___x_5801_);
v___f_5803_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5803_, 0, v___x_5802_);
v___y_5653_ = v___f_5803_;
goto v___jp_5652_;
}
}
}
}
}
}
else
{
lean_object* v___x_5810_; uint8_t v_isShared_5811_; uint8_t v_isSharedCheck_5862_; 
lean_inc(v_stop_5786_);
lean_inc(v_start_5785_);
lean_inc_ref(v_array_5784_);
v_isSharedCheck_5862_ = !lean_is_exclusive(v_fst_5691_);
if (v_isSharedCheck_5862_ == 0)
{
lean_object* v_unused_5863_; lean_object* v_unused_5864_; lean_object* v_unused_5865_; 
v_unused_5863_ = lean_ctor_get(v_fst_5691_, 2);
lean_dec(v_unused_5863_);
v_unused_5864_ = lean_ctor_get(v_fst_5691_, 1);
lean_dec(v_unused_5864_);
v_unused_5865_ = lean_ctor_get(v_fst_5691_, 0);
lean_dec(v_unused_5865_);
v___x_5810_ = v_fst_5691_;
v_isShared_5811_ = v_isSharedCheck_5862_;
goto v_resetjp_5809_;
}
else
{
lean_dec(v_fst_5691_);
v___x_5810_ = lean_box(0);
v_isShared_5811_ = v_isSharedCheck_5862_;
goto v_resetjp_5809_;
}
v_resetjp_5809_:
{
lean_object* v_array_5812_; lean_object* v_start_5813_; lean_object* v_stop_5814_; lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5818_; 
v_array_5812_ = lean_ctor_get(v_fst_5687_, 0);
v_start_5813_ = lean_ctor_get(v_fst_5687_, 1);
v_stop_5814_ = lean_ctor_get(v_fst_5687_, 2);
v___x_5815_ = lean_array_fget(v_array_5784_, v_start_5785_);
v___x_5816_ = lean_nat_add(v_start_5785_, v___x_5731_);
lean_dec(v_start_5785_);
if (v_isShared_5811_ == 0)
{
lean_ctor_set(v___x_5810_, 1, v___x_5816_);
v___x_5818_ = v___x_5810_;
goto v_reusejp_5817_;
}
else
{
lean_object* v_reuseFailAlloc_5861_; 
v_reuseFailAlloc_5861_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5861_, 0, v_array_5784_);
lean_ctor_set(v_reuseFailAlloc_5861_, 1, v___x_5816_);
lean_ctor_set(v_reuseFailAlloc_5861_, 2, v_stop_5786_);
v___x_5818_ = v_reuseFailAlloc_5861_;
goto v_reusejp_5817_;
}
v_reusejp_5817_:
{
uint8_t v___x_5819_; 
v___x_5819_ = lean_nat_dec_lt(v_start_5813_, v_stop_5814_);
if (v___x_5819_ == 0)
{
lean_object* v___x_5821_; 
lean_dec(v___x_5815_);
lean_dec(v___x_5787_);
lean_dec(v___x_5759_);
lean_dec(v___x_5730_);
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 1, v___x_5734_);
lean_ctor_set(v___x_5701_, 0, v___x_5762_);
v___x_5821_ = v___x_5701_;
goto v_reusejp_5820_;
}
else
{
lean_object* v_reuseFailAlloc_5836_; 
v_reuseFailAlloc_5836_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5836_, 0, v___x_5762_);
lean_ctor_set(v_reuseFailAlloc_5836_, 1, v___x_5734_);
v___x_5821_ = v_reuseFailAlloc_5836_;
goto v_reusejp_5820_;
}
v_reusejp_5820_:
{
lean_object* v___x_5823_; 
if (v_isShared_5698_ == 0)
{
lean_ctor_set(v___x_5697_, 1, v___x_5821_);
lean_ctor_set(v___x_5697_, 0, v___x_5790_);
v___x_5823_ = v___x_5697_;
goto v_reusejp_5822_;
}
else
{
lean_object* v_reuseFailAlloc_5835_; 
v_reuseFailAlloc_5835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5835_, 0, v___x_5790_);
lean_ctor_set(v_reuseFailAlloc_5835_, 1, v___x_5821_);
v___x_5823_ = v_reuseFailAlloc_5835_;
goto v_reusejp_5822_;
}
v_reusejp_5822_:
{
lean_object* v___x_5825_; 
if (v_isShared_5694_ == 0)
{
lean_ctor_set(v___x_5693_, 1, v___x_5823_);
lean_ctor_set(v___x_5693_, 0, v___x_5818_);
v___x_5825_ = v___x_5693_;
goto v_reusejp_5824_;
}
else
{
lean_object* v_reuseFailAlloc_5834_; 
v_reuseFailAlloc_5834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5834_, 0, v___x_5818_);
lean_ctor_set(v_reuseFailAlloc_5834_, 1, v___x_5823_);
v___x_5825_ = v_reuseFailAlloc_5834_;
goto v_reusejp_5824_;
}
v_reusejp_5824_:
{
lean_object* v___x_5827_; 
if (v_isShared_5690_ == 0)
{
lean_ctor_set(v___x_5689_, 1, v___x_5825_);
v___x_5827_ = v___x_5689_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v_fst_5687_);
lean_ctor_set(v_reuseFailAlloc_5833_, 1, v___x_5825_);
v___x_5827_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
lean_object* v___x_5829_; 
if (v_isShared_5686_ == 0)
{
lean_ctor_set(v___x_5685_, 1, v___x_5827_);
v___x_5829_ = v___x_5685_;
goto v_reusejp_5828_;
}
else
{
lean_object* v_reuseFailAlloc_5832_; 
v_reuseFailAlloc_5832_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5832_, 0, v_fst_5683_);
lean_ctor_set(v_reuseFailAlloc_5832_, 1, v___x_5827_);
v___x_5829_ = v_reuseFailAlloc_5832_;
goto v_reusejp_5828_;
}
v_reusejp_5828_:
{
lean_object* v___x_5830_; lean_object* v___f_5831_; 
v___x_5830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5830_, 0, v___x_5829_);
v___f_5831_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5831_, 0, v___x_5830_);
v___y_5653_ = v___f_5831_;
goto v___jp_5652_;
}
}
}
}
}
}
else
{
lean_object* v___x_5838_; uint8_t v_isShared_5839_; uint8_t v_isSharedCheck_5857_; 
lean_inc(v_stop_5814_);
lean_inc(v_start_5813_);
lean_inc_ref(v_array_5812_);
lean_del_object(v___x_5701_);
lean_del_object(v___x_5697_);
lean_del_object(v___x_5693_);
lean_del_object(v___x_5689_);
lean_del_object(v___x_5685_);
v_isSharedCheck_5857_ = !lean_is_exclusive(v_fst_5687_);
if (v_isSharedCheck_5857_ == 0)
{
lean_object* v_unused_5858_; lean_object* v_unused_5859_; lean_object* v_unused_5860_; 
v_unused_5858_ = lean_ctor_get(v_fst_5687_, 2);
lean_dec(v_unused_5858_);
v_unused_5859_ = lean_ctor_get(v_fst_5687_, 1);
lean_dec(v_unused_5859_);
v_unused_5860_ = lean_ctor_get(v_fst_5687_, 0);
lean_dec(v_unused_5860_);
v___x_5838_ = v_fst_5687_;
v_isShared_5839_ = v_isSharedCheck_5857_;
goto v_resetjp_5837_;
}
else
{
lean_dec(v_fst_5687_);
v___x_5838_ = lean_box(0);
v_isShared_5839_ = v_isSharedCheck_5857_;
goto v_resetjp_5837_;
}
v_resetjp_5837_:
{
lean_object* v_numOverlaps_5840_; uint8_t v_hasUnitThunk_5841_; lean_object* v___x_5842_; uint8_t v___x_5843_; 
v_numOverlaps_5840_ = lean_ctor_get(v___x_5815_, 1);
v_hasUnitThunk_5841_ = lean_ctor_get_uint8(v___x_5815_, sizeof(void*)*2);
v___x_5842_ = lean_unsigned_to_nat(0u);
v___x_5843_ = lean_nat_dec_eq(v_numOverlaps_5840_, v___x_5842_);
if (v___x_5843_ == 0)
{
lean_object* v___x_5844_; lean_object* v___x_5845_; 
lean_del_object(v___x_5838_);
lean_dec_ref(v___x_5818_);
lean_dec(v___x_5815_);
lean_dec(v_stop_5814_);
lean_dec(v_start_5813_);
lean_dec_ref(v_array_5812_);
lean_dec_ref(v___x_5790_);
lean_dec(v___x_5787_);
lean_dec_ref(v___x_5762_);
lean_dec(v___x_5759_);
lean_dec_ref(v___x_5734_);
lean_dec(v___x_5730_);
lean_dec(v_fst_5683_);
v___x_5844_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9, &l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__46___closed__9);
v___x_5845_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__11___boxed), 6, 1);
lean_closure_set(v___x_5845_, 0, v___x_5844_);
v___y_5653_ = v___x_5845_;
goto v___jp_5652_;
}
else
{
uint8_t v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; lean_object* v___x_5850_; lean_object* v___f_5851_; lean_object* v___x_5852_; lean_object* v___x_5854_; 
v___x_5846_ = 0;
v___x_5847_ = lean_array_fget_borrowed(v_array_5812_, v_start_5813_);
v___x_5848_ = lean_box(v___x_5846_);
v___x_5849_ = lean_box(v_useSplitter_5642_);
v___x_5850_ = lean_box(v_hasUnitThunk_5841_);
lean_inc(v_numDiscrEqs_5644_);
lean_inc(v_extraEqualities_5643_);
lean_inc(v___x_5847_);
lean_inc(v_a_5645_);
lean_inc_ref(v_onAlt_5641_);
v___f_5851_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__3___boxed), 18, 11);
lean_closure_set(v___f_5851_, 0, v___x_5787_);
lean_closure_set(v___f_5851_, 1, v___x_5730_);
lean_closure_set(v___f_5851_, 2, v_onAlt_5641_);
lean_closure_set(v___f_5851_, 3, v_a_5645_);
lean_closure_set(v___f_5851_, 4, v___x_5848_);
lean_closure_set(v___f_5851_, 5, v___x_5849_);
lean_closure_set(v___f_5851_, 6, v___x_5847_);
lean_closure_set(v___f_5851_, 7, v_extraEqualities_5643_);
lean_closure_set(v___f_5851_, 8, v_numDiscrEqs_5644_);
lean_closure_set(v___f_5851_, 9, v___x_5850_);
lean_closure_set(v___f_5851_, 10, v___x_5731_);
v___x_5852_ = lean_nat_add(v_start_5813_, v___x_5731_);
lean_dec(v_start_5813_);
if (v_isShared_5839_ == 0)
{
lean_ctor_set(v___x_5838_, 1, v___x_5852_);
v___x_5854_ = v___x_5838_;
goto v_reusejp_5853_;
}
else
{
lean_object* v_reuseFailAlloc_5856_; 
v_reuseFailAlloc_5856_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5856_, 0, v_array_5812_);
lean_ctor_set(v_reuseFailAlloc_5856_, 1, v___x_5852_);
lean_ctor_set(v_reuseFailAlloc_5856_, 2, v_stop_5814_);
v___x_5854_ = v_reuseFailAlloc_5856_;
goto v_reusejp_5853_;
}
v_reusejp_5853_:
{
lean_object* v___f_5855_; 
v___f_5855_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___lam__4___boxed), 14, 9);
lean_closure_set(v___f_5855_, 0, v___x_5759_);
lean_closure_set(v___f_5855_, 1, v___x_5815_);
lean_closure_set(v___f_5855_, 2, v___f_5851_);
lean_closure_set(v___f_5855_, 3, v_fst_5683_);
lean_closure_set(v___f_5855_, 4, v___x_5762_);
lean_closure_set(v___f_5855_, 5, v___x_5734_);
lean_closure_set(v___f_5855_, 6, v___x_5790_);
lean_closure_set(v___f_5855_, 7, v___x_5818_);
lean_closure_set(v___f_5855_, 8, v___x_5854_);
v___y_5653_ = v___f_5855_;
goto v___jp_5652_;
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
}
}
}
}
}
}
}
v___jp_5652_:
{
lean_object* v___x_5654_; 
lean_inc(v___y_5650_);
lean_inc_ref(v___y_5649_);
lean_inc(v___y_5648_);
lean_inc_ref(v___y_5647_);
v___x_5654_ = lean_apply_5(v___y_5653_, v___y_5647_, v___y_5648_, v___y_5649_, v___y_5650_, lean_box(0));
if (lean_obj_tag(v___x_5654_) == 0)
{
lean_object* v_a_5655_; lean_object* v___x_5657_; uint8_t v_isShared_5658_; uint8_t v_isSharedCheck_5667_; 
v_a_5655_ = lean_ctor_get(v___x_5654_, 0);
v_isSharedCheck_5667_ = !lean_is_exclusive(v___x_5654_);
if (v_isSharedCheck_5667_ == 0)
{
v___x_5657_ = v___x_5654_;
v_isShared_5658_ = v_isSharedCheck_5667_;
goto v_resetjp_5656_;
}
else
{
lean_inc(v_a_5655_);
lean_dec(v___x_5654_);
v___x_5657_ = lean_box(0);
v_isShared_5658_ = v_isSharedCheck_5667_;
goto v_resetjp_5656_;
}
v_resetjp_5656_:
{
if (lean_obj_tag(v_a_5655_) == 0)
{
lean_object* v_a_5659_; lean_object* v___x_5661_; 
lean_dec(v_a_5645_);
lean_dec(v_numDiscrEqs_5644_);
lean_dec(v_extraEqualities_5643_);
lean_dec_ref(v_onAlt_5641_);
v_a_5659_ = lean_ctor_get(v_a_5655_, 0);
lean_inc(v_a_5659_);
lean_dec_ref(v_a_5655_);
if (v_isShared_5658_ == 0)
{
lean_ctor_set(v___x_5657_, 0, v_a_5659_);
v___x_5661_ = v___x_5657_;
goto v_reusejp_5660_;
}
else
{
lean_object* v_reuseFailAlloc_5662_; 
v_reuseFailAlloc_5662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5662_, 0, v_a_5659_);
v___x_5661_ = v_reuseFailAlloc_5662_;
goto v_reusejp_5660_;
}
v_reusejp_5660_:
{
return v___x_5661_;
}
}
else
{
lean_object* v_a_5663_; lean_object* v___x_5664_; lean_object* v___x_5665_; 
lean_del_object(v___x_5657_);
v_a_5663_ = lean_ctor_get(v_a_5655_, 0);
lean_inc(v_a_5663_);
lean_dec_ref(v_a_5655_);
v___x_5664_ = lean_unsigned_to_nat(1u);
v___x_5665_ = lean_nat_add(v_a_5645_, v___x_5664_);
lean_dec(v_a_5645_);
v_a_5645_ = v___x_5665_;
v_b_5646_ = v_a_5663_;
goto _start;
}
}
}
else
{
lean_object* v_a_5668_; lean_object* v___x_5670_; uint8_t v_isShared_5671_; uint8_t v_isSharedCheck_5675_; 
lean_dec(v_a_5645_);
lean_dec(v_numDiscrEqs_5644_);
lean_dec(v_extraEqualities_5643_);
lean_dec_ref(v_onAlt_5641_);
v_a_5668_ = lean_ctor_get(v___x_5654_, 0);
v_isSharedCheck_5675_ = !lean_is_exclusive(v___x_5654_);
if (v_isSharedCheck_5675_ == 0)
{
v___x_5670_ = v___x_5654_;
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
else
{
lean_inc(v_a_5668_);
lean_dec(v___x_5654_);
v___x_5670_ = lean_box(0);
v_isShared_5671_ = v_isSharedCheck_5675_;
goto v_resetjp_5669_;
}
v_resetjp_5669_:
{
lean_object* v___x_5673_; 
if (v_isShared_5671_ == 0)
{
v___x_5673_ = v___x_5670_;
goto v_reusejp_5672_;
}
else
{
lean_object* v_reuseFailAlloc_5674_; 
v_reuseFailAlloc_5674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5674_, 0, v_a_5668_);
v___x_5673_ = v_reuseFailAlloc_5674_;
goto v_reusejp_5672_;
}
v_reusejp_5672_:
{
return v___x_5673_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg___boxed(lean_object* v_upperBound_5891_, lean_object* v_onAlt_5892_, lean_object* v_useSplitter_5893_, lean_object* v_extraEqualities_5894_, lean_object* v_numDiscrEqs_5895_, lean_object* v_a_5896_, lean_object* v_b_5897_, lean_object* v___y_5898_, lean_object* v___y_5899_, lean_object* v___y_5900_, lean_object* v___y_5901_, lean_object* v___y_5902_){
_start:
{
uint8_t v_useSplitter_boxed_5903_; lean_object* v_res_5904_; 
v_useSplitter_boxed_5903_ = lean_unbox(v_useSplitter_5893_);
v_res_5904_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_5891_, v_onAlt_5892_, v_useSplitter_boxed_5903_, v_extraEqualities_5894_, v_numDiscrEqs_5895_, v_a_5896_, v_b_5897_, v___y_5898_, v___y_5899_, v___y_5900_, v___y_5901_);
lean_dec(v___y_5901_);
lean_dec_ref(v___y_5900_);
lean_dec(v___y_5899_);
lean_dec_ref(v___y_5898_);
lean_dec(v_upperBound_5891_);
return v_res_5904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(lean_object* v_as_5905_, size_t v_sz_5906_, size_t v_i_5907_, lean_object* v_b_5908_, lean_object* v___y_5909_, lean_object* v___y_5910_, lean_object* v___y_5911_, lean_object* v___y_5912_){
_start:
{
lean_object* v_a_5915_; uint8_t v___x_5919_; 
v___x_5919_ = lean_usize_dec_lt(v_i_5907_, v_sz_5906_);
if (v___x_5919_ == 0)
{
lean_object* v___x_5920_; 
v___x_5920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5920_, 0, v_b_5908_);
return v___x_5920_;
}
else
{
lean_object* v_snd_5921_; lean_object* v_snd_5922_; lean_object* v_fst_5923_; lean_object* v___x_5925_; uint8_t v_isShared_5926_; uint8_t v_isSharedCheck_5983_; 
v_snd_5921_ = lean_ctor_get(v_b_5908_, 1);
lean_inc(v_snd_5921_);
v_snd_5922_ = lean_ctor_get(v_snd_5921_, 1);
lean_inc(v_snd_5922_);
v_fst_5923_ = lean_ctor_get(v_b_5908_, 0);
v_isSharedCheck_5983_ = !lean_is_exclusive(v_b_5908_);
if (v_isSharedCheck_5983_ == 0)
{
lean_object* v_unused_5984_; 
v_unused_5984_ = lean_ctor_get(v_b_5908_, 1);
lean_dec(v_unused_5984_);
v___x_5925_ = v_b_5908_;
v_isShared_5926_ = v_isSharedCheck_5983_;
goto v_resetjp_5924_;
}
else
{
lean_inc(v_fst_5923_);
lean_dec(v_b_5908_);
v___x_5925_ = lean_box(0);
v_isShared_5926_ = v_isSharedCheck_5983_;
goto v_resetjp_5924_;
}
v_resetjp_5924_:
{
lean_object* v_fst_5927_; lean_object* v___x_5929_; uint8_t v_isShared_5930_; uint8_t v_isSharedCheck_5981_; 
v_fst_5927_ = lean_ctor_get(v_snd_5921_, 0);
v_isSharedCheck_5981_ = !lean_is_exclusive(v_snd_5921_);
if (v_isSharedCheck_5981_ == 0)
{
lean_object* v_unused_5982_; 
v_unused_5982_ = lean_ctor_get(v_snd_5921_, 1);
lean_dec(v_unused_5982_);
v___x_5929_ = v_snd_5921_;
v_isShared_5930_ = v_isSharedCheck_5981_;
goto v_resetjp_5928_;
}
else
{
lean_inc(v_fst_5927_);
lean_dec(v_snd_5921_);
v___x_5929_ = lean_box(0);
v_isShared_5930_ = v_isSharedCheck_5981_;
goto v_resetjp_5928_;
}
v_resetjp_5928_:
{
lean_object* v_array_5931_; lean_object* v_start_5932_; lean_object* v_stop_5933_; uint8_t v___x_5934_; 
v_array_5931_ = lean_ctor_get(v_snd_5922_, 0);
v_start_5932_ = lean_ctor_get(v_snd_5922_, 1);
v_stop_5933_ = lean_ctor_get(v_snd_5922_, 2);
v___x_5934_ = lean_nat_dec_lt(v_start_5932_, v_stop_5933_);
if (v___x_5934_ == 0)
{
lean_object* v___x_5936_; 
if (v_isShared_5930_ == 0)
{
v___x_5936_ = v___x_5929_;
goto v_reusejp_5935_;
}
else
{
lean_object* v_reuseFailAlloc_5941_; 
v_reuseFailAlloc_5941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5941_, 0, v_fst_5927_);
lean_ctor_set(v_reuseFailAlloc_5941_, 1, v_snd_5922_);
v___x_5936_ = v_reuseFailAlloc_5941_;
goto v_reusejp_5935_;
}
v_reusejp_5935_:
{
lean_object* v___x_5938_; 
if (v_isShared_5926_ == 0)
{
lean_ctor_set(v___x_5925_, 1, v___x_5936_);
v___x_5938_ = v___x_5925_;
goto v_reusejp_5937_;
}
else
{
lean_object* v_reuseFailAlloc_5940_; 
v_reuseFailAlloc_5940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5940_, 0, v_fst_5923_);
lean_ctor_set(v_reuseFailAlloc_5940_, 1, v___x_5936_);
v___x_5938_ = v_reuseFailAlloc_5940_;
goto v_reusejp_5937_;
}
v_reusejp_5937_:
{
lean_object* v___x_5939_; 
v___x_5939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5939_, 0, v___x_5938_);
return v___x_5939_;
}
}
}
else
{
lean_object* v___x_5943_; uint8_t v_isShared_5944_; uint8_t v_isSharedCheck_5977_; 
lean_inc(v_stop_5933_);
lean_inc(v_start_5932_);
lean_inc_ref(v_array_5931_);
v_isSharedCheck_5977_ = !lean_is_exclusive(v_snd_5922_);
if (v_isSharedCheck_5977_ == 0)
{
lean_object* v_unused_5978_; lean_object* v_unused_5979_; lean_object* v_unused_5980_; 
v_unused_5978_ = lean_ctor_get(v_snd_5922_, 2);
lean_dec(v_unused_5978_);
v_unused_5979_ = lean_ctor_get(v_snd_5922_, 1);
lean_dec(v_unused_5979_);
v_unused_5980_ = lean_ctor_get(v_snd_5922_, 0);
lean_dec(v_unused_5980_);
v___x_5943_ = v_snd_5922_;
v_isShared_5944_ = v_isSharedCheck_5977_;
goto v_resetjp_5942_;
}
else
{
lean_dec(v_snd_5922_);
v___x_5943_ = lean_box(0);
v_isShared_5944_ = v_isSharedCheck_5977_;
goto v_resetjp_5942_;
}
v_resetjp_5942_:
{
lean_object* v___x_5945_; lean_object* v___x_5946_; lean_object* v___x_5947_; lean_object* v___x_5949_; 
v___x_5945_ = lean_array_fget(v_array_5931_, v_start_5932_);
v___x_5946_ = lean_unsigned_to_nat(1u);
v___x_5947_ = lean_nat_add(v_start_5932_, v___x_5946_);
lean_dec(v_start_5932_);
if (v_isShared_5944_ == 0)
{
lean_ctor_set(v___x_5943_, 1, v___x_5947_);
v___x_5949_ = v___x_5943_;
goto v_reusejp_5948_;
}
else
{
lean_object* v_reuseFailAlloc_5976_; 
v_reuseFailAlloc_5976_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5976_, 0, v_array_5931_);
lean_ctor_set(v_reuseFailAlloc_5976_, 1, v___x_5947_);
lean_ctor_set(v_reuseFailAlloc_5976_, 2, v_stop_5933_);
v___x_5949_ = v_reuseFailAlloc_5976_;
goto v_reusejp_5948_;
}
v_reusejp_5948_:
{
lean_object* v___y_5951_; 
if (lean_obj_tag(v___x_5945_) == 0)
{
lean_object* v___x_5969_; lean_object* v___x_5970_; 
lean_del_object(v___x_5929_);
lean_del_object(v___x_5925_);
v___x_5969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5969_, 0, v_fst_5927_);
lean_ctor_set(v___x_5969_, 1, v___x_5949_);
v___x_5970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5970_, 0, v_fst_5923_);
lean_ctor_set(v___x_5970_, 1, v___x_5969_);
v_a_5915_ = v___x_5970_;
goto v___jp_5914_;
}
else
{
lean_object* v_val_5971_; lean_object* v_a_5972_; uint8_t v___x_5973_; 
v_val_5971_ = lean_ctor_get(v___x_5945_, 0);
lean_inc(v_val_5971_);
lean_dec_ref(v___x_5945_);
v_a_5972_ = lean_array_uget_borrowed(v_as_5905_, v_i_5907_);
v___x_5973_ = lean_unbox(v_val_5971_);
lean_dec(v_val_5971_);
if (v___x_5973_ == 0)
{
lean_object* v___x_5974_; 
lean_inc(v_a_5972_);
v___x_5974_ = l_Lean_Meta_mkEqRefl(v_a_5972_, v___y_5909_, v___y_5910_, v___y_5911_, v___y_5912_);
v___y_5951_ = v___x_5974_;
goto v___jp_5950_;
}
else
{
lean_object* v___x_5975_; 
lean_inc(v_a_5972_);
v___x_5975_ = l_Lean_Meta_mkHEqRefl(v_a_5972_, v___y_5909_, v___y_5910_, v___y_5911_, v___y_5912_);
v___y_5951_ = v___x_5975_;
goto v___jp_5950_;
}
}
v___jp_5950_:
{
if (lean_obj_tag(v___y_5951_) == 0)
{
lean_object* v_a_5952_; lean_object* v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5956_; 
v_a_5952_ = lean_ctor_get(v___y_5951_, 0);
lean_inc(v_a_5952_);
lean_dec_ref(v___y_5951_);
v___x_5953_ = lean_array_push(v_fst_5923_, v_a_5952_);
v___x_5954_ = lean_nat_add(v_fst_5927_, v___x_5946_);
lean_dec(v_fst_5927_);
if (v_isShared_5930_ == 0)
{
lean_ctor_set(v___x_5929_, 1, v___x_5949_);
lean_ctor_set(v___x_5929_, 0, v___x_5954_);
v___x_5956_ = v___x_5929_;
goto v_reusejp_5955_;
}
else
{
lean_object* v_reuseFailAlloc_5960_; 
v_reuseFailAlloc_5960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5960_, 0, v___x_5954_);
lean_ctor_set(v_reuseFailAlloc_5960_, 1, v___x_5949_);
v___x_5956_ = v_reuseFailAlloc_5960_;
goto v_reusejp_5955_;
}
v_reusejp_5955_:
{
lean_object* v___x_5958_; 
if (v_isShared_5926_ == 0)
{
lean_ctor_set(v___x_5925_, 1, v___x_5956_);
lean_ctor_set(v___x_5925_, 0, v___x_5953_);
v___x_5958_ = v___x_5925_;
goto v_reusejp_5957_;
}
else
{
lean_object* v_reuseFailAlloc_5959_; 
v_reuseFailAlloc_5959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5959_, 0, v___x_5953_);
lean_ctor_set(v_reuseFailAlloc_5959_, 1, v___x_5956_);
v___x_5958_ = v_reuseFailAlloc_5959_;
goto v_reusejp_5957_;
}
v_reusejp_5957_:
{
v_a_5915_ = v___x_5958_;
goto v___jp_5914_;
}
}
}
else
{
lean_object* v_a_5961_; lean_object* v___x_5963_; uint8_t v_isShared_5964_; uint8_t v_isSharedCheck_5968_; 
lean_dec_ref(v___x_5949_);
lean_del_object(v___x_5929_);
lean_dec(v_fst_5927_);
lean_del_object(v___x_5925_);
lean_dec(v_fst_5923_);
v_a_5961_ = lean_ctor_get(v___y_5951_, 0);
v_isSharedCheck_5968_ = !lean_is_exclusive(v___y_5951_);
if (v_isSharedCheck_5968_ == 0)
{
v___x_5963_ = v___y_5951_;
v_isShared_5964_ = v_isSharedCheck_5968_;
goto v_resetjp_5962_;
}
else
{
lean_inc(v_a_5961_);
lean_dec(v___y_5951_);
v___x_5963_ = lean_box(0);
v_isShared_5964_ = v_isSharedCheck_5968_;
goto v_resetjp_5962_;
}
v_resetjp_5962_:
{
lean_object* v___x_5966_; 
if (v_isShared_5964_ == 0)
{
v___x_5966_ = v___x_5963_;
goto v_reusejp_5965_;
}
else
{
lean_object* v_reuseFailAlloc_5967_; 
v_reuseFailAlloc_5967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5967_, 0, v_a_5961_);
v___x_5966_ = v_reuseFailAlloc_5967_;
goto v_reusejp_5965_;
}
v_reusejp_5965_:
{
return v___x_5966_;
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
v___jp_5914_:
{
size_t v___x_5916_; size_t v___x_5917_; 
v___x_5916_ = ((size_t)1ULL);
v___x_5917_ = lean_usize_add(v_i_5907_, v___x_5916_);
v_i_5907_ = v___x_5917_;
v_b_5908_ = v_a_5915_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8___boxed(lean_object* v_as_5985_, lean_object* v_sz_5986_, lean_object* v_i_5987_, lean_object* v_b_5988_, lean_object* v___y_5989_, lean_object* v___y_5990_, lean_object* v___y_5991_, lean_object* v___y_5992_, lean_object* v___y_5993_){
_start:
{
size_t v_sz_boxed_5994_; size_t v_i_boxed_5995_; lean_object* v_res_5996_; 
v_sz_boxed_5994_ = lean_unbox_usize(v_sz_5986_);
lean_dec(v_sz_5986_);
v_i_boxed_5995_ = lean_unbox_usize(v_i_5987_);
lean_dec(v_i_5987_);
v_res_5996_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v_as_5985_, v_sz_boxed_5994_, v_i_boxed_5995_, v_b_5988_, v___y_5989_, v___y_5990_, v___y_5991_, v___y_5992_);
lean_dec(v___y_5992_);
lean_dec_ref(v___y_5991_);
lean_dec(v___y_5990_);
lean_dec_ref(v___y_5989_);
lean_dec_ref(v_as_5985_);
return v_res_5996_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(lean_object* v___x_5997_, lean_object* v___y_5998_, lean_object* v___y_5999_, lean_object* v___y_6000_, lean_object* v___y_6001_){
_start:
{
lean_object* v___x_6003_; 
v___x_6003_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6003_, 0, v___x_5997_);
return v___x_6003_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed(lean_object* v___x_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_, lean_object* v___y_6007_, lean_object* v___y_6008_, lean_object* v___y_6009_){
_start:
{
lean_object* v_res_6010_; 
v_res_6010_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0(v___x_6004_, v___y_6005_, v___y_6006_, v___y_6007_, v___y_6008_);
lean_dec(v___y_6008_);
lean_dec_ref(v___y_6007_);
lean_dec(v___y_6006_);
lean_dec_ref(v___y_6005_);
return v_res_6010_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(size_t v_sz_6011_, size_t v_i_6012_, lean_object* v_bs_6013_, lean_object* v___y_6014_, lean_object* v___y_6015_, lean_object* v___y_6016_){
_start:
{
uint8_t v___x_6018_; 
v___x_6018_ = lean_usize_dec_lt(v_i_6012_, v_sz_6011_);
if (v___x_6018_ == 0)
{
lean_object* v___x_6019_; 
v___x_6019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6019_, 0, v_bs_6013_);
return v___x_6019_;
}
else
{
lean_object* v_v_6020_; lean_object* v___x_6021_; lean_object* v___x_6022_; 
v_v_6020_ = lean_array_uget_borrowed(v_bs_6013_, v_i_6012_);
v___x_6021_ = l_Lean_Expr_fvarId_x21(v_v_6020_);
v___x_6022_ = l_Lean_FVarId_getUserName___redArg(v___x_6021_, v___y_6014_, v___y_6015_, v___y_6016_);
if (lean_obj_tag(v___x_6022_) == 0)
{
lean_object* v_a_6023_; lean_object* v___x_6024_; lean_object* v_bs_x27_6025_; size_t v___x_6026_; size_t v___x_6027_; lean_object* v___x_6028_; 
v_a_6023_ = lean_ctor_get(v___x_6022_, 0);
lean_inc(v_a_6023_);
lean_dec_ref(v___x_6022_);
v___x_6024_ = lean_unsigned_to_nat(0u);
v_bs_x27_6025_ = lean_array_uset(v_bs_6013_, v_i_6012_, v___x_6024_);
v___x_6026_ = ((size_t)1ULL);
v___x_6027_ = lean_usize_add(v_i_6012_, v___x_6026_);
v___x_6028_ = lean_array_uset(v_bs_x27_6025_, v_i_6012_, v_a_6023_);
v_i_6012_ = v___x_6027_;
v_bs_6013_ = v___x_6028_;
goto _start;
}
else
{
lean_object* v_a_6030_; lean_object* v___x_6032_; uint8_t v_isShared_6033_; uint8_t v_isSharedCheck_6037_; 
lean_dec_ref(v_bs_6013_);
v_a_6030_ = lean_ctor_get(v___x_6022_, 0);
v_isSharedCheck_6037_ = !lean_is_exclusive(v___x_6022_);
if (v_isSharedCheck_6037_ == 0)
{
v___x_6032_ = v___x_6022_;
v_isShared_6033_ = v_isSharedCheck_6037_;
goto v_resetjp_6031_;
}
else
{
lean_inc(v_a_6030_);
lean_dec(v___x_6022_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg___boxed(lean_object* v_sz_6038_, lean_object* v_i_6039_, lean_object* v_bs_6040_, lean_object* v___y_6041_, lean_object* v___y_6042_, lean_object* v___y_6043_, lean_object* v___y_6044_){
_start:
{
size_t v_sz_boxed_6045_; size_t v_i_boxed_6046_; lean_object* v_res_6047_; 
v_sz_boxed_6045_ = lean_unbox_usize(v_sz_6038_);
lean_dec(v_sz_6038_);
v_i_boxed_6046_ = lean_unbox_usize(v_i_6039_);
lean_dec(v_i_6039_);
v_res_6047_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_boxed_6045_, v_i_boxed_6046_, v_bs_6040_, v___y_6041_, v___y_6042_, v___y_6043_);
lean_dec(v___y_6043_);
lean_dec_ref(v___y_6042_);
lean_dec_ref(v___y_6041_);
return v_res_6047_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(lean_object* v_xs_6048_, lean_object* v_x_6049_, lean_object* v___y_6050_, lean_object* v___y_6051_, lean_object* v___y_6052_, lean_object* v___y_6053_){
_start:
{
size_t v_sz_6055_; size_t v___x_6056_; lean_object* v___x_6057_; 
v_sz_6055_ = lean_array_size(v_xs_6048_);
v___x_6056_ = ((size_t)0ULL);
v___x_6057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_6055_, v___x_6056_, v_xs_6048_, v___y_6050_, v___y_6052_, v___y_6053_);
return v___x_6057_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed(lean_object* v_xs_6058_, lean_object* v_x_6059_, lean_object* v___y_6060_, lean_object* v___y_6061_, lean_object* v___y_6062_, lean_object* v___y_6063_, lean_object* v___y_6064_){
_start:
{
lean_object* v_res_6065_; 
v_res_6065_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3(v_xs_6058_, v_x_6059_, v___y_6060_, v___y_6061_, v___y_6062_, v___y_6063_);
lean_dec(v___y_6063_);
lean_dec_ref(v___y_6062_);
lean_dec(v___y_6061_);
lean_dec_ref(v___y_6060_);
lean_dec_ref(v_x_6059_);
return v_res_6065_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(lean_object* v___x_6066_, lean_object* v_xs_6067_, lean_object* v_remaining_x27_6068_, lean_object* v_ys4_6069_, lean_object* v_onAlt_6070_, lean_object* v_a_6071_, lean_object* v_altType_6072_, uint8_t v___x_6073_, uint8_t v___x_6074_, lean_object* v___y_6075_, lean_object* v___y_6076_, lean_object* v___y_6077_, lean_object* v___y_6078_){
_start:
{
lean_object* v___x_6080_; 
v___x_6080_ = l_Lean_Meta_instantiateLambda(v___x_6066_, v_xs_6067_, v___y_6075_, v___y_6076_, v___y_6077_, v___y_6078_);
if (lean_obj_tag(v___x_6080_) == 0)
{
lean_object* v_a_6081_; lean_object* v___x_6082_; lean_object* v___x_6083_; 
v_a_6081_ = lean_ctor_get(v___x_6080_, 0);
lean_inc(v_a_6081_);
lean_dec_ref(v___x_6080_);
lean_inc_ref(v_ys4_6069_);
lean_inc_ref(v_remaining_x27_6068_);
lean_inc_ref_n(v_xs_6067_, 2);
v___x_6082_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_6082_, 0, v_xs_6067_);
lean_ctor_set(v___x_6082_, 1, v_xs_6067_);
lean_ctor_set(v___x_6082_, 2, v_remaining_x27_6068_);
lean_ctor_set(v___x_6082_, 3, v_remaining_x27_6068_);
lean_ctor_set(v___x_6082_, 4, v_ys4_6069_);
lean_inc(v___y_6078_);
lean_inc_ref(v___y_6077_);
lean_inc(v___y_6076_);
lean_inc_ref(v___y_6075_);
v___x_6083_ = lean_apply_9(v_onAlt_6070_, v_a_6071_, v_altType_6072_, v___x_6082_, v_a_6081_, v___y_6075_, v___y_6076_, v___y_6077_, v___y_6078_, lean_box(0));
if (lean_obj_tag(v___x_6083_) == 0)
{
lean_object* v_a_6084_; lean_object* v___x_6085_; uint8_t v___x_6086_; lean_object* v___x_6087_; 
v_a_6084_ = lean_ctor_get(v___x_6083_, 0);
lean_inc(v_a_6084_);
lean_dec_ref(v___x_6083_);
v___x_6085_ = l_Array_append___redArg(v_xs_6067_, v_ys4_6069_);
lean_dec_ref(v_ys4_6069_);
v___x_6086_ = 1;
v___x_6087_ = l_Lean_Meta_mkLambdaFVars(v___x_6085_, v_a_6084_, v___x_6073_, v___x_6074_, v___x_6073_, v___x_6074_, v___x_6086_, v___y_6075_, v___y_6076_, v___y_6077_, v___y_6078_);
lean_dec(v___y_6078_);
lean_dec_ref(v___y_6077_);
lean_dec(v___y_6076_);
lean_dec_ref(v___y_6075_);
lean_dec_ref(v___x_6085_);
return v___x_6087_;
}
else
{
lean_dec(v___y_6078_);
lean_dec_ref(v___y_6077_);
lean_dec(v___y_6076_);
lean_dec_ref(v___y_6075_);
lean_dec_ref(v_ys4_6069_);
lean_dec_ref(v_xs_6067_);
return v___x_6083_;
}
}
else
{
lean_dec(v___y_6078_);
lean_dec_ref(v___y_6077_);
lean_dec(v___y_6076_);
lean_dec_ref(v___y_6075_);
lean_dec_ref(v_altType_6072_);
lean_dec(v_a_6071_);
lean_dec_ref(v_onAlt_6070_);
lean_dec_ref(v_ys4_6069_);
lean_dec_ref(v_remaining_x27_6068_);
lean_dec_ref(v_xs_6067_);
return v___x_6080_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed(lean_object* v___x_6088_, lean_object* v_xs_6089_, lean_object* v_remaining_x27_6090_, lean_object* v_ys4_6091_, lean_object* v_onAlt_6092_, lean_object* v_a_6093_, lean_object* v_altType_6094_, lean_object* v___x_6095_, lean_object* v___x_6096_, lean_object* v___y_6097_, lean_object* v___y_6098_, lean_object* v___y_6099_, lean_object* v___y_6100_, lean_object* v___y_6101_){
_start:
{
uint8_t v___x_34819__boxed_6102_; uint8_t v___x_34820__boxed_6103_; lean_object* v_res_6104_; 
v___x_34819__boxed_6102_ = lean_unbox(v___x_6095_);
v___x_34820__boxed_6103_ = lean_unbox(v___x_6096_);
v_res_6104_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1(v___x_6088_, v_xs_6089_, v_remaining_x27_6090_, v_ys4_6091_, v_onAlt_6092_, v_a_6093_, v_altType_6094_, v___x_34819__boxed_6102_, v___x_34820__boxed_6103_, v___y_6097_, v___y_6098_, v___y_6099_, v___y_6100_);
return v_res_6104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(lean_object* v_fvars_6105_, lean_object* v_names_6106_, lean_object* v_k_6107_, lean_object* v___y_6108_, lean_object* v___y_6109_, lean_object* v___y_6110_, lean_object* v___y_6111_){
_start:
{
lean_object* v___x_6113_; 
v___x_6113_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl___redArg(v_fvars_6105_, v_names_6106_, v_k_6107_, v___y_6108_, v___y_6109_, v___y_6110_, v___y_6111_);
if (lean_obj_tag(v___x_6113_) == 0)
{
lean_object* v_a_6114_; lean_object* v___x_6116_; uint8_t v_isShared_6117_; uint8_t v_isSharedCheck_6121_; 
v_a_6114_ = lean_ctor_get(v___x_6113_, 0);
v_isSharedCheck_6121_ = !lean_is_exclusive(v___x_6113_);
if (v_isSharedCheck_6121_ == 0)
{
v___x_6116_ = v___x_6113_;
v_isShared_6117_ = v_isSharedCheck_6121_;
goto v_resetjp_6115_;
}
else
{
lean_inc(v_a_6114_);
lean_dec(v___x_6113_);
v___x_6116_ = lean_box(0);
v_isShared_6117_ = v_isSharedCheck_6121_;
goto v_resetjp_6115_;
}
v_resetjp_6115_:
{
lean_object* v___x_6119_; 
if (v_isShared_6117_ == 0)
{
v___x_6119_ = v___x_6116_;
goto v_reusejp_6118_;
}
else
{
lean_object* v_reuseFailAlloc_6120_; 
v_reuseFailAlloc_6120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6120_, 0, v_a_6114_);
v___x_6119_ = v_reuseFailAlloc_6120_;
goto v_reusejp_6118_;
}
v_reusejp_6118_:
{
return v___x_6119_;
}
}
}
else
{
lean_object* v_a_6122_; lean_object* v___x_6124_; uint8_t v_isShared_6125_; uint8_t v_isSharedCheck_6129_; 
v_a_6122_ = lean_ctor_get(v___x_6113_, 0);
v_isSharedCheck_6129_ = !lean_is_exclusive(v___x_6113_);
if (v_isSharedCheck_6129_ == 0)
{
v___x_6124_ = v___x_6113_;
v_isShared_6125_ = v_isSharedCheck_6129_;
goto v_resetjp_6123_;
}
else
{
lean_inc(v_a_6122_);
lean_dec(v___x_6113_);
v___x_6124_ = lean_box(0);
v_isShared_6125_ = v_isSharedCheck_6129_;
goto v_resetjp_6123_;
}
v_resetjp_6123_:
{
lean_object* v___x_6127_; 
if (v_isShared_6125_ == 0)
{
v___x_6127_ = v___x_6124_;
goto v_reusejp_6126_;
}
else
{
lean_object* v_reuseFailAlloc_6128_; 
v_reuseFailAlloc_6128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6128_, 0, v_a_6122_);
v___x_6127_ = v_reuseFailAlloc_6128_;
goto v_reusejp_6126_;
}
v_reusejp_6126_:
{
return v___x_6127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg___boxed(lean_object* v_fvars_6130_, lean_object* v_names_6131_, lean_object* v_k_6132_, lean_object* v___y_6133_, lean_object* v___y_6134_, lean_object* v___y_6135_, lean_object* v___y_6136_, lean_object* v___y_6137_){
_start:
{
lean_object* v_res_6138_; 
v_res_6138_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_6130_, v_names_6131_, v_k_6132_, v___y_6133_, v___y_6134_, v___y_6135_, v___y_6136_);
lean_dec(v___y_6136_);
lean_dec_ref(v___y_6135_);
lean_dec(v___y_6134_);
lean_dec_ref(v___y_6133_);
lean_dec_ref(v_names_6131_);
lean_dec_ref(v_fvars_6130_);
return v_res_6138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(lean_object* v___x_6139_, lean_object* v___f_6140_, uint8_t v___x_6141_, lean_object* v_xs_6142_, lean_object* v_remaining_x27_6143_, lean_object* v_onAlt_6144_, lean_object* v_a_6145_, uint8_t v___x_6146_, lean_object* v_ys4_6147_, lean_object* v_altType_6148_, lean_object* v___y_6149_, lean_object* v___y_6150_, lean_object* v___y_6151_, lean_object* v___y_6152_){
_start:
{
lean_object* v___x_6154_; 
lean_inc_ref(v___x_6139_);
v___x_6154_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v___x_6139_, v___f_6140_, v___x_6141_, v___y_6149_, v___y_6150_, v___y_6151_, v___y_6152_);
if (lean_obj_tag(v___x_6154_) == 0)
{
lean_object* v_a_6155_; lean_object* v___x_6156_; lean_object* v___x_6157_; lean_object* v___f_6158_; lean_object* v___x_6159_; 
v_a_6155_ = lean_ctor_get(v___x_6154_, 0);
lean_inc(v_a_6155_);
lean_dec_ref(v___x_6154_);
v___x_6156_ = lean_box(v___x_6141_);
v___x_6157_ = lean_box(v___x_6146_);
lean_inc_ref(v_xs_6142_);
v___f_6158_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_6158_, 0, v___x_6139_);
lean_closure_set(v___f_6158_, 1, v_xs_6142_);
lean_closure_set(v___f_6158_, 2, v_remaining_x27_6143_);
lean_closure_set(v___f_6158_, 3, v_ys4_6147_);
lean_closure_set(v___f_6158_, 4, v_onAlt_6144_);
lean_closure_set(v___f_6158_, 5, v_a_6145_);
lean_closure_set(v___f_6158_, 6, v_altType_6148_);
lean_closure_set(v___f_6158_, 7, v___x_6156_);
lean_closure_set(v___f_6158_, 8, v___x_6157_);
v___x_6159_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_xs_6142_, v_a_6155_, v___f_6158_, v___y_6149_, v___y_6150_, v___y_6151_, v___y_6152_);
lean_dec(v_a_6155_);
lean_dec_ref(v_xs_6142_);
return v___x_6159_;
}
else
{
lean_object* v_a_6160_; lean_object* v___x_6162_; uint8_t v_isShared_6163_; uint8_t v_isSharedCheck_6167_; 
lean_dec_ref(v_altType_6148_);
lean_dec_ref(v_ys4_6147_);
lean_dec(v_a_6145_);
lean_dec_ref(v_onAlt_6144_);
lean_dec_ref(v_remaining_x27_6143_);
lean_dec_ref(v_xs_6142_);
lean_dec_ref(v___x_6139_);
v_a_6160_ = lean_ctor_get(v___x_6154_, 0);
v_isSharedCheck_6167_ = !lean_is_exclusive(v___x_6154_);
if (v_isSharedCheck_6167_ == 0)
{
v___x_6162_ = v___x_6154_;
v_isShared_6163_ = v_isSharedCheck_6167_;
goto v_resetjp_6161_;
}
else
{
lean_inc(v_a_6160_);
lean_dec(v___x_6154_);
v___x_6162_ = lean_box(0);
v_isShared_6163_ = v_isSharedCheck_6167_;
goto v_resetjp_6161_;
}
v_resetjp_6161_:
{
lean_object* v___x_6165_; 
if (v_isShared_6163_ == 0)
{
v___x_6165_ = v___x_6162_;
goto v_reusejp_6164_;
}
else
{
lean_object* v_reuseFailAlloc_6166_; 
v_reuseFailAlloc_6166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6166_, 0, v_a_6160_);
v___x_6165_ = v_reuseFailAlloc_6166_;
goto v_reusejp_6164_;
}
v_reusejp_6164_:
{
return v___x_6165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed(lean_object* v___x_6168_, lean_object* v___f_6169_, lean_object* v___x_6170_, lean_object* v_xs_6171_, lean_object* v_remaining_x27_6172_, lean_object* v_onAlt_6173_, lean_object* v_a_6174_, lean_object* v___x_6175_, lean_object* v_ys4_6176_, lean_object* v_altType_6177_, lean_object* v___y_6178_, lean_object* v___y_6179_, lean_object* v___y_6180_, lean_object* v___y_6181_, lean_object* v___y_6182_){
_start:
{
uint8_t v___x_34911__boxed_6183_; uint8_t v___x_34912__boxed_6184_; lean_object* v_res_6185_; 
v___x_34911__boxed_6183_ = lean_unbox(v___x_6170_);
v___x_34912__boxed_6184_ = lean_unbox(v___x_6175_);
v_res_6185_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2(v___x_6168_, v___f_6169_, v___x_34911__boxed_6183_, v_xs_6171_, v_remaining_x27_6172_, v_onAlt_6173_, v_a_6174_, v___x_34912__boxed_6184_, v_ys4_6176_, v_altType_6177_, v___y_6178_, v___y_6179_, v___y_6180_, v___y_6181_);
lean_dec(v___y_6181_);
lean_dec_ref(v___y_6180_);
lean_dec(v___y_6179_);
lean_dec_ref(v___y_6178_);
return v_res_6185_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(lean_object* v___x_6186_, lean_object* v___f_6187_, uint8_t v___x_6188_, lean_object* v_remaining_x27_6189_, lean_object* v_onAlt_6190_, lean_object* v_a_6191_, uint8_t v___x_6192_, lean_object* v_extraEqualities_6193_, lean_object* v_xs_6194_, lean_object* v_altType_6195_, lean_object* v___y_6196_, lean_object* v___y_6197_, lean_object* v___y_6198_, lean_object* v___y_6199_){
_start:
{
lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___f_6203_; lean_object* v___x_6204_; lean_object* v___x_6205_; 
v___x_6201_ = lean_box(v___x_6188_);
v___x_6202_ = lean_box(v___x_6192_);
v___f_6203_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__2___boxed), 15, 8);
lean_closure_set(v___f_6203_, 0, v___x_6186_);
lean_closure_set(v___f_6203_, 1, v___f_6187_);
lean_closure_set(v___f_6203_, 2, v___x_6201_);
lean_closure_set(v___f_6203_, 3, v_xs_6194_);
lean_closure_set(v___f_6203_, 4, v_remaining_x27_6189_);
lean_closure_set(v___f_6203_, 5, v_onAlt_6190_);
lean_closure_set(v___f_6203_, 6, v_a_6191_);
lean_closure_set(v___f_6203_, 7, v___x_6202_);
v___x_6204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6204_, 0, v_extraEqualities_6193_);
v___x_6205_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v_altType_6195_, v___x_6204_, v___f_6203_, v___x_6188_, v___x_6188_, v___y_6196_, v___y_6197_, v___y_6198_, v___y_6199_);
return v___x_6205_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed(lean_object* v___x_6206_, lean_object* v___f_6207_, lean_object* v___x_6208_, lean_object* v_remaining_x27_6209_, lean_object* v_onAlt_6210_, lean_object* v_a_6211_, lean_object* v___x_6212_, lean_object* v_extraEqualities_6213_, lean_object* v_xs_6214_, lean_object* v_altType_6215_, lean_object* v___y_6216_, lean_object* v___y_6217_, lean_object* v___y_6218_, lean_object* v___y_6219_, lean_object* v___y_6220_){
_start:
{
uint8_t v___x_34966__boxed_6221_; uint8_t v___x_34967__boxed_6222_; lean_object* v_res_6223_; 
v___x_34966__boxed_6221_ = lean_unbox(v___x_6208_);
v___x_34967__boxed_6222_ = lean_unbox(v___x_6212_);
v_res_6223_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4(v___x_6206_, v___f_6207_, v___x_34966__boxed_6221_, v_remaining_x27_6209_, v_onAlt_6210_, v_a_6211_, v___x_34967__boxed_6222_, v_extraEqualities_6213_, v_xs_6214_, v_altType_6215_, v___y_6216_, v___y_6217_, v___y_6218_, v___y_6219_);
lean_dec(v___y_6219_);
lean_dec_ref(v___y_6218_);
lean_dec(v___y_6217_);
lean_dec_ref(v___y_6216_);
return v_res_6223_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(lean_object* v___x_6224_, lean_object* v___x_6225_, lean_object* v___f_6226_, uint8_t v___x_6227_, lean_object* v_fst_6228_, lean_object* v___x_6229_, lean_object* v___x_6230_, lean_object* v___x_6231_, lean_object* v___y_6232_, lean_object* v___y_6233_, lean_object* v___y_6234_, lean_object* v___y_6235_){
_start:
{
lean_object* v___x_6237_; 
v___x_6237_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__1___redArg(v___x_6224_, v___x_6225_, v___f_6226_, v___x_6227_, v___x_6227_, v___y_6232_, v___y_6233_, v___y_6234_, v___y_6235_);
if (lean_obj_tag(v___x_6237_) == 0)
{
lean_object* v_a_6238_; lean_object* v___x_6240_; uint8_t v_isShared_6241_; uint8_t v_isSharedCheck_6250_; 
v_a_6238_ = lean_ctor_get(v___x_6237_, 0);
v_isSharedCheck_6250_ = !lean_is_exclusive(v___x_6237_);
if (v_isSharedCheck_6250_ == 0)
{
v___x_6240_ = v___x_6237_;
v_isShared_6241_ = v_isSharedCheck_6250_;
goto v_resetjp_6239_;
}
else
{
lean_inc(v_a_6238_);
lean_dec(v___x_6237_);
v___x_6240_ = lean_box(0);
v_isShared_6241_ = v_isSharedCheck_6250_;
goto v_resetjp_6239_;
}
v_resetjp_6239_:
{
lean_object* v___x_6242_; lean_object* v___x_6243_; lean_object* v___x_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; lean_object* v___x_6248_; 
v___x_6242_ = lean_array_push(v_fst_6228_, v_a_6238_);
v___x_6243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6243_, 0, v___x_6229_);
lean_ctor_set(v___x_6243_, 1, v___x_6230_);
v___x_6244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6244_, 0, v___x_6231_);
lean_ctor_set(v___x_6244_, 1, v___x_6243_);
v___x_6245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6245_, 0, v___x_6242_);
lean_ctor_set(v___x_6245_, 1, v___x_6244_);
v___x_6246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6246_, 0, v___x_6245_);
if (v_isShared_6241_ == 0)
{
lean_ctor_set(v___x_6240_, 0, v___x_6246_);
v___x_6248_ = v___x_6240_;
goto v_reusejp_6247_;
}
else
{
lean_object* v_reuseFailAlloc_6249_; 
v_reuseFailAlloc_6249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6249_, 0, v___x_6246_);
v___x_6248_ = v_reuseFailAlloc_6249_;
goto v_reusejp_6247_;
}
v_reusejp_6247_:
{
return v___x_6248_;
}
}
}
else
{
lean_object* v_a_6251_; lean_object* v___x_6253_; uint8_t v_isShared_6254_; uint8_t v_isSharedCheck_6258_; 
lean_dec_ref(v___x_6231_);
lean_dec_ref(v___x_6230_);
lean_dec_ref(v___x_6229_);
lean_dec(v_fst_6228_);
v_a_6251_ = lean_ctor_get(v___x_6237_, 0);
v_isSharedCheck_6258_ = !lean_is_exclusive(v___x_6237_);
if (v_isSharedCheck_6258_ == 0)
{
v___x_6253_ = v___x_6237_;
v_isShared_6254_ = v_isSharedCheck_6258_;
goto v_resetjp_6252_;
}
else
{
lean_inc(v_a_6251_);
lean_dec(v___x_6237_);
v___x_6253_ = lean_box(0);
v_isShared_6254_ = v_isSharedCheck_6258_;
goto v_resetjp_6252_;
}
v_resetjp_6252_:
{
lean_object* v___x_6256_; 
if (v_isShared_6254_ == 0)
{
v___x_6256_ = v___x_6253_;
goto v_reusejp_6255_;
}
else
{
lean_object* v_reuseFailAlloc_6257_; 
v_reuseFailAlloc_6257_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6257_, 0, v_a_6251_);
v___x_6256_ = v_reuseFailAlloc_6257_;
goto v_reusejp_6255_;
}
v_reusejp_6255_:
{
return v___x_6256_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed(lean_object* v___x_6259_, lean_object* v___x_6260_, lean_object* v___f_6261_, lean_object* v___x_6262_, lean_object* v_fst_6263_, lean_object* v___x_6264_, lean_object* v___x_6265_, lean_object* v___x_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_, lean_object* v___y_6269_, lean_object* v___y_6270_, lean_object* v___y_6271_){
_start:
{
uint8_t v___x_35004__boxed_6272_; lean_object* v_res_6273_; 
v___x_35004__boxed_6272_ = lean_unbox(v___x_6262_);
v_res_6273_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5(v___x_6259_, v___x_6260_, v___f_6261_, v___x_35004__boxed_6272_, v_fst_6263_, v___x_6264_, v___x_6265_, v___x_6266_, v___y_6267_, v___y_6268_, v___y_6269_, v___y_6270_);
lean_dec(v___y_6270_);
lean_dec_ref(v___y_6269_);
lean_dec(v___y_6268_);
lean_dec_ref(v___y_6267_);
return v_res_6273_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0(void){
_start:
{
lean_object* v___f_6274_; 
v___f_6274_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__3___boxed), 7, 0);
return v___f_6274_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(lean_object* v_upperBound_6275_, lean_object* v_onAlt_6276_, lean_object* v_extraEqualities_6277_, lean_object* v_a_6278_, lean_object* v_b_6279_, lean_object* v___y_6280_, lean_object* v___y_6281_, lean_object* v___y_6282_, lean_object* v___y_6283_){
_start:
{
lean_object* v___y_6286_; uint8_t v___x_6309_; 
v___x_6309_ = lean_nat_dec_lt(v_a_6278_, v_upperBound_6275_);
if (v___x_6309_ == 0)
{
lean_object* v___x_6310_; 
lean_dec(v_a_6278_);
lean_dec(v_extraEqualities_6277_);
lean_dec_ref(v_onAlt_6276_);
v___x_6310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6310_, 0, v_b_6279_);
return v___x_6310_;
}
else
{
lean_object* v_snd_6311_; lean_object* v_snd_6312_; lean_object* v_snd_6313_; lean_object* v_fst_6314_; lean_object* v___x_6316_; uint8_t v_isShared_6317_; uint8_t v_isSharedCheck_6421_; 
v_snd_6311_ = lean_ctor_get(v_b_6279_, 1);
lean_inc(v_snd_6311_);
v_snd_6312_ = lean_ctor_get(v_snd_6311_, 1);
lean_inc(v_snd_6312_);
v_snd_6313_ = lean_ctor_get(v_snd_6312_, 1);
lean_inc(v_snd_6313_);
v_fst_6314_ = lean_ctor_get(v_b_6279_, 0);
v_isSharedCheck_6421_ = !lean_is_exclusive(v_b_6279_);
if (v_isSharedCheck_6421_ == 0)
{
lean_object* v_unused_6422_; 
v_unused_6422_ = lean_ctor_get(v_b_6279_, 1);
lean_dec(v_unused_6422_);
v___x_6316_ = v_b_6279_;
v_isShared_6317_ = v_isSharedCheck_6421_;
goto v_resetjp_6315_;
}
else
{
lean_inc(v_fst_6314_);
lean_dec(v_b_6279_);
v___x_6316_ = lean_box(0);
v_isShared_6317_ = v_isSharedCheck_6421_;
goto v_resetjp_6315_;
}
v_resetjp_6315_:
{
lean_object* v_fst_6318_; lean_object* v___x_6320_; uint8_t v_isShared_6321_; uint8_t v_isSharedCheck_6419_; 
v_fst_6318_ = lean_ctor_get(v_snd_6311_, 0);
v_isSharedCheck_6419_ = !lean_is_exclusive(v_snd_6311_);
if (v_isSharedCheck_6419_ == 0)
{
lean_object* v_unused_6420_; 
v_unused_6420_ = lean_ctor_get(v_snd_6311_, 1);
lean_dec(v_unused_6420_);
v___x_6320_ = v_snd_6311_;
v_isShared_6321_ = v_isSharedCheck_6419_;
goto v_resetjp_6319_;
}
else
{
lean_inc(v_fst_6318_);
lean_dec(v_snd_6311_);
v___x_6320_ = lean_box(0);
v_isShared_6321_ = v_isSharedCheck_6419_;
goto v_resetjp_6319_;
}
v_resetjp_6319_:
{
lean_object* v_fst_6322_; lean_object* v___x_6324_; uint8_t v_isShared_6325_; uint8_t v_isSharedCheck_6417_; 
v_fst_6322_ = lean_ctor_get(v_snd_6312_, 0);
v_isSharedCheck_6417_ = !lean_is_exclusive(v_snd_6312_);
if (v_isSharedCheck_6417_ == 0)
{
lean_object* v_unused_6418_; 
v_unused_6418_ = lean_ctor_get(v_snd_6312_, 1);
lean_dec(v_unused_6418_);
v___x_6324_ = v_snd_6312_;
v_isShared_6325_ = v_isSharedCheck_6417_;
goto v_resetjp_6323_;
}
else
{
lean_inc(v_fst_6322_);
lean_dec(v_snd_6312_);
v___x_6324_ = lean_box(0);
v_isShared_6325_ = v_isSharedCheck_6417_;
goto v_resetjp_6323_;
}
v_resetjp_6323_:
{
lean_object* v_array_6326_; lean_object* v_start_6327_; lean_object* v_stop_6328_; uint8_t v___x_6329_; 
v_array_6326_ = lean_ctor_get(v_snd_6313_, 0);
v_start_6327_ = lean_ctor_get(v_snd_6313_, 1);
v_stop_6328_ = lean_ctor_get(v_snd_6313_, 2);
v___x_6329_ = lean_nat_dec_lt(v_start_6327_, v_stop_6328_);
if (v___x_6329_ == 0)
{
lean_object* v___x_6331_; 
if (v_isShared_6325_ == 0)
{
v___x_6331_ = v___x_6324_;
goto v_reusejp_6330_;
}
else
{
lean_object* v_reuseFailAlloc_6340_; 
v_reuseFailAlloc_6340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6340_, 0, v_fst_6322_);
lean_ctor_set(v_reuseFailAlloc_6340_, 1, v_snd_6313_);
v___x_6331_ = v_reuseFailAlloc_6340_;
goto v_reusejp_6330_;
}
v_reusejp_6330_:
{
lean_object* v___x_6333_; 
if (v_isShared_6321_ == 0)
{
lean_ctor_set(v___x_6320_, 1, v___x_6331_);
v___x_6333_ = v___x_6320_;
goto v_reusejp_6332_;
}
else
{
lean_object* v_reuseFailAlloc_6339_; 
v_reuseFailAlloc_6339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6339_, 0, v_fst_6318_);
lean_ctor_set(v_reuseFailAlloc_6339_, 1, v___x_6331_);
v___x_6333_ = v_reuseFailAlloc_6339_;
goto v_reusejp_6332_;
}
v_reusejp_6332_:
{
lean_object* v___x_6335_; 
if (v_isShared_6317_ == 0)
{
lean_ctor_set(v___x_6316_, 1, v___x_6333_);
v___x_6335_ = v___x_6316_;
goto v_reusejp_6334_;
}
else
{
lean_object* v_reuseFailAlloc_6338_; 
v_reuseFailAlloc_6338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6338_, 0, v_fst_6314_);
lean_ctor_set(v_reuseFailAlloc_6338_, 1, v___x_6333_);
v___x_6335_ = v_reuseFailAlloc_6338_;
goto v_reusejp_6334_;
}
v_reusejp_6334_:
{
lean_object* v___x_6336_; lean_object* v___f_6337_; 
v___x_6336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6336_, 0, v___x_6335_);
v___f_6337_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6337_, 0, v___x_6336_);
v___y_6286_ = v___f_6337_;
goto v___jp_6285_;
}
}
}
}
else
{
lean_object* v___x_6342_; uint8_t v_isShared_6343_; uint8_t v_isSharedCheck_6413_; 
lean_inc(v_stop_6328_);
lean_inc(v_start_6327_);
lean_inc_ref(v_array_6326_);
v_isSharedCheck_6413_ = !lean_is_exclusive(v_snd_6313_);
if (v_isSharedCheck_6413_ == 0)
{
lean_object* v_unused_6414_; lean_object* v_unused_6415_; lean_object* v_unused_6416_; 
v_unused_6414_ = lean_ctor_get(v_snd_6313_, 2);
lean_dec(v_unused_6414_);
v_unused_6415_ = lean_ctor_get(v_snd_6313_, 1);
lean_dec(v_unused_6415_);
v_unused_6416_ = lean_ctor_get(v_snd_6313_, 0);
lean_dec(v_unused_6416_);
v___x_6342_ = v_snd_6313_;
v_isShared_6343_ = v_isSharedCheck_6413_;
goto v_resetjp_6341_;
}
else
{
lean_dec(v_snd_6313_);
v___x_6342_ = lean_box(0);
v_isShared_6343_ = v_isSharedCheck_6413_;
goto v_resetjp_6341_;
}
v_resetjp_6341_:
{
lean_object* v_array_6344_; lean_object* v_start_6345_; lean_object* v_stop_6346_; lean_object* v___x_6347_; lean_object* v___x_6348_; lean_object* v___x_6349_; lean_object* v___x_6351_; 
v_array_6344_ = lean_ctor_get(v_fst_6322_, 0);
v_start_6345_ = lean_ctor_get(v_fst_6322_, 1);
v_stop_6346_ = lean_ctor_get(v_fst_6322_, 2);
v___x_6347_ = lean_array_fget(v_array_6326_, v_start_6327_);
v___x_6348_ = lean_unsigned_to_nat(1u);
v___x_6349_ = lean_nat_add(v_start_6327_, v___x_6348_);
lean_dec(v_start_6327_);
if (v_isShared_6343_ == 0)
{
lean_ctor_set(v___x_6342_, 1, v___x_6349_);
v___x_6351_ = v___x_6342_;
goto v_reusejp_6350_;
}
else
{
lean_object* v_reuseFailAlloc_6412_; 
v_reuseFailAlloc_6412_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6412_, 0, v_array_6326_);
lean_ctor_set(v_reuseFailAlloc_6412_, 1, v___x_6349_);
lean_ctor_set(v_reuseFailAlloc_6412_, 2, v_stop_6328_);
v___x_6351_ = v_reuseFailAlloc_6412_;
goto v_reusejp_6350_;
}
v_reusejp_6350_:
{
uint8_t v___x_6352_; 
v___x_6352_ = lean_nat_dec_lt(v_start_6345_, v_stop_6346_);
if (v___x_6352_ == 0)
{
lean_object* v___x_6354_; 
lean_dec(v___x_6347_);
if (v_isShared_6325_ == 0)
{
lean_ctor_set(v___x_6324_, 1, v___x_6351_);
v___x_6354_ = v___x_6324_;
goto v_reusejp_6353_;
}
else
{
lean_object* v_reuseFailAlloc_6363_; 
v_reuseFailAlloc_6363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6363_, 0, v_fst_6322_);
lean_ctor_set(v_reuseFailAlloc_6363_, 1, v___x_6351_);
v___x_6354_ = v_reuseFailAlloc_6363_;
goto v_reusejp_6353_;
}
v_reusejp_6353_:
{
lean_object* v___x_6356_; 
if (v_isShared_6321_ == 0)
{
lean_ctor_set(v___x_6320_, 1, v___x_6354_);
v___x_6356_ = v___x_6320_;
goto v_reusejp_6355_;
}
else
{
lean_object* v_reuseFailAlloc_6362_; 
v_reuseFailAlloc_6362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6362_, 0, v_fst_6318_);
lean_ctor_set(v_reuseFailAlloc_6362_, 1, v___x_6354_);
v___x_6356_ = v_reuseFailAlloc_6362_;
goto v_reusejp_6355_;
}
v_reusejp_6355_:
{
lean_object* v___x_6358_; 
if (v_isShared_6317_ == 0)
{
lean_ctor_set(v___x_6316_, 1, v___x_6356_);
v___x_6358_ = v___x_6316_;
goto v_reusejp_6357_;
}
else
{
lean_object* v_reuseFailAlloc_6361_; 
v_reuseFailAlloc_6361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6361_, 0, v_fst_6314_);
lean_ctor_set(v_reuseFailAlloc_6361_, 1, v___x_6356_);
v___x_6358_ = v_reuseFailAlloc_6361_;
goto v_reusejp_6357_;
}
v_reusejp_6357_:
{
lean_object* v___x_6359_; lean_object* v___f_6360_; 
v___x_6359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6359_, 0, v___x_6358_);
v___f_6360_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6360_, 0, v___x_6359_);
v___y_6286_ = v___f_6360_;
goto v___jp_6285_;
}
}
}
}
else
{
lean_object* v___x_6365_; uint8_t v_isShared_6366_; uint8_t v_isSharedCheck_6408_; 
lean_inc(v_stop_6346_);
lean_inc(v_start_6345_);
lean_inc_ref(v_array_6344_);
v_isSharedCheck_6408_ = !lean_is_exclusive(v_fst_6322_);
if (v_isSharedCheck_6408_ == 0)
{
lean_object* v_unused_6409_; lean_object* v_unused_6410_; lean_object* v_unused_6411_; 
v_unused_6409_ = lean_ctor_get(v_fst_6322_, 2);
lean_dec(v_unused_6409_);
v_unused_6410_ = lean_ctor_get(v_fst_6322_, 1);
lean_dec(v_unused_6410_);
v_unused_6411_ = lean_ctor_get(v_fst_6322_, 0);
lean_dec(v_unused_6411_);
v___x_6365_ = v_fst_6322_;
v_isShared_6366_ = v_isSharedCheck_6408_;
goto v_resetjp_6364_;
}
else
{
lean_dec(v_fst_6322_);
v___x_6365_ = lean_box(0);
v_isShared_6366_ = v_isSharedCheck_6408_;
goto v_resetjp_6364_;
}
v_resetjp_6364_:
{
lean_object* v_array_6367_; lean_object* v_start_6368_; lean_object* v_stop_6369_; lean_object* v___x_6370_; lean_object* v___x_6371_; lean_object* v___x_6373_; 
v_array_6367_ = lean_ctor_get(v_fst_6318_, 0);
v_start_6368_ = lean_ctor_get(v_fst_6318_, 1);
v_stop_6369_ = lean_ctor_get(v_fst_6318_, 2);
v___x_6370_ = lean_array_fget(v_array_6344_, v_start_6345_);
v___x_6371_ = lean_nat_add(v_start_6345_, v___x_6348_);
lean_dec(v_start_6345_);
if (v_isShared_6366_ == 0)
{
lean_ctor_set(v___x_6365_, 1, v___x_6371_);
v___x_6373_ = v___x_6365_;
goto v_reusejp_6372_;
}
else
{
lean_object* v_reuseFailAlloc_6407_; 
v_reuseFailAlloc_6407_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6407_, 0, v_array_6344_);
lean_ctor_set(v_reuseFailAlloc_6407_, 1, v___x_6371_);
lean_ctor_set(v_reuseFailAlloc_6407_, 2, v_stop_6346_);
v___x_6373_ = v_reuseFailAlloc_6407_;
goto v_reusejp_6372_;
}
v_reusejp_6372_:
{
uint8_t v___x_6374_; 
v___x_6374_ = lean_nat_dec_lt(v_start_6368_, v_stop_6369_);
if (v___x_6374_ == 0)
{
lean_object* v___x_6376_; 
lean_dec(v___x_6370_);
lean_dec(v___x_6347_);
if (v_isShared_6325_ == 0)
{
lean_ctor_set(v___x_6324_, 1, v___x_6351_);
lean_ctor_set(v___x_6324_, 0, v___x_6373_);
v___x_6376_ = v___x_6324_;
goto v_reusejp_6375_;
}
else
{
lean_object* v_reuseFailAlloc_6385_; 
v_reuseFailAlloc_6385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6385_, 0, v___x_6373_);
lean_ctor_set(v_reuseFailAlloc_6385_, 1, v___x_6351_);
v___x_6376_ = v_reuseFailAlloc_6385_;
goto v_reusejp_6375_;
}
v_reusejp_6375_:
{
lean_object* v___x_6378_; 
if (v_isShared_6321_ == 0)
{
lean_ctor_set(v___x_6320_, 1, v___x_6376_);
v___x_6378_ = v___x_6320_;
goto v_reusejp_6377_;
}
else
{
lean_object* v_reuseFailAlloc_6384_; 
v_reuseFailAlloc_6384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6384_, 0, v_fst_6318_);
lean_ctor_set(v_reuseFailAlloc_6384_, 1, v___x_6376_);
v___x_6378_ = v_reuseFailAlloc_6384_;
goto v_reusejp_6377_;
}
v_reusejp_6377_:
{
lean_object* v___x_6380_; 
if (v_isShared_6317_ == 0)
{
lean_ctor_set(v___x_6316_, 1, v___x_6378_);
v___x_6380_ = v___x_6316_;
goto v_reusejp_6379_;
}
else
{
lean_object* v_reuseFailAlloc_6383_; 
v_reuseFailAlloc_6383_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6383_, 0, v_fst_6314_);
lean_ctor_set(v_reuseFailAlloc_6383_, 1, v___x_6378_);
v___x_6380_ = v_reuseFailAlloc_6383_;
goto v_reusejp_6379_;
}
v_reusejp_6379_:
{
lean_object* v___x_6381_; lean_object* v___f_6382_; 
v___x_6381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6381_, 0, v___x_6380_);
v___f_6382_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_6382_, 0, v___x_6381_);
v___y_6286_ = v___f_6382_;
goto v___jp_6285_;
}
}
}
}
else
{
lean_object* v___x_6387_; uint8_t v_isShared_6388_; uint8_t v_isSharedCheck_6403_; 
lean_inc(v_stop_6369_);
lean_inc(v_start_6368_);
lean_inc_ref(v_array_6367_);
lean_del_object(v___x_6324_);
lean_del_object(v___x_6320_);
lean_del_object(v___x_6316_);
v_isSharedCheck_6403_ = !lean_is_exclusive(v_fst_6318_);
if (v_isSharedCheck_6403_ == 0)
{
lean_object* v_unused_6404_; lean_object* v_unused_6405_; lean_object* v_unused_6406_; 
v_unused_6404_ = lean_ctor_get(v_fst_6318_, 2);
lean_dec(v_unused_6404_);
v_unused_6405_ = lean_ctor_get(v_fst_6318_, 1);
lean_dec(v_unused_6405_);
v_unused_6406_ = lean_ctor_get(v_fst_6318_, 0);
lean_dec(v_unused_6406_);
v___x_6387_ = v_fst_6318_;
v_isShared_6388_ = v_isSharedCheck_6403_;
goto v_resetjp_6386_;
}
else
{
lean_dec(v_fst_6318_);
v___x_6387_ = lean_box(0);
v_isShared_6388_ = v_isSharedCheck_6403_;
goto v_resetjp_6386_;
}
v_resetjp_6386_:
{
lean_object* v___f_6389_; uint8_t v___x_6390_; lean_object* v_remaining_x27_6391_; lean_object* v___x_6392_; lean_object* v___x_6393_; lean_object* v___x_6394_; lean_object* v___f_6395_; lean_object* v___x_6396_; lean_object* v___x_6398_; 
v___f_6389_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___closed__0);
v___x_6390_ = 0;
v_remaining_x27_6391_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0, &l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0);
v___x_6392_ = lean_array_fget_borrowed(v_array_6367_, v_start_6368_);
v___x_6393_ = lean_box(v___x_6390_);
v___x_6394_ = lean_box(v___x_6374_);
lean_inc(v_extraEqualities_6277_);
lean_inc(v_a_6278_);
lean_inc_ref(v_onAlt_6276_);
lean_inc(v___x_6392_);
v___f_6395_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__4___boxed), 15, 8);
lean_closure_set(v___f_6395_, 0, v___x_6392_);
lean_closure_set(v___f_6395_, 1, v___f_6389_);
lean_closure_set(v___f_6395_, 2, v___x_6393_);
lean_closure_set(v___f_6395_, 3, v_remaining_x27_6391_);
lean_closure_set(v___f_6395_, 4, v_onAlt_6276_);
lean_closure_set(v___f_6395_, 5, v_a_6278_);
lean_closure_set(v___f_6395_, 6, v___x_6394_);
lean_closure_set(v___f_6395_, 7, v_extraEqualities_6277_);
v___x_6396_ = lean_nat_add(v_start_6368_, v___x_6348_);
lean_dec(v_start_6368_);
if (v_isShared_6388_ == 0)
{
lean_ctor_set(v___x_6387_, 1, v___x_6396_);
v___x_6398_ = v___x_6387_;
goto v_reusejp_6397_;
}
else
{
lean_object* v_reuseFailAlloc_6402_; 
v_reuseFailAlloc_6402_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6402_, 0, v_array_6367_);
lean_ctor_set(v_reuseFailAlloc_6402_, 1, v___x_6396_);
lean_ctor_set(v_reuseFailAlloc_6402_, 2, v_stop_6369_);
v___x_6398_ = v_reuseFailAlloc_6402_;
goto v_reusejp_6397_;
}
v_reusejp_6397_:
{
lean_object* v___x_6399_; lean_object* v___x_6400_; lean_object* v___f_6401_; 
v___x_6399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6399_, 0, v___x_6370_);
v___x_6400_ = lean_box(v___x_6390_);
v___f_6401_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_6401_, 0, v___x_6347_);
lean_closure_set(v___f_6401_, 1, v___x_6399_);
lean_closure_set(v___f_6401_, 2, v___f_6395_);
lean_closure_set(v___f_6401_, 3, v___x_6400_);
lean_closure_set(v___f_6401_, 4, v_fst_6314_);
lean_closure_set(v___f_6401_, 5, v___x_6373_);
lean_closure_set(v___f_6401_, 6, v___x_6351_);
lean_closure_set(v___f_6401_, 7, v___x_6398_);
v___y_6286_ = v___f_6401_;
goto v___jp_6285_;
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
v___jp_6285_:
{
lean_object* v___x_6287_; 
lean_inc(v___y_6283_);
lean_inc_ref(v___y_6282_);
lean_inc(v___y_6281_);
lean_inc_ref(v___y_6280_);
v___x_6287_ = lean_apply_5(v___y_6286_, v___y_6280_, v___y_6281_, v___y_6282_, v___y_6283_, lean_box(0));
if (lean_obj_tag(v___x_6287_) == 0)
{
lean_object* v_a_6288_; lean_object* v___x_6290_; uint8_t v_isShared_6291_; uint8_t v_isSharedCheck_6300_; 
v_a_6288_ = lean_ctor_get(v___x_6287_, 0);
v_isSharedCheck_6300_ = !lean_is_exclusive(v___x_6287_);
if (v_isSharedCheck_6300_ == 0)
{
v___x_6290_ = v___x_6287_;
v_isShared_6291_ = v_isSharedCheck_6300_;
goto v_resetjp_6289_;
}
else
{
lean_inc(v_a_6288_);
lean_dec(v___x_6287_);
v___x_6290_ = lean_box(0);
v_isShared_6291_ = v_isSharedCheck_6300_;
goto v_resetjp_6289_;
}
v_resetjp_6289_:
{
if (lean_obj_tag(v_a_6288_) == 0)
{
lean_object* v_a_6292_; lean_object* v___x_6294_; 
lean_dec(v_a_6278_);
lean_dec(v_extraEqualities_6277_);
lean_dec_ref(v_onAlt_6276_);
v_a_6292_ = lean_ctor_get(v_a_6288_, 0);
lean_inc(v_a_6292_);
lean_dec_ref(v_a_6288_);
if (v_isShared_6291_ == 0)
{
lean_ctor_set(v___x_6290_, 0, v_a_6292_);
v___x_6294_ = v___x_6290_;
goto v_reusejp_6293_;
}
else
{
lean_object* v_reuseFailAlloc_6295_; 
v_reuseFailAlloc_6295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6295_, 0, v_a_6292_);
v___x_6294_ = v_reuseFailAlloc_6295_;
goto v_reusejp_6293_;
}
v_reusejp_6293_:
{
return v___x_6294_;
}
}
else
{
lean_object* v_a_6296_; lean_object* v___x_6297_; lean_object* v___x_6298_; 
lean_del_object(v___x_6290_);
v_a_6296_ = lean_ctor_get(v_a_6288_, 0);
lean_inc(v_a_6296_);
lean_dec_ref(v_a_6288_);
v___x_6297_ = lean_unsigned_to_nat(1u);
v___x_6298_ = lean_nat_add(v_a_6278_, v___x_6297_);
lean_dec(v_a_6278_);
v_a_6278_ = v___x_6298_;
v_b_6279_ = v_a_6296_;
goto _start;
}
}
}
else
{
lean_object* v_a_6301_; lean_object* v___x_6303_; uint8_t v_isShared_6304_; uint8_t v_isSharedCheck_6308_; 
lean_dec(v_a_6278_);
lean_dec(v_extraEqualities_6277_);
lean_dec_ref(v_onAlt_6276_);
v_a_6301_ = lean_ctor_get(v___x_6287_, 0);
v_isSharedCheck_6308_ = !lean_is_exclusive(v___x_6287_);
if (v_isSharedCheck_6308_ == 0)
{
v___x_6303_ = v___x_6287_;
v_isShared_6304_ = v_isSharedCheck_6308_;
goto v_resetjp_6302_;
}
else
{
lean_inc(v_a_6301_);
lean_dec(v___x_6287_);
v___x_6303_ = lean_box(0);
v_isShared_6304_ = v_isSharedCheck_6308_;
goto v_resetjp_6302_;
}
v_resetjp_6302_:
{
lean_object* v___x_6306_; 
if (v_isShared_6304_ == 0)
{
v___x_6306_ = v___x_6303_;
goto v_reusejp_6305_;
}
else
{
lean_object* v_reuseFailAlloc_6307_; 
v_reuseFailAlloc_6307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6307_, 0, v_a_6301_);
v___x_6306_ = v_reuseFailAlloc_6307_;
goto v_reusejp_6305_;
}
v_reusejp_6305_:
{
return v___x_6306_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg___boxed(lean_object* v_upperBound_6423_, lean_object* v_onAlt_6424_, lean_object* v_extraEqualities_6425_, lean_object* v_a_6426_, lean_object* v_b_6427_, lean_object* v___y_6428_, lean_object* v___y_6429_, lean_object* v___y_6430_, lean_object* v___y_6431_, lean_object* v___y_6432_){
_start:
{
lean_object* v_res_6433_; 
v_res_6433_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_6423_, v_onAlt_6424_, v_extraEqualities_6425_, v_a_6426_, v_b_6427_, v___y_6428_, v___y_6429_, v___y_6430_, v___y_6431_);
lean_dec(v___y_6431_);
lean_dec_ref(v___y_6430_);
lean_dec(v___y_6429_);
lean_dec_ref(v___y_6428_);
lean_dec(v_upperBound_6423_);
return v_res_6433_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(lean_object* v_onParams_6434_, size_t v_sz_6435_, size_t v_i_6436_, lean_object* v_bs_6437_, lean_object* v___y_6438_, lean_object* v___y_6439_, lean_object* v___y_6440_, lean_object* v___y_6441_){
_start:
{
uint8_t v___x_6443_; 
v___x_6443_ = lean_usize_dec_lt(v_i_6436_, v_sz_6435_);
if (v___x_6443_ == 0)
{
lean_object* v___x_6444_; 
lean_dec_ref(v_onParams_6434_);
v___x_6444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6444_, 0, v_bs_6437_);
return v___x_6444_;
}
else
{
lean_object* v_v_6445_; lean_object* v___x_6446_; 
v_v_6445_ = lean_array_uget_borrowed(v_bs_6437_, v_i_6436_);
lean_inc_ref(v_onParams_6434_);
lean_inc(v___y_6441_);
lean_inc_ref(v___y_6440_);
lean_inc(v___y_6439_);
lean_inc_ref(v___y_6438_);
lean_inc(v_v_6445_);
v___x_6446_ = lean_apply_6(v_onParams_6434_, v_v_6445_, v___y_6438_, v___y_6439_, v___y_6440_, v___y_6441_, lean_box(0));
if (lean_obj_tag(v___x_6446_) == 0)
{
lean_object* v_a_6447_; lean_object* v___x_6448_; lean_object* v_bs_x27_6449_; size_t v___x_6450_; size_t v___x_6451_; lean_object* v___x_6452_; 
v_a_6447_ = lean_ctor_get(v___x_6446_, 0);
lean_inc(v_a_6447_);
lean_dec_ref(v___x_6446_);
v___x_6448_ = lean_unsigned_to_nat(0u);
v_bs_x27_6449_ = lean_array_uset(v_bs_6437_, v_i_6436_, v___x_6448_);
v___x_6450_ = ((size_t)1ULL);
v___x_6451_ = lean_usize_add(v_i_6436_, v___x_6450_);
v___x_6452_ = lean_array_uset(v_bs_x27_6449_, v_i_6436_, v_a_6447_);
v_i_6436_ = v___x_6451_;
v_bs_6437_ = v___x_6452_;
goto _start;
}
else
{
lean_object* v_a_6454_; lean_object* v___x_6456_; uint8_t v_isShared_6457_; uint8_t v_isSharedCheck_6461_; 
lean_dec_ref(v_bs_6437_);
lean_dec_ref(v_onParams_6434_);
v_a_6454_ = lean_ctor_get(v___x_6446_, 0);
v_isSharedCheck_6461_ = !lean_is_exclusive(v___x_6446_);
if (v_isSharedCheck_6461_ == 0)
{
v___x_6456_ = v___x_6446_;
v_isShared_6457_ = v_isSharedCheck_6461_;
goto v_resetjp_6455_;
}
else
{
lean_inc(v_a_6454_);
lean_dec(v___x_6446_);
v___x_6456_ = lean_box(0);
v_isShared_6457_ = v_isSharedCheck_6461_;
goto v_resetjp_6455_;
}
v_resetjp_6455_:
{
lean_object* v___x_6459_; 
if (v_isShared_6457_ == 0)
{
v___x_6459_ = v___x_6456_;
goto v_reusejp_6458_;
}
else
{
lean_object* v_reuseFailAlloc_6460_; 
v_reuseFailAlloc_6460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6460_, 0, v_a_6454_);
v___x_6459_ = v_reuseFailAlloc_6460_;
goto v_reusejp_6458_;
}
v_reusejp_6458_:
{
return v___x_6459_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6___boxed(lean_object* v_onParams_6462_, lean_object* v_sz_6463_, lean_object* v_i_6464_, lean_object* v_bs_6465_, lean_object* v___y_6466_, lean_object* v___y_6467_, lean_object* v___y_6468_, lean_object* v___y_6469_, lean_object* v___y_6470_){
_start:
{
size_t v_sz_boxed_6471_; size_t v_i_boxed_6472_; lean_object* v_res_6473_; 
v_sz_boxed_6471_ = lean_unbox_usize(v_sz_6463_);
lean_dec(v_sz_6463_);
v_i_boxed_6472_ = lean_unbox_usize(v_i_6464_);
lean_dec(v_i_6464_);
v_res_6473_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6462_, v_sz_boxed_6471_, v_i_boxed_6472_, v_bs_6465_, v___y_6466_, v___y_6467_, v___y_6468_, v___y_6469_);
lean_dec(v___y_6469_);
lean_dec_ref(v___y_6468_);
lean_dec(v___y_6467_);
lean_dec_ref(v___y_6466_);
return v_res_6473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(lean_object* v_declName_6474_, lean_object* v___y_6475_){
_start:
{
lean_object* v___x_6477_; lean_object* v_env_6478_; lean_object* v___x_6479_; lean_object* v___x_6480_; 
v___x_6477_ = lean_st_ref_get(v___y_6475_);
v_env_6478_ = lean_ctor_get(v___x_6477_, 0);
lean_inc_ref(v_env_6478_);
lean_dec(v___x_6477_);
v___x_6479_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_6478_, v_declName_6474_);
v___x_6480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6480_, 0, v___x_6479_);
return v___x_6480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg___boxed(lean_object* v_declName_6481_, lean_object* v___y_6482_, lean_object* v___y_6483_){
_start:
{
lean_object* v_res_6484_; 
v_res_6484_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_6481_, v___y_6482_);
lean_dec(v___y_6482_);
return v_res_6484_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1(void){
_start:
{
size_t v___x_6485_; lean_object* v___x_6486_; 
v___x_6485_ = ((size_t)0ULL);
v___x_6486_ = lean_box_usize(v___x_6485_);
return v___x_6486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(lean_object* v_matcherApp_6487_, uint8_t v_useSplitter_6488_, uint8_t v_addEqualities_6489_, lean_object* v_onParams_6490_, lean_object* v_onMotive_6491_, lean_object* v_onAlt_6492_, lean_object* v_onRemaining_6493_, lean_object* v___y_6494_, lean_object* v___y_6495_, lean_object* v___y_6496_, lean_object* v___y_6497_){
_start:
{
lean_object* v___x_6499_; lean_object* v_env_6500_; lean_object* v_toMatcherInfo_6501_; lean_object* v_matcherName_6502_; lean_object* v_matcherLevels_6503_; lean_object* v_params_6504_; lean_object* v_motive_6505_; lean_object* v_discrs_6506_; lean_object* v_alts_6507_; lean_object* v_remaining_6508_; lean_object* v___y_6510_; lean_object* v___y_6511_; lean_object* v___y_6512_; lean_object* v___y_6513_; lean_object* v___y_6514_; lean_object* v___y_6515_; lean_object* v___y_6516_; lean_object* v___y_6517_; lean_object* v___y_6518_; lean_object* v___y_6519_; lean_object* v___y_6520_; lean_object* v___y_6521_; lean_object* v___y_6522_; uint8_t v_isCasesOn_6605_; lean_object* v___y_6607_; size_t v___y_6608_; lean_object* v___y_6609_; lean_object* v___y_6610_; lean_object* v___y_6611_; lean_object* v___y_6612_; lean_object* v___y_6613_; lean_object* v_matcherLevels_6614_; lean_object* v___y_6615_; lean_object* v___y_6616_; lean_object* v___y_6617_; lean_object* v___y_6618_; lean_object* v_numDiscrEqs_6809_; lean_object* v___y_6810_; lean_object* v___y_6811_; lean_object* v___y_6812_; lean_object* v___y_6813_; 
v___x_6499_ = lean_st_ref_get(v___y_6497_);
v_env_6500_ = lean_ctor_get(v___x_6499_, 0);
lean_inc_ref(v_env_6500_);
lean_dec(v___x_6499_);
v_toMatcherInfo_6501_ = lean_ctor_get(v_matcherApp_6487_, 0);
lean_inc_ref(v_toMatcherInfo_6501_);
v_matcherName_6502_ = lean_ctor_get(v_matcherApp_6487_, 1);
lean_inc_n(v_matcherName_6502_, 2);
v_matcherLevels_6503_ = lean_ctor_get(v_matcherApp_6487_, 2);
v_params_6504_ = lean_ctor_get(v_matcherApp_6487_, 3);
v_motive_6505_ = lean_ctor_get(v_matcherApp_6487_, 4);
v_discrs_6506_ = lean_ctor_get(v_matcherApp_6487_, 5);
v_alts_6507_ = lean_ctor_get(v_matcherApp_6487_, 6);
lean_inc_ref(v_alts_6507_);
v_remaining_6508_ = lean_ctor_get(v_matcherApp_6487_, 7);
lean_inc_ref(v_remaining_6508_);
v_isCasesOn_6605_ = l_Lean_isCasesOnRecursor(v_env_6500_, v_matcherName_6502_);
if (v_isCasesOn_6605_ == 0)
{
lean_object* v___x_6863_; lean_object* v_a_6864_; 
lean_inc(v_matcherName_6502_);
v___x_6863_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_matcherName_6502_, v___y_6497_);
v_a_6864_ = lean_ctor_get(v___x_6863_, 0);
lean_inc(v_a_6864_);
lean_dec_ref(v___x_6863_);
if (lean_obj_tag(v_a_6864_) == 0)
{
lean_object* v___x_6865_; lean_object* v___x_6866_; lean_object* v___x_6867_; lean_object* v___x_6868_; lean_object* v___x_6869_; lean_object* v___x_6870_; lean_object* v_a_6871_; lean_object* v___x_6873_; uint8_t v_isShared_6874_; uint8_t v_isSharedCheck_6878_; 
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
lean_dec_ref(v_onMotive_6491_);
lean_dec_ref(v_onParams_6490_);
lean_dec_ref(v_matcherApp_6487_);
v___x_6865_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__1);
v___x_6866_ = l_Lean_MessageData_ofName(v_matcherName_6502_);
v___x_6867_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6867_, 0, v___x_6865_);
lean_ctor_set(v___x_6867_, 1, v___x_6866_);
v___x_6868_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__63___closed__3);
v___x_6869_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6869_, 0, v___x_6867_);
lean_ctor_set(v___x_6869_, 1, v___x_6868_);
v___x_6870_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_updateAlts_spec__0___redArg(v___x_6869_, v___y_6494_, v___y_6495_, v___y_6496_, v___y_6497_);
v_a_6871_ = lean_ctor_get(v___x_6870_, 0);
v_isSharedCheck_6878_ = !lean_is_exclusive(v___x_6870_);
if (v_isSharedCheck_6878_ == 0)
{
v___x_6873_ = v___x_6870_;
v_isShared_6874_ = v_isSharedCheck_6878_;
goto v_resetjp_6872_;
}
else
{
lean_inc(v_a_6871_);
lean_dec(v___x_6870_);
v___x_6873_ = lean_box(0);
v_isShared_6874_ = v_isSharedCheck_6878_;
goto v_resetjp_6872_;
}
v_resetjp_6872_:
{
lean_object* v___x_6876_; 
if (v_isShared_6874_ == 0)
{
v___x_6876_ = v___x_6873_;
goto v_reusejp_6875_;
}
else
{
lean_object* v_reuseFailAlloc_6877_; 
v_reuseFailAlloc_6877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6877_, 0, v_a_6871_);
v___x_6876_ = v_reuseFailAlloc_6877_;
goto v_reusejp_6875_;
}
v_reusejp_6875_:
{
return v___x_6876_;
}
}
}
else
{
lean_object* v_val_6879_; lean_object* v___x_6880_; 
v_val_6879_ = lean_ctor_get(v_a_6864_, 0);
lean_inc(v_val_6879_);
lean_dec_ref(v_a_6864_);
v___x_6880_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_6879_);
lean_dec(v_val_6879_);
v_numDiscrEqs_6809_ = v___x_6880_;
v___y_6810_ = v___y_6494_;
v___y_6811_ = v___y_6495_;
v___y_6812_ = v___y_6496_;
v___y_6813_ = v___y_6497_;
goto v___jp_6808_;
}
}
else
{
lean_object* v___x_6881_; 
v___x_6881_ = lean_unsigned_to_nat(0u);
v_numDiscrEqs_6809_ = v___x_6881_;
v___y_6810_ = v___y_6494_;
v___y_6811_ = v___y_6495_;
v___y_6812_ = v___y_6496_;
v___y_6813_ = v___y_6497_;
goto v___jp_6808_;
}
v___jp_6509_:
{
lean_object* v___x_6523_; lean_object* v___x_6524_; lean_object* v_aux_6525_; lean_object* v_aux_6526_; lean_object* v_aux_6527_; lean_object* v___x_6528_; lean_object* v___x_6529_; lean_object* v___x_6530_; lean_object* v___f_6531_; lean_object* v___x_6532_; lean_object* v___x_6533_; 
lean_inc_ref(v___y_6514_);
v___x_6523_ = lean_array_to_list(v___y_6514_);
lean_inc(v_matcherName_6502_);
v___x_6524_ = l_Lean_mkConst(v_matcherName_6502_, v___x_6523_);
v_aux_6525_ = l_Lean_mkAppN(v___x_6524_, v___y_6521_);
lean_inc_ref(v___y_6520_);
v_aux_6526_ = l_Lean_Expr_app___override(v_aux_6525_, v___y_6520_);
v_aux_6527_ = l_Lean_mkAppN(v_aux_6526_, v___y_6513_);
v___x_6528_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__1);
lean_inc_ref_n(v_aux_6527_, 2);
v___x_6529_ = l_Lean_indentExpr(v_aux_6527_);
v___x_6530_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6530_, 0, v___x_6528_);
lean_ctor_set(v___x_6530_, 1, v___x_6529_);
v___f_6531_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6531_, 0, v___x_6530_);
v___x_6532_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_6532_, 0, v_aux_6527_);
v___x_6533_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6532_, v___f_6531_, v___y_6511_, v___y_6518_, v___y_6510_, v___y_6522_);
if (lean_obj_tag(v___x_6533_) == 0)
{
lean_object* v___x_6534_; lean_object* v___x_6535_; 
lean_dec_ref(v___x_6533_);
v___x_6534_ = lean_array_get_size(v_alts_6507_);
v___x_6535_ = l_Lean_Meta_inferArgumentTypesN(v___x_6534_, v_aux_6527_, v___y_6511_, v___y_6518_, v___y_6510_, v___y_6522_);
if (lean_obj_tag(v___x_6535_) == 0)
{
lean_object* v_a_6536_; lean_object* v___x_6537_; lean_object* v___x_6538_; lean_object* v___x_6539_; lean_object* v___x_6540_; lean_object* v___x_6541_; lean_object* v___x_6542_; lean_object* v___x_6543_; lean_object* v___x_6544_; lean_object* v___x_6545_; lean_object* v___x_6546_; 
v_a_6536_ = lean_ctor_get(v___x_6535_, 0);
lean_inc(v_a_6536_);
lean_dec_ref(v___x_6535_);
v___x_6537_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_6487_);
v___x_6538_ = lean_array_get_size(v___x_6537_);
v___x_6539_ = lean_array_get_size(v_a_6536_);
lean_inc_n(v___y_6516_, 3);
v___x_6540_ = l_Array_toSubarray___redArg(v_alts_6507_, v___y_6516_, v___x_6534_);
v___x_6541_ = l_Array_toSubarray___redArg(v___x_6537_, v___y_6516_, v___x_6538_);
v___x_6542_ = l_Array_toSubarray___redArg(v_a_6536_, v___y_6516_, v___x_6539_);
v___x_6543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6543_, 0, v___x_6541_);
lean_ctor_set(v___x_6543_, 1, v___x_6542_);
v___x_6544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6544_, 0, v___x_6540_);
lean_ctor_set(v___x_6544_, 1, v___x_6543_);
lean_inc_ref(v___y_6512_);
v___x_6545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6545_, 0, v___y_6512_);
lean_ctor_set(v___x_6545_, 1, v___x_6544_);
v___x_6546_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v___x_6534_, v_onAlt_6492_, v___y_6515_, v___y_6516_, v___x_6545_, v___y_6511_, v___y_6518_, v___y_6510_, v___y_6522_);
if (lean_obj_tag(v___x_6546_) == 0)
{
lean_object* v_a_6547_; lean_object* v_fst_6548_; lean_object* v___x_6549_; 
v_a_6547_ = lean_ctor_get(v___x_6546_, 0);
lean_inc(v_a_6547_);
lean_dec_ref(v___x_6546_);
v_fst_6548_ = lean_ctor_get(v_a_6547_, 0);
lean_inc(v_fst_6548_);
lean_dec(v_a_6547_);
lean_inc(v___y_6522_);
lean_inc_ref(v___y_6510_);
lean_inc(v___y_6518_);
lean_inc_ref(v___y_6511_);
v___x_6549_ = lean_apply_6(v_onRemaining_6493_, v_remaining_6508_, v___y_6511_, v___y_6518_, v___y_6510_, v___y_6522_, lean_box(0));
if (lean_obj_tag(v___x_6549_) == 0)
{
lean_object* v_a_6550_; lean_object* v___x_6552_; uint8_t v_isShared_6553_; uint8_t v_isSharedCheck_6572_; 
v_a_6550_ = lean_ctor_get(v___x_6549_, 0);
v_isSharedCheck_6572_ = !lean_is_exclusive(v___x_6549_);
if (v_isSharedCheck_6572_ == 0)
{
v___x_6552_ = v___x_6549_;
v_isShared_6553_ = v_isSharedCheck_6572_;
goto v_resetjp_6551_;
}
else
{
lean_inc(v_a_6550_);
lean_dec(v___x_6549_);
v___x_6552_ = lean_box(0);
v_isShared_6553_ = v_isSharedCheck_6572_;
goto v_resetjp_6551_;
}
v_resetjp_6551_:
{
lean_object* v_numParams_6554_; lean_object* v_numDiscrs_6555_; lean_object* v_altInfos_6556_; lean_object* v_uElimPos_x3f_6557_; lean_object* v_overlaps_6558_; lean_object* v___x_6560_; uint8_t v_isShared_6561_; uint8_t v_isSharedCheck_6570_; 
v_numParams_6554_ = lean_ctor_get(v_toMatcherInfo_6501_, 0);
v_numDiscrs_6555_ = lean_ctor_get(v_toMatcherInfo_6501_, 1);
v_altInfos_6556_ = lean_ctor_get(v_toMatcherInfo_6501_, 2);
v_uElimPos_x3f_6557_ = lean_ctor_get(v_toMatcherInfo_6501_, 3);
v_overlaps_6558_ = lean_ctor_get(v_toMatcherInfo_6501_, 5);
v_isSharedCheck_6570_ = !lean_is_exclusive(v_toMatcherInfo_6501_);
if (v_isSharedCheck_6570_ == 0)
{
lean_object* v_unused_6571_; 
v_unused_6571_ = lean_ctor_get(v_toMatcherInfo_6501_, 4);
lean_dec(v_unused_6571_);
v___x_6560_ = v_toMatcherInfo_6501_;
v_isShared_6561_ = v_isSharedCheck_6570_;
goto v_resetjp_6559_;
}
else
{
lean_inc(v_overlaps_6558_);
lean_inc(v_uElimPos_x3f_6557_);
lean_inc(v_altInfos_6556_);
lean_inc(v_numDiscrs_6555_);
lean_inc(v_numParams_6554_);
lean_dec(v_toMatcherInfo_6501_);
v___x_6560_ = lean_box(0);
v_isShared_6561_ = v_isSharedCheck_6570_;
goto v_resetjp_6559_;
}
v_resetjp_6559_:
{
lean_object* v_remaining_x27_6562_; lean_object* v___x_6564_; 
v_remaining_x27_6562_ = l_Array_append___redArg(v___y_6517_, v_a_6550_);
lean_dec(v_a_6550_);
if (v_isShared_6561_ == 0)
{
lean_ctor_set(v___x_6560_, 4, v___y_6519_);
v___x_6564_ = v___x_6560_;
goto v_reusejp_6563_;
}
else
{
lean_object* v_reuseFailAlloc_6569_; 
v_reuseFailAlloc_6569_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6569_, 0, v_numParams_6554_);
lean_ctor_set(v_reuseFailAlloc_6569_, 1, v_numDiscrs_6555_);
lean_ctor_set(v_reuseFailAlloc_6569_, 2, v_altInfos_6556_);
lean_ctor_set(v_reuseFailAlloc_6569_, 3, v_uElimPos_x3f_6557_);
lean_ctor_set(v_reuseFailAlloc_6569_, 4, v___y_6519_);
lean_ctor_set(v_reuseFailAlloc_6569_, 5, v_overlaps_6558_);
v___x_6564_ = v_reuseFailAlloc_6569_;
goto v_reusejp_6563_;
}
v_reusejp_6563_:
{
lean_object* v___x_6565_; lean_object* v___x_6567_; 
v___x_6565_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_6565_, 0, v___x_6564_);
lean_ctor_set(v___x_6565_, 1, v_matcherName_6502_);
lean_ctor_set(v___x_6565_, 2, v___y_6514_);
lean_ctor_set(v___x_6565_, 3, v___y_6521_);
lean_ctor_set(v___x_6565_, 4, v___y_6520_);
lean_ctor_set(v___x_6565_, 5, v___y_6513_);
lean_ctor_set(v___x_6565_, 6, v_fst_6548_);
lean_ctor_set(v___x_6565_, 7, v_remaining_x27_6562_);
if (v_isShared_6553_ == 0)
{
lean_ctor_set(v___x_6552_, 0, v___x_6565_);
v___x_6567_ = v___x_6552_;
goto v_reusejp_6566_;
}
else
{
lean_object* v_reuseFailAlloc_6568_; 
v_reuseFailAlloc_6568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6568_, 0, v___x_6565_);
v___x_6567_ = v_reuseFailAlloc_6568_;
goto v_reusejp_6566_;
}
v_reusejp_6566_:
{
return v___x_6567_;
}
}
}
}
}
else
{
lean_object* v_a_6573_; lean_object* v___x_6575_; uint8_t v_isShared_6576_; uint8_t v_isSharedCheck_6580_; 
lean_dec(v_fst_6548_);
lean_dec_ref(v___y_6521_);
lean_dec_ref(v___y_6520_);
lean_dec_ref(v___y_6519_);
lean_dec(v___y_6517_);
lean_dec_ref(v___y_6514_);
lean_dec_ref(v___y_6513_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
v_a_6573_ = lean_ctor_get(v___x_6549_, 0);
v_isSharedCheck_6580_ = !lean_is_exclusive(v___x_6549_);
if (v_isSharedCheck_6580_ == 0)
{
v___x_6575_ = v___x_6549_;
v_isShared_6576_ = v_isSharedCheck_6580_;
goto v_resetjp_6574_;
}
else
{
lean_inc(v_a_6573_);
lean_dec(v___x_6549_);
v___x_6575_ = lean_box(0);
v_isShared_6576_ = v_isSharedCheck_6580_;
goto v_resetjp_6574_;
}
v_resetjp_6574_:
{
lean_object* v___x_6578_; 
if (v_isShared_6576_ == 0)
{
v___x_6578_ = v___x_6575_;
goto v_reusejp_6577_;
}
else
{
lean_object* v_reuseFailAlloc_6579_; 
v_reuseFailAlloc_6579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6579_, 0, v_a_6573_);
v___x_6578_ = v_reuseFailAlloc_6579_;
goto v_reusejp_6577_;
}
v_reusejp_6577_:
{
return v___x_6578_;
}
}
}
}
else
{
lean_object* v_a_6581_; lean_object* v___x_6583_; uint8_t v_isShared_6584_; uint8_t v_isSharedCheck_6588_; 
lean_dec_ref(v___y_6521_);
lean_dec_ref(v___y_6520_);
lean_dec_ref(v___y_6519_);
lean_dec(v___y_6517_);
lean_dec_ref(v___y_6514_);
lean_dec_ref(v___y_6513_);
lean_dec_ref(v_remaining_6508_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
v_a_6581_ = lean_ctor_get(v___x_6546_, 0);
v_isSharedCheck_6588_ = !lean_is_exclusive(v___x_6546_);
if (v_isSharedCheck_6588_ == 0)
{
v___x_6583_ = v___x_6546_;
v_isShared_6584_ = v_isSharedCheck_6588_;
goto v_resetjp_6582_;
}
else
{
lean_inc(v_a_6581_);
lean_dec(v___x_6546_);
v___x_6583_ = lean_box(0);
v_isShared_6584_ = v_isSharedCheck_6588_;
goto v_resetjp_6582_;
}
v_resetjp_6582_:
{
lean_object* v___x_6586_; 
if (v_isShared_6584_ == 0)
{
v___x_6586_ = v___x_6583_;
goto v_reusejp_6585_;
}
else
{
lean_object* v_reuseFailAlloc_6587_; 
v_reuseFailAlloc_6587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6587_, 0, v_a_6581_);
v___x_6586_ = v_reuseFailAlloc_6587_;
goto v_reusejp_6585_;
}
v_reusejp_6585_:
{
return v___x_6586_;
}
}
}
}
else
{
lean_object* v_a_6589_; lean_object* v___x_6591_; uint8_t v_isShared_6592_; uint8_t v_isSharedCheck_6596_; 
lean_dec_ref(v___y_6521_);
lean_dec_ref(v___y_6520_);
lean_dec_ref(v___y_6519_);
lean_dec(v___y_6517_);
lean_dec(v___y_6516_);
lean_dec(v___y_6515_);
lean_dec_ref(v___y_6514_);
lean_dec_ref(v___y_6513_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
lean_dec_ref(v_matcherApp_6487_);
v_a_6589_ = lean_ctor_get(v___x_6535_, 0);
v_isSharedCheck_6596_ = !lean_is_exclusive(v___x_6535_);
if (v_isSharedCheck_6596_ == 0)
{
v___x_6591_ = v___x_6535_;
v_isShared_6592_ = v_isSharedCheck_6596_;
goto v_resetjp_6590_;
}
else
{
lean_inc(v_a_6589_);
lean_dec(v___x_6535_);
v___x_6591_ = lean_box(0);
v_isShared_6592_ = v_isSharedCheck_6596_;
goto v_resetjp_6590_;
}
v_resetjp_6590_:
{
lean_object* v___x_6594_; 
if (v_isShared_6592_ == 0)
{
v___x_6594_ = v___x_6591_;
goto v_reusejp_6593_;
}
else
{
lean_object* v_reuseFailAlloc_6595_; 
v_reuseFailAlloc_6595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6595_, 0, v_a_6589_);
v___x_6594_ = v_reuseFailAlloc_6595_;
goto v_reusejp_6593_;
}
v_reusejp_6593_:
{
return v___x_6594_;
}
}
}
}
else
{
lean_object* v_a_6597_; lean_object* v___x_6599_; uint8_t v_isShared_6600_; uint8_t v_isSharedCheck_6604_; 
lean_dec_ref(v_aux_6527_);
lean_dec_ref(v___y_6521_);
lean_dec_ref(v___y_6520_);
lean_dec_ref(v___y_6519_);
lean_dec(v___y_6517_);
lean_dec(v___y_6516_);
lean_dec(v___y_6515_);
lean_dec_ref(v___y_6514_);
lean_dec_ref(v___y_6513_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
lean_dec_ref(v_matcherApp_6487_);
v_a_6597_ = lean_ctor_get(v___x_6533_, 0);
v_isSharedCheck_6604_ = !lean_is_exclusive(v___x_6533_);
if (v_isSharedCheck_6604_ == 0)
{
v___x_6599_ = v___x_6533_;
v_isShared_6600_ = v_isSharedCheck_6604_;
goto v_resetjp_6598_;
}
else
{
lean_inc(v_a_6597_);
lean_dec(v___x_6533_);
v___x_6599_ = lean_box(0);
v_isShared_6600_ = v_isSharedCheck_6604_;
goto v_resetjp_6598_;
}
v_resetjp_6598_:
{
lean_object* v___x_6602_; 
if (v_isShared_6600_ == 0)
{
v___x_6602_ = v___x_6599_;
goto v_reusejp_6601_;
}
else
{
lean_object* v_reuseFailAlloc_6603_; 
v_reuseFailAlloc_6603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6603_, 0, v_a_6597_);
v___x_6602_ = v_reuseFailAlloc_6603_;
goto v_reusejp_6601_;
}
v_reusejp_6601_:
{
return v___x_6602_;
}
}
}
}
v___jp_6606_:
{
lean_object* v___x_6619_; lean_object* v_remaining_x27_6620_; lean_object* v___x_6621_; lean_object* v___x_6622_; lean_object* v___x_6623_; lean_object* v___x_6624_; lean_object* v___x_6625_; lean_object* v___x_6626_; size_t v_sz_6627_; lean_object* v___x_6628_; 
v___x_6619_ = lean_unsigned_to_nat(0u);
v_remaining_x27_6620_ = lean_obj_once(&l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0, &l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0_once, _init_l_Lean_Meta_MatcherApp_refineThrough___lam__0___closed__0);
v___x_6621_ = l_Array_reverse___redArg(v___y_6613_);
v___x_6622_ = lean_array_get_size(v___x_6621_);
v___x_6623_ = l_Array_toSubarray___redArg(v___x_6621_, v___x_6619_, v___x_6622_);
lean_inc_ref(v___y_6612_);
v___x_6624_ = l_Array_reverse___redArg(v___y_6612_);
v___x_6625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6625_, 0, v___x_6619_);
lean_ctor_set(v___x_6625_, 1, v___x_6623_);
v___x_6626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6626_, 0, v_remaining_x27_6620_);
lean_ctor_set(v___x_6626_, 1, v___x_6625_);
v_sz_6627_ = lean_array_size(v___x_6624_);
v___x_6628_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__8(v___x_6624_, v_sz_6627_, v___y_6608_, v___x_6626_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_);
lean_dec_ref(v___x_6624_);
if (lean_obj_tag(v___x_6628_) == 0)
{
lean_object* v_a_6629_; lean_object* v_snd_6630_; 
v_a_6629_ = lean_ctor_get(v___x_6628_, 0);
lean_inc(v_a_6629_);
lean_dec_ref(v___x_6628_);
v_snd_6630_ = lean_ctor_get(v_a_6629_, 1);
lean_inc(v_snd_6630_);
if (v_useSplitter_6488_ == 0)
{
lean_object* v_fst_6631_; lean_object* v_fst_6632_; 
lean_dec(v___y_6607_);
v_fst_6631_ = lean_ctor_get(v_a_6629_, 0);
lean_inc(v_fst_6631_);
lean_dec(v_a_6629_);
v_fst_6632_ = lean_ctor_get(v_snd_6630_, 0);
lean_inc(v_fst_6632_);
lean_dec(v_snd_6630_);
v___y_6510_ = v___y_6617_;
v___y_6511_ = v___y_6615_;
v___y_6512_ = v_remaining_x27_6620_;
v___y_6513_ = v___y_6612_;
v___y_6514_ = v_matcherLevels_6614_;
v___y_6515_ = v_fst_6632_;
v___y_6516_ = v___x_6619_;
v___y_6517_ = v_fst_6631_;
v___y_6518_ = v___y_6616_;
v___y_6519_ = v___y_6610_;
v___y_6520_ = v___y_6609_;
v___y_6521_ = v___y_6611_;
v___y_6522_ = v___y_6618_;
goto v___jp_6509_;
}
else
{
if (v_isCasesOn_6605_ == 0)
{
lean_object* v___x_6634_; uint8_t v_isShared_6635_; uint8_t v_isSharedCheck_6789_; 
v_isSharedCheck_6789_ = !lean_is_exclusive(v_matcherApp_6487_);
if (v_isSharedCheck_6789_ == 0)
{
lean_object* v_unused_6790_; lean_object* v_unused_6791_; lean_object* v_unused_6792_; lean_object* v_unused_6793_; lean_object* v_unused_6794_; lean_object* v_unused_6795_; lean_object* v_unused_6796_; lean_object* v_unused_6797_; 
v_unused_6790_ = lean_ctor_get(v_matcherApp_6487_, 7);
lean_dec(v_unused_6790_);
v_unused_6791_ = lean_ctor_get(v_matcherApp_6487_, 6);
lean_dec(v_unused_6791_);
v_unused_6792_ = lean_ctor_get(v_matcherApp_6487_, 5);
lean_dec(v_unused_6792_);
v_unused_6793_ = lean_ctor_get(v_matcherApp_6487_, 4);
lean_dec(v_unused_6793_);
v_unused_6794_ = lean_ctor_get(v_matcherApp_6487_, 3);
lean_dec(v_unused_6794_);
v_unused_6795_ = lean_ctor_get(v_matcherApp_6487_, 2);
lean_dec(v_unused_6795_);
v_unused_6796_ = lean_ctor_get(v_matcherApp_6487_, 1);
lean_dec(v_unused_6796_);
v_unused_6797_ = lean_ctor_get(v_matcherApp_6487_, 0);
lean_dec(v_unused_6797_);
v___x_6634_ = v_matcherApp_6487_;
v_isShared_6635_ = v_isSharedCheck_6789_;
goto v_resetjp_6633_;
}
else
{
lean_dec(v_matcherApp_6487_);
v___x_6634_ = lean_box(0);
v_isShared_6635_ = v_isSharedCheck_6789_;
goto v_resetjp_6633_;
}
v_resetjp_6633_:
{
lean_object* v_fst_6636_; lean_object* v___x_6638_; uint8_t v_isShared_6639_; uint8_t v_isSharedCheck_6787_; 
v_fst_6636_ = lean_ctor_get(v_a_6629_, 0);
v_isSharedCheck_6787_ = !lean_is_exclusive(v_a_6629_);
if (v_isSharedCheck_6787_ == 0)
{
lean_object* v_unused_6788_; 
v_unused_6788_ = lean_ctor_get(v_a_6629_, 1);
lean_dec(v_unused_6788_);
v___x_6638_ = v_a_6629_;
v_isShared_6639_ = v_isSharedCheck_6787_;
goto v_resetjp_6637_;
}
else
{
lean_inc(v_fst_6636_);
lean_dec(v_a_6629_);
v___x_6638_ = lean_box(0);
v_isShared_6639_ = v_isSharedCheck_6787_;
goto v_resetjp_6637_;
}
v_resetjp_6637_:
{
lean_object* v_fst_6640_; lean_object* v___x_6642_; uint8_t v_isShared_6643_; uint8_t v_isSharedCheck_6785_; 
v_fst_6640_ = lean_ctor_get(v_snd_6630_, 0);
v_isSharedCheck_6785_ = !lean_is_exclusive(v_snd_6630_);
if (v_isSharedCheck_6785_ == 0)
{
lean_object* v_unused_6786_; 
v_unused_6786_ = lean_ctor_get(v_snd_6630_, 1);
lean_dec(v_unused_6786_);
v___x_6642_ = v_snd_6630_;
v_isShared_6643_ = v_isSharedCheck_6785_;
goto v_resetjp_6641_;
}
else
{
lean_inc(v_fst_6640_);
lean_dec(v_snd_6630_);
v___x_6642_ = lean_box(0);
v_isShared_6643_ = v_isSharedCheck_6785_;
goto v_resetjp_6641_;
}
v_resetjp_6641_:
{
lean_object* v___x_6644_; lean_object* v___x_6645_; lean_object* v_aux1_6646_; lean_object* v_aux1_6647_; lean_object* v_aux1_6648_; lean_object* v___x_6649_; lean_object* v___x_6650_; lean_object* v___x_6651_; lean_object* v___x_6652_; lean_object* v___x_6653_; lean_object* v___f_6654_; lean_object* v___x_6655_; lean_object* v___x_6656_; 
lean_inc_ref(v_matcherLevels_6614_);
v___x_6644_ = lean_array_to_list(v_matcherLevels_6614_);
lean_inc(v___x_6644_);
lean_inc(v_matcherName_6502_);
v___x_6645_ = l_Lean_mkConst(v_matcherName_6502_, v___x_6644_);
v_aux1_6646_ = l_Lean_mkAppN(v___x_6645_, v___y_6611_);
lean_inc_ref(v___y_6609_);
v_aux1_6647_ = l_Lean_Expr_app___override(v_aux1_6646_, v___y_6609_);
v_aux1_6648_ = l_Lean_mkAppN(v_aux1_6647_, v___y_6612_);
v___x_6649_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__3);
lean_inc_ref_n(v_aux1_6648_, 2);
v___x_6650_ = l_Lean_indentExpr(v_aux1_6648_);
v___x_6651_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6651_, 0, v___x_6649_);
lean_ctor_set(v___x_6651_, 1, v___x_6650_);
v___x_6652_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5, &l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__56___closed__5);
v___x_6653_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6653_, 0, v___x_6651_);
lean_ctor_set(v___x_6653_, 1, v___x_6652_);
v___f_6654_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6654_, 0, v___x_6653_);
v___x_6655_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_6655_, 0, v_aux1_6648_);
v___x_6656_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6655_, v___f_6654_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_);
if (lean_obj_tag(v___x_6656_) == 0)
{
lean_object* v___x_6657_; lean_object* v___x_6658_; 
lean_dec_ref(v___x_6656_);
v___x_6657_ = lean_array_get_size(v_alts_6507_);
v___x_6658_ = l_Lean_Meta_inferArgumentTypesN(v___x_6657_, v_aux1_6648_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_);
if (lean_obj_tag(v___x_6658_) == 0)
{
lean_object* v_a_6659_; lean_object* v___x_6660_; 
v_a_6659_ = lean_ctor_get(v___x_6658_, 0);
lean_inc(v_a_6659_);
lean_dec_ref(v___x_6658_);
lean_inc(v___y_6618_);
lean_inc_ref(v___y_6617_);
lean_inc(v___y_6616_);
lean_inc_ref(v___y_6615_);
v___x_6660_ = lean_get_match_equations_for(v_matcherName_6502_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_);
if (lean_obj_tag(v___x_6660_) == 0)
{
lean_object* v_a_6661_; lean_object* v_splitterName_6662_; lean_object* v_splitterMatchInfo_6663_; lean_object* v___x_6664_; lean_object* v_aux2_6665_; lean_object* v_aux2_6666_; lean_object* v_aux2_6667_; lean_object* v___x_6668_; lean_object* v___x_6669_; lean_object* v___x_6670_; lean_object* v___x_6671_; lean_object* v___f_6672_; lean_object* v___x_6673_; lean_object* v___x_6674_; 
v_a_6661_ = lean_ctor_get(v___x_6660_, 0);
lean_inc(v_a_6661_);
lean_dec_ref(v___x_6660_);
v_splitterName_6662_ = lean_ctor_get(v_a_6661_, 1);
lean_inc_n(v_splitterName_6662_, 2);
v_splitterMatchInfo_6663_ = lean_ctor_get(v_a_6661_, 2);
lean_inc_ref(v_splitterMatchInfo_6663_);
lean_dec(v_a_6661_);
v___x_6664_ = l_Lean_mkConst(v_splitterName_6662_, v___x_6644_);
v_aux2_6665_ = l_Lean_mkAppN(v___x_6664_, v___y_6611_);
lean_inc_ref(v___y_6609_);
v_aux2_6666_ = l_Lean_Expr_app___override(v_aux2_6665_, v___y_6609_);
v_aux2_6667_ = l_Lean_mkAppN(v_aux2_6666_, v___y_6612_);
v___x_6668_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1, &l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___redArg___lam__53___closed__1);
lean_inc_ref_n(v_aux2_6667_, 2);
v___x_6669_ = l_Lean_indentExpr(v_aux2_6667_);
v___x_6670_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6670_, 0, v___x_6668_);
lean_ctor_set(v___x_6670_, 1, v___x_6669_);
v___x_6671_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6671_, 0, v___x_6670_);
lean_ctor_set(v___x_6671_, 1, v___x_6652_);
v___f_6672_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___redArg___lam__32), 2, 1);
lean_closure_set(v___f_6672_, 0, v___x_6671_);
v___x_6673_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 6, 1);
lean_closure_set(v___x_6673_, 0, v_aux2_6667_);
v___x_6674_ = l_Lean_Meta_mapErrorImp___redArg(v___x_6673_, v___f_6672_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_);
if (lean_obj_tag(v___x_6674_) == 0)
{
lean_object* v___x_6675_; 
lean_dec_ref(v___x_6674_);
v___x_6675_ = l_Lean_Meta_inferArgumentTypesN(v___x_6657_, v_aux2_6667_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_);
if (lean_obj_tag(v___x_6675_) == 0)
{
lean_object* v_a_6676_; lean_object* v_numParams_6677_; lean_object* v_numDiscrs_6678_; lean_object* v_altInfos_6679_; lean_object* v_uElimPos_x3f_6680_; lean_object* v_overlaps_6681_; lean_object* v_altInfos_6682_; lean_object* v___x_6684_; uint8_t v_isShared_6685_; uint8_t v_isSharedCheck_6739_; 
v_a_6676_ = lean_ctor_get(v___x_6675_, 0);
lean_inc(v_a_6676_);
lean_dec_ref(v___x_6675_);
v_numParams_6677_ = lean_ctor_get(v_toMatcherInfo_6501_, 0);
lean_inc(v_numParams_6677_);
v_numDiscrs_6678_ = lean_ctor_get(v_toMatcherInfo_6501_, 1);
lean_inc(v_numDiscrs_6678_);
v_altInfos_6679_ = lean_ctor_get(v_toMatcherInfo_6501_, 2);
lean_inc_ref(v_altInfos_6679_);
v_uElimPos_x3f_6680_ = lean_ctor_get(v_toMatcherInfo_6501_, 3);
lean_inc(v_uElimPos_x3f_6680_);
v_overlaps_6681_ = lean_ctor_get(v_toMatcherInfo_6501_, 5);
lean_inc_ref(v_overlaps_6681_);
lean_dec_ref(v_toMatcherInfo_6501_);
v_altInfos_6682_ = lean_ctor_get(v_splitterMatchInfo_6663_, 2);
v_isSharedCheck_6739_ = !lean_is_exclusive(v_splitterMatchInfo_6663_);
if (v_isSharedCheck_6739_ == 0)
{
lean_object* v_unused_6740_; lean_object* v_unused_6741_; lean_object* v_unused_6742_; lean_object* v_unused_6743_; lean_object* v_unused_6744_; 
v_unused_6740_ = lean_ctor_get(v_splitterMatchInfo_6663_, 5);
lean_dec(v_unused_6740_);
v_unused_6741_ = lean_ctor_get(v_splitterMatchInfo_6663_, 4);
lean_dec(v_unused_6741_);
v_unused_6742_ = lean_ctor_get(v_splitterMatchInfo_6663_, 3);
lean_dec(v_unused_6742_);
v_unused_6743_ = lean_ctor_get(v_splitterMatchInfo_6663_, 1);
lean_dec(v_unused_6743_);
v_unused_6744_ = lean_ctor_get(v_splitterMatchInfo_6663_, 0);
lean_dec(v_unused_6744_);
v___x_6684_ = v_splitterMatchInfo_6663_;
v_isShared_6685_ = v_isSharedCheck_6739_;
goto v_resetjp_6683_;
}
else
{
lean_inc(v_altInfos_6682_);
lean_dec(v_splitterMatchInfo_6663_);
v___x_6684_ = lean_box(0);
v_isShared_6685_ = v_isSharedCheck_6739_;
goto v_resetjp_6683_;
}
v_resetjp_6683_:
{
lean_object* v___x_6686_; lean_object* v___x_6687_; lean_object* v___x_6688_; lean_object* v___x_6689_; lean_object* v___x_6690_; lean_object* v___x_6691_; lean_object* v___x_6692_; lean_object* v___x_6693_; lean_object* v___x_6694_; lean_object* v___x_6696_; 
v___x_6686_ = lean_array_get_size(v_altInfos_6679_);
v___x_6687_ = lean_array_get_size(v_altInfos_6682_);
v___x_6688_ = lean_array_get_size(v_a_6659_);
v___x_6689_ = lean_array_get_size(v_a_6676_);
v___x_6690_ = l_Array_toSubarray___redArg(v_alts_6507_, v___x_6619_, v___x_6657_);
lean_inc_ref(v_altInfos_6679_);
v___x_6691_ = l_Array_toSubarray___redArg(v_altInfos_6679_, v___x_6619_, v___x_6686_);
v___x_6692_ = l_Array_toSubarray___redArg(v_altInfos_6682_, v___x_6619_, v___x_6687_);
v___x_6693_ = l_Array_toSubarray___redArg(v_a_6659_, v___x_6619_, v___x_6688_);
v___x_6694_ = l_Array_toSubarray___redArg(v_a_6676_, v___x_6619_, v___x_6689_);
if (v_isShared_6643_ == 0)
{
lean_ctor_set(v___x_6642_, 1, v___x_6694_);
lean_ctor_set(v___x_6642_, 0, v___x_6693_);
v___x_6696_ = v___x_6642_;
goto v_reusejp_6695_;
}
else
{
lean_object* v_reuseFailAlloc_6738_; 
v_reuseFailAlloc_6738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6738_, 0, v___x_6693_);
lean_ctor_set(v_reuseFailAlloc_6738_, 1, v___x_6694_);
v___x_6696_ = v_reuseFailAlloc_6738_;
goto v_reusejp_6695_;
}
v_reusejp_6695_:
{
lean_object* v___x_6698_; 
if (v_isShared_6639_ == 0)
{
lean_ctor_set(v___x_6638_, 1, v___x_6696_);
lean_ctor_set(v___x_6638_, 0, v___x_6692_);
v___x_6698_ = v___x_6638_;
goto v_reusejp_6697_;
}
else
{
lean_object* v_reuseFailAlloc_6737_; 
v_reuseFailAlloc_6737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6737_, 0, v___x_6692_);
lean_ctor_set(v_reuseFailAlloc_6737_, 1, v___x_6696_);
v___x_6698_ = v_reuseFailAlloc_6737_;
goto v_reusejp_6697_;
}
v_reusejp_6697_:
{
lean_object* v___x_6699_; lean_object* v___x_6700_; lean_object* v___x_6701_; lean_object* v___x_6702_; 
v___x_6699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6699_, 0, v___x_6691_);
lean_ctor_set(v___x_6699_, 1, v___x_6698_);
v___x_6700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6700_, 0, v___x_6690_);
lean_ctor_set(v___x_6700_, 1, v___x_6699_);
v___x_6701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6701_, 0, v_remaining_x27_6620_);
lean_ctor_set(v___x_6701_, 1, v___x_6700_);
v___x_6702_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v___x_6657_, v_onAlt_6492_, v_useSplitter_6488_, v_fst_6640_, v___y_6607_, v___x_6619_, v___x_6701_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_);
if (lean_obj_tag(v___x_6702_) == 0)
{
lean_object* v_a_6703_; lean_object* v_fst_6704_; lean_object* v___x_6705_; 
v_a_6703_ = lean_ctor_get(v___x_6702_, 0);
lean_inc(v_a_6703_);
lean_dec_ref(v___x_6702_);
v_fst_6704_ = lean_ctor_get(v_a_6703_, 0);
lean_inc(v_fst_6704_);
lean_dec(v_a_6703_);
lean_inc(v___y_6618_);
lean_inc_ref(v___y_6617_);
lean_inc(v___y_6616_);
lean_inc_ref(v___y_6615_);
v___x_6705_ = lean_apply_6(v_onRemaining_6493_, v_remaining_6508_, v___y_6615_, v___y_6616_, v___y_6617_, v___y_6618_, lean_box(0));
if (lean_obj_tag(v___x_6705_) == 0)
{
lean_object* v_a_6706_; lean_object* v___x_6708_; uint8_t v_isShared_6709_; uint8_t v_isSharedCheck_6720_; 
v_a_6706_ = lean_ctor_get(v___x_6705_, 0);
v_isSharedCheck_6720_ = !lean_is_exclusive(v___x_6705_);
if (v_isSharedCheck_6720_ == 0)
{
v___x_6708_ = v___x_6705_;
v_isShared_6709_ = v_isSharedCheck_6720_;
goto v_resetjp_6707_;
}
else
{
lean_inc(v_a_6706_);
lean_dec(v___x_6705_);
v___x_6708_ = lean_box(0);
v_isShared_6709_ = v_isSharedCheck_6720_;
goto v_resetjp_6707_;
}
v_resetjp_6707_:
{
lean_object* v_remaining_x27_6710_; lean_object* v___x_6712_; 
v_remaining_x27_6710_ = l_Array_append___redArg(v_fst_6636_, v_a_6706_);
lean_dec(v_a_6706_);
if (v_isShared_6685_ == 0)
{
lean_ctor_set(v___x_6684_, 5, v_overlaps_6681_);
lean_ctor_set(v___x_6684_, 4, v___y_6610_);
lean_ctor_set(v___x_6684_, 3, v_uElimPos_x3f_6680_);
lean_ctor_set(v___x_6684_, 2, v_altInfos_6679_);
lean_ctor_set(v___x_6684_, 1, v_numDiscrs_6678_);
lean_ctor_set(v___x_6684_, 0, v_numParams_6677_);
v___x_6712_ = v___x_6684_;
goto v_reusejp_6711_;
}
else
{
lean_object* v_reuseFailAlloc_6719_; 
v_reuseFailAlloc_6719_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_6719_, 0, v_numParams_6677_);
lean_ctor_set(v_reuseFailAlloc_6719_, 1, v_numDiscrs_6678_);
lean_ctor_set(v_reuseFailAlloc_6719_, 2, v_altInfos_6679_);
lean_ctor_set(v_reuseFailAlloc_6719_, 3, v_uElimPos_x3f_6680_);
lean_ctor_set(v_reuseFailAlloc_6719_, 4, v___y_6610_);
lean_ctor_set(v_reuseFailAlloc_6719_, 5, v_overlaps_6681_);
v___x_6712_ = v_reuseFailAlloc_6719_;
goto v_reusejp_6711_;
}
v_reusejp_6711_:
{
lean_object* v___x_6714_; 
if (v_isShared_6635_ == 0)
{
lean_ctor_set(v___x_6634_, 7, v_remaining_x27_6710_);
lean_ctor_set(v___x_6634_, 6, v_fst_6704_);
lean_ctor_set(v___x_6634_, 5, v___y_6612_);
lean_ctor_set(v___x_6634_, 4, v___y_6609_);
lean_ctor_set(v___x_6634_, 3, v___y_6611_);
lean_ctor_set(v___x_6634_, 2, v_matcherLevels_6614_);
lean_ctor_set(v___x_6634_, 1, v_splitterName_6662_);
lean_ctor_set(v___x_6634_, 0, v___x_6712_);
v___x_6714_ = v___x_6634_;
goto v_reusejp_6713_;
}
else
{
lean_object* v_reuseFailAlloc_6718_; 
v_reuseFailAlloc_6718_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_6718_, 0, v___x_6712_);
lean_ctor_set(v_reuseFailAlloc_6718_, 1, v_splitterName_6662_);
lean_ctor_set(v_reuseFailAlloc_6718_, 2, v_matcherLevels_6614_);
lean_ctor_set(v_reuseFailAlloc_6718_, 3, v___y_6611_);
lean_ctor_set(v_reuseFailAlloc_6718_, 4, v___y_6609_);
lean_ctor_set(v_reuseFailAlloc_6718_, 5, v___y_6612_);
lean_ctor_set(v_reuseFailAlloc_6718_, 6, v_fst_6704_);
lean_ctor_set(v_reuseFailAlloc_6718_, 7, v_remaining_x27_6710_);
v___x_6714_ = v_reuseFailAlloc_6718_;
goto v_reusejp_6713_;
}
v_reusejp_6713_:
{
lean_object* v___x_6716_; 
if (v_isShared_6709_ == 0)
{
lean_ctor_set(v___x_6708_, 0, v___x_6714_);
v___x_6716_ = v___x_6708_;
goto v_reusejp_6715_;
}
else
{
lean_object* v_reuseFailAlloc_6717_; 
v_reuseFailAlloc_6717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6717_, 0, v___x_6714_);
v___x_6716_ = v_reuseFailAlloc_6717_;
goto v_reusejp_6715_;
}
v_reusejp_6715_:
{
return v___x_6716_;
}
}
}
}
}
else
{
lean_object* v_a_6721_; lean_object* v___x_6723_; uint8_t v_isShared_6724_; uint8_t v_isSharedCheck_6728_; 
lean_dec(v_fst_6704_);
lean_del_object(v___x_6684_);
lean_dec_ref(v_overlaps_6681_);
lean_dec(v_uElimPos_x3f_6680_);
lean_dec_ref(v_altInfos_6679_);
lean_dec(v_numDiscrs_6678_);
lean_dec(v_numParams_6677_);
lean_dec(v_splitterName_6662_);
lean_dec(v_fst_6636_);
lean_del_object(v___x_6634_);
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
v_a_6721_ = lean_ctor_get(v___x_6705_, 0);
v_isSharedCheck_6728_ = !lean_is_exclusive(v___x_6705_);
if (v_isSharedCheck_6728_ == 0)
{
v___x_6723_ = v___x_6705_;
v_isShared_6724_ = v_isSharedCheck_6728_;
goto v_resetjp_6722_;
}
else
{
lean_inc(v_a_6721_);
lean_dec(v___x_6705_);
v___x_6723_ = lean_box(0);
v_isShared_6724_ = v_isSharedCheck_6728_;
goto v_resetjp_6722_;
}
v_resetjp_6722_:
{
lean_object* v___x_6726_; 
if (v_isShared_6724_ == 0)
{
v___x_6726_ = v___x_6723_;
goto v_reusejp_6725_;
}
else
{
lean_object* v_reuseFailAlloc_6727_; 
v_reuseFailAlloc_6727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6727_, 0, v_a_6721_);
v___x_6726_ = v_reuseFailAlloc_6727_;
goto v_reusejp_6725_;
}
v_reusejp_6725_:
{
return v___x_6726_;
}
}
}
}
else
{
lean_object* v_a_6729_; lean_object* v___x_6731_; uint8_t v_isShared_6732_; uint8_t v_isSharedCheck_6736_; 
lean_del_object(v___x_6684_);
lean_dec_ref(v_overlaps_6681_);
lean_dec(v_uElimPos_x3f_6680_);
lean_dec_ref(v_altInfos_6679_);
lean_dec(v_numDiscrs_6678_);
lean_dec(v_numParams_6677_);
lean_dec(v_splitterName_6662_);
lean_dec(v_fst_6636_);
lean_del_object(v___x_6634_);
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_onRemaining_6493_);
v_a_6729_ = lean_ctor_get(v___x_6702_, 0);
v_isSharedCheck_6736_ = !lean_is_exclusive(v___x_6702_);
if (v_isSharedCheck_6736_ == 0)
{
v___x_6731_ = v___x_6702_;
v_isShared_6732_ = v_isSharedCheck_6736_;
goto v_resetjp_6730_;
}
else
{
lean_inc(v_a_6729_);
lean_dec(v___x_6702_);
v___x_6731_ = lean_box(0);
v_isShared_6732_ = v_isSharedCheck_6736_;
goto v_resetjp_6730_;
}
v_resetjp_6730_:
{
lean_object* v___x_6734_; 
if (v_isShared_6732_ == 0)
{
v___x_6734_ = v___x_6731_;
goto v_reusejp_6733_;
}
else
{
lean_object* v_reuseFailAlloc_6735_; 
v_reuseFailAlloc_6735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6735_, 0, v_a_6729_);
v___x_6734_ = v_reuseFailAlloc_6735_;
goto v_reusejp_6733_;
}
v_reusejp_6733_:
{
return v___x_6734_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_6745_; lean_object* v___x_6747_; uint8_t v_isShared_6748_; uint8_t v_isSharedCheck_6752_; 
lean_dec_ref(v_splitterMatchInfo_6663_);
lean_dec(v_splitterName_6662_);
lean_dec(v_a_6659_);
lean_del_object(v___x_6642_);
lean_dec(v_fst_6640_);
lean_del_object(v___x_6638_);
lean_dec(v_fst_6636_);
lean_del_object(v___x_6634_);
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
lean_dec(v___y_6607_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
v_a_6745_ = lean_ctor_get(v___x_6675_, 0);
v_isSharedCheck_6752_ = !lean_is_exclusive(v___x_6675_);
if (v_isSharedCheck_6752_ == 0)
{
v___x_6747_ = v___x_6675_;
v_isShared_6748_ = v_isSharedCheck_6752_;
goto v_resetjp_6746_;
}
else
{
lean_inc(v_a_6745_);
lean_dec(v___x_6675_);
v___x_6747_ = lean_box(0);
v_isShared_6748_ = v_isSharedCheck_6752_;
goto v_resetjp_6746_;
}
v_resetjp_6746_:
{
lean_object* v___x_6750_; 
if (v_isShared_6748_ == 0)
{
v___x_6750_ = v___x_6747_;
goto v_reusejp_6749_;
}
else
{
lean_object* v_reuseFailAlloc_6751_; 
v_reuseFailAlloc_6751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6751_, 0, v_a_6745_);
v___x_6750_ = v_reuseFailAlloc_6751_;
goto v_reusejp_6749_;
}
v_reusejp_6749_:
{
return v___x_6750_;
}
}
}
}
else
{
lean_object* v_a_6753_; lean_object* v___x_6755_; uint8_t v_isShared_6756_; uint8_t v_isSharedCheck_6760_; 
lean_dec_ref(v_aux2_6667_);
lean_dec_ref(v_splitterMatchInfo_6663_);
lean_dec(v_splitterName_6662_);
lean_dec(v_a_6659_);
lean_del_object(v___x_6642_);
lean_dec(v_fst_6640_);
lean_del_object(v___x_6638_);
lean_dec(v_fst_6636_);
lean_del_object(v___x_6634_);
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
lean_dec(v___y_6607_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
v_a_6753_ = lean_ctor_get(v___x_6674_, 0);
v_isSharedCheck_6760_ = !lean_is_exclusive(v___x_6674_);
if (v_isSharedCheck_6760_ == 0)
{
v___x_6755_ = v___x_6674_;
v_isShared_6756_ = v_isSharedCheck_6760_;
goto v_resetjp_6754_;
}
else
{
lean_inc(v_a_6753_);
lean_dec(v___x_6674_);
v___x_6755_ = lean_box(0);
v_isShared_6756_ = v_isSharedCheck_6760_;
goto v_resetjp_6754_;
}
v_resetjp_6754_:
{
lean_object* v___x_6758_; 
if (v_isShared_6756_ == 0)
{
v___x_6758_ = v___x_6755_;
goto v_reusejp_6757_;
}
else
{
lean_object* v_reuseFailAlloc_6759_; 
v_reuseFailAlloc_6759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6759_, 0, v_a_6753_);
v___x_6758_ = v_reuseFailAlloc_6759_;
goto v_reusejp_6757_;
}
v_reusejp_6757_:
{
return v___x_6758_;
}
}
}
}
else
{
lean_object* v_a_6761_; lean_object* v___x_6763_; uint8_t v_isShared_6764_; uint8_t v_isSharedCheck_6768_; 
lean_dec(v_a_6659_);
lean_dec(v___x_6644_);
lean_del_object(v___x_6642_);
lean_dec(v_fst_6640_);
lean_del_object(v___x_6638_);
lean_dec(v_fst_6636_);
lean_del_object(v___x_6634_);
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
lean_dec(v___y_6607_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
v_a_6761_ = lean_ctor_get(v___x_6660_, 0);
v_isSharedCheck_6768_ = !lean_is_exclusive(v___x_6660_);
if (v_isSharedCheck_6768_ == 0)
{
v___x_6763_ = v___x_6660_;
v_isShared_6764_ = v_isSharedCheck_6768_;
goto v_resetjp_6762_;
}
else
{
lean_inc(v_a_6761_);
lean_dec(v___x_6660_);
v___x_6763_ = lean_box(0);
v_isShared_6764_ = v_isSharedCheck_6768_;
goto v_resetjp_6762_;
}
v_resetjp_6762_:
{
lean_object* v___x_6766_; 
if (v_isShared_6764_ == 0)
{
v___x_6766_ = v___x_6763_;
goto v_reusejp_6765_;
}
else
{
lean_object* v_reuseFailAlloc_6767_; 
v_reuseFailAlloc_6767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6767_, 0, v_a_6761_);
v___x_6766_ = v_reuseFailAlloc_6767_;
goto v_reusejp_6765_;
}
v_reusejp_6765_:
{
return v___x_6766_;
}
}
}
}
else
{
lean_object* v_a_6769_; lean_object* v___x_6771_; uint8_t v_isShared_6772_; uint8_t v_isSharedCheck_6776_; 
lean_dec(v___x_6644_);
lean_del_object(v___x_6642_);
lean_dec(v_fst_6640_);
lean_del_object(v___x_6638_);
lean_dec(v_fst_6636_);
lean_del_object(v___x_6634_);
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
lean_dec(v___y_6607_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
v_a_6769_ = lean_ctor_get(v___x_6658_, 0);
v_isSharedCheck_6776_ = !lean_is_exclusive(v___x_6658_);
if (v_isSharedCheck_6776_ == 0)
{
v___x_6771_ = v___x_6658_;
v_isShared_6772_ = v_isSharedCheck_6776_;
goto v_resetjp_6770_;
}
else
{
lean_inc(v_a_6769_);
lean_dec(v___x_6658_);
v___x_6771_ = lean_box(0);
v_isShared_6772_ = v_isSharedCheck_6776_;
goto v_resetjp_6770_;
}
v_resetjp_6770_:
{
lean_object* v___x_6774_; 
if (v_isShared_6772_ == 0)
{
v___x_6774_ = v___x_6771_;
goto v_reusejp_6773_;
}
else
{
lean_object* v_reuseFailAlloc_6775_; 
v_reuseFailAlloc_6775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6775_, 0, v_a_6769_);
v___x_6774_ = v_reuseFailAlloc_6775_;
goto v_reusejp_6773_;
}
v_reusejp_6773_:
{
return v___x_6774_;
}
}
}
}
else
{
lean_object* v_a_6777_; lean_object* v___x_6779_; uint8_t v_isShared_6780_; uint8_t v_isSharedCheck_6784_; 
lean_dec_ref(v_aux1_6648_);
lean_dec(v___x_6644_);
lean_del_object(v___x_6642_);
lean_dec(v_fst_6640_);
lean_del_object(v___x_6638_);
lean_dec(v_fst_6636_);
lean_del_object(v___x_6634_);
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
lean_dec(v___y_6607_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
v_a_6777_ = lean_ctor_get(v___x_6656_, 0);
v_isSharedCheck_6784_ = !lean_is_exclusive(v___x_6656_);
if (v_isSharedCheck_6784_ == 0)
{
v___x_6779_ = v___x_6656_;
v_isShared_6780_ = v_isSharedCheck_6784_;
goto v_resetjp_6778_;
}
else
{
lean_inc(v_a_6777_);
lean_dec(v___x_6656_);
v___x_6779_ = lean_box(0);
v_isShared_6780_ = v_isSharedCheck_6784_;
goto v_resetjp_6778_;
}
v_resetjp_6778_:
{
lean_object* v___x_6782_; 
if (v_isShared_6780_ == 0)
{
v___x_6782_ = v___x_6779_;
goto v_reusejp_6781_;
}
else
{
lean_object* v_reuseFailAlloc_6783_; 
v_reuseFailAlloc_6783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6783_, 0, v_a_6777_);
v___x_6782_ = v_reuseFailAlloc_6783_;
goto v_reusejp_6781_;
}
v_reusejp_6781_:
{
return v___x_6782_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_6798_; lean_object* v_fst_6799_; 
lean_dec(v___y_6607_);
v_fst_6798_ = lean_ctor_get(v_a_6629_, 0);
lean_inc(v_fst_6798_);
lean_dec(v_a_6629_);
v_fst_6799_ = lean_ctor_get(v_snd_6630_, 0);
lean_inc(v_fst_6799_);
lean_dec(v_snd_6630_);
v___y_6510_ = v___y_6617_;
v___y_6511_ = v___y_6615_;
v___y_6512_ = v_remaining_x27_6620_;
v___y_6513_ = v___y_6612_;
v___y_6514_ = v_matcherLevels_6614_;
v___y_6515_ = v_fst_6799_;
v___y_6516_ = v___x_6619_;
v___y_6517_ = v_fst_6798_;
v___y_6518_ = v___y_6616_;
v___y_6519_ = v___y_6610_;
v___y_6520_ = v___y_6609_;
v___y_6521_ = v___y_6611_;
v___y_6522_ = v___y_6618_;
goto v___jp_6509_;
}
}
}
else
{
lean_object* v_a_6800_; lean_object* v___x_6802_; uint8_t v_isShared_6803_; uint8_t v_isSharedCheck_6807_; 
lean_dec_ref(v_matcherLevels_6614_);
lean_dec_ref(v___y_6612_);
lean_dec_ref(v___y_6611_);
lean_dec_ref(v___y_6610_);
lean_dec_ref(v___y_6609_);
lean_dec(v___y_6607_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
lean_dec_ref(v_matcherApp_6487_);
v_a_6800_ = lean_ctor_get(v___x_6628_, 0);
v_isSharedCheck_6807_ = !lean_is_exclusive(v___x_6628_);
if (v_isSharedCheck_6807_ == 0)
{
v___x_6802_ = v___x_6628_;
v_isShared_6803_ = v_isSharedCheck_6807_;
goto v_resetjp_6801_;
}
else
{
lean_inc(v_a_6800_);
lean_dec(v___x_6628_);
v___x_6802_ = lean_box(0);
v_isShared_6803_ = v_isSharedCheck_6807_;
goto v_resetjp_6801_;
}
v_resetjp_6801_:
{
lean_object* v___x_6805_; 
if (v_isShared_6803_ == 0)
{
v___x_6805_ = v___x_6802_;
goto v_reusejp_6804_;
}
else
{
lean_object* v_reuseFailAlloc_6806_; 
v_reuseFailAlloc_6806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6806_, 0, v_a_6800_);
v___x_6805_ = v_reuseFailAlloc_6806_;
goto v_reusejp_6804_;
}
v_reusejp_6804_:
{
return v___x_6805_;
}
}
}
}
v___jp_6808_:
{
size_t v_sz_6814_; size_t v___x_6815_; lean_object* v___x_6816_; 
v_sz_6814_ = lean_array_size(v_params_6504_);
v___x_6815_ = ((size_t)0ULL);
lean_inc_ref(v_params_6504_);
lean_inc_ref(v_onParams_6490_);
v___x_6816_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6490_, v_sz_6814_, v___x_6815_, v_params_6504_, v___y_6810_, v___y_6811_, v___y_6812_, v___y_6813_);
if (lean_obj_tag(v___x_6816_) == 0)
{
lean_object* v_a_6817_; size_t v_sz_6818_; lean_object* v___x_6819_; 
v_a_6817_ = lean_ctor_get(v___x_6816_, 0);
lean_inc(v_a_6817_);
lean_dec_ref(v___x_6816_);
v_sz_6818_ = lean_array_size(v_discrs_6506_);
lean_inc_ref(v_discrs_6506_);
v___x_6819_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__6(v_onParams_6490_, v_sz_6818_, v___x_6815_, v_discrs_6506_, v___y_6810_, v___y_6811_, v___y_6812_, v___y_6813_);
if (lean_obj_tag(v___x_6819_) == 0)
{
lean_object* v_a_6820_; lean_object* v___x_6821_; lean_object* v___x_6822_; lean_object* v___f_6823_; uint8_t v___x_6824_; lean_object* v___x_6825_; 
v_a_6820_ = lean_ctor_get(v___x_6819_, 0);
lean_inc_n(v_a_6820_, 2);
lean_dec_ref(v___x_6819_);
v___x_6821_ = lean_box(v_addEqualities_6489_);
v___x_6822_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1;
lean_inc_ref(v_discrs_6506_);
lean_inc_ref(v_toMatcherInfo_6501_);
v___f_6823_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___lam__3___boxed), 13, 6);
lean_closure_set(v___f_6823_, 0, v_onMotive_6491_);
lean_closure_set(v___f_6823_, 1, v_toMatcherInfo_6501_);
lean_closure_set(v___f_6823_, 2, v_a_6820_);
lean_closure_set(v___f_6823_, 3, v___x_6821_);
lean_closure_set(v___f_6823_, 4, v___x_6822_);
lean_closure_set(v___f_6823_, 5, v_discrs_6506_);
v___x_6824_ = 0;
lean_inc_ref(v_motive_6505_);
v___x_6825_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Meta_MatcherApp_addArg_spec__1___redArg(v_motive_6505_, v___f_6823_, v___x_6824_, v___y_6810_, v___y_6811_, v___y_6812_, v___y_6813_);
if (lean_obj_tag(v___x_6825_) == 0)
{
lean_object* v_a_6826_; lean_object* v_snd_6827_; lean_object* v_snd_6828_; lean_object* v_uElimPos_x3f_6829_; 
v_a_6826_ = lean_ctor_get(v___x_6825_, 0);
lean_inc(v_a_6826_);
lean_dec_ref(v___x_6825_);
v_snd_6827_ = lean_ctor_get(v_a_6826_, 1);
v_snd_6828_ = lean_ctor_get(v_snd_6827_, 1);
lean_inc(v_snd_6828_);
v_uElimPos_x3f_6829_ = lean_ctor_get(v_toMatcherInfo_6501_, 3);
if (lean_obj_tag(v_uElimPos_x3f_6829_) == 0)
{
lean_object* v_fst_6830_; lean_object* v_fst_6831_; lean_object* v_snd_6832_; 
v_fst_6830_ = lean_ctor_get(v_a_6826_, 0);
lean_inc(v_fst_6830_);
lean_dec(v_a_6826_);
v_fst_6831_ = lean_ctor_get(v_snd_6828_, 0);
lean_inc(v_fst_6831_);
v_snd_6832_ = lean_ctor_get(v_snd_6828_, 1);
lean_inc(v_snd_6832_);
lean_dec(v_snd_6828_);
lean_inc_ref(v_matcherLevels_6503_);
v___y_6607_ = v_numDiscrEqs_6809_;
v___y_6608_ = v___x_6815_;
v___y_6609_ = v_fst_6830_;
v___y_6610_ = v_snd_6832_;
v___y_6611_ = v_a_6817_;
v___y_6612_ = v_a_6820_;
v___y_6613_ = v_fst_6831_;
v_matcherLevels_6614_ = v_matcherLevels_6503_;
v___y_6615_ = v___y_6810_;
v___y_6616_ = v___y_6811_;
v___y_6617_ = v___y_6812_;
v___y_6618_ = v___y_6813_;
goto v___jp_6606_;
}
else
{
lean_object* v_fst_6833_; lean_object* v_fst_6834_; lean_object* v_fst_6835_; lean_object* v_snd_6836_; lean_object* v_val_6837_; lean_object* v___x_6838_; 
lean_inc(v_snd_6827_);
v_fst_6833_ = lean_ctor_get(v_a_6826_, 0);
lean_inc(v_fst_6833_);
lean_dec(v_a_6826_);
v_fst_6834_ = lean_ctor_get(v_snd_6827_, 0);
lean_inc(v_fst_6834_);
lean_dec(v_snd_6827_);
v_fst_6835_ = lean_ctor_get(v_snd_6828_, 0);
lean_inc(v_fst_6835_);
v_snd_6836_ = lean_ctor_get(v_snd_6828_, 1);
lean_inc(v_snd_6836_);
lean_dec(v_snd_6828_);
v_val_6837_ = lean_ctor_get(v_uElimPos_x3f_6829_, 0);
lean_inc_ref(v_matcherLevels_6503_);
v___x_6838_ = lean_array_set(v_matcherLevels_6503_, v_val_6837_, v_fst_6834_);
v___y_6607_ = v_numDiscrEqs_6809_;
v___y_6608_ = v___x_6815_;
v___y_6609_ = v_fst_6833_;
v___y_6610_ = v_snd_6836_;
v___y_6611_ = v_a_6817_;
v___y_6612_ = v_a_6820_;
v___y_6613_ = v_fst_6835_;
v_matcherLevels_6614_ = v___x_6838_;
v___y_6615_ = v___y_6810_;
v___y_6616_ = v___y_6811_;
v___y_6617_ = v___y_6812_;
v___y_6618_ = v___y_6813_;
goto v___jp_6606_;
}
}
else
{
lean_object* v_a_6839_; lean_object* v___x_6841_; uint8_t v_isShared_6842_; uint8_t v_isSharedCheck_6846_; 
lean_dec(v_a_6820_);
lean_dec(v_a_6817_);
lean_dec(v_numDiscrEqs_6809_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
lean_dec_ref(v_matcherApp_6487_);
v_a_6839_ = lean_ctor_get(v___x_6825_, 0);
v_isSharedCheck_6846_ = !lean_is_exclusive(v___x_6825_);
if (v_isSharedCheck_6846_ == 0)
{
v___x_6841_ = v___x_6825_;
v_isShared_6842_ = v_isSharedCheck_6846_;
goto v_resetjp_6840_;
}
else
{
lean_inc(v_a_6839_);
lean_dec(v___x_6825_);
v___x_6841_ = lean_box(0);
v_isShared_6842_ = v_isSharedCheck_6846_;
goto v_resetjp_6840_;
}
v_resetjp_6840_:
{
lean_object* v___x_6844_; 
if (v_isShared_6842_ == 0)
{
v___x_6844_ = v___x_6841_;
goto v_reusejp_6843_;
}
else
{
lean_object* v_reuseFailAlloc_6845_; 
v_reuseFailAlloc_6845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6845_, 0, v_a_6839_);
v___x_6844_ = v_reuseFailAlloc_6845_;
goto v_reusejp_6843_;
}
v_reusejp_6843_:
{
return v___x_6844_;
}
}
}
}
else
{
lean_object* v_a_6847_; lean_object* v___x_6849_; uint8_t v_isShared_6850_; uint8_t v_isSharedCheck_6854_; 
lean_dec(v_a_6817_);
lean_dec(v_numDiscrEqs_6809_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
lean_dec_ref(v_onMotive_6491_);
lean_dec_ref(v_matcherApp_6487_);
v_a_6847_ = lean_ctor_get(v___x_6819_, 0);
v_isSharedCheck_6854_ = !lean_is_exclusive(v___x_6819_);
if (v_isSharedCheck_6854_ == 0)
{
v___x_6849_ = v___x_6819_;
v_isShared_6850_ = v_isSharedCheck_6854_;
goto v_resetjp_6848_;
}
else
{
lean_inc(v_a_6847_);
lean_dec(v___x_6819_);
v___x_6849_ = lean_box(0);
v_isShared_6850_ = v_isSharedCheck_6854_;
goto v_resetjp_6848_;
}
v_resetjp_6848_:
{
lean_object* v___x_6852_; 
if (v_isShared_6850_ == 0)
{
v___x_6852_ = v___x_6849_;
goto v_reusejp_6851_;
}
else
{
lean_object* v_reuseFailAlloc_6853_; 
v_reuseFailAlloc_6853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6853_, 0, v_a_6847_);
v___x_6852_ = v_reuseFailAlloc_6853_;
goto v_reusejp_6851_;
}
v_reusejp_6851_:
{
return v___x_6852_;
}
}
}
}
else
{
lean_object* v_a_6855_; lean_object* v___x_6857_; uint8_t v_isShared_6858_; uint8_t v_isSharedCheck_6862_; 
lean_dec(v_numDiscrEqs_6809_);
lean_dec_ref(v_remaining_6508_);
lean_dec_ref(v_alts_6507_);
lean_dec(v_matcherName_6502_);
lean_dec_ref(v_toMatcherInfo_6501_);
lean_dec_ref(v_onRemaining_6493_);
lean_dec_ref(v_onAlt_6492_);
lean_dec_ref(v_onMotive_6491_);
lean_dec_ref(v_onParams_6490_);
lean_dec_ref(v_matcherApp_6487_);
v_a_6855_ = lean_ctor_get(v___x_6816_, 0);
v_isSharedCheck_6862_ = !lean_is_exclusive(v___x_6816_);
if (v_isSharedCheck_6862_ == 0)
{
v___x_6857_ = v___x_6816_;
v_isShared_6858_ = v_isSharedCheck_6862_;
goto v_resetjp_6856_;
}
else
{
lean_inc(v_a_6855_);
lean_dec(v___x_6816_);
v___x_6857_ = lean_box(0);
v_isShared_6858_ = v_isSharedCheck_6862_;
goto v_resetjp_6856_;
}
v_resetjp_6856_:
{
lean_object* v___x_6860_; 
if (v_isShared_6858_ == 0)
{
v___x_6860_ = v___x_6857_;
goto v_reusejp_6859_;
}
else
{
lean_object* v_reuseFailAlloc_6861_; 
v_reuseFailAlloc_6861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6861_, 0, v_a_6855_);
v___x_6860_ = v_reuseFailAlloc_6861_;
goto v_reusejp_6859_;
}
v_reusejp_6859_:
{
return v___x_6860_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed(lean_object* v_matcherApp_6882_, lean_object* v_useSplitter_6883_, lean_object* v_addEqualities_6884_, lean_object* v_onParams_6885_, lean_object* v_onMotive_6886_, lean_object* v_onAlt_6887_, lean_object* v_onRemaining_6888_, lean_object* v___y_6889_, lean_object* v___y_6890_, lean_object* v___y_6891_, lean_object* v___y_6892_, lean_object* v___y_6893_){
_start:
{
uint8_t v_useSplitter_boxed_6894_; uint8_t v_addEqualities_boxed_6895_; lean_object* v_res_6896_; 
v_useSplitter_boxed_6894_ = lean_unbox(v_useSplitter_6883_);
v_addEqualities_boxed_6895_ = lean_unbox(v_addEqualities_6884_);
v_res_6896_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6882_, v_useSplitter_boxed_6894_, v_addEqualities_boxed_6895_, v_onParams_6885_, v_onMotive_6886_, v_onAlt_6887_, v_onRemaining_6888_, v___y_6889_, v___y_6890_, v___y_6891_, v___y_6892_);
lean_dec(v___y_6892_);
lean_dec_ref(v___y_6891_);
lean_dec(v___y_6890_);
lean_dec_ref(v___y_6889_);
return v_res_6896_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___closed__0(void){
_start:
{
lean_object* v___f_6897_; 
v___f_6897_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__0___boxed), 6, 0);
return v___f_6897_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___closed__1(void){
_start:
{
lean_object* v___f_6898_; 
v___f_6898_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__1___boxed), 6, 0);
return v___f_6898_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_inferMatchType___closed__2(void){
_start:
{
uint8_t v___x_6899_; lean_object* v___x_6900_; lean_object* v___f_6901_; 
v___x_6899_ = 1;
v___x_6900_ = lean_box(v___x_6899_);
v___f_6901_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__2___boxed), 10, 1);
lean_closure_set(v___f_6901_, 0, v___x_6900_);
return v___f_6901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType(lean_object* v_matcherApp_6902_, lean_object* v_a_6903_, lean_object* v_a_6904_, lean_object* v_a_6905_, lean_object* v_a_6906_){
_start:
{
lean_object* v_toMatcherInfo_6908_; lean_object* v_matcherName_6909_; lean_object* v_matcherLevels_6910_; lean_object* v_params_6911_; lean_object* v_alts_6912_; lean_object* v_remaining_6913_; lean_object* v___f_6914_; lean_object* v___f_6915_; lean_object* v_nExtra_6916_; uint8_t v___x_6917_; lean_object* v___f_6918_; uint8_t v___x_6919_; lean_object* v___x_6920_; lean_object* v___x_6921_; lean_object* v___f_6922_; lean_object* v___x_6923_; 
v_toMatcherInfo_6908_ = lean_ctor_get(v_matcherApp_6902_, 0);
v_matcherName_6909_ = lean_ctor_get(v_matcherApp_6902_, 1);
v_matcherLevels_6910_ = lean_ctor_get(v_matcherApp_6902_, 2);
v_params_6911_ = lean_ctor_get(v_matcherApp_6902_, 3);
v_alts_6912_ = lean_ctor_get(v_matcherApp_6902_, 6);
v_remaining_6913_ = lean_ctor_get(v_matcherApp_6902_, 7);
v___f_6914_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___closed__0, &l_Lean_Meta_MatcherApp_inferMatchType___closed__0_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___closed__0);
v___f_6915_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___closed__1, &l_Lean_Meta_MatcherApp_inferMatchType___closed__1_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___closed__1);
v_nExtra_6916_ = lean_array_get_size(v_remaining_6913_);
v___x_6917_ = 1;
v___f_6918_ = lean_obj_once(&l_Lean_Meta_MatcherApp_inferMatchType___closed__2, &l_Lean_Meta_MatcherApp_inferMatchType___closed__2_once, _init_l_Lean_Meta_MatcherApp_inferMatchType___closed__2);
v___x_6919_ = 0;
v___x_6920_ = lean_box(v___x_6919_);
v___x_6921_ = lean_box(v___x_6917_);
lean_inc_ref(v_matcherLevels_6910_);
lean_inc_ref(v_params_6911_);
lean_inc(v_matcherName_6909_);
lean_inc_ref(v_toMatcherInfo_6908_);
lean_inc_ref(v_alts_6912_);
v___f_6922_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_inferMatchType___lam__3___boxed), 15, 8);
lean_closure_set(v___f_6922_, 0, v_nExtra_6916_);
lean_closure_set(v___f_6922_, 1, v___x_6920_);
lean_closure_set(v___f_6922_, 2, v___x_6921_);
lean_closure_set(v___f_6922_, 3, v_alts_6912_);
lean_closure_set(v___f_6922_, 4, v_toMatcherInfo_6908_);
lean_closure_set(v___f_6922_, 5, v_matcherName_6909_);
lean_closure_set(v___f_6922_, 6, v_params_6911_);
lean_closure_set(v___f_6922_, 7, v_matcherLevels_6910_);
v___x_6923_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4(v_matcherApp_6902_, v___x_6917_, v___x_6919_, v___f_6914_, v___f_6922_, v___f_6918_, v___f_6915_, v_a_6903_, v_a_6904_, v_a_6905_, v_a_6906_);
return v___x_6923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_inferMatchType___boxed(lean_object* v_matcherApp_6924_, lean_object* v_a_6925_, lean_object* v_a_6926_, lean_object* v_a_6927_, lean_object* v_a_6928_, lean_object* v_a_6929_){
_start:
{
lean_object* v_res_6930_; 
v_res_6930_ = l_Lean_Meta_MatcherApp_inferMatchType(v_matcherApp_6924_, v_a_6925_, v_a_6926_, v_a_6927_, v_a_6928_);
lean_dec(v_a_6928_);
lean_dec_ref(v_a_6927_);
lean_dec(v_a_6926_);
lean_dec_ref(v_a_6925_);
return v_res_6930_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(lean_object* v_a_6931_, lean_object* v_termAlt_6932_, lean_object* v_inst_6933_, lean_object* v_R_6934_, lean_object* v_a_6935_, lean_object* v_b_6936_, lean_object* v_c_6937_, lean_object* v___y_6938_, lean_object* v___y_6939_, lean_object* v___y_6940_, lean_object* v___y_6941_){
_start:
{
lean_object* v___x_6943_; 
v___x_6943_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___redArg(v_a_6931_, v_termAlt_6932_, v_a_6935_, v_b_6936_, v___y_6938_, v___y_6939_, v___y_6940_, v___y_6941_);
return v___x_6943_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2___boxed(lean_object* v_a_6944_, lean_object* v_termAlt_6945_, lean_object* v_inst_6946_, lean_object* v_R_6947_, lean_object* v_a_6948_, lean_object* v_b_6949_, lean_object* v_c_6950_, lean_object* v___y_6951_, lean_object* v___y_6952_, lean_object* v___y_6953_, lean_object* v___y_6954_, lean_object* v___y_6955_){
_start:
{
lean_object* v_res_6956_; 
v_res_6956_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_inferMatchType_spec__2(v_a_6944_, v_termAlt_6945_, v_inst_6946_, v_R_6947_, v_a_6948_, v_b_6949_, v_c_6950_, v___y_6951_, v___y_6952_, v___y_6953_, v___y_6954_);
lean_dec(v___y_6954_);
lean_dec_ref(v___y_6953_);
lean_dec(v___y_6952_);
lean_dec_ref(v___y_6951_);
return v_res_6956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(lean_object* v_00_u03b1_6957_, lean_object* v_fvars_6958_, lean_object* v_names_6959_, lean_object* v_k_6960_, lean_object* v___y_6961_, lean_object* v___y_6962_, lean_object* v___y_6963_, lean_object* v___y_6964_){
_start:
{
lean_object* v___x_6966_; 
v___x_6966_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___redArg(v_fvars_6958_, v_names_6959_, v_k_6960_, v___y_6961_, v___y_6962_, v___y_6963_, v___y_6964_);
return v___x_6966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9___boxed(lean_object* v_00_u03b1_6967_, lean_object* v_fvars_6968_, lean_object* v_names_6969_, lean_object* v_k_6970_, lean_object* v___y_6971_, lean_object* v___y_6972_, lean_object* v___y_6973_, lean_object* v___y_6974_, lean_object* v___y_6975_){
_start:
{
lean_object* v_res_6976_; 
v_res_6976_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__9(v_00_u03b1_6967_, v_fvars_6968_, v_names_6969_, v_k_6970_, v___y_6971_, v___y_6972_, v___y_6973_, v___y_6974_);
lean_dec(v___y_6974_);
lean_dec_ref(v___y_6973_);
lean_dec(v___y_6972_);
lean_dec_ref(v___y_6971_);
lean_dec_ref(v_names_6969_);
lean_dec_ref(v_fvars_6968_);
return v_res_6976_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(lean_object* v_00_u03b1_6977_, lean_object* v_origAltType_6978_, lean_object* v_altInfo_6979_, lean_object* v_k_6980_, lean_object* v___y_6981_, lean_object* v___y_6982_, lean_object* v___y_6983_, lean_object* v___y_6984_){
_start:
{
lean_object* v___x_6986_; 
v___x_6986_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___redArg(v_origAltType_6978_, v_altInfo_6979_, v_k_6980_, v___y_6981_, v___y_6982_, v___y_6983_, v___y_6984_);
return v___x_6986_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13___boxed(lean_object* v_00_u03b1_6987_, lean_object* v_origAltType_6988_, lean_object* v_altInfo_6989_, lean_object* v_k_6990_, lean_object* v___y_6991_, lean_object* v___y_6992_, lean_object* v___y_6993_, lean_object* v___y_6994_, lean_object* v___y_6995_){
_start:
{
lean_object* v_res_6996_; 
v_res_6996_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__13(v_00_u03b1_6987_, v_origAltType_6988_, v_altInfo_6989_, v_k_6990_, v___y_6991_, v___y_6992_, v___y_6993_, v___y_6994_);
lean_dec(v___y_6994_);
lean_dec_ref(v___y_6993_);
lean_dec(v___y_6992_);
lean_dec_ref(v___y_6991_);
return v_res_6996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(lean_object* v_declName_6997_, lean_object* v___y_6998_, lean_object* v___y_6999_, lean_object* v___y_7000_, lean_object* v___y_7001_){
_start:
{
lean_object* v___x_7003_; 
v___x_7003_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___redArg(v_declName_6997_, v___y_7001_);
return v___x_7003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15___boxed(lean_object* v_declName_7004_, lean_object* v___y_7005_, lean_object* v___y_7006_, lean_object* v___y_7007_, lean_object* v___y_7008_, lean_object* v___y_7009_){
_start:
{
lean_object* v_res_7010_; 
v_res_7010_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__15(v_declName_7004_, v___y_7005_, v___y_7006_, v___y_7007_, v___y_7008_);
lean_dec(v___y_7008_);
lean_dec_ref(v___y_7007_);
lean_dec(v___y_7006_);
lean_dec_ref(v___y_7005_);
return v_res_7010_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(size_t v_sz_7011_, size_t v_i_7012_, lean_object* v_bs_7013_, lean_object* v___y_7014_, lean_object* v___y_7015_, lean_object* v___y_7016_, lean_object* v___y_7017_){
_start:
{
lean_object* v___x_7019_; 
v___x_7019_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___redArg(v_sz_7011_, v_i_7012_, v_bs_7013_, v___y_7014_, v___y_7016_, v___y_7017_);
return v___x_7019_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5___boxed(lean_object* v_sz_7020_, lean_object* v_i_7021_, lean_object* v_bs_7022_, lean_object* v___y_7023_, lean_object* v___y_7024_, lean_object* v___y_7025_, lean_object* v___y_7026_, lean_object* v___y_7027_){
_start:
{
size_t v_sz_boxed_7028_; size_t v_i_boxed_7029_; lean_object* v_res_7030_; 
v_sz_boxed_7028_ = lean_unbox_usize(v_sz_7020_);
lean_dec(v_sz_7020_);
v_i_boxed_7029_ = lean_unbox_usize(v_i_7021_);
lean_dec(v_i_7021_);
v_res_7030_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__5(v_sz_boxed_7028_, v_i_boxed_7029_, v_bs_7022_, v___y_7023_, v___y_7024_, v___y_7025_, v___y_7026_);
lean_dec(v___y_7026_);
lean_dec_ref(v___y_7025_);
lean_dec(v___y_7024_);
lean_dec_ref(v___y_7023_);
return v_res_7030_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(lean_object* v_upperBound_7031_, lean_object* v_onAlt_7032_, lean_object* v_extraEqualities_7033_, lean_object* v_inst_7034_, lean_object* v_R_7035_, lean_object* v_a_7036_, lean_object* v_b_7037_, lean_object* v_c_7038_, lean_object* v___y_7039_, lean_object* v___y_7040_, lean_object* v___y_7041_, lean_object* v___y_7042_){
_start:
{
lean_object* v___x_7044_; 
v___x_7044_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___redArg(v_upperBound_7031_, v_onAlt_7032_, v_extraEqualities_7033_, v_a_7036_, v_b_7037_, v___y_7039_, v___y_7040_, v___y_7041_, v___y_7042_);
return v___x_7044_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10___boxed(lean_object* v_upperBound_7045_, lean_object* v_onAlt_7046_, lean_object* v_extraEqualities_7047_, lean_object* v_inst_7048_, lean_object* v_R_7049_, lean_object* v_a_7050_, lean_object* v_b_7051_, lean_object* v_c_7052_, lean_object* v___y_7053_, lean_object* v___y_7054_, lean_object* v___y_7055_, lean_object* v___y_7056_, lean_object* v___y_7057_){
_start:
{
lean_object* v_res_7058_; 
v_res_7058_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__10(v_upperBound_7045_, v_onAlt_7046_, v_extraEqualities_7047_, v_inst_7048_, v_R_7049_, v_a_7050_, v_b_7051_, v_c_7052_, v___y_7053_, v___y_7054_, v___y_7055_, v___y_7056_);
lean_dec(v___y_7056_);
lean_dec_ref(v___y_7055_);
lean_dec(v___y_7054_);
lean_dec_ref(v___y_7053_);
lean_dec(v_upperBound_7045_);
return v_res_7058_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(lean_object* v_upperBound_7059_, lean_object* v_onAlt_7060_, uint8_t v_useSplitter_7061_, lean_object* v_extraEqualities_7062_, lean_object* v_numDiscrEqs_7063_, lean_object* v_inst_7064_, lean_object* v_R_7065_, lean_object* v_a_7066_, lean_object* v_b_7067_, lean_object* v_c_7068_, lean_object* v___y_7069_, lean_object* v___y_7070_, lean_object* v___y_7071_, lean_object* v___y_7072_){
_start:
{
lean_object* v___x_7074_; 
v___x_7074_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___redArg(v_upperBound_7059_, v_onAlt_7060_, v_useSplitter_7061_, v_extraEqualities_7062_, v_numDiscrEqs_7063_, v_a_7066_, v_b_7067_, v___y_7069_, v___y_7070_, v___y_7071_, v___y_7072_);
return v___x_7074_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14___boxed(lean_object* v_upperBound_7075_, lean_object* v_onAlt_7076_, lean_object* v_useSplitter_7077_, lean_object* v_extraEqualities_7078_, lean_object* v_numDiscrEqs_7079_, lean_object* v_inst_7080_, lean_object* v_R_7081_, lean_object* v_a_7082_, lean_object* v_b_7083_, lean_object* v_c_7084_, lean_object* v___y_7085_, lean_object* v___y_7086_, lean_object* v___y_7087_, lean_object* v___y_7088_, lean_object* v___y_7089_){
_start:
{
uint8_t v_useSplitter_boxed_7090_; lean_object* v_res_7091_; 
v_useSplitter_boxed_7090_ = lean_unbox(v_useSplitter_7077_);
v_res_7091_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4_spec__14(v_upperBound_7075_, v_onAlt_7076_, v_useSplitter_boxed_7090_, v_extraEqualities_7078_, v_numDiscrEqs_7079_, v_inst_7080_, v_R_7081_, v_a_7082_, v_b_7083_, v_c_7084_, v___y_7085_, v___y_7086_, v___y_7087_, v___y_7088_);
lean_dec(v___y_7088_);
lean_dec_ref(v___y_7087_);
lean_dec(v___y_7086_);
lean_dec_ref(v___y_7085_);
lean_dec(v_upperBound_7075_);
return v_res_7091_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1 = _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1();
lean_mark_persistent(l_Lean_Meta_MatcherApp_transform___at___00Lean_Meta_MatcherApp_inferMatchType_spec__4___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_MatcherApp_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Split(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatcherApp_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_MatcherApp_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatcherApp_Transform(builtin);
}
#ifdef __cplusplus
}
#endif
